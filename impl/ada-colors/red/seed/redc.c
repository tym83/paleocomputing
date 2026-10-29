#include "paleo.h"
#include <math.h>
typedef rstr *P439;
typedef struct R441 R441;
typedef struct R441 *P440;
struct R441 {  rt_int kind; rt_int line; rt_int ival; P439 s;  };
typedef struct A443 A443;
struct A443 { rt_int lo, hi, lo2, hi2; P440 *p; };
typedef A443 *P442;
typedef struct R445 R445;
typedef struct R445 *P444;
struct R445 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P439 name; P439 tag; P444 a; P444 b; P444 c; P444 d; P444 e; P444 next;  };
typedef struct R447 R447;
typedef struct R447 *P446;
struct R447 {  P439 lo; P439 hi; P439 lo2; P439 hi2; P439 slen; rt_int mlo; rt_int mhi; int hasm; P444 args;  };
typedef struct R449 R449;
typedef struct R449 *P448;
typedef struct R451 R451;
typedef struct R451 *P450;
struct R451 {  P439 name; P448 t; P446 c; P444 st; P450 next;  };
struct R449 {  rt_int kind; P439 name; P444 lits; P448 elem; P448 idx; P448 idx2; P446 elemcons; P444 elemst; P448 under; P444 tparams; P444 ocap; P450 fields; P448 target; P444 decl; P439 cname; int forward; int defined; int helpers; P448 next;  };
typedef struct R453 R453;
typedef struct R453 *P452;
struct R453 {  P439 name; rt_int mode; P448 t; P446 c; P439 cfield; P452 next;  };
typedef struct R455 R455;
typedef struct R455 *P454;
struct R455 {  rt_int kind; P439 name; P448 t; P446 c; P439 access; P439 cname; int ro_flag; rt_int mvalue; int hasmv; P444 st; P444 decl; P452 params; P448 result; rt_int depth; rt_int level; int byref; P454 members; P454 mnext; P444 binds; P454 insts; P454 chain; P454 stack;  };
typedef struct R457 R457;
typedef struct R457 *P456;
struct R457 {  P439 s; P456 next;  };
typedef struct R459 R459;
typedef struct R459 *P458;
struct R459 {  P456 head; P456 tail;  };
typedef struct A461 A461;
struct A461 { rt_int lo, hi, lo2, hi2; P454 *p; };
typedef A461 *P460;
typedef struct R463 R463;
typedef struct R463 *P462;
struct R463 {  P439 match; P439 label; rt_int depth; P462 next;  };
typedef struct R465 R465;
typedef struct R465 *P464;
struct R465 {  P444 d; P464 next;  };
typedef struct R467 R467;
typedef struct R467 *P466;
struct R467 {  P444 d; P439 w; P466 next;  };
typedef struct R469 R469;
typedef struct R469 *P468;
struct R469 {  rt_int depth; P444 imps; int all_imp; P468 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P439 result_;
 P439 t_515;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_518;
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
 rstr letters_519;
};
struct f_lower_s_15fr { int dummy;
 rstr *s_14;
 rstr result_;
 rstr letters_520;
 rstr r_521;
 rt_int i_522;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_526;
 rstr kw_527;
 rstr w_528;
 rt_int i_529;
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
 P458 result_;
 P458 b_533;
};
struct f_put_27fr { int dummy;
 P458 b_25;
 rstr *s_26;
 P456 l_535;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P458 b_30;
 P456 l_537;
};
struct f_splice_34fr { int dummy;
 P458 a_32;
 P458 b_33;
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
 P440 t_539;
};
struct f_lex_line_44fr { int dummy;
 rstr *line_43;
 rt_int i_541;
 rt_int j_542;
 rt_int n_543;
 int c_544;
 rstr w_545;
 rt_int k_546;
 rstr w_550;
 rt_int k_551;
 rstr two_555;
};
struct f_read_source_45fr { int dummy;
 rstr line_556;
};
struct f_nn_48fr { int dummy;
 rt_int kind_46;
 rt_int line_47;
 P444 result_;
 P444 x_557;
};
struct f_append_52fr { int dummy;
 P444 *head_49;
 P444 *tail_50;
 P444 x_51;
};
struct f_list_len_54fr { int dummy;
 P444 l_53;
 rt_int result_;
 rt_int n_559;
 P444 p_560;
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
 P439 result_;
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
 P439 result_;
};
struct f_name_node_77fr { int dummy;
 P444 result_;
 P444 x_561;
};
struct f_id_list_78fr { int dummy;
 P444 result_;
 P444 head_562;
 P444 tail_563;
};
struct f_p_subtype_79fr { int dummy;
 P444 result_;
 rt_int line_564;
 P444 x_565;
 rstr w_566;
 P444 head_567;
 P444 tail_568;
 P444 head_569;
 P444 tail_570;
 int more_571;
 P444 names_572;
 P444 st_573;
 P444 cmp_574;
 P444 head_575;
 P444 tail_576;
 int more_577;
 P444 lit_578;
};
struct f_actual_params_80fr { int dummy;
 P444 result_;
 P444 head_579;
 P444 tail_580;
};
struct f_is_type_word_82fr { int dummy;
 rstr *w_81;
 int result_;
};
struct f_actual_tt_83fr { int dummy;
 P444 result_;
 P444 head_581;
 P444 tail_582;
 int more_583;
};
struct f_binop_88fr { int dummy;
 P439 op_84;
 P444 l_85;
 P444 r_86;
 rt_int line_87;
 P444 result_;
 P444 x_584;
};
struct f_expr_89fr { int dummy;
 P444 result_;
 P444 l_585;
 P439 op_586;
 rt_int line_587;
};
struct f_expr_and_90fr { int dummy;
 P444 result_;
 P444 l_588;
 rt_int line_589;
};
struct f_expr_not_91fr { int dummy;
 P444 result_;
 P444 x_590;
};
struct f_is_rel_93fr { int dummy;
 rstr *s_92;
 int result_;
};
struct f_expr_rel_94fr { int dummy;
 P444 result_;
 P444 l_591;
 P439 op_592;
 rt_int line_593;
};
struct f_expr_add_95fr { int dummy;
 P444 result_;
 P444 l_594;
 P439 op_595;
 rt_int line_596;
};
struct f_expr_mul_96fr { int dummy;
 P444 result_;
 P444 l_597;
 P439 op_598;
 rt_int line_599;
};
struct f_expr_pow_97fr { int dummy;
 P444 result_;
 P444 l_600;
 rt_int line_601;
};
struct f_expr_prefix_98fr { int dummy;
 P444 result_;
 P444 x_602;
};
struct f_postfix_99fr { int dummy;
 P444 result_;
 P444 p_603;
 rt_int line_604;
 P444 x_605;
 P444 head_606;
 P444 tail_607;
 int more_608;
 P444 lo_609;
 P444 r_610;
 P444 x_611;
 P444 x_612;
 P444 x_613;
};
struct f_primary_100fr { int dummy;
 P444 result_;
 rt_int line_614;
 P444 x_615;
 rt_int k_616;
 rstr w_617;
 P444 head_618;
 P444 tail_619;
 int more_620;
};
struct f_constructor_item_101fr { int dummy;
 P444 result_;
 rt_int line_621;
 P444 it_622;
 P444 first_623;
 P444 keys_624;
 P444 ktail_625;
 P444 lab_626;
 rt_int save_627;
 P444 more_628;
 P444 tail2_629;
 int ok_630;
 int go_631;
 P444 l2_632;
};
struct f_at_body_end_102fr { int dummy;
 int result_;
};
struct f_body_103fr { int dummy;
 P444 result_;
 P444 head_633;
 P444 tail_634;
};
struct f_body_element_104fr { int dummy;
 P444 result_;
 P444 x_635;
};
struct f_declaration_105fr { int dummy;
 P444 result_;
 rt_int line_636;
 P444 head_637;
 P444 tail_638;
 P444 names_639;
 P444 x_640;
};
struct f_object_decl_106fr { int dummy;
 P444 result_;
 rt_int line_641;
 int is_var_642;
 P444 names_643;
 P444 st_644;
 P444 init_645;
 P444 head_646;
 P444 tail_647;
 P444 x_648;
};
struct f_abbrev_decl_107fr { int dummy;
 P444 result_;
 P444 x_649;
};
struct f_skip_rep_108fr { int dummy;
 rt_int depth_650;
};
struct f_type_decl_109fr { int dummy;
 P444 result_;
 rt_int line_651;
 P439 name_652;
 P444 params_653;
 P444 x_654;
};
struct f_mode_of_111fr { int dummy;
 rstr *w_110;
 rt_int result_;
};
struct f_formal_params_112fr { int dummy;
 P444 result_;
 P444 head_655;
 P444 tail_656;
 int more_657;
 rt_int mode_658;
 P444 names_659;
 P444 ntail_660;
 P444 st_661;
 P444 p_662;
};
struct f_imports_list_114fr { int dummy;
 P444 owner_113;
 int result_;
 P444 head_663;
 P444 tail_664;
 int more_665;
 int ro_666;
 P444 x_667;
};
struct f_is_definable_116fr { int dummy;
 rstr *w_115;
 int result_;
};
struct f_definable_name_117fr { int dummy;
 P439 result_;
};
struct f_subprogram_decl_118fr { int dummy;
 P444 result_;
 rt_int line_668;
 P444 x_669;
 int is_abn_670;
 int is_func_671;
 int dummy_672;
};
struct f_capsule_decl_119fr { int dummy;
 P444 result_;
 P444 x_673;
 int dummy_674;
 P444 head_675;
 P444 tail_676;
 int more_677;
 P444 n_678;
};
struct f_formal_tt_120fr { int dummy;
 P444 result_;
 P444 head_679;
 P444 tail_680;
 int more_681;
};
struct f_generic_decl_121fr { int dummy;
 P444 result_;
 P444 x_682;
 P444 head_683;
 P444 tail_684;
 int more_685;
 P444 names_686;
 rt_int kind_687;
 P444 st_688;
 P444 p_689;
 P439 nm_690;
 P444 st_691;
};
struct f_task_decl_122fr { int dummy;
 P444 result_;
 P444 x_692;
 int dummy_693;
};
struct f_expose_decl_123fr { int dummy;
 P444 result_;
 P444 x_694;
 P444 head_695;
 P444 tail_696;
 int more_697;
 P444 n_698;
};
struct f_is_compound_kw_125fr { int dummy;
 rstr *w_124;
 int result_;
};
struct f_statement_126fr { int dummy;
 P444 result_;
 P444 labels_699;
 P444 ltail_700;
 P439 match_701;
 P444 s_702;
};
struct f_unlabeled_statement_127fr { int dummy;
 P444 result_;
 rt_int line_703;
 P444 x_704;
 P444 head_705;
 P444 tail_706;
 P444 invs_707;
 P444 itail_708;
 int more_709;
 P444 target_710;
};
struct f_arm_131fr { int dummy;
 P444 cond_128;
 P444 b_129;
 rt_int line_130;
 P444 result_;
 P444 x_711;
};
struct f_if_stmt_132fr { int dummy;
 P444 result_;
 P444 x_712;
 P444 head_713;
 P444 tail_714;
 P444 cond_715;
 int go_716;
};
struct f_case_stmt_133fr { int dummy;
 P444 result_;
 P444 x_717;
 P444 head_718;
 P444 tail_719;
 P444 labs_720;
 P444 ltail_721;
 int more_722;
 P444 l_723;
};
struct f_repeat_stmt_134fr { int dummy;
 P444 result_;
 P444 x_724;
};
struct f_guard_stmt_135fr { int dummy;
 P444 result_;
 P444 x_725;
 P444 head_726;
 P444 tail_727;
 P444 h_728;
};
struct f_program_136fr { int dummy;
 P444 result_;
 P444 head_729;
 P444 tail_730;
};
struct f_hash_138fr { int dummy;
 rstr *s_137;
 rt_int result_;
 rt_int h_731;
 rt_int i_732;
};
struct f_lookup_140fr { int dummy;
 rstr *name_139;
 P454 result_;
 P454 y_736;
};
struct f_lookup_decl_142fr { int dummy;
 P444 d_141;
 P454 result_;
 P454 y_737;
};
struct f_define_145fr { int dummy;
 P454 y_143;
 rt_int line_144;
 rt_int h_738;
 P454 z_739;
};
struct f_overloadable_147fr { int dummy;
 P454 y_146;
 int result_;
};
struct f_same_signature_150fr { int dummy;
 P452 a_148;
 P452 b_149;
 int result_;
 P452 x_740;
 P452 y_741;
};
struct f_open_scope_151fr { int dummy;
};
struct f_close_scope_152fr { int dummy;
};
struct f_new_sym_155fr { int dummy;
 rt_int kind_153;
 P439 name_154;
 P454 result_;
 P454 y_742;
};
struct f_new_typ_157fr { int dummy;
 rt_int kind_156;
 P448 result_;
 P448 t_744;
};
struct f_new_cons_158fr { int dummy;
 P446 result_;
 P446 c_746;
};
struct f_same_lits_161fr { int dummy;
 P444 a_159;
 P444 b_160;
 int result_;
 P444 x_748;
 P444 y_749;
};
struct f_same_164fr { int dummy;
 P448 a_162;
 P448 b_163;
 int result_;
 P450 f_750;
 P450 g_751;
};
struct f_base_of_166fr { int dummy;
 P448 t_165;
 P448 result_;
};
struct f_base_cons_169fr { int dummy;
 P448 t_167;
 P446 c_168;
 P446 result_;
};
struct f_kind_name_171fr { int dummy;
 P448 t_170;
 rstr result_;
};
struct f_check_type_175fr { int dummy;
 P448 got_172;
 P448 want_173;
 rt_int line_174;
};
struct f_ctype_177fr { int dummy;
 P448 t_176;
 rstr result_;
};
struct f_field_decls_179fr { int dummy;
 P448 t_178;
 rstr result_;
 P450 f_754;
 P439 s_755;
};
struct f_declare_ctype_181fr { int dummy;
 P448 t_180;
 P448 u_756;
 P448 target_757;
 P444 p_758;
 P439 fs_759;
};
struct f_init_ascii_182fr { int dummy;
 rstr names_760;
 P444 head_761;
 P444 tail_762;
 rt_int start_763;
 rt_int i_764;
 P444 lit_768;
};
struct f_lit_index_185fr { int dummy;
 P444 lits_183;
 rstr *name_184;
 rt_int result_;
 rt_int i_769;
 P444 l_770;
};
struct f_resolve_subtype_188fr { int dummy;
 P444 st_186;
 P446 *c_187;
 P446 c_187v;
 P448 result_;
 P448 t_771;
 int ok_772;
 P448 dummy_773;
 P446 ic_775;
 P446 ic2_776;
 P446 ec_777;
 P448 it_778;
 P448 et_779;
 P446 ec_780;
 P444 comp_781;
 P450 tail_782;
 P446 cc_783;
 P450 f_784;
 P446 ec_786;
 P454 y_787;
};
struct f_opened_190fr { int dummy;
 P448 t_189;
 int result_;
 P464 c_788;
};
struct f_replace_all_194fr { int dummy;
 rstr *s_191;
 rstr *pat_192;
 rstr *r_193;
 rstr result_;
 rt_int i_789;
};
struct f_subst_196fr { int dummy;
 rstr *s_195;
 rstr result_;
 P456 l_790;
 P439 r_791;
};
struct f_new_type_200fr { int dummy;
 P454 y_197;
 P444 st_198;
 P446 *c_199;
 P446 c_199v;
 P448 result_;
 P444 d_792;
 P444 p_793;
 P446 uc_794;
 P454 z_795;
};
struct f_init_storage_204fr { int dummy;
 rstr *lval_201;
 P448 t_202;
 P446 c_203;
 P444 p_796;
 P444 a_797;
 P446 uc_798;
 P448 ut_799;
 P448 at_800;
 rstr v_801;
 P456 saved_802;
 P456 l1_803;
 P456 l2_804;
 rstr i_807;
 P450 f_808;
};
struct f_manifest_207fr { int dummy;
 P444 e_205;
 int *ok_206;
 int ok_206v;
 rt_int result_;
 rt_int a_809;
 rt_int b_810;
 int ok2_811;
 P454 y_812;
};
struct f_mcopy_209fr { int dummy;
 P448 t_208;
 rstr result_;
 rstr ct_813;
 rstr name_814;
 P456 l_815;
};
struct f_composite_211fr { int dummy;
 P448 t_210;
 int result_;
};
struct f_assign_code_216fr { int dummy;
 rstr *lval_212;
 P448 t_213;
 rstr *v_214;
 P446 c_215;
 rstr result_;
};
struct f_copy_code_219fr { int dummy;
 P448 t_217;
 rstr *v_218;
 rstr result_;
};
struct f_eq_code_223fr { int dummy;
 P448 t_220;
 rstr *a_221;
 rstr *b_222;
 rstr result_;
};
struct f_elem_assign_227fr { int dummy;
 rstr *lval_224;
 P448 t_225;
 rstr *v_226;
 rstr result_;
};
struct f_seen_name_230fr { int dummy;
 P456 l_228;
 rstr *s_229;
 int result_;
 P456 p_817;
};
struct f_emit_helpers_231fr { int dummy;
 P448 order_818;
 P448 t_819;
 P456 done_820;
 P456 l_821;
 rstr c_822;
};
struct f_helper_bodies_233fr { int dummy;
 P448 t_232;
 rstr c_824;
 P458 b_825;
 P448 e_826;
 P444 p_827;
 P439 pc_828;
 P450 f_829;
 P439 conds_830;
 rstr fn_831;
 rstr fn_832;
};
struct f_declare_body_235fr { int dummy;
 P444 elems_234;
 P444 e_833;
 P454 y_834;
 P454 y_835;
 P454 y_836;
 P448 t_837;
 P454 y_838;
 P454 g_839;
};
struct f_manifest_const_237fr { int dummy;
 P444 d_236;
 int ok_840;
 rt_int v_841;
 P454 y_842;
 P446 c_843;
};
struct f_exported_241fr { int dummy;
 P444 d_238;
 rstr *name_239;
 int *ro_240;
 int ro_240v;
 int result_;
 P444 p_844;
};
struct f_copy_sym_243fr { int dummy;
 P454 y_242;
 P454 result_;
 P454 z_845;
};
struct f_gen_capsule_245fr { int dummy;
 P444 d_244;
 P454 y_847;
 P464 cr_848;
 P468 ctx_849;
 P454 m_850;
 P444 p_851;
 int ro_852;
 P466 w_855;
 P454 z_857;
};
struct f_gen_expose_247fr { int dummy;
 P444 d_246;
 P454 y_858;
 P454 m_859;
 P444 p_860;
 int found_861;
 P454 z_862;
};
struct f_finish_ptr_249fr { int dummy;
 P448 t_248;
 P444 d_863;
 P444 p_864;
 P446 c_865;
 rstr dummy_866;
 P454 y_867;
};
struct f_declare_subprogram_251fr { int dummy;
 P444 d_250;
};
struct f_build_subprogram_253fr { int dummy;
 P444 d_252;
 P454 result_;
 P454 y_868;
 P444 p_869;
 P452 tail_870;
 P452 pm_871;
 P446 rc_873;
};
struct f_element_255fr { int dummy;
 P444 e_254;
 rt_int k_874;
 P448 t_875;
 rstr c_876;
};
struct f_storage_258fr { int dummy;
 rstr *name_256;
 P448 t_257;
 rstr result_;
 rstr g_877;
 rstr f_878;
};
struct f_bind_261fr { int dummy;
 P454 y_259;
 rstr *access_260;
};
struct f_var_decl_263fr { int dummy;
 P444 d_262;
 P446 c_879;
 P448 t_880;
 P454 y_881;
 rstr access_882;
 P448 vt_883;
 rstr v_884;
};
struct f_const_decl_265fr { int dummy;
 P444 d_264;
 P446 c_885;
 P448 t_886;
 P448 vt_887;
 P454 y_888;
 int ok_889;
 rstr v_890;
 rstr access_891;
};
struct f_subprogram_267fr { int dummy;
 P444 d_266;
};
struct f_gen_subprogram_270fr { int dummy;
 P444 d_268;
 P454 y_269;
 P458 saved_code_892;
 P458 saved_fields_893;
 int saved_in_894;
 P454 saved_sym_895;
 P462 saved_exits_896;
 rt_int saved_frames_897;
 P439 args_898;
 P452 pm_899;
 P456 saved_handlers_900;
 P456 saved_cleanups_901;
 P468 ctx_902;
 P439 head_903;
 P439 frame_904;
 P439 parent_905;
 P439 copy_back_906;
 rstr ct_908;
 rstr f_909;
 P454 p_910;
};
struct f_waits_of_272fr { int dummy;
 P444 d_271;
 rstr result_;
 P466 w_911;
};
struct f_task_waits_274fr { int dummy;
 P444 elems_273;
 rstr result_;
 P444 e_912;
 P439 r_913;
};
struct f_await_tasks_276fr { int dummy;
 P444 elems_275;
 rstr w_914;
};
struct f_capsule_elements_278fr { int dummy;
 P444 elems_277;
 P444 e_915;
};
struct f_body_elements_280fr { int dummy;
 P444 elems_279;
};
struct f_gen_body_282fr { int dummy;
 P444 elems_281;
};
struct f_pop_frames_284fr { int dummy;
 rt_int upto_283;
 rt_int i_916;
 P456 c_917;
};
struct f_push_cleanup_286fr { int dummy;
 rstr *s_285;
 P456 c_918;
};
struct f_pop_cleanup_287fr { int dummy;
};
struct f_gen_statement_289fr { int dummy;
 P444 s_288;
 P439 label_920;
 P462 x_921;
};
struct f_st_assign_291fr { int dummy;
 P444 s_290;
 P439 lv_924;
 P448 t_925;
 P448 vt_926;
 P446 c_927;
 int ro_928;
 rstr lo_929;
 rstr hi_930;
 rstr v_931;
 rstr v_932;
};
struct f_st_call_293fr { int dummy;
 P444 s_292;
 P444 c_933;
 P448 t_934;
 P444 x_935;
};
struct f_st_if_295fr { int dummy;
 P444 s_294;
 P444 a_936;
 int first_937;
 P448 t_938;
 rstr c_939;
};
struct f_st_case_297fr { int dummy;
 P444 s_296;
 P448 st_940;
 P448 vt_941;
 int first_942;
 P444 a_943;
 rstr sel_944;
 rstr tmp_945;
 P444 lab_946;
 P439 conds_947;
 rstr v_948;
 rstr lo_949;
 rstr hi_950;
};
struct f_st_repeat_299fr { int dummy;
 P444 s_298;
 P448 t_951;
 P446 c_952;
 rstr cond_953;
 rstr access_954;
 rstr lov_955;
 rstr hiv_956;
 rstr it_957;
 P454 y_958;
};
struct f_st_exit_301fr { int dummy;
 P444 s_300;
 P462 x_959;
};
struct f_st_return_303fr { int dummy;
 P444 s_302;
 P448 vt_960;
 rstr v_961;
};
struct f_exc_id_306fr { int dummy;
 rstr *name_304;
 rt_int line_305;
 rstr result_;
 P454 y_962;
};
struct f_st_guard_308fr { int dummy;
 P444 s_307;
 P444 h_963;
 int first_964;
 P456 hv_965;
 rstr f_966;
 rstr x_967;
 P444 n_969;
 P439 conds_970;
};
struct f_st_alloc_310fr { int dummy;
 P444 s_309;
 P439 lv_971;
 P448 t_972;
 P448 target_973;
 P448 vt_974;
 P446 c_975;
 P446 tc_976;
 int ro_977;
 P444 d_978;
 P444 p_979;
 P444 a_980;
 rstr tcn_981;
 rstr cell_982;
 rstr v_983;
 rstr pv_984;
 P454 y_985;
 rstr v_986;
};
struct f_act_ref_312fr { int dummy;
 P444 e_311;
 rstr result_;
 P439 lv_987;
 P448 t_988;
 P446 c_989;
 int ro_990;
};
struct f_st_create_314fr { int dummy;
 P444 s_313;
 P454 y_991;
 P452 pm_992;
 P444 a_993;
 P439 lv_994;
 P448 lt_995;
 P448 vt_996;
 P446 lc_997;
 int ro_998;
 rstr nf_999;
 rstr act_1000;
 P439 link_1001;
 rt_int i_1002;
 rstr v_1006;
};
struct f_wait_alt_318fr { int dummy;
 P444 inv_315;
 rstr *arr_316;
 rt_int i_317;
 rstr result_;
 P439 lv_1007;
 P448 t_1008;
 P448 vt_1009;
 P446 c_1010;
 int ro_1011;
 P444 fn_1012;
 P444 args_1013;
 rstr slot_1014;
 P439 dv_1015;
 P448 dt_1016;
 rstr tmp_1017;
 rstr v_1018;
 rstr v_1019;
};
struct f_st_wait_320fr { int dummy;
 P444 s_319;
 P444 a_1020;
 rt_int n_1021;
 int first_1022;
 P458 inits_1023;
 rstr arr_1024;
 rstr w_1025;
 P444 inv_1026;
 P439 conds_1027;
 rt_int i_1028;
};
struct f_st_region_322fr { int dummy;
 P444 s_321;
 P439 lv_1032;
 P448 t_1033;
 P446 c_1034;
 int ro_1035;
 rstr lk_1036;
 rstr f_1037;
};
struct f_gparam_325fr { int dummy;
 P444 g_323;
 rstr *name_324;
 P444 result_;
 P444 p_1038;
};
struct f_bind_sym_327fr { int dummy;
 P444 p_326;
 P454 result_;
 P454 y_1039;
};
struct f_same_binds_330fr { int dummy;
 P454 a_328;
 P454 b_329;
 int result_;
 P454 x_1040;
 P454 y_1041;
};
struct f_same_binding_333fr { int dummy;
 P454 a_331;
 P454 b_332;
 int result_;
};
struct f_instantiate_338fr { int dummy;
 P454 g_334;
 P444 tt_335;
 P444 args_336;
 rt_int line_337;
 P454 result_;
 P444 gd_1042;
 P444 pat_1043;
 P454 binds_1044;
 P444 f_1045;
 P444 a_1046;
 P444 fp_1047;
 P454 inst_1048;
 P448 at_1049;
 P446 c_1050;
 P468 saved_fctx_1051;
 int saved_in_1052;
 rt_int saved_level_1053;
 P454 saved_sym_1054;
 P458 saved_code_1055;
 P444 p_1056;
 P454 b_1057;
 P444 st_1058;
 int ok_1059;
 int known_1060;
 P454 q_1061;
 P454 b_1062;
 rstr v_1063;
 P454 b_1064;
};
struct f_access_of_340fr { int dummy;
 P454 y_339;
 rstr result_;
 P439 p_1065;
 rt_int i_1066;
};
struct f_import_of_343fr { int dummy;
 P444 l_341;
 rstr *name_342;
 P444 result_;
 P444 p_1070;
};
struct f_check_import_346fr { int dummy;
 P454 y_344;
 rt_int line_345;
 int result_;
 P468 c_1071;
 int ro_1072;
 P444 imp_1073;
};
struct f_c_ident_348fr { int dummy;
 rstr *s_347;
 rstr result_;
};
struct f_deref_351fr { int dummy;
 rstr *base_349;
 P448 t_350;
 rstr result_;
};
struct f_is_lvalue_353fr { int dummy;
 P444 e_352;
 int result_;
 P454 y_1074;
};
struct f_lvalue_359fr { int dummy;
 P444 e_354;
 P439 *code_355;
 P439 code_355v;
 P448 *t_356;
 P448 t_356v;
 P446 *c_357;
 P446 c_357v;
 int *ro_358;
 int ro_358v;
 P439 base_1075;
 P448 bt_1076;
 P446 bc_1077;
 P454 y_1078;
};
struct f_select_on_367fr { int dummy;
 rstr *base_360;
 P448 bt_361;
 P444 e_362;
 int *ro_363;
 P439 *code_364;
 P439 code_364v;
 P448 *t_365;
 P448 t_365v;
 P446 *c_366;
 P446 c_366v;
 P444 p_1079;
 P450 f_1080;
};
struct f_index_on_376fr { int dummy;
 rstr *base_368;
 P448 bt_369;
 P444 e_370;
 int *ro_371;
 int lv_372;
 P439 *code_373;
 P439 code_373v;
 P448 *t_374;
 P448 t_374v;
 P446 *c_375;
 P446 c_375v;
 P444 a_1081;
 P448 it_1082;
 rstr i_1083;
 rstr j_1084;
 rstr lo_1085;
 rstr hi_1086;
 rstr i_1087;
 rstr i_1088;
};
struct f_gexpr_380fr { int dummy;
 P444 e_377;
 P448 want_378;
 P448 *t_379;
 P448 t_379v;
 rstr result_;
 rt_int k_1089;
 P439 code_1090;
 P446 c_1091;
 int ro_1092;
 P448 bt_1093;
 rt_int i_1094;
 P454 y_1095;
 int ro_1096;
 P444 call_1097;
 P444 fname_1098;
 rstr a_1099;
 rstr a_1100;
 rstr a_1101;
 P444 nm_1102;
 P454 y_1103;
 rstr base_1104;
 rstr base_1105;
};
struct f_copy_node_382fr { int dummy;
 P444 e_381;
 P444 result_;
 P444 x_1106;
};
struct f_wrap_apply_384fr { int dummy;
 P444 e_383;
 P444 result_;
 P444 x_1108;
};
struct f_c_string_386fr { int dummy;
 rstr *s_385;
 rstr result_;
 rt_int n_1109;
 rt_int i_1110;
 rstr r_1114;
 rt_int j_1115;
 rt_int i_1116;
};
struct f_enum_type_of_389fr { int dummy;
 rstr *lit_387;
 rt_int line_388;
 P448 result_;
 P454 y_1120;
 P446 c_1121;
 P444 st_1122;
};
struct f_attribute_392fr { int dummy;
 P444 e_390;
 P448 *t_391;
 P448 t_391v;
 rstr result_;
 P448 bt_1123;
 P446 c_1124;
 P439 base_1125;
 P454 y_1126;
 P444 st_1127;
};
struct f_gbinop_396fr { int dummy;
 P444 e_393;
 P448 want_394;
 P448 *t_395;
 P448 t_395v;
 rstr result_;
 P439 op_1128;
 P448 ta_1129;
 P448 tb_1130;
 P448 hint_1131;
 P454 uy_1132;
 P444 l_1133;
 P444 r_1134;
 P444 call_1135;
 P444 fname_1136;
 rstr s_1137;
 rstr a_1138;
 rstr a_1139;
 rstr b_1140;
 rstr a_1141;
 rstr b_1142;
 P448 wa_1143;
 P448 wb_1144;
 rstr a_1145;
 rstr b_1146;
 rstr dummy_1147;
 rstr a_1148;
 rstr b_1149;
 P448 ct_1150;
 rstr a_1151;
 rstr b_1152;
};
struct f_constructor_400fr { int dummy;
 P444 e_397;
 P448 want_398;
 P448 *t_399;
 P448 t_399v;
 rstr result_;
 P444 it_1153;
 P450 f_1154;
 P448 vt_1155;
 P439 s_1156;
 rstr v_1157;
 rstr tmp_1158;
 rstr ct_1159;
 rstr et_1160;
 P439 parts_1161;
 rstr lo_1162;
 rstr hi_1163;
 rstr v_1164;
 rt_int i_1165;
 rstr v_1169;
 rstr tmp_1170;
 P439 parts_1171;
 rstr v_1172;
};
struct f_fits_403fr { int dummy;
 P454 y_401;
 P444 args_402;
 int result_;
 P444 a_1173;
 P452 pm_1174;
 P448 t_1175;
 P458 saved_1176;
 int ok_1177;
 P439 lv_1178;
 P446 lc_1179;
 int ro_1180;
 rstr v_1183;
};
struct f_resolve_overload_408fr { int dummy;
 rstr *name_404;
 P444 args_405;
 int is_stmt_406;
 rt_int line_407;
 P454 result_;
 P454 y_1184;
 P454 first_1185;
 rt_int n_1186;
};
struct f_is_builtin_410fr { int dummy;
 rstr *n_409;
 int result_;
};
struct f_is_low_level_412fr { int dummy;
 rstr *n_411;
 int result_;
};
struct f_me_high_416fr { int dummy;
 P444 tt_413;
 rt_int line_414;
 P448 *t_415;
 P448 t_415v;
 rstr result_;
 P446 c_1187;
};
struct f_type_tag_418fr { int dummy;
 P448 t_417;
 rstr result_;
};
struct f_lock_ref_421fr { int dummy;
 P444 e_419;
 rstr *name_420;
 rstr result_;
 P439 lv_1188;
 P448 t_1189;
 P446 c_1190;
 int ro_1191;
};
struct f_user_op_424fr { int dummy;
 rstr *op_422;
 P444 args_423;
 P454 result_;
 P454 y_1192;
};
struct f_gcall_428fr { int dummy;
 P444 e_425;
 int is_stmt_426;
 P448 *t_427;
 P448 t_427v;
 rstr result_;
 P444 fn_1193;
 P444 tt_1194;
 P454 y_1195;
 P439 args_1196;
 P444 a_1197;
 P452 pm_1198;
 P448 lt_1199;
 P448 vt_1200;
 P439 lv_1201;
 P446 lc_1202;
 int ro_1203;
 rt_int i_1204;
 rstr v_1208;
 rstr ct_1209;
 rstr v_1210;
};
struct f_builtin_435fr { int dummy;
 rstr *name_429;
 P444 tt_430;
 P444 args_431;
 rt_int line_432;
 int is_stmt_433;
 P448 *t_434;
 P448 t_434v;
 rstr result_;
 P448 at_1211;
 rt_int n_1212;
 rstr a_1213;
 rstr a_1214;
 rstr a_1215;
 rstr a_1216;
 rstr a_1217;
 rstr n1_1218;
 rstr m1_1219;
 rstr a_1220;
 rstr a_1221;
 P444 last_1222;
 rstr a_1223;
 rstr a_1224;
 P439 lv_1225;
 P446 lc_1226;
 int ro_1227;
 P444 last_1228;
 P439 lv_1229;
 P439 dv_1230;
 P446 lc_1231;
 int ro_1232;
 P448 mt_1233;
 P448 dt_1234;
 rstr v_1235;
 P439 lv_1236;
 P446 lc_1237;
 int ro_1238;
 P448 mt_1239;
 P439 lv_1240;
 P439 dv_1241;
 P439 bv_1242;
 P446 lc_1243;
 int ro_1244;
 P448 mt_1245;
 P448 dt_1246;
 P448 bt_1247;
 rstr v_1248;
 rstr v_1249;
 rstr v_1250;
 rstr v_1251;
 rstr a_1252;
 P439 bv_1253;
 P446 bc_1254;
 int ro_1255;
 P448 bt_1256;
 rstr l_1257;
 rstr dev_1258;
 rstr cmd_1259;
 P439 dv_1260;
 P446 dc_1261;
 int ro_1262;
 P448 dt_1263;
};
struct f_translate_437fr { int dummy;
 P444 units_436;
 P444 u_1264;
 P444 l_1266;
 rstr w_1267;
};
struct f_print_program_438fr { int dummy;
};
static void as_R469(R469 *d, R469 s);
static R469 cp_R469(R469 s);
static int eq_R469(R469 a, R469 b);
static void as_R467(R467 *d, R467 s);
static R467 cp_R467(R467 s);
static int eq_R467(R467 a, R467 b);
static void as_R465(R465 *d, R465 s);
static R465 cp_R465(R465 s);
static int eq_R465(R465 a, R465 b);
static void as_R463(R463 *d, R463 s);
static R463 cp_R463(R463 s);
static int eq_R463(R463 a, R463 b);
static void as_A461(A461 *d, A461 s);
static A461 cp_A461(A461 s);
static int eq_A461(A461 a, A461 b);
static void as_R459(R459 *d, R459 s);
static R459 cp_R459(R459 s);
static int eq_R459(R459 a, R459 b);
static void as_R457(R457 *d, R457 s);
static R457 cp_R457(R457 s);
static int eq_R457(R457 a, R457 b);
static void as_R455(R455 *d, R455 s);
static R455 cp_R455(R455 s);
static int eq_R455(R455 a, R455 b);
static void as_R453(R453 *d, R453 s);
static R453 cp_R453(R453 s);
static int eq_R453(R453 a, R453 b);
static void as_R451(R451 *d, R451 s);
static R451 cp_R451(R451 s);
static int eq_R451(R451 a, R451 b);
static void as_R449(R449 *d, R449 s);
static R449 cp_R449(R449 s);
static int eq_R449(R449 a, R449 b);
static void as_R447(R447 *d, R447 s);
static R447 cp_R447(R447 s);
static int eq_R447(R447 a, R447 b);
static void as_R445(R445 *d, R445 s);
static R445 cp_R445(R445 s);
static int eq_R445(R445 a, R445 b);
static void as_A443(A443 *d, A443 s);
static A443 cp_A443(A443 s);
static int eq_A443(A443 a, A443 b);
static void as_R441(R441 *d, R441 s);
static R441 cp_R441(R441 s);
static int eq_R441(R441 a, R441 b);
static P439 f_mk_3(rstr *s_2);
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
static P458 f_new_buffer_24(void);
static void f_put_27(P458 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P458 b_30);
static void f_splice_34(P458 a_32, P458 b_33);
static int f_is_reserved_36(rstr *w_35);
static int f_is_word_op_38(rstr *w_37);
static void f_add_token_42(rt_int kind_39, rstr *s_40, rt_int ival_41);
static void f_lex_line_44(rstr *line_43);
static void f_read_source_45(void);
static P444 f_nn_48(rt_int kind_46, rt_int line_47);
static void f_append_52(P444 *head_49, P444 *tail_50, P444 x_51);
static rt_int f_list_len_54(P444 l_53);
static rt_int f_cur_line_55(void);
static int f_at_kw_57(rstr *w_56);
static int f_at_op_59(rstr *w_58);
static int f_at_kind_61(rt_int k_60);
static rt_int f_kind_at_63(rt_int k_62);
static P439 f_text_at_65(rt_int k_64);
static void f_perror_67(rstr *msg_66);
static int f_accept_kw_69(rstr *w_68);
static int f_accept_op_71(rstr *w_70);
static void f_expect_kw_73(rstr *w_72);
static void f_expect_op_75(rstr *w_74);
static P439 f_expect_id_76(void);
static P444 f_name_node_77(void);
static P444 f_id_list_78(void);
static P444 f_p_subtype_79(void);
static P444 f_actual_params_80(void);
static int f_is_type_word_82(rstr *w_81);
static P444 f_actual_tt_83(void);
static P444 f_binop_88(P439 op_84, P444 l_85, P444 r_86, rt_int line_87);
static P444 f_expr_89(void);
static P444 f_expr_and_90(void);
static P444 f_expr_not_91(void);
static int f_is_rel_93(rstr *s_92);
static P444 f_expr_rel_94(void);
static P444 f_expr_add_95(void);
static P444 f_expr_mul_96(void);
static P444 f_expr_pow_97(void);
static P444 f_expr_prefix_98(void);
static P444 f_postfix_99(void);
static P444 f_primary_100(void);
static P444 f_constructor_item_101(void);
static int f_at_body_end_102(void);
static P444 f_body_103(void);
static P444 f_body_element_104(void);
static P444 f_declaration_105(void);
static P444 f_object_decl_106(void);
static P444 f_abbrev_decl_107(void);
static void f_skip_rep_108(void);
static P444 f_type_decl_109(void);
static rt_int f_mode_of_111(rstr *w_110);
static P444 f_formal_params_112(void);
static int f_imports_list_114(P444 owner_113);
static int f_is_definable_116(rstr *w_115);
static P439 f_definable_name_117(void);
static P444 f_subprogram_decl_118(void);
static P444 f_capsule_decl_119(void);
static P444 f_formal_tt_120(void);
static P444 f_generic_decl_121(void);
static P444 f_task_decl_122(void);
static P444 f_expose_decl_123(void);
static int f_is_compound_kw_125(rstr *w_124);
static P444 f_statement_126(void);
static P444 f_unlabeled_statement_127(void);
static P444 f_arm_131(P444 cond_128, P444 b_129, rt_int line_130);
static P444 f_if_stmt_132(void);
static P444 f_case_stmt_133(void);
static P444 f_repeat_stmt_134(void);
static P444 f_guard_stmt_135(void);
static P444 f_program_136(void);
static rt_int f_hash_138(rstr *s_137);
static P454 f_lookup_140(rstr *name_139);
static P454 f_lookup_decl_142(P444 d_141);
static void f_define_145(P454 y_143, rt_int line_144);
static int f_overloadable_147(P454 y_146);
static int f_same_signature_150(P452 a_148, P452 b_149);
static void f_open_scope_151(void);
static void f_close_scope_152(void);
static P454 f_new_sym_155(rt_int kind_153, P439 name_154);
static P448 f_new_typ_157(rt_int kind_156);
static P446 f_new_cons_158(void);
static int f_same_lits_161(P444 a_159, P444 b_160);
static int f_same_164(P448 a_162, P448 b_163);
static P448 f_base_of_166(P448 t_165);
static P446 f_base_cons_169(P448 t_167, P446 c_168);
static rstr f_kind_name_171(P448 t_170);
static void f_check_type_175(P448 got_172, P448 want_173, rt_int line_174);
static rstr f_ctype_177(P448 t_176);
static rstr f_field_decls_179(P448 t_178);
static void f_declare_ctype_181(P448 t_180);
static void f_init_ascii_182(void);
static rt_int f_lit_index_185(P444 lits_183, rstr *name_184);
static P448 f_resolve_subtype_188(P444 st_186, P446 *c_187);
static int f_opened_190(P448 t_189);
static rstr f_replace_all_194(rstr *s_191, rstr *pat_192, rstr *r_193);
static rstr f_subst_196(rstr *s_195);
static P448 f_new_type_200(P454 y_197, P444 st_198, P446 *c_199);
static void f_init_storage_204(rstr *lval_201, P448 t_202, P446 c_203);
static rt_int f_manifest_207(P444 e_205, int *ok_206);
static rstr f_mcopy_209(P448 t_208);
static int f_composite_211(P448 t_210);
static rstr f_assign_code_216(rstr *lval_212, P448 t_213, rstr *v_214, P446 c_215);
static rstr f_copy_code_219(P448 t_217, rstr *v_218);
static rstr f_eq_code_223(P448 t_220, rstr *a_221, rstr *b_222);
static rstr f_elem_assign_227(rstr *lval_224, P448 t_225, rstr *v_226);
static int f_seen_name_230(P456 l_228, rstr *s_229);
static void f_emit_helpers_231(void);
static void f_helper_bodies_233(P448 t_232);
static void f_declare_body_235(P444 elems_234);
static void f_manifest_const_237(P444 d_236);
static int f_exported_241(P444 d_238, rstr *name_239, int *ro_240);
static P454 f_copy_sym_243(P454 y_242);
static void f_gen_capsule_245(P444 d_244);
static void f_gen_expose_247(P444 d_246);
static void f_finish_ptr_249(P448 t_248);
static void f_declare_subprogram_251(P444 d_250);
static P454 f_build_subprogram_253(P444 d_252);
static void f_element_255(P444 e_254);
static rstr f_storage_258(rstr *name_256, P448 t_257);
static void f_bind_261(P454 y_259, rstr *access_260);
static void f_var_decl_263(P444 d_262);
static void f_const_decl_265(P444 d_264);
static void f_subprogram_267(P444 d_266);
static void f_gen_subprogram_270(P444 d_268, P454 y_269);
static rstr f_waits_of_272(P444 d_271);
static rstr f_task_waits_274(P444 elems_273);
static void f_await_tasks_276(P444 elems_275);
static void f_capsule_elements_278(P444 elems_277);
static void f_body_elements_280(P444 elems_279);
static void f_gen_body_282(P444 elems_281);
static void f_pop_frames_284(rt_int upto_283);
static void f_push_cleanup_286(rstr *s_285);
static void f_pop_cleanup_287(void);
static void f_gen_statement_289(P444 s_288);
static void f_st_assign_291(P444 s_290);
static void f_st_call_293(P444 s_292);
static void f_st_if_295(P444 s_294);
static void f_st_case_297(P444 s_296);
static void f_st_repeat_299(P444 s_298);
static void f_st_exit_301(P444 s_300);
static void f_st_return_303(P444 s_302);
static rstr f_exc_id_306(rstr *name_304, rt_int line_305);
static void f_st_guard_308(P444 s_307);
static void f_st_alloc_310(P444 s_309);
static rstr f_act_ref_312(P444 e_311);
static void f_st_create_314(P444 s_313);
static rstr f_wait_alt_318(P444 inv_315, rstr *arr_316, rt_int i_317);
static void f_st_wait_320(P444 s_319);
static void f_st_region_322(P444 s_321);
static P444 f_gparam_325(P444 g_323, rstr *name_324);
static P454 f_bind_sym_327(P444 p_326);
static int f_same_binds_330(P454 a_328, P454 b_329);
static int f_same_binding_333(P454 a_331, P454 b_332);
static P454 f_instantiate_338(P454 g_334, P444 tt_335, P444 args_336, rt_int line_337);
static rstr f_access_of_340(P454 y_339);
static P444 f_import_of_343(P444 l_341, rstr *name_342);
static int f_check_import_346(P454 y_344, rt_int line_345);
static rstr f_c_ident_348(rstr *s_347);
static rstr f_deref_351(rstr *base_349, P448 t_350);
static int f_is_lvalue_353(P444 e_352);
static void f_lvalue_359(P444 e_354, P439 *code_355, P448 *t_356, P446 *c_357, int *ro_358);
static void f_select_on_367(rstr *base_360, P448 bt_361, P444 e_362, int *ro_363, P439 *code_364, P448 *t_365, P446 *c_366);
static void f_index_on_376(rstr *base_368, P448 bt_369, P444 e_370, int *ro_371, int lv_372, P439 *code_373, P448 *t_374, P446 *c_375);
static rstr f_gexpr_380(P444 e_377, P448 want_378, P448 *t_379);
static P444 f_copy_node_382(P444 e_381);
static P444 f_wrap_apply_384(P444 e_383);
static rstr f_c_string_386(rstr *s_385);
static P448 f_enum_type_of_389(rstr *lit_387, rt_int line_388);
static rstr f_attribute_392(P444 e_390, P448 *t_391);
static rstr f_gbinop_396(P444 e_393, P448 want_394, P448 *t_395);
static rstr f_constructor_400(P444 e_397, P448 want_398, P448 *t_399);
static int f_fits_403(P454 y_401, P444 args_402);
static P454 f_resolve_overload_408(rstr *name_404, P444 args_405, int is_stmt_406, rt_int line_407);
static int f_is_builtin_410(rstr *n_409);
static int f_is_low_level_412(rstr *n_411);
static rstr f_me_high_416(P444 tt_413, rt_int line_414, P448 *t_415);
static rstr f_type_tag_418(P448 t_417);
static rstr f_lock_ref_421(P444 e_419, rstr *name_420);
static P454 f_user_op_424(rstr *op_422, P444 args_423);
static rstr f_gcall_428(P444 e_425, int is_stmt_426, P448 *t_427);
static rstr f_builtin_435(rstr *name_429, P444 tt_430, P444 args_431, rt_int line_432, int is_stmt_433, P448 *t_434);
static void f_translate_437(P444 units_436);
static void f_print_program_438(void);
static int ex_compile_error_1;
static P442 g_toks_470;
static rt_int g_ntoks_471;
static rt_int g_tpos_472;
static rt_int g_src_line_473;
static P460 g_table_474;
static rt_int g_depth_475;
static P454 g_scope_stack_476;
static P448 g_all_types_477;
static rt_int g_serial_478;
static P458 g_out_types_479;
static P458 g_out_helpers_480;
static P458 g_out_protos_481;
static P458 g_out_globals_482;
static P458 g_out_funcs_483;
static P458 g_out_init_484;
static P458 g_out_excs_485;
static P458 g_code_486;
static P458 g_fields_buf_487;
static int g_in_func_488;
static rt_int g_cur_level_489;
static P468 g_fctx_490;
static P464 g_caps_491;
static P466 g_cap_waits_492;
static P456 g_psub_493;
static P439 g_st_field_494;
static P458 g_out_frames_495;
static P454 g_func_sym_496;
static P462 g_exits_497;
static rt_int g_frames_498;
static P456 g_handlers_499;
static P456 g_cleanups_500;
static rt_int g_trial_501;
static P456 g_mcopies_502;
static P448 g_ty_int_503;
static P448 g_ty_bool_504;
static P448 g_ty_float_505;
static P448 g_ty_ascii_506;
static P448 g_ty_string_507;
static P448 g_ty_void_508;
static P448 g_ty_file_509;
static P448 g_ty_nil_510;
static P448 g_ty_lock_511;
static P448 g_ty_latch_512;
static P448 g_ty_act_513;
static P446 g_no_cons_514;
static P439 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
F->s_2 = s_2;
F->t_515 = NULL;
{ rstr *cell516 = rt_alloc(sizeof(rstr));
rt_int pv517 = ((*F->s_2)).len;
(*cell516) = rt_str_new(pv517);
rt_str_assign(&(*cell516), (*F->s_2));
F->t_515 = cell516;
}
F->result_ = F->t_515;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_chs_5(int c_4) {
  struct f_chs_5fr *F = rt_alloc(sizeof *F);
F->c_4 = c_4;
F->r_518 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_518, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_518;
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
F->letters_519 = rt_str_copy(rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
if (((97 <= F->c_12) && (F->c_12 <= 122))) {
F->result_ = rt_str_get(F->letters_519, rt_add(rt_sub(((rt_int)(F->c_12) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
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
F->letters_520 = rt_str_copy(rt_str("abcdefghijklmnopqrstuvwxyz", 26));
F->r_521 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_521, (*F->s_14));
{ rt_int lo523 = ((rt_int)1LL), hi524 = ((*F->s_14)).len;
for (rt_int it525 = lo523; it525 <= hi524; it525++) {
F->i_522 = it525;
if (((65 <= rt_str_get(F->r_521, F->i_522)) && (rt_str_get(F->r_521, F->i_522) <= 90))) {
(*rt_str_at(&F->r_521, F->i_522)) = rt_str_get(F->letters_520, rt_add(rt_sub(((rt_int)(rt_str_get(F->r_521, F->i_522)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_521;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_c_17(rstr *s_16) {
  struct f_field_c_17fr *F = rt_alloc(sizeof *F);
F->s_16 = s_16;
F->l_526 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->kw_527 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)));
F->w_528 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_526), rt_str(" ", 1)));
{ rt_int lo530 = ((rt_int)1LL), hi531 = rt_add(rt_sub((F->kw_527).len, (F->w_528).len), ((rt_int)1LL));
for (rt_int it532 = lo530; it532 <= hi531; it532++) {
F->i_529 = it532;
if (rt_str_eq(rt_str_slice(F->kw_527, F->i_529, rt_sub(rt_add(F->i_529, (F->w_528).len), ((rt_int)1LL))), F->w_528)) {
F->result_ = rt_str_cat(F->l_526, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_526;
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
g_serial_478 = rt_add(g_serial_478, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_478));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_fail_23(rt_int line_21, rstr *msg_22) {
  struct f_fail_23fr *F = rt_alloc(sizeof *F);
F->line_21 = line_21;
F->msg_22 = msg_22;
if ((g_trial_501 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  return;
}

static P458 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
F->b_533 = NULL;
{ R459 *cell534 = rt_alloc(sizeof(R459));
(*cell534).head = NULL;
(*cell534).tail = NULL;
F->b_533 = cell534;
}
F->result_ = F->b_533;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_put_27(P458 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_535 = NULL;
{ R457 *cell536 = rt_alloc(sizeof(R457));
(*cell536).s = NULL;
(*cell536).next = NULL;
F->l_535 = cell536;
}
(*(P456)rt_nil_check(F->l_535)).s = f_mk_3(&(*F->s_26));
if (((*(P458)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P458)rt_nil_check(F->b_25)).head = F->l_535;
} else {
(*(P456)rt_nil_check((*(P458)rt_nil_check(F->b_25)).tail)).next = F->l_535;
}
(*(P458)rt_nil_check(F->b_25)).tail = F->l_535;
ret_:
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
F->s_28 = s_28;
f_put_27(g_code_486, &(*F->s_28));
ret_:
  return;
}

static void f_print_buffer_31(P458 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
F->b_30 = b_30;
F->l_537 = NULL;
F->l_537 = (*(P458)rt_nil_check(F->b_30)).head;
while ((F->l_537 != NULL)) {
rt_putln((*(P439)rt_nil_check((*(P456)rt_nil_check(F->l_537)).s)));
F->l_537 = (*(P456)rt_nil_check(F->l_537)).next;
}
ret_:
  return;
}

static void f_splice_34(P458 a_32, P458 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P458)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P458)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P458)rt_nil_check(F->a_32)).head = (*(P458)rt_nil_check(F->b_33)).head;
} else {
(*(P456)rt_nil_check((*(P458)rt_nil_check(F->a_32)).tail)).next = (*(P458)rt_nil_check(F->b_33)).head;
}
(*(P458)rt_nil_check(F->a_32)).tail = (*(P458)rt_nil_check(F->b_33)).tail;
(*(P458)rt_nil_check(F->b_33)).head = NULL;
(*(P458)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
F->w_35 = w_35;
{ rstr sel538 = (*F->w_35);
if (0 || rt_str_eq(sel538, rt_str("ABBREV", 6)) || rt_str_eq(sel538, rt_str("ABNORMAL", 8)) || rt_str_eq(sel538, rt_str("ALL", 3)) || rt_str_eq(sel538, rt_str("ALLOC", 5)) || rt_str_eq(sel538, rt_str("ASSERT", 6)) || rt_str_eq(sel538, rt_str("BEGIN", 5)) || rt_str_eq(sel538, rt_str("BY", 2)) || rt_str_eq(sel538, rt_str("CAPSULE", 7)) || rt_str_eq(sel538, rt_str("CASE", 4)) || rt_str_eq(sel538, rt_str("CONST", 5)) || rt_str_eq(sel538, rt_str("CREATE", 6)) || rt_str_eq(sel538, rt_str("DO", 2)) || rt_str_eq(sel538, rt_str("ELSE", 4)) || rt_str_eq(sel538, rt_str("ELSEIF", 6)) || rt_str_eq(sel538, rt_str("END", 3)) || rt_str_eq(sel538, rt_str("EXCEPTION", 9)) || rt_str_eq(sel538, rt_str("EXIT", 4)) || rt_str_eq(sel538, rt_str("EXPORTS", 7)) || rt_str_eq(sel538, rt_str("EXPOSE", 6)) || rt_str_eq(sel538, rt_str("EXTERNAL", 8)) || rt_str_eq(sel538, rt_str("FOR", 3)) || rt_str_eq(sel538, rt_str("FROM", 4)) || rt_str_eq(sel538, rt_str("FUNC", 4)) || rt_str_eq(sel538, rt_str("GENERIC", 7)) || rt_str_eq(sel538, rt_str("GOTO", 4)) || rt_str_eq(sel538, rt_str("GUARD", 5)) || rt_str_eq(sel538, rt_str("IF", 2)) || rt_str_eq(sel538, rt_str("IMPORTS", 7)) || rt_str_eq(sel538, rt_str("LOCATION", 8)) || rt_str_eq(sel538, rt_str("NAMED", 5)) || rt_str_eq(sel538, rt_str("NEEDS", 5)) || rt_str_eq(sel538, rt_str("NEW", 3)) || rt_str_eq(sel538, rt_str("NONE", 4)) || rt_str_eq(sel538, rt_str("OUT", 3)) || rt_str_eq(sel538, rt_str("OF", 2)) || rt_str_eq(sel538, rt_str("PRAG", 4)) || rt_str_eq(sel538, rt_str("PROC", 4)) || rt_str_eq(sel538, rt_str("RAISE", 5)) || rt_str_eq(sel538, rt_str("READONLY", 8)) || rt_str_eq(sel538, rt_str("REVERSE", 7)) || rt_str_eq(sel538, rt_str("REGION", 6)) || rt_str_eq(sel538, rt_str("RENAMING", 8)) || rt_str_eq(sel538, rt_str("REP", 3)) || rt_str_eq(sel538, rt_str("REPEAT", 6)) || rt_str_eq(sel538, rt_str("RERAISE", 7)) || rt_str_eq(sel538, rt_str("RETURN", 6)) || rt_str_eq(sel538, rt_str("SUBTYPE", 7)) || rt_str_eq(sel538, rt_str("TASK", 4)) || rt_str_eq(sel538, rt_str("THEN", 4)) || rt_str_eq(sel538, rt_str("TO", 2)) || rt_str_eq(sel538, rt_str("TYPE", 4)) || rt_str_eq(sel538, rt_str("VAR", 3)) || rt_str_eq(sel538, rt_str("WAIT", 4)) || rt_str_eq(sel538, rt_str("WHEN", 4)) || rt_str_eq(sel538, rt_str("WHILE", 5))) {
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
F->t_539 = NULL;
{ R441 *cell540 = rt_alloc(sizeof(R441));
(*cell540).s = NULL;
F->t_539 = cell540;
}
(*(P440)rt_nil_check(F->t_539)).kind = F->kind_39;
(*(P440)rt_nil_check(F->t_539)).line = g_src_line_473;
(*(P440)rt_nil_check(F->t_539)).ival = F->ival_41;
(*(P440)rt_nil_check(F->t_539)).s = f_mk_3(&(*F->s_40));
g_ntoks_471 = rt_add(g_ntoks_471, ((rt_int)1LL));
(*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_ntoks_471, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo] = F->t_539;
ret_:
  return;
}

static void f_lex_line_44(rstr *line_43) {
  struct f_lex_line_44fr *F = rt_alloc(sizeof *F);
F->line_43 = line_43;
F->i_541 = ((rt_int)1LL);
F->j_542 = ((rt_int)0LL);
F->n_543 = ((*F->line_43)).len;
while ((F->i_541 <= F->n_543)) {
F->c_544 = rt_str_get((*F->line_43), F->i_541);
if (((((F->c_544 == 32) || (F->c_544 == 9)) || (F->c_544 == 13)) || (F->c_544 == 12))) {
F->i_541 = rt_add(F->i_541, ((rt_int)1LL));
} else if ((F->c_544 == 37)) {
F->i_541 = rt_add(F->n_543, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_544)) {
F->j_542 = F->i_541;
while (((F->j_542 <= F->n_543) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_542)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_542))) || (rt_str_get((*F->line_43), F->j_542) == 95)))) {
F->j_542 = rt_add(F->j_542, ((rt_int)1LL));
}
{
F->w_545 = rt_str_new(rt_sub(F->j_542, F->i_541));
rt_str_assign(&F->w_545, rt_str_slice((*F->line_43), F->i_541, rt_sub(F->j_542, ((rt_int)1LL))));
{ rt_int lo547 = ((rt_int)1LL), hi548 = (F->w_545).len;
for (rt_int it549 = lo547; it549 <= hi548; it549++) {
F->k_546 = it549;
(*rt_str_at(&F->w_545, F->k_546)) = f_upper_13(rt_str_get(F->w_545, F->k_546));
}
}
if (rt_str_eq(F->w_545, rt_str("PRAGMAT", 7))) {
while (((F->j_542 <= F->n_543) && (rt_str_get((*F->line_43), F->j_542) != 59))) {
F->j_542 = rt_add(F->j_542, ((rt_int)1LL));
}
F->j_542 = rt_add(F->j_542, ((rt_int)1LL));
} else if (f_is_reserved_36(&F->w_545)) {
f_add_token_42(((rt_int)2LL), &F->w_545, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_545)) {
f_add_token_42(((rt_int)3LL), &F->w_545, ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)1LL), &F->w_545, ((rt_int)0LL));
}
}
F->i_541 = F->j_542;
} else if (f_is_digit_11(F->c_544)) {
F->j_542 = F->i_541;
while (((F->j_542 <= F->n_543) && f_is_digit_11(rt_str_get((*F->line_43), F->j_542)))) {
F->j_542 = rt_add(F->j_542, ((rt_int)1LL));
}
if ((((F->j_542 < F->n_543) && (rt_str_get((*F->line_43), F->j_542) == 46)) && f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_542, ((rt_int)1LL)))))) {
F->j_542 = rt_add(F->j_542, ((rt_int)1LL));
while (((F->j_542 <= F->n_543) && f_is_digit_11(rt_str_get((*F->line_43), F->j_542)))) {
F->j_542 = rt_add(F->j_542, ((rt_int)1LL));
}
if (((F->j_542 <= F->n_543) && ((rt_str_get((*F->line_43), F->j_542) == 69) || (rt_str_get((*F->line_43), F->j_542) == 101)))) {
F->j_542 = rt_add(F->j_542, ((rt_int)1LL));
if (((F->j_542 <= F->n_543) && ((rt_str_get((*F->line_43), F->j_542) == 43) || (rt_str_get((*F->line_43), F->j_542) == 45)))) {
F->j_542 = rt_add(F->j_542, ((rt_int)1LL));
}
while (((F->j_542 <= F->n_543) && f_is_digit_11(rt_str_get((*F->line_43), F->j_542)))) {
F->j_542 = rt_add(F->j_542, ((rt_int)1LL));
}
}
f_add_token_42(((rt_int)5LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_541, rt_sub(F->j_542, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)4LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_541, rt_sub(F->j_542, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_43), F->i_541, rt_sub(F->j_542, ((rt_int)1LL)))));
}
F->i_541 = F->j_542;
} else if ((F->c_544 == 39)) {
F->j_542 = rt_add(F->i_541, ((rt_int)1LL));
if (((F->j_542 > F->n_543) || (!f_is_letter_9(rt_str_get((*F->line_43), F->j_542))))) {
f_fail_23(g_src_line_473, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_542 <= F->n_543) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_542)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_542))) || (rt_str_get((*F->line_43), F->j_542) == 95)))) {
F->j_542 = rt_add(F->j_542, ((rt_int)1LL));
}
{
F->w_550 = rt_str_new(rt_sub(rt_sub(F->j_542, F->i_541), ((rt_int)1LL)));
rt_str_assign(&F->w_550, rt_str_slice((*F->line_43), rt_add(F->i_541, ((rt_int)1LL)), rt_sub(F->j_542, ((rt_int)1LL))));
{ rt_int lo552 = ((rt_int)1LL), hi553 = (F->w_550).len;
for (rt_int it554 = lo552; it554 <= hi553; it554++) {
F->k_551 = it554;
(*rt_str_at(&F->w_550, F->k_551)) = f_upper_13(rt_str_get(F->w_550, F->k_551));
}
}
f_add_token_42(((rt_int)6LL), &F->w_550, ((rt_int)0LL));
}
F->i_541 = F->j_542;
} else if ((F->c_544 == 34)) {
F->j_542 = rt_add(F->i_541, ((rt_int)1LL));
while (((F->j_542 <= F->n_543) && (rt_str_get((*F->line_43), F->j_542) != 34))) {
F->j_542 = rt_add(F->j_542, ((rt_int)1LL));
}
if ((F->j_542 > F->n_543)) {
f_fail_23(g_src_line_473, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42(((rt_int)7LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), rt_add(F->i_541, ((rt_int)1LL)), rt_sub(F->j_542, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_541 = rt_add(F->j_542, ((rt_int)1LL));
} else {
{
F->two_555 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_555, rt_str("  ", 2));
(*rt_str_at(&F->two_555, ((rt_int)1LL))) = F->c_544;
if ((F->i_541 < F->n_543)) {
(*rt_str_at(&F->two_555, ((rt_int)2LL))) = rt_str_get((*F->line_43), rt_add(F->i_541, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_555, rt_str(":=", 2)) || rt_str_eq(F->two_555, rt_str("=>", 2))) || rt_str_eq(F->two_555, rt_str("..", 2))) || rt_str_eq(F->two_555, rt_str("**", 2))) || rt_str_eq(F->two_555, rt_str("/=", 2))) || rt_str_eq(F->two_555, rt_str("<=", 2))) || rt_str_eq(F->two_555, rt_str(">=", 2)))) {
f_add_token_42(((rt_int)3LL), &F->two_555, ((rt_int)0LL));
F->i_541 = rt_add(F->i_541, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_544 == 40) || (F->c_544 == 41)) || (F->c_544 == 91)) || (F->c_544 == 93)) || (F->c_544 == 44)) || (F->c_544 == 58)) || (F->c_544 == 59)) || (F->c_544 == 46)) || (F->c_544 == 35)) || (F->c_544 == 43)) || (F->c_544 == 45)) || (F->c_544 == 42)) || (F->c_544 == 47)) || (F->c_544 == 38)) || (F->c_544 == 61)) || (F->c_544 == 60)) || (F->c_544 == 62))) {
f_add_token_42(((rt_int)3LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_544); b_; }), ((rt_int)0LL));
F->i_541 = rt_add(F->i_541, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_473, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_556 = rt_str_new(rt_sizeln());
rt_readln(&F->line_556);
g_src_line_473 = rt_add(g_src_line_473, ((rt_int)1LL));
f_lex_line_44(&F->line_556);
}
f_add_token_42(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  return;
}

static P444 f_nn_48(rt_int kind_46, rt_int line_47) {
  struct f_nn_48fr *F = rt_alloc(sizeof *F);
F->kind_46 = kind_46;
F->line_47 = line_47;
F->x_557 = NULL;
{ R445 *cell558 = rt_alloc(sizeof(R445));
(*cell558).name = NULL;
(*cell558).tag = NULL;
(*cell558).a = NULL;
(*cell558).b = NULL;
(*cell558).c = NULL;
(*cell558).d = NULL;
(*cell558).e = NULL;
(*cell558).next = NULL;
F->x_557 = cell558;
}
(*(P444)rt_nil_check(F->x_557)).kind = F->kind_46;
(*(P444)rt_nil_check(F->x_557)).line = F->line_47;
F->result_ = F->x_557;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_append_52(P444 *head_49, P444 *tail_50, P444 x_51) {
  struct f_append_52fr *F = rt_alloc(sizeof *F);
F->head_49 = head_49;
F->tail_50 = tail_50;
F->x_51 = x_51;
if (((*F->head_49) == NULL)) {
(*F->head_49) = F->x_51;
} else {
(*(P444)rt_nil_check((*F->tail_50))).next = F->x_51;
}
(*F->tail_50) = F->x_51;
while (((*(P444)rt_nil_check((*F->tail_50))).next != NULL)) {
(*F->tail_50) = (*(P444)rt_nil_check((*F->tail_50))).next;
}
ret_:
  return;
}

static rt_int f_list_len_54(P444 l_53) {
  struct f_list_len_54fr *F = rt_alloc(sizeof *F);
F->l_53 = l_53;
F->n_559 = ((rt_int)0LL);
F->p_560 = NULL;
F->p_560 = F->l_53;
while ((F->p_560 != NULL)) {
F->n_559 = rt_add(F->n_559, ((rt_int)1LL));
F->p_560 = (*(P444)rt_nil_check(F->p_560)).next;
}
F->result_ = F->n_559;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_cur_line_55(void) {
  struct f_cur_line_55fr *F = rt_alloc(sizeof *F);
F->result_ = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kw_57(rstr *w_56) {
  struct f_at_kw_57fr *F = rt_alloc(sizeof *F);
F->w_56 = w_56;
F->result_ = (((*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).kind == ((rt_int)2LL)) && rt_str_eq((*(P439)rt_nil_check((*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s)), (*F->w_56)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_op_59(rstr *w_58) {
  struct f_at_op_59fr *F = rt_alloc(sizeof *F);
F->w_58 = w_58;
F->result_ = (((*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).kind == ((rt_int)3LL)) && rt_str_eq((*(P439)rt_nil_check((*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s)), (*F->w_58)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kind_61(rt_int k_60) {
  struct f_at_kind_61fr *F = rt_alloc(sizeof *F);
F->k_60 = k_60;
F->result_ = ((*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).kind == F->k_60);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_kind_at_63(rt_int k_62) {
  struct f_kind_at_63fr *F = rt_alloc(sizeof *F);
F->k_62 = k_62;
if ((rt_add(g_tpos_472, F->k_62) > g_ntoks_471)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(rt_add(g_tpos_472, F->k_62), (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P439 f_text_at_65(rt_int k_64) {
  struct f_text_at_65fr *F = rt_alloc(sizeof *F);
F->k_64 = k_64;
if ((rt_add(g_tpos_472, F->k_64) > g_ntoks_471)) {
F->result_ = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_ntoks_471, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s;
goto ret_;
}
F->result_ = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(rt_add(g_tpos_472, F->k_64), (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_perror_67(rstr *msg_66) {
  struct f_perror_67fr *F = rt_alloc(sizeof *F);
F->msg_66 = msg_66;
f_fail_23((*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_66), rt_str(" (at ", 5)), (*(P439)rt_nil_check((*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  return;
}

static int f_accept_kw_69(rstr *w_68) {
  struct f_accept_kw_69fr *F = rt_alloc(sizeof *F);
F->w_68 = w_68;
if (f_at_kw_57(&(*F->w_68))) {
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
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
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
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
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_op_75(rstr *w_74) {
  struct f_expect_op_75fr *F = rt_alloc(sizeof *F);
F->w_74 = w_74;
if ((!f_at_op_59(&(*F->w_74)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_74)); b_; }));
}
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
ret_:
  return;
}

static P439 f_expect_id_76(void) {
  struct f_expect_id_76fr *F = rt_alloc(sizeof *F);
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->result_ = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(rt_sub(g_tpos_472, ((rt_int)1LL)), (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_name_node_77(void) {
  struct f_name_node_77fr *F = rt_alloc(sizeof *F);
F->x_561 = NULL;
F->x_561 = f_nn_48(((rt_int)7LL), f_cur_line_55());
(*(P444)rt_nil_check(F->x_561)).name = f_expect_id_76();
F->result_ = F->x_561;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_id_list_78(void) {
  struct f_id_list_78fr *F = rt_alloc(sizeof *F);
F->head_562 = NULL;
F->tail_563 = NULL;
f_append_52(&F->head_562, &F->tail_563, f_name_node_77());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_562, &F->tail_563, f_name_node_77());
}
F->result_ = F->head_562;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_p_subtype_79(void) {
  struct f_p_subtype_79fr *F = rt_alloc(sizeof *F);
F->line_564 = f_cur_line_55();
F->x_565 = NULL;
if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->x_565 = f_nn_48(((rt_int)81LL), F->line_564);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P444)rt_nil_check(F->x_565)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_565;
goto ret_;
}
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_566 = rt_str_copy((*(P439)rt_nil_check((*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s)));
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
if (rt_str_eq(F->w_566, rt_str("ARRAY", 5))) {
F->x_565 = f_nn_48(((rt_int)74LL), F->line_564);
{
F->head_567 = NULL;
F->tail_568 = NULL;
f_append_52(&F->head_567, &F->tail_568, f_p_subtype_79());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_567, &F->tail_568, f_p_subtype_79());
}
(*(P444)rt_nil_check(F->x_565)).a = F->head_567;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P444)rt_nil_check(F->x_565)).b = f_p_subtype_79();
} else if ((rt_str_eq(F->w_566, rt_str("RECORD", 6)) || rt_str_eq(F->w_566, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_566, rt_str("RECORD", 6))) {
F->x_565 = f_nn_48(((rt_int)75LL), F->line_564);
} else {
F->x_565 = f_nn_48(((rt_int)76LL), F->line_564);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_569 = NULL;
F->tail_570 = NULL;
F->more_571 = 1;
while (F->more_571) {
F->names_572 = NULL;
F->names_572 = f_id_list_78();
F->st_573 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_573 = f_p_subtype_79();
while ((F->names_572 != NULL)) {
F->cmp_574 = NULL;
F->cmp_574 = f_nn_48(((rt_int)63LL), (*(P444)rt_nil_check(F->names_572)).line);
(*(P444)rt_nil_check(F->cmp_574)).name = (*(P444)rt_nil_check(F->names_572)).name;
(*(P444)rt_nil_check(F->cmp_574)).a = F->st_573;
f_append_52(&F->head_569, &F->tail_570, F->cmp_574);
F->names_572 = (*(P444)rt_nil_check(F->names_572)).next;
}
F->more_571 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P444)rt_nil_check(F->x_565)).a = F->head_569;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_566, rt_str("UNION", 5)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_565)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_566, rt_str("ENUM", 4))) {
F->x_565 = f_nn_48(((rt_int)72LL), F->line_564);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_575 = NULL;
F->tail_576 = NULL;
F->more_577 = 1;
while (F->more_577) {
F->lit_578 = NULL;
F->lit_578 = f_nn_48(((rt_int)4LL), F->line_564);
if ((!f_at_kind_61(((rt_int)6LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P444)rt_nil_check(F->lit_578)).name = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s;
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
f_append_52(&F->head_575, &F->tail_576, F->lit_578);
F->more_577 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P444)rt_nil_check(F->x_565)).a = F->head_575;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_565)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P444)rt_nil_check(F->x_565)).c = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_566, rt_str("STRING", 6)) || rt_str_eq(F->w_566, rt_str("SET", 3))) || rt_str_eq(F->w_566, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_566, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_566, rt_str("STRING", 6))) {
F->x_565 = f_nn_48(((rt_int)73LL), F->line_564);
} else if (rt_str_eq(F->w_566, rt_str("SET", 3))) {
F->x_565 = f_nn_48(((rt_int)77LL), F->line_564);
} else if (rt_str_eq(F->w_566, rt_str("MAILBOX", 7))) {
F->x_565 = f_nn_48(((rt_int)78LL), F->line_564);
} else {
F->x_565 = f_nn_48(((rt_int)79LL), F->line_564);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P444)rt_nil_check(F->x_565)).a = f_p_subtype_79();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P444)rt_nil_check(F->x_565)).b = f_actual_params_80();
}
} else if (rt_str_eq(F->w_566, rt_str("INT", 3))) {
F->x_565 = f_nn_48(((rt_int)70LL), F->line_564);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_565)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P444)rt_nil_check(F->x_565)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_566, rt_str("FLOAT", 5))) {
F->x_565 = f_nn_48(((rt_int)71LL), F->line_564);
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P444)rt_nil_check(F->x_565)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P444)rt_nil_check(F->x_565)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P444)rt_nil_check(F->x_565)).c = f_expr_89();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_565 = f_nn_48(((rt_int)80LL), F->line_564);
(*(P444)rt_nil_check(F->x_565)).name = f_mk_3(&F->w_566);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P444)rt_nil_check(F->x_565)).a = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P444)rt_nil_check(F->x_565)).b = f_actual_params_80();
(*(P444)rt_nil_check(F->x_565)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_565;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_actual_params_80(void) {
  struct f_actual_params_80fr *F = rt_alloc(sizeof *F);
F->head_579 = NULL;
F->tail_580 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_52(&F->head_579, &F->tail_580, f_expr_89());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_579, &F->tail_580, f_expr_89());
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_579;
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

static P444 f_actual_tt_83(void) {
  struct f_actual_tt_83fr *F = rt_alloc(sizeof *F);
F->head_581 = NULL;
F->tail_582 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_583 = 1;
while (F->more_583) {
if ((f_at_kind_61(((rt_int)1LL)) && f_is_type_word_82(&(*(P439)rt_nil_check((*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s))))) {
f_append_52(&F->head_581, &F->tail_582, f_p_subtype_79());
} else {
f_append_52(&F->head_581, &F->tail_582, f_expr_89());
}
F->more_583 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_581;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_binop_88(P439 op_84, P444 l_85, P444 r_86, rt_int line_87) {
  struct f_binop_88fr *F = rt_alloc(sizeof *F);
F->op_84 = op_84;
F->l_85 = l_85;
F->r_86 = r_86;
F->line_87 = line_87;
F->x_584 = NULL;
F->x_584 = f_nn_48(((rt_int)9LL), F->line_87);
(*(P444)rt_nil_check(F->x_584)).name = F->op_84;
(*(P444)rt_nil_check(F->x_584)).a = F->l_85;
(*(P444)rt_nil_check(F->x_584)).b = F->r_86;
F->result_ = F->x_584;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_expr_89(void) {
  struct f_expr_89fr *F = rt_alloc(sizeof *F);
F->l_585 = NULL;
F->l_585 = f_expr_and_90();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_586 = NULL;
F->op_586 = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s;
F->line_587 = f_cur_line_55();
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->l_585 = f_binop_88(F->op_586, F->l_585, f_expr_and_90(), F->line_587);
}
F->result_ = F->l_585;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_expr_and_90(void) {
  struct f_expr_and_90fr *F = rt_alloc(sizeof *F);
F->l_588 = NULL;
F->l_588 = f_expr_not_91();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_589 = f_cur_line_55();
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->l_588 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_588, f_expr_not_91(), F->line_589);
}
F->result_ = F->l_588;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_expr_not_91(void) {
  struct f_expr_not_91fr *F = rt_alloc(sizeof *F);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_590 = NULL;
F->x_590 = f_nn_48(((rt_int)8LL), f_cur_line_55());
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_590)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P444)rt_nil_check(F->x_590)).a = f_expr_not_91();
F->result_ = F->x_590;
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

static P444 f_expr_rel_94(void) {
  struct f_expr_rel_94fr *F = rt_alloc(sizeof *F);
F->l_591 = NULL;
F->l_591 = f_expr_add_95();
if ((f_at_kind_61(((rt_int)3LL)) && f_is_rel_93(&(*(P439)rt_nil_check((*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s))))) {
F->op_592 = NULL;
F->op_592 = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s;
F->line_593 = f_cur_line_55();
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->l_591 = f_binop_88(F->op_592, F->l_591, f_expr_add_95(), F->line_593);
}
F->result_ = F->l_591;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_expr_add_95(void) {
  struct f_expr_add_95fr *F = rt_alloc(sizeof *F);
F->l_594 = NULL;
F->l_594 = f_expr_mul_96();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_595 = NULL;
F->op_595 = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s;
F->line_596 = f_cur_line_55();
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->l_594 = f_binop_88(F->op_595, F->l_594, f_expr_mul_96(), F->line_596);
}
F->result_ = F->l_594;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_expr_mul_96(void) {
  struct f_expr_mul_96fr *F = rt_alloc(sizeof *F);
F->l_597 = NULL;
F->l_597 = f_expr_pow_97();
while (((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_598 = NULL;
F->op_598 = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s;
F->line_599 = f_cur_line_55();
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->l_597 = f_binop_88(F->op_598, F->l_597, f_expr_pow_97(), F->line_599);
}
F->result_ = F->l_597;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_expr_pow_97(void) {
  struct f_expr_pow_97fr *F = rt_alloc(sizeof *F);
F->l_600 = NULL;
F->l_600 = f_expr_prefix_98();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_601 = f_cur_line_55();
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->l_600 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_600, f_expr_prefix_98(), F->line_601);
}
F->result_ = F->l_600;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_expr_prefix_98(void) {
  struct f_expr_prefix_98fr *F = rt_alloc(sizeof *F);
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_602 = NULL;
F->x_602 = f_nn_48(((rt_int)8LL), f_cur_line_55());
(*(P444)rt_nil_check(F->x_602)).name = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s;
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_602)).a = f_expr_prefix_98();
F->result_ = F->x_602;
goto ret_;
}
F->result_ = f_postfix_99();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_postfix_99(void) {
  struct f_postfix_99fr *F = rt_alloc(sizeof *F);
F->p_603 = NULL;
F->p_603 = f_primary_100();
while (1) {
F->line_604 = f_cur_line_55();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_605 = NULL;
F->x_605 = f_nn_48(((rt_int)10LL), F->line_604);
F->head_606 = NULL;
F->tail_607 = NULL;
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_608 = 1;
while (F->more_608) {
F->lo_609 = NULL;
F->lo_609 = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_610 = NULL;
F->r_610 = f_nn_48(((rt_int)16LL), F->line_604);
(*(P444)rt_nil_check(F->r_610)).a = F->lo_609;
(*(P444)rt_nil_check(F->r_610)).b = f_expr_89();
f_append_52(&F->head_606, &F->tail_607, F->r_610);
} else {
f_append_52(&F->head_606, &F->tail_607, F->lo_609);
}
F->more_608 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P444)rt_nil_check(F->x_605)).a = F->p_603;
(*(P444)rt_nil_check(F->x_605)).b = F->head_606;
F->p_603 = F->x_605;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL)) || (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))))) {
F->x_611 = NULL;
F->x_611 = f_nn_48(((rt_int)11LL), F->line_604);
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_611)).a = F->p_603;
(*(P444)rt_nil_check(F->x_611)).name = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s;
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->p_603 = F->x_611;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P444)rt_nil_check(F->p_603)).kind == ((rt_int)7LL)))) {
F->x_612 = NULL;
F->x_612 = f_nn_48(((rt_int)12LL), F->line_604);
(*(P444)rt_nil_check(F->x_612)).a = F->p_603;
(*(P444)rt_nil_check(F->x_612)).b = f_actual_tt_83();
F->p_603 = F->x_612;
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_613 = NULL;
F->x_613 = f_nn_48(((rt_int)13LL), F->line_604);
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_613)).a = F->p_603;
(*(P444)rt_nil_check(F->x_613)).b = f_p_subtype_79();
F->p_603 = F->x_613;
} else {
F->result_ = F->p_603;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_primary_100(void) {
  struct f_primary_100fr *F = rt_alloc(sizeof *F);
F->line_614 = f_cur_line_55();
F->x_615 = NULL;
F->k_616 = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).kind;
if ((F->k_616 == ((rt_int)4LL))) {
F->x_615 = f_nn_48(((rt_int)1LL), F->line_614);
(*(P444)rt_nil_check(F->x_615)).ival = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).ival;
(*(P444)rt_nil_check(F->x_615)).name = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s;
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->result_ = F->x_615;
goto ret_;
}
if ((((F->k_616 == ((rt_int)5LL)) || (F->k_616 == ((rt_int)7LL))) || (F->k_616 == ((rt_int)6LL)))) {
if ((F->k_616 == ((rt_int)5LL))) {
F->x_615 = f_nn_48(((rt_int)2LL), F->line_614);
} else if ((F->k_616 == ((rt_int)7LL))) {
F->x_615 = f_nn_48(((rt_int)3LL), F->line_614);
} else {
F->x_615 = f_nn_48(((rt_int)4LL), F->line_614);
}
(*(P444)rt_nil_check(F->x_615)).name = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s;
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->result_ = F->x_615;
goto ret_;
}
if ((F->k_616 == ((rt_int)1LL))) {
F->w_617 = rt_str_copy((*(P439)rt_nil_check((*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s)));
if ((rt_str_eq(F->w_617, rt_str("TRUE", 4)) || rt_str_eq(F->w_617, rt_str("FALSE", 5)))) {
F->x_615 = f_nn_48(((rt_int)5LL), F->line_614);
if (rt_str_eq(F->w_617, rt_str("TRUE", 4))) {
(*(P444)rt_nil_check(F->x_615)).ival = ((rt_int)1LL);
}
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->result_ = F->x_615;
goto ret_;
}
if (rt_str_eq(F->w_617, rt_str("NIL", 3))) {
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)6LL), F->line_614);
goto ret_;
}
F->result_ = f_name_node_77();
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_615 = f_nn_48(((rt_int)17LL), F->line_614);
(*(P444)rt_nil_check(F->x_615)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_615;
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_618 = NULL;
F->tail_619 = NULL;
F->x_615 = f_nn_48(((rt_int)14LL), F->line_614);
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_620 = 1;
while (F->more_620) {
f_append_52(&F->head_618, &F->tail_619, f_constructor_item_101());
F->more_620 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P444)rt_nil_check(F->x_615)).a = F->head_618;
F->result_ = F->x_615;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_constructor_item_101(void) {
  struct f_constructor_item_101fr *F = rt_alloc(sizeof *F);
F->line_621 = f_cur_line_55();
F->it_622 = NULL;
F->it_622 = f_nn_48(((rt_int)15LL), F->line_621);
F->first_623 = NULL;
F->first_623 = f_expr_89();
F->keys_624 = NULL;
F->ktail_625 = NULL;
F->lab_626 = NULL;
F->lab_626 = f_nn_48(((rt_int)61LL), F->line_621);
(*(P444)rt_nil_check(F->lab_626)).a = F->first_623;
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P444)rt_nil_check(F->lab_626)).b = f_expr_89();
f_append_52(&F->keys_624, &F->ktail_625, F->lab_626);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_52(&F->keys_624, &F->ktail_625, F->lab_626);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_627 = g_tpos_472;
F->more_628 = NULL;
F->tail2_629 = NULL;
F->ok_630 = 0;
F->go_631 = 1;
while ((F->go_631 && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_632 = NULL;
F->l2_632 = f_nn_48(((rt_int)61LL), F->line_621);
(*(P444)rt_nil_check(F->l2_632)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P444)rt_nil_check(F->l2_632)).b = f_expr_89();
}
f_append_52(&F->more_628, &F->tail2_629, F->l2_632);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_630 = 1;
F->go_631 = 0;
} else if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_631 = 0;
}
}
if (F->ok_630) {
f_append_52(&F->keys_624, &F->ktail_625, F->lab_626);
f_append_52(&F->keys_624, &F->ktail_625, F->more_628);
} else {
g_tpos_472 = F->save_627;
}
}
if ((F->keys_624 != NULL)) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P444)rt_nil_check(F->it_622)).a = F->keys_624;
(*(P444)rt_nil_check(F->it_622)).b = f_expr_89();
} else {
(*(P444)rt_nil_check(F->it_622)).b = F->first_623;
}
F->result_ = F->it_622;
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

static P444 f_body_103(void) {
  struct f_body_103fr *F = rt_alloc(sizeof *F);
F->head_633 = NULL;
F->tail_634 = NULL;
while ((!f_at_body_end_102())) {
f_append_52(&F->head_633, &F->tail_634, f_body_element_104());
}
F->result_ = F->head_633;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_body_element_104(void) {
  struct f_body_element_104fr *F = rt_alloc(sizeof *F);
F->x_635 = NULL;
if ((((((((((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_635 = f_declaration_105();
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_635 = f_nn_48(((rt_int)33LL), f_cur_line_55());
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_635)).a = f_expr_89();
} else {
F->x_635 = f_statement_126();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_635;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_declaration_105(void) {
  struct f_declaration_105fr *F = rt_alloc(sizeof *F);
F->line_636 = f_cur_line_55();
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
F->head_637 = NULL;
F->tail_638 = NULL;
F->names_639 = NULL;
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->names_639 = f_id_list_78();
while ((F->names_639 != NULL)) {
F->x_640 = NULL;
F->x_640 = f_nn_48(((rt_int)49LL), F->line_636);
(*(P444)rt_nil_check(F->x_640)).name = (*(P444)rt_nil_check(F->names_639)).name;
f_append_52(&F->head_637, &F->tail_638, F->x_640);
F->names_639 = (*(P444)rt_nil_check(F->names_639)).next;
}
F->result_ = F->head_637;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_object_decl_106(void) {
  struct f_object_decl_106fr *F = rt_alloc(sizeof *F);
F->line_641 = f_cur_line_55();
F->is_var_642 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_643 = NULL;
F->st_644 = NULL;
F->init_645 = NULL;
F->head_646 = NULL;
F->tail_647 = NULL;
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->names_643 = f_id_list_78();
if (F->is_var_642) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_644 = f_p_subtype_79();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_645 = f_expr_89();
}
} else {
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_644 = f_p_subtype_79();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_645 = f_expr_89();
}
while ((F->names_643 != NULL)) {
F->x_648 = NULL;
if (F->is_var_642) {
F->x_648 = f_nn_48(((rt_int)40LL), F->line_641);
} else {
F->x_648 = f_nn_48(((rt_int)41LL), F->line_641);
}
(*(P444)rt_nil_check(F->x_648)).name = (*(P444)rt_nil_check(F->names_643)).name;
(*(P444)rt_nil_check(F->x_648)).a = F->st_644;
(*(P444)rt_nil_check(F->x_648)).b = F->init_645;
f_append_52(&F->head_646, &F->tail_647, F->x_648);
F->names_643 = (*(P444)rt_nil_check(F->names_643)).next;
}
F->result_ = F->head_646;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_abbrev_decl_107(void) {
  struct f_abbrev_decl_107fr *F = rt_alloc(sizeof *F);
F->x_649 = NULL;
F->x_649 = f_nn_48(((rt_int)42LL), f_cur_line_55());
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_649)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P444)rt_nil_check(F->x_649)).b = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P444)rt_nil_check(F->x_649)).a = f_p_subtype_79();
F->result_ = F->x_649;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_skip_rep_108(void) {
  struct f_skip_rep_108fr *F = rt_alloc(sizeof *F);
F->depth_650 = ((rt_int)0LL);
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((F->depth_650 == ((rt_int)0LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_61(((rt_int)0LL))))) {
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_650 = rt_add(F->depth_650, ((rt_int)1LL));
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_650 = rt_sub(F->depth_650, ((rt_int)1LL));
}
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
}
}
ret_:
  return;
}

static P444 f_type_decl_109(void) {
  struct f_type_decl_109fr *F = rt_alloc(sizeof *F);
F->line_651 = f_cur_line_55();
F->name_652 = NULL;
F->params_653 = NULL;
F->x_654 = NULL;
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->name_652 = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_653 = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P439)rt_nil_check((*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->x_654 = f_nn_48(((rt_int)44LL), F->line_651);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P444)rt_nil_check(F->x_654)).b = f_formal_params_112();
}
} else {
F->x_654 = f_nn_48(((rt_int)43LL), F->line_651);
(*(P444)rt_nil_check(F->x_654)).b = F->params_653;
}
(*(P444)rt_nil_check(F->x_654)).name = F->name_652;
(*(P444)rt_nil_check(F->x_654)).a = f_p_subtype_79();
f_skip_rep_108();
F->result_ = F->x_654;
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

static P444 f_formal_params_112(void) {
  struct f_formal_params_112fr *F = rt_alloc(sizeof *F);
F->head_655 = NULL;
F->tail_656 = NULL;
F->more_657 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_657) {
F->mode_658 = ((rt_int)1LL);
F->names_659 = NULL;
F->ntail_660 = NULL;
F->st_661 = NULL;
if ((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_658 = f_mode_of_111(&(*(P439)rt_nil_check((*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s)));
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
}
f_append_52(&F->names_659, &F->ntail_660, f_name_node_77());
while ((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL))) && (f_kind_at_63(((rt_int)2LL)) == ((rt_int)3LL))) && (rt_str_eq((*(P439)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P439)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
f_append_52(&F->names_659, &F->ntail_660, f_name_node_77());
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_661 = f_p_subtype_79();
while ((F->names_659 != NULL)) {
F->p_662 = NULL;
F->p_662 = f_nn_48(((rt_int)52LL), (*(P444)rt_nil_check(F->names_659)).line);
(*(P444)rt_nil_check(F->p_662)).name = (*(P444)rt_nil_check(F->names_659)).name;
(*(P444)rt_nil_check(F->p_662)).ival = F->mode_658;
(*(P444)rt_nil_check(F->p_662)).a = F->st_661;
f_append_52(&F->head_655, &F->tail_656, F->p_662);
F->names_659 = (*(P444)rt_nil_check(F->names_659)).next;
}
F->more_657 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_655;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_imports_list_114(P444 owner_113) {
  struct f_imports_list_114fr *F = rt_alloc(sizeof *F);
F->owner_113 = owner_113;
F->head_663 = NULL;
F->tail_664 = NULL;
F->more_665 = 1;
if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P444)rt_nil_check(F->owner_113)).flag = rt_add((*(P444)rt_nil_check(F->owner_113)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_665) {
F->ro_666 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_667 = NULL;
F->x_667 = f_name_node_77();
if (F->ro_666) {
(*(P444)rt_nil_check(F->x_667)).ival = ((rt_int)1LL);
}
f_append_52(&F->head_663, &F->tail_664, F->x_667);
F->more_665 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P444)rt_nil_check(F->owner_113)).d = F->head_663;
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

static P439 f_definable_name_117(void) {
  struct f_definable_name_117fr *F = rt_alloc(sizeof *F);
if ((f_at_kind_61(((rt_int)1LL)) || (f_at_kind_61(((rt_int)3LL)) && f_is_definable_116(&(*(P439)rt_nil_check((*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s)))))) {
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->result_ = (*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(rt_sub(g_tpos_472, ((rt_int)1LL)), (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_subprogram_decl_118(void) {
  struct f_subprogram_decl_118fr *F = rt_alloc(sizeof *F);
F->line_668 = f_cur_line_55();
F->x_669 = NULL;
F->is_abn_670 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_671 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_671) {
F->x_669 = f_nn_48(((rt_int)46LL), F->line_668);
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_669 = f_nn_48(((rt_int)45LL), F->line_668);
} else {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
if (F->is_abn_670) {
(*(P444)rt_nil_check(F->x_669)).flag = ((rt_int)1LL);
}
(*(P444)rt_nil_check(F->x_669)).name = f_definable_name_117();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P444)rt_nil_check(F->x_669)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P444)rt_nil_check(F->x_669)).a = f_formal_params_112();
}
if (F->is_func_671) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P444)rt_nil_check(F->x_669)).b = f_p_subtype_79();
}
F->dummy_672 = f_imports_list_114(F->x_669);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P444)rt_nil_check(F->x_669)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_671) {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P439)rt_nil_check(f_definable_name_117())), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->x_669)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->x_669)).name))); b_; }));
}
F->result_ = F->x_669;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_capsule_decl_119(void) {
  struct f_capsule_decl_119fr *F = rt_alloc(sizeof *F);
F->x_673 = NULL;
F->x_673 = f_nn_48(((rt_int)47LL), f_cur_line_55());
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_673)).name = f_expect_id_76();
F->dummy_674 = f_imports_list_114(F->x_673);
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P444)rt_nil_check(F->x_673)).ival = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P444)rt_nil_check(F->x_673)).ival = ((rt_int)0LL);
} else {
F->head_675 = NULL;
F->tail_676 = NULL;
F->more_677 = 1;
while (F->more_677) {
F->n_678 = NULL;
F->n_678 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P444)rt_nil_check(F->n_678)).ival = ((rt_int)1LL);
}
(*(P444)rt_nil_check(F->n_678)).name = f_definable_name_117();
f_append_52(&F->head_675, &F->tail_676, F->n_678);
F->more_677 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P444)rt_nil_check(F->x_673)).a = F->head_675;
(*(P444)rt_nil_check(F->x_673)).ival = ((rt_int)2LL);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P444)rt_nil_check(F->x_673)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P439)rt_nil_check(f_expect_id_76())), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->x_673)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_673;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_formal_tt_120(void) {
  struct f_formal_tt_120fr *F = rt_alloc(sizeof *F);
F->head_679 = NULL;
F->tail_680 = NULL;
F->more_681 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_681) {
f_append_52(&F->head_679, &F->tail_680, f_name_node_77());
F->more_681 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_679;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_generic_decl_121(void) {
  struct f_generic_decl_121fr *F = rt_alloc(sizeof *F);
F->x_682 = NULL;
F->x_682 = f_nn_48(((rt_int)51LL), f_cur_line_55());
F->head_683 = NULL;
F->tail_684 = NULL;
F->more_685 = 1;
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
while (F->more_685) {
F->names_686 = NULL;
F->names_686 = f_id_list_78();
F->kind_687 = ((rt_int)6LL);
F->st_688 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_687 = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_687 = ((rt_int)2LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_687 = ((rt_int)3LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_687 = ((rt_int)4LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_687 = ((rt_int)5LL);
} else {
F->st_688 = f_p_subtype_79();
}
if (((F->kind_687 <= ((rt_int)2LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P444)rt_nil_check(F->x_682)).e = f_actual_params_80();
} else if (((F->kind_687 >= ((rt_int)3LL)) && (F->kind_687 <= ((rt_int)5LL)))) {
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_688 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
}
if (((F->kind_687 == ((rt_int)4LL)) && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_688 = f_p_subtype_79();
}
}
while ((F->names_686 != NULL)) {
F->p_689 = NULL;
F->p_689 = f_nn_48(((rt_int)52LL), (*(P444)rt_nil_check(F->names_686)).line);
(*(P444)rt_nil_check(F->p_689)).name = (*(P444)rt_nil_check(F->names_686)).name;
(*(P444)rt_nil_check(F->p_689)).ival = F->kind_687;
(*(P444)rt_nil_check(F->p_689)).a = F->st_688;
f_append_52(&F->head_683, &F->tail_684, F->p_689);
F->names_686 = (*(P444)rt_nil_check(F->names_686)).next;
}
F->more_685 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_685 = 1;
while (F->more_685) {
F->nm_690 = NULL;
F->nm_690 = f_definable_name_117();
F->st_691 = NULL;
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_691 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_691 = f_p_subtype_79();
}
F->more_685 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P444)rt_nil_check(F->x_682)).a = F->head_683;
(*(P444)rt_nil_check(F->x_682)).b = f_declaration_105();
(*(P444)rt_nil_check(F->x_682)).name = (*(P444)rt_nil_check((*(P444)rt_nil_check(F->x_682)).b)).name;
F->result_ = F->x_682;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_task_decl_122(void) {
  struct f_task_decl_122fr *F = rt_alloc(sizeof *F);
F->x_692 = NULL;
F->x_692 = f_nn_48(((rt_int)50LL), f_cur_line_55());
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_692)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P444)rt_nil_check(F->x_692)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P444)rt_nil_check(F->x_692)).a = f_formal_params_112();
}
F->dummy_693 = f_imports_list_114(F->x_692);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P444)rt_nil_check(F->x_692)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P439)rt_nil_check(f_expect_id_76())), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->x_692)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->x_692)).name))); b_; }));
}
F->result_ = F->x_692;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_expose_decl_123(void) {
  struct f_expose_decl_123fr *F = rt_alloc(sizeof *F);
F->x_694 = NULL;
F->x_694 = f_nn_48(((rt_int)48LL), f_cur_line_55());
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P444)rt_nil_check(F->x_694)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_695 = NULL;
F->tail_696 = NULL;
F->more_697 = 1;
while (F->more_697) {
F->n_698 = NULL;
F->n_698 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P444)rt_nil_check(F->n_698)).ival = ((rt_int)1LL);
}
(*(P444)rt_nil_check(F->n_698)).name = f_definable_name_117();
f_append_52(&F->head_695, &F->tail_696, F->n_698);
F->more_697 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P444)rt_nil_check(F->x_694)).a = F->head_695;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P444)rt_nil_check(F->x_694)).flag = ((rt_int)1LL);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P444)rt_nil_check(F->x_694)).flag = rt_add((*(P444)rt_nil_check(F->x_694)).flag, ((rt_int)2LL));
}
(*(P444)rt_nil_check(F->x_694)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P444)rt_nil_check(F->x_694)).b = f_actual_params_80();
}
if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING is not handled yet", 27); b_; }));
}
if ((((*(P444)rt_nil_check(F->x_694)).flag == ((rt_int)1LL)) || ((*(P444)rt_nil_check(F->x_694)).flag == ((rt_int)3LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capsules invoked as NEW are not handled yet", 43); b_; }));
}
F->result_ = F->x_694;
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

static P444 f_statement_126(void) {
  struct f_statement_126fr *F = rt_alloc(sizeof *F);
F->labels_699 = NULL;
F->ltail_700 = NULL;
F->match_701 = NULL;
F->s_702 = NULL;
while (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq((*(P439)rt_nil_check(f_text_at_65(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_52(&F->labels_699, &F->ltail_700, f_name_node_77());
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
}
if (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))) && f_is_compound_kw_125(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P439)rt_nil_check(f_text_at_65(((rt_int)1LL)))); b_; })))) {
F->match_701 = f_expect_id_76();
}
F->s_702 = f_unlabeled_statement_127();
if ((F->match_701 != NULL)) {
if (((((((((*(P444)rt_nil_check(F->s_702)).kind != ((rt_int)22LL)) && ((*(P444)rt_nil_check(F->s_702)).kind != ((rt_int)23LL))) && ((*(P444)rt_nil_check(F->s_702)).kind != ((rt_int)24LL))) && ((*(P444)rt_nil_check(F->s_702)).kind != ((rt_int)25LL))) && ((*(P444)rt_nil_check(F->s_702)).kind != ((rt_int)26LL))) && ((*(P444)rt_nil_check(F->s_702)).kind != ((rt_int)35LL))) && ((*(P444)rt_nil_check(F->s_702)).kind != ((rt_int)36LL)))) {
f_fail_23((*(P444)rt_nil_check(F->s_702)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P439)rt_nil_check(f_expect_id_76())), (*(P439)rt_nil_check(F->match_701))))) {
f_fail_23((*(P444)rt_nil_check(F->s_702)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P439)rt_nil_check(F->match_701))); b_; }));
}
(*(P444)rt_nil_check(F->s_702)).tag = F->match_701;
}
if ((F->labels_699 != NULL)) {
f_fail_23((*(P444)rt_nil_check(F->s_702)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_702;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_unlabeled_statement_127(void) {
  struct f_unlabeled_statement_127fr *F = rt_alloc(sizeof *F);
F->line_703 = f_cur_line_55();
F->x_704 = NULL;
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
F->x_704 = f_nn_48(((rt_int)25LL), F->line_703);
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_704)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_704;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_135();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_704 = f_nn_48(((rt_int)27LL), F->line_703);
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_704)).name = f_expect_id_76();
F->result_ = F->x_704;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_704 = f_nn_48(((rt_int)28LL), F->line_703);
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P444)rt_nil_check(F->x_704)).a = f_expr_89();
}
F->result_ = F->x_704;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_704 = f_nn_48(((rt_int)30LL), F->line_703);
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_704)).name = f_expect_id_76();
F->result_ = F->x_704;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)31LL), F->line_703);
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_704 = f_nn_48(((rt_int)34LL), F->line_703);
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_704)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P444)rt_nil_check(F->x_704)).e = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P444)rt_nil_check(F->x_704)).b = f_actual_params_80();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P444)rt_nil_check(F->x_704)).a = f_postfix_99();
F->result_ = F->x_704;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_705 = NULL;
F->tail_706 = NULL;
F->x_704 = f_nn_48(((rt_int)35LL), F->line_703);
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_707 = NULL;
F->itail_708 = NULL;
F->more_709 = 1;
while (F->more_709) {
f_append_52(&F->invs_707, &F->itail_708, f_postfix_99());
F->more_709 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_705, &F->tail_706, f_arm_131(F->invs_707, f_body_103(), F->line_703));
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P444)rt_nil_check(F->x_704)).a = F->head_705;
F->result_ = F->x_704;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_704 = f_nn_48(((rt_int)36LL), F->line_703);
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_704)).a = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P444)rt_nil_check(F->x_704)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_704;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_704 = f_nn_48(((rt_int)32LL), F->line_703);
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_704)).a = f_postfix_99();
if ((!(f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P439)rt_nil_check((*(P440)rt_nil_check((*(P442)rt_nil_check(g_toks_470)).p[rt_index(g_tpos_472, (*(P442)rt_nil_check(g_toks_470)).lo, (*(P442)rt_nil_check(g_toks_470)).hi) - (*(P442)rt_nil_check(g_toks_470)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P444)rt_nil_check(F->x_704)).b = f_actual_params_80();
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P444)rt_nil_check(F->x_704)).c = f_expr_89();
}
F->result_ = F->x_704;
goto ret_;
}
{
F->target_710 = NULL;
F->target_710 = f_postfix_99();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_704 = f_nn_48(((rt_int)20LL), F->line_703);
(*(P444)rt_nil_check(F->x_704)).a = F->target_710;
(*(P444)rt_nil_check(F->x_704)).b = f_expr_89();
} else {
F->x_704 = f_nn_48(((rt_int)21LL), F->line_703);
(*(P444)rt_nil_check(F->x_704)).a = F->target_710;
}
}
F->result_ = F->x_704;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_arm_131(P444 cond_128, P444 b_129, rt_int line_130) {
  struct f_arm_131fr *F = rt_alloc(sizeof *F);
F->cond_128 = cond_128;
F->b_129 = b_129;
F->line_130 = line_130;
F->x_711 = NULL;
F->x_711 = f_nn_48(((rt_int)60LL), F->line_130);
(*(P444)rt_nil_check(F->x_711)).a = F->cond_128;
(*(P444)rt_nil_check(F->x_711)).b = F->b_129;
F->result_ = F->x_711;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_if_stmt_132(void) {
  struct f_if_stmt_132fr *F = rt_alloc(sizeof *F);
F->x_712 = NULL;
F->x_712 = f_nn_48(((rt_int)22LL), f_cur_line_55());
F->head_713 = NULL;
F->tail_714 = NULL;
F->cond_715 = NULL;
F->go_716 = 1;
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
F->cond_715 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_713, &F->tail_714, f_arm_131(F->cond_715, f_body_103(), (*(P444)rt_nil_check(F->x_712)).line));
while (F->go_716) {
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_715 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_713, &F->tail_714, f_arm_131(F->cond_715, f_body_103(), (*(P444)rt_nil_check(F->x_712)).line));
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P444)rt_nil_check(F->x_712)).flag = ((rt_int)1LL);
(*(P444)rt_nil_check(F->x_712)).b = f_body_103();
} else {
F->go_716 = 0;
}
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P444)rt_nil_check(F->x_712)).a = F->head_713;
F->result_ = F->x_712;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_case_stmt_133(void) {
  struct f_case_stmt_133fr *F = rt_alloc(sizeof *F);
F->x_717 = NULL;
F->x_717 = f_nn_48(((rt_int)23LL), f_cur_line_55());
F->head_718 = NULL;
F->tail_719 = NULL;
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_717)).a = f_expr_89();
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_720 = NULL;
F->ltail_721 = NULL;
F->more_722 = 1;
while (F->more_722) {
F->l_723 = NULL;
F->l_723 = f_nn_48(((rt_int)61LL), f_cur_line_55());
(*(P444)rt_nil_check(F->l_723)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P444)rt_nil_check(F->l_723)).b = f_expr_89();
}
f_append_52(&F->labs_720, &F->ltail_721, F->l_723);
F->more_722 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_718, &F->tail_719, f_arm_131(F->labs_720, f_body_103(), (*(P444)rt_nil_check(F->x_717)).line));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P444)rt_nil_check(F->x_717)).flag = ((rt_int)1LL);
(*(P444)rt_nil_check(F->x_717)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P444)rt_nil_check(F->x_717)).b = F->head_718;
F->result_ = F->x_717;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_repeat_stmt_134(void) {
  struct f_repeat_stmt_134fr *F = rt_alloc(sizeof *F);
F->x_724 = NULL;
F->x_724 = f_nn_48(((rt_int)24LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P444)rt_nil_check(F->x_724)).flag = ((rt_int)1LL);
(*(P444)rt_nil_check(F->x_724)).name = f_expect_id_76();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P444)rt_nil_check(F->x_724)).ival = ((rt_int)1LL);
}
(*(P444)rt_nil_check(F->x_724)).a = f_p_subtype_79();
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P444)rt_nil_check(F->x_724)).a = f_expr_89();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P444)rt_nil_check(F->x_724)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_724;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_guard_stmt_135(void) {
  struct f_guard_stmt_135fr *F = rt_alloc(sizeof *F);
F->x_725 = NULL;
F->x_725 = f_nn_48(((rt_int)26LL), f_cur_line_55());
F->head_726 = NULL;
F->tail_727 = NULL;
g_tpos_472 = rt_add(g_tpos_472, ((rt_int)1LL));
(*(P444)rt_nil_check(F->x_725)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_728 = NULL;
F->h_728 = f_nn_48(((rt_int)62LL), f_cur_line_55());
(*(P444)rt_nil_check(F->h_728)).a = f_id_list_78();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P444)rt_nil_check(F->h_728)).b = f_body_103();
f_append_52(&F->head_726, &F->tail_727, F->h_728);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P444)rt_nil_check(F->x_725)).flag = ((rt_int)1LL);
(*(P444)rt_nil_check(F->x_725)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P444)rt_nil_check(F->x_725)).b = F->head_726;
F->result_ = F->x_725;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_program_136(void) {
  struct f_program_136fr *F = rt_alloc(sizeof *F);
F->head_729 = NULL;
F->tail_730 = NULL;
while ((!f_at_kind_61(((rt_int)0LL)))) {
if ((!f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
f_append_52(&F->head_729, &F->tail_730, f_capsule_decl_119());
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_729;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_hash_138(rstr *s_137) {
  struct f_hash_138fr *F = rt_alloc(sizeof *F);
F->s_137 = s_137;
F->h_731 = ((rt_int)0LL);
{ rt_int lo733 = ((rt_int)1LL), hi734 = ((*F->s_137)).len;
for (rt_int it735 = lo733; it735 <= hi734; it735++) {
F->i_732 = it735;
F->h_731 = rt_mod(rt_add(rt_mul(F->h_731, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_137), F->i_732)) + 1)), ((rt_int)4093LL));
}
}
F->result_ = F->h_731;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P454 f_lookup_140(rstr *name_139) {
  struct f_lookup_140fr *F = rt_alloc(sizeof *F);
F->name_139 = name_139;
F->y_736 = NULL;
F->y_736 = (*(P460)rt_nil_check(g_table_474)).p[rt_index(f_hash_138(&(*F->name_139)), (*(P460)rt_nil_check(g_table_474)).lo, (*(P460)rt_nil_check(g_table_474)).hi) - (*(P460)rt_nil_check(g_table_474)).lo];
while ((F->y_736 != NULL)) {
if (rt_str_eq((*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_736)).name)), (*F->name_139))) {
F->result_ = F->y_736;
goto ret_;
}
F->y_736 = (*(P454)rt_nil_check(F->y_736)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P454 f_lookup_decl_142(P444 d_141) {
  struct f_lookup_decl_142fr *F = rt_alloc(sizeof *F);
F->d_141 = d_141;
F->y_737 = NULL;
F->y_737 = (*(P460)rt_nil_check(g_table_474)).p[rt_index(f_hash_138(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->d_141)).name))), (*(P460)rt_nil_check(g_table_474)).lo, (*(P460)rt_nil_check(g_table_474)).hi) - (*(P460)rt_nil_check(g_table_474)).lo];
while ((F->y_737 != NULL)) {
if (((*(P454)rt_nil_check(F->y_737)).decl == F->d_141)) {
F->result_ = F->y_737;
goto ret_;
}
F->y_737 = (*(P454)rt_nil_check(F->y_737)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_define_145(P454 y_143, rt_int line_144) {
  struct f_define_145fr *F = rt_alloc(sizeof *F);
F->y_143 = y_143;
F->line_144 = line_144;
F->h_738 = f_hash_138(&(*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_143)).name)));
F->z_739 = NULL;
F->z_739 = (*(P460)rt_nil_check(g_table_474)).p[rt_index(F->h_738, (*(P460)rt_nil_check(g_table_474)).lo, (*(P460)rt_nil_check(g_table_474)).hi) - (*(P460)rt_nil_check(g_table_474)).lo];
while ((F->z_739 != NULL)) {
if (((((*(P454)rt_nil_check(F->z_739)).depth == g_depth_475) && rt_str_eq((*(P439)rt_nil_check((*(P454)rt_nil_check(F->z_739)).name)), (*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_143)).name)))) && (!(((f_overloadable_147(F->y_143) && f_overloadable_147(F->z_739)) && ((*(P454)rt_nil_check(F->z_739)).kind == (*(P454)rt_nil_check(F->y_143)).kind)) && (!f_same_signature_150((*(P454)rt_nil_check(F->y_143)).params, (*(P454)rt_nil_check(F->z_739)).params)))))) {
f_fail_23(F->line_144, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_143)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_739 = (*(P454)rt_nil_check(F->z_739)).chain;
}
(*(P454)rt_nil_check(F->y_143)).depth = g_depth_475;
(*(P454)rt_nil_check(F->y_143)).chain = (*(P460)rt_nil_check(g_table_474)).p[rt_index(F->h_738, (*(P460)rt_nil_check(g_table_474)).lo, (*(P460)rt_nil_check(g_table_474)).hi) - (*(P460)rt_nil_check(g_table_474)).lo];
(*(P460)rt_nil_check(g_table_474)).p[rt_index(F->h_738, (*(P460)rt_nil_check(g_table_474)).lo, (*(P460)rt_nil_check(g_table_474)).hi) - (*(P460)rt_nil_check(g_table_474)).lo] = F->y_143;
(*(P454)rt_nil_check(F->y_143)).stack = g_scope_stack_476;
g_scope_stack_476 = F->y_143;
ret_:
  return;
}

static int f_overloadable_147(P454 y_146) {
  struct f_overloadable_147fr *F = rt_alloc(sizeof *F);
F->y_146 = y_146;
F->result_ = ((((*(P454)rt_nil_check(F->y_146)).kind == ((rt_int)3LL)) || ((*(P454)rt_nil_check(F->y_146)).kind == ((rt_int)4LL))) || ((*(P454)rt_nil_check(F->y_146)).kind == ((rt_int)9LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_signature_150(P452 a_148, P452 b_149) {
  struct f_same_signature_150fr *F = rt_alloc(sizeof *F);
F->a_148 = a_148;
F->b_149 = b_149;
F->x_740 = NULL;
F->x_740 = F->a_148;
F->y_741 = NULL;
F->y_741 = F->b_149;
while (((F->x_740 != NULL) && (F->y_741 != NULL))) {
if ((!f_same_164((*(P452)rt_nil_check(F->x_740)).t, (*(P452)rt_nil_check(F->y_741)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_740 = (*(P452)rt_nil_check(F->x_740)).next;
F->y_741 = (*(P452)rt_nil_check(F->y_741)).next;
}
F->result_ = ((F->x_740 == NULL) && (F->y_741 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_open_scope_151(void) {
  struct f_open_scope_151fr *F = rt_alloc(sizeof *F);
g_depth_475 = rt_add(g_depth_475, ((rt_int)1LL));
ret_:
  return;
}

static void f_close_scope_152(void) {
  struct f_close_scope_152fr *F = rt_alloc(sizeof *F);
while (((g_scope_stack_476 != NULL) && ((*(P454)rt_nil_check(g_scope_stack_476)).depth == g_depth_475))) {
(*(P460)rt_nil_check(g_table_474)).p[rt_index(f_hash_138(&(*(P439)rt_nil_check((*(P454)rt_nil_check(g_scope_stack_476)).name))), (*(P460)rt_nil_check(g_table_474)).lo, (*(P460)rt_nil_check(g_table_474)).hi) - (*(P460)rt_nil_check(g_table_474)).lo] = (*(P454)rt_nil_check(g_scope_stack_476)).chain;
g_scope_stack_476 = (*(P454)rt_nil_check(g_scope_stack_476)).stack;
}
g_depth_475 = rt_sub(g_depth_475, ((rt_int)1LL));
ret_:
  return;
}

static P454 f_new_sym_155(rt_int kind_153, P439 name_154) {
  struct f_new_sym_155fr *F = rt_alloc(sizeof *F);
F->kind_153 = kind_153;
F->name_154 = name_154;
F->y_742 = NULL;
{ R455 *cell743 = rt_alloc(sizeof(R455));
(*cell743).name = NULL;
(*cell743).t = NULL;
(*cell743).c = NULL;
(*cell743).access = NULL;
(*cell743).cname = NULL;
(*cell743).st = NULL;
(*cell743).decl = NULL;
(*cell743).params = NULL;
(*cell743).result = NULL;
(*cell743).members = NULL;
(*cell743).mnext = NULL;
(*cell743).binds = NULL;
(*cell743).insts = NULL;
(*cell743).chain = NULL;
(*cell743).stack = NULL;
F->y_742 = cell743;
}
(*(P454)rt_nil_check(F->y_742)).kind = F->kind_153;
(*(P454)rt_nil_check(F->y_742)).name = F->name_154;
F->result_ = F->y_742;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P448 f_new_typ_157(rt_int kind_156) {
  struct f_new_typ_157fr *F = rt_alloc(sizeof *F);
F->kind_156 = kind_156;
F->t_744 = NULL;
{ R449 *cell745 = rt_alloc(sizeof(R449));
(*cell745).name = NULL;
(*cell745).lits = NULL;
(*cell745).elem = NULL;
(*cell745).idx = NULL;
(*cell745).idx2 = NULL;
(*cell745).elemcons = NULL;
(*cell745).elemst = NULL;
(*cell745).under = NULL;
(*cell745).tparams = NULL;
(*cell745).ocap = NULL;
(*cell745).fields = NULL;
(*cell745).target = NULL;
(*cell745).decl = NULL;
(*cell745).cname = NULL;
(*cell745).next = NULL;
F->t_744 = cell745;
}
(*(P448)rt_nil_check(F->t_744)).kind = F->kind_156;
F->result_ = F->t_744;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P446 f_new_cons_158(void) {
  struct f_new_cons_158fr *F = rt_alloc(sizeof *F);
F->c_746 = NULL;
{ R447 *cell747 = rt_alloc(sizeof(R447));
(*cell747).lo = NULL;
(*cell747).hi = NULL;
(*cell747).lo2 = NULL;
(*cell747).hi2 = NULL;
(*cell747).slen = NULL;
(*cell747).args = NULL;
F->c_746 = cell747;
}
F->result_ = F->c_746;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_lits_161(P444 a_159, P444 b_160) {
  struct f_same_lits_161fr *F = rt_alloc(sizeof *F);
F->a_159 = a_159;
F->b_160 = b_160;
F->x_748 = NULL;
F->x_748 = F->a_159;
F->y_749 = NULL;
F->y_749 = F->b_160;
while (((F->x_748 != NULL) && (F->y_749 != NULL))) {
if ((!rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->x_748)).name)), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->y_749)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_748 = (*(P444)rt_nil_check(F->x_748)).next;
F->y_749 = (*(P444)rt_nil_check(F->y_749)).next;
}
F->result_ = ((F->x_748 == NULL) && (F->y_749 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_164(P448 a_162, P448 b_163) {
  struct f_same_164fr *F = rt_alloc(sizeof *F);
F->a_162 = a_162;
F->b_163 = b_163;
if ((F->a_162 == F->b_163)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_162 == NULL) || (F->b_163 == NULL)) || ((*(P448)rt_nil_check(F->a_162)).kind != (*(P448)rt_nil_check(F->b_163)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P448)rt_nil_check(F->a_162)).kind == ((rt_int)1LL)) || ((*(P448)rt_nil_check(F->a_162)).kind == ((rt_int)2LL))) || ((*(P448)rt_nil_check(F->a_162)).kind == ((rt_int)3LL))) || ((*(P448)rt_nil_check(F->a_162)).kind == ((rt_int)5LL))) || ((*(P448)rt_nil_check(F->a_162)).kind == ((rt_int)9LL))) || ((*(P448)rt_nil_check(F->a_162)).kind == ((rt_int)10LL)))) {
F->result_ = 1;
goto ret_;
}
if (((*(P448)rt_nil_check(F->a_162)).kind == ((rt_int)4LL))) {
F->result_ = f_same_lits_161((*(P448)rt_nil_check(F->a_162)).lits, (*(P448)rt_nil_check(F->b_163)).lits);
goto ret_;
}
if (((*(P448)rt_nil_check(F->a_162)).kind == ((rt_int)6LL))) {
if ((((*(P448)rt_nil_check(F->a_162)).idx2 == NULL) != ((*(P448)rt_nil_check(F->b_163)).idx2 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_164((*(P448)rt_nil_check(F->a_162)).elem, (*(P448)rt_nil_check(F->b_163)).elem) && f_same_164((*(P448)rt_nil_check(F->a_162)).idx, (*(P448)rt_nil_check(F->b_163)).idx));
goto ret_;
}
if ((((*(P448)rt_nil_check(F->a_162)).kind == ((rt_int)16LL)) || ((*(P448)rt_nil_check(F->a_162)).kind == ((rt_int)12LL)))) {
F->result_ = f_same_164((*(P448)rt_nil_check(F->a_162)).elem, (*(P448)rt_nil_check(F->b_163)).elem);
goto ret_;
}
if (((*(P448)rt_nil_check(F->a_162)).kind == ((rt_int)7LL))) {
F->f_750 = NULL;
F->f_750 = (*(P448)rt_nil_check(F->a_162)).fields;
F->g_751 = NULL;
F->g_751 = (*(P448)rt_nil_check(F->b_163)).fields;
while (((F->f_750 != NULL) && (F->g_751 != NULL))) {
if (((!rt_str_eq((*(P439)rt_nil_check((*(P450)rt_nil_check(F->f_750)).name)), (*(P439)rt_nil_check((*(P450)rt_nil_check(F->g_751)).name)))) || (!f_same_164((*(P450)rt_nil_check(F->f_750)).t, (*(P450)rt_nil_check(F->g_751)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_750 = (*(P450)rt_nil_check(F->f_750)).next;
F->g_751 = (*(P450)rt_nil_check(F->g_751)).next;
}
F->result_ = ((F->f_750 == NULL) && (F->g_751 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P448 f_base_of_166(P448 t_165) {
  struct f_base_of_166fr *F = rt_alloc(sizeof *F);
F->t_165 = t_165;
if ((((F->t_165 != NULL) && ((*(P448)rt_nil_check(F->t_165)).kind == ((rt_int)15LL))) && ((*(P448)rt_nil_check(F->t_165)).tparams == NULL))) {
F->result_ = f_base_of_166((*(P448)rt_nil_check(F->t_165)).under);
goto ret_;
}
F->result_ = F->t_165;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P446 f_base_cons_169(P448 t_167, P446 c_168) {
  struct f_base_cons_169fr *F = rt_alloc(sizeof *F);
F->t_167 = t_167;
F->c_168 = c_168;
if (((((F->t_167 != NULL) && ((*(P448)rt_nil_check(F->t_167)).kind == ((rt_int)15LL))) && ((*(P448)rt_nil_check(F->t_167)).tparams == NULL)) && ((*(P448)rt_nil_check(F->t_167)).elemcons != NULL))) {
F->result_ = f_base_cons_169((*(P448)rt_nil_check(F->t_167)).under, (*(P448)rt_nil_check(F->t_167)).elemcons);
goto ret_;
}
F->result_ = F->c_168;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_kind_name_171(P448 t_170) {
  struct f_kind_name_171fr *F = rt_alloc(sizeof *F);
F->t_170 = t_170;
{ rt_int sel752 = (*(P448)rt_nil_check(F->t_170)).kind;
if (0 || (sel752 == ((rt_int)1LL))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel752 == ((rt_int)2LL))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel752 == ((rt_int)3LL))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel752 == ((rt_int)4LL))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel752 == ((rt_int)5LL))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel752 == ((rt_int)6LL))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel752 == ((rt_int)7LL))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel752 == ((rt_int)8LL))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_170)).name)));
goto ret_;
} else if (0 || (sel752 == ((rt_int)11LL))) {
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

static void f_check_type_175(P448 got_172, P448 want_173, rt_int line_174) {
  struct f_check_type_175fr *F = rt_alloc(sizeof *F);
F->got_172 = got_172;
F->want_173 = want_173;
F->line_174 = line_174;
if ((F->want_173 == NULL)) {
goto ret_;
}
if ((((*(P448)rt_nil_check(F->got_172)).kind == ((rt_int)11LL)) && ((*(P448)rt_nil_check(F->want_173)).kind == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_164(F->got_172, F->want_173))) {
f_fail_23(F->line_174, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_171(F->got_172)), rt_str(" where ", 7)), f_kind_name_171(F->want_173)), rt_str(" is required", 12)); b_; }));
}
ret_:
  return;
}

static rstr f_ctype_177(P448 t_176) {
  struct f_ctype_177fr *F = rt_alloc(sizeof *F);
F->t_176 = t_176;
{ rt_int sel753 = (*(P448)rt_nil_check(F->t_176)).kind;
if (0 || (sel753 == ((rt_int)1LL))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel753 == ((rt_int)2LL)) || (sel753 == ((rt_int)4LL)) || (sel753 == ((rt_int)10LL))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel753 == ((rt_int)3LL))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel753 == ((rt_int)5LL))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel753 == ((rt_int)9LL))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel753 == ((rt_int)12LL))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel753 == ((rt_int)13LL))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel753 == ((rt_int)14LL))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel753 == ((rt_int)16LL))) {
F->result_ = rt_str("rset", 4);
goto ret_;
} else {
if (((*(P448)rt_nil_check(F->t_176)).cname == NULL)) {
f_declare_ctype_181(F->t_176);
} else if (((((*(P448)rt_nil_check(F->t_176)).kind == ((rt_int)7LL)) && (*(P448)rt_nil_check(F->t_176)).forward) && (!(*(P448)rt_nil_check(F->t_176)).defined))) {
(*(P448)rt_nil_check(F->t_176)).defined = 1;
f_put_27(g_out_types_479, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_176)).cname))), rt_str(" { ", 3)), f_field_decls_179(F->t_176)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_176)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_decls_179(P448 t_178) {
  struct f_field_decls_179fr *F = rt_alloc(sizeof *F);
F->t_178 = t_178;
F->f_754 = NULL;
F->f_754 = (*(P448)rt_nil_check(F->t_178)).fields;
F->s_755 = NULL;
F->s_755 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_754 != NULL)) {
F->s_755 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->s_755)), f_ctype_177((*(P450)rt_nil_check(F->f_754)).t)), rt_str(" ", 1)), f_field_c_17(&(*(P439)rt_nil_check((*(P450)rt_nil_check(F->f_754)).name)))), rt_str("; ", 2)); b_; }));
F->f_754 = (*(P450)rt_nil_check(F->f_754)).next;
}
F->result_ = (*(P439)rt_nil_check(F->s_755));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_declare_ctype_181(P448 t_180) {
  struct f_declare_ctype_181fr *F = rt_alloc(sizeof *F);
F->t_180 = t_180;
F->u_756 = NULL;
F->u_756 = g_all_types_477;
if ((((*(P448)rt_nil_check(F->t_180)).kind == ((rt_int)8LL)) && ((*(P448)rt_nil_check(F->t_180)).target == NULL))) {
f_finish_ptr_249(F->t_180);
if (((*(P448)rt_nil_check(F->t_180)).cname != NULL)) {
goto ret_;
}
}
if (((*(P448)rt_nil_check(F->t_180)).kind != ((rt_int)8LL))) {
while ((F->u_756 != NULL)) {
if ((((*(P448)rt_nil_check(F->u_756)).kind == (*(P448)rt_nil_check(F->t_180)).kind) && f_same_164(F->u_756, F->t_180))) {
(*(P448)rt_nil_check(F->t_180)).cname = (*(P448)rt_nil_check(F->u_756)).cname;
goto ret_;
}
F->u_756 = (*(P448)rt_nil_check(F->u_756)).next;
}
}
if ((((*(P448)rt_nil_check(F->t_180)).kind == ((rt_int)15LL)) && ((*(P448)rt_nil_check(F->t_180)).tparams == NULL))) {
(*(P448)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_177((*(P448)rt_nil_check(F->t_180)).under); b_; }));
goto ret_;
}
if (((*(P448)rt_nil_check(F->t_180)).kind == ((rt_int)6LL))) {
(*(P448)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P448)rt_nil_check(F->t_180)).kind == ((rt_int)15LL))) {
(*(P448)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((*(P448)rt_nil_check(F->t_180)).kind == ((rt_int)7LL))) {
(*(P448)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P448)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P448)rt_nil_check(F->t_180)).next = g_all_types_477;
g_all_types_477 = F->t_180;
if (((*(P448)rt_nil_check(F->t_180)).kind == ((rt_int)8LL))) {
F->target_757 = NULL;
F->target_757 = (*(P448)rt_nil_check(F->t_180)).target;
if (((*(P448)rt_nil_check(F->target_757)).kind == ((rt_int)7LL))) {
if (((*(P448)rt_nil_check(F->target_757)).cname == NULL)) {
(*(P448)rt_nil_check(F->target_757)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P448)rt_nil_check(F->target_757)).next = g_all_types_477;
g_all_types_477 = F->target_757;
f_put_27(g_out_types_479, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->target_757)).cname))), rt_str(" ", 1)), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->target_757)).cname))), rt_str(";", 1)); b_; }));
(*(P448)rt_nil_check(F->target_757)).forward = 1;
}
f_put_27(g_out_types_479, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->target_757)).cname))), rt_str(" *", 2)), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_479, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_177(F->target_757)), rt_str(" *", 2)), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P448)rt_nil_check(F->t_180)).kind == ((rt_int)6LL))) {
f_put_27(g_out_types_479, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_479, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_180)).cname))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_177((*(P448)rt_nil_check(F->t_180)).elem)), rt_str(" *p; };", 7)); b_; }));
} else if (((*(P448)rt_nil_check(F->t_180)).kind == ((rt_int)15LL))) {
F->p_758 = NULL;
F->p_758 = (*(P448)rt_nil_check(F->t_180)).tparams;
F->fs_759 = NULL;
F->fs_759 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_758 != NULL)) {
F->fs_759 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->fs_759)), rt_str("rt_int p_", 9)), f_lower_s_15(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_758)).name)))), rt_str("; ", 2)); b_; }));
F->p_758 = (*(P444)rt_nil_check(F->p_758)).next;
}
f_put_27(g_out_types_479, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_479, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_180)).cname))), rt_str(" {", 2)), (*(P439)rt_nil_check(F->fs_759))), f_ctype_177((*(P448)rt_nil_check(F->t_180)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_479, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
(*(P448)rt_nil_check(F->t_180)).defined = 1;
f_put_27(g_out_types_479, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_180)).cname))), rt_str(" { ", 3)), f_field_decls_179(F->t_180)), rt_str(" };", 3)); b_; }));
}
ret_:
  return;
}

static void f_init_ascii_182(void) {
  struct f_init_ascii_182fr *F = rt_alloc(sizeof *F);
F->names_760 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)));
F->head_761 = NULL;
F->tail_762 = NULL;
F->start_763 = ((rt_int)1LL);
{ rt_int lo765 = ((rt_int)1LL), hi766 = (F->names_760).len;
for (rt_int it767 = lo765; it767 <= hi766; it767++) {
F->i_764 = it767;
if ((rt_str_get(F->names_760, F->i_764) == 32)) {
F->lit_768 = NULL;
F->lit_768 = f_nn_48(((rt_int)4LL), ((rt_int)0LL));
(*(P444)rt_nil_check(F->lit_768)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice(F->names_760, F->start_763, rt_sub(F->i_764, ((rt_int)1LL))); b_; }));
f_append_52(&F->head_761, &F->tail_762, F->lit_768);
F->start_763 = rt_add(F->i_764, ((rt_int)1LL));
}
}
}
g_ty_ascii_506 = f_new_typ_157(((rt_int)4LL));
(*(P448)rt_nil_check(g_ty_ascii_506)).lits = F->head_761;
(*(P448)rt_nil_check(g_ty_ascii_506)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  return;
}

static rt_int f_lit_index_185(P444 lits_183, rstr *name_184) {
  struct f_lit_index_185fr *F = rt_alloc(sizeof *F);
F->lits_183 = lits_183;
F->name_184 = name_184;
F->i_769 = ((rt_int)0LL);
F->l_770 = NULL;
F->l_770 = F->lits_183;
while ((F->l_770 != NULL)) {
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->l_770)).name)), (*F->name_184))) {
F->result_ = F->i_769;
goto ret_;
}
F->i_769 = rt_add(F->i_769, ((rt_int)1LL));
F->l_770 = (*(P444)rt_nil_check(F->l_770)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P448 f_resolve_subtype_188(P444 st_186, P446 *c_187) {
  struct f_resolve_subtype_188fr *F = rt_alloc(sizeof *F);
F->st_186 = st_186;
F->c_187 = c_187;
F->c_187v = *F->c_187;
F->t_771 = NULL;
F->dummy_773 = NULL;
F->c_187v = f_new_cons_158();
{ rt_int sel774 = (*(P444)rt_nil_check(F->st_186)).kind;
if (0 || (sel774 == ((rt_int)70LL))) {
if (((*(P444)rt_nil_check(F->st_186)).a != NULL)) {
(*(P446)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380((*(P444)rt_nil_check(F->st_186)).a, g_ty_int_503, &F->dummy_773); b_; }));
(*(P446)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380((*(P444)rt_nil_check(F->st_186)).b, g_ty_int_503, &F->dummy_773); b_; }));
(*(P446)rt_nil_check(F->c_187v)).mlo = f_manifest_207((*(P444)rt_nil_check(F->st_186)).a, &F->ok_772);
(*(P446)rt_nil_check(F->c_187v)).hasm = F->ok_772;
(*(P446)rt_nil_check(F->c_187v)).mhi = f_manifest_207((*(P444)rt_nil_check(F->st_186)).b, &F->ok_772);
(*(P446)rt_nil_check(F->c_187v)).hasm = ((*(P446)rt_nil_check(F->c_187v)).hasm && F->ok_772);
}
F->result_ = g_ty_int_503;
goto ret_;
} else if (0 || (sel774 == ((rt_int)71LL))) {
F->result_ = g_ty_float_505;
goto ret_;
} else if (0 || (sel774 == ((rt_int)72LL))) {
F->t_771 = f_new_typ_157(((rt_int)4LL));
(*(P448)rt_nil_check(F->t_771)).lits = (*(P444)rt_nil_check(F->st_186)).a;
if (((*(P444)rt_nil_check(F->st_186)).b != NULL)) {
(*(P446)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380((*(P444)rt_nil_check(F->st_186)).b, F->t_771, &F->dummy_773); b_; }));
(*(P446)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380((*(P444)rt_nil_check(F->st_186)).c, F->t_771, &F->dummy_773); b_; }));
}
F->result_ = F->t_771;
goto ret_;
} else if (0 || (sel774 == ((rt_int)73LL))) {
F->t_771 = f_resolve_subtype_188((*(P444)rt_nil_check(F->st_186)).a, &F->c_187v);
if ((!f_same_164(F->t_771, g_ty_ascii_506))) {
f_fail_23((*(P444)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
F->c_187v = f_new_cons_158();
if (((*(P444)rt_nil_check(F->st_186)).b != NULL)) {
(*(P446)rt_nil_check(F->c_187v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380((*(P444)rt_nil_check(F->st_186)).b, g_ty_int_503, &F->dummy_773); b_; }));
}
F->result_ = g_ty_string_507;
goto ret_;
} else if (0 || (sel774 == ((rt_int)74LL))) {
if ((f_list_len_54((*(P444)rt_nil_check(F->st_186)).a) > ((rt_int)2LL))) {
f_fail_23((*(P444)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("arrays of more than two dimensions are not handled", 50); b_; }));
}
{
F->ic_775 = NULL;
F->ic2_776 = NULL;
F->ec_777 = NULL;
F->it_778 = NULL;
F->it_778 = f_resolve_subtype_188((*(P444)rt_nil_check(F->st_186)).a, &F->ic_775);
F->et_779 = NULL;
F->et_779 = f_resolve_subtype_188((*(P444)rt_nil_check(F->st_186)).b, &F->ec_777);
F->ic_775 = f_base_cons_169(F->it_778, F->ic_775);
F->t_771 = f_new_typ_157(((rt_int)6LL));
(*(P448)rt_nil_check(F->t_771)).idx = F->it_778;
(*(P448)rt_nil_check(F->t_771)).elem = F->et_779;
(*(P448)rt_nil_check(F->t_771)).elemcons = F->ec_777;
(*(P448)rt_nil_check(F->t_771)).elemst = (*(P444)rt_nil_check(F->st_186)).b;
if (((*(P446)rt_nil_check(F->ic_775)).lo != NULL)) {
(*(P446)rt_nil_check(F->c_187v)).lo = (*(P446)rt_nil_check(F->ic_775)).lo;
(*(P446)rt_nil_check(F->c_187v)).hi = (*(P446)rt_nil_check(F->ic_775)).hi;
} else if (((*(P448)rt_nil_check(f_base_of_166(F->it_778))).kind == ((rt_int)4LL))) {
(*(P446)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P446)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P448)rt_nil_check(f_base_of_166(F->it_778))).lits), ((rt_int)1LL))); b_; }));
}
(*(P446)rt_nil_check(F->c_187v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P446)rt_nil_check(F->c_187v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
if (((*(P444)rt_nil_check((*(P444)rt_nil_check(F->st_186)).a)).next != NULL)) {
(*(P448)rt_nil_check(F->t_771)).idx2 = f_resolve_subtype_188((*(P444)rt_nil_check((*(P444)rt_nil_check(F->st_186)).a)).next, &F->ic2_776);
if (((*(P446)rt_nil_check(F->ic2_776)).lo != NULL)) {
(*(P446)rt_nil_check(F->c_187v)).lo2 = (*(P446)rt_nil_check(F->ic2_776)).lo;
(*(P446)rt_nil_check(F->c_187v)).hi2 = (*(P446)rt_nil_check(F->ic2_776)).hi;
} else if (((*(P448)rt_nil_check((*(P448)rt_nil_check(F->t_771)).idx2)).kind == ((rt_int)4LL))) {
(*(P446)rt_nil_check(F->c_187v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P446)rt_nil_check(F->c_187v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P448)rt_nil_check((*(P448)rt_nil_check(F->t_771)).idx2)).lits), ((rt_int)1LL))); b_; }));
}
}
}
F->result_ = F->t_771;
goto ret_;
} else if (0 || (sel774 == ((rt_int)77LL))) {
F->t_771 = f_new_typ_157(((rt_int)16LL));
{
F->ec_780 = NULL;
(*(P448)rt_nil_check(F->t_771)).elem = f_resolve_subtype_188((*(P444)rt_nil_check(F->st_186)).a, &F->ec_780);
(*(P448)rt_nil_check(F->t_771)).elemcons = F->ec_780;
}
F->result_ = F->t_771;
goto ret_;
} else if (0 || (sel774 == ((rt_int)75LL))) {
F->t_771 = f_new_typ_157(((rt_int)7LL));
{
F->comp_781 = NULL;
F->comp_781 = (*(P444)rt_nil_check(F->st_186)).a;
F->tail_782 = NULL;
while ((F->comp_781 != NULL)) {
F->cc_783 = NULL;
F->f_784 = NULL;
{ R451 *cell785 = rt_alloc(sizeof(R451));
(*cell785).name = NULL;
(*cell785).t = NULL;
(*cell785).c = NULL;
(*cell785).st = NULL;
(*cell785).next = NULL;
F->f_784 = cell785;
}
(*(P450)rt_nil_check(F->f_784)).name = (*(P444)rt_nil_check(F->comp_781)).name;
(*(P450)rt_nil_check(F->f_784)).t = f_resolve_subtype_188((*(P444)rt_nil_check(F->comp_781)).a, &F->cc_783);
(*(P450)rt_nil_check(F->f_784)).c = F->cc_783;
(*(P450)rt_nil_check(F->f_784)).st = (*(P444)rt_nil_check(F->comp_781)).a;
if ((F->tail_782 == NULL)) {
(*(P448)rt_nil_check(F->t_771)).fields = F->f_784;
} else {
(*(P450)rt_nil_check(F->tail_782)).next = F->f_784;
}
F->tail_782 = F->f_784;
F->comp_781 = (*(P444)rt_nil_check(F->comp_781)).next;
}
}
F->result_ = F->t_771;
goto ret_;
} else if (0 || (sel774 == ((rt_int)79LL))) {
F->result_ = g_ty_file_509;
goto ret_;
} else if (0 || (sel774 == ((rt_int)78LL))) {
{
F->ec_786 = NULL;
F->t_771 = f_new_typ_157(((rt_int)12LL));
(*(P448)rt_nil_check(F->t_771)).elem = f_resolve_subtype_188((*(P444)rt_nil_check(F->st_186)).a, &F->ec_786);
(*(P448)rt_nil_check(F->t_771)).elemcons = F->ec_786;
if (((*(P444)rt_nil_check(F->st_186)).b != NULL)) {
(*(P446)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380((*(P444)rt_nil_check(F->st_186)).b, g_ty_int_503, &F->dummy_773); b_; }));
}
}
F->result_ = F->t_771;
goto ret_;
} else if (0 || (sel774 == ((rt_int)80LL))) {
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->st_186)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_504;
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->st_186)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_506;
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->st_186)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_511;
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->st_186)).name)), rt_str("LATCH", 5))) {
F->result_ = g_ty_latch_512;
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->st_186)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_513;
goto ret_;
}
{
F->y_787 = NULL;
F->y_787 = f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->st_186)).name)));
if ((F->y_787 == NULL)) {
f_fail_23((*(P444)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->st_186)).name))); b_; }));
}
if (((((*(P454)rt_nil_check(F->y_787)).kind == ((rt_int)5LL)) && ((*(P454)rt_nil_check(F->y_787)).t != NULL)) && ((*(P448)rt_nil_check((*(P454)rt_nil_check(F->y_787)).t)).kind == ((rt_int)15LL)))) {
F->result_ = f_new_type_200(F->y_787, F->st_186, &F->c_187v);
goto ret_;
}
if (((((*(P454)rt_nil_check(F->y_787)).kind == ((rt_int)6LL)) || ((*(P454)rt_nil_check(F->y_787)).kind == ((rt_int)5LL))) && ((*(P454)rt_nil_check(F->y_787)).t != NULL))) {
if (((*(P454)rt_nil_check(F->y_787)).c != NULL)) {
F->c_187v = (*(P454)rt_nil_check(F->y_787)).c;
}
F->result_ = (*(P454)rt_nil_check(F->y_787)).t;
goto ret_;
}
if (((((*(P454)rt_nil_check(F->y_787)).kind == ((rt_int)5LL)) && ((*(P454)rt_nil_check(F->y_787)).decl != NULL)) && ((*(P444)rt_nil_check((*(P454)rt_nil_check(F->y_787)).decl)).kind == ((rt_int)43LL)))) {
F->result_ = f_new_type_200(F->y_787, F->st_186, &F->c_187v);
goto ret_;
}
if ((((*(P454)rt_nil_check(F->y_787)).kind == ((rt_int)6LL)) || ((*(P454)rt_nil_check(F->y_787)).kind == ((rt_int)5LL)))) {
F->result_ = f_resolve_subtype_188((*(P454)rt_nil_check(F->y_787)).st, &F->c_187v);
goto ret_;
}
f_fail_23((*(P444)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->st_186)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_23((*(P444)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_187) = F->c_187v;
  return F->result_;
}

static int f_opened_190(P448 t_189) {
  struct f_opened_190fr *F = rt_alloc(sizeof *F);
F->t_189 = t_189;
F->c_788 = NULL;
F->c_788 = g_caps_491;
if (((((*(P448)rt_nil_check(F->t_189)).kind != ((rt_int)15LL)) || ((*(P448)rt_nil_check(F->t_189)).ocap == NULL)) || ((*(P444)rt_nil_check((*(P448)rt_nil_check(F->t_189)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_788 != NULL)) {
if (((*(P464)rt_nil_check(F->c_788)).d == (*(P448)rt_nil_check(F->t_189)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_788 = (*(P464)rt_nil_check(F->c_788)).next;
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
F->i_789 = ((rt_int)1LL);
if (((((*F->pat_192)).len == ((rt_int)0LL)) || (((*F->s_191)).len < ((*F->pat_192)).len))) {
F->result_ = (*F->s_191);
goto ret_;
}
while ((rt_sub(rt_add(F->i_789, ((*F->pat_192)).len), ((rt_int)1LL)) <= ((*F->s_191)).len)) {
if (rt_str_eq(rt_str_slice((*F->s_191), F->i_789, rt_sub(rt_add(F->i_789, ((*F->pat_192)).len), ((rt_int)1LL))), (*F->pat_192))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_191), ((rt_int)1LL), rt_sub(F->i_789, ((rt_int)1LL))), (*F->r_193)), f_replace_all_194(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_191), rt_add(F->i_789, ((*F->pat_192)).len), ((*F->s_191)).len); b_; }), &(*F->pat_192), &(*F->r_193)));
goto ret_;
}
F->i_789 = rt_add(F->i_789, ((rt_int)1LL));
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
F->l_790 = NULL;
F->l_790 = g_psub_493;
F->r_791 = NULL;
F->r_791 = f_mk_3(&(*F->s_195));
while ((F->l_790 != NULL)) {
F->r_791 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_194(&(*(P439)rt_nil_check(F->r_791)), &(*(P439)rt_nil_check((*(P456)rt_nil_check(F->l_790)).s)), &(*(P439)rt_nil_check((*(P456)rt_nil_check((*(P456)rt_nil_check(F->l_790)).next)).s))); b_; }));
F->l_790 = (*(P456)rt_nil_check((*(P456)rt_nil_check(F->l_790)).next)).next;
}
F->result_ = (*(P439)rt_nil_check(F->r_791));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P448 f_new_type_200(P454 y_197, P444 st_198, P446 *c_199) {
  struct f_new_type_200fr *F = rt_alloc(sizeof *F);
F->y_197 = y_197;
F->st_198 = st_198;
F->c_199 = c_199;
F->c_199v = *F->c_199;
F->d_792 = NULL;
F->d_792 = (*(P454)rt_nil_check(F->y_197)).decl;
F->p_793 = NULL;
F->uc_794 = NULL;
F->c_199v = f_new_cons_158();
if (((*(P454)rt_nil_check(F->y_197)).t == NULL)) {
(*(P454)rt_nil_check(F->y_197)).t = f_new_typ_157(((rt_int)15LL));
(*(P448)rt_nil_check((*(P454)rt_nil_check(F->y_197)).t)).name = (*(P454)rt_nil_check(F->y_197)).name;
(*(P448)rt_nil_check((*(P454)rt_nil_check(F->y_197)).t)).decl = F->d_792;
(*(P448)rt_nil_check((*(P454)rt_nil_check(F->y_197)).t)).tparams = (*(P444)rt_nil_check(F->d_792)).b;
if ((g_caps_491 != NULL)) {
(*(P448)rt_nil_check((*(P454)rt_nil_check(F->y_197)).t)).ocap = (*(P464)rt_nil_check(g_caps_491)).d;
}
f_open_scope_151();
F->p_793 = (*(P444)rt_nil_check(F->d_792)).b;
while ((F->p_793 != NULL)) {
F->z_795 = NULL;
F->z_795 = f_new_sym_155(((rt_int)2LL), (*(P444)rt_nil_check(F->p_793)).name);
(*(P454)rt_nil_check(F->z_795)).t = g_ty_int_503;
(*(P454)rt_nil_check(F->z_795)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_793)).name)))), rt_str("@", 1)); b_; }));
f_define_145(F->z_795, (*(P444)rt_nil_check(F->d_792)).line);
F->p_793 = (*(P444)rt_nil_check(F->p_793)).next;
}
(*(P448)rt_nil_check((*(P454)rt_nil_check(F->y_197)).t)).under = f_resolve_subtype_188((*(P444)rt_nil_check(F->d_792)).a, &F->uc_794);
(*(P448)rt_nil_check((*(P454)rt_nil_check(F->y_197)).t)).elemcons = F->uc_794;
f_close_scope_152();
}
(*(P446)rt_nil_check(F->c_199v)).args = (*(P444)rt_nil_check(F->st_198)).b;
F->result_ = (*(P454)rt_nil_check(F->y_197)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_199) = F->c_199v;
  return F->result_;
}

static void f_init_storage_204(rstr *lval_201, P448 t_202, P446 c_203) {
  struct f_init_storage_204fr *F = rt_alloc(sizeof *F);
F->lval_201 = lval_201;
F->t_202 = t_202;
F->c_203 = c_203;
if (((*(P448)rt_nil_check(F->t_202)).kind == ((rt_int)15LL))) {
F->p_796 = NULL;
F->p_796 = (*(P448)rt_nil_check(F->t_202)).tparams;
F->a_797 = NULL;
F->a_797 = (*(P446)rt_nil_check(F->c_203)).args;
F->uc_798 = NULL;
F->ut_799 = NULL;
F->at_800 = NULL;
if ((f_list_len_54(F->a_797) != f_list_len_54(F->p_796))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_202)).name))), rt_str(" needs ", 7)), f_itos_7(f_list_len_54(F->p_796))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_796 != NULL)) {
F->v_801 = rt_str_copy(f_gexpr_380(F->a_797, g_ty_int_503, &F->at_800));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p_", 3)), f_lower_s_15(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_796)).name)))), rt_str(" = ", 3)), F->v_801), rt_str(";", 1)); b_; }));
F->p_796 = (*(P444)rt_nil_check(F->p_796)).next;
F->a_797 = (*(P444)rt_nil_check(F->a_797)).next;
}
{
F->saved_802 = NULL;
F->saved_802 = g_psub_493;
F->p_796 = (*(P448)rt_nil_check(F->t_202)).tparams;
while ((F->p_796 != NULL)) {
F->l1_803 = NULL;
F->l2_804 = NULL;
{ R457 *cell805 = rt_alloc(sizeof(R457));
(*cell805).s = NULL;
(*cell805).next = NULL;
F->l1_803 = cell805;
}
{ R457 *cell806 = rt_alloc(sizeof(R457));
(*cell806).s = NULL;
(*cell806).next = NULL;
F->l2_804 = cell806;
}
(*(P456)rt_nil_check(F->l1_803)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_796)).name)))), rt_str("@", 1)); b_; }));
(*(P456)rt_nil_check(F->l2_804)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p_", 3)), f_lower_s_15(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_796)).name)))); b_; }));
(*(P456)rt_nil_check(F->l1_803)).next = F->l2_804;
(*(P456)rt_nil_check(F->l2_804)).next = g_psub_493;
g_psub_493 = F->l1_803;
F->p_796 = (*(P444)rt_nil_check(F->p_796)).next;
}
if (((*(P448)rt_nil_check(F->t_202)).tparams == NULL)) {
f_init_storage_204(&(*F->lval_201), (*(P448)rt_nil_check(F->t_202)).under, (*(P448)rt_nil_check(F->t_202)).elemcons);
} else {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_201), rt_str(".all", 4)); b_; }), (*(P448)rt_nil_check(F->t_202)).under, (*(P448)rt_nil_check(F->t_202)).elemcons);
}
g_psub_493 = F->saved_802;
}
} else if (((*(P448)rt_nil_check(F->t_202)).kind == ((rt_int)12LL))) {
if (((*(P446)rt_nil_check(F->c_203)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_201), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_201)), rt_str(", ", 2)), f_subst_196(&(*(P439)rt_nil_check((*(P446)rt_nil_check(F->c_203)).lo)))), rt_str(", sizeof(", 9)), f_ctype_177((*(P448)rt_nil_check(F->t_202)).elem)), rt_str("), ", 3)), f_mcopy_209((*(P448)rt_nil_check(F->t_202)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P448)rt_nil_check(F->t_202)).kind == ((rt_int)13LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_201)), rt_str(");", 2)); b_; }));
} else if (((*(P448)rt_nil_check(F->t_202)).kind == ((rt_int)14LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_201), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if (((*(P448)rt_nil_check(F->t_202)).kind == ((rt_int)8LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_201), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P448)rt_nil_check(F->t_202)).kind == ((rt_int)5LL))) {
if (((*(P446)rt_nil_check(F->c_203)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(" = rt_str_new(", 14)), f_subst_196(&(*(P439)rt_nil_check((*(P446)rt_nil_check(F->c_203)).slen)))), rt_str(");", 2)); b_; }));
} else if (((*(P448)rt_nil_check(F->t_202)).kind == ((rt_int)6LL))) {
if (((*(P446)rt_nil_check(F->c_203)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".lo = ", 6)), f_subst_196(&(*(P439)rt_nil_check((*(P446)rt_nil_check(F->c_203)).lo)))), rt_str("; ", 2)), (*F->lval_201)), rt_str(".hi = ", 6)), f_subst_196(&(*(P439)rt_nil_check((*(P446)rt_nil_check(F->c_203)).hi)))), rt_str("; ", 2)), (*F->lval_201)), rt_str(".lo2 = ", 7)), f_subst_196(&(*(P439)rt_nil_check((*(P446)rt_nil_check(F->c_203)).lo2)))), rt_str("; ", 2)), (*F->lval_201)), rt_str(".hi2 = ", 7)), f_subst_196(&(*(P439)rt_nil_check((*(P446)rt_nil_check(F->c_203)).hi2)))), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_177((*(P448)rt_nil_check(F->t_202)).elem)), rt_str(") * (size_t)RT_CNT(", 19)), (*F->lval_201)), rt_str("));", 3)); b_; }));
if ((((((((((*(P448)rt_nil_check((*(P448)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)5LL)) || ((*(P448)rt_nil_check((*(P448)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)6LL))) || ((*(P448)rt_nil_check((*(P448)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)7LL))) || ((*(P448)rt_nil_check((*(P448)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)15LL))) || ((*(P448)rt_nil_check((*(P448)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)8LL))) || ((*(P448)rt_nil_check((*(P448)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)12LL))) || ((*(P448)rt_nil_check((*(P448)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)13LL))) || ((*(P448)rt_nil_check((*(P448)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)14LL)))) {
F->i_807 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_807), rt_str(" = 0; ", 6)), F->i_807), rt_str(" < RT_CNT(", 10)), (*F->lval_201)), rt_str("); ", 3)), F->i_807), rt_str("++) {", 5)); b_; }));
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p[", 3)), F->i_807), rt_str("]", 1)); b_; }), (*(P448)rt_nil_check(F->t_202)).elem, (*(P448)rt_nil_check(F->t_202)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P448)rt_nil_check(F->t_202)).kind == ((rt_int)7LL))) {
F->f_808 = NULL;
F->f_808 = (*(P448)rt_nil_check(F->t_202)).fields;
while ((F->f_808 != NULL)) {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".", 1)), f_field_c_17(&(*(P439)rt_nil_check((*(P450)rt_nil_check(F->f_808)).name)))); b_; }), (*(P450)rt_nil_check(F->f_808)).t, (*(P450)rt_nil_check(F->f_808)).c);
F->f_808 = (*(P450)rt_nil_check(F->f_808)).next;
}
}
ret_:
  return;
}

static rt_int f_manifest_207(P444 e_205, int *ok_206) {
  struct f_manifest_207fr *F = rt_alloc(sizeof *F);
F->e_205 = e_205;
F->ok_206 = ok_206;
F->ok_206v = *F->ok_206;
F->ok_206v = 0;
if (((*(P444)rt_nil_check(F->e_205)).kind == ((rt_int)1LL))) {
F->ok_206v = 1;
F->result_ = (*(P444)rt_nil_check(F->e_205)).ival;
goto ret_;
} else if (((*(P444)rt_nil_check(F->e_205)).kind == ((rt_int)17LL))) {
F->result_ = f_manifest_207((*(P444)rt_nil_check(F->e_205)).a, &F->ok_206v);
goto ret_;
} else if ((((*(P444)rt_nil_check(F->e_205)).kind == ((rt_int)8LL)) && rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_205)).name)), rt_str("-", 1)))) {
F->a_809 = f_manifest_207((*(P444)rt_nil_check(F->e_205)).a, &F->ok_206v);
F->result_ = rt_neg(F->a_809);
goto ret_;
} else if ((((*(P444)rt_nil_check(F->e_205)).kind == ((rt_int)9LL)) && ((rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_205)).name)), rt_str("+", 1)) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_205)).name)), rt_str("-", 1))) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_205)).name)), rt_str("*", 1))))) {
F->a_809 = f_manifest_207((*(P444)rt_nil_check(F->e_205)).a, &F->ok_206v);
F->b_810 = f_manifest_207((*(P444)rt_nil_check(F->e_205)).b, &F->ok2_811);
F->ok_206v = (F->ok_206v && F->ok2_811);
if ((!F->ok_206v)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_205)).name)), rt_str("+", 1))) {
F->result_ = rt_add(F->a_809, F->b_810);
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_205)).name)), rt_str("-", 1))) {
F->result_ = rt_sub(F->a_809, F->b_810);
goto ret_;
}
F->result_ = rt_mul(F->a_809, F->b_810);
goto ret_;
} else if (((*(P444)rt_nil_check(F->e_205)).kind == ((rt_int)7LL))) {
F->y_812 = NULL;
F->y_812 = f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_205)).name)));
if ((((F->y_812 != NULL) && ((*(P454)rt_nil_check(F->y_812)).kind == ((rt_int)2LL))) && (*(P454)rt_nil_check(F->y_812)).hasmv)) {
F->ok_206v = 1;
F->result_ = (*(P454)rt_nil_check(F->y_812)).mvalue;
goto ret_;
}
}
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_206) = F->ok_206v;
  return F->result_;
}

static rstr f_mcopy_209(P448 t_208) {
  struct f_mcopy_209fr *F = rt_alloc(sizeof *F);
F->t_208 = t_208;
F->ct_813 = rt_str_copy(f_ctype_177(F->t_208));
F->name_814 = rt_str_new(rt_add((F->ct_813).len, ((rt_int)3LL)));
rt_str_assign(&F->name_814, rt_str_cat(rt_str("mc_", 3), F->ct_813));
F->l_815 = NULL;
if ((!f_seen_name_230(g_mcopies_502, &F->name_814))) {
{ R457 *cell816 = rt_alloc(sizeof(R457));
(*cell816).s = NULL;
(*cell816).next = NULL;
F->l_815 = cell816;
}
(*(P456)rt_nil_check(F->l_815)).s = f_mk_3(&F->name_814);
(*(P456)rt_nil_check(F->l_815)).next = g_mcopies_502;
g_mcopies_502 = F->l_815;
f_put_27(g_out_protos_481, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_814), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_483, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_814), rt_str("(void *d, const void *s) { *(", 29)), F->ct_813), rt_str(" *)d = ", 7)), f_copy_code_219(F->t_208, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_813), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_814;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_composite_211(P448 t_210) {
  struct f_composite_211fr *F = rt_alloc(sizeof *F);
F->t_210 = t_210;
F->result_ = ((((*(P448)rt_nil_check(F->t_210)).kind == ((rt_int)6LL)) || ((*(P448)rt_nil_check(F->t_210)).kind == ((rt_int)7LL))) || (((*(P448)rt_nil_check(F->t_210)).kind == ((rt_int)15LL)) && ((*(P448)rt_nil_check(F->t_210)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_assign_code_216(rstr *lval_212, P448 t_213, rstr *v_214, P446 c_215) {
  struct f_assign_code_216fr *F = rt_alloc(sizeof *F);
F->lval_212 = lval_212;
F->t_213 = t_213;
F->v_214 = v_214;
F->c_215 = c_215;
if ((((*(P448)rt_nil_check(F->t_213)).kind == ((rt_int)15LL)) && ((*(P448)rt_nil_check(F->t_213)).tparams == NULL))) {
F->result_ = f_assign_code_216(&(*F->lval_212), (*(P448)rt_nil_check(F->t_213)).under, &(*F->v_214), F->c_215);
goto ret_;
}
if (f_composite_211(F->t_213)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_177(F->t_213)), rt_str("(&", 2)), (*F->lval_212)), rt_str(", ", 2)), (*F->v_214)), rt_str(");", 2));
goto ret_;
}
if (((*(P448)rt_nil_check(F->t_213)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_212)), rt_str(", ", 2)), (*F->v_214)), rt_str(");", 2));
goto ret_;
} else if ((((*(P448)rt_nil_check(F->t_213)).kind == ((rt_int)6LL)) || ((*(P448)rt_nil_check(F->t_213)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_177(F->t_213)), rt_str("(&", 2)), (*F->lval_212)), rt_str(", ", 2)), (*F->v_214)), rt_str(");", 2));
goto ret_;
} else if (((((*(P448)rt_nil_check(F->t_213)).kind == ((rt_int)1LL)) && (F->c_215 != NULL)) && (*(P446)rt_nil_check(F->c_215)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_212), rt_str(" = rt_range(", 12)), (*F->v_214)), rt_str(", ", 2)), f_itos_7((*(P446)rt_nil_check(F->c_215)).mlo)), rt_str(", ", 2)), f_itos_7((*(P446)rt_nil_check(F->c_215)).mhi)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_212), rt_str(" = ", 3)), (*F->v_214)), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_copy_code_219(P448 t_217, rstr *v_218) {
  struct f_copy_code_219fr *F = rt_alloc(sizeof *F);
F->t_217 = t_217;
F->v_218 = v_218;
if ((((*(P448)rt_nil_check(F->t_217)).kind == ((rt_int)15LL)) && ((*(P448)rt_nil_check(F->t_217)).tparams == NULL))) {
F->result_ = f_copy_code_219((*(P448)rt_nil_check(F->t_217)).under, &(*F->v_218));
goto ret_;
}
if (f_composite_211(F->t_217)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_177(F->t_217)), rt_str("(", 1)), (*F->v_218)), rt_str(")", 1));
goto ret_;
}
if (((*(P448)rt_nil_check(F->t_217)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_218)), rt_str(")", 1));
goto ret_;
} else if ((((*(P448)rt_nil_check(F->t_217)).kind == ((rt_int)6LL)) || ((*(P448)rt_nil_check(F->t_217)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_177(F->t_217)), rt_str("(", 1)), (*F->v_218)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_218);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_eq_code_223(P448 t_220, rstr *a_221, rstr *b_222) {
  struct f_eq_code_223fr *F = rt_alloc(sizeof *F);
F->t_220 = t_220;
F->a_221 = a_221;
F->b_222 = b_222;
if ((((*(P448)rt_nil_check(F->t_220)).kind == ((rt_int)15LL)) && ((*(P448)rt_nil_check(F->t_220)).tparams == NULL))) {
F->result_ = f_eq_code_223((*(P448)rt_nil_check(F->t_220)).under, &(*F->a_221), &(*F->b_222));
goto ret_;
}
if (f_composite_211(F->t_220)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_177(F->t_220)), rt_str("(", 1)), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
if (((*(P448)rt_nil_check(F->t_220)).kind == ((rt_int)16LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
if (((*(P448)rt_nil_check(F->t_220)).kind == ((rt_int)14LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_221)), rt_str(" == ", 4)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
if (((*(P448)rt_nil_check(F->t_220)).kind == ((rt_int)12LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_221)), rt_str(" == ", 4)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
if (((*(P448)rt_nil_check(F->t_220)).kind == ((rt_int)13LL))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P448)rt_nil_check(F->t_220)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
} else if ((((*(P448)rt_nil_check(F->t_220)).kind == ((rt_int)6LL)) || ((*(P448)rt_nil_check(F->t_220)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_177(F->t_220)), rt_str("(", 1)), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_221)), rt_str(" == ", 4)), (*F->b_222)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_elem_assign_227(rstr *lval_224, P448 t_225, rstr *v_226) {
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

static int f_seen_name_230(P456 l_228, rstr *s_229) {
  struct f_seen_name_230fr *F = rt_alloc(sizeof *F);
F->l_228 = l_228;
F->s_229 = s_229;
F->p_817 = NULL;
F->p_817 = F->l_228;
while ((F->p_817 != NULL)) {
if (rt_str_eq((*(P439)rt_nil_check((*(P456)rt_nil_check(F->p_817)).s)), (*F->s_229))) {
F->result_ = 1;
goto ret_;
}
F->p_817 = (*(P456)rt_nil_check(F->p_817)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_emit_helpers_231(void) {
  struct f_emit_helpers_231fr *F = rt_alloc(sizeof *F);
F->order_818 = NULL;
F->t_819 = NULL;
F->t_819 = g_all_types_477;
F->done_820 = NULL;
while ((F->t_819 != NULL)) {
if ((f_composite_211(F->t_819) && (!f_seen_name_230(F->done_820, &(*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_819)).cname)))))) {
F->l_821 = NULL;
F->c_822 = rt_str_new(((*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_819)).cname))).len);
rt_str_assign(&F->c_822, (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_819)).cname)));
{ R457 *cell823 = rt_alloc(sizeof(R457));
(*cell823).s = NULL;
(*cell823).next = NULL;
F->l_821 = cell823;
}
(*(P456)rt_nil_check(F->l_821)).s = (*(P448)rt_nil_check(F->t_819)).cname;
(*(P456)rt_nil_check(F->l_821)).next = F->done_820;
F->done_820 = F->l_821;
f_put_27(g_out_helpers_480, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_822), rt_str("(", 1)), F->c_822), rt_str(" *d, ", 5)), F->c_822), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_480, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_822), rt_str(" cp_", 4)), F->c_822), rt_str("(", 1)), F->c_822), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_480, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_822), rt_str("(", 1)), F->c_822), rt_str(" a, ", 4)), F->c_822), rt_str(" b);", 4)); b_; }));
f_helper_bodies_233(F->t_819);
}
F->t_819 = (*(P448)rt_nil_check(F->t_819)).next;
}
ret_:
  return;
}

static void f_helper_bodies_233(P448 t_232) {
  struct f_helper_bodies_233fr *F = rt_alloc(sizeof *F);
F->t_232 = t_232;
F->c_824 = rt_str_new(((*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_232)).cname))).len);
rt_str_assign(&F->c_824, (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_232)).cname)));
F->b_825 = NULL;
F->b_825 = g_out_funcs_483;
if (((*(P448)rt_nil_check(F->t_232)).kind == ((rt_int)6LL))) {
F->e_826 = NULL;
F->e_826 = (*(P448)rt_nil_check(F->t_232)).elem;
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_824), rt_str("(", 1)), F->c_824), rt_str(" *d, ", 5)), F->c_824), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, ", 99), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), f_elem_assign_227(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_824), rt_str(" cp_", 4)), F->c_824), rt_str("(", 1)), F->c_824), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_824), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_177(F->e_826)), rt_str(") * (size_t)RT_CNT(s));", 23)); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), f_copy_code_219(F->e_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_824), rt_str("(", 1)), F->c_824), rt_str(" a, ", 4)), F->c_824), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;", 77); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), f_eq_code_223(F->e_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P448)rt_nil_check(F->t_232)).kind == ((rt_int)15LL))) {
F->p_827 = NULL;
F->p_827 = (*(P448)rt_nil_check(F->t_232)).tparams;
F->pc_828 = NULL;
F->pc_828 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->p_827 != NULL)) {
F->pc_828 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->pc_828)), rt_str(" || d->p_", 9)), f_lower_s_15(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_827)).name)))), rt_str(" != s.p_", 8)), f_lower_s_15(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_827)).name)))); b_; }));
F->p_827 = (*(P444)rt_nil_check(F->p_827)).next;
}
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_824), rt_str("(", 1)), F->c_824), rt_str(" *d, ", 5)), F->c_824), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P439)rt_nil_check(F->pc_828))), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("constraint", 10)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_227(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P448)rt_nil_check(F->t_232)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_824), rt_str(" cp_", 4)), F->c_824), rt_str("(", 1)), F->c_824), rt_str(" s) { s.all = ", 14)), f_copy_code_219((*(P448)rt_nil_check(F->t_232)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_824), rt_str("(", 1)), F->c_824), rt_str(" a, ", 4)), F->c_824), rt_str(" b) { return ", 13)), f_eq_code_223((*(P448)rt_nil_check(F->t_232)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else {
F->f_829 = NULL;
F->f_829 = (*(P448)rt_nil_check(F->t_232)).fields;
F->conds_830 = NULL;
F->conds_830 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_824), rt_str("(", 1)), F->c_824), rt_str(" *d, ", 5)), F->c_824), rt_str(" s) {", 5)); b_; }));
while ((F->f_829 != NULL)) {
F->fn_831 = rt_str_copy(f_field_c_17(&(*(P439)rt_nil_check((*(P450)rt_nil_check(F->f_829)).name))));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_227(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_831); b_; }), (*(P450)rt_nil_check(F->f_829)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_831); b_; }))); b_; }));
F->f_829 = (*(P450)rt_nil_check(F->f_829)).next;
}
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_824), rt_str(" cp_", 4)), F->c_824), rt_str("(", 1)), F->c_824), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_824), rt_str(" d = s;", 7)); b_; }));
F->f_829 = (*(P448)rt_nil_check(F->t_232)).fields;
while ((F->f_829 != NULL)) {
F->fn_832 = rt_str_copy(f_field_c_17(&(*(P439)rt_nil_check((*(P450)rt_nil_check(F->f_829)).name))));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_832), rt_str(" = ", 3)), f_copy_code_219((*(P450)rt_nil_check(F->f_829)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_832); b_; }))), rt_str(";", 1)); b_; }));
F->conds_830 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->conds_830)), rt_str(" && ", 4)), f_eq_code_223((*(P450)rt_nil_check(F->f_829)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_832); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_832); b_; }))); b_; }));
F->f_829 = (*(P450)rt_nil_check(F->f_829)).next;
}
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_824), rt_str("(", 1)), F->c_824), rt_str(" a, ", 4)), F->c_824), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P439)rt_nil_check(F->conds_830))), rt_str(";", 1)); b_; }));
f_put_27(F->b_825, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_declare_body_235(P444 elems_234) {
  struct f_declare_body_235fr *F = rt_alloc(sizeof *F);
F->elems_234 = elems_234;
F->e_833 = NULL;
F->e_833 = F->elems_234;
while ((F->e_833 != NULL)) {
if ((((*(P444)rt_nil_check(F->e_833)).kind == ((rt_int)41LL)) && ((*(P444)rt_nil_check(F->e_833)).flag == ((rt_int)0LL)))) {
f_manifest_const_237(F->e_833);
} else if (((*(P444)rt_nil_check(F->e_833)).kind == ((rt_int)47LL))) {
f_gen_capsule_245(F->e_833);
} else if (((*(P444)rt_nil_check(F->e_833)).kind == ((rt_int)48LL))) {
f_gen_expose_247(F->e_833);
} else if (((*(P444)rt_nil_check(F->e_833)).kind == ((rt_int)49LL))) {
F->y_834 = NULL;
F->y_834 = f_new_sym_155(((rt_int)7LL), (*(P444)rt_nil_check(F->e_833)).name);
(*(P454)rt_nil_check(F->y_834)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_833)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_145(F->y_834, (*(P444)rt_nil_check(F->e_833)).line);
f_put_27(g_out_globals_482, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_834)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_485, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_834)).cname))), rt_str(" = rt_exc(", 10)), f_q_18()), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_833)).name))), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P444)rt_nil_check(F->e_833)).kind == ((rt_int)42LL))) {
F->y_835 = NULL;
F->y_835 = f_new_sym_155(((rt_int)6LL), (*(P444)rt_nil_check(F->e_833)).name);
(*(P454)rt_nil_check(F->y_835)).st = (*(P444)rt_nil_check(F->e_833)).a;
f_define_145(F->y_835, (*(P444)rt_nil_check(F->e_833)).line);
} else if (((*(P444)rt_nil_check(F->e_833)).kind == ((rt_int)44LL))) {
F->y_836 = NULL;
F->y_836 = f_new_sym_155(((rt_int)5LL), (*(P444)rt_nil_check(F->e_833)).name);
F->t_837 = NULL;
F->t_837 = f_new_typ_157(((rt_int)8LL));
(*(P448)rt_nil_check(F->t_837)).name = (*(P444)rt_nil_check(F->e_833)).name;
(*(P448)rt_nil_check(F->t_837)).decl = F->e_833;
(*(P454)rt_nil_check(F->y_836)).t = F->t_837;
f_define_145(F->y_836, (*(P444)rt_nil_check(F->e_833)).line);
} else if (((*(P444)rt_nil_check(F->e_833)).kind == ((rt_int)43LL))) {
F->y_838 = NULL;
F->y_838 = f_new_sym_155(((rt_int)5LL), (*(P444)rt_nil_check(F->e_833)).name);
(*(P454)rt_nil_check(F->y_838)).st = (*(P444)rt_nil_check(F->e_833)).a;
(*(P454)rt_nil_check(F->y_838)).decl = F->e_833;
f_define_145(F->y_838, (*(P444)rt_nil_check(F->e_833)).line);
}
F->e_833 = (*(P444)rt_nil_check(F->e_833)).next;
}
F->e_833 = F->elems_234;
while ((F->e_833 != NULL)) {
if (((((*(P444)rt_nil_check(F->e_833)).kind == ((rt_int)45LL)) || ((*(P444)rt_nil_check(F->e_833)).kind == ((rt_int)46LL))) || ((*(P444)rt_nil_check(F->e_833)).kind == ((rt_int)50LL)))) {
f_declare_subprogram_251(F->e_833);
} else if (((*(P444)rt_nil_check(F->e_833)).kind == ((rt_int)51LL))) {
F->g_839 = NULL;
F->g_839 = f_new_sym_155(((rt_int)10LL), (*(P444)rt_nil_check(F->e_833)).name);
(*(P454)rt_nil_check(F->g_839)).decl = F->e_833;
(*(P454)rt_nil_check(F->g_839)).level = g_cur_level_489;
f_define_145(F->g_839, (*(P444)rt_nil_check(F->e_833)).line);
}
F->e_833 = (*(P444)rt_nil_check(F->e_833)).next;
}
ret_:
  return;
}

static void f_manifest_const_237(P444 d_236) {
  struct f_manifest_const_237fr *F = rt_alloc(sizeof *F);
F->d_236 = d_236;
F->y_842 = NULL;
F->c_843 = NULL;
if (((*(P444)rt_nil_check(F->d_236)).a != NULL)) {
if ((((*(P444)rt_nil_check((*(P444)rt_nil_check(F->d_236)).a)).kind != ((rt_int)70LL)) || ((*(P444)rt_nil_check((*(P444)rt_nil_check(F->d_236)).a)).a != NULL))) {
goto ret_;
}
}
F->v_841 = f_manifest_207((*(P444)rt_nil_check(F->d_236)).b, &F->ok_840);
if ((!F->ok_840)) {
goto ret_;
}
(*(P444)rt_nil_check(F->d_236)).flag = ((rt_int)1LL);
F->y_842 = f_new_sym_155(((rt_int)2LL), (*(P444)rt_nil_check(F->d_236)).name);
(*(P454)rt_nil_check(F->y_842)).t = g_ty_int_503;
(*(P454)rt_nil_check(F->y_842)).c = f_new_cons_158();
(*(P454)rt_nil_check(F->y_842)).mvalue = F->v_841;
(*(P454)rt_nil_check(F->y_842)).hasmv = 1;
(*(P454)rt_nil_check(F->y_842)).ro_flag = 1;
(*(P454)rt_nil_check(F->y_842)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), f_itos_7(F->v_841)), rt_str("LL)", 3)); b_; }));
f_define_145(F->y_842, (*(P444)rt_nil_check(F->d_236)).line);
ret_:
  return;
}

static int f_exported_241(P444 d_238, rstr *name_239, int *ro_240) {
  struct f_exported_241fr *F = rt_alloc(sizeof *F);
F->d_238 = d_238;
F->name_239 = name_239;
F->ro_240 = ro_240;
F->ro_240v = *F->ro_240;
F->p_844 = NULL;
F->p_844 = (*(P444)rt_nil_check(F->d_238)).a;
F->ro_240v = 0;
if (((*(P444)rt_nil_check(F->d_238)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_844 != NULL)) {
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_844)).name)), (*F->name_239))) {
F->ro_240v = ((*(P444)rt_nil_check(F->p_844)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_844 = (*(P444)rt_nil_check(F->p_844)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ro_240) = F->ro_240v;
  return F->result_;
}

static P454 f_copy_sym_243(P454 y_242) {
  struct f_copy_sym_243fr *F = rt_alloc(sizeof *F);
F->y_242 = y_242;
F->z_845 = NULL;
{ R455 *cell846 = rt_alloc(sizeof(R455));
(*cell846).name = NULL;
(*cell846).t = NULL;
(*cell846).c = NULL;
(*cell846).access = NULL;
(*cell846).cname = NULL;
(*cell846).st = NULL;
(*cell846).decl = NULL;
(*cell846).params = NULL;
(*cell846).result = NULL;
(*cell846).members = NULL;
(*cell846).mnext = NULL;
(*cell846).binds = NULL;
(*cell846).insts = NULL;
(*cell846).chain = NULL;
(*cell846).stack = NULL;
F->z_845 = cell846;
}
(*(P454)rt_nil_check(F->z_845)).kind = (*(P454)rt_nil_check(F->y_242)).kind;
(*(P454)rt_nil_check(F->z_845)).name = (*(P454)rt_nil_check(F->y_242)).name;
(*(P454)rt_nil_check(F->z_845)).t = (*(P454)rt_nil_check(F->y_242)).t;
(*(P454)rt_nil_check(F->z_845)).c = (*(P454)rt_nil_check(F->y_242)).c;
(*(P454)rt_nil_check(F->z_845)).access = (*(P454)rt_nil_check(F->y_242)).access;
(*(P454)rt_nil_check(F->z_845)).cname = (*(P454)rt_nil_check(F->y_242)).cname;
(*(P454)rt_nil_check(F->z_845)).ro_flag = (*(P454)rt_nil_check(F->y_242)).ro_flag;
(*(P454)rt_nil_check(F->z_845)).mvalue = (*(P454)rt_nil_check(F->y_242)).mvalue;
(*(P454)rt_nil_check(F->z_845)).hasmv = (*(P454)rt_nil_check(F->y_242)).hasmv;
(*(P454)rt_nil_check(F->z_845)).st = (*(P454)rt_nil_check(F->y_242)).st;
(*(P454)rt_nil_check(F->z_845)).decl = (*(P454)rt_nil_check(F->y_242)).decl;
(*(P454)rt_nil_check(F->z_845)).params = (*(P454)rt_nil_check(F->y_242)).params;
(*(P454)rt_nil_check(F->z_845)).result = (*(P454)rt_nil_check(F->y_242)).result;
(*(P454)rt_nil_check(F->z_845)).level = (*(P454)rt_nil_check(F->y_242)).level;
(*(P454)rt_nil_check(F->z_845)).byref = (*(P454)rt_nil_check(F->y_242)).byref;
(*(P454)rt_nil_check(F->z_845)).members = (*(P454)rt_nil_check(F->y_242)).members;
F->result_ = F->z_845;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_gen_capsule_245(P444 d_244) {
  struct f_gen_capsule_245fr *F = rt_alloc(sizeof *F);
F->d_244 = d_244;
F->y_847 = NULL;
F->y_847 = f_new_sym_155(((rt_int)8LL), (*(P444)rt_nil_check(F->d_244)).name);
F->cr_848 = NULL;
F->ctx_849 = NULL;
F->m_850 = NULL;
F->p_851 = NULL;
F->p_851 = (*(P444)rt_nil_check(F->d_244)).a;
(*(P454)rt_nil_check(F->y_847)).decl = F->d_244;
{ R465 *cell853 = rt_alloc(sizeof(R465));
(*cell853).d = NULL;
(*cell853).next = NULL;
F->cr_848 = cell853;
}
(*(P464)rt_nil_check(F->cr_848)).d = F->d_244;
(*(P464)rt_nil_check(F->cr_848)).next = g_caps_491;
g_caps_491 = F->cr_848;
f_open_scope_151();
{ R469 *cell854 = rt_alloc(sizeof(R469));
(*cell854).imps = NULL;
(*cell854).next = NULL;
F->ctx_849 = cell854;
}
(*(P468)rt_nil_check(F->ctx_849)).depth = g_depth_475;
(*(P468)rt_nil_check(F->ctx_849)).imps = (*(P444)rt_nil_check(F->d_244)).d;
(*(P468)rt_nil_check(F->ctx_849)).all_imp = ((*(P444)rt_nil_check(F->d_244)).flag >= ((rt_int)2LL));
(*(P468)rt_nil_check(F->ctx_849)).next = g_fctx_490;
g_fctx_490 = F->ctx_849;
f_declare_body_235((*(P444)rt_nil_check(F->d_244)).c);
f_capsule_elements_278((*(P444)rt_nil_check(F->d_244)).c);
{
F->w_855 = NULL;
{ R467 *cell856 = rt_alloc(sizeof(R467));
(*cell856).d = NULL;
(*cell856).w = NULL;
(*cell856).next = NULL;
F->w_855 = cell856;
}
(*(P466)rt_nil_check(F->w_855)).d = F->d_244;
(*(P466)rt_nil_check(F->w_855)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_274((*(P444)rt_nil_check(F->d_244)).c); b_; }));
(*(P466)rt_nil_check(F->w_855)).next = g_cap_waits_492;
g_cap_waits_492 = F->w_855;
}
g_fctx_490 = (*(P468)rt_nil_check(g_fctx_490)).next;
F->m_850 = g_scope_stack_476;
while (((F->m_850 != NULL) && ((*(P454)rt_nil_check(F->m_850)).depth == g_depth_475))) {
if ((((((*(P454)rt_nil_check(F->m_850)).kind == ((rt_int)5LL)) && ((*(P454)rt_nil_check(F->m_850)).t == NULL)) && ((*(P454)rt_nil_check(F->m_850)).decl != NULL)) && ((*(P444)rt_nil_check((*(P454)rt_nil_check(F->m_850)).decl)).kind == ((rt_int)43LL)))) {
(*(P454)rt_nil_check(F->m_850)).t = f_new_type_200(F->m_850, f_nn_48(((rt_int)80LL), (*(P444)rt_nil_check(F->d_244)).line), &(*(P454)rt_nil_check(F->m_850)).c);
} else if (((((*(P454)rt_nil_check(F->m_850)).kind == ((rt_int)5LL)) || ((*(P454)rt_nil_check(F->m_850)).kind == ((rt_int)6LL))) && ((*(P454)rt_nil_check(F->m_850)).t == NULL))) {
(*(P454)rt_nil_check(F->m_850)).t = f_resolve_subtype_188((*(P454)rt_nil_check(F->m_850)).st, &(*(P454)rt_nil_check(F->m_850)).c);
} else if ((((*(P454)rt_nil_check(F->m_850)).kind == ((rt_int)5LL)) && ((*(P448)rt_nil_check((*(P454)rt_nil_check(F->m_850)).t)).kind == ((rt_int)8LL)))) {
f_finish_ptr_249((*(P454)rt_nil_check(F->m_850)).t);
}
F->m_850 = (*(P454)rt_nil_check(F->m_850)).stack;
}
F->m_850 = g_scope_stack_476;
while (((F->m_850 != NULL) && ((*(P454)rt_nil_check(F->m_850)).depth == g_depth_475))) {
if (f_exported_241(F->d_244, &(*(P439)rt_nil_check((*(P454)rt_nil_check(F->m_850)).name)), &F->ro_852)) {
F->z_857 = NULL;
F->z_857 = f_copy_sym_243(F->m_850);
if (F->ro_852) {
(*(P454)rt_nil_check(F->z_857)).ro_flag = 1;
}
(*(P454)rt_nil_check(F->z_857)).mnext = (*(P454)rt_nil_check(F->y_847)).members;
(*(P454)rt_nil_check(F->y_847)).members = F->z_857;
}
F->m_850 = (*(P454)rt_nil_check(F->m_850)).stack;
}
while ((F->p_851 != NULL)) {
if (((f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_851)).name))) == NULL) || ((*(P454)rt_nil_check(f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_851)).name))))).depth != g_depth_475))) {
f_fail_23((*(P444)rt_nil_check(F->d_244)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_851)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->d_244)).name))); b_; }));
}
F->p_851 = (*(P444)rt_nil_check(F->p_851)).next;
}
f_close_scope_152();
g_caps_491 = (*(P464)rt_nil_check(g_caps_491)).next;
f_define_145(F->y_847, (*(P444)rt_nil_check(F->d_244)).line);
ret_:
  return;
}

static void f_gen_expose_247(P444 d_246) {
  struct f_gen_expose_247fr *F = rt_alloc(sizeof *F);
F->d_246 = d_246;
F->y_858 = NULL;
F->y_858 = f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->d_246)).name)));
F->m_859 = NULL;
F->p_860 = NULL;
F->p_860 = (*(P444)rt_nil_check(F->d_246)).a;
if (((F->y_858 == NULL) || ((*(P454)rt_nil_check(F->y_858)).kind != ((rt_int)8LL)))) {
f_fail_23((*(P444)rt_nil_check(F->d_246)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->d_246)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if (((*(P444)rt_nil_check(F->d_246)).ival == ((rt_int)1LL))) {
F->m_859 = (*(P454)rt_nil_check(F->y_858)).members;
while ((F->m_859 != NULL)) {
f_define_145(f_copy_sym_243(F->m_859), (*(P444)rt_nil_check(F->d_246)).line);
F->m_859 = (*(P454)rt_nil_check(F->m_859)).mnext;
}
goto ret_;
}
while ((F->p_860 != NULL)) {
F->found_861 = 0;
F->m_859 = (*(P454)rt_nil_check(F->y_858)).members;
while ((F->m_859 != NULL)) {
if (rt_str_eq((*(P439)rt_nil_check((*(P454)rt_nil_check(F->m_859)).name)), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_860)).name)))) {
F->z_862 = NULL;
F->z_862 = f_copy_sym_243(F->m_859);
if (((*(P444)rt_nil_check(F->p_860)).ival == ((rt_int)1LL))) {
(*(P454)rt_nil_check(F->z_862)).ro_flag = 1;
}
f_define_145(F->z_862, (*(P444)rt_nil_check(F->d_246)).line);
F->found_861 = 1;
}
F->m_859 = (*(P454)rt_nil_check(F->m_859)).mnext;
}
if ((!F->found_861)) {
f_fail_23((*(P444)rt_nil_check(F->d_246)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_860)).name)), rt_str(" is not exported by ", 20)), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->d_246)).name))); b_; }));
}
F->p_860 = (*(P444)rt_nil_check(F->p_860)).next;
}
ret_:
  return;
}

static void f_finish_ptr_249(P448 t_248) {
  struct f_finish_ptr_249fr *F = rt_alloc(sizeof *F);
F->t_248 = t_248;
F->d_863 = NULL;
F->d_863 = (*(P448)rt_nil_check(F->t_248)).decl;
F->p_864 = NULL;
F->c_865 = NULL;
F->dummy_866 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_866, rt_str(" ", 1));
if (((*(P448)rt_nil_check(F->t_248)).target != NULL)) {
goto ret_;
}
f_open_scope_151();
F->p_864 = (*(P444)rt_nil_check(F->d_863)).b;
while ((F->p_864 != NULL)) {
F->y_867 = NULL;
F->y_867 = f_new_sym_155(((rt_int)2LL), (*(P444)rt_nil_check(F->p_864)).name);
(*(P454)rt_nil_check(F->y_867)).t = g_ty_int_503;
(*(P454)rt_nil_check(F->y_867)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_145(F->y_867, (*(P444)rt_nil_check(F->d_863)).line);
F->p_864 = (*(P444)rt_nil_check(F->p_864)).next;
}
(*(P448)rt_nil_check(F->t_248)).target = f_resolve_subtype_188((*(P444)rt_nil_check(F->d_863)).a, &F->c_865);
f_close_scope_152();
(*rt_str_at(&F->dummy_866, ((rt_int)1LL))) = rt_str_get(f_ctype_177(F->t_248), ((rt_int)1LL));
(*rt_str_at(&F->dummy_866, ((rt_int)1LL))) = rt_str_get(f_ctype_177((*(P448)rt_nil_check(F->t_248)).target), ((rt_int)1LL));
ret_:
  return;
}

static void f_declare_subprogram_251(P444 d_250) {
  struct f_declare_subprogram_251fr *F = rt_alloc(sizeof *F);
F->d_250 = d_250;
f_define_145(f_build_subprogram_253(F->d_250), (*(P444)rt_nil_check(F->d_250)).line);
ret_:
  return;
}

static P454 f_build_subprogram_253(P444 d_252) {
  struct f_build_subprogram_253fr *F = rt_alloc(sizeof *F);
F->d_252 = d_252;
F->y_868 = NULL;
F->p_869 = NULL;
F->p_869 = (*(P444)rt_nil_check(F->d_252)).a;
F->tail_870 = NULL;
if (((*(P444)rt_nil_check(F->d_252)).kind == ((rt_int)46LL))) {
F->y_868 = f_new_sym_155(((rt_int)3LL), (*(P444)rt_nil_check(F->d_252)).name);
} else if (((*(P444)rt_nil_check(F->d_252)).kind == ((rt_int)50LL))) {
F->y_868 = f_new_sym_155(((rt_int)9LL), (*(P444)rt_nil_check(F->d_252)).name);
} else {
F->y_868 = f_new_sym_155(((rt_int)4LL), (*(P444)rt_nil_check(F->d_252)).name);
}
while ((F->p_869 != NULL)) {
F->pm_871 = NULL;
{ R453 *cell872 = rt_alloc(sizeof(R453));
(*cell872).name = NULL;
(*cell872).t = NULL;
(*cell872).c = NULL;
(*cell872).cfield = NULL;
(*cell872).next = NULL;
F->pm_871 = cell872;
}
(*(P452)rt_nil_check(F->pm_871)).name = (*(P444)rt_nil_check(F->p_869)).name;
(*(P452)rt_nil_check(F->pm_871)).mode = (*(P444)rt_nil_check(F->p_869)).ival;
(*(P452)rt_nil_check(F->pm_871)).t = f_resolve_subtype_188((*(P444)rt_nil_check(F->p_869)).a, &(*(P452)rt_nil_check(F->pm_871)).c);
(*(P452)rt_nil_check(F->pm_871)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_869)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_870 == NULL)) {
(*(P454)rt_nil_check(F->y_868)).params = F->pm_871;
} else {
(*(P452)rt_nil_check(F->tail_870)).next = F->pm_871;
}
F->tail_870 = F->pm_871;
F->p_869 = (*(P444)rt_nil_check(F->p_869)).next;
}
(*(P454)rt_nil_check(F->y_868)).result = g_ty_void_508;
if (((*(P444)rt_nil_check(F->d_252)).b != NULL)) {
F->rc_873 = NULL;
(*(P454)rt_nil_check(F->y_868)).result = f_resolve_subtype_188((*(P444)rt_nil_check(F->d_252)).b, &F->rc_873);
}
(*(P454)rt_nil_check(F->y_868)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_348(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->d_252)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P454)rt_nil_check(F->y_868)).decl = F->d_252;
(*(P454)rt_nil_check(F->y_868)).level = g_cur_level_489;
if (((*(P444)rt_nil_check(F->d_252)).kind == ((rt_int)50LL))) {
f_put_27(g_out_globals_482, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_868)).cname))), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_868;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_element_255(P444 e_254) {
  struct f_element_255fr *F = rt_alloc(sizeof *F);
F->e_254 = e_254;
F->k_874 = (*(P444)rt_nil_check(F->e_254)).kind;
if ((((F->k_874 == ((rt_int)45LL)) || (F->k_874 == ((rt_int)46LL))) || (F->k_874 == ((rt_int)50LL)))) {
f_subprogram_267(F->e_254);
} else if (((((((F->k_874 == ((rt_int)49LL)) || (F->k_874 == ((rt_int)42LL))) || (F->k_874 == ((rt_int)43LL))) || (F->k_874 == ((rt_int)47LL))) || (F->k_874 == ((rt_int)48LL))) || (F->k_874 == ((rt_int)51LL)))) {
goto ret_;
} else if ((F->k_874 == ((rt_int)44LL))) {
f_finish_ptr_249((*(P454)rt_nil_check(f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_254)).name))))).t);
} else if ((F->k_874 == ((rt_int)40LL))) {
f_var_decl_263(F->e_254);
} else if (((F->k_874 == ((rt_int)41LL)) && ((*(P444)rt_nil_check(F->e_254)).flag == ((rt_int)0LL)))) {
f_const_decl_265(F->e_254);
} else if ((F->k_874 == ((rt_int)41LL))) {
goto ret_;
} else if ((F->k_874 == ((rt_int)33LL))) {
F->t_875 = NULL;
F->c_876 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_254)).a, g_ty_bool_504, &F->t_875));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_876), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_289(F->e_254);
}
ret_:
  return;
}

static rstr f_storage_258(rstr *name_256, P448 t_257) {
  struct f_storage_258fr *F = rt_alloc(sizeof *F);
F->name_256 = name_256;
F->t_257 = t_257;
if ((!g_in_func_488)) {
F->g_877 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_256))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_482, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177(F->t_257)), rt_str(" ", 1)), F->g_877), rt_str(";", 1)); b_; }));
g_st_field_494 = f_mk_3(&F->g_877);
F->result_ = F->g_877;
goto ret_;
}
{
F->f_878 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_256)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_487, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177(F->t_257)), rt_str(" ", 1)), F->f_878), rt_str(";", 1)); b_; }));
g_st_field_494 = f_mk_3(&F->f_878);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_878);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_bind_261(P454 y_259, rstr *access_260) {
  struct f_bind_261fr *F = rt_alloc(sizeof *F);
F->y_259 = y_259;
F->access_260 = access_260;
if (g_in_func_488) {
(*(P454)rt_nil_check(F->y_259)).level = g_cur_level_489;
(*(P454)rt_nil_check(F->y_259)).access = g_st_field_494;
} else {
(*(P454)rt_nil_check(F->y_259)).level = ((rt_int)0LL);
(*(P454)rt_nil_check(F->y_259)).access = f_mk_3(&(*F->access_260));
}
ret_:
  return;
}

static void f_var_decl_263(P444 d_262) {
  struct f_var_decl_263fr *F = rt_alloc(sizeof *F);
F->d_262 = d_262;
F->c_879 = NULL;
F->t_880 = NULL;
F->t_880 = f_resolve_subtype_188((*(P444)rt_nil_check(F->d_262)).a, &F->c_879);
F->y_881 = NULL;
F->y_881 = f_new_sym_155(((rt_int)1LL), (*(P444)rt_nil_check(F->d_262)).name);
F->access_882 = rt_str_copy(f_storage_258(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->d_262)).name)), F->t_880));
f_init_storage_204(&F->access_882, F->t_880, F->c_879);
if (((*(P444)rt_nil_check(F->d_262)).b != NULL)) {
F->vt_883 = NULL;
F->v_884 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->d_262)).b, F->t_880, &F->vt_883));
f_check_type_175(F->vt_883, F->t_880, (*(P444)rt_nil_check(F->d_262)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_216(&F->access_882, F->t_880, &F->v_884, F->c_879); b_; }));
}
(*(P454)rt_nil_check(F->y_881)).t = F->t_880;
(*(P454)rt_nil_check(F->y_881)).c = F->c_879;
f_bind_261(F->y_881, &F->access_882);
f_define_145(F->y_881, (*(P444)rt_nil_check(F->d_262)).line);
ret_:
  return;
}

static void f_const_decl_265(P444 d_264) {
  struct f_const_decl_265fr *F = rt_alloc(sizeof *F);
F->d_264 = d_264;
F->c_885 = NULL;
F->c_885 = f_new_cons_158();
F->t_886 = NULL;
F->vt_887 = NULL;
F->y_888 = NULL;
F->y_888 = f_new_sym_155(((rt_int)2LL), (*(P444)rt_nil_check(F->d_264)).name);
if (((*(P444)rt_nil_check(F->d_264)).a != NULL)) {
F->t_886 = f_resolve_subtype_188((*(P444)rt_nil_check(F->d_264)).a, &F->c_885);
}
{
F->v_890 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->d_264)).b, F->t_886, &F->vt_887));
if ((F->t_886 != NULL)) {
f_check_type_175(F->vt_887, F->t_886, (*(P444)rt_nil_check(F->d_264)).line);
} else {
F->t_886 = F->vt_887;
}
if (((*(P448)rt_nil_check(F->t_886)).kind == ((rt_int)1LL))) {
(*(P454)rt_nil_check(F->y_888)).mvalue = f_manifest_207((*(P444)rt_nil_check(F->d_264)).b, &F->ok_889);
(*(P454)rt_nil_check(F->y_888)).hasmv = F->ok_889;
}
{
F->access_891 = rt_str_copy(f_storage_258(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->d_264)).name)), F->t_886));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_891, rt_str(" = ", 3)), f_copy_code_219(F->t_886, &F->v_890)), rt_str(";", 1)); b_; }));
f_bind_261(F->y_888, &F->access_891);
}
}
(*(P454)rt_nil_check(F->y_888)).t = F->t_886;
(*(P454)rt_nil_check(F->y_888)).c = F->c_885;
(*(P454)rt_nil_check(F->y_888)).ro_flag = 1;
f_define_145(F->y_888, (*(P444)rt_nil_check(F->d_264)).line);
ret_:
  return;
}

static void f_subprogram_267(P444 d_266) {
  struct f_subprogram_267fr *F = rt_alloc(sizeof *F);
F->d_266 = d_266;
f_gen_subprogram_270(F->d_266, f_lookup_decl_142(F->d_266));
ret_:
  return;
}

static void f_gen_subprogram_270(P444 d_268, P454 y_269) {
  struct f_gen_subprogram_270fr *F = rt_alloc(sizeof *F);
F->d_268 = d_268;
F->y_269 = y_269;
F->saved_code_892 = NULL;
F->saved_code_892 = g_code_486;
F->saved_fields_893 = NULL;
F->saved_fields_893 = g_fields_buf_487;
F->saved_in_894 = g_in_func_488;
F->saved_sym_895 = NULL;
F->saved_sym_895 = g_func_sym_496;
F->saved_exits_896 = NULL;
F->saved_exits_896 = g_exits_497;
F->saved_frames_897 = g_frames_498;
F->args_898 = NULL;
F->args_898 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_899 = NULL;
F->pm_899 = (*(P454)rt_nil_check(F->y_269)).params;
F->saved_handlers_900 = NULL;
F->saved_handlers_900 = g_handlers_499;
F->saved_cleanups_901 = NULL;
F->saved_cleanups_901 = g_cleanups_500;
F->ctx_902 = NULL;
F->head_903 = NULL;
F->frame_904 = NULL;
F->frame_904 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_269)).cname)), rt_str("fr", 2)); b_; }));
F->parent_905 = NULL;
F->copy_back_906 = NULL;
F->copy_back_906 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (g_in_func_488) {
F->parent_905 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P454)rt_nil_check(g_func_sym_496)).cname)), rt_str("fr", 2)); b_; }));
}
g_code_486 = f_new_buffer_24();
g_fields_buf_487 = f_new_buffer_24();
g_in_func_488 = 1;
g_func_sym_496 = F->y_269;
g_exits_497 = NULL;
g_frames_498 = ((rt_int)0LL);
g_handlers_499 = NULL;
g_cleanups_500 = NULL;
g_cur_level_489 = rt_add(g_cur_level_489, ((rt_int)1LL));
f_open_scope_151();
{ R469 *cell907 = rt_alloc(sizeof(R469));
(*cell907).imps = NULL;
(*cell907).next = NULL;
F->ctx_902 = cell907;
}
(*(P468)rt_nil_check(F->ctx_902)).depth = g_depth_475;
(*(P468)rt_nil_check(F->ctx_902)).imps = (*(P444)rt_nil_check(F->d_268)).d;
(*(P468)rt_nil_check(F->ctx_902)).all_imp = ((*(P444)rt_nil_check(F->d_268)).flag >= ((rt_int)2LL));
(*(P468)rt_nil_check(F->ctx_902)).next = g_fctx_490;
g_fctx_490 = F->ctx_902;
if ((F->parent_905 != NULL)) {
f_put_27(g_fields_buf_487, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P439)rt_nil_check(F->parent_905))), rt_str(" *up;", 5)); b_; }));
if (((*(P454)rt_nil_check(F->y_269)).kind != ((rt_int)9LL))) {
F->args_898 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P439)rt_nil_check(F->parent_905))), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_899 != NULL)) {
F->ct_908 = rt_str_copy(f_ctype_177((*(P452)rt_nil_check(F->pm_899)).t));
F->f_909 = rt_str_copy((*(P439)rt_nil_check((*(P452)rt_nil_check(F->pm_899)).cfield)));
F->p_910 = NULL;
if ((((*(P439)rt_nil_check(F->args_898))).len > ((rt_int)0LL))) {
F->args_898 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check(F->args_898)), rt_str(", ", 2)); b_; }));
}
if (((*(P452)rt_nil_check(F->pm_899)).mode == ((rt_int)1LL))) {
F->p_910 = f_new_sym_155(((rt_int)2LL), (*(P452)rt_nil_check(F->pm_899)).name);
f_put_27(g_fields_buf_487, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_908), rt_str(" ", 1)), F->f_909), rt_str(";", 1)); b_; }));
F->args_898 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->args_898)), F->ct_908), rt_str(" ", 1)), F->f_909); b_; }));
(*(P454)rt_nil_check(F->p_910)).access = f_mk_3(&F->f_909);
if (((*(P454)rt_nil_check(F->y_269)).kind != ((rt_int)9LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_909), rt_str(" = ", 3)), f_copy_code_219((*(P452)rt_nil_check(F->pm_899)).t, &F->f_909)), rt_str(";", 1)); b_; }));
}
} else {
F->p_910 = f_new_sym_155(((rt_int)1LL), (*(P452)rt_nil_check(F->pm_899)).name);
f_put_27(g_fields_buf_487, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_908), rt_str(" *", 2)), F->f_909), rt_str(";", 1)); b_; }));
F->args_898 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->args_898)), F->ct_908), rt_str(" *", 2)), F->f_909); b_; }));
(*(P454)rt_nil_check(F->p_910)).access = f_mk_3(&F->f_909);
(*(P454)rt_nil_check(F->p_910)).byref = 1;
if (((*(P454)rt_nil_check(F->y_269)).kind != ((rt_int)9LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_909), rt_str(" = ", 3)), F->f_909), rt_str(";", 1)); b_; }));
}
if ((((*(P452)rt_nil_check(F->pm_899)).mode == ((rt_int)3LL)) && ((*(P454)rt_nil_check(F->y_269)).kind != ((rt_int)9LL)))) {
f_put_27(g_fields_buf_487, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_908), rt_str(" ", 1)), F->f_909), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_909), rt_str("v = ", 4)), f_copy_code_219((*(P452)rt_nil_check(F->pm_899)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_909); b_; }))), rt_str(";", 1)); b_; }));
F->copy_back_906 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->copy_back_906)), rt_str("  ", 2)), f_assign_code_216(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_909), rt_str(")", 1)); b_; }), (*(P452)rt_nil_check(F->pm_899)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_909), rt_str("v", 1)); b_; }), (*(P452)rt_nil_check(F->pm_899)).c)); b_; }));
(*(P454)rt_nil_check(F->p_910)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_909, rt_str("v", 1)); b_; }));
(*(P454)rt_nil_check(F->p_910)).byref = 0;
}
}
(*(P454)rt_nil_check(F->p_910)).t = (*(P452)rt_nil_check(F->pm_899)).t;
(*(P454)rt_nil_check(F->p_910)).c = (*(P452)rt_nil_check(F->pm_899)).c;
(*(P454)rt_nil_check(F->p_910)).level = g_cur_level_489;
(*(P454)rt_nil_check(F->p_910)).ro_flag = (((*(P452)rt_nil_check(F->pm_899)).mode == ((rt_int)1LL)) || ((*(P452)rt_nil_check(F->pm_899)).mode == ((rt_int)4LL)));
f_define_145(F->p_910, (*(P444)rt_nil_check(F->d_268)).line);
F->pm_899 = (*(P452)rt_nil_check(F->pm_899)).next;
}
if (((*(P448)rt_nil_check((*(P454)rt_nil_check(F->y_269)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_fields_buf_487, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177((*(P454)rt_nil_check(F->y_269)).result)), rt_str(" result_;", 9)); b_; }));
}
f_declare_body_235((*(P444)rt_nil_check(F->d_268)).c);
f_body_elements_280((*(P444)rt_nil_check(F->d_268)).c);
f_close_scope_152();
g_fctx_490 = (*(P468)rt_nil_check(g_fctx_490)).next;
g_cur_level_489 = rt_sub(g_cur_level_489, ((rt_int)1LL));
if (((((*(P439)rt_nil_check(F->args_898))).len == ((rt_int)0LL)) || ((*(P454)rt_nil_check(F->y_269)).kind == ((rt_int)9LL)))) {
F->args_898 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P454)rt_nil_check(F->y_269)).kind == ((rt_int)9LL))) {
F->args_898 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_903 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177((*(P454)rt_nil_check(F->y_269)).result)), rt_str(" ", 1)), (*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_269)).cname))), rt_str("(", 1)), (*(P439)rt_nil_check(F->args_898))), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_481, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check(F->head_903)), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_483, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check(F->head_903)), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_495, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P439)rt_nil_check(F->frame_904))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_495, g_fields_buf_487);
f_put_27(g_out_frames_495, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P454)rt_nil_check(F->y_269)).kind == ((rt_int)9LL))) {
f_put_27(g_out_funcs_483, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P439)rt_nil_check(F->frame_904))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_483, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P439)rt_nil_check(F->frame_904))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_splice_34(g_out_funcs_483, g_code_486);
if (((*(P448)rt_nil_check((*(P454)rt_nil_check(F->y_269)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_out_funcs_483, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_483, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P439)rt_nil_check(F->copy_back_906))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_483, &(*(P439)rt_nil_check(F->copy_back_906)));
}
f_put_27(g_out_funcs_483, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_483, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P439)rt_nil_check(F->copy_back_906))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_483, &(*(P439)rt_nil_check(F->copy_back_906)));
}
f_put_27(g_out_funcs_483, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_483, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_483, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_486 = F->saved_code_892;
g_fields_buf_487 = F->saved_fields_893;
g_in_func_488 = F->saved_in_894;
g_func_sym_496 = F->saved_sym_895;
g_exits_497 = F->saved_exits_896;
g_frames_498 = F->saved_frames_897;
g_handlers_499 = F->saved_handlers_900;
g_cleanups_500 = F->saved_cleanups_901;
ret_:
  return;
}

static rstr f_waits_of_272(P444 d_271) {
  struct f_waits_of_272fr *F = rt_alloc(sizeof *F);
F->d_271 = d_271;
F->w_911 = NULL;
F->w_911 = g_cap_waits_492;
while ((F->w_911 != NULL)) {
if (((*(P466)rt_nil_check(F->w_911)).d == F->d_271)) {
F->result_ = (*(P439)rt_nil_check((*(P466)rt_nil_check(F->w_911)).w));
goto ret_;
}
F->w_911 = (*(P466)rt_nil_check(F->w_911)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_task_waits_274(P444 elems_273) {
  struct f_task_waits_274fr *F = rt_alloc(sizeof *F);
F->elems_273 = elems_273;
F->e_912 = NULL;
F->e_912 = F->elems_273;
F->r_913 = NULL;
F->r_913 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_912 != NULL)) {
if (((*(P444)rt_nil_check(F->e_912)).kind == ((rt_int)50LL))) {
F->r_913 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->r_913)), rt_str(" rt_await_decl(&", 16)), (*(P439)rt_nil_check((*(P454)rt_nil_check(f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_912)).name))))).cname))), rt_str("decl);", 6)); b_; }));
} else if (((*(P444)rt_nil_check(F->e_912)).kind == ((rt_int)47LL))) {
F->r_913 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check(F->r_913)), f_waits_of_272(F->e_912)); b_; }));
}
F->e_912 = (*(P444)rt_nil_check(F->e_912)).next;
}
F->result_ = (*(P439)rt_nil_check(F->r_913));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_await_tasks_276(P444 elems_275) {
  struct f_await_tasks_276fr *F = rt_alloc(sizeof *F);
F->elems_275 = elems_275;
F->w_914 = rt_str_copy(f_task_waits_274(F->elems_275));
if (((F->w_914).len > ((rt_int)0LL))) {
f_emit_29(&F->w_914);
}
ret_:
  return;
}

static void f_capsule_elements_278(P444 elems_277) {
  struct f_capsule_elements_278fr *F = rt_alloc(sizeof *F);
F->elems_277 = elems_277;
F->e_915 = NULL;
F->e_915 = F->elems_277;
while ((F->e_915 != NULL)) {
f_element_255(F->e_915);
F->e_915 = (*(P444)rt_nil_check(F->e_915)).next;
}
ret_:
  return;
}

static void f_body_elements_280(P444 elems_279) {
  struct f_body_elements_280fr *F = rt_alloc(sizeof *F);
F->elems_279 = elems_279;
f_capsule_elements_278(F->elems_279);
f_await_tasks_276(F->elems_279);
ret_:
  return;
}

static void f_gen_body_282(P444 elems_281) {
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
F->i_916 = g_frames_498;
F->c_917 = NULL;
F->c_917 = g_cleanups_500;
while ((F->i_916 > F->upto_283)) {
f_emit_29(&(*(P439)rt_nil_check((*(P456)rt_nil_check(F->c_917)).s)));
F->c_917 = (*(P456)rt_nil_check(F->c_917)).next;
F->i_916 = rt_sub(F->i_916, ((rt_int)1LL));
}
ret_:
  return;
}

static void f_push_cleanup_286(rstr *s_285) {
  struct f_push_cleanup_286fr *F = rt_alloc(sizeof *F);
F->s_285 = s_285;
F->c_918 = NULL;
{ R457 *cell919 = rt_alloc(sizeof(R457));
(*cell919).s = NULL;
(*cell919).next = NULL;
F->c_918 = cell919;
}
(*(P456)rt_nil_check(F->c_918)).s = f_mk_3(&(*F->s_285));
(*(P456)rt_nil_check(F->c_918)).next = g_cleanups_500;
g_cleanups_500 = F->c_918;
g_frames_498 = rt_add(g_frames_498, ((rt_int)1LL));
ret_:
  return;
}

static void f_pop_cleanup_287(void) {
  struct f_pop_cleanup_287fr *F = rt_alloc(sizeof *F);
g_cleanups_500 = (*(P456)rt_nil_check(g_cleanups_500)).next;
g_frames_498 = rt_sub(g_frames_498, ((rt_int)1LL));
ret_:
  return;
}

static void f_gen_statement_289(P444 s_288) {
  struct f_gen_statement_289fr *F = rt_alloc(sizeof *F);
F->s_288 = s_288;
F->label_920 = NULL;
if (((*(P444)rt_nil_check(F->s_288)).tag != NULL)) {
F->x_921 = NULL;
{ R463 *cell922 = rt_alloc(sizeof(R463));
(*cell922).match = NULL;
(*cell922).label = NULL;
(*cell922).next = NULL;
F->x_921 = cell922;
}
F->label_920 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P462)rt_nil_check(F->x_921)).match = (*(P444)rt_nil_check(F->s_288)).tag;
(*(P462)rt_nil_check(F->x_921)).label = F->label_920;
(*(P462)rt_nil_check(F->x_921)).depth = g_frames_498;
(*(P462)rt_nil_check(F->x_921)).next = g_exits_497;
g_exits_497 = F->x_921;
}
{ rt_int sel923 = (*(P444)rt_nil_check(F->s_288)).kind;
if (0 || (sel923 == ((rt_int)20LL))) {
f_st_assign_291(F->s_288);
} else if (0 || (sel923 == ((rt_int)21LL))) {
f_st_call_293(F->s_288);
} else if (0 || (sel923 == ((rt_int)22LL))) {
f_st_if_295(F->s_288);
} else if (0 || (sel923 == ((rt_int)23LL))) {
f_st_case_297(F->s_288);
} else if (0 || (sel923 == ((rt_int)24LL))) {
f_st_repeat_299(F->s_288);
} else if (0 || (sel923 == ((rt_int)25LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_282((*(P444)rt_nil_check(F->s_288)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel923 == ((rt_int)27LL))) {
f_st_exit_301(F->s_288);
} else if (0 || (sel923 == ((rt_int)28LL))) {
f_st_return_303(F->s_288);
} else if (0 || (sel923 == ((rt_int)30LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_306(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->s_288)).name)), (*(P444)rt_nil_check(F->s_288)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel923 == ((rt_int)31LL))) {
if ((g_handlers_499 == NULL)) {
f_fail_23((*(P444)rt_nil_check(F->s_288)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P439)rt_nil_check((*(P456)rt_nil_check(g_handlers_499)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel923 == ((rt_int)26LL))) {
f_st_guard_308(F->s_288);
} else if (0 || (sel923 == ((rt_int)32LL))) {
f_st_alloc_310(F->s_288);
} else if (0 || (sel923 == ((rt_int)34LL))) {
f_st_create_314(F->s_288);
} else if (0 || (sel923 == ((rt_int)35LL))) {
f_st_wait_320(F->s_288);
} else if (0 || (sel923 == ((rt_int)36LL))) {
f_st_region_322(F->s_288);
} else {
f_fail_23((*(P444)rt_nil_check(F->s_288)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P444)rt_nil_check(F->s_288)).tag != NULL)) {
g_exits_497 = (*(P462)rt_nil_check(g_exits_497)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check(F->label_920)), rt_str(": ;", 3)); b_; }));
}
ret_:
  return;
}

static void f_st_assign_291(P444 s_290) {
  struct f_st_assign_291fr *F = rt_alloc(sizeof *F);
F->s_290 = s_290;
F->lv_924 = NULL;
F->t_925 = NULL;
F->vt_926 = NULL;
F->c_927 = NULL;
if (((((*(P444)rt_nil_check((*(P444)rt_nil_check(F->s_290)).a)).kind == ((rt_int)10LL)) && ((*(P444)rt_nil_check((*(P444)rt_nil_check(F->s_290)).a)).b != NULL)) && ((*(P444)rt_nil_check((*(P444)rt_nil_check((*(P444)rt_nil_check(F->s_290)).a)).b)).kind == ((rt_int)16LL)))) {
f_lvalue_359((*(P444)rt_nil_check((*(P444)rt_nil_check(F->s_290)).a)).a, &F->lv_924, &F->t_925, &F->c_927, &F->ro_928);
if ((F->ro_928 || ((*(P448)rt_nil_check(F->t_925)).kind != ((rt_int)5LL)))) {
f_fail_23((*(P444)rt_nil_check(F->s_290)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string variable", 40); b_; }));
}
{
F->lo_929 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check((*(P444)rt_nil_check((*(P444)rt_nil_check(F->s_290)).a)).b)).a, g_ty_int_503, &F->vt_926));
F->hi_930 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check((*(P444)rt_nil_check((*(P444)rt_nil_check(F->s_290)).a)).b)).b, g_ty_int_503, &F->vt_926));
F->v_931 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->s_290)).b, g_ty_string_507, &F->vt_926));
f_check_type_175(F->vt_926, g_ty_string_507, (*(P444)rt_nil_check(F->s_290)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P439)rt_nil_check(F->lv_924))), rt_str(", ", 2)), F->lo_929), rt_str(", ", 2)), F->hi_930), rt_str(", ", 2)), F->v_931), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_359((*(P444)rt_nil_check(F->s_290)).a, &F->lv_924, &F->t_925, &F->c_927, &F->ro_928);
if (F->ro_928) {
f_fail_23((*(P444)rt_nil_check(F->s_290)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if ((!f_opened_190(F->t_925))) {
f_fail_23((*(P444)rt_nil_check(F->s_290)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_925)).name))), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_932 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->s_290)).b, F->t_925, &F->vt_926));
f_check_type_175(F->vt_926, F->t_925, (*(P444)rt_nil_check(F->s_290)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_216(&(*(P439)rt_nil_check(F->lv_924)), F->t_925, &F->v_932, F->c_927); b_; }));
}
ret_:
  return;
}

static void f_st_call_293(P444 s_292) {
  struct f_st_call_293fr *F = rt_alloc(sizeof *F);
F->s_292 = s_292;
F->c_933 = NULL;
F->c_933 = (*(P444)rt_nil_check(F->s_292)).a;
F->t_934 = NULL;
if ((((*(P444)rt_nil_check(F->c_933)).kind == ((rt_int)7LL)) || ((*(P444)rt_nil_check(F->c_933)).kind == ((rt_int)12LL)))) {
F->x_935 = NULL;
F->x_935 = f_nn_48(((rt_int)10LL), (*(P444)rt_nil_check(F->c_933)).line);
(*(P444)rt_nil_check(F->x_935)).a = F->c_933;
F->c_933 = F->x_935;
}
if (((*(P444)rt_nil_check(F->c_933)).kind != ((rt_int)10LL))) {
f_fail_23((*(P444)rt_nil_check(F->s_292)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_428(F->c_933, 1, &F->t_934), rt_str(";", 1)); b_; }));
ret_:
  return;
}

static void f_st_if_295(P444 s_294) {
  struct f_st_if_295fr *F = rt_alloc(sizeof *F);
F->s_294 = s_294;
F->a_936 = NULL;
F->a_936 = (*(P444)rt_nil_check(F->s_294)).a;
F->first_937 = 1;
F->t_938 = NULL;
while ((F->a_936 != NULL)) {
F->c_939 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->a_936)).a, g_ty_bool_504, &F->t_938));
f_check_type_175(F->t_938, g_ty_bool_504, (*(P444)rt_nil_check(F->s_294)).line);
if (F->first_937) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_939), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_939), rt_str(") {", 3)); b_; }));
}
F->first_937 = 0;
f_gen_body_282((*(P444)rt_nil_check(F->a_936)).b);
F->a_936 = (*(P444)rt_nil_check(F->a_936)).next;
}
if (((*(P444)rt_nil_check(F->s_294)).flag == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_gen_body_282((*(P444)rt_nil_check(F->s_294)).b);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_case_297(P444 s_296) {
  struct f_st_case_297fr *F = rt_alloc(sizeof *F);
F->s_296 = s_296;
F->st_940 = NULL;
F->vt_941 = NULL;
F->first_942 = 1;
F->a_943 = NULL;
F->a_943 = (*(P444)rt_nil_check(F->s_296)).b;
F->sel_944 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->s_296)).a, NULL, &F->st_940));
F->tmp_945 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_177(F->st_940)), rt_str(" ", 1)), F->tmp_945), rt_str(" = ", 3)), F->sel_944), rt_str(";", 1)); b_; }));
while ((F->a_943 != NULL)) {
F->lab_946 = NULL;
F->lab_946 = (*(P444)rt_nil_check(F->a_943)).a;
F->conds_947 = NULL;
F->conds_947 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_946 != NULL)) {
if (((*(P444)rt_nil_check(F->lab_946)).b == NULL)) {
F->v_948 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->lab_946)).a, F->st_940, &F->vt_941));
f_check_type_175(F->vt_941, F->st_940, (*(P444)rt_nil_check(F->s_296)).line);
F->conds_947 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->conds_947)), rt_str(" || ", 4)), f_eq_code_223(F->st_940, &F->tmp_945, &F->v_948)); b_; }));
} else {
F->lo_949 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->lab_946)).a, F->st_940, &F->vt_941));
F->hi_950 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->lab_946)).b, F->st_940, &F->vt_941));
F->conds_947 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->conds_947)), rt_str(" || (", 5)), F->tmp_945), rt_str(" >= ", 4)), F->lo_949), rt_str(" && ", 4)), F->tmp_945), rt_str(" <= ", 4)), F->hi_950), rt_str(")", 1)); b_; }));
}
F->lab_946 = (*(P444)rt_nil_check(F->lab_946)).next;
}
if (F->first_942) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P439)rt_nil_check(F->conds_947))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P439)rt_nil_check(F->conds_947))), rt_str(") {", 3)); b_; }));
}
F->first_942 = 0;
f_gen_body_282((*(P444)rt_nil_check(F->a_943)).b);
F->a_943 = (*(P444)rt_nil_check(F->a_943)).next;
}
if (F->first_942) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P444)rt_nil_check(F->s_296)).flag == ((rt_int)1LL))) {
f_gen_body_282((*(P444)rt_nil_check(F->s_296)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_repeat_299(P444 s_298) {
  struct f_st_repeat_299fr *F = rt_alloc(sizeof *F);
F->s_298 = s_298;
F->t_951 = NULL;
F->c_952 = NULL;
if (((*(P444)rt_nil_check(F->s_298)).flag == ((rt_int)0LL))) {
F->cond_953 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->s_298)).a, g_ty_bool_504, &F->t_951));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_953), rt_str(") {", 3)); b_; }));
f_gen_body_282((*(P444)rt_nil_check(F->s_298)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_951 = f_resolve_subtype_188((*(P444)rt_nil_check(F->s_298)).a, &F->c_952);
F->c_952 = f_base_cons_169(F->t_951, F->c_952);
if ((((*(P448)rt_nil_check(f_base_of_166(F->t_951))).kind == ((rt_int)4LL)) && ((*(P446)rt_nil_check(F->c_952)).lo == NULL))) {
F->c_952 = f_new_cons_158();
(*(P446)rt_nil_check(F->c_952)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P446)rt_nil_check(F->c_952)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P448)rt_nil_check(f_base_of_166(F->t_951))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P446)rt_nil_check(F->c_952)).lo == NULL)) {
f_fail_23((*(P444)rt_nil_check(F->s_298)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_954 = rt_str_copy(f_storage_258(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->s_298)).name)), F->t_951));
F->lov_955 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_956 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_957 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_958 = NULL;
F->y_958 = f_new_sym_155(((rt_int)2LL), (*(P444)rt_nil_check(F->s_298)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_955), rt_str(" = ", 3)), (*(P439)rt_nil_check((*(P446)rt_nil_check(F->c_952)).lo))), rt_str(", ", 2)), F->hiv_956), rt_str(" = ", 3)), (*(P439)rt_nil_check((*(P446)rt_nil_check(F->c_952)).hi))), rt_str(";", 1)); b_; }));
if (((*(P444)rt_nil_check(F->s_298)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_957), rt_str(" = ", 3)), F->hiv_956), rt_str("; ", 2)), F->it_957), rt_str(" >= ", 4)), F->lov_955), rt_str("; ", 2)), F->it_957), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_957), rt_str(" = ", 3)), F->lov_955), rt_str("; ", 2)), F->it_957), rt_str(" <= ", 4)), F->hiv_956), rt_str("; ", 2)), F->it_957), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_954, rt_str(" = ", 3)), F->it_957), rt_str(";", 1)); b_; }));
f_open_scope_151();
(*(P454)rt_nil_check(F->y_958)).t = F->t_951;
(*(P454)rt_nil_check(F->y_958)).c = F->c_952;
f_bind_261(F->y_958, &F->access_954);
(*(P454)rt_nil_check(F->y_958)).ro_flag = 1;
f_define_145(F->y_958, (*(P444)rt_nil_check(F->s_298)).line);
f_gen_body_282((*(P444)rt_nil_check(F->s_298)).b);
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_exit_301(P444 s_300) {
  struct f_st_exit_301fr *F = rt_alloc(sizeof *F);
F->s_300 = s_300;
F->x_959 = NULL;
F->x_959 = g_exits_497;
while ((F->x_959 != NULL)) {
if (rt_str_eq((*(P439)rt_nil_check((*(P462)rt_nil_check(F->x_959)).match)), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->s_300)).name)))) {
f_pop_frames_284((*(P462)rt_nil_check(F->x_959)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P439)rt_nil_check((*(P462)rt_nil_check(F->x_959)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_959 = (*(P462)rt_nil_check(F->x_959)).next;
}
f_fail_23((*(P444)rt_nil_check(F->s_300)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->s_300)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  return;
}

static void f_st_return_303(P444 s_302) {
  struct f_st_return_303fr *F = rt_alloc(sizeof *F);
F->s_302 = s_302;
F->vt_960 = NULL;
if ((!g_in_func_488)) {
f_pop_frames_284(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P448)rt_nil_check((*(P454)rt_nil_check(g_func_sym_496)).result)).kind == ((rt_int)9LL))) {
if (((*(P444)rt_nil_check(F->s_302)).a != NULL)) {
f_fail_23((*(P444)rt_nil_check(F->s_302)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_284(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P444)rt_nil_check(F->s_302)).a == NULL)) {
f_fail_23((*(P444)rt_nil_check(F->s_302)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_961 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->s_302)).a, (*(P454)rt_nil_check(g_func_sym_496)).result, &F->vt_960));
f_check_type_175(F->vt_960, (*(P454)rt_nil_check(g_func_sym_496)).result, (*(P444)rt_nil_check(F->s_302)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->v_961), rt_str(";", 1)); b_; }));
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
F->y_962 = NULL;
F->y_962 = f_lookup_140(&(*F->name_304));
if (((F->y_962 != NULL) && ((*(P454)rt_nil_check(F->y_962)).kind == ((rt_int)7LL)))) {
F->result_ = (*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_962)).cname));
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

static void f_st_guard_308(P444 s_307) {
  struct f_st_guard_308fr *F = rt_alloc(sizeof *F);
F->s_307 = s_307;
F->h_963 = NULL;
F->h_963 = (*(P444)rt_nil_check(F->s_307)).b;
F->first_964 = 1;
F->hv_965 = NULL;
{
F->f_966 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_967 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_286(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_966), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_966), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_966), rt_str(")) {", 4)); b_; }));
f_gen_body_282((*(P444)rt_nil_check(F->s_307)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_966), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_287();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_966), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_967), rt_str(" = rt_xcur;", 11)); b_; }));
{ R457 *cell968 = rt_alloc(sizeof(R457));
(*cell968).s = NULL;
(*cell968).next = NULL;
F->hv_965 = cell968;
}
(*(P456)rt_nil_check(F->hv_965)).s = f_mk_3(&F->x_967);
(*(P456)rt_nil_check(F->hv_965)).next = g_handlers_499;
g_handlers_499 = F->hv_965;
while ((F->h_963 != NULL)) {
F->n_969 = NULL;
F->n_969 = (*(P444)rt_nil_check(F->h_963)).a;
F->conds_970 = NULL;
F->conds_970 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_969 != NULL)) {
F->conds_970 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->conds_970)), rt_str(" || ", 4)), F->x_967), rt_str(" == ", 4)), f_exc_id_306(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->n_969)).name)), (*(P444)rt_nil_check(F->s_307)).line)); b_; }));
F->n_969 = (*(P444)rt_nil_check(F->n_969)).next;
}
if (F->first_964) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P439)rt_nil_check(F->conds_970))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P439)rt_nil_check(F->conds_970))), rt_str(") {", 3)); b_; }));
}
F->first_964 = 0;
f_gen_body_282((*(P444)rt_nil_check(F->h_963)).b);
F->h_963 = (*(P444)rt_nil_check(F->h_963)).next;
}
if (F->first_964) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P444)rt_nil_check(F->s_307)).flag == ((rt_int)1LL))) {
f_gen_body_282((*(P444)rt_nil_check(F->s_307)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_967), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_499 = (*(P456)rt_nil_check(g_handlers_499)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_alloc_310(P444 s_309) {
  struct f_st_alloc_310fr *F = rt_alloc(sizeof *F);
F->s_309 = s_309;
F->lv_971 = NULL;
F->t_972 = NULL;
F->target_973 = NULL;
F->vt_974 = NULL;
F->c_975 = NULL;
F->tc_976 = NULL;
F->d_978 = NULL;
F->p_979 = NULL;
F->a_980 = NULL;
f_lvalue_359((*(P444)rt_nil_check(F->s_309)).a, &F->lv_971, &F->t_972, &F->c_975, &F->ro_977);
if (((*(P448)rt_nil_check(F->t_972)).kind != ((rt_int)8LL))) {
f_fail_23((*(P444)rt_nil_check(F->s_309)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_249(F->t_972);
F->d_978 = (*(P448)rt_nil_check(F->t_972)).decl;
F->target_973 = (*(P448)rt_nil_check(F->t_972)).target;
if ((f_list_len_54((*(P444)rt_nil_check(F->s_309)).b) != f_list_len_54((*(P444)rt_nil_check(F->d_978)).b))) {
f_fail_23((*(P444)rt_nil_check(F->s_309)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_54((*(P444)rt_nil_check(F->d_978)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_981 = rt_str_copy(f_ctype_177(F->target_973));
F->cell_982 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_981), rt_str(" *", 2)), F->cell_982), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_981), rt_str("));", 3)); b_; }));
f_open_scope_151();
F->p_979 = (*(P444)rt_nil_check(F->d_978)).b;
F->a_980 = (*(P444)rt_nil_check(F->s_309)).b;
while ((F->p_979 != NULL)) {
F->v_983 = rt_str_copy(f_gexpr_380(F->a_980, g_ty_int_503, &F->vt_974));
F->pv_984 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_985 = NULL;
F->y_985 = f_new_sym_155(((rt_int)2LL), (*(P444)rt_nil_check(F->p_979)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_984), rt_str(" = ", 3)), F->v_983), rt_str(";", 1)); b_; }));
(*(P454)rt_nil_check(F->y_985)).t = g_ty_int_503;
(*(P454)rt_nil_check(F->y_985)).access = f_mk_3(&F->pv_984);
f_define_145(F->y_985, (*(P444)rt_nil_check(F->s_309)).line);
F->p_979 = (*(P444)rt_nil_check(F->p_979)).next;
F->a_980 = (*(P444)rt_nil_check(F->a_980)).next;
}
F->vt_974 = f_resolve_subtype_188((*(P444)rt_nil_check(F->d_978)).a, &F->tc_976);
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_982), rt_str(")", 1)); b_; }), F->target_973, F->tc_976);
f_close_scope_152();
if (((*(P444)rt_nil_check(F->s_309)).c != NULL)) {
F->v_986 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->s_309)).c, F->target_973, &F->vt_974));
f_check_type_175(F->vt_974, F->target_973, (*(P444)rt_nil_check(F->s_309)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_216(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_982), rt_str(")", 1)); b_; }), F->target_973, &F->v_986, F->tc_976); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->lv_971)), rt_str(" = ", 3)), F->cell_982), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static rstr f_act_ref_312(P444 e_311) {
  struct f_act_ref_312fr *F = rt_alloc(sizeof *F);
F->e_311 = e_311;
F->lv_987 = NULL;
F->t_988 = NULL;
F->c_989 = NULL;
if (((((*(P444)rt_nil_check(F->e_311)).kind == ((rt_int)7LL)) && rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_311)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
f_lvalue_359(F->e_311, &F->lv_987, &F->t_988, &F->c_989, &F->ro_990);
if (((*(P448)rt_nil_check(F->t_988)).kind != ((rt_int)14LL))) {
f_fail_23((*(P444)rt_nil_check(F->e_311)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (*(P439)rt_nil_check(F->lv_987));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_create_314(P444 s_313) {
  struct f_st_create_314fr *F = rt_alloc(sizeof *F);
F->s_313 = s_313;
F->y_991 = NULL;
F->y_991 = f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->s_313)).name)));
F->pm_992 = NULL;
F->a_993 = NULL;
F->a_993 = (*(P444)rt_nil_check(F->s_313)).b;
F->lv_994 = NULL;
F->lt_995 = NULL;
F->vt_996 = NULL;
F->lc_997 = NULL;
if (((F->y_991 != NULL) && ((*(P454)rt_nil_check(F->y_991)).kind == ((rt_int)10LL)))) {
F->y_991 = f_instantiate_338(F->y_991, (*(P444)rt_nil_check(F->s_313)).e, (*(P444)rt_nil_check(F->s_313)).b, (*(P444)rt_nil_check(F->s_313)).line);
}
if (((F->y_991 == NULL) || ((*(P454)rt_nil_check(F->y_991)).kind != ((rt_int)9LL)))) {
f_fail_23((*(P444)rt_nil_check(F->s_313)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->s_313)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_992 = (*(P454)rt_nil_check(F->y_991)).params;
{
F->nf_999 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
F->act_1000 = rt_str_copy(f_act_ref_312((*(P444)rt_nil_check(F->s_313)).a));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_991)).cname))), rt_str("fr *", 4)), F->nf_999), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_999), rt_str(");", 2)); b_; }));
if (((*(P454)rt_nil_check(F->y_991)).level > ((rt_int)0LL))) {
F->link_1001 = NULL;
F->link_1001 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1003 = ((rt_int)1LL), hi1004 = rt_sub(g_cur_level_489, (*(P454)rt_nil_check(F->y_991)).level);
for (rt_int it1005 = lo1003; it1005 <= hi1004; it1005++) {
F->i_1002 = it1005;
F->link_1001 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check(F->link_1001)), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_999, rt_str("->up = ", 7)), (*(P439)rt_nil_check(F->link_1001))), rt_str(";", 1)); b_; }));
}
while (((F->a_993 != NULL) && (F->pm_992 != NULL))) {
if (((*(P452)rt_nil_check(F->pm_992)).mode == ((rt_int)1LL))) {
F->v_1006 = rt_str_copy(f_gexpr_380(F->a_993, (*(P452)rt_nil_check(F->pm_992)).t, &F->vt_996));
f_check_type_175(F->vt_996, (*(P452)rt_nil_check(F->pm_992)).t, (*(P444)rt_nil_check(F->s_313)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_999, rt_str("->", 2)), (*(P439)rt_nil_check((*(P452)rt_nil_check(F->pm_992)).cfield))), rt_str(" = ", 3)), f_copy_code_219((*(P452)rt_nil_check(F->pm_992)).t, &F->v_1006)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_359(F->a_993, &F->lv_994, &F->lt_995, &F->lc_997, &F->ro_998);
f_check_type_175(F->lt_995, (*(P452)rt_nil_check(F->pm_992)).t, (*(P444)rt_nil_check(F->s_313)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_999, rt_str("->", 2)), (*(P439)rt_nil_check((*(P452)rt_nil_check(F->pm_992)).cfield))), rt_str(" = &", 4)), (*(P439)rt_nil_check(F->lv_994))), rt_str(";", 1)); b_; }));
}
F->a_993 = (*(P444)rt_nil_check(F->a_993)).next;
F->pm_992 = (*(P452)rt_nil_check(F->pm_992)).next;
}
if (((F->a_993 != NULL) || (F->pm_992 != NULL))) {
f_fail_23((*(P444)rt_nil_check(F->s_313)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->s_313)).name))); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), F->act_1000), rt_str(", &", 3)), (*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_991)).cname))), rt_str("decl, ", 6)), (*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_991)).cname))), rt_str(", ", 2)), F->nf_999), rt_str("); }", 4)); b_; }));
}
ret_:
  return;
}

static rstr f_wait_alt_318(P444 inv_315, rstr *arr_316, rt_int i_317) {
  struct f_wait_alt_318fr *F = rt_alloc(sizeof *F);
F->inv_315 = inv_315;
F->arr_316 = arr_316;
F->i_317 = i_317;
F->lv_1007 = NULL;
F->t_1008 = NULL;
F->vt_1009 = NULL;
F->c_1010 = NULL;
F->fn_1012 = NULL;
F->args_1013 = NULL;
F->slot_1014 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_316), rt_str("[", 1)), f_itos_7(F->i_317)), rt_str("]", 1)));
if ((((*(P444)rt_nil_check(F->inv_315)).kind != ((rt_int)10LL)) || ((*(P444)rt_nil_check((*(P444)rt_nil_check(F->inv_315)).a)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P444)rt_nil_check(F->inv_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1012 = (*(P444)rt_nil_check(F->inv_315)).a;
F->args_1013 = (*(P444)rt_nil_check(F->inv_315)).b;
if ((rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1012)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1012)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_359(F->args_1013, &F->lv_1007, &F->t_1008, &F->c_1010, &F->ro_1011);
if (((*(P448)rt_nil_check(F->t_1008)).kind != ((rt_int)12LL))) {
f_fail_23((*(P444)rt_nil_check(F->inv_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1012)).name)), rt_str("RECEIVE", 7))) {
F->dv_1015 = NULL;
F->dt_1016 = NULL;
f_lvalue_359((*(P444)rt_nil_check(F->args_1013)).next, &F->dv_1015, &F->dt_1016, &F->c_1010, &F->ro_1011);
f_check_type_175(F->dt_1016, (*(P448)rt_nil_check(F->t_1008)).elem, (*(P444)rt_nil_check(F->inv_315)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1014, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (*(P439)rt_nil_check(F->lv_1007))), rt_str(", &", 3)), (*(P439)rt_nil_check(F->dv_1015))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1017 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1018 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->args_1013)).next, (*(P448)rt_nil_check(F->t_1008)).elem, &F->vt_1009));
f_check_type_175(F->vt_1009, (*(P448)rt_nil_check(F->t_1008)).elem, (*(P444)rt_nil_check(F->inv_315)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_177((*(P448)rt_nil_check(F->t_1008)).elem), rt_str(" ", 1)), F->tmp_1017), rt_str(" = ", 3)), F->v_1018), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1014, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (*(P439)rt_nil_check(F->lv_1007))), rt_str(", &", 3)), F->tmp_1017), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1012)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1012)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_1019 = rt_str_copy(f_gexpr_380(F->args_1013, g_ty_int_503, &F->vt_1009));
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1012)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1014, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1019), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1014, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1019), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1012)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1014, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_312(F->args_1013)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P444)rt_nil_check(F->inv_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1012)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_wait_320(P444 s_319) {
  struct f_st_wait_320fr *F = rt_alloc(sizeof *F);
F->s_319 = s_319;
F->a_1020 = NULL;
F->a_1020 = (*(P444)rt_nil_check(F->s_319)).a;
F->n_1021 = ((rt_int)0LL);
F->first_1022 = 1;
F->inits_1023 = NULL;
F->inits_1023 = f_new_buffer_24();
F->arr_1024 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1025 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1020 != NULL)) {
F->n_1021 = rt_add(F->n_1021, f_list_len_54((*(P444)rt_nil_check(F->a_1020)).a));
F->a_1020 = (*(P444)rt_nil_check(F->a_1020)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1024), rt_str("[", 1)), f_itos_7(F->n_1021)), rt_str("];", 2)); b_; }));
F->a_1020 = (*(P444)rt_nil_check(F->s_319)).a;
F->n_1021 = ((rt_int)0LL);
while ((F->a_1020 != NULL)) {
F->inv_1026 = NULL;
F->inv_1026 = (*(P444)rt_nil_check(F->a_1020)).a;
while ((F->inv_1026 != NULL)) {
f_put_27(F->inits_1023, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_318(F->inv_1026, &F->arr_1024, F->n_1021); b_; }));
F->n_1021 = rt_add(F->n_1021, ((rt_int)1LL));
F->inv_1026 = (*(P444)rt_nil_check(F->inv_1026)).next;
}
F->a_1020 = (*(P444)rt_nil_check(F->a_1020)).next;
}
f_splice_34(g_code_486, F->inits_1023);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1025), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_1021)), rt_str(", ", 2)), F->arr_1024), rt_str(");", 2)); b_; }));
F->a_1020 = (*(P444)rt_nil_check(F->s_319)).a;
F->n_1021 = ((rt_int)0LL);
while ((F->a_1020 != NULL)) {
F->conds_1027 = NULL;
F->conds_1027 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1029 = ((rt_int)1LL), hi1030 = f_list_len_54((*(P444)rt_nil_check(F->a_1020)).a);
for (rt_int it1031 = lo1029; it1031 <= hi1030; it1031++) {
F->i_1028 = it1031;
F->conds_1027 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->conds_1027)), rt_str(" || ", 4)), F->w_1025), rt_str(" == ", 4)), f_itos_7(F->n_1021)); b_; }));
F->n_1021 = rt_add(F->n_1021, ((rt_int)1LL));
}
}
if (F->first_1022) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P439)rt_nil_check(F->conds_1027))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P439)rt_nil_check(F->conds_1027))), rt_str(") {", 3)); b_; }));
}
F->first_1022 = 0;
f_gen_body_282((*(P444)rt_nil_check(F->a_1020)).b);
F->a_1020 = (*(P444)rt_nil_check(F->a_1020)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_region_322(P444 s_321) {
  struct f_st_region_322fr *F = rt_alloc(sizeof *F);
F->s_321 = s_321;
F->lv_1032 = NULL;
F->t_1033 = NULL;
F->c_1034 = NULL;
F->lk_1036 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1037 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_359((*(P444)rt_nil_check(F->s_321)).a, &F->lv_1032, &F->t_1033, &F->c_1034, &F->ro_1035);
if (((*(P448)rt_nil_check(F->t_1033)).kind != ((rt_int)13LL))) {
f_fail_23((*(P444)rt_nil_check(F->s_321)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION needs a DATA_LOCK variable", 33); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1036), rt_str(" = &", 4)), (*(P439)rt_nil_check(F->lv_1032))), rt_str("; rt_region_enter(", 18)), F->lk_1036), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1037), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1037), rt_str(")) {", 4)); b_; }));
f_push_cleanup_286(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1037), rt_str("); rt_region_leave(", 19)), F->lk_1036), rt_str(");", 2)); b_; }));
f_gen_body_282((*(P444)rt_nil_check(F->s_321)).b);
f_pop_cleanup_287();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1037), rt_str("); rt_region_leave(", 19)), F->lk_1036), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1037), rt_str("); rt_region_leave(", 19)), F->lk_1036), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static P444 f_gparam_325(P444 g_323, rstr *name_324) {
  struct f_gparam_325fr *F = rt_alloc(sizeof *F);
F->g_323 = g_323;
F->name_324 = name_324;
F->p_1038 = NULL;
F->p_1038 = (*(P444)rt_nil_check(F->g_323)).a;
while ((F->p_1038 != NULL)) {
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_1038)).name)), (*F->name_324))) {
F->result_ = F->p_1038;
goto ret_;
}
F->p_1038 = (*(P444)rt_nil_check(F->p_1038)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P454 f_bind_sym_327(P444 p_326) {
  struct f_bind_sym_327fr *F = rt_alloc(sizeof *F);
F->p_326 = p_326;
F->y_1039 = NULL;
if (((*(P444)rt_nil_check(F->p_326)).ival <= ((rt_int)2LL))) {
F->y_1039 = f_new_sym_155(((rt_int)5LL), (*(P444)rt_nil_check(F->p_326)).name);
} else {
F->y_1039 = f_new_sym_155(((rt_int)2LL), (*(P444)rt_nil_check(F->p_326)).name);
}
F->result_ = F->y_1039;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binds_330(P454 a_328, P454 b_329) {
  struct f_same_binds_330fr *F = rt_alloc(sizeof *F);
F->a_328 = a_328;
F->b_329 = b_329;
F->x_1040 = NULL;
F->x_1040 = F->a_328;
F->y_1041 = NULL;
F->y_1041 = F->b_329;
while (((F->x_1040 != NULL) && (F->y_1041 != NULL))) {
if (((!rt_str_eq((*(P439)rt_nil_check((*(P454)rt_nil_check(F->x_1040)).name)), (*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_1041)).name)))) || (!f_same_binding_333(F->x_1040, F->y_1041)))) {
F->result_ = 0;
goto ret_;
}
F->x_1040 = (*(P454)rt_nil_check(F->x_1040)).mnext;
F->y_1041 = (*(P454)rt_nil_check(F->y_1041)).mnext;
}
F->result_ = ((F->x_1040 == NULL) && (F->y_1041 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binding_333(P454 a_331, P454 b_332) {
  struct f_same_binding_333fr *F = rt_alloc(sizeof *F);
F->a_331 = a_331;
F->b_332 = b_332;
if (((*(P454)rt_nil_check(F->a_331)).kind == ((rt_int)5LL))) {
F->result_ = (((*(P454)rt_nil_check(F->b_332)).kind == ((rt_int)5LL)) && f_same_164((*(P454)rt_nil_check(F->a_331)).t, (*(P454)rt_nil_check(F->b_332)).t));
goto ret_;
}
if ((((*(P454)rt_nil_check(F->a_331)).kind == ((rt_int)2LL)) && (*(P454)rt_nil_check(F->a_331)).hasmv)) {
F->result_ = ((*(P454)rt_nil_check(F->b_332)).hasmv && ((*(P454)rt_nil_check(F->a_331)).mvalue == (*(P454)rt_nil_check(F->b_332)).mvalue));
goto ret_;
}
F->result_ = ((((*(P454)rt_nil_check(F->a_331)).cname != NULL) && ((*(P454)rt_nil_check(F->b_332)).cname != NULL)) && rt_str_eq((*(P439)rt_nil_check((*(P454)rt_nil_check(F->a_331)).cname)), (*(P439)rt_nil_check((*(P454)rt_nil_check(F->b_332)).cname))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P454 f_instantiate_338(P454 g_334, P444 tt_335, P444 args_336, rt_int line_337) {
  struct f_instantiate_338fr *F = rt_alloc(sizeof *F);
F->g_334 = g_334;
F->tt_335 = tt_335;
F->args_336 = args_336;
F->line_337 = line_337;
F->gd_1042 = NULL;
F->gd_1042 = (*(P454)rt_nil_check(F->g_334)).decl;
F->pat_1043 = NULL;
F->pat_1043 = (*(P444)rt_nil_check(F->gd_1042)).b;
F->binds_1044 = NULL;
F->f_1045 = NULL;
F->f_1045 = (*(P444)rt_nil_check(F->pat_1043)).e;
F->a_1046 = NULL;
F->a_1046 = F->tt_335;
F->fp_1047 = NULL;
F->fp_1047 = (*(P444)rt_nil_check(F->pat_1043)).a;
F->inst_1048 = NULL;
F->at_1049 = NULL;
F->c_1050 = NULL;
F->saved_fctx_1051 = NULL;
F->saved_fctx_1051 = g_fctx_490;
F->saved_in_1052 = g_in_func_488;
F->saved_level_1053 = g_cur_level_489;
F->saved_sym_1054 = NULL;
F->saved_sym_1054 = g_func_sym_496;
F->saved_code_1055 = NULL;
F->saved_code_1055 = g_code_486;
while (((F->f_1045 != NULL) && (F->a_1046 != NULL))) {
F->p_1056 = NULL;
F->p_1056 = f_gparam_325(F->gd_1042, &(*(P439)rt_nil_check((*(P444)rt_nil_check(F->f_1045)).name)));
F->b_1057 = NULL;
if ((F->p_1056 == NULL)) {
f_fail_23(F->line_337, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->f_1045)).name)), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1057 = f_bind_sym_327(F->p_1056);
if (((*(P444)rt_nil_check(F->p_1056)).ival <= ((rt_int)2LL))) {
if (((*(P444)rt_nil_check(F->a_1046)).kind >= ((rt_int)70LL))) {
(*(P454)rt_nil_check(F->b_1057)).t = f_resolve_subtype_188(F->a_1046, &F->c_1050);
} else {
F->st_1058 = NULL;
F->st_1058 = f_nn_48(((rt_int)80LL), F->line_337);
(*(P444)rt_nil_check(F->st_1058)).name = (*(P444)rt_nil_check(F->a_1046)).name;
(*(P454)rt_nil_check(F->b_1057)).t = f_resolve_subtype_188(F->st_1058, &F->c_1050);
}
(*(P454)rt_nil_check(F->b_1057)).c = F->c_1050;
} else if (((*(P444)rt_nil_check(F->p_1056)).ival <= ((rt_int)5LL))) {
if ((((*(P444)rt_nil_check(F->a_1046)).kind != ((rt_int)7LL)) || (f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->a_1046)).name))) == NULL))) {
f_fail_23(F->line_337, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_1056)).name))); b_; }));
}
F->b_1057 = f_copy_sym_243(f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->a_1046)).name))));
(*(P454)rt_nil_check(F->b_1057)).name = (*(P444)rt_nil_check(F->p_1056)).name;
} else {
(*(P454)rt_nil_check(F->b_1057)).t = f_resolve_subtype_188((*(P444)rt_nil_check(F->p_1056)).a, &F->c_1050);
(*(P454)rt_nil_check(F->b_1057)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380(F->a_1046, (*(P454)rt_nil_check(F->b_1057)).t, &F->at_1049); b_; }));
(*(P454)rt_nil_check(F->b_1057)).mvalue = f_manifest_207(F->a_1046, &F->ok_1059);
(*(P454)rt_nil_check(F->b_1057)).hasmv = F->ok_1059;
}
(*(P454)rt_nil_check(F->b_1057)).mnext = F->binds_1044;
F->binds_1044 = F->b_1057;
F->f_1045 = (*(P444)rt_nil_check(F->f_1045)).next;
F->a_1046 = (*(P444)rt_nil_check(F->a_1046)).next;
}
F->a_1046 = F->args_336;
while (((F->fp_1047 != NULL) && (F->a_1046 != NULL))) {
if (((((*(P444)rt_nil_check((*(P444)rt_nil_check(F->fp_1047)).a)).kind == ((rt_int)80LL)) && (f_gparam_325(F->gd_1042, &(*(P439)rt_nil_check((*(P444)rt_nil_check((*(P444)rt_nil_check(F->fp_1047)).a)).name))) != NULL)) && ((*(P444)rt_nil_check(f_gparam_325(F->gd_1042, &(*(P439)rt_nil_check((*(P444)rt_nil_check((*(P444)rt_nil_check(F->fp_1047)).a)).name))))).ival <= ((rt_int)2LL)))) {
F->known_1060 = 0;
F->q_1061 = NULL;
F->q_1061 = F->binds_1044;
while ((F->q_1061 != NULL)) {
if (rt_str_eq((*(P439)rt_nil_check((*(P454)rt_nil_check(F->q_1061)).name)), (*(P439)rt_nil_check((*(P444)rt_nil_check((*(P444)rt_nil_check(F->fp_1047)).a)).name)))) {
F->known_1060 = 1;
}
F->q_1061 = (*(P454)rt_nil_check(F->q_1061)).mnext;
}
if ((!F->known_1060)) {
F->b_1062 = NULL;
F->b_1062 = f_bind_sym_327(f_gparam_325(F->gd_1042, &(*(P439)rt_nil_check((*(P444)rt_nil_check((*(P444)rt_nil_check(F->fp_1047)).a)).name))));
F->v_1063 = rt_str_copy(f_gexpr_380(F->a_1046, NULL, &F->at_1049));
(*(P454)rt_nil_check(F->b_1062)).t = F->at_1049;
(*(P454)rt_nil_check(F->b_1062)).c = g_no_cons_514;
(*(P454)rt_nil_check(F->b_1062)).mnext = F->binds_1044;
F->binds_1044 = F->b_1062;
}
}
F->fp_1047 = (*(P444)rt_nil_check(F->fp_1047)).next;
F->a_1046 = (*(P444)rt_nil_check(F->a_1046)).next;
}
F->inst_1048 = (*(P454)rt_nil_check(F->g_334)).insts;
while ((F->inst_1048 != NULL)) {
if (f_same_binds_330((*(P454)rt_nil_check(F->inst_1048)).members, F->binds_1044)) {
F->result_ = F->inst_1048;
goto ret_;
}
F->inst_1048 = (*(P454)rt_nil_check(F->inst_1048)).insts;
}
g_fctx_490 = NULL;
g_in_func_488 = 0;
g_cur_level_489 = ((rt_int)0LL);
g_func_sym_496 = NULL;
g_code_486 = f_new_buffer_24();
f_open_scope_151();
{
F->b_1064 = NULL;
F->b_1064 = F->binds_1044;
while ((F->b_1064 != NULL)) {
f_define_145(F->b_1064, F->line_337);
F->b_1064 = (*(P454)rt_nil_check(F->b_1064)).mnext;
}
}
F->inst_1048 = f_build_subprogram_253(F->pat_1043);
(*(P454)rt_nil_check(F->inst_1048)).members = F->binds_1044;
(*(P454)rt_nil_check(F->inst_1048)).insts = (*(P454)rt_nil_check(F->g_334)).insts;
(*(P454)rt_nil_check(F->g_334)).insts = F->inst_1048;
f_define_145(F->inst_1048, F->line_337);
f_gen_subprogram_270(F->pat_1043, F->inst_1048);
f_close_scope_152();
g_fctx_490 = F->saved_fctx_1051;
g_in_func_488 = F->saved_in_1052;
g_cur_level_489 = F->saved_level_1053;
g_func_sym_496 = F->saved_sym_1054;
g_code_486 = F->saved_code_1055;
F->result_ = F->inst_1048;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_access_of_340(P454 y_339) {
  struct f_access_of_340fr *F = rt_alloc(sizeof *F);
F->y_339 = y_339;
F->p_1065 = NULL;
F->p_1065 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P454)rt_nil_check(F->y_339)).level <= ((rt_int)0LL))) {
F->result_ = (*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_339)).access));
goto ret_;
}
{ rt_int lo1067 = ((rt_int)1LL), hi1068 = rt_sub(g_cur_level_489, (*(P454)rt_nil_check(F->y_339)).level);
for (rt_int it1069 = lo1067; it1069 <= hi1068; it1069++) {
F->i_1066 = it1069;
F->p_1065 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check(F->p_1065)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P454)rt_nil_check(F->y_339)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P439)rt_nil_check(F->p_1065))), rt_str("->", 2)), (*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_339)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->p_1065)), rt_str("->", 2)), (*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_339)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_import_of_343(P444 l_341, rstr *name_342) {
  struct f_import_of_343fr *F = rt_alloc(sizeof *F);
F->l_341 = l_341;
F->name_342 = name_342;
F->p_1070 = NULL;
F->p_1070 = F->l_341;
while ((F->p_1070 != NULL)) {
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_1070)).name)), (*F->name_342))) {
F->result_ = F->p_1070;
goto ret_;
}
F->p_1070 = (*(P444)rt_nil_check(F->p_1070)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_check_import_346(P454 y_344, rt_int line_345) {
  struct f_check_import_346fr *F = rt_alloc(sizeof *F);
F->y_344 = y_344;
F->line_345 = line_345;
F->c_1071 = NULL;
F->c_1071 = g_fctx_490;
F->ro_1072 = 0;
while (((F->c_1071 != NULL) && ((*(P454)rt_nil_check(F->y_344)).depth < (*(P468)rt_nil_check(F->c_1071)).depth))) {
if ((!(*(P468)rt_nil_check(F->c_1071)).all_imp)) {
F->imp_1073 = NULL;
F->imp_1073 = f_import_of_343((*(P468)rt_nil_check(F->c_1071)).imps, &(*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_344)).name)));
if ((F->imp_1073 == NULL)) {
f_fail_23(F->line_345, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_344)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P444)rt_nil_check(F->imp_1073)).ival == ((rt_int)1LL))) {
F->ro_1072 = 1;
}
}
F->c_1071 = (*(P468)rt_nil_check(F->c_1071)).next;
}
F->result_ = F->ro_1072;
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

static rstr f_deref_351(rstr *base_349, P448 t_350) {
  struct f_deref_351fr *F = rt_alloc(sizeof *F);
F->base_349 = base_349;
F->t_350 = t_350;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->t_350)), rt_str(")rt_nil_check(", 14)), (*F->base_349)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_lvalue_353(P444 e_352) {
  struct f_is_lvalue_353fr *F = rt_alloc(sizeof *F);
F->e_352 = e_352;
if (((*(P444)rt_nil_check(F->e_352)).kind == ((rt_int)7LL))) {
F->y_1074 = NULL;
F->y_1074 = f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_352)).name)));
F->result_ = ((F->y_1074 != NULL) && (((*(P454)rt_nil_check(F->y_1074)).kind == ((rt_int)1LL)) || ((*(P454)rt_nil_check(F->y_1074)).kind == ((rt_int)2LL))));
goto ret_;
} else if (((*(P444)rt_nil_check(F->e_352)).kind == ((rt_int)17LL))) {
F->result_ = f_is_lvalue_353((*(P444)rt_nil_check(F->e_352)).a);
goto ret_;
} else if (((*(P444)rt_nil_check(F->e_352)).kind == ((rt_int)11LL))) {
F->result_ = ((!rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_352)).name)), rt_str("LEN", 3))) && f_is_lvalue_353((*(P444)rt_nil_check(F->e_352)).a));
goto ret_;
} else if (((*(P444)rt_nil_check(F->e_352)).kind == ((rt_int)10LL))) {
if ((((*(P444)rt_nil_check(F->e_352)).b != NULL) && ((*(P444)rt_nil_check((*(P444)rt_nil_check(F->e_352)).b)).kind == ((rt_int)16LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_353((*(P444)rt_nil_check(F->e_352)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_lvalue_359(P444 e_354, P439 *code_355, P448 *t_356, P446 *c_357, int *ro_358) {
  struct f_lvalue_359fr *F = rt_alloc(sizeof *F);
F->e_354 = e_354;
F->code_355 = code_355;
F->code_355v = *F->code_355;
F->t_356 = t_356;
F->t_356v = *F->t_356;
F->c_357 = c_357;
F->c_357v = *F->c_357;
F->ro_358 = ro_358;
F->ro_358v = *F->ro_358;
F->base_1075 = NULL;
F->bt_1076 = NULL;
F->bc_1077 = NULL;
if (((*(P444)rt_nil_check(F->e_354)).kind == ((rt_int)7LL))) {
F->y_1078 = NULL;
F->y_1078 = f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_354)).name)));
if ((F->y_1078 == NULL)) {
f_fail_23((*(P444)rt_nil_check(F->e_354)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_354)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P454)rt_nil_check(F->y_1078)).kind != ((rt_int)1LL)) && ((*(P454)rt_nil_check(F->y_1078)).kind != ((rt_int)2LL)))) {
f_fail_23((*(P444)rt_nil_check(F->e_354)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_354)).name)), rt_str(" is not a variable", 18)); b_; }));
}
F->code_355v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_340(F->y_1078); b_; }));
F->t_356v = (*(P454)rt_nil_check(F->y_1078)).t;
F->c_357v = (*(P454)rt_nil_check(F->y_1078)).c;
F->ro_358v = (*(P454)rt_nil_check(F->y_1078)).ro_flag;
if ((((*(P454)rt_nil_check(F->y_1078)).kind == ((rt_int)1LL)) && f_check_import_346(F->y_1078, (*(P444)rt_nil_check(F->e_354)).line))) {
F->ro_358v = 1;
}
} else if (((*(P444)rt_nil_check(F->e_354)).kind == ((rt_int)17LL))) {
f_lvalue_359((*(P444)rt_nil_check(F->e_354)).a, &F->code_355v, &F->t_356v, &F->c_357v, &F->ro_358v);
} else if ((((((*(P444)rt_nil_check(F->e_354)).kind == ((rt_int)12LL)) && ((*(P444)rt_nil_check((*(P444)rt_nil_check(F->e_354)).a)).kind == ((rt_int)7LL))) && rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check((*(P444)rt_nil_check(F->e_354)).a)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_355v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_416((*(P444)rt_nil_check(F->e_354)).b, (*(P444)rt_nil_check(F->e_354)).line, &F->t_356v); b_; }));
F->c_357v = g_no_cons_514;
F->ro_358v = 0;
} else if (((*(P444)rt_nil_check(F->e_354)).kind == ((rt_int)11LL))) {
f_lvalue_359((*(P444)rt_nil_check(F->e_354)).a, &F->base_1075, &F->bt_1076, &F->bc_1077, &F->ro_358v);
f_select_on_367(&(*(P439)rt_nil_check(F->base_1075)), F->bt_1076, F->e_354, &F->ro_358v, &F->code_355v, &F->t_356v, &F->c_357v);
} else if (((*(P444)rt_nil_check(F->e_354)).kind == ((rt_int)10LL))) {
f_lvalue_359((*(P444)rt_nil_check(F->e_354)).a, &F->base_1075, &F->bt_1076, &F->bc_1077, &F->ro_358v);
f_index_on_376(&(*(P439)rt_nil_check(F->base_1075)), F->bt_1076, F->e_354, &F->ro_358v, 1, &F->code_355v, &F->t_356v, &F->c_357v);
} else {
f_fail_23((*(P444)rt_nil_check(F->e_354)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_355) = F->code_355v;  (*F->t_356) = F->t_356v;  (*F->c_357) = F->c_357v;  (*F->ro_358) = F->ro_358v;
  return;
}

static void f_select_on_367(rstr *base_360, P448 bt_361, P444 e_362, int *ro_363, P439 *code_364, P448 *t_365, P446 *c_366) {
  struct f_select_on_367fr *F = rt_alloc(sizeof *F);
F->base_360 = base_360;
F->bt_361 = bt_361;
F->e_362 = e_362;
F->ro_363 = ro_363;
F->code_364 = code_364;
F->code_364v = *F->code_364;
F->t_365 = t_365;
F->t_365v = *F->t_365;
F->c_366 = c_366;
F->c_366v = *F->c_366;
F->c_366v = g_no_cons_514;
if (((*(P448)rt_nil_check(F->bt_361)).kind == ((rt_int)8LL))) {
f_finish_ptr_249(F->bt_361);
(*F->ro_363) = 0;
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_362)).name)), rt_str("ALL", 3))) {
F->code_364v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_351(&(*F->base_360), F->bt_361); b_; }));
F->t_365v = (*(P448)rt_nil_check(F->bt_361)).target;
goto ret_;
}
f_select_on_367(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_351(&(*F->base_360), F->bt_361); b_; }), (*(P448)rt_nil_check(F->bt_361)).target, F->e_362, &(*F->ro_363), &F->code_364v, &F->t_365v, &F->c_366v);
goto ret_;
}
if (((*(P448)rt_nil_check(F->bt_361)).kind == ((rt_int)15LL))) {
F->p_1079 = NULL;
F->p_1079 = (*(P448)rt_nil_check(F->bt_361)).tparams;
if ((!f_opened_190(F->bt_361))) {
f_fail_23((*(P444)rt_nil_check(F->e_362)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->bt_361)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P448)rt_nil_check(F->bt_361)).tparams == NULL)) {
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_362)).name)), rt_str("ALL", 3))) {
F->code_364v = f_mk_3(&(*F->base_360));
F->t_365v = (*(P448)rt_nil_check(F->bt_361)).under;
goto ret_;
}
f_select_on_367(&(*F->base_360), (*(P448)rt_nil_check(F->bt_361)).under, F->e_362, &(*F->ro_363), &F->code_364v, &F->t_365v, &F->c_366v);
goto ret_;
}
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_362)).name)), rt_str("ALL", 3))) {
F->code_364v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_360), rt_str(".all", 4)); b_; }));
F->t_365v = (*(P448)rt_nil_check(F->bt_361)).under;
goto ret_;
}
while ((F->p_1079 != NULL)) {
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_1079)).name)), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_362)).name)))) {
F->code_364v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_360), rt_str(".p_", 3)), f_lower_s_15(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->p_1079)).name)))); b_; }));
F->t_365v = g_ty_int_503;
(*F->ro_363) = 1;
goto ret_;
}
F->p_1079 = (*(P444)rt_nil_check(F->p_1079)).next;
}
f_select_on_367(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_360), rt_str(".all", 4)); b_; }), (*(P448)rt_nil_check(F->bt_361)).under, F->e_362, &(*F->ro_363), &F->code_364v, &F->t_365v, &F->c_366v);
goto ret_;
}
if (((*(P448)rt_nil_check(F->bt_361)).kind == ((rt_int)7LL))) {
F->f_1080 = NULL;
F->f_1080 = (*(P448)rt_nil_check(F->bt_361)).fields;
while ((F->f_1080 != NULL)) {
if (rt_str_eq((*(P439)rt_nil_check((*(P450)rt_nil_check(F->f_1080)).name)), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_362)).name)))) {
F->c_366v = (*(P450)rt_nil_check(F->f_1080)).c;
F->code_364v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_360), rt_str(".", 1)), f_field_c_17(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_362)).name)))); b_; }));
F->t_365v = (*(P450)rt_nil_check(F->f_1080)).t;
goto ret_;
}
F->f_1080 = (*(P450)rt_nil_check(F->f_1080)).next;
}
f_fail_23((*(P444)rt_nil_check(F->e_362)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_362)).name))); b_; }));
}
f_fail_23((*(P444)rt_nil_check(F->e_362)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_362)).name))), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_364) = F->code_364v;  (*F->t_365) = F->t_365v;  (*F->c_366) = F->c_366v;
  return;
}

static void f_index_on_376(rstr *base_368, P448 bt_369, P444 e_370, int *ro_371, int lv_372, P439 *code_373, P448 *t_374, P446 *c_375) {
  struct f_index_on_376fr *F = rt_alloc(sizeof *F);
F->base_368 = base_368;
F->bt_369 = bt_369;
F->e_370 = e_370;
F->ro_371 = ro_371;
F->lv_372 = lv_372;
F->code_373 = code_373;
F->code_373v = *F->code_373;
F->t_374 = t_374;
F->t_374v = *F->t_374;
F->c_375 = c_375;
F->c_375v = *F->c_375;
F->a_1081 = NULL;
F->a_1081 = (*(P444)rt_nil_check(F->e_370)).b;
F->it_1082 = NULL;
F->c_375v = g_no_cons_514;
if (((*(P448)rt_nil_check(F->bt_369)).kind == ((rt_int)8LL))) {
f_finish_ptr_249(F->bt_369);
(*F->ro_371) = 0;
f_index_on_376(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_351(&(*F->base_368), F->bt_369); b_; }), (*(P448)rt_nil_check(F->bt_369)).target, F->e_370, &(*F->ro_371), F->lv_372, &F->code_373v, &F->t_374v, &F->c_375v);
goto ret_;
}
if (((*(P448)rt_nil_check(F->bt_369)).kind == ((rt_int)15LL))) {
if ((!f_opened_190(F->bt_369))) {
f_fail_23((*(P444)rt_nil_check(F->e_370)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->bt_369)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P448)rt_nil_check(F->bt_369)).tparams == NULL)) {
f_index_on_376(&(*F->base_368), (*(P448)rt_nil_check(F->bt_369)).under, F->e_370, &(*F->ro_371), F->lv_372, &F->code_373v, &F->t_374v, &F->c_375v);
} else {
f_index_on_376(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_368), rt_str(".all", 4)); b_; }), (*(P448)rt_nil_check(F->bt_369)).under, F->e_370, &(*F->ro_371), F->lv_372, &F->code_373v, &F->t_374v, &F->c_375v);
}
goto ret_;
}
if ((((*(P448)rt_nil_check(F->bt_369)).kind == ((rt_int)6LL)) && ((*(P448)rt_nil_check(F->bt_369)).idx2 != NULL))) {
if ((f_list_len_54(F->a_1081) != ((rt_int)2LL))) {
f_fail_23((*(P444)rt_nil_check(F->e_370)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("two subscripts expected", 23); b_; }));
}
{
F->i_1083 = rt_str_copy(f_gexpr_380(F->a_1081, (*(P448)rt_nil_check(F->bt_369)).idx, &F->it_1082));
F->j_1084 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->a_1081)).next, (*(P448)rt_nil_check(F->bt_369)).idx2, &F->it_1082));
F->code_373v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_368), rt_str(".p[(rt_index(", 13)), F->i_1083), rt_str(", ", 2)), (*F->base_368)), rt_str(".lo, ", 5)), (*F->base_368)), rt_str(".hi) - ", 7)), (*F->base_368)), rt_str(".lo) * (", 8)), (*F->base_368)), rt_str(".hi2 - ", 7)), (*F->base_368)), rt_str(".lo2 + 1) + rt_index(", 21)), F->j_1084), rt_str(", ", 2)), (*F->base_368)), rt_str(".lo2, ", 6)), (*F->base_368)), rt_str(".hi2) - ", 8)), (*F->base_368)), rt_str(".lo2]", 5)); b_; }));
F->t_374v = (*(P448)rt_nil_check(F->bt_369)).elem;
F->c_375v = (*(P448)rt_nil_check(F->bt_369)).elemcons;
}
goto ret_;
}
if ((f_list_len_54(F->a_1081) != ((rt_int)1LL))) {
f_fail_23((*(P444)rt_nil_check(F->e_370)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P448)rt_nil_check(F->bt_369)).kind == ((rt_int)5LL))) {
if (((*(P444)rt_nil_check(F->a_1081)).kind == ((rt_int)16LL))) {
F->lo_1085 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->a_1081)).a, g_ty_int_503, &F->it_1082));
F->hi_1086 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->a_1081)).b, g_ty_int_503, &F->it_1082));
F->code_373v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_368)), rt_str(", ", 2)), F->lo_1085), rt_str(", ", 2)), F->hi_1086), rt_str(")", 1)); b_; }));
F->t_374v = g_ty_string_507;
(*F->ro_371) = 1;
goto ret_;
}
{
F->i_1087 = rt_str_copy(f_gexpr_380(F->a_1081, g_ty_int_503, &F->it_1082));
F->t_374v = g_ty_ascii_506;
if (F->lv_372) {
F->code_373v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_368)), rt_str(", ", 2)), F->i_1087), rt_str("))", 2)); b_; }));
} else {
F->code_373v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_368)), rt_str(", ", 2)), F->i_1087), rt_str(")", 1)); b_; }));
(*F->ro_371) = 1;
}
}
goto ret_;
}
if (((*(P448)rt_nil_check(F->bt_369)).kind == ((rt_int)6LL))) {
F->i_1088 = rt_str_copy(f_gexpr_380(F->a_1081, (*(P448)rt_nil_check(F->bt_369)).idx, &F->it_1082));
F->code_373v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_368), rt_str(".p[rt_index(", 12)), F->i_1088), rt_str(", ", 2)), (*F->base_368)), rt_str(".lo, ", 5)), (*F->base_368)), rt_str(".hi) - ", 7)), (*F->base_368)), rt_str(".lo]", 4)); b_; }));
F->t_374v = (*(P448)rt_nil_check(F->bt_369)).elem;
F->c_375v = (*(P448)rt_nil_check(F->bt_369)).elemcons;
goto ret_;
}
f_fail_23((*(P444)rt_nil_check(F->e_370)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_373) = F->code_373v;  (*F->t_374) = F->t_374v;  (*F->c_375) = F->c_375v;
  return;
}

static rstr f_gexpr_380(P444 e_377, P448 want_378, P448 *t_379) {
  struct f_gexpr_380fr *F = rt_alloc(sizeof *F);
F->e_377 = e_377;
F->want_378 = want_378;
F->t_379 = t_379;
F->t_379v = *F->t_379;
F->k_1089 = (*(P444)rt_nil_check(F->e_377)).kind;
F->code_1090 = NULL;
F->c_1091 = NULL;
F->bt_1093 = NULL;
F->t_379v = g_ty_int_503;
if ((F->k_1089 == ((rt_int)1LL))) {
if (((F->want_378 != NULL) && ((*(P448)rt_nil_check(F->want_378)).kind == ((rt_int)3LL)))) {
F->t_379v = g_ty_float_505;
F->result_ = rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1089 == ((rt_int)2LL))) {
F->t_379v = g_ty_float_505;
F->result_ = (*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name));
goto ret_;
} else if ((F->k_1089 == ((rt_int)5LL))) {
F->t_379v = g_ty_bool_504;
F->result_ = f_itos_7((*(P444)rt_nil_check(F->e_377)).ival);
goto ret_;
} else if ((F->k_1089 == ((rt_int)3LL))) {
F->t_379v = g_ty_string_507;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_386(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)))), rt_str(", ", 2)), f_itos_7(((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_1089 == ((rt_int)6LL))) {
F->t_379v = g_ty_nil_510;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1089 == ((rt_int)4LL))) {
if (((F->want_378 != NULL) && ((*(P448)rt_nil_check(f_base_of_166(F->want_378))).kind == ((rt_int)4LL)))) {
F->t_379v = F->want_378;
} else {
F->t_379v = f_enum_type_of_389(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), (*(P444)rt_nil_check(F->e_377)).line);
}
{
F->i_1094 = f_lit_index_185((*(P448)rt_nil_check(f_base_of_166(F->t_379v))).lits, &(*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)));
if ((F->i_1094 < ((rt_int)0LL))) {
f_fail_23((*(P444)rt_nil_check(F->e_377)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1094);
goto ret_;
}
} else if ((F->k_1089 == ((rt_int)17LL))) {
F->result_ = f_gexpr_380((*(P444)rt_nil_check(F->e_377)).a, F->want_378, &F->t_379v);
goto ret_;
} else if ((F->k_1089 == ((rt_int)7LL))) {
F->y_1095 = NULL;
F->y_1095 = f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)));
if ((F->y_1095 == NULL)) {
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("ME", 2))) {
F->t_379v = g_ty_act_513;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("NIL_ACT", 7))) {
F->t_379v = g_ty_act_513;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("CRITICAL", 8)) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("NONCRITICAL", 11))) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("SYNC_RESET", 10))) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_428(f_wrap_apply_384(F->e_377), 0, &F->t_379v);
goto ret_;
}
if (((((((((rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("SYS_OUT", 7))) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("TIME", 4))) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("MILLISECONDS", 12))) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("SECONDS", 7))) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("MINUTES", 7))) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_428(f_wrap_apply_384(F->e_377), 0, &F->t_379v);
goto ret_;
}
f_fail_23((*(P444)rt_nil_check(F->e_377)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P454)rt_nil_check(F->y_1095)).kind == ((rt_int)1LL)) || ((*(P454)rt_nil_check(F->y_1095)).kind == ((rt_int)2LL)))) {
F->t_379v = (*(P454)rt_nil_check(F->y_1095)).t;
if (((*(P454)rt_nil_check(F->y_1095)).kind == ((rt_int)1LL))) {
F->ro_1096 = f_check_import_346(F->y_1095, (*(P444)rt_nil_check(F->e_377)).line);
}
F->result_ = f_access_of_340(F->y_1095);
goto ret_;
}
if (((*(P454)rt_nil_check(F->y_1095)).kind == ((rt_int)3LL))) {
F->result_ = f_gcall_428(f_wrap_apply_384(F->e_377), 0, &F->t_379v);
goto ret_;
}
f_fail_23((*(P444)rt_nil_check(F->e_377)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1089 == ((rt_int)8LL)) && (f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name))) != NULL)) && (f_user_op_424(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), f_copy_node_382((*(P444)rt_nil_check(F->e_377)).a)) != NULL))) {
F->call_1097 = NULL;
F->call_1097 = f_nn_48(((rt_int)10LL), (*(P444)rt_nil_check(F->e_377)).line);
F->fname_1098 = NULL;
F->fname_1098 = f_nn_48(((rt_int)7LL), (*(P444)rt_nil_check(F->e_377)).line);
(*(P444)rt_nil_check(F->fname_1098)).name = (*(P444)rt_nil_check(F->e_377)).name;
(*(P444)rt_nil_check(F->call_1097)).a = F->fname_1098;
(*(P444)rt_nil_check(F->call_1097)).b = f_copy_node_382((*(P444)rt_nil_check(F->e_377)).a);
F->result_ = f_gcall_428(F->call_1097, 0, &F->t_379v);
goto ret_;
} else if (((((F->k_1089 == ((rt_int)8LL)) && rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("NOT", 3))) && (F->want_378 != NULL)) && ((*(P448)rt_nil_check(F->want_378)).kind == ((rt_int)16LL)))) {
F->a_1099 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_377)).a, F->want_378, &F->t_379v));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_1099), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_54((*(P448)rt_nil_check((*(P448)rt_nil_check(F->want_378)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1089 == ((rt_int)8LL))) {
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("NOT", 3))) {
F->a_1100 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_377)).a, g_ty_bool_504, &F->t_379v));
f_check_type_175(F->t_379v, g_ty_bool_504, (*(P444)rt_nil_check(F->e_377)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1100), rt_str(")", 1));
goto ret_;
}
{
F->a_1101 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_377)).a, F->want_378, &F->t_379v));
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("+", 1))) {
F->result_ = F->a_1101;
goto ret_;
} else if (((*(P448)rt_nil_check(F->t_379v)).kind == ((rt_int)3LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1101), rt_str(")", 1));
goto ret_;
}
f_check_type_175(F->t_379v, g_ty_int_503, (*(P444)rt_nil_check(F->e_377)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1101), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1089 == ((rt_int)9LL))) {
F->result_ = f_gbinop_396(F->e_377, F->want_378, &F->t_379v);
goto ret_;
} else if ((F->k_1089 == ((rt_int)10LL))) {
if ((((*(P444)rt_nil_check((*(P444)rt_nil_check(F->e_377)).a)).kind == ((rt_int)7LL)) || ((*(P444)rt_nil_check((*(P444)rt_nil_check(F->e_377)).a)).kind == ((rt_int)12LL)))) {
F->nm_1102 = NULL;
F->nm_1102 = (*(P444)rt_nil_check(F->e_377)).a;
F->y_1103 = NULL;
if (((*(P444)rt_nil_check(F->nm_1102)).kind == ((rt_int)12LL))) {
F->nm_1102 = (*(P444)rt_nil_check(F->nm_1102)).a;
}
F->y_1103 = f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->nm_1102)).name)));
if (((((F->y_1103 == NULL) || ((*(P454)rt_nil_check(F->y_1103)).kind == ((rt_int)3LL))) || ((*(P454)rt_nil_check(F->y_1103)).kind == ((rt_int)4LL))) || ((*(P454)rt_nil_check(F->y_1103)).kind == ((rt_int)10LL)))) {
F->result_ = f_gcall_428(F->e_377, 0, &F->t_379v);
goto ret_;
}
}
{
F->base_1104 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_377)).a, NULL, &F->bt_1093));
F->ro_1092 = 1;
f_index_on_376(&F->base_1104, F->bt_1093, F->e_377, &F->ro_1092, 0, &F->code_1090, &F->t_379v, &F->c_1091);
F->result_ = (*(P439)rt_nil_check(F->code_1090));
goto ret_;
}
} else if ((F->k_1089 == ((rt_int)11LL))) {
if (((rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_377)).name)), rt_str("MAX", 3)))) {
F->result_ = f_attribute_392(F->e_377, &F->t_379v);
goto ret_;
}
{
F->base_1105 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_377)).a, NULL, &F->bt_1093));
F->ro_1092 = 1;
f_select_on_367(&F->base_1105, F->bt_1093, F->e_377, &F->ro_1092, &F->code_1090, &F->t_379v, &F->c_1091);
F->result_ = (*(P439)rt_nil_check(F->code_1090));
goto ret_;
}
} else if ((F->k_1089 == ((rt_int)12LL))) {
F->result_ = f_gcall_428(f_wrap_apply_384(F->e_377), 0, &F->t_379v);
goto ret_;
} else if ((F->k_1089 == ((rt_int)14LL))) {
F->result_ = f_constructor_400(F->e_377, F->want_378, &F->t_379v);
goto ret_;
}
f_fail_23((*(P444)rt_nil_check(F->e_377)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_379) = F->t_379v;
  return F->result_;
}

static P444 f_copy_node_382(P444 e_381) {
  struct f_copy_node_382fr *F = rt_alloc(sizeof *F);
F->e_381 = e_381;
F->x_1106 = NULL;
{ R445 *cell1107 = rt_alloc(sizeof(R445));
(*cell1107).name = NULL;
(*cell1107).tag = NULL;
(*cell1107).a = NULL;
(*cell1107).b = NULL;
(*cell1107).c = NULL;
(*cell1107).d = NULL;
(*cell1107).e = NULL;
(*cell1107).next = NULL;
F->x_1106 = cell1107;
}
(*(P444)rt_nil_check(F->x_1106)).kind = (*(P444)rt_nil_check(F->e_381)).kind;
(*(P444)rt_nil_check(F->x_1106)).line = (*(P444)rt_nil_check(F->e_381)).line;
(*(P444)rt_nil_check(F->x_1106)).ival = (*(P444)rt_nil_check(F->e_381)).ival;
(*(P444)rt_nil_check(F->x_1106)).flag = (*(P444)rt_nil_check(F->e_381)).flag;
(*(P444)rt_nil_check(F->x_1106)).name = (*(P444)rt_nil_check(F->e_381)).name;
(*(P444)rt_nil_check(F->x_1106)).tag = (*(P444)rt_nil_check(F->e_381)).tag;
(*(P444)rt_nil_check(F->x_1106)).a = (*(P444)rt_nil_check(F->e_381)).a;
(*(P444)rt_nil_check(F->x_1106)).b = (*(P444)rt_nil_check(F->e_381)).b;
(*(P444)rt_nil_check(F->x_1106)).c = (*(P444)rt_nil_check(F->e_381)).c;
(*(P444)rt_nil_check(F->x_1106)).d = (*(P444)rt_nil_check(F->e_381)).d;
F->result_ = F->x_1106;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P444 f_wrap_apply_384(P444 e_383) {
  struct f_wrap_apply_384fr *F = rt_alloc(sizeof *F);
F->e_383 = e_383;
F->x_1108 = NULL;
F->x_1108 = f_nn_48(((rt_int)10LL), (*(P444)rt_nil_check(F->e_383)).line);
(*(P444)rt_nil_check(F->x_1108)).a = F->e_383;
F->result_ = F->x_1108;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_string_386(rstr *s_385) {
  struct f_c_string_386fr *F = rt_alloc(sizeof *F);
F->s_385 = s_385;
F->n_1109 = ((rt_int)0LL);
{ rt_int lo1111 = ((rt_int)1LL), hi1112 = ((*F->s_385)).len;
for (rt_int it1113 = lo1111; it1113 <= hi1112; it1113++) {
F->i_1110 = it1113;
if (((rt_str_get((*F->s_385), F->i_1110) == 92) || (rt_str_get((*F->s_385), F->i_1110) == 63))) {
F->n_1109 = rt_add(F->n_1109, ((rt_int)1LL));
}
}
}
{
F->r_1114 = rt_str_new(rt_add(rt_add(((*F->s_385)).len, F->n_1109), ((rt_int)2LL)));
F->j_1115 = ((rt_int)1LL);
(*rt_str_at(&F->r_1114, ((rt_int)1LL))) = 34;
{ rt_int lo1117 = ((rt_int)1LL), hi1118 = ((*F->s_385)).len;
for (rt_int it1119 = lo1117; it1119 <= hi1118; it1119++) {
F->i_1116 = it1119;
F->j_1115 = rt_add(F->j_1115, ((rt_int)1LL));
if (((rt_str_get((*F->s_385), F->i_1116) == 92) || (rt_str_get((*F->s_385), F->i_1116) == 63))) {
(*rt_str_at(&F->r_1114, F->j_1115)) = 92;
F->j_1115 = rt_add(F->j_1115, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1114, F->j_1115)) = rt_str_get((*F->s_385), F->i_1116);
}
}
(*rt_str_at(&F->r_1114, rt_add(F->j_1115, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1114;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P448 f_enum_type_of_389(rstr *lit_387, rt_int line_388) {
  struct f_enum_type_of_389fr *F = rt_alloc(sizeof *F);
F->lit_387 = lit_387;
F->line_388 = line_388;
F->y_1120 = NULL;
F->y_1120 = g_scope_stack_476;
F->c_1121 = NULL;
if ((f_lit_index_185((*(P448)rt_nil_check(g_ty_ascii_506)).lits, &(*F->lit_387)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_506;
goto ret_;
}
while ((F->y_1120 != NULL)) {
if ((((((*(P454)rt_nil_check(F->y_1120)).kind == ((rt_int)6LL)) || ((*(P454)rt_nil_check(F->y_1120)).kind == ((rt_int)5LL))) && ((*(P454)rt_nil_check(F->y_1120)).st != NULL)) && ((*(P444)rt_nil_check((*(P454)rt_nil_check(F->y_1120)).st)).kind == ((rt_int)72LL)))) {
if ((f_lit_index_185((*(P444)rt_nil_check((*(P454)rt_nil_check(F->y_1120)).st)).a, &(*F->lit_387)) >= ((rt_int)0LL))) {
if (((*(P454)rt_nil_check(F->y_1120)).kind == ((rt_int)5LL))) {
F->st_1122 = NULL;
F->st_1122 = f_nn_48(((rt_int)80LL), F->line_388);
(*(P444)rt_nil_check(F->st_1122)).name = (*(P454)rt_nil_check(F->y_1120)).name;
F->result_ = f_resolve_subtype_188(F->st_1122, &F->c_1121);
goto ret_;
}
F->result_ = f_resolve_subtype_188((*(P454)rt_nil_check(F->y_1120)).st, &F->c_1121);
goto ret_;
}
}
F->y_1120 = (*(P454)rt_nil_check(F->y_1120)).stack;
}
f_fail_23(F->line_388, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_387)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_attribute_392(P444 e_390, P448 *t_391) {
  struct f_attribute_392fr *F = rt_alloc(sizeof *F);
F->e_390 = e_390;
F->t_391 = t_391;
F->t_391v = *F->t_391;
F->bt_1123 = NULL;
F->c_1124 = NULL;
F->t_391v = g_ty_int_503;
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_390)).name)), rt_str("LEN", 3))) {
F->base_1125 = NULL;
F->base_1125 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_380((*(P444)rt_nil_check(F->e_390)).a, NULL, &F->bt_1123); b_; }));
if (((*(P448)rt_nil_check(F->bt_1123)).kind == ((rt_int)8LL))) {
f_finish_ptr_249(F->bt_1123);
F->base_1125 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_351(&(*(P439)rt_nil_check(F->base_1125)), F->bt_1123); b_; }));
F->bt_1123 = (*(P448)rt_nil_check(F->bt_1123)).target;
}
if (((*(P448)rt_nil_check(F->bt_1123)).kind != ((rt_int)5LL))) {
f_fail_23((*(P444)rt_nil_check(F->e_390)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P439)rt_nil_check(F->base_1125))), rt_str(").len", 5));
goto ret_;
}
if (((*(P444)rt_nil_check((*(P444)rt_nil_check(F->e_390)).a)).kind == ((rt_int)7LL))) {
F->y_1126 = NULL;
F->y_1126 = f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check((*(P444)rt_nil_check(F->e_390)).a)).name)));
if (((F->y_1126 != NULL) && (((*(P454)rt_nil_check(F->y_1126)).kind == ((rt_int)6LL)) || ((*(P454)rt_nil_check(F->y_1126)).kind == ((rt_int)5LL))))) {
F->st_1127 = NULL;
F->st_1127 = f_nn_48(((rt_int)80LL), (*(P444)rt_nil_check(F->e_390)).line);
(*(P444)rt_nil_check(F->st_1127)).name = (*(P444)rt_nil_check((*(P444)rt_nil_check(F->e_390)).a)).name;
F->t_391v = f_resolve_subtype_188(F->st_1127, &F->c_1124);
if (((*(P448)rt_nil_check(F->t_391v)).kind == ((rt_int)4LL))) {
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_390)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_54((*(P448)rt_nil_check(F->t_391v)).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P446)rt_nil_check(F->c_1124)).lo != NULL)) {
if (rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_390)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P439)rt_nil_check((*(P446)rt_nil_check(F->c_1124)).lo));
goto ret_;
}
F->result_ = (*(P439)rt_nil_check((*(P446)rt_nil_check(F->c_1124)).hi));
goto ret_;
}
}
}
f_fail_23((*(P444)rt_nil_check(F->e_390)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P439)rt_nil_check((*(P444)rt_nil_check(F->e_390)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_391) = F->t_391v;
  return F->result_;
}

static rstr f_gbinop_396(P444 e_393, P448 want_394, P448 *t_395) {
  struct f_gbinop_396fr *F = rt_alloc(sizeof *F);
F->e_393 = e_393;
F->want_394 = want_394;
F->t_395 = t_395;
F->t_395v = *F->t_395;
F->op_1128 = NULL;
F->op_1128 = (*(P444)rt_nil_check(F->e_393)).name;
F->ta_1129 = NULL;
F->tb_1130 = NULL;
F->hint_1131 = NULL;
F->uy_1132 = NULL;
F->t_395v = g_ty_bool_504;
if ((f_lookup_140(&(*(P439)rt_nil_check(F->op_1128))) != NULL)) {
F->l_1133 = NULL;
F->r_1134 = NULL;
F->l_1133 = f_copy_node_382((*(P444)rt_nil_check(F->e_393)).a);
F->r_1134 = f_copy_node_382((*(P444)rt_nil_check(F->e_393)).b);
(*(P444)rt_nil_check(F->l_1133)).next = F->r_1134;
F->uy_1132 = f_user_op_424(&(*(P439)rt_nil_check(F->op_1128)), F->l_1133);
if ((F->uy_1132 != NULL)) {
F->call_1135 = NULL;
F->call_1135 = f_nn_48(((rt_int)10LL), (*(P444)rt_nil_check(F->e_393)).line);
F->fname_1136 = NULL;
F->fname_1136 = f_nn_48(((rt_int)7LL), (*(P444)rt_nil_check(F->e_393)).line);
(*(P444)rt_nil_check(F->fname_1136)).name = F->op_1128;
(*(P444)rt_nil_check(F->call_1135)).a = F->fname_1136;
(*(P444)rt_nil_check(F->call_1135)).b = F->l_1133;
F->result_ = f_gcall_428(F->call_1135, 0, &F->t_395v);
goto ret_;
}
}
if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("IN", 2))) {
F->s_1137 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_393)).b, NULL, &F->tb_1130));
if (((*(P448)rt_nil_check(F->tb_1130)).kind != ((rt_int)16LL))) {
f_fail_23((*(P444)rt_nil_check(F->e_393)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_1138 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_393)).a, (*(P448)rt_nil_check(F->tb_1130)).elem, &F->ta_1129));
f_check_type_175(F->ta_1129, (*(P448)rt_nil_check(F->tb_1130)).elem, (*(P444)rt_nil_check(F->e_393)).line);
F->t_395v = g_ty_bool_504;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_1138), rt_str(", ", 2)), F->s_1137), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("AND", 3)) || rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("OR", 2))) || rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("XOR", 3))) && (F->want_394 != NULL)) && ((*(P448)rt_nil_check(F->want_394)).kind == ((rt_int)16LL)))) {
F->a_1139 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_393)).a, F->want_394, &F->ta_1129));
F->b_1140 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_393)).b, F->want_394, &F->tb_1130));
f_check_type_175(F->tb_1130, F->ta_1129, (*(P444)rt_nil_check(F->e_393)).line);
F->t_395v = F->ta_1129;
if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_1139), rt_str(", ", 2)), F->b_1140), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_1139), rt_str(", ", 2)), F->b_1140), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_1139), rt_str(", ", 2)), F->b_1140), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("AND", 3)) || rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("OR", 2))) || rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("XOR", 3)))) {
F->a_1141 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_393)).a, g_ty_bool_504, &F->ta_1129));
F->b_1142 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_393)).b, g_ty_bool_504, &F->tb_1130));
f_check_type_175(F->ta_1129, g_ty_bool_504, (*(P444)rt_nil_check(F->e_393)).line);
f_check_type_175(F->tb_1130, g_ty_bool_504, (*(P444)rt_nil_check(F->e_393)).line);
if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1141), rt_str(" && ", 4)), F->b_1142), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1141), rt_str(" || ", 4)), F->b_1142), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1141), rt_str(" != ", 4)), F->b_1142), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("&", 1))) {
F->wa_1143 = NULL;
F->wb_1144 = NULL;
if (((*(P444)rt_nil_check((*(P444)rt_nil_check(F->e_393)).a)).kind == ((rt_int)4LL))) {
F->wa_1143 = g_ty_ascii_506;
}
if (((*(P444)rt_nil_check((*(P444)rt_nil_check(F->e_393)).b)).kind == ((rt_int)4LL))) {
F->wb_1144 = g_ty_ascii_506;
}
{
F->a_1145 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_393)).a, F->wa_1143, &F->ta_1129));
F->b_1146 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_393)).b, F->wb_1144, &F->tb_1130));
F->t_395v = g_ty_string_507;
if ((((*(P448)rt_nil_check(F->ta_1129)).kind == ((rt_int)5LL)) && ((*(P448)rt_nil_check(F->tb_1130)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_1145), rt_str(", ", 2)), F->b_1146), rt_str(")", 1));
goto ret_;
} else if ((((*(P448)rt_nil_check(F->ta_1129)).kind == ((rt_int)5LL)) && ((*(P448)rt_nil_check(F->tb_1130)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_1145), rt_str(", ", 2)), F->b_1146), rt_str(")", 1));
goto ret_;
} else if ((((*(P448)rt_nil_check(F->ta_1129)).kind == ((rt_int)4LL)) && ((*(P448)rt_nil_check(F->tb_1130)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_1145), rt_str(", ", 2)), F->b_1146), rt_str(")", 1));
goto ret_;
} else if ((((*(P448)rt_nil_check(F->ta_1129)).kind == ((rt_int)4LL)) && ((*(P448)rt_nil_check(F->tb_1130)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_1145), rt_str(", ", 2)), F->b_1146), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P444)rt_nil_check(F->e_393)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_93(&(*(P439)rt_nil_check(F->op_1128))) && (!rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("IN", 2))))) {
if (((((*(P444)rt_nil_check((*(P444)rt_nil_check(F->e_393)).a)).kind == ((rt_int)4LL)) || ((*(P444)rt_nil_check((*(P444)rt_nil_check(F->e_393)).a)).kind == ((rt_int)6LL))) || ((*(P444)rt_nil_check((*(P444)rt_nil_check(F->e_393)).a)).kind == ((rt_int)1LL)))) {
F->dummy_1147 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_393)).b, NULL, &F->hint_1131));
}
{
F->a_1148 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_393)).a, F->hint_1131, &F->ta_1129));
F->b_1149 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_393)).b, F->ta_1129, &F->tb_1130));
F->ct_1150 = NULL;
F->ct_1150 = f_base_of_166(F->ta_1129);
F->t_395v = g_ty_bool_504;
if ((((*(P448)rt_nil_check(F->ta_1129)).kind != ((rt_int)11LL)) && ((*(P448)rt_nil_check(F->tb_1130)).kind != ((rt_int)11LL)))) {
f_check_type_175(F->tb_1130, F->ta_1129, (*(P444)rt_nil_check(F->e_393)).line);
}
if (((*(P448)rt_nil_check(F->ta_1129)).kind == ((rt_int)11LL))) {
F->ct_1150 = f_base_of_166(F->tb_1130);
}
if (((*(P448)rt_nil_check(F->ct_1150)).kind == ((rt_int)5LL))) {
if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_1148), rt_str(", ", 2)), F->b_1149), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_1148), rt_str(", ", 2)), F->b_1149), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_1148), rt_str(", ", 2)), F->b_1149), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_1148), rt_str(", ", 2)), F->b_1149), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_1149), rt_str(", ", 2)), F->a_1148), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_1149), rt_str(", ", 2)), F->a_1148), rt_str(")", 1));
goto ret_;
}
if (((*(P448)rt_nil_check(F->ct_1150)).kind == ((rt_int)16LL))) {
if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_1148), rt_str(", ", 2)), F->b_1149), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_1148), rt_str(", ", 2)), F->b_1149), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_1148), rt_str(", ", 2)), F->b_1149), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_1149), rt_str(", ", 2)), F->a_1148), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P444)rt_nil_check(F->e_393)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_211(F->ct_1150)) {
if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("=", 1))) {
F->result_ = f_eq_code_223(F->ct_1150, &F->a_1148, &F->b_1149);
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_223(F->ct_1150, &F->a_1148, &F->b_1149)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P444)rt_nil_check(F->e_393)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1148), rt_str(" == ", 4)), F->b_1149), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1148), rt_str(" != ", 4)), F->b_1149), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1148), rt_str(" ", 1)), (*(P439)rt_nil_check(F->op_1128))), rt_str(" ", 1)), F->b_1149), rt_str(")", 1));
goto ret_;
}
}
{
F->a_1151 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_393)).a, F->want_394, &F->ta_1129));
F->b_1152 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->e_393)).b, F->ta_1129, &F->tb_1130));
if ((((*(P448)rt_nil_check(F->ta_1129)).kind == ((rt_int)3LL)) || ((*(P448)rt_nil_check(F->tb_1130)).kind == ((rt_int)3LL)))) {
F->t_395v = g_ty_float_505;
if (((rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("+", 1)) || rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("-", 1))) || rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1151), rt_str(" ", 1)), (*(P439)rt_nil_check(F->op_1128))), rt_str(" ", 1)), F->b_1152), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_1151), rt_str(", ", 2)), F->b_1152), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_1151), rt_str(", ", 2)), F->b_1152), rt_str(")", 1));
goto ret_;
}
}
f_check_type_175(F->ta_1129, g_ty_int_503, (*(P444)rt_nil_check(F->e_393)).line);
f_check_type_175(F->tb_1130, g_ty_int_503, (*(P444)rt_nil_check(F->e_393)).line);
F->t_395v = g_ty_int_503;
if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1151), rt_str(", ", 2)), F->b_1152), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1151), rt_str(", ", 2)), F->b_1152), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_1151), rt_str(", ", 2)), F->b_1152), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_1151), rt_str(", ", 2)), F->b_1152), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_1151), rt_str(", ", 2)), F->b_1152), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P439)rt_nil_check(F->op_1128)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_1151), rt_str(", ", 2)), F->b_1152), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P444)rt_nil_check(F->e_393)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P439)rt_nil_check(F->op_1128))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_395) = F->t_395v;
  return F->result_;
}

static rstr f_constructor_400(P444 e_397, P448 want_398, P448 *t_399) {
  struct f_constructor_400fr *F = rt_alloc(sizeof *F);
F->e_397 = e_397;
F->want_398 = want_398;
F->t_399 = t_399;
F->t_399v = *F->t_399;
F->it_1153 = NULL;
F->it_1153 = (*(P444)rt_nil_check(F->e_397)).a;
F->f_1154 = NULL;
F->vt_1155 = NULL;
if (((F->want_398 != NULL) && ((*(P448)rt_nil_check(F->want_398)).kind == ((rt_int)16LL)))) {
F->s_1156 = NULL;
F->s_1156 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
F->t_399v = F->want_398;
while ((F->it_1153 != NULL)) {
F->v_1157 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->it_1153)).b, (*(P448)rt_nil_check(F->want_398)).elem, &F->vt_1155));
f_check_type_175(F->vt_1155, (*(P448)rt_nil_check(F->want_398)).elem, (*(P444)rt_nil_check(F->e_397)).line);
F->s_1156 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (*(P439)rt_nil_check(F->s_1156))), rt_str(", ", 2)), F->v_1157), rt_str(")", 1)); b_; }));
F->it_1153 = (*(P444)rt_nil_check(F->it_1153)).next;
}
F->result_ = (*(P439)rt_nil_check(F->s_1156));
goto ret_;
}
if (((F->want_398 != NULL) && ((*(P448)rt_nil_check(F->want_398)).kind == ((rt_int)15LL)))) {
f_fail_23((*(P444)rt_nil_check(F->e_397)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (*(P439)rt_nil_check((*(P448)rt_nil_check(F->want_398)).name))), rt_str(" needs the underlying type", 26)); b_; }));
}
if ((((F->want_398 != NULL) && ((*(P448)rt_nil_check(F->want_398)).kind == ((rt_int)6LL))) && ((*(P448)rt_nil_check(F->want_398)).idx2 == NULL))) {
F->tmp_1158 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->ct_1159 = rt_str_copy(f_ctype_177(F->want_398));
F->et_1160 = rt_str_copy(f_ctype_177((*(P448)rt_nil_check(F->want_398)).elem));
F->parts_1161 = NULL;
F->t_399v = F->want_398;
if (((((F->it_1153 != NULL) && ((*(P444)rt_nil_check(F->it_1153)).a != NULL)) && ((*(P444)rt_nil_check((*(P444)rt_nil_check(F->it_1153)).a)).b != NULL)) && ((*(P444)rt_nil_check(F->it_1153)).next == NULL))) {
F->lo_1162 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check((*(P444)rt_nil_check(F->it_1153)).a)).a, (*(P448)rt_nil_check(F->want_398)).idx, &F->vt_1155));
F->hi_1163 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check((*(P444)rt_nil_check(F->it_1153)).a)).b, (*(P448)rt_nil_check(F->want_398)).idx, &F->vt_1155));
F->v_1164 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->it_1153)).b, (*(P448)rt_nil_check(F->want_398)).elem, &F->vt_1155));
f_check_type_175(F->vt_1155, (*(P448)rt_nil_check(F->want_398)).elem, (*(P444)rt_nil_check(F->e_397)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1159), rt_str(" ", 1)), F->tmp_1158), rt_str("; ", 2)), F->tmp_1158), rt_str(".lo = ", 6)), F->lo_1162), rt_str("; ", 2)), F->tmp_1158), rt_str(".hi = ", 6)), F->hi_1163), rt_str("; ", 2)), F->tmp_1158), rt_str(".lo2 = ", 7)), F->tmp_1158), rt_str(".hi2 = 1; ", 10)), F->tmp_1158), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1160), rt_str(") * (size_t)RT_CNT(", 19)), F->tmp_1158), rt_str(")); for (rt_int i_ = 0; i_ < RT_CNT(", 36)), F->tmp_1158), rt_str("); i_++) ", 9)), F->tmp_1158), rt_str(".p[i_] = ", 9)), f_copy_code_219((*(P448)rt_nil_check(F->want_398)).elem, &F->v_1164)), rt_str("; ", 2)), F->tmp_1158), rt_str("; })", 4));
goto ret_;
}
F->parts_1161 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1159), rt_str(" ", 1)), F->tmp_1158), rt_str("; ", 2)), F->tmp_1158), rt_str(".lo = 1; ", 9)), F->tmp_1158), rt_str(".hi = ", 6)), f_itos_7(f_list_len_54(F->it_1153))), rt_str("; ", 2)), F->tmp_1158), rt_str(".lo2 = ", 7)), F->tmp_1158), rt_str(".hi2 = 1; ", 10)), F->tmp_1158), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1160), rt_str(") * ", 4)), f_itos_7(rt_add(f_list_len_54(F->it_1153), ((rt_int)1LL)))), rt_str(");", 2)); b_; }));
{ rt_int lo1166 = ((rt_int)0LL), hi1167 = rt_sub(f_list_len_54((*(P444)rt_nil_check(F->e_397)).a), ((rt_int)1LL));
for (rt_int it1168 = lo1166; it1168 <= hi1167; it1168++) {
F->i_1165 = it1168;
if (((*(P444)rt_nil_check(F->it_1153)).a != NULL)) {
f_fail_23((*(P444)rt_nil_check(F->e_397)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only positional array constructors are handled", 46); b_; }));
}
{
F->v_1169 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->it_1153)).b, (*(P448)rt_nil_check(F->want_398)).elem, &F->vt_1155));
f_check_type_175(F->vt_1155, (*(P448)rt_nil_check(F->want_398)).elem, (*(P444)rt_nil_check(F->e_397)).line);
F->parts_1161 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->parts_1161)), rt_str(" ", 1)), F->tmp_1158), rt_str(".p[", 3)), f_itos_7(F->i_1165)), rt_str("] = ", 4)), f_copy_code_219((*(P448)rt_nil_check(F->want_398)).elem, &F->v_1169)), rt_str(";", 1)); b_; }));
}
F->it_1153 = (*(P444)rt_nil_check(F->it_1153)).next;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->parts_1161)), rt_str(" ", 1)), F->tmp_1158), rt_str("; })", 4));
goto ret_;
}
if (((F->want_398 == NULL) || ((*(P448)rt_nil_check(F->want_398)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P444)rt_nil_check(F->e_397)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_399v = F->want_398;
F->f_1154 = (*(P448)rt_nil_check(F->want_398)).fields;
{
F->tmp_1170 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_1171 = NULL;
F->parts_1171 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177(F->want_398)), rt_str(" ", 1)), F->tmp_1170), rt_str(";", 1)); b_; }));
if (((f_list_len_54(F->it_1153) != ((rt_int)0LL)) && (f_list_len_54(F->it_1153) != ((rt_int)0LL)))) {
while (((F->it_1153 != NULL) && (F->f_1154 != NULL))) {
if (((((*(P444)rt_nil_check(F->it_1153)).a == NULL) || ((*(P444)rt_nil_check((*(P444)rt_nil_check((*(P444)rt_nil_check(F->it_1153)).a)).a)).kind != ((rt_int)7LL))) || (!rt_str_eq((*(P439)rt_nil_check((*(P444)rt_nil_check((*(P444)rt_nil_check((*(P444)rt_nil_check(F->it_1153)).a)).a)).name)), (*(P439)rt_nil_check((*(P450)rt_nil_check(F->f_1154)).name)))))) {
f_fail_23((*(P444)rt_nil_check(F->e_397)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P439)rt_nil_check((*(P450)rt_nil_check(F->f_1154)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_1172 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->it_1153)).b, (*(P450)rt_nil_check(F->f_1154)).t, &F->vt_1155));
f_check_type_175(F->vt_1155, (*(P450)rt_nil_check(F->f_1154)).t, (*(P444)rt_nil_check(F->e_397)).line);
F->parts_1171 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->parts_1171)), rt_str(" ", 1)), F->tmp_1170), rt_str(".", 1)), f_field_c_17(&(*(P439)rt_nil_check((*(P450)rt_nil_check(F->f_1154)).name)))), rt_str(" = ", 3)), f_copy_code_219((*(P450)rt_nil_check(F->f_1154)).t, &F->v_1172)), rt_str(";", 1)); b_; }));
}
F->it_1153 = (*(P444)rt_nil_check(F->it_1153)).next;
F->f_1154 = (*(P450)rt_nil_check(F->f_1154)).next;
}
}
if (((F->it_1153 != NULL) || (F->f_1154 != NULL))) {
f_fail_23((*(P444)rt_nil_check(F->e_397)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->parts_1171)), rt_str(" ", 1)), F->tmp_1170), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_399) = F->t_399v;
  return F->result_;
}

static int f_fits_403(P454 y_401, P444 args_402) {
  struct f_fits_403fr *F = rt_alloc(sizeof *F);
F->y_401 = y_401;
F->args_402 = args_402;
F->a_1173 = NULL;
F->a_1173 = F->args_402;
F->pm_1174 = NULL;
F->pm_1174 = (*(P454)rt_nil_check(F->y_401)).params;
F->t_1175 = NULL;
F->saved_1176 = NULL;
F->saved_1176 = g_code_486;
F->ok_1177 = 1;
F->lv_1178 = NULL;
F->lc_1179 = NULL;
g_trial_501 = rt_add(g_trial_501, ((rt_int)1LL));
g_code_486 = f_new_buffer_24();
{ rt_frame xf1181;
if (RT_TRY(xf1181)) {
while (((F->ok_1177 && (F->a_1173 != NULL)) && (F->pm_1174 != NULL))) {
if ((((*(P452)rt_nil_check(F->pm_1174)).mode == ((rt_int)2LL)) || ((*(P452)rt_nil_check(F->pm_1174)).mode == ((rt_int)3LL)))) {
f_lvalue_359(F->a_1173, &F->lv_1178, &F->t_1175, &F->lc_1179, &F->ro_1180);
} else {
F->v_1183 = rt_str_copy(f_gexpr_380(F->a_1173, (*(P452)rt_nil_check(F->pm_1174)).t, &F->t_1175));
}
if ((!(f_same_164(F->t_1175, (*(P452)rt_nil_check(F->pm_1174)).t) || (((*(P448)rt_nil_check(F->t_1175)).kind == ((rt_int)11LL)) && ((*(P448)rt_nil_check((*(P452)rt_nil_check(F->pm_1174)).t)).kind == ((rt_int)8LL)))))) {
F->ok_1177 = 0;
}
F->a_1173 = (*(P444)rt_nil_check(F->a_1173)).next;
F->pm_1174 = (*(P452)rt_nil_check(F->pm_1174)).next;
}
if (((F->a_1173 != NULL) || (F->pm_1174 != NULL))) {
F->ok_1177 = 0;
}
RT_POP(xf1181);
} else {
RT_POP(xf1181);
int x1182 = rt_xcur;
if (0 || x1182 == ex_compile_error_1) {
F->ok_1177 = 0;
} else {
rt_raise(x1182);
}
}
}
g_trial_501 = rt_sub(g_trial_501, ((rt_int)1LL));
g_code_486 = F->saved_1176;
F->result_ = F->ok_1177;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P454 f_resolve_overload_408(rstr *name_404, P444 args_405, int is_stmt_406, rt_int line_407) {
  struct f_resolve_overload_408fr *F = rt_alloc(sizeof *F);
F->name_404 = name_404;
F->args_405 = args_405;
F->is_stmt_406 = is_stmt_406;
F->line_407 = line_407;
F->y_1184 = NULL;
F->y_1184 = (*(P460)rt_nil_check(g_table_474)).p[rt_index(f_hash_138(&(*F->name_404)), (*(P460)rt_nil_check(g_table_474)).lo, (*(P460)rt_nil_check(g_table_474)).hi) - (*(P460)rt_nil_check(g_table_474)).lo];
F->first_1185 = NULL;
F->n_1186 = ((rt_int)0LL);
while ((F->y_1184 != NULL)) {
if ((rt_str_eq((*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_1184)).name)), (*F->name_404)) && (((*(P454)rt_nil_check(F->y_1184)).kind == ((rt_int)3LL)) || ((*(P454)rt_nil_check(F->y_1184)).kind == ((rt_int)4LL))))) {
F->n_1186 = rt_add(F->n_1186, ((rt_int)1LL));
if ((F->first_1185 == NULL)) {
F->first_1185 = F->y_1184;
}
if (((((*(P454)rt_nil_check(F->y_1184)).kind == ((rt_int)4LL)) == F->is_stmt_406) && f_fits_403(F->y_1184, F->args_405))) {
F->result_ = F->y_1184;
goto ret_;
}
}
F->y_1184 = (*(P454)rt_nil_check(F->y_1184)).chain;
}
if (f_is_builtin_410(&(*F->name_404))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_1186 > ((rt_int)1LL))) {
f_fail_23(F->line_407, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_404)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_1185;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_builtin_410(rstr *n_409) {
  struct f_is_builtin_410fr *F = rt_alloc(sizeof *F);
F->n_409 = n_409;
F->result_ = (((((((((((((((rt_str_eq((*F->n_409), rt_str("ABS", 3)) || rt_str_eq((*F->n_409), rt_str("POS", 3))) || rt_str_eq((*F->n_409), rt_str("SUCC", 4))) || rt_str_eq((*F->n_409), rt_str("PRED", 4))) || rt_str_eq((*F->n_409), rt_str("SQRT", 4))) || rt_str_eq((*F->n_409), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_409), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_409), rt_str("WRITE", 5))) || rt_str_eq((*F->n_409), rt_str("READLN", 6))) || rt_str_eq((*F->n_409), rt_str("SEND", 4))) || rt_str_eq((*F->n_409), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_409), rt_str("DELAY", 5))) || rt_str_eq((*F->n_409), rt_str("TIME", 4))) || rt_str_eq((*F->n_409), rt_str("CNVT", 4))) || rt_str_eq((*F->n_409), rt_str("FORMAT", 6))) || f_is_low_level_412(&(*F->n_409)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_low_level_412(rstr *n_411) {
  struct f_is_low_level_412fr *F = rt_alloc(sizeof *F);
F->n_411 = n_411;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_411), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_411), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_411), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_411), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_411), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_411), rt_str("LOCK", 4))) || rt_str_eq((*F->n_411), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_411), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_411), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_411), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_411), rt_str("WAITING", 7))) || rt_str_eq((*F->n_411), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_411), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_411), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_411), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_411), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_411), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_411), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_411), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_me_high_416(P444 tt_413, rt_int line_414, P448 *t_415) {
  struct f_me_high_416fr *F = rt_alloc(sizeof *F);
F->tt_413 = tt_413;
F->line_414 = line_414;
F->t_415 = t_415;
F->t_415v = *F->t_415;
F->c_1187 = NULL;
if ((F->tt_413 == NULL)) {
f_fail_23(F->line_414, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_415v = f_resolve_subtype_188(F->tt_413, &F->c_1187);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->t_415v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_418(F->t_415v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_415) = F->t_415v;
  return F->result_;
}

static rstr f_type_tag_418(P448 t_417) {
  struct f_type_tag_418fr *F = rt_alloc(sizeof *F);
F->t_417 = t_417;
if (((*(P448)rt_nil_check(F->t_417)).name != NULL)) {
F->result_ = (*(P439)rt_nil_check((*(P448)rt_nil_check(F->t_417)).name));
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_lock_ref_421(P444 e_419, rstr *name_420) {
  struct f_lock_ref_421fr *F = rt_alloc(sizeof *F);
F->e_419 = e_419;
F->name_420 = name_420;
F->lv_1188 = NULL;
F->t_1189 = NULL;
F->c_1190 = NULL;
f_lvalue_359(F->e_419, &F->lv_1188, &F->t_1189, &F->c_1190, &F->ro_1191);
if (((*(P448)rt_nil_check(F->t_1189)).kind != ((rt_int)13LL))) {
f_fail_23((*(P444)rt_nil_check(F->e_419)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_420), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (*(P439)rt_nil_check(F->lv_1188)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P454 f_user_op_424(rstr *op_422, P444 args_423) {
  struct f_user_op_424fr *F = rt_alloc(sizeof *F);
F->op_422 = op_422;
F->args_423 = args_423;
F->y_1192 = NULL;
F->y_1192 = (*(P460)rt_nil_check(g_table_474)).p[rt_index(f_hash_138(&(*F->op_422)), (*(P460)rt_nil_check(g_table_474)).lo, (*(P460)rt_nil_check(g_table_474)).hi) - (*(P460)rt_nil_check(g_table_474)).lo];
while ((F->y_1192 != NULL)) {
if (((rt_str_eq((*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_1192)).name)), (*F->op_422)) && ((*(P454)rt_nil_check(F->y_1192)).kind == ((rt_int)3LL))) && f_fits_403(F->y_1192, F->args_423))) {
F->result_ = F->y_1192;
goto ret_;
}
F->y_1192 = (*(P454)rt_nil_check(F->y_1192)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gcall_428(P444 e_425, int is_stmt_426, P448 *t_427) {
  struct f_gcall_428fr *F = rt_alloc(sizeof *F);
F->e_425 = e_425;
F->is_stmt_426 = is_stmt_426;
F->t_427 = t_427;
F->t_427v = *F->t_427;
F->fn_1193 = NULL;
F->fn_1193 = (*(P444)rt_nil_check(F->e_425)).a;
F->tt_1194 = NULL;
F->y_1195 = NULL;
F->args_1196 = NULL;
F->args_1196 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_1197 = NULL;
F->a_1197 = (*(P444)rt_nil_check(F->e_425)).b;
F->pm_1198 = NULL;
F->lt_1199 = NULL;
F->vt_1200 = NULL;
F->lv_1201 = NULL;
F->lc_1202 = NULL;
if (((*(P444)rt_nil_check(F->fn_1193)).kind == ((rt_int)12LL))) {
F->tt_1194 = (*(P444)rt_nil_check(F->fn_1193)).b;
F->fn_1193 = (*(P444)rt_nil_check(F->fn_1193)).a;
}
F->y_1195 = f_lookup_140(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1193)).name)));
if ((F->y_1195 == NULL)) {
F->result_ = f_builtin_435(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1193)).name)), F->tt_1194, (*(P444)rt_nil_check(F->e_425)).b, (*(P444)rt_nil_check(F->e_425)).line, F->is_stmt_426, &F->t_427v);
goto ret_;
}
if (((*(P454)rt_nil_check(F->y_1195)).kind == ((rt_int)10LL))) {
F->y_1195 = f_instantiate_338(F->y_1195, F->tt_1194, (*(P444)rt_nil_check(F->e_425)).b, (*(P444)rt_nil_check(F->e_425)).line);
} else if ((((*(P454)rt_nil_check(F->y_1195)).kind == ((rt_int)3LL)) || ((*(P454)rt_nil_check(F->y_1195)).kind == ((rt_int)4LL)))) {
F->y_1195 = f_resolve_overload_408(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1193)).name)), (*(P444)rt_nil_check(F->e_425)).b, F->is_stmt_426, (*(P444)rt_nil_check(F->e_425)).line);
if ((F->y_1195 == NULL)) {
F->result_ = f_builtin_435(&(*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1193)).name)), F->tt_1194, (*(P444)rt_nil_check(F->e_425)).b, (*(P444)rt_nil_check(F->e_425)).line, F->is_stmt_426, &F->t_427v);
goto ret_;
}
}
if ((((*(P454)rt_nil_check(F->y_1195)).kind != ((rt_int)3LL)) && ((*(P454)rt_nil_check(F->y_1195)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P444)rt_nil_check(F->e_425)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1193)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_426 && ((*(P454)rt_nil_check(F->y_1195)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P444)rt_nil_check(F->e_425)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1193)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_426) && ((*(P454)rt_nil_check(F->y_1195)).kind != ((rt_int)3LL)))) {
f_fail_23((*(P444)rt_nil_check(F->e_425)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1193)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_1198 = (*(P454)rt_nil_check(F->y_1195)).params;
if (((*(P454)rt_nil_check(F->y_1195)).level > ((rt_int)0LL))) {
F->args_1196 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1205 = ((rt_int)1LL), hi1206 = rt_sub(g_cur_level_489, (*(P454)rt_nil_check(F->y_1195)).level);
for (rt_int it1207 = lo1205; it1207 <= hi1206; it1207++) {
F->i_1204 = it1207;
F->args_1196 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check(F->args_1196)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_1197 != NULL) && (F->pm_1198 != NULL))) {
if ((((*(P439)rt_nil_check(F->args_1196))).len > ((rt_int)0LL))) {
F->args_1196 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check(F->args_1196)), rt_str(", ", 2)); b_; }));
}
if ((((*(P452)rt_nil_check(F->pm_1198)).mode == ((rt_int)2LL)) || ((*(P452)rt_nil_check(F->pm_1198)).mode == ((rt_int)3LL)))) {
f_lvalue_359(F->a_1197, &F->lv_1201, &F->lt_1199, &F->lc_1202, &F->ro_1203);
if (F->ro_1203) {
f_fail_23((*(P444)rt_nil_check(F->e_425)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check((*(P452)rt_nil_check(F->pm_1198)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_175(F->lt_1199, (*(P452)rt_nil_check(F->pm_1198)).t, (*(P444)rt_nil_check(F->e_425)).line);
F->args_1196 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->args_1196)), rt_str("&", 1)), (*(P439)rt_nil_check(F->lv_1201))); b_; }));
} else if ((((*(P452)rt_nil_check(F->pm_1198)).mode == ((rt_int)4LL)) && f_is_lvalue_353(F->a_1197))) {
f_lvalue_359(F->a_1197, &F->lv_1201, &F->lt_1199, &F->lc_1202, &F->ro_1203);
f_check_type_175(F->lt_1199, (*(P452)rt_nil_check(F->pm_1198)).t, (*(P444)rt_nil_check(F->e_425)).line);
F->args_1196 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->args_1196)), rt_str("&", 1)), (*(P439)rt_nil_check(F->lv_1201))); b_; }));
} else if (((*(P452)rt_nil_check(F->pm_1198)).mode == ((rt_int)4LL))) {
F->v_1208 = rt_str_copy(f_gexpr_380(F->a_1197, (*(P452)rt_nil_check(F->pm_1198)).t, &F->vt_1200));
F->ct_1209 = rt_str_copy(f_ctype_177((*(P452)rt_nil_check(F->pm_1198)).t));
f_check_type_175(F->vt_1200, (*(P452)rt_nil_check(F->pm_1198)).t, (*(P444)rt_nil_check(F->e_425)).line);
F->args_1196 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->args_1196)), rt_str("({ ", 3)), F->ct_1209), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1209), rt_str(")); *b_ = ", 10)), F->v_1208), rt_str("; b_; })", 8)); b_; }));
} else {
F->v_1210 = rt_str_copy(f_gexpr_380(F->a_1197, (*(P452)rt_nil_check(F->pm_1198)).t, &F->vt_1200));
f_check_type_175(F->vt_1200, (*(P452)rt_nil_check(F->pm_1198)).t, (*(P444)rt_nil_check(F->e_425)).line);
if (((((*(P448)rt_nil_check((*(P452)rt_nil_check(F->pm_1198)).t)).kind == ((rt_int)1LL)) && ((*(P452)rt_nil_check(F->pm_1198)).c != NULL)) && (*(P446)rt_nil_check((*(P452)rt_nil_check(F->pm_1198)).c)).hasm)) {
F->args_1196 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->args_1196)), rt_str("rt_range(", 9)), F->v_1210), rt_str(", ", 2)), f_itos_7((*(P446)rt_nil_check((*(P452)rt_nil_check(F->pm_1198)).c)).mlo)), rt_str(", ", 2)), f_itos_7((*(P446)rt_nil_check((*(P452)rt_nil_check(F->pm_1198)).c)).mhi)), rt_str(")", 1)); b_; }));
} else {
F->args_1196 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P439)rt_nil_check(F->args_1196)), F->v_1210); b_; }));
}
}
F->a_1197 = (*(P444)rt_nil_check(F->a_1197)).next;
F->pm_1198 = (*(P452)rt_nil_check(F->pm_1198)).next;
}
if (((F->a_1197 != NULL) || (F->pm_1198 != NULL))) {
f_fail_23((*(P444)rt_nil_check(F->e_425)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check((*(P444)rt_nil_check(F->fn_1193)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_54((*(P444)rt_nil_check(F->e_425)).b), f_list_len_54(F->a_1197)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_427v = (*(P454)rt_nil_check(F->y_1195)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check((*(P454)rt_nil_check(F->y_1195)).cname)), rt_str("(", 1)), (*(P439)rt_nil_check(F->args_1196))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_427) = F->t_427v;
  return F->result_;
}

static rstr f_builtin_435(rstr *name_429, P444 tt_430, P444 args_431, rt_int line_432, int is_stmt_433, P448 *t_434) {
  struct f_builtin_435fr *F = rt_alloc(sizeof *F);
F->name_429 = name_429;
F->tt_430 = tt_430;
F->args_431 = args_431;
F->line_432 = line_432;
F->is_stmt_433 = is_stmt_433;
F->t_434 = t_434;
F->t_434v = *F->t_434;
F->at_1211 = NULL;
F->n_1212 = f_list_len_54(F->args_431);
F->t_434v = g_ty_void_508;
if (((rt_str_eq((*F->name_429), rt_str("POS", 3)) || rt_str_eq((*F->name_429), rt_str("SUCC", 4))) || rt_str_eq((*F->name_429), rt_str("PRED", 4)))) {
F->a_1213 = rt_str_copy(f_gexpr_380(F->args_431, NULL, &F->at_1211));
if (rt_str_eq((*F->name_429), rt_str("POS", 3))) {
if (((*(P448)rt_nil_check(f_base_of_166(F->at_1211))).kind != ((rt_int)4LL))) {
f_fail_23(F->line_432, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_434v = g_ty_int_503;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1213), rt_str(") + 1)", 6));
goto ret_;
}
F->t_434v = F->at_1211;
if (((*(P448)rt_nil_check(F->at_1211)).kind == ((rt_int)1LL))) {
if (rt_str_eq((*F->name_429), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1213), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1213), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_429), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1213), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P448)rt_nil_check(f_base_of_166(F->at_1211))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1213), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P448)rt_nil_check(f_base_of_166(F->at_1211))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_429), rt_str("SQRT", 4)) || rt_str_eq((*F->name_429), rt_str("SIN", 3))) || rt_str_eq((*F->name_429), rt_str("COS", 3))) || rt_str_eq((*F->name_429), rt_str("EXP", 3))) || rt_str_eq((*F->name_429), rt_str("LN", 2))) || rt_str_eq((*F->name_429), rt_str("FLOOR", 5)))) {
F->a_1214 = rt_str_copy(f_gexpr_380(F->args_431, g_ty_float_505, &F->at_1211));
F->t_434v = g_ty_float_505;
if (rt_str_eq((*F->name_429), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_1214), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_429)), rt_str("(", 1)), F->a_1214), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("IFLOAT", 6))) {
F->a_1215 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->args_431)).next, g_ty_int_503, &F->at_1211));
F->t_434v = g_ty_float_505;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_1215), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("IFIX", 4))) {
F->a_1216 = rt_str_copy(f_gexpr_380(F->args_431, g_ty_float_505, &F->at_1211));
F->t_434v = g_ty_int_503;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1216), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("FORMAT", 6))) {
F->a_1217 = rt_str_copy(f_gexpr_380(F->args_431, g_ty_float_505, &F->at_1211));
F->n1_1218 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->args_431)).next, g_ty_int_503, &F->at_1211));
F->m1_1219 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check((*(P444)rt_nil_check(F->args_431)).next)).next, g_ty_int_503, &F->at_1211));
F->t_434v = g_ty_string_507;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_1217), rt_str(", ", 2)), F->n1_1218), rt_str(", ", 2)), F->m1_1219), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("ABS", 3))) {
F->a_1220 = rt_str_copy(f_gexpr_380(F->args_431, NULL, &F->at_1211));
F->t_434v = F->at_1211;
if (((*(P448)rt_nil_check(F->at_1211)).kind == ((rt_int)1LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_1220), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_1220), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("CNVT", 4))) {
if ((F->tt_430 == NULL)) {
f_fail_23(F->line_432, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_1221 = rt_str_copy(f_gexpr_380(F->args_431, NULL, &F->at_1211));
if ((((*(P444)rt_nil_check(F->tt_430)).kind == ((rt_int)73LL)) && ((*(P448)rt_nil_check(F->at_1211)).kind == ((rt_int)1LL)))) {
F->t_434v = g_ty_string_507;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_1221), rt_str(")", 1));
goto ret_;
} else if ((((*(P444)rt_nil_check(F->tt_430)).kind == ((rt_int)73LL)) && ((*(P448)rt_nil_check(F->at_1211)).kind == ((rt_int)3LL)))) {
F->t_434v = g_ty_string_507;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_1221), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P444)rt_nil_check(F->tt_430)).kind == ((rt_int)73LL)) && ((*(P448)rt_nil_check(F->at_1211)).kind == ((rt_int)2LL)))) {
F->t_434v = g_ty_string_507;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_1221), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P444)rt_nil_check(F->tt_430)).kind == ((rt_int)70LL)) && ((*(P448)rt_nil_check(F->at_1211)).kind == ((rt_int)5LL)))) {
F->t_434v = g_ty_int_503;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_1221), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_432, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_429), rt_str("WRITELN", 7))) {
if ((F->n_1212 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_1222 = NULL;
F->last_1222 = F->args_431;
while (((*(P444)rt_nil_check(F->last_1222)).next != NULL)) {
F->last_1222 = (*(P444)rt_nil_check(F->last_1222)).next;
}
{
F->a_1223 = rt_str_copy(f_gexpr_380(F->last_1222, g_ty_string_507, &F->at_1211));
f_check_type_175(F->at_1211, g_ty_string_507, F->line_432);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_1223), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_429), rt_str("WRITE", 5))) {
F->a_1224 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->args_431)).next, NULL, &F->at_1211));
if (((*(P448)rt_nil_check(F->at_1211)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_1224), rt_str(")", 1));
goto ret_;
} else if (((*(P448)rt_nil_check(F->at_1211)).kind == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_1224), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_432, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_429), rt_str("READLN", 6))) {
F->lv_1225 = NULL;
F->lc_1226 = NULL;
F->last_1228 = NULL;
F->last_1228 = F->args_431;
while (((*(P444)rt_nil_check(F->last_1228)).next != NULL)) {
F->last_1228 = (*(P444)rt_nil_check(F->last_1228)).next;
}
f_lvalue_359(F->last_1228, &F->lv_1225, &F->at_1211, &F->lc_1226, &F->ro_1227);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P439)rt_nil_check(F->lv_1225))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("SIZELN", 6))) {
F->t_434v = g_ty_int_503;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("EOF", 3))) {
F->t_434v = g_ty_bool_504;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_429), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_429), rt_str("SYS_OUT", 7)))) {
F->t_434v = g_ty_file_509;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_429), rt_str("OPEN", 4)) || rt_str_eq((*F->name_429), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_429), rt_str("SEND", 4)) || rt_str_eq((*F->name_429), rt_str("RECEIVE", 7)))) {
F->lv_1229 = NULL;
F->dv_1230 = NULL;
F->lc_1231 = NULL;
F->mt_1233 = NULL;
F->dt_1234 = NULL;
f_lvalue_359(F->args_431, &F->lv_1229, &F->mt_1233, &F->lc_1231, &F->ro_1232);
if (((*(P448)rt_nil_check(F->mt_1233)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_432, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_429), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_429), rt_str("RECEIVE", 7))) {
f_lvalue_359((*(P444)rt_nil_check(F->args_431)).next, &F->dv_1230, &F->dt_1234, &F->lc_1231, &F->ro_1232);
f_check_type_175(F->dt_1234, (*(P448)rt_nil_check(F->mt_1233)).elem, F->line_432);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (*(P439)rt_nil_check(F->lv_1229))), rt_str(", &", 3)), (*(P439)rt_nil_check(F->dv_1230))), rt_str(")", 1));
goto ret_;
}
{
F->v_1235 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->args_431)).next, (*(P448)rt_nil_check(F->mt_1233)).elem, &F->at_1211));
f_check_type_175(F->at_1211, (*(P448)rt_nil_check(F->mt_1233)).elem, F->line_432);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P448)rt_nil_check(F->mt_1233)).elem)), rt_str(" m_ = ", 6)), F->v_1235), rt_str("; rt_send(", 10)), (*(P439)rt_nil_check(F->lv_1229))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_429), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_429), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_1236 = NULL;
F->lc_1237 = NULL;
F->mt_1239 = NULL;
f_lvalue_359(F->args_431, &F->lv_1236, &F->mt_1239, &F->lc_1237, &F->ro_1238);
if (((*(P448)rt_nil_check(F->mt_1239)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_432, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_429), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_434v = g_ty_int_503;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_429))), rt_str("(", 1)), (*(P439)rt_nil_check(F->lv_1236))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_429), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_429), rt_str("COND_RECEIVE", 12)))) {
F->lv_1240 = NULL;
F->dv_1241 = NULL;
F->bv_1242 = NULL;
F->lc_1243 = NULL;
F->mt_1245 = NULL;
F->dt_1246 = NULL;
F->bt_1247 = NULL;
f_lvalue_359(F->args_431, &F->lv_1240, &F->mt_1245, &F->lc_1243, &F->ro_1244);
if (((*(P448)rt_nil_check(F->mt_1245)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_432, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_429), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_359((*(P444)rt_nil_check((*(P444)rt_nil_check(F->args_431)).next)).next, &F->bv_1242, &F->bt_1247, &F->lc_1243, &F->ro_1244);
f_check_type_175(F->bt_1247, g_ty_bool_504, F->line_432);
if (rt_str_eq((*F->name_429), rt_str("COND_RECEIVE", 12))) {
f_lvalue_359((*(P444)rt_nil_check(F->args_431)).next, &F->dv_1241, &F->dt_1246, &F->lc_1243, &F->ro_1244);
f_check_type_175(F->dt_1246, (*(P448)rt_nil_check(F->mt_1245)).elem, F->line_432);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->bv_1242)), rt_str(" = rt_cond_receive(", 19)), (*(P439)rt_nil_check(F->lv_1240))), rt_str(", &", 3)), (*(P439)rt_nil_check(F->dv_1241))), rt_str(")", 1));
goto ret_;
}
{
F->v_1248 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->args_431)).next, (*(P448)rt_nil_check(F->mt_1245)).elem, &F->at_1211));
f_check_type_175(F->at_1211, (*(P448)rt_nil_check(F->mt_1245)).elem, F->line_432);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P448)rt_nil_check(F->mt_1245)).elem)), rt_str(" m_ = ", 6)), F->v_1248), rt_str("; ", 2)), (*(P439)rt_nil_check(F->bv_1242))), rt_str(" = rt_cond_send(", 16)), (*(P439)rt_nil_check(F->lv_1240))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_429), rt_str("PRIORITY", 8))) {
F->t_434v = g_ty_int_503;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_312(F->args_431)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("SET_PRIORITY", 12))) {
F->v_1249 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->args_431)).next, g_ty_int_503, &F->at_1211));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_312(F->args_431)), rt_str(", ", 2)), F->v_1249), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_312(F->args_431)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("ACTIVE", 6))) {
F->t_434v = g_ty_bool_504;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_is_active(", 13), f_act_ref_312(F->args_431)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("DELAY", 5))) {
F->v_1250 = rt_str_copy(f_gexpr_380(F->args_431, g_ty_int_503, &F->at_1211));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_1250), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("DELAY_UNTIL", 11))) {
F->v_1251 = rt_str_copy(f_gexpr_380(F->args_431, g_ty_int_503, &F->at_1211));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_1251), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_312(F->args_431)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("TIME", 4))) {
F->t_434v = g_ty_int_503;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_429), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_429), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_429), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_429), rt_str("HOURS", 5)))) {
F->t_434v = g_ty_int_503;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_429));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("HALT", 4))) {
F->a_1252 = rt_str_copy(f_gexpr_380(F->args_431, g_ty_int_503, &F->at_1211));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_1252), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_429), rt_str("ME", 2)) && (F->tt_430 != NULL))) {
F->result_ = f_me_high_416(F->tt_430, F->line_432, &F->t_434v);
goto ret_;
} else if ((rt_str_eq((*F->name_429), rt_str("WAITING", 7)) || rt_str_eq((*F->name_429), rt_str("SUSPENDED", 9)))) {
F->t_434v = g_ty_bool_504;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_429))), rt_str("(", 1)), f_act_ref_312(F->args_431)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_429), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_429), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_429), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_429), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_429), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_429), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_429))), rt_str("(", 1)), f_act_ref_312(F->args_431)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("TASK_START", 10))) {
if ((F->n_1212 != ((rt_int)2LL))) {
f_fail_23(F->line_432, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_312(F->args_431)), rt_str(", ", 2)), f_act_ref_312((*(P444)rt_nil_check(F->args_431)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_429), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_429), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_429), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_429), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_429), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_429), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((F->n_1212 != ((rt_int)0LL))) {
f_fail_23(F->line_432, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_429), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_429))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_421(F->args_431, &(*F->name_429))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_421(F->args_431, &(*F->name_429))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("COND_LOCK", 9))) {
F->bv_1253 = NULL;
F->bc_1254 = NULL;
F->bt_1256 = NULL;
F->l_1257 = rt_str_copy(f_lock_ref_421(F->args_431, &(*F->name_429)));
f_lvalue_359((*(P444)rt_nil_check(F->args_431)).next, &F->bv_1253, &F->bt_1256, &F->bc_1254, &F->ro_1255);
f_check_type_175(F->bt_1256, g_ty_bool_504, F->line_432);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P439)rt_nil_check(F->bv_1253)), rt_str(" = rt_cond_lock(", 16)), F->l_1257), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("EXCESS_LOCKS", 12))) {
F->t_434v = g_ty_int_503;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_421(F->args_431, &(*F->name_429))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("OWNER", 5))) {
F->t_434v = g_ty_act_513;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_421(F->args_431, &(*F->name_429))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_429), rt_str("LOW_IO", 6))) {
F->dev_1258 = rt_str_copy(f_gexpr_380(F->args_431, g_ty_int_503, &F->at_1211));
F->cmd_1259 = rt_str_copy(f_gexpr_380((*(P444)rt_nil_check(F->args_431)).next, g_ty_int_503, &F->at_1211));
if ((F->n_1212 == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_1258), rt_str(", ", 2)), F->cmd_1259), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_1260 = NULL;
F->dc_1261 = NULL;
F->dt_1263 = NULL;
f_lvalue_359((*(P444)rt_nil_check((*(P444)rt_nil_check(F->args_431)).next)).next, &F->dv_1260, &F->dt_1263, &F->dc_1261, &F->ro_1262);
f_check_type_175(F->dt_1263, g_ty_int_503, F->line_432);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_1258), rt_str(", ", 2)), F->cmd_1259), rt_str(", &", 3)), (*(P439)rt_nil_check(F->dv_1260))), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_432, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_429), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_434) = F->t_434v;
  return F->result_;
}

static void f_translate_437(P444 units_436) {
  struct f_translate_437fr *F = rt_alloc(sizeof *F);
F->units_436 = units_436;
F->u_1264 = NULL;
F->u_1264 = F->units_436;
while ((F->u_1264 != NULL)) {
if (((*(P444)rt_nil_check(F->u_1264)).next == NULL)) {
{ R465 *cell1265 = rt_alloc(sizeof(R465));
(*cell1265).d = NULL;
(*cell1265).next = NULL;
g_caps_491 = cell1265;
}
(*(P464)rt_nil_check(g_caps_491)).d = F->u_1264;
f_declare_body_235((*(P444)rt_nil_check(F->u_1264)).c);
f_body_elements_280((*(P444)rt_nil_check(F->u_1264)).c);
{
F->l_1266 = NULL;
F->l_1266 = F->units_436;
while ((F->l_1266 != F->u_1264)) {
{
F->w_1267 = rt_str_copy(f_waits_of_272(F->l_1266));
if (((F->w_1267).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1267);
}
}
F->l_1266 = (*(P444)rt_nil_check(F->l_1266)).next;
}
}
} else {
f_gen_capsule_245(F->u_1264);
}
F->u_1264 = (*(P444)rt_nil_check(F->u_1264)).next;
}
ret_:
  return;
}

static void f_print_program_438(void) {
  struct f_print_program_438fr *F = rt_alloc(sizeof *F);
f_emit_helpers_231();
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_479);
f_print_buffer_31(g_out_frames_495);
f_print_buffer_31(g_out_helpers_480);
f_print_buffer_31(g_out_protos_481);
f_print_buffer_31(g_out_globals_482);
f_print_buffer_31(g_out_funcs_483);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_excs_485);
f_print_buffer_31(g_out_init_484);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  return;
}

static void as_R469(R469 *d, R469 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R469 cp_R469(R469 s) {
  R469 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R469(R469 a, R469 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_R467(R467 *d, R467 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R467 cp_R467(R467 s) {
  R467 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R467(R467 a, R467 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R465(R465 *d, R465 s) {
  d->d = s.d;
  d->next = s.next;
}
static R465 cp_R465(R465 s) {
  R465 d = s;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R465(R465 a, R465 b) {
  return 1 && (a.d == b.d) && (a.next == b.next);
}
static void as_R463(R463 *d, R463 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R463 cp_R463(R463 s) {
  R463 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R463(R463 a, R463 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_A461(A461 *d, A461 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A461 cp_A461(A461 s) {
  A461 d = s; d.p = rt_alloc(sizeof(P454) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A461(A461 a, A461 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R459(R459 *d, R459 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R459 cp_R459(R459 s) {
  R459 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R459(R459 a, R459 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R457(R457 *d, R457 s) {
  d->s = s.s;
  d->next = s.next;
}
static R457 cp_R457(R457 s) {
  R457 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R457(R457 a, R457 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R455(R455 *d, R455 s) {
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
static R455 cp_R455(R455 s) {
  R455 d = s;
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
static int eq_R455(R455 a, R455 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.chain == b.chain) && (a.stack == b.stack);
}
static void as_R453(R453 *d, R453 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R453 cp_R453(R453 s) {
  R453 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R453(R453 a, R453 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R451(R451 *d, R451 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R451 cp_R451(R451 s) {
  R451 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R451(R451 a, R451 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R449(R449 *d, R449 s) {
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
static R449 cp_R449(R449 s) {
  R449 d = s;
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
static int eq_R449(R449 a, R449 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.next == b.next);
}
static void as_R447(R447 *d, R447 s) {
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
static R447 cp_R447(R447 s) {
  R447 d = s;
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
static int eq_R447(R447 a, R447 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args);
}
static void as_R445(R445 *d, R445 s) {
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
static R445 cp_R445(R445 s) {
  R445 d = s;
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
static int eq_R445(R445 a, R445 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A443(A443 *d, A443 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A443 cp_A443(A443 s) {
  A443 d = s; d.p = rt_alloc(sizeof(P440) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A443(A443 a, A443 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R441(R441 *d, R441 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
}
static R441 cp_R441(R441 s) {
  R441 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  return d;
}
static int eq_R441(R441 a, R441 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_470 = NULL;
g_ntoks_471 = ((rt_int)0LL);
g_tpos_472 = ((rt_int)1LL);
g_src_line_473 = ((rt_int)0LL);
g_table_474 = NULL;
g_depth_475 = ((rt_int)0LL);
g_scope_stack_476 = NULL;
g_all_types_477 = NULL;
g_serial_478 = ((rt_int)0LL);
g_out_types_479 = NULL;
g_out_helpers_480 = NULL;
g_out_protos_481 = NULL;
g_out_globals_482 = NULL;
g_out_funcs_483 = NULL;
g_out_init_484 = NULL;
g_out_excs_485 = NULL;
g_code_486 = NULL;
g_fields_buf_487 = NULL;
g_in_func_488 = 0;
g_cur_level_489 = ((rt_int)0LL);
g_fctx_490 = NULL;
g_caps_491 = NULL;
g_cap_waits_492 = NULL;
g_psub_493 = NULL;
g_st_field_494 = NULL;
g_out_frames_495 = NULL;
g_func_sym_496 = NULL;
g_exits_497 = NULL;
g_frames_498 = ((rt_int)0LL);
g_handlers_499 = NULL;
g_cleanups_500 = NULL;
g_trial_501 = ((rt_int)0LL);
g_mcopies_502 = NULL;
g_ty_int_503 = NULL;
g_ty_bool_504 = NULL;
g_ty_float_505 = NULL;
g_ty_ascii_506 = NULL;
g_ty_string_507 = NULL;
g_ty_void_508 = NULL;
g_ty_file_509 = NULL;
g_ty_nil_510 = NULL;
g_ty_lock_511 = NULL;
g_ty_latch_512 = NULL;
g_ty_act_513 = NULL;
g_no_cons_514 = NULL;
{ A443 *cell1268 = rt_alloc(sizeof(A443));
rt_int pv1269 = ((rt_int)1000000LL);
(*cell1268).lo = ((rt_int)1LL); (*cell1268).hi = pv1269; (*cell1268).lo2 = 1; (*cell1268).hi2 = 1;
(*cell1268).p = rt_alloc(sizeof(P440) * (size_t)RT_CNT((*cell1268)));
for (rt_int i1270 = 0; i1270 < RT_CNT((*cell1268)); i1270++) {
(*cell1268).p[i1270] = NULL;
}
g_toks_470 = cell1268;
}
{ A461 *cell1271 = rt_alloc(sizeof(A461));
rt_int pv1272 = ((rt_int)4093LL);
(*cell1271).lo = ((rt_int)0LL); (*cell1271).hi = pv1272; (*cell1271).lo2 = 1; (*cell1271).hi2 = 1;
(*cell1271).p = rt_alloc(sizeof(P454) * (size_t)RT_CNT((*cell1271)));
for (rt_int i1273 = 0; i1273 < RT_CNT((*cell1271)); i1273++) {
(*cell1271).p[i1273] = NULL;
}
g_table_474 = cell1271;
}
g_out_types_479 = f_new_buffer_24();
g_out_helpers_480 = f_new_buffer_24();
g_out_protos_481 = f_new_buffer_24();
g_out_globals_482 = f_new_buffer_24();
g_out_funcs_483 = f_new_buffer_24();
g_out_init_484 = f_new_buffer_24();
g_out_excs_485 = f_new_buffer_24();
g_out_frames_495 = f_new_buffer_24();
g_code_486 = g_out_init_484;
g_no_cons_514 = f_new_cons_158();
g_ty_int_503 = f_new_typ_157(((rt_int)1LL));
g_ty_bool_504 = f_new_typ_157(((rt_int)2LL));
g_ty_float_505 = f_new_typ_157(((rt_int)3LL));
g_ty_string_507 = f_new_typ_157(((rt_int)5LL));
g_ty_void_508 = f_new_typ_157(((rt_int)9LL));
g_ty_file_509 = f_new_typ_157(((rt_int)10LL));
g_ty_nil_510 = f_new_typ_157(((rt_int)11LL));
g_ty_lock_511 = f_new_typ_157(((rt_int)13LL));
g_ty_latch_512 = f_new_typ_157(((rt_int)13LL));
g_ty_act_513 = f_new_typ_157(((rt_int)14LL));
{ rt_frame xf1274;
if (RT_TRY(xf1274)) {
f_init_ascii_182();
f_read_source_45();
f_translate_437(f_program_136());
f_print_program_438();
RT_POP(xf1274);
} else {
RT_POP(xf1274);
int x1275 = rt_xcur;
if (0 || x1275 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x1275);
}
}
}
  rt_main_done();
  return 0;
}
