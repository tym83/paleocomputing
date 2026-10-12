#include "paleo.h"
#include <math.h>
typedef rstr *P428;
typedef struct R430 R430;
typedef struct R430 *P429;
struct R430 {  rt_int kind; rt_int line; rt_int ival; P428 s;  };
typedef struct A432 A432;
struct A432 { rt_int lo, hi, lo2, hi2; P429 *p; };
typedef A432 *P431;
typedef struct R434 R434;
typedef struct R434 *P433;
struct R434 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P428 name; P428 tag; P433 a; P433 b; P433 c; P433 d; P433 e; P433 next;  };
typedef struct R436 R436;
typedef struct R436 *P435;
struct R436 {  P428 lo; P428 hi; P428 lo2; P428 hi2; P428 slen; rt_int mlo; rt_int mhi; int hasm; P433 args;  };
typedef struct R438 R438;
typedef struct R438 *P437;
typedef struct R440 R440;
typedef struct R440 *P439;
struct R440 {  P428 name; P437 t; P435 c; P433 st; P439 next;  };
struct R438 {  rt_int kind; P428 name; P433 lits; P437 elem; P437 idx; P437 idx2; P435 elemcons; P433 elemst; P437 under; P433 tparams; P433 ocap; P439 fields; P437 target; P433 decl; P428 cname; int forward; int defined; int helpers; P437 next;  };
typedef struct R442 R442;
typedef struct R442 *P441;
struct R442 {  P428 name; rt_int mode; P437 t; P435 c; P428 cfield; P441 next;  };
typedef struct R444 R444;
typedef struct R444 *P443;
struct R444 {  rt_int kind; P428 name; P437 t; P435 c; P428 access; P428 cname; int ro_flag; rt_int mvalue; int hasmv; P433 st; P433 decl; P441 params; P437 result; rt_int depth; rt_int level; int byref; P443 members; P443 mnext; P433 binds; P443 insts; P443 chain; P443 stack;  };
typedef struct R446 R446;
typedef struct R446 *P445;
struct R446 {  P428 s; P445 next;  };
typedef struct R448 R448;
typedef struct R448 *P447;
struct R448 {  P445 head; P445 tail;  };
typedef struct A450 A450;
struct A450 { rt_int lo, hi, lo2, hi2; P443 *p; };
typedef A450 *P449;
typedef struct R452 R452;
typedef struct R452 *P451;
struct R452 {  P428 match; P428 label; rt_int depth; P451 next;  };
typedef struct R454 R454;
typedef struct R454 *P453;
struct R454 {  P433 d; P453 next;  };
typedef struct R456 R456;
typedef struct R456 *P455;
struct R456 {  P433 d; P428 w; P455 next;  };
typedef struct R458 R458;
typedef struct R458 *P457;
struct R458 {  rt_int depth; P433 imps; int all_imp; P457 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P428 result_;
 P428 t_503;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_506;
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
 rstr letters_507;
};
struct f_lower_s_15fr { int dummy;
 rstr *s_14;
 rstr result_;
 rstr letters_508;
 rstr r_509;
 rt_int i_510;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_514;
 rstr kw_515;
 rstr w_516;
 rt_int i_517;
};
struct f_q_18fr { int dummy;
 rstr result_;
};
struct f_new_name_20fr { int dummy;
 rstr *base_19;
 rstr result_;
};
struct f_fail_23fr { int dummy;
 rt_int line_21;
 rstr *msg_22;
};
struct f_new_buffer_24fr { int dummy;
 P447 result_;
 P447 b_521;
};
struct f_put_27fr { int dummy;
 P447 b_25;
 rstr *s_26;
 P445 l_523;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P447 b_30;
 P445 l_525;
};
struct f_splice_34fr { int dummy;
 P447 a_32;
 P447 b_33;
};
struct f_is_reserved_36fr { int dummy;
 rstr *w_35;
 int result_;
};
struct f_is_word_op_38fr { int dummy;
 rstr *w_37;
 int result_;
};
struct f_add_token_42fr { int dummy;
 rt_int kind_39;
 rstr *s_40;
 rt_int ival_41;
 P429 t_527;
};
struct f_lex_line_44fr { int dummy;
 rstr *line_43;
 rt_int i_529;
 rt_int j_530;
 rt_int n_531;
 int c_532;
 rstr w_533;
 rt_int k_534;
 rstr w_538;
 rt_int k_539;
 rstr two_543;
};
struct f_read_source_45fr { int dummy;
 rstr line_544;
};
struct f_nn_48fr { int dummy;
 rt_int kind_46;
 rt_int line_47;
 P433 result_;
 P433 x_545;
};
struct f_append_52fr { int dummy;
 P433 *head_49;
 P433 *tail_50;
 P433 x_51;
};
struct f_list_len_54fr { int dummy;
 P433 l_53;
 rt_int result_;
 rt_int n_547;
 P433 p_548;
};
struct f_cur_line_55fr { int dummy;
 rt_int result_;
};
struct f_at_kw_57fr { int dummy;
 rstr *w_56;
 int result_;
};
struct f_at_op_59fr { int dummy;
 rstr *w_58;
 int result_;
};
struct f_at_kind_61fr { int dummy;
 rt_int k_60;
 int result_;
};
struct f_kind_at_63fr { int dummy;
 rt_int k_62;
 rt_int result_;
};
struct f_text_at_65fr { int dummy;
 rt_int k_64;
 P428 result_;
};
struct f_perror_67fr { int dummy;
 rstr *msg_66;
};
struct f_accept_kw_69fr { int dummy;
 rstr *w_68;
 int result_;
};
struct f_accept_op_71fr { int dummy;
 rstr *w_70;
 int result_;
};
struct f_expect_kw_73fr { int dummy;
 rstr *w_72;
};
struct f_expect_op_75fr { int dummy;
 rstr *w_74;
};
struct f_expect_id_76fr { int dummy;
 P428 result_;
};
struct f_name_node_77fr { int dummy;
 P433 result_;
 P433 x_549;
};
struct f_id_list_78fr { int dummy;
 P433 result_;
 P433 head_550;
 P433 tail_551;
};
struct f_p_subtype_79fr { int dummy;
 P433 result_;
 rt_int line_552;
 P433 x_553;
 rstr w_554;
 P433 head_555;
 P433 tail_556;
 P433 head_557;
 P433 tail_558;
 int more_559;
 P433 names_560;
 P433 st_561;
 P433 cmp_562;
 P433 head_563;
 P433 tail_564;
 int more_565;
 P433 lit_566;
};
struct f_actual_params_80fr { int dummy;
 P433 result_;
 P433 head_567;
 P433 tail_568;
};
struct f_is_type_word_82fr { int dummy;
 rstr *w_81;
 int result_;
};
struct f_actual_tt_83fr { int dummy;
 P433 result_;
 P433 head_569;
 P433 tail_570;
 int more_571;
};
struct f_binop_88fr { int dummy;
 P428 op_84;
 P433 l_85;
 P433 r_86;
 rt_int line_87;
 P433 result_;
 P433 x_572;
};
struct f_expr_89fr { int dummy;
 P433 result_;
 P433 l_573;
 P428 op_574;
 rt_int line_575;
};
struct f_expr_and_90fr { int dummy;
 P433 result_;
 P433 l_576;
 rt_int line_577;
};
struct f_expr_not_91fr { int dummy;
 P433 result_;
 P433 x_578;
};
struct f_is_rel_93fr { int dummy;
 rstr *s_92;
 int result_;
};
struct f_expr_rel_94fr { int dummy;
 P433 result_;
 P433 l_579;
 P428 op_580;
 rt_int line_581;
};
struct f_expr_add_95fr { int dummy;
 P433 result_;
 P433 l_582;
 P428 op_583;
 rt_int line_584;
};
struct f_expr_mul_96fr { int dummy;
 P433 result_;
 P433 l_585;
 P428 op_586;
 rt_int line_587;
};
struct f_expr_pow_97fr { int dummy;
 P433 result_;
 P433 l_588;
 rt_int line_589;
};
struct f_expr_prefix_98fr { int dummy;
 P433 result_;
 P433 x_590;
};
struct f_postfix_99fr { int dummy;
 P433 result_;
 P433 p_591;
 rt_int line_592;
 P433 x_593;
 P433 head_594;
 P433 tail_595;
 int more_596;
 P433 lo_597;
 P433 r_598;
 P433 x_599;
 P433 x_600;
 P433 x_601;
};
struct f_primary_100fr { int dummy;
 P433 result_;
 rt_int line_602;
 P433 x_603;
 rt_int k_604;
 rstr w_605;
 P433 head_606;
 P433 tail_607;
 int more_608;
};
struct f_constructor_item_101fr { int dummy;
 P433 result_;
 rt_int line_609;
 P433 it_610;
 P433 first_611;
 P433 keys_612;
 P433 ktail_613;
 P433 lab_614;
 rt_int save_615;
 P433 more_616;
 P433 tail2_617;
 int ok_618;
 int go_619;
 P433 l2_620;
};
struct f_at_body_end_102fr { int dummy;
 int result_;
};
struct f_body_103fr { int dummy;
 P433 result_;
 P433 head_621;
 P433 tail_622;
};
struct f_body_element_104fr { int dummy;
 P433 result_;
 P433 x_623;
};
struct f_declaration_105fr { int dummy;
 P433 result_;
 rt_int line_624;
 P433 head_625;
 P433 tail_626;
 P433 names_627;
 P433 x_628;
};
struct f_object_decl_106fr { int dummy;
 P433 result_;
 rt_int line_629;
 int is_var_630;
 P433 names_631;
 P433 st_632;
 P433 init_633;
 P433 head_634;
 P433 tail_635;
 P433 x_636;
};
struct f_abbrev_decl_107fr { int dummy;
 P433 result_;
 P433 x_637;
};
struct f_skip_rep_108fr { int dummy;
 rt_int depth_638;
};
struct f_type_decl_109fr { int dummy;
 P433 result_;
 rt_int line_639;
 P428 name_640;
 P433 params_641;
 P433 x_642;
};
struct f_mode_of_111fr { int dummy;
 rstr *w_110;
 rt_int result_;
};
struct f_formal_params_112fr { int dummy;
 P433 result_;
 P433 head_643;
 P433 tail_644;
 int more_645;
 rt_int mode_646;
 P433 names_647;
 P433 ntail_648;
 P433 st_649;
 P433 p_650;
};
struct f_imports_list_114fr { int dummy;
 P433 owner_113;
 int result_;
 P433 head_651;
 P433 tail_652;
 int more_653;
 int ro_654;
 P433 x_655;
};
struct f_is_definable_116fr { int dummy;
 rstr *w_115;
 int result_;
};
struct f_definable_name_117fr { int dummy;
 P428 result_;
};
struct f_subprogram_decl_118fr { int dummy;
 P433 result_;
 rt_int line_656;
 P433 x_657;
 int is_abn_658;
 int is_func_659;
 int dummy_660;
};
struct f_capsule_decl_119fr { int dummy;
 P433 result_;
 P433 x_661;
 int dummy_662;
 P433 head_663;
 P433 tail_664;
 int more_665;
 P433 n_666;
};
struct f_formal_tt_120fr { int dummy;
 P433 result_;
 P433 head_667;
 P433 tail_668;
 int more_669;
};
struct f_generic_decl_121fr { int dummy;
 P433 result_;
 P433 x_670;
 P433 head_671;
 P433 tail_672;
 int more_673;
 P433 names_674;
 rt_int kind_675;
 P433 st_676;
 P433 p_677;
 P428 nm_678;
 P433 st_679;
};
struct f_task_decl_122fr { int dummy;
 P433 result_;
 P433 x_680;
 int dummy_681;
};
struct f_expose_decl_123fr { int dummy;
 P433 result_;
 P433 x_682;
 P433 head_683;
 P433 tail_684;
 int more_685;
 P433 n_686;
};
struct f_is_compound_kw_125fr { int dummy;
 rstr *w_124;
 int result_;
};
struct f_statement_126fr { int dummy;
 P433 result_;
 P433 labels_687;
 P433 ltail_688;
 P428 match_689;
 P433 s_690;
};
struct f_unlabeled_statement_127fr { int dummy;
 P433 result_;
 rt_int line_691;
 P433 x_692;
 P433 head_693;
 P433 tail_694;
 P433 invs_695;
 P433 itail_696;
 int more_697;
 P433 target_698;
};
struct f_arm_131fr { int dummy;
 P433 cond_128;
 P433 b_129;
 rt_int line_130;
 P433 result_;
 P433 x_699;
};
struct f_if_stmt_132fr { int dummy;
 P433 result_;
 P433 x_700;
 P433 head_701;
 P433 tail_702;
 P433 cond_703;
 int go_704;
};
struct f_case_stmt_133fr { int dummy;
 P433 result_;
 P433 x_705;
 P433 head_706;
 P433 tail_707;
 P433 labs_708;
 P433 ltail_709;
 int more_710;
 P433 l_711;
};
struct f_repeat_stmt_134fr { int dummy;
 P433 result_;
 P433 x_712;
};
struct f_guard_stmt_135fr { int dummy;
 P433 result_;
 P433 x_713;
 P433 head_714;
 P433 tail_715;
 P433 h_716;
};
struct f_program_136fr { int dummy;
 P433 result_;
 P433 head_717;
 P433 tail_718;
};
struct f_hash_138fr { int dummy;
 rstr *s_137;
 rt_int result_;
 rt_int h_719;
 rt_int i_720;
};
struct f_lookup_140fr { int dummy;
 rstr *name_139;
 P443 result_;
 P443 y_724;
};
struct f_lookup_decl_142fr { int dummy;
 P433 d_141;
 P443 result_;
 P443 y_725;
};
struct f_define_145fr { int dummy;
 P443 y_143;
 rt_int line_144;
 rt_int h_726;
 P443 z_727;
};
struct f_overloadable_147fr { int dummy;
 P443 y_146;
 int result_;
};
struct f_same_signature_150fr { int dummy;
 P441 a_148;
 P441 b_149;
 int result_;
 P441 x_728;
 P441 y_729;
};
struct f_open_scope_151fr { int dummy;
};
struct f_close_scope_152fr { int dummy;
};
struct f_new_sym_155fr { int dummy;
 rt_int kind_153;
 P428 name_154;
 P443 result_;
 P443 y_730;
};
struct f_new_typ_157fr { int dummy;
 rt_int kind_156;
 P437 result_;
 P437 t_732;
};
struct f_new_cons_158fr { int dummy;
 P435 result_;
 P435 c_734;
};
struct f_same_lits_161fr { int dummy;
 P433 a_159;
 P433 b_160;
 int result_;
 P433 x_736;
 P433 y_737;
};
struct f_same_164fr { int dummy;
 P437 a_162;
 P437 b_163;
 int result_;
 P439 f_738;
 P439 g_739;
};
struct f_base_of_166fr { int dummy;
 P437 t_165;
 P437 result_;
};
struct f_base_cons_169fr { int dummy;
 P437 t_167;
 P435 c_168;
 P435 result_;
};
struct f_kind_name_171fr { int dummy;
 P437 t_170;
 rstr result_;
};
struct f_check_type_175fr { int dummy;
 P437 got_172;
 P437 want_173;
 rt_int line_174;
};
struct f_ctype_177fr { int dummy;
 P437 t_176;
 rstr result_;
};
struct f_field_decls_179fr { int dummy;
 P437 t_178;
 rstr result_;
 P439 f_742;
 P428 s_743;
};
struct f_declare_ctype_181fr { int dummy;
 P437 t_180;
 P437 u_744;
 P437 target_745;
 P433 p_746;
 P428 fs_747;
};
struct f_init_ascii_182fr { int dummy;
 rstr names_748;
 P433 head_749;
 P433 tail_750;
 rt_int start_751;
 rt_int i_752;
 P433 lit_756;
};
struct f_lit_index_185fr { int dummy;
 P433 lits_183;
 rstr *name_184;
 rt_int result_;
 rt_int i_757;
 P433 l_758;
};
struct f_resolve_subtype_188fr { int dummy;
 P433 st_186;
 P435 *c_187;
 P437 result_;
 P437 t_759;
 int ok_760;
 P437 dummy_761;
 P435 ic_763;
 P435 ic2_764;
 P435 ec_765;
 P437 it_766;
 P437 et_767;
 P435 ec_768;
 P433 comp_769;
 P439 tail_770;
 P435 cc_771;
 P439 f_772;
 P435 ec_774;
 P443 y_775;
};
struct f_opened_190fr { int dummy;
 P437 t_189;
 int result_;
 P453 c_776;
};
struct f_replace_all_194fr { int dummy;
 rstr *s_191;
 rstr *pat_192;
 rstr *r_193;
 rstr result_;
 rt_int i_777;
};
struct f_subst_196fr { int dummy;
 rstr *s_195;
 rstr result_;
 P445 l_778;
 P428 r_779;
};
struct f_new_type_200fr { int dummy;
 P443 y_197;
 P433 st_198;
 P435 *c_199;
 P437 result_;
 P433 d_780;
 P433 p_781;
 P435 uc_782;
 P443 z_783;
};
struct f_init_storage_204fr { int dummy;
 rstr *lval_201;
 P437 t_202;
 P435 c_203;
 P433 p_784;
 P433 a_785;
 P435 uc_786;
 P437 ut_787;
 P437 at_788;
 rstr v_789;
 P445 saved_790;
 P445 l1_791;
 P445 l2_792;
 rstr i_795;
 P439 f_796;
};
struct f_manifest_207fr { int dummy;
 P433 e_205;
 int *ok_206;
 rt_int result_;
 rt_int a_797;
 rt_int b_798;
 int ok2_799;
 P443 y_800;
};
struct f_mcopy_209fr { int dummy;
 P437 t_208;
 rstr result_;
 rstr ct_801;
 rstr name_802;
 P445 l_803;
};
struct f_composite_211fr { int dummy;
 P437 t_210;
 int result_;
};
struct f_assign_code_216fr { int dummy;
 rstr *lval_212;
 P437 t_213;
 rstr *v_214;
 P435 c_215;
 rstr result_;
};
struct f_copy_code_219fr { int dummy;
 P437 t_217;
 rstr *v_218;
 rstr result_;
};
struct f_eq_code_223fr { int dummy;
 P437 t_220;
 rstr *a_221;
 rstr *b_222;
 rstr result_;
};
struct f_elem_assign_227fr { int dummy;
 rstr *lval_224;
 P437 t_225;
 rstr *v_226;
 rstr result_;
};
struct f_seen_name_230fr { int dummy;
 P445 l_228;
 rstr *s_229;
 int result_;
 P445 p_805;
};
struct f_emit_helpers_231fr { int dummy;
 P437 order_806;
 P437 t_807;
 P445 done_808;
 P445 l_809;
 rstr c_810;
};
struct f_helper_bodies_233fr { int dummy;
 P437 t_232;
 rstr c_812;
 P447 b_813;
 P437 e_814;
 P433 p_815;
 P428 pc_816;
 P439 f_817;
 P428 conds_818;
 rstr fn_819;
 rstr fn_820;
};
struct f_declare_body_235fr { int dummy;
 P433 elems_234;
 P433 e_821;
 P443 y_822;
 P443 y_823;
 P443 y_824;
 P437 t_825;
 P443 y_826;
 P443 g_827;
};
struct f_manifest_const_237fr { int dummy;
 P433 d_236;
 int ok_828;
 rt_int v_829;
 P443 y_830;
 P435 c_831;
};
struct f_exported_241fr { int dummy;
 P433 d_238;
 rstr *name_239;
 int *ro_240;
 int result_;
 P433 p_832;
};
struct f_copy_sym_243fr { int dummy;
 P443 y_242;
 P443 result_;
 P443 z_833;
};
struct f_gen_capsule_245fr { int dummy;
 P433 d_244;
 P443 y_835;
 P453 cr_836;
 P457 ctx_837;
 P443 m_838;
 P433 p_839;
 int ro_840;
 P455 w_843;
 P443 z_845;
};
struct f_gen_expose_247fr { int dummy;
 P433 d_246;
 P443 y_846;
 P443 m_847;
 P433 p_848;
 int found_849;
 P443 z_850;
};
struct f_finish_ptr_249fr { int dummy;
 P437 t_248;
 P433 d_851;
 P433 p_852;
 P435 c_853;
 rstr dummy_854;
 P443 y_855;
};
struct f_declare_subprogram_251fr { int dummy;
 P433 d_250;
};
struct f_build_subprogram_253fr { int dummy;
 P433 d_252;
 P443 result_;
 P443 y_856;
 P433 p_857;
 P441 tail_858;
 P441 pm_859;
 P435 rc_861;
};
struct f_element_255fr { int dummy;
 P433 e_254;
 rt_int k_862;
 P437 t_863;
 rstr c_864;
};
struct f_storage_258fr { int dummy;
 rstr *name_256;
 P437 t_257;
 rstr result_;
 rstr g_865;
 rstr f_866;
};
struct f_bind_261fr { int dummy;
 P443 y_259;
 rstr *access_260;
};
struct f_var_decl_263fr { int dummy;
 P433 d_262;
 P435 c_867;
 P437 t_868;
 P443 y_869;
 rstr access_870;
 P437 vt_871;
 rstr v_872;
};
struct f_const_decl_265fr { int dummy;
 P433 d_264;
 P435 c_873;
 P437 t_874;
 P437 vt_875;
 P443 y_876;
 int ok_877;
 rstr v_878;
 rstr access_879;
};
struct f_subprogram_267fr { int dummy;
 P433 d_266;
};
struct f_gen_subprogram_270fr { int dummy;
 P433 d_268;
 P443 y_269;
 P447 saved_code_880;
 P447 saved_fields_881;
 int saved_in_882;
 P443 saved_sym_883;
 P451 saved_exits_884;
 rt_int saved_frames_885;
 P428 args_886;
 P441 pm_887;
 P445 saved_handlers_888;
 P445 saved_cleanups_889;
 P457 ctx_890;
 P428 head_891;
 P428 frame_892;
 P428 parent_893;
 rstr ct_895;
 rstr f_896;
 P443 p_897;
};
struct f_waits_of_272fr { int dummy;
 P433 d_271;
 rstr result_;
 P455 w_898;
};
struct f_task_waits_274fr { int dummy;
 P433 elems_273;
 rstr result_;
 P433 e_899;
 P428 r_900;
};
struct f_await_tasks_276fr { int dummy;
 P433 elems_275;
 rstr w_901;
};
struct f_capsule_elements_278fr { int dummy;
 P433 elems_277;
 P433 e_902;
};
struct f_body_elements_280fr { int dummy;
 P433 elems_279;
};
struct f_gen_body_282fr { int dummy;
 P433 elems_281;
};
struct f_pop_frames_284fr { int dummy;
 rt_int upto_283;
 rt_int i_903;
 P445 c_904;
};
struct f_push_cleanup_286fr { int dummy;
 rstr *s_285;
 P445 c_905;
};
struct f_pop_cleanup_287fr { int dummy;
};
struct f_gen_statement_289fr { int dummy;
 P433 s_288;
 P428 label_907;
 P451 x_908;
};
struct f_st_assign_291fr { int dummy;
 P433 s_290;
 P428 lv_911;
 P437 t_912;
 P437 vt_913;
 P435 c_914;
 int ro_915;
 rstr lo_916;
 rstr hi_917;
 rstr v_918;
 rstr v_919;
};
struct f_st_call_293fr { int dummy;
 P433 s_292;
 P433 c_920;
 P437 t_921;
 P433 x_922;
};
struct f_st_if_295fr { int dummy;
 P433 s_294;
 P433 a_923;
 int first_924;
 P437 t_925;
 rstr c_926;
};
struct f_st_case_297fr { int dummy;
 P433 s_296;
 P437 st_927;
 P437 vt_928;
 int first_929;
 P433 a_930;
 rstr sel_931;
 rstr tmp_932;
 P433 lab_933;
 P428 conds_934;
 rstr v_935;
 rstr lo_936;
 rstr hi_937;
};
struct f_st_repeat_299fr { int dummy;
 P433 s_298;
 P437 t_938;
 P435 c_939;
 rstr cond_940;
 rstr access_941;
 rstr lov_942;
 rstr hiv_943;
 rstr it_944;
 P443 y_945;
};
struct f_st_exit_301fr { int dummy;
 P433 s_300;
 P451 x_946;
};
struct f_st_return_303fr { int dummy;
 P433 s_302;
 P437 vt_947;
 rstr v_948;
};
struct f_exc_id_306fr { int dummy;
 rstr *name_304;
 rt_int line_305;
 rstr result_;
 P443 y_949;
};
struct f_st_guard_308fr { int dummy;
 P433 s_307;
 P433 h_950;
 int first_951;
 P445 hv_952;
 rstr f_953;
 rstr x_954;
 P433 n_956;
 P428 conds_957;
};
struct f_st_alloc_310fr { int dummy;
 P433 s_309;
 P428 lv_958;
 P437 t_959;
 P437 target_960;
 P437 vt_961;
 P435 c_962;
 P435 tc_963;
 int ro_964;
 P433 d_965;
 P433 p_966;
 P433 a_967;
 rstr tcn_968;
 rstr cell_969;
 rstr v_970;
 rstr pv_971;
 P443 y_972;
 rstr v_973;
};
struct f_act_ref_312fr { int dummy;
 P433 e_311;
 rstr result_;
 P428 lv_974;
 P437 t_975;
 P435 c_976;
 int ro_977;
};
struct f_st_create_314fr { int dummy;
 P433 s_313;
 P443 y_978;
 P441 pm_979;
 P433 a_980;
 P428 lv_981;
 P437 lt_982;
 P437 vt_983;
 P435 lc_984;
 int ro_985;
 rstr nf_986;
 rstr act_987;
 P428 link_988;
 rt_int i_989;
 rstr v_993;
};
struct f_wait_alt_318fr { int dummy;
 P433 inv_315;
 rstr *arr_316;
 rt_int i_317;
 rstr result_;
 P428 lv_994;
 P437 t_995;
 P437 vt_996;
 P435 c_997;
 int ro_998;
 P433 fn_999;
 P433 args_1000;
 rstr slot_1001;
 P428 dv_1002;
 P437 dt_1003;
 rstr tmp_1004;
 rstr v_1005;
 rstr v_1006;
};
struct f_st_wait_320fr { int dummy;
 P433 s_319;
 P433 a_1007;
 rt_int n_1008;
 int first_1009;
 P447 inits_1010;
 rstr arr_1011;
 rstr w_1012;
 P433 inv_1013;
 P428 conds_1014;
 rt_int i_1015;
};
struct f_st_region_322fr { int dummy;
 P433 s_321;
 P428 lv_1019;
 P437 t_1020;
 P435 c_1021;
 int ro_1022;
 rstr lk_1023;
 rstr f_1024;
};
struct f_gparam_325fr { int dummy;
 P433 g_323;
 rstr *name_324;
 P433 result_;
 P433 p_1025;
};
struct f_bind_sym_327fr { int dummy;
 P433 p_326;
 P443 result_;
 P443 y_1026;
};
struct f_same_binds_330fr { int dummy;
 P443 a_328;
 P443 b_329;
 int result_;
 P443 x_1027;
 P443 y_1028;
};
struct f_same_binding_333fr { int dummy;
 P443 a_331;
 P443 b_332;
 int result_;
};
struct f_instantiate_338fr { int dummy;
 P443 g_334;
 P433 tt_335;
 P433 args_336;
 rt_int line_337;
 P443 result_;
 P433 gd_1029;
 P433 pat_1030;
 P443 binds_1031;
 P433 f_1032;
 P433 a_1033;
 P433 fp_1034;
 P443 inst_1035;
 P437 at_1036;
 P435 c_1037;
 P457 saved_fctx_1038;
 int saved_in_1039;
 rt_int saved_level_1040;
 P443 saved_sym_1041;
 P447 saved_code_1042;
 P433 p_1043;
 P443 b_1044;
 P433 st_1045;
 int ok_1046;
 int known_1047;
 P443 q_1048;
 P443 b_1049;
 rstr v_1050;
 P443 b_1051;
};
struct f_access_of_340fr { int dummy;
 P443 y_339;
 rstr result_;
 P428 p_1052;
 rt_int i_1053;
};
struct f_import_of_343fr { int dummy;
 P433 l_341;
 rstr *name_342;
 P433 result_;
 P433 p_1057;
};
struct f_check_import_346fr { int dummy;
 P443 y_344;
 rt_int line_345;
 int result_;
 P457 c_1058;
 int ro_1059;
 P433 imp_1060;
};
struct f_c_ident_348fr { int dummy;
 rstr *s_347;
 rstr result_;
};
struct f_deref_351fr { int dummy;
 rstr *base_349;
 P437 t_350;
 rstr result_;
};
struct f_is_lvalue_353fr { int dummy;
 P433 e_352;
 int result_;
 P443 y_1061;
};
struct f_lvalue_359fr { int dummy;
 P433 e_354;
 P428 *code_355;
 P437 *t_356;
 P435 *c_357;
 int *ro_358;
 P428 base_1062;
 P437 bt_1063;
 P435 bc_1064;
 P443 y_1065;
};
struct f_select_on_367fr { int dummy;
 rstr *base_360;
 P437 bt_361;
 P433 e_362;
 int *ro_363;
 P428 *code_364;
 P437 *t_365;
 P435 *c_366;
 P433 p_1066;
 P439 f_1067;
};
struct f_index_on_376fr { int dummy;
 rstr *base_368;
 P437 bt_369;
 P433 e_370;
 int *ro_371;
 int lv_372;
 P428 *code_373;
 P437 *t_374;
 P435 *c_375;
 P433 a_1068;
 P437 it_1069;
 rstr i_1070;
 rstr j_1071;
 rstr lo_1072;
 rstr hi_1073;
 rstr i_1074;
 rstr i_1075;
};
struct f_gexpr_380fr { int dummy;
 P433 e_377;
 P437 want_378;
 P437 *t_379;
 rstr result_;
 rt_int k_1076;
 P428 code_1077;
 P435 c_1078;
 int ro_1079;
 P437 bt_1080;
 rt_int i_1081;
 P443 y_1082;
 int ro_1083;
 P433 call_1084;
 P433 fname_1085;
 rstr a_1086;
 rstr a_1087;
 rstr a_1088;
 P433 nm_1089;
 P443 y_1090;
 rstr base_1091;
 rstr base_1092;
};
struct f_copy_node_382fr { int dummy;
 P433 e_381;
 P433 result_;
 P433 x_1093;
};
struct f_wrap_apply_384fr { int dummy;
 P433 e_383;
 P433 result_;
 P433 x_1095;
};
struct f_c_string_386fr { int dummy;
 rstr *s_385;
 rstr result_;
 rt_int n_1096;
 rt_int i_1097;
 rstr r_1101;
 rt_int j_1102;
 rt_int i_1103;
};
struct f_enum_type_of_389fr { int dummy;
 rstr *lit_387;
 rt_int line_388;
 P437 result_;
 P443 y_1107;
 P435 c_1108;
 P433 st_1109;
};
struct f_attribute_392fr { int dummy;
 P433 e_390;
 P437 *t_391;
 rstr result_;
 P437 bt_1110;
 P435 c_1111;
 P428 base_1112;
 P443 y_1113;
 P433 st_1114;
};
struct f_gbinop_396fr { int dummy;
 P433 e_393;
 P437 want_394;
 P437 *t_395;
 rstr result_;
 P428 op_1115;
 P437 ta_1116;
 P437 tb_1117;
 P437 hint_1118;
 P443 uy_1119;
 P433 l_1120;
 P433 r_1121;
 P433 call_1122;
 P433 fname_1123;
 rstr s_1124;
 rstr a_1125;
 rstr a_1126;
 rstr b_1127;
 rstr a_1128;
 rstr b_1129;
 P437 wa_1130;
 P437 wb_1131;
 rstr a_1132;
 rstr b_1133;
 rstr dummy_1134;
 rstr a_1135;
 rstr b_1136;
 P437 ct_1137;
 rstr a_1138;
 rstr b_1139;
};
struct f_constructor_400fr { int dummy;
 P433 e_397;
 P437 want_398;
 P437 *t_399;
 rstr result_;
 P433 it_1140;
 P439 f_1141;
 P437 vt_1142;
 P428 s_1143;
 rstr v_1144;
 rstr tmp_1145;
 rstr ct_1146;
 rstr et_1147;
 P428 parts_1148;
 rstr lo_1149;
 rstr hi_1150;
 rstr v_1151;
 rt_int i_1152;
 rstr v_1156;
 rstr tmp_1157;
 P428 parts_1158;
 rstr v_1159;
};
struct f_fits_403fr { int dummy;
 P443 y_401;
 P433 args_402;
 int result_;
 P433 a_1160;
 P441 pm_1161;
 P437 t_1162;
 P447 saved_1163;
 int ok_1164;
 P428 lv_1165;
 P435 lc_1166;
 int ro_1167;
 rstr v_1170;
};
struct f_resolve_overload_408fr { int dummy;
 rstr *name_404;
 P433 args_405;
 int is_stmt_406;
 rt_int line_407;
 P443 result_;
 P443 y_1171;
 P443 first_1172;
 rt_int n_1173;
};
struct f_is_builtin_410fr { int dummy;
 rstr *n_409;
 int result_;
};
struct f_user_op_413fr { int dummy;
 rstr *op_411;
 P433 args_412;
 P443 result_;
 P443 y_1174;
};
struct f_gcall_417fr { int dummy;
 P433 e_414;
 int is_stmt_415;
 P437 *t_416;
 rstr result_;
 P433 fn_1175;
 P433 tt_1176;
 P443 y_1177;
 P428 args_1178;
 P433 a_1179;
 P441 pm_1180;
 P437 lt_1181;
 P437 vt_1182;
 P428 lv_1183;
 P435 lc_1184;
 int ro_1185;
 rt_int i_1186;
 rstr v_1190;
 rstr ct_1191;
 rstr v_1192;
};
struct f_builtin_424fr { int dummy;
 rstr *name_418;
 P433 tt_419;
 P433 args_420;
 rt_int line_421;
 int is_stmt_422;
 P437 *t_423;
 rstr result_;
 P437 at_1193;
 rt_int n_1194;
 rstr a_1195;
 rstr a_1196;
 rstr a_1197;
 rstr a_1198;
 rstr a_1199;
 rstr n1_1200;
 rstr m1_1201;
 rstr a_1202;
 rstr a_1203;
 P433 last_1204;
 rstr a_1205;
 rstr a_1206;
 P428 lv_1207;
 P435 lc_1208;
 int ro_1209;
 P433 last_1210;
 P428 lv_1211;
 P428 dv_1212;
 P435 lc_1213;
 int ro_1214;
 P437 mt_1215;
 P437 dt_1216;
 rstr v_1217;
 P428 lv_1218;
 P435 lc_1219;
 int ro_1220;
 P437 mt_1221;
 P428 lv_1222;
 P428 dv_1223;
 P428 bv_1224;
 P435 lc_1225;
 int ro_1226;
 P437 mt_1227;
 P437 dt_1228;
 P437 bt_1229;
 rstr v_1230;
 rstr v_1231;
 rstr v_1232;
 rstr v_1233;
 rstr a_1234;
};
struct f_translate_426fr { int dummy;
 P433 units_425;
 P433 u_1235;
 P433 l_1237;
 rstr w_1238;
};
struct f_print_program_427fr { int dummy;
};
static void as_R458(R458 *d, R458 s);
static R458 cp_R458(R458 s);
static int eq_R458(R458 a, R458 b);
static void as_R456(R456 *d, R456 s);
static R456 cp_R456(R456 s);
static int eq_R456(R456 a, R456 b);
static void as_R454(R454 *d, R454 s);
static R454 cp_R454(R454 s);
static int eq_R454(R454 a, R454 b);
static void as_R452(R452 *d, R452 s);
static R452 cp_R452(R452 s);
static int eq_R452(R452 a, R452 b);
static void as_A450(A450 *d, A450 s);
static A450 cp_A450(A450 s);
static int eq_A450(A450 a, A450 b);
static void as_R448(R448 *d, R448 s);
static R448 cp_R448(R448 s);
static int eq_R448(R448 a, R448 b);
static void as_R446(R446 *d, R446 s);
static R446 cp_R446(R446 s);
static int eq_R446(R446 a, R446 b);
static void as_R444(R444 *d, R444 s);
static R444 cp_R444(R444 s);
static int eq_R444(R444 a, R444 b);
static void as_R442(R442 *d, R442 s);
static R442 cp_R442(R442 s);
static int eq_R442(R442 a, R442 b);
static void as_R440(R440 *d, R440 s);
static R440 cp_R440(R440 s);
static int eq_R440(R440 a, R440 b);
static void as_R438(R438 *d, R438 s);
static R438 cp_R438(R438 s);
static int eq_R438(R438 a, R438 b);
static void as_R436(R436 *d, R436 s);
static R436 cp_R436(R436 s);
static int eq_R436(R436 a, R436 b);
static void as_R434(R434 *d, R434 s);
static R434 cp_R434(R434 s);
static int eq_R434(R434 a, R434 b);
static void as_A432(A432 *d, A432 s);
static A432 cp_A432(A432 s);
static int eq_A432(A432 a, A432 b);
static void as_R430(R430 *d, R430 s);
static R430 cp_R430(R430 s);
static int eq_R430(R430 a, R430 b);
static P428 f_mk_3(rstr *s_2);
static rstr f_chs_5(int c_4);
static rstr f_itos_7(rt_int n_6);
static int f_is_letter_9(int c_8);
static int f_is_digit_11(int c_10);
static int f_upper_13(int c_12);
static rstr f_lower_s_15(rstr *s_14);
static rstr f_field_c_17(rstr *s_16);
static rstr f_q_18(void);
static rstr f_new_name_20(rstr *base_19);
static void f_fail_23(rt_int line_21, rstr *msg_22);
static P447 f_new_buffer_24(void);
static void f_put_27(P447 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P447 b_30);
static void f_splice_34(P447 a_32, P447 b_33);
static int f_is_reserved_36(rstr *w_35);
static int f_is_word_op_38(rstr *w_37);
static void f_add_token_42(rt_int kind_39, rstr *s_40, rt_int ival_41);
static void f_lex_line_44(rstr *line_43);
static void f_read_source_45(void);
static P433 f_nn_48(rt_int kind_46, rt_int line_47);
static void f_append_52(P433 *head_49, P433 *tail_50, P433 x_51);
static rt_int f_list_len_54(P433 l_53);
static rt_int f_cur_line_55(void);
static int f_at_kw_57(rstr *w_56);
static int f_at_op_59(rstr *w_58);
static int f_at_kind_61(rt_int k_60);
static rt_int f_kind_at_63(rt_int k_62);
static P428 f_text_at_65(rt_int k_64);
static void f_perror_67(rstr *msg_66);
static int f_accept_kw_69(rstr *w_68);
static int f_accept_op_71(rstr *w_70);
static void f_expect_kw_73(rstr *w_72);
static void f_expect_op_75(rstr *w_74);
static P428 f_expect_id_76(void);
static P433 f_name_node_77(void);
static P433 f_id_list_78(void);
static P433 f_p_subtype_79(void);
static P433 f_actual_params_80(void);
static int f_is_type_word_82(rstr *w_81);
static P433 f_actual_tt_83(void);
static P433 f_binop_88(P428 op_84, P433 l_85, P433 r_86, rt_int line_87);
static P433 f_expr_89(void);
static P433 f_expr_and_90(void);
static P433 f_expr_not_91(void);
static int f_is_rel_93(rstr *s_92);
static P433 f_expr_rel_94(void);
static P433 f_expr_add_95(void);
static P433 f_expr_mul_96(void);
static P433 f_expr_pow_97(void);
static P433 f_expr_prefix_98(void);
static P433 f_postfix_99(void);
static P433 f_primary_100(void);
static P433 f_constructor_item_101(void);
static int f_at_body_end_102(void);
static P433 f_body_103(void);
static P433 f_body_element_104(void);
static P433 f_declaration_105(void);
static P433 f_object_decl_106(void);
static P433 f_abbrev_decl_107(void);
static void f_skip_rep_108(void);
static P433 f_type_decl_109(void);
static rt_int f_mode_of_111(rstr *w_110);
static P433 f_formal_params_112(void);
static int f_imports_list_114(P433 owner_113);
static int f_is_definable_116(rstr *w_115);
static P428 f_definable_name_117(void);
static P433 f_subprogram_decl_118(void);
static P433 f_capsule_decl_119(void);
static P433 f_formal_tt_120(void);
static P433 f_generic_decl_121(void);
static P433 f_task_decl_122(void);
static P433 f_expose_decl_123(void);
static int f_is_compound_kw_125(rstr *w_124);
static P433 f_statement_126(void);
static P433 f_unlabeled_statement_127(void);
static P433 f_arm_131(P433 cond_128, P433 b_129, rt_int line_130);
static P433 f_if_stmt_132(void);
static P433 f_case_stmt_133(void);
static P433 f_repeat_stmt_134(void);
static P433 f_guard_stmt_135(void);
static P433 f_program_136(void);
static rt_int f_hash_138(rstr *s_137);
static P443 f_lookup_140(rstr *name_139);
static P443 f_lookup_decl_142(P433 d_141);
static void f_define_145(P443 y_143, rt_int line_144);
static int f_overloadable_147(P443 y_146);
static int f_same_signature_150(P441 a_148, P441 b_149);
static void f_open_scope_151(void);
static void f_close_scope_152(void);
static P443 f_new_sym_155(rt_int kind_153, P428 name_154);
static P437 f_new_typ_157(rt_int kind_156);
static P435 f_new_cons_158(void);
static int f_same_lits_161(P433 a_159, P433 b_160);
static int f_same_164(P437 a_162, P437 b_163);
static P437 f_base_of_166(P437 t_165);
static P435 f_base_cons_169(P437 t_167, P435 c_168);
static rstr f_kind_name_171(P437 t_170);
static void f_check_type_175(P437 got_172, P437 want_173, rt_int line_174);
static rstr f_ctype_177(P437 t_176);
static rstr f_field_decls_179(P437 t_178);
static void f_declare_ctype_181(P437 t_180);
static void f_init_ascii_182(void);
static rt_int f_lit_index_185(P433 lits_183, rstr *name_184);
static P437 f_resolve_subtype_188(P433 st_186, P435 *c_187);
static int f_opened_190(P437 t_189);
static rstr f_replace_all_194(rstr *s_191, rstr *pat_192, rstr *r_193);
static rstr f_subst_196(rstr *s_195);
static P437 f_new_type_200(P443 y_197, P433 st_198, P435 *c_199);
static void f_init_storage_204(rstr *lval_201, P437 t_202, P435 c_203);
static rt_int f_manifest_207(P433 e_205, int *ok_206);
static rstr f_mcopy_209(P437 t_208);
static int f_composite_211(P437 t_210);
static rstr f_assign_code_216(rstr *lval_212, P437 t_213, rstr *v_214, P435 c_215);
static rstr f_copy_code_219(P437 t_217, rstr *v_218);
static rstr f_eq_code_223(P437 t_220, rstr *a_221, rstr *b_222);
static rstr f_elem_assign_227(rstr *lval_224, P437 t_225, rstr *v_226);
static int f_seen_name_230(P445 l_228, rstr *s_229);
static void f_emit_helpers_231(void);
static void f_helper_bodies_233(P437 t_232);
static void f_declare_body_235(P433 elems_234);
static void f_manifest_const_237(P433 d_236);
static int f_exported_241(P433 d_238, rstr *name_239, int *ro_240);
static P443 f_copy_sym_243(P443 y_242);
static void f_gen_capsule_245(P433 d_244);
static void f_gen_expose_247(P433 d_246);
static void f_finish_ptr_249(P437 t_248);
static void f_declare_subprogram_251(P433 d_250);
static P443 f_build_subprogram_253(P433 d_252);
static void f_element_255(P433 e_254);
static rstr f_storage_258(rstr *name_256, P437 t_257);
static void f_bind_261(P443 y_259, rstr *access_260);
static void f_var_decl_263(P433 d_262);
static void f_const_decl_265(P433 d_264);
static void f_subprogram_267(P433 d_266);
static void f_gen_subprogram_270(P433 d_268, P443 y_269);
static rstr f_waits_of_272(P433 d_271);
static rstr f_task_waits_274(P433 elems_273);
static void f_await_tasks_276(P433 elems_275);
static void f_capsule_elements_278(P433 elems_277);
static void f_body_elements_280(P433 elems_279);
static void f_gen_body_282(P433 elems_281);
static void f_pop_frames_284(rt_int upto_283);
static void f_push_cleanup_286(rstr *s_285);
static void f_pop_cleanup_287(void);
static void f_gen_statement_289(P433 s_288);
static void f_st_assign_291(P433 s_290);
static void f_st_call_293(P433 s_292);
static void f_st_if_295(P433 s_294);
static void f_st_case_297(P433 s_296);
static void f_st_repeat_299(P433 s_298);
static void f_st_exit_301(P433 s_300);
static void f_st_return_303(P433 s_302);
static rstr f_exc_id_306(rstr *name_304, rt_int line_305);
static void f_st_guard_308(P433 s_307);
static void f_st_alloc_310(P433 s_309);
static rstr f_act_ref_312(P433 e_311);
static void f_st_create_314(P433 s_313);
static rstr f_wait_alt_318(P433 inv_315, rstr *arr_316, rt_int i_317);
static void f_st_wait_320(P433 s_319);
static void f_st_region_322(P433 s_321);
static P433 f_gparam_325(P433 g_323, rstr *name_324);
static P443 f_bind_sym_327(P433 p_326);
static int f_same_binds_330(P443 a_328, P443 b_329);
static int f_same_binding_333(P443 a_331, P443 b_332);
static P443 f_instantiate_338(P443 g_334, P433 tt_335, P433 args_336, rt_int line_337);
static rstr f_access_of_340(P443 y_339);
static P433 f_import_of_343(P433 l_341, rstr *name_342);
static int f_check_import_346(P443 y_344, rt_int line_345);
static rstr f_c_ident_348(rstr *s_347);
static rstr f_deref_351(rstr *base_349, P437 t_350);
static int f_is_lvalue_353(P433 e_352);
static void f_lvalue_359(P433 e_354, P428 *code_355, P437 *t_356, P435 *c_357, int *ro_358);
static void f_select_on_367(rstr *base_360, P437 bt_361, P433 e_362, int *ro_363, P428 *code_364, P437 *t_365, P435 *c_366);
static void f_index_on_376(rstr *base_368, P437 bt_369, P433 e_370, int *ro_371, int lv_372, P428 *code_373, P437 *t_374, P435 *c_375);
static rstr f_gexpr_380(P433 e_377, P437 want_378, P437 *t_379);
static P433 f_copy_node_382(P433 e_381);
static P433 f_wrap_apply_384(P433 e_383);
static rstr f_c_string_386(rstr *s_385);
static P437 f_enum_type_of_389(rstr *lit_387, rt_int line_388);
static rstr f_attribute_392(P433 e_390, P437 *t_391);
static rstr f_gbinop_396(P433 e_393, P437 want_394, P437 *t_395);
static rstr f_constructor_400(P433 e_397, P437 want_398, P437 *t_399);
static int f_fits_403(P443 y_401, P433 args_402);
static P443 f_resolve_overload_408(rstr *name_404, P433 args_405, int is_stmt_406, rt_int line_407);
static int f_is_builtin_410(rstr *n_409);
static P443 f_user_op_413(rstr *op_411, P433 args_412);
static rstr f_gcall_417(P433 e_414, int is_stmt_415, P437 *t_416);
static rstr f_builtin_424(rstr *name_418, P433 tt_419, P433 args_420, rt_int line_421, int is_stmt_422, P437 *t_423);
static void f_translate_426(P433 units_425);
static void f_print_program_427(void);
static int ex_compile_error_1;
static P431 g_toks_459;
static rt_int g_ntoks_460;
static rt_int g_tpos_461;
static rt_int g_src_line_462;
static P449 g_table_463;
static rt_int g_depth_464;
static P443 g_scope_stack_465;
static P437 g_all_types_466;
static rt_int g_serial_467;
static P447 g_out_types_468;
static P447 g_out_helpers_469;
static P447 g_out_protos_470;
static P447 g_out_globals_471;
static P447 g_out_funcs_472;
static P447 g_out_init_473;
static P447 g_out_excs_474;
static P447 g_code_475;
static P447 g_fields_buf_476;
static int g_in_func_477;
static rt_int g_cur_level_478;
static P457 g_fctx_479;
static P453 g_caps_480;
static P455 g_cap_waits_481;
static P445 g_psub_482;
static P428 g_st_field_483;
static P447 g_out_frames_484;
static P443 g_func_sym_485;
static P451 g_exits_486;
static rt_int g_frames_487;
static P445 g_handlers_488;
static P445 g_cleanups_489;
static rt_int g_trial_490;
static P445 g_mcopies_491;
static P437 g_ty_int_492;
static P437 g_ty_bool_493;
static P437 g_ty_float_494;
static P437 g_ty_ascii_495;
static P437 g_ty_string_496;
static P437 g_ty_void_497;
static P437 g_ty_file_498;
static P437 g_ty_nil_499;
static P437 g_ty_lock_500;
static P437 g_ty_act_501;
static P435 g_no_cons_502;
static P428 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
F->s_2 = s_2;
F->t_503 = NULL;
{ rstr *cell504 = rt_alloc(sizeof(rstr));
rt_int pv505 = ((*F->s_2)).len;
(*cell504) = rt_str_new(pv505);
rt_str_assign(&(*cell504), (*F->s_2));
F->t_503 = cell504;
}
F->result_ = F->t_503;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_chs_5(int c_4) {
  struct f_chs_5fr *F = rt_alloc(sizeof *F);
F->c_4 = c_4;
F->r_506 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_506, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_506;
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
F->letters_507 = rt_str_copy(rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
if (((97 <= F->c_12) && (F->c_12 <= 122))) {
F->result_ = rt_str_get(F->letters_507, rt_add(rt_sub(((rt_int)(F->c_12) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
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
F->letters_508 = rt_str_copy(rt_str("abcdefghijklmnopqrstuvwxyz", 26));
F->r_509 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_509, (*F->s_14));
{ rt_int lo511 = ((rt_int)1LL), hi512 = ((*F->s_14)).len;
for (rt_int it513 = lo511; it513 <= hi512; it513++) {
F->i_510 = it513;
if (((65 <= rt_str_get(F->r_509, F->i_510)) && (rt_str_get(F->r_509, F->i_510) <= 90))) {
(*rt_str_at(&F->r_509, F->i_510)) = rt_str_get(F->letters_508, rt_add(rt_sub(((rt_int)(rt_str_get(F->r_509, F->i_510)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_509;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_c_17(rstr *s_16) {
  struct f_field_c_17fr *F = rt_alloc(sizeof *F);
F->s_16 = s_16;
F->l_514 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->kw_515 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)));
F->w_516 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_514), rt_str(" ", 1)));
{ rt_int lo518 = ((rt_int)1LL), hi519 = rt_add(rt_sub((F->kw_515).len, (F->w_516).len), ((rt_int)1LL));
for (rt_int it520 = lo518; it520 <= hi519; it520++) {
F->i_517 = it520;
if (rt_str_eq(rt_str_slice(F->kw_515, F->i_517, rt_sub(rt_add(F->i_517, (F->w_516).len), ((rt_int)1LL))), F->w_516)) {
F->result_ = rt_str_cat(F->l_514, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_514;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_q_18(void) {
  struct f_q_18fr *F = rt_alloc(sizeof *F);
F->result_ = f_chs_5(34);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_new_name_20(rstr *base_19) {
  struct f_new_name_20fr *F = rt_alloc(sizeof *F);
F->base_19 = base_19;
g_serial_467 = rt_add(g_serial_467, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_467));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_fail_23(rt_int line_21, rstr *msg_22) {
  struct f_fail_23fr *F = rt_alloc(sizeof *F);
F->line_21 = line_21;
F->msg_22 = msg_22;
if ((g_trial_490 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  return;
}

static P447 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
F->b_521 = NULL;
{ R448 *cell522 = rt_alloc(sizeof(R448));
(*cell522).head = NULL;
(*cell522).tail = NULL;
F->b_521 = cell522;
}
F->result_ = F->b_521;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_put_27(P447 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_523 = NULL;
{ R446 *cell524 = rt_alloc(sizeof(R446));
(*cell524).s = NULL;
(*cell524).next = NULL;
F->l_523 = cell524;
}
(*(P445)rt_nil_check(F->l_523)).s = f_mk_3(&(*F->s_26));
if (((*(P447)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P447)rt_nil_check(F->b_25)).head = F->l_523;
} else {
(*(P445)rt_nil_check((*(P447)rt_nil_check(F->b_25)).tail)).next = F->l_523;
}
(*(P447)rt_nil_check(F->b_25)).tail = F->l_523;
ret_:
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
F->s_28 = s_28;
f_put_27(g_code_475, &(*F->s_28));
ret_:
  return;
}

static void f_print_buffer_31(P447 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
F->b_30 = b_30;
F->l_525 = NULL;
F->l_525 = (*(P447)rt_nil_check(F->b_30)).head;
while ((F->l_525 != NULL)) {
rt_putln((*(P428)rt_nil_check((*(P445)rt_nil_check(F->l_525)).s)));
F->l_525 = (*(P445)rt_nil_check(F->l_525)).next;
}
ret_:
  return;
}

static void f_splice_34(P447 a_32, P447 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P447)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P447)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P447)rt_nil_check(F->a_32)).head = (*(P447)rt_nil_check(F->b_33)).head;
} else {
(*(P445)rt_nil_check((*(P447)rt_nil_check(F->a_32)).tail)).next = (*(P447)rt_nil_check(F->b_33)).head;
}
(*(P447)rt_nil_check(F->a_32)).tail = (*(P447)rt_nil_check(F->b_33)).tail;
(*(P447)rt_nil_check(F->b_33)).head = NULL;
(*(P447)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
F->w_35 = w_35;
{ rstr sel526 = (*F->w_35);
if (0 || rt_str_eq(sel526, rt_str("ABBREV", 6)) || rt_str_eq(sel526, rt_str("ABNORMAL", 8)) || rt_str_eq(sel526, rt_str("ALL", 3)) || rt_str_eq(sel526, rt_str("ALLOC", 5)) || rt_str_eq(sel526, rt_str("ASSERT", 6)) || rt_str_eq(sel526, rt_str("BEGIN", 5)) || rt_str_eq(sel526, rt_str("BY", 2)) || rt_str_eq(sel526, rt_str("CAPSULE", 7)) || rt_str_eq(sel526, rt_str("CASE", 4)) || rt_str_eq(sel526, rt_str("CONST", 5)) || rt_str_eq(sel526, rt_str("CREATE", 6)) || rt_str_eq(sel526, rt_str("DO", 2)) || rt_str_eq(sel526, rt_str("ELSE", 4)) || rt_str_eq(sel526, rt_str("ELSEIF", 6)) || rt_str_eq(sel526, rt_str("END", 3)) || rt_str_eq(sel526, rt_str("EXCEPTION", 9)) || rt_str_eq(sel526, rt_str("EXIT", 4)) || rt_str_eq(sel526, rt_str("EXPORTS", 7)) || rt_str_eq(sel526, rt_str("EXPOSE", 6)) || rt_str_eq(sel526, rt_str("EXTERNAL", 8)) || rt_str_eq(sel526, rt_str("FOR", 3)) || rt_str_eq(sel526, rt_str("FROM", 4)) || rt_str_eq(sel526, rt_str("FUNC", 4)) || rt_str_eq(sel526, rt_str("GENERIC", 7)) || rt_str_eq(sel526, rt_str("GOTO", 4)) || rt_str_eq(sel526, rt_str("GUARD", 5)) || rt_str_eq(sel526, rt_str("IF", 2)) || rt_str_eq(sel526, rt_str("IMPORTS", 7)) || rt_str_eq(sel526, rt_str("LOCATION", 8)) || rt_str_eq(sel526, rt_str("NAMED", 5)) || rt_str_eq(sel526, rt_str("NEEDS", 5)) || rt_str_eq(sel526, rt_str("NEW", 3)) || rt_str_eq(sel526, rt_str("NONE", 4)) || rt_str_eq(sel526, rt_str("OUT", 3)) || rt_str_eq(sel526, rt_str("OF", 2)) || rt_str_eq(sel526, rt_str("PRAG", 4)) || rt_str_eq(sel526, rt_str("PROC", 4)) || rt_str_eq(sel526, rt_str("RAISE", 5)) || rt_str_eq(sel526, rt_str("READONLY", 8)) || rt_str_eq(sel526, rt_str("REVERSE", 7)) || rt_str_eq(sel526, rt_str("REGION", 6)) || rt_str_eq(sel526, rt_str("RENAMING", 8)) || rt_str_eq(sel526, rt_str("REP", 3)) || rt_str_eq(sel526, rt_str("REPEAT", 6)) || rt_str_eq(sel526, rt_str("RERAISE", 7)) || rt_str_eq(sel526, rt_str("RETURN", 6)) || rt_str_eq(sel526, rt_str("SUBTYPE", 7)) || rt_str_eq(sel526, rt_str("TASK", 4)) || rt_str_eq(sel526, rt_str("THEN", 4)) || rt_str_eq(sel526, rt_str("TO", 2)) || rt_str_eq(sel526, rt_str("TYPE", 4)) || rt_str_eq(sel526, rt_str("VAR", 3)) || rt_str_eq(sel526, rt_str("WAIT", 4)) || rt_str_eq(sel526, rt_str("WHEN", 4)) || rt_str_eq(sel526, rt_str("WHILE", 5))) {
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

static int f_is_word_op_38(rstr *w_37) {
  struct f_is_word_op_38fr *F = rt_alloc(sizeof *F);
F->w_37 = w_37;
F->result_ = ((((((rt_str_eq((*F->w_37), rt_str("DIV", 3)) || rt_str_eq((*F->w_37), rt_str("MOD", 3))) || rt_str_eq((*F->w_37), rt_str("IN", 2))) || rt_str_eq((*F->w_37), rt_str("OR", 2))) || rt_str_eq((*F->w_37), rt_str("XOR", 3))) || rt_str_eq((*F->w_37), rt_str("AND", 3))) || rt_str_eq((*F->w_37), rt_str("NOT", 3)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_add_token_42(rt_int kind_39, rstr *s_40, rt_int ival_41) {
  struct f_add_token_42fr *F = rt_alloc(sizeof *F);
F->kind_39 = kind_39;
F->s_40 = s_40;
F->ival_41 = ival_41;
F->t_527 = NULL;
{ R430 *cell528 = rt_alloc(sizeof(R430));
(*cell528).s = NULL;
F->t_527 = cell528;
}
(*(P429)rt_nil_check(F->t_527)).kind = F->kind_39;
(*(P429)rt_nil_check(F->t_527)).line = g_src_line_462;
(*(P429)rt_nil_check(F->t_527)).ival = F->ival_41;
(*(P429)rt_nil_check(F->t_527)).s = f_mk_3(&(*F->s_40));
g_ntoks_460 = rt_add(g_ntoks_460, ((rt_int)1LL));
(*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_ntoks_460, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo] = F->t_527;
ret_:
  return;
}

static void f_lex_line_44(rstr *line_43) {
  struct f_lex_line_44fr *F = rt_alloc(sizeof *F);
F->line_43 = line_43;
F->i_529 = ((rt_int)1LL);
F->j_530 = ((rt_int)0LL);
F->n_531 = ((*F->line_43)).len;
while ((F->i_529 <= F->n_531)) {
F->c_532 = rt_str_get((*F->line_43), F->i_529);
if (((((F->c_532 == 32) || (F->c_532 == 9)) || (F->c_532 == 13)) || (F->c_532 == 12))) {
F->i_529 = rt_add(F->i_529, ((rt_int)1LL));
} else if ((F->c_532 == 37)) {
F->i_529 = rt_add(F->n_531, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_532)) {
F->j_530 = F->i_529;
while (((F->j_530 <= F->n_531) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_530)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_530))) || (rt_str_get((*F->line_43), F->j_530) == 95)))) {
F->j_530 = rt_add(F->j_530, ((rt_int)1LL));
}
{
F->w_533 = rt_str_new(rt_sub(F->j_530, F->i_529));
rt_str_assign(&F->w_533, rt_str_slice((*F->line_43), F->i_529, rt_sub(F->j_530, ((rt_int)1LL))));
{ rt_int lo535 = ((rt_int)1LL), hi536 = (F->w_533).len;
for (rt_int it537 = lo535; it537 <= hi536; it537++) {
F->k_534 = it537;
(*rt_str_at(&F->w_533, F->k_534)) = f_upper_13(rt_str_get(F->w_533, F->k_534));
}
}
if (rt_str_eq(F->w_533, rt_str("PRAGMAT", 7))) {
while (((F->j_530 <= F->n_531) && (rt_str_get((*F->line_43), F->j_530) != 59))) {
F->j_530 = rt_add(F->j_530, ((rt_int)1LL));
}
F->j_530 = rt_add(F->j_530, ((rt_int)1LL));
} else if (f_is_reserved_36(&F->w_533)) {
f_add_token_42(((rt_int)2LL), &F->w_533, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_533)) {
f_add_token_42(((rt_int)3LL), &F->w_533, ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)1LL), &F->w_533, ((rt_int)0LL));
}
}
F->i_529 = F->j_530;
} else if (f_is_digit_11(F->c_532)) {
F->j_530 = F->i_529;
while (((F->j_530 <= F->n_531) && f_is_digit_11(rt_str_get((*F->line_43), F->j_530)))) {
F->j_530 = rt_add(F->j_530, ((rt_int)1LL));
}
if ((((F->j_530 < F->n_531) && (rt_str_get((*F->line_43), F->j_530) == 46)) && f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_530, ((rt_int)1LL)))))) {
F->j_530 = rt_add(F->j_530, ((rt_int)1LL));
while (((F->j_530 <= F->n_531) && f_is_digit_11(rt_str_get((*F->line_43), F->j_530)))) {
F->j_530 = rt_add(F->j_530, ((rt_int)1LL));
}
if (((F->j_530 <= F->n_531) && ((rt_str_get((*F->line_43), F->j_530) == 69) || (rt_str_get((*F->line_43), F->j_530) == 101)))) {
F->j_530 = rt_add(F->j_530, ((rt_int)1LL));
if (((F->j_530 <= F->n_531) && ((rt_str_get((*F->line_43), F->j_530) == 43) || (rt_str_get((*F->line_43), F->j_530) == 45)))) {
F->j_530 = rt_add(F->j_530, ((rt_int)1LL));
}
while (((F->j_530 <= F->n_531) && f_is_digit_11(rt_str_get((*F->line_43), F->j_530)))) {
F->j_530 = rt_add(F->j_530, ((rt_int)1LL));
}
}
f_add_token_42(((rt_int)5LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_529, rt_sub(F->j_530, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)4LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_529, rt_sub(F->j_530, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_43), F->i_529, rt_sub(F->j_530, ((rt_int)1LL)))));
}
F->i_529 = F->j_530;
} else if ((F->c_532 == 39)) {
F->j_530 = rt_add(F->i_529, ((rt_int)1LL));
if (((F->j_530 > F->n_531) || (!f_is_letter_9(rt_str_get((*F->line_43), F->j_530))))) {
f_fail_23(g_src_line_462, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_530 <= F->n_531) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_530)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_530))) || (rt_str_get((*F->line_43), F->j_530) == 95)))) {
F->j_530 = rt_add(F->j_530, ((rt_int)1LL));
}
{
F->w_538 = rt_str_new(rt_sub(rt_sub(F->j_530, F->i_529), ((rt_int)1LL)));
rt_str_assign(&F->w_538, rt_str_slice((*F->line_43), rt_add(F->i_529, ((rt_int)1LL)), rt_sub(F->j_530, ((rt_int)1LL))));
{ rt_int lo540 = ((rt_int)1LL), hi541 = (F->w_538).len;
for (rt_int it542 = lo540; it542 <= hi541; it542++) {
F->k_539 = it542;
(*rt_str_at(&F->w_538, F->k_539)) = f_upper_13(rt_str_get(F->w_538, F->k_539));
}
}
f_add_token_42(((rt_int)6LL), &F->w_538, ((rt_int)0LL));
}
F->i_529 = F->j_530;
} else if ((F->c_532 == 34)) {
F->j_530 = rt_add(F->i_529, ((rt_int)1LL));
while (((F->j_530 <= F->n_531) && (rt_str_get((*F->line_43), F->j_530) != 34))) {
F->j_530 = rt_add(F->j_530, ((rt_int)1LL));
}
if ((F->j_530 > F->n_531)) {
f_fail_23(g_src_line_462, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42(((rt_int)7LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), rt_add(F->i_529, ((rt_int)1LL)), rt_sub(F->j_530, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_529 = rt_add(F->j_530, ((rt_int)1LL));
} else {
{
F->two_543 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_543, rt_str("  ", 2));
(*rt_str_at(&F->two_543, ((rt_int)1LL))) = F->c_532;
if ((F->i_529 < F->n_531)) {
(*rt_str_at(&F->two_543, ((rt_int)2LL))) = rt_str_get((*F->line_43), rt_add(F->i_529, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_543, rt_str(":=", 2)) || rt_str_eq(F->two_543, rt_str("=>", 2))) || rt_str_eq(F->two_543, rt_str("..", 2))) || rt_str_eq(F->two_543, rt_str("**", 2))) || rt_str_eq(F->two_543, rt_str("/=", 2))) || rt_str_eq(F->two_543, rt_str("<=", 2))) || rt_str_eq(F->two_543, rt_str(">=", 2)))) {
f_add_token_42(((rt_int)3LL), &F->two_543, ((rt_int)0LL));
F->i_529 = rt_add(F->i_529, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_532 == 40) || (F->c_532 == 41)) || (F->c_532 == 91)) || (F->c_532 == 93)) || (F->c_532 == 44)) || (F->c_532 == 58)) || (F->c_532 == 59)) || (F->c_532 == 46)) || (F->c_532 == 35)) || (F->c_532 == 43)) || (F->c_532 == 45)) || (F->c_532 == 42)) || (F->c_532 == 47)) || (F->c_532 == 38)) || (F->c_532 == 61)) || (F->c_532 == 60)) || (F->c_532 == 62))) {
f_add_token_42(((rt_int)3LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_532); b_; }), ((rt_int)0LL));
F->i_529 = rt_add(F->i_529, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_462, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
}
}
}
}
ret_:
  return;
}

static void f_read_source_45(void) {
  struct f_read_source_45fr *F = rt_alloc(sizeof *F);
while ((!rt_eof())) {
F->line_544 = rt_str_new(rt_sizeln());
rt_readln(&F->line_544);
g_src_line_462 = rt_add(g_src_line_462, ((rt_int)1LL));
f_lex_line_44(&F->line_544);
}
f_add_token_42(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  return;
}

static P433 f_nn_48(rt_int kind_46, rt_int line_47) {
  struct f_nn_48fr *F = rt_alloc(sizeof *F);
F->kind_46 = kind_46;
F->line_47 = line_47;
F->x_545 = NULL;
{ R434 *cell546 = rt_alloc(sizeof(R434));
(*cell546).name = NULL;
(*cell546).tag = NULL;
(*cell546).a = NULL;
(*cell546).b = NULL;
(*cell546).c = NULL;
(*cell546).d = NULL;
(*cell546).e = NULL;
(*cell546).next = NULL;
F->x_545 = cell546;
}
(*(P433)rt_nil_check(F->x_545)).kind = F->kind_46;
(*(P433)rt_nil_check(F->x_545)).line = F->line_47;
F->result_ = F->x_545;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_append_52(P433 *head_49, P433 *tail_50, P433 x_51) {
  struct f_append_52fr *F = rt_alloc(sizeof *F);
F->head_49 = head_49;
F->tail_50 = tail_50;
F->x_51 = x_51;
if (((*F->head_49) == NULL)) {
(*F->head_49) = F->x_51;
} else {
(*(P433)rt_nil_check((*F->tail_50))).next = F->x_51;
}
(*F->tail_50) = F->x_51;
while (((*(P433)rt_nil_check((*F->tail_50))).next != NULL)) {
(*F->tail_50) = (*(P433)rt_nil_check((*F->tail_50))).next;
}
ret_:
  return;
}

static rt_int f_list_len_54(P433 l_53) {
  struct f_list_len_54fr *F = rt_alloc(sizeof *F);
F->l_53 = l_53;
F->n_547 = ((rt_int)0LL);
F->p_548 = NULL;
F->p_548 = F->l_53;
while ((F->p_548 != NULL)) {
F->n_547 = rt_add(F->n_547, ((rt_int)1LL));
F->p_548 = (*(P433)rt_nil_check(F->p_548)).next;
}
F->result_ = F->n_547;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_cur_line_55(void) {
  struct f_cur_line_55fr *F = rt_alloc(sizeof *F);
F->result_ = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kw_57(rstr *w_56) {
  struct f_at_kw_57fr *F = rt_alloc(sizeof *F);
F->w_56 = w_56;
F->result_ = (((*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).kind == ((rt_int)2LL)) && rt_str_eq((*(P428)rt_nil_check((*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s)), (*F->w_56)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_op_59(rstr *w_58) {
  struct f_at_op_59fr *F = rt_alloc(sizeof *F);
F->w_58 = w_58;
F->result_ = (((*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).kind == ((rt_int)3LL)) && rt_str_eq((*(P428)rt_nil_check((*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s)), (*F->w_58)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kind_61(rt_int k_60) {
  struct f_at_kind_61fr *F = rt_alloc(sizeof *F);
F->k_60 = k_60;
F->result_ = ((*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).kind == F->k_60);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_kind_at_63(rt_int k_62) {
  struct f_kind_at_63fr *F = rt_alloc(sizeof *F);
F->k_62 = k_62;
if ((rt_add(g_tpos_461, F->k_62) > g_ntoks_460)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(rt_add(g_tpos_461, F->k_62), (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P428 f_text_at_65(rt_int k_64) {
  struct f_text_at_65fr *F = rt_alloc(sizeof *F);
F->k_64 = k_64;
if ((rt_add(g_tpos_461, F->k_64) > g_ntoks_460)) {
F->result_ = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_ntoks_460, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s;
goto ret_;
}
F->result_ = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(rt_add(g_tpos_461, F->k_64), (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_perror_67(rstr *msg_66) {
  struct f_perror_67fr *F = rt_alloc(sizeof *F);
F->msg_66 = msg_66;
f_fail_23((*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_66), rt_str(" (at ", 5)), (*(P428)rt_nil_check((*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  return;
}

static int f_accept_kw_69(rstr *w_68) {
  struct f_accept_kw_69fr *F = rt_alloc(sizeof *F);
F->w_68 = w_68;
if (f_at_kw_57(&(*F->w_68))) {
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_accept_op_71(rstr *w_70) {
  struct f_accept_op_71fr *F = rt_alloc(sizeof *F);
F->w_70 = w_70;
if (f_at_op_59(&(*F->w_70))) {
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_expect_kw_73(rstr *w_72) {
  struct f_expect_kw_73fr *F = rt_alloc(sizeof *F);
F->w_72 = w_72;
if ((!f_at_kw_57(&(*F->w_72)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_72)); b_; }));
}
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_op_75(rstr *w_74) {
  struct f_expect_op_75fr *F = rt_alloc(sizeof *F);
F->w_74 = w_74;
if ((!f_at_op_59(&(*F->w_74)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_74)); b_; }));
}
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
ret_:
  return;
}

static P428 f_expect_id_76(void) {
  struct f_expect_id_76fr *F = rt_alloc(sizeof *F);
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->result_ = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(rt_sub(g_tpos_461, ((rt_int)1LL)), (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_name_node_77(void) {
  struct f_name_node_77fr *F = rt_alloc(sizeof *F);
F->x_549 = NULL;
F->x_549 = f_nn_48(((rt_int)7LL), f_cur_line_55());
(*(P433)rt_nil_check(F->x_549)).name = f_expect_id_76();
F->result_ = F->x_549;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_id_list_78(void) {
  struct f_id_list_78fr *F = rt_alloc(sizeof *F);
F->head_550 = NULL;
F->tail_551 = NULL;
f_append_52(&F->head_550, &F->tail_551, f_name_node_77());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_550, &F->tail_551, f_name_node_77());
}
F->result_ = F->head_550;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_p_subtype_79(void) {
  struct f_p_subtype_79fr *F = rt_alloc(sizeof *F);
F->line_552 = f_cur_line_55();
F->x_553 = NULL;
if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->x_553 = f_nn_48(((rt_int)81LL), F->line_552);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P433)rt_nil_check(F->x_553)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_553;
goto ret_;
}
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_554 = rt_str_copy((*(P428)rt_nil_check((*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s)));
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
if (rt_str_eq(F->w_554, rt_str("ARRAY", 5))) {
F->x_553 = f_nn_48(((rt_int)74LL), F->line_552);
{
F->head_555 = NULL;
F->tail_556 = NULL;
f_append_52(&F->head_555, &F->tail_556, f_p_subtype_79());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_555, &F->tail_556, f_p_subtype_79());
}
(*(P433)rt_nil_check(F->x_553)).a = F->head_555;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P433)rt_nil_check(F->x_553)).b = f_p_subtype_79();
} else if ((rt_str_eq(F->w_554, rt_str("RECORD", 6)) || rt_str_eq(F->w_554, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_554, rt_str("RECORD", 6))) {
F->x_553 = f_nn_48(((rt_int)75LL), F->line_552);
} else {
F->x_553 = f_nn_48(((rt_int)76LL), F->line_552);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_557 = NULL;
F->tail_558 = NULL;
F->more_559 = 1;
while (F->more_559) {
F->names_560 = NULL;
F->names_560 = f_id_list_78();
F->st_561 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_561 = f_p_subtype_79();
while ((F->names_560 != NULL)) {
F->cmp_562 = NULL;
F->cmp_562 = f_nn_48(((rt_int)63LL), (*(P433)rt_nil_check(F->names_560)).line);
(*(P433)rt_nil_check(F->cmp_562)).name = (*(P433)rt_nil_check(F->names_560)).name;
(*(P433)rt_nil_check(F->cmp_562)).a = F->st_561;
f_append_52(&F->head_557, &F->tail_558, F->cmp_562);
F->names_560 = (*(P433)rt_nil_check(F->names_560)).next;
}
F->more_559 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P433)rt_nil_check(F->x_553)).a = F->head_557;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_554, rt_str("UNION", 5)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_553)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_554, rt_str("ENUM", 4))) {
F->x_553 = f_nn_48(((rt_int)72LL), F->line_552);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_563 = NULL;
F->tail_564 = NULL;
F->more_565 = 1;
while (F->more_565) {
F->lit_566 = NULL;
F->lit_566 = f_nn_48(((rt_int)4LL), F->line_552);
if ((!f_at_kind_61(((rt_int)6LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P433)rt_nil_check(F->lit_566)).name = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s;
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
f_append_52(&F->head_563, &F->tail_564, F->lit_566);
F->more_565 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P433)rt_nil_check(F->x_553)).a = F->head_563;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_553)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P433)rt_nil_check(F->x_553)).c = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_554, rt_str("STRING", 6)) || rt_str_eq(F->w_554, rt_str("SET", 3))) || rt_str_eq(F->w_554, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_554, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_554, rt_str("STRING", 6))) {
F->x_553 = f_nn_48(((rt_int)73LL), F->line_552);
} else if (rt_str_eq(F->w_554, rt_str("SET", 3))) {
F->x_553 = f_nn_48(((rt_int)77LL), F->line_552);
} else if (rt_str_eq(F->w_554, rt_str("MAILBOX", 7))) {
F->x_553 = f_nn_48(((rt_int)78LL), F->line_552);
} else {
F->x_553 = f_nn_48(((rt_int)79LL), F->line_552);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P433)rt_nil_check(F->x_553)).a = f_p_subtype_79();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P433)rt_nil_check(F->x_553)).b = f_actual_params_80();
}
} else if (rt_str_eq(F->w_554, rt_str("INT", 3))) {
F->x_553 = f_nn_48(((rt_int)70LL), F->line_552);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_553)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P433)rt_nil_check(F->x_553)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_554, rt_str("FLOAT", 5))) {
F->x_553 = f_nn_48(((rt_int)71LL), F->line_552);
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P433)rt_nil_check(F->x_553)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P433)rt_nil_check(F->x_553)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P433)rt_nil_check(F->x_553)).c = f_expr_89();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_553 = f_nn_48(((rt_int)80LL), F->line_552);
(*(P433)rt_nil_check(F->x_553)).name = f_mk_3(&F->w_554);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P433)rt_nil_check(F->x_553)).a = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P433)rt_nil_check(F->x_553)).b = f_actual_params_80();
(*(P433)rt_nil_check(F->x_553)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_553;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_actual_params_80(void) {
  struct f_actual_params_80fr *F = rt_alloc(sizeof *F);
F->head_567 = NULL;
F->tail_568 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_52(&F->head_567, &F->tail_568, f_expr_89());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_567, &F->tail_568, f_expr_89());
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_567;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_type_word_82(rstr *w_81) {
  struct f_is_type_word_82fr *F = rt_alloc(sizeof *F);
F->w_81 = w_81;
F->result_ = ((((((((((((((rt_str_eq((*F->w_81), rt_str("INT", 3)) || rt_str_eq((*F->w_81), rt_str("BOOL", 4))) || rt_str_eq((*F->w_81), rt_str("FLOAT", 5))) || rt_str_eq((*F->w_81), rt_str("ENUM", 4))) || rt_str_eq((*F->w_81), rt_str("RECORD", 6))) || rt_str_eq((*F->w_81), rt_str("UNION", 5))) || rt_str_eq((*F->w_81), rt_str("ARRAY", 5))) || rt_str_eq((*F->w_81), rt_str("STRING", 6))) || rt_str_eq((*F->w_81), rt_str("SET", 3))) || rt_str_eq((*F->w_81), rt_str("MAILBOX", 7))) || rt_str_eq((*F->w_81), rt_str("FILE", 4))) || rt_str_eq((*F->w_81), rt_str("ASCII", 5))) || rt_str_eq((*F->w_81), rt_str("ACT", 3))) || rt_str_eq((*F->w_81), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->w_81), rt_str("LATCH", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_actual_tt_83(void) {
  struct f_actual_tt_83fr *F = rt_alloc(sizeof *F);
F->head_569 = NULL;
F->tail_570 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_571 = 1;
while (F->more_571) {
if ((f_at_kind_61(((rt_int)1LL)) && f_is_type_word_82(&(*(P428)rt_nil_check((*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s))))) {
f_append_52(&F->head_569, &F->tail_570, f_p_subtype_79());
} else {
f_append_52(&F->head_569, &F->tail_570, f_expr_89());
}
F->more_571 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_569;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_binop_88(P428 op_84, P433 l_85, P433 r_86, rt_int line_87) {
  struct f_binop_88fr *F = rt_alloc(sizeof *F);
F->op_84 = op_84;
F->l_85 = l_85;
F->r_86 = r_86;
F->line_87 = line_87;
F->x_572 = NULL;
F->x_572 = f_nn_48(((rt_int)9LL), F->line_87);
(*(P433)rt_nil_check(F->x_572)).name = F->op_84;
(*(P433)rt_nil_check(F->x_572)).a = F->l_85;
(*(P433)rt_nil_check(F->x_572)).b = F->r_86;
F->result_ = F->x_572;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_expr_89(void) {
  struct f_expr_89fr *F = rt_alloc(sizeof *F);
F->l_573 = NULL;
F->l_573 = f_expr_and_90();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_574 = NULL;
F->op_574 = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s;
F->line_575 = f_cur_line_55();
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->l_573 = f_binop_88(F->op_574, F->l_573, f_expr_and_90(), F->line_575);
}
F->result_ = F->l_573;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_expr_and_90(void) {
  struct f_expr_and_90fr *F = rt_alloc(sizeof *F);
F->l_576 = NULL;
F->l_576 = f_expr_not_91();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_577 = f_cur_line_55();
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->l_576 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_576, f_expr_not_91(), F->line_577);
}
F->result_ = F->l_576;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_expr_not_91(void) {
  struct f_expr_not_91fr *F = rt_alloc(sizeof *F);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_578 = NULL;
F->x_578 = f_nn_48(((rt_int)8LL), f_cur_line_55());
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_578)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P433)rt_nil_check(F->x_578)).a = f_expr_not_91();
F->result_ = F->x_578;
goto ret_;
}
F->result_ = f_expr_rel_94();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_rel_93(rstr *s_92) {
  struct f_is_rel_93fr *F = rt_alloc(sizeof *F);
F->s_92 = s_92;
F->result_ = ((((((rt_str_eq((*F->s_92), rt_str("=", 1)) || rt_str_eq((*F->s_92), rt_str("/=", 2))) || rt_str_eq((*F->s_92), rt_str("<", 1))) || rt_str_eq((*F->s_92), rt_str("<=", 2))) || rt_str_eq((*F->s_92), rt_str(">", 1))) || rt_str_eq((*F->s_92), rt_str(">=", 2))) || rt_str_eq((*F->s_92), rt_str("IN", 2)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_expr_rel_94(void) {
  struct f_expr_rel_94fr *F = rt_alloc(sizeof *F);
F->l_579 = NULL;
F->l_579 = f_expr_add_95();
if ((f_at_kind_61(((rt_int)3LL)) && f_is_rel_93(&(*(P428)rt_nil_check((*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s))))) {
F->op_580 = NULL;
F->op_580 = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s;
F->line_581 = f_cur_line_55();
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->l_579 = f_binop_88(F->op_580, F->l_579, f_expr_add_95(), F->line_581);
}
F->result_ = F->l_579;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_expr_add_95(void) {
  struct f_expr_add_95fr *F = rt_alloc(sizeof *F);
F->l_582 = NULL;
F->l_582 = f_expr_mul_96();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_583 = NULL;
F->op_583 = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s;
F->line_584 = f_cur_line_55();
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->l_582 = f_binop_88(F->op_583, F->l_582, f_expr_mul_96(), F->line_584);
}
F->result_ = F->l_582;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_expr_mul_96(void) {
  struct f_expr_mul_96fr *F = rt_alloc(sizeof *F);
F->l_585 = NULL;
F->l_585 = f_expr_pow_97();
while (((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_586 = NULL;
F->op_586 = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s;
F->line_587 = f_cur_line_55();
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->l_585 = f_binop_88(F->op_586, F->l_585, f_expr_pow_97(), F->line_587);
}
F->result_ = F->l_585;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_expr_pow_97(void) {
  struct f_expr_pow_97fr *F = rt_alloc(sizeof *F);
F->l_588 = NULL;
F->l_588 = f_expr_prefix_98();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_589 = f_cur_line_55();
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->l_588 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_588, f_expr_prefix_98(), F->line_589);
}
F->result_ = F->l_588;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_expr_prefix_98(void) {
  struct f_expr_prefix_98fr *F = rt_alloc(sizeof *F);
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_590 = NULL;
F->x_590 = f_nn_48(((rt_int)8LL), f_cur_line_55());
(*(P433)rt_nil_check(F->x_590)).name = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s;
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_590)).a = f_expr_prefix_98();
F->result_ = F->x_590;
goto ret_;
}
F->result_ = f_postfix_99();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_postfix_99(void) {
  struct f_postfix_99fr *F = rt_alloc(sizeof *F);
F->p_591 = NULL;
F->p_591 = f_primary_100();
while (1) {
F->line_592 = f_cur_line_55();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_593 = NULL;
F->x_593 = f_nn_48(((rt_int)10LL), F->line_592);
F->head_594 = NULL;
F->tail_595 = NULL;
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_596 = 1;
while (F->more_596) {
F->lo_597 = NULL;
F->lo_597 = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_598 = NULL;
F->r_598 = f_nn_48(((rt_int)16LL), F->line_592);
(*(P433)rt_nil_check(F->r_598)).a = F->lo_597;
(*(P433)rt_nil_check(F->r_598)).b = f_expr_89();
f_append_52(&F->head_594, &F->tail_595, F->r_598);
} else {
f_append_52(&F->head_594, &F->tail_595, F->lo_597);
}
F->more_596 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P433)rt_nil_check(F->x_593)).a = F->p_591;
(*(P433)rt_nil_check(F->x_593)).b = F->head_594;
F->p_591 = F->x_593;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL)) || (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))))) {
F->x_599 = NULL;
F->x_599 = f_nn_48(((rt_int)11LL), F->line_592);
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_599)).a = F->p_591;
(*(P433)rt_nil_check(F->x_599)).name = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s;
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->p_591 = F->x_599;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P433)rt_nil_check(F->p_591)).kind == ((rt_int)7LL)))) {
F->x_600 = NULL;
F->x_600 = f_nn_48(((rt_int)12LL), F->line_592);
(*(P433)rt_nil_check(F->x_600)).a = F->p_591;
(*(P433)rt_nil_check(F->x_600)).b = f_actual_tt_83();
F->p_591 = F->x_600;
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_601 = NULL;
F->x_601 = f_nn_48(((rt_int)13LL), F->line_592);
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_601)).a = F->p_591;
(*(P433)rt_nil_check(F->x_601)).b = f_p_subtype_79();
F->p_591 = F->x_601;
} else {
F->result_ = F->p_591;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_primary_100(void) {
  struct f_primary_100fr *F = rt_alloc(sizeof *F);
F->line_602 = f_cur_line_55();
F->x_603 = NULL;
F->k_604 = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).kind;
if ((F->k_604 == ((rt_int)4LL))) {
F->x_603 = f_nn_48(((rt_int)1LL), F->line_602);
(*(P433)rt_nil_check(F->x_603)).ival = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).ival;
(*(P433)rt_nil_check(F->x_603)).name = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s;
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->result_ = F->x_603;
goto ret_;
}
if ((((F->k_604 == ((rt_int)5LL)) || (F->k_604 == ((rt_int)7LL))) || (F->k_604 == ((rt_int)6LL)))) {
if ((F->k_604 == ((rt_int)5LL))) {
F->x_603 = f_nn_48(((rt_int)2LL), F->line_602);
} else if ((F->k_604 == ((rt_int)7LL))) {
F->x_603 = f_nn_48(((rt_int)3LL), F->line_602);
} else {
F->x_603 = f_nn_48(((rt_int)4LL), F->line_602);
}
(*(P433)rt_nil_check(F->x_603)).name = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s;
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->result_ = F->x_603;
goto ret_;
}
if ((F->k_604 == ((rt_int)1LL))) {
F->w_605 = rt_str_copy((*(P428)rt_nil_check((*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s)));
if ((rt_str_eq(F->w_605, rt_str("TRUE", 4)) || rt_str_eq(F->w_605, rt_str("FALSE", 5)))) {
F->x_603 = f_nn_48(((rt_int)5LL), F->line_602);
if (rt_str_eq(F->w_605, rt_str("TRUE", 4))) {
(*(P433)rt_nil_check(F->x_603)).ival = ((rt_int)1LL);
}
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->result_ = F->x_603;
goto ret_;
}
if (rt_str_eq(F->w_605, rt_str("NIL", 3))) {
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)6LL), F->line_602);
goto ret_;
}
F->result_ = f_name_node_77();
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_603 = f_nn_48(((rt_int)17LL), F->line_602);
(*(P433)rt_nil_check(F->x_603)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_603;
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_606 = NULL;
F->tail_607 = NULL;
F->x_603 = f_nn_48(((rt_int)14LL), F->line_602);
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_608 = 1;
while (F->more_608) {
f_append_52(&F->head_606, &F->tail_607, f_constructor_item_101());
F->more_608 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P433)rt_nil_check(F->x_603)).a = F->head_606;
F->result_ = F->x_603;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_constructor_item_101(void) {
  struct f_constructor_item_101fr *F = rt_alloc(sizeof *F);
F->line_609 = f_cur_line_55();
F->it_610 = NULL;
F->it_610 = f_nn_48(((rt_int)15LL), F->line_609);
F->first_611 = NULL;
F->first_611 = f_expr_89();
F->keys_612 = NULL;
F->ktail_613 = NULL;
F->lab_614 = NULL;
F->lab_614 = f_nn_48(((rt_int)61LL), F->line_609);
(*(P433)rt_nil_check(F->lab_614)).a = F->first_611;
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P433)rt_nil_check(F->lab_614)).b = f_expr_89();
f_append_52(&F->keys_612, &F->ktail_613, F->lab_614);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_52(&F->keys_612, &F->ktail_613, F->lab_614);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_615 = g_tpos_461;
F->more_616 = NULL;
F->tail2_617 = NULL;
F->ok_618 = 0;
F->go_619 = 1;
while ((F->go_619 && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_620 = NULL;
F->l2_620 = f_nn_48(((rt_int)61LL), F->line_609);
(*(P433)rt_nil_check(F->l2_620)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P433)rt_nil_check(F->l2_620)).b = f_expr_89();
}
f_append_52(&F->more_616, &F->tail2_617, F->l2_620);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_618 = 1;
F->go_619 = 0;
} else if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_619 = 0;
}
}
if (F->ok_618) {
f_append_52(&F->keys_612, &F->ktail_613, F->lab_614);
f_append_52(&F->keys_612, &F->ktail_613, F->more_616);
} else {
g_tpos_461 = F->save_615;
}
}
if ((F->keys_612 != NULL)) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P433)rt_nil_check(F->it_610)).a = F->keys_612;
(*(P433)rt_nil_check(F->it_610)).b = f_expr_89();
} else {
(*(P433)rt_nil_check(F->it_610)).b = F->first_611;
}
F->result_ = F->it_610;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_body_end_102(void) {
  struct f_at_body_end_102fr *F = rt_alloc(sizeof *F);
F->result_ = (((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }))) || f_at_kind_61(((rt_int)0LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_body_103(void) {
  struct f_body_103fr *F = rt_alloc(sizeof *F);
F->head_621 = NULL;
F->tail_622 = NULL;
while ((!f_at_body_end_102())) {
f_append_52(&F->head_621, &F->tail_622, f_body_element_104());
}
F->result_ = F->head_621;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_body_element_104(void) {
  struct f_body_element_104fr *F = rt_alloc(sizeof *F);
F->x_623 = NULL;
if ((((((((((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_623 = f_declaration_105();
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_623 = f_nn_48(((rt_int)33LL), f_cur_line_55());
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_623)).a = f_expr_89();
} else {
F->x_623 = f_statement_126();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_623;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_declaration_105(void) {
  struct f_declaration_105fr *F = rt_alloc(sizeof *F);
F->line_624 = f_cur_line_55();
if ((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })))) {
F->result_ = f_object_decl_106();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) {
F->result_ = f_abbrev_decl_107();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->result_ = f_type_decl_109();
goto ret_;
} else if (((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; })))) {
F->result_ = f_subprogram_decl_118();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) {
F->result_ = f_capsule_decl_119();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) {
F->result_ = f_expose_decl_123();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->result_ = f_task_decl_122();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; }))) {
F->result_ = f_generic_decl_121();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) {
F->head_625 = NULL;
F->tail_626 = NULL;
F->names_627 = NULL;
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->names_627 = f_id_list_78();
while ((F->names_627 != NULL)) {
F->x_628 = NULL;
F->x_628 = f_nn_48(((rt_int)49LL), F->line_624);
(*(P433)rt_nil_check(F->x_628)).name = (*(P433)rt_nil_check(F->names_627)).name;
f_append_52(&F->head_625, &F->tail_626, F->x_628);
F->names_627 = (*(P433)rt_nil_check(F->names_627)).next;
}
F->result_ = F->head_625;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_object_decl_106(void) {
  struct f_object_decl_106fr *F = rt_alloc(sizeof *F);
F->line_629 = f_cur_line_55();
F->is_var_630 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_631 = NULL;
F->st_632 = NULL;
F->init_633 = NULL;
F->head_634 = NULL;
F->tail_635 = NULL;
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->names_631 = f_id_list_78();
if (F->is_var_630) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_632 = f_p_subtype_79();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_633 = f_expr_89();
}
} else {
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_632 = f_p_subtype_79();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_633 = f_expr_89();
}
while ((F->names_631 != NULL)) {
F->x_636 = NULL;
if (F->is_var_630) {
F->x_636 = f_nn_48(((rt_int)40LL), F->line_629);
} else {
F->x_636 = f_nn_48(((rt_int)41LL), F->line_629);
}
(*(P433)rt_nil_check(F->x_636)).name = (*(P433)rt_nil_check(F->names_631)).name;
(*(P433)rt_nil_check(F->x_636)).a = F->st_632;
(*(P433)rt_nil_check(F->x_636)).b = F->init_633;
f_append_52(&F->head_634, &F->tail_635, F->x_636);
F->names_631 = (*(P433)rt_nil_check(F->names_631)).next;
}
F->result_ = F->head_634;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_abbrev_decl_107(void) {
  struct f_abbrev_decl_107fr *F = rt_alloc(sizeof *F);
F->x_637 = NULL;
F->x_637 = f_nn_48(((rt_int)42LL), f_cur_line_55());
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_637)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P433)rt_nil_check(F->x_637)).b = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P433)rt_nil_check(F->x_637)).a = f_p_subtype_79();
F->result_ = F->x_637;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_skip_rep_108(void) {
  struct f_skip_rep_108fr *F = rt_alloc(sizeof *F);
F->depth_638 = ((rt_int)0LL);
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((F->depth_638 == ((rt_int)0LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_61(((rt_int)0LL))))) {
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_638 = rt_add(F->depth_638, ((rt_int)1LL));
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_638 = rt_sub(F->depth_638, ((rt_int)1LL));
}
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
}
}
ret_:
  return;
}

static P433 f_type_decl_109(void) {
  struct f_type_decl_109fr *F = rt_alloc(sizeof *F);
F->line_639 = f_cur_line_55();
F->name_640 = NULL;
F->params_641 = NULL;
F->x_642 = NULL;
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->name_640 = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_641 = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P428)rt_nil_check((*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->x_642 = f_nn_48(((rt_int)44LL), F->line_639);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P433)rt_nil_check(F->x_642)).b = f_formal_params_112();
}
} else {
F->x_642 = f_nn_48(((rt_int)43LL), F->line_639);
(*(P433)rt_nil_check(F->x_642)).b = F->params_641;
}
(*(P433)rt_nil_check(F->x_642)).name = F->name_640;
(*(P433)rt_nil_check(F->x_642)).a = f_p_subtype_79();
f_skip_rep_108();
F->result_ = F->x_642;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_mode_of_111(rstr *w_110) {
  struct f_mode_of_111fr *F = rt_alloc(sizeof *F);
F->w_110 = w_110;
if (rt_str_eq((*F->w_110), rt_str("VAR", 3))) {
F->result_ = ((rt_int)2LL);
goto ret_;
} else if (rt_str_eq((*F->w_110), rt_str("OUT", 3))) {
F->result_ = ((rt_int)3LL);
goto ret_;
} else if (rt_str_eq((*F->w_110), rt_str("READONLY", 8))) {
F->result_ = ((rt_int)4LL);
goto ret_;
}
F->result_ = ((rt_int)1LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_formal_params_112(void) {
  struct f_formal_params_112fr *F = rt_alloc(sizeof *F);
F->head_643 = NULL;
F->tail_644 = NULL;
F->more_645 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_645) {
F->mode_646 = ((rt_int)1LL);
F->names_647 = NULL;
F->ntail_648 = NULL;
F->st_649 = NULL;
if ((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_646 = f_mode_of_111(&(*(P428)rt_nil_check((*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s)));
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
}
f_append_52(&F->names_647, &F->ntail_648, f_name_node_77());
while ((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL))) && (f_kind_at_63(((rt_int)2LL)) == ((rt_int)3LL))) && (rt_str_eq((*(P428)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P428)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
f_append_52(&F->names_647, &F->ntail_648, f_name_node_77());
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_649 = f_p_subtype_79();
while ((F->names_647 != NULL)) {
F->p_650 = NULL;
F->p_650 = f_nn_48(((rt_int)52LL), (*(P433)rt_nil_check(F->names_647)).line);
(*(P433)rt_nil_check(F->p_650)).name = (*(P433)rt_nil_check(F->names_647)).name;
(*(P433)rt_nil_check(F->p_650)).ival = F->mode_646;
(*(P433)rt_nil_check(F->p_650)).a = F->st_649;
f_append_52(&F->head_643, &F->tail_644, F->p_650);
F->names_647 = (*(P433)rt_nil_check(F->names_647)).next;
}
F->more_645 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_643;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_imports_list_114(P433 owner_113) {
  struct f_imports_list_114fr *F = rt_alloc(sizeof *F);
F->owner_113 = owner_113;
F->head_651 = NULL;
F->tail_652 = NULL;
F->more_653 = 1;
if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P433)rt_nil_check(F->owner_113)).flag = rt_add((*(P433)rt_nil_check(F->owner_113)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_653) {
F->ro_654 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_655 = NULL;
F->x_655 = f_name_node_77();
if (F->ro_654) {
(*(P433)rt_nil_check(F->x_655)).ival = ((rt_int)1LL);
}
f_append_52(&F->head_651, &F->tail_652, F->x_655);
F->more_653 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P433)rt_nil_check(F->owner_113)).d = F->head_651;
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_definable_116(rstr *w_115) {
  struct f_is_definable_116fr *F = rt_alloc(sizeof *F);
F->w_115 = w_115;
F->result_ = ((((((((((((((((((((rt_str_eq((*F->w_115), rt_str("+", 1)) || rt_str_eq((*F->w_115), rt_str("-", 1))) || rt_str_eq((*F->w_115), rt_str("*", 1))) || rt_str_eq((*F->w_115), rt_str("/", 1))) || rt_str_eq((*F->w_115), rt_str("**", 2))) || rt_str_eq((*F->w_115), rt_str("&", 1))) || rt_str_eq((*F->w_115), rt_str("=", 1))) || rt_str_eq((*F->w_115), rt_str("<", 1))) || rt_str_eq((*F->w_115), rt_str("<=", 2))) || rt_str_eq((*F->w_115), rt_str(">", 1))) || rt_str_eq((*F->w_115), rt_str(">=", 2))) || rt_str_eq((*F->w_115), rt_str("/=", 2))) || rt_str_eq((*F->w_115), rt_str("DIV", 3))) || rt_str_eq((*F->w_115), rt_str("MOD", 3))) || rt_str_eq((*F->w_115), rt_str("AND", 3))) || rt_str_eq((*F->w_115), rt_str("OR", 2))) || rt_str_eq((*F->w_115), rt_str("XOR", 3))) || rt_str_eq((*F->w_115), rt_str("NOT", 3))) || rt_str_eq((*F->w_115), rt_str("IN", 2))) || rt_str_eq((*F->w_115), rt_str(":=", 2))) || rt_str_eq((*F->w_115), rt_str("#", 1)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P428 f_definable_name_117(void) {
  struct f_definable_name_117fr *F = rt_alloc(sizeof *F);
if ((f_at_kind_61(((rt_int)1LL)) || (f_at_kind_61(((rt_int)3LL)) && f_is_definable_116(&(*(P428)rt_nil_check((*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s)))))) {
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->result_ = (*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(rt_sub(g_tpos_461, ((rt_int)1LL)), (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_subprogram_decl_118(void) {
  struct f_subprogram_decl_118fr *F = rt_alloc(sizeof *F);
F->line_656 = f_cur_line_55();
F->x_657 = NULL;
F->is_abn_658 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_659 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_659) {
F->x_657 = f_nn_48(((rt_int)46LL), F->line_656);
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_657 = f_nn_48(((rt_int)45LL), F->line_656);
} else {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
if (F->is_abn_658) {
(*(P433)rt_nil_check(F->x_657)).flag = ((rt_int)1LL);
}
(*(P433)rt_nil_check(F->x_657)).name = f_definable_name_117();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P433)rt_nil_check(F->x_657)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P433)rt_nil_check(F->x_657)).a = f_formal_params_112();
}
if (F->is_func_659) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P433)rt_nil_check(F->x_657)).b = f_p_subtype_79();
}
F->dummy_660 = f_imports_list_114(F->x_657);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P433)rt_nil_check(F->x_657)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_659) {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P428)rt_nil_check(f_definable_name_117())), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->x_657)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->x_657)).name))); b_; }));
}
F->result_ = F->x_657;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_capsule_decl_119(void) {
  struct f_capsule_decl_119fr *F = rt_alloc(sizeof *F);
F->x_661 = NULL;
F->x_661 = f_nn_48(((rt_int)47LL), f_cur_line_55());
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_661)).name = f_expect_id_76();
F->dummy_662 = f_imports_list_114(F->x_661);
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P433)rt_nil_check(F->x_661)).ival = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P433)rt_nil_check(F->x_661)).ival = ((rt_int)0LL);
} else {
F->head_663 = NULL;
F->tail_664 = NULL;
F->more_665 = 1;
while (F->more_665) {
F->n_666 = NULL;
F->n_666 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P433)rt_nil_check(F->n_666)).ival = ((rt_int)1LL);
}
(*(P433)rt_nil_check(F->n_666)).name = f_definable_name_117();
f_append_52(&F->head_663, &F->tail_664, F->n_666);
F->more_665 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P433)rt_nil_check(F->x_661)).a = F->head_663;
(*(P433)rt_nil_check(F->x_661)).ival = ((rt_int)2LL);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P433)rt_nil_check(F->x_661)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P428)rt_nil_check(f_expect_id_76())), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->x_661)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_661;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_formal_tt_120(void) {
  struct f_formal_tt_120fr *F = rt_alloc(sizeof *F);
F->head_667 = NULL;
F->tail_668 = NULL;
F->more_669 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_669) {
f_append_52(&F->head_667, &F->tail_668, f_name_node_77());
F->more_669 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_667;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_generic_decl_121(void) {
  struct f_generic_decl_121fr *F = rt_alloc(sizeof *F);
F->x_670 = NULL;
F->x_670 = f_nn_48(((rt_int)51LL), f_cur_line_55());
F->head_671 = NULL;
F->tail_672 = NULL;
F->more_673 = 1;
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
while (F->more_673) {
F->names_674 = NULL;
F->names_674 = f_id_list_78();
F->kind_675 = ((rt_int)6LL);
F->st_676 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_675 = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_675 = ((rt_int)2LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_675 = ((rt_int)3LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_675 = ((rt_int)4LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_675 = ((rt_int)5LL);
} else {
F->st_676 = f_p_subtype_79();
}
if (((F->kind_675 <= ((rt_int)2LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P433)rt_nil_check(F->x_670)).e = f_actual_params_80();
} else if (((F->kind_675 >= ((rt_int)3LL)) && (F->kind_675 <= ((rt_int)5LL)))) {
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_676 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
}
if (((F->kind_675 == ((rt_int)4LL)) && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_676 = f_p_subtype_79();
}
}
while ((F->names_674 != NULL)) {
F->p_677 = NULL;
F->p_677 = f_nn_48(((rt_int)52LL), (*(P433)rt_nil_check(F->names_674)).line);
(*(P433)rt_nil_check(F->p_677)).name = (*(P433)rt_nil_check(F->names_674)).name;
(*(P433)rt_nil_check(F->p_677)).ival = F->kind_675;
(*(P433)rt_nil_check(F->p_677)).a = F->st_676;
f_append_52(&F->head_671, &F->tail_672, F->p_677);
F->names_674 = (*(P433)rt_nil_check(F->names_674)).next;
}
F->more_673 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_673 = 1;
while (F->more_673) {
F->nm_678 = NULL;
F->nm_678 = f_definable_name_117();
F->st_679 = NULL;
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_679 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_679 = f_p_subtype_79();
}
F->more_673 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P433)rt_nil_check(F->x_670)).a = F->head_671;
(*(P433)rt_nil_check(F->x_670)).b = f_declaration_105();
(*(P433)rt_nil_check(F->x_670)).name = (*(P433)rt_nil_check((*(P433)rt_nil_check(F->x_670)).b)).name;
F->result_ = F->x_670;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_task_decl_122(void) {
  struct f_task_decl_122fr *F = rt_alloc(sizeof *F);
F->x_680 = NULL;
F->x_680 = f_nn_48(((rt_int)50LL), f_cur_line_55());
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_680)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P433)rt_nil_check(F->x_680)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P433)rt_nil_check(F->x_680)).a = f_formal_params_112();
}
F->dummy_681 = f_imports_list_114(F->x_680);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P433)rt_nil_check(F->x_680)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P428)rt_nil_check(f_expect_id_76())), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->x_680)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->x_680)).name))); b_; }));
}
F->result_ = F->x_680;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_expose_decl_123(void) {
  struct f_expose_decl_123fr *F = rt_alloc(sizeof *F);
F->x_682 = NULL;
F->x_682 = f_nn_48(((rt_int)48LL), f_cur_line_55());
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P433)rt_nil_check(F->x_682)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_683 = NULL;
F->tail_684 = NULL;
F->more_685 = 1;
while (F->more_685) {
F->n_686 = NULL;
F->n_686 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P433)rt_nil_check(F->n_686)).ival = ((rt_int)1LL);
}
(*(P433)rt_nil_check(F->n_686)).name = f_definable_name_117();
f_append_52(&F->head_683, &F->tail_684, F->n_686);
F->more_685 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P433)rt_nil_check(F->x_682)).a = F->head_683;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P433)rt_nil_check(F->x_682)).flag = ((rt_int)1LL);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P433)rt_nil_check(F->x_682)).flag = rt_add((*(P433)rt_nil_check(F->x_682)).flag, ((rt_int)2LL));
}
(*(P433)rt_nil_check(F->x_682)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P433)rt_nil_check(F->x_682)).b = f_actual_params_80();
}
if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING is not handled yet", 27); b_; }));
}
if ((((*(P433)rt_nil_check(F->x_682)).flag == ((rt_int)1LL)) || ((*(P433)rt_nil_check(F->x_682)).flag == ((rt_int)3LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capsules invoked as NEW are not handled yet", 43); b_; }));
}
F->result_ = F->x_682;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_compound_kw_125(rstr *w_124) {
  struct f_is_compound_kw_125fr *F = rt_alloc(sizeof *F);
F->w_124 = w_124;
F->result_ = (((((((rt_str_eq((*F->w_124), rt_str("IF", 2)) || rt_str_eq((*F->w_124), rt_str("CASE", 4))) || rt_str_eq((*F->w_124), rt_str("FOR", 3))) || rt_str_eq((*F->w_124), rt_str("WHILE", 5))) || rt_str_eq((*F->w_124), rt_str("BEGIN", 5))) || rt_str_eq((*F->w_124), rt_str("GUARD", 5))) || rt_str_eq((*F->w_124), rt_str("WAIT", 4))) || rt_str_eq((*F->w_124), rt_str("REGION", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_statement_126(void) {
  struct f_statement_126fr *F = rt_alloc(sizeof *F);
F->labels_687 = NULL;
F->ltail_688 = NULL;
F->match_689 = NULL;
F->s_690 = NULL;
while (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq((*(P428)rt_nil_check(f_text_at_65(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_52(&F->labels_687, &F->ltail_688, f_name_node_77());
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
}
if (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))) && f_is_compound_kw_125(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P428)rt_nil_check(f_text_at_65(((rt_int)1LL)))); b_; })))) {
F->match_689 = f_expect_id_76();
}
F->s_690 = f_unlabeled_statement_127();
if ((F->match_689 != NULL)) {
if (((((((((*(P433)rt_nil_check(F->s_690)).kind != ((rt_int)22LL)) && ((*(P433)rt_nil_check(F->s_690)).kind != ((rt_int)23LL))) && ((*(P433)rt_nil_check(F->s_690)).kind != ((rt_int)24LL))) && ((*(P433)rt_nil_check(F->s_690)).kind != ((rt_int)25LL))) && ((*(P433)rt_nil_check(F->s_690)).kind != ((rt_int)26LL))) && ((*(P433)rt_nil_check(F->s_690)).kind != ((rt_int)35LL))) && ((*(P433)rt_nil_check(F->s_690)).kind != ((rt_int)36LL)))) {
f_fail_23((*(P433)rt_nil_check(F->s_690)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P428)rt_nil_check(f_expect_id_76())), (*(P428)rt_nil_check(F->match_689))))) {
f_fail_23((*(P433)rt_nil_check(F->s_690)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P428)rt_nil_check(F->match_689))); b_; }));
}
(*(P433)rt_nil_check(F->s_690)).tag = F->match_689;
}
if ((F->labels_687 != NULL)) {
f_fail_23((*(P433)rt_nil_check(F->s_690)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_690;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_unlabeled_statement_127(void) {
  struct f_unlabeled_statement_127fr *F = rt_alloc(sizeof *F);
F->line_691 = f_cur_line_55();
F->x_692 = NULL;
if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }))) {
F->result_ = f_if_stmt_132();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }))) {
F->result_ = f_case_stmt_133();
goto ret_;
} else if ((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; })))) {
F->result_ = f_repeat_stmt_134();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BEGIN", 5); b_; }))) {
F->x_692 = f_nn_48(((rt_int)25LL), F->line_691);
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_692)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_692;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_135();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_692 = f_nn_48(((rt_int)27LL), F->line_691);
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_692)).name = f_expect_id_76();
F->result_ = F->x_692;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_692 = f_nn_48(((rt_int)28LL), F->line_691);
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P433)rt_nil_check(F->x_692)).a = f_expr_89();
}
F->result_ = F->x_692;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_692 = f_nn_48(((rt_int)30LL), F->line_691);
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_692)).name = f_expect_id_76();
F->result_ = F->x_692;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)31LL), F->line_691);
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_692 = f_nn_48(((rt_int)34LL), F->line_691);
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_692)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P433)rt_nil_check(F->x_692)).e = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P433)rt_nil_check(F->x_692)).b = f_actual_params_80();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P433)rt_nil_check(F->x_692)).a = f_postfix_99();
F->result_ = F->x_692;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_693 = NULL;
F->tail_694 = NULL;
F->x_692 = f_nn_48(((rt_int)35LL), F->line_691);
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_695 = NULL;
F->itail_696 = NULL;
F->more_697 = 1;
while (F->more_697) {
f_append_52(&F->invs_695, &F->itail_696, f_postfix_99());
F->more_697 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_693, &F->tail_694, f_arm_131(F->invs_695, f_body_103(), F->line_691));
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P433)rt_nil_check(F->x_692)).a = F->head_693;
F->result_ = F->x_692;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_692 = f_nn_48(((rt_int)36LL), F->line_691);
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_692)).a = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P433)rt_nil_check(F->x_692)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_692;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_692 = f_nn_48(((rt_int)32LL), F->line_691);
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_692)).a = f_postfix_99();
if ((!(f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P428)rt_nil_check((*(P429)rt_nil_check((*(P431)rt_nil_check(g_toks_459)).p[rt_index(g_tpos_461, (*(P431)rt_nil_check(g_toks_459)).lo, (*(P431)rt_nil_check(g_toks_459)).hi) - (*(P431)rt_nil_check(g_toks_459)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P433)rt_nil_check(F->x_692)).b = f_actual_params_80();
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P433)rt_nil_check(F->x_692)).c = f_expr_89();
}
F->result_ = F->x_692;
goto ret_;
}
{
F->target_698 = NULL;
F->target_698 = f_postfix_99();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_692 = f_nn_48(((rt_int)20LL), F->line_691);
(*(P433)rt_nil_check(F->x_692)).a = F->target_698;
(*(P433)rt_nil_check(F->x_692)).b = f_expr_89();
} else {
F->x_692 = f_nn_48(((rt_int)21LL), F->line_691);
(*(P433)rt_nil_check(F->x_692)).a = F->target_698;
}
}
F->result_ = F->x_692;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_arm_131(P433 cond_128, P433 b_129, rt_int line_130) {
  struct f_arm_131fr *F = rt_alloc(sizeof *F);
F->cond_128 = cond_128;
F->b_129 = b_129;
F->line_130 = line_130;
F->x_699 = NULL;
F->x_699 = f_nn_48(((rt_int)60LL), F->line_130);
(*(P433)rt_nil_check(F->x_699)).a = F->cond_128;
(*(P433)rt_nil_check(F->x_699)).b = F->b_129;
F->result_ = F->x_699;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_if_stmt_132(void) {
  struct f_if_stmt_132fr *F = rt_alloc(sizeof *F);
F->x_700 = NULL;
F->x_700 = f_nn_48(((rt_int)22LL), f_cur_line_55());
F->head_701 = NULL;
F->tail_702 = NULL;
F->cond_703 = NULL;
F->go_704 = 1;
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
F->cond_703 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_701, &F->tail_702, f_arm_131(F->cond_703, f_body_103(), (*(P433)rt_nil_check(F->x_700)).line));
while (F->go_704) {
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_703 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_701, &F->tail_702, f_arm_131(F->cond_703, f_body_103(), (*(P433)rt_nil_check(F->x_700)).line));
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P433)rt_nil_check(F->x_700)).flag = ((rt_int)1LL);
(*(P433)rt_nil_check(F->x_700)).b = f_body_103();
} else {
F->go_704 = 0;
}
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P433)rt_nil_check(F->x_700)).a = F->head_701;
F->result_ = F->x_700;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_case_stmt_133(void) {
  struct f_case_stmt_133fr *F = rt_alloc(sizeof *F);
F->x_705 = NULL;
F->x_705 = f_nn_48(((rt_int)23LL), f_cur_line_55());
F->head_706 = NULL;
F->tail_707 = NULL;
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_705)).a = f_expr_89();
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_708 = NULL;
F->ltail_709 = NULL;
F->more_710 = 1;
while (F->more_710) {
F->l_711 = NULL;
F->l_711 = f_nn_48(((rt_int)61LL), f_cur_line_55());
(*(P433)rt_nil_check(F->l_711)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P433)rt_nil_check(F->l_711)).b = f_expr_89();
}
f_append_52(&F->labs_708, &F->ltail_709, F->l_711);
F->more_710 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_706, &F->tail_707, f_arm_131(F->labs_708, f_body_103(), (*(P433)rt_nil_check(F->x_705)).line));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P433)rt_nil_check(F->x_705)).flag = ((rt_int)1LL);
(*(P433)rt_nil_check(F->x_705)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P433)rt_nil_check(F->x_705)).b = F->head_706;
F->result_ = F->x_705;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_repeat_stmt_134(void) {
  struct f_repeat_stmt_134fr *F = rt_alloc(sizeof *F);
F->x_712 = NULL;
F->x_712 = f_nn_48(((rt_int)24LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P433)rt_nil_check(F->x_712)).flag = ((rt_int)1LL);
(*(P433)rt_nil_check(F->x_712)).name = f_expect_id_76();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P433)rt_nil_check(F->x_712)).ival = ((rt_int)1LL);
}
(*(P433)rt_nil_check(F->x_712)).a = f_p_subtype_79();
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P433)rt_nil_check(F->x_712)).a = f_expr_89();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P433)rt_nil_check(F->x_712)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_712;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_guard_stmt_135(void) {
  struct f_guard_stmt_135fr *F = rt_alloc(sizeof *F);
F->x_713 = NULL;
F->x_713 = f_nn_48(((rt_int)26LL), f_cur_line_55());
F->head_714 = NULL;
F->tail_715 = NULL;
g_tpos_461 = rt_add(g_tpos_461, ((rt_int)1LL));
(*(P433)rt_nil_check(F->x_713)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_716 = NULL;
F->h_716 = f_nn_48(((rt_int)62LL), f_cur_line_55());
(*(P433)rt_nil_check(F->h_716)).a = f_id_list_78();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P433)rt_nil_check(F->h_716)).b = f_body_103();
f_append_52(&F->head_714, &F->tail_715, F->h_716);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P433)rt_nil_check(F->x_713)).flag = ((rt_int)1LL);
(*(P433)rt_nil_check(F->x_713)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P433)rt_nil_check(F->x_713)).b = F->head_714;
F->result_ = F->x_713;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_program_136(void) {
  struct f_program_136fr *F = rt_alloc(sizeof *F);
F->head_717 = NULL;
F->tail_718 = NULL;
while ((!f_at_kind_61(((rt_int)0LL)))) {
if ((!f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
f_append_52(&F->head_717, &F->tail_718, f_capsule_decl_119());
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_717;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_hash_138(rstr *s_137) {
  struct f_hash_138fr *F = rt_alloc(sizeof *F);
F->s_137 = s_137;
F->h_719 = ((rt_int)0LL);
{ rt_int lo721 = ((rt_int)1LL), hi722 = ((*F->s_137)).len;
for (rt_int it723 = lo721; it723 <= hi722; it723++) {
F->i_720 = it723;
F->h_719 = rt_mod(rt_add(rt_mul(F->h_719, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_137), F->i_720)) + 1)), ((rt_int)4093LL));
}
}
F->result_ = F->h_719;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P443 f_lookup_140(rstr *name_139) {
  struct f_lookup_140fr *F = rt_alloc(sizeof *F);
F->name_139 = name_139;
F->y_724 = NULL;
F->y_724 = (*(P449)rt_nil_check(g_table_463)).p[rt_index(f_hash_138(&(*F->name_139)), (*(P449)rt_nil_check(g_table_463)).lo, (*(P449)rt_nil_check(g_table_463)).hi) - (*(P449)rt_nil_check(g_table_463)).lo];
while ((F->y_724 != NULL)) {
if (rt_str_eq((*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_724)).name)), (*F->name_139))) {
F->result_ = F->y_724;
goto ret_;
}
F->y_724 = (*(P443)rt_nil_check(F->y_724)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P443 f_lookup_decl_142(P433 d_141) {
  struct f_lookup_decl_142fr *F = rt_alloc(sizeof *F);
F->d_141 = d_141;
F->y_725 = NULL;
F->y_725 = (*(P449)rt_nil_check(g_table_463)).p[rt_index(f_hash_138(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->d_141)).name))), (*(P449)rt_nil_check(g_table_463)).lo, (*(P449)rt_nil_check(g_table_463)).hi) - (*(P449)rt_nil_check(g_table_463)).lo];
while ((F->y_725 != NULL)) {
if (((*(P443)rt_nil_check(F->y_725)).decl == F->d_141)) {
F->result_ = F->y_725;
goto ret_;
}
F->y_725 = (*(P443)rt_nil_check(F->y_725)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_define_145(P443 y_143, rt_int line_144) {
  struct f_define_145fr *F = rt_alloc(sizeof *F);
F->y_143 = y_143;
F->line_144 = line_144;
F->h_726 = f_hash_138(&(*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_143)).name)));
F->z_727 = NULL;
F->z_727 = (*(P449)rt_nil_check(g_table_463)).p[rt_index(F->h_726, (*(P449)rt_nil_check(g_table_463)).lo, (*(P449)rt_nil_check(g_table_463)).hi) - (*(P449)rt_nil_check(g_table_463)).lo];
while ((F->z_727 != NULL)) {
if (((((*(P443)rt_nil_check(F->z_727)).depth == g_depth_464) && rt_str_eq((*(P428)rt_nil_check((*(P443)rt_nil_check(F->z_727)).name)), (*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_143)).name)))) && (!(((f_overloadable_147(F->y_143) && f_overloadable_147(F->z_727)) && ((*(P443)rt_nil_check(F->z_727)).kind == (*(P443)rt_nil_check(F->y_143)).kind)) && (!f_same_signature_150((*(P443)rt_nil_check(F->y_143)).params, (*(P443)rt_nil_check(F->z_727)).params)))))) {
f_fail_23(F->line_144, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_143)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_727 = (*(P443)rt_nil_check(F->z_727)).chain;
}
(*(P443)rt_nil_check(F->y_143)).depth = g_depth_464;
(*(P443)rt_nil_check(F->y_143)).chain = (*(P449)rt_nil_check(g_table_463)).p[rt_index(F->h_726, (*(P449)rt_nil_check(g_table_463)).lo, (*(P449)rt_nil_check(g_table_463)).hi) - (*(P449)rt_nil_check(g_table_463)).lo];
(*(P449)rt_nil_check(g_table_463)).p[rt_index(F->h_726, (*(P449)rt_nil_check(g_table_463)).lo, (*(P449)rt_nil_check(g_table_463)).hi) - (*(P449)rt_nil_check(g_table_463)).lo] = F->y_143;
(*(P443)rt_nil_check(F->y_143)).stack = g_scope_stack_465;
g_scope_stack_465 = F->y_143;
ret_:
  return;
}

static int f_overloadable_147(P443 y_146) {
  struct f_overloadable_147fr *F = rt_alloc(sizeof *F);
F->y_146 = y_146;
F->result_ = ((((*(P443)rt_nil_check(F->y_146)).kind == ((rt_int)3LL)) || ((*(P443)rt_nil_check(F->y_146)).kind == ((rt_int)4LL))) || ((*(P443)rt_nil_check(F->y_146)).kind == ((rt_int)9LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_signature_150(P441 a_148, P441 b_149) {
  struct f_same_signature_150fr *F = rt_alloc(sizeof *F);
F->a_148 = a_148;
F->b_149 = b_149;
F->x_728 = NULL;
F->x_728 = F->a_148;
F->y_729 = NULL;
F->y_729 = F->b_149;
while (((F->x_728 != NULL) && (F->y_729 != NULL))) {
if ((!f_same_164((*(P441)rt_nil_check(F->x_728)).t, (*(P441)rt_nil_check(F->y_729)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_728 = (*(P441)rt_nil_check(F->x_728)).next;
F->y_729 = (*(P441)rt_nil_check(F->y_729)).next;
}
F->result_ = ((F->x_728 == NULL) && (F->y_729 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_open_scope_151(void) {
  struct f_open_scope_151fr *F = rt_alloc(sizeof *F);
g_depth_464 = rt_add(g_depth_464, ((rt_int)1LL));
ret_:
  return;
}

static void f_close_scope_152(void) {
  struct f_close_scope_152fr *F = rt_alloc(sizeof *F);
while (((g_scope_stack_465 != NULL) && ((*(P443)rt_nil_check(g_scope_stack_465)).depth == g_depth_464))) {
(*(P449)rt_nil_check(g_table_463)).p[rt_index(f_hash_138(&(*(P428)rt_nil_check((*(P443)rt_nil_check(g_scope_stack_465)).name))), (*(P449)rt_nil_check(g_table_463)).lo, (*(P449)rt_nil_check(g_table_463)).hi) - (*(P449)rt_nil_check(g_table_463)).lo] = (*(P443)rt_nil_check(g_scope_stack_465)).chain;
g_scope_stack_465 = (*(P443)rt_nil_check(g_scope_stack_465)).stack;
}
g_depth_464 = rt_sub(g_depth_464, ((rt_int)1LL));
ret_:
  return;
}

static P443 f_new_sym_155(rt_int kind_153, P428 name_154) {
  struct f_new_sym_155fr *F = rt_alloc(sizeof *F);
F->kind_153 = kind_153;
F->name_154 = name_154;
F->y_730 = NULL;
{ R444 *cell731 = rt_alloc(sizeof(R444));
(*cell731).name = NULL;
(*cell731).t = NULL;
(*cell731).c = NULL;
(*cell731).access = NULL;
(*cell731).cname = NULL;
(*cell731).st = NULL;
(*cell731).decl = NULL;
(*cell731).params = NULL;
(*cell731).result = NULL;
(*cell731).members = NULL;
(*cell731).mnext = NULL;
(*cell731).binds = NULL;
(*cell731).insts = NULL;
(*cell731).chain = NULL;
(*cell731).stack = NULL;
F->y_730 = cell731;
}
(*(P443)rt_nil_check(F->y_730)).kind = F->kind_153;
(*(P443)rt_nil_check(F->y_730)).name = F->name_154;
F->result_ = F->y_730;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P437 f_new_typ_157(rt_int kind_156) {
  struct f_new_typ_157fr *F = rt_alloc(sizeof *F);
F->kind_156 = kind_156;
F->t_732 = NULL;
{ R438 *cell733 = rt_alloc(sizeof(R438));
(*cell733).name = NULL;
(*cell733).lits = NULL;
(*cell733).elem = NULL;
(*cell733).idx = NULL;
(*cell733).idx2 = NULL;
(*cell733).elemcons = NULL;
(*cell733).elemst = NULL;
(*cell733).under = NULL;
(*cell733).tparams = NULL;
(*cell733).ocap = NULL;
(*cell733).fields = NULL;
(*cell733).target = NULL;
(*cell733).decl = NULL;
(*cell733).cname = NULL;
(*cell733).next = NULL;
F->t_732 = cell733;
}
(*(P437)rt_nil_check(F->t_732)).kind = F->kind_156;
F->result_ = F->t_732;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P435 f_new_cons_158(void) {
  struct f_new_cons_158fr *F = rt_alloc(sizeof *F);
F->c_734 = NULL;
{ R436 *cell735 = rt_alloc(sizeof(R436));
(*cell735).lo = NULL;
(*cell735).hi = NULL;
(*cell735).lo2 = NULL;
(*cell735).hi2 = NULL;
(*cell735).slen = NULL;
(*cell735).args = NULL;
F->c_734 = cell735;
}
F->result_ = F->c_734;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_lits_161(P433 a_159, P433 b_160) {
  struct f_same_lits_161fr *F = rt_alloc(sizeof *F);
F->a_159 = a_159;
F->b_160 = b_160;
F->x_736 = NULL;
F->x_736 = F->a_159;
F->y_737 = NULL;
F->y_737 = F->b_160;
while (((F->x_736 != NULL) && (F->y_737 != NULL))) {
if ((!rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->x_736)).name)), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->y_737)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_736 = (*(P433)rt_nil_check(F->x_736)).next;
F->y_737 = (*(P433)rt_nil_check(F->y_737)).next;
}
F->result_ = ((F->x_736 == NULL) && (F->y_737 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_164(P437 a_162, P437 b_163) {
  struct f_same_164fr *F = rt_alloc(sizeof *F);
F->a_162 = a_162;
F->b_163 = b_163;
if ((F->a_162 == F->b_163)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_162 == NULL) || (F->b_163 == NULL)) || ((*(P437)rt_nil_check(F->a_162)).kind != (*(P437)rt_nil_check(F->b_163)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P437)rt_nil_check(F->a_162)).kind == ((rt_int)1LL)) || ((*(P437)rt_nil_check(F->a_162)).kind == ((rt_int)2LL))) || ((*(P437)rt_nil_check(F->a_162)).kind == ((rt_int)3LL))) || ((*(P437)rt_nil_check(F->a_162)).kind == ((rt_int)5LL))) || ((*(P437)rt_nil_check(F->a_162)).kind == ((rt_int)9LL))) || ((*(P437)rt_nil_check(F->a_162)).kind == ((rt_int)10LL)))) {
F->result_ = 1;
goto ret_;
}
if (((*(P437)rt_nil_check(F->a_162)).kind == ((rt_int)4LL))) {
F->result_ = f_same_lits_161((*(P437)rt_nil_check(F->a_162)).lits, (*(P437)rt_nil_check(F->b_163)).lits);
goto ret_;
}
if (((*(P437)rt_nil_check(F->a_162)).kind == ((rt_int)6LL))) {
if ((((*(P437)rt_nil_check(F->a_162)).idx2 == NULL) != ((*(P437)rt_nil_check(F->b_163)).idx2 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_164((*(P437)rt_nil_check(F->a_162)).elem, (*(P437)rt_nil_check(F->b_163)).elem) && f_same_164((*(P437)rt_nil_check(F->a_162)).idx, (*(P437)rt_nil_check(F->b_163)).idx));
goto ret_;
}
if ((((*(P437)rt_nil_check(F->a_162)).kind == ((rt_int)16LL)) || ((*(P437)rt_nil_check(F->a_162)).kind == ((rt_int)12LL)))) {
F->result_ = f_same_164((*(P437)rt_nil_check(F->a_162)).elem, (*(P437)rt_nil_check(F->b_163)).elem);
goto ret_;
}
if (((*(P437)rt_nil_check(F->a_162)).kind == ((rt_int)7LL))) {
F->f_738 = NULL;
F->f_738 = (*(P437)rt_nil_check(F->a_162)).fields;
F->g_739 = NULL;
F->g_739 = (*(P437)rt_nil_check(F->b_163)).fields;
while (((F->f_738 != NULL) && (F->g_739 != NULL))) {
if (((!rt_str_eq((*(P428)rt_nil_check((*(P439)rt_nil_check(F->f_738)).name)), (*(P428)rt_nil_check((*(P439)rt_nil_check(F->g_739)).name)))) || (!f_same_164((*(P439)rt_nil_check(F->f_738)).t, (*(P439)rt_nil_check(F->g_739)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_738 = (*(P439)rt_nil_check(F->f_738)).next;
F->g_739 = (*(P439)rt_nil_check(F->g_739)).next;
}
F->result_ = ((F->f_738 == NULL) && (F->g_739 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P437 f_base_of_166(P437 t_165) {
  struct f_base_of_166fr *F = rt_alloc(sizeof *F);
F->t_165 = t_165;
if ((((F->t_165 != NULL) && ((*(P437)rt_nil_check(F->t_165)).kind == ((rt_int)15LL))) && ((*(P437)rt_nil_check(F->t_165)).tparams == NULL))) {
F->result_ = f_base_of_166((*(P437)rt_nil_check(F->t_165)).under);
goto ret_;
}
F->result_ = F->t_165;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P435 f_base_cons_169(P437 t_167, P435 c_168) {
  struct f_base_cons_169fr *F = rt_alloc(sizeof *F);
F->t_167 = t_167;
F->c_168 = c_168;
if (((((F->t_167 != NULL) && ((*(P437)rt_nil_check(F->t_167)).kind == ((rt_int)15LL))) && ((*(P437)rt_nil_check(F->t_167)).tparams == NULL)) && ((*(P437)rt_nil_check(F->t_167)).elemcons != NULL))) {
F->result_ = f_base_cons_169((*(P437)rt_nil_check(F->t_167)).under, (*(P437)rt_nil_check(F->t_167)).elemcons);
goto ret_;
}
F->result_ = F->c_168;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_kind_name_171(P437 t_170) {
  struct f_kind_name_171fr *F = rt_alloc(sizeof *F);
F->t_170 = t_170;
{ rt_int sel740 = (*(P437)rt_nil_check(F->t_170)).kind;
if (0 || (sel740 == ((rt_int)1LL))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel740 == ((rt_int)2LL))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel740 == ((rt_int)3LL))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel740 == ((rt_int)4LL))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel740 == ((rt_int)5LL))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel740 == ((rt_int)6LL))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel740 == ((rt_int)7LL))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel740 == ((rt_int)8LL))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_170)).name)));
goto ret_;
} else if (0 || (sel740 == ((rt_int)11LL))) {
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

static void f_check_type_175(P437 got_172, P437 want_173, rt_int line_174) {
  struct f_check_type_175fr *F = rt_alloc(sizeof *F);
F->got_172 = got_172;
F->want_173 = want_173;
F->line_174 = line_174;
if ((F->want_173 == NULL)) {
goto ret_;
}
if ((((*(P437)rt_nil_check(F->got_172)).kind == ((rt_int)11LL)) && ((*(P437)rt_nil_check(F->want_173)).kind == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_164(F->got_172, F->want_173))) {
f_fail_23(F->line_174, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_171(F->got_172)), rt_str(" where ", 7)), f_kind_name_171(F->want_173)), rt_str(" is required", 12)); b_; }));
}
ret_:
  return;
}

static rstr f_ctype_177(P437 t_176) {
  struct f_ctype_177fr *F = rt_alloc(sizeof *F);
F->t_176 = t_176;
{ rt_int sel741 = (*(P437)rt_nil_check(F->t_176)).kind;
if (0 || (sel741 == ((rt_int)1LL))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel741 == ((rt_int)2LL)) || (sel741 == ((rt_int)4LL)) || (sel741 == ((rt_int)10LL))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel741 == ((rt_int)3LL))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel741 == ((rt_int)5LL))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel741 == ((rt_int)9LL))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel741 == ((rt_int)12LL))) {
F->result_ = rt_str("rt_mbox", 7);
goto ret_;
} else if (0 || (sel741 == ((rt_int)13LL))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel741 == ((rt_int)14LL))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel741 == ((rt_int)16LL))) {
F->result_ = rt_str("rset", 4);
goto ret_;
} else {
if (((*(P437)rt_nil_check(F->t_176)).cname == NULL)) {
f_declare_ctype_181(F->t_176);
} else if (((((*(P437)rt_nil_check(F->t_176)).kind == ((rt_int)7LL)) && (*(P437)rt_nil_check(F->t_176)).forward) && (!(*(P437)rt_nil_check(F->t_176)).defined))) {
(*(P437)rt_nil_check(F->t_176)).defined = 1;
f_put_27(g_out_types_468, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_176)).cname))), rt_str(" { ", 3)), f_field_decls_179(F->t_176)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_176)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_decls_179(P437 t_178) {
  struct f_field_decls_179fr *F = rt_alloc(sizeof *F);
F->t_178 = t_178;
F->f_742 = NULL;
F->f_742 = (*(P437)rt_nil_check(F->t_178)).fields;
F->s_743 = NULL;
F->s_743 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_742 != NULL)) {
F->s_743 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->s_743)), f_ctype_177((*(P439)rt_nil_check(F->f_742)).t)), rt_str(" ", 1)), f_field_c_17(&(*(P428)rt_nil_check((*(P439)rt_nil_check(F->f_742)).name)))), rt_str("; ", 2)); b_; }));
F->f_742 = (*(P439)rt_nil_check(F->f_742)).next;
}
F->result_ = (*(P428)rt_nil_check(F->s_743));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_declare_ctype_181(P437 t_180) {
  struct f_declare_ctype_181fr *F = rt_alloc(sizeof *F);
F->t_180 = t_180;
F->u_744 = NULL;
F->u_744 = g_all_types_466;
if ((((*(P437)rt_nil_check(F->t_180)).kind == ((rt_int)8LL)) && ((*(P437)rt_nil_check(F->t_180)).target == NULL))) {
f_finish_ptr_249(F->t_180);
if (((*(P437)rt_nil_check(F->t_180)).cname != NULL)) {
goto ret_;
}
}
if (((*(P437)rt_nil_check(F->t_180)).kind != ((rt_int)8LL))) {
while ((F->u_744 != NULL)) {
if ((((*(P437)rt_nil_check(F->u_744)).kind == (*(P437)rt_nil_check(F->t_180)).kind) && f_same_164(F->u_744, F->t_180))) {
(*(P437)rt_nil_check(F->t_180)).cname = (*(P437)rt_nil_check(F->u_744)).cname;
goto ret_;
}
F->u_744 = (*(P437)rt_nil_check(F->u_744)).next;
}
}
if ((((*(P437)rt_nil_check(F->t_180)).kind == ((rt_int)15LL)) && ((*(P437)rt_nil_check(F->t_180)).tparams == NULL))) {
(*(P437)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_177((*(P437)rt_nil_check(F->t_180)).under); b_; }));
goto ret_;
}
if (((*(P437)rt_nil_check(F->t_180)).kind == ((rt_int)6LL))) {
(*(P437)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P437)rt_nil_check(F->t_180)).kind == ((rt_int)15LL))) {
(*(P437)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((*(P437)rt_nil_check(F->t_180)).kind == ((rt_int)7LL))) {
(*(P437)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P437)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P437)rt_nil_check(F->t_180)).next = g_all_types_466;
g_all_types_466 = F->t_180;
if (((*(P437)rt_nil_check(F->t_180)).kind == ((rt_int)8LL))) {
F->target_745 = NULL;
F->target_745 = (*(P437)rt_nil_check(F->t_180)).target;
if (((*(P437)rt_nil_check(F->target_745)).kind == ((rt_int)7LL))) {
if (((*(P437)rt_nil_check(F->target_745)).cname == NULL)) {
(*(P437)rt_nil_check(F->target_745)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P437)rt_nil_check(F->target_745)).next = g_all_types_466;
g_all_types_466 = F->target_745;
f_put_27(g_out_types_468, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->target_745)).cname))), rt_str(" ", 1)), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->target_745)).cname))), rt_str(";", 1)); b_; }));
(*(P437)rt_nil_check(F->target_745)).forward = 1;
}
f_put_27(g_out_types_468, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->target_745)).cname))), rt_str(" *", 2)), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_468, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_177(F->target_745)), rt_str(" *", 2)), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P437)rt_nil_check(F->t_180)).kind == ((rt_int)6LL))) {
f_put_27(g_out_types_468, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_468, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_180)).cname))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_177((*(P437)rt_nil_check(F->t_180)).elem)), rt_str(" *p; };", 7)); b_; }));
} else if (((*(P437)rt_nil_check(F->t_180)).kind == ((rt_int)15LL))) {
F->p_746 = NULL;
F->p_746 = (*(P437)rt_nil_check(F->t_180)).tparams;
F->fs_747 = NULL;
F->fs_747 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_746 != NULL)) {
F->fs_747 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->fs_747)), rt_str("rt_int p_", 9)), f_lower_s_15(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_746)).name)))), rt_str("; ", 2)); b_; }));
F->p_746 = (*(P433)rt_nil_check(F->p_746)).next;
}
f_put_27(g_out_types_468, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_468, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_180)).cname))), rt_str(" {", 2)), (*(P428)rt_nil_check(F->fs_747))), f_ctype_177((*(P437)rt_nil_check(F->t_180)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_468, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
(*(P437)rt_nil_check(F->t_180)).defined = 1;
f_put_27(g_out_types_468, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_180)).cname))), rt_str(" { ", 3)), f_field_decls_179(F->t_180)), rt_str(" };", 3)); b_; }));
}
ret_:
  return;
}

static void f_init_ascii_182(void) {
  struct f_init_ascii_182fr *F = rt_alloc(sizeof *F);
F->names_748 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)));
F->head_749 = NULL;
F->tail_750 = NULL;
F->start_751 = ((rt_int)1LL);
{ rt_int lo753 = ((rt_int)1LL), hi754 = (F->names_748).len;
for (rt_int it755 = lo753; it755 <= hi754; it755++) {
F->i_752 = it755;
if ((rt_str_get(F->names_748, F->i_752) == 32)) {
F->lit_756 = NULL;
F->lit_756 = f_nn_48(((rt_int)4LL), ((rt_int)0LL));
(*(P433)rt_nil_check(F->lit_756)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice(F->names_748, F->start_751, rt_sub(F->i_752, ((rt_int)1LL))); b_; }));
f_append_52(&F->head_749, &F->tail_750, F->lit_756);
F->start_751 = rt_add(F->i_752, ((rt_int)1LL));
}
}
}
g_ty_ascii_495 = f_new_typ_157(((rt_int)4LL));
(*(P437)rt_nil_check(g_ty_ascii_495)).lits = F->head_749;
(*(P437)rt_nil_check(g_ty_ascii_495)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  return;
}

static rt_int f_lit_index_185(P433 lits_183, rstr *name_184) {
  struct f_lit_index_185fr *F = rt_alloc(sizeof *F);
F->lits_183 = lits_183;
F->name_184 = name_184;
F->i_757 = ((rt_int)0LL);
F->l_758 = NULL;
F->l_758 = F->lits_183;
while ((F->l_758 != NULL)) {
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->l_758)).name)), (*F->name_184))) {
F->result_ = F->i_757;
goto ret_;
}
F->i_757 = rt_add(F->i_757, ((rt_int)1LL));
F->l_758 = (*(P433)rt_nil_check(F->l_758)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P437 f_resolve_subtype_188(P433 st_186, P435 *c_187) {
  struct f_resolve_subtype_188fr *F = rt_alloc(sizeof *F);
F->st_186 = st_186;
F->c_187 = c_187;
F->t_759 = NULL;
F->dummy_761 = NULL;
(*F->c_187) = f_new_cons_158();
{ rt_int sel762 = (*(P433)rt_nil_check(F->st_186)).kind;
if (0 || (sel762 == ((rt_int)70LL))) {
if (((*(P433)rt_nil_check(F->st_186)).a != NULL)) {
(*(P435)rt_nil_check((*F->c_187))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380((*(P433)rt_nil_check(F->st_186)).a, g_ty_int_492, &F->dummy_761); b_; }));
(*(P435)rt_nil_check((*F->c_187))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380((*(P433)rt_nil_check(F->st_186)).b, g_ty_int_492, &F->dummy_761); b_; }));
(*(P435)rt_nil_check((*F->c_187))).mlo = f_manifest_207((*(P433)rt_nil_check(F->st_186)).a, &F->ok_760);
(*(P435)rt_nil_check((*F->c_187))).hasm = F->ok_760;
(*(P435)rt_nil_check((*F->c_187))).mhi = f_manifest_207((*(P433)rt_nil_check(F->st_186)).b, &F->ok_760);
(*(P435)rt_nil_check((*F->c_187))).hasm = ((*(P435)rt_nil_check((*F->c_187))).hasm && F->ok_760);
}
F->result_ = g_ty_int_492;
goto ret_;
} else if (0 || (sel762 == ((rt_int)71LL))) {
F->result_ = g_ty_float_494;
goto ret_;
} else if (0 || (sel762 == ((rt_int)72LL))) {
F->t_759 = f_new_typ_157(((rt_int)4LL));
(*(P437)rt_nil_check(F->t_759)).lits = (*(P433)rt_nil_check(F->st_186)).a;
if (((*(P433)rt_nil_check(F->st_186)).b != NULL)) {
(*(P435)rt_nil_check((*F->c_187))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380((*(P433)rt_nil_check(F->st_186)).b, F->t_759, &F->dummy_761); b_; }));
(*(P435)rt_nil_check((*F->c_187))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380((*(P433)rt_nil_check(F->st_186)).c, F->t_759, &F->dummy_761); b_; }));
}
F->result_ = F->t_759;
goto ret_;
} else if (0 || (sel762 == ((rt_int)73LL))) {
F->t_759 = f_resolve_subtype_188((*(P433)rt_nil_check(F->st_186)).a, &(*F->c_187));
if ((!f_same_164(F->t_759, g_ty_ascii_495))) {
f_fail_23((*(P433)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
(*F->c_187) = f_new_cons_158();
if (((*(P433)rt_nil_check(F->st_186)).b != NULL)) {
(*(P435)rt_nil_check((*F->c_187))).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380((*(P433)rt_nil_check(F->st_186)).b, g_ty_int_492, &F->dummy_761); b_; }));
}
F->result_ = g_ty_string_496;
goto ret_;
} else if (0 || (sel762 == ((rt_int)74LL))) {
if ((f_list_len_54((*(P433)rt_nil_check(F->st_186)).a) > ((rt_int)2LL))) {
f_fail_23((*(P433)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("arrays of more than two dimensions are not handled", 50); b_; }));
}
{
F->ic_763 = NULL;
F->ic2_764 = NULL;
F->ec_765 = NULL;
F->it_766 = NULL;
F->it_766 = f_resolve_subtype_188((*(P433)rt_nil_check(F->st_186)).a, &F->ic_763);
F->et_767 = NULL;
F->et_767 = f_resolve_subtype_188((*(P433)rt_nil_check(F->st_186)).b, &F->ec_765);
F->ic_763 = f_base_cons_169(F->it_766, F->ic_763);
F->t_759 = f_new_typ_157(((rt_int)6LL));
(*(P437)rt_nil_check(F->t_759)).idx = F->it_766;
(*(P437)rt_nil_check(F->t_759)).elem = F->et_767;
(*(P437)rt_nil_check(F->t_759)).elemcons = F->ec_765;
(*(P437)rt_nil_check(F->t_759)).elemst = (*(P433)rt_nil_check(F->st_186)).b;
if (((*(P435)rt_nil_check(F->ic_763)).lo != NULL)) {
(*(P435)rt_nil_check((*F->c_187))).lo = (*(P435)rt_nil_check(F->ic_763)).lo;
(*(P435)rt_nil_check((*F->c_187))).hi = (*(P435)rt_nil_check(F->ic_763)).hi;
} else if (((*(P437)rt_nil_check(f_base_of_166(F->it_766))).kind == ((rt_int)4LL))) {
(*(P435)rt_nil_check((*F->c_187))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P435)rt_nil_check((*F->c_187))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P437)rt_nil_check(f_base_of_166(F->it_766))).lits), ((rt_int)1LL))); b_; }));
}
(*(P435)rt_nil_check((*F->c_187))).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P435)rt_nil_check((*F->c_187))).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
if (((*(P433)rt_nil_check((*(P433)rt_nil_check(F->st_186)).a)).next != NULL)) {
(*(P437)rt_nil_check(F->t_759)).idx2 = f_resolve_subtype_188((*(P433)rt_nil_check((*(P433)rt_nil_check(F->st_186)).a)).next, &F->ic2_764);
if (((*(P435)rt_nil_check(F->ic2_764)).lo != NULL)) {
(*(P435)rt_nil_check((*F->c_187))).lo2 = (*(P435)rt_nil_check(F->ic2_764)).lo;
(*(P435)rt_nil_check((*F->c_187))).hi2 = (*(P435)rt_nil_check(F->ic2_764)).hi;
} else if (((*(P437)rt_nil_check((*(P437)rt_nil_check(F->t_759)).idx2)).kind == ((rt_int)4LL))) {
(*(P435)rt_nil_check((*F->c_187))).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P435)rt_nil_check((*F->c_187))).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P437)rt_nil_check((*(P437)rt_nil_check(F->t_759)).idx2)).lits), ((rt_int)1LL))); b_; }));
}
}
}
F->result_ = F->t_759;
goto ret_;
} else if (0 || (sel762 == ((rt_int)77LL))) {
F->t_759 = f_new_typ_157(((rt_int)16LL));
{
F->ec_768 = NULL;
(*(P437)rt_nil_check(F->t_759)).elem = f_resolve_subtype_188((*(P433)rt_nil_check(F->st_186)).a, &F->ec_768);
(*(P437)rt_nil_check(F->t_759)).elemcons = F->ec_768;
}
F->result_ = F->t_759;
goto ret_;
} else if (0 || (sel762 == ((rt_int)75LL))) {
F->t_759 = f_new_typ_157(((rt_int)7LL));
{
F->comp_769 = NULL;
F->comp_769 = (*(P433)rt_nil_check(F->st_186)).a;
F->tail_770 = NULL;
while ((F->comp_769 != NULL)) {
F->cc_771 = NULL;
F->f_772 = NULL;
{ R440 *cell773 = rt_alloc(sizeof(R440));
(*cell773).name = NULL;
(*cell773).t = NULL;
(*cell773).c = NULL;
(*cell773).st = NULL;
(*cell773).next = NULL;
F->f_772 = cell773;
}
(*(P439)rt_nil_check(F->f_772)).name = (*(P433)rt_nil_check(F->comp_769)).name;
(*(P439)rt_nil_check(F->f_772)).t = f_resolve_subtype_188((*(P433)rt_nil_check(F->comp_769)).a, &F->cc_771);
(*(P439)rt_nil_check(F->f_772)).c = F->cc_771;
(*(P439)rt_nil_check(F->f_772)).st = (*(P433)rt_nil_check(F->comp_769)).a;
if ((F->tail_770 == NULL)) {
(*(P437)rt_nil_check(F->t_759)).fields = F->f_772;
} else {
(*(P439)rt_nil_check(F->tail_770)).next = F->f_772;
}
F->tail_770 = F->f_772;
F->comp_769 = (*(P433)rt_nil_check(F->comp_769)).next;
}
}
F->result_ = F->t_759;
goto ret_;
} else if (0 || (sel762 == ((rt_int)79LL))) {
F->result_ = g_ty_file_498;
goto ret_;
} else if (0 || (sel762 == ((rt_int)78LL))) {
{
F->ec_774 = NULL;
F->t_759 = f_new_typ_157(((rt_int)12LL));
(*(P437)rt_nil_check(F->t_759)).elem = f_resolve_subtype_188((*(P433)rt_nil_check(F->st_186)).a, &F->ec_774);
(*(P437)rt_nil_check(F->t_759)).elemcons = F->ec_774;
if (((*(P433)rt_nil_check(F->st_186)).b != NULL)) {
(*(P435)rt_nil_check((*F->c_187))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380((*(P433)rt_nil_check(F->st_186)).b, g_ty_int_492, &F->dummy_761); b_; }));
}
}
F->result_ = F->t_759;
goto ret_;
} else if (0 || (sel762 == ((rt_int)80LL))) {
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->st_186)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_493;
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->st_186)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_495;
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->st_186)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_500;
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->st_186)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_501;
goto ret_;
}
{
F->y_775 = NULL;
F->y_775 = f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->st_186)).name)));
if ((F->y_775 == NULL)) {
f_fail_23((*(P433)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->st_186)).name))); b_; }));
}
if (((((*(P443)rt_nil_check(F->y_775)).kind == ((rt_int)5LL)) && ((*(P443)rt_nil_check(F->y_775)).t != NULL)) && ((*(P437)rt_nil_check((*(P443)rt_nil_check(F->y_775)).t)).kind == ((rt_int)15LL)))) {
F->result_ = f_new_type_200(F->y_775, F->st_186, &(*F->c_187));
goto ret_;
}
if (((((*(P443)rt_nil_check(F->y_775)).kind == ((rt_int)6LL)) || ((*(P443)rt_nil_check(F->y_775)).kind == ((rt_int)5LL))) && ((*(P443)rt_nil_check(F->y_775)).t != NULL))) {
if (((*(P443)rt_nil_check(F->y_775)).c != NULL)) {
(*F->c_187) = (*(P443)rt_nil_check(F->y_775)).c;
}
F->result_ = (*(P443)rt_nil_check(F->y_775)).t;
goto ret_;
}
if (((((*(P443)rt_nil_check(F->y_775)).kind == ((rt_int)5LL)) && ((*(P443)rt_nil_check(F->y_775)).decl != NULL)) && ((*(P433)rt_nil_check((*(P443)rt_nil_check(F->y_775)).decl)).kind == ((rt_int)43LL)))) {
F->result_ = f_new_type_200(F->y_775, F->st_186, &(*F->c_187));
goto ret_;
}
if ((((*(P443)rt_nil_check(F->y_775)).kind == ((rt_int)6LL)) || ((*(P443)rt_nil_check(F->y_775)).kind == ((rt_int)5LL)))) {
F->result_ = f_resolve_subtype_188((*(P443)rt_nil_check(F->y_775)).st, &(*F->c_187));
goto ret_;
}
f_fail_23((*(P433)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->st_186)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_23((*(P433)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_opened_190(P437 t_189) {
  struct f_opened_190fr *F = rt_alloc(sizeof *F);
F->t_189 = t_189;
F->c_776 = NULL;
F->c_776 = g_caps_480;
if (((((*(P437)rt_nil_check(F->t_189)).kind != ((rt_int)15LL)) || ((*(P437)rt_nil_check(F->t_189)).ocap == NULL)) || ((*(P433)rt_nil_check((*(P437)rt_nil_check(F->t_189)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_776 != NULL)) {
if (((*(P453)rt_nil_check(F->c_776)).d == (*(P437)rt_nil_check(F->t_189)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_776 = (*(P453)rt_nil_check(F->c_776)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_replace_all_194(rstr *s_191, rstr *pat_192, rstr *r_193) {
  struct f_replace_all_194fr *F = rt_alloc(sizeof *F);
F->s_191 = s_191;
F->pat_192 = pat_192;
F->r_193 = r_193;
F->i_777 = ((rt_int)1LL);
if (((((*F->pat_192)).len == ((rt_int)0LL)) || (((*F->s_191)).len < ((*F->pat_192)).len))) {
F->result_ = (*F->s_191);
goto ret_;
}
while ((rt_sub(rt_add(F->i_777, ((*F->pat_192)).len), ((rt_int)1LL)) <= ((*F->s_191)).len)) {
if (rt_str_eq(rt_str_slice((*F->s_191), F->i_777, rt_sub(rt_add(F->i_777, ((*F->pat_192)).len), ((rt_int)1LL))), (*F->pat_192))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_191), ((rt_int)1LL), rt_sub(F->i_777, ((rt_int)1LL))), (*F->r_193)), f_replace_all_194(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_191), rt_add(F->i_777, ((*F->pat_192)).len), ((*F->s_191)).len); b_; }), &(*F->pat_192), &(*F->r_193)));
goto ret_;
}
F->i_777 = rt_add(F->i_777, ((rt_int)1LL));
}
F->result_ = (*F->s_191);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_subst_196(rstr *s_195) {
  struct f_subst_196fr *F = rt_alloc(sizeof *F);
F->s_195 = s_195;
F->l_778 = NULL;
F->l_778 = g_psub_482;
F->r_779 = NULL;
F->r_779 = f_mk_3(&(*F->s_195));
while ((F->l_778 != NULL)) {
F->r_779 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_194(&(*(P428)rt_nil_check(F->r_779)), &(*(P428)rt_nil_check((*(P445)rt_nil_check(F->l_778)).s)), &(*(P428)rt_nil_check((*(P445)rt_nil_check((*(P445)rt_nil_check(F->l_778)).next)).s))); b_; }));
F->l_778 = (*(P445)rt_nil_check((*(P445)rt_nil_check(F->l_778)).next)).next;
}
F->result_ = (*(P428)rt_nil_check(F->r_779));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P437 f_new_type_200(P443 y_197, P433 st_198, P435 *c_199) {
  struct f_new_type_200fr *F = rt_alloc(sizeof *F);
F->y_197 = y_197;
F->st_198 = st_198;
F->c_199 = c_199;
F->d_780 = NULL;
F->d_780 = (*(P443)rt_nil_check(F->y_197)).decl;
F->p_781 = NULL;
F->uc_782 = NULL;
(*F->c_199) = f_new_cons_158();
if (((*(P443)rt_nil_check(F->y_197)).t == NULL)) {
(*(P443)rt_nil_check(F->y_197)).t = f_new_typ_157(((rt_int)15LL));
(*(P437)rt_nil_check((*(P443)rt_nil_check(F->y_197)).t)).name = (*(P443)rt_nil_check(F->y_197)).name;
(*(P437)rt_nil_check((*(P443)rt_nil_check(F->y_197)).t)).decl = F->d_780;
(*(P437)rt_nil_check((*(P443)rt_nil_check(F->y_197)).t)).tparams = (*(P433)rt_nil_check(F->d_780)).b;
if ((g_caps_480 != NULL)) {
(*(P437)rt_nil_check((*(P443)rt_nil_check(F->y_197)).t)).ocap = (*(P453)rt_nil_check(g_caps_480)).d;
}
f_open_scope_151();
F->p_781 = (*(P433)rt_nil_check(F->d_780)).b;
while ((F->p_781 != NULL)) {
F->z_783 = NULL;
F->z_783 = f_new_sym_155(((rt_int)2LL), (*(P433)rt_nil_check(F->p_781)).name);
(*(P443)rt_nil_check(F->z_783)).t = g_ty_int_492;
(*(P443)rt_nil_check(F->z_783)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_781)).name)))), rt_str("@", 1)); b_; }));
f_define_145(F->z_783, (*(P433)rt_nil_check(F->d_780)).line);
F->p_781 = (*(P433)rt_nil_check(F->p_781)).next;
}
(*(P437)rt_nil_check((*(P443)rt_nil_check(F->y_197)).t)).under = f_resolve_subtype_188((*(P433)rt_nil_check(F->d_780)).a, &F->uc_782);
(*(P437)rt_nil_check((*(P443)rt_nil_check(F->y_197)).t)).elemcons = F->uc_782;
f_close_scope_152();
}
(*(P435)rt_nil_check((*F->c_199))).args = (*(P433)rt_nil_check(F->st_198)).b;
F->result_ = (*(P443)rt_nil_check(F->y_197)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_init_storage_204(rstr *lval_201, P437 t_202, P435 c_203) {
  struct f_init_storage_204fr *F = rt_alloc(sizeof *F);
F->lval_201 = lval_201;
F->t_202 = t_202;
F->c_203 = c_203;
if (((*(P437)rt_nil_check(F->t_202)).kind == ((rt_int)15LL))) {
F->p_784 = NULL;
F->p_784 = (*(P437)rt_nil_check(F->t_202)).tparams;
F->a_785 = NULL;
F->a_785 = (*(P435)rt_nil_check(F->c_203)).args;
F->uc_786 = NULL;
F->ut_787 = NULL;
F->at_788 = NULL;
if ((f_list_len_54(F->a_785) != f_list_len_54(F->p_784))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_202)).name))), rt_str(" needs ", 7)), f_itos_7(f_list_len_54(F->p_784))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_784 != NULL)) {
F->v_789 = rt_str_copy(f_gexpr_380(F->a_785, g_ty_int_492, &F->at_788));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p_", 3)), f_lower_s_15(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_784)).name)))), rt_str(" = ", 3)), F->v_789), rt_str(";", 1)); b_; }));
F->p_784 = (*(P433)rt_nil_check(F->p_784)).next;
F->a_785 = (*(P433)rt_nil_check(F->a_785)).next;
}
{
F->saved_790 = NULL;
F->saved_790 = g_psub_482;
F->p_784 = (*(P437)rt_nil_check(F->t_202)).tparams;
while ((F->p_784 != NULL)) {
F->l1_791 = NULL;
F->l2_792 = NULL;
{ R446 *cell793 = rt_alloc(sizeof(R446));
(*cell793).s = NULL;
(*cell793).next = NULL;
F->l1_791 = cell793;
}
{ R446 *cell794 = rt_alloc(sizeof(R446));
(*cell794).s = NULL;
(*cell794).next = NULL;
F->l2_792 = cell794;
}
(*(P445)rt_nil_check(F->l1_791)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_784)).name)))), rt_str("@", 1)); b_; }));
(*(P445)rt_nil_check(F->l2_792)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p_", 3)), f_lower_s_15(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_784)).name)))); b_; }));
(*(P445)rt_nil_check(F->l1_791)).next = F->l2_792;
(*(P445)rt_nil_check(F->l2_792)).next = g_psub_482;
g_psub_482 = F->l1_791;
F->p_784 = (*(P433)rt_nil_check(F->p_784)).next;
}
if (((*(P437)rt_nil_check(F->t_202)).tparams == NULL)) {
f_init_storage_204(&(*F->lval_201), (*(P437)rt_nil_check(F->t_202)).under, (*(P437)rt_nil_check(F->t_202)).elemcons);
} else {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_201), rt_str(".all", 4)); b_; }), (*(P437)rt_nil_check(F->t_202)).under, (*(P437)rt_nil_check(F->t_202)).elemcons);
}
g_psub_482 = F->saved_790;
}
} else if (((*(P437)rt_nil_check(F->t_202)).kind == ((rt_int)12LL))) {
if (((*(P435)rt_nil_check(F->c_203)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(&", 14), (*F->lval_201)), rt_str(", ", 2)), f_subst_196(&(*(P428)rt_nil_check((*(P435)rt_nil_check(F->c_203)).lo)))), rt_str(", sizeof(", 9)), f_ctype_177((*(P437)rt_nil_check(F->t_202)).elem)), rt_str("), ", 3)), f_mcopy_209((*(P437)rt_nil_check(F->t_202)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P437)rt_nil_check(F->t_202)).kind == ((rt_int)13LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_201)), rt_str(");", 2)); b_; }));
} else if (((*(P437)rt_nil_check(F->t_202)).kind == ((rt_int)14LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_201), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if (((*(P437)rt_nil_check(F->t_202)).kind == ((rt_int)8LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_201), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P437)rt_nil_check(F->t_202)).kind == ((rt_int)5LL))) {
if (((*(P435)rt_nil_check(F->c_203)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(" = rt_str_new(", 14)), f_subst_196(&(*(P428)rt_nil_check((*(P435)rt_nil_check(F->c_203)).slen)))), rt_str(");", 2)); b_; }));
} else if (((*(P437)rt_nil_check(F->t_202)).kind == ((rt_int)6LL))) {
if (((*(P435)rt_nil_check(F->c_203)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".lo = ", 6)), f_subst_196(&(*(P428)rt_nil_check((*(P435)rt_nil_check(F->c_203)).lo)))), rt_str("; ", 2)), (*F->lval_201)), rt_str(".hi = ", 6)), f_subst_196(&(*(P428)rt_nil_check((*(P435)rt_nil_check(F->c_203)).hi)))), rt_str("; ", 2)), (*F->lval_201)), rt_str(".lo2 = ", 7)), f_subst_196(&(*(P428)rt_nil_check((*(P435)rt_nil_check(F->c_203)).lo2)))), rt_str("; ", 2)), (*F->lval_201)), rt_str(".hi2 = ", 7)), f_subst_196(&(*(P428)rt_nil_check((*(P435)rt_nil_check(F->c_203)).hi2)))), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_177((*(P437)rt_nil_check(F->t_202)).elem)), rt_str(") * (size_t)RT_CNT(", 19)), (*F->lval_201)), rt_str("));", 3)); b_; }));
if ((((((((((*(P437)rt_nil_check((*(P437)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)5LL)) || ((*(P437)rt_nil_check((*(P437)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)6LL))) || ((*(P437)rt_nil_check((*(P437)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)7LL))) || ((*(P437)rt_nil_check((*(P437)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)15LL))) || ((*(P437)rt_nil_check((*(P437)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)8LL))) || ((*(P437)rt_nil_check((*(P437)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)12LL))) || ((*(P437)rt_nil_check((*(P437)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)13LL))) || ((*(P437)rt_nil_check((*(P437)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)14LL)))) {
F->i_795 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_795), rt_str(" = 0; ", 6)), F->i_795), rt_str(" < RT_CNT(", 10)), (*F->lval_201)), rt_str("); ", 3)), F->i_795), rt_str("++) {", 5)); b_; }));
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p[", 3)), F->i_795), rt_str("]", 1)); b_; }), (*(P437)rt_nil_check(F->t_202)).elem, (*(P437)rt_nil_check(F->t_202)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P437)rt_nil_check(F->t_202)).kind == ((rt_int)7LL))) {
F->f_796 = NULL;
F->f_796 = (*(P437)rt_nil_check(F->t_202)).fields;
while ((F->f_796 != NULL)) {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".", 1)), f_field_c_17(&(*(P428)rt_nil_check((*(P439)rt_nil_check(F->f_796)).name)))); b_; }), (*(P439)rt_nil_check(F->f_796)).t, (*(P439)rt_nil_check(F->f_796)).c);
F->f_796 = (*(P439)rt_nil_check(F->f_796)).next;
}
}
ret_:
  return;
}

static rt_int f_manifest_207(P433 e_205, int *ok_206) {
  struct f_manifest_207fr *F = rt_alloc(sizeof *F);
F->e_205 = e_205;
F->ok_206 = ok_206;
(*F->ok_206) = 0;
if (((*(P433)rt_nil_check(F->e_205)).kind == ((rt_int)1LL))) {
(*F->ok_206) = 1;
F->result_ = (*(P433)rt_nil_check(F->e_205)).ival;
goto ret_;
} else if (((*(P433)rt_nil_check(F->e_205)).kind == ((rt_int)17LL))) {
F->result_ = f_manifest_207((*(P433)rt_nil_check(F->e_205)).a, &(*F->ok_206));
goto ret_;
} else if ((((*(P433)rt_nil_check(F->e_205)).kind == ((rt_int)8LL)) && rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_205)).name)), rt_str("-", 1)))) {
F->a_797 = f_manifest_207((*(P433)rt_nil_check(F->e_205)).a, &(*F->ok_206));
F->result_ = rt_neg(F->a_797);
goto ret_;
} else if ((((*(P433)rt_nil_check(F->e_205)).kind == ((rt_int)9LL)) && ((rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_205)).name)), rt_str("+", 1)) || rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_205)).name)), rt_str("-", 1))) || rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_205)).name)), rt_str("*", 1))))) {
F->a_797 = f_manifest_207((*(P433)rt_nil_check(F->e_205)).a, &(*F->ok_206));
F->b_798 = f_manifest_207((*(P433)rt_nil_check(F->e_205)).b, &F->ok2_799);
(*F->ok_206) = ((*F->ok_206) && F->ok2_799);
if ((!(*F->ok_206))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_205)).name)), rt_str("+", 1))) {
F->result_ = rt_add(F->a_797, F->b_798);
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_205)).name)), rt_str("-", 1))) {
F->result_ = rt_sub(F->a_797, F->b_798);
goto ret_;
}
F->result_ = rt_mul(F->a_797, F->b_798);
goto ret_;
} else if (((*(P433)rt_nil_check(F->e_205)).kind == ((rt_int)7LL))) {
F->y_800 = NULL;
F->y_800 = f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_205)).name)));
if ((((F->y_800 != NULL) && ((*(P443)rt_nil_check(F->y_800)).kind == ((rt_int)2LL))) && (*(P443)rt_nil_check(F->y_800)).hasmv)) {
(*F->ok_206) = 1;
F->result_ = (*(P443)rt_nil_check(F->y_800)).mvalue;
goto ret_;
}
}
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_mcopy_209(P437 t_208) {
  struct f_mcopy_209fr *F = rt_alloc(sizeof *F);
F->t_208 = t_208;
F->ct_801 = rt_str_copy(f_ctype_177(F->t_208));
F->name_802 = rt_str_new(rt_add((F->ct_801).len, ((rt_int)3LL)));
rt_str_assign(&F->name_802, rt_str_cat(rt_str("mc_", 3), F->ct_801));
F->l_803 = NULL;
if ((!f_seen_name_230(g_mcopies_491, &F->name_802))) {
{ R446 *cell804 = rt_alloc(sizeof(R446));
(*cell804).s = NULL;
(*cell804).next = NULL;
F->l_803 = cell804;
}
(*(P445)rt_nil_check(F->l_803)).s = f_mk_3(&F->name_802);
(*(P445)rt_nil_check(F->l_803)).next = g_mcopies_491;
g_mcopies_491 = F->l_803;
f_put_27(g_out_protos_470, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_802), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_472, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_802), rt_str("(void *d, const void *s) { *(", 29)), F->ct_801), rt_str(" *)d = ", 7)), f_copy_code_219(F->t_208, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_801), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_802;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_composite_211(P437 t_210) {
  struct f_composite_211fr *F = rt_alloc(sizeof *F);
F->t_210 = t_210;
F->result_ = ((((*(P437)rt_nil_check(F->t_210)).kind == ((rt_int)6LL)) || ((*(P437)rt_nil_check(F->t_210)).kind == ((rt_int)7LL))) || (((*(P437)rt_nil_check(F->t_210)).kind == ((rt_int)15LL)) && ((*(P437)rt_nil_check(F->t_210)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_assign_code_216(rstr *lval_212, P437 t_213, rstr *v_214, P435 c_215) {
  struct f_assign_code_216fr *F = rt_alloc(sizeof *F);
F->lval_212 = lval_212;
F->t_213 = t_213;
F->v_214 = v_214;
F->c_215 = c_215;
if ((((*(P437)rt_nil_check(F->t_213)).kind == ((rt_int)15LL)) && ((*(P437)rt_nil_check(F->t_213)).tparams == NULL))) {
F->result_ = f_assign_code_216(&(*F->lval_212), (*(P437)rt_nil_check(F->t_213)).under, &(*F->v_214), F->c_215);
goto ret_;
}
if (f_composite_211(F->t_213)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_177(F->t_213)), rt_str("(&", 2)), (*F->lval_212)), rt_str(", ", 2)), (*F->v_214)), rt_str(");", 2));
goto ret_;
}
if (((*(P437)rt_nil_check(F->t_213)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_212)), rt_str(", ", 2)), (*F->v_214)), rt_str(");", 2));
goto ret_;
} else if ((((*(P437)rt_nil_check(F->t_213)).kind == ((rt_int)6LL)) || ((*(P437)rt_nil_check(F->t_213)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_177(F->t_213)), rt_str("(&", 2)), (*F->lval_212)), rt_str(", ", 2)), (*F->v_214)), rt_str(");", 2));
goto ret_;
} else if (((((*(P437)rt_nil_check(F->t_213)).kind == ((rt_int)1LL)) && (F->c_215 != NULL)) && (*(P435)rt_nil_check(F->c_215)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_212), rt_str(" = rt_range(", 12)), (*F->v_214)), rt_str(", ", 2)), f_itos_7((*(P435)rt_nil_check(F->c_215)).mlo)), rt_str(", ", 2)), f_itos_7((*(P435)rt_nil_check(F->c_215)).mhi)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_212), rt_str(" = ", 3)), (*F->v_214)), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_copy_code_219(P437 t_217, rstr *v_218) {
  struct f_copy_code_219fr *F = rt_alloc(sizeof *F);
F->t_217 = t_217;
F->v_218 = v_218;
if ((((*(P437)rt_nil_check(F->t_217)).kind == ((rt_int)15LL)) && ((*(P437)rt_nil_check(F->t_217)).tparams == NULL))) {
F->result_ = f_copy_code_219((*(P437)rt_nil_check(F->t_217)).under, &(*F->v_218));
goto ret_;
}
if (f_composite_211(F->t_217)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_177(F->t_217)), rt_str("(", 1)), (*F->v_218)), rt_str(")", 1));
goto ret_;
}
if (((*(P437)rt_nil_check(F->t_217)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_218)), rt_str(")", 1));
goto ret_;
} else if ((((*(P437)rt_nil_check(F->t_217)).kind == ((rt_int)6LL)) || ((*(P437)rt_nil_check(F->t_217)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_177(F->t_217)), rt_str("(", 1)), (*F->v_218)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_218);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_eq_code_223(P437 t_220, rstr *a_221, rstr *b_222) {
  struct f_eq_code_223fr *F = rt_alloc(sizeof *F);
F->t_220 = t_220;
F->a_221 = a_221;
F->b_222 = b_222;
if ((((*(P437)rt_nil_check(F->t_220)).kind == ((rt_int)15LL)) && ((*(P437)rt_nil_check(F->t_220)).tparams == NULL))) {
F->result_ = f_eq_code_223((*(P437)rt_nil_check(F->t_220)).under, &(*F->a_221), &(*F->b_222));
goto ret_;
}
if (f_composite_211(F->t_220)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_177(F->t_220)), rt_str("(", 1)), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
if (((*(P437)rt_nil_check(F->t_220)).kind == ((rt_int)16LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
if (((*(P437)rt_nil_check(F->t_220)).kind == ((rt_int)14LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_221)), rt_str(" == ", 4)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
if ((((*(P437)rt_nil_check(F->t_220)).kind == ((rt_int)12LL)) || ((*(P437)rt_nil_check(F->t_220)).kind == ((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P437)rt_nil_check(F->t_220)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
} else if ((((*(P437)rt_nil_check(F->t_220)).kind == ((rt_int)6LL)) || ((*(P437)rt_nil_check(F->t_220)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_177(F->t_220)), rt_str("(", 1)), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_221)), rt_str(" == ", 4)), (*F->b_222)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_elem_assign_227(rstr *lval_224, P437 t_225, rstr *v_226) {
  struct f_elem_assign_227fr *F = rt_alloc(sizeof *F);
F->lval_224 = lval_224;
F->t_225 = t_225;
F->v_226 = v_226;
F->result_ = f_assign_code_216(&(*F->lval_224), F->t_225, &(*F->v_226), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_seen_name_230(P445 l_228, rstr *s_229) {
  struct f_seen_name_230fr *F = rt_alloc(sizeof *F);
F->l_228 = l_228;
F->s_229 = s_229;
F->p_805 = NULL;
F->p_805 = F->l_228;
while ((F->p_805 != NULL)) {
if (rt_str_eq((*(P428)rt_nil_check((*(P445)rt_nil_check(F->p_805)).s)), (*F->s_229))) {
F->result_ = 1;
goto ret_;
}
F->p_805 = (*(P445)rt_nil_check(F->p_805)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_emit_helpers_231(void) {
  struct f_emit_helpers_231fr *F = rt_alloc(sizeof *F);
F->order_806 = NULL;
F->t_807 = NULL;
F->t_807 = g_all_types_466;
F->done_808 = NULL;
while ((F->t_807 != NULL)) {
if ((f_composite_211(F->t_807) && (!f_seen_name_230(F->done_808, &(*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_807)).cname)))))) {
F->l_809 = NULL;
F->c_810 = rt_str_new(((*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_807)).cname))).len);
rt_str_assign(&F->c_810, (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_807)).cname)));
{ R446 *cell811 = rt_alloc(sizeof(R446));
(*cell811).s = NULL;
(*cell811).next = NULL;
F->l_809 = cell811;
}
(*(P445)rt_nil_check(F->l_809)).s = (*(P437)rt_nil_check(F->t_807)).cname;
(*(P445)rt_nil_check(F->l_809)).next = F->done_808;
F->done_808 = F->l_809;
f_put_27(g_out_helpers_469, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_810), rt_str("(", 1)), F->c_810), rt_str(" *d, ", 5)), F->c_810), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_469, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_810), rt_str(" cp_", 4)), F->c_810), rt_str("(", 1)), F->c_810), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_469, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_810), rt_str("(", 1)), F->c_810), rt_str(" a, ", 4)), F->c_810), rt_str(" b);", 4)); b_; }));
f_helper_bodies_233(F->t_807);
}
F->t_807 = (*(P437)rt_nil_check(F->t_807)).next;
}
ret_:
  return;
}

static void f_helper_bodies_233(P437 t_232) {
  struct f_helper_bodies_233fr *F = rt_alloc(sizeof *F);
F->t_232 = t_232;
F->c_812 = rt_str_new(((*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_232)).cname))).len);
rt_str_assign(&F->c_812, (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_232)).cname)));
F->b_813 = NULL;
F->b_813 = g_out_funcs_472;
if (((*(P437)rt_nil_check(F->t_232)).kind == ((rt_int)6LL))) {
F->e_814 = NULL;
F->e_814 = (*(P437)rt_nil_check(F->t_232)).elem;
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_812), rt_str("(", 1)), F->c_812), rt_str(" *d, ", 5)), F->c_812), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, ", 99), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), f_elem_assign_227(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_814, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_812), rt_str(" cp_", 4)), F->c_812), rt_str("(", 1)), F->c_812), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_812), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_177(F->e_814)), rt_str(") * (size_t)RT_CNT(s));", 23)); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), f_copy_code_219(F->e_814, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_812), rt_str("(", 1)), F->c_812), rt_str(" a, ", 4)), F->c_812), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;", 77); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), f_eq_code_223(F->e_814, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P437)rt_nil_check(F->t_232)).kind == ((rt_int)15LL))) {
F->p_815 = NULL;
F->p_815 = (*(P437)rt_nil_check(F->t_232)).tparams;
F->pc_816 = NULL;
F->pc_816 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->p_815 != NULL)) {
F->pc_816 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->pc_816)), rt_str(" || d->p_", 9)), f_lower_s_15(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_815)).name)))), rt_str(" != s.p_", 8)), f_lower_s_15(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_815)).name)))); b_; }));
F->p_815 = (*(P433)rt_nil_check(F->p_815)).next;
}
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_812), rt_str("(", 1)), F->c_812), rt_str(" *d, ", 5)), F->c_812), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P428)rt_nil_check(F->pc_816))), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("constraint", 10)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_227(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P437)rt_nil_check(F->t_232)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_812), rt_str(" cp_", 4)), F->c_812), rt_str("(", 1)), F->c_812), rt_str(" s) { s.all = ", 14)), f_copy_code_219((*(P437)rt_nil_check(F->t_232)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_812), rt_str("(", 1)), F->c_812), rt_str(" a, ", 4)), F->c_812), rt_str(" b) { return ", 13)), f_eq_code_223((*(P437)rt_nil_check(F->t_232)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else {
F->f_817 = NULL;
F->f_817 = (*(P437)rt_nil_check(F->t_232)).fields;
F->conds_818 = NULL;
F->conds_818 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_812), rt_str("(", 1)), F->c_812), rt_str(" *d, ", 5)), F->c_812), rt_str(" s) {", 5)); b_; }));
while ((F->f_817 != NULL)) {
F->fn_819 = rt_str_copy(f_field_c_17(&(*(P428)rt_nil_check((*(P439)rt_nil_check(F->f_817)).name))));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_227(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_819); b_; }), (*(P439)rt_nil_check(F->f_817)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_819); b_; }))); b_; }));
F->f_817 = (*(P439)rt_nil_check(F->f_817)).next;
}
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_812), rt_str(" cp_", 4)), F->c_812), rt_str("(", 1)), F->c_812), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_812), rt_str(" d = s;", 7)); b_; }));
F->f_817 = (*(P437)rt_nil_check(F->t_232)).fields;
while ((F->f_817 != NULL)) {
F->fn_820 = rt_str_copy(f_field_c_17(&(*(P428)rt_nil_check((*(P439)rt_nil_check(F->f_817)).name))));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_820), rt_str(" = ", 3)), f_copy_code_219((*(P439)rt_nil_check(F->f_817)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_820); b_; }))), rt_str(";", 1)); b_; }));
F->conds_818 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->conds_818)), rt_str(" && ", 4)), f_eq_code_223((*(P439)rt_nil_check(F->f_817)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_820); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_820); b_; }))); b_; }));
F->f_817 = (*(P439)rt_nil_check(F->f_817)).next;
}
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_812), rt_str("(", 1)), F->c_812), rt_str(" a, ", 4)), F->c_812), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P428)rt_nil_check(F->conds_818))), rt_str(";", 1)); b_; }));
f_put_27(F->b_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_declare_body_235(P433 elems_234) {
  struct f_declare_body_235fr *F = rt_alloc(sizeof *F);
F->elems_234 = elems_234;
F->e_821 = NULL;
F->e_821 = F->elems_234;
while ((F->e_821 != NULL)) {
if ((((*(P433)rt_nil_check(F->e_821)).kind == ((rt_int)41LL)) && ((*(P433)rt_nil_check(F->e_821)).flag == ((rt_int)0LL)))) {
f_manifest_const_237(F->e_821);
} else if (((*(P433)rt_nil_check(F->e_821)).kind == ((rt_int)47LL))) {
f_gen_capsule_245(F->e_821);
} else if (((*(P433)rt_nil_check(F->e_821)).kind == ((rt_int)48LL))) {
f_gen_expose_247(F->e_821);
} else if (((*(P433)rt_nil_check(F->e_821)).kind == ((rt_int)49LL))) {
F->y_822 = NULL;
F->y_822 = f_new_sym_155(((rt_int)7LL), (*(P433)rt_nil_check(F->e_821)).name);
(*(P443)rt_nil_check(F->y_822)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_821)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_145(F->y_822, (*(P433)rt_nil_check(F->e_821)).line);
f_put_27(g_out_globals_471, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_822)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_474, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_822)).cname))), rt_str(" = rt_exc(", 10)), f_q_18()), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_821)).name))), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P433)rt_nil_check(F->e_821)).kind == ((rt_int)42LL))) {
F->y_823 = NULL;
F->y_823 = f_new_sym_155(((rt_int)6LL), (*(P433)rt_nil_check(F->e_821)).name);
(*(P443)rt_nil_check(F->y_823)).st = (*(P433)rt_nil_check(F->e_821)).a;
f_define_145(F->y_823, (*(P433)rt_nil_check(F->e_821)).line);
} else if (((*(P433)rt_nil_check(F->e_821)).kind == ((rt_int)44LL))) {
F->y_824 = NULL;
F->y_824 = f_new_sym_155(((rt_int)5LL), (*(P433)rt_nil_check(F->e_821)).name);
F->t_825 = NULL;
F->t_825 = f_new_typ_157(((rt_int)8LL));
(*(P437)rt_nil_check(F->t_825)).name = (*(P433)rt_nil_check(F->e_821)).name;
(*(P437)rt_nil_check(F->t_825)).decl = F->e_821;
(*(P443)rt_nil_check(F->y_824)).t = F->t_825;
f_define_145(F->y_824, (*(P433)rt_nil_check(F->e_821)).line);
} else if (((*(P433)rt_nil_check(F->e_821)).kind == ((rt_int)43LL))) {
F->y_826 = NULL;
F->y_826 = f_new_sym_155(((rt_int)5LL), (*(P433)rt_nil_check(F->e_821)).name);
(*(P443)rt_nil_check(F->y_826)).st = (*(P433)rt_nil_check(F->e_821)).a;
(*(P443)rt_nil_check(F->y_826)).decl = F->e_821;
f_define_145(F->y_826, (*(P433)rt_nil_check(F->e_821)).line);
}
F->e_821 = (*(P433)rt_nil_check(F->e_821)).next;
}
F->e_821 = F->elems_234;
while ((F->e_821 != NULL)) {
if (((((*(P433)rt_nil_check(F->e_821)).kind == ((rt_int)45LL)) || ((*(P433)rt_nil_check(F->e_821)).kind == ((rt_int)46LL))) || ((*(P433)rt_nil_check(F->e_821)).kind == ((rt_int)50LL)))) {
f_declare_subprogram_251(F->e_821);
} else if (((*(P433)rt_nil_check(F->e_821)).kind == ((rt_int)51LL))) {
F->g_827 = NULL;
F->g_827 = f_new_sym_155(((rt_int)10LL), (*(P433)rt_nil_check(F->e_821)).name);
(*(P443)rt_nil_check(F->g_827)).decl = F->e_821;
(*(P443)rt_nil_check(F->g_827)).level = g_cur_level_478;
f_define_145(F->g_827, (*(P433)rt_nil_check(F->e_821)).line);
}
F->e_821 = (*(P433)rt_nil_check(F->e_821)).next;
}
ret_:
  return;
}

static void f_manifest_const_237(P433 d_236) {
  struct f_manifest_const_237fr *F = rt_alloc(sizeof *F);
F->d_236 = d_236;
F->y_830 = NULL;
F->c_831 = NULL;
if (((*(P433)rt_nil_check(F->d_236)).a != NULL)) {
if ((((*(P433)rt_nil_check((*(P433)rt_nil_check(F->d_236)).a)).kind != ((rt_int)70LL)) || ((*(P433)rt_nil_check((*(P433)rt_nil_check(F->d_236)).a)).a != NULL))) {
goto ret_;
}
}
F->v_829 = f_manifest_207((*(P433)rt_nil_check(F->d_236)).b, &F->ok_828);
if ((!F->ok_828)) {
goto ret_;
}
(*(P433)rt_nil_check(F->d_236)).flag = ((rt_int)1LL);
F->y_830 = f_new_sym_155(((rt_int)2LL), (*(P433)rt_nil_check(F->d_236)).name);
(*(P443)rt_nil_check(F->y_830)).t = g_ty_int_492;
(*(P443)rt_nil_check(F->y_830)).c = f_new_cons_158();
(*(P443)rt_nil_check(F->y_830)).mvalue = F->v_829;
(*(P443)rt_nil_check(F->y_830)).hasmv = 1;
(*(P443)rt_nil_check(F->y_830)).ro_flag = 1;
(*(P443)rt_nil_check(F->y_830)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), f_itos_7(F->v_829)), rt_str("LL)", 3)); b_; }));
f_define_145(F->y_830, (*(P433)rt_nil_check(F->d_236)).line);
ret_:
  return;
}

static int f_exported_241(P433 d_238, rstr *name_239, int *ro_240) {
  struct f_exported_241fr *F = rt_alloc(sizeof *F);
F->d_238 = d_238;
F->name_239 = name_239;
F->ro_240 = ro_240;
F->p_832 = NULL;
F->p_832 = (*(P433)rt_nil_check(F->d_238)).a;
(*F->ro_240) = 0;
if (((*(P433)rt_nil_check(F->d_238)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_832 != NULL)) {
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_832)).name)), (*F->name_239))) {
(*F->ro_240) = ((*(P433)rt_nil_check(F->p_832)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_832 = (*(P433)rt_nil_check(F->p_832)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P443 f_copy_sym_243(P443 y_242) {
  struct f_copy_sym_243fr *F = rt_alloc(sizeof *F);
F->y_242 = y_242;
F->z_833 = NULL;
{ R444 *cell834 = rt_alloc(sizeof(R444));
(*cell834).name = NULL;
(*cell834).t = NULL;
(*cell834).c = NULL;
(*cell834).access = NULL;
(*cell834).cname = NULL;
(*cell834).st = NULL;
(*cell834).decl = NULL;
(*cell834).params = NULL;
(*cell834).result = NULL;
(*cell834).members = NULL;
(*cell834).mnext = NULL;
(*cell834).binds = NULL;
(*cell834).insts = NULL;
(*cell834).chain = NULL;
(*cell834).stack = NULL;
F->z_833 = cell834;
}
(*(P443)rt_nil_check(F->z_833)).kind = (*(P443)rt_nil_check(F->y_242)).kind;
(*(P443)rt_nil_check(F->z_833)).name = (*(P443)rt_nil_check(F->y_242)).name;
(*(P443)rt_nil_check(F->z_833)).t = (*(P443)rt_nil_check(F->y_242)).t;
(*(P443)rt_nil_check(F->z_833)).c = (*(P443)rt_nil_check(F->y_242)).c;
(*(P443)rt_nil_check(F->z_833)).access = (*(P443)rt_nil_check(F->y_242)).access;
(*(P443)rt_nil_check(F->z_833)).cname = (*(P443)rt_nil_check(F->y_242)).cname;
(*(P443)rt_nil_check(F->z_833)).ro_flag = (*(P443)rt_nil_check(F->y_242)).ro_flag;
(*(P443)rt_nil_check(F->z_833)).mvalue = (*(P443)rt_nil_check(F->y_242)).mvalue;
(*(P443)rt_nil_check(F->z_833)).hasmv = (*(P443)rt_nil_check(F->y_242)).hasmv;
(*(P443)rt_nil_check(F->z_833)).st = (*(P443)rt_nil_check(F->y_242)).st;
(*(P443)rt_nil_check(F->z_833)).decl = (*(P443)rt_nil_check(F->y_242)).decl;
(*(P443)rt_nil_check(F->z_833)).params = (*(P443)rt_nil_check(F->y_242)).params;
(*(P443)rt_nil_check(F->z_833)).result = (*(P443)rt_nil_check(F->y_242)).result;
(*(P443)rt_nil_check(F->z_833)).level = (*(P443)rt_nil_check(F->y_242)).level;
(*(P443)rt_nil_check(F->z_833)).byref = (*(P443)rt_nil_check(F->y_242)).byref;
(*(P443)rt_nil_check(F->z_833)).members = (*(P443)rt_nil_check(F->y_242)).members;
F->result_ = F->z_833;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_gen_capsule_245(P433 d_244) {
  struct f_gen_capsule_245fr *F = rt_alloc(sizeof *F);
F->d_244 = d_244;
F->y_835 = NULL;
F->y_835 = f_new_sym_155(((rt_int)8LL), (*(P433)rt_nil_check(F->d_244)).name);
F->cr_836 = NULL;
F->ctx_837 = NULL;
F->m_838 = NULL;
F->p_839 = NULL;
F->p_839 = (*(P433)rt_nil_check(F->d_244)).a;
(*(P443)rt_nil_check(F->y_835)).decl = F->d_244;
{ R454 *cell841 = rt_alloc(sizeof(R454));
(*cell841).d = NULL;
(*cell841).next = NULL;
F->cr_836 = cell841;
}
(*(P453)rt_nil_check(F->cr_836)).d = F->d_244;
(*(P453)rt_nil_check(F->cr_836)).next = g_caps_480;
g_caps_480 = F->cr_836;
f_open_scope_151();
{ R458 *cell842 = rt_alloc(sizeof(R458));
(*cell842).imps = NULL;
(*cell842).next = NULL;
F->ctx_837 = cell842;
}
(*(P457)rt_nil_check(F->ctx_837)).depth = g_depth_464;
(*(P457)rt_nil_check(F->ctx_837)).imps = (*(P433)rt_nil_check(F->d_244)).d;
(*(P457)rt_nil_check(F->ctx_837)).all_imp = ((*(P433)rt_nil_check(F->d_244)).flag >= ((rt_int)2LL));
(*(P457)rt_nil_check(F->ctx_837)).next = g_fctx_479;
g_fctx_479 = F->ctx_837;
f_declare_body_235((*(P433)rt_nil_check(F->d_244)).c);
f_capsule_elements_278((*(P433)rt_nil_check(F->d_244)).c);
{
F->w_843 = NULL;
{ R456 *cell844 = rt_alloc(sizeof(R456));
(*cell844).d = NULL;
(*cell844).w = NULL;
(*cell844).next = NULL;
F->w_843 = cell844;
}
(*(P455)rt_nil_check(F->w_843)).d = F->d_244;
(*(P455)rt_nil_check(F->w_843)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_274((*(P433)rt_nil_check(F->d_244)).c); b_; }));
(*(P455)rt_nil_check(F->w_843)).next = g_cap_waits_481;
g_cap_waits_481 = F->w_843;
}
g_fctx_479 = (*(P457)rt_nil_check(g_fctx_479)).next;
F->m_838 = g_scope_stack_465;
while (((F->m_838 != NULL) && ((*(P443)rt_nil_check(F->m_838)).depth == g_depth_464))) {
if ((((((*(P443)rt_nil_check(F->m_838)).kind == ((rt_int)5LL)) && ((*(P443)rt_nil_check(F->m_838)).t == NULL)) && ((*(P443)rt_nil_check(F->m_838)).decl != NULL)) && ((*(P433)rt_nil_check((*(P443)rt_nil_check(F->m_838)).decl)).kind == ((rt_int)43LL)))) {
(*(P443)rt_nil_check(F->m_838)).t = f_new_type_200(F->m_838, f_nn_48(((rt_int)80LL), (*(P433)rt_nil_check(F->d_244)).line), &(*(P443)rt_nil_check(F->m_838)).c);
} else if (((((*(P443)rt_nil_check(F->m_838)).kind == ((rt_int)5LL)) || ((*(P443)rt_nil_check(F->m_838)).kind == ((rt_int)6LL))) && ((*(P443)rt_nil_check(F->m_838)).t == NULL))) {
(*(P443)rt_nil_check(F->m_838)).t = f_resolve_subtype_188((*(P443)rt_nil_check(F->m_838)).st, &(*(P443)rt_nil_check(F->m_838)).c);
} else if ((((*(P443)rt_nil_check(F->m_838)).kind == ((rt_int)5LL)) && ((*(P437)rt_nil_check((*(P443)rt_nil_check(F->m_838)).t)).kind == ((rt_int)8LL)))) {
f_finish_ptr_249((*(P443)rt_nil_check(F->m_838)).t);
}
F->m_838 = (*(P443)rt_nil_check(F->m_838)).stack;
}
F->m_838 = g_scope_stack_465;
while (((F->m_838 != NULL) && ((*(P443)rt_nil_check(F->m_838)).depth == g_depth_464))) {
if (f_exported_241(F->d_244, &(*(P428)rt_nil_check((*(P443)rt_nil_check(F->m_838)).name)), &F->ro_840)) {
F->z_845 = NULL;
F->z_845 = f_copy_sym_243(F->m_838);
if (F->ro_840) {
(*(P443)rt_nil_check(F->z_845)).ro_flag = 1;
}
(*(P443)rt_nil_check(F->z_845)).mnext = (*(P443)rt_nil_check(F->y_835)).members;
(*(P443)rt_nil_check(F->y_835)).members = F->z_845;
}
F->m_838 = (*(P443)rt_nil_check(F->m_838)).stack;
}
while ((F->p_839 != NULL)) {
if (((f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_839)).name))) == NULL) || ((*(P443)rt_nil_check(f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_839)).name))))).depth != g_depth_464))) {
f_fail_23((*(P433)rt_nil_check(F->d_244)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_839)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->d_244)).name))); b_; }));
}
F->p_839 = (*(P433)rt_nil_check(F->p_839)).next;
}
f_close_scope_152();
g_caps_480 = (*(P453)rt_nil_check(g_caps_480)).next;
f_define_145(F->y_835, (*(P433)rt_nil_check(F->d_244)).line);
ret_:
  return;
}

static void f_gen_expose_247(P433 d_246) {
  struct f_gen_expose_247fr *F = rt_alloc(sizeof *F);
F->d_246 = d_246;
F->y_846 = NULL;
F->y_846 = f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->d_246)).name)));
F->m_847 = NULL;
F->p_848 = NULL;
F->p_848 = (*(P433)rt_nil_check(F->d_246)).a;
if (((F->y_846 == NULL) || ((*(P443)rt_nil_check(F->y_846)).kind != ((rt_int)8LL)))) {
f_fail_23((*(P433)rt_nil_check(F->d_246)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->d_246)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if (((*(P433)rt_nil_check(F->d_246)).ival == ((rt_int)1LL))) {
F->m_847 = (*(P443)rt_nil_check(F->y_846)).members;
while ((F->m_847 != NULL)) {
f_define_145(f_copy_sym_243(F->m_847), (*(P433)rt_nil_check(F->d_246)).line);
F->m_847 = (*(P443)rt_nil_check(F->m_847)).mnext;
}
goto ret_;
}
while ((F->p_848 != NULL)) {
F->found_849 = 0;
F->m_847 = (*(P443)rt_nil_check(F->y_846)).members;
while ((F->m_847 != NULL)) {
if (rt_str_eq((*(P428)rt_nil_check((*(P443)rt_nil_check(F->m_847)).name)), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_848)).name)))) {
F->z_850 = NULL;
F->z_850 = f_copy_sym_243(F->m_847);
if (((*(P433)rt_nil_check(F->p_848)).ival == ((rt_int)1LL))) {
(*(P443)rt_nil_check(F->z_850)).ro_flag = 1;
}
f_define_145(F->z_850, (*(P433)rt_nil_check(F->d_246)).line);
F->found_849 = 1;
}
F->m_847 = (*(P443)rt_nil_check(F->m_847)).mnext;
}
if ((!F->found_849)) {
f_fail_23((*(P433)rt_nil_check(F->d_246)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_848)).name)), rt_str(" is not exported by ", 20)), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->d_246)).name))); b_; }));
}
F->p_848 = (*(P433)rt_nil_check(F->p_848)).next;
}
ret_:
  return;
}

static void f_finish_ptr_249(P437 t_248) {
  struct f_finish_ptr_249fr *F = rt_alloc(sizeof *F);
F->t_248 = t_248;
F->d_851 = NULL;
F->d_851 = (*(P437)rt_nil_check(F->t_248)).decl;
F->p_852 = NULL;
F->c_853 = NULL;
F->dummy_854 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_854, rt_str(" ", 1));
if (((*(P437)rt_nil_check(F->t_248)).target != NULL)) {
goto ret_;
}
f_open_scope_151();
F->p_852 = (*(P433)rt_nil_check(F->d_851)).b;
while ((F->p_852 != NULL)) {
F->y_855 = NULL;
F->y_855 = f_new_sym_155(((rt_int)2LL), (*(P433)rt_nil_check(F->p_852)).name);
(*(P443)rt_nil_check(F->y_855)).t = g_ty_int_492;
(*(P443)rt_nil_check(F->y_855)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_145(F->y_855, (*(P433)rt_nil_check(F->d_851)).line);
F->p_852 = (*(P433)rt_nil_check(F->p_852)).next;
}
(*(P437)rt_nil_check(F->t_248)).target = f_resolve_subtype_188((*(P433)rt_nil_check(F->d_851)).a, &F->c_853);
f_close_scope_152();
(*rt_str_at(&F->dummy_854, ((rt_int)1LL))) = rt_str_get(f_ctype_177(F->t_248), ((rt_int)1LL));
(*rt_str_at(&F->dummy_854, ((rt_int)1LL))) = rt_str_get(f_ctype_177((*(P437)rt_nil_check(F->t_248)).target), ((rt_int)1LL));
ret_:
  return;
}

static void f_declare_subprogram_251(P433 d_250) {
  struct f_declare_subprogram_251fr *F = rt_alloc(sizeof *F);
F->d_250 = d_250;
f_define_145(f_build_subprogram_253(F->d_250), (*(P433)rt_nil_check(F->d_250)).line);
ret_:
  return;
}

static P443 f_build_subprogram_253(P433 d_252) {
  struct f_build_subprogram_253fr *F = rt_alloc(sizeof *F);
F->d_252 = d_252;
F->y_856 = NULL;
F->p_857 = NULL;
F->p_857 = (*(P433)rt_nil_check(F->d_252)).a;
F->tail_858 = NULL;
if (((*(P433)rt_nil_check(F->d_252)).kind == ((rt_int)46LL))) {
F->y_856 = f_new_sym_155(((rt_int)3LL), (*(P433)rt_nil_check(F->d_252)).name);
} else if (((*(P433)rt_nil_check(F->d_252)).kind == ((rt_int)50LL))) {
F->y_856 = f_new_sym_155(((rt_int)9LL), (*(P433)rt_nil_check(F->d_252)).name);
} else {
F->y_856 = f_new_sym_155(((rt_int)4LL), (*(P433)rt_nil_check(F->d_252)).name);
}
while ((F->p_857 != NULL)) {
F->pm_859 = NULL;
{ R442 *cell860 = rt_alloc(sizeof(R442));
(*cell860).name = NULL;
(*cell860).t = NULL;
(*cell860).c = NULL;
(*cell860).cfield = NULL;
(*cell860).next = NULL;
F->pm_859 = cell860;
}
(*(P441)rt_nil_check(F->pm_859)).name = (*(P433)rt_nil_check(F->p_857)).name;
(*(P441)rt_nil_check(F->pm_859)).mode = (*(P433)rt_nil_check(F->p_857)).ival;
(*(P441)rt_nil_check(F->pm_859)).t = f_resolve_subtype_188((*(P433)rt_nil_check(F->p_857)).a, &(*(P441)rt_nil_check(F->pm_859)).c);
(*(P441)rt_nil_check(F->pm_859)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_857)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_858 == NULL)) {
(*(P443)rt_nil_check(F->y_856)).params = F->pm_859;
} else {
(*(P441)rt_nil_check(F->tail_858)).next = F->pm_859;
}
F->tail_858 = F->pm_859;
F->p_857 = (*(P433)rt_nil_check(F->p_857)).next;
}
(*(P443)rt_nil_check(F->y_856)).result = g_ty_void_497;
if (((*(P433)rt_nil_check(F->d_252)).b != NULL)) {
F->rc_861 = NULL;
(*(P443)rt_nil_check(F->y_856)).result = f_resolve_subtype_188((*(P433)rt_nil_check(F->d_252)).b, &F->rc_861);
}
(*(P443)rt_nil_check(F->y_856)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_348(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->d_252)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P443)rt_nil_check(F->y_856)).decl = F->d_252;
(*(P443)rt_nil_check(F->y_856)).level = g_cur_level_478;
if (((*(P433)rt_nil_check(F->d_252)).kind == ((rt_int)50LL))) {
f_put_27(g_out_globals_471, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_856)).cname))), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_856;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_element_255(P433 e_254) {
  struct f_element_255fr *F = rt_alloc(sizeof *F);
F->e_254 = e_254;
F->k_862 = (*(P433)rt_nil_check(F->e_254)).kind;
if ((((F->k_862 == ((rt_int)45LL)) || (F->k_862 == ((rt_int)46LL))) || (F->k_862 == ((rt_int)50LL)))) {
f_subprogram_267(F->e_254);
} else if (((((((F->k_862 == ((rt_int)49LL)) || (F->k_862 == ((rt_int)42LL))) || (F->k_862 == ((rt_int)43LL))) || (F->k_862 == ((rt_int)47LL))) || (F->k_862 == ((rt_int)48LL))) || (F->k_862 == ((rt_int)51LL)))) {
goto ret_;
} else if ((F->k_862 == ((rt_int)44LL))) {
f_finish_ptr_249((*(P443)rt_nil_check(f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_254)).name))))).t);
} else if ((F->k_862 == ((rt_int)40LL))) {
f_var_decl_263(F->e_254);
} else if (((F->k_862 == ((rt_int)41LL)) && ((*(P433)rt_nil_check(F->e_254)).flag == ((rt_int)0LL)))) {
f_const_decl_265(F->e_254);
} else if ((F->k_862 == ((rt_int)41LL))) {
goto ret_;
} else if ((F->k_862 == ((rt_int)33LL))) {
F->t_863 = NULL;
F->c_864 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_254)).a, g_ty_bool_493, &F->t_863));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_864), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_289(F->e_254);
}
ret_:
  return;
}

static rstr f_storage_258(rstr *name_256, P437 t_257) {
  struct f_storage_258fr *F = rt_alloc(sizeof *F);
F->name_256 = name_256;
F->t_257 = t_257;
if ((!g_in_func_477)) {
F->g_865 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_256))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_471, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177(F->t_257)), rt_str(" ", 1)), F->g_865), rt_str(";", 1)); b_; }));
g_st_field_483 = f_mk_3(&F->g_865);
F->result_ = F->g_865;
goto ret_;
}
{
F->f_866 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_256)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_476, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177(F->t_257)), rt_str(" ", 1)), F->f_866), rt_str(";", 1)); b_; }));
g_st_field_483 = f_mk_3(&F->f_866);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_866);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_bind_261(P443 y_259, rstr *access_260) {
  struct f_bind_261fr *F = rt_alloc(sizeof *F);
F->y_259 = y_259;
F->access_260 = access_260;
if (g_in_func_477) {
(*(P443)rt_nil_check(F->y_259)).level = g_cur_level_478;
(*(P443)rt_nil_check(F->y_259)).access = g_st_field_483;
} else {
(*(P443)rt_nil_check(F->y_259)).level = ((rt_int)0LL);
(*(P443)rt_nil_check(F->y_259)).access = f_mk_3(&(*F->access_260));
}
ret_:
  return;
}

static void f_var_decl_263(P433 d_262) {
  struct f_var_decl_263fr *F = rt_alloc(sizeof *F);
F->d_262 = d_262;
F->c_867 = NULL;
F->t_868 = NULL;
F->t_868 = f_resolve_subtype_188((*(P433)rt_nil_check(F->d_262)).a, &F->c_867);
F->y_869 = NULL;
F->y_869 = f_new_sym_155(((rt_int)1LL), (*(P433)rt_nil_check(F->d_262)).name);
F->access_870 = rt_str_copy(f_storage_258(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->d_262)).name)), F->t_868));
f_init_storage_204(&F->access_870, F->t_868, F->c_867);
if (((*(P433)rt_nil_check(F->d_262)).b != NULL)) {
F->vt_871 = NULL;
F->v_872 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->d_262)).b, F->t_868, &F->vt_871));
f_check_type_175(F->vt_871, F->t_868, (*(P433)rt_nil_check(F->d_262)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_216(&F->access_870, F->t_868, &F->v_872, F->c_867); b_; }));
}
(*(P443)rt_nil_check(F->y_869)).t = F->t_868;
(*(P443)rt_nil_check(F->y_869)).c = F->c_867;
f_bind_261(F->y_869, &F->access_870);
f_define_145(F->y_869, (*(P433)rt_nil_check(F->d_262)).line);
ret_:
  return;
}

static void f_const_decl_265(P433 d_264) {
  struct f_const_decl_265fr *F = rt_alloc(sizeof *F);
F->d_264 = d_264;
F->c_873 = NULL;
F->c_873 = f_new_cons_158();
F->t_874 = NULL;
F->vt_875 = NULL;
F->y_876 = NULL;
F->y_876 = f_new_sym_155(((rt_int)2LL), (*(P433)rt_nil_check(F->d_264)).name);
if (((*(P433)rt_nil_check(F->d_264)).a != NULL)) {
F->t_874 = f_resolve_subtype_188((*(P433)rt_nil_check(F->d_264)).a, &F->c_873);
}
{
F->v_878 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->d_264)).b, F->t_874, &F->vt_875));
if ((F->t_874 != NULL)) {
f_check_type_175(F->vt_875, F->t_874, (*(P433)rt_nil_check(F->d_264)).line);
} else {
F->t_874 = F->vt_875;
}
if (((*(P437)rt_nil_check(F->t_874)).kind == ((rt_int)1LL))) {
(*(P443)rt_nil_check(F->y_876)).mvalue = f_manifest_207((*(P433)rt_nil_check(F->d_264)).b, &F->ok_877);
(*(P443)rt_nil_check(F->y_876)).hasmv = F->ok_877;
}
{
F->access_879 = rt_str_copy(f_storage_258(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->d_264)).name)), F->t_874));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_879, rt_str(" = ", 3)), f_copy_code_219(F->t_874, &F->v_878)), rt_str(";", 1)); b_; }));
f_bind_261(F->y_876, &F->access_879);
}
}
(*(P443)rt_nil_check(F->y_876)).t = F->t_874;
(*(P443)rt_nil_check(F->y_876)).c = F->c_873;
(*(P443)rt_nil_check(F->y_876)).ro_flag = 1;
f_define_145(F->y_876, (*(P433)rt_nil_check(F->d_264)).line);
ret_:
  return;
}

static void f_subprogram_267(P433 d_266) {
  struct f_subprogram_267fr *F = rt_alloc(sizeof *F);
F->d_266 = d_266;
f_gen_subprogram_270(F->d_266, f_lookup_decl_142(F->d_266));
ret_:
  return;
}

static void f_gen_subprogram_270(P433 d_268, P443 y_269) {
  struct f_gen_subprogram_270fr *F = rt_alloc(sizeof *F);
F->d_268 = d_268;
F->y_269 = y_269;
F->saved_code_880 = NULL;
F->saved_code_880 = g_code_475;
F->saved_fields_881 = NULL;
F->saved_fields_881 = g_fields_buf_476;
F->saved_in_882 = g_in_func_477;
F->saved_sym_883 = NULL;
F->saved_sym_883 = g_func_sym_485;
F->saved_exits_884 = NULL;
F->saved_exits_884 = g_exits_486;
F->saved_frames_885 = g_frames_487;
F->args_886 = NULL;
F->args_886 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_887 = NULL;
F->pm_887 = (*(P443)rt_nil_check(F->y_269)).params;
F->saved_handlers_888 = NULL;
F->saved_handlers_888 = g_handlers_488;
F->saved_cleanups_889 = NULL;
F->saved_cleanups_889 = g_cleanups_489;
F->ctx_890 = NULL;
F->head_891 = NULL;
F->frame_892 = NULL;
F->frame_892 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_269)).cname)), rt_str("fr", 2)); b_; }));
F->parent_893 = NULL;
if (g_in_func_477) {
F->parent_893 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P443)rt_nil_check(g_func_sym_485)).cname)), rt_str("fr", 2)); b_; }));
}
g_code_475 = f_new_buffer_24();
g_fields_buf_476 = f_new_buffer_24();
g_in_func_477 = 1;
g_func_sym_485 = F->y_269;
g_exits_486 = NULL;
g_frames_487 = ((rt_int)0LL);
g_handlers_488 = NULL;
g_cleanups_489 = NULL;
g_cur_level_478 = rt_add(g_cur_level_478, ((rt_int)1LL));
f_open_scope_151();
{ R458 *cell894 = rt_alloc(sizeof(R458));
(*cell894).imps = NULL;
(*cell894).next = NULL;
F->ctx_890 = cell894;
}
(*(P457)rt_nil_check(F->ctx_890)).depth = g_depth_464;
(*(P457)rt_nil_check(F->ctx_890)).imps = (*(P433)rt_nil_check(F->d_268)).d;
(*(P457)rt_nil_check(F->ctx_890)).all_imp = ((*(P433)rt_nil_check(F->d_268)).flag >= ((rt_int)2LL));
(*(P457)rt_nil_check(F->ctx_890)).next = g_fctx_479;
g_fctx_479 = F->ctx_890;
if ((F->parent_893 != NULL)) {
f_put_27(g_fields_buf_476, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P428)rt_nil_check(F->parent_893))), rt_str(" *up;", 5)); b_; }));
if (((*(P443)rt_nil_check(F->y_269)).kind != ((rt_int)9LL))) {
F->args_886 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P428)rt_nil_check(F->parent_893))), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_887 != NULL)) {
F->ct_895 = rt_str_copy(f_ctype_177((*(P441)rt_nil_check(F->pm_887)).t));
F->f_896 = rt_str_copy((*(P428)rt_nil_check((*(P441)rt_nil_check(F->pm_887)).cfield)));
F->p_897 = NULL;
if ((((*(P428)rt_nil_check(F->args_886))).len > ((rt_int)0LL))) {
F->args_886 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check(F->args_886)), rt_str(", ", 2)); b_; }));
}
if (((*(P441)rt_nil_check(F->pm_887)).mode == ((rt_int)1LL))) {
F->p_897 = f_new_sym_155(((rt_int)2LL), (*(P441)rt_nil_check(F->pm_887)).name);
f_put_27(g_fields_buf_476, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_895), rt_str(" ", 1)), F->f_896), rt_str(";", 1)); b_; }));
F->args_886 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->args_886)), F->ct_895), rt_str(" ", 1)), F->f_896); b_; }));
(*(P443)rt_nil_check(F->p_897)).access = f_mk_3(&F->f_896);
if (((*(P443)rt_nil_check(F->y_269)).kind != ((rt_int)9LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_896), rt_str(" = ", 3)), f_copy_code_219((*(P441)rt_nil_check(F->pm_887)).t, &F->f_896)), rt_str(";", 1)); b_; }));
}
} else {
F->p_897 = f_new_sym_155(((rt_int)1LL), (*(P441)rt_nil_check(F->pm_887)).name);
f_put_27(g_fields_buf_476, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_895), rt_str(" *", 2)), F->f_896), rt_str(";", 1)); b_; }));
F->args_886 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->args_886)), F->ct_895), rt_str(" *", 2)), F->f_896); b_; }));
(*(P443)rt_nil_check(F->p_897)).access = f_mk_3(&F->f_896);
(*(P443)rt_nil_check(F->p_897)).byref = 1;
if (((*(P443)rt_nil_check(F->y_269)).kind != ((rt_int)9LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_896), rt_str(" = ", 3)), F->f_896), rt_str(";", 1)); b_; }));
}
}
(*(P443)rt_nil_check(F->p_897)).t = (*(P441)rt_nil_check(F->pm_887)).t;
(*(P443)rt_nil_check(F->p_897)).c = (*(P441)rt_nil_check(F->pm_887)).c;
(*(P443)rt_nil_check(F->p_897)).level = g_cur_level_478;
(*(P443)rt_nil_check(F->p_897)).ro_flag = (((*(P441)rt_nil_check(F->pm_887)).mode == ((rt_int)1LL)) || ((*(P441)rt_nil_check(F->pm_887)).mode == ((rt_int)4LL)));
f_define_145(F->p_897, (*(P433)rt_nil_check(F->d_268)).line);
F->pm_887 = (*(P441)rt_nil_check(F->pm_887)).next;
}
if (((*(P437)rt_nil_check((*(P443)rt_nil_check(F->y_269)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_fields_buf_476, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177((*(P443)rt_nil_check(F->y_269)).result)), rt_str(" result_;", 9)); b_; }));
}
f_declare_body_235((*(P433)rt_nil_check(F->d_268)).c);
f_body_elements_280((*(P433)rt_nil_check(F->d_268)).c);
f_close_scope_152();
g_fctx_479 = (*(P457)rt_nil_check(g_fctx_479)).next;
g_cur_level_478 = rt_sub(g_cur_level_478, ((rt_int)1LL));
if (((((*(P428)rt_nil_check(F->args_886))).len == ((rt_int)0LL)) || ((*(P443)rt_nil_check(F->y_269)).kind == ((rt_int)9LL)))) {
F->args_886 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P443)rt_nil_check(F->y_269)).kind == ((rt_int)9LL))) {
F->args_886 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_891 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177((*(P443)rt_nil_check(F->y_269)).result)), rt_str(" ", 1)), (*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_269)).cname))), rt_str("(", 1)), (*(P428)rt_nil_check(F->args_886))), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_470, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check(F->head_891)), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_472, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check(F->head_891)), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_484, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P428)rt_nil_check(F->frame_892))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_484, g_fields_buf_476);
f_put_27(g_out_frames_484, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P443)rt_nil_check(F->y_269)).kind == ((rt_int)9LL))) {
f_put_27(g_out_funcs_472, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P428)rt_nil_check(F->frame_892))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_472, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P428)rt_nil_check(F->frame_892))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_splice_34(g_out_funcs_472, g_code_475);
if (((*(P437)rt_nil_check((*(P443)rt_nil_check(F->y_269)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_out_funcs_472, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_472, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_27(g_out_funcs_472, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_472, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_27(g_out_funcs_472, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_472, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_472, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_475 = F->saved_code_880;
g_fields_buf_476 = F->saved_fields_881;
g_in_func_477 = F->saved_in_882;
g_func_sym_485 = F->saved_sym_883;
g_exits_486 = F->saved_exits_884;
g_frames_487 = F->saved_frames_885;
g_handlers_488 = F->saved_handlers_888;
g_cleanups_489 = F->saved_cleanups_889;
ret_:
  return;
}

static rstr f_waits_of_272(P433 d_271) {
  struct f_waits_of_272fr *F = rt_alloc(sizeof *F);
F->d_271 = d_271;
F->w_898 = NULL;
F->w_898 = g_cap_waits_481;
while ((F->w_898 != NULL)) {
if (((*(P455)rt_nil_check(F->w_898)).d == F->d_271)) {
F->result_ = (*(P428)rt_nil_check((*(P455)rt_nil_check(F->w_898)).w));
goto ret_;
}
F->w_898 = (*(P455)rt_nil_check(F->w_898)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_task_waits_274(P433 elems_273) {
  struct f_task_waits_274fr *F = rt_alloc(sizeof *F);
F->elems_273 = elems_273;
F->e_899 = NULL;
F->e_899 = F->elems_273;
F->r_900 = NULL;
F->r_900 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_899 != NULL)) {
if (((*(P433)rt_nil_check(F->e_899)).kind == ((rt_int)50LL))) {
F->r_900 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->r_900)), rt_str(" rt_await_decl(&", 16)), (*(P428)rt_nil_check((*(P443)rt_nil_check(f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_899)).name))))).cname))), rt_str("decl);", 6)); b_; }));
} else if (((*(P433)rt_nil_check(F->e_899)).kind == ((rt_int)47LL))) {
F->r_900 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check(F->r_900)), f_waits_of_272(F->e_899)); b_; }));
}
F->e_899 = (*(P433)rt_nil_check(F->e_899)).next;
}
F->result_ = (*(P428)rt_nil_check(F->r_900));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_await_tasks_276(P433 elems_275) {
  struct f_await_tasks_276fr *F = rt_alloc(sizeof *F);
F->elems_275 = elems_275;
F->w_901 = rt_str_copy(f_task_waits_274(F->elems_275));
if (((F->w_901).len > ((rt_int)0LL))) {
f_emit_29(&F->w_901);
}
ret_:
  return;
}

static void f_capsule_elements_278(P433 elems_277) {
  struct f_capsule_elements_278fr *F = rt_alloc(sizeof *F);
F->elems_277 = elems_277;
F->e_902 = NULL;
F->e_902 = F->elems_277;
while ((F->e_902 != NULL)) {
f_element_255(F->e_902);
F->e_902 = (*(P433)rt_nil_check(F->e_902)).next;
}
ret_:
  return;
}

static void f_body_elements_280(P433 elems_279) {
  struct f_body_elements_280fr *F = rt_alloc(sizeof *F);
F->elems_279 = elems_279;
f_capsule_elements_278(F->elems_279);
f_await_tasks_276(F->elems_279);
ret_:
  return;
}

static void f_gen_body_282(P433 elems_281) {
  struct f_gen_body_282fr *F = rt_alloc(sizeof *F);
F->elems_281 = elems_281;
f_open_scope_151();
f_declare_body_235(F->elems_281);
f_body_elements_280(F->elems_281);
f_close_scope_152();
ret_:
  return;
}

static void f_pop_frames_284(rt_int upto_283) {
  struct f_pop_frames_284fr *F = rt_alloc(sizeof *F);
F->upto_283 = upto_283;
F->i_903 = g_frames_487;
F->c_904 = NULL;
F->c_904 = g_cleanups_489;
while ((F->i_903 > F->upto_283)) {
f_emit_29(&(*(P428)rt_nil_check((*(P445)rt_nil_check(F->c_904)).s)));
F->c_904 = (*(P445)rt_nil_check(F->c_904)).next;
F->i_903 = rt_sub(F->i_903, ((rt_int)1LL));
}
ret_:
  return;
}

static void f_push_cleanup_286(rstr *s_285) {
  struct f_push_cleanup_286fr *F = rt_alloc(sizeof *F);
F->s_285 = s_285;
F->c_905 = NULL;
{ R446 *cell906 = rt_alloc(sizeof(R446));
(*cell906).s = NULL;
(*cell906).next = NULL;
F->c_905 = cell906;
}
(*(P445)rt_nil_check(F->c_905)).s = f_mk_3(&(*F->s_285));
(*(P445)rt_nil_check(F->c_905)).next = g_cleanups_489;
g_cleanups_489 = F->c_905;
g_frames_487 = rt_add(g_frames_487, ((rt_int)1LL));
ret_:
  return;
}

static void f_pop_cleanup_287(void) {
  struct f_pop_cleanup_287fr *F = rt_alloc(sizeof *F);
g_cleanups_489 = (*(P445)rt_nil_check(g_cleanups_489)).next;
g_frames_487 = rt_sub(g_frames_487, ((rt_int)1LL));
ret_:
  return;
}

static void f_gen_statement_289(P433 s_288) {
  struct f_gen_statement_289fr *F = rt_alloc(sizeof *F);
F->s_288 = s_288;
F->label_907 = NULL;
if (((*(P433)rt_nil_check(F->s_288)).tag != NULL)) {
F->x_908 = NULL;
{ R452 *cell909 = rt_alloc(sizeof(R452));
(*cell909).match = NULL;
(*cell909).label = NULL;
(*cell909).next = NULL;
F->x_908 = cell909;
}
F->label_907 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P451)rt_nil_check(F->x_908)).match = (*(P433)rt_nil_check(F->s_288)).tag;
(*(P451)rt_nil_check(F->x_908)).label = F->label_907;
(*(P451)rt_nil_check(F->x_908)).depth = g_frames_487;
(*(P451)rt_nil_check(F->x_908)).next = g_exits_486;
g_exits_486 = F->x_908;
}
{ rt_int sel910 = (*(P433)rt_nil_check(F->s_288)).kind;
if (0 || (sel910 == ((rt_int)20LL))) {
f_st_assign_291(F->s_288);
} else if (0 || (sel910 == ((rt_int)21LL))) {
f_st_call_293(F->s_288);
} else if (0 || (sel910 == ((rt_int)22LL))) {
f_st_if_295(F->s_288);
} else if (0 || (sel910 == ((rt_int)23LL))) {
f_st_case_297(F->s_288);
} else if (0 || (sel910 == ((rt_int)24LL))) {
f_st_repeat_299(F->s_288);
} else if (0 || (sel910 == ((rt_int)25LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_282((*(P433)rt_nil_check(F->s_288)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel910 == ((rt_int)27LL))) {
f_st_exit_301(F->s_288);
} else if (0 || (sel910 == ((rt_int)28LL))) {
f_st_return_303(F->s_288);
} else if (0 || (sel910 == ((rt_int)30LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_306(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->s_288)).name)), (*(P433)rt_nil_check(F->s_288)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel910 == ((rt_int)31LL))) {
if ((g_handlers_488 == NULL)) {
f_fail_23((*(P433)rt_nil_check(F->s_288)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P428)rt_nil_check((*(P445)rt_nil_check(g_handlers_488)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel910 == ((rt_int)26LL))) {
f_st_guard_308(F->s_288);
} else if (0 || (sel910 == ((rt_int)32LL))) {
f_st_alloc_310(F->s_288);
} else if (0 || (sel910 == ((rt_int)34LL))) {
f_st_create_314(F->s_288);
} else if (0 || (sel910 == ((rt_int)35LL))) {
f_st_wait_320(F->s_288);
} else if (0 || (sel910 == ((rt_int)36LL))) {
f_st_region_322(F->s_288);
} else {
f_fail_23((*(P433)rt_nil_check(F->s_288)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P433)rt_nil_check(F->s_288)).tag != NULL)) {
g_exits_486 = (*(P451)rt_nil_check(g_exits_486)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check(F->label_907)), rt_str(": ;", 3)); b_; }));
}
ret_:
  return;
}

static void f_st_assign_291(P433 s_290) {
  struct f_st_assign_291fr *F = rt_alloc(sizeof *F);
F->s_290 = s_290;
F->lv_911 = NULL;
F->t_912 = NULL;
F->vt_913 = NULL;
F->c_914 = NULL;
if (((((*(P433)rt_nil_check((*(P433)rt_nil_check(F->s_290)).a)).kind == ((rt_int)10LL)) && ((*(P433)rt_nil_check((*(P433)rt_nil_check(F->s_290)).a)).b != NULL)) && ((*(P433)rt_nil_check((*(P433)rt_nil_check((*(P433)rt_nil_check(F->s_290)).a)).b)).kind == ((rt_int)16LL)))) {
f_lvalue_359((*(P433)rt_nil_check((*(P433)rt_nil_check(F->s_290)).a)).a, &F->lv_911, &F->t_912, &F->c_914, &F->ro_915);
if ((F->ro_915 || ((*(P437)rt_nil_check(F->t_912)).kind != ((rt_int)5LL)))) {
f_fail_23((*(P433)rt_nil_check(F->s_290)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string variable", 40); b_; }));
}
{
F->lo_916 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check((*(P433)rt_nil_check((*(P433)rt_nil_check(F->s_290)).a)).b)).a, g_ty_int_492, &F->vt_913));
F->hi_917 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check((*(P433)rt_nil_check((*(P433)rt_nil_check(F->s_290)).a)).b)).b, g_ty_int_492, &F->vt_913));
F->v_918 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->s_290)).b, g_ty_string_496, &F->vt_913));
f_check_type_175(F->vt_913, g_ty_string_496, (*(P433)rt_nil_check(F->s_290)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P428)rt_nil_check(F->lv_911))), rt_str(", ", 2)), F->lo_916), rt_str(", ", 2)), F->hi_917), rt_str(", ", 2)), F->v_918), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_359((*(P433)rt_nil_check(F->s_290)).a, &F->lv_911, &F->t_912, &F->c_914, &F->ro_915);
if (F->ro_915) {
f_fail_23((*(P433)rt_nil_check(F->s_290)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if ((!f_opened_190(F->t_912))) {
f_fail_23((*(P433)rt_nil_check(F->s_290)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->t_912)).name))), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_919 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->s_290)).b, F->t_912, &F->vt_913));
f_check_type_175(F->vt_913, F->t_912, (*(P433)rt_nil_check(F->s_290)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_216(&(*(P428)rt_nil_check(F->lv_911)), F->t_912, &F->v_919, F->c_914); b_; }));
}
ret_:
  return;
}

static void f_st_call_293(P433 s_292) {
  struct f_st_call_293fr *F = rt_alloc(sizeof *F);
F->s_292 = s_292;
F->c_920 = NULL;
F->c_920 = (*(P433)rt_nil_check(F->s_292)).a;
F->t_921 = NULL;
if ((((*(P433)rt_nil_check(F->c_920)).kind == ((rt_int)7LL)) || ((*(P433)rt_nil_check(F->c_920)).kind == ((rt_int)12LL)))) {
F->x_922 = NULL;
F->x_922 = f_nn_48(((rt_int)10LL), (*(P433)rt_nil_check(F->c_920)).line);
(*(P433)rt_nil_check(F->x_922)).a = F->c_920;
F->c_920 = F->x_922;
}
if (((*(P433)rt_nil_check(F->c_920)).kind != ((rt_int)10LL))) {
f_fail_23((*(P433)rt_nil_check(F->s_292)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_417(F->c_920, 1, &F->t_921), rt_str(";", 1)); b_; }));
ret_:
  return;
}

static void f_st_if_295(P433 s_294) {
  struct f_st_if_295fr *F = rt_alloc(sizeof *F);
F->s_294 = s_294;
F->a_923 = NULL;
F->a_923 = (*(P433)rt_nil_check(F->s_294)).a;
F->first_924 = 1;
F->t_925 = NULL;
while ((F->a_923 != NULL)) {
F->c_926 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->a_923)).a, g_ty_bool_493, &F->t_925));
f_check_type_175(F->t_925, g_ty_bool_493, (*(P433)rt_nil_check(F->s_294)).line);
if (F->first_924) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_926), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_926), rt_str(") {", 3)); b_; }));
}
F->first_924 = 0;
f_gen_body_282((*(P433)rt_nil_check(F->a_923)).b);
F->a_923 = (*(P433)rt_nil_check(F->a_923)).next;
}
if (((*(P433)rt_nil_check(F->s_294)).flag == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_gen_body_282((*(P433)rt_nil_check(F->s_294)).b);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_case_297(P433 s_296) {
  struct f_st_case_297fr *F = rt_alloc(sizeof *F);
F->s_296 = s_296;
F->st_927 = NULL;
F->vt_928 = NULL;
F->first_929 = 1;
F->a_930 = NULL;
F->a_930 = (*(P433)rt_nil_check(F->s_296)).b;
F->sel_931 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->s_296)).a, NULL, &F->st_927));
F->tmp_932 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_177(F->st_927)), rt_str(" ", 1)), F->tmp_932), rt_str(" = ", 3)), F->sel_931), rt_str(";", 1)); b_; }));
while ((F->a_930 != NULL)) {
F->lab_933 = NULL;
F->lab_933 = (*(P433)rt_nil_check(F->a_930)).a;
F->conds_934 = NULL;
F->conds_934 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_933 != NULL)) {
if (((*(P433)rt_nil_check(F->lab_933)).b == NULL)) {
F->v_935 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->lab_933)).a, F->st_927, &F->vt_928));
f_check_type_175(F->vt_928, F->st_927, (*(P433)rt_nil_check(F->s_296)).line);
F->conds_934 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->conds_934)), rt_str(" || ", 4)), f_eq_code_223(F->st_927, &F->tmp_932, &F->v_935)); b_; }));
} else {
F->lo_936 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->lab_933)).a, F->st_927, &F->vt_928));
F->hi_937 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->lab_933)).b, F->st_927, &F->vt_928));
F->conds_934 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->conds_934)), rt_str(" || (", 5)), F->tmp_932), rt_str(" >= ", 4)), F->lo_936), rt_str(" && ", 4)), F->tmp_932), rt_str(" <= ", 4)), F->hi_937), rt_str(")", 1)); b_; }));
}
F->lab_933 = (*(P433)rt_nil_check(F->lab_933)).next;
}
if (F->first_929) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P428)rt_nil_check(F->conds_934))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P428)rt_nil_check(F->conds_934))), rt_str(") {", 3)); b_; }));
}
F->first_929 = 0;
f_gen_body_282((*(P433)rt_nil_check(F->a_930)).b);
F->a_930 = (*(P433)rt_nil_check(F->a_930)).next;
}
if (F->first_929) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P433)rt_nil_check(F->s_296)).flag == ((rt_int)1LL))) {
f_gen_body_282((*(P433)rt_nil_check(F->s_296)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_repeat_299(P433 s_298) {
  struct f_st_repeat_299fr *F = rt_alloc(sizeof *F);
F->s_298 = s_298;
F->t_938 = NULL;
F->c_939 = NULL;
if (((*(P433)rt_nil_check(F->s_298)).flag == ((rt_int)0LL))) {
F->cond_940 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->s_298)).a, g_ty_bool_493, &F->t_938));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_940), rt_str(") {", 3)); b_; }));
f_gen_body_282((*(P433)rt_nil_check(F->s_298)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_938 = f_resolve_subtype_188((*(P433)rt_nil_check(F->s_298)).a, &F->c_939);
F->c_939 = f_base_cons_169(F->t_938, F->c_939);
if ((((*(P437)rt_nil_check(f_base_of_166(F->t_938))).kind == ((rt_int)4LL)) && ((*(P435)rt_nil_check(F->c_939)).lo == NULL))) {
F->c_939 = f_new_cons_158();
(*(P435)rt_nil_check(F->c_939)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P435)rt_nil_check(F->c_939)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P437)rt_nil_check(f_base_of_166(F->t_938))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P435)rt_nil_check(F->c_939)).lo == NULL)) {
f_fail_23((*(P433)rt_nil_check(F->s_298)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_941 = rt_str_copy(f_storage_258(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->s_298)).name)), F->t_938));
F->lov_942 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_943 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_944 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_945 = NULL;
F->y_945 = f_new_sym_155(((rt_int)2LL), (*(P433)rt_nil_check(F->s_298)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_942), rt_str(" = ", 3)), (*(P428)rt_nil_check((*(P435)rt_nil_check(F->c_939)).lo))), rt_str(", ", 2)), F->hiv_943), rt_str(" = ", 3)), (*(P428)rt_nil_check((*(P435)rt_nil_check(F->c_939)).hi))), rt_str(";", 1)); b_; }));
if (((*(P433)rt_nil_check(F->s_298)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_944), rt_str(" = ", 3)), F->hiv_943), rt_str("; ", 2)), F->it_944), rt_str(" >= ", 4)), F->lov_942), rt_str("; ", 2)), F->it_944), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_944), rt_str(" = ", 3)), F->lov_942), rt_str("; ", 2)), F->it_944), rt_str(" <= ", 4)), F->hiv_943), rt_str("; ", 2)), F->it_944), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_941, rt_str(" = ", 3)), F->it_944), rt_str(";", 1)); b_; }));
f_open_scope_151();
(*(P443)rt_nil_check(F->y_945)).t = F->t_938;
(*(P443)rt_nil_check(F->y_945)).c = F->c_939;
f_bind_261(F->y_945, &F->access_941);
(*(P443)rt_nil_check(F->y_945)).ro_flag = 1;
f_define_145(F->y_945, (*(P433)rt_nil_check(F->s_298)).line);
f_gen_body_282((*(P433)rt_nil_check(F->s_298)).b);
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_exit_301(P433 s_300) {
  struct f_st_exit_301fr *F = rt_alloc(sizeof *F);
F->s_300 = s_300;
F->x_946 = NULL;
F->x_946 = g_exits_486;
while ((F->x_946 != NULL)) {
if (rt_str_eq((*(P428)rt_nil_check((*(P451)rt_nil_check(F->x_946)).match)), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->s_300)).name)))) {
f_pop_frames_284((*(P451)rt_nil_check(F->x_946)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P428)rt_nil_check((*(P451)rt_nil_check(F->x_946)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_946 = (*(P451)rt_nil_check(F->x_946)).next;
}
f_fail_23((*(P433)rt_nil_check(F->s_300)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->s_300)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  return;
}

static void f_st_return_303(P433 s_302) {
  struct f_st_return_303fr *F = rt_alloc(sizeof *F);
F->s_302 = s_302;
F->vt_947 = NULL;
if ((!g_in_func_477)) {
f_pop_frames_284(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P437)rt_nil_check((*(P443)rt_nil_check(g_func_sym_485)).result)).kind == ((rt_int)9LL))) {
if (((*(P433)rt_nil_check(F->s_302)).a != NULL)) {
f_fail_23((*(P433)rt_nil_check(F->s_302)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_284(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P433)rt_nil_check(F->s_302)).a == NULL)) {
f_fail_23((*(P433)rt_nil_check(F->s_302)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_948 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->s_302)).a, (*(P443)rt_nil_check(g_func_sym_485)).result, &F->vt_947));
f_check_type_175(F->vt_947, (*(P443)rt_nil_check(g_func_sym_485)).result, (*(P433)rt_nil_check(F->s_302)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->v_948), rt_str(";", 1)); b_; }));
f_pop_frames_284(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  return;
}

static rstr f_exc_id_306(rstr *name_304, rt_int line_305) {
  struct f_exc_id_306fr *F = rt_alloc(sizeof *F);
F->name_304 = name_304;
F->line_305 = line_305;
F->y_949 = NULL;
F->y_949 = f_lookup_140(&(*F->name_304));
if (((F->y_949 != NULL) && ((*(P443)rt_nil_check(F->y_949)).kind == ((rt_int)7LL)))) {
F->result_ = (*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_949)).cname));
goto ret_;
}
if (((((*F->name_304)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_304), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_304)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_305, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_304), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_guard_308(P433 s_307) {
  struct f_st_guard_308fr *F = rt_alloc(sizeof *F);
F->s_307 = s_307;
F->h_950 = NULL;
F->h_950 = (*(P433)rt_nil_check(F->s_307)).b;
F->first_951 = 1;
F->hv_952 = NULL;
{
F->f_953 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_954 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_286(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_953), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_953), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_953), rt_str(")) {", 4)); b_; }));
f_gen_body_282((*(P433)rt_nil_check(F->s_307)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_953), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_287();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_953), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_954), rt_str(" = rt_xcur;", 11)); b_; }));
{ R446 *cell955 = rt_alloc(sizeof(R446));
(*cell955).s = NULL;
(*cell955).next = NULL;
F->hv_952 = cell955;
}
(*(P445)rt_nil_check(F->hv_952)).s = f_mk_3(&F->x_954);
(*(P445)rt_nil_check(F->hv_952)).next = g_handlers_488;
g_handlers_488 = F->hv_952;
while ((F->h_950 != NULL)) {
F->n_956 = NULL;
F->n_956 = (*(P433)rt_nil_check(F->h_950)).a;
F->conds_957 = NULL;
F->conds_957 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_956 != NULL)) {
F->conds_957 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->conds_957)), rt_str(" || ", 4)), F->x_954), rt_str(" == ", 4)), f_exc_id_306(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->n_956)).name)), (*(P433)rt_nil_check(F->s_307)).line)); b_; }));
F->n_956 = (*(P433)rt_nil_check(F->n_956)).next;
}
if (F->first_951) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P428)rt_nil_check(F->conds_957))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P428)rt_nil_check(F->conds_957))), rt_str(") {", 3)); b_; }));
}
F->first_951 = 0;
f_gen_body_282((*(P433)rt_nil_check(F->h_950)).b);
F->h_950 = (*(P433)rt_nil_check(F->h_950)).next;
}
if (F->first_951) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P433)rt_nil_check(F->s_307)).flag == ((rt_int)1LL))) {
f_gen_body_282((*(P433)rt_nil_check(F->s_307)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_954), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_488 = (*(P445)rt_nil_check(g_handlers_488)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_alloc_310(P433 s_309) {
  struct f_st_alloc_310fr *F = rt_alloc(sizeof *F);
F->s_309 = s_309;
F->lv_958 = NULL;
F->t_959 = NULL;
F->target_960 = NULL;
F->vt_961 = NULL;
F->c_962 = NULL;
F->tc_963 = NULL;
F->d_965 = NULL;
F->p_966 = NULL;
F->a_967 = NULL;
f_lvalue_359((*(P433)rt_nil_check(F->s_309)).a, &F->lv_958, &F->t_959, &F->c_962, &F->ro_964);
if (((*(P437)rt_nil_check(F->t_959)).kind != ((rt_int)8LL))) {
f_fail_23((*(P433)rt_nil_check(F->s_309)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_249(F->t_959);
F->d_965 = (*(P437)rt_nil_check(F->t_959)).decl;
F->target_960 = (*(P437)rt_nil_check(F->t_959)).target;
if ((f_list_len_54((*(P433)rt_nil_check(F->s_309)).b) != f_list_len_54((*(P433)rt_nil_check(F->d_965)).b))) {
f_fail_23((*(P433)rt_nil_check(F->s_309)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_54((*(P433)rt_nil_check(F->d_965)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_968 = rt_str_copy(f_ctype_177(F->target_960));
F->cell_969 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_968), rt_str(" *", 2)), F->cell_969), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_968), rt_str("));", 3)); b_; }));
f_open_scope_151();
F->p_966 = (*(P433)rt_nil_check(F->d_965)).b;
F->a_967 = (*(P433)rt_nil_check(F->s_309)).b;
while ((F->p_966 != NULL)) {
F->v_970 = rt_str_copy(f_gexpr_380(F->a_967, g_ty_int_492, &F->vt_961));
F->pv_971 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_972 = NULL;
F->y_972 = f_new_sym_155(((rt_int)2LL), (*(P433)rt_nil_check(F->p_966)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_971), rt_str(" = ", 3)), F->v_970), rt_str(";", 1)); b_; }));
(*(P443)rt_nil_check(F->y_972)).t = g_ty_int_492;
(*(P443)rt_nil_check(F->y_972)).access = f_mk_3(&F->pv_971);
f_define_145(F->y_972, (*(P433)rt_nil_check(F->s_309)).line);
F->p_966 = (*(P433)rt_nil_check(F->p_966)).next;
F->a_967 = (*(P433)rt_nil_check(F->a_967)).next;
}
F->vt_961 = f_resolve_subtype_188((*(P433)rt_nil_check(F->d_965)).a, &F->tc_963);
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_969), rt_str(")", 1)); b_; }), F->target_960, F->tc_963);
f_close_scope_152();
if (((*(P433)rt_nil_check(F->s_309)).c != NULL)) {
F->v_973 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->s_309)).c, F->target_960, &F->vt_961));
f_check_type_175(F->vt_961, F->target_960, (*(P433)rt_nil_check(F->s_309)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_216(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_969), rt_str(")", 1)); b_; }), F->target_960, &F->v_973, F->tc_963); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->lv_958)), rt_str(" = ", 3)), F->cell_969), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static rstr f_act_ref_312(P433 e_311) {
  struct f_act_ref_312fr *F = rt_alloc(sizeof *F);
F->e_311 = e_311;
F->lv_974 = NULL;
F->t_975 = NULL;
F->c_976 = NULL;
if (((((*(P433)rt_nil_check(F->e_311)).kind == ((rt_int)7LL)) && rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_311)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
f_lvalue_359(F->e_311, &F->lv_974, &F->t_975, &F->c_976, &F->ro_977);
if (((*(P437)rt_nil_check(F->t_975)).kind != ((rt_int)14LL))) {
f_fail_23((*(P433)rt_nil_check(F->e_311)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (*(P428)rt_nil_check(F->lv_974));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_create_314(P433 s_313) {
  struct f_st_create_314fr *F = rt_alloc(sizeof *F);
F->s_313 = s_313;
F->y_978 = NULL;
F->y_978 = f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->s_313)).name)));
F->pm_979 = NULL;
F->a_980 = NULL;
F->a_980 = (*(P433)rt_nil_check(F->s_313)).b;
F->lv_981 = NULL;
F->lt_982 = NULL;
F->vt_983 = NULL;
F->lc_984 = NULL;
if (((F->y_978 != NULL) && ((*(P443)rt_nil_check(F->y_978)).kind == ((rt_int)10LL)))) {
F->y_978 = f_instantiate_338(F->y_978, (*(P433)rt_nil_check(F->s_313)).e, (*(P433)rt_nil_check(F->s_313)).b, (*(P433)rt_nil_check(F->s_313)).line);
}
if (((F->y_978 == NULL) || ((*(P443)rt_nil_check(F->y_978)).kind != ((rt_int)9LL)))) {
f_fail_23((*(P433)rt_nil_check(F->s_313)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->s_313)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_979 = (*(P443)rt_nil_check(F->y_978)).params;
{
F->nf_986 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
F->act_987 = rt_str_copy(f_act_ref_312((*(P433)rt_nil_check(F->s_313)).a));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_978)).cname))), rt_str("fr *", 4)), F->nf_986), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_986), rt_str(");", 2)); b_; }));
if (((*(P443)rt_nil_check(F->y_978)).level > ((rt_int)0LL))) {
F->link_988 = NULL;
F->link_988 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo990 = ((rt_int)1LL), hi991 = rt_sub(g_cur_level_478, (*(P443)rt_nil_check(F->y_978)).level);
for (rt_int it992 = lo990; it992 <= hi991; it992++) {
F->i_989 = it992;
F->link_988 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check(F->link_988)), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_986, rt_str("->up = ", 7)), (*(P428)rt_nil_check(F->link_988))), rt_str(";", 1)); b_; }));
}
while (((F->a_980 != NULL) && (F->pm_979 != NULL))) {
if (((*(P441)rt_nil_check(F->pm_979)).mode == ((rt_int)1LL))) {
F->v_993 = rt_str_copy(f_gexpr_380(F->a_980, (*(P441)rt_nil_check(F->pm_979)).t, &F->vt_983));
f_check_type_175(F->vt_983, (*(P441)rt_nil_check(F->pm_979)).t, (*(P433)rt_nil_check(F->s_313)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_986, rt_str("->", 2)), (*(P428)rt_nil_check((*(P441)rt_nil_check(F->pm_979)).cfield))), rt_str(" = ", 3)), f_copy_code_219((*(P441)rt_nil_check(F->pm_979)).t, &F->v_993)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_359(F->a_980, &F->lv_981, &F->lt_982, &F->lc_984, &F->ro_985);
f_check_type_175(F->lt_982, (*(P441)rt_nil_check(F->pm_979)).t, (*(P433)rt_nil_check(F->s_313)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_986, rt_str("->", 2)), (*(P428)rt_nil_check((*(P441)rt_nil_check(F->pm_979)).cfield))), rt_str(" = &", 4)), (*(P428)rt_nil_check(F->lv_981))), rt_str(";", 1)); b_; }));
}
F->a_980 = (*(P433)rt_nil_check(F->a_980)).next;
F->pm_979 = (*(P441)rt_nil_check(F->pm_979)).next;
}
if (((F->a_980 != NULL) || (F->pm_979 != NULL))) {
f_fail_23((*(P433)rt_nil_check(F->s_313)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->s_313)).name))); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), F->act_987), rt_str(", &", 3)), (*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_978)).cname))), rt_str("decl, ", 6)), (*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_978)).cname))), rt_str(", ", 2)), F->nf_986), rt_str("); }", 4)); b_; }));
}
ret_:
  return;
}

static rstr f_wait_alt_318(P433 inv_315, rstr *arr_316, rt_int i_317) {
  struct f_wait_alt_318fr *F = rt_alloc(sizeof *F);
F->inv_315 = inv_315;
F->arr_316 = arr_316;
F->i_317 = i_317;
F->lv_994 = NULL;
F->t_995 = NULL;
F->vt_996 = NULL;
F->c_997 = NULL;
F->fn_999 = NULL;
F->args_1000 = NULL;
F->slot_1001 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_316), rt_str("[", 1)), f_itos_7(F->i_317)), rt_str("]", 1)));
if ((((*(P433)rt_nil_check(F->inv_315)).kind != ((rt_int)10LL)) || ((*(P433)rt_nil_check((*(P433)rt_nil_check(F->inv_315)).a)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P433)rt_nil_check(F->inv_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_999 = (*(P433)rt_nil_check(F->inv_315)).a;
F->args_1000 = (*(P433)rt_nil_check(F->inv_315)).b;
if ((rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_999)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_999)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_359(F->args_1000, &F->lv_994, &F->t_995, &F->c_997, &F->ro_998);
if (((*(P437)rt_nil_check(F->t_995)).kind != ((rt_int)12LL))) {
f_fail_23((*(P433)rt_nil_check(F->inv_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_999)).name)), rt_str("RECEIVE", 7))) {
F->dv_1002 = NULL;
F->dt_1003 = NULL;
f_lvalue_359((*(P433)rt_nil_check(F->args_1000)).next, &F->dv_1002, &F->dt_1003, &F->c_997, &F->ro_998);
f_check_type_175(F->dt_1003, (*(P437)rt_nil_check(F->t_995)).elem, (*(P433)rt_nil_check(F->inv_315)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1001, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, &", 32)), (*(P428)rt_nil_check(F->lv_994))), rt_str(", &", 3)), (*(P428)rt_nil_check(F->dv_1002))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1004 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1005 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->args_1000)).next, (*(P437)rt_nil_check(F->t_995)).elem, &F->vt_996));
f_check_type_175(F->vt_996, (*(P437)rt_nil_check(F->t_995)).elem, (*(P433)rt_nil_check(F->inv_315)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_177((*(P437)rt_nil_check(F->t_995)).elem), rt_str(" ", 1)), F->tmp_1004), rt_str(" = ", 3)), F->v_1005), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1001, rt_str(" = (rt_alt){RT_ALT_SEND, 1, &", 29)), (*(P428)rt_nil_check(F->lv_994))), rt_str(", &", 3)), F->tmp_1004), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_999)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_999)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_1006 = rt_str_copy(f_gexpr_380(F->args_1000, g_ty_int_492, &F->vt_996));
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_999)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1001, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1006), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1001, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1006), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_999)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1001, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_312(F->args_1000)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P433)rt_nil_check(F->inv_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_999)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_wait_320(P433 s_319) {
  struct f_st_wait_320fr *F = rt_alloc(sizeof *F);
F->s_319 = s_319;
F->a_1007 = NULL;
F->a_1007 = (*(P433)rt_nil_check(F->s_319)).a;
F->n_1008 = ((rt_int)0LL);
F->first_1009 = 1;
F->inits_1010 = NULL;
F->inits_1010 = f_new_buffer_24();
F->arr_1011 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1012 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1007 != NULL)) {
F->n_1008 = rt_add(F->n_1008, f_list_len_54((*(P433)rt_nil_check(F->a_1007)).a));
F->a_1007 = (*(P433)rt_nil_check(F->a_1007)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1011), rt_str("[", 1)), f_itos_7(F->n_1008)), rt_str("];", 2)); b_; }));
F->a_1007 = (*(P433)rt_nil_check(F->s_319)).a;
F->n_1008 = ((rt_int)0LL);
while ((F->a_1007 != NULL)) {
F->inv_1013 = NULL;
F->inv_1013 = (*(P433)rt_nil_check(F->a_1007)).a;
while ((F->inv_1013 != NULL)) {
f_put_27(F->inits_1010, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_318(F->inv_1013, &F->arr_1011, F->n_1008); b_; }));
F->n_1008 = rt_add(F->n_1008, ((rt_int)1LL));
F->inv_1013 = (*(P433)rt_nil_check(F->inv_1013)).next;
}
F->a_1007 = (*(P433)rt_nil_check(F->a_1007)).next;
}
f_splice_34(g_code_475, F->inits_1010);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1012), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_1008)), rt_str(", ", 2)), F->arr_1011), rt_str(");", 2)); b_; }));
F->a_1007 = (*(P433)rt_nil_check(F->s_319)).a;
F->n_1008 = ((rt_int)0LL);
while ((F->a_1007 != NULL)) {
F->conds_1014 = NULL;
F->conds_1014 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1016 = ((rt_int)1LL), hi1017 = f_list_len_54((*(P433)rt_nil_check(F->a_1007)).a);
for (rt_int it1018 = lo1016; it1018 <= hi1017; it1018++) {
F->i_1015 = it1018;
F->conds_1014 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->conds_1014)), rt_str(" || ", 4)), F->w_1012), rt_str(" == ", 4)), f_itos_7(F->n_1008)); b_; }));
F->n_1008 = rt_add(F->n_1008, ((rt_int)1LL));
}
}
if (F->first_1009) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P428)rt_nil_check(F->conds_1014))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P428)rt_nil_check(F->conds_1014))), rt_str(") {", 3)); b_; }));
}
F->first_1009 = 0;
f_gen_body_282((*(P433)rt_nil_check(F->a_1007)).b);
F->a_1007 = (*(P433)rt_nil_check(F->a_1007)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_region_322(P433 s_321) {
  struct f_st_region_322fr *F = rt_alloc(sizeof *F);
F->s_321 = s_321;
F->lv_1019 = NULL;
F->t_1020 = NULL;
F->c_1021 = NULL;
F->lk_1023 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1024 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_359((*(P433)rt_nil_check(F->s_321)).a, &F->lv_1019, &F->t_1020, &F->c_1021, &F->ro_1022);
if (((*(P437)rt_nil_check(F->t_1020)).kind != ((rt_int)13LL))) {
f_fail_23((*(P433)rt_nil_check(F->s_321)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION needs a DATA_LOCK variable", 33); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1023), rt_str(" = &", 4)), (*(P428)rt_nil_check(F->lv_1019))), rt_str("; rt_region_enter(", 18)), F->lk_1023), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1024), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1024), rt_str(")) {", 4)); b_; }));
f_push_cleanup_286(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1024), rt_str("); rt_region_leave(", 19)), F->lk_1023), rt_str(");", 2)); b_; }));
f_gen_body_282((*(P433)rt_nil_check(F->s_321)).b);
f_pop_cleanup_287();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1024), rt_str("); rt_region_leave(", 19)), F->lk_1023), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1024), rt_str("); rt_region_leave(", 19)), F->lk_1023), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static P433 f_gparam_325(P433 g_323, rstr *name_324) {
  struct f_gparam_325fr *F = rt_alloc(sizeof *F);
F->g_323 = g_323;
F->name_324 = name_324;
F->p_1025 = NULL;
F->p_1025 = (*(P433)rt_nil_check(F->g_323)).a;
while ((F->p_1025 != NULL)) {
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_1025)).name)), (*F->name_324))) {
F->result_ = F->p_1025;
goto ret_;
}
F->p_1025 = (*(P433)rt_nil_check(F->p_1025)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P443 f_bind_sym_327(P433 p_326) {
  struct f_bind_sym_327fr *F = rt_alloc(sizeof *F);
F->p_326 = p_326;
F->y_1026 = NULL;
if (((*(P433)rt_nil_check(F->p_326)).ival <= ((rt_int)2LL))) {
F->y_1026 = f_new_sym_155(((rt_int)5LL), (*(P433)rt_nil_check(F->p_326)).name);
} else {
F->y_1026 = f_new_sym_155(((rt_int)2LL), (*(P433)rt_nil_check(F->p_326)).name);
}
F->result_ = F->y_1026;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binds_330(P443 a_328, P443 b_329) {
  struct f_same_binds_330fr *F = rt_alloc(sizeof *F);
F->a_328 = a_328;
F->b_329 = b_329;
F->x_1027 = NULL;
F->x_1027 = F->a_328;
F->y_1028 = NULL;
F->y_1028 = F->b_329;
while (((F->x_1027 != NULL) && (F->y_1028 != NULL))) {
if (((!rt_str_eq((*(P428)rt_nil_check((*(P443)rt_nil_check(F->x_1027)).name)), (*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_1028)).name)))) || (!f_same_binding_333(F->x_1027, F->y_1028)))) {
F->result_ = 0;
goto ret_;
}
F->x_1027 = (*(P443)rt_nil_check(F->x_1027)).mnext;
F->y_1028 = (*(P443)rt_nil_check(F->y_1028)).mnext;
}
F->result_ = ((F->x_1027 == NULL) && (F->y_1028 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binding_333(P443 a_331, P443 b_332) {
  struct f_same_binding_333fr *F = rt_alloc(sizeof *F);
F->a_331 = a_331;
F->b_332 = b_332;
if (((*(P443)rt_nil_check(F->a_331)).kind == ((rt_int)5LL))) {
F->result_ = (((*(P443)rt_nil_check(F->b_332)).kind == ((rt_int)5LL)) && f_same_164((*(P443)rt_nil_check(F->a_331)).t, (*(P443)rt_nil_check(F->b_332)).t));
goto ret_;
}
if ((((*(P443)rt_nil_check(F->a_331)).kind == ((rt_int)2LL)) && (*(P443)rt_nil_check(F->a_331)).hasmv)) {
F->result_ = ((*(P443)rt_nil_check(F->b_332)).hasmv && ((*(P443)rt_nil_check(F->a_331)).mvalue == (*(P443)rt_nil_check(F->b_332)).mvalue));
goto ret_;
}
F->result_ = ((((*(P443)rt_nil_check(F->a_331)).cname != NULL) && ((*(P443)rt_nil_check(F->b_332)).cname != NULL)) && rt_str_eq((*(P428)rt_nil_check((*(P443)rt_nil_check(F->a_331)).cname)), (*(P428)rt_nil_check((*(P443)rt_nil_check(F->b_332)).cname))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P443 f_instantiate_338(P443 g_334, P433 tt_335, P433 args_336, rt_int line_337) {
  struct f_instantiate_338fr *F = rt_alloc(sizeof *F);
F->g_334 = g_334;
F->tt_335 = tt_335;
F->args_336 = args_336;
F->line_337 = line_337;
F->gd_1029 = NULL;
F->gd_1029 = (*(P443)rt_nil_check(F->g_334)).decl;
F->pat_1030 = NULL;
F->pat_1030 = (*(P433)rt_nil_check(F->gd_1029)).b;
F->binds_1031 = NULL;
F->f_1032 = NULL;
F->f_1032 = (*(P433)rt_nil_check(F->pat_1030)).e;
F->a_1033 = NULL;
F->a_1033 = F->tt_335;
F->fp_1034 = NULL;
F->fp_1034 = (*(P433)rt_nil_check(F->pat_1030)).a;
F->inst_1035 = NULL;
F->at_1036 = NULL;
F->c_1037 = NULL;
F->saved_fctx_1038 = NULL;
F->saved_fctx_1038 = g_fctx_479;
F->saved_in_1039 = g_in_func_477;
F->saved_level_1040 = g_cur_level_478;
F->saved_sym_1041 = NULL;
F->saved_sym_1041 = g_func_sym_485;
F->saved_code_1042 = NULL;
F->saved_code_1042 = g_code_475;
while (((F->f_1032 != NULL) && (F->a_1033 != NULL))) {
F->p_1043 = NULL;
F->p_1043 = f_gparam_325(F->gd_1029, &(*(P428)rt_nil_check((*(P433)rt_nil_check(F->f_1032)).name)));
F->b_1044 = NULL;
if ((F->p_1043 == NULL)) {
f_fail_23(F->line_337, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->f_1032)).name)), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1044 = f_bind_sym_327(F->p_1043);
if (((*(P433)rt_nil_check(F->p_1043)).ival <= ((rt_int)2LL))) {
if (((*(P433)rt_nil_check(F->a_1033)).kind >= ((rt_int)70LL))) {
(*(P443)rt_nil_check(F->b_1044)).t = f_resolve_subtype_188(F->a_1033, &F->c_1037);
} else {
F->st_1045 = NULL;
F->st_1045 = f_nn_48(((rt_int)80LL), F->line_337);
(*(P433)rt_nil_check(F->st_1045)).name = (*(P433)rt_nil_check(F->a_1033)).name;
(*(P443)rt_nil_check(F->b_1044)).t = f_resolve_subtype_188(F->st_1045, &F->c_1037);
}
(*(P443)rt_nil_check(F->b_1044)).c = F->c_1037;
} else if (((*(P433)rt_nil_check(F->p_1043)).ival <= ((rt_int)5LL))) {
if ((((*(P433)rt_nil_check(F->a_1033)).kind != ((rt_int)7LL)) || (f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->a_1033)).name))) == NULL))) {
f_fail_23(F->line_337, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_1043)).name))); b_; }));
}
F->b_1044 = f_copy_sym_243(f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->a_1033)).name))));
(*(P443)rt_nil_check(F->b_1044)).name = (*(P433)rt_nil_check(F->p_1043)).name;
} else {
(*(P443)rt_nil_check(F->b_1044)).t = f_resolve_subtype_188((*(P433)rt_nil_check(F->p_1043)).a, &F->c_1037);
(*(P443)rt_nil_check(F->b_1044)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380(F->a_1033, (*(P443)rt_nil_check(F->b_1044)).t, &F->at_1036); b_; }));
(*(P443)rt_nil_check(F->b_1044)).mvalue = f_manifest_207(F->a_1033, &F->ok_1046);
(*(P443)rt_nil_check(F->b_1044)).hasmv = F->ok_1046;
}
(*(P443)rt_nil_check(F->b_1044)).mnext = F->binds_1031;
F->binds_1031 = F->b_1044;
F->f_1032 = (*(P433)rt_nil_check(F->f_1032)).next;
F->a_1033 = (*(P433)rt_nil_check(F->a_1033)).next;
}
F->a_1033 = F->args_336;
while (((F->fp_1034 != NULL) && (F->a_1033 != NULL))) {
if (((((*(P433)rt_nil_check((*(P433)rt_nil_check(F->fp_1034)).a)).kind == ((rt_int)80LL)) && (f_gparam_325(F->gd_1029, &(*(P428)rt_nil_check((*(P433)rt_nil_check((*(P433)rt_nil_check(F->fp_1034)).a)).name))) != NULL)) && ((*(P433)rt_nil_check(f_gparam_325(F->gd_1029, &(*(P428)rt_nil_check((*(P433)rt_nil_check((*(P433)rt_nil_check(F->fp_1034)).a)).name))))).ival <= ((rt_int)2LL)))) {
F->known_1047 = 0;
F->q_1048 = NULL;
F->q_1048 = F->binds_1031;
while ((F->q_1048 != NULL)) {
if (rt_str_eq((*(P428)rt_nil_check((*(P443)rt_nil_check(F->q_1048)).name)), (*(P428)rt_nil_check((*(P433)rt_nil_check((*(P433)rt_nil_check(F->fp_1034)).a)).name)))) {
F->known_1047 = 1;
}
F->q_1048 = (*(P443)rt_nil_check(F->q_1048)).mnext;
}
if ((!F->known_1047)) {
F->b_1049 = NULL;
F->b_1049 = f_bind_sym_327(f_gparam_325(F->gd_1029, &(*(P428)rt_nil_check((*(P433)rt_nil_check((*(P433)rt_nil_check(F->fp_1034)).a)).name))));
F->v_1050 = rt_str_copy(f_gexpr_380(F->a_1033, NULL, &F->at_1036));
(*(P443)rt_nil_check(F->b_1049)).t = F->at_1036;
(*(P443)rt_nil_check(F->b_1049)).c = g_no_cons_502;
(*(P443)rt_nil_check(F->b_1049)).mnext = F->binds_1031;
F->binds_1031 = F->b_1049;
}
}
F->fp_1034 = (*(P433)rt_nil_check(F->fp_1034)).next;
F->a_1033 = (*(P433)rt_nil_check(F->a_1033)).next;
}
F->inst_1035 = (*(P443)rt_nil_check(F->g_334)).insts;
while ((F->inst_1035 != NULL)) {
if (f_same_binds_330((*(P443)rt_nil_check(F->inst_1035)).members, F->binds_1031)) {
F->result_ = F->inst_1035;
goto ret_;
}
F->inst_1035 = (*(P443)rt_nil_check(F->inst_1035)).insts;
}
g_fctx_479 = NULL;
g_in_func_477 = 0;
g_cur_level_478 = ((rt_int)0LL);
g_func_sym_485 = NULL;
g_code_475 = f_new_buffer_24();
f_open_scope_151();
{
F->b_1051 = NULL;
F->b_1051 = F->binds_1031;
while ((F->b_1051 != NULL)) {
f_define_145(F->b_1051, F->line_337);
F->b_1051 = (*(P443)rt_nil_check(F->b_1051)).mnext;
}
}
F->inst_1035 = f_build_subprogram_253(F->pat_1030);
(*(P443)rt_nil_check(F->inst_1035)).members = F->binds_1031;
(*(P443)rt_nil_check(F->inst_1035)).insts = (*(P443)rt_nil_check(F->g_334)).insts;
(*(P443)rt_nil_check(F->g_334)).insts = F->inst_1035;
f_define_145(F->inst_1035, F->line_337);
f_gen_subprogram_270(F->pat_1030, F->inst_1035);
f_close_scope_152();
g_fctx_479 = F->saved_fctx_1038;
g_in_func_477 = F->saved_in_1039;
g_cur_level_478 = F->saved_level_1040;
g_func_sym_485 = F->saved_sym_1041;
g_code_475 = F->saved_code_1042;
F->result_ = F->inst_1035;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_access_of_340(P443 y_339) {
  struct f_access_of_340fr *F = rt_alloc(sizeof *F);
F->y_339 = y_339;
F->p_1052 = NULL;
F->p_1052 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P443)rt_nil_check(F->y_339)).level <= ((rt_int)0LL))) {
F->result_ = (*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_339)).access));
goto ret_;
}
{ rt_int lo1054 = ((rt_int)1LL), hi1055 = rt_sub(g_cur_level_478, (*(P443)rt_nil_check(F->y_339)).level);
for (rt_int it1056 = lo1054; it1056 <= hi1055; it1056++) {
F->i_1053 = it1056;
F->p_1052 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check(F->p_1052)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P443)rt_nil_check(F->y_339)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P428)rt_nil_check(F->p_1052))), rt_str("->", 2)), (*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_339)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->p_1052)), rt_str("->", 2)), (*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_339)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_import_of_343(P433 l_341, rstr *name_342) {
  struct f_import_of_343fr *F = rt_alloc(sizeof *F);
F->l_341 = l_341;
F->name_342 = name_342;
F->p_1057 = NULL;
F->p_1057 = F->l_341;
while ((F->p_1057 != NULL)) {
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_1057)).name)), (*F->name_342))) {
F->result_ = F->p_1057;
goto ret_;
}
F->p_1057 = (*(P433)rt_nil_check(F->p_1057)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_check_import_346(P443 y_344, rt_int line_345) {
  struct f_check_import_346fr *F = rt_alloc(sizeof *F);
F->y_344 = y_344;
F->line_345 = line_345;
F->c_1058 = NULL;
F->c_1058 = g_fctx_479;
F->ro_1059 = 0;
while (((F->c_1058 != NULL) && ((*(P443)rt_nil_check(F->y_344)).depth < (*(P457)rt_nil_check(F->c_1058)).depth))) {
if ((!(*(P457)rt_nil_check(F->c_1058)).all_imp)) {
F->imp_1060 = NULL;
F->imp_1060 = f_import_of_343((*(P457)rt_nil_check(F->c_1058)).imps, &(*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_344)).name)));
if ((F->imp_1060 == NULL)) {
f_fail_23(F->line_345, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_344)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P433)rt_nil_check(F->imp_1060)).ival == ((rt_int)1LL))) {
F->ro_1059 = 1;
}
}
F->c_1058 = (*(P457)rt_nil_check(F->c_1058)).next;
}
F->result_ = F->ro_1059;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_ident_348(rstr *s_347) {
  struct f_c_ident_348fr *F = rt_alloc(sizeof *F);
F->s_347 = s_347;
if (rt_str_eq((*F->s_347), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_347), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_347), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_347), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_347), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_347), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_347), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_347), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_347), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_347), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_347), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_347), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_347), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_347), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_347));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_deref_351(rstr *base_349, P437 t_350) {
  struct f_deref_351fr *F = rt_alloc(sizeof *F);
F->base_349 = base_349;
F->t_350 = t_350;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->t_350)), rt_str(")rt_nil_check(", 14)), (*F->base_349)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_lvalue_353(P433 e_352) {
  struct f_is_lvalue_353fr *F = rt_alloc(sizeof *F);
F->e_352 = e_352;
if (((*(P433)rt_nil_check(F->e_352)).kind == ((rt_int)7LL))) {
F->y_1061 = NULL;
F->y_1061 = f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_352)).name)));
F->result_ = ((F->y_1061 != NULL) && (((*(P443)rt_nil_check(F->y_1061)).kind == ((rt_int)1LL)) || ((*(P443)rt_nil_check(F->y_1061)).kind == ((rt_int)2LL))));
goto ret_;
} else if (((*(P433)rt_nil_check(F->e_352)).kind == ((rt_int)17LL))) {
F->result_ = f_is_lvalue_353((*(P433)rt_nil_check(F->e_352)).a);
goto ret_;
} else if (((*(P433)rt_nil_check(F->e_352)).kind == ((rt_int)11LL))) {
F->result_ = ((!rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_352)).name)), rt_str("LEN", 3))) && f_is_lvalue_353((*(P433)rt_nil_check(F->e_352)).a));
goto ret_;
} else if (((*(P433)rt_nil_check(F->e_352)).kind == ((rt_int)10LL))) {
if ((((*(P433)rt_nil_check(F->e_352)).b != NULL) && ((*(P433)rt_nil_check((*(P433)rt_nil_check(F->e_352)).b)).kind == ((rt_int)16LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_353((*(P433)rt_nil_check(F->e_352)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_lvalue_359(P433 e_354, P428 *code_355, P437 *t_356, P435 *c_357, int *ro_358) {
  struct f_lvalue_359fr *F = rt_alloc(sizeof *F);
F->e_354 = e_354;
F->code_355 = code_355;
F->t_356 = t_356;
F->c_357 = c_357;
F->ro_358 = ro_358;
F->base_1062 = NULL;
F->bt_1063 = NULL;
F->bc_1064 = NULL;
if (((*(P433)rt_nil_check(F->e_354)).kind == ((rt_int)7LL))) {
F->y_1065 = NULL;
F->y_1065 = f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_354)).name)));
if ((F->y_1065 == NULL)) {
f_fail_23((*(P433)rt_nil_check(F->e_354)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_354)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P443)rt_nil_check(F->y_1065)).kind != ((rt_int)1LL)) && ((*(P443)rt_nil_check(F->y_1065)).kind != ((rt_int)2LL)))) {
f_fail_23((*(P433)rt_nil_check(F->e_354)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_354)).name)), rt_str(" is not a variable", 18)); b_; }));
}
(*F->code_355) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_340(F->y_1065); b_; }));
(*F->t_356) = (*(P443)rt_nil_check(F->y_1065)).t;
(*F->c_357) = (*(P443)rt_nil_check(F->y_1065)).c;
(*F->ro_358) = (*(P443)rt_nil_check(F->y_1065)).ro_flag;
if ((((*(P443)rt_nil_check(F->y_1065)).kind == ((rt_int)1LL)) && f_check_import_346(F->y_1065, (*(P433)rt_nil_check(F->e_354)).line))) {
(*F->ro_358) = 1;
}
} else if (((*(P433)rt_nil_check(F->e_354)).kind == ((rt_int)17LL))) {
f_lvalue_359((*(P433)rt_nil_check(F->e_354)).a, &(*F->code_355), &(*F->t_356), &(*F->c_357), &(*F->ro_358));
} else if (((*(P433)rt_nil_check(F->e_354)).kind == ((rt_int)11LL))) {
f_lvalue_359((*(P433)rt_nil_check(F->e_354)).a, &F->base_1062, &F->bt_1063, &F->bc_1064, &(*F->ro_358));
f_select_on_367(&(*(P428)rt_nil_check(F->base_1062)), F->bt_1063, F->e_354, &(*F->ro_358), &(*F->code_355), &(*F->t_356), &(*F->c_357));
} else if (((*(P433)rt_nil_check(F->e_354)).kind == ((rt_int)10LL))) {
f_lvalue_359((*(P433)rt_nil_check(F->e_354)).a, &F->base_1062, &F->bt_1063, &F->bc_1064, &(*F->ro_358));
f_index_on_376(&(*(P428)rt_nil_check(F->base_1062)), F->bt_1063, F->e_354, &(*F->ro_358), 1, &(*F->code_355), &(*F->t_356), &(*F->c_357));
} else {
f_fail_23((*(P433)rt_nil_check(F->e_354)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  return;
}

static void f_select_on_367(rstr *base_360, P437 bt_361, P433 e_362, int *ro_363, P428 *code_364, P437 *t_365, P435 *c_366) {
  struct f_select_on_367fr *F = rt_alloc(sizeof *F);
F->base_360 = base_360;
F->bt_361 = bt_361;
F->e_362 = e_362;
F->ro_363 = ro_363;
F->code_364 = code_364;
F->t_365 = t_365;
F->c_366 = c_366;
(*F->c_366) = g_no_cons_502;
if (((*(P437)rt_nil_check(F->bt_361)).kind == ((rt_int)8LL))) {
f_finish_ptr_249(F->bt_361);
(*F->ro_363) = 0;
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_362)).name)), rt_str("ALL", 3))) {
(*F->code_364) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_351(&(*F->base_360), F->bt_361); b_; }));
(*F->t_365) = (*(P437)rt_nil_check(F->bt_361)).target;
goto ret_;
}
f_select_on_367(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_351(&(*F->base_360), F->bt_361); b_; }), (*(P437)rt_nil_check(F->bt_361)).target, F->e_362, &(*F->ro_363), &(*F->code_364), &(*F->t_365), &(*F->c_366));
goto ret_;
}
if (((*(P437)rt_nil_check(F->bt_361)).kind == ((rt_int)15LL))) {
F->p_1066 = NULL;
F->p_1066 = (*(P437)rt_nil_check(F->bt_361)).tparams;
if ((!f_opened_190(F->bt_361))) {
f_fail_23((*(P433)rt_nil_check(F->e_362)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->bt_361)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P437)rt_nil_check(F->bt_361)).tparams == NULL)) {
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_362)).name)), rt_str("ALL", 3))) {
(*F->code_364) = f_mk_3(&(*F->base_360));
(*F->t_365) = (*(P437)rt_nil_check(F->bt_361)).under;
goto ret_;
}
f_select_on_367(&(*F->base_360), (*(P437)rt_nil_check(F->bt_361)).under, F->e_362, &(*F->ro_363), &(*F->code_364), &(*F->t_365), &(*F->c_366));
goto ret_;
}
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_362)).name)), rt_str("ALL", 3))) {
(*F->code_364) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_360), rt_str(".all", 4)); b_; }));
(*F->t_365) = (*(P437)rt_nil_check(F->bt_361)).under;
goto ret_;
}
while ((F->p_1066 != NULL)) {
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_1066)).name)), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_362)).name)))) {
(*F->code_364) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_360), rt_str(".p_", 3)), f_lower_s_15(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->p_1066)).name)))); b_; }));
(*F->t_365) = g_ty_int_492;
(*F->ro_363) = 1;
goto ret_;
}
F->p_1066 = (*(P433)rt_nil_check(F->p_1066)).next;
}
f_select_on_367(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_360), rt_str(".all", 4)); b_; }), (*(P437)rt_nil_check(F->bt_361)).under, F->e_362, &(*F->ro_363), &(*F->code_364), &(*F->t_365), &(*F->c_366));
goto ret_;
}
if (((*(P437)rt_nil_check(F->bt_361)).kind == ((rt_int)7LL))) {
F->f_1067 = NULL;
F->f_1067 = (*(P437)rt_nil_check(F->bt_361)).fields;
while ((F->f_1067 != NULL)) {
if (rt_str_eq((*(P428)rt_nil_check((*(P439)rt_nil_check(F->f_1067)).name)), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_362)).name)))) {
(*F->c_366) = (*(P439)rt_nil_check(F->f_1067)).c;
(*F->code_364) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_360), rt_str(".", 1)), f_field_c_17(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_362)).name)))); b_; }));
(*F->t_365) = (*(P439)rt_nil_check(F->f_1067)).t;
goto ret_;
}
F->f_1067 = (*(P439)rt_nil_check(F->f_1067)).next;
}
f_fail_23((*(P433)rt_nil_check(F->e_362)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_362)).name))); b_; }));
}
f_fail_23((*(P433)rt_nil_check(F->e_362)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_362)).name))), rt_str(" here", 5)); b_; }));
ret_:
  return;
}

static void f_index_on_376(rstr *base_368, P437 bt_369, P433 e_370, int *ro_371, int lv_372, P428 *code_373, P437 *t_374, P435 *c_375) {
  struct f_index_on_376fr *F = rt_alloc(sizeof *F);
F->base_368 = base_368;
F->bt_369 = bt_369;
F->e_370 = e_370;
F->ro_371 = ro_371;
F->lv_372 = lv_372;
F->code_373 = code_373;
F->t_374 = t_374;
F->c_375 = c_375;
F->a_1068 = NULL;
F->a_1068 = (*(P433)rt_nil_check(F->e_370)).b;
F->it_1069 = NULL;
(*F->c_375) = g_no_cons_502;
if (((*(P437)rt_nil_check(F->bt_369)).kind == ((rt_int)8LL))) {
f_finish_ptr_249(F->bt_369);
(*F->ro_371) = 0;
f_index_on_376(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_351(&(*F->base_368), F->bt_369); b_; }), (*(P437)rt_nil_check(F->bt_369)).target, F->e_370, &(*F->ro_371), F->lv_372, &(*F->code_373), &(*F->t_374), &(*F->c_375));
goto ret_;
}
if (((*(P437)rt_nil_check(F->bt_369)).kind == ((rt_int)15LL))) {
if ((!f_opened_190(F->bt_369))) {
f_fail_23((*(P433)rt_nil_check(F->e_370)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->bt_369)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P437)rt_nil_check(F->bt_369)).tparams == NULL)) {
f_index_on_376(&(*F->base_368), (*(P437)rt_nil_check(F->bt_369)).under, F->e_370, &(*F->ro_371), F->lv_372, &(*F->code_373), &(*F->t_374), &(*F->c_375));
} else {
f_index_on_376(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_368), rt_str(".all", 4)); b_; }), (*(P437)rt_nil_check(F->bt_369)).under, F->e_370, &(*F->ro_371), F->lv_372, &(*F->code_373), &(*F->t_374), &(*F->c_375));
}
goto ret_;
}
if ((((*(P437)rt_nil_check(F->bt_369)).kind == ((rt_int)6LL)) && ((*(P437)rt_nil_check(F->bt_369)).idx2 != NULL))) {
if ((f_list_len_54(F->a_1068) != ((rt_int)2LL))) {
f_fail_23((*(P433)rt_nil_check(F->e_370)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("two subscripts expected", 23); b_; }));
}
{
F->i_1070 = rt_str_copy(f_gexpr_380(F->a_1068, (*(P437)rt_nil_check(F->bt_369)).idx, &F->it_1069));
F->j_1071 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->a_1068)).next, (*(P437)rt_nil_check(F->bt_369)).idx2, &F->it_1069));
(*F->code_373) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_368), rt_str(".p[(rt_index(", 13)), F->i_1070), rt_str(", ", 2)), (*F->base_368)), rt_str(".lo, ", 5)), (*F->base_368)), rt_str(".hi) - ", 7)), (*F->base_368)), rt_str(".lo) * (", 8)), (*F->base_368)), rt_str(".hi2 - ", 7)), (*F->base_368)), rt_str(".lo2 + 1) + rt_index(", 21)), F->j_1071), rt_str(", ", 2)), (*F->base_368)), rt_str(".lo2, ", 6)), (*F->base_368)), rt_str(".hi2) - ", 8)), (*F->base_368)), rt_str(".lo2]", 5)); b_; }));
(*F->t_374) = (*(P437)rt_nil_check(F->bt_369)).elem;
(*F->c_375) = (*(P437)rt_nil_check(F->bt_369)).elemcons;
}
goto ret_;
}
if ((f_list_len_54(F->a_1068) != ((rt_int)1LL))) {
f_fail_23((*(P433)rt_nil_check(F->e_370)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P437)rt_nil_check(F->bt_369)).kind == ((rt_int)5LL))) {
if (((*(P433)rt_nil_check(F->a_1068)).kind == ((rt_int)16LL))) {
F->lo_1072 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->a_1068)).a, g_ty_int_492, &F->it_1069));
F->hi_1073 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->a_1068)).b, g_ty_int_492, &F->it_1069));
(*F->code_373) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_368)), rt_str(", ", 2)), F->lo_1072), rt_str(", ", 2)), F->hi_1073), rt_str(")", 1)); b_; }));
(*F->t_374) = g_ty_string_496;
(*F->ro_371) = 1;
goto ret_;
}
{
F->i_1074 = rt_str_copy(f_gexpr_380(F->a_1068, g_ty_int_492, &F->it_1069));
(*F->t_374) = g_ty_ascii_495;
if (F->lv_372) {
(*F->code_373) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_368)), rt_str(", ", 2)), F->i_1074), rt_str("))", 2)); b_; }));
} else {
(*F->code_373) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_368)), rt_str(", ", 2)), F->i_1074), rt_str(")", 1)); b_; }));
(*F->ro_371) = 1;
}
}
goto ret_;
}
if (((*(P437)rt_nil_check(F->bt_369)).kind == ((rt_int)6LL))) {
F->i_1075 = rt_str_copy(f_gexpr_380(F->a_1068, (*(P437)rt_nil_check(F->bt_369)).idx, &F->it_1069));
(*F->code_373) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_368), rt_str(".p[rt_index(", 12)), F->i_1075), rt_str(", ", 2)), (*F->base_368)), rt_str(".lo, ", 5)), (*F->base_368)), rt_str(".hi) - ", 7)), (*F->base_368)), rt_str(".lo]", 4)); b_; }));
(*F->t_374) = (*(P437)rt_nil_check(F->bt_369)).elem;
(*F->c_375) = (*(P437)rt_nil_check(F->bt_369)).elemcons;
goto ret_;
}
f_fail_23((*(P433)rt_nil_check(F->e_370)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  return;
}

static rstr f_gexpr_380(P433 e_377, P437 want_378, P437 *t_379) {
  struct f_gexpr_380fr *F = rt_alloc(sizeof *F);
F->e_377 = e_377;
F->want_378 = want_378;
F->t_379 = t_379;
F->k_1076 = (*(P433)rt_nil_check(F->e_377)).kind;
F->code_1077 = NULL;
F->c_1078 = NULL;
F->bt_1080 = NULL;
(*F->t_379) = g_ty_int_492;
if ((F->k_1076 == ((rt_int)1LL))) {
if (((F->want_378 != NULL) && ((*(P437)rt_nil_check(F->want_378)).kind == ((rt_int)3LL)))) {
(*F->t_379) = g_ty_float_494;
F->result_ = rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1076 == ((rt_int)2LL))) {
(*F->t_379) = g_ty_float_494;
F->result_ = (*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name));
goto ret_;
} else if ((F->k_1076 == ((rt_int)5LL))) {
(*F->t_379) = g_ty_bool_493;
F->result_ = f_itos_7((*(P433)rt_nil_check(F->e_377)).ival);
goto ret_;
} else if ((F->k_1076 == ((rt_int)3LL))) {
(*F->t_379) = g_ty_string_496;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_386(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)))), rt_str(", ", 2)), f_itos_7(((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_1076 == ((rt_int)6LL))) {
(*F->t_379) = g_ty_nil_499;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1076 == ((rt_int)4LL))) {
if (((F->want_378 != NULL) && ((*(P437)rt_nil_check(f_base_of_166(F->want_378))).kind == ((rt_int)4LL)))) {
(*F->t_379) = F->want_378;
} else {
(*F->t_379) = f_enum_type_of_389(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), (*(P433)rt_nil_check(F->e_377)).line);
}
{
F->i_1081 = f_lit_index_185((*(P437)rt_nil_check(f_base_of_166((*F->t_379)))).lits, &(*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)));
if ((F->i_1081 < ((rt_int)0LL))) {
f_fail_23((*(P433)rt_nil_check(F->e_377)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1081);
goto ret_;
}
} else if ((F->k_1076 == ((rt_int)17LL))) {
F->result_ = f_gexpr_380((*(P433)rt_nil_check(F->e_377)).a, F->want_378, &(*F->t_379));
goto ret_;
} else if ((F->k_1076 == ((rt_int)7LL))) {
F->y_1082 = NULL;
F->y_1082 = f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)));
if ((F->y_1082 == NULL)) {
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("ME", 2))) {
(*F->t_379) = g_ty_act_501;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (((((((((rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("SYS_OUT", 7))) || rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("TIME", 4))) || rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("MILLISECONDS", 12))) || rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("SECONDS", 7))) || rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("MINUTES", 7))) || rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_417(f_wrap_apply_384(F->e_377), 0, &(*F->t_379));
goto ret_;
}
f_fail_23((*(P433)rt_nil_check(F->e_377)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P443)rt_nil_check(F->y_1082)).kind == ((rt_int)1LL)) || ((*(P443)rt_nil_check(F->y_1082)).kind == ((rt_int)2LL)))) {
(*F->t_379) = (*(P443)rt_nil_check(F->y_1082)).t;
if (((*(P443)rt_nil_check(F->y_1082)).kind == ((rt_int)1LL))) {
F->ro_1083 = f_check_import_346(F->y_1082, (*(P433)rt_nil_check(F->e_377)).line);
}
F->result_ = f_access_of_340(F->y_1082);
goto ret_;
}
if (((*(P443)rt_nil_check(F->y_1082)).kind == ((rt_int)3LL))) {
F->result_ = f_gcall_417(f_wrap_apply_384(F->e_377), 0, &(*F->t_379));
goto ret_;
}
f_fail_23((*(P433)rt_nil_check(F->e_377)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1076 == ((rt_int)8LL)) && (f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name))) != NULL)) && (f_user_op_413(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), f_copy_node_382((*(P433)rt_nil_check(F->e_377)).a)) != NULL))) {
F->call_1084 = NULL;
F->call_1084 = f_nn_48(((rt_int)10LL), (*(P433)rt_nil_check(F->e_377)).line);
F->fname_1085 = NULL;
F->fname_1085 = f_nn_48(((rt_int)7LL), (*(P433)rt_nil_check(F->e_377)).line);
(*(P433)rt_nil_check(F->fname_1085)).name = (*(P433)rt_nil_check(F->e_377)).name;
(*(P433)rt_nil_check(F->call_1084)).a = F->fname_1085;
(*(P433)rt_nil_check(F->call_1084)).b = f_copy_node_382((*(P433)rt_nil_check(F->e_377)).a);
F->result_ = f_gcall_417(F->call_1084, 0, &(*F->t_379));
goto ret_;
} else if (((((F->k_1076 == ((rt_int)8LL)) && rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("NOT", 3))) && (F->want_378 != NULL)) && ((*(P437)rt_nil_check(F->want_378)).kind == ((rt_int)16LL)))) {
F->a_1086 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_377)).a, F->want_378, &(*F->t_379)));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_1086), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_54((*(P437)rt_nil_check((*(P437)rt_nil_check(F->want_378)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1076 == ((rt_int)8LL))) {
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("NOT", 3))) {
F->a_1087 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_377)).a, g_ty_bool_493, &(*F->t_379)));
f_check_type_175((*F->t_379), g_ty_bool_493, (*(P433)rt_nil_check(F->e_377)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1087), rt_str(")", 1));
goto ret_;
}
{
F->a_1088 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_377)).a, F->want_378, &(*F->t_379)));
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("+", 1))) {
F->result_ = F->a_1088;
goto ret_;
} else if (((*(P437)rt_nil_check((*F->t_379))).kind == ((rt_int)3LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1088), rt_str(")", 1));
goto ret_;
}
f_check_type_175((*F->t_379), g_ty_int_492, (*(P433)rt_nil_check(F->e_377)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1088), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1076 == ((rt_int)9LL))) {
F->result_ = f_gbinop_396(F->e_377, F->want_378, &(*F->t_379));
goto ret_;
} else if ((F->k_1076 == ((rt_int)10LL))) {
if ((((*(P433)rt_nil_check((*(P433)rt_nil_check(F->e_377)).a)).kind == ((rt_int)7LL)) || ((*(P433)rt_nil_check((*(P433)rt_nil_check(F->e_377)).a)).kind == ((rt_int)12LL)))) {
F->nm_1089 = NULL;
F->nm_1089 = (*(P433)rt_nil_check(F->e_377)).a;
F->y_1090 = NULL;
if (((*(P433)rt_nil_check(F->nm_1089)).kind == ((rt_int)12LL))) {
F->nm_1089 = (*(P433)rt_nil_check(F->nm_1089)).a;
}
F->y_1090 = f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->nm_1089)).name)));
if (((((F->y_1090 == NULL) || ((*(P443)rt_nil_check(F->y_1090)).kind == ((rt_int)3LL))) || ((*(P443)rt_nil_check(F->y_1090)).kind == ((rt_int)4LL))) || ((*(P443)rt_nil_check(F->y_1090)).kind == ((rt_int)10LL)))) {
F->result_ = f_gcall_417(F->e_377, 0, &(*F->t_379));
goto ret_;
}
}
{
F->base_1091 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_377)).a, NULL, &F->bt_1080));
F->ro_1079 = 1;
f_index_on_376(&F->base_1091, F->bt_1080, F->e_377, &F->ro_1079, 0, &F->code_1077, &(*F->t_379), &F->c_1078);
F->result_ = (*(P428)rt_nil_check(F->code_1077));
goto ret_;
}
} else if ((F->k_1076 == ((rt_int)11LL))) {
if (((rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_377)).name)), rt_str("MAX", 3)))) {
F->result_ = f_attribute_392(F->e_377, &(*F->t_379));
goto ret_;
}
{
F->base_1092 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_377)).a, NULL, &F->bt_1080));
F->ro_1079 = 1;
f_select_on_367(&F->base_1092, F->bt_1080, F->e_377, &F->ro_1079, &F->code_1077, &(*F->t_379), &F->c_1078);
F->result_ = (*(P428)rt_nil_check(F->code_1077));
goto ret_;
}
} else if ((F->k_1076 == ((rt_int)12LL))) {
F->result_ = f_gcall_417(f_wrap_apply_384(F->e_377), 0, &(*F->t_379));
goto ret_;
} else if ((F->k_1076 == ((rt_int)14LL))) {
F->result_ = f_constructor_400(F->e_377, F->want_378, &(*F->t_379));
goto ret_;
}
f_fail_23((*(P433)rt_nil_check(F->e_377)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_copy_node_382(P433 e_381) {
  struct f_copy_node_382fr *F = rt_alloc(sizeof *F);
F->e_381 = e_381;
F->x_1093 = NULL;
{ R434 *cell1094 = rt_alloc(sizeof(R434));
(*cell1094).name = NULL;
(*cell1094).tag = NULL;
(*cell1094).a = NULL;
(*cell1094).b = NULL;
(*cell1094).c = NULL;
(*cell1094).d = NULL;
(*cell1094).e = NULL;
(*cell1094).next = NULL;
F->x_1093 = cell1094;
}
(*(P433)rt_nil_check(F->x_1093)).kind = (*(P433)rt_nil_check(F->e_381)).kind;
(*(P433)rt_nil_check(F->x_1093)).line = (*(P433)rt_nil_check(F->e_381)).line;
(*(P433)rt_nil_check(F->x_1093)).ival = (*(P433)rt_nil_check(F->e_381)).ival;
(*(P433)rt_nil_check(F->x_1093)).flag = (*(P433)rt_nil_check(F->e_381)).flag;
(*(P433)rt_nil_check(F->x_1093)).name = (*(P433)rt_nil_check(F->e_381)).name;
(*(P433)rt_nil_check(F->x_1093)).tag = (*(P433)rt_nil_check(F->e_381)).tag;
(*(P433)rt_nil_check(F->x_1093)).a = (*(P433)rt_nil_check(F->e_381)).a;
(*(P433)rt_nil_check(F->x_1093)).b = (*(P433)rt_nil_check(F->e_381)).b;
(*(P433)rt_nil_check(F->x_1093)).c = (*(P433)rt_nil_check(F->e_381)).c;
(*(P433)rt_nil_check(F->x_1093)).d = (*(P433)rt_nil_check(F->e_381)).d;
F->result_ = F->x_1093;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P433 f_wrap_apply_384(P433 e_383) {
  struct f_wrap_apply_384fr *F = rt_alloc(sizeof *F);
F->e_383 = e_383;
F->x_1095 = NULL;
F->x_1095 = f_nn_48(((rt_int)10LL), (*(P433)rt_nil_check(F->e_383)).line);
(*(P433)rt_nil_check(F->x_1095)).a = F->e_383;
F->result_ = F->x_1095;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_string_386(rstr *s_385) {
  struct f_c_string_386fr *F = rt_alloc(sizeof *F);
F->s_385 = s_385;
F->n_1096 = ((rt_int)0LL);
{ rt_int lo1098 = ((rt_int)1LL), hi1099 = ((*F->s_385)).len;
for (rt_int it1100 = lo1098; it1100 <= hi1099; it1100++) {
F->i_1097 = it1100;
if (((rt_str_get((*F->s_385), F->i_1097) == 92) || (rt_str_get((*F->s_385), F->i_1097) == 63))) {
F->n_1096 = rt_add(F->n_1096, ((rt_int)1LL));
}
}
}
{
F->r_1101 = rt_str_new(rt_add(rt_add(((*F->s_385)).len, F->n_1096), ((rt_int)2LL)));
F->j_1102 = ((rt_int)1LL);
(*rt_str_at(&F->r_1101, ((rt_int)1LL))) = 34;
{ rt_int lo1104 = ((rt_int)1LL), hi1105 = ((*F->s_385)).len;
for (rt_int it1106 = lo1104; it1106 <= hi1105; it1106++) {
F->i_1103 = it1106;
F->j_1102 = rt_add(F->j_1102, ((rt_int)1LL));
if (((rt_str_get((*F->s_385), F->i_1103) == 92) || (rt_str_get((*F->s_385), F->i_1103) == 63))) {
(*rt_str_at(&F->r_1101, F->j_1102)) = 92;
F->j_1102 = rt_add(F->j_1102, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1101, F->j_1102)) = rt_str_get((*F->s_385), F->i_1103);
}
}
(*rt_str_at(&F->r_1101, rt_add(F->j_1102, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1101;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P437 f_enum_type_of_389(rstr *lit_387, rt_int line_388) {
  struct f_enum_type_of_389fr *F = rt_alloc(sizeof *F);
F->lit_387 = lit_387;
F->line_388 = line_388;
F->y_1107 = NULL;
F->y_1107 = g_scope_stack_465;
F->c_1108 = NULL;
if ((f_lit_index_185((*(P437)rt_nil_check(g_ty_ascii_495)).lits, &(*F->lit_387)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_495;
goto ret_;
}
while ((F->y_1107 != NULL)) {
if ((((((*(P443)rt_nil_check(F->y_1107)).kind == ((rt_int)6LL)) || ((*(P443)rt_nil_check(F->y_1107)).kind == ((rt_int)5LL))) && ((*(P443)rt_nil_check(F->y_1107)).st != NULL)) && ((*(P433)rt_nil_check((*(P443)rt_nil_check(F->y_1107)).st)).kind == ((rt_int)72LL)))) {
if ((f_lit_index_185((*(P433)rt_nil_check((*(P443)rt_nil_check(F->y_1107)).st)).a, &(*F->lit_387)) >= ((rt_int)0LL))) {
if (((*(P443)rt_nil_check(F->y_1107)).kind == ((rt_int)5LL))) {
F->st_1109 = NULL;
F->st_1109 = f_nn_48(((rt_int)80LL), F->line_388);
(*(P433)rt_nil_check(F->st_1109)).name = (*(P443)rt_nil_check(F->y_1107)).name;
F->result_ = f_resolve_subtype_188(F->st_1109, &F->c_1108);
goto ret_;
}
F->result_ = f_resolve_subtype_188((*(P443)rt_nil_check(F->y_1107)).st, &F->c_1108);
goto ret_;
}
}
F->y_1107 = (*(P443)rt_nil_check(F->y_1107)).stack;
}
f_fail_23(F->line_388, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_387)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_attribute_392(P433 e_390, P437 *t_391) {
  struct f_attribute_392fr *F = rt_alloc(sizeof *F);
F->e_390 = e_390;
F->t_391 = t_391;
F->bt_1110 = NULL;
F->c_1111 = NULL;
(*F->t_391) = g_ty_int_492;
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_390)).name)), rt_str("LEN", 3))) {
F->base_1112 = NULL;
F->base_1112 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380((*(P433)rt_nil_check(F->e_390)).a, NULL, &F->bt_1110); b_; }));
if (((*(P437)rt_nil_check(F->bt_1110)).kind == ((rt_int)8LL))) {
f_finish_ptr_249(F->bt_1110);
F->base_1112 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_351(&(*(P428)rt_nil_check(F->base_1112)), F->bt_1110); b_; }));
F->bt_1110 = (*(P437)rt_nil_check(F->bt_1110)).target;
}
if (((*(P437)rt_nil_check(F->bt_1110)).kind != ((rt_int)5LL))) {
f_fail_23((*(P433)rt_nil_check(F->e_390)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P428)rt_nil_check(F->base_1112))), rt_str(").len", 5));
goto ret_;
}
if (((*(P433)rt_nil_check((*(P433)rt_nil_check(F->e_390)).a)).kind == ((rt_int)7LL))) {
F->y_1113 = NULL;
F->y_1113 = f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check((*(P433)rt_nil_check(F->e_390)).a)).name)));
if (((F->y_1113 != NULL) && (((*(P443)rt_nil_check(F->y_1113)).kind == ((rt_int)6LL)) || ((*(P443)rt_nil_check(F->y_1113)).kind == ((rt_int)5LL))))) {
F->st_1114 = NULL;
F->st_1114 = f_nn_48(((rt_int)80LL), (*(P433)rt_nil_check(F->e_390)).line);
(*(P433)rt_nil_check(F->st_1114)).name = (*(P433)rt_nil_check((*(P433)rt_nil_check(F->e_390)).a)).name;
(*F->t_391) = f_resolve_subtype_188(F->st_1114, &F->c_1111);
if (((*(P437)rt_nil_check((*F->t_391))).kind == ((rt_int)4LL))) {
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_390)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_54((*(P437)rt_nil_check((*F->t_391))).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P435)rt_nil_check(F->c_1111)).lo != NULL)) {
if (rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_390)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P428)rt_nil_check((*(P435)rt_nil_check(F->c_1111)).lo));
goto ret_;
}
F->result_ = (*(P428)rt_nil_check((*(P435)rt_nil_check(F->c_1111)).hi));
goto ret_;
}
}
}
f_fail_23((*(P433)rt_nil_check(F->e_390)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P428)rt_nil_check((*(P433)rt_nil_check(F->e_390)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gbinop_396(P433 e_393, P437 want_394, P437 *t_395) {
  struct f_gbinop_396fr *F = rt_alloc(sizeof *F);
F->e_393 = e_393;
F->want_394 = want_394;
F->t_395 = t_395;
F->op_1115 = NULL;
F->op_1115 = (*(P433)rt_nil_check(F->e_393)).name;
F->ta_1116 = NULL;
F->tb_1117 = NULL;
F->hint_1118 = NULL;
F->uy_1119 = NULL;
(*F->t_395) = g_ty_bool_493;
if ((f_lookup_140(&(*(P428)rt_nil_check(F->op_1115))) != NULL)) {
F->l_1120 = NULL;
F->r_1121 = NULL;
F->l_1120 = f_copy_node_382((*(P433)rt_nil_check(F->e_393)).a);
F->r_1121 = f_copy_node_382((*(P433)rt_nil_check(F->e_393)).b);
(*(P433)rt_nil_check(F->l_1120)).next = F->r_1121;
F->uy_1119 = f_user_op_413(&(*(P428)rt_nil_check(F->op_1115)), F->l_1120);
if ((F->uy_1119 != NULL)) {
F->call_1122 = NULL;
F->call_1122 = f_nn_48(((rt_int)10LL), (*(P433)rt_nil_check(F->e_393)).line);
F->fname_1123 = NULL;
F->fname_1123 = f_nn_48(((rt_int)7LL), (*(P433)rt_nil_check(F->e_393)).line);
(*(P433)rt_nil_check(F->fname_1123)).name = F->op_1115;
(*(P433)rt_nil_check(F->call_1122)).a = F->fname_1123;
(*(P433)rt_nil_check(F->call_1122)).b = F->l_1120;
F->result_ = f_gcall_417(F->call_1122, 0, &(*F->t_395));
goto ret_;
}
}
if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("IN", 2))) {
F->s_1124 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_393)).b, NULL, &F->tb_1117));
if (((*(P437)rt_nil_check(F->tb_1117)).kind != ((rt_int)16LL))) {
f_fail_23((*(P433)rt_nil_check(F->e_393)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_1125 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_393)).a, (*(P437)rt_nil_check(F->tb_1117)).elem, &F->ta_1116));
f_check_type_175(F->ta_1116, (*(P437)rt_nil_check(F->tb_1117)).elem, (*(P433)rt_nil_check(F->e_393)).line);
(*F->t_395) = g_ty_bool_493;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_1125), rt_str(", ", 2)), F->s_1124), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("AND", 3)) || rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("OR", 2))) || rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("XOR", 3))) && (F->want_394 != NULL)) && ((*(P437)rt_nil_check(F->want_394)).kind == ((rt_int)16LL)))) {
F->a_1126 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_393)).a, F->want_394, &F->ta_1116));
F->b_1127 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_393)).b, F->want_394, &F->tb_1117));
f_check_type_175(F->tb_1117, F->ta_1116, (*(P433)rt_nil_check(F->e_393)).line);
(*F->t_395) = F->ta_1116;
if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_1126), rt_str(", ", 2)), F->b_1127), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_1126), rt_str(", ", 2)), F->b_1127), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_1126), rt_str(", ", 2)), F->b_1127), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("AND", 3)) || rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("OR", 2))) || rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("XOR", 3)))) {
F->a_1128 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_393)).a, g_ty_bool_493, &F->ta_1116));
F->b_1129 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_393)).b, g_ty_bool_493, &F->tb_1117));
f_check_type_175(F->ta_1116, g_ty_bool_493, (*(P433)rt_nil_check(F->e_393)).line);
f_check_type_175(F->tb_1117, g_ty_bool_493, (*(P433)rt_nil_check(F->e_393)).line);
if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1128), rt_str(" && ", 4)), F->b_1129), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1128), rt_str(" || ", 4)), F->b_1129), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1128), rt_str(" != ", 4)), F->b_1129), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("&", 1))) {
F->wa_1130 = NULL;
F->wb_1131 = NULL;
if (((*(P433)rt_nil_check((*(P433)rt_nil_check(F->e_393)).a)).kind == ((rt_int)4LL))) {
F->wa_1130 = g_ty_ascii_495;
}
if (((*(P433)rt_nil_check((*(P433)rt_nil_check(F->e_393)).b)).kind == ((rt_int)4LL))) {
F->wb_1131 = g_ty_ascii_495;
}
{
F->a_1132 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_393)).a, F->wa_1130, &F->ta_1116));
F->b_1133 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_393)).b, F->wb_1131, &F->tb_1117));
(*F->t_395) = g_ty_string_496;
if ((((*(P437)rt_nil_check(F->ta_1116)).kind == ((rt_int)5LL)) && ((*(P437)rt_nil_check(F->tb_1117)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_1132), rt_str(", ", 2)), F->b_1133), rt_str(")", 1));
goto ret_;
} else if ((((*(P437)rt_nil_check(F->ta_1116)).kind == ((rt_int)5LL)) && ((*(P437)rt_nil_check(F->tb_1117)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_1132), rt_str(", ", 2)), F->b_1133), rt_str(")", 1));
goto ret_;
} else if ((((*(P437)rt_nil_check(F->ta_1116)).kind == ((rt_int)4LL)) && ((*(P437)rt_nil_check(F->tb_1117)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_1132), rt_str(", ", 2)), F->b_1133), rt_str(")", 1));
goto ret_;
} else if ((((*(P437)rt_nil_check(F->ta_1116)).kind == ((rt_int)4LL)) && ((*(P437)rt_nil_check(F->tb_1117)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_1132), rt_str(", ", 2)), F->b_1133), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P433)rt_nil_check(F->e_393)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_93(&(*(P428)rt_nil_check(F->op_1115))) && (!rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("IN", 2))))) {
if (((((*(P433)rt_nil_check((*(P433)rt_nil_check(F->e_393)).a)).kind == ((rt_int)4LL)) || ((*(P433)rt_nil_check((*(P433)rt_nil_check(F->e_393)).a)).kind == ((rt_int)6LL))) || ((*(P433)rt_nil_check((*(P433)rt_nil_check(F->e_393)).a)).kind == ((rt_int)1LL)))) {
F->dummy_1134 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_393)).b, NULL, &F->hint_1118));
}
{
F->a_1135 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_393)).a, F->hint_1118, &F->ta_1116));
F->b_1136 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_393)).b, F->ta_1116, &F->tb_1117));
F->ct_1137 = NULL;
F->ct_1137 = f_base_of_166(F->ta_1116);
(*F->t_395) = g_ty_bool_493;
if ((((*(P437)rt_nil_check(F->ta_1116)).kind != ((rt_int)11LL)) && ((*(P437)rt_nil_check(F->tb_1117)).kind != ((rt_int)11LL)))) {
f_check_type_175(F->tb_1117, F->ta_1116, (*(P433)rt_nil_check(F->e_393)).line);
}
if (((*(P437)rt_nil_check(F->ta_1116)).kind == ((rt_int)11LL))) {
F->ct_1137 = f_base_of_166(F->tb_1117);
}
if (((*(P437)rt_nil_check(F->ct_1137)).kind == ((rt_int)5LL))) {
if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_1135), rt_str(", ", 2)), F->b_1136), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_1135), rt_str(", ", 2)), F->b_1136), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_1135), rt_str(", ", 2)), F->b_1136), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_1135), rt_str(", ", 2)), F->b_1136), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_1136), rt_str(", ", 2)), F->a_1135), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_1136), rt_str(", ", 2)), F->a_1135), rt_str(")", 1));
goto ret_;
}
if (((*(P437)rt_nil_check(F->ct_1137)).kind == ((rt_int)16LL))) {
if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_1135), rt_str(", ", 2)), F->b_1136), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_1135), rt_str(", ", 2)), F->b_1136), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_1135), rt_str(", ", 2)), F->b_1136), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_1136), rt_str(", ", 2)), F->a_1135), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P433)rt_nil_check(F->e_393)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_211(F->ct_1137)) {
if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("=", 1))) {
F->result_ = f_eq_code_223(F->ct_1137, &F->a_1135, &F->b_1136);
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_223(F->ct_1137, &F->a_1135, &F->b_1136)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P433)rt_nil_check(F->e_393)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1135), rt_str(" == ", 4)), F->b_1136), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1135), rt_str(" != ", 4)), F->b_1136), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1135), rt_str(" ", 1)), (*(P428)rt_nil_check(F->op_1115))), rt_str(" ", 1)), F->b_1136), rt_str(")", 1));
goto ret_;
}
}
{
F->a_1138 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_393)).a, F->want_394, &F->ta_1116));
F->b_1139 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->e_393)).b, F->ta_1116, &F->tb_1117));
if ((((*(P437)rt_nil_check(F->ta_1116)).kind == ((rt_int)3LL)) || ((*(P437)rt_nil_check(F->tb_1117)).kind == ((rt_int)3LL)))) {
(*F->t_395) = g_ty_float_494;
if (((rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("+", 1)) || rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("-", 1))) || rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1138), rt_str(" ", 1)), (*(P428)rt_nil_check(F->op_1115))), rt_str(" ", 1)), F->b_1139), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_1138), rt_str(", ", 2)), F->b_1139), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_1138), rt_str(", ", 2)), F->b_1139), rt_str(")", 1));
goto ret_;
}
}
f_check_type_175(F->ta_1116, g_ty_int_492, (*(P433)rt_nil_check(F->e_393)).line);
f_check_type_175(F->tb_1117, g_ty_int_492, (*(P433)rt_nil_check(F->e_393)).line);
(*F->t_395) = g_ty_int_492;
if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1138), rt_str(", ", 2)), F->b_1139), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1138), rt_str(", ", 2)), F->b_1139), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_1138), rt_str(", ", 2)), F->b_1139), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_1138), rt_str(", ", 2)), F->b_1139), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_1138), rt_str(", ", 2)), F->b_1139), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P428)rt_nil_check(F->op_1115)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_1138), rt_str(", ", 2)), F->b_1139), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P433)rt_nil_check(F->e_393)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P428)rt_nil_check(F->op_1115))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_constructor_400(P433 e_397, P437 want_398, P437 *t_399) {
  struct f_constructor_400fr *F = rt_alloc(sizeof *F);
F->e_397 = e_397;
F->want_398 = want_398;
F->t_399 = t_399;
F->it_1140 = NULL;
F->it_1140 = (*(P433)rt_nil_check(F->e_397)).a;
F->f_1141 = NULL;
F->vt_1142 = NULL;
if (((F->want_398 != NULL) && ((*(P437)rt_nil_check(F->want_398)).kind == ((rt_int)16LL)))) {
F->s_1143 = NULL;
F->s_1143 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
(*F->t_399) = F->want_398;
while ((F->it_1140 != NULL)) {
F->v_1144 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->it_1140)).b, (*(P437)rt_nil_check(F->want_398)).elem, &F->vt_1142));
f_check_type_175(F->vt_1142, (*(P437)rt_nil_check(F->want_398)).elem, (*(P433)rt_nil_check(F->e_397)).line);
F->s_1143 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (*(P428)rt_nil_check(F->s_1143))), rt_str(", ", 2)), F->v_1144), rt_str(")", 1)); b_; }));
F->it_1140 = (*(P433)rt_nil_check(F->it_1140)).next;
}
F->result_ = (*(P428)rt_nil_check(F->s_1143));
goto ret_;
}
if (((F->want_398 != NULL) && ((*(P437)rt_nil_check(F->want_398)).kind == ((rt_int)15LL)))) {
f_fail_23((*(P433)rt_nil_check(F->e_397)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (*(P428)rt_nil_check((*(P437)rt_nil_check(F->want_398)).name))), rt_str(" needs the underlying type", 26)); b_; }));
}
if ((((F->want_398 != NULL) && ((*(P437)rt_nil_check(F->want_398)).kind == ((rt_int)6LL))) && ((*(P437)rt_nil_check(F->want_398)).idx2 == NULL))) {
F->tmp_1145 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->ct_1146 = rt_str_copy(f_ctype_177(F->want_398));
F->et_1147 = rt_str_copy(f_ctype_177((*(P437)rt_nil_check(F->want_398)).elem));
F->parts_1148 = NULL;
(*F->t_399) = F->want_398;
if (((((F->it_1140 != NULL) && ((*(P433)rt_nil_check(F->it_1140)).a != NULL)) && ((*(P433)rt_nil_check((*(P433)rt_nil_check(F->it_1140)).a)).b != NULL)) && ((*(P433)rt_nil_check(F->it_1140)).next == NULL))) {
F->lo_1149 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check((*(P433)rt_nil_check(F->it_1140)).a)).a, (*(P437)rt_nil_check(F->want_398)).idx, &F->vt_1142));
F->hi_1150 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check((*(P433)rt_nil_check(F->it_1140)).a)).b, (*(P437)rt_nil_check(F->want_398)).idx, &F->vt_1142));
F->v_1151 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->it_1140)).b, (*(P437)rt_nil_check(F->want_398)).elem, &F->vt_1142));
f_check_type_175(F->vt_1142, (*(P437)rt_nil_check(F->want_398)).elem, (*(P433)rt_nil_check(F->e_397)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1146), rt_str(" ", 1)), F->tmp_1145), rt_str("; ", 2)), F->tmp_1145), rt_str(".lo = ", 6)), F->lo_1149), rt_str("; ", 2)), F->tmp_1145), rt_str(".hi = ", 6)), F->hi_1150), rt_str("; ", 2)), F->tmp_1145), rt_str(".lo2 = ", 7)), F->tmp_1145), rt_str(".hi2 = 1; ", 10)), F->tmp_1145), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1147), rt_str(") * (size_t)RT_CNT(", 19)), F->tmp_1145), rt_str(")); for (rt_int i_ = 0; i_ < RT_CNT(", 36)), F->tmp_1145), rt_str("); i_++) ", 9)), F->tmp_1145), rt_str(".p[i_] = ", 9)), f_copy_code_219((*(P437)rt_nil_check(F->want_398)).elem, &F->v_1151)), rt_str("; ", 2)), F->tmp_1145), rt_str("; })", 4));
goto ret_;
}
F->parts_1148 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1146), rt_str(" ", 1)), F->tmp_1145), rt_str("; ", 2)), F->tmp_1145), rt_str(".lo = 1; ", 9)), F->tmp_1145), rt_str(".hi = ", 6)), f_itos_7(f_list_len_54(F->it_1140))), rt_str("; ", 2)), F->tmp_1145), rt_str(".lo2 = ", 7)), F->tmp_1145), rt_str(".hi2 = 1; ", 10)), F->tmp_1145), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1147), rt_str(") * ", 4)), f_itos_7(rt_add(f_list_len_54(F->it_1140), ((rt_int)1LL)))), rt_str(");", 2)); b_; }));
{ rt_int lo1153 = ((rt_int)0LL), hi1154 = rt_sub(f_list_len_54((*(P433)rt_nil_check(F->e_397)).a), ((rt_int)1LL));
for (rt_int it1155 = lo1153; it1155 <= hi1154; it1155++) {
F->i_1152 = it1155;
if (((*(P433)rt_nil_check(F->it_1140)).a != NULL)) {
f_fail_23((*(P433)rt_nil_check(F->e_397)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only positional array constructors are handled", 46); b_; }));
}
{
F->v_1156 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->it_1140)).b, (*(P437)rt_nil_check(F->want_398)).elem, &F->vt_1142));
f_check_type_175(F->vt_1142, (*(P437)rt_nil_check(F->want_398)).elem, (*(P433)rt_nil_check(F->e_397)).line);
F->parts_1148 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->parts_1148)), rt_str(" ", 1)), F->tmp_1145), rt_str(".p[", 3)), f_itos_7(F->i_1152)), rt_str("] = ", 4)), f_copy_code_219((*(P437)rt_nil_check(F->want_398)).elem, &F->v_1156)), rt_str(";", 1)); b_; }));
}
F->it_1140 = (*(P433)rt_nil_check(F->it_1140)).next;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->parts_1148)), rt_str(" ", 1)), F->tmp_1145), rt_str("; })", 4));
goto ret_;
}
if (((F->want_398 == NULL) || ((*(P437)rt_nil_check(F->want_398)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P433)rt_nil_check(F->e_397)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
(*F->t_399) = F->want_398;
F->f_1141 = (*(P437)rt_nil_check(F->want_398)).fields;
{
F->tmp_1157 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_1158 = NULL;
F->parts_1158 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177(F->want_398)), rt_str(" ", 1)), F->tmp_1157), rt_str(";", 1)); b_; }));
if (((f_list_len_54(F->it_1140) != ((rt_int)0LL)) && (f_list_len_54(F->it_1140) != ((rt_int)0LL)))) {
while (((F->it_1140 != NULL) && (F->f_1141 != NULL))) {
if (((((*(P433)rt_nil_check(F->it_1140)).a == NULL) || ((*(P433)rt_nil_check((*(P433)rt_nil_check((*(P433)rt_nil_check(F->it_1140)).a)).a)).kind != ((rt_int)7LL))) || (!rt_str_eq((*(P428)rt_nil_check((*(P433)rt_nil_check((*(P433)rt_nil_check((*(P433)rt_nil_check(F->it_1140)).a)).a)).name)), (*(P428)rt_nil_check((*(P439)rt_nil_check(F->f_1141)).name)))))) {
f_fail_23((*(P433)rt_nil_check(F->e_397)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P428)rt_nil_check((*(P439)rt_nil_check(F->f_1141)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_1159 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->it_1140)).b, (*(P439)rt_nil_check(F->f_1141)).t, &F->vt_1142));
f_check_type_175(F->vt_1142, (*(P439)rt_nil_check(F->f_1141)).t, (*(P433)rt_nil_check(F->e_397)).line);
F->parts_1158 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->parts_1158)), rt_str(" ", 1)), F->tmp_1157), rt_str(".", 1)), f_field_c_17(&(*(P428)rt_nil_check((*(P439)rt_nil_check(F->f_1141)).name)))), rt_str(" = ", 3)), f_copy_code_219((*(P439)rt_nil_check(F->f_1141)).t, &F->v_1159)), rt_str(";", 1)); b_; }));
}
F->it_1140 = (*(P433)rt_nil_check(F->it_1140)).next;
F->f_1141 = (*(P439)rt_nil_check(F->f_1141)).next;
}
}
if (((F->it_1140 != NULL) || (F->f_1141 != NULL))) {
f_fail_23((*(P433)rt_nil_check(F->e_397)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->parts_1158)), rt_str(" ", 1)), F->tmp_1157), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_fits_403(P443 y_401, P433 args_402) {
  struct f_fits_403fr *F = rt_alloc(sizeof *F);
F->y_401 = y_401;
F->args_402 = args_402;
F->a_1160 = NULL;
F->a_1160 = F->args_402;
F->pm_1161 = NULL;
F->pm_1161 = (*(P443)rt_nil_check(F->y_401)).params;
F->t_1162 = NULL;
F->saved_1163 = NULL;
F->saved_1163 = g_code_475;
F->ok_1164 = 1;
F->lv_1165 = NULL;
F->lc_1166 = NULL;
g_trial_490 = rt_add(g_trial_490, ((rt_int)1LL));
g_code_475 = f_new_buffer_24();
{ rt_frame xf1168;
if (RT_TRY(xf1168)) {
while (((F->ok_1164 && (F->a_1160 != NULL)) && (F->pm_1161 != NULL))) {
if ((((*(P441)rt_nil_check(F->pm_1161)).mode == ((rt_int)2LL)) || ((*(P441)rt_nil_check(F->pm_1161)).mode == ((rt_int)3LL)))) {
f_lvalue_359(F->a_1160, &F->lv_1165, &F->t_1162, &F->lc_1166, &F->ro_1167);
} else {
F->v_1170 = rt_str_copy(f_gexpr_380(F->a_1160, (*(P441)rt_nil_check(F->pm_1161)).t, &F->t_1162));
}
if ((!(f_same_164(F->t_1162, (*(P441)rt_nil_check(F->pm_1161)).t) || (((*(P437)rt_nil_check(F->t_1162)).kind == ((rt_int)11LL)) && ((*(P437)rt_nil_check((*(P441)rt_nil_check(F->pm_1161)).t)).kind == ((rt_int)8LL)))))) {
F->ok_1164 = 0;
}
F->a_1160 = (*(P433)rt_nil_check(F->a_1160)).next;
F->pm_1161 = (*(P441)rt_nil_check(F->pm_1161)).next;
}
if (((F->a_1160 != NULL) || (F->pm_1161 != NULL))) {
F->ok_1164 = 0;
}
RT_POP(xf1168);
} else {
RT_POP(xf1168);
int x1169 = rt_xcur;
if (0 || x1169 == ex_compile_error_1) {
F->ok_1164 = 0;
} else {
rt_raise(x1169);
}
}
}
g_trial_490 = rt_sub(g_trial_490, ((rt_int)1LL));
g_code_475 = F->saved_1163;
F->result_ = F->ok_1164;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P443 f_resolve_overload_408(rstr *name_404, P433 args_405, int is_stmt_406, rt_int line_407) {
  struct f_resolve_overload_408fr *F = rt_alloc(sizeof *F);
F->name_404 = name_404;
F->args_405 = args_405;
F->is_stmt_406 = is_stmt_406;
F->line_407 = line_407;
F->y_1171 = NULL;
F->y_1171 = (*(P449)rt_nil_check(g_table_463)).p[rt_index(f_hash_138(&(*F->name_404)), (*(P449)rt_nil_check(g_table_463)).lo, (*(P449)rt_nil_check(g_table_463)).hi) - (*(P449)rt_nil_check(g_table_463)).lo];
F->first_1172 = NULL;
F->n_1173 = ((rt_int)0LL);
while ((F->y_1171 != NULL)) {
if ((rt_str_eq((*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_1171)).name)), (*F->name_404)) && (((*(P443)rt_nil_check(F->y_1171)).kind == ((rt_int)3LL)) || ((*(P443)rt_nil_check(F->y_1171)).kind == ((rt_int)4LL))))) {
F->n_1173 = rt_add(F->n_1173, ((rt_int)1LL));
if ((F->first_1172 == NULL)) {
F->first_1172 = F->y_1171;
}
if (((((*(P443)rt_nil_check(F->y_1171)).kind == ((rt_int)4LL)) == F->is_stmt_406) && f_fits_403(F->y_1171, F->args_405))) {
F->result_ = F->y_1171;
goto ret_;
}
}
F->y_1171 = (*(P443)rt_nil_check(F->y_1171)).chain;
}
if (f_is_builtin_410(&(*F->name_404))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_1173 > ((rt_int)1LL))) {
f_fail_23(F->line_407, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_404)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_1172;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_builtin_410(rstr *n_409) {
  struct f_is_builtin_410fr *F = rt_alloc(sizeof *F);
F->n_409 = n_409;
F->result_ = ((((((((((((((rt_str_eq((*F->n_409), rt_str("ABS", 3)) || rt_str_eq((*F->n_409), rt_str("POS", 3))) || rt_str_eq((*F->n_409), rt_str("SUCC", 4))) || rt_str_eq((*F->n_409), rt_str("PRED", 4))) || rt_str_eq((*F->n_409), rt_str("SQRT", 4))) || rt_str_eq((*F->n_409), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_409), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_409), rt_str("WRITE", 5))) || rt_str_eq((*F->n_409), rt_str("READLN", 6))) || rt_str_eq((*F->n_409), rt_str("SEND", 4))) || rt_str_eq((*F->n_409), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_409), rt_str("DELAY", 5))) || rt_str_eq((*F->n_409), rt_str("TIME", 4))) || rt_str_eq((*F->n_409), rt_str("CNVT", 4))) || rt_str_eq((*F->n_409), rt_str("FORMAT", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P443 f_user_op_413(rstr *op_411, P433 args_412) {
  struct f_user_op_413fr *F = rt_alloc(sizeof *F);
F->op_411 = op_411;
F->args_412 = args_412;
F->y_1174 = NULL;
F->y_1174 = (*(P449)rt_nil_check(g_table_463)).p[rt_index(f_hash_138(&(*F->op_411)), (*(P449)rt_nil_check(g_table_463)).lo, (*(P449)rt_nil_check(g_table_463)).hi) - (*(P449)rt_nil_check(g_table_463)).lo];
while ((F->y_1174 != NULL)) {
if (((rt_str_eq((*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_1174)).name)), (*F->op_411)) && ((*(P443)rt_nil_check(F->y_1174)).kind == ((rt_int)3LL))) && f_fits_403(F->y_1174, F->args_412))) {
F->result_ = F->y_1174;
goto ret_;
}
F->y_1174 = (*(P443)rt_nil_check(F->y_1174)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gcall_417(P433 e_414, int is_stmt_415, P437 *t_416) {
  struct f_gcall_417fr *F = rt_alloc(sizeof *F);
F->e_414 = e_414;
F->is_stmt_415 = is_stmt_415;
F->t_416 = t_416;
F->fn_1175 = NULL;
F->fn_1175 = (*(P433)rt_nil_check(F->e_414)).a;
F->tt_1176 = NULL;
F->y_1177 = NULL;
F->args_1178 = NULL;
F->args_1178 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_1179 = NULL;
F->a_1179 = (*(P433)rt_nil_check(F->e_414)).b;
F->pm_1180 = NULL;
F->lt_1181 = NULL;
F->vt_1182 = NULL;
F->lv_1183 = NULL;
F->lc_1184 = NULL;
if (((*(P433)rt_nil_check(F->fn_1175)).kind == ((rt_int)12LL))) {
F->tt_1176 = (*(P433)rt_nil_check(F->fn_1175)).b;
F->fn_1175 = (*(P433)rt_nil_check(F->fn_1175)).a;
}
F->y_1177 = f_lookup_140(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_1175)).name)));
if ((F->y_1177 == NULL)) {
F->result_ = f_builtin_424(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_1175)).name)), F->tt_1176, (*(P433)rt_nil_check(F->e_414)).b, (*(P433)rt_nil_check(F->e_414)).line, F->is_stmt_415, &(*F->t_416));
goto ret_;
}
if (((*(P443)rt_nil_check(F->y_1177)).kind == ((rt_int)10LL))) {
F->y_1177 = f_instantiate_338(F->y_1177, F->tt_1176, (*(P433)rt_nil_check(F->e_414)).b, (*(P433)rt_nil_check(F->e_414)).line);
} else if ((((*(P443)rt_nil_check(F->y_1177)).kind == ((rt_int)3LL)) || ((*(P443)rt_nil_check(F->y_1177)).kind == ((rt_int)4LL)))) {
F->y_1177 = f_resolve_overload_408(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_1175)).name)), (*(P433)rt_nil_check(F->e_414)).b, F->is_stmt_415, (*(P433)rt_nil_check(F->e_414)).line);
if ((F->y_1177 == NULL)) {
F->result_ = f_builtin_424(&(*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_1175)).name)), F->tt_1176, (*(P433)rt_nil_check(F->e_414)).b, (*(P433)rt_nil_check(F->e_414)).line, F->is_stmt_415, &(*F->t_416));
goto ret_;
}
}
if ((((*(P443)rt_nil_check(F->y_1177)).kind != ((rt_int)3LL)) && ((*(P443)rt_nil_check(F->y_1177)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P433)rt_nil_check(F->e_414)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_1175)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_415 && ((*(P443)rt_nil_check(F->y_1177)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P433)rt_nil_check(F->e_414)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_1175)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_415) && ((*(P443)rt_nil_check(F->y_1177)).kind != ((rt_int)3LL)))) {
f_fail_23((*(P433)rt_nil_check(F->e_414)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_1175)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_1180 = (*(P443)rt_nil_check(F->y_1177)).params;
if (((*(P443)rt_nil_check(F->y_1177)).level > ((rt_int)0LL))) {
F->args_1178 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1187 = ((rt_int)1LL), hi1188 = rt_sub(g_cur_level_478, (*(P443)rt_nil_check(F->y_1177)).level);
for (rt_int it1189 = lo1187; it1189 <= hi1188; it1189++) {
F->i_1186 = it1189;
F->args_1178 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check(F->args_1178)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_1179 != NULL) && (F->pm_1180 != NULL))) {
if ((((*(P428)rt_nil_check(F->args_1178))).len > ((rt_int)0LL))) {
F->args_1178 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check(F->args_1178)), rt_str(", ", 2)); b_; }));
}
if ((((*(P441)rt_nil_check(F->pm_1180)).mode == ((rt_int)2LL)) || ((*(P441)rt_nil_check(F->pm_1180)).mode == ((rt_int)3LL)))) {
f_lvalue_359(F->a_1179, &F->lv_1183, &F->lt_1181, &F->lc_1184, &F->ro_1185);
if (F->ro_1185) {
f_fail_23((*(P433)rt_nil_check(F->e_414)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check((*(P441)rt_nil_check(F->pm_1180)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_175(F->lt_1181, (*(P441)rt_nil_check(F->pm_1180)).t, (*(P433)rt_nil_check(F->e_414)).line);
F->args_1178 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->args_1178)), rt_str("&", 1)), (*(P428)rt_nil_check(F->lv_1183))); b_; }));
} else if ((((*(P441)rt_nil_check(F->pm_1180)).mode == ((rt_int)4LL)) && f_is_lvalue_353(F->a_1179))) {
f_lvalue_359(F->a_1179, &F->lv_1183, &F->lt_1181, &F->lc_1184, &F->ro_1185);
f_check_type_175(F->lt_1181, (*(P441)rt_nil_check(F->pm_1180)).t, (*(P433)rt_nil_check(F->e_414)).line);
F->args_1178 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->args_1178)), rt_str("&", 1)), (*(P428)rt_nil_check(F->lv_1183))); b_; }));
} else if (((*(P441)rt_nil_check(F->pm_1180)).mode == ((rt_int)4LL))) {
F->v_1190 = rt_str_copy(f_gexpr_380(F->a_1179, (*(P441)rt_nil_check(F->pm_1180)).t, &F->vt_1182));
F->ct_1191 = rt_str_copy(f_ctype_177((*(P441)rt_nil_check(F->pm_1180)).t));
f_check_type_175(F->vt_1182, (*(P441)rt_nil_check(F->pm_1180)).t, (*(P433)rt_nil_check(F->e_414)).line);
F->args_1178 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->args_1178)), rt_str("({ ", 3)), F->ct_1191), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1191), rt_str(")); *b_ = ", 10)), F->v_1190), rt_str("; b_; })", 8)); b_; }));
} else {
F->v_1192 = rt_str_copy(f_gexpr_380(F->a_1179, (*(P441)rt_nil_check(F->pm_1180)).t, &F->vt_1182));
f_check_type_175(F->vt_1182, (*(P441)rt_nil_check(F->pm_1180)).t, (*(P433)rt_nil_check(F->e_414)).line);
if (((((*(P437)rt_nil_check((*(P441)rt_nil_check(F->pm_1180)).t)).kind == ((rt_int)1LL)) && ((*(P441)rt_nil_check(F->pm_1180)).c != NULL)) && (*(P435)rt_nil_check((*(P441)rt_nil_check(F->pm_1180)).c)).hasm)) {
F->args_1178 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->args_1178)), rt_str("rt_range(", 9)), F->v_1192), rt_str(", ", 2)), f_itos_7((*(P435)rt_nil_check((*(P441)rt_nil_check(F->pm_1180)).c)).mlo)), rt_str(", ", 2)), f_itos_7((*(P435)rt_nil_check((*(P441)rt_nil_check(F->pm_1180)).c)).mhi)), rt_str(")", 1)); b_; }));
} else {
F->args_1178 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P428)rt_nil_check(F->args_1178)), F->v_1192); b_; }));
}
}
F->a_1179 = (*(P433)rt_nil_check(F->a_1179)).next;
F->pm_1180 = (*(P441)rt_nil_check(F->pm_1180)).next;
}
if (((F->a_1179 != NULL) || (F->pm_1180 != NULL))) {
f_fail_23((*(P433)rt_nil_check(F->e_414)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check((*(P433)rt_nil_check(F->fn_1175)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_54((*(P433)rt_nil_check(F->e_414)).b), f_list_len_54(F->a_1179)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
(*F->t_416) = (*(P443)rt_nil_check(F->y_1177)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check((*(P443)rt_nil_check(F->y_1177)).cname)), rt_str("(", 1)), (*(P428)rt_nil_check(F->args_1178))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_builtin_424(rstr *name_418, P433 tt_419, P433 args_420, rt_int line_421, int is_stmt_422, P437 *t_423) {
  struct f_builtin_424fr *F = rt_alloc(sizeof *F);
F->name_418 = name_418;
F->tt_419 = tt_419;
F->args_420 = args_420;
F->line_421 = line_421;
F->is_stmt_422 = is_stmt_422;
F->t_423 = t_423;
F->at_1193 = NULL;
F->n_1194 = f_list_len_54(F->args_420);
(*F->t_423) = g_ty_void_497;
if (((rt_str_eq((*F->name_418), rt_str("POS", 3)) || rt_str_eq((*F->name_418), rt_str("SUCC", 4))) || rt_str_eq((*F->name_418), rt_str("PRED", 4)))) {
F->a_1195 = rt_str_copy(f_gexpr_380(F->args_420, NULL, &F->at_1193));
if (rt_str_eq((*F->name_418), rt_str("POS", 3))) {
if (((*(P437)rt_nil_check(f_base_of_166(F->at_1193))).kind != ((rt_int)4LL))) {
f_fail_23(F->line_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
(*F->t_423) = g_ty_int_492;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1195), rt_str(") + 1)", 6));
goto ret_;
}
(*F->t_423) = F->at_1193;
if (((*(P437)rt_nil_check(F->at_1193)).kind == ((rt_int)1LL))) {
if (rt_str_eq((*F->name_418), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1195), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1195), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_418), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1195), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P437)rt_nil_check(f_base_of_166(F->at_1193))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1195), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P437)rt_nil_check(f_base_of_166(F->at_1193))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_418), rt_str("SQRT", 4)) || rt_str_eq((*F->name_418), rt_str("SIN", 3))) || rt_str_eq((*F->name_418), rt_str("COS", 3))) || rt_str_eq((*F->name_418), rt_str("EXP", 3))) || rt_str_eq((*F->name_418), rt_str("LN", 2))) || rt_str_eq((*F->name_418), rt_str("FLOOR", 5)))) {
F->a_1196 = rt_str_copy(f_gexpr_380(F->args_420, g_ty_float_494, &F->at_1193));
(*F->t_423) = g_ty_float_494;
if (rt_str_eq((*F->name_418), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_1196), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_418)), rt_str("(", 1)), F->a_1196), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_418), rt_str("IFLOAT", 6))) {
F->a_1197 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->args_420)).next, g_ty_int_492, &F->at_1193));
(*F->t_423) = g_ty_float_494;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_1197), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_418), rt_str("IFIX", 4))) {
F->a_1198 = rt_str_copy(f_gexpr_380(F->args_420, g_ty_float_494, &F->at_1193));
(*F->t_423) = g_ty_int_492;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1198), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_418), rt_str("FORMAT", 6))) {
F->a_1199 = rt_str_copy(f_gexpr_380(F->args_420, g_ty_float_494, &F->at_1193));
F->n1_1200 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->args_420)).next, g_ty_int_492, &F->at_1193));
F->m1_1201 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check((*(P433)rt_nil_check(F->args_420)).next)).next, g_ty_int_492, &F->at_1193));
(*F->t_423) = g_ty_string_496;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_1199), rt_str(", ", 2)), F->n1_1200), rt_str(", ", 2)), F->m1_1201), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_418), rt_str("ABS", 3))) {
F->a_1202 = rt_str_copy(f_gexpr_380(F->args_420, NULL, &F->at_1193));
(*F->t_423) = F->at_1193;
if (((*(P437)rt_nil_check(F->at_1193)).kind == ((rt_int)1LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_1202), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_1202), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_418), rt_str("CNVT", 4))) {
if ((F->tt_419 == NULL)) {
f_fail_23(F->line_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_1203 = rt_str_copy(f_gexpr_380(F->args_420, NULL, &F->at_1193));
if ((((*(P433)rt_nil_check(F->tt_419)).kind == ((rt_int)73LL)) && ((*(P437)rt_nil_check(F->at_1193)).kind == ((rt_int)1LL)))) {
(*F->t_423) = g_ty_string_496;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_1203), rt_str(")", 1));
goto ret_;
} else if ((((*(P433)rt_nil_check(F->tt_419)).kind == ((rt_int)73LL)) && ((*(P437)rt_nil_check(F->at_1193)).kind == ((rt_int)3LL)))) {
(*F->t_423) = g_ty_string_496;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_1203), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P433)rt_nil_check(F->tt_419)).kind == ((rt_int)73LL)) && ((*(P437)rt_nil_check(F->at_1193)).kind == ((rt_int)2LL)))) {
(*F->t_423) = g_ty_string_496;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_1203), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P433)rt_nil_check(F->tt_419)).kind == ((rt_int)70LL)) && ((*(P437)rt_nil_check(F->at_1193)).kind == ((rt_int)5LL)))) {
(*F->t_423) = g_ty_int_492;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_1203), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_418), rt_str("WRITELN", 7))) {
if ((F->n_1194 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_1204 = NULL;
F->last_1204 = F->args_420;
while (((*(P433)rt_nil_check(F->last_1204)).next != NULL)) {
F->last_1204 = (*(P433)rt_nil_check(F->last_1204)).next;
}
{
F->a_1205 = rt_str_copy(f_gexpr_380(F->last_1204, g_ty_string_496, &F->at_1193));
f_check_type_175(F->at_1193, g_ty_string_496, F->line_421);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_1205), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_418), rt_str("WRITE", 5))) {
F->a_1206 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->args_420)).next, NULL, &F->at_1193));
if (((*(P437)rt_nil_check(F->at_1193)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_1206), rt_str(")", 1));
goto ret_;
} else if (((*(P437)rt_nil_check(F->at_1193)).kind == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_1206), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_418), rt_str("READLN", 6))) {
F->lv_1207 = NULL;
F->lc_1208 = NULL;
F->last_1210 = NULL;
F->last_1210 = F->args_420;
while (((*(P433)rt_nil_check(F->last_1210)).next != NULL)) {
F->last_1210 = (*(P433)rt_nil_check(F->last_1210)).next;
}
f_lvalue_359(F->last_1210, &F->lv_1207, &F->at_1193, &F->lc_1208, &F->ro_1209);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P428)rt_nil_check(F->lv_1207))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_418), rt_str("SIZELN", 6))) {
(*F->t_423) = g_ty_int_492;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_418), rt_str("EOF", 3))) {
(*F->t_423) = g_ty_bool_493;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_418), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_418), rt_str("SYS_OUT", 7)))) {
(*F->t_423) = g_ty_file_498;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_418), rt_str("OPEN", 4)) || rt_str_eq((*F->name_418), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_418), rt_str("SEND", 4)) || rt_str_eq((*F->name_418), rt_str("RECEIVE", 7)))) {
F->lv_1211 = NULL;
F->dv_1212 = NULL;
F->lc_1213 = NULL;
F->mt_1215 = NULL;
F->dt_1216 = NULL;
f_lvalue_359(F->args_420, &F->lv_1211, &F->mt_1215, &F->lc_1213, &F->ro_1214);
if (((*(P437)rt_nil_check(F->mt_1215)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_418), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_418), rt_str("RECEIVE", 7))) {
f_lvalue_359((*(P433)rt_nil_check(F->args_420)).next, &F->dv_1212, &F->dt_1216, &F->lc_1213, &F->ro_1214);
f_check_type_175(F->dt_1216, (*(P437)rt_nil_check(F->mt_1215)).elem, F->line_421);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(&", 12), (*(P428)rt_nil_check(F->lv_1211))), rt_str(", &", 3)), (*(P428)rt_nil_check(F->dv_1212))), rt_str(")", 1));
goto ret_;
}
{
F->v_1217 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->args_420)).next, (*(P437)rt_nil_check(F->mt_1215)).elem, &F->at_1193));
f_check_type_175(F->at_1193, (*(P437)rt_nil_check(F->mt_1215)).elem, F->line_421);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P437)rt_nil_check(F->mt_1215)).elem)), rt_str(" m_ = ", 6)), F->v_1217), rt_str("; rt_send(&", 11)), (*(P428)rt_nil_check(F->lv_1211))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_418), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_418), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_1218 = NULL;
F->lc_1219 = NULL;
F->mt_1221 = NULL;
f_lvalue_359(F->args_420, &F->lv_1218, &F->mt_1221, &F->lc_1219, &F->ro_1220);
if (((*(P437)rt_nil_check(F->mt_1221)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_418), rt_str(" needs a mailbox", 16)); b_; }));
}
(*F->t_423) = g_ty_int_492;
if (rt_str_eq((*F->name_418), rt_str("FULL_SLOTS", 10))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_mbox_count(&", 15), (*(P428)rt_nil_check(F->lv_1218))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P428)rt_nil_check(F->lv_1218))), rt_str(".cap - rt_mbox_count(&", 22)), (*(P428)rt_nil_check(F->lv_1218))), rt_str("))", 2));
goto ret_;
} else if ((rt_str_eq((*F->name_418), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_418), rt_str("COND_RECEIVE", 12)))) {
F->lv_1222 = NULL;
F->dv_1223 = NULL;
F->bv_1224 = NULL;
F->lc_1225 = NULL;
F->mt_1227 = NULL;
F->dt_1228 = NULL;
F->bt_1229 = NULL;
f_lvalue_359(F->args_420, &F->lv_1222, &F->mt_1227, &F->lc_1225, &F->ro_1226);
if (((*(P437)rt_nil_check(F->mt_1227)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_418), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_359((*(P433)rt_nil_check((*(P433)rt_nil_check(F->args_420)).next)).next, &F->bv_1224, &F->bt_1229, &F->lc_1225, &F->ro_1226);
f_check_type_175(F->bt_1229, g_ty_bool_493, F->line_421);
if (rt_str_eq((*F->name_418), rt_str("COND_RECEIVE", 12))) {
f_lvalue_359((*(P433)rt_nil_check(F->args_420)).next, &F->dv_1223, &F->dt_1228, &F->lc_1225, &F->ro_1226);
f_check_type_175(F->dt_1228, (*(P437)rt_nil_check(F->mt_1227)).elem, F->line_421);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P428)rt_nil_check(F->bv_1224)), rt_str(" = rt_cond_receive(&", 20)), (*(P428)rt_nil_check(F->lv_1222))), rt_str(", &", 3)), (*(P428)rt_nil_check(F->dv_1223))), rt_str(")", 1));
goto ret_;
}
{
F->v_1230 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->args_420)).next, (*(P437)rt_nil_check(F->mt_1227)).elem, &F->at_1193));
f_check_type_175(F->at_1193, (*(P437)rt_nil_check(F->mt_1227)).elem, F->line_421);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P437)rt_nil_check(F->mt_1227)).elem)), rt_str(" m_ = ", 6)), F->v_1230), rt_str("; ", 2)), (*(P428)rt_nil_check(F->bv_1224))), rt_str(" = rt_cond_send(&", 17)), (*(P428)rt_nil_check(F->lv_1222))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_418), rt_str("PRIORITY", 8))) {
(*F->t_423) = g_ty_int_492;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_312(F->args_420)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_418), rt_str("SET_PRIORITY", 12))) {
F->v_1231 = rt_str_copy(f_gexpr_380((*(P433)rt_nil_check(F->args_420)).next, g_ty_int_492, &F->at_1193));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_312(F->args_420)), rt_str(", ", 2)), F->v_1231), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_418), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_312(F->args_420)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_418), rt_str("ACTIVE", 6))) {
(*F->t_423) = g_ty_bool_493;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_is_active(", 13), f_act_ref_312(F->args_420)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_418), rt_str("DELAY", 5))) {
F->v_1232 = rt_str_copy(f_gexpr_380(F->args_420, g_ty_int_492, &F->at_1193));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_1232), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_418), rt_str("DELAY_UNTIL", 11))) {
F->v_1233 = rt_str_copy(f_gexpr_380(F->args_420, g_ty_int_492, &F->at_1193));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_1233), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_418), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_312(F->args_420)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_418), rt_str("TIME", 4))) {
(*F->t_423) = g_ty_int_492;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_418), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_418), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_418), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_418), rt_str("HOURS", 5)))) {
(*F->t_423) = g_ty_int_492;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_418));
goto ret_;
} else if (rt_str_eq((*F->name_418), rt_str("HALT", 4))) {
F->a_1234 = rt_str_copy(f_gexpr_380(F->args_420, g_ty_int_492, &F->at_1193));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_1234), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_418), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_translate_426(P433 units_425) {
  struct f_translate_426fr *F = rt_alloc(sizeof *F);
F->units_425 = units_425;
F->u_1235 = NULL;
F->u_1235 = F->units_425;
while ((F->u_1235 != NULL)) {
if (((*(P433)rt_nil_check(F->u_1235)).next == NULL)) {
{ R454 *cell1236 = rt_alloc(sizeof(R454));
(*cell1236).d = NULL;
(*cell1236).next = NULL;
g_caps_480 = cell1236;
}
(*(P453)rt_nil_check(g_caps_480)).d = F->u_1235;
f_declare_body_235((*(P433)rt_nil_check(F->u_1235)).c);
f_body_elements_280((*(P433)rt_nil_check(F->u_1235)).c);
{
F->l_1237 = NULL;
F->l_1237 = F->units_425;
while ((F->l_1237 != F->u_1235)) {
{
F->w_1238 = rt_str_copy(f_waits_of_272(F->l_1237));
if (((F->w_1238).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1238);
}
}
F->l_1237 = (*(P433)rt_nil_check(F->l_1237)).next;
}
}
} else {
f_gen_capsule_245(F->u_1235);
}
F->u_1235 = (*(P433)rt_nil_check(F->u_1235)).next;
}
ret_:
  return;
}

static void f_print_program_427(void) {
  struct f_print_program_427fr *F = rt_alloc(sizeof *F);
f_emit_helpers_231();
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_468);
f_print_buffer_31(g_out_frames_484);
f_print_buffer_31(g_out_helpers_469);
f_print_buffer_31(g_out_protos_470);
f_print_buffer_31(g_out_globals_471);
f_print_buffer_31(g_out_funcs_472);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_excs_474);
f_print_buffer_31(g_out_init_473);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  return;
}

static void as_R458(R458 *d, R458 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R458 cp_R458(R458 s) {
  R458 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R458(R458 a, R458 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_R456(R456 *d, R456 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R456 cp_R456(R456 s) {
  R456 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R456(R456 a, R456 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R454(R454 *d, R454 s) {
  d->d = s.d;
  d->next = s.next;
}
static R454 cp_R454(R454 s) {
  R454 d = s;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R454(R454 a, R454 b) {
  return 1 && (a.d == b.d) && (a.next == b.next);
}
static void as_R452(R452 *d, R452 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R452 cp_R452(R452 s) {
  R452 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R452(R452 a, R452 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_A450(A450 *d, A450 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A450 cp_A450(A450 s) {
  A450 d = s; d.p = rt_alloc(sizeof(P443) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A450(A450 a, A450 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R448(R448 *d, R448 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R448 cp_R448(R448 s) {
  R448 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R448(R448 a, R448 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R446(R446 *d, R446 s) {
  d->s = s.s;
  d->next = s.next;
}
static R446 cp_R446(R446 s) {
  R446 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R446(R446 a, R446 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R444(R444 *d, R444 s) {
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
static R444 cp_R444(R444 s) {
  R444 d = s;
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
static int eq_R444(R444 a, R444 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.chain == b.chain) && (a.stack == b.stack);
}
static void as_R442(R442 *d, R442 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R442 cp_R442(R442 s) {
  R442 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R442(R442 a, R442 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R440(R440 *d, R440 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R440 cp_R440(R440 s) {
  R440 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R440(R440 a, R440 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R438(R438 *d, R438 s) {
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
static R438 cp_R438(R438 s) {
  R438 d = s;
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
static int eq_R438(R438 a, R438 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.next == b.next);
}
static void as_R436(R436 *d, R436 s) {
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
static R436 cp_R436(R436 s) {
  R436 d = s;
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
static int eq_R436(R436 a, R436 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args);
}
static void as_R434(R434 *d, R434 s) {
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
static R434 cp_R434(R434 s) {
  R434 d = s;
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
static int eq_R434(R434 a, R434 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A432(A432 *d, A432 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A432 cp_A432(A432 s) {
  A432 d = s; d.p = rt_alloc(sizeof(P429) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A432(A432 a, A432 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R430(R430 *d, R430 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
}
static R430 cp_R430(R430 s) {
  R430 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  return d;
}
static int eq_R430(R430 a, R430 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_459 = NULL;
g_ntoks_460 = ((rt_int)0LL);
g_tpos_461 = ((rt_int)1LL);
g_src_line_462 = ((rt_int)0LL);
g_table_463 = NULL;
g_depth_464 = ((rt_int)0LL);
g_scope_stack_465 = NULL;
g_all_types_466 = NULL;
g_serial_467 = ((rt_int)0LL);
g_out_types_468 = NULL;
g_out_helpers_469 = NULL;
g_out_protos_470 = NULL;
g_out_globals_471 = NULL;
g_out_funcs_472 = NULL;
g_out_init_473 = NULL;
g_out_excs_474 = NULL;
g_code_475 = NULL;
g_fields_buf_476 = NULL;
g_in_func_477 = 0;
g_cur_level_478 = ((rt_int)0LL);
g_fctx_479 = NULL;
g_caps_480 = NULL;
g_cap_waits_481 = NULL;
g_psub_482 = NULL;
g_st_field_483 = NULL;
g_out_frames_484 = NULL;
g_func_sym_485 = NULL;
g_exits_486 = NULL;
g_frames_487 = ((rt_int)0LL);
g_handlers_488 = NULL;
g_cleanups_489 = NULL;
g_trial_490 = ((rt_int)0LL);
g_mcopies_491 = NULL;
g_ty_int_492 = NULL;
g_ty_bool_493 = NULL;
g_ty_float_494 = NULL;
g_ty_ascii_495 = NULL;
g_ty_string_496 = NULL;
g_ty_void_497 = NULL;
g_ty_file_498 = NULL;
g_ty_nil_499 = NULL;
g_ty_lock_500 = NULL;
g_ty_act_501 = NULL;
g_no_cons_502 = NULL;
{ A432 *cell1239 = rt_alloc(sizeof(A432));
rt_int pv1240 = ((rt_int)1000000LL);
(*cell1239).lo = ((rt_int)1LL); (*cell1239).hi = pv1240; (*cell1239).lo2 = 1; (*cell1239).hi2 = 1;
(*cell1239).p = rt_alloc(sizeof(P429) * (size_t)RT_CNT((*cell1239)));
for (rt_int i1241 = 0; i1241 < RT_CNT((*cell1239)); i1241++) {
(*cell1239).p[i1241] = NULL;
}
g_toks_459 = cell1239;
}
{ A450 *cell1242 = rt_alloc(sizeof(A450));
rt_int pv1243 = ((rt_int)4093LL);
(*cell1242).lo = ((rt_int)0LL); (*cell1242).hi = pv1243; (*cell1242).lo2 = 1; (*cell1242).hi2 = 1;
(*cell1242).p = rt_alloc(sizeof(P443) * (size_t)RT_CNT((*cell1242)));
for (rt_int i1244 = 0; i1244 < RT_CNT((*cell1242)); i1244++) {
(*cell1242).p[i1244] = NULL;
}
g_table_463 = cell1242;
}
g_out_types_468 = f_new_buffer_24();
g_out_helpers_469 = f_new_buffer_24();
g_out_protos_470 = f_new_buffer_24();
g_out_globals_471 = f_new_buffer_24();
g_out_funcs_472 = f_new_buffer_24();
g_out_init_473 = f_new_buffer_24();
g_out_excs_474 = f_new_buffer_24();
g_out_frames_484 = f_new_buffer_24();
g_code_475 = g_out_init_473;
g_no_cons_502 = f_new_cons_158();
g_ty_int_492 = f_new_typ_157(((rt_int)1LL));
g_ty_bool_493 = f_new_typ_157(((rt_int)2LL));
g_ty_float_494 = f_new_typ_157(((rt_int)3LL));
g_ty_string_496 = f_new_typ_157(((rt_int)5LL));
g_ty_void_497 = f_new_typ_157(((rt_int)9LL));
g_ty_file_498 = f_new_typ_157(((rt_int)10LL));
g_ty_nil_499 = f_new_typ_157(((rt_int)11LL));
g_ty_lock_500 = f_new_typ_157(((rt_int)13LL));
g_ty_act_501 = f_new_typ_157(((rt_int)14LL));
{ rt_frame xf1245;
if (RT_TRY(xf1245)) {
f_init_ascii_182();
f_read_source_45();
f_translate_426(f_program_136());
f_print_program_427();
RT_POP(xf1245);
} else {
RT_POP(xf1245);
int x1246 = rt_xcur;
if (0 || x1246 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x1246);
}
}
}
  rt_main_done();
  return 0;
}
