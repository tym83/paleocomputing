#include "paleo.h"
#include <math.h>
typedef rstr *P417;
typedef struct R419 R419;
typedef struct R419 *P418;
struct R419 {  rt_int kind; rt_int line; rt_int ival; P417 s;  };
typedef struct A421 A421;
struct A421 { rt_int lo, hi, lo2, hi2; P418 *p; };
typedef A421 *P420;
typedef struct R423 R423;
typedef struct R423 *P422;
struct R423 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P417 name; P417 tag; P422 a; P422 b; P422 c; P422 d; P422 e; P422 next;  };
typedef struct R425 R425;
typedef struct R425 *P424;
struct R425 {  P417 lo; P417 hi; P417 lo2; P417 hi2; P417 slen; rt_int mlo; rt_int mhi; int hasm; P422 args;  };
typedef struct R427 R427;
typedef struct R427 *P426;
typedef struct R429 R429;
typedef struct R429 *P428;
struct R429 {  P417 name; P426 t; P424 c; P422 st; P428 next;  };
struct R427 {  rt_int kind; P417 name; P422 lits; P426 elem; P426 idx; P426 idx2; P424 elemcons; P422 elemst; P426 under; P422 tparams; P422 ocap; P428 fields; P426 target; P422 decl; P417 cname; int forward; int defined; int helpers; P426 next;  };
typedef struct R431 R431;
typedef struct R431 *P430;
struct R431 {  P417 name; rt_int mode; P426 t; P424 c; P417 cfield; P430 next;  };
typedef struct R433 R433;
typedef struct R433 *P432;
struct R433 {  rt_int kind; P417 name; P426 t; P424 c; P417 access; P417 cname; int ro_flag; rt_int mvalue; int hasmv; P422 st; P422 decl; P430 params; P426 result; rt_int depth; rt_int level; int byref; P432 members; P432 mnext; P422 binds; P432 insts; P432 chain; P432 stack;  };
typedef struct R435 R435;
typedef struct R435 *P434;
struct R435 {  P417 s; P434 next;  };
typedef struct R437 R437;
typedef struct R437 *P436;
struct R437 {  P434 head; P434 tail;  };
typedef struct A439 A439;
struct A439 { rt_int lo, hi, lo2, hi2; P432 *p; };
typedef A439 *P438;
typedef struct R441 R441;
typedef struct R441 *P440;
struct R441 {  P417 match; P417 label; rt_int depth; P440 next;  };
typedef struct R443 R443;
typedef struct R443 *P442;
struct R443 {  P422 d; P442 next;  };
typedef struct R445 R445;
typedef struct R445 *P444;
struct R445 {  rt_int depth; P422 imps; int all_imp; P444 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P417 result_;
 P417 t_489;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_492;
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
 rstr letters_493;
};
struct f_lower_s_15fr { int dummy;
 rstr *s_14;
 rstr result_;
 rstr letters_494;
 rstr r_495;
 rt_int i_496;
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
 P436 result_;
 P436 b_500;
};
struct f_put_25fr { int dummy;
 P436 b_23;
 rstr *s_24;
 P434 l_502;
};
struct f_emit_27fr { int dummy;
 rstr *s_26;
};
struct f_print_buffer_29fr { int dummy;
 P436 b_28;
 P434 l_504;
};
struct f_splice_32fr { int dummy;
 P436 a_30;
 P436 b_31;
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
 P418 t_506;
};
struct f_lex_line_42fr { int dummy;
 rstr *line_41;
 rt_int i_508;
 rt_int j_509;
 rt_int n_510;
 int c_511;
 rstr w_512;
 rt_int k_513;
 rstr w_517;
 rt_int k_518;
 rstr two_522;
};
struct f_read_source_43fr { int dummy;
 rstr line_523;
};
struct f_nn_46fr { int dummy;
 rt_int kind_44;
 rt_int line_45;
 P422 result_;
 P422 x_524;
};
struct f_append_50fr { int dummy;
 P422 *head_47;
 P422 *tail_48;
 P422 x_49;
};
struct f_list_len_52fr { int dummy;
 P422 l_51;
 rt_int result_;
 rt_int n_526;
 P422 p_527;
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
 P417 result_;
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
 P417 result_;
};
struct f_name_node_75fr { int dummy;
 P422 result_;
 P422 x_528;
};
struct f_id_list_76fr { int dummy;
 P422 result_;
 P422 head_529;
 P422 tail_530;
};
struct f_p_subtype_77fr { int dummy;
 P422 result_;
 rt_int line_531;
 P422 x_532;
 rstr w_533;
 P422 head_534;
 P422 tail_535;
 P422 head_536;
 P422 tail_537;
 int more_538;
 P422 names_539;
 P422 st_540;
 P422 cmp_541;
 P422 head_542;
 P422 tail_543;
 int more_544;
 P422 lit_545;
};
struct f_actual_params_78fr { int dummy;
 P422 result_;
 P422 head_546;
 P422 tail_547;
};
struct f_is_type_word_80fr { int dummy;
 rstr *w_79;
 int result_;
};
struct f_actual_tt_81fr { int dummy;
 P422 result_;
 P422 head_548;
 P422 tail_549;
 int more_550;
};
struct f_binop_86fr { int dummy;
 P417 op_82;
 P422 l_83;
 P422 r_84;
 rt_int line_85;
 P422 result_;
 P422 x_551;
};
struct f_expr_87fr { int dummy;
 P422 result_;
 P422 l_552;
 P417 op_553;
 rt_int line_554;
};
struct f_expr_and_88fr { int dummy;
 P422 result_;
 P422 l_555;
 rt_int line_556;
};
struct f_expr_not_89fr { int dummy;
 P422 result_;
 P422 x_557;
};
struct f_is_rel_91fr { int dummy;
 rstr *s_90;
 int result_;
};
struct f_expr_rel_92fr { int dummy;
 P422 result_;
 P422 l_558;
 P417 op_559;
 rt_int line_560;
};
struct f_expr_add_93fr { int dummy;
 P422 result_;
 P422 l_561;
 P417 op_562;
 rt_int line_563;
};
struct f_expr_mul_94fr { int dummy;
 P422 result_;
 P422 l_564;
 P417 op_565;
 rt_int line_566;
};
struct f_expr_pow_95fr { int dummy;
 P422 result_;
 P422 l_567;
 rt_int line_568;
};
struct f_expr_prefix_96fr { int dummy;
 P422 result_;
 P422 x_569;
};
struct f_postfix_97fr { int dummy;
 P422 result_;
 P422 p_570;
 rt_int line_571;
 P422 x_572;
 P422 head_573;
 P422 tail_574;
 int more_575;
 P422 lo_576;
 P422 r_577;
 P422 x_578;
 P422 x_579;
 P422 x_580;
};
struct f_primary_98fr { int dummy;
 P422 result_;
 rt_int line_581;
 P422 x_582;
 rt_int k_583;
 rstr w_584;
 P422 head_585;
 P422 tail_586;
 int more_587;
};
struct f_constructor_item_99fr { int dummy;
 P422 result_;
 rt_int line_588;
 P422 it_589;
 P422 first_590;
 P422 keys_591;
 P422 ktail_592;
 P422 lab_593;
 rt_int save_594;
 P422 more_595;
 P422 tail2_596;
 int ok_597;
 int go_598;
 P422 l2_599;
};
struct f_at_body_end_100fr { int dummy;
 int result_;
};
struct f_body_101fr { int dummy;
 P422 result_;
 P422 head_600;
 P422 tail_601;
};
struct f_body_element_102fr { int dummy;
 P422 result_;
 P422 x_602;
};
struct f_declaration_103fr { int dummy;
 P422 result_;
 rt_int line_603;
 P422 head_604;
 P422 tail_605;
 P422 names_606;
 P422 x_607;
};
struct f_object_decl_104fr { int dummy;
 P422 result_;
 rt_int line_608;
 int is_var_609;
 P422 names_610;
 P422 st_611;
 P422 init_612;
 P422 head_613;
 P422 tail_614;
 P422 x_615;
};
struct f_abbrev_decl_105fr { int dummy;
 P422 result_;
 P422 x_616;
};
struct f_type_decl_106fr { int dummy;
 P422 result_;
 rt_int line_617;
 P417 name_618;
 P422 params_619;
 P422 x_620;
};
struct f_mode_of_108fr { int dummy;
 rstr *w_107;
 rt_int result_;
};
struct f_formal_params_109fr { int dummy;
 P422 result_;
 P422 head_621;
 P422 tail_622;
 int more_623;
 rt_int mode_624;
 P422 names_625;
 P422 ntail_626;
 P422 st_627;
 P422 p_628;
};
struct f_imports_list_111fr { int dummy;
 P422 owner_110;
 int result_;
 P422 head_629;
 P422 tail_630;
 int more_631;
 int ro_632;
 P422 x_633;
};
struct f_is_definable_113fr { int dummy;
 rstr *w_112;
 int result_;
};
struct f_definable_name_114fr { int dummy;
 P417 result_;
};
struct f_subprogram_decl_115fr { int dummy;
 P422 result_;
 rt_int line_634;
 P422 x_635;
 int is_abn_636;
 int is_func_637;
 int dummy_638;
};
struct f_capsule_decl_116fr { int dummy;
 P422 result_;
 P422 x_639;
 int dummy_640;
 P422 head_641;
 P422 tail_642;
 int more_643;
 P422 n_644;
};
struct f_formal_tt_117fr { int dummy;
 P422 result_;
 P422 head_645;
 P422 tail_646;
 int more_647;
};
struct f_generic_decl_118fr { int dummy;
 P422 result_;
 P422 x_648;
 P422 head_649;
 P422 tail_650;
 int more_651;
 P422 names_652;
 rt_int kind_653;
 P422 st_654;
 P422 p_655;
 P417 nm_656;
 P422 st_657;
};
struct f_task_decl_119fr { int dummy;
 P422 result_;
 P422 x_658;
 int dummy_659;
};
struct f_expose_decl_120fr { int dummy;
 P422 result_;
 P422 x_660;
 P422 head_661;
 P422 tail_662;
 int more_663;
 P422 n_664;
};
struct f_is_compound_kw_122fr { int dummy;
 rstr *w_121;
 int result_;
};
struct f_statement_123fr { int dummy;
 P422 result_;
 P422 labels_665;
 P422 ltail_666;
 P417 match_667;
 P422 s_668;
};
struct f_unlabeled_statement_124fr { int dummy;
 P422 result_;
 rt_int line_669;
 P422 x_670;
 P422 head_671;
 P422 tail_672;
 P422 invs_673;
 P422 itail_674;
 int more_675;
 P422 target_676;
};
struct f_arm_128fr { int dummy;
 P422 cond_125;
 P422 b_126;
 rt_int line_127;
 P422 result_;
 P422 x_677;
};
struct f_if_stmt_129fr { int dummy;
 P422 result_;
 P422 x_678;
 P422 head_679;
 P422 tail_680;
 P422 cond_681;
 int go_682;
};
struct f_case_stmt_130fr { int dummy;
 P422 result_;
 P422 x_683;
 P422 head_684;
 P422 tail_685;
 P422 labs_686;
 P422 ltail_687;
 int more_688;
 P422 l_689;
};
struct f_repeat_stmt_131fr { int dummy;
 P422 result_;
 P422 x_690;
};
struct f_guard_stmt_132fr { int dummy;
 P422 result_;
 P422 x_691;
 P422 head_692;
 P422 tail_693;
 P422 h_694;
};
struct f_program_133fr { int dummy;
 P422 result_;
 P422 head_695;
 P422 tail_696;
};
struct f_hash_135fr { int dummy;
 rstr *s_134;
 rt_int result_;
 rt_int h_697;
 rt_int i_698;
};
struct f_lookup_137fr { int dummy;
 rstr *name_136;
 P432 result_;
 P432 y_702;
};
struct f_lookup_decl_139fr { int dummy;
 P422 d_138;
 P432 result_;
 P432 y_703;
};
struct f_define_142fr { int dummy;
 P432 y_140;
 rt_int line_141;
 rt_int h_704;
 P432 z_705;
};
struct f_overloadable_144fr { int dummy;
 P432 y_143;
 int result_;
};
struct f_same_signature_147fr { int dummy;
 P430 a_145;
 P430 b_146;
 int result_;
 P430 x_706;
 P430 y_707;
};
struct f_open_scope_148fr { int dummy;
};
struct f_close_scope_149fr { int dummy;
};
struct f_new_sym_152fr { int dummy;
 rt_int kind_150;
 P417 name_151;
 P432 result_;
 P432 y_708;
};
struct f_new_typ_154fr { int dummy;
 rt_int kind_153;
 P426 result_;
 P426 t_710;
};
struct f_new_cons_155fr { int dummy;
 P424 result_;
 P424 c_712;
};
struct f_same_lits_158fr { int dummy;
 P422 a_156;
 P422 b_157;
 int result_;
 P422 x_714;
 P422 y_715;
};
struct f_same_161fr { int dummy;
 P426 a_159;
 P426 b_160;
 int result_;
 P428 f_716;
 P428 g_717;
};
struct f_base_of_163fr { int dummy;
 P426 t_162;
 P426 result_;
};
struct f_base_cons_166fr { int dummy;
 P426 t_164;
 P424 c_165;
 P424 result_;
};
struct f_kind_name_168fr { int dummy;
 P426 t_167;
 rstr result_;
};
struct f_check_type_172fr { int dummy;
 P426 got_169;
 P426 want_170;
 rt_int line_171;
};
struct f_ctype_174fr { int dummy;
 P426 t_173;
 rstr result_;
};
struct f_field_decls_176fr { int dummy;
 P426 t_175;
 rstr result_;
 P428 f_720;
 P417 s_721;
};
struct f_declare_ctype_178fr { int dummy;
 P426 t_177;
 P426 u_722;
 P426 target_723;
 P422 p_724;
 P417 fs_725;
};
struct f_init_ascii_179fr { int dummy;
 rstr names_726;
 P422 head_727;
 P422 tail_728;
 rt_int start_729;
 rt_int i_730;
 P422 lit_734;
};
struct f_lit_index_182fr { int dummy;
 P422 lits_180;
 rstr *name_181;
 rt_int result_;
 rt_int i_735;
 P422 l_736;
};
struct f_resolve_subtype_185fr { int dummy;
 P422 st_183;
 P424 *c_184;
 P426 result_;
 P426 t_737;
 int ok_738;
 P426 dummy_739;
 P424 ic_741;
 P424 ic2_742;
 P424 ec_743;
 P426 it_744;
 P426 et_745;
 P424 ec_746;
 P422 comp_747;
 P428 tail_748;
 P424 cc_749;
 P428 f_750;
 P424 ec_752;
 P432 y_753;
};
struct f_opened_187fr { int dummy;
 P426 t_186;
 int result_;
 P442 c_754;
};
struct f_replace_all_191fr { int dummy;
 rstr *s_188;
 rstr *pat_189;
 rstr *r_190;
 rstr result_;
 rt_int i_755;
};
struct f_subst_193fr { int dummy;
 rstr *s_192;
 rstr result_;
 P434 l_756;
 P417 r_757;
};
struct f_new_type_197fr { int dummy;
 P432 y_194;
 P422 st_195;
 P424 *c_196;
 P426 result_;
 P422 d_758;
 P422 p_759;
 P424 uc_760;
 P432 z_761;
};
struct f_init_storage_201fr { int dummy;
 rstr *lval_198;
 P426 t_199;
 P424 c_200;
 P422 p_762;
 P422 a_763;
 P424 uc_764;
 P426 ut_765;
 P426 at_766;
 rstr v_767;
 P434 saved_768;
 P434 l1_769;
 P434 l2_770;
 rstr i_773;
 P428 f_774;
};
struct f_manifest_204fr { int dummy;
 P422 e_202;
 int *ok_203;
 rt_int result_;
 rt_int a_775;
 rt_int b_776;
 int ok2_777;
 P432 y_778;
};
struct f_mcopy_206fr { int dummy;
 P426 t_205;
 rstr result_;
 rstr ct_779;
 rstr name_780;
 P434 l_781;
};
struct f_composite_208fr { int dummy;
 P426 t_207;
 int result_;
};
struct f_assign_code_213fr { int dummy;
 rstr *lval_209;
 P426 t_210;
 rstr *v_211;
 P424 c_212;
 rstr result_;
};
struct f_copy_code_216fr { int dummy;
 P426 t_214;
 rstr *v_215;
 rstr result_;
};
struct f_eq_code_220fr { int dummy;
 P426 t_217;
 rstr *a_218;
 rstr *b_219;
 rstr result_;
};
struct f_elem_assign_224fr { int dummy;
 rstr *lval_221;
 P426 t_222;
 rstr *v_223;
 rstr result_;
};
struct f_seen_name_227fr { int dummy;
 P434 l_225;
 rstr *s_226;
 int result_;
 P434 p_783;
};
struct f_emit_helpers_228fr { int dummy;
 P426 order_784;
 P426 t_785;
 P434 done_786;
 P434 l_787;
 rstr c_788;
};
struct f_helper_bodies_230fr { int dummy;
 P426 t_229;
 rstr c_790;
 P436 b_791;
 P426 e_792;
 P422 p_793;
 P417 pc_794;
 P428 f_795;
 P417 conds_796;
 rstr fn_797;
 rstr fn_798;
};
struct f_declare_body_232fr { int dummy;
 P422 elems_231;
 P422 e_799;
 P432 y_800;
 P432 y_801;
 P432 y_802;
 P426 t_803;
 P432 y_804;
 P432 g_805;
};
struct f_manifest_const_234fr { int dummy;
 P422 d_233;
 int ok_806;
 rt_int v_807;
 P432 y_808;
 P424 c_809;
};
struct f_exported_238fr { int dummy;
 P422 d_235;
 rstr *name_236;
 int *ro_237;
 int result_;
 P422 p_810;
};
struct f_copy_sym_240fr { int dummy;
 P432 y_239;
 P432 result_;
 P432 z_811;
};
struct f_gen_capsule_242fr { int dummy;
 P422 d_241;
 P432 y_813;
 P442 cr_814;
 P444 ctx_815;
 P432 m_816;
 P422 p_817;
 int ro_818;
 P432 z_821;
};
struct f_gen_expose_244fr { int dummy;
 P422 d_243;
 P432 y_822;
 P432 m_823;
 P422 p_824;
 int found_825;
 P432 z_826;
};
struct f_finish_ptr_246fr { int dummy;
 P426 t_245;
 P422 d_827;
 P422 p_828;
 P424 c_829;
 rstr dummy_830;
 P432 y_831;
};
struct f_declare_subprogram_248fr { int dummy;
 P422 d_247;
};
struct f_build_subprogram_250fr { int dummy;
 P422 d_249;
 P432 result_;
 P432 y_832;
 P422 p_833;
 P430 tail_834;
 P430 pm_835;
 P424 rc_837;
};
struct f_element_252fr { int dummy;
 P422 e_251;
 rt_int k_838;
 P426 t_839;
 rstr c_840;
};
struct f_storage_255fr { int dummy;
 rstr *name_253;
 P426 t_254;
 rstr result_;
 rstr g_841;
 rstr f_842;
};
struct f_bind_258fr { int dummy;
 P432 y_256;
 rstr *access_257;
};
struct f_var_decl_260fr { int dummy;
 P422 d_259;
 P424 c_843;
 P426 t_844;
 P432 y_845;
 rstr access_846;
 P426 vt_847;
 rstr v_848;
};
struct f_const_decl_262fr { int dummy;
 P422 d_261;
 P424 c_849;
 P426 t_850;
 P426 vt_851;
 P432 y_852;
 int ok_853;
 rstr v_854;
 rstr access_855;
};
struct f_subprogram_264fr { int dummy;
 P422 d_263;
};
struct f_gen_subprogram_267fr { int dummy;
 P422 d_265;
 P432 y_266;
 P436 saved_code_856;
 P436 saved_fields_857;
 int saved_in_858;
 P432 saved_sym_859;
 P440 saved_exits_860;
 rt_int saved_frames_861;
 P417 args_862;
 P430 pm_863;
 P434 saved_handlers_864;
 P434 saved_cleanups_865;
 P444 ctx_866;
 P417 head_867;
 P417 frame_868;
 P417 parent_869;
 rstr ct_871;
 rstr f_872;
 P432 p_873;
};
struct f_body_elements_269fr { int dummy;
 P422 elems_268;
 P422 e_874;
};
struct f_gen_body_271fr { int dummy;
 P422 elems_270;
};
struct f_pop_frames_273fr { int dummy;
 rt_int upto_272;
 rt_int i_875;
 P434 c_876;
};
struct f_push_cleanup_275fr { int dummy;
 rstr *s_274;
 P434 c_877;
};
struct f_pop_cleanup_276fr { int dummy;
};
struct f_gen_statement_278fr { int dummy;
 P422 s_277;
 P417 label_879;
 P440 x_880;
};
struct f_st_assign_280fr { int dummy;
 P422 s_279;
 P417 lv_883;
 P426 t_884;
 P426 vt_885;
 P424 c_886;
 int ro_887;
 rstr lo_888;
 rstr hi_889;
 rstr v_890;
 rstr v_891;
};
struct f_st_call_282fr { int dummy;
 P422 s_281;
 P422 c_892;
 P426 t_893;
 P422 x_894;
};
struct f_st_if_284fr { int dummy;
 P422 s_283;
 P422 a_895;
 int first_896;
 P426 t_897;
 rstr c_898;
};
struct f_st_case_286fr { int dummy;
 P422 s_285;
 P426 st_899;
 P426 vt_900;
 int first_901;
 P422 a_902;
 rstr sel_903;
 rstr tmp_904;
 P422 lab_905;
 P417 conds_906;
 rstr v_907;
 rstr lo_908;
 rstr hi_909;
};
struct f_st_repeat_288fr { int dummy;
 P422 s_287;
 P426 t_910;
 P424 c_911;
 rstr cond_912;
 rstr access_913;
 rstr lov_914;
 rstr hiv_915;
 rstr it_916;
 P432 y_917;
};
struct f_st_exit_290fr { int dummy;
 P422 s_289;
 P440 x_918;
};
struct f_st_return_292fr { int dummy;
 P422 s_291;
 P426 vt_919;
 rstr v_920;
};
struct f_exc_id_295fr { int dummy;
 rstr *name_293;
 rt_int line_294;
 rstr result_;
 P432 y_921;
};
struct f_st_guard_297fr { int dummy;
 P422 s_296;
 P422 h_922;
 int first_923;
 P434 hv_924;
 rstr f_925;
 rstr x_926;
 P422 n_928;
 P417 conds_929;
};
struct f_st_alloc_299fr { int dummy;
 P422 s_298;
 P417 lv_930;
 P426 t_931;
 P426 target_932;
 P426 vt_933;
 P424 c_934;
 P424 tc_935;
 int ro_936;
 P422 d_937;
 P422 p_938;
 P422 a_939;
 rstr tcn_940;
 rstr cell_941;
 rstr v_942;
 rstr pv_943;
 P432 y_944;
 rstr v_945;
};
struct f_act_ref_301fr { int dummy;
 P422 e_300;
 rstr result_;
 P417 lv_946;
 P426 t_947;
 P424 c_948;
 int ro_949;
};
struct f_st_create_303fr { int dummy;
 P422 s_302;
 P432 y_950;
 P430 pm_951;
 P422 a_952;
 P417 lv_953;
 P426 lt_954;
 P426 vt_955;
 P424 lc_956;
 int ro_957;
 rstr nf_958;
 rstr act_959;
 P417 link_960;
 rt_int i_961;
 rstr v_965;
};
struct f_wait_alt_307fr { int dummy;
 P422 inv_304;
 rstr *arr_305;
 rt_int i_306;
 rstr result_;
 P417 lv_966;
 P426 t_967;
 P426 vt_968;
 P424 c_969;
 int ro_970;
 P422 fn_971;
 P422 args_972;
 rstr slot_973;
 P417 dv_974;
 P426 dt_975;
 rstr tmp_976;
 rstr v_977;
 rstr v_978;
};
struct f_st_wait_309fr { int dummy;
 P422 s_308;
 P422 a_979;
 rt_int n_980;
 int first_981;
 P436 inits_982;
 rstr arr_983;
 rstr w_984;
 P422 inv_985;
 P417 conds_986;
 rt_int i_987;
};
struct f_st_region_311fr { int dummy;
 P422 s_310;
 P417 lv_991;
 P426 t_992;
 P424 c_993;
 int ro_994;
 rstr lk_995;
 rstr f_996;
};
struct f_gparam_314fr { int dummy;
 P422 g_312;
 rstr *name_313;
 P422 result_;
 P422 p_997;
};
struct f_bind_sym_316fr { int dummy;
 P422 p_315;
 P432 result_;
 P432 y_998;
};
struct f_same_binds_319fr { int dummy;
 P432 a_317;
 P432 b_318;
 int result_;
 P432 x_999;
 P432 y_1000;
};
struct f_same_binding_322fr { int dummy;
 P432 a_320;
 P432 b_321;
 int result_;
};
struct f_instantiate_327fr { int dummy;
 P432 g_323;
 P422 tt_324;
 P422 args_325;
 rt_int line_326;
 P432 result_;
 P422 gd_1001;
 P422 pat_1002;
 P432 binds_1003;
 P422 f_1004;
 P422 a_1005;
 P422 fp_1006;
 P432 inst_1007;
 P426 at_1008;
 P424 c_1009;
 P444 saved_fctx_1010;
 int saved_in_1011;
 rt_int saved_level_1012;
 P432 saved_sym_1013;
 P436 saved_code_1014;
 P422 p_1015;
 P432 b_1016;
 P422 st_1017;
 int ok_1018;
 int known_1019;
 P432 q_1020;
 P432 b_1021;
 rstr v_1022;
 P432 b_1023;
};
struct f_access_of_329fr { int dummy;
 P432 y_328;
 rstr result_;
 P417 p_1024;
 rt_int i_1025;
};
struct f_import_of_332fr { int dummy;
 P422 l_330;
 rstr *name_331;
 P422 result_;
 P422 p_1029;
};
struct f_check_import_335fr { int dummy;
 P432 y_333;
 rt_int line_334;
 int result_;
 P444 c_1030;
 int ro_1031;
 P422 imp_1032;
};
struct f_c_ident_337fr { int dummy;
 rstr *s_336;
 rstr result_;
};
struct f_deref_340fr { int dummy;
 rstr *base_338;
 P426 t_339;
 rstr result_;
};
struct f_is_lvalue_342fr { int dummy;
 P422 e_341;
 int result_;
 P432 y_1033;
};
struct f_lvalue_348fr { int dummy;
 P422 e_343;
 P417 *code_344;
 P426 *t_345;
 P424 *c_346;
 int *ro_347;
 P417 base_1034;
 P426 bt_1035;
 P424 bc_1036;
 P432 y_1037;
};
struct f_select_on_356fr { int dummy;
 rstr *base_349;
 P426 bt_350;
 P422 e_351;
 int *ro_352;
 P417 *code_353;
 P426 *t_354;
 P424 *c_355;
 P422 p_1038;
 P428 f_1039;
};
struct f_index_on_365fr { int dummy;
 rstr *base_357;
 P426 bt_358;
 P422 e_359;
 int *ro_360;
 int lv_361;
 P417 *code_362;
 P426 *t_363;
 P424 *c_364;
 P422 a_1040;
 P426 it_1041;
 rstr i_1042;
 rstr j_1043;
 rstr lo_1044;
 rstr hi_1045;
 rstr i_1046;
 rstr i_1047;
};
struct f_gexpr_369fr { int dummy;
 P422 e_366;
 P426 want_367;
 P426 *t_368;
 rstr result_;
 rt_int k_1048;
 P417 code_1049;
 P424 c_1050;
 int ro_1051;
 P426 bt_1052;
 rt_int i_1053;
 P432 y_1054;
 int ro_1055;
 P422 call_1056;
 P422 fname_1057;
 rstr a_1058;
 rstr a_1059;
 rstr a_1060;
 P422 nm_1061;
 P432 y_1062;
 rstr base_1063;
 rstr base_1064;
};
struct f_copy_node_371fr { int dummy;
 P422 e_370;
 P422 result_;
 P422 x_1065;
};
struct f_wrap_apply_373fr { int dummy;
 P422 e_372;
 P422 result_;
 P422 x_1067;
};
struct f_c_string_375fr { int dummy;
 rstr *s_374;
 rstr result_;
 rt_int n_1068;
 rt_int i_1069;
 rstr r_1073;
 rt_int j_1074;
 rt_int i_1075;
};
struct f_enum_type_of_378fr { int dummy;
 rstr *lit_376;
 rt_int line_377;
 P426 result_;
 P432 y_1079;
 P424 c_1080;
 P422 st_1081;
};
struct f_attribute_381fr { int dummy;
 P422 e_379;
 P426 *t_380;
 rstr result_;
 P426 bt_1082;
 P424 c_1083;
 P417 base_1084;
 P432 y_1085;
 P422 st_1086;
};
struct f_gbinop_385fr { int dummy;
 P422 e_382;
 P426 want_383;
 P426 *t_384;
 rstr result_;
 P417 op_1087;
 P426 ta_1088;
 P426 tb_1089;
 P426 hint_1090;
 P432 uy_1091;
 P422 l_1092;
 P422 r_1093;
 P422 call_1094;
 P422 fname_1095;
 rstr s_1096;
 rstr a_1097;
 rstr a_1098;
 rstr b_1099;
 rstr a_1100;
 rstr b_1101;
 P426 wa_1102;
 P426 wb_1103;
 rstr a_1104;
 rstr b_1105;
 rstr dummy_1106;
 rstr a_1107;
 rstr b_1108;
 P426 ct_1109;
 rstr a_1110;
 rstr b_1111;
};
struct f_constructor_389fr { int dummy;
 P422 e_386;
 P426 want_387;
 P426 *t_388;
 rstr result_;
 P422 it_1112;
 P428 f_1113;
 P426 vt_1114;
 P417 s_1115;
 rstr v_1116;
 rstr tmp_1117;
 rstr ct_1118;
 rstr et_1119;
 P417 parts_1120;
 rstr lo_1121;
 rstr hi_1122;
 rstr v_1123;
 rt_int i_1124;
 rstr v_1128;
 rstr tmp_1129;
 P417 parts_1130;
 rstr v_1131;
};
struct f_fits_392fr { int dummy;
 P432 y_390;
 P422 args_391;
 int result_;
 P422 a_1132;
 P430 pm_1133;
 P426 t_1134;
 P436 saved_1135;
 int ok_1136;
 P417 lv_1137;
 P424 lc_1138;
 int ro_1139;
 rstr v_1142;
};
struct f_resolve_overload_397fr { int dummy;
 rstr *name_393;
 P422 args_394;
 int is_stmt_395;
 rt_int line_396;
 P432 result_;
 P432 y_1143;
 P432 first_1144;
 rt_int n_1145;
};
struct f_is_builtin_399fr { int dummy;
 rstr *n_398;
 int result_;
};
struct f_user_op_402fr { int dummy;
 rstr *op_400;
 P422 args_401;
 P432 result_;
 P432 y_1146;
};
struct f_gcall_406fr { int dummy;
 P422 e_403;
 int is_stmt_404;
 P426 *t_405;
 rstr result_;
 P422 fn_1147;
 P422 tt_1148;
 P432 y_1149;
 P417 args_1150;
 P422 a_1151;
 P430 pm_1152;
 P426 lt_1153;
 P426 vt_1154;
 P417 lv_1155;
 P424 lc_1156;
 int ro_1157;
 rt_int i_1158;
 rstr v_1162;
 rstr ct_1163;
 rstr v_1164;
};
struct f_builtin_413fr { int dummy;
 rstr *name_407;
 P422 tt_408;
 P422 args_409;
 rt_int line_410;
 int is_stmt_411;
 P426 *t_412;
 rstr result_;
 P426 at_1165;
 rt_int n_1166;
 rstr a_1167;
 rstr a_1168;
 rstr a_1169;
 rstr a_1170;
 rstr a_1171;
 rstr n1_1172;
 rstr m1_1173;
 rstr a_1174;
 rstr a_1175;
 P422 last_1176;
 rstr a_1177;
 rstr a_1178;
 P417 lv_1179;
 P424 lc_1180;
 int ro_1181;
 P422 last_1182;
 P417 lv_1183;
 P417 dv_1184;
 P424 lc_1185;
 int ro_1186;
 P426 mt_1187;
 P426 dt_1188;
 rstr v_1189;
 P417 lv_1190;
 P424 lc_1191;
 int ro_1192;
 P426 mt_1193;
 P417 lv_1194;
 P417 dv_1195;
 P417 bv_1196;
 P424 lc_1197;
 int ro_1198;
 P426 mt_1199;
 P426 dt_1200;
 P426 bt_1201;
 rstr v_1202;
 rstr v_1203;
 rstr v_1204;
 rstr v_1205;
 rstr a_1206;
};
struct f_translate_415fr { int dummy;
 P422 units_414;
 P422 u_1207;
};
struct f_print_program_416fr { int dummy;
};
static void as_R445(R445 *d, R445 s);
static R445 cp_R445(R445 s);
static int eq_R445(R445 a, R445 b);
static void as_R443(R443 *d, R443 s);
static R443 cp_R443(R443 s);
static int eq_R443(R443 a, R443 b);
static void as_R441(R441 *d, R441 s);
static R441 cp_R441(R441 s);
static int eq_R441(R441 a, R441 b);
static void as_A439(A439 *d, A439 s);
static A439 cp_A439(A439 s);
static int eq_A439(A439 a, A439 b);
static void as_R437(R437 *d, R437 s);
static R437 cp_R437(R437 s);
static int eq_R437(R437 a, R437 b);
static void as_R435(R435 *d, R435 s);
static R435 cp_R435(R435 s);
static int eq_R435(R435 a, R435 b);
static void as_R433(R433 *d, R433 s);
static R433 cp_R433(R433 s);
static int eq_R433(R433 a, R433 b);
static void as_R431(R431 *d, R431 s);
static R431 cp_R431(R431 s);
static int eq_R431(R431 a, R431 b);
static void as_R429(R429 *d, R429 s);
static R429 cp_R429(R429 s);
static int eq_R429(R429 a, R429 b);
static void as_R427(R427 *d, R427 s);
static R427 cp_R427(R427 s);
static int eq_R427(R427 a, R427 b);
static void as_R425(R425 *d, R425 s);
static R425 cp_R425(R425 s);
static int eq_R425(R425 a, R425 b);
static void as_R423(R423 *d, R423 s);
static R423 cp_R423(R423 s);
static int eq_R423(R423 a, R423 b);
static void as_A421(A421 *d, A421 s);
static A421 cp_A421(A421 s);
static int eq_A421(A421 a, A421 b);
static void as_R419(R419 *d, R419 s);
static R419 cp_R419(R419 s);
static int eq_R419(R419 a, R419 b);
static P417 f_mk_3(rstr *s_2);
static rstr f_chs_5(int c_4);
static rstr f_itos_7(rt_int n_6);
static int f_is_letter_9(int c_8);
static int f_is_digit_11(int c_10);
static int f_upper_13(int c_12);
static rstr f_lower_s_15(rstr *s_14);
static rstr f_q_16(void);
static rstr f_new_name_18(rstr *base_17);
static void f_fail_21(rt_int line_19, rstr *msg_20);
static P436 f_new_buffer_22(void);
static void f_put_25(P436 b_23, rstr *s_24);
static void f_emit_27(rstr *s_26);
static void f_print_buffer_29(P436 b_28);
static void f_splice_32(P436 a_30, P436 b_31);
static int f_is_reserved_34(rstr *w_33);
static int f_is_word_op_36(rstr *w_35);
static void f_add_token_40(rt_int kind_37, rstr *s_38, rt_int ival_39);
static void f_lex_line_42(rstr *line_41);
static void f_read_source_43(void);
static P422 f_nn_46(rt_int kind_44, rt_int line_45);
static void f_append_50(P422 *head_47, P422 *tail_48, P422 x_49);
static rt_int f_list_len_52(P422 l_51);
static rt_int f_cur_line_53(void);
static int f_at_kw_55(rstr *w_54);
static int f_at_op_57(rstr *w_56);
static int f_at_kind_59(rt_int k_58);
static rt_int f_kind_at_61(rt_int k_60);
static P417 f_text_at_63(rt_int k_62);
static void f_perror_65(rstr *msg_64);
static int f_accept_kw_67(rstr *w_66);
static int f_accept_op_69(rstr *w_68);
static void f_expect_kw_71(rstr *w_70);
static void f_expect_op_73(rstr *w_72);
static P417 f_expect_id_74(void);
static P422 f_name_node_75(void);
static P422 f_id_list_76(void);
static P422 f_p_subtype_77(void);
static P422 f_actual_params_78(void);
static int f_is_type_word_80(rstr *w_79);
static P422 f_actual_tt_81(void);
static P422 f_binop_86(P417 op_82, P422 l_83, P422 r_84, rt_int line_85);
static P422 f_expr_87(void);
static P422 f_expr_and_88(void);
static P422 f_expr_not_89(void);
static int f_is_rel_91(rstr *s_90);
static P422 f_expr_rel_92(void);
static P422 f_expr_add_93(void);
static P422 f_expr_mul_94(void);
static P422 f_expr_pow_95(void);
static P422 f_expr_prefix_96(void);
static P422 f_postfix_97(void);
static P422 f_primary_98(void);
static P422 f_constructor_item_99(void);
static int f_at_body_end_100(void);
static P422 f_body_101(void);
static P422 f_body_element_102(void);
static P422 f_declaration_103(void);
static P422 f_object_decl_104(void);
static P422 f_abbrev_decl_105(void);
static P422 f_type_decl_106(void);
static rt_int f_mode_of_108(rstr *w_107);
static P422 f_formal_params_109(void);
static int f_imports_list_111(P422 owner_110);
static int f_is_definable_113(rstr *w_112);
static P417 f_definable_name_114(void);
static P422 f_subprogram_decl_115(void);
static P422 f_capsule_decl_116(void);
static P422 f_formal_tt_117(void);
static P422 f_generic_decl_118(void);
static P422 f_task_decl_119(void);
static P422 f_expose_decl_120(void);
static int f_is_compound_kw_122(rstr *w_121);
static P422 f_statement_123(void);
static P422 f_unlabeled_statement_124(void);
static P422 f_arm_128(P422 cond_125, P422 b_126, rt_int line_127);
static P422 f_if_stmt_129(void);
static P422 f_case_stmt_130(void);
static P422 f_repeat_stmt_131(void);
static P422 f_guard_stmt_132(void);
static P422 f_program_133(void);
static rt_int f_hash_135(rstr *s_134);
static P432 f_lookup_137(rstr *name_136);
static P432 f_lookup_decl_139(P422 d_138);
static void f_define_142(P432 y_140, rt_int line_141);
static int f_overloadable_144(P432 y_143);
static int f_same_signature_147(P430 a_145, P430 b_146);
static void f_open_scope_148(void);
static void f_close_scope_149(void);
static P432 f_new_sym_152(rt_int kind_150, P417 name_151);
static P426 f_new_typ_154(rt_int kind_153);
static P424 f_new_cons_155(void);
static int f_same_lits_158(P422 a_156, P422 b_157);
static int f_same_161(P426 a_159, P426 b_160);
static P426 f_base_of_163(P426 t_162);
static P424 f_base_cons_166(P426 t_164, P424 c_165);
static rstr f_kind_name_168(P426 t_167);
static void f_check_type_172(P426 got_169, P426 want_170, rt_int line_171);
static rstr f_ctype_174(P426 t_173);
static rstr f_field_decls_176(P426 t_175);
static void f_declare_ctype_178(P426 t_177);
static void f_init_ascii_179(void);
static rt_int f_lit_index_182(P422 lits_180, rstr *name_181);
static P426 f_resolve_subtype_185(P422 st_183, P424 *c_184);
static int f_opened_187(P426 t_186);
static rstr f_replace_all_191(rstr *s_188, rstr *pat_189, rstr *r_190);
static rstr f_subst_193(rstr *s_192);
static P426 f_new_type_197(P432 y_194, P422 st_195, P424 *c_196);
static void f_init_storage_201(rstr *lval_198, P426 t_199, P424 c_200);
static rt_int f_manifest_204(P422 e_202, int *ok_203);
static rstr f_mcopy_206(P426 t_205);
static int f_composite_208(P426 t_207);
static rstr f_assign_code_213(rstr *lval_209, P426 t_210, rstr *v_211, P424 c_212);
static rstr f_copy_code_216(P426 t_214, rstr *v_215);
static rstr f_eq_code_220(P426 t_217, rstr *a_218, rstr *b_219);
static rstr f_elem_assign_224(rstr *lval_221, P426 t_222, rstr *v_223);
static int f_seen_name_227(P434 l_225, rstr *s_226);
static void f_emit_helpers_228(void);
static void f_helper_bodies_230(P426 t_229);
static void f_declare_body_232(P422 elems_231);
static void f_manifest_const_234(P422 d_233);
static int f_exported_238(P422 d_235, rstr *name_236, int *ro_237);
static P432 f_copy_sym_240(P432 y_239);
static void f_gen_capsule_242(P422 d_241);
static void f_gen_expose_244(P422 d_243);
static void f_finish_ptr_246(P426 t_245);
static void f_declare_subprogram_248(P422 d_247);
static P432 f_build_subprogram_250(P422 d_249);
static void f_element_252(P422 e_251);
static rstr f_storage_255(rstr *name_253, P426 t_254);
static void f_bind_258(P432 y_256, rstr *access_257);
static void f_var_decl_260(P422 d_259);
static void f_const_decl_262(P422 d_261);
static void f_subprogram_264(P422 d_263);
static void f_gen_subprogram_267(P422 d_265, P432 y_266);
static void f_body_elements_269(P422 elems_268);
static void f_gen_body_271(P422 elems_270);
static void f_pop_frames_273(rt_int upto_272);
static void f_push_cleanup_275(rstr *s_274);
static void f_pop_cleanup_276(void);
static void f_gen_statement_278(P422 s_277);
static void f_st_assign_280(P422 s_279);
static void f_st_call_282(P422 s_281);
static void f_st_if_284(P422 s_283);
static void f_st_case_286(P422 s_285);
static void f_st_repeat_288(P422 s_287);
static void f_st_exit_290(P422 s_289);
static void f_st_return_292(P422 s_291);
static rstr f_exc_id_295(rstr *name_293, rt_int line_294);
static void f_st_guard_297(P422 s_296);
static void f_st_alloc_299(P422 s_298);
static rstr f_act_ref_301(P422 e_300);
static void f_st_create_303(P422 s_302);
static rstr f_wait_alt_307(P422 inv_304, rstr *arr_305, rt_int i_306);
static void f_st_wait_309(P422 s_308);
static void f_st_region_311(P422 s_310);
static P422 f_gparam_314(P422 g_312, rstr *name_313);
static P432 f_bind_sym_316(P422 p_315);
static int f_same_binds_319(P432 a_317, P432 b_318);
static int f_same_binding_322(P432 a_320, P432 b_321);
static P432 f_instantiate_327(P432 g_323, P422 tt_324, P422 args_325, rt_int line_326);
static rstr f_access_of_329(P432 y_328);
static P422 f_import_of_332(P422 l_330, rstr *name_331);
static int f_check_import_335(P432 y_333, rt_int line_334);
static rstr f_c_ident_337(rstr *s_336);
static rstr f_deref_340(rstr *base_338, P426 t_339);
static int f_is_lvalue_342(P422 e_341);
static void f_lvalue_348(P422 e_343, P417 *code_344, P426 *t_345, P424 *c_346, int *ro_347);
static void f_select_on_356(rstr *base_349, P426 bt_350, P422 e_351, int *ro_352, P417 *code_353, P426 *t_354, P424 *c_355);
static void f_index_on_365(rstr *base_357, P426 bt_358, P422 e_359, int *ro_360, int lv_361, P417 *code_362, P426 *t_363, P424 *c_364);
static rstr f_gexpr_369(P422 e_366, P426 want_367, P426 *t_368);
static P422 f_copy_node_371(P422 e_370);
static P422 f_wrap_apply_373(P422 e_372);
static rstr f_c_string_375(rstr *s_374);
static P426 f_enum_type_of_378(rstr *lit_376, rt_int line_377);
static rstr f_attribute_381(P422 e_379, P426 *t_380);
static rstr f_gbinop_385(P422 e_382, P426 want_383, P426 *t_384);
static rstr f_constructor_389(P422 e_386, P426 want_387, P426 *t_388);
static int f_fits_392(P432 y_390, P422 args_391);
static P432 f_resolve_overload_397(rstr *name_393, P422 args_394, int is_stmt_395, rt_int line_396);
static int f_is_builtin_399(rstr *n_398);
static P432 f_user_op_402(rstr *op_400, P422 args_401);
static rstr f_gcall_406(P422 e_403, int is_stmt_404, P426 *t_405);
static rstr f_builtin_413(rstr *name_407, P422 tt_408, P422 args_409, rt_int line_410, int is_stmt_411, P426 *t_412);
static void f_translate_415(P422 units_414);
static void f_print_program_416(void);
static int ex_compile_error_1;
static P420 g_toks_446;
static rt_int g_ntoks_447;
static rt_int g_tpos_448;
static rt_int g_src_line_449;
static P438 g_table_450;
static rt_int g_depth_451;
static P432 g_scope_stack_452;
static P426 g_all_types_453;
static rt_int g_serial_454;
static P436 g_out_types_455;
static P436 g_out_helpers_456;
static P436 g_out_protos_457;
static P436 g_out_globals_458;
static P436 g_out_funcs_459;
static P436 g_out_init_460;
static P436 g_out_excs_461;
static P436 g_code_462;
static P436 g_fields_buf_463;
static int g_in_func_464;
static rt_int g_cur_level_465;
static P444 g_fctx_466;
static P442 g_caps_467;
static P434 g_psub_468;
static P417 g_st_field_469;
static P436 g_out_frames_470;
static P432 g_func_sym_471;
static P440 g_exits_472;
static rt_int g_frames_473;
static P434 g_handlers_474;
static P434 g_cleanups_475;
static rt_int g_trial_476;
static P434 g_mcopies_477;
static P426 g_ty_int_478;
static P426 g_ty_bool_479;
static P426 g_ty_float_480;
static P426 g_ty_ascii_481;
static P426 g_ty_string_482;
static P426 g_ty_void_483;
static P426 g_ty_file_484;
static P426 g_ty_nil_485;
static P426 g_ty_lock_486;
static P426 g_ty_act_487;
static P424 g_no_cons_488;
static P417 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
F->s_2 = s_2;
F->t_489 = NULL;
{ rstr *cell490 = rt_alloc(sizeof(rstr));
rt_int pv491 = ((*F->s_2)).len;
(*cell490) = rt_str_new(pv491);
rt_str_assign(&(*cell490), (*F->s_2));
F->t_489 = cell490;
}
F->result_ = F->t_489;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_chs_5(int c_4) {
  struct f_chs_5fr *F = rt_alloc(sizeof *F);
F->c_4 = c_4;
F->r_492 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_492, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_492;
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
F->letters_493 = rt_str_copy(rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
if (((97 <= F->c_12) && (F->c_12 <= 122))) {
F->result_ = rt_str_get(F->letters_493, rt_add(rt_sub(((rt_int)(F->c_12) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
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
F->letters_494 = rt_str_copy(rt_str("abcdefghijklmnopqrstuvwxyz", 26));
F->r_495 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_495, (*F->s_14));
{ rt_int lo497 = ((rt_int)1LL), hi498 = ((*F->s_14)).len;
for (rt_int it499 = lo497; it499 <= hi498; it499++) {
F->i_496 = it499;
if (((65 <= rt_str_get(F->r_495, F->i_496)) && (rt_str_get(F->r_495, F->i_496) <= 90))) {
(*rt_str_at(&F->r_495, F->i_496)) = rt_str_get(F->letters_494, rt_add(rt_sub(((rt_int)(rt_str_get(F->r_495, F->i_496)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_495;
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
g_serial_454 = rt_add(g_serial_454, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_17), f_itos_7(g_serial_454));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_fail_21(rt_int line_19, rstr *msg_20) {
  struct f_fail_21fr *F = rt_alloc(sizeof *F);
F->line_19 = line_19;
F->msg_20 = msg_20;
if ((g_trial_476 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_19)), rt_str(": ", 2)), (*F->msg_20)));
}
rt_raise(ex_compile_error_1);
ret_:
  return;
}

static P436 f_new_buffer_22(void) {
  struct f_new_buffer_22fr *F = rt_alloc(sizeof *F);
F->b_500 = NULL;
{ R437 *cell501 = rt_alloc(sizeof(R437));
(*cell501).head = NULL;
(*cell501).tail = NULL;
F->b_500 = cell501;
}
F->result_ = F->b_500;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_put_25(P436 b_23, rstr *s_24) {
  struct f_put_25fr *F = rt_alloc(sizeof *F);
F->b_23 = b_23;
F->s_24 = s_24;
F->l_502 = NULL;
{ R435 *cell503 = rt_alloc(sizeof(R435));
(*cell503).s = NULL;
(*cell503).next = NULL;
F->l_502 = cell503;
}
(*(P434)rt_nil_check(F->l_502)).s = f_mk_3(&(*F->s_24));
if (((*(P436)rt_nil_check(F->b_23)).tail == NULL)) {
(*(P436)rt_nil_check(F->b_23)).head = F->l_502;
} else {
(*(P434)rt_nil_check((*(P436)rt_nil_check(F->b_23)).tail)).next = F->l_502;
}
(*(P436)rt_nil_check(F->b_23)).tail = F->l_502;
ret_:
  return;
}

static void f_emit_27(rstr *s_26) {
  struct f_emit_27fr *F = rt_alloc(sizeof *F);
F->s_26 = s_26;
f_put_25(g_code_462, &(*F->s_26));
ret_:
  return;
}

static void f_print_buffer_29(P436 b_28) {
  struct f_print_buffer_29fr *F = rt_alloc(sizeof *F);
F->b_28 = b_28;
F->l_504 = NULL;
F->l_504 = (*(P436)rt_nil_check(F->b_28)).head;
while ((F->l_504 != NULL)) {
rt_putln((*(P417)rt_nil_check((*(P434)rt_nil_check(F->l_504)).s)));
F->l_504 = (*(P434)rt_nil_check(F->l_504)).next;
}
ret_:
  return;
}

static void f_splice_32(P436 a_30, P436 b_31) {
  struct f_splice_32fr *F = rt_alloc(sizeof *F);
F->a_30 = a_30;
F->b_31 = b_31;
if (((*(P436)rt_nil_check(F->b_31)).head == NULL)) {
goto ret_;
}
if (((*(P436)rt_nil_check(F->a_30)).tail == NULL)) {
(*(P436)rt_nil_check(F->a_30)).head = (*(P436)rt_nil_check(F->b_31)).head;
} else {
(*(P434)rt_nil_check((*(P436)rt_nil_check(F->a_30)).tail)).next = (*(P436)rt_nil_check(F->b_31)).head;
}
(*(P436)rt_nil_check(F->a_30)).tail = (*(P436)rt_nil_check(F->b_31)).tail;
(*(P436)rt_nil_check(F->b_31)).head = NULL;
(*(P436)rt_nil_check(F->b_31)).tail = NULL;
ret_:
  return;
}

static int f_is_reserved_34(rstr *w_33) {
  struct f_is_reserved_34fr *F = rt_alloc(sizeof *F);
F->w_33 = w_33;
{ rstr sel505 = (*F->w_33);
if (0 || rt_str_eq(sel505, rt_str("ABBREV", 6)) || rt_str_eq(sel505, rt_str("ABNORMAL", 8)) || rt_str_eq(sel505, rt_str("ALL", 3)) || rt_str_eq(sel505, rt_str("ALLOC", 5)) || rt_str_eq(sel505, rt_str("ASSERT", 6)) || rt_str_eq(sel505, rt_str("BEGIN", 5)) || rt_str_eq(sel505, rt_str("BY", 2)) || rt_str_eq(sel505, rt_str("CAPSULE", 7)) || rt_str_eq(sel505, rt_str("CASE", 4)) || rt_str_eq(sel505, rt_str("CONST", 5)) || rt_str_eq(sel505, rt_str("CREATE", 6)) || rt_str_eq(sel505, rt_str("DO", 2)) || rt_str_eq(sel505, rt_str("ELSE", 4)) || rt_str_eq(sel505, rt_str("ELSEIF", 6)) || rt_str_eq(sel505, rt_str("END", 3)) || rt_str_eq(sel505, rt_str("EXCEPTION", 9)) || rt_str_eq(sel505, rt_str("EXIT", 4)) || rt_str_eq(sel505, rt_str("EXPORTS", 7)) || rt_str_eq(sel505, rt_str("EXPOSE", 6)) || rt_str_eq(sel505, rt_str("EXTERNAL", 8)) || rt_str_eq(sel505, rt_str("FOR", 3)) || rt_str_eq(sel505, rt_str("FROM", 4)) || rt_str_eq(sel505, rt_str("FUNC", 4)) || rt_str_eq(sel505, rt_str("GENERIC", 7)) || rt_str_eq(sel505, rt_str("GOTO", 4)) || rt_str_eq(sel505, rt_str("GUARD", 5)) || rt_str_eq(sel505, rt_str("IF", 2)) || rt_str_eq(sel505, rt_str("IMPORTS", 7)) || rt_str_eq(sel505, rt_str("LOCATION", 8)) || rt_str_eq(sel505, rt_str("NAMED", 5)) || rt_str_eq(sel505, rt_str("NEEDS", 5)) || rt_str_eq(sel505, rt_str("NEW", 3)) || rt_str_eq(sel505, rt_str("NONE", 4)) || rt_str_eq(sel505, rt_str("OUT", 3)) || rt_str_eq(sel505, rt_str("OF", 2)) || rt_str_eq(sel505, rt_str("PRAG", 4)) || rt_str_eq(sel505, rt_str("PROC", 4)) || rt_str_eq(sel505, rt_str("RAISE", 5)) || rt_str_eq(sel505, rt_str("READONLY", 8)) || rt_str_eq(sel505, rt_str("REVERSE", 7)) || rt_str_eq(sel505, rt_str("REGION", 6)) || rt_str_eq(sel505, rt_str("RENAMING", 8)) || rt_str_eq(sel505, rt_str("REP", 3)) || rt_str_eq(sel505, rt_str("REPEAT", 6)) || rt_str_eq(sel505, rt_str("RERAISE", 7)) || rt_str_eq(sel505, rt_str("RETURN", 6)) || rt_str_eq(sel505, rt_str("SUBTYPE", 7)) || rt_str_eq(sel505, rt_str("TASK", 4)) || rt_str_eq(sel505, rt_str("THEN", 4)) || rt_str_eq(sel505, rt_str("TO", 2)) || rt_str_eq(sel505, rt_str("TYPE", 4)) || rt_str_eq(sel505, rt_str("VAR", 3)) || rt_str_eq(sel505, rt_str("WAIT", 4)) || rt_str_eq(sel505, rt_str("WHEN", 4)) || rt_str_eq(sel505, rt_str("WHILE", 5))) {
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
F->t_506 = NULL;
{ R419 *cell507 = rt_alloc(sizeof(R419));
(*cell507).s = NULL;
F->t_506 = cell507;
}
(*(P418)rt_nil_check(F->t_506)).kind = F->kind_37;
(*(P418)rt_nil_check(F->t_506)).line = g_src_line_449;
(*(P418)rt_nil_check(F->t_506)).ival = F->ival_39;
(*(P418)rt_nil_check(F->t_506)).s = f_mk_3(&(*F->s_38));
g_ntoks_447 = rt_add(g_ntoks_447, ((rt_int)1LL));
(*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_ntoks_447, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo] = F->t_506;
ret_:
  return;
}

static void f_lex_line_42(rstr *line_41) {
  struct f_lex_line_42fr *F = rt_alloc(sizeof *F);
F->line_41 = line_41;
F->i_508 = ((rt_int)1LL);
F->j_509 = ((rt_int)0LL);
F->n_510 = ((*F->line_41)).len;
while ((F->i_508 <= F->n_510)) {
F->c_511 = rt_str_get((*F->line_41), F->i_508);
if (((((F->c_511 == 32) || (F->c_511 == 9)) || (F->c_511 == 13)) || (F->c_511 == 12))) {
F->i_508 = rt_add(F->i_508, ((rt_int)1LL));
} else if ((F->c_511 == 37)) {
F->i_508 = rt_add(F->n_510, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_511)) {
F->j_509 = F->i_508;
while (((F->j_509 <= F->n_510) && ((f_is_letter_9(rt_str_get((*F->line_41), F->j_509)) || f_is_digit_11(rt_str_get((*F->line_41), F->j_509))) || (rt_str_get((*F->line_41), F->j_509) == 95)))) {
F->j_509 = rt_add(F->j_509, ((rt_int)1LL));
}
{
F->w_512 = rt_str_new(rt_sub(F->j_509, F->i_508));
rt_str_assign(&F->w_512, rt_str_slice((*F->line_41), F->i_508, rt_sub(F->j_509, ((rt_int)1LL))));
{ rt_int lo514 = ((rt_int)1LL), hi515 = (F->w_512).len;
for (rt_int it516 = lo514; it516 <= hi515; it516++) {
F->k_513 = it516;
(*rt_str_at(&F->w_512, F->k_513)) = f_upper_13(rt_str_get(F->w_512, F->k_513));
}
}
if (rt_str_eq(F->w_512, rt_str("PRAGMAT", 7))) {
while (((F->j_509 <= F->n_510) && (rt_str_get((*F->line_41), F->j_509) != 59))) {
F->j_509 = rt_add(F->j_509, ((rt_int)1LL));
}
F->j_509 = rt_add(F->j_509, ((rt_int)1LL));
} else if (f_is_reserved_34(&F->w_512)) {
f_add_token_40(((rt_int)2LL), &F->w_512, ((rt_int)0LL));
} else if (f_is_word_op_36(&F->w_512)) {
f_add_token_40(((rt_int)3LL), &F->w_512, ((rt_int)0LL));
} else {
f_add_token_40(((rt_int)1LL), &F->w_512, ((rt_int)0LL));
}
}
F->i_508 = F->j_509;
} else if (f_is_digit_11(F->c_511)) {
F->j_509 = F->i_508;
while (((F->j_509 <= F->n_510) && f_is_digit_11(rt_str_get((*F->line_41), F->j_509)))) {
F->j_509 = rt_add(F->j_509, ((rt_int)1LL));
}
if ((((F->j_509 < F->n_510) && (rt_str_get((*F->line_41), F->j_509) == 46)) && f_is_digit_11(rt_str_get((*F->line_41), rt_add(F->j_509, ((rt_int)1LL)))))) {
F->j_509 = rt_add(F->j_509, ((rt_int)1LL));
while (((F->j_509 <= F->n_510) && f_is_digit_11(rt_str_get((*F->line_41), F->j_509)))) {
F->j_509 = rt_add(F->j_509, ((rt_int)1LL));
}
if (((F->j_509 <= F->n_510) && ((rt_str_get((*F->line_41), F->j_509) == 69) || (rt_str_get((*F->line_41), F->j_509) == 101)))) {
F->j_509 = rt_add(F->j_509, ((rt_int)1LL));
if (((F->j_509 <= F->n_510) && ((rt_str_get((*F->line_41), F->j_509) == 43) || (rt_str_get((*F->line_41), F->j_509) == 45)))) {
F->j_509 = rt_add(F->j_509, ((rt_int)1LL));
}
while (((F->j_509 <= F->n_510) && f_is_digit_11(rt_str_get((*F->line_41), F->j_509)))) {
F->j_509 = rt_add(F->j_509, ((rt_int)1LL));
}
}
f_add_token_40(((rt_int)5LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_41), F->i_508, rt_sub(F->j_509, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_40(((rt_int)4LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_41), F->i_508, rt_sub(F->j_509, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_41), F->i_508, rt_sub(F->j_509, ((rt_int)1LL)))));
}
F->i_508 = F->j_509;
} else if ((F->c_511 == 39)) {
F->j_509 = rt_add(F->i_508, ((rt_int)1LL));
if (((F->j_509 > F->n_510) || (!f_is_letter_9(rt_str_get((*F->line_41), F->j_509))))) {
f_fail_21(g_src_line_449, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_509 <= F->n_510) && ((f_is_letter_9(rt_str_get((*F->line_41), F->j_509)) || f_is_digit_11(rt_str_get((*F->line_41), F->j_509))) || (rt_str_get((*F->line_41), F->j_509) == 95)))) {
F->j_509 = rt_add(F->j_509, ((rt_int)1LL));
}
{
F->w_517 = rt_str_new(rt_sub(rt_sub(F->j_509, F->i_508), ((rt_int)1LL)));
rt_str_assign(&F->w_517, rt_str_slice((*F->line_41), rt_add(F->i_508, ((rt_int)1LL)), rt_sub(F->j_509, ((rt_int)1LL))));
{ rt_int lo519 = ((rt_int)1LL), hi520 = (F->w_517).len;
for (rt_int it521 = lo519; it521 <= hi520; it521++) {
F->k_518 = it521;
(*rt_str_at(&F->w_517, F->k_518)) = f_upper_13(rt_str_get(F->w_517, F->k_518));
}
}
f_add_token_40(((rt_int)6LL), &F->w_517, ((rt_int)0LL));
}
F->i_508 = F->j_509;
} else if ((F->c_511 == 34)) {
F->j_509 = rt_add(F->i_508, ((rt_int)1LL));
while (((F->j_509 <= F->n_510) && (rt_str_get((*F->line_41), F->j_509) != 34))) {
F->j_509 = rt_add(F->j_509, ((rt_int)1LL));
}
if ((F->j_509 > F->n_510)) {
f_fail_21(g_src_line_449, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_40(((rt_int)7LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_41), rt_add(F->i_508, ((rt_int)1LL)), rt_sub(F->j_509, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_508 = rt_add(F->j_509, ((rt_int)1LL));
} else {
{
F->two_522 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_522, rt_str("  ", 2));
(*rt_str_at(&F->two_522, ((rt_int)1LL))) = F->c_511;
if ((F->i_508 < F->n_510)) {
(*rt_str_at(&F->two_522, ((rt_int)2LL))) = rt_str_get((*F->line_41), rt_add(F->i_508, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_522, rt_str(":=", 2)) || rt_str_eq(F->two_522, rt_str("=>", 2))) || rt_str_eq(F->two_522, rt_str("..", 2))) || rt_str_eq(F->two_522, rt_str("**", 2))) || rt_str_eq(F->two_522, rt_str("/=", 2))) || rt_str_eq(F->two_522, rt_str("<=", 2))) || rt_str_eq(F->two_522, rt_str(">=", 2)))) {
f_add_token_40(((rt_int)3LL), &F->two_522, ((rt_int)0LL));
F->i_508 = rt_add(F->i_508, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_511 == 40) || (F->c_511 == 41)) || (F->c_511 == 91)) || (F->c_511 == 93)) || (F->c_511 == 44)) || (F->c_511 == 58)) || (F->c_511 == 59)) || (F->c_511 == 46)) || (F->c_511 == 35)) || (F->c_511 == 43)) || (F->c_511 == 45)) || (F->c_511 == 42)) || (F->c_511 == 47)) || (F->c_511 == 38)) || (F->c_511 == 61)) || (F->c_511 == 60)) || (F->c_511 == 62))) {
f_add_token_40(((rt_int)3LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_511); b_; }), ((rt_int)0LL));
F->i_508 = rt_add(F->i_508, ((rt_int)1LL));
} else {
f_fail_21(g_src_line_449, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_523 = rt_str_new(rt_sizeln());
rt_readln(&F->line_523);
g_src_line_449 = rt_add(g_src_line_449, ((rt_int)1LL));
f_lex_line_42(&F->line_523);
}
f_add_token_40(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  return;
}

static P422 f_nn_46(rt_int kind_44, rt_int line_45) {
  struct f_nn_46fr *F = rt_alloc(sizeof *F);
F->kind_44 = kind_44;
F->line_45 = line_45;
F->x_524 = NULL;
{ R423 *cell525 = rt_alloc(sizeof(R423));
(*cell525).name = NULL;
(*cell525).tag = NULL;
(*cell525).a = NULL;
(*cell525).b = NULL;
(*cell525).c = NULL;
(*cell525).d = NULL;
(*cell525).e = NULL;
(*cell525).next = NULL;
F->x_524 = cell525;
}
(*(P422)rt_nil_check(F->x_524)).kind = F->kind_44;
(*(P422)rt_nil_check(F->x_524)).line = F->line_45;
F->result_ = F->x_524;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_append_50(P422 *head_47, P422 *tail_48, P422 x_49) {
  struct f_append_50fr *F = rt_alloc(sizeof *F);
F->head_47 = head_47;
F->tail_48 = tail_48;
F->x_49 = x_49;
if (((*F->head_47) == NULL)) {
(*F->head_47) = F->x_49;
} else {
(*(P422)rt_nil_check((*F->tail_48))).next = F->x_49;
}
(*F->tail_48) = F->x_49;
while (((*(P422)rt_nil_check((*F->tail_48))).next != NULL)) {
(*F->tail_48) = (*(P422)rt_nil_check((*F->tail_48))).next;
}
ret_:
  return;
}

static rt_int f_list_len_52(P422 l_51) {
  struct f_list_len_52fr *F = rt_alloc(sizeof *F);
F->l_51 = l_51;
F->n_526 = ((rt_int)0LL);
F->p_527 = NULL;
F->p_527 = F->l_51;
while ((F->p_527 != NULL)) {
F->n_526 = rt_add(F->n_526, ((rt_int)1LL));
F->p_527 = (*(P422)rt_nil_check(F->p_527)).next;
}
F->result_ = F->n_526;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_cur_line_53(void) {
  struct f_cur_line_53fr *F = rt_alloc(sizeof *F);
F->result_ = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kw_55(rstr *w_54) {
  struct f_at_kw_55fr *F = rt_alloc(sizeof *F);
F->w_54 = w_54;
F->result_ = (((*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).kind == ((rt_int)2LL)) && rt_str_eq((*(P417)rt_nil_check((*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s)), (*F->w_54)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_op_57(rstr *w_56) {
  struct f_at_op_57fr *F = rt_alloc(sizeof *F);
F->w_56 = w_56;
F->result_ = (((*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).kind == ((rt_int)3LL)) && rt_str_eq((*(P417)rt_nil_check((*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s)), (*F->w_56)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kind_59(rt_int k_58) {
  struct f_at_kind_59fr *F = rt_alloc(sizeof *F);
F->k_58 = k_58;
F->result_ = ((*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).kind == F->k_58);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_kind_at_61(rt_int k_60) {
  struct f_kind_at_61fr *F = rt_alloc(sizeof *F);
F->k_60 = k_60;
if ((rt_add(g_tpos_448, F->k_60) > g_ntoks_447)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(rt_add(g_tpos_448, F->k_60), (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_text_at_63(rt_int k_62) {
  struct f_text_at_63fr *F = rt_alloc(sizeof *F);
F->k_62 = k_62;
if ((rt_add(g_tpos_448, F->k_62) > g_ntoks_447)) {
F->result_ = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_ntoks_447, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s;
goto ret_;
}
F->result_ = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(rt_add(g_tpos_448, F->k_62), (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_perror_65(rstr *msg_64) {
  struct f_perror_65fr *F = rt_alloc(sizeof *F);
F->msg_64 = msg_64;
f_fail_21((*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_64), rt_str(" (at ", 5)), (*(P417)rt_nil_check((*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  return;
}

static int f_accept_kw_67(rstr *w_66) {
  struct f_accept_kw_67fr *F = rt_alloc(sizeof *F);
F->w_66 = w_66;
if (f_at_kw_55(&(*F->w_66))) {
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
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
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
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
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_op_73(rstr *w_72) {
  struct f_expect_op_73fr *F = rt_alloc(sizeof *F);
F->w_72 = w_72;
if ((!f_at_op_57(&(*F->w_72)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_72)); b_; }));
}
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
ret_:
  return;
}

static P417 f_expect_id_74(void) {
  struct f_expect_id_74fr *F = rt_alloc(sizeof *F);
if ((!f_at_kind_59(((rt_int)1LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->result_ = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(rt_sub(g_tpos_448, ((rt_int)1LL)), (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_name_node_75(void) {
  struct f_name_node_75fr *F = rt_alloc(sizeof *F);
F->x_528 = NULL;
F->x_528 = f_nn_46(((rt_int)7LL), f_cur_line_53());
(*(P422)rt_nil_check(F->x_528)).name = f_expect_id_74();
F->result_ = F->x_528;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_id_list_76(void) {
  struct f_id_list_76fr *F = rt_alloc(sizeof *F);
F->head_529 = NULL;
F->tail_530 = NULL;
f_append_50(&F->head_529, &F->tail_530, f_name_node_75());
while (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_50(&F->head_529, &F->tail_530, f_name_node_75());
}
F->result_ = F->head_529;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_p_subtype_77(void) {
  struct f_p_subtype_77fr *F = rt_alloc(sizeof *F);
F->line_531 = f_cur_line_53();
F->x_532 = NULL;
if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->x_532 = f_nn_46(((rt_int)81LL), F->line_531);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P422)rt_nil_check(F->x_532)).a = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_532;
goto ret_;
}
if ((!f_at_kind_59(((rt_int)1LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_533 = rt_str_copy((*(P417)rt_nil_check((*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s)));
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
if (rt_str_eq(F->w_533, rt_str("ARRAY", 5))) {
F->x_532 = f_nn_46(((rt_int)74LL), F->line_531);
{
F->head_534 = NULL;
F->tail_535 = NULL;
f_append_50(&F->head_534, &F->tail_535, f_p_subtype_77());
while (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_50(&F->head_534, &F->tail_535, f_p_subtype_77());
}
(*(P422)rt_nil_check(F->x_532)).a = F->head_534;
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P422)rt_nil_check(F->x_532)).b = f_p_subtype_77();
} else if ((rt_str_eq(F->w_533, rt_str("RECORD", 6)) || rt_str_eq(F->w_533, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_533, rt_str("RECORD", 6))) {
F->x_532 = f_nn_46(((rt_int)75LL), F->line_531);
} else {
F->x_532 = f_nn_46(((rt_int)76LL), F->line_531);
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_536 = NULL;
F->tail_537 = NULL;
F->more_538 = 1;
while (F->more_538) {
F->names_539 = NULL;
F->names_539 = f_id_list_76();
F->st_540 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_540 = f_p_subtype_77();
while ((F->names_539 != NULL)) {
F->cmp_541 = NULL;
F->cmp_541 = f_nn_46(((rt_int)63LL), (*(P422)rt_nil_check(F->names_539)).line);
(*(P422)rt_nil_check(F->cmp_541)).name = (*(P422)rt_nil_check(F->names_539)).name;
(*(P422)rt_nil_check(F->cmp_541)).a = F->st_540;
f_append_50(&F->head_536, &F->tail_537, F->cmp_541);
F->names_539 = (*(P422)rt_nil_check(F->names_539)).next;
}
F->more_538 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P422)rt_nil_check(F->x_532)).a = F->head_536;
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_533, rt_str("UNION", 5)) && f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_532)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_533, rt_str("ENUM", 4))) {
F->x_532 = f_nn_46(((rt_int)72LL), F->line_531);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_542 = NULL;
F->tail_543 = NULL;
F->more_544 = 1;
while (F->more_544) {
F->lit_545 = NULL;
F->lit_545 = f_nn_46(((rt_int)4LL), F->line_531);
if ((!f_at_kind_59(((rt_int)6LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P422)rt_nil_check(F->lit_545)).name = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s;
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
f_append_50(&F->head_542, &F->tail_543, F->lit_545);
F->more_544 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P422)rt_nil_check(F->x_532)).a = F->head_542;
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_532)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P422)rt_nil_check(F->x_532)).c = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_533, rt_str("STRING", 6)) || rt_str_eq(F->w_533, rt_str("SET", 3))) || rt_str_eq(F->w_533, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_533, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_533, rt_str("STRING", 6))) {
F->x_532 = f_nn_46(((rt_int)73LL), F->line_531);
} else if (rt_str_eq(F->w_533, rt_str("SET", 3))) {
F->x_532 = f_nn_46(((rt_int)77LL), F->line_531);
} else if (rt_str_eq(F->w_533, rt_str("MAILBOX", 7))) {
F->x_532 = f_nn_46(((rt_int)78LL), F->line_531);
} else {
F->x_532 = f_nn_46(((rt_int)79LL), F->line_531);
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P422)rt_nil_check(F->x_532)).a = f_p_subtype_77();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P422)rt_nil_check(F->x_532)).b = f_actual_params_78();
}
} else if (rt_str_eq(F->w_533, rt_str("INT", 3))) {
F->x_532 = f_nn_46(((rt_int)70LL), F->line_531);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_532)).a = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P422)rt_nil_check(F->x_532)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_533, rt_str("FLOAT", 5))) {
F->x_532 = f_nn_46(((rt_int)71LL), F->line_531);
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P422)rt_nil_check(F->x_532)).a = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P422)rt_nil_check(F->x_532)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P422)rt_nil_check(F->x_532)).c = f_expr_87();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_532 = f_nn_46(((rt_int)80LL), F->line_531);
(*(P422)rt_nil_check(F->x_532)).name = f_mk_3(&F->w_533);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P422)rt_nil_check(F->x_532)).a = f_actual_tt_81();
}
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P422)rt_nil_check(F->x_532)).b = f_actual_params_78();
(*(P422)rt_nil_check(F->x_532)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_532;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_actual_params_78(void) {
  struct f_actual_params_78fr *F = rt_alloc(sizeof *F);
F->head_546 = NULL;
F->tail_547 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_50(&F->head_546, &F->tail_547, f_expr_87());
while (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_50(&F->head_546, &F->tail_547, f_expr_87());
}
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_546;
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

static P422 f_actual_tt_81(void) {
  struct f_actual_tt_81fr *F = rt_alloc(sizeof *F);
F->head_548 = NULL;
F->tail_549 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_550 = 1;
while (F->more_550) {
if ((f_at_kind_59(((rt_int)1LL)) && f_is_type_word_80(&(*(P417)rt_nil_check((*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s))))) {
f_append_50(&F->head_548, &F->tail_549, f_p_subtype_77());
} else {
f_append_50(&F->head_548, &F->tail_549, f_expr_87());
}
F->more_550 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_548;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_binop_86(P417 op_82, P422 l_83, P422 r_84, rt_int line_85) {
  struct f_binop_86fr *F = rt_alloc(sizeof *F);
F->op_82 = op_82;
F->l_83 = l_83;
F->r_84 = r_84;
F->line_85 = line_85;
F->x_551 = NULL;
F->x_551 = f_nn_46(((rt_int)9LL), F->line_85);
(*(P422)rt_nil_check(F->x_551)).name = F->op_82;
(*(P422)rt_nil_check(F->x_551)).a = F->l_83;
(*(P422)rt_nil_check(F->x_551)).b = F->r_84;
F->result_ = F->x_551;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_expr_87(void) {
  struct f_expr_87fr *F = rt_alloc(sizeof *F);
F->l_552 = NULL;
F->l_552 = f_expr_and_88();
while ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_553 = NULL;
F->op_553 = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s;
F->line_554 = f_cur_line_53();
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->l_552 = f_binop_86(F->op_553, F->l_552, f_expr_and_88(), F->line_554);
}
F->result_ = F->l_552;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_expr_and_88(void) {
  struct f_expr_and_88fr *F = rt_alloc(sizeof *F);
F->l_555 = NULL;
F->l_555 = f_expr_not_89();
while (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_556 = f_cur_line_53();
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->l_555 = f_binop_86(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_555, f_expr_not_89(), F->line_556);
}
F->result_ = F->l_555;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_expr_not_89(void) {
  struct f_expr_not_89fr *F = rt_alloc(sizeof *F);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_557 = NULL;
F->x_557 = f_nn_46(((rt_int)8LL), f_cur_line_53());
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_557)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P422)rt_nil_check(F->x_557)).a = f_expr_not_89();
F->result_ = F->x_557;
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

static P422 f_expr_rel_92(void) {
  struct f_expr_rel_92fr *F = rt_alloc(sizeof *F);
F->l_558 = NULL;
F->l_558 = f_expr_add_93();
if ((f_at_kind_59(((rt_int)3LL)) && f_is_rel_91(&(*(P417)rt_nil_check((*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s))))) {
F->op_559 = NULL;
F->op_559 = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s;
F->line_560 = f_cur_line_53();
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->l_558 = f_binop_86(F->op_559, F->l_558, f_expr_add_93(), F->line_560);
}
F->result_ = F->l_558;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_expr_add_93(void) {
  struct f_expr_add_93fr *F = rt_alloc(sizeof *F);
F->l_561 = NULL;
F->l_561 = f_expr_mul_94();
while ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_562 = NULL;
F->op_562 = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s;
F->line_563 = f_cur_line_53();
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->l_561 = f_binop_86(F->op_562, F->l_561, f_expr_mul_94(), F->line_563);
}
F->result_ = F->l_561;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_expr_mul_94(void) {
  struct f_expr_mul_94fr *F = rt_alloc(sizeof *F);
F->l_564 = NULL;
F->l_564 = f_expr_pow_95();
while (((((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_565 = NULL;
F->op_565 = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s;
F->line_566 = f_cur_line_53();
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->l_564 = f_binop_86(F->op_565, F->l_564, f_expr_pow_95(), F->line_566);
}
F->result_ = F->l_564;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_expr_pow_95(void) {
  struct f_expr_pow_95fr *F = rt_alloc(sizeof *F);
F->l_567 = NULL;
F->l_567 = f_expr_prefix_96();
while (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_568 = f_cur_line_53();
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->l_567 = f_binop_86(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_567, f_expr_prefix_96(), F->line_568);
}
F->result_ = F->l_567;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_expr_prefix_96(void) {
  struct f_expr_prefix_96fr *F = rt_alloc(sizeof *F);
if ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_569 = NULL;
F->x_569 = f_nn_46(((rt_int)8LL), f_cur_line_53());
(*(P422)rt_nil_check(F->x_569)).name = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s;
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_569)).a = f_expr_prefix_96();
F->result_ = F->x_569;
goto ret_;
}
F->result_ = f_postfix_97();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_postfix_97(void) {
  struct f_postfix_97fr *F = rt_alloc(sizeof *F);
F->p_570 = NULL;
F->p_570 = f_primary_98();
while (1) {
F->line_571 = f_cur_line_53();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_572 = NULL;
F->x_572 = f_nn_46(((rt_int)10LL), F->line_571);
F->head_573 = NULL;
F->tail_574 = NULL;
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_575 = 1;
while (F->more_575) {
F->lo_576 = NULL;
F->lo_576 = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_577 = NULL;
F->r_577 = f_nn_46(((rt_int)16LL), F->line_571);
(*(P422)rt_nil_check(F->r_577)).a = F->lo_576;
(*(P422)rt_nil_check(F->r_577)).b = f_expr_87();
f_append_50(&F->head_573, &F->tail_574, F->r_577);
} else {
f_append_50(&F->head_573, &F->tail_574, F->lo_576);
}
F->more_575 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P422)rt_nil_check(F->x_572)).a = F->p_570;
(*(P422)rt_nil_check(F->x_572)).b = F->head_573;
F->p_570 = F->x_572;
} else if ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_61(((rt_int)1LL)) == ((rt_int)1LL)) || (f_kind_at_61(((rt_int)1LL)) == ((rt_int)2LL))))) {
F->x_578 = NULL;
F->x_578 = f_nn_46(((rt_int)11LL), F->line_571);
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_578)).a = F->p_570;
(*(P422)rt_nil_check(F->x_578)).name = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s;
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->p_570 = F->x_578;
} else if ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P422)rt_nil_check(F->p_570)).kind == ((rt_int)7LL)))) {
F->x_579 = NULL;
F->x_579 = f_nn_46(((rt_int)12LL), F->line_571);
(*(P422)rt_nil_check(F->x_579)).a = F->p_570;
(*(P422)rt_nil_check(F->x_579)).b = f_actual_tt_81();
F->p_570 = F->x_579;
} else if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_580 = NULL;
F->x_580 = f_nn_46(((rt_int)13LL), F->line_571);
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_580)).a = F->p_570;
(*(P422)rt_nil_check(F->x_580)).b = f_p_subtype_77();
F->p_570 = F->x_580;
} else {
F->result_ = F->p_570;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_primary_98(void) {
  struct f_primary_98fr *F = rt_alloc(sizeof *F);
F->line_581 = f_cur_line_53();
F->x_582 = NULL;
F->k_583 = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).kind;
if ((F->k_583 == ((rt_int)4LL))) {
F->x_582 = f_nn_46(((rt_int)1LL), F->line_581);
(*(P422)rt_nil_check(F->x_582)).ival = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).ival;
(*(P422)rt_nil_check(F->x_582)).name = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s;
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->result_ = F->x_582;
goto ret_;
}
if ((((F->k_583 == ((rt_int)5LL)) || (F->k_583 == ((rt_int)7LL))) || (F->k_583 == ((rt_int)6LL)))) {
if ((F->k_583 == ((rt_int)5LL))) {
F->x_582 = f_nn_46(((rt_int)2LL), F->line_581);
} else if ((F->k_583 == ((rt_int)7LL))) {
F->x_582 = f_nn_46(((rt_int)3LL), F->line_581);
} else {
F->x_582 = f_nn_46(((rt_int)4LL), F->line_581);
}
(*(P422)rt_nil_check(F->x_582)).name = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s;
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->result_ = F->x_582;
goto ret_;
}
if ((F->k_583 == ((rt_int)1LL))) {
F->w_584 = rt_str_copy((*(P417)rt_nil_check((*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s)));
if ((rt_str_eq(F->w_584, rt_str("TRUE", 4)) || rt_str_eq(F->w_584, rt_str("FALSE", 5)))) {
F->x_582 = f_nn_46(((rt_int)5LL), F->line_581);
if (rt_str_eq(F->w_584, rt_str("TRUE", 4))) {
(*(P422)rt_nil_check(F->x_582)).ival = ((rt_int)1LL);
}
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->result_ = F->x_582;
goto ret_;
}
if (rt_str_eq(F->w_584, rt_str("NIL", 3))) {
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->result_ = f_nn_46(((rt_int)6LL), F->line_581);
goto ret_;
}
F->result_ = f_name_node_75();
goto ret_;
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_582 = f_nn_46(((rt_int)17LL), F->line_581);
(*(P422)rt_nil_check(F->x_582)).a = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_582;
goto ret_;
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_585 = NULL;
F->tail_586 = NULL;
F->x_582 = f_nn_46(((rt_int)14LL), F->line_581);
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_587 = 1;
while (F->more_587) {
f_append_50(&F->head_585, &F->tail_586, f_constructor_item_99());
F->more_587 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P422)rt_nil_check(F->x_582)).a = F->head_585;
F->result_ = F->x_582;
goto ret_;
}
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_constructor_item_99(void) {
  struct f_constructor_item_99fr *F = rt_alloc(sizeof *F);
F->line_588 = f_cur_line_53();
F->it_589 = NULL;
F->it_589 = f_nn_46(((rt_int)15LL), F->line_588);
F->first_590 = NULL;
F->first_590 = f_expr_87();
F->keys_591 = NULL;
F->ktail_592 = NULL;
F->lab_593 = NULL;
F->lab_593 = f_nn_46(((rt_int)61LL), F->line_588);
(*(P422)rt_nil_check(F->lab_593)).a = F->first_590;
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P422)rt_nil_check(F->lab_593)).b = f_expr_87();
f_append_50(&F->keys_591, &F->ktail_592, F->lab_593);
} else if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_50(&F->keys_591, &F->ktail_592, F->lab_593);
} else if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_594 = g_tpos_448;
F->more_595 = NULL;
F->tail2_596 = NULL;
F->ok_597 = 0;
F->go_598 = 1;
while ((F->go_598 && f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_599 = NULL;
F->l2_599 = f_nn_46(((rt_int)61LL), F->line_588);
(*(P422)rt_nil_check(F->l2_599)).a = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P422)rt_nil_check(F->l2_599)).b = f_expr_87();
}
f_append_50(&F->more_595, &F->tail2_596, F->l2_599);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_597 = 1;
F->go_598 = 0;
} else if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_598 = 0;
}
}
if (F->ok_597) {
f_append_50(&F->keys_591, &F->ktail_592, F->lab_593);
f_append_50(&F->keys_591, &F->ktail_592, F->more_595);
} else {
g_tpos_448 = F->save_594;
}
}
if ((F->keys_591 != NULL)) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P422)rt_nil_check(F->it_589)).a = F->keys_591;
(*(P422)rt_nil_check(F->it_589)).b = f_expr_87();
} else {
(*(P422)rt_nil_check(F->it_589)).b = F->first_590;
}
F->result_ = F->it_589;
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

static P422 f_body_101(void) {
  struct f_body_101fr *F = rt_alloc(sizeof *F);
F->head_600 = NULL;
F->tail_601 = NULL;
while ((!f_at_body_end_100())) {
f_append_50(&F->head_600, &F->tail_601, f_body_element_102());
}
F->result_ = F->head_600;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_body_element_102(void) {
  struct f_body_element_102fr *F = rt_alloc(sizeof *F);
F->x_602 = NULL;
if ((((((((((((f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_602 = f_declaration_103();
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_602 = f_nn_46(((rt_int)33LL), f_cur_line_53());
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_602)).a = f_expr_87();
} else {
F->x_602 = f_statement_123();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_602;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_declaration_103(void) {
  struct f_declaration_103fr *F = rt_alloc(sizeof *F);
F->line_603 = f_cur_line_53();
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
F->head_604 = NULL;
F->tail_605 = NULL;
F->names_606 = NULL;
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->names_606 = f_id_list_76();
while ((F->names_606 != NULL)) {
F->x_607 = NULL;
F->x_607 = f_nn_46(((rt_int)49LL), F->line_603);
(*(P422)rt_nil_check(F->x_607)).name = (*(P422)rt_nil_check(F->names_606)).name;
f_append_50(&F->head_604, &F->tail_605, F->x_607);
F->names_606 = (*(P422)rt_nil_check(F->names_606)).next;
}
F->result_ = F->head_604;
goto ret_;
}
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_object_decl_104(void) {
  struct f_object_decl_104fr *F = rt_alloc(sizeof *F);
F->line_608 = f_cur_line_53();
F->is_var_609 = f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_610 = NULL;
F->st_611 = NULL;
F->init_612 = NULL;
F->head_613 = NULL;
F->tail_614 = NULL;
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->names_610 = f_id_list_76();
if (F->is_var_609) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_611 = f_p_subtype_77();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_612 = f_expr_87();
}
} else {
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_611 = f_p_subtype_77();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_612 = f_expr_87();
}
while ((F->names_610 != NULL)) {
F->x_615 = NULL;
if (F->is_var_609) {
F->x_615 = f_nn_46(((rt_int)40LL), F->line_608);
} else {
F->x_615 = f_nn_46(((rt_int)41LL), F->line_608);
}
(*(P422)rt_nil_check(F->x_615)).name = (*(P422)rt_nil_check(F->names_610)).name;
(*(P422)rt_nil_check(F->x_615)).a = F->st_611;
(*(P422)rt_nil_check(F->x_615)).b = F->init_612;
f_append_50(&F->head_613, &F->tail_614, F->x_615);
F->names_610 = (*(P422)rt_nil_check(F->names_610)).next;
}
F->result_ = F->head_613;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_abbrev_decl_105(void) {
  struct f_abbrev_decl_105fr *F = rt_alloc(sizeof *F);
F->x_616 = NULL;
F->x_616 = f_nn_46(((rt_int)42LL), f_cur_line_53());
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_616)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P422)rt_nil_check(F->x_616)).b = f_formal_params_109();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P422)rt_nil_check(F->x_616)).a = f_p_subtype_77();
F->result_ = F->x_616;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_type_decl_106(void) {
  struct f_type_decl_106fr *F = rt_alloc(sizeof *F);
F->line_617 = f_cur_line_53();
F->name_618 = NULL;
F->params_619 = NULL;
F->x_620 = NULL;
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->name_618 = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_619 = f_formal_params_109();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_59(((rt_int)1LL)) && rt_str_eq((*(P417)rt_nil_check((*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->x_620 = f_nn_46(((rt_int)44LL), F->line_617);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P422)rt_nil_check(F->x_620)).b = f_formal_params_109();
}
} else {
F->x_620 = f_nn_46(((rt_int)43LL), F->line_617);
(*(P422)rt_nil_check(F->x_620)).b = F->params_619;
}
(*(P422)rt_nil_check(F->x_620)).name = F->name_618;
(*(P422)rt_nil_check(F->x_620)).a = f_p_subtype_77();
F->result_ = F->x_620;
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

static P422 f_formal_params_109(void) {
  struct f_formal_params_109fr *F = rt_alloc(sizeof *F);
F->head_621 = NULL;
F->tail_622 = NULL;
F->more_623 = 1;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_623) {
F->mode_624 = ((rt_int)1LL);
F->names_625 = NULL;
F->ntail_626 = NULL;
F->st_627 = NULL;
if ((((f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_624 = f_mode_of_108(&(*(P417)rt_nil_check((*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s)));
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
}
f_append_50(&F->names_625, &F->ntail_626, f_name_node_75());
while ((((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_61(((rt_int)1LL)) == ((rt_int)1LL))) && (f_kind_at_61(((rt_int)2LL)) == ((rt_int)3LL))) && (rt_str_eq((*(P417)rt_nil_check(f_text_at_63(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P417)rt_nil_check(f_text_at_63(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
f_append_50(&F->names_625, &F->ntail_626, f_name_node_75());
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_627 = f_p_subtype_77();
while ((F->names_625 != NULL)) {
F->p_628 = NULL;
F->p_628 = f_nn_46(((rt_int)52LL), (*(P422)rt_nil_check(F->names_625)).line);
(*(P422)rt_nil_check(F->p_628)).name = (*(P422)rt_nil_check(F->names_625)).name;
(*(P422)rt_nil_check(F->p_628)).ival = F->mode_624;
(*(P422)rt_nil_check(F->p_628)).a = F->st_627;
f_append_50(&F->head_621, &F->tail_622, F->p_628);
F->names_625 = (*(P422)rt_nil_check(F->names_625)).next;
}
F->more_623 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_621;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_imports_list_111(P422 owner_110) {
  struct f_imports_list_111fr *F = rt_alloc(sizeof *F);
F->owner_110 = owner_110;
F->head_629 = NULL;
F->tail_630 = NULL;
F->more_631 = 1;
if ((!f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P422)rt_nil_check(F->owner_110)).flag = rt_add((*(P422)rt_nil_check(F->owner_110)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_631) {
F->ro_632 = f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_633 = NULL;
F->x_633 = f_name_node_75();
if (F->ro_632) {
(*(P422)rt_nil_check(F->x_633)).ival = ((rt_int)1LL);
}
f_append_50(&F->head_629, &F->tail_630, F->x_633);
F->more_631 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P422)rt_nil_check(F->owner_110)).d = F->head_629;
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

static P417 f_definable_name_114(void) {
  struct f_definable_name_114fr *F = rt_alloc(sizeof *F);
if ((f_at_kind_59(((rt_int)1LL)) || (f_at_kind_59(((rt_int)3LL)) && f_is_definable_113(&(*(P417)rt_nil_check((*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s)))))) {
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->result_ = (*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(rt_sub(g_tpos_448, ((rt_int)1LL)), (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s;
goto ret_;
}
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_subprogram_decl_115(void) {
  struct f_subprogram_decl_115fr *F = rt_alloc(sizeof *F);
F->line_634 = f_cur_line_53();
F->x_635 = NULL;
F->is_abn_636 = f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_637 = f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_637) {
F->x_635 = f_nn_46(((rt_int)46LL), F->line_634);
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_635 = f_nn_46(((rt_int)45LL), F->line_634);
} else {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
if (F->is_abn_636) {
(*(P422)rt_nil_check(F->x_635)).flag = ((rt_int)1LL);
}
(*(P422)rt_nil_check(F->x_635)).name = f_definable_name_114();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P422)rt_nil_check(F->x_635)).e = f_formal_tt_117();
}
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P422)rt_nil_check(F->x_635)).a = f_formal_params_109();
}
if (F->is_func_637) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P422)rt_nil_check(F->x_635)).b = f_p_subtype_77();
}
F->dummy_638 = f_imports_list_111(F->x_635);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P422)rt_nil_check(F->x_635)).c = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_637) {
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P417)rt_nil_check(f_definable_name_114())), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->x_635)).name))))) {
f_fail_21(f_cur_line_53(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->x_635)).name))); b_; }));
}
F->result_ = F->x_635;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_capsule_decl_116(void) {
  struct f_capsule_decl_116fr *F = rt_alloc(sizeof *F);
F->x_639 = NULL;
F->x_639 = f_nn_46(((rt_int)47LL), f_cur_line_53());
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_639)).name = f_expect_id_74();
F->dummy_640 = f_imports_list_111(F->x_639);
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P422)rt_nil_check(F->x_639)).ival = ((rt_int)1LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P422)rt_nil_check(F->x_639)).ival = ((rt_int)0LL);
} else {
F->head_641 = NULL;
F->tail_642 = NULL;
F->more_643 = 1;
while (F->more_643) {
F->n_644 = NULL;
F->n_644 = f_nn_46(((rt_int)7LL), f_cur_line_53());
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P422)rt_nil_check(F->n_644)).ival = ((rt_int)1LL);
}
(*(P422)rt_nil_check(F->n_644)).name = f_definable_name_114();
f_append_50(&F->head_641, &F->tail_642, F->n_644);
F->more_643 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P422)rt_nil_check(F->x_639)).a = F->head_641;
(*(P422)rt_nil_check(F->x_639)).ival = ((rt_int)2LL);
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P422)rt_nil_check(F->x_639)).c = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P417)rt_nil_check(f_expect_id_74())), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->x_639)).name))))) {
f_fail_21(f_cur_line_53(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_639;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_formal_tt_117(void) {
  struct f_formal_tt_117fr *F = rt_alloc(sizeof *F);
F->head_645 = NULL;
F->tail_646 = NULL;
F->more_647 = 1;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_647) {
f_append_50(&F->head_645, &F->tail_646, f_name_node_75());
F->more_647 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_645;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_generic_decl_118(void) {
  struct f_generic_decl_118fr *F = rt_alloc(sizeof *F);
F->x_648 = NULL;
F->x_648 = f_nn_46(((rt_int)51LL), f_cur_line_53());
F->head_649 = NULL;
F->tail_650 = NULL;
F->more_651 = 1;
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
while (F->more_651) {
F->names_652 = NULL;
F->names_652 = f_id_list_76();
F->kind_653 = ((rt_int)6LL);
F->st_654 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_653 = ((rt_int)1LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_653 = ((rt_int)2LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_653 = ((rt_int)3LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_653 = ((rt_int)4LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_653 = ((rt_int)5LL);
} else {
F->st_654 = f_p_subtype_77();
}
if (((F->kind_653 <= ((rt_int)2LL)) && f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P422)rt_nil_check(F->x_648)).e = f_actual_params_78();
} else if (((F->kind_653 >= ((rt_int)3LL)) && (F->kind_653 <= ((rt_int)5LL)))) {
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
while ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_654 = f_p_subtype_77();
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
}
if (((F->kind_653 == ((rt_int)4LL)) && f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_654 = f_p_subtype_77();
}
}
while ((F->names_652 != NULL)) {
F->p_655 = NULL;
F->p_655 = f_nn_46(((rt_int)52LL), (*(P422)rt_nil_check(F->names_652)).line);
(*(P422)rt_nil_check(F->p_655)).name = (*(P422)rt_nil_check(F->names_652)).name;
(*(P422)rt_nil_check(F->p_655)).ival = F->kind_653;
(*(P422)rt_nil_check(F->p_655)).a = F->st_654;
f_append_50(&F->head_649, &F->tail_650, F->p_655);
F->names_652 = (*(P422)rt_nil_check(F->names_652)).next;
}
F->more_651 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_651 = 1;
while (F->more_651) {
F->nm_656 = NULL;
F->nm_656 = f_definable_name_114();
F->st_657 = NULL;
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
while ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_657 = f_p_subtype_77();
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_657 = f_p_subtype_77();
}
F->more_651 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P422)rt_nil_check(F->x_648)).a = F->head_649;
(*(P422)rt_nil_check(F->x_648)).b = f_declaration_103();
(*(P422)rt_nil_check(F->x_648)).name = (*(P422)rt_nil_check((*(P422)rt_nil_check(F->x_648)).b)).name;
F->result_ = F->x_648;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_task_decl_119(void) {
  struct f_task_decl_119fr *F = rt_alloc(sizeof *F);
F->x_658 = NULL;
F->x_658 = f_nn_46(((rt_int)50LL), f_cur_line_53());
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_658)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P422)rt_nil_check(F->x_658)).e = f_formal_tt_117();
}
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P422)rt_nil_check(F->x_658)).a = f_formal_params_109();
}
F->dummy_659 = f_imports_list_111(F->x_658);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P422)rt_nil_check(F->x_658)).c = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P417)rt_nil_check(f_expect_id_74())), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->x_658)).name))))) {
f_fail_21(f_cur_line_53(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->x_658)).name))); b_; }));
}
F->result_ = F->x_658;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_expose_decl_120(void) {
  struct f_expose_decl_120fr *F = rt_alloc(sizeof *F);
F->x_660 = NULL;
F->x_660 = f_nn_46(((rt_int)48LL), f_cur_line_53());
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P422)rt_nil_check(F->x_660)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_661 = NULL;
F->tail_662 = NULL;
F->more_663 = 1;
while (F->more_663) {
F->n_664 = NULL;
F->n_664 = f_nn_46(((rt_int)7LL), f_cur_line_53());
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P422)rt_nil_check(F->n_664)).ival = ((rt_int)1LL);
}
(*(P422)rt_nil_check(F->n_664)).name = f_definable_name_114();
f_append_50(&F->head_661, &F->tail_662, F->n_664);
F->more_663 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P422)rt_nil_check(F->x_660)).a = F->head_661;
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P422)rt_nil_check(F->x_660)).flag = ((rt_int)1LL);
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P422)rt_nil_check(F->x_660)).flag = rt_add((*(P422)rt_nil_check(F->x_660)).flag, ((rt_int)2LL));
}
(*(P422)rt_nil_check(F->x_660)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P422)rt_nil_check(F->x_660)).b = f_actual_params_78();
}
if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING is not handled yet", 27); b_; }));
}
if ((((*(P422)rt_nil_check(F->x_660)).flag == ((rt_int)1LL)) || ((*(P422)rt_nil_check(F->x_660)).flag == ((rt_int)3LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capsules invoked as NEW are not handled yet", 43); b_; }));
}
F->result_ = F->x_660;
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

static P422 f_statement_123(void) {
  struct f_statement_123fr *F = rt_alloc(sizeof *F);
F->labels_665 = NULL;
F->ltail_666 = NULL;
F->match_667 = NULL;
F->s_668 = NULL;
while (((f_at_kind_59(((rt_int)1LL)) && (f_kind_at_61(((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq((*(P417)rt_nil_check(f_text_at_63(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_50(&F->labels_665, &F->ltail_666, f_name_node_75());
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
}
if (((f_at_kind_59(((rt_int)1LL)) && (f_kind_at_61(((rt_int)1LL)) == ((rt_int)2LL))) && f_is_compound_kw_122(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P417)rt_nil_check(f_text_at_63(((rt_int)1LL)))); b_; })))) {
F->match_667 = f_expect_id_74();
}
F->s_668 = f_unlabeled_statement_124();
if ((F->match_667 != NULL)) {
if (((((((((*(P422)rt_nil_check(F->s_668)).kind != ((rt_int)22LL)) && ((*(P422)rt_nil_check(F->s_668)).kind != ((rt_int)23LL))) && ((*(P422)rt_nil_check(F->s_668)).kind != ((rt_int)24LL))) && ((*(P422)rt_nil_check(F->s_668)).kind != ((rt_int)25LL))) && ((*(P422)rt_nil_check(F->s_668)).kind != ((rt_int)26LL))) && ((*(P422)rt_nil_check(F->s_668)).kind != ((rt_int)35LL))) && ((*(P422)rt_nil_check(F->s_668)).kind != ((rt_int)36LL)))) {
f_fail_21((*(P422)rt_nil_check(F->s_668)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P417)rt_nil_check(f_expect_id_74())), (*(P417)rt_nil_check(F->match_667))))) {
f_fail_21((*(P422)rt_nil_check(F->s_668)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P417)rt_nil_check(F->match_667))); b_; }));
}
(*(P422)rt_nil_check(F->s_668)).tag = F->match_667;
}
if ((F->labels_665 != NULL)) {
f_fail_21((*(P422)rt_nil_check(F->s_668)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_668;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_unlabeled_statement_124(void) {
  struct f_unlabeled_statement_124fr *F = rt_alloc(sizeof *F);
F->line_669 = f_cur_line_53();
F->x_670 = NULL;
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
F->x_670 = f_nn_46(((rt_int)25LL), F->line_669);
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_670)).a = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_670;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_132();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_670 = f_nn_46(((rt_int)27LL), F->line_669);
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_670)).name = f_expect_id_74();
F->result_ = F->x_670;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_670 = f_nn_46(((rt_int)28LL), F->line_669);
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P422)rt_nil_check(F->x_670)).a = f_expr_87();
}
F->result_ = F->x_670;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_670 = f_nn_46(((rt_int)30LL), F->line_669);
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_670)).name = f_expect_id_74();
F->result_ = F->x_670;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->result_ = f_nn_46(((rt_int)31LL), F->line_669);
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_670 = f_nn_46(((rt_int)34LL), F->line_669);
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_670)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P422)rt_nil_check(F->x_670)).e = f_actual_tt_81();
}
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P422)rt_nil_check(F->x_670)).b = f_actual_params_78();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P422)rt_nil_check(F->x_670)).a = f_postfix_97();
F->result_ = F->x_670;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_671 = NULL;
F->tail_672 = NULL;
F->x_670 = f_nn_46(((rt_int)35LL), F->line_669);
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
while (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_673 = NULL;
F->itail_674 = NULL;
F->more_675 = 1;
while (F->more_675) {
f_append_50(&F->invs_673, &F->itail_674, f_postfix_97());
F->more_675 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_50(&F->head_671, &F->tail_672, f_arm_128(F->invs_673, f_body_101(), F->line_669));
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P422)rt_nil_check(F->x_670)).a = F->head_671;
F->result_ = F->x_670;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_670 = f_nn_46(((rt_int)36LL), F->line_669);
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_670)).a = f_expr_87();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P422)rt_nil_check(F->x_670)).b = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_670;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_670 = f_nn_46(((rt_int)32LL), F->line_669);
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_670)).a = f_postfix_97();
if ((!(f_at_kind_59(((rt_int)1LL)) && rt_str_eq((*(P417)rt_nil_check((*(P418)rt_nil_check((*(P420)rt_nil_check(g_toks_446)).p[rt_index(g_tpos_448, (*(P420)rt_nil_check(g_toks_446)).lo, (*(P420)rt_nil_check(g_toks_446)).hi) - (*(P420)rt_nil_check(g_toks_446)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P422)rt_nil_check(F->x_670)).b = f_actual_params_78();
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P422)rt_nil_check(F->x_670)).c = f_expr_87();
}
F->result_ = F->x_670;
goto ret_;
}
{
F->target_676 = NULL;
F->target_676 = f_postfix_97();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_670 = f_nn_46(((rt_int)20LL), F->line_669);
(*(P422)rt_nil_check(F->x_670)).a = F->target_676;
(*(P422)rt_nil_check(F->x_670)).b = f_expr_87();
} else {
F->x_670 = f_nn_46(((rt_int)21LL), F->line_669);
(*(P422)rt_nil_check(F->x_670)).a = F->target_676;
}
}
F->result_ = F->x_670;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_arm_128(P422 cond_125, P422 b_126, rt_int line_127) {
  struct f_arm_128fr *F = rt_alloc(sizeof *F);
F->cond_125 = cond_125;
F->b_126 = b_126;
F->line_127 = line_127;
F->x_677 = NULL;
F->x_677 = f_nn_46(((rt_int)60LL), F->line_127);
(*(P422)rt_nil_check(F->x_677)).a = F->cond_125;
(*(P422)rt_nil_check(F->x_677)).b = F->b_126;
F->result_ = F->x_677;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_if_stmt_129(void) {
  struct f_if_stmt_129fr *F = rt_alloc(sizeof *F);
F->x_678 = NULL;
F->x_678 = f_nn_46(((rt_int)22LL), f_cur_line_53());
F->head_679 = NULL;
F->tail_680 = NULL;
F->cond_681 = NULL;
F->go_682 = 1;
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
F->cond_681 = f_expr_87();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_50(&F->head_679, &F->tail_680, f_arm_128(F->cond_681, f_body_101(), (*(P422)rt_nil_check(F->x_678)).line));
while (F->go_682) {
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_681 = f_expr_87();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_50(&F->head_679, &F->tail_680, f_arm_128(F->cond_681, f_body_101(), (*(P422)rt_nil_check(F->x_678)).line));
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P422)rt_nil_check(F->x_678)).flag = ((rt_int)1LL);
(*(P422)rt_nil_check(F->x_678)).b = f_body_101();
} else {
F->go_682 = 0;
}
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P422)rt_nil_check(F->x_678)).a = F->head_679;
F->result_ = F->x_678;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_case_stmt_130(void) {
  struct f_case_stmt_130fr *F = rt_alloc(sizeof *F);
F->x_683 = NULL;
F->x_683 = f_nn_46(((rt_int)23LL), f_cur_line_53());
F->head_684 = NULL;
F->tail_685 = NULL;
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_683)).a = f_expr_87();
while (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_686 = NULL;
F->ltail_687 = NULL;
F->more_688 = 1;
while (F->more_688) {
F->l_689 = NULL;
F->l_689 = f_nn_46(((rt_int)61LL), f_cur_line_53());
(*(P422)rt_nil_check(F->l_689)).a = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P422)rt_nil_check(F->l_689)).b = f_expr_87();
}
f_append_50(&F->labs_686, &F->ltail_687, F->l_689);
F->more_688 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_50(&F->head_684, &F->tail_685, f_arm_128(F->labs_686, f_body_101(), (*(P422)rt_nil_check(F->x_683)).line));
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P422)rt_nil_check(F->x_683)).flag = ((rt_int)1LL);
(*(P422)rt_nil_check(F->x_683)).c = f_body_101();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P422)rt_nil_check(F->x_683)).b = F->head_684;
F->result_ = F->x_683;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_repeat_stmt_131(void) {
  struct f_repeat_stmt_131fr *F = rt_alloc(sizeof *F);
F->x_690 = NULL;
F->x_690 = f_nn_46(((rt_int)24LL), f_cur_line_53());
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P422)rt_nil_check(F->x_690)).flag = ((rt_int)1LL);
(*(P422)rt_nil_check(F->x_690)).name = f_expect_id_74();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P422)rt_nil_check(F->x_690)).ival = ((rt_int)1LL);
}
(*(P422)rt_nil_check(F->x_690)).a = f_p_subtype_77();
} else {
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P422)rt_nil_check(F->x_690)).a = f_expr_87();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P422)rt_nil_check(F->x_690)).b = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_690;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_guard_stmt_132(void) {
  struct f_guard_stmt_132fr *F = rt_alloc(sizeof *F);
F->x_691 = NULL;
F->x_691 = f_nn_46(((rt_int)26LL), f_cur_line_53());
F->head_692 = NULL;
F->tail_693 = NULL;
g_tpos_448 = rt_add(g_tpos_448, ((rt_int)1LL));
(*(P422)rt_nil_check(F->x_691)).a = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_694 = NULL;
F->h_694 = f_nn_46(((rt_int)62LL), f_cur_line_53());
(*(P422)rt_nil_check(F->h_694)).a = f_id_list_76();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P422)rt_nil_check(F->h_694)).b = f_body_101();
f_append_50(&F->head_692, &F->tail_693, F->h_694);
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P422)rt_nil_check(F->x_691)).flag = ((rt_int)1LL);
(*(P422)rt_nil_check(F->x_691)).c = f_body_101();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P422)rt_nil_check(F->x_691)).b = F->head_692;
F->result_ = F->x_691;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_program_133(void) {
  struct f_program_133fr *F = rt_alloc(sizeof *F);
F->head_695 = NULL;
F->tail_696 = NULL;
while ((!f_at_kind_59(((rt_int)0LL)))) {
if ((!f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
f_append_50(&F->head_695, &F->tail_696, f_capsule_decl_116());
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_695;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_hash_135(rstr *s_134) {
  struct f_hash_135fr *F = rt_alloc(sizeof *F);
F->s_134 = s_134;
F->h_697 = ((rt_int)0LL);
{ rt_int lo699 = ((rt_int)1LL), hi700 = ((*F->s_134)).len;
for (rt_int it701 = lo699; it701 <= hi700; it701++) {
F->i_698 = it701;
F->h_697 = rt_mod(rt_add(rt_mul(F->h_697, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_134), F->i_698)) + 1)), ((rt_int)4093LL));
}
}
F->result_ = F->h_697;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P432 f_lookup_137(rstr *name_136) {
  struct f_lookup_137fr *F = rt_alloc(sizeof *F);
F->name_136 = name_136;
F->y_702 = NULL;
F->y_702 = (*(P438)rt_nil_check(g_table_450)).p[rt_index(f_hash_135(&(*F->name_136)), (*(P438)rt_nil_check(g_table_450)).lo, (*(P438)rt_nil_check(g_table_450)).hi) - (*(P438)rt_nil_check(g_table_450)).lo];
while ((F->y_702 != NULL)) {
if (rt_str_eq((*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_702)).name)), (*F->name_136))) {
F->result_ = F->y_702;
goto ret_;
}
F->y_702 = (*(P432)rt_nil_check(F->y_702)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P432 f_lookup_decl_139(P422 d_138) {
  struct f_lookup_decl_139fr *F = rt_alloc(sizeof *F);
F->d_138 = d_138;
F->y_703 = NULL;
F->y_703 = (*(P438)rt_nil_check(g_table_450)).p[rt_index(f_hash_135(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->d_138)).name))), (*(P438)rt_nil_check(g_table_450)).lo, (*(P438)rt_nil_check(g_table_450)).hi) - (*(P438)rt_nil_check(g_table_450)).lo];
while ((F->y_703 != NULL)) {
if (((*(P432)rt_nil_check(F->y_703)).decl == F->d_138)) {
F->result_ = F->y_703;
goto ret_;
}
F->y_703 = (*(P432)rt_nil_check(F->y_703)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_define_142(P432 y_140, rt_int line_141) {
  struct f_define_142fr *F = rt_alloc(sizeof *F);
F->y_140 = y_140;
F->line_141 = line_141;
F->h_704 = f_hash_135(&(*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_140)).name)));
F->z_705 = NULL;
F->z_705 = (*(P438)rt_nil_check(g_table_450)).p[rt_index(F->h_704, (*(P438)rt_nil_check(g_table_450)).lo, (*(P438)rt_nil_check(g_table_450)).hi) - (*(P438)rt_nil_check(g_table_450)).lo];
while ((F->z_705 != NULL)) {
if (((((*(P432)rt_nil_check(F->z_705)).depth == g_depth_451) && rt_str_eq((*(P417)rt_nil_check((*(P432)rt_nil_check(F->z_705)).name)), (*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_140)).name)))) && (!(((f_overloadable_144(F->y_140) && f_overloadable_144(F->z_705)) && ((*(P432)rt_nil_check(F->z_705)).kind == (*(P432)rt_nil_check(F->y_140)).kind)) && (!f_same_signature_147((*(P432)rt_nil_check(F->y_140)).params, (*(P432)rt_nil_check(F->z_705)).params)))))) {
f_fail_21(F->line_141, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_140)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_705 = (*(P432)rt_nil_check(F->z_705)).chain;
}
(*(P432)rt_nil_check(F->y_140)).depth = g_depth_451;
(*(P432)rt_nil_check(F->y_140)).chain = (*(P438)rt_nil_check(g_table_450)).p[rt_index(F->h_704, (*(P438)rt_nil_check(g_table_450)).lo, (*(P438)rt_nil_check(g_table_450)).hi) - (*(P438)rt_nil_check(g_table_450)).lo];
(*(P438)rt_nil_check(g_table_450)).p[rt_index(F->h_704, (*(P438)rt_nil_check(g_table_450)).lo, (*(P438)rt_nil_check(g_table_450)).hi) - (*(P438)rt_nil_check(g_table_450)).lo] = F->y_140;
(*(P432)rt_nil_check(F->y_140)).stack = g_scope_stack_452;
g_scope_stack_452 = F->y_140;
ret_:
  return;
}

static int f_overloadable_144(P432 y_143) {
  struct f_overloadable_144fr *F = rt_alloc(sizeof *F);
F->y_143 = y_143;
F->result_ = ((((*(P432)rt_nil_check(F->y_143)).kind == ((rt_int)3LL)) || ((*(P432)rt_nil_check(F->y_143)).kind == ((rt_int)4LL))) || ((*(P432)rt_nil_check(F->y_143)).kind == ((rt_int)9LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_signature_147(P430 a_145, P430 b_146) {
  struct f_same_signature_147fr *F = rt_alloc(sizeof *F);
F->a_145 = a_145;
F->b_146 = b_146;
F->x_706 = NULL;
F->x_706 = F->a_145;
F->y_707 = NULL;
F->y_707 = F->b_146;
while (((F->x_706 != NULL) && (F->y_707 != NULL))) {
if ((!f_same_161((*(P430)rt_nil_check(F->x_706)).t, (*(P430)rt_nil_check(F->y_707)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_706 = (*(P430)rt_nil_check(F->x_706)).next;
F->y_707 = (*(P430)rt_nil_check(F->y_707)).next;
}
F->result_ = ((F->x_706 == NULL) && (F->y_707 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_open_scope_148(void) {
  struct f_open_scope_148fr *F = rt_alloc(sizeof *F);
g_depth_451 = rt_add(g_depth_451, ((rt_int)1LL));
ret_:
  return;
}

static void f_close_scope_149(void) {
  struct f_close_scope_149fr *F = rt_alloc(sizeof *F);
while (((g_scope_stack_452 != NULL) && ((*(P432)rt_nil_check(g_scope_stack_452)).depth == g_depth_451))) {
(*(P438)rt_nil_check(g_table_450)).p[rt_index(f_hash_135(&(*(P417)rt_nil_check((*(P432)rt_nil_check(g_scope_stack_452)).name))), (*(P438)rt_nil_check(g_table_450)).lo, (*(P438)rt_nil_check(g_table_450)).hi) - (*(P438)rt_nil_check(g_table_450)).lo] = (*(P432)rt_nil_check(g_scope_stack_452)).chain;
g_scope_stack_452 = (*(P432)rt_nil_check(g_scope_stack_452)).stack;
}
g_depth_451 = rt_sub(g_depth_451, ((rt_int)1LL));
ret_:
  return;
}

static P432 f_new_sym_152(rt_int kind_150, P417 name_151) {
  struct f_new_sym_152fr *F = rt_alloc(sizeof *F);
F->kind_150 = kind_150;
F->name_151 = name_151;
F->y_708 = NULL;
{ R433 *cell709 = rt_alloc(sizeof(R433));
(*cell709).name = NULL;
(*cell709).t = NULL;
(*cell709).c = NULL;
(*cell709).access = NULL;
(*cell709).cname = NULL;
(*cell709).st = NULL;
(*cell709).decl = NULL;
(*cell709).params = NULL;
(*cell709).result = NULL;
(*cell709).members = NULL;
(*cell709).mnext = NULL;
(*cell709).binds = NULL;
(*cell709).insts = NULL;
(*cell709).chain = NULL;
(*cell709).stack = NULL;
F->y_708 = cell709;
}
(*(P432)rt_nil_check(F->y_708)).kind = F->kind_150;
(*(P432)rt_nil_check(F->y_708)).name = F->name_151;
F->result_ = F->y_708;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P426 f_new_typ_154(rt_int kind_153) {
  struct f_new_typ_154fr *F = rt_alloc(sizeof *F);
F->kind_153 = kind_153;
F->t_710 = NULL;
{ R427 *cell711 = rt_alloc(sizeof(R427));
(*cell711).name = NULL;
(*cell711).lits = NULL;
(*cell711).elem = NULL;
(*cell711).idx = NULL;
(*cell711).idx2 = NULL;
(*cell711).elemcons = NULL;
(*cell711).elemst = NULL;
(*cell711).under = NULL;
(*cell711).tparams = NULL;
(*cell711).ocap = NULL;
(*cell711).fields = NULL;
(*cell711).target = NULL;
(*cell711).decl = NULL;
(*cell711).cname = NULL;
(*cell711).next = NULL;
F->t_710 = cell711;
}
(*(P426)rt_nil_check(F->t_710)).kind = F->kind_153;
F->result_ = F->t_710;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P424 f_new_cons_155(void) {
  struct f_new_cons_155fr *F = rt_alloc(sizeof *F);
F->c_712 = NULL;
{ R425 *cell713 = rt_alloc(sizeof(R425));
(*cell713).lo = NULL;
(*cell713).hi = NULL;
(*cell713).lo2 = NULL;
(*cell713).hi2 = NULL;
(*cell713).slen = NULL;
(*cell713).args = NULL;
F->c_712 = cell713;
}
F->result_ = F->c_712;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_lits_158(P422 a_156, P422 b_157) {
  struct f_same_lits_158fr *F = rt_alloc(sizeof *F);
F->a_156 = a_156;
F->b_157 = b_157;
F->x_714 = NULL;
F->x_714 = F->a_156;
F->y_715 = NULL;
F->y_715 = F->b_157;
while (((F->x_714 != NULL) && (F->y_715 != NULL))) {
if ((!rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->x_714)).name)), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->y_715)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_714 = (*(P422)rt_nil_check(F->x_714)).next;
F->y_715 = (*(P422)rt_nil_check(F->y_715)).next;
}
F->result_ = ((F->x_714 == NULL) && (F->y_715 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_161(P426 a_159, P426 b_160) {
  struct f_same_161fr *F = rt_alloc(sizeof *F);
F->a_159 = a_159;
F->b_160 = b_160;
if ((F->a_159 == F->b_160)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_159 == NULL) || (F->b_160 == NULL)) || ((*(P426)rt_nil_check(F->a_159)).kind != (*(P426)rt_nil_check(F->b_160)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P426)rt_nil_check(F->a_159)).kind == ((rt_int)1LL)) || ((*(P426)rt_nil_check(F->a_159)).kind == ((rt_int)2LL))) || ((*(P426)rt_nil_check(F->a_159)).kind == ((rt_int)3LL))) || ((*(P426)rt_nil_check(F->a_159)).kind == ((rt_int)5LL))) || ((*(P426)rt_nil_check(F->a_159)).kind == ((rt_int)9LL))) || ((*(P426)rt_nil_check(F->a_159)).kind == ((rt_int)10LL)))) {
F->result_ = 1;
goto ret_;
}
if (((*(P426)rt_nil_check(F->a_159)).kind == ((rt_int)4LL))) {
F->result_ = f_same_lits_158((*(P426)rt_nil_check(F->a_159)).lits, (*(P426)rt_nil_check(F->b_160)).lits);
goto ret_;
}
if (((*(P426)rt_nil_check(F->a_159)).kind == ((rt_int)6LL))) {
if ((((*(P426)rt_nil_check(F->a_159)).idx2 == NULL) != ((*(P426)rt_nil_check(F->b_160)).idx2 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_161((*(P426)rt_nil_check(F->a_159)).elem, (*(P426)rt_nil_check(F->b_160)).elem) && f_same_161((*(P426)rt_nil_check(F->a_159)).idx, (*(P426)rt_nil_check(F->b_160)).idx));
goto ret_;
}
if ((((*(P426)rt_nil_check(F->a_159)).kind == ((rt_int)16LL)) || ((*(P426)rt_nil_check(F->a_159)).kind == ((rt_int)12LL)))) {
F->result_ = f_same_161((*(P426)rt_nil_check(F->a_159)).elem, (*(P426)rt_nil_check(F->b_160)).elem);
goto ret_;
}
if (((*(P426)rt_nil_check(F->a_159)).kind == ((rt_int)7LL))) {
F->f_716 = NULL;
F->f_716 = (*(P426)rt_nil_check(F->a_159)).fields;
F->g_717 = NULL;
F->g_717 = (*(P426)rt_nil_check(F->b_160)).fields;
while (((F->f_716 != NULL) && (F->g_717 != NULL))) {
if (((!rt_str_eq((*(P417)rt_nil_check((*(P428)rt_nil_check(F->f_716)).name)), (*(P417)rt_nil_check((*(P428)rt_nil_check(F->g_717)).name)))) || (!f_same_161((*(P428)rt_nil_check(F->f_716)).t, (*(P428)rt_nil_check(F->g_717)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_716 = (*(P428)rt_nil_check(F->f_716)).next;
F->g_717 = (*(P428)rt_nil_check(F->g_717)).next;
}
F->result_ = ((F->f_716 == NULL) && (F->g_717 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P426 f_base_of_163(P426 t_162) {
  struct f_base_of_163fr *F = rt_alloc(sizeof *F);
F->t_162 = t_162;
if ((((F->t_162 != NULL) && ((*(P426)rt_nil_check(F->t_162)).kind == ((rt_int)15LL))) && ((*(P426)rt_nil_check(F->t_162)).tparams == NULL))) {
F->result_ = f_base_of_163((*(P426)rt_nil_check(F->t_162)).under);
goto ret_;
}
F->result_ = F->t_162;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P424 f_base_cons_166(P426 t_164, P424 c_165) {
  struct f_base_cons_166fr *F = rt_alloc(sizeof *F);
F->t_164 = t_164;
F->c_165 = c_165;
if (((((F->t_164 != NULL) && ((*(P426)rt_nil_check(F->t_164)).kind == ((rt_int)15LL))) && ((*(P426)rt_nil_check(F->t_164)).tparams == NULL)) && ((*(P426)rt_nil_check(F->t_164)).elemcons != NULL))) {
F->result_ = f_base_cons_166((*(P426)rt_nil_check(F->t_164)).under, (*(P426)rt_nil_check(F->t_164)).elemcons);
goto ret_;
}
F->result_ = F->c_165;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_kind_name_168(P426 t_167) {
  struct f_kind_name_168fr *F = rt_alloc(sizeof *F);
F->t_167 = t_167;
{ rt_int sel718 = (*(P426)rt_nil_check(F->t_167)).kind;
if (0 || (sel718 == ((rt_int)1LL))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel718 == ((rt_int)2LL))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel718 == ((rt_int)3LL))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel718 == ((rt_int)4LL))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel718 == ((rt_int)5LL))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel718 == ((rt_int)6LL))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel718 == ((rt_int)7LL))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel718 == ((rt_int)8LL))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_167)).name)));
goto ret_;
} else if (0 || (sel718 == ((rt_int)11LL))) {
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

static void f_check_type_172(P426 got_169, P426 want_170, rt_int line_171) {
  struct f_check_type_172fr *F = rt_alloc(sizeof *F);
F->got_169 = got_169;
F->want_170 = want_170;
F->line_171 = line_171;
if ((F->want_170 == NULL)) {
goto ret_;
}
if ((((*(P426)rt_nil_check(F->got_169)).kind == ((rt_int)11LL)) && ((*(P426)rt_nil_check(F->want_170)).kind == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_161(F->got_169, F->want_170))) {
f_fail_21(F->line_171, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_168(F->got_169)), rt_str(" where ", 7)), f_kind_name_168(F->want_170)), rt_str(" is required", 12)); b_; }));
}
ret_:
  return;
}

static rstr f_ctype_174(P426 t_173) {
  struct f_ctype_174fr *F = rt_alloc(sizeof *F);
F->t_173 = t_173;
{ rt_int sel719 = (*(P426)rt_nil_check(F->t_173)).kind;
if (0 || (sel719 == ((rt_int)1LL))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel719 == ((rt_int)2LL)) || (sel719 == ((rt_int)4LL)) || (sel719 == ((rt_int)10LL))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel719 == ((rt_int)3LL))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel719 == ((rt_int)5LL))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel719 == ((rt_int)9LL))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel719 == ((rt_int)12LL))) {
F->result_ = rt_str("rt_mbox", 7);
goto ret_;
} else if (0 || (sel719 == ((rt_int)13LL))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel719 == ((rt_int)14LL))) {
F->result_ = rt_str("rt_act", 6);
goto ret_;
} else if (0 || (sel719 == ((rt_int)16LL))) {
F->result_ = rt_str("rset", 4);
goto ret_;
} else {
if (((*(P426)rt_nil_check(F->t_173)).cname == NULL)) {
f_declare_ctype_178(F->t_173);
} else if (((((*(P426)rt_nil_check(F->t_173)).kind == ((rt_int)7LL)) && (*(P426)rt_nil_check(F->t_173)).forward) && (!(*(P426)rt_nil_check(F->t_173)).defined))) {
(*(P426)rt_nil_check(F->t_173)).defined = 1;
f_put_25(g_out_types_455, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_173)).cname))), rt_str(" { ", 3)), f_field_decls_176(F->t_173)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_173)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_decls_176(P426 t_175) {
  struct f_field_decls_176fr *F = rt_alloc(sizeof *F);
F->t_175 = t_175;
F->f_720 = NULL;
F->f_720 = (*(P426)rt_nil_check(F->t_175)).fields;
F->s_721 = NULL;
F->s_721 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_720 != NULL)) {
F->s_721 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->s_721)), f_ctype_174((*(P428)rt_nil_check(F->f_720)).t)), rt_str(" ", 1)), f_lower_s_15(&(*(P417)rt_nil_check((*(P428)rt_nil_check(F->f_720)).name)))), rt_str("; ", 2)); b_; }));
F->f_720 = (*(P428)rt_nil_check(F->f_720)).next;
}
F->result_ = (*(P417)rt_nil_check(F->s_721));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_declare_ctype_178(P426 t_177) {
  struct f_declare_ctype_178fr *F = rt_alloc(sizeof *F);
F->t_177 = t_177;
F->u_722 = NULL;
F->u_722 = g_all_types_453;
if ((((*(P426)rt_nil_check(F->t_177)).kind == ((rt_int)8LL)) && ((*(P426)rt_nil_check(F->t_177)).target == NULL))) {
f_finish_ptr_246(F->t_177);
if (((*(P426)rt_nil_check(F->t_177)).cname != NULL)) {
goto ret_;
}
}
if (((*(P426)rt_nil_check(F->t_177)).kind != ((rt_int)8LL))) {
while ((F->u_722 != NULL)) {
if ((((*(P426)rt_nil_check(F->u_722)).kind == (*(P426)rt_nil_check(F->t_177)).kind) && f_same_161(F->u_722, F->t_177))) {
(*(P426)rt_nil_check(F->t_177)).cname = (*(P426)rt_nil_check(F->u_722)).cname;
goto ret_;
}
F->u_722 = (*(P426)rt_nil_check(F->u_722)).next;
}
}
if ((((*(P426)rt_nil_check(F->t_177)).kind == ((rt_int)15LL)) && ((*(P426)rt_nil_check(F->t_177)).tparams == NULL))) {
(*(P426)rt_nil_check(F->t_177)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_174((*(P426)rt_nil_check(F->t_177)).under); b_; }));
goto ret_;
}
if (((*(P426)rt_nil_check(F->t_177)).kind == ((rt_int)6LL))) {
(*(P426)rt_nil_check(F->t_177)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P426)rt_nil_check(F->t_177)).kind == ((rt_int)15LL))) {
(*(P426)rt_nil_check(F->t_177)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((*(P426)rt_nil_check(F->t_177)).kind == ((rt_int)7LL))) {
(*(P426)rt_nil_check(F->t_177)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P426)rt_nil_check(F->t_177)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P426)rt_nil_check(F->t_177)).next = g_all_types_453;
g_all_types_453 = F->t_177;
if (((*(P426)rt_nil_check(F->t_177)).kind == ((rt_int)8LL))) {
F->target_723 = NULL;
F->target_723 = (*(P426)rt_nil_check(F->t_177)).target;
if (((*(P426)rt_nil_check(F->target_723)).kind == ((rt_int)7LL))) {
if (((*(P426)rt_nil_check(F->target_723)).cname == NULL)) {
(*(P426)rt_nil_check(F->target_723)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P426)rt_nil_check(F->target_723)).next = g_all_types_453;
g_all_types_453 = F->target_723;
f_put_25(g_out_types_455, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->target_723)).cname))), rt_str(" ", 1)), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->target_723)).cname))), rt_str(";", 1)); b_; }));
(*(P426)rt_nil_check(F->target_723)).forward = 1;
}
f_put_25(g_out_types_455, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->target_723)).cname))), rt_str(" *", 2)), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_177)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_25(g_out_types_455, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_174(F->target_723)), rt_str(" *", 2)), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_177)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P426)rt_nil_check(F->t_177)).kind == ((rt_int)6LL))) {
f_put_25(g_out_types_455, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_177)).cname))), rt_str(" ", 1)), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_177)).cname))), rt_str(";", 1)); b_; }));
f_put_25(g_out_types_455, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_177)).cname))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_174((*(P426)rt_nil_check(F->t_177)).elem)), rt_str(" *p; };", 7)); b_; }));
} else if (((*(P426)rt_nil_check(F->t_177)).kind == ((rt_int)15LL))) {
F->p_724 = NULL;
F->p_724 = (*(P426)rt_nil_check(F->t_177)).tparams;
F->fs_725 = NULL;
F->fs_725 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_724 != NULL)) {
F->fs_725 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->fs_725)), rt_str("rt_int p_", 9)), f_lower_s_15(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_724)).name)))), rt_str("; ", 2)); b_; }));
F->p_724 = (*(P422)rt_nil_check(F->p_724)).next;
}
f_put_25(g_out_types_455, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_177)).cname))), rt_str(" ", 1)), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_177)).cname))), rt_str(";", 1)); b_; }));
f_put_25(g_out_types_455, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_177)).cname))), rt_str(" {", 2)), (*(P417)rt_nil_check(F->fs_725))), f_ctype_174((*(P426)rt_nil_check(F->t_177)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_25(g_out_types_455, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_177)).cname))), rt_str(" ", 1)), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_177)).cname))), rt_str(";", 1)); b_; }));
(*(P426)rt_nil_check(F->t_177)).defined = 1;
f_put_25(g_out_types_455, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_177)).cname))), rt_str(" { ", 3)), f_field_decls_176(F->t_177)), rt_str(" };", 3)); b_; }));
}
ret_:
  return;
}

static void f_init_ascii_179(void) {
  struct f_init_ascii_179fr *F = rt_alloc(sizeof *F);
F->names_726 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)));
F->head_727 = NULL;
F->tail_728 = NULL;
F->start_729 = ((rt_int)1LL);
{ rt_int lo731 = ((rt_int)1LL), hi732 = (F->names_726).len;
for (rt_int it733 = lo731; it733 <= hi732; it733++) {
F->i_730 = it733;
if ((rt_str_get(F->names_726, F->i_730) == 32)) {
F->lit_734 = NULL;
F->lit_734 = f_nn_46(((rt_int)4LL), ((rt_int)0LL));
(*(P422)rt_nil_check(F->lit_734)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice(F->names_726, F->start_729, rt_sub(F->i_730, ((rt_int)1LL))); b_; }));
f_append_50(&F->head_727, &F->tail_728, F->lit_734);
F->start_729 = rt_add(F->i_730, ((rt_int)1LL));
}
}
}
g_ty_ascii_481 = f_new_typ_154(((rt_int)4LL));
(*(P426)rt_nil_check(g_ty_ascii_481)).lits = F->head_727;
(*(P426)rt_nil_check(g_ty_ascii_481)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  return;
}

static rt_int f_lit_index_182(P422 lits_180, rstr *name_181) {
  struct f_lit_index_182fr *F = rt_alloc(sizeof *F);
F->lits_180 = lits_180;
F->name_181 = name_181;
F->i_735 = ((rt_int)0LL);
F->l_736 = NULL;
F->l_736 = F->lits_180;
while ((F->l_736 != NULL)) {
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->l_736)).name)), (*F->name_181))) {
F->result_ = F->i_735;
goto ret_;
}
F->i_735 = rt_add(F->i_735, ((rt_int)1LL));
F->l_736 = (*(P422)rt_nil_check(F->l_736)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P426 f_resolve_subtype_185(P422 st_183, P424 *c_184) {
  struct f_resolve_subtype_185fr *F = rt_alloc(sizeof *F);
F->st_183 = st_183;
F->c_184 = c_184;
F->t_737 = NULL;
F->dummy_739 = NULL;
(*F->c_184) = f_new_cons_155();
{ rt_int sel740 = (*(P422)rt_nil_check(F->st_183)).kind;
if (0 || (sel740 == ((rt_int)70LL))) {
if (((*(P422)rt_nil_check(F->st_183)).a != NULL)) {
(*(P424)rt_nil_check((*F->c_184))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_369((*(P422)rt_nil_check(F->st_183)).a, g_ty_int_478, &F->dummy_739); b_; }));
(*(P424)rt_nil_check((*F->c_184))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_369((*(P422)rt_nil_check(F->st_183)).b, g_ty_int_478, &F->dummy_739); b_; }));
(*(P424)rt_nil_check((*F->c_184))).mlo = f_manifest_204((*(P422)rt_nil_check(F->st_183)).a, &F->ok_738);
(*(P424)rt_nil_check((*F->c_184))).hasm = F->ok_738;
(*(P424)rt_nil_check((*F->c_184))).mhi = f_manifest_204((*(P422)rt_nil_check(F->st_183)).b, &F->ok_738);
(*(P424)rt_nil_check((*F->c_184))).hasm = ((*(P424)rt_nil_check((*F->c_184))).hasm && F->ok_738);
}
F->result_ = g_ty_int_478;
goto ret_;
} else if (0 || (sel740 == ((rt_int)71LL))) {
F->result_ = g_ty_float_480;
goto ret_;
} else if (0 || (sel740 == ((rt_int)72LL))) {
F->t_737 = f_new_typ_154(((rt_int)4LL));
(*(P426)rt_nil_check(F->t_737)).lits = (*(P422)rt_nil_check(F->st_183)).a;
if (((*(P422)rt_nil_check(F->st_183)).b != NULL)) {
(*(P424)rt_nil_check((*F->c_184))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_369((*(P422)rt_nil_check(F->st_183)).b, F->t_737, &F->dummy_739); b_; }));
(*(P424)rt_nil_check((*F->c_184))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_369((*(P422)rt_nil_check(F->st_183)).c, F->t_737, &F->dummy_739); b_; }));
}
F->result_ = F->t_737;
goto ret_;
} else if (0 || (sel740 == ((rt_int)73LL))) {
F->t_737 = f_resolve_subtype_185((*(P422)rt_nil_check(F->st_183)).a, &(*F->c_184));
if ((!f_same_161(F->t_737, g_ty_ascii_481))) {
f_fail_21((*(P422)rt_nil_check(F->st_183)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
(*F->c_184) = f_new_cons_155();
if (((*(P422)rt_nil_check(F->st_183)).b != NULL)) {
(*(P424)rt_nil_check((*F->c_184))).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_369((*(P422)rt_nil_check(F->st_183)).b, g_ty_int_478, &F->dummy_739); b_; }));
}
F->result_ = g_ty_string_482;
goto ret_;
} else if (0 || (sel740 == ((rt_int)74LL))) {
if ((f_list_len_52((*(P422)rt_nil_check(F->st_183)).a) > ((rt_int)2LL))) {
f_fail_21((*(P422)rt_nil_check(F->st_183)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("arrays of more than two dimensions are not handled", 50); b_; }));
}
{
F->ic_741 = NULL;
F->ic2_742 = NULL;
F->ec_743 = NULL;
F->it_744 = NULL;
F->it_744 = f_resolve_subtype_185((*(P422)rt_nil_check(F->st_183)).a, &F->ic_741);
F->et_745 = NULL;
F->et_745 = f_resolve_subtype_185((*(P422)rt_nil_check(F->st_183)).b, &F->ec_743);
F->ic_741 = f_base_cons_166(F->it_744, F->ic_741);
F->t_737 = f_new_typ_154(((rt_int)6LL));
(*(P426)rt_nil_check(F->t_737)).idx = F->it_744;
(*(P426)rt_nil_check(F->t_737)).elem = F->et_745;
(*(P426)rt_nil_check(F->t_737)).elemcons = F->ec_743;
(*(P426)rt_nil_check(F->t_737)).elemst = (*(P422)rt_nil_check(F->st_183)).b;
if (((*(P424)rt_nil_check(F->ic_741)).lo != NULL)) {
(*(P424)rt_nil_check((*F->c_184))).lo = (*(P424)rt_nil_check(F->ic_741)).lo;
(*(P424)rt_nil_check((*F->c_184))).hi = (*(P424)rt_nil_check(F->ic_741)).hi;
} else if (((*(P426)rt_nil_check(f_base_of_163(F->it_744))).kind == ((rt_int)4LL))) {
(*(P424)rt_nil_check((*F->c_184))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P424)rt_nil_check((*F->c_184))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_52((*(P426)rt_nil_check(f_base_of_163(F->it_744))).lits), ((rt_int)1LL))); b_; }));
}
(*(P424)rt_nil_check((*F->c_184))).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P424)rt_nil_check((*F->c_184))).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
if (((*(P422)rt_nil_check((*(P422)rt_nil_check(F->st_183)).a)).next != NULL)) {
(*(P426)rt_nil_check(F->t_737)).idx2 = f_resolve_subtype_185((*(P422)rt_nil_check((*(P422)rt_nil_check(F->st_183)).a)).next, &F->ic2_742);
if (((*(P424)rt_nil_check(F->ic2_742)).lo != NULL)) {
(*(P424)rt_nil_check((*F->c_184))).lo2 = (*(P424)rt_nil_check(F->ic2_742)).lo;
(*(P424)rt_nil_check((*F->c_184))).hi2 = (*(P424)rt_nil_check(F->ic2_742)).hi;
} else if (((*(P426)rt_nil_check((*(P426)rt_nil_check(F->t_737)).idx2)).kind == ((rt_int)4LL))) {
(*(P424)rt_nil_check((*F->c_184))).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P424)rt_nil_check((*F->c_184))).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_52((*(P426)rt_nil_check((*(P426)rt_nil_check(F->t_737)).idx2)).lits), ((rt_int)1LL))); b_; }));
}
}
}
F->result_ = F->t_737;
goto ret_;
} else if (0 || (sel740 == ((rt_int)77LL))) {
F->t_737 = f_new_typ_154(((rt_int)16LL));
{
F->ec_746 = NULL;
(*(P426)rt_nil_check(F->t_737)).elem = f_resolve_subtype_185((*(P422)rt_nil_check(F->st_183)).a, &F->ec_746);
(*(P426)rt_nil_check(F->t_737)).elemcons = F->ec_746;
}
F->result_ = F->t_737;
goto ret_;
} else if (0 || (sel740 == ((rt_int)75LL))) {
F->t_737 = f_new_typ_154(((rt_int)7LL));
{
F->comp_747 = NULL;
F->comp_747 = (*(P422)rt_nil_check(F->st_183)).a;
F->tail_748 = NULL;
while ((F->comp_747 != NULL)) {
F->cc_749 = NULL;
F->f_750 = NULL;
{ R429 *cell751 = rt_alloc(sizeof(R429));
(*cell751).name = NULL;
(*cell751).t = NULL;
(*cell751).c = NULL;
(*cell751).st = NULL;
(*cell751).next = NULL;
F->f_750 = cell751;
}
(*(P428)rt_nil_check(F->f_750)).name = (*(P422)rt_nil_check(F->comp_747)).name;
(*(P428)rt_nil_check(F->f_750)).t = f_resolve_subtype_185((*(P422)rt_nil_check(F->comp_747)).a, &F->cc_749);
(*(P428)rt_nil_check(F->f_750)).c = F->cc_749;
(*(P428)rt_nil_check(F->f_750)).st = (*(P422)rt_nil_check(F->comp_747)).a;
if ((F->tail_748 == NULL)) {
(*(P426)rt_nil_check(F->t_737)).fields = F->f_750;
} else {
(*(P428)rt_nil_check(F->tail_748)).next = F->f_750;
}
F->tail_748 = F->f_750;
F->comp_747 = (*(P422)rt_nil_check(F->comp_747)).next;
}
}
F->result_ = F->t_737;
goto ret_;
} else if (0 || (sel740 == ((rt_int)79LL))) {
F->result_ = g_ty_file_484;
goto ret_;
} else if (0 || (sel740 == ((rt_int)78LL))) {
{
F->ec_752 = NULL;
F->t_737 = f_new_typ_154(((rt_int)12LL));
(*(P426)rt_nil_check(F->t_737)).elem = f_resolve_subtype_185((*(P422)rt_nil_check(F->st_183)).a, &F->ec_752);
(*(P426)rt_nil_check(F->t_737)).elemcons = F->ec_752;
if (((*(P422)rt_nil_check(F->st_183)).b != NULL)) {
(*(P424)rt_nil_check((*F->c_184))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_369((*(P422)rt_nil_check(F->st_183)).b, g_ty_int_478, &F->dummy_739); b_; }));
}
}
F->result_ = F->t_737;
goto ret_;
} else if (0 || (sel740 == ((rt_int)80LL))) {
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->st_183)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_479;
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->st_183)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_481;
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->st_183)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_486;
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->st_183)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_487;
goto ret_;
}
{
F->y_753 = NULL;
F->y_753 = f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->st_183)).name)));
if ((F->y_753 == NULL)) {
f_fail_21((*(P422)rt_nil_check(F->st_183)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->st_183)).name))); b_; }));
}
if (((((*(P432)rt_nil_check(F->y_753)).kind == ((rt_int)5LL)) && ((*(P432)rt_nil_check(F->y_753)).t != NULL)) && ((*(P426)rt_nil_check((*(P432)rt_nil_check(F->y_753)).t)).kind == ((rt_int)15LL)))) {
F->result_ = f_new_type_197(F->y_753, F->st_183, &(*F->c_184));
goto ret_;
}
if (((((*(P432)rt_nil_check(F->y_753)).kind == ((rt_int)6LL)) || ((*(P432)rt_nil_check(F->y_753)).kind == ((rt_int)5LL))) && ((*(P432)rt_nil_check(F->y_753)).t != NULL))) {
if (((*(P432)rt_nil_check(F->y_753)).c != NULL)) {
(*F->c_184) = (*(P432)rt_nil_check(F->y_753)).c;
}
F->result_ = (*(P432)rt_nil_check(F->y_753)).t;
goto ret_;
}
if (((((*(P432)rt_nil_check(F->y_753)).kind == ((rt_int)5LL)) && ((*(P432)rt_nil_check(F->y_753)).decl != NULL)) && ((*(P422)rt_nil_check((*(P432)rt_nil_check(F->y_753)).decl)).kind == ((rt_int)43LL)))) {
F->result_ = f_new_type_197(F->y_753, F->st_183, &(*F->c_184));
goto ret_;
}
if ((((*(P432)rt_nil_check(F->y_753)).kind == ((rt_int)6LL)) || ((*(P432)rt_nil_check(F->y_753)).kind == ((rt_int)5LL)))) {
F->result_ = f_resolve_subtype_185((*(P432)rt_nil_check(F->y_753)).st, &(*F->c_184));
goto ret_;
}
f_fail_21((*(P422)rt_nil_check(F->st_183)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->st_183)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_21((*(P422)rt_nil_check(F->st_183)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_opened_187(P426 t_186) {
  struct f_opened_187fr *F = rt_alloc(sizeof *F);
F->t_186 = t_186;
F->c_754 = NULL;
F->c_754 = g_caps_467;
if (((((*(P426)rt_nil_check(F->t_186)).kind != ((rt_int)15LL)) || ((*(P426)rt_nil_check(F->t_186)).ocap == NULL)) || ((*(P422)rt_nil_check((*(P426)rt_nil_check(F->t_186)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_754 != NULL)) {
if (((*(P442)rt_nil_check(F->c_754)).d == (*(P426)rt_nil_check(F->t_186)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_754 = (*(P442)rt_nil_check(F->c_754)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_replace_all_191(rstr *s_188, rstr *pat_189, rstr *r_190) {
  struct f_replace_all_191fr *F = rt_alloc(sizeof *F);
F->s_188 = s_188;
F->pat_189 = pat_189;
F->r_190 = r_190;
F->i_755 = ((rt_int)1LL);
if (((((*F->pat_189)).len == ((rt_int)0LL)) || (((*F->s_188)).len < ((*F->pat_189)).len))) {
F->result_ = (*F->s_188);
goto ret_;
}
while ((rt_sub(rt_add(F->i_755, ((*F->pat_189)).len), ((rt_int)1LL)) <= ((*F->s_188)).len)) {
if (rt_str_eq(rt_str_slice((*F->s_188), F->i_755, rt_sub(rt_add(F->i_755, ((*F->pat_189)).len), ((rt_int)1LL))), (*F->pat_189))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_188), ((rt_int)1LL), rt_sub(F->i_755, ((rt_int)1LL))), (*F->r_190)), f_replace_all_191(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_188), rt_add(F->i_755, ((*F->pat_189)).len), ((*F->s_188)).len); b_; }), &(*F->pat_189), &(*F->r_190)));
goto ret_;
}
F->i_755 = rt_add(F->i_755, ((rt_int)1LL));
}
F->result_ = (*F->s_188);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_subst_193(rstr *s_192) {
  struct f_subst_193fr *F = rt_alloc(sizeof *F);
F->s_192 = s_192;
F->l_756 = NULL;
F->l_756 = g_psub_468;
F->r_757 = NULL;
F->r_757 = f_mk_3(&(*F->s_192));
while ((F->l_756 != NULL)) {
F->r_757 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_191(&(*(P417)rt_nil_check(F->r_757)), &(*(P417)rt_nil_check((*(P434)rt_nil_check(F->l_756)).s)), &(*(P417)rt_nil_check((*(P434)rt_nil_check((*(P434)rt_nil_check(F->l_756)).next)).s))); b_; }));
F->l_756 = (*(P434)rt_nil_check((*(P434)rt_nil_check(F->l_756)).next)).next;
}
F->result_ = (*(P417)rt_nil_check(F->r_757));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P426 f_new_type_197(P432 y_194, P422 st_195, P424 *c_196) {
  struct f_new_type_197fr *F = rt_alloc(sizeof *F);
F->y_194 = y_194;
F->st_195 = st_195;
F->c_196 = c_196;
F->d_758 = NULL;
F->d_758 = (*(P432)rt_nil_check(F->y_194)).decl;
F->p_759 = NULL;
F->uc_760 = NULL;
(*F->c_196) = f_new_cons_155();
if (((*(P432)rt_nil_check(F->y_194)).t == NULL)) {
(*(P432)rt_nil_check(F->y_194)).t = f_new_typ_154(((rt_int)15LL));
(*(P426)rt_nil_check((*(P432)rt_nil_check(F->y_194)).t)).name = (*(P432)rt_nil_check(F->y_194)).name;
(*(P426)rt_nil_check((*(P432)rt_nil_check(F->y_194)).t)).decl = F->d_758;
(*(P426)rt_nil_check((*(P432)rt_nil_check(F->y_194)).t)).tparams = (*(P422)rt_nil_check(F->d_758)).b;
if ((g_caps_467 != NULL)) {
(*(P426)rt_nil_check((*(P432)rt_nil_check(F->y_194)).t)).ocap = (*(P442)rt_nil_check(g_caps_467)).d;
}
f_open_scope_148();
F->p_759 = (*(P422)rt_nil_check(F->d_758)).b;
while ((F->p_759 != NULL)) {
F->z_761 = NULL;
F->z_761 = f_new_sym_152(((rt_int)2LL), (*(P422)rt_nil_check(F->p_759)).name);
(*(P432)rt_nil_check(F->z_761)).t = g_ty_int_478;
(*(P432)rt_nil_check(F->z_761)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_759)).name)))), rt_str("@", 1)); b_; }));
f_define_142(F->z_761, (*(P422)rt_nil_check(F->d_758)).line);
F->p_759 = (*(P422)rt_nil_check(F->p_759)).next;
}
(*(P426)rt_nil_check((*(P432)rt_nil_check(F->y_194)).t)).under = f_resolve_subtype_185((*(P422)rt_nil_check(F->d_758)).a, &F->uc_760);
(*(P426)rt_nil_check((*(P432)rt_nil_check(F->y_194)).t)).elemcons = F->uc_760;
f_close_scope_149();
}
(*(P424)rt_nil_check((*F->c_196))).args = (*(P422)rt_nil_check(F->st_195)).b;
F->result_ = (*(P432)rt_nil_check(F->y_194)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_init_storage_201(rstr *lval_198, P426 t_199, P424 c_200) {
  struct f_init_storage_201fr *F = rt_alloc(sizeof *F);
F->lval_198 = lval_198;
F->t_199 = t_199;
F->c_200 = c_200;
if (((*(P426)rt_nil_check(F->t_199)).kind == ((rt_int)15LL))) {
F->p_762 = NULL;
F->p_762 = (*(P426)rt_nil_check(F->t_199)).tparams;
F->a_763 = NULL;
F->a_763 = (*(P424)rt_nil_check(F->c_200)).args;
F->uc_764 = NULL;
F->ut_765 = NULL;
F->at_766 = NULL;
if ((f_list_len_52(F->a_763) != f_list_len_52(F->p_762))) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_199)).name))), rt_str(" needs ", 7)), f_itos_7(f_list_len_52(F->p_762))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_762 != NULL)) {
F->v_767 = rt_str_copy(f_gexpr_369(F->a_763, g_ty_int_478, &F->at_766));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_198), rt_str(".p_", 3)), f_lower_s_15(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_762)).name)))), rt_str(" = ", 3)), F->v_767), rt_str(";", 1)); b_; }));
F->p_762 = (*(P422)rt_nil_check(F->p_762)).next;
F->a_763 = (*(P422)rt_nil_check(F->a_763)).next;
}
{
F->saved_768 = NULL;
F->saved_768 = g_psub_468;
F->p_762 = (*(P426)rt_nil_check(F->t_199)).tparams;
while ((F->p_762 != NULL)) {
F->l1_769 = NULL;
F->l2_770 = NULL;
{ R435 *cell771 = rt_alloc(sizeof(R435));
(*cell771).s = NULL;
(*cell771).next = NULL;
F->l1_769 = cell771;
}
{ R435 *cell772 = rt_alloc(sizeof(R435));
(*cell772).s = NULL;
(*cell772).next = NULL;
F->l2_770 = cell772;
}
(*(P434)rt_nil_check(F->l1_769)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_762)).name)))), rt_str("@", 1)); b_; }));
(*(P434)rt_nil_check(F->l2_770)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_198), rt_str(".p_", 3)), f_lower_s_15(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_762)).name)))); b_; }));
(*(P434)rt_nil_check(F->l1_769)).next = F->l2_770;
(*(P434)rt_nil_check(F->l2_770)).next = g_psub_468;
g_psub_468 = F->l1_769;
F->p_762 = (*(P422)rt_nil_check(F->p_762)).next;
}
if (((*(P426)rt_nil_check(F->t_199)).tparams == NULL)) {
f_init_storage_201(&(*F->lval_198), (*(P426)rt_nil_check(F->t_199)).under, (*(P426)rt_nil_check(F->t_199)).elemcons);
} else {
f_init_storage_201(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_198), rt_str(".all", 4)); b_; }), (*(P426)rt_nil_check(F->t_199)).under, (*(P426)rt_nil_check(F->t_199)).elemcons);
}
g_psub_468 = F->saved_768;
}
} else if (((*(P426)rt_nil_check(F->t_199)).kind == ((rt_int)12LL))) {
if (((*(P424)rt_nil_check(F->c_200)).lo == NULL)) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(&", 14), (*F->lval_198)), rt_str(", ", 2)), f_subst_193(&(*(P417)rt_nil_check((*(P424)rt_nil_check(F->c_200)).lo)))), rt_str(", sizeof(", 9)), f_ctype_174((*(P426)rt_nil_check(F->t_199)).elem)), rt_str("), ", 3)), f_mcopy_206((*(P426)rt_nil_check(F->t_199)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P426)rt_nil_check(F->t_199)).kind == ((rt_int)13LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_198)), rt_str(");", 2)); b_; }));
} else if (((*(P426)rt_nil_check(F->t_199)).kind == ((rt_int)14LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_198), rt_str(".active = 0; ", 13)), (*F->lval_198)), rt_str(".t = NULL; ", 11)), (*F->lval_198)), rt_str(".waiters = NULL;", 16)); b_; }));
} else if (((*(P426)rt_nil_check(F->t_199)).kind == ((rt_int)8LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_198), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P426)rt_nil_check(F->t_199)).kind == ((rt_int)5LL))) {
if (((*(P424)rt_nil_check(F->c_200)).slen == NULL)) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_198), rt_str(" = rt_str_new(", 14)), f_subst_193(&(*(P417)rt_nil_check((*(P424)rt_nil_check(F->c_200)).slen)))), rt_str(");", 2)); b_; }));
} else if (((*(P426)rt_nil_check(F->t_199)).kind == ((rt_int)6LL))) {
if (((*(P424)rt_nil_check(F->c_200)).lo == NULL)) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_198), rt_str(".lo = ", 6)), f_subst_193(&(*(P417)rt_nil_check((*(P424)rt_nil_check(F->c_200)).lo)))), rt_str("; ", 2)), (*F->lval_198)), rt_str(".hi = ", 6)), f_subst_193(&(*(P417)rt_nil_check((*(P424)rt_nil_check(F->c_200)).hi)))), rt_str("; ", 2)), (*F->lval_198)), rt_str(".lo2 = ", 7)), f_subst_193(&(*(P417)rt_nil_check((*(P424)rt_nil_check(F->c_200)).lo2)))), rt_str("; ", 2)), (*F->lval_198)), rt_str(".hi2 = ", 7)), f_subst_193(&(*(P417)rt_nil_check((*(P424)rt_nil_check(F->c_200)).hi2)))), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_198), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_174((*(P426)rt_nil_check(F->t_199)).elem)), rt_str(") * (size_t)RT_CNT(", 19)), (*F->lval_198)), rt_str("));", 3)); b_; }));
if ((((((((((*(P426)rt_nil_check((*(P426)rt_nil_check(F->t_199)).elem)).kind == ((rt_int)5LL)) || ((*(P426)rt_nil_check((*(P426)rt_nil_check(F->t_199)).elem)).kind == ((rt_int)6LL))) || ((*(P426)rt_nil_check((*(P426)rt_nil_check(F->t_199)).elem)).kind == ((rt_int)7LL))) || ((*(P426)rt_nil_check((*(P426)rt_nil_check(F->t_199)).elem)).kind == ((rt_int)15LL))) || ((*(P426)rt_nil_check((*(P426)rt_nil_check(F->t_199)).elem)).kind == ((rt_int)8LL))) || ((*(P426)rt_nil_check((*(P426)rt_nil_check(F->t_199)).elem)).kind == ((rt_int)12LL))) || ((*(P426)rt_nil_check((*(P426)rt_nil_check(F->t_199)).elem)).kind == ((rt_int)13LL))) || ((*(P426)rt_nil_check((*(P426)rt_nil_check(F->t_199)).elem)).kind == ((rt_int)14LL)))) {
F->i_773 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_773), rt_str(" = 0; ", 6)), F->i_773), rt_str(" < RT_CNT(", 10)), (*F->lval_198)), rt_str("); ", 3)), F->i_773), rt_str("++) {", 5)); b_; }));
f_init_storage_201(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_198), rt_str(".p[", 3)), F->i_773), rt_str("]", 1)); b_; }), (*(P426)rt_nil_check(F->t_199)).elem, (*(P426)rt_nil_check(F->t_199)).elemcons);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P426)rt_nil_check(F->t_199)).kind == ((rt_int)7LL))) {
F->f_774 = NULL;
F->f_774 = (*(P426)rt_nil_check(F->t_199)).fields;
while ((F->f_774 != NULL)) {
f_init_storage_201(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_198), rt_str(".", 1)), f_lower_s_15(&(*(P417)rt_nil_check((*(P428)rt_nil_check(F->f_774)).name)))); b_; }), (*(P428)rt_nil_check(F->f_774)).t, (*(P428)rt_nil_check(F->f_774)).c);
F->f_774 = (*(P428)rt_nil_check(F->f_774)).next;
}
}
ret_:
  return;
}

static rt_int f_manifest_204(P422 e_202, int *ok_203) {
  struct f_manifest_204fr *F = rt_alloc(sizeof *F);
F->e_202 = e_202;
F->ok_203 = ok_203;
(*F->ok_203) = 0;
if (((*(P422)rt_nil_check(F->e_202)).kind == ((rt_int)1LL))) {
(*F->ok_203) = 1;
F->result_ = (*(P422)rt_nil_check(F->e_202)).ival;
goto ret_;
} else if (((*(P422)rt_nil_check(F->e_202)).kind == ((rt_int)17LL))) {
F->result_ = f_manifest_204((*(P422)rt_nil_check(F->e_202)).a, &(*F->ok_203));
goto ret_;
} else if ((((*(P422)rt_nil_check(F->e_202)).kind == ((rt_int)8LL)) && rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_202)).name)), rt_str("-", 1)))) {
F->a_775 = f_manifest_204((*(P422)rt_nil_check(F->e_202)).a, &(*F->ok_203));
F->result_ = rt_neg(F->a_775);
goto ret_;
} else if ((((*(P422)rt_nil_check(F->e_202)).kind == ((rt_int)9LL)) && ((rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_202)).name)), rt_str("+", 1)) || rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_202)).name)), rt_str("-", 1))) || rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_202)).name)), rt_str("*", 1))))) {
F->a_775 = f_manifest_204((*(P422)rt_nil_check(F->e_202)).a, &(*F->ok_203));
F->b_776 = f_manifest_204((*(P422)rt_nil_check(F->e_202)).b, &F->ok2_777);
(*F->ok_203) = ((*F->ok_203) && F->ok2_777);
if ((!(*F->ok_203))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_202)).name)), rt_str("+", 1))) {
F->result_ = rt_add(F->a_775, F->b_776);
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_202)).name)), rt_str("-", 1))) {
F->result_ = rt_sub(F->a_775, F->b_776);
goto ret_;
}
F->result_ = rt_mul(F->a_775, F->b_776);
goto ret_;
} else if (((*(P422)rt_nil_check(F->e_202)).kind == ((rt_int)7LL))) {
F->y_778 = NULL;
F->y_778 = f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_202)).name)));
if ((((F->y_778 != NULL) && ((*(P432)rt_nil_check(F->y_778)).kind == ((rt_int)2LL))) && (*(P432)rt_nil_check(F->y_778)).hasmv)) {
(*F->ok_203) = 1;
F->result_ = (*(P432)rt_nil_check(F->y_778)).mvalue;
goto ret_;
}
}
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_mcopy_206(P426 t_205) {
  struct f_mcopy_206fr *F = rt_alloc(sizeof *F);
F->t_205 = t_205;
F->ct_779 = rt_str_copy(f_ctype_174(F->t_205));
F->name_780 = rt_str_new(rt_add((F->ct_779).len, ((rt_int)3LL)));
rt_str_assign(&F->name_780, rt_str_cat(rt_str("mc_", 3), F->ct_779));
F->l_781 = NULL;
if ((!f_seen_name_227(g_mcopies_477, &F->name_780))) {
{ R435 *cell782 = rt_alloc(sizeof(R435));
(*cell782).s = NULL;
(*cell782).next = NULL;
F->l_781 = cell782;
}
(*(P434)rt_nil_check(F->l_781)).s = f_mk_3(&F->name_780);
(*(P434)rt_nil_check(F->l_781)).next = g_mcopies_477;
g_mcopies_477 = F->l_781;
f_put_25(g_out_protos_457, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_780), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_25(g_out_funcs_459, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_780), rt_str("(void *d, const void *s) { *(", 29)), F->ct_779), rt_str(" *)d = ", 7)), f_copy_code_216(F->t_205, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_779), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_780;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_composite_208(P426 t_207) {
  struct f_composite_208fr *F = rt_alloc(sizeof *F);
F->t_207 = t_207;
F->result_ = ((((*(P426)rt_nil_check(F->t_207)).kind == ((rt_int)6LL)) || ((*(P426)rt_nil_check(F->t_207)).kind == ((rt_int)7LL))) || (((*(P426)rt_nil_check(F->t_207)).kind == ((rt_int)15LL)) && ((*(P426)rt_nil_check(F->t_207)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_assign_code_213(rstr *lval_209, P426 t_210, rstr *v_211, P424 c_212) {
  struct f_assign_code_213fr *F = rt_alloc(sizeof *F);
F->lval_209 = lval_209;
F->t_210 = t_210;
F->v_211 = v_211;
F->c_212 = c_212;
if ((((*(P426)rt_nil_check(F->t_210)).kind == ((rt_int)15LL)) && ((*(P426)rt_nil_check(F->t_210)).tparams == NULL))) {
F->result_ = f_assign_code_213(&(*F->lval_209), (*(P426)rt_nil_check(F->t_210)).under, &(*F->v_211), F->c_212);
goto ret_;
}
if (f_composite_208(F->t_210)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_174(F->t_210)), rt_str("(&", 2)), (*F->lval_209)), rt_str(", ", 2)), (*F->v_211)), rt_str(");", 2));
goto ret_;
}
if (((*(P426)rt_nil_check(F->t_210)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_209)), rt_str(", ", 2)), (*F->v_211)), rt_str(");", 2));
goto ret_;
} else if ((((*(P426)rt_nil_check(F->t_210)).kind == ((rt_int)6LL)) || ((*(P426)rt_nil_check(F->t_210)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_174(F->t_210)), rt_str("(&", 2)), (*F->lval_209)), rt_str(", ", 2)), (*F->v_211)), rt_str(");", 2));
goto ret_;
} else if (((((*(P426)rt_nil_check(F->t_210)).kind == ((rt_int)1LL)) && (F->c_212 != NULL)) && (*(P424)rt_nil_check(F->c_212)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_209), rt_str(" = rt_range(", 12)), (*F->v_211)), rt_str(", ", 2)), f_itos_7((*(P424)rt_nil_check(F->c_212)).mlo)), rt_str(", ", 2)), f_itos_7((*(P424)rt_nil_check(F->c_212)).mhi)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_209), rt_str(" = ", 3)), (*F->v_211)), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_copy_code_216(P426 t_214, rstr *v_215) {
  struct f_copy_code_216fr *F = rt_alloc(sizeof *F);
F->t_214 = t_214;
F->v_215 = v_215;
if ((((*(P426)rt_nil_check(F->t_214)).kind == ((rt_int)15LL)) && ((*(P426)rt_nil_check(F->t_214)).tparams == NULL))) {
F->result_ = f_copy_code_216((*(P426)rt_nil_check(F->t_214)).under, &(*F->v_215));
goto ret_;
}
if (f_composite_208(F->t_214)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_174(F->t_214)), rt_str("(", 1)), (*F->v_215)), rt_str(")", 1));
goto ret_;
}
if (((*(P426)rt_nil_check(F->t_214)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_215)), rt_str(")", 1));
goto ret_;
} else if ((((*(P426)rt_nil_check(F->t_214)).kind == ((rt_int)6LL)) || ((*(P426)rt_nil_check(F->t_214)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_174(F->t_214)), rt_str("(", 1)), (*F->v_215)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_215);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_eq_code_220(P426 t_217, rstr *a_218, rstr *b_219) {
  struct f_eq_code_220fr *F = rt_alloc(sizeof *F);
F->t_217 = t_217;
F->a_218 = a_218;
F->b_219 = b_219;
if ((((*(P426)rt_nil_check(F->t_217)).kind == ((rt_int)15LL)) && ((*(P426)rt_nil_check(F->t_217)).tparams == NULL))) {
F->result_ = f_eq_code_220((*(P426)rt_nil_check(F->t_217)).under, &(*F->a_218), &(*F->b_219));
goto ret_;
}
if (f_composite_208(F->t_217)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_174(F->t_217)), rt_str("(", 1)), (*F->a_218)), rt_str(", ", 2)), (*F->b_219)), rt_str(")", 1));
goto ret_;
}
if (((*(P426)rt_nil_check(F->t_217)).kind == ((rt_int)16LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), (*F->a_218)), rt_str(", ", 2)), (*F->b_219)), rt_str(")", 1));
goto ret_;
}
if (((((*(P426)rt_nil_check(F->t_217)).kind == ((rt_int)12LL)) || ((*(P426)rt_nil_check(F->t_217)).kind == ((rt_int)13LL))) || ((*(P426)rt_nil_check(F->t_217)).kind == ((rt_int)14LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P426)rt_nil_check(F->t_217)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_218)), rt_str(", ", 2)), (*F->b_219)), rt_str(")", 1));
goto ret_;
} else if ((((*(P426)rt_nil_check(F->t_217)).kind == ((rt_int)6LL)) || ((*(P426)rt_nil_check(F->t_217)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_174(F->t_217)), rt_str("(", 1)), (*F->a_218)), rt_str(", ", 2)), (*F->b_219)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_218)), rt_str(" == ", 4)), (*F->b_219)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_elem_assign_224(rstr *lval_221, P426 t_222, rstr *v_223) {
  struct f_elem_assign_224fr *F = rt_alloc(sizeof *F);
F->lval_221 = lval_221;
F->t_222 = t_222;
F->v_223 = v_223;
F->result_ = f_assign_code_213(&(*F->lval_221), F->t_222, &(*F->v_223), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_seen_name_227(P434 l_225, rstr *s_226) {
  struct f_seen_name_227fr *F = rt_alloc(sizeof *F);
F->l_225 = l_225;
F->s_226 = s_226;
F->p_783 = NULL;
F->p_783 = F->l_225;
while ((F->p_783 != NULL)) {
if (rt_str_eq((*(P417)rt_nil_check((*(P434)rt_nil_check(F->p_783)).s)), (*F->s_226))) {
F->result_ = 1;
goto ret_;
}
F->p_783 = (*(P434)rt_nil_check(F->p_783)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_emit_helpers_228(void) {
  struct f_emit_helpers_228fr *F = rt_alloc(sizeof *F);
F->order_784 = NULL;
F->t_785 = NULL;
F->t_785 = g_all_types_453;
F->done_786 = NULL;
while ((F->t_785 != NULL)) {
if ((f_composite_208(F->t_785) && (!f_seen_name_227(F->done_786, &(*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_785)).cname)))))) {
F->l_787 = NULL;
F->c_788 = rt_str_new(((*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_785)).cname))).len);
rt_str_assign(&F->c_788, (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_785)).cname)));
{ R435 *cell789 = rt_alloc(sizeof(R435));
(*cell789).s = NULL;
(*cell789).next = NULL;
F->l_787 = cell789;
}
(*(P434)rt_nil_check(F->l_787)).s = (*(P426)rt_nil_check(F->t_785)).cname;
(*(P434)rt_nil_check(F->l_787)).next = F->done_786;
F->done_786 = F->l_787;
f_put_25(g_out_helpers_456, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_788), rt_str("(", 1)), F->c_788), rt_str(" *d, ", 5)), F->c_788), rt_str(" s);", 4)); b_; }));
f_put_25(g_out_helpers_456, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_788), rt_str(" cp_", 4)), F->c_788), rt_str("(", 1)), F->c_788), rt_str(" s);", 4)); b_; }));
f_put_25(g_out_helpers_456, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_788), rt_str("(", 1)), F->c_788), rt_str(" a, ", 4)), F->c_788), rt_str(" b);", 4)); b_; }));
f_helper_bodies_230(F->t_785);
}
F->t_785 = (*(P426)rt_nil_check(F->t_785)).next;
}
ret_:
  return;
}

static void f_helper_bodies_230(P426 t_229) {
  struct f_helper_bodies_230fr *F = rt_alloc(sizeof *F);
F->t_229 = t_229;
F->c_790 = rt_str_new(((*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_229)).cname))).len);
rt_str_assign(&F->c_790, (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_229)).cname)));
F->b_791 = NULL;
F->b_791 = g_out_funcs_459;
if (((*(P426)rt_nil_check(F->t_229)).kind == ((rt_int)6LL))) {
F->e_792 = NULL;
F->e_792 = (*(P426)rt_nil_check(F->t_229)).elem;
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_790), rt_str("(", 1)), F->c_790), rt_str(" *d, ", 5)), F->c_790), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, ", 99), f_q_16()), rt_str("array length", 12)), f_q_16()), rt_str(");", 2)); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), f_elem_assign_224(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_792, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_790), rt_str(" cp_", 4)), F->c_790), rt_str("(", 1)), F->c_790), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_790), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_174(F->e_792)), rt_str(") * (size_t)RT_CNT(s));", 23)); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), f_copy_code_216(F->e_792, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_790), rt_str("(", 1)), F->c_790), rt_str(" a, ", 4)), F->c_790), rt_str(" b) {", 5)); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;", 77); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), f_eq_code_220(F->e_792, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P426)rt_nil_check(F->t_229)).kind == ((rt_int)15LL))) {
F->p_793 = NULL;
F->p_793 = (*(P426)rt_nil_check(F->t_229)).tparams;
F->pc_794 = NULL;
F->pc_794 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->p_793 != NULL)) {
F->pc_794 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->pc_794)), rt_str(" || d->p_", 9)), f_lower_s_15(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_793)).name)))), rt_str(" != s.p_", 8)), f_lower_s_15(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_793)).name)))); b_; }));
F->p_793 = (*(P422)rt_nil_check(F->p_793)).next;
}
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_790), rt_str("(", 1)), F->c_790), rt_str(" *d, ", 5)), F->c_790), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P417)rt_nil_check(F->pc_794))), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_16()), rt_str("constraint", 10)), f_q_16()), rt_str(");", 2)); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_224(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P426)rt_nil_check(F->t_229)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_790), rt_str(" cp_", 4)), F->c_790), rt_str("(", 1)), F->c_790), rt_str(" s) { s.all = ", 14)), f_copy_code_216((*(P426)rt_nil_check(F->t_229)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_790), rt_str("(", 1)), F->c_790), rt_str(" a, ", 4)), F->c_790), rt_str(" b) { return ", 13)), f_eq_code_220((*(P426)rt_nil_check(F->t_229)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else {
F->f_795 = NULL;
F->f_795 = (*(P426)rt_nil_check(F->t_229)).fields;
F->conds_796 = NULL;
F->conds_796 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_790), rt_str("(", 1)), F->c_790), rt_str(" *d, ", 5)), F->c_790), rt_str(" s) {", 5)); b_; }));
while ((F->f_795 != NULL)) {
F->fn_797 = rt_str_copy(f_lower_s_15(&(*(P417)rt_nil_check((*(P428)rt_nil_check(F->f_795)).name))));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_224(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_797); b_; }), (*(P428)rt_nil_check(F->f_795)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_797); b_; }))); b_; }));
F->f_795 = (*(P428)rt_nil_check(F->f_795)).next;
}
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_790), rt_str(" cp_", 4)), F->c_790), rt_str("(", 1)), F->c_790), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_790), rt_str(" d = s;", 7)); b_; }));
F->f_795 = (*(P426)rt_nil_check(F->t_229)).fields;
while ((F->f_795 != NULL)) {
F->fn_798 = rt_str_copy(f_lower_s_15(&(*(P417)rt_nil_check((*(P428)rt_nil_check(F->f_795)).name))));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_798), rt_str(" = ", 3)), f_copy_code_216((*(P428)rt_nil_check(F->f_795)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_798); b_; }))), rt_str(";", 1)); b_; }));
F->conds_796 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->conds_796)), rt_str(" && ", 4)), f_eq_code_220((*(P428)rt_nil_check(F->f_795)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_798); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_798); b_; }))); b_; }));
F->f_795 = (*(P428)rt_nil_check(F->f_795)).next;
}
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_790), rt_str("(", 1)), F->c_790), rt_str(" a, ", 4)), F->c_790), rt_str(" b) {", 5)); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P417)rt_nil_check(F->conds_796))), rt_str(";", 1)); b_; }));
f_put_25(F->b_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_declare_body_232(P422 elems_231) {
  struct f_declare_body_232fr *F = rt_alloc(sizeof *F);
F->elems_231 = elems_231;
F->e_799 = NULL;
F->e_799 = F->elems_231;
while ((F->e_799 != NULL)) {
if ((((*(P422)rt_nil_check(F->e_799)).kind == ((rt_int)41LL)) && ((*(P422)rt_nil_check(F->e_799)).flag == ((rt_int)0LL)))) {
f_manifest_const_234(F->e_799);
} else if (((*(P422)rt_nil_check(F->e_799)).kind == ((rt_int)47LL))) {
f_gen_capsule_242(F->e_799);
} else if (((*(P422)rt_nil_check(F->e_799)).kind == ((rt_int)48LL))) {
f_gen_expose_244(F->e_799);
} else if (((*(P422)rt_nil_check(F->e_799)).kind == ((rt_int)49LL))) {
F->y_800 = NULL;
F->y_800 = f_new_sym_152(((rt_int)7LL), (*(P422)rt_nil_check(F->e_799)).name);
(*(P432)rt_nil_check(F->y_800)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_799)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_142(F->y_800, (*(P422)rt_nil_check(F->e_799)).line);
f_put_25(g_out_globals_458, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_800)).cname))), rt_str(";", 1)); b_; }));
f_put_25(g_out_excs_461, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_800)).cname))), rt_str(" = rt_exc(", 10)), f_q_16()), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_799)).name))), f_q_16()), rt_str(");", 2)); b_; }));
} else if (((*(P422)rt_nil_check(F->e_799)).kind == ((rt_int)42LL))) {
F->y_801 = NULL;
F->y_801 = f_new_sym_152(((rt_int)6LL), (*(P422)rt_nil_check(F->e_799)).name);
(*(P432)rt_nil_check(F->y_801)).st = (*(P422)rt_nil_check(F->e_799)).a;
f_define_142(F->y_801, (*(P422)rt_nil_check(F->e_799)).line);
} else if (((*(P422)rt_nil_check(F->e_799)).kind == ((rt_int)44LL))) {
F->y_802 = NULL;
F->y_802 = f_new_sym_152(((rt_int)5LL), (*(P422)rt_nil_check(F->e_799)).name);
F->t_803 = NULL;
F->t_803 = f_new_typ_154(((rt_int)8LL));
(*(P426)rt_nil_check(F->t_803)).name = (*(P422)rt_nil_check(F->e_799)).name;
(*(P426)rt_nil_check(F->t_803)).decl = F->e_799;
(*(P432)rt_nil_check(F->y_802)).t = F->t_803;
f_define_142(F->y_802, (*(P422)rt_nil_check(F->e_799)).line);
} else if (((*(P422)rt_nil_check(F->e_799)).kind == ((rt_int)43LL))) {
F->y_804 = NULL;
F->y_804 = f_new_sym_152(((rt_int)5LL), (*(P422)rt_nil_check(F->e_799)).name);
(*(P432)rt_nil_check(F->y_804)).st = (*(P422)rt_nil_check(F->e_799)).a;
(*(P432)rt_nil_check(F->y_804)).decl = F->e_799;
f_define_142(F->y_804, (*(P422)rt_nil_check(F->e_799)).line);
}
F->e_799 = (*(P422)rt_nil_check(F->e_799)).next;
}
F->e_799 = F->elems_231;
while ((F->e_799 != NULL)) {
if (((((*(P422)rt_nil_check(F->e_799)).kind == ((rt_int)45LL)) || ((*(P422)rt_nil_check(F->e_799)).kind == ((rt_int)46LL))) || ((*(P422)rt_nil_check(F->e_799)).kind == ((rt_int)50LL)))) {
f_declare_subprogram_248(F->e_799);
} else if (((*(P422)rt_nil_check(F->e_799)).kind == ((rt_int)51LL))) {
F->g_805 = NULL;
F->g_805 = f_new_sym_152(((rt_int)10LL), (*(P422)rt_nil_check(F->e_799)).name);
(*(P432)rt_nil_check(F->g_805)).decl = F->e_799;
(*(P432)rt_nil_check(F->g_805)).level = g_cur_level_465;
f_define_142(F->g_805, (*(P422)rt_nil_check(F->e_799)).line);
}
F->e_799 = (*(P422)rt_nil_check(F->e_799)).next;
}
ret_:
  return;
}

static void f_manifest_const_234(P422 d_233) {
  struct f_manifest_const_234fr *F = rt_alloc(sizeof *F);
F->d_233 = d_233;
F->y_808 = NULL;
F->c_809 = NULL;
if (((*(P422)rt_nil_check(F->d_233)).a != NULL)) {
if ((((*(P422)rt_nil_check((*(P422)rt_nil_check(F->d_233)).a)).kind != ((rt_int)70LL)) || ((*(P422)rt_nil_check((*(P422)rt_nil_check(F->d_233)).a)).a != NULL))) {
goto ret_;
}
}
F->v_807 = f_manifest_204((*(P422)rt_nil_check(F->d_233)).b, &F->ok_806);
if ((!F->ok_806)) {
goto ret_;
}
(*(P422)rt_nil_check(F->d_233)).flag = ((rt_int)1LL);
F->y_808 = f_new_sym_152(((rt_int)2LL), (*(P422)rt_nil_check(F->d_233)).name);
(*(P432)rt_nil_check(F->y_808)).t = g_ty_int_478;
(*(P432)rt_nil_check(F->y_808)).c = f_new_cons_155();
(*(P432)rt_nil_check(F->y_808)).mvalue = F->v_807;
(*(P432)rt_nil_check(F->y_808)).hasmv = 1;
(*(P432)rt_nil_check(F->y_808)).ro_flag = 1;
(*(P432)rt_nil_check(F->y_808)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), f_itos_7(F->v_807)), rt_str("LL)", 3)); b_; }));
f_define_142(F->y_808, (*(P422)rt_nil_check(F->d_233)).line);
ret_:
  return;
}

static int f_exported_238(P422 d_235, rstr *name_236, int *ro_237) {
  struct f_exported_238fr *F = rt_alloc(sizeof *F);
F->d_235 = d_235;
F->name_236 = name_236;
F->ro_237 = ro_237;
F->p_810 = NULL;
F->p_810 = (*(P422)rt_nil_check(F->d_235)).a;
(*F->ro_237) = 0;
if (((*(P422)rt_nil_check(F->d_235)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_810 != NULL)) {
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_810)).name)), (*F->name_236))) {
(*F->ro_237) = ((*(P422)rt_nil_check(F->p_810)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_810 = (*(P422)rt_nil_check(F->p_810)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P432 f_copy_sym_240(P432 y_239) {
  struct f_copy_sym_240fr *F = rt_alloc(sizeof *F);
F->y_239 = y_239;
F->z_811 = NULL;
{ R433 *cell812 = rt_alloc(sizeof(R433));
(*cell812).name = NULL;
(*cell812).t = NULL;
(*cell812).c = NULL;
(*cell812).access = NULL;
(*cell812).cname = NULL;
(*cell812).st = NULL;
(*cell812).decl = NULL;
(*cell812).params = NULL;
(*cell812).result = NULL;
(*cell812).members = NULL;
(*cell812).mnext = NULL;
(*cell812).binds = NULL;
(*cell812).insts = NULL;
(*cell812).chain = NULL;
(*cell812).stack = NULL;
F->z_811 = cell812;
}
(*(P432)rt_nil_check(F->z_811)).kind = (*(P432)rt_nil_check(F->y_239)).kind;
(*(P432)rt_nil_check(F->z_811)).name = (*(P432)rt_nil_check(F->y_239)).name;
(*(P432)rt_nil_check(F->z_811)).t = (*(P432)rt_nil_check(F->y_239)).t;
(*(P432)rt_nil_check(F->z_811)).c = (*(P432)rt_nil_check(F->y_239)).c;
(*(P432)rt_nil_check(F->z_811)).access = (*(P432)rt_nil_check(F->y_239)).access;
(*(P432)rt_nil_check(F->z_811)).cname = (*(P432)rt_nil_check(F->y_239)).cname;
(*(P432)rt_nil_check(F->z_811)).ro_flag = (*(P432)rt_nil_check(F->y_239)).ro_flag;
(*(P432)rt_nil_check(F->z_811)).mvalue = (*(P432)rt_nil_check(F->y_239)).mvalue;
(*(P432)rt_nil_check(F->z_811)).hasmv = (*(P432)rt_nil_check(F->y_239)).hasmv;
(*(P432)rt_nil_check(F->z_811)).st = (*(P432)rt_nil_check(F->y_239)).st;
(*(P432)rt_nil_check(F->z_811)).decl = (*(P432)rt_nil_check(F->y_239)).decl;
(*(P432)rt_nil_check(F->z_811)).params = (*(P432)rt_nil_check(F->y_239)).params;
(*(P432)rt_nil_check(F->z_811)).result = (*(P432)rt_nil_check(F->y_239)).result;
(*(P432)rt_nil_check(F->z_811)).level = (*(P432)rt_nil_check(F->y_239)).level;
(*(P432)rt_nil_check(F->z_811)).byref = (*(P432)rt_nil_check(F->y_239)).byref;
(*(P432)rt_nil_check(F->z_811)).members = (*(P432)rt_nil_check(F->y_239)).members;
F->result_ = F->z_811;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_gen_capsule_242(P422 d_241) {
  struct f_gen_capsule_242fr *F = rt_alloc(sizeof *F);
F->d_241 = d_241;
F->y_813 = NULL;
F->y_813 = f_new_sym_152(((rt_int)8LL), (*(P422)rt_nil_check(F->d_241)).name);
F->cr_814 = NULL;
F->ctx_815 = NULL;
F->m_816 = NULL;
F->p_817 = NULL;
F->p_817 = (*(P422)rt_nil_check(F->d_241)).a;
(*(P432)rt_nil_check(F->y_813)).decl = F->d_241;
{ R443 *cell819 = rt_alloc(sizeof(R443));
(*cell819).d = NULL;
(*cell819).next = NULL;
F->cr_814 = cell819;
}
(*(P442)rt_nil_check(F->cr_814)).d = F->d_241;
(*(P442)rt_nil_check(F->cr_814)).next = g_caps_467;
g_caps_467 = F->cr_814;
f_open_scope_148();
{ R445 *cell820 = rt_alloc(sizeof(R445));
(*cell820).imps = NULL;
(*cell820).next = NULL;
F->ctx_815 = cell820;
}
(*(P444)rt_nil_check(F->ctx_815)).depth = g_depth_451;
(*(P444)rt_nil_check(F->ctx_815)).imps = (*(P422)rt_nil_check(F->d_241)).d;
(*(P444)rt_nil_check(F->ctx_815)).all_imp = ((*(P422)rt_nil_check(F->d_241)).flag >= ((rt_int)2LL));
(*(P444)rt_nil_check(F->ctx_815)).next = g_fctx_466;
g_fctx_466 = F->ctx_815;
f_declare_body_232((*(P422)rt_nil_check(F->d_241)).c);
f_body_elements_269((*(P422)rt_nil_check(F->d_241)).c);
g_fctx_466 = (*(P444)rt_nil_check(g_fctx_466)).next;
F->m_816 = g_scope_stack_452;
while (((F->m_816 != NULL) && ((*(P432)rt_nil_check(F->m_816)).depth == g_depth_451))) {
if ((((((*(P432)rt_nil_check(F->m_816)).kind == ((rt_int)5LL)) && ((*(P432)rt_nil_check(F->m_816)).t == NULL)) && ((*(P432)rt_nil_check(F->m_816)).decl != NULL)) && ((*(P422)rt_nil_check((*(P432)rt_nil_check(F->m_816)).decl)).kind == ((rt_int)43LL)))) {
(*(P432)rt_nil_check(F->m_816)).t = f_new_type_197(F->m_816, f_nn_46(((rt_int)80LL), (*(P422)rt_nil_check(F->d_241)).line), &(*(P432)rt_nil_check(F->m_816)).c);
} else if (((((*(P432)rt_nil_check(F->m_816)).kind == ((rt_int)5LL)) || ((*(P432)rt_nil_check(F->m_816)).kind == ((rt_int)6LL))) && ((*(P432)rt_nil_check(F->m_816)).t == NULL))) {
(*(P432)rt_nil_check(F->m_816)).t = f_resolve_subtype_185((*(P432)rt_nil_check(F->m_816)).st, &(*(P432)rt_nil_check(F->m_816)).c);
} else if ((((*(P432)rt_nil_check(F->m_816)).kind == ((rt_int)5LL)) && ((*(P426)rt_nil_check((*(P432)rt_nil_check(F->m_816)).t)).kind == ((rt_int)8LL)))) {
f_finish_ptr_246((*(P432)rt_nil_check(F->m_816)).t);
}
F->m_816 = (*(P432)rt_nil_check(F->m_816)).stack;
}
F->m_816 = g_scope_stack_452;
while (((F->m_816 != NULL) && ((*(P432)rt_nil_check(F->m_816)).depth == g_depth_451))) {
if (f_exported_238(F->d_241, &(*(P417)rt_nil_check((*(P432)rt_nil_check(F->m_816)).name)), &F->ro_818)) {
F->z_821 = NULL;
F->z_821 = f_copy_sym_240(F->m_816);
if (F->ro_818) {
(*(P432)rt_nil_check(F->z_821)).ro_flag = 1;
}
(*(P432)rt_nil_check(F->z_821)).mnext = (*(P432)rt_nil_check(F->y_813)).members;
(*(P432)rt_nil_check(F->y_813)).members = F->z_821;
}
F->m_816 = (*(P432)rt_nil_check(F->m_816)).stack;
}
while ((F->p_817 != NULL)) {
if (((f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_817)).name))) == NULL) || ((*(P432)rt_nil_check(f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_817)).name))))).depth != g_depth_451))) {
f_fail_21((*(P422)rt_nil_check(F->d_241)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_817)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->d_241)).name))); b_; }));
}
F->p_817 = (*(P422)rt_nil_check(F->p_817)).next;
}
f_close_scope_149();
g_caps_467 = (*(P442)rt_nil_check(g_caps_467)).next;
f_define_142(F->y_813, (*(P422)rt_nil_check(F->d_241)).line);
ret_:
  return;
}

static void f_gen_expose_244(P422 d_243) {
  struct f_gen_expose_244fr *F = rt_alloc(sizeof *F);
F->d_243 = d_243;
F->y_822 = NULL;
F->y_822 = f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->d_243)).name)));
F->m_823 = NULL;
F->p_824 = NULL;
F->p_824 = (*(P422)rt_nil_check(F->d_243)).a;
if (((F->y_822 == NULL) || ((*(P432)rt_nil_check(F->y_822)).kind != ((rt_int)8LL)))) {
f_fail_21((*(P422)rt_nil_check(F->d_243)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->d_243)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if (((*(P422)rt_nil_check(F->d_243)).ival == ((rt_int)1LL))) {
F->m_823 = (*(P432)rt_nil_check(F->y_822)).members;
while ((F->m_823 != NULL)) {
f_define_142(f_copy_sym_240(F->m_823), (*(P422)rt_nil_check(F->d_243)).line);
F->m_823 = (*(P432)rt_nil_check(F->m_823)).mnext;
}
goto ret_;
}
while ((F->p_824 != NULL)) {
F->found_825 = 0;
F->m_823 = (*(P432)rt_nil_check(F->y_822)).members;
while ((F->m_823 != NULL)) {
if (rt_str_eq((*(P417)rt_nil_check((*(P432)rt_nil_check(F->m_823)).name)), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_824)).name)))) {
F->z_826 = NULL;
F->z_826 = f_copy_sym_240(F->m_823);
if (((*(P422)rt_nil_check(F->p_824)).ival == ((rt_int)1LL))) {
(*(P432)rt_nil_check(F->z_826)).ro_flag = 1;
}
f_define_142(F->z_826, (*(P422)rt_nil_check(F->d_243)).line);
F->found_825 = 1;
}
F->m_823 = (*(P432)rt_nil_check(F->m_823)).mnext;
}
if ((!F->found_825)) {
f_fail_21((*(P422)rt_nil_check(F->d_243)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_824)).name)), rt_str(" is not exported by ", 20)), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->d_243)).name))); b_; }));
}
F->p_824 = (*(P422)rt_nil_check(F->p_824)).next;
}
ret_:
  return;
}

static void f_finish_ptr_246(P426 t_245) {
  struct f_finish_ptr_246fr *F = rt_alloc(sizeof *F);
F->t_245 = t_245;
F->d_827 = NULL;
F->d_827 = (*(P426)rt_nil_check(F->t_245)).decl;
F->p_828 = NULL;
F->c_829 = NULL;
F->dummy_830 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_830, rt_str(" ", 1));
if (((*(P426)rt_nil_check(F->t_245)).target != NULL)) {
goto ret_;
}
f_open_scope_148();
F->p_828 = (*(P422)rt_nil_check(F->d_827)).b;
while ((F->p_828 != NULL)) {
F->y_831 = NULL;
F->y_831 = f_new_sym_152(((rt_int)2LL), (*(P422)rt_nil_check(F->p_828)).name);
(*(P432)rt_nil_check(F->y_831)).t = g_ty_int_478;
(*(P432)rt_nil_check(F->y_831)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_142(F->y_831, (*(P422)rt_nil_check(F->d_827)).line);
F->p_828 = (*(P422)rt_nil_check(F->p_828)).next;
}
(*(P426)rt_nil_check(F->t_245)).target = f_resolve_subtype_185((*(P422)rt_nil_check(F->d_827)).a, &F->c_829);
f_close_scope_149();
(*rt_str_at(&F->dummy_830, ((rt_int)1LL))) = rt_str_get(f_ctype_174(F->t_245), ((rt_int)1LL));
(*rt_str_at(&F->dummy_830, ((rt_int)1LL))) = rt_str_get(f_ctype_174((*(P426)rt_nil_check(F->t_245)).target), ((rt_int)1LL));
ret_:
  return;
}

static void f_declare_subprogram_248(P422 d_247) {
  struct f_declare_subprogram_248fr *F = rt_alloc(sizeof *F);
F->d_247 = d_247;
f_define_142(f_build_subprogram_250(F->d_247), (*(P422)rt_nil_check(F->d_247)).line);
ret_:
  return;
}

static P432 f_build_subprogram_250(P422 d_249) {
  struct f_build_subprogram_250fr *F = rt_alloc(sizeof *F);
F->d_249 = d_249;
F->y_832 = NULL;
F->p_833 = NULL;
F->p_833 = (*(P422)rt_nil_check(F->d_249)).a;
F->tail_834 = NULL;
if (((*(P422)rt_nil_check(F->d_249)).kind == ((rt_int)46LL))) {
F->y_832 = f_new_sym_152(((rt_int)3LL), (*(P422)rt_nil_check(F->d_249)).name);
} else if (((*(P422)rt_nil_check(F->d_249)).kind == ((rt_int)50LL))) {
F->y_832 = f_new_sym_152(((rt_int)9LL), (*(P422)rt_nil_check(F->d_249)).name);
} else {
F->y_832 = f_new_sym_152(((rt_int)4LL), (*(P422)rt_nil_check(F->d_249)).name);
}
while ((F->p_833 != NULL)) {
F->pm_835 = NULL;
{ R431 *cell836 = rt_alloc(sizeof(R431));
(*cell836).name = NULL;
(*cell836).t = NULL;
(*cell836).c = NULL;
(*cell836).cfield = NULL;
(*cell836).next = NULL;
F->pm_835 = cell836;
}
(*(P430)rt_nil_check(F->pm_835)).name = (*(P422)rt_nil_check(F->p_833)).name;
(*(P430)rt_nil_check(F->pm_835)).mode = (*(P422)rt_nil_check(F->p_833)).ival;
(*(P430)rt_nil_check(F->pm_835)).t = f_resolve_subtype_185((*(P422)rt_nil_check(F->p_833)).a, &(*(P430)rt_nil_check(F->pm_835)).c);
(*(P430)rt_nil_check(F->pm_835)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_833)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_834 == NULL)) {
(*(P432)rt_nil_check(F->y_832)).params = F->pm_835;
} else {
(*(P430)rt_nil_check(F->tail_834)).next = F->pm_835;
}
F->tail_834 = F->pm_835;
F->p_833 = (*(P422)rt_nil_check(F->p_833)).next;
}
(*(P432)rt_nil_check(F->y_832)).result = g_ty_void_483;
if (((*(P422)rt_nil_check(F->d_249)).b != NULL)) {
F->rc_837 = NULL;
(*(P432)rt_nil_check(F->y_832)).result = f_resolve_subtype_185((*(P422)rt_nil_check(F->d_249)).b, &F->rc_837);
}
(*(P432)rt_nil_check(F->y_832)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_337(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->d_249)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P432)rt_nil_check(F->y_832)).decl = F->d_249;
(*(P432)rt_nil_check(F->y_832)).level = g_cur_level_465;
if (((*(P422)rt_nil_check(F->d_249)).kind == ((rt_int)50LL))) {
f_put_25(g_out_globals_458, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_832)).cname))), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_832;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_element_252(P422 e_251) {
  struct f_element_252fr *F = rt_alloc(sizeof *F);
F->e_251 = e_251;
F->k_838 = (*(P422)rt_nil_check(F->e_251)).kind;
if ((((F->k_838 == ((rt_int)45LL)) || (F->k_838 == ((rt_int)46LL))) || (F->k_838 == ((rt_int)50LL)))) {
f_subprogram_264(F->e_251);
} else if (((((((F->k_838 == ((rt_int)49LL)) || (F->k_838 == ((rt_int)42LL))) || (F->k_838 == ((rt_int)43LL))) || (F->k_838 == ((rt_int)47LL))) || (F->k_838 == ((rt_int)48LL))) || (F->k_838 == ((rt_int)51LL)))) {
goto ret_;
} else if ((F->k_838 == ((rt_int)44LL))) {
f_finish_ptr_246((*(P432)rt_nil_check(f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_251)).name))))).t);
} else if ((F->k_838 == ((rt_int)40LL))) {
f_var_decl_260(F->e_251);
} else if (((F->k_838 == ((rt_int)41LL)) && ((*(P422)rt_nil_check(F->e_251)).flag == ((rt_int)0LL)))) {
f_const_decl_262(F->e_251);
} else if ((F->k_838 == ((rt_int)41LL))) {
goto ret_;
} else if ((F->k_838 == ((rt_int)33LL))) {
F->t_839 = NULL;
F->c_840 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_251)).a, g_ty_bool_479, &F->t_839));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_840), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_278(F->e_251);
}
ret_:
  return;
}

static rstr f_storage_255(rstr *name_253, P426 t_254) {
  struct f_storage_255fr *F = rt_alloc(sizeof *F);
F->name_253 = name_253;
F->t_254 = t_254;
if ((!g_in_func_464)) {
F->g_841 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_253))), rt_str("_", 1)); b_; })));
f_put_25(g_out_globals_458, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_174(F->t_254)), rt_str(" ", 1)), F->g_841), rt_str(";", 1)); b_; }));
g_st_field_469 = f_mk_3(&F->g_841);
F->result_ = F->g_841;
goto ret_;
}
{
F->f_842 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_253)), rt_str("_", 1)); b_; })));
f_put_25(g_fields_buf_463, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_174(F->t_254)), rt_str(" ", 1)), F->f_842), rt_str(";", 1)); b_; }));
g_st_field_469 = f_mk_3(&F->f_842);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_842);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_bind_258(P432 y_256, rstr *access_257) {
  struct f_bind_258fr *F = rt_alloc(sizeof *F);
F->y_256 = y_256;
F->access_257 = access_257;
if (g_in_func_464) {
(*(P432)rt_nil_check(F->y_256)).level = g_cur_level_465;
(*(P432)rt_nil_check(F->y_256)).access = g_st_field_469;
} else {
(*(P432)rt_nil_check(F->y_256)).level = ((rt_int)0LL);
(*(P432)rt_nil_check(F->y_256)).access = f_mk_3(&(*F->access_257));
}
ret_:
  return;
}

static void f_var_decl_260(P422 d_259) {
  struct f_var_decl_260fr *F = rt_alloc(sizeof *F);
F->d_259 = d_259;
F->c_843 = NULL;
F->t_844 = NULL;
F->t_844 = f_resolve_subtype_185((*(P422)rt_nil_check(F->d_259)).a, &F->c_843);
F->y_845 = NULL;
F->y_845 = f_new_sym_152(((rt_int)1LL), (*(P422)rt_nil_check(F->d_259)).name);
F->access_846 = rt_str_copy(f_storage_255(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->d_259)).name)), F->t_844));
f_init_storage_201(&F->access_846, F->t_844, F->c_843);
if (((*(P422)rt_nil_check(F->d_259)).b != NULL)) {
F->vt_847 = NULL;
F->v_848 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->d_259)).b, F->t_844, &F->vt_847));
f_check_type_172(F->vt_847, F->t_844, (*(P422)rt_nil_check(F->d_259)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_213(&F->access_846, F->t_844, &F->v_848, F->c_843); b_; }));
}
(*(P432)rt_nil_check(F->y_845)).t = F->t_844;
(*(P432)rt_nil_check(F->y_845)).c = F->c_843;
f_bind_258(F->y_845, &F->access_846);
f_define_142(F->y_845, (*(P422)rt_nil_check(F->d_259)).line);
ret_:
  return;
}

static void f_const_decl_262(P422 d_261) {
  struct f_const_decl_262fr *F = rt_alloc(sizeof *F);
F->d_261 = d_261;
F->c_849 = NULL;
F->c_849 = f_new_cons_155();
F->t_850 = NULL;
F->vt_851 = NULL;
F->y_852 = NULL;
F->y_852 = f_new_sym_152(((rt_int)2LL), (*(P422)rt_nil_check(F->d_261)).name);
if (((*(P422)rt_nil_check(F->d_261)).a != NULL)) {
F->t_850 = f_resolve_subtype_185((*(P422)rt_nil_check(F->d_261)).a, &F->c_849);
}
{
F->v_854 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->d_261)).b, F->t_850, &F->vt_851));
if ((F->t_850 != NULL)) {
f_check_type_172(F->vt_851, F->t_850, (*(P422)rt_nil_check(F->d_261)).line);
} else {
F->t_850 = F->vt_851;
}
if (((*(P426)rt_nil_check(F->t_850)).kind == ((rt_int)1LL))) {
(*(P432)rt_nil_check(F->y_852)).mvalue = f_manifest_204((*(P422)rt_nil_check(F->d_261)).b, &F->ok_853);
(*(P432)rt_nil_check(F->y_852)).hasmv = F->ok_853;
}
{
F->access_855 = rt_str_copy(f_storage_255(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->d_261)).name)), F->t_850));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_855, rt_str(" = ", 3)), f_copy_code_216(F->t_850, &F->v_854)), rt_str(";", 1)); b_; }));
f_bind_258(F->y_852, &F->access_855);
}
}
(*(P432)rt_nil_check(F->y_852)).t = F->t_850;
(*(P432)rt_nil_check(F->y_852)).c = F->c_849;
(*(P432)rt_nil_check(F->y_852)).ro_flag = 1;
f_define_142(F->y_852, (*(P422)rt_nil_check(F->d_261)).line);
ret_:
  return;
}

static void f_subprogram_264(P422 d_263) {
  struct f_subprogram_264fr *F = rt_alloc(sizeof *F);
F->d_263 = d_263;
f_gen_subprogram_267(F->d_263, f_lookup_decl_139(F->d_263));
ret_:
  return;
}

static void f_gen_subprogram_267(P422 d_265, P432 y_266) {
  struct f_gen_subprogram_267fr *F = rt_alloc(sizeof *F);
F->d_265 = d_265;
F->y_266 = y_266;
F->saved_code_856 = NULL;
F->saved_code_856 = g_code_462;
F->saved_fields_857 = NULL;
F->saved_fields_857 = g_fields_buf_463;
F->saved_in_858 = g_in_func_464;
F->saved_sym_859 = NULL;
F->saved_sym_859 = g_func_sym_471;
F->saved_exits_860 = NULL;
F->saved_exits_860 = g_exits_472;
F->saved_frames_861 = g_frames_473;
F->args_862 = NULL;
F->args_862 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_863 = NULL;
F->pm_863 = (*(P432)rt_nil_check(F->y_266)).params;
F->saved_handlers_864 = NULL;
F->saved_handlers_864 = g_handlers_474;
F->saved_cleanups_865 = NULL;
F->saved_cleanups_865 = g_cleanups_475;
F->ctx_866 = NULL;
F->head_867 = NULL;
F->frame_868 = NULL;
F->frame_868 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_266)).cname)), rt_str("fr", 2)); b_; }));
F->parent_869 = NULL;
if (g_in_func_464) {
F->parent_869 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P432)rt_nil_check(g_func_sym_471)).cname)), rt_str("fr", 2)); b_; }));
}
g_code_462 = f_new_buffer_22();
g_fields_buf_463 = f_new_buffer_22();
g_in_func_464 = 1;
g_func_sym_471 = F->y_266;
g_exits_472 = NULL;
g_frames_473 = ((rt_int)0LL);
g_handlers_474 = NULL;
g_cleanups_475 = NULL;
g_cur_level_465 = rt_add(g_cur_level_465, ((rt_int)1LL));
f_open_scope_148();
{ R445 *cell870 = rt_alloc(sizeof(R445));
(*cell870).imps = NULL;
(*cell870).next = NULL;
F->ctx_866 = cell870;
}
(*(P444)rt_nil_check(F->ctx_866)).depth = g_depth_451;
(*(P444)rt_nil_check(F->ctx_866)).imps = (*(P422)rt_nil_check(F->d_265)).d;
(*(P444)rt_nil_check(F->ctx_866)).all_imp = ((*(P422)rt_nil_check(F->d_265)).flag >= ((rt_int)2LL));
(*(P444)rt_nil_check(F->ctx_866)).next = g_fctx_466;
g_fctx_466 = F->ctx_866;
if ((F->parent_869 != NULL)) {
f_put_25(g_fields_buf_463, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P417)rt_nil_check(F->parent_869))), rt_str(" *up;", 5)); b_; }));
if (((*(P432)rt_nil_check(F->y_266)).kind != ((rt_int)9LL))) {
F->args_862 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P417)rt_nil_check(F->parent_869))), rt_str(" *up_", 5)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_863 != NULL)) {
F->ct_871 = rt_str_copy(f_ctype_174((*(P430)rt_nil_check(F->pm_863)).t));
F->f_872 = rt_str_copy((*(P417)rt_nil_check((*(P430)rt_nil_check(F->pm_863)).cfield)));
F->p_873 = NULL;
if ((((*(P417)rt_nil_check(F->args_862))).len > ((rt_int)0LL))) {
F->args_862 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check(F->args_862)), rt_str(", ", 2)); b_; }));
}
if (((*(P430)rt_nil_check(F->pm_863)).mode == ((rt_int)1LL))) {
F->p_873 = f_new_sym_152(((rt_int)2LL), (*(P430)rt_nil_check(F->pm_863)).name);
f_put_25(g_fields_buf_463, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_871), rt_str(" ", 1)), F->f_872), rt_str(";", 1)); b_; }));
F->args_862 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->args_862)), F->ct_871), rt_str(" ", 1)), F->f_872); b_; }));
(*(P432)rt_nil_check(F->p_873)).access = f_mk_3(&F->f_872);
if (((*(P432)rt_nil_check(F->y_266)).kind != ((rt_int)9LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_872), rt_str(" = ", 3)), f_copy_code_216((*(P430)rt_nil_check(F->pm_863)).t, &F->f_872)), rt_str(";", 1)); b_; }));
}
} else {
F->p_873 = f_new_sym_152(((rt_int)1LL), (*(P430)rt_nil_check(F->pm_863)).name);
f_put_25(g_fields_buf_463, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_871), rt_str(" *", 2)), F->f_872), rt_str(";", 1)); b_; }));
F->args_862 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->args_862)), F->ct_871), rt_str(" *", 2)), F->f_872); b_; }));
(*(P432)rt_nil_check(F->p_873)).access = f_mk_3(&F->f_872);
(*(P432)rt_nil_check(F->p_873)).byref = 1;
if (((*(P432)rt_nil_check(F->y_266)).kind != ((rt_int)9LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_872), rt_str(" = ", 3)), F->f_872), rt_str(";", 1)); b_; }));
}
}
(*(P432)rt_nil_check(F->p_873)).t = (*(P430)rt_nil_check(F->pm_863)).t;
(*(P432)rt_nil_check(F->p_873)).c = (*(P430)rt_nil_check(F->pm_863)).c;
(*(P432)rt_nil_check(F->p_873)).level = g_cur_level_465;
(*(P432)rt_nil_check(F->p_873)).ro_flag = (((*(P430)rt_nil_check(F->pm_863)).mode == ((rt_int)1LL)) || ((*(P430)rt_nil_check(F->pm_863)).mode == ((rt_int)4LL)));
f_define_142(F->p_873, (*(P422)rt_nil_check(F->d_265)).line);
F->pm_863 = (*(P430)rt_nil_check(F->pm_863)).next;
}
if (((*(P426)rt_nil_check((*(P432)rt_nil_check(F->y_266)).result)).kind != ((rt_int)9LL))) {
f_put_25(g_fields_buf_463, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_174((*(P432)rt_nil_check(F->y_266)).result)), rt_str(" result_;", 9)); b_; }));
}
f_declare_body_232((*(P422)rt_nil_check(F->d_265)).c);
f_body_elements_269((*(P422)rt_nil_check(F->d_265)).c);
f_close_scope_149();
g_fctx_466 = (*(P444)rt_nil_check(g_fctx_466)).next;
g_cur_level_465 = rt_sub(g_cur_level_465, ((rt_int)1LL));
if (((((*(P417)rt_nil_check(F->args_862))).len == ((rt_int)0LL)) || ((*(P432)rt_nil_check(F->y_266)).kind == ((rt_int)9LL)))) {
F->args_862 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P432)rt_nil_check(F->y_266)).kind == ((rt_int)9LL))) {
F->args_862 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_867 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_174((*(P432)rt_nil_check(F->y_266)).result)), rt_str(" ", 1)), (*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_266)).cname))), rt_str("(", 1)), (*(P417)rt_nil_check(F->args_862))), rt_str(")", 1)); b_; }));
f_put_25(g_out_protos_457, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check(F->head_867)), rt_str(";", 1)); b_; }));
f_put_25(g_out_funcs_459, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check(F->head_867)), rt_str(" {", 2)); b_; }));
f_put_25(g_out_frames_470, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P417)rt_nil_check(F->frame_868))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_32(g_out_frames_470, g_fields_buf_463);
f_put_25(g_out_frames_470, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P432)rt_nil_check(F->y_266)).kind == ((rt_int)9LL))) {
f_put_25(g_out_funcs_459, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P417)rt_nil_check(F->frame_868))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_25(g_out_funcs_459, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P417)rt_nil_check(F->frame_868))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_splice_32(g_out_funcs_459, g_code_462);
if (((*(P426)rt_nil_check((*(P432)rt_nil_check(F->y_266)).result)).kind != ((rt_int)9LL))) {
f_put_25(g_out_funcs_459, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_16()), rt_str("function ended without RETURN", 29)), f_q_16()), rt_str(");", 2)); b_; }));
f_put_25(g_out_funcs_459, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_25(g_out_funcs_459, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_25(g_out_funcs_459, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_25(g_out_funcs_459, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_25(g_out_funcs_459, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(g_out_funcs_459, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_462 = F->saved_code_856;
g_fields_buf_463 = F->saved_fields_857;
g_in_func_464 = F->saved_in_858;
g_func_sym_471 = F->saved_sym_859;
g_exits_472 = F->saved_exits_860;
g_frames_473 = F->saved_frames_861;
g_handlers_474 = F->saved_handlers_864;
g_cleanups_475 = F->saved_cleanups_865;
ret_:
  return;
}

static void f_body_elements_269(P422 elems_268) {
  struct f_body_elements_269fr *F = rt_alloc(sizeof *F);
F->elems_268 = elems_268;
F->e_874 = NULL;
F->e_874 = F->elems_268;
while ((F->e_874 != NULL)) {
f_element_252(F->e_874);
F->e_874 = (*(P422)rt_nil_check(F->e_874)).next;
}
F->e_874 = F->elems_268;
while ((F->e_874 != NULL)) {
if (((*(P422)rt_nil_check(F->e_874)).kind == ((rt_int)50LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_await_decl(&", 15), (*(P417)rt_nil_check((*(P432)rt_nil_check(f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_874)).name))))).cname))), rt_str("decl);", 6)); b_; }));
}
F->e_874 = (*(P422)rt_nil_check(F->e_874)).next;
}
ret_:
  return;
}

static void f_gen_body_271(P422 elems_270) {
  struct f_gen_body_271fr *F = rt_alloc(sizeof *F);
F->elems_270 = elems_270;
f_open_scope_148();
f_declare_body_232(F->elems_270);
f_body_elements_269(F->elems_270);
f_close_scope_149();
ret_:
  return;
}

static void f_pop_frames_273(rt_int upto_272) {
  struct f_pop_frames_273fr *F = rt_alloc(sizeof *F);
F->upto_272 = upto_272;
F->i_875 = g_frames_473;
F->c_876 = NULL;
F->c_876 = g_cleanups_475;
while ((F->i_875 > F->upto_272)) {
f_emit_27(&(*(P417)rt_nil_check((*(P434)rt_nil_check(F->c_876)).s)));
F->c_876 = (*(P434)rt_nil_check(F->c_876)).next;
F->i_875 = rt_sub(F->i_875, ((rt_int)1LL));
}
ret_:
  return;
}

static void f_push_cleanup_275(rstr *s_274) {
  struct f_push_cleanup_275fr *F = rt_alloc(sizeof *F);
F->s_274 = s_274;
F->c_877 = NULL;
{ R435 *cell878 = rt_alloc(sizeof(R435));
(*cell878).s = NULL;
(*cell878).next = NULL;
F->c_877 = cell878;
}
(*(P434)rt_nil_check(F->c_877)).s = f_mk_3(&(*F->s_274));
(*(P434)rt_nil_check(F->c_877)).next = g_cleanups_475;
g_cleanups_475 = F->c_877;
g_frames_473 = rt_add(g_frames_473, ((rt_int)1LL));
ret_:
  return;
}

static void f_pop_cleanup_276(void) {
  struct f_pop_cleanup_276fr *F = rt_alloc(sizeof *F);
g_cleanups_475 = (*(P434)rt_nil_check(g_cleanups_475)).next;
g_frames_473 = rt_sub(g_frames_473, ((rt_int)1LL));
ret_:
  return;
}

static void f_gen_statement_278(P422 s_277) {
  struct f_gen_statement_278fr *F = rt_alloc(sizeof *F);
F->s_277 = s_277;
F->label_879 = NULL;
if (((*(P422)rt_nil_check(F->s_277)).tag != NULL)) {
F->x_880 = NULL;
{ R441 *cell881 = rt_alloc(sizeof(R441));
(*cell881).match = NULL;
(*cell881).label = NULL;
(*cell881).next = NULL;
F->x_880 = cell881;
}
F->label_879 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P440)rt_nil_check(F->x_880)).match = (*(P422)rt_nil_check(F->s_277)).tag;
(*(P440)rt_nil_check(F->x_880)).label = F->label_879;
(*(P440)rt_nil_check(F->x_880)).depth = g_frames_473;
(*(P440)rt_nil_check(F->x_880)).next = g_exits_472;
g_exits_472 = F->x_880;
}
{ rt_int sel882 = (*(P422)rt_nil_check(F->s_277)).kind;
if (0 || (sel882 == ((rt_int)20LL))) {
f_st_assign_280(F->s_277);
} else if (0 || (sel882 == ((rt_int)21LL))) {
f_st_call_282(F->s_277);
} else if (0 || (sel882 == ((rt_int)22LL))) {
f_st_if_284(F->s_277);
} else if (0 || (sel882 == ((rt_int)23LL))) {
f_st_case_286(F->s_277);
} else if (0 || (sel882 == ((rt_int)24LL))) {
f_st_repeat_288(F->s_277);
} else if (0 || (sel882 == ((rt_int)25LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_271((*(P422)rt_nil_check(F->s_277)).a);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel882 == ((rt_int)27LL))) {
f_st_exit_290(F->s_277);
} else if (0 || (sel882 == ((rt_int)28LL))) {
f_st_return_292(F->s_277);
} else if (0 || (sel882 == ((rt_int)30LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_295(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->s_277)).name)), (*(P422)rt_nil_check(F->s_277)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel882 == ((rt_int)31LL))) {
if ((g_handlers_474 == NULL)) {
f_fail_21((*(P422)rt_nil_check(F->s_277)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P417)rt_nil_check((*(P434)rt_nil_check(g_handlers_474)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel882 == ((rt_int)26LL))) {
f_st_guard_297(F->s_277);
} else if (0 || (sel882 == ((rt_int)32LL))) {
f_st_alloc_299(F->s_277);
} else if (0 || (sel882 == ((rt_int)34LL))) {
f_st_create_303(F->s_277);
} else if (0 || (sel882 == ((rt_int)35LL))) {
f_st_wait_309(F->s_277);
} else if (0 || (sel882 == ((rt_int)36LL))) {
f_st_region_311(F->s_277);
} else {
f_fail_21((*(P422)rt_nil_check(F->s_277)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P422)rt_nil_check(F->s_277)).tag != NULL)) {
g_exits_472 = (*(P440)rt_nil_check(g_exits_472)).next;
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check(F->label_879)), rt_str(": ;", 3)); b_; }));
}
ret_:
  return;
}

static void f_st_assign_280(P422 s_279) {
  struct f_st_assign_280fr *F = rt_alloc(sizeof *F);
F->s_279 = s_279;
F->lv_883 = NULL;
F->t_884 = NULL;
F->vt_885 = NULL;
F->c_886 = NULL;
if (((((*(P422)rt_nil_check((*(P422)rt_nil_check(F->s_279)).a)).kind == ((rt_int)10LL)) && ((*(P422)rt_nil_check((*(P422)rt_nil_check(F->s_279)).a)).b != NULL)) && ((*(P422)rt_nil_check((*(P422)rt_nil_check((*(P422)rt_nil_check(F->s_279)).a)).b)).kind == ((rt_int)16LL)))) {
f_lvalue_348((*(P422)rt_nil_check((*(P422)rt_nil_check(F->s_279)).a)).a, &F->lv_883, &F->t_884, &F->c_886, &F->ro_887);
if ((F->ro_887 || ((*(P426)rt_nil_check(F->t_884)).kind != ((rt_int)5LL)))) {
f_fail_21((*(P422)rt_nil_check(F->s_279)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string variable", 40); b_; }));
}
{
F->lo_888 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check((*(P422)rt_nil_check((*(P422)rt_nil_check(F->s_279)).a)).b)).a, g_ty_int_478, &F->vt_885));
F->hi_889 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check((*(P422)rt_nil_check((*(P422)rt_nil_check(F->s_279)).a)).b)).b, g_ty_int_478, &F->vt_885));
F->v_890 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->s_279)).b, g_ty_string_482, &F->vt_885));
f_check_type_172(F->vt_885, g_ty_string_482, (*(P422)rt_nil_check(F->s_279)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P417)rt_nil_check(F->lv_883))), rt_str(", ", 2)), F->lo_888), rt_str(", ", 2)), F->hi_889), rt_str(", ", 2)), F->v_890), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_348((*(P422)rt_nil_check(F->s_279)).a, &F->lv_883, &F->t_884, &F->c_886, &F->ro_887);
if (F->ro_887) {
f_fail_21((*(P422)rt_nil_check(F->s_279)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if ((!f_opened_187(F->t_884))) {
f_fail_21((*(P422)rt_nil_check(F->s_279)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->t_884)).name))), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_891 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->s_279)).b, F->t_884, &F->vt_885));
f_check_type_172(F->vt_885, F->t_884, (*(P422)rt_nil_check(F->s_279)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_213(&(*(P417)rt_nil_check(F->lv_883)), F->t_884, &F->v_891, F->c_886); b_; }));
}
ret_:
  return;
}

static void f_st_call_282(P422 s_281) {
  struct f_st_call_282fr *F = rt_alloc(sizeof *F);
F->s_281 = s_281;
F->c_892 = NULL;
F->c_892 = (*(P422)rt_nil_check(F->s_281)).a;
F->t_893 = NULL;
if ((((*(P422)rt_nil_check(F->c_892)).kind == ((rt_int)7LL)) || ((*(P422)rt_nil_check(F->c_892)).kind == ((rt_int)12LL)))) {
F->x_894 = NULL;
F->x_894 = f_nn_46(((rt_int)10LL), (*(P422)rt_nil_check(F->c_892)).line);
(*(P422)rt_nil_check(F->x_894)).a = F->c_892;
F->c_892 = F->x_894;
}
if (((*(P422)rt_nil_check(F->c_892)).kind != ((rt_int)10LL))) {
f_fail_21((*(P422)rt_nil_check(F->s_281)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_406(F->c_892, 1, &F->t_893), rt_str(";", 1)); b_; }));
ret_:
  return;
}

static void f_st_if_284(P422 s_283) {
  struct f_st_if_284fr *F = rt_alloc(sizeof *F);
F->s_283 = s_283;
F->a_895 = NULL;
F->a_895 = (*(P422)rt_nil_check(F->s_283)).a;
F->first_896 = 1;
F->t_897 = NULL;
while ((F->a_895 != NULL)) {
F->c_898 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->a_895)).a, g_ty_bool_479, &F->t_897));
f_check_type_172(F->t_897, g_ty_bool_479, (*(P422)rt_nil_check(F->s_283)).line);
if (F->first_896) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_898), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_898), rt_str(") {", 3)); b_; }));
}
F->first_896 = 0;
f_gen_body_271((*(P422)rt_nil_check(F->a_895)).b);
F->a_895 = (*(P422)rt_nil_check(F->a_895)).next;
}
if (((*(P422)rt_nil_check(F->s_283)).flag == ((rt_int)1LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_gen_body_271((*(P422)rt_nil_check(F->s_283)).b);
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_case_286(P422 s_285) {
  struct f_st_case_286fr *F = rt_alloc(sizeof *F);
F->s_285 = s_285;
F->st_899 = NULL;
F->vt_900 = NULL;
F->first_901 = 1;
F->a_902 = NULL;
F->a_902 = (*(P422)rt_nil_check(F->s_285)).b;
F->sel_903 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->s_285)).a, NULL, &F->st_899));
F->tmp_904 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_174(F->st_899)), rt_str(" ", 1)), F->tmp_904), rt_str(" = ", 3)), F->sel_903), rt_str(";", 1)); b_; }));
while ((F->a_902 != NULL)) {
F->lab_905 = NULL;
F->lab_905 = (*(P422)rt_nil_check(F->a_902)).a;
F->conds_906 = NULL;
F->conds_906 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_905 != NULL)) {
if (((*(P422)rt_nil_check(F->lab_905)).b == NULL)) {
F->v_907 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->lab_905)).a, F->st_899, &F->vt_900));
f_check_type_172(F->vt_900, F->st_899, (*(P422)rt_nil_check(F->s_285)).line);
F->conds_906 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->conds_906)), rt_str(" || ", 4)), f_eq_code_220(F->st_899, &F->tmp_904, &F->v_907)); b_; }));
} else {
F->lo_908 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->lab_905)).a, F->st_899, &F->vt_900));
F->hi_909 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->lab_905)).b, F->st_899, &F->vt_900));
F->conds_906 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->conds_906)), rt_str(" || (", 5)), F->tmp_904), rt_str(" >= ", 4)), F->lo_908), rt_str(" && ", 4)), F->tmp_904), rt_str(" <= ", 4)), F->hi_909), rt_str(")", 1)); b_; }));
}
F->lab_905 = (*(P422)rt_nil_check(F->lab_905)).next;
}
if (F->first_901) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P417)rt_nil_check(F->conds_906))), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P417)rt_nil_check(F->conds_906))), rt_str(") {", 3)); b_; }));
}
F->first_901 = 0;
f_gen_body_271((*(P422)rt_nil_check(F->a_902)).b);
F->a_902 = (*(P422)rt_nil_check(F->a_902)).next;
}
if (F->first_901) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P422)rt_nil_check(F->s_285)).flag == ((rt_int)1LL))) {
f_gen_body_271((*(P422)rt_nil_check(F->s_285)).c);
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_repeat_288(P422 s_287) {
  struct f_st_repeat_288fr *F = rt_alloc(sizeof *F);
F->s_287 = s_287;
F->t_910 = NULL;
F->c_911 = NULL;
if (((*(P422)rt_nil_check(F->s_287)).flag == ((rt_int)0LL))) {
F->cond_912 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->s_287)).a, g_ty_bool_479, &F->t_910));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_912), rt_str(") {", 3)); b_; }));
f_gen_body_271((*(P422)rt_nil_check(F->s_287)).b);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_910 = f_resolve_subtype_185((*(P422)rt_nil_check(F->s_287)).a, &F->c_911);
F->c_911 = f_base_cons_166(F->t_910, F->c_911);
if ((((*(P426)rt_nil_check(f_base_of_163(F->t_910))).kind == ((rt_int)4LL)) && ((*(P424)rt_nil_check(F->c_911)).lo == NULL))) {
F->c_911 = f_new_cons_155();
(*(P424)rt_nil_check(F->c_911)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P424)rt_nil_check(F->c_911)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_52((*(P426)rt_nil_check(f_base_of_163(F->t_910))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P424)rt_nil_check(F->c_911)).lo == NULL)) {
f_fail_21((*(P422)rt_nil_check(F->s_287)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_913 = rt_str_copy(f_storage_255(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->s_287)).name)), F->t_910));
F->lov_914 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_915 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_916 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_917 = NULL;
F->y_917 = f_new_sym_152(((rt_int)2LL), (*(P422)rt_nil_check(F->s_287)).name);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_914), rt_str(" = ", 3)), (*(P417)rt_nil_check((*(P424)rt_nil_check(F->c_911)).lo))), rt_str(", ", 2)), F->hiv_915), rt_str(" = ", 3)), (*(P417)rt_nil_check((*(P424)rt_nil_check(F->c_911)).hi))), rt_str(";", 1)); b_; }));
if (((*(P422)rt_nil_check(F->s_287)).ival == ((rt_int)1LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_916), rt_str(" = ", 3)), F->hiv_915), rt_str("; ", 2)), F->it_916), rt_str(" >= ", 4)), F->lov_914), rt_str("; ", 2)), F->it_916), rt_str("--) {", 5)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_916), rt_str(" = ", 3)), F->lov_914), rt_str("; ", 2)), F->it_916), rt_str(" <= ", 4)), F->hiv_915), rt_str("; ", 2)), F->it_916), rt_str("++) {", 5)); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_913, rt_str(" = ", 3)), F->it_916), rt_str(";", 1)); b_; }));
f_open_scope_148();
(*(P432)rt_nil_check(F->y_917)).t = F->t_910;
(*(P432)rt_nil_check(F->y_917)).c = F->c_911;
f_bind_258(F->y_917, &F->access_913);
(*(P432)rt_nil_check(F->y_917)).ro_flag = 1;
f_define_142(F->y_917, (*(P422)rt_nil_check(F->s_287)).line);
f_gen_body_271((*(P422)rt_nil_check(F->s_287)).b);
f_close_scope_149();
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_exit_290(P422 s_289) {
  struct f_st_exit_290fr *F = rt_alloc(sizeof *F);
F->s_289 = s_289;
F->x_918 = NULL;
F->x_918 = g_exits_472;
while ((F->x_918 != NULL)) {
if (rt_str_eq((*(P417)rt_nil_check((*(P440)rt_nil_check(F->x_918)).match)), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->s_289)).name)))) {
f_pop_frames_273((*(P440)rt_nil_check(F->x_918)).depth);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P417)rt_nil_check((*(P440)rt_nil_check(F->x_918)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_918 = (*(P440)rt_nil_check(F->x_918)).next;
}
f_fail_21((*(P422)rt_nil_check(F->s_289)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->s_289)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  return;
}

static void f_st_return_292(P422 s_291) {
  struct f_st_return_292fr *F = rt_alloc(sizeof *F);
F->s_291 = s_291;
F->vt_919 = NULL;
if ((!g_in_func_464)) {
f_pop_frames_273(((rt_int)0LL));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P426)rt_nil_check((*(P432)rt_nil_check(g_func_sym_471)).result)).kind == ((rt_int)9LL))) {
if (((*(P422)rt_nil_check(F->s_291)).a != NULL)) {
f_fail_21((*(P422)rt_nil_check(F->s_291)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_273(((rt_int)0LL));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P422)rt_nil_check(F->s_291)).a == NULL)) {
f_fail_21((*(P422)rt_nil_check(F->s_291)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_920 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->s_291)).a, (*(P432)rt_nil_check(g_func_sym_471)).result, &F->vt_919));
f_check_type_172(F->vt_919, (*(P432)rt_nil_check(g_func_sym_471)).result, (*(P422)rt_nil_check(F->s_291)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->v_920), rt_str(";", 1)); b_; }));
f_pop_frames_273(((rt_int)0LL));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  return;
}

static rstr f_exc_id_295(rstr *name_293, rt_int line_294) {
  struct f_exc_id_295fr *F = rt_alloc(sizeof *F);
F->name_293 = name_293;
F->line_294 = line_294;
F->y_921 = NULL;
F->y_921 = f_lookup_137(&(*F->name_293));
if (((F->y_921 != NULL) && ((*(P432)rt_nil_check(F->y_921)).kind == ((rt_int)7LL)))) {
F->result_ = (*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_921)).cname));
goto ret_;
}
if (((((*F->name_293)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_293), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_16()), (*F->name_293)), f_q_16()), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_294, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_293), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_guard_297(P422 s_296) {
  struct f_st_guard_297fr *F = rt_alloc(sizeof *F);
F->s_296 = s_296;
F->h_922 = NULL;
F->h_922 = (*(P422)rt_nil_check(F->s_296)).b;
F->first_923 = 1;
F->hv_924 = NULL;
{
F->f_925 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_926 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_275(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_925), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_925), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_925), rt_str(")) {", 4)); b_; }));
f_gen_body_271((*(P422)rt_nil_check(F->s_296)).a);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_925), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_276();
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_925), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_926), rt_str(" = rt_xcur;", 11)); b_; }));
{ R435 *cell927 = rt_alloc(sizeof(R435));
(*cell927).s = NULL;
(*cell927).next = NULL;
F->hv_924 = cell927;
}
(*(P434)rt_nil_check(F->hv_924)).s = f_mk_3(&F->x_926);
(*(P434)rt_nil_check(F->hv_924)).next = g_handlers_474;
g_handlers_474 = F->hv_924;
while ((F->h_922 != NULL)) {
F->n_928 = NULL;
F->n_928 = (*(P422)rt_nil_check(F->h_922)).a;
F->conds_929 = NULL;
F->conds_929 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_928 != NULL)) {
F->conds_929 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->conds_929)), rt_str(" || ", 4)), F->x_926), rt_str(" == ", 4)), f_exc_id_295(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->n_928)).name)), (*(P422)rt_nil_check(F->s_296)).line)); b_; }));
F->n_928 = (*(P422)rt_nil_check(F->n_928)).next;
}
if (F->first_923) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P417)rt_nil_check(F->conds_929))), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P417)rt_nil_check(F->conds_929))), rt_str(") {", 3)); b_; }));
}
F->first_923 = 0;
f_gen_body_271((*(P422)rt_nil_check(F->h_922)).b);
F->h_922 = (*(P422)rt_nil_check(F->h_922)).next;
}
if (F->first_923) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P422)rt_nil_check(F->s_296)).flag == ((rt_int)1LL))) {
f_gen_body_271((*(P422)rt_nil_check(F->s_296)).c);
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_926), rt_str(");", 2)); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_474 = (*(P434)rt_nil_check(g_handlers_474)).next;
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_alloc_299(P422 s_298) {
  struct f_st_alloc_299fr *F = rt_alloc(sizeof *F);
F->s_298 = s_298;
F->lv_930 = NULL;
F->t_931 = NULL;
F->target_932 = NULL;
F->vt_933 = NULL;
F->c_934 = NULL;
F->tc_935 = NULL;
F->d_937 = NULL;
F->p_938 = NULL;
F->a_939 = NULL;
f_lvalue_348((*(P422)rt_nil_check(F->s_298)).a, &F->lv_930, &F->t_931, &F->c_934, &F->ro_936);
if (((*(P426)rt_nil_check(F->t_931)).kind != ((rt_int)8LL))) {
f_fail_21((*(P422)rt_nil_check(F->s_298)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_246(F->t_931);
F->d_937 = (*(P426)rt_nil_check(F->t_931)).decl;
F->target_932 = (*(P426)rt_nil_check(F->t_931)).target;
if ((f_list_len_52((*(P422)rt_nil_check(F->s_298)).b) != f_list_len_52((*(P422)rt_nil_check(F->d_937)).b))) {
f_fail_21((*(P422)rt_nil_check(F->s_298)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_52((*(P422)rt_nil_check(F->d_937)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_940 = rt_str_copy(f_ctype_174(F->target_932));
F->cell_941 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_940), rt_str(" *", 2)), F->cell_941), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_940), rt_str("));", 3)); b_; }));
f_open_scope_148();
F->p_938 = (*(P422)rt_nil_check(F->d_937)).b;
F->a_939 = (*(P422)rt_nil_check(F->s_298)).b;
while ((F->p_938 != NULL)) {
F->v_942 = rt_str_copy(f_gexpr_369(F->a_939, g_ty_int_478, &F->vt_933));
F->pv_943 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_944 = NULL;
F->y_944 = f_new_sym_152(((rt_int)2LL), (*(P422)rt_nil_check(F->p_938)).name);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_943), rt_str(" = ", 3)), F->v_942), rt_str(";", 1)); b_; }));
(*(P432)rt_nil_check(F->y_944)).t = g_ty_int_478;
(*(P432)rt_nil_check(F->y_944)).access = f_mk_3(&F->pv_943);
f_define_142(F->y_944, (*(P422)rt_nil_check(F->s_298)).line);
F->p_938 = (*(P422)rt_nil_check(F->p_938)).next;
F->a_939 = (*(P422)rt_nil_check(F->a_939)).next;
}
F->vt_933 = f_resolve_subtype_185((*(P422)rt_nil_check(F->d_937)).a, &F->tc_935);
f_init_storage_201(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_941), rt_str(")", 1)); b_; }), F->target_932, F->tc_935);
f_close_scope_149();
if (((*(P422)rt_nil_check(F->s_298)).c != NULL)) {
F->v_945 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->s_298)).c, F->target_932, &F->vt_933));
f_check_type_172(F->vt_933, F->target_932, (*(P422)rt_nil_check(F->s_298)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_213(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_941), rt_str(")", 1)); b_; }), F->target_932, &F->v_945, F->tc_935); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->lv_930)), rt_str(" = ", 3)), F->cell_941), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static rstr f_act_ref_301(P422 e_300) {
  struct f_act_ref_301fr *F = rt_alloc(sizeof *F);
F->e_300 = e_300;
F->lv_946 = NULL;
F->t_947 = NULL;
F->c_948 = NULL;
if (((((*(P422)rt_nil_check(F->e_300)).kind == ((rt_int)7LL)) && rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_300)).name)), rt_str("ME", 2))) && (f_lookup_137(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
f_lvalue_348(F->e_300, &F->lv_946, &F->t_947, &F->c_948, &F->ro_949);
if (((*(P426)rt_nil_check(F->t_947)).kind != ((rt_int)14LL))) {
f_fail_21((*(P422)rt_nil_check(F->e_300)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (*(P417)rt_nil_check(F->lv_946)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_create_303(P422 s_302) {
  struct f_st_create_303fr *F = rt_alloc(sizeof *F);
F->s_302 = s_302;
F->y_950 = NULL;
F->y_950 = f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->s_302)).name)));
F->pm_951 = NULL;
F->a_952 = NULL;
F->a_952 = (*(P422)rt_nil_check(F->s_302)).b;
F->lv_953 = NULL;
F->lt_954 = NULL;
F->vt_955 = NULL;
F->lc_956 = NULL;
if (((F->y_950 != NULL) && ((*(P432)rt_nil_check(F->y_950)).kind == ((rt_int)10LL)))) {
F->y_950 = f_instantiate_327(F->y_950, (*(P422)rt_nil_check(F->s_302)).e, (*(P422)rt_nil_check(F->s_302)).b, (*(P422)rt_nil_check(F->s_302)).line);
}
if (((F->y_950 == NULL) || ((*(P432)rt_nil_check(F->y_950)).kind != ((rt_int)9LL)))) {
f_fail_21((*(P422)rt_nil_check(F->s_302)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->s_302)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_951 = (*(P432)rt_nil_check(F->y_950)).params;
{
F->nf_958 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
F->act_959 = rt_str_copy(f_act_ref_301((*(P422)rt_nil_check(F->s_302)).a));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_950)).cname))), rt_str("fr *", 4)), F->nf_958), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_958), rt_str(");", 2)); b_; }));
if (((*(P432)rt_nil_check(F->y_950)).level > ((rt_int)0LL))) {
F->link_960 = NULL;
F->link_960 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo962 = ((rt_int)1LL), hi963 = rt_sub(g_cur_level_465, (*(P432)rt_nil_check(F->y_950)).level);
for (rt_int it964 = lo962; it964 <= hi963; it964++) {
F->i_961 = it964;
F->link_960 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check(F->link_960)), rt_str("->up", 4)); b_; }));
}
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_958, rt_str("->up = ", 7)), (*(P417)rt_nil_check(F->link_960))), rt_str(";", 1)); b_; }));
}
while (((F->a_952 != NULL) && (F->pm_951 != NULL))) {
if (((*(P430)rt_nil_check(F->pm_951)).mode == ((rt_int)1LL))) {
F->v_965 = rt_str_copy(f_gexpr_369(F->a_952, (*(P430)rt_nil_check(F->pm_951)).t, &F->vt_955));
f_check_type_172(F->vt_955, (*(P430)rt_nil_check(F->pm_951)).t, (*(P422)rt_nil_check(F->s_302)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_958, rt_str("->", 2)), (*(P417)rt_nil_check((*(P430)rt_nil_check(F->pm_951)).cfield))), rt_str(" = ", 3)), f_copy_code_216((*(P430)rt_nil_check(F->pm_951)).t, &F->v_965)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_348(F->a_952, &F->lv_953, &F->lt_954, &F->lc_956, &F->ro_957);
f_check_type_172(F->lt_954, (*(P430)rt_nil_check(F->pm_951)).t, (*(P422)rt_nil_check(F->s_302)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_958, rt_str("->", 2)), (*(P417)rt_nil_check((*(P430)rt_nil_check(F->pm_951)).cfield))), rt_str(" = &", 4)), (*(P417)rt_nil_check(F->lv_953))), rt_str(";", 1)); b_; }));
}
F->a_952 = (*(P422)rt_nil_check(F->a_952)).next;
F->pm_951 = (*(P430)rt_nil_check(F->pm_951)).next;
}
if (((F->a_952 != NULL) || (F->pm_951 != NULL))) {
f_fail_21((*(P422)rt_nil_check(F->s_302)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->s_302)).name))); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), F->act_959), rt_str(", &", 3)), (*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_950)).cname))), rt_str("decl, ", 6)), (*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_950)).cname))), rt_str(", ", 2)), F->nf_958), rt_str("); }", 4)); b_; }));
}
ret_:
  return;
}

static rstr f_wait_alt_307(P422 inv_304, rstr *arr_305, rt_int i_306) {
  struct f_wait_alt_307fr *F = rt_alloc(sizeof *F);
F->inv_304 = inv_304;
F->arr_305 = arr_305;
F->i_306 = i_306;
F->lv_966 = NULL;
F->t_967 = NULL;
F->vt_968 = NULL;
F->c_969 = NULL;
F->fn_971 = NULL;
F->args_972 = NULL;
F->slot_973 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_305), rt_str("[", 1)), f_itos_7(F->i_306)), rt_str("]", 1)));
if ((((*(P422)rt_nil_check(F->inv_304)).kind != ((rt_int)10LL)) || ((*(P422)rt_nil_check((*(P422)rt_nil_check(F->inv_304)).a)).kind != ((rt_int)7LL)))) {
f_fail_21((*(P422)rt_nil_check(F->inv_304)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_971 = (*(P422)rt_nil_check(F->inv_304)).a;
F->args_972 = (*(P422)rt_nil_check(F->inv_304)).b;
if ((rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_971)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_971)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_348(F->args_972, &F->lv_966, &F->t_967, &F->c_969, &F->ro_970);
if (((*(P426)rt_nil_check(F->t_967)).kind != ((rt_int)12LL))) {
f_fail_21((*(P422)rt_nil_check(F->inv_304)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_971)).name)), rt_str("RECEIVE", 7))) {
F->dv_974 = NULL;
F->dt_975 = NULL;
f_lvalue_348((*(P422)rt_nil_check(F->args_972)).next, &F->dv_974, &F->dt_975, &F->c_969, &F->ro_970);
f_check_type_172(F->dt_975, (*(P426)rt_nil_check(F->t_967)).elem, (*(P422)rt_nil_check(F->inv_304)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_973, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, &", 32)), (*(P417)rt_nil_check(F->lv_966))), rt_str(", &", 3)), (*(P417)rt_nil_check(F->dv_974))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_976 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_977 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->args_972)).next, (*(P426)rt_nil_check(F->t_967)).elem, &F->vt_968));
f_check_type_172(F->vt_968, (*(P426)rt_nil_check(F->t_967)).elem, (*(P422)rt_nil_check(F->inv_304)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_174((*(P426)rt_nil_check(F->t_967)).elem), rt_str(" ", 1)), F->tmp_976), rt_str(" = ", 3)), F->v_977), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_973, rt_str(" = (rt_alt){RT_ALT_SEND, 1, &", 29)), (*(P417)rt_nil_check(F->lv_966))), rt_str(", &", 3)), F->tmp_976), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_971)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_971)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_978 = rt_str_copy(f_gexpr_369(F->args_972, g_ty_int_478, &F->vt_968));
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_971)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_973, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_978), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_973, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_978), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_971)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_973, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_301(F->args_972)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_21((*(P422)rt_nil_check(F->inv_304)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_971)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_wait_309(P422 s_308) {
  struct f_st_wait_309fr *F = rt_alloc(sizeof *F);
F->s_308 = s_308;
F->a_979 = NULL;
F->a_979 = (*(P422)rt_nil_check(F->s_308)).a;
F->n_980 = ((rt_int)0LL);
F->first_981 = 1;
F->inits_982 = NULL;
F->inits_982 = f_new_buffer_22();
F->arr_983 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_984 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_979 != NULL)) {
F->n_980 = rt_add(F->n_980, f_list_len_52((*(P422)rt_nil_check(F->a_979)).a));
F->a_979 = (*(P422)rt_nil_check(F->a_979)).next;
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_983), rt_str("[", 1)), f_itos_7(F->n_980)), rt_str("];", 2)); b_; }));
F->a_979 = (*(P422)rt_nil_check(F->s_308)).a;
F->n_980 = ((rt_int)0LL);
while ((F->a_979 != NULL)) {
F->inv_985 = NULL;
F->inv_985 = (*(P422)rt_nil_check(F->a_979)).a;
while ((F->inv_985 != NULL)) {
f_put_25(F->inits_982, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_307(F->inv_985, &F->arr_983, F->n_980); b_; }));
F->n_980 = rt_add(F->n_980, ((rt_int)1LL));
F->inv_985 = (*(P422)rt_nil_check(F->inv_985)).next;
}
F->a_979 = (*(P422)rt_nil_check(F->a_979)).next;
}
f_splice_32(g_code_462, F->inits_982);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_984), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_980)), rt_str(", ", 2)), F->arr_983), rt_str(");", 2)); b_; }));
F->a_979 = (*(P422)rt_nil_check(F->s_308)).a;
F->n_980 = ((rt_int)0LL);
while ((F->a_979 != NULL)) {
F->conds_986 = NULL;
F->conds_986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo988 = ((rt_int)1LL), hi989 = f_list_len_52((*(P422)rt_nil_check(F->a_979)).a);
for (rt_int it990 = lo988; it990 <= hi989; it990++) {
F->i_987 = it990;
F->conds_986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->conds_986)), rt_str(" || ", 4)), F->w_984), rt_str(" == ", 4)), f_itos_7(F->n_980)); b_; }));
F->n_980 = rt_add(F->n_980, ((rt_int)1LL));
}
}
if (F->first_981) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P417)rt_nil_check(F->conds_986))), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P417)rt_nil_check(F->conds_986))), rt_str(") {", 3)); b_; }));
}
F->first_981 = 0;
f_gen_body_271((*(P422)rt_nil_check(F->a_979)).b);
F->a_979 = (*(P422)rt_nil_check(F->a_979)).next;
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_region_311(P422 s_310) {
  struct f_st_region_311fr *F = rt_alloc(sizeof *F);
F->s_310 = s_310;
F->lv_991 = NULL;
F->t_992 = NULL;
F->c_993 = NULL;
F->lk_995 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_996 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_348((*(P422)rt_nil_check(F->s_310)).a, &F->lv_991, &F->t_992, &F->c_993, &F->ro_994);
if (((*(P426)rt_nil_check(F->t_992)).kind != ((rt_int)13LL))) {
f_fail_21((*(P422)rt_nil_check(F->s_310)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION needs a DATA_LOCK variable", 33); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_995), rt_str(" = &", 4)), (*(P417)rt_nil_check(F->lv_991))), rt_str("; rt_region_enter(", 18)), F->lk_995), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_996), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_996), rt_str(")) {", 4)); b_; }));
f_push_cleanup_275(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_996), rt_str("); rt_region_leave(", 19)), F->lk_995), rt_str(");", 2)); b_; }));
f_gen_body_271((*(P422)rt_nil_check(F->s_310)).b);
f_pop_cleanup_276();
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_996), rt_str("); rt_region_leave(", 19)), F->lk_995), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_996), rt_str("); rt_region_leave(", 19)), F->lk_995), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static P422 f_gparam_314(P422 g_312, rstr *name_313) {
  struct f_gparam_314fr *F = rt_alloc(sizeof *F);
F->g_312 = g_312;
F->name_313 = name_313;
F->p_997 = NULL;
F->p_997 = (*(P422)rt_nil_check(F->g_312)).a;
while ((F->p_997 != NULL)) {
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_997)).name)), (*F->name_313))) {
F->result_ = F->p_997;
goto ret_;
}
F->p_997 = (*(P422)rt_nil_check(F->p_997)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P432 f_bind_sym_316(P422 p_315) {
  struct f_bind_sym_316fr *F = rt_alloc(sizeof *F);
F->p_315 = p_315;
F->y_998 = NULL;
if (((*(P422)rt_nil_check(F->p_315)).ival <= ((rt_int)2LL))) {
F->y_998 = f_new_sym_152(((rt_int)5LL), (*(P422)rt_nil_check(F->p_315)).name);
} else {
F->y_998 = f_new_sym_152(((rt_int)2LL), (*(P422)rt_nil_check(F->p_315)).name);
}
F->result_ = F->y_998;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binds_319(P432 a_317, P432 b_318) {
  struct f_same_binds_319fr *F = rt_alloc(sizeof *F);
F->a_317 = a_317;
F->b_318 = b_318;
F->x_999 = NULL;
F->x_999 = F->a_317;
F->y_1000 = NULL;
F->y_1000 = F->b_318;
while (((F->x_999 != NULL) && (F->y_1000 != NULL))) {
if (((!rt_str_eq((*(P417)rt_nil_check((*(P432)rt_nil_check(F->x_999)).name)), (*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_1000)).name)))) || (!f_same_binding_322(F->x_999, F->y_1000)))) {
F->result_ = 0;
goto ret_;
}
F->x_999 = (*(P432)rt_nil_check(F->x_999)).mnext;
F->y_1000 = (*(P432)rt_nil_check(F->y_1000)).mnext;
}
F->result_ = ((F->x_999 == NULL) && (F->y_1000 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binding_322(P432 a_320, P432 b_321) {
  struct f_same_binding_322fr *F = rt_alloc(sizeof *F);
F->a_320 = a_320;
F->b_321 = b_321;
if (((*(P432)rt_nil_check(F->a_320)).kind == ((rt_int)5LL))) {
F->result_ = (((*(P432)rt_nil_check(F->b_321)).kind == ((rt_int)5LL)) && f_same_161((*(P432)rt_nil_check(F->a_320)).t, (*(P432)rt_nil_check(F->b_321)).t));
goto ret_;
}
if ((((*(P432)rt_nil_check(F->a_320)).kind == ((rt_int)2LL)) && (*(P432)rt_nil_check(F->a_320)).hasmv)) {
F->result_ = ((*(P432)rt_nil_check(F->b_321)).hasmv && ((*(P432)rt_nil_check(F->a_320)).mvalue == (*(P432)rt_nil_check(F->b_321)).mvalue));
goto ret_;
}
F->result_ = ((((*(P432)rt_nil_check(F->a_320)).cname != NULL) && ((*(P432)rt_nil_check(F->b_321)).cname != NULL)) && rt_str_eq((*(P417)rt_nil_check((*(P432)rt_nil_check(F->a_320)).cname)), (*(P417)rt_nil_check((*(P432)rt_nil_check(F->b_321)).cname))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P432 f_instantiate_327(P432 g_323, P422 tt_324, P422 args_325, rt_int line_326) {
  struct f_instantiate_327fr *F = rt_alloc(sizeof *F);
F->g_323 = g_323;
F->tt_324 = tt_324;
F->args_325 = args_325;
F->line_326 = line_326;
F->gd_1001 = NULL;
F->gd_1001 = (*(P432)rt_nil_check(F->g_323)).decl;
F->pat_1002 = NULL;
F->pat_1002 = (*(P422)rt_nil_check(F->gd_1001)).b;
F->binds_1003 = NULL;
F->f_1004 = NULL;
F->f_1004 = (*(P422)rt_nil_check(F->pat_1002)).e;
F->a_1005 = NULL;
F->a_1005 = F->tt_324;
F->fp_1006 = NULL;
F->fp_1006 = (*(P422)rt_nil_check(F->pat_1002)).a;
F->inst_1007 = NULL;
F->at_1008 = NULL;
F->c_1009 = NULL;
F->saved_fctx_1010 = NULL;
F->saved_fctx_1010 = g_fctx_466;
F->saved_in_1011 = g_in_func_464;
F->saved_level_1012 = g_cur_level_465;
F->saved_sym_1013 = NULL;
F->saved_sym_1013 = g_func_sym_471;
F->saved_code_1014 = NULL;
F->saved_code_1014 = g_code_462;
while (((F->f_1004 != NULL) && (F->a_1005 != NULL))) {
F->p_1015 = NULL;
F->p_1015 = f_gparam_314(F->gd_1001, &(*(P417)rt_nil_check((*(P422)rt_nil_check(F->f_1004)).name)));
F->b_1016 = NULL;
if ((F->p_1015 == NULL)) {
f_fail_21(F->line_326, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->f_1004)).name)), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1016 = f_bind_sym_316(F->p_1015);
if (((*(P422)rt_nil_check(F->p_1015)).ival <= ((rt_int)2LL))) {
if (((*(P422)rt_nil_check(F->a_1005)).kind >= ((rt_int)70LL))) {
(*(P432)rt_nil_check(F->b_1016)).t = f_resolve_subtype_185(F->a_1005, &F->c_1009);
} else {
F->st_1017 = NULL;
F->st_1017 = f_nn_46(((rt_int)80LL), F->line_326);
(*(P422)rt_nil_check(F->st_1017)).name = (*(P422)rt_nil_check(F->a_1005)).name;
(*(P432)rt_nil_check(F->b_1016)).t = f_resolve_subtype_185(F->st_1017, &F->c_1009);
}
(*(P432)rt_nil_check(F->b_1016)).c = F->c_1009;
} else if (((*(P422)rt_nil_check(F->p_1015)).ival <= ((rt_int)5LL))) {
if ((((*(P422)rt_nil_check(F->a_1005)).kind != ((rt_int)7LL)) || (f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->a_1005)).name))) == NULL))) {
f_fail_21(F->line_326, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_1015)).name))); b_; }));
}
F->b_1016 = f_copy_sym_240(f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->a_1005)).name))));
(*(P432)rt_nil_check(F->b_1016)).name = (*(P422)rt_nil_check(F->p_1015)).name;
} else {
(*(P432)rt_nil_check(F->b_1016)).t = f_resolve_subtype_185((*(P422)rt_nil_check(F->p_1015)).a, &F->c_1009);
(*(P432)rt_nil_check(F->b_1016)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_369(F->a_1005, (*(P432)rt_nil_check(F->b_1016)).t, &F->at_1008); b_; }));
(*(P432)rt_nil_check(F->b_1016)).mvalue = f_manifest_204(F->a_1005, &F->ok_1018);
(*(P432)rt_nil_check(F->b_1016)).hasmv = F->ok_1018;
}
(*(P432)rt_nil_check(F->b_1016)).mnext = F->binds_1003;
F->binds_1003 = F->b_1016;
F->f_1004 = (*(P422)rt_nil_check(F->f_1004)).next;
F->a_1005 = (*(P422)rt_nil_check(F->a_1005)).next;
}
F->a_1005 = F->args_325;
while (((F->fp_1006 != NULL) && (F->a_1005 != NULL))) {
if (((((*(P422)rt_nil_check((*(P422)rt_nil_check(F->fp_1006)).a)).kind == ((rt_int)80LL)) && (f_gparam_314(F->gd_1001, &(*(P417)rt_nil_check((*(P422)rt_nil_check((*(P422)rt_nil_check(F->fp_1006)).a)).name))) != NULL)) && ((*(P422)rt_nil_check(f_gparam_314(F->gd_1001, &(*(P417)rt_nil_check((*(P422)rt_nil_check((*(P422)rt_nil_check(F->fp_1006)).a)).name))))).ival <= ((rt_int)2LL)))) {
F->known_1019 = 0;
F->q_1020 = NULL;
F->q_1020 = F->binds_1003;
while ((F->q_1020 != NULL)) {
if (rt_str_eq((*(P417)rt_nil_check((*(P432)rt_nil_check(F->q_1020)).name)), (*(P417)rt_nil_check((*(P422)rt_nil_check((*(P422)rt_nil_check(F->fp_1006)).a)).name)))) {
F->known_1019 = 1;
}
F->q_1020 = (*(P432)rt_nil_check(F->q_1020)).mnext;
}
if ((!F->known_1019)) {
F->b_1021 = NULL;
F->b_1021 = f_bind_sym_316(f_gparam_314(F->gd_1001, &(*(P417)rt_nil_check((*(P422)rt_nil_check((*(P422)rt_nil_check(F->fp_1006)).a)).name))));
F->v_1022 = rt_str_copy(f_gexpr_369(F->a_1005, NULL, &F->at_1008));
(*(P432)rt_nil_check(F->b_1021)).t = F->at_1008;
(*(P432)rt_nil_check(F->b_1021)).c = g_no_cons_488;
(*(P432)rt_nil_check(F->b_1021)).mnext = F->binds_1003;
F->binds_1003 = F->b_1021;
}
}
F->fp_1006 = (*(P422)rt_nil_check(F->fp_1006)).next;
F->a_1005 = (*(P422)rt_nil_check(F->a_1005)).next;
}
F->inst_1007 = (*(P432)rt_nil_check(F->g_323)).insts;
while ((F->inst_1007 != NULL)) {
if (f_same_binds_319((*(P432)rt_nil_check(F->inst_1007)).members, F->binds_1003)) {
F->result_ = F->inst_1007;
goto ret_;
}
F->inst_1007 = (*(P432)rt_nil_check(F->inst_1007)).insts;
}
g_fctx_466 = NULL;
g_in_func_464 = 0;
g_cur_level_465 = ((rt_int)0LL);
g_func_sym_471 = NULL;
g_code_462 = f_new_buffer_22();
f_open_scope_148();
{
F->b_1023 = NULL;
F->b_1023 = F->binds_1003;
while ((F->b_1023 != NULL)) {
f_define_142(F->b_1023, F->line_326);
F->b_1023 = (*(P432)rt_nil_check(F->b_1023)).mnext;
}
}
F->inst_1007 = f_build_subprogram_250(F->pat_1002);
(*(P432)rt_nil_check(F->inst_1007)).members = F->binds_1003;
(*(P432)rt_nil_check(F->inst_1007)).insts = (*(P432)rt_nil_check(F->g_323)).insts;
(*(P432)rt_nil_check(F->g_323)).insts = F->inst_1007;
f_define_142(F->inst_1007, F->line_326);
f_gen_subprogram_267(F->pat_1002, F->inst_1007);
f_close_scope_149();
g_fctx_466 = F->saved_fctx_1010;
g_in_func_464 = F->saved_in_1011;
g_cur_level_465 = F->saved_level_1012;
g_func_sym_471 = F->saved_sym_1013;
g_code_462 = F->saved_code_1014;
F->result_ = F->inst_1007;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_access_of_329(P432 y_328) {
  struct f_access_of_329fr *F = rt_alloc(sizeof *F);
F->y_328 = y_328;
F->p_1024 = NULL;
F->p_1024 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P432)rt_nil_check(F->y_328)).level <= ((rt_int)0LL))) {
F->result_ = (*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_328)).access));
goto ret_;
}
{ rt_int lo1026 = ((rt_int)1LL), hi1027 = rt_sub(g_cur_level_465, (*(P432)rt_nil_check(F->y_328)).level);
for (rt_int it1028 = lo1026; it1028 <= hi1027; it1028++) {
F->i_1025 = it1028;
F->p_1024 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check(F->p_1024)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P432)rt_nil_check(F->y_328)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P417)rt_nil_check(F->p_1024))), rt_str("->", 2)), (*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_328)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->p_1024)), rt_str("->", 2)), (*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_328)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_import_of_332(P422 l_330, rstr *name_331) {
  struct f_import_of_332fr *F = rt_alloc(sizeof *F);
F->l_330 = l_330;
F->name_331 = name_331;
F->p_1029 = NULL;
F->p_1029 = F->l_330;
while ((F->p_1029 != NULL)) {
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_1029)).name)), (*F->name_331))) {
F->result_ = F->p_1029;
goto ret_;
}
F->p_1029 = (*(P422)rt_nil_check(F->p_1029)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_check_import_335(P432 y_333, rt_int line_334) {
  struct f_check_import_335fr *F = rt_alloc(sizeof *F);
F->y_333 = y_333;
F->line_334 = line_334;
F->c_1030 = NULL;
F->c_1030 = g_fctx_466;
F->ro_1031 = 0;
while (((F->c_1030 != NULL) && ((*(P432)rt_nil_check(F->y_333)).depth < (*(P444)rt_nil_check(F->c_1030)).depth))) {
if ((!(*(P444)rt_nil_check(F->c_1030)).all_imp)) {
F->imp_1032 = NULL;
F->imp_1032 = f_import_of_332((*(P444)rt_nil_check(F->c_1030)).imps, &(*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_333)).name)));
if ((F->imp_1032 == NULL)) {
f_fail_21(F->line_334, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_333)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P422)rt_nil_check(F->imp_1032)).ival == ((rt_int)1LL))) {
F->ro_1031 = 1;
}
}
F->c_1030 = (*(P444)rt_nil_check(F->c_1030)).next;
}
F->result_ = F->ro_1031;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_ident_337(rstr *s_336) {
  struct f_c_ident_337fr *F = rt_alloc(sizeof *F);
F->s_336 = s_336;
if (rt_str_eq((*F->s_336), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_336), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_336), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_336), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_336), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_336), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_336), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_336), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_336), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_336), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_336), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_336), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_336), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_336), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_336));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_deref_340(rstr *base_338, P426 t_339) {
  struct f_deref_340fr *F = rt_alloc(sizeof *F);
F->base_338 = base_338;
F->t_339 = t_339;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_174(F->t_339)), rt_str(")rt_nil_check(", 14)), (*F->base_338)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_lvalue_342(P422 e_341) {
  struct f_is_lvalue_342fr *F = rt_alloc(sizeof *F);
F->e_341 = e_341;
if (((*(P422)rt_nil_check(F->e_341)).kind == ((rt_int)7LL))) {
F->y_1033 = NULL;
F->y_1033 = f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_341)).name)));
F->result_ = ((F->y_1033 != NULL) && (((*(P432)rt_nil_check(F->y_1033)).kind == ((rt_int)1LL)) || ((*(P432)rt_nil_check(F->y_1033)).kind == ((rt_int)2LL))));
goto ret_;
} else if (((*(P422)rt_nil_check(F->e_341)).kind == ((rt_int)17LL))) {
F->result_ = f_is_lvalue_342((*(P422)rt_nil_check(F->e_341)).a);
goto ret_;
} else if (((*(P422)rt_nil_check(F->e_341)).kind == ((rt_int)11LL))) {
F->result_ = ((!rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_341)).name)), rt_str("LEN", 3))) && f_is_lvalue_342((*(P422)rt_nil_check(F->e_341)).a));
goto ret_;
} else if (((*(P422)rt_nil_check(F->e_341)).kind == ((rt_int)10LL))) {
if ((((*(P422)rt_nil_check(F->e_341)).b != NULL) && ((*(P422)rt_nil_check((*(P422)rt_nil_check(F->e_341)).b)).kind == ((rt_int)16LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_342((*(P422)rt_nil_check(F->e_341)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_lvalue_348(P422 e_343, P417 *code_344, P426 *t_345, P424 *c_346, int *ro_347) {
  struct f_lvalue_348fr *F = rt_alloc(sizeof *F);
F->e_343 = e_343;
F->code_344 = code_344;
F->t_345 = t_345;
F->c_346 = c_346;
F->ro_347 = ro_347;
F->base_1034 = NULL;
F->bt_1035 = NULL;
F->bc_1036 = NULL;
if (((*(P422)rt_nil_check(F->e_343)).kind == ((rt_int)7LL))) {
F->y_1037 = NULL;
F->y_1037 = f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_343)).name)));
if ((F->y_1037 == NULL)) {
f_fail_21((*(P422)rt_nil_check(F->e_343)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_343)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P432)rt_nil_check(F->y_1037)).kind != ((rt_int)1LL)) && ((*(P432)rt_nil_check(F->y_1037)).kind != ((rt_int)2LL)))) {
f_fail_21((*(P422)rt_nil_check(F->e_343)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_343)).name)), rt_str(" is not a variable", 18)); b_; }));
}
(*F->code_344) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_329(F->y_1037); b_; }));
(*F->t_345) = (*(P432)rt_nil_check(F->y_1037)).t;
(*F->c_346) = (*(P432)rt_nil_check(F->y_1037)).c;
(*F->ro_347) = (*(P432)rt_nil_check(F->y_1037)).ro_flag;
if ((((*(P432)rt_nil_check(F->y_1037)).kind == ((rt_int)1LL)) && f_check_import_335(F->y_1037, (*(P422)rt_nil_check(F->e_343)).line))) {
(*F->ro_347) = 1;
}
} else if (((*(P422)rt_nil_check(F->e_343)).kind == ((rt_int)17LL))) {
f_lvalue_348((*(P422)rt_nil_check(F->e_343)).a, &(*F->code_344), &(*F->t_345), &(*F->c_346), &(*F->ro_347));
} else if (((*(P422)rt_nil_check(F->e_343)).kind == ((rt_int)11LL))) {
f_lvalue_348((*(P422)rt_nil_check(F->e_343)).a, &F->base_1034, &F->bt_1035, &F->bc_1036, &(*F->ro_347));
f_select_on_356(&(*(P417)rt_nil_check(F->base_1034)), F->bt_1035, F->e_343, &(*F->ro_347), &(*F->code_344), &(*F->t_345), &(*F->c_346));
} else if (((*(P422)rt_nil_check(F->e_343)).kind == ((rt_int)10LL))) {
f_lvalue_348((*(P422)rt_nil_check(F->e_343)).a, &F->base_1034, &F->bt_1035, &F->bc_1036, &(*F->ro_347));
f_index_on_365(&(*(P417)rt_nil_check(F->base_1034)), F->bt_1035, F->e_343, &(*F->ro_347), 1, &(*F->code_344), &(*F->t_345), &(*F->c_346));
} else {
f_fail_21((*(P422)rt_nil_check(F->e_343)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  return;
}

static void f_select_on_356(rstr *base_349, P426 bt_350, P422 e_351, int *ro_352, P417 *code_353, P426 *t_354, P424 *c_355) {
  struct f_select_on_356fr *F = rt_alloc(sizeof *F);
F->base_349 = base_349;
F->bt_350 = bt_350;
F->e_351 = e_351;
F->ro_352 = ro_352;
F->code_353 = code_353;
F->t_354 = t_354;
F->c_355 = c_355;
(*F->c_355) = g_no_cons_488;
if (((*(P426)rt_nil_check(F->bt_350)).kind == ((rt_int)8LL))) {
f_finish_ptr_246(F->bt_350);
(*F->ro_352) = 0;
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_351)).name)), rt_str("ALL", 3))) {
(*F->code_353) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_340(&(*F->base_349), F->bt_350); b_; }));
(*F->t_354) = (*(P426)rt_nil_check(F->bt_350)).target;
goto ret_;
}
f_select_on_356(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_340(&(*F->base_349), F->bt_350); b_; }), (*(P426)rt_nil_check(F->bt_350)).target, F->e_351, &(*F->ro_352), &(*F->code_353), &(*F->t_354), &(*F->c_355));
goto ret_;
}
if (((*(P426)rt_nil_check(F->bt_350)).kind == ((rt_int)15LL))) {
F->p_1038 = NULL;
F->p_1038 = (*(P426)rt_nil_check(F->bt_350)).tparams;
if ((!f_opened_187(F->bt_350))) {
f_fail_21((*(P422)rt_nil_check(F->e_351)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->bt_350)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P426)rt_nil_check(F->bt_350)).tparams == NULL)) {
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_351)).name)), rt_str("ALL", 3))) {
(*F->code_353) = f_mk_3(&(*F->base_349));
(*F->t_354) = (*(P426)rt_nil_check(F->bt_350)).under;
goto ret_;
}
f_select_on_356(&(*F->base_349), (*(P426)rt_nil_check(F->bt_350)).under, F->e_351, &(*F->ro_352), &(*F->code_353), &(*F->t_354), &(*F->c_355));
goto ret_;
}
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_351)).name)), rt_str("ALL", 3))) {
(*F->code_353) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_349), rt_str(".all", 4)); b_; }));
(*F->t_354) = (*(P426)rt_nil_check(F->bt_350)).under;
goto ret_;
}
while ((F->p_1038 != NULL)) {
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_1038)).name)), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_351)).name)))) {
(*F->code_353) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_349), rt_str(".p_", 3)), f_lower_s_15(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->p_1038)).name)))); b_; }));
(*F->t_354) = g_ty_int_478;
(*F->ro_352) = 1;
goto ret_;
}
F->p_1038 = (*(P422)rt_nil_check(F->p_1038)).next;
}
f_select_on_356(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_349), rt_str(".all", 4)); b_; }), (*(P426)rt_nil_check(F->bt_350)).under, F->e_351, &(*F->ro_352), &(*F->code_353), &(*F->t_354), &(*F->c_355));
goto ret_;
}
if (((*(P426)rt_nil_check(F->bt_350)).kind == ((rt_int)7LL))) {
F->f_1039 = NULL;
F->f_1039 = (*(P426)rt_nil_check(F->bt_350)).fields;
while ((F->f_1039 != NULL)) {
if (rt_str_eq((*(P417)rt_nil_check((*(P428)rt_nil_check(F->f_1039)).name)), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_351)).name)))) {
(*F->c_355) = (*(P428)rt_nil_check(F->f_1039)).c;
(*F->code_353) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_349), rt_str(".", 1)), f_lower_s_15(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_351)).name)))); b_; }));
(*F->t_354) = (*(P428)rt_nil_check(F->f_1039)).t;
goto ret_;
}
F->f_1039 = (*(P428)rt_nil_check(F->f_1039)).next;
}
f_fail_21((*(P422)rt_nil_check(F->e_351)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_351)).name))); b_; }));
}
f_fail_21((*(P422)rt_nil_check(F->e_351)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_351)).name))), rt_str(" here", 5)); b_; }));
ret_:
  return;
}

static void f_index_on_365(rstr *base_357, P426 bt_358, P422 e_359, int *ro_360, int lv_361, P417 *code_362, P426 *t_363, P424 *c_364) {
  struct f_index_on_365fr *F = rt_alloc(sizeof *F);
F->base_357 = base_357;
F->bt_358 = bt_358;
F->e_359 = e_359;
F->ro_360 = ro_360;
F->lv_361 = lv_361;
F->code_362 = code_362;
F->t_363 = t_363;
F->c_364 = c_364;
F->a_1040 = NULL;
F->a_1040 = (*(P422)rt_nil_check(F->e_359)).b;
F->it_1041 = NULL;
(*F->c_364) = g_no_cons_488;
if (((*(P426)rt_nil_check(F->bt_358)).kind == ((rt_int)8LL))) {
f_finish_ptr_246(F->bt_358);
(*F->ro_360) = 0;
f_index_on_365(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_340(&(*F->base_357), F->bt_358); b_; }), (*(P426)rt_nil_check(F->bt_358)).target, F->e_359, &(*F->ro_360), F->lv_361, &(*F->code_362), &(*F->t_363), &(*F->c_364));
goto ret_;
}
if (((*(P426)rt_nil_check(F->bt_358)).kind == ((rt_int)15LL))) {
if ((!f_opened_187(F->bt_358))) {
f_fail_21((*(P422)rt_nil_check(F->e_359)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->bt_358)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P426)rt_nil_check(F->bt_358)).tparams == NULL)) {
f_index_on_365(&(*F->base_357), (*(P426)rt_nil_check(F->bt_358)).under, F->e_359, &(*F->ro_360), F->lv_361, &(*F->code_362), &(*F->t_363), &(*F->c_364));
} else {
f_index_on_365(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_357), rt_str(".all", 4)); b_; }), (*(P426)rt_nil_check(F->bt_358)).under, F->e_359, &(*F->ro_360), F->lv_361, &(*F->code_362), &(*F->t_363), &(*F->c_364));
}
goto ret_;
}
if ((((*(P426)rt_nil_check(F->bt_358)).kind == ((rt_int)6LL)) && ((*(P426)rt_nil_check(F->bt_358)).idx2 != NULL))) {
if ((f_list_len_52(F->a_1040) != ((rt_int)2LL))) {
f_fail_21((*(P422)rt_nil_check(F->e_359)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("two subscripts expected", 23); b_; }));
}
{
F->i_1042 = rt_str_copy(f_gexpr_369(F->a_1040, (*(P426)rt_nil_check(F->bt_358)).idx, &F->it_1041));
F->j_1043 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->a_1040)).next, (*(P426)rt_nil_check(F->bt_358)).idx2, &F->it_1041));
(*F->code_362) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_357), rt_str(".p[(rt_index(", 13)), F->i_1042), rt_str(", ", 2)), (*F->base_357)), rt_str(".lo, ", 5)), (*F->base_357)), rt_str(".hi) - ", 7)), (*F->base_357)), rt_str(".lo) * (", 8)), (*F->base_357)), rt_str(".hi2 - ", 7)), (*F->base_357)), rt_str(".lo2 + 1) + rt_index(", 21)), F->j_1043), rt_str(", ", 2)), (*F->base_357)), rt_str(".lo2, ", 6)), (*F->base_357)), rt_str(".hi2) - ", 8)), (*F->base_357)), rt_str(".lo2]", 5)); b_; }));
(*F->t_363) = (*(P426)rt_nil_check(F->bt_358)).elem;
(*F->c_364) = (*(P426)rt_nil_check(F->bt_358)).elemcons;
}
goto ret_;
}
if ((f_list_len_52(F->a_1040) != ((rt_int)1LL))) {
f_fail_21((*(P422)rt_nil_check(F->e_359)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P426)rt_nil_check(F->bt_358)).kind == ((rt_int)5LL))) {
if (((*(P422)rt_nil_check(F->a_1040)).kind == ((rt_int)16LL))) {
F->lo_1044 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->a_1040)).a, g_ty_int_478, &F->it_1041));
F->hi_1045 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->a_1040)).b, g_ty_int_478, &F->it_1041));
(*F->code_362) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_357)), rt_str(", ", 2)), F->lo_1044), rt_str(", ", 2)), F->hi_1045), rt_str(")", 1)); b_; }));
(*F->t_363) = g_ty_string_482;
(*F->ro_360) = 1;
goto ret_;
}
{
F->i_1046 = rt_str_copy(f_gexpr_369(F->a_1040, g_ty_int_478, &F->it_1041));
(*F->t_363) = g_ty_ascii_481;
if (F->lv_361) {
(*F->code_362) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_357)), rt_str(", ", 2)), F->i_1046), rt_str("))", 2)); b_; }));
} else {
(*F->code_362) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_357)), rt_str(", ", 2)), F->i_1046), rt_str(")", 1)); b_; }));
(*F->ro_360) = 1;
}
}
goto ret_;
}
if (((*(P426)rt_nil_check(F->bt_358)).kind == ((rt_int)6LL))) {
F->i_1047 = rt_str_copy(f_gexpr_369(F->a_1040, (*(P426)rt_nil_check(F->bt_358)).idx, &F->it_1041));
(*F->code_362) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_357), rt_str(".p[rt_index(", 12)), F->i_1047), rt_str(", ", 2)), (*F->base_357)), rt_str(".lo, ", 5)), (*F->base_357)), rt_str(".hi) - ", 7)), (*F->base_357)), rt_str(".lo]", 4)); b_; }));
(*F->t_363) = (*(P426)rt_nil_check(F->bt_358)).elem;
(*F->c_364) = (*(P426)rt_nil_check(F->bt_358)).elemcons;
goto ret_;
}
f_fail_21((*(P422)rt_nil_check(F->e_359)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  return;
}

static rstr f_gexpr_369(P422 e_366, P426 want_367, P426 *t_368) {
  struct f_gexpr_369fr *F = rt_alloc(sizeof *F);
F->e_366 = e_366;
F->want_367 = want_367;
F->t_368 = t_368;
F->k_1048 = (*(P422)rt_nil_check(F->e_366)).kind;
F->code_1049 = NULL;
F->c_1050 = NULL;
F->bt_1052 = NULL;
(*F->t_368) = g_ty_int_478;
if ((F->k_1048 == ((rt_int)1LL))) {
if (((F->want_367 != NULL) && ((*(P426)rt_nil_check(F->want_367)).kind == ((rt_int)3LL)))) {
(*F->t_368) = g_ty_float_480;
F->result_ = rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1048 == ((rt_int)2LL))) {
(*F->t_368) = g_ty_float_480;
F->result_ = (*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name));
goto ret_;
} else if ((F->k_1048 == ((rt_int)5LL))) {
(*F->t_368) = g_ty_bool_479;
F->result_ = f_itos_7((*(P422)rt_nil_check(F->e_366)).ival);
goto ret_;
} else if ((F->k_1048 == ((rt_int)3LL))) {
(*F->t_368) = g_ty_string_482;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_375(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)))), rt_str(", ", 2)), f_itos_7(((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_1048 == ((rt_int)6LL))) {
(*F->t_368) = g_ty_nil_485;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1048 == ((rt_int)4LL))) {
if (((F->want_367 != NULL) && ((*(P426)rt_nil_check(f_base_of_163(F->want_367))).kind == ((rt_int)4LL)))) {
(*F->t_368) = F->want_367;
} else {
(*F->t_368) = f_enum_type_of_378(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), (*(P422)rt_nil_check(F->e_366)).line);
}
{
F->i_1053 = f_lit_index_182((*(P426)rt_nil_check(f_base_of_163((*F->t_368)))).lits, &(*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)));
if ((F->i_1053 < ((rt_int)0LL))) {
f_fail_21((*(P422)rt_nil_check(F->e_366)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1053);
goto ret_;
}
} else if ((F->k_1048 == ((rt_int)17LL))) {
F->result_ = f_gexpr_369((*(P422)rt_nil_check(F->e_366)).a, F->want_367, &(*F->t_368));
goto ret_;
} else if ((F->k_1048 == ((rt_int)7LL))) {
F->y_1054 = NULL;
F->y_1054 = f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)));
if ((F->y_1054 == NULL)) {
if (((((((((rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str("SYS_OUT", 7))) || rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str("TIME", 4))) || rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str("MILLISECONDS", 12))) || rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str("SECONDS", 7))) || rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str("MINUTES", 7))) || rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_406(f_wrap_apply_373(F->e_366), 0, &(*F->t_368));
goto ret_;
}
f_fail_21((*(P422)rt_nil_check(F->e_366)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P432)rt_nil_check(F->y_1054)).kind == ((rt_int)1LL)) || ((*(P432)rt_nil_check(F->y_1054)).kind == ((rt_int)2LL)))) {
(*F->t_368) = (*(P432)rt_nil_check(F->y_1054)).t;
if (((*(P432)rt_nil_check(F->y_1054)).kind == ((rt_int)1LL))) {
F->ro_1055 = f_check_import_335(F->y_1054, (*(P422)rt_nil_check(F->e_366)).line);
}
F->result_ = f_access_of_329(F->y_1054);
goto ret_;
}
if (((*(P432)rt_nil_check(F->y_1054)).kind == ((rt_int)3LL))) {
F->result_ = f_gcall_406(f_wrap_apply_373(F->e_366), 0, &(*F->t_368));
goto ret_;
}
f_fail_21((*(P422)rt_nil_check(F->e_366)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1048 == ((rt_int)8LL)) && (f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name))) != NULL)) && (f_user_op_402(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), f_copy_node_371((*(P422)rt_nil_check(F->e_366)).a)) != NULL))) {
F->call_1056 = NULL;
F->call_1056 = f_nn_46(((rt_int)10LL), (*(P422)rt_nil_check(F->e_366)).line);
F->fname_1057 = NULL;
F->fname_1057 = f_nn_46(((rt_int)7LL), (*(P422)rt_nil_check(F->e_366)).line);
(*(P422)rt_nil_check(F->fname_1057)).name = (*(P422)rt_nil_check(F->e_366)).name;
(*(P422)rt_nil_check(F->call_1056)).a = F->fname_1057;
(*(P422)rt_nil_check(F->call_1056)).b = f_copy_node_371((*(P422)rt_nil_check(F->e_366)).a);
F->result_ = f_gcall_406(F->call_1056, 0, &(*F->t_368));
goto ret_;
} else if (((((F->k_1048 == ((rt_int)8LL)) && rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str("NOT", 3))) && (F->want_367 != NULL)) && ((*(P426)rt_nil_check(F->want_367)).kind == ((rt_int)16LL)))) {
F->a_1058 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_366)).a, F->want_367, &(*F->t_368)));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_1058), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_52((*(P426)rt_nil_check((*(P426)rt_nil_check(F->want_367)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1048 == ((rt_int)8LL))) {
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str("NOT", 3))) {
F->a_1059 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_366)).a, g_ty_bool_479, &(*F->t_368)));
f_check_type_172((*F->t_368), g_ty_bool_479, (*(P422)rt_nil_check(F->e_366)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1059), rt_str(")", 1));
goto ret_;
}
{
F->a_1060 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_366)).a, F->want_367, &(*F->t_368)));
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str("+", 1))) {
F->result_ = F->a_1060;
goto ret_;
} else if (((*(P426)rt_nil_check((*F->t_368))).kind == ((rt_int)3LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1060), rt_str(")", 1));
goto ret_;
}
f_check_type_172((*F->t_368), g_ty_int_478, (*(P422)rt_nil_check(F->e_366)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1060), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1048 == ((rt_int)9LL))) {
F->result_ = f_gbinop_385(F->e_366, F->want_367, &(*F->t_368));
goto ret_;
} else if ((F->k_1048 == ((rt_int)10LL))) {
if ((((*(P422)rt_nil_check((*(P422)rt_nil_check(F->e_366)).a)).kind == ((rt_int)7LL)) || ((*(P422)rt_nil_check((*(P422)rt_nil_check(F->e_366)).a)).kind == ((rt_int)12LL)))) {
F->nm_1061 = NULL;
F->nm_1061 = (*(P422)rt_nil_check(F->e_366)).a;
F->y_1062 = NULL;
if (((*(P422)rt_nil_check(F->nm_1061)).kind == ((rt_int)12LL))) {
F->nm_1061 = (*(P422)rt_nil_check(F->nm_1061)).a;
}
F->y_1062 = f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->nm_1061)).name)));
if (((((F->y_1062 == NULL) || ((*(P432)rt_nil_check(F->y_1062)).kind == ((rt_int)3LL))) || ((*(P432)rt_nil_check(F->y_1062)).kind == ((rt_int)4LL))) || ((*(P432)rt_nil_check(F->y_1062)).kind == ((rt_int)10LL)))) {
F->result_ = f_gcall_406(F->e_366, 0, &(*F->t_368));
goto ret_;
}
}
{
F->base_1063 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_366)).a, NULL, &F->bt_1052));
F->ro_1051 = 1;
f_index_on_365(&F->base_1063, F->bt_1052, F->e_366, &F->ro_1051, 0, &F->code_1049, &(*F->t_368), &F->c_1050);
F->result_ = (*(P417)rt_nil_check(F->code_1049));
goto ret_;
}
} else if ((F->k_1048 == ((rt_int)11LL))) {
if (((rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_366)).name)), rt_str("MAX", 3)))) {
F->result_ = f_attribute_381(F->e_366, &(*F->t_368));
goto ret_;
}
{
F->base_1064 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_366)).a, NULL, &F->bt_1052));
F->ro_1051 = 1;
f_select_on_356(&F->base_1064, F->bt_1052, F->e_366, &F->ro_1051, &F->code_1049, &(*F->t_368), &F->c_1050);
F->result_ = (*(P417)rt_nil_check(F->code_1049));
goto ret_;
}
} else if ((F->k_1048 == ((rt_int)12LL))) {
F->result_ = f_gcall_406(f_wrap_apply_373(F->e_366), 0, &(*F->t_368));
goto ret_;
} else if ((F->k_1048 == ((rt_int)14LL))) {
F->result_ = f_constructor_389(F->e_366, F->want_367, &(*F->t_368));
goto ret_;
}
f_fail_21((*(P422)rt_nil_check(F->e_366)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_copy_node_371(P422 e_370) {
  struct f_copy_node_371fr *F = rt_alloc(sizeof *F);
F->e_370 = e_370;
F->x_1065 = NULL;
{ R423 *cell1066 = rt_alloc(sizeof(R423));
(*cell1066).name = NULL;
(*cell1066).tag = NULL;
(*cell1066).a = NULL;
(*cell1066).b = NULL;
(*cell1066).c = NULL;
(*cell1066).d = NULL;
(*cell1066).e = NULL;
(*cell1066).next = NULL;
F->x_1065 = cell1066;
}
(*(P422)rt_nil_check(F->x_1065)).kind = (*(P422)rt_nil_check(F->e_370)).kind;
(*(P422)rt_nil_check(F->x_1065)).line = (*(P422)rt_nil_check(F->e_370)).line;
(*(P422)rt_nil_check(F->x_1065)).ival = (*(P422)rt_nil_check(F->e_370)).ival;
(*(P422)rt_nil_check(F->x_1065)).flag = (*(P422)rt_nil_check(F->e_370)).flag;
(*(P422)rt_nil_check(F->x_1065)).name = (*(P422)rt_nil_check(F->e_370)).name;
(*(P422)rt_nil_check(F->x_1065)).tag = (*(P422)rt_nil_check(F->e_370)).tag;
(*(P422)rt_nil_check(F->x_1065)).a = (*(P422)rt_nil_check(F->e_370)).a;
(*(P422)rt_nil_check(F->x_1065)).b = (*(P422)rt_nil_check(F->e_370)).b;
(*(P422)rt_nil_check(F->x_1065)).c = (*(P422)rt_nil_check(F->e_370)).c;
(*(P422)rt_nil_check(F->x_1065)).d = (*(P422)rt_nil_check(F->e_370)).d;
F->result_ = F->x_1065;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P422 f_wrap_apply_373(P422 e_372) {
  struct f_wrap_apply_373fr *F = rt_alloc(sizeof *F);
F->e_372 = e_372;
F->x_1067 = NULL;
F->x_1067 = f_nn_46(((rt_int)10LL), (*(P422)rt_nil_check(F->e_372)).line);
(*(P422)rt_nil_check(F->x_1067)).a = F->e_372;
F->result_ = F->x_1067;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_string_375(rstr *s_374) {
  struct f_c_string_375fr *F = rt_alloc(sizeof *F);
F->s_374 = s_374;
F->n_1068 = ((rt_int)0LL);
{ rt_int lo1070 = ((rt_int)1LL), hi1071 = ((*F->s_374)).len;
for (rt_int it1072 = lo1070; it1072 <= hi1071; it1072++) {
F->i_1069 = it1072;
if (((rt_str_get((*F->s_374), F->i_1069) == 92) || (rt_str_get((*F->s_374), F->i_1069) == 63))) {
F->n_1068 = rt_add(F->n_1068, ((rt_int)1LL));
}
}
}
{
F->r_1073 = rt_str_new(rt_add(rt_add(((*F->s_374)).len, F->n_1068), ((rt_int)2LL)));
F->j_1074 = ((rt_int)1LL);
(*rt_str_at(&F->r_1073, ((rt_int)1LL))) = 34;
{ rt_int lo1076 = ((rt_int)1LL), hi1077 = ((*F->s_374)).len;
for (rt_int it1078 = lo1076; it1078 <= hi1077; it1078++) {
F->i_1075 = it1078;
F->j_1074 = rt_add(F->j_1074, ((rt_int)1LL));
if (((rt_str_get((*F->s_374), F->i_1075) == 92) || (rt_str_get((*F->s_374), F->i_1075) == 63))) {
(*rt_str_at(&F->r_1073, F->j_1074)) = 92;
F->j_1074 = rt_add(F->j_1074, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1073, F->j_1074)) = rt_str_get((*F->s_374), F->i_1075);
}
}
(*rt_str_at(&F->r_1073, rt_add(F->j_1074, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1073;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P426 f_enum_type_of_378(rstr *lit_376, rt_int line_377) {
  struct f_enum_type_of_378fr *F = rt_alloc(sizeof *F);
F->lit_376 = lit_376;
F->line_377 = line_377;
F->y_1079 = NULL;
F->y_1079 = g_scope_stack_452;
F->c_1080 = NULL;
if ((f_lit_index_182((*(P426)rt_nil_check(g_ty_ascii_481)).lits, &(*F->lit_376)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_481;
goto ret_;
}
while ((F->y_1079 != NULL)) {
if ((((((*(P432)rt_nil_check(F->y_1079)).kind == ((rt_int)6LL)) || ((*(P432)rt_nil_check(F->y_1079)).kind == ((rt_int)5LL))) && ((*(P432)rt_nil_check(F->y_1079)).st != NULL)) && ((*(P422)rt_nil_check((*(P432)rt_nil_check(F->y_1079)).st)).kind == ((rt_int)72LL)))) {
if ((f_lit_index_182((*(P422)rt_nil_check((*(P432)rt_nil_check(F->y_1079)).st)).a, &(*F->lit_376)) >= ((rt_int)0LL))) {
if (((*(P432)rt_nil_check(F->y_1079)).kind == ((rt_int)5LL))) {
F->st_1081 = NULL;
F->st_1081 = f_nn_46(((rt_int)80LL), F->line_377);
(*(P422)rt_nil_check(F->st_1081)).name = (*(P432)rt_nil_check(F->y_1079)).name;
F->result_ = f_resolve_subtype_185(F->st_1081, &F->c_1080);
goto ret_;
}
F->result_ = f_resolve_subtype_185((*(P432)rt_nil_check(F->y_1079)).st, &F->c_1080);
goto ret_;
}
}
F->y_1079 = (*(P432)rt_nil_check(F->y_1079)).stack;
}
f_fail_21(F->line_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_376)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_attribute_381(P422 e_379, P426 *t_380) {
  struct f_attribute_381fr *F = rt_alloc(sizeof *F);
F->e_379 = e_379;
F->t_380 = t_380;
F->bt_1082 = NULL;
F->c_1083 = NULL;
(*F->t_380) = g_ty_int_478;
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_379)).name)), rt_str("LEN", 3))) {
F->base_1084 = NULL;
F->base_1084 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_369((*(P422)rt_nil_check(F->e_379)).a, NULL, &F->bt_1082); b_; }));
if (((*(P426)rt_nil_check(F->bt_1082)).kind == ((rt_int)8LL))) {
f_finish_ptr_246(F->bt_1082);
F->base_1084 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_340(&(*(P417)rt_nil_check(F->base_1084)), F->bt_1082); b_; }));
F->bt_1082 = (*(P426)rt_nil_check(F->bt_1082)).target;
}
if (((*(P426)rt_nil_check(F->bt_1082)).kind != ((rt_int)5LL))) {
f_fail_21((*(P422)rt_nil_check(F->e_379)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P417)rt_nil_check(F->base_1084))), rt_str(").len", 5));
goto ret_;
}
if (((*(P422)rt_nil_check((*(P422)rt_nil_check(F->e_379)).a)).kind == ((rt_int)7LL))) {
F->y_1085 = NULL;
F->y_1085 = f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check((*(P422)rt_nil_check(F->e_379)).a)).name)));
if (((F->y_1085 != NULL) && (((*(P432)rt_nil_check(F->y_1085)).kind == ((rt_int)6LL)) || ((*(P432)rt_nil_check(F->y_1085)).kind == ((rt_int)5LL))))) {
F->st_1086 = NULL;
F->st_1086 = f_nn_46(((rt_int)80LL), (*(P422)rt_nil_check(F->e_379)).line);
(*(P422)rt_nil_check(F->st_1086)).name = (*(P422)rt_nil_check((*(P422)rt_nil_check(F->e_379)).a)).name;
(*F->t_380) = f_resolve_subtype_185(F->st_1086, &F->c_1083);
if (((*(P426)rt_nil_check((*F->t_380))).kind == ((rt_int)4LL))) {
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_379)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_52((*(P426)rt_nil_check((*F->t_380))).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P424)rt_nil_check(F->c_1083)).lo != NULL)) {
if (rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_379)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P417)rt_nil_check((*(P424)rt_nil_check(F->c_1083)).lo));
goto ret_;
}
F->result_ = (*(P417)rt_nil_check((*(P424)rt_nil_check(F->c_1083)).hi));
goto ret_;
}
}
}
f_fail_21((*(P422)rt_nil_check(F->e_379)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P417)rt_nil_check((*(P422)rt_nil_check(F->e_379)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gbinop_385(P422 e_382, P426 want_383, P426 *t_384) {
  struct f_gbinop_385fr *F = rt_alloc(sizeof *F);
F->e_382 = e_382;
F->want_383 = want_383;
F->t_384 = t_384;
F->op_1087 = NULL;
F->op_1087 = (*(P422)rt_nil_check(F->e_382)).name;
F->ta_1088 = NULL;
F->tb_1089 = NULL;
F->hint_1090 = NULL;
F->uy_1091 = NULL;
(*F->t_384) = g_ty_bool_479;
if ((f_lookup_137(&(*(P417)rt_nil_check(F->op_1087))) != NULL)) {
F->l_1092 = NULL;
F->r_1093 = NULL;
F->l_1092 = f_copy_node_371((*(P422)rt_nil_check(F->e_382)).a);
F->r_1093 = f_copy_node_371((*(P422)rt_nil_check(F->e_382)).b);
(*(P422)rt_nil_check(F->l_1092)).next = F->r_1093;
F->uy_1091 = f_user_op_402(&(*(P417)rt_nil_check(F->op_1087)), F->l_1092);
if ((F->uy_1091 != NULL)) {
F->call_1094 = NULL;
F->call_1094 = f_nn_46(((rt_int)10LL), (*(P422)rt_nil_check(F->e_382)).line);
F->fname_1095 = NULL;
F->fname_1095 = f_nn_46(((rt_int)7LL), (*(P422)rt_nil_check(F->e_382)).line);
(*(P422)rt_nil_check(F->fname_1095)).name = F->op_1087;
(*(P422)rt_nil_check(F->call_1094)).a = F->fname_1095;
(*(P422)rt_nil_check(F->call_1094)).b = F->l_1092;
F->result_ = f_gcall_406(F->call_1094, 0, &(*F->t_384));
goto ret_;
}
}
if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("IN", 2))) {
F->s_1096 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_382)).b, NULL, &F->tb_1089));
if (((*(P426)rt_nil_check(F->tb_1089)).kind != ((rt_int)16LL))) {
f_fail_21((*(P422)rt_nil_check(F->e_382)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_1097 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_382)).a, (*(P426)rt_nil_check(F->tb_1089)).elem, &F->ta_1088));
f_check_type_172(F->ta_1088, (*(P426)rt_nil_check(F->tb_1089)).elem, (*(P422)rt_nil_check(F->e_382)).line);
(*F->t_384) = g_ty_bool_479;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_1097), rt_str(", ", 2)), F->s_1096), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("AND", 3)) || rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("OR", 2))) || rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("XOR", 3))) && (F->want_383 != NULL)) && ((*(P426)rt_nil_check(F->want_383)).kind == ((rt_int)16LL)))) {
F->a_1098 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_382)).a, F->want_383, &F->ta_1088));
F->b_1099 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_382)).b, F->want_383, &F->tb_1089));
f_check_type_172(F->tb_1089, F->ta_1088, (*(P422)rt_nil_check(F->e_382)).line);
(*F->t_384) = F->ta_1088;
if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_1098), rt_str(", ", 2)), F->b_1099), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_1098), rt_str(", ", 2)), F->b_1099), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_1098), rt_str(", ", 2)), F->b_1099), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("AND", 3)) || rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("OR", 2))) || rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("XOR", 3)))) {
F->a_1100 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_382)).a, g_ty_bool_479, &F->ta_1088));
F->b_1101 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_382)).b, g_ty_bool_479, &F->tb_1089));
f_check_type_172(F->ta_1088, g_ty_bool_479, (*(P422)rt_nil_check(F->e_382)).line);
f_check_type_172(F->tb_1089, g_ty_bool_479, (*(P422)rt_nil_check(F->e_382)).line);
if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1100), rt_str(" && ", 4)), F->b_1101), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1100), rt_str(" || ", 4)), F->b_1101), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1100), rt_str(" != ", 4)), F->b_1101), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("&", 1))) {
F->wa_1102 = NULL;
F->wb_1103 = NULL;
if (((*(P422)rt_nil_check((*(P422)rt_nil_check(F->e_382)).a)).kind == ((rt_int)4LL))) {
F->wa_1102 = g_ty_ascii_481;
}
if (((*(P422)rt_nil_check((*(P422)rt_nil_check(F->e_382)).b)).kind == ((rt_int)4LL))) {
F->wb_1103 = g_ty_ascii_481;
}
{
F->a_1104 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_382)).a, F->wa_1102, &F->ta_1088));
F->b_1105 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_382)).b, F->wb_1103, &F->tb_1089));
(*F->t_384) = g_ty_string_482;
if ((((*(P426)rt_nil_check(F->ta_1088)).kind == ((rt_int)5LL)) && ((*(P426)rt_nil_check(F->tb_1089)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_1104), rt_str(", ", 2)), F->b_1105), rt_str(")", 1));
goto ret_;
} else if ((((*(P426)rt_nil_check(F->ta_1088)).kind == ((rt_int)5LL)) && ((*(P426)rt_nil_check(F->tb_1089)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_1104), rt_str(", ", 2)), F->b_1105), rt_str(")", 1));
goto ret_;
} else if ((((*(P426)rt_nil_check(F->ta_1088)).kind == ((rt_int)4LL)) && ((*(P426)rt_nil_check(F->tb_1089)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_1104), rt_str(", ", 2)), F->b_1105), rt_str(")", 1));
goto ret_;
} else if ((((*(P426)rt_nil_check(F->ta_1088)).kind == ((rt_int)4LL)) && ((*(P426)rt_nil_check(F->tb_1089)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_1104), rt_str(", ", 2)), F->b_1105), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P422)rt_nil_check(F->e_382)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_91(&(*(P417)rt_nil_check(F->op_1087))) && (!rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("IN", 2))))) {
if (((((*(P422)rt_nil_check((*(P422)rt_nil_check(F->e_382)).a)).kind == ((rt_int)4LL)) || ((*(P422)rt_nil_check((*(P422)rt_nil_check(F->e_382)).a)).kind == ((rt_int)6LL))) || ((*(P422)rt_nil_check((*(P422)rt_nil_check(F->e_382)).a)).kind == ((rt_int)1LL)))) {
F->dummy_1106 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_382)).b, NULL, &F->hint_1090));
}
{
F->a_1107 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_382)).a, F->hint_1090, &F->ta_1088));
F->b_1108 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_382)).b, F->ta_1088, &F->tb_1089));
F->ct_1109 = NULL;
F->ct_1109 = F->ta_1088;
(*F->t_384) = g_ty_bool_479;
if ((((*(P426)rt_nil_check(F->ta_1088)).kind != ((rt_int)11LL)) && ((*(P426)rt_nil_check(F->tb_1089)).kind != ((rt_int)11LL)))) {
f_check_type_172(F->tb_1089, F->ta_1088, (*(P422)rt_nil_check(F->e_382)).line);
}
if (((*(P426)rt_nil_check(F->ta_1088)).kind == ((rt_int)11LL))) {
F->ct_1109 = F->tb_1089;
}
if (((*(P426)rt_nil_check(F->ct_1109)).kind == ((rt_int)5LL))) {
if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_1107), rt_str(", ", 2)), F->b_1108), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_1107), rt_str(", ", 2)), F->b_1108), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_1107), rt_str(", ", 2)), F->b_1108), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_1107), rt_str(", ", 2)), F->b_1108), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_1108), rt_str(", ", 2)), F->a_1107), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_1108), rt_str(", ", 2)), F->a_1107), rt_str(")", 1));
goto ret_;
}
if (((*(P426)rt_nil_check(F->ct_1109)).kind == ((rt_int)16LL))) {
if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_1107), rt_str(", ", 2)), F->b_1108), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_1107), rt_str(", ", 2)), F->b_1108), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_1107), rt_str(", ", 2)), F->b_1108), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_1108), rt_str(", ", 2)), F->a_1107), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P422)rt_nil_check(F->e_382)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_208(F->ct_1109)) {
if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("=", 1))) {
F->result_ = f_eq_code_220(F->ct_1109, &F->a_1107, &F->b_1108);
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_220(F->ct_1109, &F->a_1107, &F->b_1108)), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P422)rt_nil_check(F->e_382)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1107), rt_str(" == ", 4)), F->b_1108), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1107), rt_str(" != ", 4)), F->b_1108), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1107), rt_str(" ", 1)), (*(P417)rt_nil_check(F->op_1087))), rt_str(" ", 1)), F->b_1108), rt_str(")", 1));
goto ret_;
}
}
{
F->a_1110 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_382)).a, F->want_383, &F->ta_1088));
F->b_1111 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->e_382)).b, F->ta_1088, &F->tb_1089));
if ((((*(P426)rt_nil_check(F->ta_1088)).kind == ((rt_int)3LL)) || ((*(P426)rt_nil_check(F->tb_1089)).kind == ((rt_int)3LL)))) {
(*F->t_384) = g_ty_float_480;
if (((rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("+", 1)) || rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("-", 1))) || rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1110), rt_str(" ", 1)), (*(P417)rt_nil_check(F->op_1087))), rt_str(" ", 1)), F->b_1111), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_1110), rt_str(", ", 2)), F->b_1111), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_1110), rt_str(", ", 2)), F->b_1111), rt_str(")", 1));
goto ret_;
}
}
f_check_type_172(F->ta_1088, g_ty_int_478, (*(P422)rt_nil_check(F->e_382)).line);
f_check_type_172(F->tb_1089, g_ty_int_478, (*(P422)rt_nil_check(F->e_382)).line);
(*F->t_384) = g_ty_int_478;
if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1110), rt_str(", ", 2)), F->b_1111), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1110), rt_str(", ", 2)), F->b_1111), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_1110), rt_str(", ", 2)), F->b_1111), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_1110), rt_str(", ", 2)), F->b_1111), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_1110), rt_str(", ", 2)), F->b_1111), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P417)rt_nil_check(F->op_1087)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_1110), rt_str(", ", 2)), F->b_1111), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P422)rt_nil_check(F->e_382)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P417)rt_nil_check(F->op_1087))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_constructor_389(P422 e_386, P426 want_387, P426 *t_388) {
  struct f_constructor_389fr *F = rt_alloc(sizeof *F);
F->e_386 = e_386;
F->want_387 = want_387;
F->t_388 = t_388;
F->it_1112 = NULL;
F->it_1112 = (*(P422)rt_nil_check(F->e_386)).a;
F->f_1113 = NULL;
F->vt_1114 = NULL;
if (((F->want_387 != NULL) && ((*(P426)rt_nil_check(F->want_387)).kind == ((rt_int)16LL)))) {
F->s_1115 = NULL;
F->s_1115 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
(*F->t_388) = F->want_387;
while ((F->it_1112 != NULL)) {
F->v_1116 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->it_1112)).b, (*(P426)rt_nil_check(F->want_387)).elem, &F->vt_1114));
f_check_type_172(F->vt_1114, (*(P426)rt_nil_check(F->want_387)).elem, (*(P422)rt_nil_check(F->e_386)).line);
F->s_1115 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (*(P417)rt_nil_check(F->s_1115))), rt_str(", ", 2)), F->v_1116), rt_str(")", 1)); b_; }));
F->it_1112 = (*(P422)rt_nil_check(F->it_1112)).next;
}
F->result_ = (*(P417)rt_nil_check(F->s_1115));
goto ret_;
}
if (((F->want_387 != NULL) && ((*(P426)rt_nil_check(F->want_387)).kind == ((rt_int)15LL)))) {
f_fail_21((*(P422)rt_nil_check(F->e_386)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (*(P417)rt_nil_check((*(P426)rt_nil_check(F->want_387)).name))), rt_str(" needs the underlying type", 26)); b_; }));
}
if ((((F->want_387 != NULL) && ((*(P426)rt_nil_check(F->want_387)).kind == ((rt_int)6LL))) && ((*(P426)rt_nil_check(F->want_387)).idx2 == NULL))) {
F->tmp_1117 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->ct_1118 = rt_str_copy(f_ctype_174(F->want_387));
F->et_1119 = rt_str_copy(f_ctype_174((*(P426)rt_nil_check(F->want_387)).elem));
F->parts_1120 = NULL;
(*F->t_388) = F->want_387;
if (((((F->it_1112 != NULL) && ((*(P422)rt_nil_check(F->it_1112)).a != NULL)) && ((*(P422)rt_nil_check((*(P422)rt_nil_check(F->it_1112)).a)).b != NULL)) && ((*(P422)rt_nil_check(F->it_1112)).next == NULL))) {
F->lo_1121 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check((*(P422)rt_nil_check(F->it_1112)).a)).a, (*(P426)rt_nil_check(F->want_387)).idx, &F->vt_1114));
F->hi_1122 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check((*(P422)rt_nil_check(F->it_1112)).a)).b, (*(P426)rt_nil_check(F->want_387)).idx, &F->vt_1114));
F->v_1123 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->it_1112)).b, (*(P426)rt_nil_check(F->want_387)).elem, &F->vt_1114));
f_check_type_172(F->vt_1114, (*(P426)rt_nil_check(F->want_387)).elem, (*(P422)rt_nil_check(F->e_386)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1118), rt_str(" ", 1)), F->tmp_1117), rt_str("; ", 2)), F->tmp_1117), rt_str(".lo = ", 6)), F->lo_1121), rt_str("; ", 2)), F->tmp_1117), rt_str(".hi = ", 6)), F->hi_1122), rt_str("; ", 2)), F->tmp_1117), rt_str(".lo2 = ", 7)), F->tmp_1117), rt_str(".hi2 = 1; ", 10)), F->tmp_1117), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1119), rt_str(") * (size_t)RT_CNT(", 19)), F->tmp_1117), rt_str(")); for (rt_int i_ = 0; i_ < RT_CNT(", 36)), F->tmp_1117), rt_str("); i_++) ", 9)), F->tmp_1117), rt_str(".p[i_] = ", 9)), f_copy_code_216((*(P426)rt_nil_check(F->want_387)).elem, &F->v_1123)), rt_str("; ", 2)), F->tmp_1117), rt_str("; })", 4));
goto ret_;
}
F->parts_1120 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1118), rt_str(" ", 1)), F->tmp_1117), rt_str("; ", 2)), F->tmp_1117), rt_str(".lo = 1; ", 9)), F->tmp_1117), rt_str(".hi = ", 6)), f_itos_7(f_list_len_52(F->it_1112))), rt_str("; ", 2)), F->tmp_1117), rt_str(".lo2 = ", 7)), F->tmp_1117), rt_str(".hi2 = 1; ", 10)), F->tmp_1117), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1119), rt_str(") * ", 4)), f_itos_7(rt_add(f_list_len_52(F->it_1112), ((rt_int)1LL)))), rt_str(");", 2)); b_; }));
{ rt_int lo1125 = ((rt_int)0LL), hi1126 = rt_sub(f_list_len_52((*(P422)rt_nil_check(F->e_386)).a), ((rt_int)1LL));
for (rt_int it1127 = lo1125; it1127 <= hi1126; it1127++) {
F->i_1124 = it1127;
if (((*(P422)rt_nil_check(F->it_1112)).a != NULL)) {
f_fail_21((*(P422)rt_nil_check(F->e_386)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only positional array constructors are handled", 46); b_; }));
}
{
F->v_1128 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->it_1112)).b, (*(P426)rt_nil_check(F->want_387)).elem, &F->vt_1114));
f_check_type_172(F->vt_1114, (*(P426)rt_nil_check(F->want_387)).elem, (*(P422)rt_nil_check(F->e_386)).line);
F->parts_1120 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->parts_1120)), rt_str(" ", 1)), F->tmp_1117), rt_str(".p[", 3)), f_itos_7(F->i_1124)), rt_str("] = ", 4)), f_copy_code_216((*(P426)rt_nil_check(F->want_387)).elem, &F->v_1128)), rt_str(";", 1)); b_; }));
}
F->it_1112 = (*(P422)rt_nil_check(F->it_1112)).next;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->parts_1120)), rt_str(" ", 1)), F->tmp_1117), rt_str("; })", 4));
goto ret_;
}
if (((F->want_387 == NULL) || ((*(P426)rt_nil_check(F->want_387)).kind != ((rt_int)7LL)))) {
f_fail_21((*(P422)rt_nil_check(F->e_386)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
(*F->t_388) = F->want_387;
F->f_1113 = (*(P426)rt_nil_check(F->want_387)).fields;
{
F->tmp_1129 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_1130 = NULL;
F->parts_1130 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_174(F->want_387)), rt_str(" ", 1)), F->tmp_1129), rt_str(";", 1)); b_; }));
if (((f_list_len_52(F->it_1112) != ((rt_int)0LL)) && (f_list_len_52(F->it_1112) != ((rt_int)0LL)))) {
while (((F->it_1112 != NULL) && (F->f_1113 != NULL))) {
if (((((*(P422)rt_nil_check(F->it_1112)).a == NULL) || ((*(P422)rt_nil_check((*(P422)rt_nil_check((*(P422)rt_nil_check(F->it_1112)).a)).a)).kind != ((rt_int)7LL))) || (!rt_str_eq((*(P417)rt_nil_check((*(P422)rt_nil_check((*(P422)rt_nil_check((*(P422)rt_nil_check(F->it_1112)).a)).a)).name)), (*(P417)rt_nil_check((*(P428)rt_nil_check(F->f_1113)).name)))))) {
f_fail_21((*(P422)rt_nil_check(F->e_386)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P417)rt_nil_check((*(P428)rt_nil_check(F->f_1113)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_1131 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->it_1112)).b, (*(P428)rt_nil_check(F->f_1113)).t, &F->vt_1114));
f_check_type_172(F->vt_1114, (*(P428)rt_nil_check(F->f_1113)).t, (*(P422)rt_nil_check(F->e_386)).line);
F->parts_1130 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->parts_1130)), rt_str(" ", 1)), F->tmp_1129), rt_str(".", 1)), f_lower_s_15(&(*(P417)rt_nil_check((*(P428)rt_nil_check(F->f_1113)).name)))), rt_str(" = ", 3)), f_copy_code_216((*(P428)rt_nil_check(F->f_1113)).t, &F->v_1131)), rt_str(";", 1)); b_; }));
}
F->it_1112 = (*(P422)rt_nil_check(F->it_1112)).next;
F->f_1113 = (*(P428)rt_nil_check(F->f_1113)).next;
}
}
if (((F->it_1112 != NULL) || (F->f_1113 != NULL))) {
f_fail_21((*(P422)rt_nil_check(F->e_386)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->parts_1130)), rt_str(" ", 1)), F->tmp_1129), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_fits_392(P432 y_390, P422 args_391) {
  struct f_fits_392fr *F = rt_alloc(sizeof *F);
F->y_390 = y_390;
F->args_391 = args_391;
F->a_1132 = NULL;
F->a_1132 = F->args_391;
F->pm_1133 = NULL;
F->pm_1133 = (*(P432)rt_nil_check(F->y_390)).params;
F->t_1134 = NULL;
F->saved_1135 = NULL;
F->saved_1135 = g_code_462;
F->ok_1136 = 1;
F->lv_1137 = NULL;
F->lc_1138 = NULL;
g_trial_476 = rt_add(g_trial_476, ((rt_int)1LL));
g_code_462 = f_new_buffer_22();
{ rt_frame xf1140;
if (RT_TRY(xf1140)) {
while (((F->ok_1136 && (F->a_1132 != NULL)) && (F->pm_1133 != NULL))) {
if ((((*(P430)rt_nil_check(F->pm_1133)).mode == ((rt_int)2LL)) || ((*(P430)rt_nil_check(F->pm_1133)).mode == ((rt_int)3LL)))) {
f_lvalue_348(F->a_1132, &F->lv_1137, &F->t_1134, &F->lc_1138, &F->ro_1139);
} else {
F->v_1142 = rt_str_copy(f_gexpr_369(F->a_1132, (*(P430)rt_nil_check(F->pm_1133)).t, &F->t_1134));
}
if ((!(f_same_161(F->t_1134, (*(P430)rt_nil_check(F->pm_1133)).t) || (((*(P426)rt_nil_check(F->t_1134)).kind == ((rt_int)11LL)) && ((*(P426)rt_nil_check((*(P430)rt_nil_check(F->pm_1133)).t)).kind == ((rt_int)8LL)))))) {
F->ok_1136 = 0;
}
F->a_1132 = (*(P422)rt_nil_check(F->a_1132)).next;
F->pm_1133 = (*(P430)rt_nil_check(F->pm_1133)).next;
}
if (((F->a_1132 != NULL) || (F->pm_1133 != NULL))) {
F->ok_1136 = 0;
}
RT_POP(xf1140);
} else {
RT_POP(xf1140);
int x1141 = rt_xcur;
if (0 || x1141 == ex_compile_error_1) {
F->ok_1136 = 0;
} else {
rt_raise(x1141);
}
}
}
g_trial_476 = rt_sub(g_trial_476, ((rt_int)1LL));
g_code_462 = F->saved_1135;
F->result_ = F->ok_1136;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P432 f_resolve_overload_397(rstr *name_393, P422 args_394, int is_stmt_395, rt_int line_396) {
  struct f_resolve_overload_397fr *F = rt_alloc(sizeof *F);
F->name_393 = name_393;
F->args_394 = args_394;
F->is_stmt_395 = is_stmt_395;
F->line_396 = line_396;
F->y_1143 = NULL;
F->y_1143 = (*(P438)rt_nil_check(g_table_450)).p[rt_index(f_hash_135(&(*F->name_393)), (*(P438)rt_nil_check(g_table_450)).lo, (*(P438)rt_nil_check(g_table_450)).hi) - (*(P438)rt_nil_check(g_table_450)).lo];
F->first_1144 = NULL;
F->n_1145 = ((rt_int)0LL);
while ((F->y_1143 != NULL)) {
if ((rt_str_eq((*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_1143)).name)), (*F->name_393)) && (((*(P432)rt_nil_check(F->y_1143)).kind == ((rt_int)3LL)) || ((*(P432)rt_nil_check(F->y_1143)).kind == ((rt_int)4LL))))) {
F->n_1145 = rt_add(F->n_1145, ((rt_int)1LL));
if ((F->first_1144 == NULL)) {
F->first_1144 = F->y_1143;
}
if (((((*(P432)rt_nil_check(F->y_1143)).kind == ((rt_int)4LL)) == F->is_stmt_395) && f_fits_392(F->y_1143, F->args_394))) {
F->result_ = F->y_1143;
goto ret_;
}
}
F->y_1143 = (*(P432)rt_nil_check(F->y_1143)).chain;
}
if (f_is_builtin_399(&(*F->name_393))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_1145 > ((rt_int)1LL))) {
f_fail_21(F->line_396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_393)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_1144;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_builtin_399(rstr *n_398) {
  struct f_is_builtin_399fr *F = rt_alloc(sizeof *F);
F->n_398 = n_398;
F->result_ = ((((((((((((((rt_str_eq((*F->n_398), rt_str("ABS", 3)) || rt_str_eq((*F->n_398), rt_str("POS", 3))) || rt_str_eq((*F->n_398), rt_str("SUCC", 4))) || rt_str_eq((*F->n_398), rt_str("PRED", 4))) || rt_str_eq((*F->n_398), rt_str("SQRT", 4))) || rt_str_eq((*F->n_398), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_398), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_398), rt_str("WRITE", 5))) || rt_str_eq((*F->n_398), rt_str("READLN", 6))) || rt_str_eq((*F->n_398), rt_str("SEND", 4))) || rt_str_eq((*F->n_398), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_398), rt_str("DELAY", 5))) || rt_str_eq((*F->n_398), rt_str("TIME", 4))) || rt_str_eq((*F->n_398), rt_str("CNVT", 4))) || rt_str_eq((*F->n_398), rt_str("FORMAT", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P432 f_user_op_402(rstr *op_400, P422 args_401) {
  struct f_user_op_402fr *F = rt_alloc(sizeof *F);
F->op_400 = op_400;
F->args_401 = args_401;
F->y_1146 = NULL;
F->y_1146 = (*(P438)rt_nil_check(g_table_450)).p[rt_index(f_hash_135(&(*F->op_400)), (*(P438)rt_nil_check(g_table_450)).lo, (*(P438)rt_nil_check(g_table_450)).hi) - (*(P438)rt_nil_check(g_table_450)).lo];
while ((F->y_1146 != NULL)) {
if (((rt_str_eq((*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_1146)).name)), (*F->op_400)) && ((*(P432)rt_nil_check(F->y_1146)).kind == ((rt_int)3LL))) && f_fits_392(F->y_1146, F->args_401))) {
F->result_ = F->y_1146;
goto ret_;
}
F->y_1146 = (*(P432)rt_nil_check(F->y_1146)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gcall_406(P422 e_403, int is_stmt_404, P426 *t_405) {
  struct f_gcall_406fr *F = rt_alloc(sizeof *F);
F->e_403 = e_403;
F->is_stmt_404 = is_stmt_404;
F->t_405 = t_405;
F->fn_1147 = NULL;
F->fn_1147 = (*(P422)rt_nil_check(F->e_403)).a;
F->tt_1148 = NULL;
F->y_1149 = NULL;
F->args_1150 = NULL;
F->args_1150 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_1151 = NULL;
F->a_1151 = (*(P422)rt_nil_check(F->e_403)).b;
F->pm_1152 = NULL;
F->lt_1153 = NULL;
F->vt_1154 = NULL;
F->lv_1155 = NULL;
F->lc_1156 = NULL;
if (((*(P422)rt_nil_check(F->fn_1147)).kind == ((rt_int)12LL))) {
F->tt_1148 = (*(P422)rt_nil_check(F->fn_1147)).b;
F->fn_1147 = (*(P422)rt_nil_check(F->fn_1147)).a;
}
F->y_1149 = f_lookup_137(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_1147)).name)));
if ((F->y_1149 == NULL)) {
F->result_ = f_builtin_413(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_1147)).name)), F->tt_1148, (*(P422)rt_nil_check(F->e_403)).b, (*(P422)rt_nil_check(F->e_403)).line, F->is_stmt_404, &(*F->t_405));
goto ret_;
}
if (((*(P432)rt_nil_check(F->y_1149)).kind == ((rt_int)10LL))) {
F->y_1149 = f_instantiate_327(F->y_1149, F->tt_1148, (*(P422)rt_nil_check(F->e_403)).b, (*(P422)rt_nil_check(F->e_403)).line);
} else if ((((*(P432)rt_nil_check(F->y_1149)).kind == ((rt_int)3LL)) || ((*(P432)rt_nil_check(F->y_1149)).kind == ((rt_int)4LL)))) {
F->y_1149 = f_resolve_overload_397(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_1147)).name)), (*(P422)rt_nil_check(F->e_403)).b, F->is_stmt_404, (*(P422)rt_nil_check(F->e_403)).line);
if ((F->y_1149 == NULL)) {
F->result_ = f_builtin_413(&(*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_1147)).name)), F->tt_1148, (*(P422)rt_nil_check(F->e_403)).b, (*(P422)rt_nil_check(F->e_403)).line, F->is_stmt_404, &(*F->t_405));
goto ret_;
}
}
if ((((*(P432)rt_nil_check(F->y_1149)).kind != ((rt_int)3LL)) && ((*(P432)rt_nil_check(F->y_1149)).kind != ((rt_int)4LL)))) {
f_fail_21((*(P422)rt_nil_check(F->e_403)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_1147)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_404 && ((*(P432)rt_nil_check(F->y_1149)).kind != ((rt_int)4LL)))) {
f_fail_21((*(P422)rt_nil_check(F->e_403)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_1147)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_404) && ((*(P432)rt_nil_check(F->y_1149)).kind != ((rt_int)3LL)))) {
f_fail_21((*(P422)rt_nil_check(F->e_403)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_1147)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_1152 = (*(P432)rt_nil_check(F->y_1149)).params;
if (((*(P432)rt_nil_check(F->y_1149)).level > ((rt_int)0LL))) {
F->args_1150 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1159 = ((rt_int)1LL), hi1160 = rt_sub(g_cur_level_465, (*(P432)rt_nil_check(F->y_1149)).level);
for (rt_int it1161 = lo1159; it1161 <= hi1160; it1161++) {
F->i_1158 = it1161;
F->args_1150 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check(F->args_1150)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_1151 != NULL) && (F->pm_1152 != NULL))) {
if ((((*(P417)rt_nil_check(F->args_1150))).len > ((rt_int)0LL))) {
F->args_1150 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check(F->args_1150)), rt_str(", ", 2)); b_; }));
}
if ((((*(P430)rt_nil_check(F->pm_1152)).mode == ((rt_int)2LL)) || ((*(P430)rt_nil_check(F->pm_1152)).mode == ((rt_int)3LL)))) {
f_lvalue_348(F->a_1151, &F->lv_1155, &F->lt_1153, &F->lc_1156, &F->ro_1157);
if (F->ro_1157) {
f_fail_21((*(P422)rt_nil_check(F->e_403)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check((*(P430)rt_nil_check(F->pm_1152)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_172(F->lt_1153, (*(P430)rt_nil_check(F->pm_1152)).t, (*(P422)rt_nil_check(F->e_403)).line);
F->args_1150 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->args_1150)), rt_str("&", 1)), (*(P417)rt_nil_check(F->lv_1155))); b_; }));
} else if ((((*(P430)rt_nil_check(F->pm_1152)).mode == ((rt_int)4LL)) && f_is_lvalue_342(F->a_1151))) {
f_lvalue_348(F->a_1151, &F->lv_1155, &F->lt_1153, &F->lc_1156, &F->ro_1157);
f_check_type_172(F->lt_1153, (*(P430)rt_nil_check(F->pm_1152)).t, (*(P422)rt_nil_check(F->e_403)).line);
F->args_1150 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->args_1150)), rt_str("&", 1)), (*(P417)rt_nil_check(F->lv_1155))); b_; }));
} else if (((*(P430)rt_nil_check(F->pm_1152)).mode == ((rt_int)4LL))) {
F->v_1162 = rt_str_copy(f_gexpr_369(F->a_1151, (*(P430)rt_nil_check(F->pm_1152)).t, &F->vt_1154));
F->ct_1163 = rt_str_copy(f_ctype_174((*(P430)rt_nil_check(F->pm_1152)).t));
f_check_type_172(F->vt_1154, (*(P430)rt_nil_check(F->pm_1152)).t, (*(P422)rt_nil_check(F->e_403)).line);
F->args_1150 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->args_1150)), rt_str("({ ", 3)), F->ct_1163), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1163), rt_str(")); *b_ = ", 10)), F->v_1162), rt_str("; b_; })", 8)); b_; }));
} else {
F->v_1164 = rt_str_copy(f_gexpr_369(F->a_1151, (*(P430)rt_nil_check(F->pm_1152)).t, &F->vt_1154));
f_check_type_172(F->vt_1154, (*(P430)rt_nil_check(F->pm_1152)).t, (*(P422)rt_nil_check(F->e_403)).line);
if (((((*(P426)rt_nil_check((*(P430)rt_nil_check(F->pm_1152)).t)).kind == ((rt_int)1LL)) && ((*(P430)rt_nil_check(F->pm_1152)).c != NULL)) && (*(P424)rt_nil_check((*(P430)rt_nil_check(F->pm_1152)).c)).hasm)) {
F->args_1150 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->args_1150)), rt_str("rt_range(", 9)), F->v_1164), rt_str(", ", 2)), f_itos_7((*(P424)rt_nil_check((*(P430)rt_nil_check(F->pm_1152)).c)).mlo)), rt_str(", ", 2)), f_itos_7((*(P424)rt_nil_check((*(P430)rt_nil_check(F->pm_1152)).c)).mhi)), rt_str(")", 1)); b_; }));
} else {
F->args_1150 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P417)rt_nil_check(F->args_1150)), F->v_1164); b_; }));
}
}
F->a_1151 = (*(P422)rt_nil_check(F->a_1151)).next;
F->pm_1152 = (*(P430)rt_nil_check(F->pm_1152)).next;
}
if (((F->a_1151 != NULL) || (F->pm_1152 != NULL))) {
f_fail_21((*(P422)rt_nil_check(F->e_403)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check((*(P422)rt_nil_check(F->fn_1147)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_52((*(P422)rt_nil_check(F->e_403)).b), f_list_len_52(F->a_1151)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
(*F->t_405) = (*(P432)rt_nil_check(F->y_1149)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check((*(P432)rt_nil_check(F->y_1149)).cname)), rt_str("(", 1)), (*(P417)rt_nil_check(F->args_1150))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_builtin_413(rstr *name_407, P422 tt_408, P422 args_409, rt_int line_410, int is_stmt_411, P426 *t_412) {
  struct f_builtin_413fr *F = rt_alloc(sizeof *F);
F->name_407 = name_407;
F->tt_408 = tt_408;
F->args_409 = args_409;
F->line_410 = line_410;
F->is_stmt_411 = is_stmt_411;
F->t_412 = t_412;
F->at_1165 = NULL;
F->n_1166 = f_list_len_52(F->args_409);
(*F->t_412) = g_ty_void_483;
if (((rt_str_eq((*F->name_407), rt_str("POS", 3)) || rt_str_eq((*F->name_407), rt_str("SUCC", 4))) || rt_str_eq((*F->name_407), rt_str("PRED", 4)))) {
F->a_1167 = rt_str_copy(f_gexpr_369(F->args_409, NULL, &F->at_1165));
if (rt_str_eq((*F->name_407), rt_str("POS", 3))) {
if (((*(P426)rt_nil_check(f_base_of_163(F->at_1165))).kind != ((rt_int)4LL))) {
f_fail_21(F->line_410, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
(*F->t_412) = g_ty_int_478;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1167), rt_str(") + 1)", 6));
goto ret_;
}
(*F->t_412) = F->at_1165;
if (((*(P426)rt_nil_check(F->at_1165)).kind == ((rt_int)1LL))) {
if (rt_str_eq((*F->name_407), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1167), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1167), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_407), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1167), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_52((*(P426)rt_nil_check(f_base_of_163(F->at_1165))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1167), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_52((*(P426)rt_nil_check(f_base_of_163(F->at_1165))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_407), rt_str("SQRT", 4)) || rt_str_eq((*F->name_407), rt_str("SIN", 3))) || rt_str_eq((*F->name_407), rt_str("COS", 3))) || rt_str_eq((*F->name_407), rt_str("EXP", 3))) || rt_str_eq((*F->name_407), rt_str("LN", 2))) || rt_str_eq((*F->name_407), rt_str("FLOOR", 5)))) {
F->a_1168 = rt_str_copy(f_gexpr_369(F->args_409, g_ty_float_480, &F->at_1165));
(*F->t_412) = g_ty_float_480;
if (rt_str_eq((*F->name_407), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_1168), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_407)), rt_str("(", 1)), F->a_1168), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_407), rt_str("IFLOAT", 6))) {
F->a_1169 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->args_409)).next, g_ty_int_478, &F->at_1165));
(*F->t_412) = g_ty_float_480;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_1169), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_407), rt_str("IFIX", 4))) {
F->a_1170 = rt_str_copy(f_gexpr_369(F->args_409, g_ty_float_480, &F->at_1165));
(*F->t_412) = g_ty_int_478;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1170), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_407), rt_str("FORMAT", 6))) {
F->a_1171 = rt_str_copy(f_gexpr_369(F->args_409, g_ty_float_480, &F->at_1165));
F->n1_1172 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->args_409)).next, g_ty_int_478, &F->at_1165));
F->m1_1173 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check((*(P422)rt_nil_check(F->args_409)).next)).next, g_ty_int_478, &F->at_1165));
(*F->t_412) = g_ty_string_482;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_1171), rt_str(", ", 2)), F->n1_1172), rt_str(", ", 2)), F->m1_1173), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_407), rt_str("ABS", 3))) {
F->a_1174 = rt_str_copy(f_gexpr_369(F->args_409, NULL, &F->at_1165));
(*F->t_412) = F->at_1165;
if (((*(P426)rt_nil_check(F->at_1165)).kind == ((rt_int)1LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_1174), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_1174), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_407), rt_str("CNVT", 4))) {
if ((F->tt_408 == NULL)) {
f_fail_21(F->line_410, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_1175 = rt_str_copy(f_gexpr_369(F->args_409, NULL, &F->at_1165));
if ((((*(P422)rt_nil_check(F->tt_408)).kind == ((rt_int)73LL)) && ((*(P426)rt_nil_check(F->at_1165)).kind == ((rt_int)1LL)))) {
(*F->t_412) = g_ty_string_482;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_1175), rt_str(")", 1));
goto ret_;
} else if ((((*(P422)rt_nil_check(F->tt_408)).kind == ((rt_int)73LL)) && ((*(P426)rt_nil_check(F->at_1165)).kind == ((rt_int)3LL)))) {
(*F->t_412) = g_ty_string_482;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_1175), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P422)rt_nil_check(F->tt_408)).kind == ((rt_int)73LL)) && ((*(P426)rt_nil_check(F->at_1165)).kind == ((rt_int)2LL)))) {
(*F->t_412) = g_ty_string_482;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_1175), rt_str(") \? rt_str(", 11)), f_q_16()), rt_str("TRUE", 4)), f_q_16()), rt_str(", 4) : rt_str(", 14)), f_q_16()), rt_str("FALSE", 5)), f_q_16()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P422)rt_nil_check(F->tt_408)).kind == ((rt_int)70LL)) && ((*(P426)rt_nil_check(F->at_1165)).kind == ((rt_int)5LL)))) {
(*F->t_412) = g_ty_int_478;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_1175), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_410, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_407), rt_str("WRITELN", 7))) {
if ((F->n_1166 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_1176 = NULL;
F->last_1176 = F->args_409;
while (((*(P422)rt_nil_check(F->last_1176)).next != NULL)) {
F->last_1176 = (*(P422)rt_nil_check(F->last_1176)).next;
}
{
F->a_1177 = rt_str_copy(f_gexpr_369(F->last_1176, g_ty_string_482, &F->at_1165));
f_check_type_172(F->at_1165, g_ty_string_482, F->line_410);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_1177), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_407), rt_str("WRITE", 5))) {
F->a_1178 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->args_409)).next, NULL, &F->at_1165));
if (((*(P426)rt_nil_check(F->at_1165)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_1178), rt_str(")", 1));
goto ret_;
} else if (((*(P426)rt_nil_check(F->at_1165)).kind == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_1178), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_410, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_407), rt_str("READLN", 6))) {
F->lv_1179 = NULL;
F->lc_1180 = NULL;
F->last_1182 = NULL;
F->last_1182 = F->args_409;
while (((*(P422)rt_nil_check(F->last_1182)).next != NULL)) {
F->last_1182 = (*(P422)rt_nil_check(F->last_1182)).next;
}
f_lvalue_348(F->last_1182, &F->lv_1179, &F->at_1165, &F->lc_1180, &F->ro_1181);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P417)rt_nil_check(F->lv_1179))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_407), rt_str("SIZELN", 6))) {
(*F->t_412) = g_ty_int_478;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_407), rt_str("EOF", 3))) {
(*F->t_412) = g_ty_bool_479;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_407), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_407), rt_str("SYS_OUT", 7)))) {
(*F->t_412) = g_ty_file_484;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_407), rt_str("OPEN", 4)) || rt_str_eq((*F->name_407), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_407), rt_str("SEND", 4)) || rt_str_eq((*F->name_407), rt_str("RECEIVE", 7)))) {
F->lv_1183 = NULL;
F->dv_1184 = NULL;
F->lc_1185 = NULL;
F->mt_1187 = NULL;
F->dt_1188 = NULL;
f_lvalue_348(F->args_409, &F->lv_1183, &F->mt_1187, &F->lc_1185, &F->ro_1186);
if (((*(P426)rt_nil_check(F->mt_1187)).kind != ((rt_int)12LL))) {
f_fail_21(F->line_410, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_407), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_407), rt_str("RECEIVE", 7))) {
f_lvalue_348((*(P422)rt_nil_check(F->args_409)).next, &F->dv_1184, &F->dt_1188, &F->lc_1185, &F->ro_1186);
f_check_type_172(F->dt_1188, (*(P426)rt_nil_check(F->mt_1187)).elem, F->line_410);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(&", 12), (*(P417)rt_nil_check(F->lv_1183))), rt_str(", &", 3)), (*(P417)rt_nil_check(F->dv_1184))), rt_str(")", 1));
goto ret_;
}
{
F->v_1189 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->args_409)).next, (*(P426)rt_nil_check(F->mt_1187)).elem, &F->at_1165));
f_check_type_172(F->at_1165, (*(P426)rt_nil_check(F->mt_1187)).elem, F->line_410);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_174((*(P426)rt_nil_check(F->mt_1187)).elem)), rt_str(" m_ = ", 6)), F->v_1189), rt_str("; rt_send(&", 11)), (*(P417)rt_nil_check(F->lv_1183))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_407), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_407), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_1190 = NULL;
F->lc_1191 = NULL;
F->mt_1193 = NULL;
f_lvalue_348(F->args_409, &F->lv_1190, &F->mt_1193, &F->lc_1191, &F->ro_1192);
if (((*(P426)rt_nil_check(F->mt_1193)).kind != ((rt_int)12LL))) {
f_fail_21(F->line_410, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_407), rt_str(" needs a mailbox", 16)); b_; }));
}
(*F->t_412) = g_ty_int_478;
if (rt_str_eq((*F->name_407), rt_str("FULL_SLOTS", 10))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_mbox_count(&", 15), (*(P417)rt_nil_check(F->lv_1190))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P417)rt_nil_check(F->lv_1190))), rt_str(".cap - rt_mbox_count(&", 22)), (*(P417)rt_nil_check(F->lv_1190))), rt_str("))", 2));
goto ret_;
} else if ((rt_str_eq((*F->name_407), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_407), rt_str("COND_RECEIVE", 12)))) {
F->lv_1194 = NULL;
F->dv_1195 = NULL;
F->bv_1196 = NULL;
F->lc_1197 = NULL;
F->mt_1199 = NULL;
F->dt_1200 = NULL;
F->bt_1201 = NULL;
f_lvalue_348(F->args_409, &F->lv_1194, &F->mt_1199, &F->lc_1197, &F->ro_1198);
if (((*(P426)rt_nil_check(F->mt_1199)).kind != ((rt_int)12LL))) {
f_fail_21(F->line_410, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_407), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_348((*(P422)rt_nil_check((*(P422)rt_nil_check(F->args_409)).next)).next, &F->bv_1196, &F->bt_1201, &F->lc_1197, &F->ro_1198);
f_check_type_172(F->bt_1201, g_ty_bool_479, F->line_410);
if (rt_str_eq((*F->name_407), rt_str("COND_RECEIVE", 12))) {
f_lvalue_348((*(P422)rt_nil_check(F->args_409)).next, &F->dv_1195, &F->dt_1200, &F->lc_1197, &F->ro_1198);
f_check_type_172(F->dt_1200, (*(P426)rt_nil_check(F->mt_1199)).elem, F->line_410);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P417)rt_nil_check(F->bv_1196)), rt_str(" = rt_cond_receive(&", 20)), (*(P417)rt_nil_check(F->lv_1194))), rt_str(", &", 3)), (*(P417)rt_nil_check(F->dv_1195))), rt_str(")", 1));
goto ret_;
}
{
F->v_1202 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->args_409)).next, (*(P426)rt_nil_check(F->mt_1199)).elem, &F->at_1165));
f_check_type_172(F->at_1165, (*(P426)rt_nil_check(F->mt_1199)).elem, F->line_410);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_174((*(P426)rt_nil_check(F->mt_1199)).elem)), rt_str(" m_ = ", 6)), F->v_1202), rt_str("; ", 2)), (*(P417)rt_nil_check(F->bv_1196))), rt_str(" = rt_cond_send(&", 17)), (*(P417)rt_nil_check(F->lv_1194))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_407), rt_str("PRIORITY", 8))) {
(*F->t_412) = g_ty_int_478;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_301(F->args_409)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_407), rt_str("SET_PRIORITY", 12))) {
F->v_1203 = rt_str_copy(f_gexpr_369((*(P422)rt_nil_check(F->args_409)).next, g_ty_int_478, &F->at_1165));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_301(F->args_409)), rt_str(", ", 2)), F->v_1203), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_407), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_301(F->args_409)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_407), rt_str("ACTIVE", 6))) {
(*F->t_412) = g_ty_bool_479;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_is_active(", 13), f_act_ref_301(F->args_409)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_407), rt_str("DELAY", 5))) {
F->v_1204 = rt_str_copy(f_gexpr_369(F->args_409, g_ty_int_478, &F->at_1165));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_1204), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_407), rt_str("DELAY_UNTIL", 11))) {
F->v_1205 = rt_str_copy(f_gexpr_369(F->args_409, g_ty_int_478, &F->at_1165));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_1205), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_407), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_301(F->args_409)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_407), rt_str("TIME", 4))) {
(*F->t_412) = g_ty_int_478;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_407), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_407), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_407), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_407), rt_str("HOURS", 5)))) {
(*F->t_412) = g_ty_int_478;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_407));
goto ret_;
} else if (rt_str_eq((*F->name_407), rt_str("HALT", 4))) {
F->a_1206 = rt_str_copy(f_gexpr_369(F->args_409, g_ty_int_478, &F->at_1165));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_1206), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_410, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_407), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_translate_415(P422 units_414) {
  struct f_translate_415fr *F = rt_alloc(sizeof *F);
F->units_414 = units_414;
F->u_1207 = NULL;
F->u_1207 = F->units_414;
while ((F->u_1207 != NULL)) {
if (((*(P422)rt_nil_check(F->u_1207)).next == NULL)) {
{ R443 *cell1208 = rt_alloc(sizeof(R443));
(*cell1208).d = NULL;
(*cell1208).next = NULL;
g_caps_467 = cell1208;
}
(*(P442)rt_nil_check(g_caps_467)).d = F->u_1207;
f_declare_body_232((*(P422)rt_nil_check(F->u_1207)).c);
f_body_elements_269((*(P422)rt_nil_check(F->u_1207)).c);
} else {
f_gen_capsule_242(F->u_1207);
}
F->u_1207 = (*(P422)rt_nil_check(F->u_1207)).next;
}
ret_:
  return;
}

static void f_print_program_416(void) {
  struct f_print_program_416fr *F = rt_alloc(sizeof *F);
f_emit_helpers_228();
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_16()), rt_str("paleo.h", 7)), f_q_16()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_29(g_out_types_455);
f_print_buffer_29(g_out_frames_470);
f_print_buffer_29(g_out_helpers_456);
f_print_buffer_29(g_out_protos_457);
f_print_buffer_29(g_out_globals_458);
f_print_buffer_29(g_out_funcs_459);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_29(g_out_excs_461);
f_print_buffer_29(g_out_init_460);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  return;
}

static void as_R445(R445 *d, R445 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R445 cp_R445(R445 s) {
  R445 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R445(R445 a, R445 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_R443(R443 *d, R443 s) {
  d->d = s.d;
  d->next = s.next;
}
static R443 cp_R443(R443 s) {
  R443 d = s;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R443(R443 a, R443 b) {
  return 1 && (a.d == b.d) && (a.next == b.next);
}
static void as_R441(R441 *d, R441 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R441 cp_R441(R441 s) {
  R441 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R441(R441 a, R441 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_A439(A439 *d, A439 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A439 cp_A439(A439 s) {
  A439 d = s; d.p = rt_alloc(sizeof(P432) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A439(A439 a, A439 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R437(R437 *d, R437 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R437 cp_R437(R437 s) {
  R437 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R437(R437 a, R437 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R435(R435 *d, R435 s) {
  d->s = s.s;
  d->next = s.next;
}
static R435 cp_R435(R435 s) {
  R435 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R435(R435 a, R435 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R433(R433 *d, R433 s) {
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
static R433 cp_R433(R433 s) {
  R433 d = s;
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
static int eq_R433(R433 a, R433 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.chain == b.chain) && (a.stack == b.stack);
}
static void as_R431(R431 *d, R431 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R431 cp_R431(R431 s) {
  R431 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R431(R431 a, R431 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R429(R429 *d, R429 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R429 cp_R429(R429 s) {
  R429 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R429(R429 a, R429 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R427(R427 *d, R427 s) {
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
static R427 cp_R427(R427 s) {
  R427 d = s;
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
static int eq_R427(R427 a, R427 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.next == b.next);
}
static void as_R425(R425 *d, R425 s) {
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
static R425 cp_R425(R425 s) {
  R425 d = s;
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
static int eq_R425(R425 a, R425 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args);
}
static void as_R423(R423 *d, R423 s) {
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
static R423 cp_R423(R423 s) {
  R423 d = s;
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
static int eq_R423(R423 a, R423 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A421(A421 *d, A421 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A421 cp_A421(A421 s) {
  A421 d = s; d.p = rt_alloc(sizeof(P418) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A421(A421 a, A421 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R419(R419 *d, R419 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
}
static R419 cp_R419(R419 s) {
  R419 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  return d;
}
static int eq_R419(R419 a, R419 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_446 = NULL;
g_ntoks_447 = ((rt_int)0LL);
g_tpos_448 = ((rt_int)1LL);
g_src_line_449 = ((rt_int)0LL);
g_table_450 = NULL;
g_depth_451 = ((rt_int)0LL);
g_scope_stack_452 = NULL;
g_all_types_453 = NULL;
g_serial_454 = ((rt_int)0LL);
g_out_types_455 = NULL;
g_out_helpers_456 = NULL;
g_out_protos_457 = NULL;
g_out_globals_458 = NULL;
g_out_funcs_459 = NULL;
g_out_init_460 = NULL;
g_out_excs_461 = NULL;
g_code_462 = NULL;
g_fields_buf_463 = NULL;
g_in_func_464 = 0;
g_cur_level_465 = ((rt_int)0LL);
g_fctx_466 = NULL;
g_caps_467 = NULL;
g_psub_468 = NULL;
g_st_field_469 = NULL;
g_out_frames_470 = NULL;
g_func_sym_471 = NULL;
g_exits_472 = NULL;
g_frames_473 = ((rt_int)0LL);
g_handlers_474 = NULL;
g_cleanups_475 = NULL;
g_trial_476 = ((rt_int)0LL);
g_mcopies_477 = NULL;
g_ty_int_478 = NULL;
g_ty_bool_479 = NULL;
g_ty_float_480 = NULL;
g_ty_ascii_481 = NULL;
g_ty_string_482 = NULL;
g_ty_void_483 = NULL;
g_ty_file_484 = NULL;
g_ty_nil_485 = NULL;
g_ty_lock_486 = NULL;
g_ty_act_487 = NULL;
g_no_cons_488 = NULL;
{ A421 *cell1209 = rt_alloc(sizeof(A421));
rt_int pv1210 = ((rt_int)1000000LL);
(*cell1209).lo = ((rt_int)1LL); (*cell1209).hi = pv1210; (*cell1209).lo2 = 1; (*cell1209).hi2 = 1;
(*cell1209).p = rt_alloc(sizeof(P418) * (size_t)RT_CNT((*cell1209)));
for (rt_int i1211 = 0; i1211 < RT_CNT((*cell1209)); i1211++) {
(*cell1209).p[i1211] = NULL;
}
g_toks_446 = cell1209;
}
{ A439 *cell1212 = rt_alloc(sizeof(A439));
rt_int pv1213 = ((rt_int)4093LL);
(*cell1212).lo = ((rt_int)0LL); (*cell1212).hi = pv1213; (*cell1212).lo2 = 1; (*cell1212).hi2 = 1;
(*cell1212).p = rt_alloc(sizeof(P432) * (size_t)RT_CNT((*cell1212)));
for (rt_int i1214 = 0; i1214 < RT_CNT((*cell1212)); i1214++) {
(*cell1212).p[i1214] = NULL;
}
g_table_450 = cell1212;
}
g_out_types_455 = f_new_buffer_22();
g_out_helpers_456 = f_new_buffer_22();
g_out_protos_457 = f_new_buffer_22();
g_out_globals_458 = f_new_buffer_22();
g_out_funcs_459 = f_new_buffer_22();
g_out_init_460 = f_new_buffer_22();
g_out_excs_461 = f_new_buffer_22();
g_out_frames_470 = f_new_buffer_22();
g_code_462 = g_out_init_460;
g_no_cons_488 = f_new_cons_155();
g_ty_int_478 = f_new_typ_154(((rt_int)1LL));
g_ty_bool_479 = f_new_typ_154(((rt_int)2LL));
g_ty_float_480 = f_new_typ_154(((rt_int)3LL));
g_ty_string_482 = f_new_typ_154(((rt_int)5LL));
g_ty_void_483 = f_new_typ_154(((rt_int)9LL));
g_ty_file_484 = f_new_typ_154(((rt_int)10LL));
g_ty_nil_485 = f_new_typ_154(((rt_int)11LL));
g_ty_lock_486 = f_new_typ_154(((rt_int)13LL));
g_ty_act_487 = f_new_typ_154(((rt_int)14LL));
{ rt_frame xf1215;
if (RT_TRY(xf1215)) {
f_init_ascii_179();
f_read_source_43();
f_translate_415(f_program_133());
f_print_program_416();
RT_POP(xf1215);
} else {
RT_POP(xf1215);
int x1216 = rt_xcur;
if (0 || x1216 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x1216);
}
}
}
  rt_main_done();
  return 0;
}
