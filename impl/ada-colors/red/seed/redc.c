#include "paleo.h"
#include <math.h>
typedef rstr *P480;
typedef struct R482 R482;
typedef struct R482 *P481;
struct R482 {  rt_int kind; rt_int line; rt_int ival; P480 s;  };
typedef struct A484 A484;
struct A484 { rt_int lo, hi, lo2, hi2; P481 *p; };
typedef A484 *P483;
typedef struct R486 R486;
typedef struct R486 *P485;
struct R486 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P480 name; P480 tag; P485 a; P485 b; P485 c; P485 d; P485 e; P485 next;  };
typedef struct R488 R488;
typedef struct R488 *P487;
struct R488 {  P480 lo; P480 hi; P480 lo2; P480 hi2; P480 slen; rt_int mlo; rt_int mhi; int hasm; P485 args;  };
typedef struct R490 R490;
typedef struct R490 *P489;
typedef struct R492 R492;
typedef struct R492 *P491;
struct R492 {  P480 name; P489 t; P487 c; P485 st; P491 next;  };
struct R490 {  rt_int kind; P480 name; P485 lits; P489 elem; P489 idx; P489 idx2; P487 elemcons; P485 elemst; P489 under; P485 tparams; P485 ocap; P491 fields; P489 target; P485 decl; P480 cname; int forward; int defined; int helpers; P489 next;  };
typedef struct R494 R494;
typedef struct R494 *P493;
struct R494 {  P480 name; rt_int mode; P489 t; P487 c; P480 cfield; P493 next;  };
typedef struct R496 R496;
typedef struct R496 *P495;
struct R496 {  rt_int kind; P480 name; P489 t; P487 c; P480 access; P480 cname; int ro_flag; rt_int mvalue; int hasmv; P485 st; P485 decl; P493 params; P489 result; rt_int depth; rt_int level; int byref; P495 members; P495 mnext; P485 binds; P495 insts; P495 chain; P495 stack;  };
typedef struct R498 R498;
typedef struct R498 *P497;
struct R498 {  P480 s; P497 next;  };
typedef struct R500 R500;
typedef struct R500 *P499;
struct R500 {  P497 head; P497 tail;  };
typedef struct A502 A502;
struct A502 { rt_int lo, hi, lo2, hi2; P495 *p; };
typedef A502 *P501;
typedef struct R504 R504;
typedef struct R504 *P503;
struct R504 {  P480 match; P480 label; rt_int depth; P503 next;  };
typedef struct R506 R506;
typedef struct R506 *P505;
struct R506 {  P485 d; P505 next;  };
typedef struct R508 R508;
typedef struct R508 *P507;
struct R508 {  P485 d; P480 w; P507 next;  };
typedef struct R510 R510;
typedef struct R510 *P509;
struct R510 {  rt_int depth; P485 imps; int all_imp; P509 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P480 result_;
 P480 t_556;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_559;
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
 rstr letters_560;
};
struct f_lower_s_15fr { int dummy;
 rstr *s_14;
 rstr result_;
 rstr letters_561;
 rstr r_562;
 rt_int i_563;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_567;
 rstr kw_568;
 rstr w_569;
 rt_int i_570;
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
 P499 result_;
 P499 b_574;
};
struct f_put_27fr { int dummy;
 P499 b_25;
 rstr *s_26;
 P497 l_576;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P499 b_30;
 P497 l_578;
};
struct f_splice_34fr { int dummy;
 P499 a_32;
 P499 b_33;
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
 P481 t_580;
};
struct f_lex_line_44fr { int dummy;
 rstr *line_43;
 rt_int i_582;
 rt_int j_583;
 rt_int n_584;
 int c_585;
 rstr w_586;
 rt_int k_587;
 rstr w_591;
 rt_int k_592;
 rstr two_596;
};
struct f_read_source_45fr { int dummy;
 rstr line_597;
};
struct f_nn_48fr { int dummy;
 rt_int kind_46;
 rt_int line_47;
 P485 result_;
 P485 x_598;
};
struct f_append_52fr { int dummy;
 P485 *head_49;
 P485 *tail_50;
 P485 x_51;
};
struct f_list_len_54fr { int dummy;
 P485 l_53;
 rt_int result_;
 rt_int n_600;
 P485 p_601;
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
 P480 result_;
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
 P480 result_;
};
struct f_name_node_77fr { int dummy;
 P485 result_;
 P485 x_602;
};
struct f_id_list_78fr { int dummy;
 P485 result_;
 P485 head_603;
 P485 tail_604;
};
struct f_p_subtype_79fr { int dummy;
 P485 result_;
 rt_int line_605;
 P485 x_606;
 rstr w_607;
 P485 head_608;
 P485 tail_609;
 P485 head_610;
 P485 tail_611;
 int more_612;
 P485 names_613;
 P485 st_614;
 P485 cmp_615;
 P485 head_616;
 P485 tail_617;
 int more_618;
 P485 lit_619;
};
struct f_actual_params_80fr { int dummy;
 P485 result_;
 P485 head_620;
 P485 tail_621;
};
struct f_is_type_word_82fr { int dummy;
 rstr *w_81;
 int result_;
};
struct f_actual_tt_83fr { int dummy;
 P485 result_;
 P485 head_622;
 P485 tail_623;
 int more_624;
};
struct f_binop_88fr { int dummy;
 P480 op_84;
 P485 l_85;
 P485 r_86;
 rt_int line_87;
 P485 result_;
 P485 x_625;
};
struct f_expr_89fr { int dummy;
 P485 result_;
 P485 l_626;
 P480 op_627;
 rt_int line_628;
};
struct f_expr_and_90fr { int dummy;
 P485 result_;
 P485 l_629;
 rt_int line_630;
};
struct f_expr_not_91fr { int dummy;
 P485 result_;
 P485 x_631;
};
struct f_is_rel_93fr { int dummy;
 rstr *s_92;
 int result_;
};
struct f_expr_rel_94fr { int dummy;
 P485 result_;
 P485 l_632;
 P480 op_633;
 rt_int line_634;
};
struct f_expr_add_95fr { int dummy;
 P485 result_;
 P485 l_635;
 P480 op_636;
 rt_int line_637;
};
struct f_expr_mul_96fr { int dummy;
 P485 result_;
 P485 l_638;
 P480 op_639;
 rt_int line_640;
};
struct f_expr_pow_97fr { int dummy;
 P485 result_;
 P485 l_641;
 rt_int line_642;
};
struct f_expr_prefix_98fr { int dummy;
 P485 result_;
 P485 x_643;
};
struct f_postfix_99fr { int dummy;
 P485 result_;
 P485 p_644;
 rt_int line_645;
 P485 x_646;
 P485 head_647;
 P485 tail_648;
 int more_649;
 P485 lo_650;
 P485 r_651;
 P485 x_652;
 P485 x_653;
 P485 x_654;
};
struct f_primary_100fr { int dummy;
 P485 result_;
 rt_int line_655;
 P485 x_656;
 rt_int k_657;
 rstr w_658;
 P485 head_659;
 P485 tail_660;
 int more_661;
};
struct f_constructor_item_101fr { int dummy;
 P485 result_;
 rt_int line_662;
 P485 it_663;
 P485 first_664;
 P485 keys_665;
 P485 ktail_666;
 P485 lab_667;
 rt_int save_668;
 P485 more_669;
 P485 tail2_670;
 int ok_671;
 int go_672;
 P485 l2_673;
};
struct f_at_body_end_102fr { int dummy;
 int result_;
};
struct f_body_103fr { int dummy;
 P485 result_;
 P485 head_674;
 P485 tail_675;
};
struct f_body_element_104fr { int dummy;
 P485 result_;
 P485 x_676;
};
struct f_declaration_105fr { int dummy;
 P485 result_;
 rt_int line_677;
 P485 head_678;
 P485 tail_679;
 P485 names_680;
 P485 x_681;
};
struct f_object_decl_106fr { int dummy;
 P485 result_;
 rt_int line_682;
 int is_var_683;
 P485 names_684;
 P485 st_685;
 P485 init_686;
 P485 head_687;
 P485 tail_688;
 P485 x_689;
};
struct f_abbrev_decl_107fr { int dummy;
 P485 result_;
 P485 x_690;
};
struct f_skip_rep_108fr { int dummy;
 rt_int depth_691;
};
struct f_type_decl_109fr { int dummy;
 P485 result_;
 rt_int line_692;
 P480 name_693;
 P485 params_694;
 P485 x_695;
};
struct f_mode_of_111fr { int dummy;
 rstr *w_110;
 rt_int result_;
};
struct f_formal_params_112fr { int dummy;
 P485 result_;
 P485 head_696;
 P485 tail_697;
 int more_698;
 rt_int mode_699;
 P485 names_700;
 P485 ntail_701;
 P485 st_702;
 P485 p_703;
};
struct f_imports_list_114fr { int dummy;
 P485 owner_113;
 int result_;
 P485 head_704;
 P485 tail_705;
 int more_706;
 int ro_707;
 P485 x_708;
};
struct f_is_definable_116fr { int dummy;
 rstr *w_115;
 int result_;
};
struct f_definable_name_117fr { int dummy;
 P480 result_;
};
struct f_subprogram_decl_118fr { int dummy;
 P485 result_;
 rt_int line_709;
 P485 x_710;
 int is_abn_711;
 int is_func_712;
 int dummy_713;
};
struct f_capsule_decl_119fr { int dummy;
 P485 result_;
 P485 x_714;
 int dummy_715;
 P485 head_716;
 P485 tail_717;
 int more_718;
 P485 n_719;
};
struct f_formal_tt_120fr { int dummy;
 P485 result_;
 P485 head_720;
 P485 tail_721;
 int more_722;
};
struct f_generic_decl_121fr { int dummy;
 P485 result_;
 P485 x_723;
 P485 head_724;
 P485 tail_725;
 int more_726;
 P485 names_727;
 rt_int kind_728;
 P485 st_729;
 P485 p_730;
 P480 nm_731;
 P485 st_732;
};
struct f_task_decl_122fr { int dummy;
 P485 result_;
 P485 x_733;
 int dummy_734;
};
struct f_expose_decl_123fr { int dummy;
 P485 result_;
 P485 x_735;
 P485 head_736;
 P485 tail_737;
 int more_738;
 P485 n_739;
 P485 head_740;
 P485 tail_741;
 int more_742;
 P485 n_743;
 P485 tgt_744;
};
struct f_is_compound_kw_125fr { int dummy;
 rstr *w_124;
 int result_;
};
struct f_statement_126fr { int dummy;
 P485 result_;
 P485 labels_745;
 P485 ltail_746;
 P480 match_747;
 P485 s_748;
};
struct f_unlabeled_statement_127fr { int dummy;
 P485 result_;
 rt_int line_749;
 P485 x_750;
 P485 head_751;
 P485 tail_752;
 P485 invs_753;
 P485 itail_754;
 int more_755;
 P485 target_756;
};
struct f_arm_131fr { int dummy;
 P485 cond_128;
 P485 b_129;
 rt_int line_130;
 P485 result_;
 P485 x_757;
};
struct f_if_stmt_132fr { int dummy;
 P485 result_;
 P485 x_758;
 P485 head_759;
 P485 tail_760;
 P485 cond_761;
 int go_762;
};
struct f_case_stmt_133fr { int dummy;
 P485 result_;
 P485 x_763;
 P485 head_764;
 P485 tail_765;
 P485 labs_766;
 P485 ltail_767;
 int more_768;
 P485 l_769;
};
struct f_repeat_stmt_134fr { int dummy;
 P485 result_;
 P485 x_770;
};
struct f_guard_stmt_135fr { int dummy;
 P485 result_;
 P485 x_771;
 P485 head_772;
 P485 tail_773;
 P485 h_774;
};
struct f_program_136fr { int dummy;
 P485 result_;
 P485 head_775;
 P485 tail_776;
};
struct f_hash_138fr { int dummy;
 rstr *s_137;
 rt_int result_;
 rt_int h_777;
 rt_int i_778;
};
struct f_lookup_140fr { int dummy;
 rstr *name_139;
 P495 result_;
 P495 y_782;
};
struct f_lookup_decl_142fr { int dummy;
 P485 d_141;
 P495 result_;
 P495 y_783;
};
struct f_define_145fr { int dummy;
 P495 y_143;
 rt_int line_144;
 rt_int h_784;
 P495 z_785;
};
struct f_overloadable_147fr { int dummy;
 P495 y_146;
 int result_;
};
struct f_same_signature_150fr { int dummy;
 P493 a_148;
 P493 b_149;
 int result_;
 P493 x_786;
 P493 y_787;
};
struct f_open_scope_151fr { int dummy;
};
struct f_close_scope_152fr { int dummy;
};
struct f_new_sym_155fr { int dummy;
 rt_int kind_153;
 P480 name_154;
 P495 result_;
 P495 y_788;
};
struct f_new_typ_157fr { int dummy;
 rt_int kind_156;
 P489 result_;
 P489 t_790;
};
struct f_new_cons_158fr { int dummy;
 P487 result_;
 P487 c_792;
};
struct f_same_lits_161fr { int dummy;
 P485 a_159;
 P485 b_160;
 int result_;
 P485 x_794;
 P485 y_795;
};
struct f_same_164fr { int dummy;
 P489 a_162;
 P489 b_163;
 int result_;
 P491 f_796;
 P491 g_797;
};
struct f_base_of_166fr { int dummy;
 P489 t_165;
 P489 result_;
};
struct f_base_cons_169fr { int dummy;
 P489 t_167;
 P487 c_168;
 P487 result_;
};
struct f_kind_name_171fr { int dummy;
 P489 t_170;
 rstr result_;
};
struct f_check_type_175fr { int dummy;
 P489 got_172;
 P489 want_173;
 rt_int line_174;
};
struct f_ctype_177fr { int dummy;
 P489 t_176;
 rstr result_;
};
struct f_field_decls_179fr { int dummy;
 P489 t_178;
 rstr result_;
 P491 f_800;
 P480 s_801;
};
struct f_declare_ctype_181fr { int dummy;
 P489 t_180;
 P489 u_802;
 P489 target_803;
 P485 p_804;
 P480 fs_805;
};
struct f_init_ascii_182fr { int dummy;
 rstr names_806;
 P485 head_807;
 P485 tail_808;
 rt_int start_809;
 rt_int i_810;
 P485 lit_814;
};
struct f_lit_index_185fr { int dummy;
 P485 lits_183;
 rstr *name_184;
 rt_int result_;
 rt_int i_815;
 P485 l_816;
};
struct f_resolve_subtype_188fr { int dummy;
 P485 st_186;
 P487 *c_187;
 P487 c_187v;
 P489 result_;
 P489 t_817;
 int ok_818;
 P489 dummy_819;
 P487 ic_821;
 P487 ic2_822;
 P487 ec_823;
 P489 it_824;
 P489 et_825;
 P487 ec_826;
 P485 comp_827;
 P491 tail_828;
 P487 cc_829;
 P491 f_830;
 P487 ec_832;
 P495 y_833;
};
struct f_opened_190fr { int dummy;
 P489 t_189;
 int result_;
 P505 c_834;
};
struct f_replace_all_194fr { int dummy;
 rstr *s_191;
 rstr *pat_192;
 rstr *r_193;
 rstr result_;
 rt_int i_835;
};
struct f_subst_196fr { int dummy;
 rstr *s_195;
 rstr result_;
 P497 l_836;
 P480 r_837;
};
struct f_new_type_200fr { int dummy;
 P495 y_197;
 P485 st_198;
 P487 *c_199;
 P487 c_199v;
 P489 result_;
 P485 d_838;
 P485 p_839;
 P487 uc_840;
 P495 z_841;
};
struct f_init_storage_204fr { int dummy;
 rstr *lval_201;
 P489 t_202;
 P487 c_203;
 P485 p_842;
 P485 a_843;
 P487 uc_844;
 P489 ut_845;
 P489 at_846;
 rstr v_847;
 P497 saved_848;
 P497 l1_849;
 P497 l2_850;
 rstr i_853;
 P491 f_854;
};
struct f_manifest_207fr { int dummy;
 P485 e_205;
 int *ok_206;
 int ok_206v;
 rt_int result_;
 rt_int a_855;
 rt_int b_856;
 int ok2_857;
 P495 y_858;
};
struct f_mcopy_209fr { int dummy;
 P489 t_208;
 rstr result_;
 rstr ct_859;
 rstr name_860;
 P497 l_861;
};
struct f_composite_211fr { int dummy;
 P489 t_210;
 int result_;
};
struct f_assign_code_216fr { int dummy;
 rstr *lval_212;
 P489 t_213;
 rstr *v_214;
 P487 c_215;
 rstr result_;
};
struct f_copy_code_219fr { int dummy;
 P489 t_217;
 rstr *v_218;
 rstr result_;
};
struct f_eq_code_223fr { int dummy;
 P489 t_220;
 rstr *a_221;
 rstr *b_222;
 rstr result_;
};
struct f_elem_assign_227fr { int dummy;
 rstr *lval_224;
 P489 t_225;
 rstr *v_226;
 rstr result_;
};
struct f_seen_name_230fr { int dummy;
 P497 l_228;
 rstr *s_229;
 int result_;
 P497 p_863;
};
struct f_emit_helpers_231fr { int dummy;
 P489 order_864;
 P489 t_865;
 P497 done_866;
 P497 l_867;
 rstr c_868;
};
struct f_helper_bodies_233fr { int dummy;
 P489 t_232;
 rstr c_870;
 P499 b_871;
 P489 e_872;
 P485 p_873;
 P480 pc_874;
 P491 f_875;
 P480 conds_876;
 rstr fn_877;
 rstr fn_878;
};
struct f_declare_body_235fr { int dummy;
 P485 elems_234;
 P485 e_879;
 P495 y_880;
 P495 y_881;
 P495 y_882;
 P489 t_883;
 P495 y_884;
 P495 g_885;
};
struct f_manifest_const_237fr { int dummy;
 P485 d_236;
 int ok_886;
 rt_int v_887;
 P495 y_888;
 P487 c_889;
};
struct f_exported_241fr { int dummy;
 P485 d_238;
 rstr *name_239;
 int *ro_240;
 int ro_240v;
 int result_;
 P485 p_890;
};
struct f_copy_sym_243fr { int dummy;
 P495 y_242;
 P495 result_;
 P495 z_891;
};
struct f_gen_capsule_245fr { int dummy;
 P485 d_244;
 P495 y_893;
};
struct f_capsule_params_249fr { int dummy;
 P485 d_246;
 P485 args_247;
 rt_int line_248;
 P485 p_894;
 P485 a_895;
 P489 t_896;
 P489 vt_897;
 P487 c_898;
 P480 lv_899;
 P487 lc_900;
 int ro_901;
 P495 y_902;
 rstr f_903;
 rstr g_904;
 P495 y_905;
 rstr v_906;
 rstr access_907;
};
struct f_elaborate_capsule_254fr { int dummy;
 P485 d_250;
 P495 y_251;
 P485 args_252;
 P485 owner_253;
 P505 cr_908;
 P509 ctx_909;
 P495 m_910;
 P485 p_911;
 int ro_912;
 P507 w_915;
 P495 z_917;
};
struct f_renamed_257fr { int dummy;
 P485 d_255;
 P495 z_256;
 P480 result_;
 P485 r_918;
};
struct f_gen_expose_259fr { int dummy;
 P485 d_258;
 P495 y_919;
 P495 m_920;
 P485 p_921;
 P485 r_922;
 P495 inst_923;
 int found_924;
 P495 z_925;
 int found_926;
 P495 z_927;
};
struct f_finish_ptr_261fr { int dummy;
 P489 t_260;
 P485 d_928;
 P485 p_929;
 P487 c_930;
 rstr dummy_931;
 P495 y_932;
};
struct f_declare_subprogram_263fr { int dummy;
 P485 d_262;
};
struct f_build_subprogram_265fr { int dummy;
 P485 d_264;
 P495 result_;
 P495 y_933;
 P485 p_934;
 P493 tail_935;
 P493 pm_936;
 P487 rc_938;
};
struct f_element_267fr { int dummy;
 P485 e_266;
 rt_int k_939;
 P489 t_940;
 rstr c_941;
};
struct f_storage_270fr { int dummy;
 rstr *name_268;
 P489 t_269;
 rstr result_;
 rstr g_942;
 rstr f_943;
};
struct f_bind_273fr { int dummy;
 P495 y_271;
 rstr *access_272;
};
struct f_var_decl_275fr { int dummy;
 P485 d_274;
 P487 c_944;
 P489 t_945;
 P495 y_946;
 rstr access_947;
 P489 vt_948;
 rstr v_949;
};
struct f_const_decl_277fr { int dummy;
 P485 d_276;
 P487 c_950;
 P489 t_951;
 P489 vt_952;
 P495 y_953;
 int ok_954;
 rstr v_955;
 rstr access_956;
};
struct f_subprogram_279fr { int dummy;
 P485 d_278;
};
struct f_gen_subprogram_282fr { int dummy;
 P485 d_280;
 P495 y_281;
 P499 saved_code_957;
 P499 saved_fields_958;
 int saved_in_959;
 P495 saved_sym_960;
 P503 saved_exits_961;
 rt_int saved_frames_962;
 P480 args_963;
 P493 pm_964;
 P497 saved_handlers_965;
 P497 saved_cleanups_966;
 P509 ctx_967;
 P480 head_968;
 P480 frame_969;
 P480 parent_970;
 P480 copy_back_971;
 rstr ct_973;
 rstr f_974;
 P495 p_975;
};
struct f_waits_of_284fr { int dummy;
 P485 d_283;
 rstr result_;
 P507 w_976;
};
struct f_task_waits_286fr { int dummy;
 P485 elems_285;
 rstr result_;
 P485 e_977;
 P480 r_978;
};
struct f_await_tasks_288fr { int dummy;
 P485 elems_287;
 rstr w_979;
};
struct f_capsule_elements_290fr { int dummy;
 P485 elems_289;
 P485 e_980;
};
struct f_body_elements_292fr { int dummy;
 P485 elems_291;
};
struct f_gen_body_294fr { int dummy;
 P485 elems_293;
};
struct f_pop_frames_296fr { int dummy;
 rt_int upto_295;
 rt_int i_981;
 P497 c_982;
};
struct f_push_cleanup_298fr { int dummy;
 rstr *s_297;
 P497 c_983;
};
struct f_pop_cleanup_299fr { int dummy;
};
struct f_gen_statement_301fr { int dummy;
 P485 s_300;
 P480 label_985;
 P503 x_986;
};
struct f_st_assign_303fr { int dummy;
 P485 s_302;
 P480 lv_989;
 P489 t_990;
 P489 vt_991;
 P487 c_992;
 int ro_993;
 rstr lo_994;
 rstr hi_995;
 rstr v_996;
 rstr v_997;
};
struct f_st_call_305fr { int dummy;
 P485 s_304;
 P485 c_998;
 P489 t_999;
 P485 x_1000;
};
struct f_st_if_307fr { int dummy;
 P485 s_306;
 P485 a_1001;
 int first_1002;
 P489 t_1003;
 rstr c_1004;
};
struct f_st_case_309fr { int dummy;
 P485 s_308;
 P489 st_1005;
 P489 vt_1006;
 int first_1007;
 P485 a_1008;
 rstr sel_1009;
 rstr tmp_1010;
 P485 lab_1011;
 P480 conds_1012;
 rstr v_1013;
 rstr lo_1014;
 rstr hi_1015;
};
struct f_st_repeat_311fr { int dummy;
 P485 s_310;
 P489 t_1016;
 P487 c_1017;
 rstr cond_1018;
 rstr access_1019;
 rstr lov_1020;
 rstr hiv_1021;
 rstr it_1022;
 P495 y_1023;
};
struct f_st_exit_313fr { int dummy;
 P485 s_312;
 P503 x_1024;
};
struct f_st_return_315fr { int dummy;
 P485 s_314;
 P489 vt_1025;
 rstr v_1026;
};
struct f_exc_id_318fr { int dummy;
 rstr *name_316;
 rt_int line_317;
 rstr result_;
 P495 y_1027;
};
struct f_st_guard_320fr { int dummy;
 P485 s_319;
 P485 h_1028;
 int first_1029;
 P497 hv_1030;
 rstr f_1031;
 rstr x_1032;
 P485 n_1034;
 P480 conds_1035;
};
struct f_st_alloc_322fr { int dummy;
 P485 s_321;
 P480 lv_1036;
 P489 t_1037;
 P489 target_1038;
 P489 vt_1039;
 P487 c_1040;
 P487 tc_1041;
 int ro_1042;
 P485 d_1043;
 P485 p_1044;
 P485 a_1045;
 rstr tcn_1046;
 rstr cell_1047;
 rstr v_1048;
 rstr pv_1049;
 P495 y_1050;
 rstr v_1051;
};
struct f_act_ref_324fr { int dummy;
 P485 e_323;
 rstr result_;
 P480 lv_1052;
 P489 t_1053;
 P487 c_1054;
 int ro_1055;
};
struct f_st_create_326fr { int dummy;
 P485 s_325;
 P495 y_1056;
 P493 pm_1057;
 P485 a_1058;
 P480 lv_1059;
 P489 lt_1060;
 P489 vt_1061;
 P487 lc_1062;
 int ro_1063;
 P489 at_1064;
 P487 ac_1065;
 int aro_1066;
 P480 act_1067;
 rstr nf_1068;
 P480 link_1069;
 rt_int i_1070;
 rstr v_1074;
};
struct f_hidden_var_330fr { int dummy;
 rstr *name_327;
 P489 t_328;
 rstr *place_329;
 P495 y_1075;
};
struct f_user_create_336fr { int dummy;
 P485 s_331;
 P495 y_332;
 rstr *uv_333;
 P489 ut_334;
 rstr *nf_335;
 P489 t_1076;
 P499 saved_1077;
 P499 hook_1078;
 P485 un_1079;
 rstr hn_1080;
 rstr aa_1081;
 rstr uname_1082;
 rstr aname_1083;
 P485 start_1084;
 P485 an_1085;
};
struct f_wait_alt_341fr { int dummy;
 P485 inv_337;
 rstr *arr_338;
 rt_int i_339;
 int mixed_340;
 rstr result_;
 P480 lv_1086;
 P489 t_1087;
 P489 vt_1088;
 P487 c_1089;
 int ro_1090;
 P485 fn_1091;
 P485 args_1092;
 rstr slot_1093;
 P480 dv_1094;
 P489 dt_1095;
 rstr tmp_1096;
 rstr v_1097;
 rstr v_1098;
};
struct f_builtin_wait_343fr { int dummy;
 P485 inv_342;
 int result_;
 P480 lv_1099;
 P489 t_1100;
 P487 c_1101;
 int ro_1102;
 P499 saved_1103;
 int ok_1104;
};
struct f_wait_op_348fr { int dummy;
 P485 inv_344;
 rstr *op_345;
 rstr *q_346;
 int is_stmt_347;
 rstr result_;
 P485 x_1107;
 P485 f_1108;
 P485 qn_1109;
 P489 t_1110;
 rstr r_1111;
};
struct f_user_wait_353fr { int dummy;
 P485 s_349;
 rstr *arr_350;
 rstr *w_351;
 rt_int n_352;
 P485 a_1112;
 rt_int i_1113;
 P480 tests_1114;
 P480 revokes_1115;
 P485 inv_1116;
 P485 st_1117;
 P487 c_1118;
 P489 qt_1119;
 rstr qname_1120;
 P495 y_1121;
 rstr access_1122;
};
struct f_st_wait_355fr { int dummy;
 P485 s_354;
 P485 a_1123;
 rt_int n_1124;
 int first_1125;
 P499 inits_1126;
 int user_1127;
 rstr arr_1128;
 rstr w_1129;
 P485 inv_1130;
 P485 inv_1131;
 P480 conds_1132;
 rt_int i_1133;
};
struct f_call_node_359fr { int dummy;
 rstr *name_356;
 P485 arg_357;
 rt_int line_358;
 P485 result_;
 P485 x_1137;
 P485 f_1138;
};
struct f_user_region_361fr { int dummy;
 P485 s_360;
 P489 t_1139;
 rstr f_1140;
 rstr lock_1141;
 rstr unlock_1142;
};
struct f_st_region_363fr { int dummy;
 P485 s_362;
 P480 lv_1143;
 P489 t_1144;
 P487 c_1145;
 int ro_1146;
 rstr lk_1147;
 rstr f_1148;
};
struct f_gparam_366fr { int dummy;
 P485 g_364;
 rstr *name_365;
 P485 result_;
 P485 p_1149;
};
struct f_bind_sym_368fr { int dummy;
 P485 p_367;
 P495 result_;
 P495 y_1150;
};
struct f_same_binds_371fr { int dummy;
 P495 a_369;
 P495 b_370;
 int result_;
 P495 x_1151;
 P495 y_1152;
};
struct f_same_binding_374fr { int dummy;
 P495 a_372;
 P495 b_373;
 int result_;
};
struct f_instantiate_379fr { int dummy;
 P495 g_375;
 P485 tt_376;
 P485 args_377;
 rt_int line_378;
 P495 result_;
 P485 gd_1153;
 P485 pat_1154;
 P495 binds_1155;
 P485 f_1156;
 P485 a_1157;
 P485 fp_1158;
 P495 inst_1159;
 P489 at_1160;
 P487 c_1161;
 P509 saved_fctx_1162;
 int saved_in_1163;
 rt_int saved_level_1164;
 P495 saved_sym_1165;
 P499 saved_code_1166;
 P485 p_1167;
 P495 b_1168;
 P485 st_1169;
 int ok_1170;
 int known_1171;
 P495 q_1172;
 P495 b_1173;
 rstr v_1174;
 P495 b_1175;
};
struct f_access_of_381fr { int dummy;
 P495 y_380;
 rstr result_;
 P480 p_1176;
 rt_int i_1177;
};
struct f_import_of_384fr { int dummy;
 P485 l_382;
 rstr *name_383;
 P485 result_;
 P485 p_1181;
};
struct f_check_import_387fr { int dummy;
 P495 y_385;
 rt_int line_386;
 int result_;
 P509 c_1182;
 int ro_1183;
 P485 imp_1184;
};
struct f_c_ident_389fr { int dummy;
 rstr *s_388;
 rstr result_;
};
struct f_deref_392fr { int dummy;
 rstr *base_390;
 P489 t_391;
 rstr result_;
};
struct f_is_lvalue_394fr { int dummy;
 P485 e_393;
 int result_;
 P495 y_1185;
};
struct f_lvalue_400fr { int dummy;
 P485 e_395;
 P480 *code_396;
 P480 code_396v;
 P489 *t_397;
 P489 t_397v;
 P487 *c_398;
 P487 c_398v;
 int *ro_399;
 int ro_399v;
 P480 base_1186;
 P489 bt_1187;
 P487 bc_1188;
 P495 y_1189;
};
struct f_select_on_408fr { int dummy;
 rstr *base_401;
 P489 bt_402;
 P485 e_403;
 int *ro_404;
 P480 *code_405;
 P480 code_405v;
 P489 *t_406;
 P489 t_406v;
 P487 *c_407;
 P487 c_407v;
 P485 p_1190;
 P491 f_1191;
};
struct f_index_on_417fr { int dummy;
 rstr *base_409;
 P489 bt_410;
 P485 e_411;
 int *ro_412;
 int lv_413;
 P480 *code_414;
 P480 code_414v;
 P489 *t_415;
 P489 t_415v;
 P487 *c_416;
 P487 c_416v;
 P485 a_1192;
 P489 it_1193;
 rstr i_1194;
 rstr j_1195;
 rstr lo_1196;
 rstr hi_1197;
 rstr i_1198;
 rstr i_1199;
};
struct f_gexpr_421fr { int dummy;
 P485 e_418;
 P489 want_419;
 P489 *t_420;
 P489 t_420v;
 rstr result_;
 rt_int k_1200;
 P480 code_1201;
 P487 c_1202;
 int ro_1203;
 P489 bt_1204;
 rt_int i_1205;
 P495 y_1206;
 int ro_1207;
 P485 call_1208;
 P485 fname_1209;
 rstr a_1210;
 rstr a_1211;
 rstr a_1212;
 P485 nm_1213;
 P495 y_1214;
 rstr base_1215;
 rstr base_1216;
};
struct f_copy_node_423fr { int dummy;
 P485 e_422;
 P485 result_;
 P485 x_1217;
};
struct f_wrap_apply_425fr { int dummy;
 P485 e_424;
 P485 result_;
 P485 x_1219;
};
struct f_c_string_427fr { int dummy;
 rstr *s_426;
 rstr result_;
 rt_int n_1220;
 rt_int i_1221;
 rstr r_1225;
 rt_int j_1226;
 rt_int i_1227;
};
struct f_enum_type_of_430fr { int dummy;
 rstr *lit_428;
 rt_int line_429;
 P489 result_;
 P495 y_1231;
 P487 c_1232;
 P485 st_1233;
};
struct f_attribute_433fr { int dummy;
 P485 e_431;
 P489 *t_432;
 P489 t_432v;
 rstr result_;
 P489 bt_1234;
 P487 c_1235;
 P480 base_1236;
 P495 y_1237;
 P485 st_1238;
};
struct f_gbinop_437fr { int dummy;
 P485 e_434;
 P489 want_435;
 P489 *t_436;
 P489 t_436v;
 rstr result_;
 P480 op_1239;
 P489 ta_1240;
 P489 tb_1241;
 P489 hint_1242;
 P495 uy_1243;
 P485 l_1244;
 P485 r_1245;
 P485 call_1246;
 P485 fname_1247;
 rstr s_1248;
 rstr a_1249;
 rstr a_1250;
 rstr b_1251;
 rstr a_1252;
 rstr b_1253;
 P489 wa_1254;
 P489 wb_1255;
 rstr a_1256;
 rstr b_1257;
 rstr dummy_1258;
 rstr a_1259;
 rstr b_1260;
 P489 ct_1261;
 rstr a_1262;
 rstr b_1263;
};
struct f_constructor_441fr { int dummy;
 P485 e_438;
 P489 want_439;
 P489 *t_440;
 P489 t_440v;
 rstr result_;
 P485 it_1264;
 P491 f_1265;
 P489 vt_1266;
 P480 s_1267;
 rstr v_1268;
 rstr tmp_1269;
 rstr ct_1270;
 rstr et_1271;
 P480 parts_1272;
 rstr lo_1273;
 rstr hi_1274;
 rstr v_1275;
 rt_int i_1276;
 rstr v_1280;
 rstr tmp_1281;
 P480 parts_1282;
 rstr v_1283;
};
struct f_fits_444fr { int dummy;
 P495 y_442;
 P485 args_443;
 int result_;
 P485 a_1284;
 P493 pm_1285;
 P489 t_1286;
 P499 saved_1287;
 int ok_1288;
 P480 lv_1289;
 P487 lc_1290;
 int ro_1291;
 rstr v_1294;
};
struct f_resolve_overload_449fr { int dummy;
 rstr *name_445;
 P485 args_446;
 int is_stmt_447;
 rt_int line_448;
 P495 result_;
 P495 y_1295;
 P495 first_1296;
 rt_int n_1297;
};
struct f_is_builtin_451fr { int dummy;
 rstr *n_450;
 int result_;
};
struct f_is_low_level_453fr { int dummy;
 rstr *n_452;
 int result_;
};
struct f_me_high_457fr { int dummy;
 P485 tt_454;
 rt_int line_455;
 P489 *t_456;
 P489 t_456v;
 rstr result_;
 P487 c_1298;
};
struct f_type_tag_459fr { int dummy;
 P489 t_458;
 rstr result_;
};
struct f_lock_ref_462fr { int dummy;
 P485 e_460;
 rstr *name_461;
 rstr result_;
 P480 lv_1299;
 P489 t_1300;
 P487 c_1301;
 int ro_1302;
};
struct f_user_op_465fr { int dummy;
 rstr *op_463;
 P485 args_464;
 P495 result_;
 P495 y_1303;
};
struct f_gcall_469fr { int dummy;
 P485 e_466;
 int is_stmt_467;
 P489 *t_468;
 P489 t_468v;
 rstr result_;
 P485 fn_1304;
 P485 tt_1305;
 P495 y_1306;
 P480 args_1307;
 P485 a_1308;
 P493 pm_1309;
 P489 lt_1310;
 P489 vt_1311;
 P480 lv_1312;
 P487 lc_1313;
 int ro_1314;
 rt_int i_1315;
 rstr v_1319;
 rstr ct_1320;
 rstr v_1321;
};
struct f_builtin_476fr { int dummy;
 rstr *name_470;
 P485 tt_471;
 P485 args_472;
 rt_int line_473;
 int is_stmt_474;
 P489 *t_475;
 P489 t_475v;
 rstr result_;
 P489 at_1322;
 rt_int n_1323;
 rstr a_1324;
 rstr a_1325;
 rstr a_1326;
 rstr a_1327;
 rstr a_1328;
 rstr n1_1329;
 rstr m1_1330;
 rstr a_1331;
 rstr a_1332;
 P485 last_1333;
 rstr a_1334;
 rstr a_1335;
 P480 lv_1336;
 P487 lc_1337;
 int ro_1338;
 P485 last_1339;
 P480 lv_1340;
 P480 dv_1341;
 P487 lc_1342;
 int ro_1343;
 P489 mt_1344;
 P489 dt_1345;
 rstr v_1346;
 P480 lv_1347;
 P487 lc_1348;
 int ro_1349;
 P489 mt_1350;
 P480 lv_1351;
 P480 dv_1352;
 P480 bv_1353;
 P487 lc_1354;
 int ro_1355;
 P489 mt_1356;
 P489 dt_1357;
 P489 bt_1358;
 rstr v_1359;
 rstr v_1360;
 rstr v_1361;
 rstr v_1362;
 rstr a_1363;
 P480 bv_1364;
 P487 bc_1365;
 int ro_1366;
 P489 bt_1367;
 rstr l_1368;
 rstr dev_1369;
 rstr cmd_1370;
 P480 dv_1371;
 P487 dc_1372;
 int ro_1373;
 P489 dt_1374;
};
struct f_translate_478fr { int dummy;
 P485 units_477;
 P485 u_1375;
 P485 l_1377;
 rstr w_1378;
};
struct f_print_program_479fr { int dummy;
};
static void as_R510(R510 *d, R510 s);
static R510 cp_R510(R510 s);
static int eq_R510(R510 a, R510 b);
static void as_R508(R508 *d, R508 s);
static R508 cp_R508(R508 s);
static int eq_R508(R508 a, R508 b);
static void as_R506(R506 *d, R506 s);
static R506 cp_R506(R506 s);
static int eq_R506(R506 a, R506 b);
static void as_R504(R504 *d, R504 s);
static R504 cp_R504(R504 s);
static int eq_R504(R504 a, R504 b);
static void as_A502(A502 *d, A502 s);
static A502 cp_A502(A502 s);
static int eq_A502(A502 a, A502 b);
static void as_R500(R500 *d, R500 s);
static R500 cp_R500(R500 s);
static int eq_R500(R500 a, R500 b);
static void as_R498(R498 *d, R498 s);
static R498 cp_R498(R498 s);
static int eq_R498(R498 a, R498 b);
static void as_R496(R496 *d, R496 s);
static R496 cp_R496(R496 s);
static int eq_R496(R496 a, R496 b);
static void as_R494(R494 *d, R494 s);
static R494 cp_R494(R494 s);
static int eq_R494(R494 a, R494 b);
static void as_R492(R492 *d, R492 s);
static R492 cp_R492(R492 s);
static int eq_R492(R492 a, R492 b);
static void as_R490(R490 *d, R490 s);
static R490 cp_R490(R490 s);
static int eq_R490(R490 a, R490 b);
static void as_R488(R488 *d, R488 s);
static R488 cp_R488(R488 s);
static int eq_R488(R488 a, R488 b);
static void as_R486(R486 *d, R486 s);
static R486 cp_R486(R486 s);
static int eq_R486(R486 a, R486 b);
static void as_A484(A484 *d, A484 s);
static A484 cp_A484(A484 s);
static int eq_A484(A484 a, A484 b);
static void as_R482(R482 *d, R482 s);
static R482 cp_R482(R482 s);
static int eq_R482(R482 a, R482 b);
static P480 f_mk_3(rstr *s_2);
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
static P499 f_new_buffer_24(void);
static void f_put_27(P499 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P499 b_30);
static void f_splice_34(P499 a_32, P499 b_33);
static int f_is_reserved_36(rstr *w_35);
static int f_is_word_op_38(rstr *w_37);
static void f_add_token_42(rt_int kind_39, rstr *s_40, rt_int ival_41);
static void f_lex_line_44(rstr *line_43);
static void f_read_source_45(void);
static P485 f_nn_48(rt_int kind_46, rt_int line_47);
static void f_append_52(P485 *head_49, P485 *tail_50, P485 x_51);
static rt_int f_list_len_54(P485 l_53);
static rt_int f_cur_line_55(void);
static int f_at_kw_57(rstr *w_56);
static int f_at_op_59(rstr *w_58);
static int f_at_kind_61(rt_int k_60);
static rt_int f_kind_at_63(rt_int k_62);
static P480 f_text_at_65(rt_int k_64);
static void f_perror_67(rstr *msg_66);
static int f_accept_kw_69(rstr *w_68);
static int f_accept_op_71(rstr *w_70);
static void f_expect_kw_73(rstr *w_72);
static void f_expect_op_75(rstr *w_74);
static P480 f_expect_id_76(void);
static P485 f_name_node_77(void);
static P485 f_id_list_78(void);
static P485 f_p_subtype_79(void);
static P485 f_actual_params_80(void);
static int f_is_type_word_82(rstr *w_81);
static P485 f_actual_tt_83(void);
static P485 f_binop_88(P480 op_84, P485 l_85, P485 r_86, rt_int line_87);
static P485 f_expr_89(void);
static P485 f_expr_and_90(void);
static P485 f_expr_not_91(void);
static int f_is_rel_93(rstr *s_92);
static P485 f_expr_rel_94(void);
static P485 f_expr_add_95(void);
static P485 f_expr_mul_96(void);
static P485 f_expr_pow_97(void);
static P485 f_expr_prefix_98(void);
static P485 f_postfix_99(void);
static P485 f_primary_100(void);
static P485 f_constructor_item_101(void);
static int f_at_body_end_102(void);
static P485 f_body_103(void);
static P485 f_body_element_104(void);
static P485 f_declaration_105(void);
static P485 f_object_decl_106(void);
static P485 f_abbrev_decl_107(void);
static void f_skip_rep_108(void);
static P485 f_type_decl_109(void);
static rt_int f_mode_of_111(rstr *w_110);
static P485 f_formal_params_112(void);
static int f_imports_list_114(P485 owner_113);
static int f_is_definable_116(rstr *w_115);
static P480 f_definable_name_117(void);
static P485 f_subprogram_decl_118(void);
static P485 f_capsule_decl_119(void);
static P485 f_formal_tt_120(void);
static P485 f_generic_decl_121(void);
static P485 f_task_decl_122(void);
static P485 f_expose_decl_123(void);
static int f_is_compound_kw_125(rstr *w_124);
static P485 f_statement_126(void);
static P485 f_unlabeled_statement_127(void);
static P485 f_arm_131(P485 cond_128, P485 b_129, rt_int line_130);
static P485 f_if_stmt_132(void);
static P485 f_case_stmt_133(void);
static P485 f_repeat_stmt_134(void);
static P485 f_guard_stmt_135(void);
static P485 f_program_136(void);
static rt_int f_hash_138(rstr *s_137);
static P495 f_lookup_140(rstr *name_139);
static P495 f_lookup_decl_142(P485 d_141);
static void f_define_145(P495 y_143, rt_int line_144);
static int f_overloadable_147(P495 y_146);
static int f_same_signature_150(P493 a_148, P493 b_149);
static void f_open_scope_151(void);
static void f_close_scope_152(void);
static P495 f_new_sym_155(rt_int kind_153, P480 name_154);
static P489 f_new_typ_157(rt_int kind_156);
static P487 f_new_cons_158(void);
static int f_same_lits_161(P485 a_159, P485 b_160);
static int f_same_164(P489 a_162, P489 b_163);
static P489 f_base_of_166(P489 t_165);
static P487 f_base_cons_169(P489 t_167, P487 c_168);
static rstr f_kind_name_171(P489 t_170);
static void f_check_type_175(P489 got_172, P489 want_173, rt_int line_174);
static rstr f_ctype_177(P489 t_176);
static rstr f_field_decls_179(P489 t_178);
static void f_declare_ctype_181(P489 t_180);
static void f_init_ascii_182(void);
static rt_int f_lit_index_185(P485 lits_183, rstr *name_184);
static P489 f_resolve_subtype_188(P485 st_186, P487 *c_187);
static int f_opened_190(P489 t_189);
static rstr f_replace_all_194(rstr *s_191, rstr *pat_192, rstr *r_193);
static rstr f_subst_196(rstr *s_195);
static P489 f_new_type_200(P495 y_197, P485 st_198, P487 *c_199);
static void f_init_storage_204(rstr *lval_201, P489 t_202, P487 c_203);
static rt_int f_manifest_207(P485 e_205, int *ok_206);
static rstr f_mcopy_209(P489 t_208);
static int f_composite_211(P489 t_210);
static rstr f_assign_code_216(rstr *lval_212, P489 t_213, rstr *v_214, P487 c_215);
static rstr f_copy_code_219(P489 t_217, rstr *v_218);
static rstr f_eq_code_223(P489 t_220, rstr *a_221, rstr *b_222);
static rstr f_elem_assign_227(rstr *lval_224, P489 t_225, rstr *v_226);
static int f_seen_name_230(P497 l_228, rstr *s_229);
static void f_emit_helpers_231(void);
static void f_helper_bodies_233(P489 t_232);
static void f_declare_body_235(P485 elems_234);
static void f_manifest_const_237(P485 d_236);
static int f_exported_241(P485 d_238, rstr *name_239, int *ro_240);
static P495 f_copy_sym_243(P495 y_242);
static void f_gen_capsule_245(P485 d_244);
static void f_capsule_params_249(P485 d_246, P485 args_247, rt_int line_248);
static void f_elaborate_capsule_254(P485 d_250, P495 y_251, P485 args_252, P485 owner_253);
static P480 f_renamed_257(P485 d_255, P495 z_256);
static void f_gen_expose_259(P485 d_258);
static void f_finish_ptr_261(P489 t_260);
static void f_declare_subprogram_263(P485 d_262);
static P495 f_build_subprogram_265(P485 d_264);
static void f_element_267(P485 e_266);
static rstr f_storage_270(rstr *name_268, P489 t_269);
static void f_bind_273(P495 y_271, rstr *access_272);
static void f_var_decl_275(P485 d_274);
static void f_const_decl_277(P485 d_276);
static void f_subprogram_279(P485 d_278);
static void f_gen_subprogram_282(P485 d_280, P495 y_281);
static rstr f_waits_of_284(P485 d_283);
static rstr f_task_waits_286(P485 elems_285);
static void f_await_tasks_288(P485 elems_287);
static void f_capsule_elements_290(P485 elems_289);
static void f_body_elements_292(P485 elems_291);
static void f_gen_body_294(P485 elems_293);
static void f_pop_frames_296(rt_int upto_295);
static void f_push_cleanup_298(rstr *s_297);
static void f_pop_cleanup_299(void);
static void f_gen_statement_301(P485 s_300);
static void f_st_assign_303(P485 s_302);
static void f_st_call_305(P485 s_304);
static void f_st_if_307(P485 s_306);
static void f_st_case_309(P485 s_308);
static void f_st_repeat_311(P485 s_310);
static void f_st_exit_313(P485 s_312);
static void f_st_return_315(P485 s_314);
static rstr f_exc_id_318(rstr *name_316, rt_int line_317);
static void f_st_guard_320(P485 s_319);
static void f_st_alloc_322(P485 s_321);
static rstr f_act_ref_324(P485 e_323);
static void f_st_create_326(P485 s_325);
static void f_hidden_var_330(rstr *name_327, P489 t_328, rstr *place_329);
static void f_user_create_336(P485 s_331, P495 y_332, rstr *uv_333, P489 ut_334, rstr *nf_335);
static rstr f_wait_alt_341(P485 inv_337, rstr *arr_338, rt_int i_339, int mixed_340);
static int f_builtin_wait_343(P485 inv_342);
static rstr f_wait_op_348(P485 inv_344, rstr *op_345, rstr *q_346, int is_stmt_347);
static void f_user_wait_353(P485 s_349, rstr *arr_350, rstr *w_351, rt_int n_352);
static void f_st_wait_355(P485 s_354);
static P485 f_call_node_359(rstr *name_356, P485 arg_357, rt_int line_358);
static void f_user_region_361(P485 s_360);
static void f_st_region_363(P485 s_362);
static P485 f_gparam_366(P485 g_364, rstr *name_365);
static P495 f_bind_sym_368(P485 p_367);
static int f_same_binds_371(P495 a_369, P495 b_370);
static int f_same_binding_374(P495 a_372, P495 b_373);
static P495 f_instantiate_379(P495 g_375, P485 tt_376, P485 args_377, rt_int line_378);
static rstr f_access_of_381(P495 y_380);
static P485 f_import_of_384(P485 l_382, rstr *name_383);
static int f_check_import_387(P495 y_385, rt_int line_386);
static rstr f_c_ident_389(rstr *s_388);
static rstr f_deref_392(rstr *base_390, P489 t_391);
static int f_is_lvalue_394(P485 e_393);
static void f_lvalue_400(P485 e_395, P480 *code_396, P489 *t_397, P487 *c_398, int *ro_399);
static void f_select_on_408(rstr *base_401, P489 bt_402, P485 e_403, int *ro_404, P480 *code_405, P489 *t_406, P487 *c_407);
static void f_index_on_417(rstr *base_409, P489 bt_410, P485 e_411, int *ro_412, int lv_413, P480 *code_414, P489 *t_415, P487 *c_416);
static rstr f_gexpr_421(P485 e_418, P489 want_419, P489 *t_420);
static P485 f_copy_node_423(P485 e_422);
static P485 f_wrap_apply_425(P485 e_424);
static rstr f_c_string_427(rstr *s_426);
static P489 f_enum_type_of_430(rstr *lit_428, rt_int line_429);
static rstr f_attribute_433(P485 e_431, P489 *t_432);
static rstr f_gbinop_437(P485 e_434, P489 want_435, P489 *t_436);
static rstr f_constructor_441(P485 e_438, P489 want_439, P489 *t_440);
static int f_fits_444(P495 y_442, P485 args_443);
static P495 f_resolve_overload_449(rstr *name_445, P485 args_446, int is_stmt_447, rt_int line_448);
static int f_is_builtin_451(rstr *n_450);
static int f_is_low_level_453(rstr *n_452);
static rstr f_me_high_457(P485 tt_454, rt_int line_455, P489 *t_456);
static rstr f_type_tag_459(P489 t_458);
static rstr f_lock_ref_462(P485 e_460, rstr *name_461);
static P495 f_user_op_465(rstr *op_463, P485 args_464);
static rstr f_gcall_469(P485 e_466, int is_stmt_467, P489 *t_468);
static rstr f_builtin_476(rstr *name_470, P485 tt_471, P485 args_472, rt_int line_473, int is_stmt_474, P489 *t_475);
static void f_translate_478(P485 units_477);
static void f_print_program_479(void);
static int ex_compile_error_1;
static P483 g_toks_511;
static rt_int g_ntoks_512;
static rt_int g_tpos_513;
static rt_int g_src_line_514;
static P501 g_table_515;
static rt_int g_depth_516;
static P495 g_scope_stack_517;
static P489 g_all_types_518;
static rt_int g_serial_519;
static P499 g_out_types_520;
static P499 g_out_helpers_521;
static P499 g_out_protos_522;
static P499 g_out_globals_523;
static P499 g_out_funcs_524;
static P499 g_out_init_525;
static P499 g_out_excs_526;
static P499 g_code_527;
static P499 g_fields_buf_528;
static int g_in_func_529;
static rt_int g_cur_level_530;
static P509 g_fctx_531;
static P505 g_caps_532;
static P507 g_cap_waits_533;
static P497 g_psub_534;
static P480 g_st_field_535;
static P499 g_out_frames_536;
static P495 g_func_sym_537;
static P503 g_exits_538;
static rt_int g_frames_539;
static P497 g_handlers_540;
static P497 g_cleanups_541;
static rt_int g_trial_542;
static P497 g_mcopies_543;
static P489 g_ty_int_544;
static P489 g_ty_bool_545;
static P489 g_ty_float_546;
static P489 g_ty_ascii_547;
static P489 g_ty_string_548;
static P489 g_ty_void_549;
static P489 g_ty_file_550;
static P489 g_ty_nil_551;
static P489 g_ty_lock_552;
static P489 g_ty_latch_553;
static P489 g_ty_act_554;
static P487 g_no_cons_555;
static P480 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
F->s_2 = s_2;
F->t_556 = NULL;
{ rstr *cell557 = rt_alloc(sizeof(rstr));
rt_int pv558 = ((*F->s_2)).len;
(*cell557) = rt_str_new(pv558);
rt_str_assign(&(*cell557), (*F->s_2));
F->t_556 = cell557;
}
F->result_ = F->t_556;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_chs_5(int c_4) {
  struct f_chs_5fr *F = rt_alloc(sizeof *F);
F->c_4 = c_4;
F->r_559 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_559, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_559;
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
F->letters_560 = rt_str_copy(rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
if (((97 <= F->c_12) && (F->c_12 <= 122))) {
F->result_ = rt_str_get(F->letters_560, rt_add(rt_sub(((rt_int)(F->c_12) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
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
F->letters_561 = rt_str_copy(rt_str("abcdefghijklmnopqrstuvwxyz", 26));
F->r_562 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_562, (*F->s_14));
{ rt_int lo564 = ((rt_int)1LL), hi565 = ((*F->s_14)).len;
for (rt_int it566 = lo564; it566 <= hi565; it566++) {
F->i_563 = it566;
if (((65 <= rt_str_get(F->r_562, F->i_563)) && (rt_str_get(F->r_562, F->i_563) <= 90))) {
(*rt_str_at(&F->r_562, F->i_563)) = rt_str_get(F->letters_561, rt_add(rt_sub(((rt_int)(rt_str_get(F->r_562, F->i_563)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_562;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_c_17(rstr *s_16) {
  struct f_field_c_17fr *F = rt_alloc(sizeof *F);
F->s_16 = s_16;
F->l_567 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->kw_568 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)));
F->w_569 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_567), rt_str(" ", 1)));
{ rt_int lo571 = ((rt_int)1LL), hi572 = rt_add(rt_sub((F->kw_568).len, (F->w_569).len), ((rt_int)1LL));
for (rt_int it573 = lo571; it573 <= hi572; it573++) {
F->i_570 = it573;
if (rt_str_eq(rt_str_slice(F->kw_568, F->i_570, rt_sub(rt_add(F->i_570, (F->w_569).len), ((rt_int)1LL))), F->w_569)) {
F->result_ = rt_str_cat(F->l_567, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_567;
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
g_serial_519 = rt_add(g_serial_519, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_519));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_fail_23(rt_int line_21, rstr *msg_22) {
  struct f_fail_23fr *F = rt_alloc(sizeof *F);
F->line_21 = line_21;
F->msg_22 = msg_22;
if ((g_trial_542 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  return;
}

static P499 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
F->b_574 = NULL;
{ R500 *cell575 = rt_alloc(sizeof(R500));
(*cell575).head = NULL;
(*cell575).tail = NULL;
F->b_574 = cell575;
}
F->result_ = F->b_574;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_put_27(P499 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_576 = NULL;
{ R498 *cell577 = rt_alloc(sizeof(R498));
(*cell577).s = NULL;
(*cell577).next = NULL;
F->l_576 = cell577;
}
(*(P497)rt_nil_check(F->l_576)).s = f_mk_3(&(*F->s_26));
if (((*(P499)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P499)rt_nil_check(F->b_25)).head = F->l_576;
} else {
(*(P497)rt_nil_check((*(P499)rt_nil_check(F->b_25)).tail)).next = F->l_576;
}
(*(P499)rt_nil_check(F->b_25)).tail = F->l_576;
ret_:
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
F->s_28 = s_28;
f_put_27(g_code_527, &(*F->s_28));
ret_:
  return;
}

static void f_print_buffer_31(P499 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
F->b_30 = b_30;
F->l_578 = NULL;
F->l_578 = (*(P499)rt_nil_check(F->b_30)).head;
while ((F->l_578 != NULL)) {
rt_putln((*(P480)rt_nil_check((*(P497)rt_nil_check(F->l_578)).s)));
F->l_578 = (*(P497)rt_nil_check(F->l_578)).next;
}
ret_:
  return;
}

static void f_splice_34(P499 a_32, P499 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P499)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P499)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P499)rt_nil_check(F->a_32)).head = (*(P499)rt_nil_check(F->b_33)).head;
} else {
(*(P497)rt_nil_check((*(P499)rt_nil_check(F->a_32)).tail)).next = (*(P499)rt_nil_check(F->b_33)).head;
}
(*(P499)rt_nil_check(F->a_32)).tail = (*(P499)rt_nil_check(F->b_33)).tail;
(*(P499)rt_nil_check(F->b_33)).head = NULL;
(*(P499)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
F->w_35 = w_35;
{ rstr sel579 = (*F->w_35);
if (0 || rt_str_eq(sel579, rt_str("ABBREV", 6)) || rt_str_eq(sel579, rt_str("ABNORMAL", 8)) || rt_str_eq(sel579, rt_str("ALL", 3)) || rt_str_eq(sel579, rt_str("ALLOC", 5)) || rt_str_eq(sel579, rt_str("ASSERT", 6)) || rt_str_eq(sel579, rt_str("BEGIN", 5)) || rt_str_eq(sel579, rt_str("BY", 2)) || rt_str_eq(sel579, rt_str("CAPSULE", 7)) || rt_str_eq(sel579, rt_str("CASE", 4)) || rt_str_eq(sel579, rt_str("CONST", 5)) || rt_str_eq(sel579, rt_str("CREATE", 6)) || rt_str_eq(sel579, rt_str("DO", 2)) || rt_str_eq(sel579, rt_str("ELSE", 4)) || rt_str_eq(sel579, rt_str("ELSEIF", 6)) || rt_str_eq(sel579, rt_str("END", 3)) || rt_str_eq(sel579, rt_str("EXCEPTION", 9)) || rt_str_eq(sel579, rt_str("EXIT", 4)) || rt_str_eq(sel579, rt_str("EXPORTS", 7)) || rt_str_eq(sel579, rt_str("EXPOSE", 6)) || rt_str_eq(sel579, rt_str("EXTERNAL", 8)) || rt_str_eq(sel579, rt_str("FOR", 3)) || rt_str_eq(sel579, rt_str("FROM", 4)) || rt_str_eq(sel579, rt_str("FUNC", 4)) || rt_str_eq(sel579, rt_str("GENERIC", 7)) || rt_str_eq(sel579, rt_str("GOTO", 4)) || rt_str_eq(sel579, rt_str("GUARD", 5)) || rt_str_eq(sel579, rt_str("IF", 2)) || rt_str_eq(sel579, rt_str("IMPORTS", 7)) || rt_str_eq(sel579, rt_str("LOCATION", 8)) || rt_str_eq(sel579, rt_str("NAMED", 5)) || rt_str_eq(sel579, rt_str("NEEDS", 5)) || rt_str_eq(sel579, rt_str("NEW", 3)) || rt_str_eq(sel579, rt_str("NONE", 4)) || rt_str_eq(sel579, rt_str("OUT", 3)) || rt_str_eq(sel579, rt_str("OF", 2)) || rt_str_eq(sel579, rt_str("PRAG", 4)) || rt_str_eq(sel579, rt_str("PROC", 4)) || rt_str_eq(sel579, rt_str("RAISE", 5)) || rt_str_eq(sel579, rt_str("READONLY", 8)) || rt_str_eq(sel579, rt_str("REVERSE", 7)) || rt_str_eq(sel579, rt_str("REGION", 6)) || rt_str_eq(sel579, rt_str("RENAMING", 8)) || rt_str_eq(sel579, rt_str("REP", 3)) || rt_str_eq(sel579, rt_str("REPEAT", 6)) || rt_str_eq(sel579, rt_str("RERAISE", 7)) || rt_str_eq(sel579, rt_str("RETURN", 6)) || rt_str_eq(sel579, rt_str("SUBTYPE", 7)) || rt_str_eq(sel579, rt_str("TASK", 4)) || rt_str_eq(sel579, rt_str("THEN", 4)) || rt_str_eq(sel579, rt_str("TO", 2)) || rt_str_eq(sel579, rt_str("TYPE", 4)) || rt_str_eq(sel579, rt_str("VAR", 3)) || rt_str_eq(sel579, rt_str("WAIT", 4)) || rt_str_eq(sel579, rt_str("WHEN", 4)) || rt_str_eq(sel579, rt_str("WHILE", 5))) {
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
F->t_580 = NULL;
{ R482 *cell581 = rt_alloc(sizeof(R482));
(*cell581).s = NULL;
F->t_580 = cell581;
}
(*(P481)rt_nil_check(F->t_580)).kind = F->kind_39;
(*(P481)rt_nil_check(F->t_580)).line = g_src_line_514;
(*(P481)rt_nil_check(F->t_580)).ival = F->ival_41;
(*(P481)rt_nil_check(F->t_580)).s = f_mk_3(&(*F->s_40));
g_ntoks_512 = rt_add(g_ntoks_512, ((rt_int)1LL));
(*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_ntoks_512, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo] = F->t_580;
ret_:
  return;
}

static void f_lex_line_44(rstr *line_43) {
  struct f_lex_line_44fr *F = rt_alloc(sizeof *F);
F->line_43 = line_43;
F->i_582 = ((rt_int)1LL);
F->j_583 = ((rt_int)0LL);
F->n_584 = ((*F->line_43)).len;
while ((F->i_582 <= F->n_584)) {
F->c_585 = rt_str_get((*F->line_43), F->i_582);
if (((((F->c_585 == 32) || (F->c_585 == 9)) || (F->c_585 == 13)) || (F->c_585 == 12))) {
F->i_582 = rt_add(F->i_582, ((rt_int)1LL));
} else if ((F->c_585 == 37)) {
F->i_582 = rt_add(F->n_584, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_585)) {
F->j_583 = F->i_582;
while (((F->j_583 <= F->n_584) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_583)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_583))) || (rt_str_get((*F->line_43), F->j_583) == 95)))) {
F->j_583 = rt_add(F->j_583, ((rt_int)1LL));
}
{
F->w_586 = rt_str_new(rt_sub(F->j_583, F->i_582));
rt_str_assign(&F->w_586, rt_str_slice((*F->line_43), F->i_582, rt_sub(F->j_583, ((rt_int)1LL))));
{ rt_int lo588 = ((rt_int)1LL), hi589 = (F->w_586).len;
for (rt_int it590 = lo588; it590 <= hi589; it590++) {
F->k_587 = it590;
(*rt_str_at(&F->w_586, F->k_587)) = f_upper_13(rt_str_get(F->w_586, F->k_587));
}
}
if (rt_str_eq(F->w_586, rt_str("PRAGMAT", 7))) {
while (((F->j_583 <= F->n_584) && (rt_str_get((*F->line_43), F->j_583) != 59))) {
F->j_583 = rt_add(F->j_583, ((rt_int)1LL));
}
F->j_583 = rt_add(F->j_583, ((rt_int)1LL));
} else if (f_is_reserved_36(&F->w_586)) {
f_add_token_42(((rt_int)2LL), &F->w_586, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_586)) {
f_add_token_42(((rt_int)3LL), &F->w_586, ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)1LL), &F->w_586, ((rt_int)0LL));
}
}
F->i_582 = F->j_583;
} else if (f_is_digit_11(F->c_585)) {
F->j_583 = F->i_582;
while (((F->j_583 <= F->n_584) && f_is_digit_11(rt_str_get((*F->line_43), F->j_583)))) {
F->j_583 = rt_add(F->j_583, ((rt_int)1LL));
}
if ((((F->j_583 < F->n_584) && (rt_str_get((*F->line_43), F->j_583) == 46)) && f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_583, ((rt_int)1LL)))))) {
F->j_583 = rt_add(F->j_583, ((rt_int)1LL));
while (((F->j_583 <= F->n_584) && f_is_digit_11(rt_str_get((*F->line_43), F->j_583)))) {
F->j_583 = rt_add(F->j_583, ((rt_int)1LL));
}
if (((F->j_583 <= F->n_584) && ((rt_str_get((*F->line_43), F->j_583) == 69) || (rt_str_get((*F->line_43), F->j_583) == 101)))) {
F->j_583 = rt_add(F->j_583, ((rt_int)1LL));
if (((F->j_583 <= F->n_584) && ((rt_str_get((*F->line_43), F->j_583) == 43) || (rt_str_get((*F->line_43), F->j_583) == 45)))) {
F->j_583 = rt_add(F->j_583, ((rt_int)1LL));
}
while (((F->j_583 <= F->n_584) && f_is_digit_11(rt_str_get((*F->line_43), F->j_583)))) {
F->j_583 = rt_add(F->j_583, ((rt_int)1LL));
}
}
f_add_token_42(((rt_int)5LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_582, rt_sub(F->j_583, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)4LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_582, rt_sub(F->j_583, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_43), F->i_582, rt_sub(F->j_583, ((rt_int)1LL)))));
}
F->i_582 = F->j_583;
} else if ((F->c_585 == 39)) {
F->j_583 = rt_add(F->i_582, ((rt_int)1LL));
if (((F->j_583 > F->n_584) || (!f_is_letter_9(rt_str_get((*F->line_43), F->j_583))))) {
f_fail_23(g_src_line_514, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_583 <= F->n_584) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_583)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_583))) || (rt_str_get((*F->line_43), F->j_583) == 95)))) {
F->j_583 = rt_add(F->j_583, ((rt_int)1LL));
}
{
F->w_591 = rt_str_new(rt_sub(rt_sub(F->j_583, F->i_582), ((rt_int)1LL)));
rt_str_assign(&F->w_591, rt_str_slice((*F->line_43), rt_add(F->i_582, ((rt_int)1LL)), rt_sub(F->j_583, ((rt_int)1LL))));
{ rt_int lo593 = ((rt_int)1LL), hi594 = (F->w_591).len;
for (rt_int it595 = lo593; it595 <= hi594; it595++) {
F->k_592 = it595;
(*rt_str_at(&F->w_591, F->k_592)) = f_upper_13(rt_str_get(F->w_591, F->k_592));
}
}
f_add_token_42(((rt_int)6LL), &F->w_591, ((rt_int)0LL));
}
F->i_582 = F->j_583;
} else if ((F->c_585 == 34)) {
F->j_583 = rt_add(F->i_582, ((rt_int)1LL));
while (((F->j_583 <= F->n_584) && (rt_str_get((*F->line_43), F->j_583) != 34))) {
F->j_583 = rt_add(F->j_583, ((rt_int)1LL));
}
if ((F->j_583 > F->n_584)) {
f_fail_23(g_src_line_514, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42(((rt_int)7LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), rt_add(F->i_582, ((rt_int)1LL)), rt_sub(F->j_583, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_582 = rt_add(F->j_583, ((rt_int)1LL));
} else {
{
F->two_596 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_596, rt_str("  ", 2));
(*rt_str_at(&F->two_596, ((rt_int)1LL))) = F->c_585;
if ((F->i_582 < F->n_584)) {
(*rt_str_at(&F->two_596, ((rt_int)2LL))) = rt_str_get((*F->line_43), rt_add(F->i_582, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_596, rt_str(":=", 2)) || rt_str_eq(F->two_596, rt_str("=>", 2))) || rt_str_eq(F->two_596, rt_str("..", 2))) || rt_str_eq(F->two_596, rt_str("**", 2))) || rt_str_eq(F->two_596, rt_str("/=", 2))) || rt_str_eq(F->two_596, rt_str("<=", 2))) || rt_str_eq(F->two_596, rt_str(">=", 2)))) {
f_add_token_42(((rt_int)3LL), &F->two_596, ((rt_int)0LL));
F->i_582 = rt_add(F->i_582, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_585 == 40) || (F->c_585 == 41)) || (F->c_585 == 91)) || (F->c_585 == 93)) || (F->c_585 == 44)) || (F->c_585 == 58)) || (F->c_585 == 59)) || (F->c_585 == 46)) || (F->c_585 == 35)) || (F->c_585 == 43)) || (F->c_585 == 45)) || (F->c_585 == 42)) || (F->c_585 == 47)) || (F->c_585 == 38)) || (F->c_585 == 61)) || (F->c_585 == 60)) || (F->c_585 == 62))) {
f_add_token_42(((rt_int)3LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_585); b_; }), ((rt_int)0LL));
F->i_582 = rt_add(F->i_582, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_514, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_597 = rt_str_new(rt_sizeln());
rt_readln(&F->line_597);
g_src_line_514 = rt_add(g_src_line_514, ((rt_int)1LL));
f_lex_line_44(&F->line_597);
}
f_add_token_42(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  return;
}

static P485 f_nn_48(rt_int kind_46, rt_int line_47) {
  struct f_nn_48fr *F = rt_alloc(sizeof *F);
F->kind_46 = kind_46;
F->line_47 = line_47;
F->x_598 = NULL;
{ R486 *cell599 = rt_alloc(sizeof(R486));
(*cell599).name = NULL;
(*cell599).tag = NULL;
(*cell599).a = NULL;
(*cell599).b = NULL;
(*cell599).c = NULL;
(*cell599).d = NULL;
(*cell599).e = NULL;
(*cell599).next = NULL;
F->x_598 = cell599;
}
(*(P485)rt_nil_check(F->x_598)).kind = F->kind_46;
(*(P485)rt_nil_check(F->x_598)).line = F->line_47;
F->result_ = F->x_598;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_append_52(P485 *head_49, P485 *tail_50, P485 x_51) {
  struct f_append_52fr *F = rt_alloc(sizeof *F);
F->head_49 = head_49;
F->tail_50 = tail_50;
F->x_51 = x_51;
if (((*F->head_49) == NULL)) {
(*F->head_49) = F->x_51;
} else {
(*(P485)rt_nil_check((*F->tail_50))).next = F->x_51;
}
(*F->tail_50) = F->x_51;
while (((*(P485)rt_nil_check((*F->tail_50))).next != NULL)) {
(*F->tail_50) = (*(P485)rt_nil_check((*F->tail_50))).next;
}
ret_:
  return;
}

static rt_int f_list_len_54(P485 l_53) {
  struct f_list_len_54fr *F = rt_alloc(sizeof *F);
F->l_53 = l_53;
F->n_600 = ((rt_int)0LL);
F->p_601 = NULL;
F->p_601 = F->l_53;
while ((F->p_601 != NULL)) {
F->n_600 = rt_add(F->n_600, ((rt_int)1LL));
F->p_601 = (*(P485)rt_nil_check(F->p_601)).next;
}
F->result_ = F->n_600;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_cur_line_55(void) {
  struct f_cur_line_55fr *F = rt_alloc(sizeof *F);
F->result_ = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kw_57(rstr *w_56) {
  struct f_at_kw_57fr *F = rt_alloc(sizeof *F);
F->w_56 = w_56;
F->result_ = (((*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).kind == ((rt_int)2LL)) && rt_str_eq((*(P480)rt_nil_check((*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s)), (*F->w_56)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_op_59(rstr *w_58) {
  struct f_at_op_59fr *F = rt_alloc(sizeof *F);
F->w_58 = w_58;
F->result_ = (((*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).kind == ((rt_int)3LL)) && rt_str_eq((*(P480)rt_nil_check((*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s)), (*F->w_58)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kind_61(rt_int k_60) {
  struct f_at_kind_61fr *F = rt_alloc(sizeof *F);
F->k_60 = k_60;
F->result_ = ((*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).kind == F->k_60);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_kind_at_63(rt_int k_62) {
  struct f_kind_at_63fr *F = rt_alloc(sizeof *F);
F->k_62 = k_62;
if ((rt_add(g_tpos_513, F->k_62) > g_ntoks_512)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(rt_add(g_tpos_513, F->k_62), (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P480 f_text_at_65(rt_int k_64) {
  struct f_text_at_65fr *F = rt_alloc(sizeof *F);
F->k_64 = k_64;
if ((rt_add(g_tpos_513, F->k_64) > g_ntoks_512)) {
F->result_ = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_ntoks_512, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s;
goto ret_;
}
F->result_ = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(rt_add(g_tpos_513, F->k_64), (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_perror_67(rstr *msg_66) {
  struct f_perror_67fr *F = rt_alloc(sizeof *F);
F->msg_66 = msg_66;
f_fail_23((*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_66), rt_str(" (at ", 5)), (*(P480)rt_nil_check((*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  return;
}

static int f_accept_kw_69(rstr *w_68) {
  struct f_accept_kw_69fr *F = rt_alloc(sizeof *F);
F->w_68 = w_68;
if (f_at_kw_57(&(*F->w_68))) {
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
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
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
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
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_op_75(rstr *w_74) {
  struct f_expect_op_75fr *F = rt_alloc(sizeof *F);
F->w_74 = w_74;
if ((!f_at_op_59(&(*F->w_74)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_74)); b_; }));
}
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
ret_:
  return;
}

static P480 f_expect_id_76(void) {
  struct f_expect_id_76fr *F = rt_alloc(sizeof *F);
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->result_ = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(rt_sub(g_tpos_513, ((rt_int)1LL)), (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_name_node_77(void) {
  struct f_name_node_77fr *F = rt_alloc(sizeof *F);
F->x_602 = NULL;
F->x_602 = f_nn_48(((rt_int)7LL), f_cur_line_55());
(*(P485)rt_nil_check(F->x_602)).name = f_expect_id_76();
F->result_ = F->x_602;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_id_list_78(void) {
  struct f_id_list_78fr *F = rt_alloc(sizeof *F);
F->head_603 = NULL;
F->tail_604 = NULL;
f_append_52(&F->head_603, &F->tail_604, f_name_node_77());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_603, &F->tail_604, f_name_node_77());
}
F->result_ = F->head_603;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_p_subtype_79(void) {
  struct f_p_subtype_79fr *F = rt_alloc(sizeof *F);
F->line_605 = f_cur_line_55();
F->x_606 = NULL;
if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->x_606 = f_nn_48(((rt_int)81LL), F->line_605);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P485)rt_nil_check(F->x_606)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_606;
goto ret_;
}
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_607 = rt_str_copy((*(P480)rt_nil_check((*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s)));
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
if (rt_str_eq(F->w_607, rt_str("ARRAY", 5))) {
F->x_606 = f_nn_48(((rt_int)74LL), F->line_605);
{
F->head_608 = NULL;
F->tail_609 = NULL;
f_append_52(&F->head_608, &F->tail_609, f_p_subtype_79());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_608, &F->tail_609, f_p_subtype_79());
}
(*(P485)rt_nil_check(F->x_606)).a = F->head_608;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P485)rt_nil_check(F->x_606)).b = f_p_subtype_79();
} else if ((rt_str_eq(F->w_607, rt_str("RECORD", 6)) || rt_str_eq(F->w_607, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_607, rt_str("RECORD", 6))) {
F->x_606 = f_nn_48(((rt_int)75LL), F->line_605);
} else {
F->x_606 = f_nn_48(((rt_int)76LL), F->line_605);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_610 = NULL;
F->tail_611 = NULL;
F->more_612 = 1;
while (F->more_612) {
F->names_613 = NULL;
F->names_613 = f_id_list_78();
F->st_614 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_614 = f_p_subtype_79();
while ((F->names_613 != NULL)) {
F->cmp_615 = NULL;
F->cmp_615 = f_nn_48(((rt_int)63LL), (*(P485)rt_nil_check(F->names_613)).line);
(*(P485)rt_nil_check(F->cmp_615)).name = (*(P485)rt_nil_check(F->names_613)).name;
(*(P485)rt_nil_check(F->cmp_615)).a = F->st_614;
f_append_52(&F->head_610, &F->tail_611, F->cmp_615);
F->names_613 = (*(P485)rt_nil_check(F->names_613)).next;
}
F->more_612 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P485)rt_nil_check(F->x_606)).a = F->head_610;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_607, rt_str("UNION", 5)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_606)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_607, rt_str("ENUM", 4))) {
F->x_606 = f_nn_48(((rt_int)72LL), F->line_605);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_616 = NULL;
F->tail_617 = NULL;
F->more_618 = 1;
while (F->more_618) {
F->lit_619 = NULL;
F->lit_619 = f_nn_48(((rt_int)4LL), F->line_605);
if ((!f_at_kind_61(((rt_int)6LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P485)rt_nil_check(F->lit_619)).name = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s;
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
f_append_52(&F->head_616, &F->tail_617, F->lit_619);
F->more_618 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P485)rt_nil_check(F->x_606)).a = F->head_616;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_606)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P485)rt_nil_check(F->x_606)).c = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_607, rt_str("STRING", 6)) || rt_str_eq(F->w_607, rt_str("SET", 3))) || rt_str_eq(F->w_607, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_607, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_607, rt_str("STRING", 6))) {
F->x_606 = f_nn_48(((rt_int)73LL), F->line_605);
} else if (rt_str_eq(F->w_607, rt_str("SET", 3))) {
F->x_606 = f_nn_48(((rt_int)77LL), F->line_605);
} else if (rt_str_eq(F->w_607, rt_str("MAILBOX", 7))) {
F->x_606 = f_nn_48(((rt_int)78LL), F->line_605);
} else {
F->x_606 = f_nn_48(((rt_int)79LL), F->line_605);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P485)rt_nil_check(F->x_606)).a = f_p_subtype_79();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_606)).b = f_actual_params_80();
}
} else if (rt_str_eq(F->w_607, rt_str("INT", 3))) {
F->x_606 = f_nn_48(((rt_int)70LL), F->line_605);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_606)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P485)rt_nil_check(F->x_606)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_607, rt_str("FLOAT", 5))) {
F->x_606 = f_nn_48(((rt_int)71LL), F->line_605);
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_606)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_606)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P485)rt_nil_check(F->x_606)).c = f_expr_89();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_606 = f_nn_48(((rt_int)80LL), F->line_605);
(*(P485)rt_nil_check(F->x_606)).name = f_mk_3(&F->w_607);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_606)).a = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_606)).b = f_actual_params_80();
(*(P485)rt_nil_check(F->x_606)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_606;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_actual_params_80(void) {
  struct f_actual_params_80fr *F = rt_alloc(sizeof *F);
F->head_620 = NULL;
F->tail_621 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_52(&F->head_620, &F->tail_621, f_expr_89());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_620, &F->tail_621, f_expr_89());
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_620;
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

static P485 f_actual_tt_83(void) {
  struct f_actual_tt_83fr *F = rt_alloc(sizeof *F);
F->head_622 = NULL;
F->tail_623 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_624 = 1;
while (F->more_624) {
if ((f_at_kind_61(((rt_int)1LL)) && f_is_type_word_82(&(*(P480)rt_nil_check((*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s))))) {
f_append_52(&F->head_622, &F->tail_623, f_p_subtype_79());
} else {
f_append_52(&F->head_622, &F->tail_623, f_expr_89());
}
F->more_624 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_622;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_binop_88(P480 op_84, P485 l_85, P485 r_86, rt_int line_87) {
  struct f_binop_88fr *F = rt_alloc(sizeof *F);
F->op_84 = op_84;
F->l_85 = l_85;
F->r_86 = r_86;
F->line_87 = line_87;
F->x_625 = NULL;
F->x_625 = f_nn_48(((rt_int)9LL), F->line_87);
(*(P485)rt_nil_check(F->x_625)).name = F->op_84;
(*(P485)rt_nil_check(F->x_625)).a = F->l_85;
(*(P485)rt_nil_check(F->x_625)).b = F->r_86;
F->result_ = F->x_625;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_expr_89(void) {
  struct f_expr_89fr *F = rt_alloc(sizeof *F);
F->l_626 = NULL;
F->l_626 = f_expr_and_90();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_627 = NULL;
F->op_627 = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s;
F->line_628 = f_cur_line_55();
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->l_626 = f_binop_88(F->op_627, F->l_626, f_expr_and_90(), F->line_628);
}
F->result_ = F->l_626;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_expr_and_90(void) {
  struct f_expr_and_90fr *F = rt_alloc(sizeof *F);
F->l_629 = NULL;
F->l_629 = f_expr_not_91();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_630 = f_cur_line_55();
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->l_629 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_629, f_expr_not_91(), F->line_630);
}
F->result_ = F->l_629;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_expr_not_91(void) {
  struct f_expr_not_91fr *F = rt_alloc(sizeof *F);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_631 = NULL;
F->x_631 = f_nn_48(((rt_int)8LL), f_cur_line_55());
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_631)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P485)rt_nil_check(F->x_631)).a = f_expr_not_91();
F->result_ = F->x_631;
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

static P485 f_expr_rel_94(void) {
  struct f_expr_rel_94fr *F = rt_alloc(sizeof *F);
F->l_632 = NULL;
F->l_632 = f_expr_add_95();
if ((f_at_kind_61(((rt_int)3LL)) && f_is_rel_93(&(*(P480)rt_nil_check((*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s))))) {
F->op_633 = NULL;
F->op_633 = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s;
F->line_634 = f_cur_line_55();
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->l_632 = f_binop_88(F->op_633, F->l_632, f_expr_add_95(), F->line_634);
}
F->result_ = F->l_632;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_expr_add_95(void) {
  struct f_expr_add_95fr *F = rt_alloc(sizeof *F);
F->l_635 = NULL;
F->l_635 = f_expr_mul_96();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_636 = NULL;
F->op_636 = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s;
F->line_637 = f_cur_line_55();
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->l_635 = f_binop_88(F->op_636, F->l_635, f_expr_mul_96(), F->line_637);
}
F->result_ = F->l_635;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_expr_mul_96(void) {
  struct f_expr_mul_96fr *F = rt_alloc(sizeof *F);
F->l_638 = NULL;
F->l_638 = f_expr_pow_97();
while (((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_639 = NULL;
F->op_639 = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s;
F->line_640 = f_cur_line_55();
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->l_638 = f_binop_88(F->op_639, F->l_638, f_expr_pow_97(), F->line_640);
}
F->result_ = F->l_638;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_expr_pow_97(void) {
  struct f_expr_pow_97fr *F = rt_alloc(sizeof *F);
F->l_641 = NULL;
F->l_641 = f_expr_prefix_98();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_642 = f_cur_line_55();
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->l_641 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_641, f_expr_prefix_98(), F->line_642);
}
F->result_ = F->l_641;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_expr_prefix_98(void) {
  struct f_expr_prefix_98fr *F = rt_alloc(sizeof *F);
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_643 = NULL;
F->x_643 = f_nn_48(((rt_int)8LL), f_cur_line_55());
(*(P485)rt_nil_check(F->x_643)).name = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s;
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_643)).a = f_expr_prefix_98();
F->result_ = F->x_643;
goto ret_;
}
F->result_ = f_postfix_99();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_postfix_99(void) {
  struct f_postfix_99fr *F = rt_alloc(sizeof *F);
F->p_644 = NULL;
F->p_644 = f_primary_100();
while (1) {
F->line_645 = f_cur_line_55();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_646 = NULL;
F->x_646 = f_nn_48(((rt_int)10LL), F->line_645);
F->head_647 = NULL;
F->tail_648 = NULL;
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_649 = 1;
while (F->more_649) {
F->lo_650 = NULL;
F->lo_650 = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_651 = NULL;
F->r_651 = f_nn_48(((rt_int)16LL), F->line_645);
(*(P485)rt_nil_check(F->r_651)).a = F->lo_650;
(*(P485)rt_nil_check(F->r_651)).b = f_expr_89();
f_append_52(&F->head_647, &F->tail_648, F->r_651);
} else {
f_append_52(&F->head_647, &F->tail_648, F->lo_650);
}
F->more_649 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P485)rt_nil_check(F->x_646)).a = F->p_644;
(*(P485)rt_nil_check(F->x_646)).b = F->head_647;
F->p_644 = F->x_646;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL)) || (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))))) {
F->x_652 = NULL;
F->x_652 = f_nn_48(((rt_int)11LL), F->line_645);
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_652)).a = F->p_644;
(*(P485)rt_nil_check(F->x_652)).name = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s;
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->p_644 = F->x_652;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P485)rt_nil_check(F->p_644)).kind == ((rt_int)7LL)))) {
F->x_653 = NULL;
F->x_653 = f_nn_48(((rt_int)12LL), F->line_645);
(*(P485)rt_nil_check(F->x_653)).a = F->p_644;
(*(P485)rt_nil_check(F->x_653)).b = f_actual_tt_83();
F->p_644 = F->x_653;
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_654 = NULL;
F->x_654 = f_nn_48(((rt_int)13LL), F->line_645);
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_654)).a = F->p_644;
(*(P485)rt_nil_check(F->x_654)).b = f_p_subtype_79();
F->p_644 = F->x_654;
} else {
F->result_ = F->p_644;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_primary_100(void) {
  struct f_primary_100fr *F = rt_alloc(sizeof *F);
F->line_655 = f_cur_line_55();
F->x_656 = NULL;
F->k_657 = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).kind;
if ((F->k_657 == ((rt_int)4LL))) {
F->x_656 = f_nn_48(((rt_int)1LL), F->line_655);
(*(P485)rt_nil_check(F->x_656)).ival = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).ival;
(*(P485)rt_nil_check(F->x_656)).name = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s;
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->result_ = F->x_656;
goto ret_;
}
if ((((F->k_657 == ((rt_int)5LL)) || (F->k_657 == ((rt_int)7LL))) || (F->k_657 == ((rt_int)6LL)))) {
if ((F->k_657 == ((rt_int)5LL))) {
F->x_656 = f_nn_48(((rt_int)2LL), F->line_655);
} else if ((F->k_657 == ((rt_int)7LL))) {
F->x_656 = f_nn_48(((rt_int)3LL), F->line_655);
} else {
F->x_656 = f_nn_48(((rt_int)4LL), F->line_655);
}
(*(P485)rt_nil_check(F->x_656)).name = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s;
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->result_ = F->x_656;
goto ret_;
}
if ((F->k_657 == ((rt_int)1LL))) {
F->w_658 = rt_str_copy((*(P480)rt_nil_check((*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s)));
if ((rt_str_eq(F->w_658, rt_str("TRUE", 4)) || rt_str_eq(F->w_658, rt_str("FALSE", 5)))) {
F->x_656 = f_nn_48(((rt_int)5LL), F->line_655);
if (rt_str_eq(F->w_658, rt_str("TRUE", 4))) {
(*(P485)rt_nil_check(F->x_656)).ival = ((rt_int)1LL);
}
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->result_ = F->x_656;
goto ret_;
}
if (rt_str_eq(F->w_658, rt_str("NIL", 3))) {
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)6LL), F->line_655);
goto ret_;
}
F->result_ = f_name_node_77();
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_656 = f_nn_48(((rt_int)17LL), F->line_655);
(*(P485)rt_nil_check(F->x_656)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_656;
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_659 = NULL;
F->tail_660 = NULL;
F->x_656 = f_nn_48(((rt_int)14LL), F->line_655);
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_661 = 1;
while (F->more_661) {
f_append_52(&F->head_659, &F->tail_660, f_constructor_item_101());
F->more_661 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P485)rt_nil_check(F->x_656)).a = F->head_659;
F->result_ = F->x_656;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_constructor_item_101(void) {
  struct f_constructor_item_101fr *F = rt_alloc(sizeof *F);
F->line_662 = f_cur_line_55();
F->it_663 = NULL;
F->it_663 = f_nn_48(((rt_int)15LL), F->line_662);
F->first_664 = NULL;
F->first_664 = f_expr_89();
F->keys_665 = NULL;
F->ktail_666 = NULL;
F->lab_667 = NULL;
F->lab_667 = f_nn_48(((rt_int)61LL), F->line_662);
(*(P485)rt_nil_check(F->lab_667)).a = F->first_664;
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P485)rt_nil_check(F->lab_667)).b = f_expr_89();
f_append_52(&F->keys_665, &F->ktail_666, F->lab_667);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_52(&F->keys_665, &F->ktail_666, F->lab_667);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_668 = g_tpos_513;
F->more_669 = NULL;
F->tail2_670 = NULL;
F->ok_671 = 0;
F->go_672 = 1;
while ((F->go_672 && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_673 = NULL;
F->l2_673 = f_nn_48(((rt_int)61LL), F->line_662);
(*(P485)rt_nil_check(F->l2_673)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P485)rt_nil_check(F->l2_673)).b = f_expr_89();
}
f_append_52(&F->more_669, &F->tail2_670, F->l2_673);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_671 = 1;
F->go_672 = 0;
} else if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_672 = 0;
}
}
if (F->ok_671) {
f_append_52(&F->keys_665, &F->ktail_666, F->lab_667);
f_append_52(&F->keys_665, &F->ktail_666, F->more_669);
} else {
g_tpos_513 = F->save_668;
}
}
if ((F->keys_665 != NULL)) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P485)rt_nil_check(F->it_663)).a = F->keys_665;
(*(P485)rt_nil_check(F->it_663)).b = f_expr_89();
} else {
(*(P485)rt_nil_check(F->it_663)).b = F->first_664;
}
F->result_ = F->it_663;
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

static P485 f_body_103(void) {
  struct f_body_103fr *F = rt_alloc(sizeof *F);
F->head_674 = NULL;
F->tail_675 = NULL;
while ((!f_at_body_end_102())) {
f_append_52(&F->head_674, &F->tail_675, f_body_element_104());
}
F->result_ = F->head_674;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_body_element_104(void) {
  struct f_body_element_104fr *F = rt_alloc(sizeof *F);
F->x_676 = NULL;
if ((((((((((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_676 = f_declaration_105();
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_676 = f_nn_48(((rt_int)33LL), f_cur_line_55());
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_676)).a = f_expr_89();
} else {
F->x_676 = f_statement_126();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_676;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_declaration_105(void) {
  struct f_declaration_105fr *F = rt_alloc(sizeof *F);
F->line_677 = f_cur_line_55();
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
F->head_678 = NULL;
F->tail_679 = NULL;
F->names_680 = NULL;
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->names_680 = f_id_list_78();
while ((F->names_680 != NULL)) {
F->x_681 = NULL;
F->x_681 = f_nn_48(((rt_int)49LL), F->line_677);
(*(P485)rt_nil_check(F->x_681)).name = (*(P485)rt_nil_check(F->names_680)).name;
f_append_52(&F->head_678, &F->tail_679, F->x_681);
F->names_680 = (*(P485)rt_nil_check(F->names_680)).next;
}
F->result_ = F->head_678;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_object_decl_106(void) {
  struct f_object_decl_106fr *F = rt_alloc(sizeof *F);
F->line_682 = f_cur_line_55();
F->is_var_683 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_684 = NULL;
F->st_685 = NULL;
F->init_686 = NULL;
F->head_687 = NULL;
F->tail_688 = NULL;
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->names_684 = f_id_list_78();
if (F->is_var_683) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_685 = f_p_subtype_79();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_686 = f_expr_89();
}
} else {
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_685 = f_p_subtype_79();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_686 = f_expr_89();
}
while ((F->names_684 != NULL)) {
F->x_689 = NULL;
if (F->is_var_683) {
F->x_689 = f_nn_48(((rt_int)40LL), F->line_682);
} else {
F->x_689 = f_nn_48(((rt_int)41LL), F->line_682);
}
(*(P485)rt_nil_check(F->x_689)).name = (*(P485)rt_nil_check(F->names_684)).name;
(*(P485)rt_nil_check(F->x_689)).a = F->st_685;
(*(P485)rt_nil_check(F->x_689)).b = F->init_686;
f_append_52(&F->head_687, &F->tail_688, F->x_689);
F->names_684 = (*(P485)rt_nil_check(F->names_684)).next;
}
F->result_ = F->head_687;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_abbrev_decl_107(void) {
  struct f_abbrev_decl_107fr *F = rt_alloc(sizeof *F);
F->x_690 = NULL;
F->x_690 = f_nn_48(((rt_int)42LL), f_cur_line_55());
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_690)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_690)).b = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P485)rt_nil_check(F->x_690)).a = f_p_subtype_79();
F->result_ = F->x_690;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_skip_rep_108(void) {
  struct f_skip_rep_108fr *F = rt_alloc(sizeof *F);
F->depth_691 = ((rt_int)0LL);
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((F->depth_691 == ((rt_int)0LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_61(((rt_int)0LL))))) {
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_691 = rt_add(F->depth_691, ((rt_int)1LL));
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_691 = rt_sub(F->depth_691, ((rt_int)1LL));
}
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
}
}
ret_:
  return;
}

static P485 f_type_decl_109(void) {
  struct f_type_decl_109fr *F = rt_alloc(sizeof *F);
F->line_692 = f_cur_line_55();
F->name_693 = NULL;
F->params_694 = NULL;
F->x_695 = NULL;
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->name_693 = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_694 = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P480)rt_nil_check((*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->x_695 = f_nn_48(((rt_int)44LL), F->line_692);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_695)).b = f_formal_params_112();
}
} else {
F->x_695 = f_nn_48(((rt_int)43LL), F->line_692);
(*(P485)rt_nil_check(F->x_695)).b = F->params_694;
}
(*(P485)rt_nil_check(F->x_695)).name = F->name_693;
(*(P485)rt_nil_check(F->x_695)).a = f_p_subtype_79();
f_skip_rep_108();
F->result_ = F->x_695;
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

static P485 f_formal_params_112(void) {
  struct f_formal_params_112fr *F = rt_alloc(sizeof *F);
F->head_696 = NULL;
F->tail_697 = NULL;
F->more_698 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_698) {
F->mode_699 = ((rt_int)1LL);
F->names_700 = NULL;
F->ntail_701 = NULL;
F->st_702 = NULL;
if ((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_699 = f_mode_of_111(&(*(P480)rt_nil_check((*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s)));
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
}
f_append_52(&F->names_700, &F->ntail_701, f_name_node_77());
while ((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL))) && (f_kind_at_63(((rt_int)2LL)) == ((rt_int)3LL))) && (rt_str_eq((*(P480)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P480)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
f_append_52(&F->names_700, &F->ntail_701, f_name_node_77());
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_702 = f_p_subtype_79();
while ((F->names_700 != NULL)) {
F->p_703 = NULL;
F->p_703 = f_nn_48(((rt_int)52LL), (*(P485)rt_nil_check(F->names_700)).line);
(*(P485)rt_nil_check(F->p_703)).name = (*(P485)rt_nil_check(F->names_700)).name;
(*(P485)rt_nil_check(F->p_703)).ival = F->mode_699;
(*(P485)rt_nil_check(F->p_703)).a = F->st_702;
f_append_52(&F->head_696, &F->tail_697, F->p_703);
F->names_700 = (*(P485)rt_nil_check(F->names_700)).next;
}
F->more_698 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_696;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_imports_list_114(P485 owner_113) {
  struct f_imports_list_114fr *F = rt_alloc(sizeof *F);
F->owner_113 = owner_113;
F->head_704 = NULL;
F->tail_705 = NULL;
F->more_706 = 1;
if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P485)rt_nil_check(F->owner_113)).flag = rt_add((*(P485)rt_nil_check(F->owner_113)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_706) {
F->ro_707 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_708 = NULL;
F->x_708 = f_name_node_77();
if (F->ro_707) {
(*(P485)rt_nil_check(F->x_708)).ival = ((rt_int)1LL);
}
f_append_52(&F->head_704, &F->tail_705, F->x_708);
F->more_706 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P485)rt_nil_check(F->owner_113)).d = F->head_704;
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

static P480 f_definable_name_117(void) {
  struct f_definable_name_117fr *F = rt_alloc(sizeof *F);
if ((f_at_kind_61(((rt_int)1LL)) || (f_at_kind_61(((rt_int)3LL)) && f_is_definable_116(&(*(P480)rt_nil_check((*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s)))))) {
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->result_ = (*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(rt_sub(g_tpos_513, ((rt_int)1LL)), (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_subprogram_decl_118(void) {
  struct f_subprogram_decl_118fr *F = rt_alloc(sizeof *F);
F->line_709 = f_cur_line_55();
F->x_710 = NULL;
F->is_abn_711 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_712 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_712) {
F->x_710 = f_nn_48(((rt_int)46LL), F->line_709);
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_710 = f_nn_48(((rt_int)45LL), F->line_709);
} else {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
if (F->is_abn_711) {
(*(P485)rt_nil_check(F->x_710)).flag = ((rt_int)1LL);
}
(*(P485)rt_nil_check(F->x_710)).name = f_definable_name_117();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_710)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_710)).a = f_formal_params_112();
}
if (F->is_func_712) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P485)rt_nil_check(F->x_710)).b = f_p_subtype_79();
}
F->dummy_713 = f_imports_list_114(F->x_710);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P485)rt_nil_check(F->x_710)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_712) {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P480)rt_nil_check(f_definable_name_117())), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->x_710)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->x_710)).name))); b_; }));
}
F->result_ = F->x_710;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_capsule_decl_119(void) {
  struct f_capsule_decl_119fr *F = rt_alloc(sizeof *F);
F->x_714 = NULL;
F->x_714 = f_nn_48(((rt_int)47LL), f_cur_line_55());
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_714)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_714)).b = f_formal_params_112();
}
F->dummy_715 = f_imports_list_114(F->x_714);
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P485)rt_nil_check(F->x_714)).ival = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P485)rt_nil_check(F->x_714)).ival = ((rt_int)0LL);
} else {
F->head_716 = NULL;
F->tail_717 = NULL;
F->more_718 = 1;
while (F->more_718) {
F->n_719 = NULL;
F->n_719 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P485)rt_nil_check(F->n_719)).ival = ((rt_int)1LL);
}
(*(P485)rt_nil_check(F->n_719)).name = f_definable_name_117();
f_append_52(&F->head_716, &F->tail_717, F->n_719);
F->more_718 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P485)rt_nil_check(F->x_714)).a = F->head_716;
(*(P485)rt_nil_check(F->x_714)).ival = ((rt_int)2LL);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P485)rt_nil_check(F->x_714)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P480)rt_nil_check(f_expect_id_76())), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->x_714)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_714;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_formal_tt_120(void) {
  struct f_formal_tt_120fr *F = rt_alloc(sizeof *F);
F->head_720 = NULL;
F->tail_721 = NULL;
F->more_722 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_722) {
f_append_52(&F->head_720, &F->tail_721, f_name_node_77());
F->more_722 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_720;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_generic_decl_121(void) {
  struct f_generic_decl_121fr *F = rt_alloc(sizeof *F);
F->x_723 = NULL;
F->x_723 = f_nn_48(((rt_int)51LL), f_cur_line_55());
F->head_724 = NULL;
F->tail_725 = NULL;
F->more_726 = 1;
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
while (F->more_726) {
F->names_727 = NULL;
F->names_727 = f_id_list_78();
F->kind_728 = ((rt_int)6LL);
F->st_729 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_728 = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_728 = ((rt_int)2LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_728 = ((rt_int)3LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_728 = ((rt_int)4LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_728 = ((rt_int)5LL);
} else {
F->st_729 = f_p_subtype_79();
}
if (((F->kind_728 <= ((rt_int)2LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P485)rt_nil_check(F->x_723)).e = f_actual_params_80();
} else if (((F->kind_728 >= ((rt_int)3LL)) && (F->kind_728 <= ((rt_int)5LL)))) {
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_729 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
}
if (((F->kind_728 == ((rt_int)4LL)) && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_729 = f_p_subtype_79();
}
}
while ((F->names_727 != NULL)) {
F->p_730 = NULL;
F->p_730 = f_nn_48(((rt_int)52LL), (*(P485)rt_nil_check(F->names_727)).line);
(*(P485)rt_nil_check(F->p_730)).name = (*(P485)rt_nil_check(F->names_727)).name;
(*(P485)rt_nil_check(F->p_730)).ival = F->kind_728;
(*(P485)rt_nil_check(F->p_730)).a = F->st_729;
f_append_52(&F->head_724, &F->tail_725, F->p_730);
F->names_727 = (*(P485)rt_nil_check(F->names_727)).next;
}
F->more_726 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_726 = 1;
while (F->more_726) {
F->nm_731 = NULL;
F->nm_731 = f_definable_name_117();
F->st_732 = NULL;
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_732 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_732 = f_p_subtype_79();
}
F->more_726 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P485)rt_nil_check(F->x_723)).a = F->head_724;
(*(P485)rt_nil_check(F->x_723)).b = f_declaration_105();
(*(P485)rt_nil_check(F->x_723)).name = (*(P485)rt_nil_check((*(P485)rt_nil_check(F->x_723)).b)).name;
F->result_ = F->x_723;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_task_decl_122(void) {
  struct f_task_decl_122fr *F = rt_alloc(sizeof *F);
F->x_733 = NULL;
F->x_733 = f_nn_48(((rt_int)50LL), f_cur_line_55());
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_733)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_733)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_733)).a = f_formal_params_112();
}
F->dummy_734 = f_imports_list_114(F->x_733);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P485)rt_nil_check(F->x_733)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P480)rt_nil_check(f_expect_id_76())), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->x_733)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->x_733)).name))); b_; }));
}
F->result_ = F->x_733;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_expose_decl_123(void) {
  struct f_expose_decl_123fr *F = rt_alloc(sizeof *F);
F->x_735 = NULL;
F->x_735 = f_nn_48(((rt_int)48LL), f_cur_line_55());
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P485)rt_nil_check(F->x_735)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_736 = NULL;
F->tail_737 = NULL;
F->more_738 = 1;
while (F->more_738) {
F->n_739 = NULL;
F->n_739 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P485)rt_nil_check(F->n_739)).ival = ((rt_int)1LL);
}
(*(P485)rt_nil_check(F->n_739)).name = f_definable_name_117();
f_append_52(&F->head_736, &F->tail_737, F->n_739);
F->more_738 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P485)rt_nil_check(F->x_735)).a = F->head_736;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P485)rt_nil_check(F->x_735)).flag = ((rt_int)1LL);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P485)rt_nil_check(F->x_735)).flag = rt_add((*(P485)rt_nil_check(F->x_735)).flag, ((rt_int)2LL));
}
(*(P485)rt_nil_check(F->x_735)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_735)).b = f_actual_params_80();
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_740 = NULL;
F->tail_741 = NULL;
F->more_742 = 1;
while (F->more_742) {
F->n_743 = NULL;
F->n_743 = f_nn_48(((rt_int)7LL), f_cur_line_55());
F->tgt_744 = NULL;
F->tgt_744 = f_nn_48(((rt_int)7LL), f_cur_line_55());
(*(P485)rt_nil_check(F->n_743)).name = f_definable_name_117();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P485)rt_nil_check(F->tgt_744)).name = f_definable_name_117();
(*(P485)rt_nil_check(F->n_743)).a = F->tgt_744;
f_append_52(&F->head_740, &F->tail_741, F->n_743);
F->more_742 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P485)rt_nil_check(F->x_735)).c = F->head_740;
}
F->result_ = F->x_735;
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

static P485 f_statement_126(void) {
  struct f_statement_126fr *F = rt_alloc(sizeof *F);
F->labels_745 = NULL;
F->ltail_746 = NULL;
F->match_747 = NULL;
F->s_748 = NULL;
while (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq((*(P480)rt_nil_check(f_text_at_65(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_52(&F->labels_745, &F->ltail_746, f_name_node_77());
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
}
if (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))) && f_is_compound_kw_125(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P480)rt_nil_check(f_text_at_65(((rt_int)1LL)))); b_; })))) {
F->match_747 = f_expect_id_76();
}
F->s_748 = f_unlabeled_statement_127();
if ((F->match_747 != NULL)) {
if (((((((((*(P485)rt_nil_check(F->s_748)).kind != ((rt_int)22LL)) && ((*(P485)rt_nil_check(F->s_748)).kind != ((rt_int)23LL))) && ((*(P485)rt_nil_check(F->s_748)).kind != ((rt_int)24LL))) && ((*(P485)rt_nil_check(F->s_748)).kind != ((rt_int)25LL))) && ((*(P485)rt_nil_check(F->s_748)).kind != ((rt_int)26LL))) && ((*(P485)rt_nil_check(F->s_748)).kind != ((rt_int)35LL))) && ((*(P485)rt_nil_check(F->s_748)).kind != ((rt_int)36LL)))) {
f_fail_23((*(P485)rt_nil_check(F->s_748)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P480)rt_nil_check(f_expect_id_76())), (*(P480)rt_nil_check(F->match_747))))) {
f_fail_23((*(P485)rt_nil_check(F->s_748)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P480)rt_nil_check(F->match_747))); b_; }));
}
(*(P485)rt_nil_check(F->s_748)).tag = F->match_747;
}
if ((F->labels_745 != NULL)) {
f_fail_23((*(P485)rt_nil_check(F->s_748)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_748;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_unlabeled_statement_127(void) {
  struct f_unlabeled_statement_127fr *F = rt_alloc(sizeof *F);
F->line_749 = f_cur_line_55();
F->x_750 = NULL;
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
F->x_750 = f_nn_48(((rt_int)25LL), F->line_749);
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_750)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_750;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_135();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_750 = f_nn_48(((rt_int)27LL), F->line_749);
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_750)).name = f_expect_id_76();
F->result_ = F->x_750;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_750 = f_nn_48(((rt_int)28LL), F->line_749);
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P485)rt_nil_check(F->x_750)).a = f_expr_89();
}
F->result_ = F->x_750;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_750 = f_nn_48(((rt_int)30LL), F->line_749);
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_750)).name = f_expect_id_76();
F->result_ = F->x_750;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)31LL), F->line_749);
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_750 = f_nn_48(((rt_int)34LL), F->line_749);
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_750)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_750)).e = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_750)).b = f_actual_params_80();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P485)rt_nil_check(F->x_750)).a = f_postfix_99();
F->result_ = F->x_750;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_751 = NULL;
F->tail_752 = NULL;
F->x_750 = f_nn_48(((rt_int)35LL), F->line_749);
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_753 = NULL;
F->itail_754 = NULL;
F->more_755 = 1;
while (F->more_755) {
f_append_52(&F->invs_753, &F->itail_754, f_postfix_99());
F->more_755 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_751, &F->tail_752, f_arm_131(F->invs_753, f_body_103(), F->line_749));
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P485)rt_nil_check(F->x_750)).a = F->head_751;
F->result_ = F->x_750;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_750 = f_nn_48(((rt_int)36LL), F->line_749);
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_750)).a = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P485)rt_nil_check(F->x_750)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_750;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_750 = f_nn_48(((rt_int)32LL), F->line_749);
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_750)).a = f_postfix_99();
if ((!(f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P480)rt_nil_check((*(P481)rt_nil_check((*(P483)rt_nil_check(g_toks_511)).p[rt_index(g_tpos_513, (*(P483)rt_nil_check(g_toks_511)).lo, (*(P483)rt_nil_check(g_toks_511)).hi) - (*(P483)rt_nil_check(g_toks_511)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P485)rt_nil_check(F->x_750)).b = f_actual_params_80();
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P485)rt_nil_check(F->x_750)).c = f_expr_89();
}
F->result_ = F->x_750;
goto ret_;
}
{
F->target_756 = NULL;
F->target_756 = f_postfix_99();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_750 = f_nn_48(((rt_int)20LL), F->line_749);
(*(P485)rt_nil_check(F->x_750)).a = F->target_756;
(*(P485)rt_nil_check(F->x_750)).b = f_expr_89();
} else {
F->x_750 = f_nn_48(((rt_int)21LL), F->line_749);
(*(P485)rt_nil_check(F->x_750)).a = F->target_756;
}
}
F->result_ = F->x_750;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_arm_131(P485 cond_128, P485 b_129, rt_int line_130) {
  struct f_arm_131fr *F = rt_alloc(sizeof *F);
F->cond_128 = cond_128;
F->b_129 = b_129;
F->line_130 = line_130;
F->x_757 = NULL;
F->x_757 = f_nn_48(((rt_int)60LL), F->line_130);
(*(P485)rt_nil_check(F->x_757)).a = F->cond_128;
(*(P485)rt_nil_check(F->x_757)).b = F->b_129;
F->result_ = F->x_757;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_if_stmt_132(void) {
  struct f_if_stmt_132fr *F = rt_alloc(sizeof *F);
F->x_758 = NULL;
F->x_758 = f_nn_48(((rt_int)22LL), f_cur_line_55());
F->head_759 = NULL;
F->tail_760 = NULL;
F->cond_761 = NULL;
F->go_762 = 1;
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
F->cond_761 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_759, &F->tail_760, f_arm_131(F->cond_761, f_body_103(), (*(P485)rt_nil_check(F->x_758)).line));
while (F->go_762) {
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_761 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_759, &F->tail_760, f_arm_131(F->cond_761, f_body_103(), (*(P485)rt_nil_check(F->x_758)).line));
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P485)rt_nil_check(F->x_758)).flag = ((rt_int)1LL);
(*(P485)rt_nil_check(F->x_758)).b = f_body_103();
} else {
F->go_762 = 0;
}
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P485)rt_nil_check(F->x_758)).a = F->head_759;
F->result_ = F->x_758;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_case_stmt_133(void) {
  struct f_case_stmt_133fr *F = rt_alloc(sizeof *F);
F->x_763 = NULL;
F->x_763 = f_nn_48(((rt_int)23LL), f_cur_line_55());
F->head_764 = NULL;
F->tail_765 = NULL;
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_763)).a = f_expr_89();
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_766 = NULL;
F->ltail_767 = NULL;
F->more_768 = 1;
while (F->more_768) {
F->l_769 = NULL;
F->l_769 = f_nn_48(((rt_int)61LL), f_cur_line_55());
(*(P485)rt_nil_check(F->l_769)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P485)rt_nil_check(F->l_769)).b = f_expr_89();
}
f_append_52(&F->labs_766, &F->ltail_767, F->l_769);
F->more_768 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_764, &F->tail_765, f_arm_131(F->labs_766, f_body_103(), (*(P485)rt_nil_check(F->x_763)).line));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P485)rt_nil_check(F->x_763)).flag = ((rt_int)1LL);
(*(P485)rt_nil_check(F->x_763)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P485)rt_nil_check(F->x_763)).b = F->head_764;
F->result_ = F->x_763;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_repeat_stmt_134(void) {
  struct f_repeat_stmt_134fr *F = rt_alloc(sizeof *F);
F->x_770 = NULL;
F->x_770 = f_nn_48(((rt_int)24LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P485)rt_nil_check(F->x_770)).flag = ((rt_int)1LL);
(*(P485)rt_nil_check(F->x_770)).name = f_expect_id_76();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P485)rt_nil_check(F->x_770)).ival = ((rt_int)1LL);
}
(*(P485)rt_nil_check(F->x_770)).a = f_p_subtype_79();
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P485)rt_nil_check(F->x_770)).a = f_expr_89();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P485)rt_nil_check(F->x_770)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_770;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_guard_stmt_135(void) {
  struct f_guard_stmt_135fr *F = rt_alloc(sizeof *F);
F->x_771 = NULL;
F->x_771 = f_nn_48(((rt_int)26LL), f_cur_line_55());
F->head_772 = NULL;
F->tail_773 = NULL;
g_tpos_513 = rt_add(g_tpos_513, ((rt_int)1LL));
(*(P485)rt_nil_check(F->x_771)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_774 = NULL;
F->h_774 = f_nn_48(((rt_int)62LL), f_cur_line_55());
(*(P485)rt_nil_check(F->h_774)).a = f_id_list_78();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P485)rt_nil_check(F->h_774)).b = f_body_103();
f_append_52(&F->head_772, &F->tail_773, F->h_774);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P485)rt_nil_check(F->x_771)).flag = ((rt_int)1LL);
(*(P485)rt_nil_check(F->x_771)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P485)rt_nil_check(F->x_771)).b = F->head_772;
F->result_ = F->x_771;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_program_136(void) {
  struct f_program_136fr *F = rt_alloc(sizeof *F);
F->head_775 = NULL;
F->tail_776 = NULL;
while ((!f_at_kind_61(((rt_int)0LL)))) {
if ((!f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
f_append_52(&F->head_775, &F->tail_776, f_capsule_decl_119());
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_775;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_hash_138(rstr *s_137) {
  struct f_hash_138fr *F = rt_alloc(sizeof *F);
F->s_137 = s_137;
F->h_777 = ((rt_int)0LL);
{ rt_int lo779 = ((rt_int)1LL), hi780 = ((*F->s_137)).len;
for (rt_int it781 = lo779; it781 <= hi780; it781++) {
F->i_778 = it781;
F->h_777 = rt_mod(rt_add(rt_mul(F->h_777, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_137), F->i_778)) + 1)), ((rt_int)4093LL));
}
}
F->result_ = F->h_777;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P495 f_lookup_140(rstr *name_139) {
  struct f_lookup_140fr *F = rt_alloc(sizeof *F);
F->name_139 = name_139;
F->y_782 = NULL;
F->y_782 = (*(P501)rt_nil_check(g_table_515)).p[rt_index(f_hash_138(&(*F->name_139)), (*(P501)rt_nil_check(g_table_515)).lo, (*(P501)rt_nil_check(g_table_515)).hi) - (*(P501)rt_nil_check(g_table_515)).lo];
while ((F->y_782 != NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_782)).name)), (*F->name_139))) {
F->result_ = F->y_782;
goto ret_;
}
F->y_782 = (*(P495)rt_nil_check(F->y_782)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P495 f_lookup_decl_142(P485 d_141) {
  struct f_lookup_decl_142fr *F = rt_alloc(sizeof *F);
F->d_141 = d_141;
F->y_783 = NULL;
F->y_783 = (*(P501)rt_nil_check(g_table_515)).p[rt_index(f_hash_138(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->d_141)).name))), (*(P501)rt_nil_check(g_table_515)).lo, (*(P501)rt_nil_check(g_table_515)).hi) - (*(P501)rt_nil_check(g_table_515)).lo];
while ((F->y_783 != NULL)) {
if (((*(P495)rt_nil_check(F->y_783)).decl == F->d_141)) {
F->result_ = F->y_783;
goto ret_;
}
F->y_783 = (*(P495)rt_nil_check(F->y_783)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_define_145(P495 y_143, rt_int line_144) {
  struct f_define_145fr *F = rt_alloc(sizeof *F);
F->y_143 = y_143;
F->line_144 = line_144;
F->h_784 = f_hash_138(&(*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_143)).name)));
F->z_785 = NULL;
F->z_785 = (*(P501)rt_nil_check(g_table_515)).p[rt_index(F->h_784, (*(P501)rt_nil_check(g_table_515)).lo, (*(P501)rt_nil_check(g_table_515)).hi) - (*(P501)rt_nil_check(g_table_515)).lo];
while ((F->z_785 != NULL)) {
if (((((*(P495)rt_nil_check(F->z_785)).depth == g_depth_516) && rt_str_eq((*(P480)rt_nil_check((*(P495)rt_nil_check(F->z_785)).name)), (*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_143)).name)))) && (!(((f_overloadable_147(F->y_143) && f_overloadable_147(F->z_785)) && ((*(P495)rt_nil_check(F->z_785)).kind == (*(P495)rt_nil_check(F->y_143)).kind)) && (!f_same_signature_150((*(P495)rt_nil_check(F->y_143)).params, (*(P495)rt_nil_check(F->z_785)).params)))))) {
f_fail_23(F->line_144, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_143)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_785 = (*(P495)rt_nil_check(F->z_785)).chain;
}
(*(P495)rt_nil_check(F->y_143)).depth = g_depth_516;
(*(P495)rt_nil_check(F->y_143)).chain = (*(P501)rt_nil_check(g_table_515)).p[rt_index(F->h_784, (*(P501)rt_nil_check(g_table_515)).lo, (*(P501)rt_nil_check(g_table_515)).hi) - (*(P501)rt_nil_check(g_table_515)).lo];
(*(P501)rt_nil_check(g_table_515)).p[rt_index(F->h_784, (*(P501)rt_nil_check(g_table_515)).lo, (*(P501)rt_nil_check(g_table_515)).hi) - (*(P501)rt_nil_check(g_table_515)).lo] = F->y_143;
(*(P495)rt_nil_check(F->y_143)).stack = g_scope_stack_517;
g_scope_stack_517 = F->y_143;
ret_:
  return;
}

static int f_overloadable_147(P495 y_146) {
  struct f_overloadable_147fr *F = rt_alloc(sizeof *F);
F->y_146 = y_146;
F->result_ = ((((*(P495)rt_nil_check(F->y_146)).kind == ((rt_int)3LL)) || ((*(P495)rt_nil_check(F->y_146)).kind == ((rt_int)4LL))) || ((*(P495)rt_nil_check(F->y_146)).kind == ((rt_int)9LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_signature_150(P493 a_148, P493 b_149) {
  struct f_same_signature_150fr *F = rt_alloc(sizeof *F);
F->a_148 = a_148;
F->b_149 = b_149;
F->x_786 = NULL;
F->x_786 = F->a_148;
F->y_787 = NULL;
F->y_787 = F->b_149;
while (((F->x_786 != NULL) && (F->y_787 != NULL))) {
if ((!f_same_164((*(P493)rt_nil_check(F->x_786)).t, (*(P493)rt_nil_check(F->y_787)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_786 = (*(P493)rt_nil_check(F->x_786)).next;
F->y_787 = (*(P493)rt_nil_check(F->y_787)).next;
}
F->result_ = ((F->x_786 == NULL) && (F->y_787 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_open_scope_151(void) {
  struct f_open_scope_151fr *F = rt_alloc(sizeof *F);
g_depth_516 = rt_add(g_depth_516, ((rt_int)1LL));
ret_:
  return;
}

static void f_close_scope_152(void) {
  struct f_close_scope_152fr *F = rt_alloc(sizeof *F);
while (((g_scope_stack_517 != NULL) && ((*(P495)rt_nil_check(g_scope_stack_517)).depth == g_depth_516))) {
(*(P501)rt_nil_check(g_table_515)).p[rt_index(f_hash_138(&(*(P480)rt_nil_check((*(P495)rt_nil_check(g_scope_stack_517)).name))), (*(P501)rt_nil_check(g_table_515)).lo, (*(P501)rt_nil_check(g_table_515)).hi) - (*(P501)rt_nil_check(g_table_515)).lo] = (*(P495)rt_nil_check(g_scope_stack_517)).chain;
g_scope_stack_517 = (*(P495)rt_nil_check(g_scope_stack_517)).stack;
}
g_depth_516 = rt_sub(g_depth_516, ((rt_int)1LL));
ret_:
  return;
}

static P495 f_new_sym_155(rt_int kind_153, P480 name_154) {
  struct f_new_sym_155fr *F = rt_alloc(sizeof *F);
F->kind_153 = kind_153;
F->name_154 = name_154;
F->y_788 = NULL;
{ R496 *cell789 = rt_alloc(sizeof(R496));
(*cell789).name = NULL;
(*cell789).t = NULL;
(*cell789).c = NULL;
(*cell789).access = NULL;
(*cell789).cname = NULL;
(*cell789).st = NULL;
(*cell789).decl = NULL;
(*cell789).params = NULL;
(*cell789).result = NULL;
(*cell789).members = NULL;
(*cell789).mnext = NULL;
(*cell789).binds = NULL;
(*cell789).insts = NULL;
(*cell789).chain = NULL;
(*cell789).stack = NULL;
F->y_788 = cell789;
}
(*(P495)rt_nil_check(F->y_788)).kind = F->kind_153;
(*(P495)rt_nil_check(F->y_788)).name = F->name_154;
F->result_ = F->y_788;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P489 f_new_typ_157(rt_int kind_156) {
  struct f_new_typ_157fr *F = rt_alloc(sizeof *F);
F->kind_156 = kind_156;
F->t_790 = NULL;
{ R490 *cell791 = rt_alloc(sizeof(R490));
(*cell791).name = NULL;
(*cell791).lits = NULL;
(*cell791).elem = NULL;
(*cell791).idx = NULL;
(*cell791).idx2 = NULL;
(*cell791).elemcons = NULL;
(*cell791).elemst = NULL;
(*cell791).under = NULL;
(*cell791).tparams = NULL;
(*cell791).ocap = NULL;
(*cell791).fields = NULL;
(*cell791).target = NULL;
(*cell791).decl = NULL;
(*cell791).cname = NULL;
(*cell791).next = NULL;
F->t_790 = cell791;
}
(*(P489)rt_nil_check(F->t_790)).kind = F->kind_156;
F->result_ = F->t_790;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P487 f_new_cons_158(void) {
  struct f_new_cons_158fr *F = rt_alloc(sizeof *F);
F->c_792 = NULL;
{ R488 *cell793 = rt_alloc(sizeof(R488));
(*cell793).lo = NULL;
(*cell793).hi = NULL;
(*cell793).lo2 = NULL;
(*cell793).hi2 = NULL;
(*cell793).slen = NULL;
(*cell793).args = NULL;
F->c_792 = cell793;
}
F->result_ = F->c_792;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_lits_161(P485 a_159, P485 b_160) {
  struct f_same_lits_161fr *F = rt_alloc(sizeof *F);
F->a_159 = a_159;
F->b_160 = b_160;
F->x_794 = NULL;
F->x_794 = F->a_159;
F->y_795 = NULL;
F->y_795 = F->b_160;
while (((F->x_794 != NULL) && (F->y_795 != NULL))) {
if ((!rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->x_794)).name)), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->y_795)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_794 = (*(P485)rt_nil_check(F->x_794)).next;
F->y_795 = (*(P485)rt_nil_check(F->y_795)).next;
}
F->result_ = ((F->x_794 == NULL) && (F->y_795 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_164(P489 a_162, P489 b_163) {
  struct f_same_164fr *F = rt_alloc(sizeof *F);
F->a_162 = a_162;
F->b_163 = b_163;
if ((F->a_162 == F->b_163)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_162 == NULL) || (F->b_163 == NULL)) || ((*(P489)rt_nil_check(F->a_162)).kind != (*(P489)rt_nil_check(F->b_163)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P489)rt_nil_check(F->a_162)).kind == ((rt_int)1LL)) || ((*(P489)rt_nil_check(F->a_162)).kind == ((rt_int)2LL))) || ((*(P489)rt_nil_check(F->a_162)).kind == ((rt_int)3LL))) || ((*(P489)rt_nil_check(F->a_162)).kind == ((rt_int)5LL))) || ((*(P489)rt_nil_check(F->a_162)).kind == ((rt_int)9LL))) || ((*(P489)rt_nil_check(F->a_162)).kind == ((rt_int)10LL)))) {
F->result_ = 1;
goto ret_;
}
if (((*(P489)rt_nil_check(F->a_162)).kind == ((rt_int)4LL))) {
F->result_ = f_same_lits_161((*(P489)rt_nil_check(F->a_162)).lits, (*(P489)rt_nil_check(F->b_163)).lits);
goto ret_;
}
if (((*(P489)rt_nil_check(F->a_162)).kind == ((rt_int)6LL))) {
if ((((*(P489)rt_nil_check(F->a_162)).idx2 == NULL) != ((*(P489)rt_nil_check(F->b_163)).idx2 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_164((*(P489)rt_nil_check(F->a_162)).elem, (*(P489)rt_nil_check(F->b_163)).elem) && f_same_164((*(P489)rt_nil_check(F->a_162)).idx, (*(P489)rt_nil_check(F->b_163)).idx));
goto ret_;
}
if ((((*(P489)rt_nil_check(F->a_162)).kind == ((rt_int)16LL)) || ((*(P489)rt_nil_check(F->a_162)).kind == ((rt_int)12LL)))) {
F->result_ = f_same_164((*(P489)rt_nil_check(F->a_162)).elem, (*(P489)rt_nil_check(F->b_163)).elem);
goto ret_;
}
if (((*(P489)rt_nil_check(F->a_162)).kind == ((rt_int)7LL))) {
F->f_796 = NULL;
F->f_796 = (*(P489)rt_nil_check(F->a_162)).fields;
F->g_797 = NULL;
F->g_797 = (*(P489)rt_nil_check(F->b_163)).fields;
while (((F->f_796 != NULL) && (F->g_797 != NULL))) {
if (((!rt_str_eq((*(P480)rt_nil_check((*(P491)rt_nil_check(F->f_796)).name)), (*(P480)rt_nil_check((*(P491)rt_nil_check(F->g_797)).name)))) || (!f_same_164((*(P491)rt_nil_check(F->f_796)).t, (*(P491)rt_nil_check(F->g_797)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_796 = (*(P491)rt_nil_check(F->f_796)).next;
F->g_797 = (*(P491)rt_nil_check(F->g_797)).next;
}
F->result_ = ((F->f_796 == NULL) && (F->g_797 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P489 f_base_of_166(P489 t_165) {
  struct f_base_of_166fr *F = rt_alloc(sizeof *F);
F->t_165 = t_165;
if ((((F->t_165 != NULL) && ((*(P489)rt_nil_check(F->t_165)).kind == ((rt_int)15LL))) && ((*(P489)rt_nil_check(F->t_165)).tparams == NULL))) {
F->result_ = f_base_of_166((*(P489)rt_nil_check(F->t_165)).under);
goto ret_;
}
F->result_ = F->t_165;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P487 f_base_cons_169(P489 t_167, P487 c_168) {
  struct f_base_cons_169fr *F = rt_alloc(sizeof *F);
F->t_167 = t_167;
F->c_168 = c_168;
if (((((F->t_167 != NULL) && ((*(P489)rt_nil_check(F->t_167)).kind == ((rt_int)15LL))) && ((*(P489)rt_nil_check(F->t_167)).tparams == NULL)) && ((*(P489)rt_nil_check(F->t_167)).elemcons != NULL))) {
F->result_ = f_base_cons_169((*(P489)rt_nil_check(F->t_167)).under, (*(P489)rt_nil_check(F->t_167)).elemcons);
goto ret_;
}
F->result_ = F->c_168;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_kind_name_171(P489 t_170) {
  struct f_kind_name_171fr *F = rt_alloc(sizeof *F);
F->t_170 = t_170;
{ rt_int sel798 = (*(P489)rt_nil_check(F->t_170)).kind;
if (0 || (sel798 == ((rt_int)1LL))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel798 == ((rt_int)2LL))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel798 == ((rt_int)3LL))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel798 == ((rt_int)4LL))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel798 == ((rt_int)5LL))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel798 == ((rt_int)6LL))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel798 == ((rt_int)7LL))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel798 == ((rt_int)8LL))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_170)).name)));
goto ret_;
} else if (0 || (sel798 == ((rt_int)11LL))) {
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

static void f_check_type_175(P489 got_172, P489 want_173, rt_int line_174) {
  struct f_check_type_175fr *F = rt_alloc(sizeof *F);
F->got_172 = got_172;
F->want_173 = want_173;
F->line_174 = line_174;
if ((F->want_173 == NULL)) {
goto ret_;
}
if ((((*(P489)rt_nil_check(F->got_172)).kind == ((rt_int)11LL)) && ((*(P489)rt_nil_check(F->want_173)).kind == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_164(F->got_172, F->want_173))) {
f_fail_23(F->line_174, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_171(F->got_172)), rt_str(" where ", 7)), f_kind_name_171(F->want_173)), rt_str(" is required", 12)); b_; }));
}
ret_:
  return;
}

static rstr f_ctype_177(P489 t_176) {
  struct f_ctype_177fr *F = rt_alloc(sizeof *F);
F->t_176 = t_176;
{ rt_int sel799 = (*(P489)rt_nil_check(F->t_176)).kind;
if (0 || (sel799 == ((rt_int)1LL))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel799 == ((rt_int)2LL)) || (sel799 == ((rt_int)4LL)) || (sel799 == ((rt_int)10LL))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel799 == ((rt_int)3LL))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel799 == ((rt_int)5LL))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel799 == ((rt_int)9LL))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel799 == ((rt_int)12LL))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel799 == ((rt_int)13LL))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel799 == ((rt_int)14LL))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel799 == ((rt_int)16LL))) {
F->result_ = rt_str("rset", 4);
goto ret_;
} else {
if (((*(P489)rt_nil_check(F->t_176)).cname == NULL)) {
f_declare_ctype_181(F->t_176);
} else if (((((*(P489)rt_nil_check(F->t_176)).kind == ((rt_int)7LL)) && (*(P489)rt_nil_check(F->t_176)).forward) && (!(*(P489)rt_nil_check(F->t_176)).defined))) {
(*(P489)rt_nil_check(F->t_176)).defined = 1;
f_put_27(g_out_types_520, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_176)).cname))), rt_str(" { ", 3)), f_field_decls_179(F->t_176)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_176)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_decls_179(P489 t_178) {
  struct f_field_decls_179fr *F = rt_alloc(sizeof *F);
F->t_178 = t_178;
F->f_800 = NULL;
F->f_800 = (*(P489)rt_nil_check(F->t_178)).fields;
F->s_801 = NULL;
F->s_801 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_800 != NULL)) {
F->s_801 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->s_801)), f_ctype_177((*(P491)rt_nil_check(F->f_800)).t)), rt_str(" ", 1)), f_field_c_17(&(*(P480)rt_nil_check((*(P491)rt_nil_check(F->f_800)).name)))), rt_str("; ", 2)); b_; }));
F->f_800 = (*(P491)rt_nil_check(F->f_800)).next;
}
F->result_ = (*(P480)rt_nil_check(F->s_801));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_declare_ctype_181(P489 t_180) {
  struct f_declare_ctype_181fr *F = rt_alloc(sizeof *F);
F->t_180 = t_180;
F->u_802 = NULL;
F->u_802 = g_all_types_518;
if ((((*(P489)rt_nil_check(F->t_180)).kind == ((rt_int)8LL)) && ((*(P489)rt_nil_check(F->t_180)).target == NULL))) {
f_finish_ptr_261(F->t_180);
if (((*(P489)rt_nil_check(F->t_180)).cname != NULL)) {
goto ret_;
}
}
if (((*(P489)rt_nil_check(F->t_180)).kind != ((rt_int)8LL))) {
while ((F->u_802 != NULL)) {
if ((((*(P489)rt_nil_check(F->u_802)).kind == (*(P489)rt_nil_check(F->t_180)).kind) && f_same_164(F->u_802, F->t_180))) {
(*(P489)rt_nil_check(F->t_180)).cname = (*(P489)rt_nil_check(F->u_802)).cname;
goto ret_;
}
F->u_802 = (*(P489)rt_nil_check(F->u_802)).next;
}
}
if ((((*(P489)rt_nil_check(F->t_180)).kind == ((rt_int)15LL)) && ((*(P489)rt_nil_check(F->t_180)).tparams == NULL))) {
(*(P489)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_177((*(P489)rt_nil_check(F->t_180)).under); b_; }));
goto ret_;
}
if (((*(P489)rt_nil_check(F->t_180)).kind == ((rt_int)6LL))) {
(*(P489)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P489)rt_nil_check(F->t_180)).kind == ((rt_int)15LL))) {
(*(P489)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((*(P489)rt_nil_check(F->t_180)).kind == ((rt_int)7LL))) {
(*(P489)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P489)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P489)rt_nil_check(F->t_180)).next = g_all_types_518;
g_all_types_518 = F->t_180;
if (((*(P489)rt_nil_check(F->t_180)).kind == ((rt_int)8LL))) {
F->target_803 = NULL;
F->target_803 = (*(P489)rt_nil_check(F->t_180)).target;
if (((*(P489)rt_nil_check(F->target_803)).kind == ((rt_int)7LL))) {
if (((*(P489)rt_nil_check(F->target_803)).cname == NULL)) {
(*(P489)rt_nil_check(F->target_803)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P489)rt_nil_check(F->target_803)).next = g_all_types_518;
g_all_types_518 = F->target_803;
f_put_27(g_out_types_520, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->target_803)).cname))), rt_str(" ", 1)), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->target_803)).cname))), rt_str(";", 1)); b_; }));
(*(P489)rt_nil_check(F->target_803)).forward = 1;
}
f_put_27(g_out_types_520, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->target_803)).cname))), rt_str(" *", 2)), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_520, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_177(F->target_803)), rt_str(" *", 2)), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P489)rt_nil_check(F->t_180)).kind == ((rt_int)6LL))) {
f_put_27(g_out_types_520, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_520, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_180)).cname))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_177((*(P489)rt_nil_check(F->t_180)).elem)), rt_str(" *p; };", 7)); b_; }));
} else if (((*(P489)rt_nil_check(F->t_180)).kind == ((rt_int)15LL))) {
F->p_804 = NULL;
F->p_804 = (*(P489)rt_nil_check(F->t_180)).tparams;
F->fs_805 = NULL;
F->fs_805 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_804 != NULL)) {
F->fs_805 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->fs_805)), rt_str("rt_int p_", 9)), f_lower_s_15(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_804)).name)))), rt_str("; ", 2)); b_; }));
F->p_804 = (*(P485)rt_nil_check(F->p_804)).next;
}
f_put_27(g_out_types_520, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_520, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_180)).cname))), rt_str(" {", 2)), (*(P480)rt_nil_check(F->fs_805))), f_ctype_177((*(P489)rt_nil_check(F->t_180)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_520, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
(*(P489)rt_nil_check(F->t_180)).defined = 1;
f_put_27(g_out_types_520, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_180)).cname))), rt_str(" { ", 3)), f_field_decls_179(F->t_180)), rt_str(" };", 3)); b_; }));
}
ret_:
  return;
}

static void f_init_ascii_182(void) {
  struct f_init_ascii_182fr *F = rt_alloc(sizeof *F);
F->names_806 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)));
F->head_807 = NULL;
F->tail_808 = NULL;
F->start_809 = ((rt_int)1LL);
{ rt_int lo811 = ((rt_int)1LL), hi812 = (F->names_806).len;
for (rt_int it813 = lo811; it813 <= hi812; it813++) {
F->i_810 = it813;
if ((rt_str_get(F->names_806, F->i_810) == 32)) {
F->lit_814 = NULL;
F->lit_814 = f_nn_48(((rt_int)4LL), ((rt_int)0LL));
(*(P485)rt_nil_check(F->lit_814)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice(F->names_806, F->start_809, rt_sub(F->i_810, ((rt_int)1LL))); b_; }));
f_append_52(&F->head_807, &F->tail_808, F->lit_814);
F->start_809 = rt_add(F->i_810, ((rt_int)1LL));
}
}
}
g_ty_ascii_547 = f_new_typ_157(((rt_int)4LL));
(*(P489)rt_nil_check(g_ty_ascii_547)).lits = F->head_807;
(*(P489)rt_nil_check(g_ty_ascii_547)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  return;
}

static rt_int f_lit_index_185(P485 lits_183, rstr *name_184) {
  struct f_lit_index_185fr *F = rt_alloc(sizeof *F);
F->lits_183 = lits_183;
F->name_184 = name_184;
F->i_815 = ((rt_int)0LL);
F->l_816 = NULL;
F->l_816 = F->lits_183;
while ((F->l_816 != NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->l_816)).name)), (*F->name_184))) {
F->result_ = F->i_815;
goto ret_;
}
F->i_815 = rt_add(F->i_815, ((rt_int)1LL));
F->l_816 = (*(P485)rt_nil_check(F->l_816)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P489 f_resolve_subtype_188(P485 st_186, P487 *c_187) {
  struct f_resolve_subtype_188fr *F = rt_alloc(sizeof *F);
F->st_186 = st_186;
F->c_187 = c_187;
F->c_187v = *F->c_187;
F->t_817 = NULL;
F->dummy_819 = NULL;
F->c_187v = f_new_cons_158();
{ rt_int sel820 = (*(P485)rt_nil_check(F->st_186)).kind;
if (0 || (sel820 == ((rt_int)70LL))) {
if (((*(P485)rt_nil_check(F->st_186)).a != NULL)) {
(*(P487)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_421((*(P485)rt_nil_check(F->st_186)).a, g_ty_int_544, &F->dummy_819); b_; }));
(*(P487)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_421((*(P485)rt_nil_check(F->st_186)).b, g_ty_int_544, &F->dummy_819); b_; }));
(*(P487)rt_nil_check(F->c_187v)).mlo = f_manifest_207((*(P485)rt_nil_check(F->st_186)).a, &F->ok_818);
(*(P487)rt_nil_check(F->c_187v)).hasm = F->ok_818;
(*(P487)rt_nil_check(F->c_187v)).mhi = f_manifest_207((*(P485)rt_nil_check(F->st_186)).b, &F->ok_818);
(*(P487)rt_nil_check(F->c_187v)).hasm = ((*(P487)rt_nil_check(F->c_187v)).hasm && F->ok_818);
}
F->result_ = g_ty_int_544;
goto ret_;
} else if (0 || (sel820 == ((rt_int)71LL))) {
F->result_ = g_ty_float_546;
goto ret_;
} else if (0 || (sel820 == ((rt_int)72LL))) {
F->t_817 = f_new_typ_157(((rt_int)4LL));
(*(P489)rt_nil_check(F->t_817)).lits = (*(P485)rt_nil_check(F->st_186)).a;
if (((*(P485)rt_nil_check(F->st_186)).b != NULL)) {
(*(P487)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_421((*(P485)rt_nil_check(F->st_186)).b, F->t_817, &F->dummy_819); b_; }));
(*(P487)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_421((*(P485)rt_nil_check(F->st_186)).c, F->t_817, &F->dummy_819); b_; }));
}
F->result_ = F->t_817;
goto ret_;
} else if (0 || (sel820 == ((rt_int)73LL))) {
F->t_817 = f_resolve_subtype_188((*(P485)rt_nil_check(F->st_186)).a, &F->c_187v);
if ((!f_same_164(F->t_817, g_ty_ascii_547))) {
f_fail_23((*(P485)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
F->c_187v = f_new_cons_158();
if (((*(P485)rt_nil_check(F->st_186)).b != NULL)) {
(*(P487)rt_nil_check(F->c_187v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_421((*(P485)rt_nil_check(F->st_186)).b, g_ty_int_544, &F->dummy_819); b_; }));
}
F->result_ = g_ty_string_548;
goto ret_;
} else if (0 || (sel820 == ((rt_int)74LL))) {
if ((f_list_len_54((*(P485)rt_nil_check(F->st_186)).a) > ((rt_int)2LL))) {
f_fail_23((*(P485)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("arrays of more than two dimensions are not handled", 50); b_; }));
}
{
F->ic_821 = NULL;
F->ic2_822 = NULL;
F->ec_823 = NULL;
F->it_824 = NULL;
F->it_824 = f_resolve_subtype_188((*(P485)rt_nil_check(F->st_186)).a, &F->ic_821);
F->et_825 = NULL;
F->et_825 = f_resolve_subtype_188((*(P485)rt_nil_check(F->st_186)).b, &F->ec_823);
F->ic_821 = f_base_cons_169(F->it_824, F->ic_821);
F->t_817 = f_new_typ_157(((rt_int)6LL));
(*(P489)rt_nil_check(F->t_817)).idx = F->it_824;
(*(P489)rt_nil_check(F->t_817)).elem = F->et_825;
(*(P489)rt_nil_check(F->t_817)).elemcons = F->ec_823;
(*(P489)rt_nil_check(F->t_817)).elemst = (*(P485)rt_nil_check(F->st_186)).b;
if (((*(P487)rt_nil_check(F->ic_821)).lo != NULL)) {
(*(P487)rt_nil_check(F->c_187v)).lo = (*(P487)rt_nil_check(F->ic_821)).lo;
(*(P487)rt_nil_check(F->c_187v)).hi = (*(P487)rt_nil_check(F->ic_821)).hi;
} else if (((*(P489)rt_nil_check(f_base_of_166(F->it_824))).kind == ((rt_int)4LL))) {
(*(P487)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P487)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P489)rt_nil_check(f_base_of_166(F->it_824))).lits), ((rt_int)1LL))); b_; }));
}
(*(P487)rt_nil_check(F->c_187v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P487)rt_nil_check(F->c_187v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
if (((*(P485)rt_nil_check((*(P485)rt_nil_check(F->st_186)).a)).next != NULL)) {
(*(P489)rt_nil_check(F->t_817)).idx2 = f_resolve_subtype_188((*(P485)rt_nil_check((*(P485)rt_nil_check(F->st_186)).a)).next, &F->ic2_822);
if (((*(P487)rt_nil_check(F->ic2_822)).lo != NULL)) {
(*(P487)rt_nil_check(F->c_187v)).lo2 = (*(P487)rt_nil_check(F->ic2_822)).lo;
(*(P487)rt_nil_check(F->c_187v)).hi2 = (*(P487)rt_nil_check(F->ic2_822)).hi;
} else if (((*(P489)rt_nil_check((*(P489)rt_nil_check(F->t_817)).idx2)).kind == ((rt_int)4LL))) {
(*(P487)rt_nil_check(F->c_187v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P487)rt_nil_check(F->c_187v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P489)rt_nil_check((*(P489)rt_nil_check(F->t_817)).idx2)).lits), ((rt_int)1LL))); b_; }));
}
}
}
F->result_ = F->t_817;
goto ret_;
} else if (0 || (sel820 == ((rt_int)77LL))) {
F->t_817 = f_new_typ_157(((rt_int)16LL));
{
F->ec_826 = NULL;
(*(P489)rt_nil_check(F->t_817)).elem = f_resolve_subtype_188((*(P485)rt_nil_check(F->st_186)).a, &F->ec_826);
(*(P489)rt_nil_check(F->t_817)).elemcons = F->ec_826;
}
F->result_ = F->t_817;
goto ret_;
} else if (0 || (sel820 == ((rt_int)75LL))) {
F->t_817 = f_new_typ_157(((rt_int)7LL));
{
F->comp_827 = NULL;
F->comp_827 = (*(P485)rt_nil_check(F->st_186)).a;
F->tail_828 = NULL;
while ((F->comp_827 != NULL)) {
F->cc_829 = NULL;
F->f_830 = NULL;
{ R492 *cell831 = rt_alloc(sizeof(R492));
(*cell831).name = NULL;
(*cell831).t = NULL;
(*cell831).c = NULL;
(*cell831).st = NULL;
(*cell831).next = NULL;
F->f_830 = cell831;
}
(*(P491)rt_nil_check(F->f_830)).name = (*(P485)rt_nil_check(F->comp_827)).name;
(*(P491)rt_nil_check(F->f_830)).t = f_resolve_subtype_188((*(P485)rt_nil_check(F->comp_827)).a, &F->cc_829);
(*(P491)rt_nil_check(F->f_830)).c = F->cc_829;
(*(P491)rt_nil_check(F->f_830)).st = (*(P485)rt_nil_check(F->comp_827)).a;
if ((F->tail_828 == NULL)) {
(*(P489)rt_nil_check(F->t_817)).fields = F->f_830;
} else {
(*(P491)rt_nil_check(F->tail_828)).next = F->f_830;
}
F->tail_828 = F->f_830;
F->comp_827 = (*(P485)rt_nil_check(F->comp_827)).next;
}
}
F->result_ = F->t_817;
goto ret_;
} else if (0 || (sel820 == ((rt_int)79LL))) {
F->result_ = g_ty_file_550;
goto ret_;
} else if (0 || (sel820 == ((rt_int)78LL))) {
{
F->ec_832 = NULL;
F->t_817 = f_new_typ_157(((rt_int)12LL));
(*(P489)rt_nil_check(F->t_817)).elem = f_resolve_subtype_188((*(P485)rt_nil_check(F->st_186)).a, &F->ec_832);
(*(P489)rt_nil_check(F->t_817)).elemcons = F->ec_832;
if (((*(P485)rt_nil_check(F->st_186)).b != NULL)) {
(*(P487)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_421((*(P485)rt_nil_check(F->st_186)).b, g_ty_int_544, &F->dummy_819); b_; }));
}
}
F->result_ = F->t_817;
goto ret_;
} else if (0 || (sel820 == ((rt_int)80LL))) {
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->st_186)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_545;
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->st_186)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_547;
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->st_186)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_552;
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->st_186)).name)), rt_str("LATCH", 5))) {
F->result_ = g_ty_latch_553;
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->st_186)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_554;
goto ret_;
}
{
F->y_833 = NULL;
F->y_833 = f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->st_186)).name)));
if ((F->y_833 == NULL)) {
f_fail_23((*(P485)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->st_186)).name))); b_; }));
}
if (((((*(P495)rt_nil_check(F->y_833)).kind == ((rt_int)5LL)) && ((*(P495)rt_nil_check(F->y_833)).t != NULL)) && ((*(P489)rt_nil_check((*(P495)rt_nil_check(F->y_833)).t)).kind == ((rt_int)15LL)))) {
F->result_ = f_new_type_200(F->y_833, F->st_186, &F->c_187v);
goto ret_;
}
if (((((*(P495)rt_nil_check(F->y_833)).kind == ((rt_int)6LL)) || ((*(P495)rt_nil_check(F->y_833)).kind == ((rt_int)5LL))) && ((*(P495)rt_nil_check(F->y_833)).t != NULL))) {
if (((*(P495)rt_nil_check(F->y_833)).c != NULL)) {
F->c_187v = (*(P495)rt_nil_check(F->y_833)).c;
}
F->result_ = (*(P495)rt_nil_check(F->y_833)).t;
goto ret_;
}
if (((((*(P495)rt_nil_check(F->y_833)).kind == ((rt_int)5LL)) && ((*(P495)rt_nil_check(F->y_833)).decl != NULL)) && ((*(P485)rt_nil_check((*(P495)rt_nil_check(F->y_833)).decl)).kind == ((rt_int)43LL)))) {
F->result_ = f_new_type_200(F->y_833, F->st_186, &F->c_187v);
goto ret_;
}
if ((((*(P495)rt_nil_check(F->y_833)).kind == ((rt_int)6LL)) || ((*(P495)rt_nil_check(F->y_833)).kind == ((rt_int)5LL)))) {
F->result_ = f_resolve_subtype_188((*(P495)rt_nil_check(F->y_833)).st, &F->c_187v);
goto ret_;
}
f_fail_23((*(P485)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->st_186)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_23((*(P485)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_187) = F->c_187v;
  return F->result_;
}

static int f_opened_190(P489 t_189) {
  struct f_opened_190fr *F = rt_alloc(sizeof *F);
F->t_189 = t_189;
F->c_834 = NULL;
F->c_834 = g_caps_532;
if (((((*(P489)rt_nil_check(F->t_189)).kind != ((rt_int)15LL)) || ((*(P489)rt_nil_check(F->t_189)).ocap == NULL)) || ((*(P485)rt_nil_check((*(P489)rt_nil_check(F->t_189)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_834 != NULL)) {
if (((*(P505)rt_nil_check(F->c_834)).d == (*(P489)rt_nil_check(F->t_189)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_834 = (*(P505)rt_nil_check(F->c_834)).next;
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
F->i_835 = ((rt_int)1LL);
if (((((*F->pat_192)).len == ((rt_int)0LL)) || (((*F->s_191)).len < ((*F->pat_192)).len))) {
F->result_ = (*F->s_191);
goto ret_;
}
while ((rt_sub(rt_add(F->i_835, ((*F->pat_192)).len), ((rt_int)1LL)) <= ((*F->s_191)).len)) {
if (rt_str_eq(rt_str_slice((*F->s_191), F->i_835, rt_sub(rt_add(F->i_835, ((*F->pat_192)).len), ((rt_int)1LL))), (*F->pat_192))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_191), ((rt_int)1LL), rt_sub(F->i_835, ((rt_int)1LL))), (*F->r_193)), f_replace_all_194(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_191), rt_add(F->i_835, ((*F->pat_192)).len), ((*F->s_191)).len); b_; }), &(*F->pat_192), &(*F->r_193)));
goto ret_;
}
F->i_835 = rt_add(F->i_835, ((rt_int)1LL));
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
F->l_836 = NULL;
F->l_836 = g_psub_534;
F->r_837 = NULL;
F->r_837 = f_mk_3(&(*F->s_195));
while ((F->l_836 != NULL)) {
F->r_837 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_194(&(*(P480)rt_nil_check(F->r_837)), &(*(P480)rt_nil_check((*(P497)rt_nil_check(F->l_836)).s)), &(*(P480)rt_nil_check((*(P497)rt_nil_check((*(P497)rt_nil_check(F->l_836)).next)).s))); b_; }));
F->l_836 = (*(P497)rt_nil_check((*(P497)rt_nil_check(F->l_836)).next)).next;
}
F->result_ = (*(P480)rt_nil_check(F->r_837));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P489 f_new_type_200(P495 y_197, P485 st_198, P487 *c_199) {
  struct f_new_type_200fr *F = rt_alloc(sizeof *F);
F->y_197 = y_197;
F->st_198 = st_198;
F->c_199 = c_199;
F->c_199v = *F->c_199;
F->d_838 = NULL;
F->d_838 = (*(P495)rt_nil_check(F->y_197)).decl;
F->p_839 = NULL;
F->uc_840 = NULL;
F->c_199v = f_new_cons_158();
if (((*(P495)rt_nil_check(F->y_197)).t == NULL)) {
(*(P495)rt_nil_check(F->y_197)).t = f_new_typ_157(((rt_int)15LL));
(*(P489)rt_nil_check((*(P495)rt_nil_check(F->y_197)).t)).name = (*(P495)rt_nil_check(F->y_197)).name;
(*(P489)rt_nil_check((*(P495)rt_nil_check(F->y_197)).t)).decl = F->d_838;
(*(P489)rt_nil_check((*(P495)rt_nil_check(F->y_197)).t)).tparams = (*(P485)rt_nil_check(F->d_838)).b;
if ((g_caps_532 != NULL)) {
(*(P489)rt_nil_check((*(P495)rt_nil_check(F->y_197)).t)).ocap = (*(P505)rt_nil_check(g_caps_532)).d;
}
f_open_scope_151();
F->p_839 = (*(P485)rt_nil_check(F->d_838)).b;
while ((F->p_839 != NULL)) {
F->z_841 = NULL;
F->z_841 = f_new_sym_155(((rt_int)2LL), (*(P485)rt_nil_check(F->p_839)).name);
(*(P495)rt_nil_check(F->z_841)).t = g_ty_int_544;
(*(P495)rt_nil_check(F->z_841)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_839)).name)))), rt_str("@", 1)); b_; }));
f_define_145(F->z_841, (*(P485)rt_nil_check(F->d_838)).line);
F->p_839 = (*(P485)rt_nil_check(F->p_839)).next;
}
(*(P489)rt_nil_check((*(P495)rt_nil_check(F->y_197)).t)).under = f_resolve_subtype_188((*(P485)rt_nil_check(F->d_838)).a, &F->uc_840);
(*(P489)rt_nil_check((*(P495)rt_nil_check(F->y_197)).t)).elemcons = F->uc_840;
f_close_scope_152();
}
(*(P487)rt_nil_check(F->c_199v)).args = (*(P485)rt_nil_check(F->st_198)).b;
F->result_ = (*(P495)rt_nil_check(F->y_197)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_199) = F->c_199v;
  return F->result_;
}

static void f_init_storage_204(rstr *lval_201, P489 t_202, P487 c_203) {
  struct f_init_storage_204fr *F = rt_alloc(sizeof *F);
F->lval_201 = lval_201;
F->t_202 = t_202;
F->c_203 = c_203;
if (((*(P489)rt_nil_check(F->t_202)).kind == ((rt_int)15LL))) {
F->p_842 = NULL;
F->p_842 = (*(P489)rt_nil_check(F->t_202)).tparams;
F->a_843 = NULL;
F->a_843 = (*(P487)rt_nil_check(F->c_203)).args;
F->uc_844 = NULL;
F->ut_845 = NULL;
F->at_846 = NULL;
if ((f_list_len_54(F->a_843) != f_list_len_54(F->p_842))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_202)).name))), rt_str(" needs ", 7)), f_itos_7(f_list_len_54(F->p_842))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_842 != NULL)) {
F->v_847 = rt_str_copy(f_gexpr_421(F->a_843, g_ty_int_544, &F->at_846));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p_", 3)), f_lower_s_15(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_842)).name)))), rt_str(" = ", 3)), F->v_847), rt_str(";", 1)); b_; }));
F->p_842 = (*(P485)rt_nil_check(F->p_842)).next;
F->a_843 = (*(P485)rt_nil_check(F->a_843)).next;
}
{
F->saved_848 = NULL;
F->saved_848 = g_psub_534;
F->p_842 = (*(P489)rt_nil_check(F->t_202)).tparams;
while ((F->p_842 != NULL)) {
F->l1_849 = NULL;
F->l2_850 = NULL;
{ R498 *cell851 = rt_alloc(sizeof(R498));
(*cell851).s = NULL;
(*cell851).next = NULL;
F->l1_849 = cell851;
}
{ R498 *cell852 = rt_alloc(sizeof(R498));
(*cell852).s = NULL;
(*cell852).next = NULL;
F->l2_850 = cell852;
}
(*(P497)rt_nil_check(F->l1_849)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_842)).name)))), rt_str("@", 1)); b_; }));
(*(P497)rt_nil_check(F->l2_850)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p_", 3)), f_lower_s_15(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_842)).name)))); b_; }));
(*(P497)rt_nil_check(F->l1_849)).next = F->l2_850;
(*(P497)rt_nil_check(F->l2_850)).next = g_psub_534;
g_psub_534 = F->l1_849;
F->p_842 = (*(P485)rt_nil_check(F->p_842)).next;
}
if (((*(P489)rt_nil_check(F->t_202)).tparams == NULL)) {
f_init_storage_204(&(*F->lval_201), (*(P489)rt_nil_check(F->t_202)).under, (*(P489)rt_nil_check(F->t_202)).elemcons);
} else {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_201), rt_str(".all", 4)); b_; }), (*(P489)rt_nil_check(F->t_202)).under, (*(P489)rt_nil_check(F->t_202)).elemcons);
}
g_psub_534 = F->saved_848;
}
} else if (((*(P489)rt_nil_check(F->t_202)).kind == ((rt_int)12LL))) {
if (((*(P487)rt_nil_check(F->c_203)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_201), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_201)), rt_str(", ", 2)), f_subst_196(&(*(P480)rt_nil_check((*(P487)rt_nil_check(F->c_203)).lo)))), rt_str(", sizeof(", 9)), f_ctype_177((*(P489)rt_nil_check(F->t_202)).elem)), rt_str("), ", 3)), f_mcopy_209((*(P489)rt_nil_check(F->t_202)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P489)rt_nil_check(F->t_202)).kind == ((rt_int)13LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_201)), rt_str(");", 2)); b_; }));
} else if (((*(P489)rt_nil_check(F->t_202)).kind == ((rt_int)14LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_201), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if (((*(P489)rt_nil_check(F->t_202)).kind == ((rt_int)8LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_201), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P489)rt_nil_check(F->t_202)).kind == ((rt_int)5LL))) {
if (((*(P487)rt_nil_check(F->c_203)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(" = rt_str_new(", 14)), f_subst_196(&(*(P480)rt_nil_check((*(P487)rt_nil_check(F->c_203)).slen)))), rt_str(");", 2)); b_; }));
} else if (((*(P489)rt_nil_check(F->t_202)).kind == ((rt_int)6LL))) {
if (((*(P487)rt_nil_check(F->c_203)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".lo = ", 6)), f_subst_196(&(*(P480)rt_nil_check((*(P487)rt_nil_check(F->c_203)).lo)))), rt_str("; ", 2)), (*F->lval_201)), rt_str(".hi = ", 6)), f_subst_196(&(*(P480)rt_nil_check((*(P487)rt_nil_check(F->c_203)).hi)))), rt_str("; ", 2)), (*F->lval_201)), rt_str(".lo2 = ", 7)), f_subst_196(&(*(P480)rt_nil_check((*(P487)rt_nil_check(F->c_203)).lo2)))), rt_str("; ", 2)), (*F->lval_201)), rt_str(".hi2 = ", 7)), f_subst_196(&(*(P480)rt_nil_check((*(P487)rt_nil_check(F->c_203)).hi2)))), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_177((*(P489)rt_nil_check(F->t_202)).elem)), rt_str(") * (size_t)RT_CNT(", 19)), (*F->lval_201)), rt_str("));", 3)); b_; }));
if ((((((((((*(P489)rt_nil_check((*(P489)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)5LL)) || ((*(P489)rt_nil_check((*(P489)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)6LL))) || ((*(P489)rt_nil_check((*(P489)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)7LL))) || ((*(P489)rt_nil_check((*(P489)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)15LL))) || ((*(P489)rt_nil_check((*(P489)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)8LL))) || ((*(P489)rt_nil_check((*(P489)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)12LL))) || ((*(P489)rt_nil_check((*(P489)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)13LL))) || ((*(P489)rt_nil_check((*(P489)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)14LL)))) {
F->i_853 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_853), rt_str(" = 0; ", 6)), F->i_853), rt_str(" < RT_CNT(", 10)), (*F->lval_201)), rt_str("); ", 3)), F->i_853), rt_str("++) {", 5)); b_; }));
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p[", 3)), F->i_853), rt_str("]", 1)); b_; }), (*(P489)rt_nil_check(F->t_202)).elem, (*(P489)rt_nil_check(F->t_202)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P489)rt_nil_check(F->t_202)).kind == ((rt_int)7LL))) {
F->f_854 = NULL;
F->f_854 = (*(P489)rt_nil_check(F->t_202)).fields;
while ((F->f_854 != NULL)) {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".", 1)), f_field_c_17(&(*(P480)rt_nil_check((*(P491)rt_nil_check(F->f_854)).name)))); b_; }), (*(P491)rt_nil_check(F->f_854)).t, (*(P491)rt_nil_check(F->f_854)).c);
F->f_854 = (*(P491)rt_nil_check(F->f_854)).next;
}
}
ret_:
  return;
}

static rt_int f_manifest_207(P485 e_205, int *ok_206) {
  struct f_manifest_207fr *F = rt_alloc(sizeof *F);
F->e_205 = e_205;
F->ok_206 = ok_206;
F->ok_206v = *F->ok_206;
F->ok_206v = 0;
if (((*(P485)rt_nil_check(F->e_205)).kind == ((rt_int)1LL))) {
F->ok_206v = 1;
F->result_ = (*(P485)rt_nil_check(F->e_205)).ival;
goto ret_;
} else if (((*(P485)rt_nil_check(F->e_205)).kind == ((rt_int)17LL))) {
F->result_ = f_manifest_207((*(P485)rt_nil_check(F->e_205)).a, &F->ok_206v);
goto ret_;
} else if ((((*(P485)rt_nil_check(F->e_205)).kind == ((rt_int)8LL)) && rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_205)).name)), rt_str("-", 1)))) {
F->a_855 = f_manifest_207((*(P485)rt_nil_check(F->e_205)).a, &F->ok_206v);
F->result_ = rt_neg(F->a_855);
goto ret_;
} else if ((((*(P485)rt_nil_check(F->e_205)).kind == ((rt_int)9LL)) && ((rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_205)).name)), rt_str("+", 1)) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_205)).name)), rt_str("-", 1))) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_205)).name)), rt_str("*", 1))))) {
F->a_855 = f_manifest_207((*(P485)rt_nil_check(F->e_205)).a, &F->ok_206v);
F->b_856 = f_manifest_207((*(P485)rt_nil_check(F->e_205)).b, &F->ok2_857);
F->ok_206v = (F->ok_206v && F->ok2_857);
if ((!F->ok_206v)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_205)).name)), rt_str("+", 1))) {
F->result_ = rt_add(F->a_855, F->b_856);
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_205)).name)), rt_str("-", 1))) {
F->result_ = rt_sub(F->a_855, F->b_856);
goto ret_;
}
F->result_ = rt_mul(F->a_855, F->b_856);
goto ret_;
} else if (((*(P485)rt_nil_check(F->e_205)).kind == ((rt_int)7LL))) {
F->y_858 = NULL;
F->y_858 = f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_205)).name)));
if ((((F->y_858 != NULL) && ((*(P495)rt_nil_check(F->y_858)).kind == ((rt_int)2LL))) && (*(P495)rt_nil_check(F->y_858)).hasmv)) {
F->ok_206v = 1;
F->result_ = (*(P495)rt_nil_check(F->y_858)).mvalue;
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

static rstr f_mcopy_209(P489 t_208) {
  struct f_mcopy_209fr *F = rt_alloc(sizeof *F);
F->t_208 = t_208;
F->ct_859 = rt_str_copy(f_ctype_177(F->t_208));
F->name_860 = rt_str_new(rt_add((F->ct_859).len, ((rt_int)3LL)));
rt_str_assign(&F->name_860, rt_str_cat(rt_str("mc_", 3), F->ct_859));
F->l_861 = NULL;
if ((!f_seen_name_230(g_mcopies_543, &F->name_860))) {
{ R498 *cell862 = rt_alloc(sizeof(R498));
(*cell862).s = NULL;
(*cell862).next = NULL;
F->l_861 = cell862;
}
(*(P497)rt_nil_check(F->l_861)).s = f_mk_3(&F->name_860);
(*(P497)rt_nil_check(F->l_861)).next = g_mcopies_543;
g_mcopies_543 = F->l_861;
f_put_27(g_out_protos_522, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_860), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_860), rt_str("(void *d, const void *s) { *(", 29)), F->ct_859), rt_str(" *)d = ", 7)), f_copy_code_219(F->t_208, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_859), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_860;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_composite_211(P489 t_210) {
  struct f_composite_211fr *F = rt_alloc(sizeof *F);
F->t_210 = t_210;
F->result_ = ((((*(P489)rt_nil_check(F->t_210)).kind == ((rt_int)6LL)) || ((*(P489)rt_nil_check(F->t_210)).kind == ((rt_int)7LL))) || (((*(P489)rt_nil_check(F->t_210)).kind == ((rt_int)15LL)) && ((*(P489)rt_nil_check(F->t_210)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_assign_code_216(rstr *lval_212, P489 t_213, rstr *v_214, P487 c_215) {
  struct f_assign_code_216fr *F = rt_alloc(sizeof *F);
F->lval_212 = lval_212;
F->t_213 = t_213;
F->v_214 = v_214;
F->c_215 = c_215;
if ((((*(P489)rt_nil_check(F->t_213)).kind == ((rt_int)15LL)) && ((*(P489)rt_nil_check(F->t_213)).tparams == NULL))) {
F->result_ = f_assign_code_216(&(*F->lval_212), (*(P489)rt_nil_check(F->t_213)).under, &(*F->v_214), F->c_215);
goto ret_;
}
if (f_composite_211(F->t_213)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_177(F->t_213)), rt_str("(&", 2)), (*F->lval_212)), rt_str(", ", 2)), (*F->v_214)), rt_str(");", 2));
goto ret_;
}
if (((*(P489)rt_nil_check(F->t_213)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_212)), rt_str(", ", 2)), (*F->v_214)), rt_str(");", 2));
goto ret_;
} else if ((((*(P489)rt_nil_check(F->t_213)).kind == ((rt_int)6LL)) || ((*(P489)rt_nil_check(F->t_213)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_177(F->t_213)), rt_str("(&", 2)), (*F->lval_212)), rt_str(", ", 2)), (*F->v_214)), rt_str(");", 2));
goto ret_;
} else if (((((*(P489)rt_nil_check(F->t_213)).kind == ((rt_int)1LL)) && (F->c_215 != NULL)) && (*(P487)rt_nil_check(F->c_215)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_212), rt_str(" = rt_range(", 12)), (*F->v_214)), rt_str(", ", 2)), f_itos_7((*(P487)rt_nil_check(F->c_215)).mlo)), rt_str(", ", 2)), f_itos_7((*(P487)rt_nil_check(F->c_215)).mhi)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_212), rt_str(" = ", 3)), (*F->v_214)), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_copy_code_219(P489 t_217, rstr *v_218) {
  struct f_copy_code_219fr *F = rt_alloc(sizeof *F);
F->t_217 = t_217;
F->v_218 = v_218;
if ((((*(P489)rt_nil_check(F->t_217)).kind == ((rt_int)15LL)) && ((*(P489)rt_nil_check(F->t_217)).tparams == NULL))) {
F->result_ = f_copy_code_219((*(P489)rt_nil_check(F->t_217)).under, &(*F->v_218));
goto ret_;
}
if (f_composite_211(F->t_217)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_177(F->t_217)), rt_str("(", 1)), (*F->v_218)), rt_str(")", 1));
goto ret_;
}
if (((*(P489)rt_nil_check(F->t_217)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_218)), rt_str(")", 1));
goto ret_;
} else if ((((*(P489)rt_nil_check(F->t_217)).kind == ((rt_int)6LL)) || ((*(P489)rt_nil_check(F->t_217)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_177(F->t_217)), rt_str("(", 1)), (*F->v_218)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_218);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_eq_code_223(P489 t_220, rstr *a_221, rstr *b_222) {
  struct f_eq_code_223fr *F = rt_alloc(sizeof *F);
F->t_220 = t_220;
F->a_221 = a_221;
F->b_222 = b_222;
if ((((*(P489)rt_nil_check(F->t_220)).kind == ((rt_int)15LL)) && ((*(P489)rt_nil_check(F->t_220)).tparams == NULL))) {
F->result_ = f_eq_code_223((*(P489)rt_nil_check(F->t_220)).under, &(*F->a_221), &(*F->b_222));
goto ret_;
}
if (f_composite_211(F->t_220)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_177(F->t_220)), rt_str("(", 1)), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
if (((*(P489)rt_nil_check(F->t_220)).kind == ((rt_int)16LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
if (((*(P489)rt_nil_check(F->t_220)).kind == ((rt_int)14LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_221)), rt_str(" == ", 4)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
if (((*(P489)rt_nil_check(F->t_220)).kind == ((rt_int)12LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_221)), rt_str(" == ", 4)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
if (((*(P489)rt_nil_check(F->t_220)).kind == ((rt_int)13LL))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P489)rt_nil_check(F->t_220)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
} else if ((((*(P489)rt_nil_check(F->t_220)).kind == ((rt_int)6LL)) || ((*(P489)rt_nil_check(F->t_220)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_177(F->t_220)), rt_str("(", 1)), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_221)), rt_str(" == ", 4)), (*F->b_222)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_elem_assign_227(rstr *lval_224, P489 t_225, rstr *v_226) {
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

static int f_seen_name_230(P497 l_228, rstr *s_229) {
  struct f_seen_name_230fr *F = rt_alloc(sizeof *F);
F->l_228 = l_228;
F->s_229 = s_229;
F->p_863 = NULL;
F->p_863 = F->l_228;
while ((F->p_863 != NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P497)rt_nil_check(F->p_863)).s)), (*F->s_229))) {
F->result_ = 1;
goto ret_;
}
F->p_863 = (*(P497)rt_nil_check(F->p_863)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_emit_helpers_231(void) {
  struct f_emit_helpers_231fr *F = rt_alloc(sizeof *F);
F->order_864 = NULL;
F->t_865 = NULL;
F->t_865 = g_all_types_518;
F->done_866 = NULL;
while ((F->t_865 != NULL)) {
if ((f_composite_211(F->t_865) && (!f_seen_name_230(F->done_866, &(*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_865)).cname)))))) {
F->l_867 = NULL;
F->c_868 = rt_str_new(((*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_865)).cname))).len);
rt_str_assign(&F->c_868, (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_865)).cname)));
{ R498 *cell869 = rt_alloc(sizeof(R498));
(*cell869).s = NULL;
(*cell869).next = NULL;
F->l_867 = cell869;
}
(*(P497)rt_nil_check(F->l_867)).s = (*(P489)rt_nil_check(F->t_865)).cname;
(*(P497)rt_nil_check(F->l_867)).next = F->done_866;
F->done_866 = F->l_867;
f_put_27(g_out_helpers_521, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_868), rt_str("(", 1)), F->c_868), rt_str(" *d, ", 5)), F->c_868), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_521, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_868), rt_str(" cp_", 4)), F->c_868), rt_str("(", 1)), F->c_868), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_521, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_868), rt_str("(", 1)), F->c_868), rt_str(" a, ", 4)), F->c_868), rt_str(" b);", 4)); b_; }));
f_helper_bodies_233(F->t_865);
}
F->t_865 = (*(P489)rt_nil_check(F->t_865)).next;
}
ret_:
  return;
}

static void f_helper_bodies_233(P489 t_232) {
  struct f_helper_bodies_233fr *F = rt_alloc(sizeof *F);
F->t_232 = t_232;
F->c_870 = rt_str_new(((*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_232)).cname))).len);
rt_str_assign(&F->c_870, (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_232)).cname)));
F->b_871 = NULL;
F->b_871 = g_out_funcs_524;
if (((*(P489)rt_nil_check(F->t_232)).kind == ((rt_int)6LL))) {
F->e_872 = NULL;
F->e_872 = (*(P489)rt_nil_check(F->t_232)).elem;
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_870), rt_str("(", 1)), F->c_870), rt_str(" *d, ", 5)), F->c_870), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, ", 99), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), f_elem_assign_227(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_872, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_870), rt_str(" cp_", 4)), F->c_870), rt_str("(", 1)), F->c_870), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_870), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_177(F->e_872)), rt_str(") * (size_t)RT_CNT(s));", 23)); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), f_copy_code_219(F->e_872, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_870), rt_str("(", 1)), F->c_870), rt_str(" a, ", 4)), F->c_870), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;", 77); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), f_eq_code_223(F->e_872, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P489)rt_nil_check(F->t_232)).kind == ((rt_int)15LL))) {
F->p_873 = NULL;
F->p_873 = (*(P489)rt_nil_check(F->t_232)).tparams;
F->pc_874 = NULL;
F->pc_874 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->p_873 != NULL)) {
F->pc_874 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->pc_874)), rt_str(" || d->p_", 9)), f_lower_s_15(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_873)).name)))), rt_str(" != s.p_", 8)), f_lower_s_15(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_873)).name)))); b_; }));
F->p_873 = (*(P485)rt_nil_check(F->p_873)).next;
}
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_870), rt_str("(", 1)), F->c_870), rt_str(" *d, ", 5)), F->c_870), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P480)rt_nil_check(F->pc_874))), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("constraint", 10)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_227(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P489)rt_nil_check(F->t_232)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_870), rt_str(" cp_", 4)), F->c_870), rt_str("(", 1)), F->c_870), rt_str(" s) { s.all = ", 14)), f_copy_code_219((*(P489)rt_nil_check(F->t_232)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_870), rt_str("(", 1)), F->c_870), rt_str(" a, ", 4)), F->c_870), rt_str(" b) { return ", 13)), f_eq_code_223((*(P489)rt_nil_check(F->t_232)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else {
F->f_875 = NULL;
F->f_875 = (*(P489)rt_nil_check(F->t_232)).fields;
F->conds_876 = NULL;
F->conds_876 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_870), rt_str("(", 1)), F->c_870), rt_str(" *d, ", 5)), F->c_870), rt_str(" s) {", 5)); b_; }));
while ((F->f_875 != NULL)) {
F->fn_877 = rt_str_copy(f_field_c_17(&(*(P480)rt_nil_check((*(P491)rt_nil_check(F->f_875)).name))));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_227(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_877); b_; }), (*(P491)rt_nil_check(F->f_875)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_877); b_; }))); b_; }));
F->f_875 = (*(P491)rt_nil_check(F->f_875)).next;
}
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_870), rt_str(" cp_", 4)), F->c_870), rt_str("(", 1)), F->c_870), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_870), rt_str(" d = s;", 7)); b_; }));
F->f_875 = (*(P489)rt_nil_check(F->t_232)).fields;
while ((F->f_875 != NULL)) {
F->fn_878 = rt_str_copy(f_field_c_17(&(*(P480)rt_nil_check((*(P491)rt_nil_check(F->f_875)).name))));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_878), rt_str(" = ", 3)), f_copy_code_219((*(P491)rt_nil_check(F->f_875)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_878); b_; }))), rt_str(";", 1)); b_; }));
F->conds_876 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->conds_876)), rt_str(" && ", 4)), f_eq_code_223((*(P491)rt_nil_check(F->f_875)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_878); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_878); b_; }))); b_; }));
F->f_875 = (*(P491)rt_nil_check(F->f_875)).next;
}
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_870), rt_str("(", 1)), F->c_870), rt_str(" a, ", 4)), F->c_870), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P480)rt_nil_check(F->conds_876))), rt_str(";", 1)); b_; }));
f_put_27(F->b_871, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_declare_body_235(P485 elems_234) {
  struct f_declare_body_235fr *F = rt_alloc(sizeof *F);
F->elems_234 = elems_234;
F->e_879 = NULL;
F->e_879 = F->elems_234;
while ((F->e_879 != NULL)) {
if ((((*(P485)rt_nil_check(F->e_879)).kind == ((rt_int)41LL)) && ((*(P485)rt_nil_check(F->e_879)).flag == ((rt_int)0LL)))) {
f_manifest_const_237(F->e_879);
} else if (((*(P485)rt_nil_check(F->e_879)).kind == ((rt_int)47LL))) {
f_gen_capsule_245(F->e_879);
} else if (((((*(P485)rt_nil_check(F->e_879)).kind == ((rt_int)48LL)) && ((*(P485)rt_nil_check(F->e_879)).flag != ((rt_int)1LL))) && ((*(P485)rt_nil_check(F->e_879)).flag != ((rt_int)3LL)))) {
f_gen_expose_259(F->e_879);
} else if (((*(P485)rt_nil_check(F->e_879)).kind == ((rt_int)49LL))) {
F->y_880 = NULL;
F->y_880 = f_new_sym_155(((rt_int)7LL), (*(P485)rt_nil_check(F->e_879)).name);
(*(P495)rt_nil_check(F->y_880)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_879)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_145(F->y_880, (*(P485)rt_nil_check(F->e_879)).line);
f_put_27(g_out_globals_523, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_880)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_526, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_880)).cname))), rt_str(" = rt_exc(", 10)), f_q_18()), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_879)).name))), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P485)rt_nil_check(F->e_879)).kind == ((rt_int)42LL))) {
F->y_881 = NULL;
F->y_881 = f_new_sym_155(((rt_int)6LL), (*(P485)rt_nil_check(F->e_879)).name);
(*(P495)rt_nil_check(F->y_881)).st = (*(P485)rt_nil_check(F->e_879)).a;
f_define_145(F->y_881, (*(P485)rt_nil_check(F->e_879)).line);
} else if (((*(P485)rt_nil_check(F->e_879)).kind == ((rt_int)44LL))) {
F->y_882 = NULL;
F->y_882 = f_new_sym_155(((rt_int)5LL), (*(P485)rt_nil_check(F->e_879)).name);
F->t_883 = NULL;
F->t_883 = f_new_typ_157(((rt_int)8LL));
(*(P489)rt_nil_check(F->t_883)).name = (*(P485)rt_nil_check(F->e_879)).name;
(*(P489)rt_nil_check(F->t_883)).decl = F->e_879;
(*(P495)rt_nil_check(F->y_882)).t = F->t_883;
f_define_145(F->y_882, (*(P485)rt_nil_check(F->e_879)).line);
} else if (((*(P485)rt_nil_check(F->e_879)).kind == ((rt_int)43LL))) {
F->y_884 = NULL;
F->y_884 = f_new_sym_155(((rt_int)5LL), (*(P485)rt_nil_check(F->e_879)).name);
(*(P495)rt_nil_check(F->y_884)).st = (*(P485)rt_nil_check(F->e_879)).a;
(*(P495)rt_nil_check(F->y_884)).decl = F->e_879;
f_define_145(F->y_884, (*(P485)rt_nil_check(F->e_879)).line);
}
F->e_879 = (*(P485)rt_nil_check(F->e_879)).next;
}
F->e_879 = F->elems_234;
while ((F->e_879 != NULL)) {
if (((((*(P485)rt_nil_check(F->e_879)).kind == ((rt_int)45LL)) || ((*(P485)rt_nil_check(F->e_879)).kind == ((rt_int)46LL))) || ((*(P485)rt_nil_check(F->e_879)).kind == ((rt_int)50LL)))) {
f_declare_subprogram_263(F->e_879);
} else if (((*(P485)rt_nil_check(F->e_879)).kind == ((rt_int)51LL))) {
F->g_885 = NULL;
F->g_885 = f_new_sym_155(((rt_int)10LL), (*(P485)rt_nil_check(F->e_879)).name);
(*(P495)rt_nil_check(F->g_885)).decl = F->e_879;
(*(P495)rt_nil_check(F->g_885)).level = g_cur_level_530;
f_define_145(F->g_885, (*(P485)rt_nil_check(F->e_879)).line);
}
F->e_879 = (*(P485)rt_nil_check(F->e_879)).next;
}
ret_:
  return;
}

static void f_manifest_const_237(P485 d_236) {
  struct f_manifest_const_237fr *F = rt_alloc(sizeof *F);
F->d_236 = d_236;
F->y_888 = NULL;
F->c_889 = NULL;
if (((*(P485)rt_nil_check(F->d_236)).a != NULL)) {
if ((((*(P485)rt_nil_check((*(P485)rt_nil_check(F->d_236)).a)).kind != ((rt_int)70LL)) || ((*(P485)rt_nil_check((*(P485)rt_nil_check(F->d_236)).a)).a != NULL))) {
goto ret_;
}
}
F->v_887 = f_manifest_207((*(P485)rt_nil_check(F->d_236)).b, &F->ok_886);
if ((!F->ok_886)) {
goto ret_;
}
(*(P485)rt_nil_check(F->d_236)).flag = ((rt_int)1LL);
F->y_888 = f_new_sym_155(((rt_int)2LL), (*(P485)rt_nil_check(F->d_236)).name);
(*(P495)rt_nil_check(F->y_888)).t = g_ty_int_544;
(*(P495)rt_nil_check(F->y_888)).c = f_new_cons_158();
(*(P495)rt_nil_check(F->y_888)).mvalue = F->v_887;
(*(P495)rt_nil_check(F->y_888)).hasmv = 1;
(*(P495)rt_nil_check(F->y_888)).ro_flag = 1;
(*(P495)rt_nil_check(F->y_888)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), f_itos_7(F->v_887)), rt_str("LL)", 3)); b_; }));
f_define_145(F->y_888, (*(P485)rt_nil_check(F->d_236)).line);
ret_:
  return;
}

static int f_exported_241(P485 d_238, rstr *name_239, int *ro_240) {
  struct f_exported_241fr *F = rt_alloc(sizeof *F);
F->d_238 = d_238;
F->name_239 = name_239;
F->ro_240 = ro_240;
F->ro_240v = *F->ro_240;
F->p_890 = NULL;
F->p_890 = (*(P485)rt_nil_check(F->d_238)).a;
F->ro_240v = 0;
if (((*(P485)rt_nil_check(F->d_238)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_890 != NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_890)).name)), (*F->name_239))) {
F->ro_240v = ((*(P485)rt_nil_check(F->p_890)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_890 = (*(P485)rt_nil_check(F->p_890)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ro_240) = F->ro_240v;
  return F->result_;
}

static P495 f_copy_sym_243(P495 y_242) {
  struct f_copy_sym_243fr *F = rt_alloc(sizeof *F);
F->y_242 = y_242;
F->z_891 = NULL;
{ R496 *cell892 = rt_alloc(sizeof(R496));
(*cell892).name = NULL;
(*cell892).t = NULL;
(*cell892).c = NULL;
(*cell892).access = NULL;
(*cell892).cname = NULL;
(*cell892).st = NULL;
(*cell892).decl = NULL;
(*cell892).params = NULL;
(*cell892).result = NULL;
(*cell892).members = NULL;
(*cell892).mnext = NULL;
(*cell892).binds = NULL;
(*cell892).insts = NULL;
(*cell892).chain = NULL;
(*cell892).stack = NULL;
F->z_891 = cell892;
}
(*(P495)rt_nil_check(F->z_891)).kind = (*(P495)rt_nil_check(F->y_242)).kind;
(*(P495)rt_nil_check(F->z_891)).name = (*(P495)rt_nil_check(F->y_242)).name;
(*(P495)rt_nil_check(F->z_891)).t = (*(P495)rt_nil_check(F->y_242)).t;
(*(P495)rt_nil_check(F->z_891)).c = (*(P495)rt_nil_check(F->y_242)).c;
(*(P495)rt_nil_check(F->z_891)).access = (*(P495)rt_nil_check(F->y_242)).access;
(*(P495)rt_nil_check(F->z_891)).cname = (*(P495)rt_nil_check(F->y_242)).cname;
(*(P495)rt_nil_check(F->z_891)).ro_flag = (*(P495)rt_nil_check(F->y_242)).ro_flag;
(*(P495)rt_nil_check(F->z_891)).mvalue = (*(P495)rt_nil_check(F->y_242)).mvalue;
(*(P495)rt_nil_check(F->z_891)).hasmv = (*(P495)rt_nil_check(F->y_242)).hasmv;
(*(P495)rt_nil_check(F->z_891)).st = (*(P495)rt_nil_check(F->y_242)).st;
(*(P495)rt_nil_check(F->z_891)).decl = (*(P495)rt_nil_check(F->y_242)).decl;
(*(P495)rt_nil_check(F->z_891)).params = (*(P495)rt_nil_check(F->y_242)).params;
(*(P495)rt_nil_check(F->z_891)).result = (*(P495)rt_nil_check(F->y_242)).result;
(*(P495)rt_nil_check(F->z_891)).level = (*(P495)rt_nil_check(F->y_242)).level;
(*(P495)rt_nil_check(F->z_891)).byref = (*(P495)rt_nil_check(F->y_242)).byref;
(*(P495)rt_nil_check(F->z_891)).members = (*(P495)rt_nil_check(F->y_242)).members;
F->result_ = F->z_891;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_gen_capsule_245(P485 d_244) {
  struct f_gen_capsule_245fr *F = rt_alloc(sizeof *F);
F->d_244 = d_244;
F->y_893 = NULL;
F->y_893 = f_new_sym_155(((rt_int)8LL), (*(P485)rt_nil_check(F->d_244)).name);
(*(P495)rt_nil_check(F->y_893)).decl = F->d_244;
if (((*(P485)rt_nil_check(F->d_244)).b == NULL)) {
f_elaborate_capsule_254(F->d_244, F->y_893, NULL, F->d_244);
}
f_define_145(F->y_893, (*(P485)rt_nil_check(F->d_244)).line);
ret_:
  return;
}

static void f_capsule_params_249(P485 d_246, P485 args_247, rt_int line_248) {
  struct f_capsule_params_249fr *F = rt_alloc(sizeof *F);
F->d_246 = d_246;
F->args_247 = args_247;
F->line_248 = line_248;
F->p_894 = NULL;
F->p_894 = (*(P485)rt_nil_check(F->d_246)).b;
F->a_895 = NULL;
F->a_895 = F->args_247;
F->t_896 = NULL;
F->vt_897 = NULL;
F->c_898 = NULL;
while (((F->p_894 != NULL) && (F->a_895 != NULL))) {
F->t_896 = f_resolve_subtype_188((*(P485)rt_nil_check(F->p_894)).a, &F->c_898);
if (((*(P485)rt_nil_check(F->p_894)).ival == ((rt_int)3LL))) {
f_fail_23(F->line_248, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if ((((*(P485)rt_nil_check(F->p_894)).ival == ((rt_int)2LL)) || ((*(P485)rt_nil_check(F->p_894)).ival == ((rt_int)4LL)))) {
F->lv_899 = NULL;
F->lc_900 = NULL;
F->y_902 = NULL;
F->y_902 = f_new_sym_155(((rt_int)1LL), (*(P485)rt_nil_check(F->p_894)).name);
f_lvalue_400(F->a_895, &F->lv_899, &F->vt_897, &F->lc_900, &F->ro_901);
f_check_type_175(F->vt_897, F->t_896, F->line_248);
if ((F->ro_901 && ((*(P485)rt_nil_check(F->p_894)).ival == ((rt_int)2LL)))) {
f_fail_23(F->line_248, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_894)).name)), rt_str(" needs a variable", 17)); b_; }));
}
if (g_in_func_529) {
F->f_903 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_894)).name))), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_528, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177(F->t_896)), rt_str(" *", 2)), F->f_903), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_903), rt_str(" = &", 4)), (*(P480)rt_nil_check(F->lv_899))), rt_str(";", 1)); b_; }));
(*(P495)rt_nil_check(F->y_902)).level = g_cur_level_530;
(*(P495)rt_nil_check(F->y_902)).access = f_mk_3(&F->f_903);
(*(P495)rt_nil_check(F->y_902)).byref = 1;
} else {
F->g_904 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_894)).name)))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_523, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177(F->t_896)), rt_str(" *", 2)), F->g_904), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_904, rt_str(" = &", 4)), (*(P480)rt_nil_check(F->lv_899))), rt_str(";", 1)); b_; }));
(*(P495)rt_nil_check(F->y_902)).level = ((rt_int)0LL);
(*(P495)rt_nil_check(F->y_902)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_904), rt_str(")", 1)); b_; }));
}
(*(P495)rt_nil_check(F->y_902)).t = F->t_896;
(*(P495)rt_nil_check(F->y_902)).c = F->lc_900;
(*(P495)rt_nil_check(F->y_902)).ro_flag = ((*(P485)rt_nil_check(F->p_894)).ival == ((rt_int)4LL));
f_define_145(F->y_902, F->line_248);
} else {
F->y_905 = NULL;
F->y_905 = f_new_sym_155(((rt_int)2LL), (*(P485)rt_nil_check(F->p_894)).name);
F->v_906 = rt_str_copy(f_gexpr_421(F->a_895, F->t_896, &F->vt_897));
f_check_type_175(F->vt_897, F->t_896, F->line_248);
{
F->access_907 = rt_str_copy(f_storage_270(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_894)).name)), F->t_896));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_907, rt_str(" = ", 3)), f_copy_code_219(F->t_896, &F->v_906)), rt_str(";", 1)); b_; }));
f_bind_273(F->y_905, &F->access_907);
}
(*(P495)rt_nil_check(F->y_905)).t = F->t_896;
(*(P495)rt_nil_check(F->y_905)).c = F->c_898;
(*(P495)rt_nil_check(F->y_905)).ro_flag = 1;
f_define_145(F->y_905, F->line_248);
}
F->p_894 = (*(P485)rt_nil_check(F->p_894)).next;
F->a_895 = (*(P485)rt_nil_check(F->a_895)).next;
}
if (((F->p_894 != NULL) || (F->a_895 != NULL))) {
f_fail_23(F->line_248, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->d_246)).name))); b_; }));
}
ret_:
  return;
}

static void f_elaborate_capsule_254(P485 d_250, P495 y_251, P485 args_252, P485 owner_253) {
  struct f_elaborate_capsule_254fr *F = rt_alloc(sizeof *F);
F->d_250 = d_250;
F->y_251 = y_251;
F->args_252 = args_252;
F->owner_253 = owner_253;
F->cr_908 = NULL;
F->ctx_909 = NULL;
F->m_910 = NULL;
F->p_911 = NULL;
F->p_911 = (*(P485)rt_nil_check(F->d_250)).a;
{ R506 *cell913 = rt_alloc(sizeof(R506));
(*cell913).d = NULL;
(*cell913).next = NULL;
F->cr_908 = cell913;
}
(*(P505)rt_nil_check(F->cr_908)).d = F->d_250;
(*(P505)rt_nil_check(F->cr_908)).next = g_caps_532;
g_caps_532 = F->cr_908;
f_open_scope_151();
if (((*(P485)rt_nil_check(F->d_250)).b != NULL)) {
f_capsule_params_249(F->d_250, F->args_252, (*(P485)rt_nil_check(F->owner_253)).line);
}
{ R510 *cell914 = rt_alloc(sizeof(R510));
(*cell914).imps = NULL;
(*cell914).next = NULL;
F->ctx_909 = cell914;
}
(*(P509)rt_nil_check(F->ctx_909)).depth = g_depth_516;
(*(P509)rt_nil_check(F->ctx_909)).imps = (*(P485)rt_nil_check(F->d_250)).d;
(*(P509)rt_nil_check(F->ctx_909)).all_imp = ((*(P485)rt_nil_check(F->d_250)).flag >= ((rt_int)2LL));
(*(P509)rt_nil_check(F->ctx_909)).next = g_fctx_531;
g_fctx_531 = F->ctx_909;
f_declare_body_235((*(P485)rt_nil_check(F->d_250)).c);
f_capsule_elements_290((*(P485)rt_nil_check(F->d_250)).c);
{
F->w_915 = NULL;
{ R508 *cell916 = rt_alloc(sizeof(R508));
(*cell916).d = NULL;
(*cell916).w = NULL;
(*cell916).next = NULL;
F->w_915 = cell916;
}
(*(P507)rt_nil_check(F->w_915)).d = F->owner_253;
(*(P507)rt_nil_check(F->w_915)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_286((*(P485)rt_nil_check(F->d_250)).c); b_; }));
(*(P507)rt_nil_check(F->w_915)).next = g_cap_waits_533;
g_cap_waits_533 = F->w_915;
}
g_fctx_531 = (*(P509)rt_nil_check(g_fctx_531)).next;
F->m_910 = g_scope_stack_517;
while (((F->m_910 != NULL) && ((*(P495)rt_nil_check(F->m_910)).depth == g_depth_516))) {
if ((((((*(P495)rt_nil_check(F->m_910)).kind == ((rt_int)5LL)) && ((*(P495)rt_nil_check(F->m_910)).t == NULL)) && ((*(P495)rt_nil_check(F->m_910)).decl != NULL)) && ((*(P485)rt_nil_check((*(P495)rt_nil_check(F->m_910)).decl)).kind == ((rt_int)43LL)))) {
(*(P495)rt_nil_check(F->m_910)).t = f_new_type_200(F->m_910, f_nn_48(((rt_int)80LL), (*(P485)rt_nil_check(F->d_250)).line), &(*(P495)rt_nil_check(F->m_910)).c);
} else if (((((*(P495)rt_nil_check(F->m_910)).kind == ((rt_int)5LL)) || ((*(P495)rt_nil_check(F->m_910)).kind == ((rt_int)6LL))) && ((*(P495)rt_nil_check(F->m_910)).t == NULL))) {
(*(P495)rt_nil_check(F->m_910)).t = f_resolve_subtype_188((*(P495)rt_nil_check(F->m_910)).st, &(*(P495)rt_nil_check(F->m_910)).c);
} else if ((((*(P495)rt_nil_check(F->m_910)).kind == ((rt_int)5LL)) && ((*(P489)rt_nil_check((*(P495)rt_nil_check(F->m_910)).t)).kind == ((rt_int)8LL)))) {
f_finish_ptr_261((*(P495)rt_nil_check(F->m_910)).t);
}
F->m_910 = (*(P495)rt_nil_check(F->m_910)).stack;
}
F->m_910 = g_scope_stack_517;
while (((F->m_910 != NULL) && ((*(P495)rt_nil_check(F->m_910)).depth == g_depth_516))) {
if (f_exported_241(F->d_250, &(*(P480)rt_nil_check((*(P495)rt_nil_check(F->m_910)).name)), &F->ro_912)) {
F->z_917 = NULL;
F->z_917 = f_copy_sym_243(F->m_910);
if (F->ro_912) {
(*(P495)rt_nil_check(F->z_917)).ro_flag = 1;
}
(*(P495)rt_nil_check(F->z_917)).mnext = (*(P495)rt_nil_check(F->y_251)).members;
(*(P495)rt_nil_check(F->y_251)).members = F->z_917;
}
F->m_910 = (*(P495)rt_nil_check(F->m_910)).stack;
}
while ((F->p_911 != NULL)) {
if (((f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_911)).name))) == NULL) || ((*(P495)rt_nil_check(f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_911)).name))))).depth != g_depth_516))) {
f_fail_23((*(P485)rt_nil_check(F->d_250)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_911)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->d_250)).name))); b_; }));
}
F->p_911 = (*(P485)rt_nil_check(F->p_911)).next;
}
f_close_scope_152();
g_caps_532 = (*(P505)rt_nil_check(g_caps_532)).next;
ret_:
  return;
}

static P480 f_renamed_257(P485 d_255, P495 z_256) {
  struct f_renamed_257fr *F = rt_alloc(sizeof *F);
F->d_255 = d_255;
F->z_256 = z_256;
F->r_918 = NULL;
F->r_918 = (*(P485)rt_nil_check(F->d_255)).c;
while ((F->r_918 != NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->r_918)).name)), (*(P480)rt_nil_check((*(P495)rt_nil_check(F->z_256)).name)))) {
F->result_ = (*(P485)rt_nil_check((*(P485)rt_nil_check(F->r_918)).a)).name;
goto ret_;
}
F->r_918 = (*(P485)rt_nil_check(F->r_918)).next;
}
F->result_ = (*(P495)rt_nil_check(F->z_256)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_gen_expose_259(P485 d_258) {
  struct f_gen_expose_259fr *F = rt_alloc(sizeof *F);
F->d_258 = d_258;
F->y_919 = NULL;
F->y_919 = f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->d_258)).name)));
F->m_920 = NULL;
F->p_921 = NULL;
F->p_921 = (*(P485)rt_nil_check(F->d_258)).a;
F->r_922 = NULL;
F->r_922 = (*(P485)rt_nil_check(F->d_258)).c;
if (((F->y_919 == NULL) || ((*(P495)rt_nil_check(F->y_919)).kind != ((rt_int)8LL)))) {
f_fail_23((*(P485)rt_nil_check(F->d_258)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->d_258)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if ((((*(P485)rt_nil_check(F->d_258)).flag == ((rt_int)1LL)) || ((*(P485)rt_nil_check(F->d_258)).flag == ((rt_int)3LL)))) {
F->inst_923 = NULL;
F->inst_923 = f_new_sym_155(((rt_int)8LL), (*(P495)rt_nil_check(F->y_919)).name);
(*(P495)rt_nil_check(F->inst_923)).decl = (*(P495)rt_nil_check(F->y_919)).decl;
f_elaborate_capsule_254((*(P495)rt_nil_check(F->y_919)).decl, F->inst_923, (*(P485)rt_nil_check(F->d_258)).b, F->d_258);
F->y_919 = F->inst_923;
} else if ((((*(P495)rt_nil_check(F->y_919)).decl != NULL) && ((*(P485)rt_nil_check((*(P495)rt_nil_check(F->y_919)).decl)).b != NULL))) {
f_fail_23((*(P485)rt_nil_check(F->d_258)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->d_258)).name))), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P485)rt_nil_check(F->d_258)).b != NULL)) {
f_fail_23((*(P485)rt_nil_check(F->d_258)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_922 != NULL)) {
F->found_924 = 0;
F->m_920 = (*(P495)rt_nil_check(F->y_919)).members;
while ((F->m_920 != NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P495)rt_nil_check(F->m_920)).name)), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->r_922)).name)))) {
F->found_924 = 1;
}
F->m_920 = (*(P495)rt_nil_check(F->m_920)).mnext;
}
if ((!F->found_924)) {
f_fail_23((*(P485)rt_nil_check(F->d_258)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->r_922)).name)), rt_str(" is renamed but not made known by ", 34)), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->d_258)).name))); b_; }));
}
F->r_922 = (*(P485)rt_nil_check(F->r_922)).next;
}
if (((*(P485)rt_nil_check(F->d_258)).ival == ((rt_int)1LL))) {
F->m_920 = (*(P495)rt_nil_check(F->y_919)).members;
while ((F->m_920 != NULL)) {
F->z_925 = NULL;
F->z_925 = f_copy_sym_243(F->m_920);
(*(P495)rt_nil_check(F->z_925)).name = f_renamed_257(F->d_258, F->m_920);
f_define_145(F->z_925, (*(P485)rt_nil_check(F->d_258)).line);
F->m_920 = (*(P495)rt_nil_check(F->m_920)).mnext;
}
goto ret_;
}
while ((F->p_921 != NULL)) {
F->found_926 = 0;
F->m_920 = (*(P495)rt_nil_check(F->y_919)).members;
while ((F->m_920 != NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P495)rt_nil_check(F->m_920)).name)), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_921)).name)))) {
F->z_927 = NULL;
F->z_927 = f_copy_sym_243(F->m_920);
if (((*(P485)rt_nil_check(F->p_921)).ival == ((rt_int)1LL))) {
(*(P495)rt_nil_check(F->z_927)).ro_flag = 1;
}
(*(P495)rt_nil_check(F->z_927)).name = f_renamed_257(F->d_258, F->m_920);
f_define_145(F->z_927, (*(P485)rt_nil_check(F->d_258)).line);
F->found_926 = 1;
}
F->m_920 = (*(P495)rt_nil_check(F->m_920)).mnext;
}
if ((!F->found_926)) {
f_fail_23((*(P485)rt_nil_check(F->d_258)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_921)).name)), rt_str(" is not exported by ", 20)), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->d_258)).name))); b_; }));
}
F->p_921 = (*(P485)rt_nil_check(F->p_921)).next;
}
ret_:
  return;
}

static void f_finish_ptr_261(P489 t_260) {
  struct f_finish_ptr_261fr *F = rt_alloc(sizeof *F);
F->t_260 = t_260;
F->d_928 = NULL;
F->d_928 = (*(P489)rt_nil_check(F->t_260)).decl;
F->p_929 = NULL;
F->c_930 = NULL;
F->dummy_931 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_931, rt_str(" ", 1));
if (((*(P489)rt_nil_check(F->t_260)).target != NULL)) {
goto ret_;
}
f_open_scope_151();
F->p_929 = (*(P485)rt_nil_check(F->d_928)).b;
while ((F->p_929 != NULL)) {
F->y_932 = NULL;
F->y_932 = f_new_sym_155(((rt_int)2LL), (*(P485)rt_nil_check(F->p_929)).name);
(*(P495)rt_nil_check(F->y_932)).t = g_ty_int_544;
(*(P495)rt_nil_check(F->y_932)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_145(F->y_932, (*(P485)rt_nil_check(F->d_928)).line);
F->p_929 = (*(P485)rt_nil_check(F->p_929)).next;
}
(*(P489)rt_nil_check(F->t_260)).target = f_resolve_subtype_188((*(P485)rt_nil_check(F->d_928)).a, &F->c_930);
f_close_scope_152();
(*rt_str_at(&F->dummy_931, ((rt_int)1LL))) = rt_str_get(f_ctype_177(F->t_260), ((rt_int)1LL));
(*rt_str_at(&F->dummy_931, ((rt_int)1LL))) = rt_str_get(f_ctype_177((*(P489)rt_nil_check(F->t_260)).target), ((rt_int)1LL));
ret_:
  return;
}

static void f_declare_subprogram_263(P485 d_262) {
  struct f_declare_subprogram_263fr *F = rt_alloc(sizeof *F);
F->d_262 = d_262;
f_define_145(f_build_subprogram_265(F->d_262), (*(P485)rt_nil_check(F->d_262)).line);
ret_:
  return;
}

static P495 f_build_subprogram_265(P485 d_264) {
  struct f_build_subprogram_265fr *F = rt_alloc(sizeof *F);
F->d_264 = d_264;
F->y_933 = NULL;
F->p_934 = NULL;
F->p_934 = (*(P485)rt_nil_check(F->d_264)).a;
F->tail_935 = NULL;
if (((*(P485)rt_nil_check(F->d_264)).kind == ((rt_int)46LL))) {
F->y_933 = f_new_sym_155(((rt_int)3LL), (*(P485)rt_nil_check(F->d_264)).name);
} else if (((*(P485)rt_nil_check(F->d_264)).kind == ((rt_int)50LL))) {
F->y_933 = f_new_sym_155(((rt_int)9LL), (*(P485)rt_nil_check(F->d_264)).name);
} else {
F->y_933 = f_new_sym_155(((rt_int)4LL), (*(P485)rt_nil_check(F->d_264)).name);
}
while ((F->p_934 != NULL)) {
F->pm_936 = NULL;
{ R494 *cell937 = rt_alloc(sizeof(R494));
(*cell937).name = NULL;
(*cell937).t = NULL;
(*cell937).c = NULL;
(*cell937).cfield = NULL;
(*cell937).next = NULL;
F->pm_936 = cell937;
}
(*(P493)rt_nil_check(F->pm_936)).name = (*(P485)rt_nil_check(F->p_934)).name;
(*(P493)rt_nil_check(F->pm_936)).mode = (*(P485)rt_nil_check(F->p_934)).ival;
(*(P493)rt_nil_check(F->pm_936)).t = f_resolve_subtype_188((*(P485)rt_nil_check(F->p_934)).a, &(*(P493)rt_nil_check(F->pm_936)).c);
(*(P493)rt_nil_check(F->pm_936)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_934)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_935 == NULL)) {
(*(P495)rt_nil_check(F->y_933)).params = F->pm_936;
} else {
(*(P493)rt_nil_check(F->tail_935)).next = F->pm_936;
}
F->tail_935 = F->pm_936;
F->p_934 = (*(P485)rt_nil_check(F->p_934)).next;
}
(*(P495)rt_nil_check(F->y_933)).result = g_ty_void_549;
if (((*(P485)rt_nil_check(F->d_264)).b != NULL)) {
F->rc_938 = NULL;
(*(P495)rt_nil_check(F->y_933)).result = f_resolve_subtype_188((*(P485)rt_nil_check(F->d_264)).b, &F->rc_938);
}
(*(P495)rt_nil_check(F->y_933)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_389(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->d_264)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P495)rt_nil_check(F->y_933)).decl = F->d_264;
(*(P495)rt_nil_check(F->y_933)).level = g_cur_level_530;
if (((*(P485)rt_nil_check(F->d_264)).kind == ((rt_int)50LL))) {
f_put_27(g_out_globals_523, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_933)).cname))), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_933;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_element_267(P485 e_266) {
  struct f_element_267fr *F = rt_alloc(sizeof *F);
F->e_266 = e_266;
F->k_939 = (*(P485)rt_nil_check(F->e_266)).kind;
if (((F->k_939 == ((rt_int)48LL)) && (((*(P485)rt_nil_check(F->e_266)).flag == ((rt_int)1LL)) || ((*(P485)rt_nil_check(F->e_266)).flag == ((rt_int)3LL))))) {
f_gen_expose_259(F->e_266);
} else if ((((F->k_939 == ((rt_int)45LL)) || (F->k_939 == ((rt_int)46LL))) || (F->k_939 == ((rt_int)50LL)))) {
f_subprogram_279(F->e_266);
} else if (((((((F->k_939 == ((rt_int)49LL)) || (F->k_939 == ((rt_int)42LL))) || (F->k_939 == ((rt_int)43LL))) || (F->k_939 == ((rt_int)47LL))) || (F->k_939 == ((rt_int)48LL))) || (F->k_939 == ((rt_int)51LL)))) {
goto ret_;
} else if ((F->k_939 == ((rt_int)44LL))) {
f_finish_ptr_261((*(P495)rt_nil_check(f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_266)).name))))).t);
} else if ((F->k_939 == ((rt_int)40LL))) {
f_var_decl_275(F->e_266);
} else if (((F->k_939 == ((rt_int)41LL)) && ((*(P485)rt_nil_check(F->e_266)).flag == ((rt_int)0LL)))) {
f_const_decl_277(F->e_266);
} else if ((F->k_939 == ((rt_int)41LL))) {
goto ret_;
} else if ((F->k_939 == ((rt_int)33LL))) {
F->t_940 = NULL;
F->c_941 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_266)).a, g_ty_bool_545, &F->t_940));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_941), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_301(F->e_266);
}
ret_:
  return;
}

static rstr f_storage_270(rstr *name_268, P489 t_269) {
  struct f_storage_270fr *F = rt_alloc(sizeof *F);
F->name_268 = name_268;
F->t_269 = t_269;
if ((!g_in_func_529)) {
F->g_942 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_268))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_523, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177(F->t_269)), rt_str(" ", 1)), F->g_942), rt_str(";", 1)); b_; }));
g_st_field_535 = f_mk_3(&F->g_942);
F->result_ = F->g_942;
goto ret_;
}
{
F->f_943 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_268)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_528, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177(F->t_269)), rt_str(" ", 1)), F->f_943), rt_str(";", 1)); b_; }));
g_st_field_535 = f_mk_3(&F->f_943);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_943);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_bind_273(P495 y_271, rstr *access_272) {
  struct f_bind_273fr *F = rt_alloc(sizeof *F);
F->y_271 = y_271;
F->access_272 = access_272;
if (g_in_func_529) {
(*(P495)rt_nil_check(F->y_271)).level = g_cur_level_530;
(*(P495)rt_nil_check(F->y_271)).access = g_st_field_535;
} else {
(*(P495)rt_nil_check(F->y_271)).level = ((rt_int)0LL);
(*(P495)rt_nil_check(F->y_271)).access = f_mk_3(&(*F->access_272));
}
ret_:
  return;
}

static void f_var_decl_275(P485 d_274) {
  struct f_var_decl_275fr *F = rt_alloc(sizeof *F);
F->d_274 = d_274;
F->c_944 = NULL;
F->t_945 = NULL;
F->t_945 = f_resolve_subtype_188((*(P485)rt_nil_check(F->d_274)).a, &F->c_944);
F->y_946 = NULL;
F->y_946 = f_new_sym_155(((rt_int)1LL), (*(P485)rt_nil_check(F->d_274)).name);
F->access_947 = rt_str_copy(f_storage_270(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->d_274)).name)), F->t_945));
f_init_storage_204(&F->access_947, F->t_945, F->c_944);
if (((*(P485)rt_nil_check(F->d_274)).b != NULL)) {
F->vt_948 = NULL;
F->v_949 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->d_274)).b, F->t_945, &F->vt_948));
f_check_type_175(F->vt_948, F->t_945, (*(P485)rt_nil_check(F->d_274)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_216(&F->access_947, F->t_945, &F->v_949, F->c_944); b_; }));
}
(*(P495)rt_nil_check(F->y_946)).t = F->t_945;
(*(P495)rt_nil_check(F->y_946)).c = F->c_944;
f_bind_273(F->y_946, &F->access_947);
f_define_145(F->y_946, (*(P485)rt_nil_check(F->d_274)).line);
ret_:
  return;
}

static void f_const_decl_277(P485 d_276) {
  struct f_const_decl_277fr *F = rt_alloc(sizeof *F);
F->d_276 = d_276;
F->c_950 = NULL;
F->c_950 = f_new_cons_158();
F->t_951 = NULL;
F->vt_952 = NULL;
F->y_953 = NULL;
F->y_953 = f_new_sym_155(((rt_int)2LL), (*(P485)rt_nil_check(F->d_276)).name);
if (((*(P485)rt_nil_check(F->d_276)).a != NULL)) {
F->t_951 = f_resolve_subtype_188((*(P485)rt_nil_check(F->d_276)).a, &F->c_950);
}
{
F->v_955 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->d_276)).b, F->t_951, &F->vt_952));
if ((F->t_951 != NULL)) {
f_check_type_175(F->vt_952, F->t_951, (*(P485)rt_nil_check(F->d_276)).line);
} else {
F->t_951 = F->vt_952;
}
if (((*(P489)rt_nil_check(F->t_951)).kind == ((rt_int)1LL))) {
(*(P495)rt_nil_check(F->y_953)).mvalue = f_manifest_207((*(P485)rt_nil_check(F->d_276)).b, &F->ok_954);
(*(P495)rt_nil_check(F->y_953)).hasmv = F->ok_954;
}
{
F->access_956 = rt_str_copy(f_storage_270(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->d_276)).name)), F->t_951));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_956, rt_str(" = ", 3)), f_copy_code_219(F->t_951, &F->v_955)), rt_str(";", 1)); b_; }));
f_bind_273(F->y_953, &F->access_956);
}
}
(*(P495)rt_nil_check(F->y_953)).t = F->t_951;
(*(P495)rt_nil_check(F->y_953)).c = F->c_950;
(*(P495)rt_nil_check(F->y_953)).ro_flag = 1;
f_define_145(F->y_953, (*(P485)rt_nil_check(F->d_276)).line);
ret_:
  return;
}

static void f_subprogram_279(P485 d_278) {
  struct f_subprogram_279fr *F = rt_alloc(sizeof *F);
F->d_278 = d_278;
f_gen_subprogram_282(F->d_278, f_lookup_decl_142(F->d_278));
ret_:
  return;
}

static void f_gen_subprogram_282(P485 d_280, P495 y_281) {
  struct f_gen_subprogram_282fr *F = rt_alloc(sizeof *F);
F->d_280 = d_280;
F->y_281 = y_281;
F->saved_code_957 = NULL;
F->saved_code_957 = g_code_527;
F->saved_fields_958 = NULL;
F->saved_fields_958 = g_fields_buf_528;
F->saved_in_959 = g_in_func_529;
F->saved_sym_960 = NULL;
F->saved_sym_960 = g_func_sym_537;
F->saved_exits_961 = NULL;
F->saved_exits_961 = g_exits_538;
F->saved_frames_962 = g_frames_539;
F->args_963 = NULL;
F->args_963 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_964 = NULL;
F->pm_964 = (*(P495)rt_nil_check(F->y_281)).params;
F->saved_handlers_965 = NULL;
F->saved_handlers_965 = g_handlers_540;
F->saved_cleanups_966 = NULL;
F->saved_cleanups_966 = g_cleanups_541;
F->ctx_967 = NULL;
F->head_968 = NULL;
F->frame_969 = NULL;
F->frame_969 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_281)).cname)), rt_str("fr", 2)); b_; }));
F->parent_970 = NULL;
F->copy_back_971 = NULL;
F->copy_back_971 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (g_in_func_529) {
F->parent_970 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P495)rt_nil_check(g_func_sym_537)).cname)), rt_str("fr", 2)); b_; }));
}
g_code_527 = f_new_buffer_24();
g_fields_buf_528 = f_new_buffer_24();
g_in_func_529 = 1;
g_func_sym_537 = F->y_281;
g_exits_538 = NULL;
g_frames_539 = ((rt_int)0LL);
g_handlers_540 = NULL;
g_cleanups_541 = NULL;
g_cur_level_530 = rt_add(g_cur_level_530, ((rt_int)1LL));
f_open_scope_151();
{ R510 *cell972 = rt_alloc(sizeof(R510));
(*cell972).imps = NULL;
(*cell972).next = NULL;
F->ctx_967 = cell972;
}
(*(P509)rt_nil_check(F->ctx_967)).depth = g_depth_516;
(*(P509)rt_nil_check(F->ctx_967)).imps = (*(P485)rt_nil_check(F->d_280)).d;
(*(P509)rt_nil_check(F->ctx_967)).all_imp = ((*(P485)rt_nil_check(F->d_280)).flag >= ((rt_int)2LL));
(*(P509)rt_nil_check(F->ctx_967)).next = g_fctx_531;
g_fctx_531 = F->ctx_967;
if ((F->parent_970 != NULL)) {
f_put_27(g_fields_buf_528, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P480)rt_nil_check(F->parent_970))), rt_str(" *up;", 5)); b_; }));
if (((*(P495)rt_nil_check(F->y_281)).kind != ((rt_int)9LL))) {
F->args_963 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P480)rt_nil_check(F->parent_970))), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_964 != NULL)) {
F->ct_973 = rt_str_copy(f_ctype_177((*(P493)rt_nil_check(F->pm_964)).t));
F->f_974 = rt_str_copy((*(P480)rt_nil_check((*(P493)rt_nil_check(F->pm_964)).cfield)));
F->p_975 = NULL;
if ((((*(P480)rt_nil_check(F->args_963))).len > ((rt_int)0LL))) {
F->args_963 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check(F->args_963)), rt_str(", ", 2)); b_; }));
}
if (((*(P493)rt_nil_check(F->pm_964)).mode == ((rt_int)1LL))) {
F->p_975 = f_new_sym_155(((rt_int)2LL), (*(P493)rt_nil_check(F->pm_964)).name);
f_put_27(g_fields_buf_528, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_973), rt_str(" ", 1)), F->f_974), rt_str(";", 1)); b_; }));
F->args_963 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->args_963)), F->ct_973), rt_str(" ", 1)), F->f_974); b_; }));
(*(P495)rt_nil_check(F->p_975)).access = f_mk_3(&F->f_974);
if (((*(P495)rt_nil_check(F->y_281)).kind != ((rt_int)9LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_974), rt_str(" = ", 3)), f_copy_code_219((*(P493)rt_nil_check(F->pm_964)).t, &F->f_974)), rt_str(";", 1)); b_; }));
}
} else {
F->p_975 = f_new_sym_155(((rt_int)1LL), (*(P493)rt_nil_check(F->pm_964)).name);
f_put_27(g_fields_buf_528, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_973), rt_str(" *", 2)), F->f_974), rt_str(";", 1)); b_; }));
F->args_963 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->args_963)), F->ct_973), rt_str(" *", 2)), F->f_974); b_; }));
(*(P495)rt_nil_check(F->p_975)).access = f_mk_3(&F->f_974);
(*(P495)rt_nil_check(F->p_975)).byref = 1;
if (((*(P495)rt_nil_check(F->y_281)).kind != ((rt_int)9LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_974), rt_str(" = ", 3)), F->f_974), rt_str(";", 1)); b_; }));
}
if ((((*(P493)rt_nil_check(F->pm_964)).mode == ((rt_int)3LL)) && ((*(P495)rt_nil_check(F->y_281)).kind != ((rt_int)9LL)))) {
f_put_27(g_fields_buf_528, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_973), rt_str(" ", 1)), F->f_974), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_974), rt_str("v = ", 4)), f_copy_code_219((*(P493)rt_nil_check(F->pm_964)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_974); b_; }))), rt_str(";", 1)); b_; }));
F->copy_back_971 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->copy_back_971)), rt_str("  ", 2)), f_assign_code_216(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_974), rt_str(")", 1)); b_; }), (*(P493)rt_nil_check(F->pm_964)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_974), rt_str("v", 1)); b_; }), (*(P493)rt_nil_check(F->pm_964)).c)); b_; }));
(*(P495)rt_nil_check(F->p_975)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_974, rt_str("v", 1)); b_; }));
(*(P495)rt_nil_check(F->p_975)).byref = 0;
}
}
(*(P495)rt_nil_check(F->p_975)).t = (*(P493)rt_nil_check(F->pm_964)).t;
(*(P495)rt_nil_check(F->p_975)).c = (*(P493)rt_nil_check(F->pm_964)).c;
(*(P495)rt_nil_check(F->p_975)).level = g_cur_level_530;
(*(P495)rt_nil_check(F->p_975)).ro_flag = (((*(P493)rt_nil_check(F->pm_964)).mode == ((rt_int)1LL)) || ((*(P493)rt_nil_check(F->pm_964)).mode == ((rt_int)4LL)));
f_define_145(F->p_975, (*(P485)rt_nil_check(F->d_280)).line);
F->pm_964 = (*(P493)rt_nil_check(F->pm_964)).next;
}
if (((*(P489)rt_nil_check((*(P495)rt_nil_check(F->y_281)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_fields_buf_528, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177((*(P495)rt_nil_check(F->y_281)).result)), rt_str(" result_;", 9)); b_; }));
}
f_declare_body_235((*(P485)rt_nil_check(F->d_280)).c);
f_body_elements_292((*(P485)rt_nil_check(F->d_280)).c);
f_close_scope_152();
g_fctx_531 = (*(P509)rt_nil_check(g_fctx_531)).next;
g_cur_level_530 = rt_sub(g_cur_level_530, ((rt_int)1LL));
if (((((*(P480)rt_nil_check(F->args_963))).len == ((rt_int)0LL)) || ((*(P495)rt_nil_check(F->y_281)).kind == ((rt_int)9LL)))) {
F->args_963 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P495)rt_nil_check(F->y_281)).kind == ((rt_int)9LL))) {
F->args_963 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_968 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177((*(P495)rt_nil_check(F->y_281)).result)), rt_str(" ", 1)), (*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_281)).cname))), rt_str("(", 1)), (*(P480)rt_nil_check(F->args_963))), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_522, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check(F->head_968)), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check(F->head_968)), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_536, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P480)rt_nil_check(F->frame_969))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_536, g_fields_buf_528);
f_put_27(g_out_frames_536, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P495)rt_nil_check(F->y_281)).kind == ((rt_int)9LL))) {
f_put_27(g_out_funcs_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P480)rt_nil_check(F->frame_969))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P480)rt_nil_check(F->frame_969))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_splice_34(g_out_funcs_524, g_code_527);
if (((*(P489)rt_nil_check((*(P495)rt_nil_check(F->y_281)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_out_funcs_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P480)rt_nil_check(F->copy_back_971))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_524, &(*(P480)rt_nil_check(F->copy_back_971)));
}
f_put_27(g_out_funcs_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P480)rt_nil_check(F->copy_back_971))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_524, &(*(P480)rt_nil_check(F->copy_back_971)));
}
f_put_27(g_out_funcs_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_527 = F->saved_code_957;
g_fields_buf_528 = F->saved_fields_958;
g_in_func_529 = F->saved_in_959;
g_func_sym_537 = F->saved_sym_960;
g_exits_538 = F->saved_exits_961;
g_frames_539 = F->saved_frames_962;
g_handlers_540 = F->saved_handlers_965;
g_cleanups_541 = F->saved_cleanups_966;
ret_:
  return;
}

static rstr f_waits_of_284(P485 d_283) {
  struct f_waits_of_284fr *F = rt_alloc(sizeof *F);
F->d_283 = d_283;
F->w_976 = NULL;
F->w_976 = g_cap_waits_533;
while ((F->w_976 != NULL)) {
if (((*(P507)rt_nil_check(F->w_976)).d == F->d_283)) {
F->result_ = (*(P480)rt_nil_check((*(P507)rt_nil_check(F->w_976)).w));
goto ret_;
}
F->w_976 = (*(P507)rt_nil_check(F->w_976)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_task_waits_286(P485 elems_285) {
  struct f_task_waits_286fr *F = rt_alloc(sizeof *F);
F->elems_285 = elems_285;
F->e_977 = NULL;
F->e_977 = F->elems_285;
F->r_978 = NULL;
F->r_978 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_977 != NULL)) {
if (((*(P485)rt_nil_check(F->e_977)).kind == ((rt_int)50LL))) {
F->r_978 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->r_978)), rt_str(" rt_await_decl(&", 16)), (*(P480)rt_nil_check((*(P495)rt_nil_check(f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_977)).name))))).cname))), rt_str("decl);", 6)); b_; }));
} else if ((((*(P485)rt_nil_check(F->e_977)).kind == ((rt_int)47LL)) || (((*(P485)rt_nil_check(F->e_977)).kind == ((rt_int)48LL)) && (((*(P485)rt_nil_check(F->e_977)).flag == ((rt_int)1LL)) || ((*(P485)rt_nil_check(F->e_977)).flag == ((rt_int)3LL)))))) {
F->r_978 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check(F->r_978)), f_waits_of_284(F->e_977)); b_; }));
}
F->e_977 = (*(P485)rt_nil_check(F->e_977)).next;
}
F->result_ = (*(P480)rt_nil_check(F->r_978));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_await_tasks_288(P485 elems_287) {
  struct f_await_tasks_288fr *F = rt_alloc(sizeof *F);
F->elems_287 = elems_287;
F->w_979 = rt_str_copy(f_task_waits_286(F->elems_287));
if (((F->w_979).len > ((rt_int)0LL))) {
f_emit_29(&F->w_979);
}
ret_:
  return;
}

static void f_capsule_elements_290(P485 elems_289) {
  struct f_capsule_elements_290fr *F = rt_alloc(sizeof *F);
F->elems_289 = elems_289;
F->e_980 = NULL;
F->e_980 = F->elems_289;
while ((F->e_980 != NULL)) {
f_element_267(F->e_980);
F->e_980 = (*(P485)rt_nil_check(F->e_980)).next;
}
ret_:
  return;
}

static void f_body_elements_292(P485 elems_291) {
  struct f_body_elements_292fr *F = rt_alloc(sizeof *F);
F->elems_291 = elems_291;
f_capsule_elements_290(F->elems_291);
f_await_tasks_288(F->elems_291);
ret_:
  return;
}

static void f_gen_body_294(P485 elems_293) {
  struct f_gen_body_294fr *F = rt_alloc(sizeof *F);
F->elems_293 = elems_293;
f_open_scope_151();
f_declare_body_235(F->elems_293);
f_body_elements_292(F->elems_293);
f_close_scope_152();
ret_:
  return;
}

static void f_pop_frames_296(rt_int upto_295) {
  struct f_pop_frames_296fr *F = rt_alloc(sizeof *F);
F->upto_295 = upto_295;
F->i_981 = g_frames_539;
F->c_982 = NULL;
F->c_982 = g_cleanups_541;
while ((F->i_981 > F->upto_295)) {
f_emit_29(&(*(P480)rt_nil_check((*(P497)rt_nil_check(F->c_982)).s)));
F->c_982 = (*(P497)rt_nil_check(F->c_982)).next;
F->i_981 = rt_sub(F->i_981, ((rt_int)1LL));
}
ret_:
  return;
}

static void f_push_cleanup_298(rstr *s_297) {
  struct f_push_cleanup_298fr *F = rt_alloc(sizeof *F);
F->s_297 = s_297;
F->c_983 = NULL;
{ R498 *cell984 = rt_alloc(sizeof(R498));
(*cell984).s = NULL;
(*cell984).next = NULL;
F->c_983 = cell984;
}
(*(P497)rt_nil_check(F->c_983)).s = f_mk_3(&(*F->s_297));
(*(P497)rt_nil_check(F->c_983)).next = g_cleanups_541;
g_cleanups_541 = F->c_983;
g_frames_539 = rt_add(g_frames_539, ((rt_int)1LL));
ret_:
  return;
}

static void f_pop_cleanup_299(void) {
  struct f_pop_cleanup_299fr *F = rt_alloc(sizeof *F);
g_cleanups_541 = (*(P497)rt_nil_check(g_cleanups_541)).next;
g_frames_539 = rt_sub(g_frames_539, ((rt_int)1LL));
ret_:
  return;
}

static void f_gen_statement_301(P485 s_300) {
  struct f_gen_statement_301fr *F = rt_alloc(sizeof *F);
F->s_300 = s_300;
F->label_985 = NULL;
if (((*(P485)rt_nil_check(F->s_300)).tag != NULL)) {
F->x_986 = NULL;
{ R504 *cell987 = rt_alloc(sizeof(R504));
(*cell987).match = NULL;
(*cell987).label = NULL;
(*cell987).next = NULL;
F->x_986 = cell987;
}
F->label_985 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P503)rt_nil_check(F->x_986)).match = (*(P485)rt_nil_check(F->s_300)).tag;
(*(P503)rt_nil_check(F->x_986)).label = F->label_985;
(*(P503)rt_nil_check(F->x_986)).depth = g_frames_539;
(*(P503)rt_nil_check(F->x_986)).next = g_exits_538;
g_exits_538 = F->x_986;
}
{ rt_int sel988 = (*(P485)rt_nil_check(F->s_300)).kind;
if (0 || (sel988 == ((rt_int)20LL))) {
f_st_assign_303(F->s_300);
} else if (0 || (sel988 == ((rt_int)21LL))) {
f_st_call_305(F->s_300);
} else if (0 || (sel988 == ((rt_int)22LL))) {
f_st_if_307(F->s_300);
} else if (0 || (sel988 == ((rt_int)23LL))) {
f_st_case_309(F->s_300);
} else if (0 || (sel988 == ((rt_int)24LL))) {
f_st_repeat_311(F->s_300);
} else if (0 || (sel988 == ((rt_int)25LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_294((*(P485)rt_nil_check(F->s_300)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel988 == ((rt_int)27LL))) {
f_st_exit_313(F->s_300);
} else if (0 || (sel988 == ((rt_int)28LL))) {
f_st_return_315(F->s_300);
} else if (0 || (sel988 == ((rt_int)30LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_318(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->s_300)).name)), (*(P485)rt_nil_check(F->s_300)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel988 == ((rt_int)31LL))) {
if ((g_handlers_540 == NULL)) {
f_fail_23((*(P485)rt_nil_check(F->s_300)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P480)rt_nil_check((*(P497)rt_nil_check(g_handlers_540)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel988 == ((rt_int)26LL))) {
f_st_guard_320(F->s_300);
} else if (0 || (sel988 == ((rt_int)32LL))) {
f_st_alloc_322(F->s_300);
} else if (0 || (sel988 == ((rt_int)34LL))) {
f_st_create_326(F->s_300);
} else if (0 || (sel988 == ((rt_int)35LL))) {
f_st_wait_355(F->s_300);
} else if (0 || (sel988 == ((rt_int)36LL))) {
f_st_region_363(F->s_300);
} else {
f_fail_23((*(P485)rt_nil_check(F->s_300)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P485)rt_nil_check(F->s_300)).tag != NULL)) {
g_exits_538 = (*(P503)rt_nil_check(g_exits_538)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check(F->label_985)), rt_str(": ;", 3)); b_; }));
}
ret_:
  return;
}

static void f_st_assign_303(P485 s_302) {
  struct f_st_assign_303fr *F = rt_alloc(sizeof *F);
F->s_302 = s_302;
F->lv_989 = NULL;
F->t_990 = NULL;
F->vt_991 = NULL;
F->c_992 = NULL;
if (((((*(P485)rt_nil_check((*(P485)rt_nil_check(F->s_302)).a)).kind == ((rt_int)10LL)) && ((*(P485)rt_nil_check((*(P485)rt_nil_check(F->s_302)).a)).b != NULL)) && ((*(P485)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->s_302)).a)).b)).kind == ((rt_int)16LL)))) {
f_lvalue_400((*(P485)rt_nil_check((*(P485)rt_nil_check(F->s_302)).a)).a, &F->lv_989, &F->t_990, &F->c_992, &F->ro_993);
if ((F->ro_993 || ((*(P489)rt_nil_check(F->t_990)).kind != ((rt_int)5LL)))) {
f_fail_23((*(P485)rt_nil_check(F->s_302)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string variable", 40); b_; }));
}
{
F->lo_994 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->s_302)).a)).b)).a, g_ty_int_544, &F->vt_991));
F->hi_995 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->s_302)).a)).b)).b, g_ty_int_544, &F->vt_991));
F->v_996 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->s_302)).b, g_ty_string_548, &F->vt_991));
f_check_type_175(F->vt_991, g_ty_string_548, (*(P485)rt_nil_check(F->s_302)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P480)rt_nil_check(F->lv_989))), rt_str(", ", 2)), F->lo_994), rt_str(", ", 2)), F->hi_995), rt_str(", ", 2)), F->v_996), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_400((*(P485)rt_nil_check(F->s_302)).a, &F->lv_989, &F->t_990, &F->c_992, &F->ro_993);
if (F->ro_993) {
f_fail_23((*(P485)rt_nil_check(F->s_302)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if ((!f_opened_190(F->t_990))) {
f_fail_23((*(P485)rt_nil_check(F->s_302)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_990)).name))), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_997 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->s_302)).b, F->t_990, &F->vt_991));
f_check_type_175(F->vt_991, F->t_990, (*(P485)rt_nil_check(F->s_302)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_216(&(*(P480)rt_nil_check(F->lv_989)), F->t_990, &F->v_997, F->c_992); b_; }));
}
ret_:
  return;
}

static void f_st_call_305(P485 s_304) {
  struct f_st_call_305fr *F = rt_alloc(sizeof *F);
F->s_304 = s_304;
F->c_998 = NULL;
F->c_998 = (*(P485)rt_nil_check(F->s_304)).a;
F->t_999 = NULL;
if ((((*(P485)rt_nil_check(F->c_998)).kind == ((rt_int)7LL)) || ((*(P485)rt_nil_check(F->c_998)).kind == ((rt_int)12LL)))) {
F->x_1000 = NULL;
F->x_1000 = f_nn_48(((rt_int)10LL), (*(P485)rt_nil_check(F->c_998)).line);
(*(P485)rt_nil_check(F->x_1000)).a = F->c_998;
F->c_998 = F->x_1000;
}
if (((*(P485)rt_nil_check(F->c_998)).kind != ((rt_int)10LL))) {
f_fail_23((*(P485)rt_nil_check(F->s_304)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_469(F->c_998, 1, &F->t_999), rt_str(";", 1)); b_; }));
ret_:
  return;
}

static void f_st_if_307(P485 s_306) {
  struct f_st_if_307fr *F = rt_alloc(sizeof *F);
F->s_306 = s_306;
F->a_1001 = NULL;
F->a_1001 = (*(P485)rt_nil_check(F->s_306)).a;
F->first_1002 = 1;
F->t_1003 = NULL;
while ((F->a_1001 != NULL)) {
F->c_1004 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->a_1001)).a, g_ty_bool_545, &F->t_1003));
f_check_type_175(F->t_1003, g_ty_bool_545, (*(P485)rt_nil_check(F->s_306)).line);
if (F->first_1002) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1004), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1004), rt_str(") {", 3)); b_; }));
}
F->first_1002 = 0;
f_gen_body_294((*(P485)rt_nil_check(F->a_1001)).b);
F->a_1001 = (*(P485)rt_nil_check(F->a_1001)).next;
}
if (((*(P485)rt_nil_check(F->s_306)).flag == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_gen_body_294((*(P485)rt_nil_check(F->s_306)).b);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_case_309(P485 s_308) {
  struct f_st_case_309fr *F = rt_alloc(sizeof *F);
F->s_308 = s_308;
F->st_1005 = NULL;
F->vt_1006 = NULL;
F->first_1007 = 1;
F->a_1008 = NULL;
F->a_1008 = (*(P485)rt_nil_check(F->s_308)).b;
F->sel_1009 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->s_308)).a, NULL, &F->st_1005));
F->tmp_1010 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_177(F->st_1005)), rt_str(" ", 1)), F->tmp_1010), rt_str(" = ", 3)), F->sel_1009), rt_str(";", 1)); b_; }));
while ((F->a_1008 != NULL)) {
F->lab_1011 = NULL;
F->lab_1011 = (*(P485)rt_nil_check(F->a_1008)).a;
F->conds_1012 = NULL;
F->conds_1012 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1011 != NULL)) {
if (((*(P485)rt_nil_check(F->lab_1011)).b == NULL)) {
F->v_1013 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->lab_1011)).a, F->st_1005, &F->vt_1006));
f_check_type_175(F->vt_1006, F->st_1005, (*(P485)rt_nil_check(F->s_308)).line);
F->conds_1012 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->conds_1012)), rt_str(" || ", 4)), f_eq_code_223(F->st_1005, &F->tmp_1010, &F->v_1013)); b_; }));
} else {
F->lo_1014 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->lab_1011)).a, F->st_1005, &F->vt_1006));
F->hi_1015 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->lab_1011)).b, F->st_1005, &F->vt_1006));
F->conds_1012 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->conds_1012)), rt_str(" || (", 5)), F->tmp_1010), rt_str(" >= ", 4)), F->lo_1014), rt_str(" && ", 4)), F->tmp_1010), rt_str(" <= ", 4)), F->hi_1015), rt_str(")", 1)); b_; }));
}
F->lab_1011 = (*(P485)rt_nil_check(F->lab_1011)).next;
}
if (F->first_1007) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P480)rt_nil_check(F->conds_1012))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P480)rt_nil_check(F->conds_1012))), rt_str(") {", 3)); b_; }));
}
F->first_1007 = 0;
f_gen_body_294((*(P485)rt_nil_check(F->a_1008)).b);
F->a_1008 = (*(P485)rt_nil_check(F->a_1008)).next;
}
if (F->first_1007) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P485)rt_nil_check(F->s_308)).flag == ((rt_int)1LL))) {
f_gen_body_294((*(P485)rt_nil_check(F->s_308)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_repeat_311(P485 s_310) {
  struct f_st_repeat_311fr *F = rt_alloc(sizeof *F);
F->s_310 = s_310;
F->t_1016 = NULL;
F->c_1017 = NULL;
if (((*(P485)rt_nil_check(F->s_310)).flag == ((rt_int)0LL))) {
F->cond_1018 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->s_310)).a, g_ty_bool_545, &F->t_1016));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1018), rt_str(") {", 3)); b_; }));
f_gen_body_294((*(P485)rt_nil_check(F->s_310)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1016 = f_resolve_subtype_188((*(P485)rt_nil_check(F->s_310)).a, &F->c_1017);
F->c_1017 = f_base_cons_169(F->t_1016, F->c_1017);
if ((((*(P489)rt_nil_check(f_base_of_166(F->t_1016))).kind == ((rt_int)4LL)) && ((*(P487)rt_nil_check(F->c_1017)).lo == NULL))) {
F->c_1017 = f_new_cons_158();
(*(P487)rt_nil_check(F->c_1017)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P487)rt_nil_check(F->c_1017)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P489)rt_nil_check(f_base_of_166(F->t_1016))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P487)rt_nil_check(F->c_1017)).lo == NULL)) {
f_fail_23((*(P485)rt_nil_check(F->s_310)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1019 = rt_str_copy(f_storage_270(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->s_310)).name)), F->t_1016));
F->lov_1020 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1021 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1022 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1023 = NULL;
F->y_1023 = f_new_sym_155(((rt_int)2LL), (*(P485)rt_nil_check(F->s_310)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1020), rt_str(" = ", 3)), (*(P480)rt_nil_check((*(P487)rt_nil_check(F->c_1017)).lo))), rt_str(", ", 2)), F->hiv_1021), rt_str(" = ", 3)), (*(P480)rt_nil_check((*(P487)rt_nil_check(F->c_1017)).hi))), rt_str(";", 1)); b_; }));
if (((*(P485)rt_nil_check(F->s_310)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1022), rt_str(" = ", 3)), F->hiv_1021), rt_str("; ", 2)), F->it_1022), rt_str(" >= ", 4)), F->lov_1020), rt_str("; ", 2)), F->it_1022), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1022), rt_str(" = ", 3)), F->lov_1020), rt_str("; ", 2)), F->it_1022), rt_str(" <= ", 4)), F->hiv_1021), rt_str("; ", 2)), F->it_1022), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1019, rt_str(" = ", 3)), F->it_1022), rt_str(";", 1)); b_; }));
f_open_scope_151();
(*(P495)rt_nil_check(F->y_1023)).t = F->t_1016;
(*(P495)rt_nil_check(F->y_1023)).c = F->c_1017;
f_bind_273(F->y_1023, &F->access_1019);
(*(P495)rt_nil_check(F->y_1023)).ro_flag = 1;
f_define_145(F->y_1023, (*(P485)rt_nil_check(F->s_310)).line);
f_gen_body_294((*(P485)rt_nil_check(F->s_310)).b);
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_exit_313(P485 s_312) {
  struct f_st_exit_313fr *F = rt_alloc(sizeof *F);
F->s_312 = s_312;
F->x_1024 = NULL;
F->x_1024 = g_exits_538;
while ((F->x_1024 != NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P503)rt_nil_check(F->x_1024)).match)), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->s_312)).name)))) {
f_pop_frames_296((*(P503)rt_nil_check(F->x_1024)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P480)rt_nil_check((*(P503)rt_nil_check(F->x_1024)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1024 = (*(P503)rt_nil_check(F->x_1024)).next;
}
f_fail_23((*(P485)rt_nil_check(F->s_312)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->s_312)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  return;
}

static void f_st_return_315(P485 s_314) {
  struct f_st_return_315fr *F = rt_alloc(sizeof *F);
F->s_314 = s_314;
F->vt_1025 = NULL;
if ((!g_in_func_529)) {
f_pop_frames_296(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P489)rt_nil_check((*(P495)rt_nil_check(g_func_sym_537)).result)).kind == ((rt_int)9LL))) {
if (((*(P485)rt_nil_check(F->s_314)).a != NULL)) {
f_fail_23((*(P485)rt_nil_check(F->s_314)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_296(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P485)rt_nil_check(F->s_314)).a == NULL)) {
f_fail_23((*(P485)rt_nil_check(F->s_314)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1026 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->s_314)).a, (*(P495)rt_nil_check(g_func_sym_537)).result, &F->vt_1025));
f_check_type_175(F->vt_1025, (*(P495)rt_nil_check(g_func_sym_537)).result, (*(P485)rt_nil_check(F->s_314)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->v_1026), rt_str(";", 1)); b_; }));
f_pop_frames_296(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  return;
}

static rstr f_exc_id_318(rstr *name_316, rt_int line_317) {
  struct f_exc_id_318fr *F = rt_alloc(sizeof *F);
F->name_316 = name_316;
F->line_317 = line_317;
F->y_1027 = NULL;
F->y_1027 = f_lookup_140(&(*F->name_316));
if (((F->y_1027 != NULL) && ((*(P495)rt_nil_check(F->y_1027)).kind == ((rt_int)7LL)))) {
F->result_ = (*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_1027)).cname));
goto ret_;
}
if (((((*F->name_316)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_316), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_316)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_317, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_316), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_guard_320(P485 s_319) {
  struct f_st_guard_320fr *F = rt_alloc(sizeof *F);
F->s_319 = s_319;
F->h_1028 = NULL;
F->h_1028 = (*(P485)rt_nil_check(F->s_319)).b;
F->first_1029 = 1;
F->hv_1030 = NULL;
{
F->f_1031 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1032 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_298(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1031), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1031), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1031), rt_str(")) {", 4)); b_; }));
f_gen_body_294((*(P485)rt_nil_check(F->s_319)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1031), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_299();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1031), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1032), rt_str(" = rt_xcur;", 11)); b_; }));
{ R498 *cell1033 = rt_alloc(sizeof(R498));
(*cell1033).s = NULL;
(*cell1033).next = NULL;
F->hv_1030 = cell1033;
}
(*(P497)rt_nil_check(F->hv_1030)).s = f_mk_3(&F->x_1032);
(*(P497)rt_nil_check(F->hv_1030)).next = g_handlers_540;
g_handlers_540 = F->hv_1030;
while ((F->h_1028 != NULL)) {
F->n_1034 = NULL;
F->n_1034 = (*(P485)rt_nil_check(F->h_1028)).a;
F->conds_1035 = NULL;
F->conds_1035 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1034 != NULL)) {
F->conds_1035 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->conds_1035)), rt_str(" || ", 4)), F->x_1032), rt_str(" == ", 4)), f_exc_id_318(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->n_1034)).name)), (*(P485)rt_nil_check(F->s_319)).line)); b_; }));
F->n_1034 = (*(P485)rt_nil_check(F->n_1034)).next;
}
if (F->first_1029) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P480)rt_nil_check(F->conds_1035))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P480)rt_nil_check(F->conds_1035))), rt_str(") {", 3)); b_; }));
}
F->first_1029 = 0;
f_gen_body_294((*(P485)rt_nil_check(F->h_1028)).b);
F->h_1028 = (*(P485)rt_nil_check(F->h_1028)).next;
}
if (F->first_1029) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P485)rt_nil_check(F->s_319)).flag == ((rt_int)1LL))) {
f_gen_body_294((*(P485)rt_nil_check(F->s_319)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1032), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_540 = (*(P497)rt_nil_check(g_handlers_540)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_alloc_322(P485 s_321) {
  struct f_st_alloc_322fr *F = rt_alloc(sizeof *F);
F->s_321 = s_321;
F->lv_1036 = NULL;
F->t_1037 = NULL;
F->target_1038 = NULL;
F->vt_1039 = NULL;
F->c_1040 = NULL;
F->tc_1041 = NULL;
F->d_1043 = NULL;
F->p_1044 = NULL;
F->a_1045 = NULL;
f_lvalue_400((*(P485)rt_nil_check(F->s_321)).a, &F->lv_1036, &F->t_1037, &F->c_1040, &F->ro_1042);
if (((*(P489)rt_nil_check(F->t_1037)).kind != ((rt_int)8LL))) {
f_fail_23((*(P485)rt_nil_check(F->s_321)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_261(F->t_1037);
F->d_1043 = (*(P489)rt_nil_check(F->t_1037)).decl;
F->target_1038 = (*(P489)rt_nil_check(F->t_1037)).target;
if ((f_list_len_54((*(P485)rt_nil_check(F->s_321)).b) != f_list_len_54((*(P485)rt_nil_check(F->d_1043)).b))) {
f_fail_23((*(P485)rt_nil_check(F->s_321)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_54((*(P485)rt_nil_check(F->d_1043)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_1046 = rt_str_copy(f_ctype_177(F->target_1038));
F->cell_1047 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1046), rt_str(" *", 2)), F->cell_1047), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1046), rt_str("));", 3)); b_; }));
f_open_scope_151();
F->p_1044 = (*(P485)rt_nil_check(F->d_1043)).b;
F->a_1045 = (*(P485)rt_nil_check(F->s_321)).b;
while ((F->p_1044 != NULL)) {
F->v_1048 = rt_str_copy(f_gexpr_421(F->a_1045, g_ty_int_544, &F->vt_1039));
F->pv_1049 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_1050 = NULL;
F->y_1050 = f_new_sym_155(((rt_int)2LL), (*(P485)rt_nil_check(F->p_1044)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_1049), rt_str(" = ", 3)), F->v_1048), rt_str(";", 1)); b_; }));
(*(P495)rt_nil_check(F->y_1050)).t = g_ty_int_544;
(*(P495)rt_nil_check(F->y_1050)).access = f_mk_3(&F->pv_1049);
f_define_145(F->y_1050, (*(P485)rt_nil_check(F->s_321)).line);
F->p_1044 = (*(P485)rt_nil_check(F->p_1044)).next;
F->a_1045 = (*(P485)rt_nil_check(F->a_1045)).next;
}
F->vt_1039 = f_resolve_subtype_188((*(P485)rt_nil_check(F->d_1043)).a, &F->tc_1041);
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1047), rt_str(")", 1)); b_; }), F->target_1038, F->tc_1041);
f_close_scope_152();
if (((*(P485)rt_nil_check(F->s_321)).c != NULL)) {
F->v_1051 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->s_321)).c, F->target_1038, &F->vt_1039));
f_check_type_175(F->vt_1039, F->target_1038, (*(P485)rt_nil_check(F->s_321)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_216(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1047), rt_str(")", 1)); b_; }), F->target_1038, &F->v_1051, F->tc_1041); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->lv_1036)), rt_str(" = ", 3)), F->cell_1047), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static rstr f_act_ref_324(P485 e_323) {
  struct f_act_ref_324fr *F = rt_alloc(sizeof *F);
F->e_323 = e_323;
F->lv_1052 = NULL;
F->t_1053 = NULL;
F->c_1054 = NULL;
if (((((*(P485)rt_nil_check(F->e_323)).kind == ((rt_int)7LL)) && rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_323)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
f_lvalue_400(F->e_323, &F->lv_1052, &F->t_1053, &F->c_1054, &F->ro_1055);
if (((*(P489)rt_nil_check(F->t_1053)).kind != ((rt_int)14LL))) {
f_fail_23((*(P485)rt_nil_check(F->e_323)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (*(P480)rt_nil_check(F->lv_1052));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_create_326(P485 s_325) {
  struct f_st_create_326fr *F = rt_alloc(sizeof *F);
F->s_325 = s_325;
F->y_1056 = NULL;
F->y_1056 = f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->s_325)).name)));
F->pm_1057 = NULL;
F->a_1058 = NULL;
F->a_1058 = (*(P485)rt_nil_check(F->s_325)).b;
F->lv_1059 = NULL;
F->lt_1060 = NULL;
F->vt_1061 = NULL;
F->lc_1062 = NULL;
if (((F->y_1056 != NULL) && ((*(P495)rt_nil_check(F->y_1056)).kind == ((rt_int)10LL)))) {
F->y_1056 = f_instantiate_379(F->y_1056, (*(P485)rt_nil_check(F->s_325)).e, (*(P485)rt_nil_check(F->s_325)).b, (*(P485)rt_nil_check(F->s_325)).line);
}
if (((F->y_1056 == NULL) || ((*(P495)rt_nil_check(F->y_1056)).kind != ((rt_int)9LL)))) {
f_fail_23((*(P485)rt_nil_check(F->s_325)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->s_325)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1057 = (*(P495)rt_nil_check(F->y_1056)).params;
{
F->at_1064 = NULL;
F->ac_1065 = NULL;
F->act_1067 = NULL;
F->nf_1068 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_400((*(P485)rt_nil_check(F->s_325)).a, &F->lv_1059, &F->at_1064, &F->ac_1065, &F->aro_1066);
if (((*(P489)rt_nil_check(F->at_1064)).kind == ((rt_int)14LL))) {
F->act_1067 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_324((*(P485)rt_nil_check(F->s_325)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_1056)).cname))), rt_str("fr *", 4)), F->nf_1068), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1068), rt_str(");", 2)); b_; }));
if (((*(P495)rt_nil_check(F->y_1056)).level > ((rt_int)0LL))) {
F->link_1069 = NULL;
F->link_1069 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1071 = ((rt_int)1LL), hi1072 = rt_sub(g_cur_level_530, (*(P495)rt_nil_check(F->y_1056)).level);
for (rt_int it1073 = lo1071; it1073 <= hi1072; it1073++) {
F->i_1070 = it1073;
F->link_1069 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check(F->link_1069)), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1068, rt_str("->up = ", 7)), (*(P480)rt_nil_check(F->link_1069))), rt_str(";", 1)); b_; }));
}
while (((F->a_1058 != NULL) && (F->pm_1057 != NULL))) {
if (((*(P493)rt_nil_check(F->pm_1057)).mode == ((rt_int)1LL))) {
F->v_1074 = rt_str_copy(f_gexpr_421(F->a_1058, (*(P493)rt_nil_check(F->pm_1057)).t, &F->vt_1061));
f_check_type_175(F->vt_1061, (*(P493)rt_nil_check(F->pm_1057)).t, (*(P485)rt_nil_check(F->s_325)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1068, rt_str("->", 2)), (*(P480)rt_nil_check((*(P493)rt_nil_check(F->pm_1057)).cfield))), rt_str(" = ", 3)), f_copy_code_219((*(P493)rt_nil_check(F->pm_1057)).t, &F->v_1074)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_400(F->a_1058, &F->lv_1059, &F->lt_1060, &F->lc_1062, &F->ro_1063);
f_check_type_175(F->lt_1060, (*(P493)rt_nil_check(F->pm_1057)).t, (*(P485)rt_nil_check(F->s_325)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1068, rt_str("->", 2)), (*(P480)rt_nil_check((*(P493)rt_nil_check(F->pm_1057)).cfield))), rt_str(" = &", 4)), (*(P480)rt_nil_check(F->lv_1059))), rt_str(";", 1)); b_; }));
}
F->a_1058 = (*(P485)rt_nil_check(F->a_1058)).next;
F->pm_1057 = (*(P493)rt_nil_check(F->pm_1057)).next;
}
if (((F->a_1058 != NULL) || (F->pm_1057 != NULL))) {
f_fail_23((*(P485)rt_nil_check(F->s_325)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->s_325)).name))); b_; }));
}
if ((F->act_1067 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (*(P480)rt_nil_check(F->act_1067))), rt_str(", &", 3)), (*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_1056)).cname))), rt_str("decl, ", 6)), (*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_1056)).cname))), rt_str(", ", 2)), F->nf_1068), rt_str("); }", 4)); b_; }));
} else {
f_user_create_336(F->s_325, F->y_1056, &(*(P480)rt_nil_check(F->lv_1059)), F->at_1064, &F->nf_1068);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  return;
}

static void f_hidden_var_330(rstr *name_327, P489 t_328, rstr *place_329) {
  struct f_hidden_var_330fr *F = rt_alloc(sizeof *F);
F->name_327 = name_327;
F->t_328 = t_328;
F->place_329 = place_329;
F->y_1075 = NULL;
F->y_1075 = f_new_sym_155(((rt_int)1LL), f_mk_3(&(*F->name_327)));
(*(P495)rt_nil_check(F->y_1075)).t = F->t_328;
(*(P495)rt_nil_check(F->y_1075)).level = ((rt_int)0LL);
(*(P495)rt_nil_check(F->y_1075)).access = f_mk_3(&(*F->place_329));
f_define_145(F->y_1075, ((rt_int)0LL));
ret_:
  return;
}

static void f_user_create_336(P485 s_331, P495 y_332, rstr *uv_333, P489 ut_334, rstr *nf_335) {
  struct f_user_create_336fr *F = rt_alloc(sizeof *F);
F->s_331 = s_331;
F->y_332 = y_332;
F->uv_333 = uv_333;
F->ut_334 = ut_334;
F->nf_335 = nf_335;
F->t_1076 = NULL;
F->saved_1077 = NULL;
F->saved_1077 = g_code_527;
F->hook_1078 = NULL;
F->hook_1078 = f_new_buffer_24();
F->un_1079 = NULL;
F->un_1079 = f_nn_48(((rt_int)7LL), (*(P485)rt_nil_check(F->s_331)).line);
F->hn_1080 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1081 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1082 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1083 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_151();
f_hidden_var_330(&F->uname_1082, F->ut_334, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->ut_334)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P485)rt_nil_check(F->un_1079)).name = f_mk_3(&F->uname_1082);
g_code_527 = F->hook_1078;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_469(f_call_node_359(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1079, (*(P485)rt_nil_check(F->s_331)).line), 1, &F->t_1076)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_469(f_call_node_359(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1079, (*(P485)rt_nil_check(F->s_331)).line), 1, &F->t_1076)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_469(f_call_node_359(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1079, (*(P485)rt_nil_check(F->s_331)).line), 1, &F->t_1076)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_469(f_call_node_359(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1079, (*(P485)rt_nil_check(F->s_331)).line), 1, &F->t_1076)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_527 = F->saved_1077;
f_put_27(g_out_protos_522, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1080), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1080), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (g_in_func_529) {
f_put_27(g_out_funcs_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P480)rt_nil_check((*(P495)rt_nil_check(g_func_sym_537)).cname))), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_524, F->hook_1078);
f_put_27(g_out_funcs_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1081), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1081, rt_str("->hook = ", 9)), F->hn_1080), rt_str("; ", 2)), F->aa_1081), rt_str("->ua = &", 8)), (*F->uv_333)), rt_str("; ", 2)), F->aa_1081), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_459(F->ut_334)), f_q_18()), rt_str(";", 1)); b_; }));
if (g_in_func_529) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1081, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1081), rt_str(", &", 3)), (*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_332)).cname))), rt_str("decl, ", 6)), (*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_332)).cname))), rt_str(", ", 2)), (*F->nf_335)), rt_str(");", 2)); b_; }));
f_hidden_var_330(&F->aname_1083, g_ty_act_554, &F->aa_1081);
{
F->start_1084 = NULL;
F->start_1084 = f_call_node_359(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P485)rt_nil_check(F->s_331)).a, (*(P485)rt_nil_check(F->s_331)).line);
F->an_1085 = NULL;
F->an_1085 = f_nn_48(((rt_int)7LL), (*(P485)rt_nil_check(F->s_331)).line);
(*(P485)rt_nil_check(F->an_1085)).name = f_mk_3(&F->aname_1083);
(*(P485)rt_nil_check((*(P485)rt_nil_check(F->start_1084)).b)).next = F->an_1085;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_469(F->start_1084, 1, &F->t_1076), rt_str(";", 1)); b_; }));
}
f_close_scope_152();
ret_:
  return;
}

static rstr f_wait_alt_341(P485 inv_337, rstr *arr_338, rt_int i_339, int mixed_340) {
  struct f_wait_alt_341fr *F = rt_alloc(sizeof *F);
F->inv_337 = inv_337;
F->arr_338 = arr_338;
F->i_339 = i_339;
F->mixed_340 = mixed_340;
F->lv_1086 = NULL;
F->t_1087 = NULL;
F->vt_1088 = NULL;
F->c_1089 = NULL;
F->fn_1091 = NULL;
F->args_1092 = NULL;
F->slot_1093 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_338), rt_str("[", 1)), f_itos_7(F->i_339)), rt_str("]", 1)));
if ((((*(P485)rt_nil_check(F->inv_337)).kind != ((rt_int)10LL)) || ((*(P485)rt_nil_check((*(P485)rt_nil_check(F->inv_337)).a)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P485)rt_nil_check(F->inv_337)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1091 = (*(P485)rt_nil_check(F->inv_337)).a;
F->args_1092 = (*(P485)rt_nil_check(F->inv_337)).b;
if ((rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1091)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1091)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_400(F->args_1092, &F->lv_1086, &F->t_1087, &F->c_1089, &F->ro_1090);
if (((*(P489)rt_nil_check(F->t_1087)).kind != ((rt_int)12LL))) {
f_fail_23((*(P485)rt_nil_check(F->inv_337)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1091)).name)), rt_str("RECEIVE", 7))) {
F->dv_1094 = NULL;
F->dt_1095 = NULL;
f_lvalue_400((*(P485)rt_nil_check(F->args_1092)).next, &F->dv_1094, &F->dt_1095, &F->c_1089, &F->ro_1090);
f_check_type_175(F->dt_1095, (*(P489)rt_nil_check(F->t_1087)).elem, (*(P485)rt_nil_check(F->inv_337)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1093, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (*(P480)rt_nil_check(F->lv_1086))), rt_str(", &", 3)), (*(P480)rt_nil_check(F->dv_1094))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1096 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1097 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->args_1092)).next, (*(P489)rt_nil_check(F->t_1087)).elem, &F->vt_1088));
f_check_type_175(F->vt_1088, (*(P489)rt_nil_check(F->t_1087)).elem, (*(P485)rt_nil_check(F->inv_337)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_177((*(P489)rt_nil_check(F->t_1087)).elem), rt_str(" ", 1)), F->tmp_1096), rt_str(" = ", 3)), F->v_1097), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1093, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (*(P480)rt_nil_check(F->lv_1086))), rt_str(", &", 3)), F->tmp_1096), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1091)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1091)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_1098 = rt_str_copy(f_gexpr_421(F->args_1092, g_ty_int_544, &F->vt_1088));
if ((rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1091)).name)), rt_str("DELAY", 5)) && F->mixed_340)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1093, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1098), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1091)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1093, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1098), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1093, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1098), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1091)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1093, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_324(F->args_1092)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P485)rt_nil_check(F->inv_337)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1091)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_builtin_wait_343(P485 inv_342) {
  struct f_builtin_wait_343fr *F = rt_alloc(sizeof *F);
F->inv_342 = inv_342;
F->lv_1099 = NULL;
F->t_1100 = NULL;
F->c_1101 = NULL;
F->saved_1103 = NULL;
F->saved_1103 = g_code_527;
F->ok_1104 = 0;
if ((((*(P485)rt_nil_check(F->inv_342)).kind != ((rt_int)10LL)) || ((*(P485)rt_nil_check((*(P485)rt_nil_check(F->inv_342)).a)).kind != ((rt_int)7LL)))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->inv_342)).a)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->inv_342)).a)).name)), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->inv_342)).a)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->inv_342)).a)).name)), rt_str("SEND", 4))) && (!rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->inv_342)).a)).name)), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_542 = rt_add(g_trial_542, ((rt_int)1LL));
g_code_527 = f_new_buffer_24();
{ rt_frame xf1105;
if (RT_TRY(xf1105)) {
f_lvalue_400((*(P485)rt_nil_check(F->inv_342)).b, &F->lv_1099, &F->t_1100, &F->c_1101, &F->ro_1102);
F->ok_1104 = ((*(P489)rt_nil_check(F->t_1100)).kind == ((rt_int)12LL));
RT_POP(xf1105);
} else {
RT_POP(xf1105);
int x1106 = rt_xcur;
if (0 || x1106 == ex_compile_error_1) {
F->ok_1104 = 0;
} else {
rt_raise(x1106);
}
}
}
g_trial_542 = rt_sub(g_trial_542, ((rt_int)1LL));
g_code_527 = F->saved_1103;
F->result_ = F->ok_1104;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_wait_op_348(P485 inv_344, rstr *op_345, rstr *q_346, int is_stmt_347) {
  struct f_wait_op_348fr *F = rt_alloc(sizeof *F);
F->inv_344 = inv_344;
F->op_345 = op_345;
F->q_346 = q_346;
F->is_stmt_347 = is_stmt_347;
F->x_1107 = NULL;
F->x_1107 = f_nn_48(((rt_int)10LL), (*(P485)rt_nil_check(F->inv_344)).line);
F->f_1108 = NULL;
F->f_1108 = f_nn_48(((rt_int)7LL), (*(P485)rt_nil_check(F->inv_344)).line);
F->qn_1109 = NULL;
F->qn_1109 = f_nn_48(((rt_int)7LL), (*(P485)rt_nil_check(F->inv_344)).line);
F->t_1110 = NULL;
(*(P485)rt_nil_check(F->f_1108)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->inv_344)).a)).name)), rt_str("_", 1)), (*F->op_345)); b_; }));
(*(P485)rt_nil_check(F->qn_1109)).name = f_mk_3(&(*F->q_346));
(*(P485)rt_nil_check(F->qn_1109)).next = (*(P485)rt_nil_check(F->inv_344)).b;
(*(P485)rt_nil_check(F->x_1107)).a = F->f_1108;
(*(P485)rt_nil_check(F->x_1107)).b = F->qn_1109;
{
F->r_1111 = rt_str_copy(f_gcall_469(F->x_1107, F->is_stmt_347, &F->t_1110));
if ((!F->is_stmt_347)) {
f_check_type_175(F->t_1110, g_ty_bool_545, (*(P485)rt_nil_check(F->inv_344)).line);
}
F->result_ = F->r_1111;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_user_wait_353(P485 s_349, rstr *arr_350, rstr *w_351, rt_int n_352) {
  struct f_user_wait_353fr *F = rt_alloc(sizeof *F);
F->s_349 = s_349;
F->arr_350 = arr_350;
F->w_351 = w_351;
F->n_352 = n_352;
F->a_1112 = NULL;
F->a_1112 = (*(P485)rt_nil_check(F->s_349)).a;
F->i_1113 = ((rt_int)0LL);
F->tests_1114 = NULL;
F->tests_1114 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1115 = NULL;
F->revokes_1115 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_151();
while ((F->a_1112 != NULL)) {
F->inv_1116 = NULL;
F->inv_1116 = (*(P485)rt_nil_check(F->a_1112)).a;
while ((F->inv_1116 != NULL)) {
if (f_builtin_wait_343(F->inv_1116)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_341(F->inv_1116, &(*F->arr_350), F->i_1113, 1); b_; }));
} else {
F->st_1117 = NULL;
F->st_1117 = f_nn_48(((rt_int)80LL), (*(P485)rt_nil_check(F->inv_1116)).line);
F->c_1118 = NULL;
F->qt_1119 = NULL;
F->qname_1120 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1121 = NULL;
F->y_1121 = f_new_sym_155(((rt_int)1LL), f_mk_3(&F->qname_1120));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_350), rt_str("[", 1)), f_itos_7(F->i_1113)), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P485)rt_nil_check(F->st_1117)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->inv_1116)).a)).name)), rt_str("_ST", 3)); b_; }));
F->qt_1119 = f_resolve_subtype_188(F->st_1117, &F->c_1118);
{
F->access_1122 = rt_str_copy(f_storage_270(&F->qname_1120, F->qt_1119));
f_init_storage_204(&F->access_1122, F->qt_1119, F->c_1118);
(*(P495)rt_nil_check(F->y_1121)).t = F->qt_1119;
(*(P495)rt_nil_check(F->y_1121)).c = F->c_1118;
f_bind_273(F->y_1121, &F->access_1122);
f_define_145(F->y_1121, (*(P485)rt_nil_check(F->inv_1116)).line);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_348(F->inv_1116, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1120, 1), rt_str(";", 1)); b_; }));
F->tests_1114 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->tests_1114)), rt_str("if (", 4)), f_wait_op_348(F->inv_1116, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1120, 0)), rt_str(") { ", 4)), f_wait_op_348(F->inv_1116, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1120, 1)), rt_str("; ", 2)), (*F->w_351)), rt_str(" = ", 3)), f_itos_7(F->i_1113)), rt_str("; break; } ", 11)); b_; }));
F->revokes_1115 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->revokes_1115)), f_wait_op_348(F->inv_1116, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1120, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1113 = rt_add(F->i_1113, ((rt_int)1LL));
F->inv_1116 = (*(P485)rt_nil_check(F->inv_1116)).next;
}
F->a_1112 = (*(P485)rt_nil_check(F->a_1112)).next;
}
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_351)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (*(P480)rt_nil_check(F->tests_1114))); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_351), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_352)), rt_str(", ", 2)), (*F->arr_350)), rt_str("); if (", 7)), (*F->w_351)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_352)), rt_str(", ", 2)), (*F->arr_350)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_351)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_351)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(*(P480)rt_nil_check(F->revokes_1115)));
ret_:
  return;
}

static void f_st_wait_355(P485 s_354) {
  struct f_st_wait_355fr *F = rt_alloc(sizeof *F);
F->s_354 = s_354;
F->a_1123 = NULL;
F->a_1123 = (*(P485)rt_nil_check(F->s_354)).a;
F->n_1124 = ((rt_int)0LL);
F->first_1125 = 1;
F->inits_1126 = NULL;
F->inits_1126 = f_new_buffer_24();
F->user_1127 = 0;
F->arr_1128 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1129 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1123 != NULL)) {
F->inv_1130 = NULL;
F->inv_1130 = (*(P485)rt_nil_check(F->a_1123)).a;
F->n_1124 = rt_add(F->n_1124, f_list_len_54((*(P485)rt_nil_check(F->a_1123)).a));
while ((F->inv_1130 != NULL)) {
if ((!f_builtin_wait_343(F->inv_1130))) {
F->user_1127 = 1;
}
F->inv_1130 = (*(P485)rt_nil_check(F->inv_1130)).next;
}
F->a_1123 = (*(P485)rt_nil_check(F->a_1123)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1128), rt_str("[", 1)), f_itos_7(F->n_1124)), rt_str("];", 2)); b_; }));
if (F->user_1127) {
f_user_wait_353(F->s_354, &F->arr_1128, &F->w_1129, F->n_1124);
} else {
F->a_1123 = (*(P485)rt_nil_check(F->s_354)).a;
F->n_1124 = ((rt_int)0LL);
while ((F->a_1123 != NULL)) {
F->inv_1131 = NULL;
F->inv_1131 = (*(P485)rt_nil_check(F->a_1123)).a;
while ((F->inv_1131 != NULL)) {
f_put_27(F->inits_1126, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_341(F->inv_1131, &F->arr_1128, F->n_1124, 0); b_; }));
F->n_1124 = rt_add(F->n_1124, ((rt_int)1LL));
F->inv_1131 = (*(P485)rt_nil_check(F->inv_1131)).next;
}
F->a_1123 = (*(P485)rt_nil_check(F->a_1123)).next;
}
f_splice_34(g_code_527, F->inits_1126);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1129), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_1124)), rt_str(", ", 2)), F->arr_1128), rt_str(");", 2)); b_; }));
}
F->a_1123 = (*(P485)rt_nil_check(F->s_354)).a;
F->n_1124 = ((rt_int)0LL);
while ((F->a_1123 != NULL)) {
F->conds_1132 = NULL;
F->conds_1132 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1134 = ((rt_int)1LL), hi1135 = f_list_len_54((*(P485)rt_nil_check(F->a_1123)).a);
for (rt_int it1136 = lo1134; it1136 <= hi1135; it1136++) {
F->i_1133 = it1136;
F->conds_1132 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->conds_1132)), rt_str(" || ", 4)), F->w_1129), rt_str(" == ", 4)), f_itos_7(F->n_1124)); b_; }));
F->n_1124 = rt_add(F->n_1124, ((rt_int)1LL));
}
}
if (F->first_1125) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P480)rt_nil_check(F->conds_1132))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P480)rt_nil_check(F->conds_1132))), rt_str(") {", 3)); b_; }));
}
F->first_1125 = 0;
f_gen_body_294((*(P485)rt_nil_check(F->a_1123)).b);
F->a_1123 = (*(P485)rt_nil_check(F->a_1123)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static P485 f_call_node_359(rstr *name_356, P485 arg_357, rt_int line_358) {
  struct f_call_node_359fr *F = rt_alloc(sizeof *F);
F->name_356 = name_356;
F->arg_357 = arg_357;
F->line_358 = line_358;
F->x_1137 = NULL;
F->x_1137 = f_nn_48(((rt_int)10LL), F->line_358);
F->f_1138 = NULL;
F->f_1138 = f_nn_48(((rt_int)7LL), F->line_358);
(*(P485)rt_nil_check(F->f_1138)).name = f_mk_3(&(*F->name_356));
(*(P485)rt_nil_check(F->x_1137)).a = F->f_1138;
(*(P485)rt_nil_check(F->x_1137)).b = f_copy_node_423(F->arg_357);
(*(P485)rt_nil_check((*(P485)rt_nil_check(F->x_1137)).b)).next = NULL;
F->result_ = F->x_1137;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_user_region_361(P485 s_360) {
  struct f_user_region_361fr *F = rt_alloc(sizeof *F);
F->s_360 = s_360;
F->t_1139 = NULL;
F->f_1140 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1141 = rt_str_copy(f_gcall_469(f_call_node_359(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P485)rt_nil_check(F->s_360)).a, (*(P485)rt_nil_check(F->s_360)).line), 1, &F->t_1139));
F->unlock_1142 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_469(f_call_node_359(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P485)rt_nil_check(F->s_360)).a, (*(P485)rt_nil_check(F->s_360)).line), 1, &F->t_1139)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1141), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1140), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1140), rt_str(")) {", 4)); b_; }));
f_push_cleanup_298(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1140), rt_str("); ", 3)), F->unlock_1142); b_; }));
f_gen_body_294((*(P485)rt_nil_check(F->s_360)).b);
f_pop_cleanup_299();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1140), rt_str("); ", 3)), F->unlock_1142); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1140), rt_str("); ", 3)), F->unlock_1142), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_region_363(P485 s_362) {
  struct f_st_region_363fr *F = rt_alloc(sizeof *F);
F->s_362 = s_362;
F->lv_1143 = NULL;
F->t_1144 = NULL;
F->c_1145 = NULL;
F->lk_1147 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1148 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_400((*(P485)rt_nil_check(F->s_362)).a, &F->lv_1143, &F->t_1144, &F->c_1145, &F->ro_1146);
if (((*(P489)rt_nil_check(F->t_1144)).kind != ((rt_int)13LL))) {
f_user_region_361(F->s_362);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1147), rt_str(" = &", 4)), (*(P480)rt_nil_check(F->lv_1143))), rt_str("; rt_region_enter(", 18)), F->lk_1147), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1148), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1148), rt_str(")) {", 4)); b_; }));
f_push_cleanup_298(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1148), rt_str("); rt_region_leave(", 19)), F->lk_1147), rt_str(");", 2)); b_; }));
f_gen_body_294((*(P485)rt_nil_check(F->s_362)).b);
f_pop_cleanup_299();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1148), rt_str("); rt_region_leave(", 19)), F->lk_1147), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1148), rt_str("); rt_region_leave(", 19)), F->lk_1147), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static P485 f_gparam_366(P485 g_364, rstr *name_365) {
  struct f_gparam_366fr *F = rt_alloc(sizeof *F);
F->g_364 = g_364;
F->name_365 = name_365;
F->p_1149 = NULL;
F->p_1149 = (*(P485)rt_nil_check(F->g_364)).a;
while ((F->p_1149 != NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_1149)).name)), (*F->name_365))) {
F->result_ = F->p_1149;
goto ret_;
}
F->p_1149 = (*(P485)rt_nil_check(F->p_1149)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P495 f_bind_sym_368(P485 p_367) {
  struct f_bind_sym_368fr *F = rt_alloc(sizeof *F);
F->p_367 = p_367;
F->y_1150 = NULL;
if (((*(P485)rt_nil_check(F->p_367)).ival <= ((rt_int)2LL))) {
F->y_1150 = f_new_sym_155(((rt_int)5LL), (*(P485)rt_nil_check(F->p_367)).name);
} else {
F->y_1150 = f_new_sym_155(((rt_int)2LL), (*(P485)rt_nil_check(F->p_367)).name);
}
F->result_ = F->y_1150;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binds_371(P495 a_369, P495 b_370) {
  struct f_same_binds_371fr *F = rt_alloc(sizeof *F);
F->a_369 = a_369;
F->b_370 = b_370;
F->x_1151 = NULL;
F->x_1151 = F->a_369;
F->y_1152 = NULL;
F->y_1152 = F->b_370;
while (((F->x_1151 != NULL) && (F->y_1152 != NULL))) {
if (((!rt_str_eq((*(P480)rt_nil_check((*(P495)rt_nil_check(F->x_1151)).name)), (*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_1152)).name)))) || (!f_same_binding_374(F->x_1151, F->y_1152)))) {
F->result_ = 0;
goto ret_;
}
F->x_1151 = (*(P495)rt_nil_check(F->x_1151)).mnext;
F->y_1152 = (*(P495)rt_nil_check(F->y_1152)).mnext;
}
F->result_ = ((F->x_1151 == NULL) && (F->y_1152 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binding_374(P495 a_372, P495 b_373) {
  struct f_same_binding_374fr *F = rt_alloc(sizeof *F);
F->a_372 = a_372;
F->b_373 = b_373;
if (((*(P495)rt_nil_check(F->a_372)).kind == ((rt_int)5LL))) {
F->result_ = (((*(P495)rt_nil_check(F->b_373)).kind == ((rt_int)5LL)) && f_same_164((*(P495)rt_nil_check(F->a_372)).t, (*(P495)rt_nil_check(F->b_373)).t));
goto ret_;
}
if ((((*(P495)rt_nil_check(F->a_372)).kind == ((rt_int)2LL)) && (*(P495)rt_nil_check(F->a_372)).hasmv)) {
F->result_ = ((*(P495)rt_nil_check(F->b_373)).hasmv && ((*(P495)rt_nil_check(F->a_372)).mvalue == (*(P495)rt_nil_check(F->b_373)).mvalue));
goto ret_;
}
F->result_ = ((((*(P495)rt_nil_check(F->a_372)).cname != NULL) && ((*(P495)rt_nil_check(F->b_373)).cname != NULL)) && rt_str_eq((*(P480)rt_nil_check((*(P495)rt_nil_check(F->a_372)).cname)), (*(P480)rt_nil_check((*(P495)rt_nil_check(F->b_373)).cname))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P495 f_instantiate_379(P495 g_375, P485 tt_376, P485 args_377, rt_int line_378) {
  struct f_instantiate_379fr *F = rt_alloc(sizeof *F);
F->g_375 = g_375;
F->tt_376 = tt_376;
F->args_377 = args_377;
F->line_378 = line_378;
F->gd_1153 = NULL;
F->gd_1153 = (*(P495)rt_nil_check(F->g_375)).decl;
F->pat_1154 = NULL;
F->pat_1154 = (*(P485)rt_nil_check(F->gd_1153)).b;
F->binds_1155 = NULL;
F->f_1156 = NULL;
F->f_1156 = (*(P485)rt_nil_check(F->pat_1154)).e;
F->a_1157 = NULL;
F->a_1157 = F->tt_376;
F->fp_1158 = NULL;
F->fp_1158 = (*(P485)rt_nil_check(F->pat_1154)).a;
F->inst_1159 = NULL;
F->at_1160 = NULL;
F->c_1161 = NULL;
F->saved_fctx_1162 = NULL;
F->saved_fctx_1162 = g_fctx_531;
F->saved_in_1163 = g_in_func_529;
F->saved_level_1164 = g_cur_level_530;
F->saved_sym_1165 = NULL;
F->saved_sym_1165 = g_func_sym_537;
F->saved_code_1166 = NULL;
F->saved_code_1166 = g_code_527;
while (((F->f_1156 != NULL) && (F->a_1157 != NULL))) {
F->p_1167 = NULL;
F->p_1167 = f_gparam_366(F->gd_1153, &(*(P480)rt_nil_check((*(P485)rt_nil_check(F->f_1156)).name)));
F->b_1168 = NULL;
if ((F->p_1167 == NULL)) {
f_fail_23(F->line_378, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->f_1156)).name)), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1168 = f_bind_sym_368(F->p_1167);
if (((*(P485)rt_nil_check(F->p_1167)).ival <= ((rt_int)2LL))) {
if (((*(P485)rt_nil_check(F->a_1157)).kind >= ((rt_int)70LL))) {
(*(P495)rt_nil_check(F->b_1168)).t = f_resolve_subtype_188(F->a_1157, &F->c_1161);
} else {
F->st_1169 = NULL;
F->st_1169 = f_nn_48(((rt_int)80LL), F->line_378);
(*(P485)rt_nil_check(F->st_1169)).name = (*(P485)rt_nil_check(F->a_1157)).name;
(*(P495)rt_nil_check(F->b_1168)).t = f_resolve_subtype_188(F->st_1169, &F->c_1161);
}
(*(P495)rt_nil_check(F->b_1168)).c = F->c_1161;
} else if (((*(P485)rt_nil_check(F->p_1167)).ival <= ((rt_int)5LL))) {
if ((((*(P485)rt_nil_check(F->a_1157)).kind != ((rt_int)7LL)) || (f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->a_1157)).name))) == NULL))) {
f_fail_23(F->line_378, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_1167)).name))); b_; }));
}
F->b_1168 = f_copy_sym_243(f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->a_1157)).name))));
(*(P495)rt_nil_check(F->b_1168)).name = (*(P485)rt_nil_check(F->p_1167)).name;
} else {
(*(P495)rt_nil_check(F->b_1168)).t = f_resolve_subtype_188((*(P485)rt_nil_check(F->p_1167)).a, &F->c_1161);
(*(P495)rt_nil_check(F->b_1168)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_421(F->a_1157, (*(P495)rt_nil_check(F->b_1168)).t, &F->at_1160); b_; }));
(*(P495)rt_nil_check(F->b_1168)).mvalue = f_manifest_207(F->a_1157, &F->ok_1170);
(*(P495)rt_nil_check(F->b_1168)).hasmv = F->ok_1170;
}
(*(P495)rt_nil_check(F->b_1168)).mnext = F->binds_1155;
F->binds_1155 = F->b_1168;
F->f_1156 = (*(P485)rt_nil_check(F->f_1156)).next;
F->a_1157 = (*(P485)rt_nil_check(F->a_1157)).next;
}
F->a_1157 = F->args_377;
while (((F->fp_1158 != NULL) && (F->a_1157 != NULL))) {
if (((((*(P485)rt_nil_check((*(P485)rt_nil_check(F->fp_1158)).a)).kind == ((rt_int)80LL)) && (f_gparam_366(F->gd_1153, &(*(P480)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->fp_1158)).a)).name))) != NULL)) && ((*(P485)rt_nil_check(f_gparam_366(F->gd_1153, &(*(P480)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->fp_1158)).a)).name))))).ival <= ((rt_int)2LL)))) {
F->known_1171 = 0;
F->q_1172 = NULL;
F->q_1172 = F->binds_1155;
while ((F->q_1172 != NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P495)rt_nil_check(F->q_1172)).name)), (*(P480)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->fp_1158)).a)).name)))) {
F->known_1171 = 1;
}
F->q_1172 = (*(P495)rt_nil_check(F->q_1172)).mnext;
}
if ((!F->known_1171)) {
F->b_1173 = NULL;
F->b_1173 = f_bind_sym_368(f_gparam_366(F->gd_1153, &(*(P480)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->fp_1158)).a)).name))));
F->v_1174 = rt_str_copy(f_gexpr_421(F->a_1157, NULL, &F->at_1160));
(*(P495)rt_nil_check(F->b_1173)).t = F->at_1160;
(*(P495)rt_nil_check(F->b_1173)).c = g_no_cons_555;
(*(P495)rt_nil_check(F->b_1173)).mnext = F->binds_1155;
F->binds_1155 = F->b_1173;
}
}
F->fp_1158 = (*(P485)rt_nil_check(F->fp_1158)).next;
F->a_1157 = (*(P485)rt_nil_check(F->a_1157)).next;
}
F->inst_1159 = (*(P495)rt_nil_check(F->g_375)).insts;
while ((F->inst_1159 != NULL)) {
if (f_same_binds_371((*(P495)rt_nil_check(F->inst_1159)).members, F->binds_1155)) {
F->result_ = F->inst_1159;
goto ret_;
}
F->inst_1159 = (*(P495)rt_nil_check(F->inst_1159)).insts;
}
g_fctx_531 = NULL;
g_in_func_529 = 0;
g_cur_level_530 = ((rt_int)0LL);
g_func_sym_537 = NULL;
g_code_527 = f_new_buffer_24();
f_open_scope_151();
{
F->b_1175 = NULL;
F->b_1175 = F->binds_1155;
while ((F->b_1175 != NULL)) {
f_define_145(F->b_1175, F->line_378);
F->b_1175 = (*(P495)rt_nil_check(F->b_1175)).mnext;
}
}
F->inst_1159 = f_build_subprogram_265(F->pat_1154);
(*(P495)rt_nil_check(F->inst_1159)).members = F->binds_1155;
(*(P495)rt_nil_check(F->inst_1159)).insts = (*(P495)rt_nil_check(F->g_375)).insts;
(*(P495)rt_nil_check(F->g_375)).insts = F->inst_1159;
f_define_145(F->inst_1159, F->line_378);
f_gen_subprogram_282(F->pat_1154, F->inst_1159);
f_close_scope_152();
g_fctx_531 = F->saved_fctx_1162;
g_in_func_529 = F->saved_in_1163;
g_cur_level_530 = F->saved_level_1164;
g_func_sym_537 = F->saved_sym_1165;
g_code_527 = F->saved_code_1166;
F->result_ = F->inst_1159;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_access_of_381(P495 y_380) {
  struct f_access_of_381fr *F = rt_alloc(sizeof *F);
F->y_380 = y_380;
F->p_1176 = NULL;
F->p_1176 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P495)rt_nil_check(F->y_380)).level <= ((rt_int)0LL))) {
F->result_ = (*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_380)).access));
goto ret_;
}
{ rt_int lo1178 = ((rt_int)1LL), hi1179 = rt_sub(g_cur_level_530, (*(P495)rt_nil_check(F->y_380)).level);
for (rt_int it1180 = lo1178; it1180 <= hi1179; it1180++) {
F->i_1177 = it1180;
F->p_1176 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check(F->p_1176)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P495)rt_nil_check(F->y_380)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P480)rt_nil_check(F->p_1176))), rt_str("->", 2)), (*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_380)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->p_1176)), rt_str("->", 2)), (*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_380)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_import_of_384(P485 l_382, rstr *name_383) {
  struct f_import_of_384fr *F = rt_alloc(sizeof *F);
F->l_382 = l_382;
F->name_383 = name_383;
F->p_1181 = NULL;
F->p_1181 = F->l_382;
while ((F->p_1181 != NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_1181)).name)), (*F->name_383))) {
F->result_ = F->p_1181;
goto ret_;
}
F->p_1181 = (*(P485)rt_nil_check(F->p_1181)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_check_import_387(P495 y_385, rt_int line_386) {
  struct f_check_import_387fr *F = rt_alloc(sizeof *F);
F->y_385 = y_385;
F->line_386 = line_386;
F->c_1182 = NULL;
F->c_1182 = g_fctx_531;
F->ro_1183 = 0;
while (((F->c_1182 != NULL) && ((*(P495)rt_nil_check(F->y_385)).depth < (*(P509)rt_nil_check(F->c_1182)).depth))) {
if ((!(*(P509)rt_nil_check(F->c_1182)).all_imp)) {
F->imp_1184 = NULL;
F->imp_1184 = f_import_of_384((*(P509)rt_nil_check(F->c_1182)).imps, &(*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_385)).name)));
if ((F->imp_1184 == NULL)) {
f_fail_23(F->line_386, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_385)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P485)rt_nil_check(F->imp_1184)).ival == ((rt_int)1LL))) {
F->ro_1183 = 1;
}
}
F->c_1182 = (*(P509)rt_nil_check(F->c_1182)).next;
}
F->result_ = F->ro_1183;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_ident_389(rstr *s_388) {
  struct f_c_ident_389fr *F = rt_alloc(sizeof *F);
F->s_388 = s_388;
if (rt_str_eq((*F->s_388), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_388), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_388), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_388), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_388), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_388), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_388), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_388), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_388), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_388), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_388), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_388), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_388), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_388), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_388));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_deref_392(rstr *base_390, P489 t_391) {
  struct f_deref_392fr *F = rt_alloc(sizeof *F);
F->base_390 = base_390;
F->t_391 = t_391;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->t_391)), rt_str(")rt_nil_check(", 14)), (*F->base_390)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_lvalue_394(P485 e_393) {
  struct f_is_lvalue_394fr *F = rt_alloc(sizeof *F);
F->e_393 = e_393;
if (((*(P485)rt_nil_check(F->e_393)).kind == ((rt_int)7LL))) {
F->y_1185 = NULL;
F->y_1185 = f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_393)).name)));
F->result_ = ((F->y_1185 != NULL) && (((*(P495)rt_nil_check(F->y_1185)).kind == ((rt_int)1LL)) || ((*(P495)rt_nil_check(F->y_1185)).kind == ((rt_int)2LL))));
goto ret_;
} else if (((*(P485)rt_nil_check(F->e_393)).kind == ((rt_int)17LL))) {
F->result_ = f_is_lvalue_394((*(P485)rt_nil_check(F->e_393)).a);
goto ret_;
} else if (((*(P485)rt_nil_check(F->e_393)).kind == ((rt_int)11LL))) {
F->result_ = ((!rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_393)).name)), rt_str("LEN", 3))) && f_is_lvalue_394((*(P485)rt_nil_check(F->e_393)).a));
goto ret_;
} else if (((*(P485)rt_nil_check(F->e_393)).kind == ((rt_int)10LL))) {
if ((((*(P485)rt_nil_check(F->e_393)).b != NULL) && ((*(P485)rt_nil_check((*(P485)rt_nil_check(F->e_393)).b)).kind == ((rt_int)16LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_394((*(P485)rt_nil_check(F->e_393)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_lvalue_400(P485 e_395, P480 *code_396, P489 *t_397, P487 *c_398, int *ro_399) {
  struct f_lvalue_400fr *F = rt_alloc(sizeof *F);
F->e_395 = e_395;
F->code_396 = code_396;
F->code_396v = *F->code_396;
F->t_397 = t_397;
F->t_397v = *F->t_397;
F->c_398 = c_398;
F->c_398v = *F->c_398;
F->ro_399 = ro_399;
F->ro_399v = *F->ro_399;
F->base_1186 = NULL;
F->bt_1187 = NULL;
F->bc_1188 = NULL;
if (((*(P485)rt_nil_check(F->e_395)).kind == ((rt_int)7LL))) {
F->y_1189 = NULL;
F->y_1189 = f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_395)).name)));
if ((F->y_1189 == NULL)) {
f_fail_23((*(P485)rt_nil_check(F->e_395)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_395)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P495)rt_nil_check(F->y_1189)).kind != ((rt_int)1LL)) && ((*(P495)rt_nil_check(F->y_1189)).kind != ((rt_int)2LL)))) {
f_fail_23((*(P485)rt_nil_check(F->e_395)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_395)).name)), rt_str(" is not a variable", 18)); b_; }));
}
F->code_396v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_381(F->y_1189); b_; }));
F->t_397v = (*(P495)rt_nil_check(F->y_1189)).t;
F->c_398v = (*(P495)rt_nil_check(F->y_1189)).c;
F->ro_399v = (*(P495)rt_nil_check(F->y_1189)).ro_flag;
if ((((*(P495)rt_nil_check(F->y_1189)).kind == ((rt_int)1LL)) && f_check_import_387(F->y_1189, (*(P485)rt_nil_check(F->e_395)).line))) {
F->ro_399v = 1;
}
} else if (((*(P485)rt_nil_check(F->e_395)).kind == ((rt_int)17LL))) {
f_lvalue_400((*(P485)rt_nil_check(F->e_395)).a, &F->code_396v, &F->t_397v, &F->c_398v, &F->ro_399v);
} else if ((((((*(P485)rt_nil_check(F->e_395)).kind == ((rt_int)12LL)) && ((*(P485)rt_nil_check((*(P485)rt_nil_check(F->e_395)).a)).kind == ((rt_int)7LL))) && rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->e_395)).a)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_396v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_457((*(P485)rt_nil_check(F->e_395)).b, (*(P485)rt_nil_check(F->e_395)).line, &F->t_397v); b_; }));
F->c_398v = g_no_cons_555;
F->ro_399v = 0;
} else if (((*(P485)rt_nil_check(F->e_395)).kind == ((rt_int)11LL))) {
f_lvalue_400((*(P485)rt_nil_check(F->e_395)).a, &F->base_1186, &F->bt_1187, &F->bc_1188, &F->ro_399v);
f_select_on_408(&(*(P480)rt_nil_check(F->base_1186)), F->bt_1187, F->e_395, &F->ro_399v, &F->code_396v, &F->t_397v, &F->c_398v);
} else if (((*(P485)rt_nil_check(F->e_395)).kind == ((rt_int)10LL))) {
f_lvalue_400((*(P485)rt_nil_check(F->e_395)).a, &F->base_1186, &F->bt_1187, &F->bc_1188, &F->ro_399v);
f_index_on_417(&(*(P480)rt_nil_check(F->base_1186)), F->bt_1187, F->e_395, &F->ro_399v, 1, &F->code_396v, &F->t_397v, &F->c_398v);
} else {
f_fail_23((*(P485)rt_nil_check(F->e_395)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_396) = F->code_396v;  (*F->t_397) = F->t_397v;  (*F->c_398) = F->c_398v;  (*F->ro_399) = F->ro_399v;
  return;
}

static void f_select_on_408(rstr *base_401, P489 bt_402, P485 e_403, int *ro_404, P480 *code_405, P489 *t_406, P487 *c_407) {
  struct f_select_on_408fr *F = rt_alloc(sizeof *F);
F->base_401 = base_401;
F->bt_402 = bt_402;
F->e_403 = e_403;
F->ro_404 = ro_404;
F->code_405 = code_405;
F->code_405v = *F->code_405;
F->t_406 = t_406;
F->t_406v = *F->t_406;
F->c_407 = c_407;
F->c_407v = *F->c_407;
F->c_407v = g_no_cons_555;
if (((*(P489)rt_nil_check(F->bt_402)).kind == ((rt_int)8LL))) {
f_finish_ptr_261(F->bt_402);
(*F->ro_404) = 0;
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_403)).name)), rt_str("ALL", 3))) {
F->code_405v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_392(&(*F->base_401), F->bt_402); b_; }));
F->t_406v = (*(P489)rt_nil_check(F->bt_402)).target;
goto ret_;
}
f_select_on_408(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_392(&(*F->base_401), F->bt_402); b_; }), (*(P489)rt_nil_check(F->bt_402)).target, F->e_403, &(*F->ro_404), &F->code_405v, &F->t_406v, &F->c_407v);
goto ret_;
}
if (((*(P489)rt_nil_check(F->bt_402)).kind == ((rt_int)15LL))) {
F->p_1190 = NULL;
F->p_1190 = (*(P489)rt_nil_check(F->bt_402)).tparams;
if ((!f_opened_190(F->bt_402))) {
f_fail_23((*(P485)rt_nil_check(F->e_403)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->bt_402)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P489)rt_nil_check(F->bt_402)).tparams == NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_403)).name)), rt_str("ALL", 3))) {
F->code_405v = f_mk_3(&(*F->base_401));
F->t_406v = (*(P489)rt_nil_check(F->bt_402)).under;
goto ret_;
}
f_select_on_408(&(*F->base_401), (*(P489)rt_nil_check(F->bt_402)).under, F->e_403, &(*F->ro_404), &F->code_405v, &F->t_406v, &F->c_407v);
goto ret_;
}
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_403)).name)), rt_str("ALL", 3))) {
F->code_405v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_401), rt_str(".all", 4)); b_; }));
F->t_406v = (*(P489)rt_nil_check(F->bt_402)).under;
goto ret_;
}
while ((F->p_1190 != NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_1190)).name)), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_403)).name)))) {
F->code_405v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_401), rt_str(".p_", 3)), f_lower_s_15(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->p_1190)).name)))); b_; }));
F->t_406v = g_ty_int_544;
(*F->ro_404) = 1;
goto ret_;
}
F->p_1190 = (*(P485)rt_nil_check(F->p_1190)).next;
}
f_select_on_408(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_401), rt_str(".all", 4)); b_; }), (*(P489)rt_nil_check(F->bt_402)).under, F->e_403, &(*F->ro_404), &F->code_405v, &F->t_406v, &F->c_407v);
goto ret_;
}
if (((*(P489)rt_nil_check(F->bt_402)).kind == ((rt_int)7LL))) {
F->f_1191 = NULL;
F->f_1191 = (*(P489)rt_nil_check(F->bt_402)).fields;
while ((F->f_1191 != NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P491)rt_nil_check(F->f_1191)).name)), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_403)).name)))) {
F->c_407v = (*(P491)rt_nil_check(F->f_1191)).c;
F->code_405v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_401), rt_str(".", 1)), f_field_c_17(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_403)).name)))); b_; }));
F->t_406v = (*(P491)rt_nil_check(F->f_1191)).t;
goto ret_;
}
F->f_1191 = (*(P491)rt_nil_check(F->f_1191)).next;
}
f_fail_23((*(P485)rt_nil_check(F->e_403)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_403)).name))); b_; }));
}
f_fail_23((*(P485)rt_nil_check(F->e_403)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_403)).name))), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_405) = F->code_405v;  (*F->t_406) = F->t_406v;  (*F->c_407) = F->c_407v;
  return;
}

static void f_index_on_417(rstr *base_409, P489 bt_410, P485 e_411, int *ro_412, int lv_413, P480 *code_414, P489 *t_415, P487 *c_416) {
  struct f_index_on_417fr *F = rt_alloc(sizeof *F);
F->base_409 = base_409;
F->bt_410 = bt_410;
F->e_411 = e_411;
F->ro_412 = ro_412;
F->lv_413 = lv_413;
F->code_414 = code_414;
F->code_414v = *F->code_414;
F->t_415 = t_415;
F->t_415v = *F->t_415;
F->c_416 = c_416;
F->c_416v = *F->c_416;
F->a_1192 = NULL;
F->a_1192 = (*(P485)rt_nil_check(F->e_411)).b;
F->it_1193 = NULL;
F->c_416v = g_no_cons_555;
if (((*(P489)rt_nil_check(F->bt_410)).kind == ((rt_int)8LL))) {
f_finish_ptr_261(F->bt_410);
(*F->ro_412) = 0;
f_index_on_417(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_392(&(*F->base_409), F->bt_410); b_; }), (*(P489)rt_nil_check(F->bt_410)).target, F->e_411, &(*F->ro_412), F->lv_413, &F->code_414v, &F->t_415v, &F->c_416v);
goto ret_;
}
if (((*(P489)rt_nil_check(F->bt_410)).kind == ((rt_int)15LL))) {
if ((!f_opened_190(F->bt_410))) {
f_fail_23((*(P485)rt_nil_check(F->e_411)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->bt_410)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P489)rt_nil_check(F->bt_410)).tparams == NULL)) {
f_index_on_417(&(*F->base_409), (*(P489)rt_nil_check(F->bt_410)).under, F->e_411, &(*F->ro_412), F->lv_413, &F->code_414v, &F->t_415v, &F->c_416v);
} else {
f_index_on_417(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_409), rt_str(".all", 4)); b_; }), (*(P489)rt_nil_check(F->bt_410)).under, F->e_411, &(*F->ro_412), F->lv_413, &F->code_414v, &F->t_415v, &F->c_416v);
}
goto ret_;
}
if ((((*(P489)rt_nil_check(F->bt_410)).kind == ((rt_int)6LL)) && ((*(P489)rt_nil_check(F->bt_410)).idx2 != NULL))) {
if ((f_list_len_54(F->a_1192) != ((rt_int)2LL))) {
f_fail_23((*(P485)rt_nil_check(F->e_411)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("two subscripts expected", 23); b_; }));
}
{
F->i_1194 = rt_str_copy(f_gexpr_421(F->a_1192, (*(P489)rt_nil_check(F->bt_410)).idx, &F->it_1193));
F->j_1195 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->a_1192)).next, (*(P489)rt_nil_check(F->bt_410)).idx2, &F->it_1193));
F->code_414v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_409), rt_str(".p[(rt_index(", 13)), F->i_1194), rt_str(", ", 2)), (*F->base_409)), rt_str(".lo, ", 5)), (*F->base_409)), rt_str(".hi) - ", 7)), (*F->base_409)), rt_str(".lo) * (", 8)), (*F->base_409)), rt_str(".hi2 - ", 7)), (*F->base_409)), rt_str(".lo2 + 1) + rt_index(", 21)), F->j_1195), rt_str(", ", 2)), (*F->base_409)), rt_str(".lo2, ", 6)), (*F->base_409)), rt_str(".hi2) - ", 8)), (*F->base_409)), rt_str(".lo2]", 5)); b_; }));
F->t_415v = (*(P489)rt_nil_check(F->bt_410)).elem;
F->c_416v = (*(P489)rt_nil_check(F->bt_410)).elemcons;
}
goto ret_;
}
if ((f_list_len_54(F->a_1192) != ((rt_int)1LL))) {
f_fail_23((*(P485)rt_nil_check(F->e_411)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P489)rt_nil_check(F->bt_410)).kind == ((rt_int)5LL))) {
if (((*(P485)rt_nil_check(F->a_1192)).kind == ((rt_int)16LL))) {
F->lo_1196 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->a_1192)).a, g_ty_int_544, &F->it_1193));
F->hi_1197 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->a_1192)).b, g_ty_int_544, &F->it_1193));
F->code_414v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_409)), rt_str(", ", 2)), F->lo_1196), rt_str(", ", 2)), F->hi_1197), rt_str(")", 1)); b_; }));
F->t_415v = g_ty_string_548;
(*F->ro_412) = 1;
goto ret_;
}
{
F->i_1198 = rt_str_copy(f_gexpr_421(F->a_1192, g_ty_int_544, &F->it_1193));
F->t_415v = g_ty_ascii_547;
if (F->lv_413) {
F->code_414v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_409)), rt_str(", ", 2)), F->i_1198), rt_str("))", 2)); b_; }));
} else {
F->code_414v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_409)), rt_str(", ", 2)), F->i_1198), rt_str(")", 1)); b_; }));
(*F->ro_412) = 1;
}
}
goto ret_;
}
if (((*(P489)rt_nil_check(F->bt_410)).kind == ((rt_int)6LL))) {
F->i_1199 = rt_str_copy(f_gexpr_421(F->a_1192, (*(P489)rt_nil_check(F->bt_410)).idx, &F->it_1193));
F->code_414v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_409), rt_str(".p[rt_index(", 12)), F->i_1199), rt_str(", ", 2)), (*F->base_409)), rt_str(".lo, ", 5)), (*F->base_409)), rt_str(".hi) - ", 7)), (*F->base_409)), rt_str(".lo]", 4)); b_; }));
F->t_415v = (*(P489)rt_nil_check(F->bt_410)).elem;
F->c_416v = (*(P489)rt_nil_check(F->bt_410)).elemcons;
goto ret_;
}
f_fail_23((*(P485)rt_nil_check(F->e_411)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_414) = F->code_414v;  (*F->t_415) = F->t_415v;  (*F->c_416) = F->c_416v;
  return;
}

static rstr f_gexpr_421(P485 e_418, P489 want_419, P489 *t_420) {
  struct f_gexpr_421fr *F = rt_alloc(sizeof *F);
F->e_418 = e_418;
F->want_419 = want_419;
F->t_420 = t_420;
F->t_420v = *F->t_420;
F->k_1200 = (*(P485)rt_nil_check(F->e_418)).kind;
F->code_1201 = NULL;
F->c_1202 = NULL;
F->bt_1204 = NULL;
F->t_420v = g_ty_int_544;
if ((F->k_1200 == ((rt_int)1LL))) {
if (((F->want_419 != NULL) && ((*(P489)rt_nil_check(F->want_419)).kind == ((rt_int)3LL)))) {
F->t_420v = g_ty_float_546;
F->result_ = rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1200 == ((rt_int)2LL))) {
F->t_420v = g_ty_float_546;
F->result_ = (*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name));
goto ret_;
} else if ((F->k_1200 == ((rt_int)5LL))) {
F->t_420v = g_ty_bool_545;
F->result_ = f_itos_7((*(P485)rt_nil_check(F->e_418)).ival);
goto ret_;
} else if ((F->k_1200 == ((rt_int)3LL))) {
F->t_420v = g_ty_string_548;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_427(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)))), rt_str(", ", 2)), f_itos_7(((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_1200 == ((rt_int)6LL))) {
F->t_420v = g_ty_nil_551;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1200 == ((rt_int)4LL))) {
if (((F->want_419 != NULL) && ((*(P489)rt_nil_check(f_base_of_166(F->want_419))).kind == ((rt_int)4LL)))) {
F->t_420v = F->want_419;
} else {
F->t_420v = f_enum_type_of_430(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), (*(P485)rt_nil_check(F->e_418)).line);
}
{
F->i_1205 = f_lit_index_185((*(P489)rt_nil_check(f_base_of_166(F->t_420v))).lits, &(*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)));
if ((F->i_1205 < ((rt_int)0LL))) {
f_fail_23((*(P485)rt_nil_check(F->e_418)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1205);
goto ret_;
}
} else if ((F->k_1200 == ((rt_int)17LL))) {
F->result_ = f_gexpr_421((*(P485)rt_nil_check(F->e_418)).a, F->want_419, &F->t_420v);
goto ret_;
} else if ((F->k_1200 == ((rt_int)7LL))) {
F->y_1206 = NULL;
F->y_1206 = f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)));
if ((F->y_1206 == NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("ME", 2))) {
F->t_420v = g_ty_act_554;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("NIL_ACT", 7))) {
F->t_420v = g_ty_act_554;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("CRITICAL", 8)) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("NONCRITICAL", 11))) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("SYNC_RESET", 10))) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_469(f_wrap_apply_425(F->e_418), 0, &F->t_420v);
goto ret_;
}
if (((((((((rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("SYS_OUT", 7))) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("TIME", 4))) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("MILLISECONDS", 12))) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("SECONDS", 7))) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("MINUTES", 7))) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_469(f_wrap_apply_425(F->e_418), 0, &F->t_420v);
goto ret_;
}
f_fail_23((*(P485)rt_nil_check(F->e_418)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P495)rt_nil_check(F->y_1206)).kind == ((rt_int)1LL)) || ((*(P495)rt_nil_check(F->y_1206)).kind == ((rt_int)2LL)))) {
F->t_420v = (*(P495)rt_nil_check(F->y_1206)).t;
if (((*(P495)rt_nil_check(F->y_1206)).kind == ((rt_int)1LL))) {
F->ro_1207 = f_check_import_387(F->y_1206, (*(P485)rt_nil_check(F->e_418)).line);
}
F->result_ = f_access_of_381(F->y_1206);
goto ret_;
}
if (((*(P495)rt_nil_check(F->y_1206)).kind == ((rt_int)3LL))) {
F->result_ = f_gcall_469(f_wrap_apply_425(F->e_418), 0, &F->t_420v);
goto ret_;
}
f_fail_23((*(P485)rt_nil_check(F->e_418)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1200 == ((rt_int)8LL)) && (f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name))) != NULL)) && (f_user_op_465(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), f_copy_node_423((*(P485)rt_nil_check(F->e_418)).a)) != NULL))) {
F->call_1208 = NULL;
F->call_1208 = f_nn_48(((rt_int)10LL), (*(P485)rt_nil_check(F->e_418)).line);
F->fname_1209 = NULL;
F->fname_1209 = f_nn_48(((rt_int)7LL), (*(P485)rt_nil_check(F->e_418)).line);
(*(P485)rt_nil_check(F->fname_1209)).name = (*(P485)rt_nil_check(F->e_418)).name;
(*(P485)rt_nil_check(F->call_1208)).a = F->fname_1209;
(*(P485)rt_nil_check(F->call_1208)).b = f_copy_node_423((*(P485)rt_nil_check(F->e_418)).a);
F->result_ = f_gcall_469(F->call_1208, 0, &F->t_420v);
goto ret_;
} else if (((((F->k_1200 == ((rt_int)8LL)) && rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("NOT", 3))) && (F->want_419 != NULL)) && ((*(P489)rt_nil_check(F->want_419)).kind == ((rt_int)16LL)))) {
F->a_1210 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_418)).a, F->want_419, &F->t_420v));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_1210), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_54((*(P489)rt_nil_check((*(P489)rt_nil_check(F->want_419)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1200 == ((rt_int)8LL))) {
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("NOT", 3))) {
F->a_1211 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_418)).a, g_ty_bool_545, &F->t_420v));
f_check_type_175(F->t_420v, g_ty_bool_545, (*(P485)rt_nil_check(F->e_418)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1211), rt_str(")", 1));
goto ret_;
}
{
F->a_1212 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_418)).a, F->want_419, &F->t_420v));
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("+", 1))) {
F->result_ = F->a_1212;
goto ret_;
} else if (((*(P489)rt_nil_check(F->t_420v)).kind == ((rt_int)3LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1212), rt_str(")", 1));
goto ret_;
}
f_check_type_175(F->t_420v, g_ty_int_544, (*(P485)rt_nil_check(F->e_418)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1212), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1200 == ((rt_int)9LL))) {
F->result_ = f_gbinop_437(F->e_418, F->want_419, &F->t_420v);
goto ret_;
} else if ((F->k_1200 == ((rt_int)10LL))) {
if ((((*(P485)rt_nil_check((*(P485)rt_nil_check(F->e_418)).a)).kind == ((rt_int)7LL)) || ((*(P485)rt_nil_check((*(P485)rt_nil_check(F->e_418)).a)).kind == ((rt_int)12LL)))) {
F->nm_1213 = NULL;
F->nm_1213 = (*(P485)rt_nil_check(F->e_418)).a;
F->y_1214 = NULL;
if (((*(P485)rt_nil_check(F->nm_1213)).kind == ((rt_int)12LL))) {
F->nm_1213 = (*(P485)rt_nil_check(F->nm_1213)).a;
}
F->y_1214 = f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->nm_1213)).name)));
if (((((F->y_1214 == NULL) || ((*(P495)rt_nil_check(F->y_1214)).kind == ((rt_int)3LL))) || ((*(P495)rt_nil_check(F->y_1214)).kind == ((rt_int)4LL))) || ((*(P495)rt_nil_check(F->y_1214)).kind == ((rt_int)10LL)))) {
F->result_ = f_gcall_469(F->e_418, 0, &F->t_420v);
goto ret_;
}
}
{
F->base_1215 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_418)).a, NULL, &F->bt_1204));
F->ro_1203 = 1;
f_index_on_417(&F->base_1215, F->bt_1204, F->e_418, &F->ro_1203, 0, &F->code_1201, &F->t_420v, &F->c_1202);
F->result_ = (*(P480)rt_nil_check(F->code_1201));
goto ret_;
}
} else if ((F->k_1200 == ((rt_int)11LL))) {
if (((rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_418)).name)), rt_str("MAX", 3)))) {
F->result_ = f_attribute_433(F->e_418, &F->t_420v);
goto ret_;
}
{
F->base_1216 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_418)).a, NULL, &F->bt_1204));
F->ro_1203 = 1;
f_select_on_408(&F->base_1216, F->bt_1204, F->e_418, &F->ro_1203, &F->code_1201, &F->t_420v, &F->c_1202);
F->result_ = (*(P480)rt_nil_check(F->code_1201));
goto ret_;
}
} else if ((F->k_1200 == ((rt_int)12LL))) {
F->result_ = f_gcall_469(f_wrap_apply_425(F->e_418), 0, &F->t_420v);
goto ret_;
} else if ((F->k_1200 == ((rt_int)14LL))) {
F->result_ = f_constructor_441(F->e_418, F->want_419, &F->t_420v);
goto ret_;
}
f_fail_23((*(P485)rt_nil_check(F->e_418)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_420) = F->t_420v;
  return F->result_;
}

static P485 f_copy_node_423(P485 e_422) {
  struct f_copy_node_423fr *F = rt_alloc(sizeof *F);
F->e_422 = e_422;
F->x_1217 = NULL;
{ R486 *cell1218 = rt_alloc(sizeof(R486));
(*cell1218).name = NULL;
(*cell1218).tag = NULL;
(*cell1218).a = NULL;
(*cell1218).b = NULL;
(*cell1218).c = NULL;
(*cell1218).d = NULL;
(*cell1218).e = NULL;
(*cell1218).next = NULL;
F->x_1217 = cell1218;
}
(*(P485)rt_nil_check(F->x_1217)).kind = (*(P485)rt_nil_check(F->e_422)).kind;
(*(P485)rt_nil_check(F->x_1217)).line = (*(P485)rt_nil_check(F->e_422)).line;
(*(P485)rt_nil_check(F->x_1217)).ival = (*(P485)rt_nil_check(F->e_422)).ival;
(*(P485)rt_nil_check(F->x_1217)).flag = (*(P485)rt_nil_check(F->e_422)).flag;
(*(P485)rt_nil_check(F->x_1217)).name = (*(P485)rt_nil_check(F->e_422)).name;
(*(P485)rt_nil_check(F->x_1217)).tag = (*(P485)rt_nil_check(F->e_422)).tag;
(*(P485)rt_nil_check(F->x_1217)).a = (*(P485)rt_nil_check(F->e_422)).a;
(*(P485)rt_nil_check(F->x_1217)).b = (*(P485)rt_nil_check(F->e_422)).b;
(*(P485)rt_nil_check(F->x_1217)).c = (*(P485)rt_nil_check(F->e_422)).c;
(*(P485)rt_nil_check(F->x_1217)).d = (*(P485)rt_nil_check(F->e_422)).d;
F->result_ = F->x_1217;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P485 f_wrap_apply_425(P485 e_424) {
  struct f_wrap_apply_425fr *F = rt_alloc(sizeof *F);
F->e_424 = e_424;
F->x_1219 = NULL;
F->x_1219 = f_nn_48(((rt_int)10LL), (*(P485)rt_nil_check(F->e_424)).line);
(*(P485)rt_nil_check(F->x_1219)).a = F->e_424;
F->result_ = F->x_1219;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_string_427(rstr *s_426) {
  struct f_c_string_427fr *F = rt_alloc(sizeof *F);
F->s_426 = s_426;
F->n_1220 = ((rt_int)0LL);
{ rt_int lo1222 = ((rt_int)1LL), hi1223 = ((*F->s_426)).len;
for (rt_int it1224 = lo1222; it1224 <= hi1223; it1224++) {
F->i_1221 = it1224;
if (((rt_str_get((*F->s_426), F->i_1221) == 92) || (rt_str_get((*F->s_426), F->i_1221) == 63))) {
F->n_1220 = rt_add(F->n_1220, ((rt_int)1LL));
}
}
}
{
F->r_1225 = rt_str_new(rt_add(rt_add(((*F->s_426)).len, F->n_1220), ((rt_int)2LL)));
F->j_1226 = ((rt_int)1LL);
(*rt_str_at(&F->r_1225, ((rt_int)1LL))) = 34;
{ rt_int lo1228 = ((rt_int)1LL), hi1229 = ((*F->s_426)).len;
for (rt_int it1230 = lo1228; it1230 <= hi1229; it1230++) {
F->i_1227 = it1230;
F->j_1226 = rt_add(F->j_1226, ((rt_int)1LL));
if (((rt_str_get((*F->s_426), F->i_1227) == 92) || (rt_str_get((*F->s_426), F->i_1227) == 63))) {
(*rt_str_at(&F->r_1225, F->j_1226)) = 92;
F->j_1226 = rt_add(F->j_1226, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1225, F->j_1226)) = rt_str_get((*F->s_426), F->i_1227);
}
}
(*rt_str_at(&F->r_1225, rt_add(F->j_1226, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1225;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P489 f_enum_type_of_430(rstr *lit_428, rt_int line_429) {
  struct f_enum_type_of_430fr *F = rt_alloc(sizeof *F);
F->lit_428 = lit_428;
F->line_429 = line_429;
F->y_1231 = NULL;
F->y_1231 = g_scope_stack_517;
F->c_1232 = NULL;
if ((f_lit_index_185((*(P489)rt_nil_check(g_ty_ascii_547)).lits, &(*F->lit_428)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_547;
goto ret_;
}
while ((F->y_1231 != NULL)) {
if ((((((*(P495)rt_nil_check(F->y_1231)).kind == ((rt_int)6LL)) || ((*(P495)rt_nil_check(F->y_1231)).kind == ((rt_int)5LL))) && ((*(P495)rt_nil_check(F->y_1231)).st != NULL)) && ((*(P485)rt_nil_check((*(P495)rt_nil_check(F->y_1231)).st)).kind == ((rt_int)72LL)))) {
if ((f_lit_index_185((*(P485)rt_nil_check((*(P495)rt_nil_check(F->y_1231)).st)).a, &(*F->lit_428)) >= ((rt_int)0LL))) {
if (((*(P495)rt_nil_check(F->y_1231)).kind == ((rt_int)5LL))) {
F->st_1233 = NULL;
F->st_1233 = f_nn_48(((rt_int)80LL), F->line_429);
(*(P485)rt_nil_check(F->st_1233)).name = (*(P495)rt_nil_check(F->y_1231)).name;
F->result_ = f_resolve_subtype_188(F->st_1233, &F->c_1232);
goto ret_;
}
F->result_ = f_resolve_subtype_188((*(P495)rt_nil_check(F->y_1231)).st, &F->c_1232);
goto ret_;
}
}
F->y_1231 = (*(P495)rt_nil_check(F->y_1231)).stack;
}
f_fail_23(F->line_429, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_428)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_attribute_433(P485 e_431, P489 *t_432) {
  struct f_attribute_433fr *F = rt_alloc(sizeof *F);
F->e_431 = e_431;
F->t_432 = t_432;
F->t_432v = *F->t_432;
F->bt_1234 = NULL;
F->c_1235 = NULL;
F->t_432v = g_ty_int_544;
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_431)).name)), rt_str("LEN", 3))) {
F->base_1236 = NULL;
F->base_1236 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_421((*(P485)rt_nil_check(F->e_431)).a, NULL, &F->bt_1234); b_; }));
if (((*(P489)rt_nil_check(F->bt_1234)).kind == ((rt_int)8LL))) {
f_finish_ptr_261(F->bt_1234);
F->base_1236 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_392(&(*(P480)rt_nil_check(F->base_1236)), F->bt_1234); b_; }));
F->bt_1234 = (*(P489)rt_nil_check(F->bt_1234)).target;
}
if (((*(P489)rt_nil_check(F->bt_1234)).kind != ((rt_int)5LL))) {
f_fail_23((*(P485)rt_nil_check(F->e_431)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P480)rt_nil_check(F->base_1236))), rt_str(").len", 5));
goto ret_;
}
if (((*(P485)rt_nil_check((*(P485)rt_nil_check(F->e_431)).a)).kind == ((rt_int)7LL))) {
F->y_1237 = NULL;
F->y_1237 = f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->e_431)).a)).name)));
if (((F->y_1237 != NULL) && (((*(P495)rt_nil_check(F->y_1237)).kind == ((rt_int)6LL)) || ((*(P495)rt_nil_check(F->y_1237)).kind == ((rt_int)5LL))))) {
F->st_1238 = NULL;
F->st_1238 = f_nn_48(((rt_int)80LL), (*(P485)rt_nil_check(F->e_431)).line);
(*(P485)rt_nil_check(F->st_1238)).name = (*(P485)rt_nil_check((*(P485)rt_nil_check(F->e_431)).a)).name;
F->t_432v = f_resolve_subtype_188(F->st_1238, &F->c_1235);
if (((*(P489)rt_nil_check(F->t_432v)).kind == ((rt_int)4LL))) {
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_431)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_54((*(P489)rt_nil_check(F->t_432v)).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P487)rt_nil_check(F->c_1235)).lo != NULL)) {
if (rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_431)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P480)rt_nil_check((*(P487)rt_nil_check(F->c_1235)).lo));
goto ret_;
}
F->result_ = (*(P480)rt_nil_check((*(P487)rt_nil_check(F->c_1235)).hi));
goto ret_;
}
}
}
f_fail_23((*(P485)rt_nil_check(F->e_431)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P480)rt_nil_check((*(P485)rt_nil_check(F->e_431)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_432) = F->t_432v;
  return F->result_;
}

static rstr f_gbinop_437(P485 e_434, P489 want_435, P489 *t_436) {
  struct f_gbinop_437fr *F = rt_alloc(sizeof *F);
F->e_434 = e_434;
F->want_435 = want_435;
F->t_436 = t_436;
F->t_436v = *F->t_436;
F->op_1239 = NULL;
F->op_1239 = (*(P485)rt_nil_check(F->e_434)).name;
F->ta_1240 = NULL;
F->tb_1241 = NULL;
F->hint_1242 = NULL;
F->uy_1243 = NULL;
F->t_436v = g_ty_bool_545;
if ((f_lookup_140(&(*(P480)rt_nil_check(F->op_1239))) != NULL)) {
F->l_1244 = NULL;
F->r_1245 = NULL;
F->l_1244 = f_copy_node_423((*(P485)rt_nil_check(F->e_434)).a);
F->r_1245 = f_copy_node_423((*(P485)rt_nil_check(F->e_434)).b);
(*(P485)rt_nil_check(F->l_1244)).next = F->r_1245;
F->uy_1243 = f_user_op_465(&(*(P480)rt_nil_check(F->op_1239)), F->l_1244);
if ((F->uy_1243 != NULL)) {
F->call_1246 = NULL;
F->call_1246 = f_nn_48(((rt_int)10LL), (*(P485)rt_nil_check(F->e_434)).line);
F->fname_1247 = NULL;
F->fname_1247 = f_nn_48(((rt_int)7LL), (*(P485)rt_nil_check(F->e_434)).line);
(*(P485)rt_nil_check(F->fname_1247)).name = F->op_1239;
(*(P485)rt_nil_check(F->call_1246)).a = F->fname_1247;
(*(P485)rt_nil_check(F->call_1246)).b = F->l_1244;
F->result_ = f_gcall_469(F->call_1246, 0, &F->t_436v);
goto ret_;
}
}
if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("IN", 2))) {
F->s_1248 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_434)).b, NULL, &F->tb_1241));
if (((*(P489)rt_nil_check(F->tb_1241)).kind != ((rt_int)16LL))) {
f_fail_23((*(P485)rt_nil_check(F->e_434)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_1249 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_434)).a, (*(P489)rt_nil_check(F->tb_1241)).elem, &F->ta_1240));
f_check_type_175(F->ta_1240, (*(P489)rt_nil_check(F->tb_1241)).elem, (*(P485)rt_nil_check(F->e_434)).line);
F->t_436v = g_ty_bool_545;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_1249), rt_str(", ", 2)), F->s_1248), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("AND", 3)) || rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("OR", 2))) || rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("XOR", 3))) && (F->want_435 != NULL)) && ((*(P489)rt_nil_check(F->want_435)).kind == ((rt_int)16LL)))) {
F->a_1250 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_434)).a, F->want_435, &F->ta_1240));
F->b_1251 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_434)).b, F->want_435, &F->tb_1241));
f_check_type_175(F->tb_1241, F->ta_1240, (*(P485)rt_nil_check(F->e_434)).line);
F->t_436v = F->ta_1240;
if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_1250), rt_str(", ", 2)), F->b_1251), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_1250), rt_str(", ", 2)), F->b_1251), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_1250), rt_str(", ", 2)), F->b_1251), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("AND", 3)) || rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("OR", 2))) || rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("XOR", 3)))) {
F->a_1252 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_434)).a, g_ty_bool_545, &F->ta_1240));
F->b_1253 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_434)).b, g_ty_bool_545, &F->tb_1241));
f_check_type_175(F->ta_1240, g_ty_bool_545, (*(P485)rt_nil_check(F->e_434)).line);
f_check_type_175(F->tb_1241, g_ty_bool_545, (*(P485)rt_nil_check(F->e_434)).line);
if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1252), rt_str(" && ", 4)), F->b_1253), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1252), rt_str(" || ", 4)), F->b_1253), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1252), rt_str(" != ", 4)), F->b_1253), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("&", 1))) {
F->wa_1254 = NULL;
F->wb_1255 = NULL;
if (((*(P485)rt_nil_check((*(P485)rt_nil_check(F->e_434)).a)).kind == ((rt_int)4LL))) {
F->wa_1254 = g_ty_ascii_547;
}
if (((*(P485)rt_nil_check((*(P485)rt_nil_check(F->e_434)).b)).kind == ((rt_int)4LL))) {
F->wb_1255 = g_ty_ascii_547;
}
{
F->a_1256 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_434)).a, F->wa_1254, &F->ta_1240));
F->b_1257 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_434)).b, F->wb_1255, &F->tb_1241));
F->t_436v = g_ty_string_548;
if ((((*(P489)rt_nil_check(F->ta_1240)).kind == ((rt_int)5LL)) && ((*(P489)rt_nil_check(F->tb_1241)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_1256), rt_str(", ", 2)), F->b_1257), rt_str(")", 1));
goto ret_;
} else if ((((*(P489)rt_nil_check(F->ta_1240)).kind == ((rt_int)5LL)) && ((*(P489)rt_nil_check(F->tb_1241)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_1256), rt_str(", ", 2)), F->b_1257), rt_str(")", 1));
goto ret_;
} else if ((((*(P489)rt_nil_check(F->ta_1240)).kind == ((rt_int)4LL)) && ((*(P489)rt_nil_check(F->tb_1241)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_1256), rt_str(", ", 2)), F->b_1257), rt_str(")", 1));
goto ret_;
} else if ((((*(P489)rt_nil_check(F->ta_1240)).kind == ((rt_int)4LL)) && ((*(P489)rt_nil_check(F->tb_1241)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_1256), rt_str(", ", 2)), F->b_1257), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P485)rt_nil_check(F->e_434)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_93(&(*(P480)rt_nil_check(F->op_1239))) && (!rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("IN", 2))))) {
if (((((*(P485)rt_nil_check((*(P485)rt_nil_check(F->e_434)).a)).kind == ((rt_int)4LL)) || ((*(P485)rt_nil_check((*(P485)rt_nil_check(F->e_434)).a)).kind == ((rt_int)6LL))) || ((*(P485)rt_nil_check((*(P485)rt_nil_check(F->e_434)).a)).kind == ((rt_int)1LL)))) {
F->dummy_1258 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_434)).b, NULL, &F->hint_1242));
}
{
F->a_1259 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_434)).a, F->hint_1242, &F->ta_1240));
F->b_1260 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_434)).b, F->ta_1240, &F->tb_1241));
F->ct_1261 = NULL;
F->ct_1261 = f_base_of_166(F->ta_1240);
F->t_436v = g_ty_bool_545;
if ((((*(P489)rt_nil_check(F->ta_1240)).kind != ((rt_int)11LL)) && ((*(P489)rt_nil_check(F->tb_1241)).kind != ((rt_int)11LL)))) {
f_check_type_175(F->tb_1241, F->ta_1240, (*(P485)rt_nil_check(F->e_434)).line);
}
if (((*(P489)rt_nil_check(F->ta_1240)).kind == ((rt_int)11LL))) {
F->ct_1261 = f_base_of_166(F->tb_1241);
}
if (((*(P489)rt_nil_check(F->ct_1261)).kind == ((rt_int)5LL))) {
if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_1259), rt_str(", ", 2)), F->b_1260), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_1259), rt_str(", ", 2)), F->b_1260), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_1259), rt_str(", ", 2)), F->b_1260), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_1259), rt_str(", ", 2)), F->b_1260), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_1260), rt_str(", ", 2)), F->a_1259), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_1260), rt_str(", ", 2)), F->a_1259), rt_str(")", 1));
goto ret_;
}
if (((*(P489)rt_nil_check(F->ct_1261)).kind == ((rt_int)16LL))) {
if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_1259), rt_str(", ", 2)), F->b_1260), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_1259), rt_str(", ", 2)), F->b_1260), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_1259), rt_str(", ", 2)), F->b_1260), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_1260), rt_str(", ", 2)), F->a_1259), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P485)rt_nil_check(F->e_434)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_211(F->ct_1261)) {
if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("=", 1))) {
F->result_ = f_eq_code_223(F->ct_1261, &F->a_1259, &F->b_1260);
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_223(F->ct_1261, &F->a_1259, &F->b_1260)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P485)rt_nil_check(F->e_434)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1259), rt_str(" == ", 4)), F->b_1260), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1259), rt_str(" != ", 4)), F->b_1260), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1259), rt_str(" ", 1)), (*(P480)rt_nil_check(F->op_1239))), rt_str(" ", 1)), F->b_1260), rt_str(")", 1));
goto ret_;
}
}
{
F->a_1262 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_434)).a, F->want_435, &F->ta_1240));
F->b_1263 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->e_434)).b, F->ta_1240, &F->tb_1241));
if ((((*(P489)rt_nil_check(F->ta_1240)).kind == ((rt_int)3LL)) || ((*(P489)rt_nil_check(F->tb_1241)).kind == ((rt_int)3LL)))) {
F->t_436v = g_ty_float_546;
if (((rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("+", 1)) || rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("-", 1))) || rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1262), rt_str(" ", 1)), (*(P480)rt_nil_check(F->op_1239))), rt_str(" ", 1)), F->b_1263), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_1262), rt_str(", ", 2)), F->b_1263), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_1262), rt_str(", ", 2)), F->b_1263), rt_str(")", 1));
goto ret_;
}
}
f_check_type_175(F->ta_1240, g_ty_int_544, (*(P485)rt_nil_check(F->e_434)).line);
f_check_type_175(F->tb_1241, g_ty_int_544, (*(P485)rt_nil_check(F->e_434)).line);
F->t_436v = g_ty_int_544;
if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1262), rt_str(", ", 2)), F->b_1263), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1262), rt_str(", ", 2)), F->b_1263), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_1262), rt_str(", ", 2)), F->b_1263), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_1262), rt_str(", ", 2)), F->b_1263), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_1262), rt_str(", ", 2)), F->b_1263), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P480)rt_nil_check(F->op_1239)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_1262), rt_str(", ", 2)), F->b_1263), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P485)rt_nil_check(F->e_434)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P480)rt_nil_check(F->op_1239))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_436) = F->t_436v;
  return F->result_;
}

static rstr f_constructor_441(P485 e_438, P489 want_439, P489 *t_440) {
  struct f_constructor_441fr *F = rt_alloc(sizeof *F);
F->e_438 = e_438;
F->want_439 = want_439;
F->t_440 = t_440;
F->t_440v = *F->t_440;
F->it_1264 = NULL;
F->it_1264 = (*(P485)rt_nil_check(F->e_438)).a;
F->f_1265 = NULL;
F->vt_1266 = NULL;
if (((F->want_439 != NULL) && ((*(P489)rt_nil_check(F->want_439)).kind == ((rt_int)16LL)))) {
F->s_1267 = NULL;
F->s_1267 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
F->t_440v = F->want_439;
while ((F->it_1264 != NULL)) {
F->v_1268 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->it_1264)).b, (*(P489)rt_nil_check(F->want_439)).elem, &F->vt_1266));
f_check_type_175(F->vt_1266, (*(P489)rt_nil_check(F->want_439)).elem, (*(P485)rt_nil_check(F->e_438)).line);
F->s_1267 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (*(P480)rt_nil_check(F->s_1267))), rt_str(", ", 2)), F->v_1268), rt_str(")", 1)); b_; }));
F->it_1264 = (*(P485)rt_nil_check(F->it_1264)).next;
}
F->result_ = (*(P480)rt_nil_check(F->s_1267));
goto ret_;
}
if (((F->want_439 != NULL) && ((*(P489)rt_nil_check(F->want_439)).kind == ((rt_int)15LL)))) {
f_fail_23((*(P485)rt_nil_check(F->e_438)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (*(P480)rt_nil_check((*(P489)rt_nil_check(F->want_439)).name))), rt_str(" needs the underlying type", 26)); b_; }));
}
if ((((F->want_439 != NULL) && ((*(P489)rt_nil_check(F->want_439)).kind == ((rt_int)6LL))) && ((*(P489)rt_nil_check(F->want_439)).idx2 == NULL))) {
F->tmp_1269 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->ct_1270 = rt_str_copy(f_ctype_177(F->want_439));
F->et_1271 = rt_str_copy(f_ctype_177((*(P489)rt_nil_check(F->want_439)).elem));
F->parts_1272 = NULL;
F->t_440v = F->want_439;
if (((((F->it_1264 != NULL) && ((*(P485)rt_nil_check(F->it_1264)).a != NULL)) && ((*(P485)rt_nil_check((*(P485)rt_nil_check(F->it_1264)).a)).b != NULL)) && ((*(P485)rt_nil_check(F->it_1264)).next == NULL))) {
F->lo_1273 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check((*(P485)rt_nil_check(F->it_1264)).a)).a, (*(P489)rt_nil_check(F->want_439)).idx, &F->vt_1266));
F->hi_1274 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check((*(P485)rt_nil_check(F->it_1264)).a)).b, (*(P489)rt_nil_check(F->want_439)).idx, &F->vt_1266));
F->v_1275 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->it_1264)).b, (*(P489)rt_nil_check(F->want_439)).elem, &F->vt_1266));
f_check_type_175(F->vt_1266, (*(P489)rt_nil_check(F->want_439)).elem, (*(P485)rt_nil_check(F->e_438)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1270), rt_str(" ", 1)), F->tmp_1269), rt_str("; ", 2)), F->tmp_1269), rt_str(".lo = ", 6)), F->lo_1273), rt_str("; ", 2)), F->tmp_1269), rt_str(".hi = ", 6)), F->hi_1274), rt_str("; ", 2)), F->tmp_1269), rt_str(".lo2 = ", 7)), F->tmp_1269), rt_str(".hi2 = 1; ", 10)), F->tmp_1269), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1271), rt_str(") * (size_t)RT_CNT(", 19)), F->tmp_1269), rt_str(")); for (rt_int i_ = 0; i_ < RT_CNT(", 36)), F->tmp_1269), rt_str("); i_++) ", 9)), F->tmp_1269), rt_str(".p[i_] = ", 9)), f_copy_code_219((*(P489)rt_nil_check(F->want_439)).elem, &F->v_1275)), rt_str("; ", 2)), F->tmp_1269), rt_str("; })", 4));
goto ret_;
}
F->parts_1272 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1270), rt_str(" ", 1)), F->tmp_1269), rt_str("; ", 2)), F->tmp_1269), rt_str(".lo = 1; ", 9)), F->tmp_1269), rt_str(".hi = ", 6)), f_itos_7(f_list_len_54(F->it_1264))), rt_str("; ", 2)), F->tmp_1269), rt_str(".lo2 = ", 7)), F->tmp_1269), rt_str(".hi2 = 1; ", 10)), F->tmp_1269), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1271), rt_str(") * ", 4)), f_itos_7(rt_add(f_list_len_54(F->it_1264), ((rt_int)1LL)))), rt_str(");", 2)); b_; }));
{ rt_int lo1277 = ((rt_int)0LL), hi1278 = rt_sub(f_list_len_54((*(P485)rt_nil_check(F->e_438)).a), ((rt_int)1LL));
for (rt_int it1279 = lo1277; it1279 <= hi1278; it1279++) {
F->i_1276 = it1279;
if (((*(P485)rt_nil_check(F->it_1264)).a != NULL)) {
f_fail_23((*(P485)rt_nil_check(F->e_438)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only positional array constructors are handled", 46); b_; }));
}
{
F->v_1280 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->it_1264)).b, (*(P489)rt_nil_check(F->want_439)).elem, &F->vt_1266));
f_check_type_175(F->vt_1266, (*(P489)rt_nil_check(F->want_439)).elem, (*(P485)rt_nil_check(F->e_438)).line);
F->parts_1272 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->parts_1272)), rt_str(" ", 1)), F->tmp_1269), rt_str(".p[", 3)), f_itos_7(F->i_1276)), rt_str("] = ", 4)), f_copy_code_219((*(P489)rt_nil_check(F->want_439)).elem, &F->v_1280)), rt_str(";", 1)); b_; }));
}
F->it_1264 = (*(P485)rt_nil_check(F->it_1264)).next;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->parts_1272)), rt_str(" ", 1)), F->tmp_1269), rt_str("; })", 4));
goto ret_;
}
if (((F->want_439 == NULL) || ((*(P489)rt_nil_check(F->want_439)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P485)rt_nil_check(F->e_438)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_440v = F->want_439;
F->f_1265 = (*(P489)rt_nil_check(F->want_439)).fields;
{
F->tmp_1281 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_1282 = NULL;
F->parts_1282 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177(F->want_439)), rt_str(" ", 1)), F->tmp_1281), rt_str(";", 1)); b_; }));
if (((f_list_len_54(F->it_1264) != ((rt_int)0LL)) && (f_list_len_54(F->it_1264) != ((rt_int)0LL)))) {
while (((F->it_1264 != NULL) && (F->f_1265 != NULL))) {
if (((((*(P485)rt_nil_check(F->it_1264)).a == NULL) || ((*(P485)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->it_1264)).a)).a)).kind != ((rt_int)7LL))) || (!rt_str_eq((*(P480)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check((*(P485)rt_nil_check(F->it_1264)).a)).a)).name)), (*(P480)rt_nil_check((*(P491)rt_nil_check(F->f_1265)).name)))))) {
f_fail_23((*(P485)rt_nil_check(F->e_438)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P480)rt_nil_check((*(P491)rt_nil_check(F->f_1265)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_1283 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->it_1264)).b, (*(P491)rt_nil_check(F->f_1265)).t, &F->vt_1266));
f_check_type_175(F->vt_1266, (*(P491)rt_nil_check(F->f_1265)).t, (*(P485)rt_nil_check(F->e_438)).line);
F->parts_1282 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->parts_1282)), rt_str(" ", 1)), F->tmp_1281), rt_str(".", 1)), f_field_c_17(&(*(P480)rt_nil_check((*(P491)rt_nil_check(F->f_1265)).name)))), rt_str(" = ", 3)), f_copy_code_219((*(P491)rt_nil_check(F->f_1265)).t, &F->v_1283)), rt_str(";", 1)); b_; }));
}
F->it_1264 = (*(P485)rt_nil_check(F->it_1264)).next;
F->f_1265 = (*(P491)rt_nil_check(F->f_1265)).next;
}
}
if (((F->it_1264 != NULL) || (F->f_1265 != NULL))) {
f_fail_23((*(P485)rt_nil_check(F->e_438)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->parts_1282)), rt_str(" ", 1)), F->tmp_1281), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_440) = F->t_440v;
  return F->result_;
}

static int f_fits_444(P495 y_442, P485 args_443) {
  struct f_fits_444fr *F = rt_alloc(sizeof *F);
F->y_442 = y_442;
F->args_443 = args_443;
F->a_1284 = NULL;
F->a_1284 = F->args_443;
F->pm_1285 = NULL;
F->pm_1285 = (*(P495)rt_nil_check(F->y_442)).params;
F->t_1286 = NULL;
F->saved_1287 = NULL;
F->saved_1287 = g_code_527;
F->ok_1288 = 1;
F->lv_1289 = NULL;
F->lc_1290 = NULL;
g_trial_542 = rt_add(g_trial_542, ((rt_int)1LL));
g_code_527 = f_new_buffer_24();
{ rt_frame xf1292;
if (RT_TRY(xf1292)) {
while (((F->ok_1288 && (F->a_1284 != NULL)) && (F->pm_1285 != NULL))) {
if ((((*(P493)rt_nil_check(F->pm_1285)).mode == ((rt_int)2LL)) || ((*(P493)rt_nil_check(F->pm_1285)).mode == ((rt_int)3LL)))) {
f_lvalue_400(F->a_1284, &F->lv_1289, &F->t_1286, &F->lc_1290, &F->ro_1291);
} else {
F->v_1294 = rt_str_copy(f_gexpr_421(F->a_1284, (*(P493)rt_nil_check(F->pm_1285)).t, &F->t_1286));
}
if ((!(f_same_164(F->t_1286, (*(P493)rt_nil_check(F->pm_1285)).t) || (((*(P489)rt_nil_check(F->t_1286)).kind == ((rt_int)11LL)) && ((*(P489)rt_nil_check((*(P493)rt_nil_check(F->pm_1285)).t)).kind == ((rt_int)8LL)))))) {
F->ok_1288 = 0;
}
F->a_1284 = (*(P485)rt_nil_check(F->a_1284)).next;
F->pm_1285 = (*(P493)rt_nil_check(F->pm_1285)).next;
}
if (((F->a_1284 != NULL) || (F->pm_1285 != NULL))) {
F->ok_1288 = 0;
}
RT_POP(xf1292);
} else {
RT_POP(xf1292);
int x1293 = rt_xcur;
if (0 || x1293 == ex_compile_error_1) {
F->ok_1288 = 0;
} else {
rt_raise(x1293);
}
}
}
g_trial_542 = rt_sub(g_trial_542, ((rt_int)1LL));
g_code_527 = F->saved_1287;
F->result_ = F->ok_1288;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P495 f_resolve_overload_449(rstr *name_445, P485 args_446, int is_stmt_447, rt_int line_448) {
  struct f_resolve_overload_449fr *F = rt_alloc(sizeof *F);
F->name_445 = name_445;
F->args_446 = args_446;
F->is_stmt_447 = is_stmt_447;
F->line_448 = line_448;
F->y_1295 = NULL;
F->y_1295 = (*(P501)rt_nil_check(g_table_515)).p[rt_index(f_hash_138(&(*F->name_445)), (*(P501)rt_nil_check(g_table_515)).lo, (*(P501)rt_nil_check(g_table_515)).hi) - (*(P501)rt_nil_check(g_table_515)).lo];
F->first_1296 = NULL;
F->n_1297 = ((rt_int)0LL);
while ((F->y_1295 != NULL)) {
if ((rt_str_eq((*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_1295)).name)), (*F->name_445)) && (((*(P495)rt_nil_check(F->y_1295)).kind == ((rt_int)3LL)) || ((*(P495)rt_nil_check(F->y_1295)).kind == ((rt_int)4LL))))) {
F->n_1297 = rt_add(F->n_1297, ((rt_int)1LL));
if ((F->first_1296 == NULL)) {
F->first_1296 = F->y_1295;
}
if (((((*(P495)rt_nil_check(F->y_1295)).kind == ((rt_int)4LL)) == F->is_stmt_447) && f_fits_444(F->y_1295, F->args_446))) {
F->result_ = F->y_1295;
goto ret_;
}
}
F->y_1295 = (*(P495)rt_nil_check(F->y_1295)).chain;
}
if (f_is_builtin_451(&(*F->name_445))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_1297 > ((rt_int)1LL))) {
f_fail_23(F->line_448, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_445)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_1296;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_builtin_451(rstr *n_450) {
  struct f_is_builtin_451fr *F = rt_alloc(sizeof *F);
F->n_450 = n_450;
F->result_ = (((((((((((((((rt_str_eq((*F->n_450), rt_str("ABS", 3)) || rt_str_eq((*F->n_450), rt_str("POS", 3))) || rt_str_eq((*F->n_450), rt_str("SUCC", 4))) || rt_str_eq((*F->n_450), rt_str("PRED", 4))) || rt_str_eq((*F->n_450), rt_str("SQRT", 4))) || rt_str_eq((*F->n_450), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_450), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_450), rt_str("WRITE", 5))) || rt_str_eq((*F->n_450), rt_str("READLN", 6))) || rt_str_eq((*F->n_450), rt_str("SEND", 4))) || rt_str_eq((*F->n_450), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_450), rt_str("DELAY", 5))) || rt_str_eq((*F->n_450), rt_str("TIME", 4))) || rt_str_eq((*F->n_450), rt_str("CNVT", 4))) || rt_str_eq((*F->n_450), rt_str("FORMAT", 6))) || f_is_low_level_453(&(*F->n_450)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_low_level_453(rstr *n_452) {
  struct f_is_low_level_453fr *F = rt_alloc(sizeof *F);
F->n_452 = n_452;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_452), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_452), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_452), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_452), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_452), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_452), rt_str("LOCK", 4))) || rt_str_eq((*F->n_452), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_452), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_452), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_452), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_452), rt_str("WAITING", 7))) || rt_str_eq((*F->n_452), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_452), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_452), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_452), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_452), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_452), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_452), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_452), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_me_high_457(P485 tt_454, rt_int line_455, P489 *t_456) {
  struct f_me_high_457fr *F = rt_alloc(sizeof *F);
F->tt_454 = tt_454;
F->line_455 = line_455;
F->t_456 = t_456;
F->t_456v = *F->t_456;
F->c_1298 = NULL;
if ((F->tt_454 == NULL)) {
f_fail_23(F->line_455, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_456v = f_resolve_subtype_188(F->tt_454, &F->c_1298);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->t_456v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_459(F->t_456v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_456) = F->t_456v;
  return F->result_;
}

static rstr f_type_tag_459(P489 t_458) {
  struct f_type_tag_459fr *F = rt_alloc(sizeof *F);
F->t_458 = t_458;
if (((*(P489)rt_nil_check(F->t_458)).name != NULL)) {
F->result_ = (*(P480)rt_nil_check((*(P489)rt_nil_check(F->t_458)).name));
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_lock_ref_462(P485 e_460, rstr *name_461) {
  struct f_lock_ref_462fr *F = rt_alloc(sizeof *F);
F->e_460 = e_460;
F->name_461 = name_461;
F->lv_1299 = NULL;
F->t_1300 = NULL;
F->c_1301 = NULL;
f_lvalue_400(F->e_460, &F->lv_1299, &F->t_1300, &F->c_1301, &F->ro_1302);
if (((*(P489)rt_nil_check(F->t_1300)).kind != ((rt_int)13LL))) {
f_fail_23((*(P485)rt_nil_check(F->e_460)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_461), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (*(P480)rt_nil_check(F->lv_1299)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P495 f_user_op_465(rstr *op_463, P485 args_464) {
  struct f_user_op_465fr *F = rt_alloc(sizeof *F);
F->op_463 = op_463;
F->args_464 = args_464;
F->y_1303 = NULL;
F->y_1303 = (*(P501)rt_nil_check(g_table_515)).p[rt_index(f_hash_138(&(*F->op_463)), (*(P501)rt_nil_check(g_table_515)).lo, (*(P501)rt_nil_check(g_table_515)).hi) - (*(P501)rt_nil_check(g_table_515)).lo];
while ((F->y_1303 != NULL)) {
if (((rt_str_eq((*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_1303)).name)), (*F->op_463)) && ((*(P495)rt_nil_check(F->y_1303)).kind == ((rt_int)3LL))) && f_fits_444(F->y_1303, F->args_464))) {
F->result_ = F->y_1303;
goto ret_;
}
F->y_1303 = (*(P495)rt_nil_check(F->y_1303)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gcall_469(P485 e_466, int is_stmt_467, P489 *t_468) {
  struct f_gcall_469fr *F = rt_alloc(sizeof *F);
F->e_466 = e_466;
F->is_stmt_467 = is_stmt_467;
F->t_468 = t_468;
F->t_468v = *F->t_468;
F->fn_1304 = NULL;
F->fn_1304 = (*(P485)rt_nil_check(F->e_466)).a;
F->tt_1305 = NULL;
F->y_1306 = NULL;
F->args_1307 = NULL;
F->args_1307 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_1308 = NULL;
F->a_1308 = (*(P485)rt_nil_check(F->e_466)).b;
F->pm_1309 = NULL;
F->lt_1310 = NULL;
F->vt_1311 = NULL;
F->lv_1312 = NULL;
F->lc_1313 = NULL;
if (((*(P485)rt_nil_check(F->fn_1304)).kind == ((rt_int)12LL))) {
F->tt_1305 = (*(P485)rt_nil_check(F->fn_1304)).b;
F->fn_1304 = (*(P485)rt_nil_check(F->fn_1304)).a;
}
F->y_1306 = f_lookup_140(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1304)).name)));
if ((F->y_1306 == NULL)) {
F->result_ = f_builtin_476(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1304)).name)), F->tt_1305, (*(P485)rt_nil_check(F->e_466)).b, (*(P485)rt_nil_check(F->e_466)).line, F->is_stmt_467, &F->t_468v);
goto ret_;
}
if (((*(P495)rt_nil_check(F->y_1306)).kind == ((rt_int)10LL))) {
F->y_1306 = f_instantiate_379(F->y_1306, F->tt_1305, (*(P485)rt_nil_check(F->e_466)).b, (*(P485)rt_nil_check(F->e_466)).line);
} else if ((((*(P495)rt_nil_check(F->y_1306)).kind == ((rt_int)3LL)) || ((*(P495)rt_nil_check(F->y_1306)).kind == ((rt_int)4LL)))) {
F->y_1306 = f_resolve_overload_449(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1304)).name)), (*(P485)rt_nil_check(F->e_466)).b, F->is_stmt_467, (*(P485)rt_nil_check(F->e_466)).line);
if ((F->y_1306 == NULL)) {
F->result_ = f_builtin_476(&(*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1304)).name)), F->tt_1305, (*(P485)rt_nil_check(F->e_466)).b, (*(P485)rt_nil_check(F->e_466)).line, F->is_stmt_467, &F->t_468v);
goto ret_;
}
}
if ((((*(P495)rt_nil_check(F->y_1306)).kind != ((rt_int)3LL)) && ((*(P495)rt_nil_check(F->y_1306)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P485)rt_nil_check(F->e_466)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1304)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_467 && ((*(P495)rt_nil_check(F->y_1306)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P485)rt_nil_check(F->e_466)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1304)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_467) && ((*(P495)rt_nil_check(F->y_1306)).kind != ((rt_int)3LL)))) {
f_fail_23((*(P485)rt_nil_check(F->e_466)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1304)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_1309 = (*(P495)rt_nil_check(F->y_1306)).params;
if (((*(P495)rt_nil_check(F->y_1306)).level > ((rt_int)0LL))) {
F->args_1307 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1316 = ((rt_int)1LL), hi1317 = rt_sub(g_cur_level_530, (*(P495)rt_nil_check(F->y_1306)).level);
for (rt_int it1318 = lo1316; it1318 <= hi1317; it1318++) {
F->i_1315 = it1318;
F->args_1307 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check(F->args_1307)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_1308 != NULL) && (F->pm_1309 != NULL))) {
if ((((*(P480)rt_nil_check(F->args_1307))).len > ((rt_int)0LL))) {
F->args_1307 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check(F->args_1307)), rt_str(", ", 2)); b_; }));
}
if ((((*(P493)rt_nil_check(F->pm_1309)).mode == ((rt_int)2LL)) || ((*(P493)rt_nil_check(F->pm_1309)).mode == ((rt_int)3LL)))) {
f_lvalue_400(F->a_1308, &F->lv_1312, &F->lt_1310, &F->lc_1313, &F->ro_1314);
if (F->ro_1314) {
f_fail_23((*(P485)rt_nil_check(F->e_466)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check((*(P493)rt_nil_check(F->pm_1309)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_175(F->lt_1310, (*(P493)rt_nil_check(F->pm_1309)).t, (*(P485)rt_nil_check(F->e_466)).line);
F->args_1307 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->args_1307)), rt_str("&", 1)), (*(P480)rt_nil_check(F->lv_1312))); b_; }));
} else if ((((*(P493)rt_nil_check(F->pm_1309)).mode == ((rt_int)4LL)) && f_is_lvalue_394(F->a_1308))) {
f_lvalue_400(F->a_1308, &F->lv_1312, &F->lt_1310, &F->lc_1313, &F->ro_1314);
f_check_type_175(F->lt_1310, (*(P493)rt_nil_check(F->pm_1309)).t, (*(P485)rt_nil_check(F->e_466)).line);
F->args_1307 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->args_1307)), rt_str("&", 1)), (*(P480)rt_nil_check(F->lv_1312))); b_; }));
} else if (((*(P493)rt_nil_check(F->pm_1309)).mode == ((rt_int)4LL))) {
F->v_1319 = rt_str_copy(f_gexpr_421(F->a_1308, (*(P493)rt_nil_check(F->pm_1309)).t, &F->vt_1311));
F->ct_1320 = rt_str_copy(f_ctype_177((*(P493)rt_nil_check(F->pm_1309)).t));
f_check_type_175(F->vt_1311, (*(P493)rt_nil_check(F->pm_1309)).t, (*(P485)rt_nil_check(F->e_466)).line);
F->args_1307 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->args_1307)), rt_str("({ ", 3)), F->ct_1320), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1320), rt_str(")); *b_ = ", 10)), F->v_1319), rt_str("; b_; })", 8)); b_; }));
} else {
F->v_1321 = rt_str_copy(f_gexpr_421(F->a_1308, (*(P493)rt_nil_check(F->pm_1309)).t, &F->vt_1311));
f_check_type_175(F->vt_1311, (*(P493)rt_nil_check(F->pm_1309)).t, (*(P485)rt_nil_check(F->e_466)).line);
if (((((*(P489)rt_nil_check((*(P493)rt_nil_check(F->pm_1309)).t)).kind == ((rt_int)1LL)) && ((*(P493)rt_nil_check(F->pm_1309)).c != NULL)) && (*(P487)rt_nil_check((*(P493)rt_nil_check(F->pm_1309)).c)).hasm)) {
F->args_1307 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->args_1307)), rt_str("rt_range(", 9)), F->v_1321), rt_str(", ", 2)), f_itos_7((*(P487)rt_nil_check((*(P493)rt_nil_check(F->pm_1309)).c)).mlo)), rt_str(", ", 2)), f_itos_7((*(P487)rt_nil_check((*(P493)rt_nil_check(F->pm_1309)).c)).mhi)), rt_str(")", 1)); b_; }));
} else {
F->args_1307 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P480)rt_nil_check(F->args_1307)), F->v_1321); b_; }));
}
}
F->a_1308 = (*(P485)rt_nil_check(F->a_1308)).next;
F->pm_1309 = (*(P493)rt_nil_check(F->pm_1309)).next;
}
if (((F->a_1308 != NULL) || (F->pm_1309 != NULL))) {
f_fail_23((*(P485)rt_nil_check(F->e_466)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check((*(P485)rt_nil_check(F->fn_1304)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_54((*(P485)rt_nil_check(F->e_466)).b), f_list_len_54(F->a_1308)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_468v = (*(P495)rt_nil_check(F->y_1306)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check((*(P495)rt_nil_check(F->y_1306)).cname)), rt_str("(", 1)), (*(P480)rt_nil_check(F->args_1307))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_468) = F->t_468v;
  return F->result_;
}

static rstr f_builtin_476(rstr *name_470, P485 tt_471, P485 args_472, rt_int line_473, int is_stmt_474, P489 *t_475) {
  struct f_builtin_476fr *F = rt_alloc(sizeof *F);
F->name_470 = name_470;
F->tt_471 = tt_471;
F->args_472 = args_472;
F->line_473 = line_473;
F->is_stmt_474 = is_stmt_474;
F->t_475 = t_475;
F->t_475v = *F->t_475;
F->at_1322 = NULL;
F->n_1323 = f_list_len_54(F->args_472);
F->t_475v = g_ty_void_549;
if (((rt_str_eq((*F->name_470), rt_str("POS", 3)) || rt_str_eq((*F->name_470), rt_str("SUCC", 4))) || rt_str_eq((*F->name_470), rt_str("PRED", 4)))) {
F->a_1324 = rt_str_copy(f_gexpr_421(F->args_472, NULL, &F->at_1322));
if (rt_str_eq((*F->name_470), rt_str("POS", 3))) {
if (((*(P489)rt_nil_check(f_base_of_166(F->at_1322))).kind != ((rt_int)4LL))) {
f_fail_23(F->line_473, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_475v = g_ty_int_544;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1324), rt_str(") + 1)", 6));
goto ret_;
}
F->t_475v = F->at_1322;
if (((*(P489)rt_nil_check(F->at_1322)).kind == ((rt_int)1LL))) {
if (rt_str_eq((*F->name_470), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1324), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1324), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_470), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1324), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P489)rt_nil_check(f_base_of_166(F->at_1322))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1324), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P489)rt_nil_check(f_base_of_166(F->at_1322))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_470), rt_str("SQRT", 4)) || rt_str_eq((*F->name_470), rt_str("SIN", 3))) || rt_str_eq((*F->name_470), rt_str("COS", 3))) || rt_str_eq((*F->name_470), rt_str("EXP", 3))) || rt_str_eq((*F->name_470), rt_str("LN", 2))) || rt_str_eq((*F->name_470), rt_str("FLOOR", 5)))) {
F->a_1325 = rt_str_copy(f_gexpr_421(F->args_472, g_ty_float_546, &F->at_1322));
F->t_475v = g_ty_float_546;
if (rt_str_eq((*F->name_470), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_1325), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_470)), rt_str("(", 1)), F->a_1325), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("IFLOAT", 6))) {
F->a_1326 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->args_472)).next, g_ty_int_544, &F->at_1322));
F->t_475v = g_ty_float_546;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_1326), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("IFIX", 4))) {
F->a_1327 = rt_str_copy(f_gexpr_421(F->args_472, g_ty_float_546, &F->at_1322));
F->t_475v = g_ty_int_544;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1327), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("FORMAT", 6))) {
F->a_1328 = rt_str_copy(f_gexpr_421(F->args_472, g_ty_float_546, &F->at_1322));
F->n1_1329 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->args_472)).next, g_ty_int_544, &F->at_1322));
F->m1_1330 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check((*(P485)rt_nil_check(F->args_472)).next)).next, g_ty_int_544, &F->at_1322));
F->t_475v = g_ty_string_548;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_1328), rt_str(", ", 2)), F->n1_1329), rt_str(", ", 2)), F->m1_1330), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("ABS", 3))) {
F->a_1331 = rt_str_copy(f_gexpr_421(F->args_472, NULL, &F->at_1322));
F->t_475v = F->at_1322;
if (((*(P489)rt_nil_check(F->at_1322)).kind == ((rt_int)1LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_1331), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_1331), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("CNVT", 4))) {
if ((F->tt_471 == NULL)) {
f_fail_23(F->line_473, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_1332 = rt_str_copy(f_gexpr_421(F->args_472, NULL, &F->at_1322));
if ((((*(P485)rt_nil_check(F->tt_471)).kind == ((rt_int)73LL)) && ((*(P489)rt_nil_check(F->at_1322)).kind == ((rt_int)1LL)))) {
F->t_475v = g_ty_string_548;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_1332), rt_str(")", 1));
goto ret_;
} else if ((((*(P485)rt_nil_check(F->tt_471)).kind == ((rt_int)73LL)) && ((*(P489)rt_nil_check(F->at_1322)).kind == ((rt_int)3LL)))) {
F->t_475v = g_ty_string_548;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_1332), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P485)rt_nil_check(F->tt_471)).kind == ((rt_int)73LL)) && ((*(P489)rt_nil_check(F->at_1322)).kind == ((rt_int)2LL)))) {
F->t_475v = g_ty_string_548;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_1332), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P485)rt_nil_check(F->tt_471)).kind == ((rt_int)70LL)) && ((*(P489)rt_nil_check(F->at_1322)).kind == ((rt_int)5LL)))) {
F->t_475v = g_ty_int_544;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_1332), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_473, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_470), rt_str("WRITELN", 7))) {
if ((F->n_1323 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_1333 = NULL;
F->last_1333 = F->args_472;
while (((*(P485)rt_nil_check(F->last_1333)).next != NULL)) {
F->last_1333 = (*(P485)rt_nil_check(F->last_1333)).next;
}
{
F->a_1334 = rt_str_copy(f_gexpr_421(F->last_1333, g_ty_string_548, &F->at_1322));
f_check_type_175(F->at_1322, g_ty_string_548, F->line_473);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_1334), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_470), rt_str("WRITE", 5))) {
F->a_1335 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->args_472)).next, NULL, &F->at_1322));
if (((*(P489)rt_nil_check(F->at_1322)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_1335), rt_str(")", 1));
goto ret_;
} else if (((*(P489)rt_nil_check(F->at_1322)).kind == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_1335), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_473, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_470), rt_str("READLN", 6))) {
F->lv_1336 = NULL;
F->lc_1337 = NULL;
F->last_1339 = NULL;
F->last_1339 = F->args_472;
while (((*(P485)rt_nil_check(F->last_1339)).next != NULL)) {
F->last_1339 = (*(P485)rt_nil_check(F->last_1339)).next;
}
f_lvalue_400(F->last_1339, &F->lv_1336, &F->at_1322, &F->lc_1337, &F->ro_1338);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P480)rt_nil_check(F->lv_1336))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("SIZELN", 6))) {
F->t_475v = g_ty_int_544;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("EOF", 3))) {
F->t_475v = g_ty_bool_545;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_470), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_470), rt_str("SYS_OUT", 7)))) {
F->t_475v = g_ty_file_550;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_470), rt_str("OPEN", 4)) || rt_str_eq((*F->name_470), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_470), rt_str("SEND", 4)) || rt_str_eq((*F->name_470), rt_str("RECEIVE", 7)))) {
F->lv_1340 = NULL;
F->dv_1341 = NULL;
F->lc_1342 = NULL;
F->mt_1344 = NULL;
F->dt_1345 = NULL;
f_lvalue_400(F->args_472, &F->lv_1340, &F->mt_1344, &F->lc_1342, &F->ro_1343);
if (((*(P489)rt_nil_check(F->mt_1344)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_473, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_470), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_470), rt_str("RECEIVE", 7))) {
f_lvalue_400((*(P485)rt_nil_check(F->args_472)).next, &F->dv_1341, &F->dt_1345, &F->lc_1342, &F->ro_1343);
f_check_type_175(F->dt_1345, (*(P489)rt_nil_check(F->mt_1344)).elem, F->line_473);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (*(P480)rt_nil_check(F->lv_1340))), rt_str(", &", 3)), (*(P480)rt_nil_check(F->dv_1341))), rt_str(")", 1));
goto ret_;
}
{
F->v_1346 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->args_472)).next, (*(P489)rt_nil_check(F->mt_1344)).elem, &F->at_1322));
f_check_type_175(F->at_1322, (*(P489)rt_nil_check(F->mt_1344)).elem, F->line_473);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P489)rt_nil_check(F->mt_1344)).elem)), rt_str(" m_ = ", 6)), F->v_1346), rt_str("; rt_send(", 10)), (*(P480)rt_nil_check(F->lv_1340))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_470), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_470), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_1347 = NULL;
F->lc_1348 = NULL;
F->mt_1350 = NULL;
f_lvalue_400(F->args_472, &F->lv_1347, &F->mt_1350, &F->lc_1348, &F->ro_1349);
if (((*(P489)rt_nil_check(F->mt_1350)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_473, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_470), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_475v = g_ty_int_544;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_470))), rt_str("(", 1)), (*(P480)rt_nil_check(F->lv_1347))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_470), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_470), rt_str("COND_RECEIVE", 12)))) {
F->lv_1351 = NULL;
F->dv_1352 = NULL;
F->bv_1353 = NULL;
F->lc_1354 = NULL;
F->mt_1356 = NULL;
F->dt_1357 = NULL;
F->bt_1358 = NULL;
f_lvalue_400(F->args_472, &F->lv_1351, &F->mt_1356, &F->lc_1354, &F->ro_1355);
if (((*(P489)rt_nil_check(F->mt_1356)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_473, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_470), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_400((*(P485)rt_nil_check((*(P485)rt_nil_check(F->args_472)).next)).next, &F->bv_1353, &F->bt_1358, &F->lc_1354, &F->ro_1355);
f_check_type_175(F->bt_1358, g_ty_bool_545, F->line_473);
if (rt_str_eq((*F->name_470), rt_str("COND_RECEIVE", 12))) {
f_lvalue_400((*(P485)rt_nil_check(F->args_472)).next, &F->dv_1352, &F->dt_1357, &F->lc_1354, &F->ro_1355);
f_check_type_175(F->dt_1357, (*(P489)rt_nil_check(F->mt_1356)).elem, F->line_473);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->bv_1353)), rt_str(" = rt_cond_receive(", 19)), (*(P480)rt_nil_check(F->lv_1351))), rt_str(", &", 3)), (*(P480)rt_nil_check(F->dv_1352))), rt_str(")", 1));
goto ret_;
}
{
F->v_1359 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->args_472)).next, (*(P489)rt_nil_check(F->mt_1356)).elem, &F->at_1322));
f_check_type_175(F->at_1322, (*(P489)rt_nil_check(F->mt_1356)).elem, F->line_473);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P489)rt_nil_check(F->mt_1356)).elem)), rt_str(" m_ = ", 6)), F->v_1359), rt_str("; ", 2)), (*(P480)rt_nil_check(F->bv_1353))), rt_str(" = rt_cond_send(", 16)), (*(P480)rt_nil_check(F->lv_1351))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_470), rt_str("PRIORITY", 8))) {
F->t_475v = g_ty_int_544;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_324(F->args_472)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("SET_PRIORITY", 12))) {
F->v_1360 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->args_472)).next, g_ty_int_544, &F->at_1322));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_324(F->args_472)), rt_str(", ", 2)), F->v_1360), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_324(F->args_472)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("ACTIVE", 6))) {
F->t_475v = g_ty_bool_545;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_is_active(", 13), f_act_ref_324(F->args_472)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("DELAY", 5))) {
F->v_1361 = rt_str_copy(f_gexpr_421(F->args_472, g_ty_int_544, &F->at_1322));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_1361), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("DELAY_UNTIL", 11))) {
F->v_1362 = rt_str_copy(f_gexpr_421(F->args_472, g_ty_int_544, &F->at_1322));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_1362), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_324(F->args_472)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("TIME", 4))) {
F->t_475v = g_ty_int_544;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_470), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_470), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_470), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_470), rt_str("HOURS", 5)))) {
F->t_475v = g_ty_int_544;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_470));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("HALT", 4))) {
F->a_1363 = rt_str_copy(f_gexpr_421(F->args_472, g_ty_int_544, &F->at_1322));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_1363), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_470), rt_str("ME", 2)) && (F->tt_471 != NULL))) {
F->result_ = f_me_high_457(F->tt_471, F->line_473, &F->t_475v);
goto ret_;
} else if ((rt_str_eq((*F->name_470), rt_str("WAITING", 7)) || rt_str_eq((*F->name_470), rt_str("SUSPENDED", 9)))) {
F->t_475v = g_ty_bool_545;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_470))), rt_str("(", 1)), f_act_ref_324(F->args_472)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_470), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_470), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_470), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_470), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_470), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_470), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_470))), rt_str("(", 1)), f_act_ref_324(F->args_472)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("TASK_START", 10))) {
if ((F->n_1323 != ((rt_int)2LL))) {
f_fail_23(F->line_473, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_324(F->args_472)), rt_str(", ", 2)), f_act_ref_324((*(P485)rt_nil_check(F->args_472)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_470), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_470), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_470), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_470), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_470), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_470), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((F->n_1323 != ((rt_int)0LL))) {
f_fail_23(F->line_473, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_470), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_470))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_462(F->args_472, &(*F->name_470))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_462(F->args_472, &(*F->name_470))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("COND_LOCK", 9))) {
F->bv_1364 = NULL;
F->bc_1365 = NULL;
F->bt_1367 = NULL;
F->l_1368 = rt_str_copy(f_lock_ref_462(F->args_472, &(*F->name_470)));
f_lvalue_400((*(P485)rt_nil_check(F->args_472)).next, &F->bv_1364, &F->bt_1367, &F->bc_1365, &F->ro_1366);
f_check_type_175(F->bt_1367, g_ty_bool_545, F->line_473);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P480)rt_nil_check(F->bv_1364)), rt_str(" = rt_cond_lock(", 16)), F->l_1368), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("EXCESS_LOCKS", 12))) {
F->t_475v = g_ty_int_544;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_462(F->args_472, &(*F->name_470))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("OWNER", 5))) {
F->t_475v = g_ty_act_554;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_462(F->args_472, &(*F->name_470))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_470), rt_str("LOW_IO", 6))) {
F->dev_1369 = rt_str_copy(f_gexpr_421(F->args_472, g_ty_int_544, &F->at_1322));
F->cmd_1370 = rt_str_copy(f_gexpr_421((*(P485)rt_nil_check(F->args_472)).next, g_ty_int_544, &F->at_1322));
if ((F->n_1323 == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_1369), rt_str(", ", 2)), F->cmd_1370), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_1371 = NULL;
F->dc_1372 = NULL;
F->dt_1374 = NULL;
f_lvalue_400((*(P485)rt_nil_check((*(P485)rt_nil_check(F->args_472)).next)).next, &F->dv_1371, &F->dt_1374, &F->dc_1372, &F->ro_1373);
f_check_type_175(F->dt_1374, g_ty_int_544, F->line_473);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_1369), rt_str(", ", 2)), F->cmd_1370), rt_str(", &", 3)), (*(P480)rt_nil_check(F->dv_1371))), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_473, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_470), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_475) = F->t_475v;
  return F->result_;
}

static void f_translate_478(P485 units_477) {
  struct f_translate_478fr *F = rt_alloc(sizeof *F);
F->units_477 = units_477;
F->u_1375 = NULL;
F->u_1375 = F->units_477;
while ((F->u_1375 != NULL)) {
if (((*(P485)rt_nil_check(F->u_1375)).next == NULL)) {
{ R506 *cell1376 = rt_alloc(sizeof(R506));
(*cell1376).d = NULL;
(*cell1376).next = NULL;
g_caps_532 = cell1376;
}
(*(P505)rt_nil_check(g_caps_532)).d = F->u_1375;
f_declare_body_235((*(P485)rt_nil_check(F->u_1375)).c);
f_body_elements_292((*(P485)rt_nil_check(F->u_1375)).c);
{
F->l_1377 = NULL;
F->l_1377 = F->units_477;
while ((F->l_1377 != F->u_1375)) {
{
F->w_1378 = rt_str_copy(f_waits_of_284(F->l_1377));
if (((F->w_1378).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1378);
}
}
F->l_1377 = (*(P485)rt_nil_check(F->l_1377)).next;
}
}
} else {
f_gen_capsule_245(F->u_1375);
}
F->u_1375 = (*(P485)rt_nil_check(F->u_1375)).next;
}
ret_:
  return;
}

static void f_print_program_479(void) {
  struct f_print_program_479fr *F = rt_alloc(sizeof *F);
f_emit_helpers_231();
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_520);
f_print_buffer_31(g_out_frames_536);
f_print_buffer_31(g_out_helpers_521);
f_print_buffer_31(g_out_protos_522);
f_print_buffer_31(g_out_globals_523);
f_print_buffer_31(g_out_funcs_524);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_excs_526);
f_print_buffer_31(g_out_init_525);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  return;
}

static void as_R510(R510 *d, R510 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R510 cp_R510(R510 s) {
  R510 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R510(R510 a, R510 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_R508(R508 *d, R508 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R508 cp_R508(R508 s) {
  R508 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R508(R508 a, R508 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R506(R506 *d, R506 s) {
  d->d = s.d;
  d->next = s.next;
}
static R506 cp_R506(R506 s) {
  R506 d = s;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R506(R506 a, R506 b) {
  return 1 && (a.d == b.d) && (a.next == b.next);
}
static void as_R504(R504 *d, R504 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R504 cp_R504(R504 s) {
  R504 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R504(R504 a, R504 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_A502(A502 *d, A502 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A502 cp_A502(A502 s) {
  A502 d = s; d.p = rt_alloc(sizeof(P495) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A502(A502 a, A502 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R500(R500 *d, R500 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R500 cp_R500(R500 s) {
  R500 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R500(R500 a, R500 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R498(R498 *d, R498 s) {
  d->s = s.s;
  d->next = s.next;
}
static R498 cp_R498(R498 s) {
  R498 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R498(R498 a, R498 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R496(R496 *d, R496 s) {
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
static R496 cp_R496(R496 s) {
  R496 d = s;
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
static int eq_R496(R496 a, R496 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.chain == b.chain) && (a.stack == b.stack);
}
static void as_R494(R494 *d, R494 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R494 cp_R494(R494 s) {
  R494 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R494(R494 a, R494 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R492(R492 *d, R492 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R492 cp_R492(R492 s) {
  R492 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R492(R492 a, R492 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R490(R490 *d, R490 s) {
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
static R490 cp_R490(R490 s) {
  R490 d = s;
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
static int eq_R490(R490 a, R490 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.next == b.next);
}
static void as_R488(R488 *d, R488 s) {
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
static R488 cp_R488(R488 s) {
  R488 d = s;
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
static int eq_R488(R488 a, R488 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args);
}
static void as_R486(R486 *d, R486 s) {
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
static R486 cp_R486(R486 s) {
  R486 d = s;
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
static int eq_R486(R486 a, R486 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A484(A484 *d, A484 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A484 cp_A484(A484 s) {
  A484 d = s; d.p = rt_alloc(sizeof(P481) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A484(A484 a, A484 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R482(R482 *d, R482 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
}
static R482 cp_R482(R482 s) {
  R482 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  return d;
}
static int eq_R482(R482 a, R482 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_511 = NULL;
g_ntoks_512 = ((rt_int)0LL);
g_tpos_513 = ((rt_int)1LL);
g_src_line_514 = ((rt_int)0LL);
g_table_515 = NULL;
g_depth_516 = ((rt_int)0LL);
g_scope_stack_517 = NULL;
g_all_types_518 = NULL;
g_serial_519 = ((rt_int)0LL);
g_out_types_520 = NULL;
g_out_helpers_521 = NULL;
g_out_protos_522 = NULL;
g_out_globals_523 = NULL;
g_out_funcs_524 = NULL;
g_out_init_525 = NULL;
g_out_excs_526 = NULL;
g_code_527 = NULL;
g_fields_buf_528 = NULL;
g_in_func_529 = 0;
g_cur_level_530 = ((rt_int)0LL);
g_fctx_531 = NULL;
g_caps_532 = NULL;
g_cap_waits_533 = NULL;
g_psub_534 = NULL;
g_st_field_535 = NULL;
g_out_frames_536 = NULL;
g_func_sym_537 = NULL;
g_exits_538 = NULL;
g_frames_539 = ((rt_int)0LL);
g_handlers_540 = NULL;
g_cleanups_541 = NULL;
g_trial_542 = ((rt_int)0LL);
g_mcopies_543 = NULL;
g_ty_int_544 = NULL;
g_ty_bool_545 = NULL;
g_ty_float_546 = NULL;
g_ty_ascii_547 = NULL;
g_ty_string_548 = NULL;
g_ty_void_549 = NULL;
g_ty_file_550 = NULL;
g_ty_nil_551 = NULL;
g_ty_lock_552 = NULL;
g_ty_latch_553 = NULL;
g_ty_act_554 = NULL;
g_no_cons_555 = NULL;
{ A484 *cell1379 = rt_alloc(sizeof(A484));
rt_int pv1380 = ((rt_int)1000000LL);
(*cell1379).lo = ((rt_int)1LL); (*cell1379).hi = pv1380; (*cell1379).lo2 = 1; (*cell1379).hi2 = 1;
(*cell1379).p = rt_alloc(sizeof(P481) * (size_t)RT_CNT((*cell1379)));
for (rt_int i1381 = 0; i1381 < RT_CNT((*cell1379)); i1381++) {
(*cell1379).p[i1381] = NULL;
}
g_toks_511 = cell1379;
}
{ A502 *cell1382 = rt_alloc(sizeof(A502));
rt_int pv1383 = ((rt_int)4093LL);
(*cell1382).lo = ((rt_int)0LL); (*cell1382).hi = pv1383; (*cell1382).lo2 = 1; (*cell1382).hi2 = 1;
(*cell1382).p = rt_alloc(sizeof(P495) * (size_t)RT_CNT((*cell1382)));
for (rt_int i1384 = 0; i1384 < RT_CNT((*cell1382)); i1384++) {
(*cell1382).p[i1384] = NULL;
}
g_table_515 = cell1382;
}
g_out_types_520 = f_new_buffer_24();
g_out_helpers_521 = f_new_buffer_24();
g_out_protos_522 = f_new_buffer_24();
g_out_globals_523 = f_new_buffer_24();
g_out_funcs_524 = f_new_buffer_24();
g_out_init_525 = f_new_buffer_24();
g_out_excs_526 = f_new_buffer_24();
g_out_frames_536 = f_new_buffer_24();
g_code_527 = g_out_init_525;
g_no_cons_555 = f_new_cons_158();
g_ty_int_544 = f_new_typ_157(((rt_int)1LL));
g_ty_bool_545 = f_new_typ_157(((rt_int)2LL));
g_ty_float_546 = f_new_typ_157(((rt_int)3LL));
g_ty_string_548 = f_new_typ_157(((rt_int)5LL));
g_ty_void_549 = f_new_typ_157(((rt_int)9LL));
g_ty_file_550 = f_new_typ_157(((rt_int)10LL));
g_ty_nil_551 = f_new_typ_157(((rt_int)11LL));
g_ty_lock_552 = f_new_typ_157(((rt_int)13LL));
g_ty_latch_553 = f_new_typ_157(((rt_int)13LL));
g_ty_act_554 = f_new_typ_157(((rt_int)14LL));
{ rt_frame xf1385;
if (RT_TRY(xf1385)) {
f_init_ascii_182();
f_read_source_45();
f_translate_478(f_program_136());
f_print_program_479();
RT_POP(xf1385);
} else {
RT_POP(xf1385);
int x1386 = rt_xcur;
if (0 || x1386 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x1386);
}
}
}
  rt_main_done();
  return 0;
}
