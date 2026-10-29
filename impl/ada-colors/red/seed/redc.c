#include "paleo.h"
#include <math.h>
typedef rstr *P493;
typedef struct R495 R495;
typedef struct R495 *P494;
struct R495 {  rt_int kind; rt_int line; rt_int ival; P493 s;  };
typedef struct A497 A497;
struct A497 { rt_int lo, hi, lo2, hi2; P494 *p; };
typedef A497 *P496;
typedef struct R499 R499;
typedef struct R499 *P498;
struct R499 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P493 name; P493 tag; P498 a; P498 b; P498 c; P498 d; P498 e; P498 next;  };
typedef struct R501 R501;
typedef struct R501 *P500;
struct R501 {  P493 lo; P493 hi; P493 lo2; P493 hi2; P493 slen; rt_int mlo; rt_int mhi; int hasm; P498 args;  };
typedef struct R503 R503;
typedef struct R503 *P502;
typedef struct R505 R505;
typedef struct R505 *P504;
struct R505 {  P493 name; P502 t; P500 c; P498 st; P504 next;  };
typedef struct R507 R507;
typedef struct R507 *P506;
typedef struct R509 R509;
typedef struct R509 *P508;
struct R509 {  P493 name; rt_int mode; P502 t; P500 c; P493 cfield; P508 next;  };
struct R507 {  rt_int kind; P493 name; P502 t; P500 c; P493 access; P493 cname; int ro_flag; rt_int mvalue; int hasmv; P498 st; P498 decl; P508 params; P502 result; rt_int depth; rt_int level; int byref; P506 members; P506 mnext; P498 binds; P506 insts; P506 chain; P506 stack;  };
struct R503 {  rt_int kind; P493 name; P498 lits; P502 elem; P502 idx; P502 idx2; P500 elemcons; P498 elemst; P502 under; P498 tparams; P498 ocap; P504 fields; P502 target; P498 decl; P493 cname; int forward; int defined; int helpers; P506 initp; P506 tpsyms; P502 next;  };
typedef struct R511 R511;
typedef struct R511 *P510;
struct R511 {  P493 s; P510 next;  };
typedef struct R513 R513;
typedef struct R513 *P512;
struct R513 {  P510 head; P510 tail;  };
typedef struct A515 A515;
struct A515 { rt_int lo, hi, lo2, hi2; P506 *p; };
typedef A515 *P514;
typedef struct R517 R517;
typedef struct R517 *P516;
struct R517 {  P493 match; P493 label; rt_int depth; P516 next;  };
typedef struct R519 R519;
typedef struct R519 *P518;
struct R519 {  P498 d; P518 next;  };
typedef struct R521 R521;
typedef struct R521 *P520;
struct R521 {  P498 d; P493 w; P520 next;  };
typedef struct R523 R523;
typedef struct R523 *P522;
struct R523 {  rt_int depth; P498 imps; int all_imp; P522 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P493 result_;
 P493 t_569;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_572;
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
 rstr letters_573;
};
struct f_lower_s_15fr { int dummy;
 rstr *s_14;
 rstr result_;
 rstr letters_574;
 rstr r_575;
 rt_int i_576;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_580;
 rstr kw_581;
 rstr w_582;
 rt_int i_583;
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
 P512 result_;
 P512 b_587;
};
struct f_put_27fr { int dummy;
 P512 b_25;
 rstr *s_26;
 P510 l_589;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P512 b_30;
 P510 l_591;
};
struct f_splice_34fr { int dummy;
 P512 a_32;
 P512 b_33;
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
 P494 t_593;
};
struct f_lex_line_44fr { int dummy;
 rstr *line_43;
 rt_int i_595;
 rt_int j_596;
 rt_int n_597;
 int c_598;
 rstr w_599;
 rt_int k_600;
 rstr w_604;
 rt_int k_605;
 rstr two_609;
};
struct f_read_source_45fr { int dummy;
 rstr line_610;
};
struct f_nn_48fr { int dummy;
 rt_int kind_46;
 rt_int line_47;
 P498 result_;
 P498 x_611;
};
struct f_append_52fr { int dummy;
 P498 *head_49;
 P498 *tail_50;
 P498 x_51;
};
struct f_list_len_54fr { int dummy;
 P498 l_53;
 rt_int result_;
 rt_int n_613;
 P498 p_614;
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
 P493 result_;
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
 P493 result_;
};
struct f_name_node_77fr { int dummy;
 P498 result_;
 P498 x_615;
};
struct f_id_list_78fr { int dummy;
 P498 result_;
 P498 head_616;
 P498 tail_617;
};
struct f_p_subtype_79fr { int dummy;
 P498 result_;
 rt_int line_618;
 P498 x_619;
 rstr w_620;
 P498 head_621;
 P498 tail_622;
 P498 head_623;
 P498 tail_624;
 int more_625;
 P498 names_626;
 P498 st_627;
 P498 cmp_628;
 P498 head_629;
 P498 tail_630;
 int more_631;
 P498 lit_632;
};
struct f_actual_params_80fr { int dummy;
 P498 result_;
 P498 head_633;
 P498 tail_634;
};
struct f_is_type_word_82fr { int dummy;
 rstr *w_81;
 int result_;
};
struct f_actual_tt_83fr { int dummy;
 P498 result_;
 P498 head_635;
 P498 tail_636;
 int more_637;
};
struct f_binop_88fr { int dummy;
 P493 op_84;
 P498 l_85;
 P498 r_86;
 rt_int line_87;
 P498 result_;
 P498 x_638;
};
struct f_expr_89fr { int dummy;
 P498 result_;
 P498 l_639;
 P493 op_640;
 rt_int line_641;
};
struct f_expr_and_90fr { int dummy;
 P498 result_;
 P498 l_642;
 rt_int line_643;
};
struct f_expr_not_91fr { int dummy;
 P498 result_;
 P498 x_644;
};
struct f_is_rel_93fr { int dummy;
 rstr *s_92;
 int result_;
};
struct f_expr_rel_94fr { int dummy;
 P498 result_;
 P498 l_645;
 P493 op_646;
 rt_int line_647;
};
struct f_expr_add_95fr { int dummy;
 P498 result_;
 P498 l_648;
 P493 op_649;
 rt_int line_650;
};
struct f_expr_mul_96fr { int dummy;
 P498 result_;
 P498 l_651;
 P493 op_652;
 rt_int line_653;
};
struct f_expr_pow_97fr { int dummy;
 P498 result_;
 P498 l_654;
 rt_int line_655;
};
struct f_expr_prefix_98fr { int dummy;
 P498 result_;
 P498 x_656;
};
struct f_postfix_99fr { int dummy;
 P498 result_;
 P498 p_657;
 rt_int line_658;
 P498 x_659;
 P498 head_660;
 P498 tail_661;
 int more_662;
 P498 lo_663;
 P498 r_664;
 P498 x_665;
 P498 x_666;
 P498 x_667;
};
struct f_primary_100fr { int dummy;
 P498 result_;
 rt_int line_668;
 P498 x_669;
 rt_int k_670;
 rstr w_671;
 P498 head_672;
 P498 tail_673;
 int more_674;
};
struct f_constructor_item_101fr { int dummy;
 P498 result_;
 rt_int line_675;
 P498 it_676;
 P498 first_677;
 P498 keys_678;
 P498 ktail_679;
 P498 lab_680;
 rt_int save_681;
 P498 more_682;
 P498 tail2_683;
 int ok_684;
 int go_685;
 P498 l2_686;
};
struct f_at_body_end_102fr { int dummy;
 int result_;
};
struct f_body_103fr { int dummy;
 P498 result_;
 P498 head_687;
 P498 tail_688;
};
struct f_body_element_104fr { int dummy;
 P498 result_;
 P498 x_689;
};
struct f_declaration_105fr { int dummy;
 P498 result_;
 rt_int line_690;
 P498 head_691;
 P498 tail_692;
 P498 names_693;
 P498 x_694;
};
struct f_object_decl_106fr { int dummy;
 P498 result_;
 rt_int line_695;
 int is_var_696;
 P498 names_697;
 P498 st_698;
 P498 init_699;
 P498 head_700;
 P498 tail_701;
 P498 x_702;
};
struct f_abbrev_decl_107fr { int dummy;
 P498 result_;
 P498 x_703;
};
struct f_skip_rep_108fr { int dummy;
 rt_int depth_704;
};
struct f_type_decl_109fr { int dummy;
 P498 result_;
 rt_int line_705;
 P493 name_706;
 P498 params_707;
 P498 x_708;
};
struct f_mode_of_111fr { int dummy;
 rstr *w_110;
 rt_int result_;
};
struct f_formal_params_112fr { int dummy;
 P498 result_;
 P498 head_709;
 P498 tail_710;
 int more_711;
 rt_int mode_712;
 P498 names_713;
 P498 ntail_714;
 P498 st_715;
 P498 p_716;
};
struct f_imports_list_114fr { int dummy;
 P498 owner_113;
 int result_;
 P498 head_717;
 P498 tail_718;
 int more_719;
 int ro_720;
 P498 x_721;
};
struct f_is_definable_116fr { int dummy;
 rstr *w_115;
 int result_;
};
struct f_definable_name_117fr { int dummy;
 P493 result_;
};
struct f_subprogram_decl_118fr { int dummy;
 P498 result_;
 rt_int line_722;
 P498 x_723;
 int is_abn_724;
 int is_func_725;
 int dummy_726;
};
struct f_capsule_decl_119fr { int dummy;
 P498 result_;
 P498 x_727;
 int dummy_728;
 P498 head_729;
 P498 tail_730;
 int more_731;
 P498 n_732;
};
struct f_formal_tt_120fr { int dummy;
 P498 result_;
 P498 head_733;
 P498 tail_734;
 int more_735;
};
struct f_generic_decl_121fr { int dummy;
 P498 result_;
 P498 x_736;
 P498 head_737;
 P498 tail_738;
 int more_739;
 P498 names_740;
 rt_int kind_741;
 P498 st_742;
 P498 p_743;
 P493 nm_744;
 P498 st_745;
};
struct f_task_decl_122fr { int dummy;
 P498 result_;
 P498 x_746;
 int dummy_747;
};
struct f_expose_decl_123fr { int dummy;
 P498 result_;
 P498 x_748;
 P498 head_749;
 P498 tail_750;
 int more_751;
 P498 n_752;
 P498 head_753;
 P498 tail_754;
 int more_755;
 P498 n_756;
 P498 tgt_757;
};
struct f_is_compound_kw_125fr { int dummy;
 rstr *w_124;
 int result_;
};
struct f_statement_126fr { int dummy;
 P498 result_;
 P498 labels_758;
 P498 ltail_759;
 P493 match_760;
 P498 s_761;
};
struct f_unlabeled_statement_127fr { int dummy;
 P498 result_;
 rt_int line_762;
 P498 x_763;
 P498 head_764;
 P498 tail_765;
 P498 invs_766;
 P498 itail_767;
 int more_768;
 P498 target_769;
};
struct f_arm_131fr { int dummy;
 P498 cond_128;
 P498 b_129;
 rt_int line_130;
 P498 result_;
 P498 x_770;
};
struct f_if_stmt_132fr { int dummy;
 P498 result_;
 P498 x_771;
 P498 head_772;
 P498 tail_773;
 P498 cond_774;
 int go_775;
};
struct f_case_stmt_133fr { int dummy;
 P498 result_;
 P498 x_776;
 P498 head_777;
 P498 tail_778;
 P498 labs_779;
 P498 ltail_780;
 int more_781;
 P498 l_782;
};
struct f_repeat_stmt_134fr { int dummy;
 P498 result_;
 P498 x_783;
};
struct f_guard_stmt_135fr { int dummy;
 P498 result_;
 P498 x_784;
 P498 head_785;
 P498 tail_786;
 P498 h_787;
};
struct f_program_136fr { int dummy;
 P498 result_;
 P498 head_788;
 P498 tail_789;
};
struct f_hash_138fr { int dummy;
 rstr *s_137;
 rt_int result_;
 rt_int h_790;
 rt_int i_791;
};
struct f_lookup_140fr { int dummy;
 rstr *name_139;
 P506 result_;
 P506 y_795;
};
struct f_lookup_decl_142fr { int dummy;
 P498 d_141;
 P506 result_;
 P506 y_796;
};
struct f_define_145fr { int dummy;
 P506 y_143;
 rt_int line_144;
 rt_int h_797;
 P506 z_798;
};
struct f_overloadable_147fr { int dummy;
 P506 y_146;
 int result_;
};
struct f_same_signature_150fr { int dummy;
 P508 a_148;
 P508 b_149;
 int result_;
 P508 x_799;
 P508 y_800;
};
struct f_open_scope_151fr { int dummy;
};
struct f_close_scope_152fr { int dummy;
};
struct f_new_sym_155fr { int dummy;
 rt_int kind_153;
 P493 name_154;
 P506 result_;
 P506 y_801;
};
struct f_new_typ_157fr { int dummy;
 rt_int kind_156;
 P502 result_;
 P502 t_803;
};
struct f_new_cons_158fr { int dummy;
 P500 result_;
 P500 c_805;
};
struct f_same_lits_161fr { int dummy;
 P498 a_159;
 P498 b_160;
 int result_;
 P498 x_807;
 P498 y_808;
};
struct f_same_164fr { int dummy;
 P502 a_162;
 P502 b_163;
 int result_;
 P504 f_809;
 P504 g_810;
};
struct f_base_of_166fr { int dummy;
 P502 t_165;
 P502 result_;
};
struct f_base_cons_169fr { int dummy;
 P502 t_167;
 P500 c_168;
 P500 result_;
};
struct f_kind_name_171fr { int dummy;
 P502 t_170;
 rstr result_;
};
struct f_check_type_175fr { int dummy;
 P502 got_172;
 P502 want_173;
 rt_int line_174;
};
struct f_ctype_177fr { int dummy;
 P502 t_176;
 rstr result_;
};
struct f_field_decls_179fr { int dummy;
 P502 t_178;
 rstr result_;
 P504 f_813;
 P493 s_814;
};
struct f_declare_ctype_181fr { int dummy;
 P502 t_180;
 P502 u_815;
 P502 target_816;
 P498 p_817;
 P493 fs_818;
};
struct f_init_ascii_182fr { int dummy;
 rstr names_819;
 P498 head_820;
 P498 tail_821;
 rt_int start_822;
 rt_int i_823;
 P498 lit_827;
};
struct f_lit_index_185fr { int dummy;
 P498 lits_183;
 rstr *name_184;
 rt_int result_;
 rt_int i_828;
 P498 l_829;
};
struct f_resolve_subtype_188fr { int dummy;
 P498 st_186;
 P500 *c_187;
 P500 c_187v;
 P502 result_;
 P502 t_830;
 int ok_831;
 P502 dummy_832;
 P500 ic_834;
 P500 ic2_835;
 P500 ec_836;
 P502 it_837;
 P502 et_838;
 P500 ec_839;
 P498 comp_840;
 P504 tail_841;
 P500 cc_842;
 P504 f_843;
 P500 ec_845;
 P506 y_846;
};
struct f_opened_190fr { int dummy;
 P502 t_189;
 int result_;
 P518 c_847;
};
struct f_replace_all_194fr { int dummy;
 rstr *s_191;
 rstr *pat_192;
 rstr *r_193;
 rstr result_;
 rt_int i_848;
};
struct f_subst_196fr { int dummy;
 rstr *s_195;
 rstr result_;
 P510 l_849;
 P493 r_850;
};
struct f_new_type_200fr { int dummy;
 P506 y_197;
 P498 st_198;
 P500 *c_199;
 P500 c_199v;
 P502 result_;
 P498 d_851;
 P498 p_852;
 P500 uc_853;
 P506 z_854;
 P500 zc_855;
};
struct f_init_storage_204fr { int dummy;
 rstr *lval_201;
 P502 t_202;
 P500 c_203;
};
struct f_init_call_207fr { int dummy;
 P506 y_205;
 rstr *lval_206;
 rstr result_;
 P493 link_856;
 rt_int i_857;
};
struct f_tparam_type_210fr { int dummy;
 P502 t_208;
 rstr *name_209;
 P502 result_;
 P506 z_861;
};
struct f_make_storage_214fr { int dummy;
 rstr *lval_211;
 P502 t_212;
 P500 c_213;
 P498 p_862;
 P498 a_863;
 P500 uc_864;
 P502 ut_865;
 P502 at_866;
 P502 pt_867;
 rstr v_868;
 P510 saved_869;
 P510 l1_870;
 P510 l2_871;
 rstr i_874;
 P504 f_875;
};
struct f_manifest_217fr { int dummy;
 P498 e_215;
 int *ok_216;
 int ok_216v;
 rt_int result_;
 rt_int a_876;
 rt_int b_877;
 int ok2_878;
 P506 y_879;
};
struct f_mcopy_219fr { int dummy;
 P502 t_218;
 rstr result_;
 rstr ct_880;
 rstr name_881;
 P510 l_882;
};
struct f_composite_221fr { int dummy;
 P502 t_220;
 int result_;
};
struct f_assign_code_226fr { int dummy;
 rstr *lval_222;
 P502 t_223;
 rstr *v_224;
 P500 c_225;
 rstr result_;
};
struct f_copy_code_229fr { int dummy;
 P502 t_227;
 rstr *v_228;
 rstr result_;
};
struct f_eq_code_233fr { int dummy;
 P502 t_230;
 rstr *a_231;
 rstr *b_232;
 rstr result_;
};
struct f_elem_assign_237fr { int dummy;
 rstr *lval_234;
 P502 t_235;
 rstr *v_236;
 rstr result_;
};
struct f_seen_name_240fr { int dummy;
 P510 l_238;
 rstr *s_239;
 int result_;
 P510 p_884;
};
struct f_emit_helpers_241fr { int dummy;
 P502 order_885;
 P502 t_886;
 P510 done_887;
 P510 l_888;
 rstr c_889;
};
struct f_helper_bodies_243fr { int dummy;
 P502 t_242;
 rstr c_891;
 P512 b_892;
 P502 e_893;
 P498 p_894;
 P493 pc_895;
 P504 f_896;
 P493 conds_897;
 rstr fn_898;
 rstr fn_899;
};
struct f_declare_body_245fr { int dummy;
 P498 elems_244;
 P498 e_900;
 P506 y_901;
 P506 y_902;
 P506 y_903;
 P502 t_904;
 P506 y_905;
 P506 g_906;
 P506 y_907;
};
struct f_manifest_const_247fr { int dummy;
 P498 d_246;
 int ok_908;
 rt_int v_909;
 P506 y_910;
 P500 c_911;
};
struct f_exported_251fr { int dummy;
 P498 d_248;
 rstr *name_249;
 int *ro_250;
 int ro_250v;
 int result_;
 P498 p_912;
};
struct f_copy_sym_253fr { int dummy;
 P506 y_252;
 P506 result_;
 P506 z_913;
};
struct f_gen_capsule_255fr { int dummy;
 P498 d_254;
 P506 y_915;
};
struct f_capsule_params_259fr { int dummy;
 P498 d_256;
 P498 args_257;
 rt_int line_258;
 P498 p_916;
 P498 a_917;
 P502 t_918;
 P502 vt_919;
 P500 c_920;
 P493 lv_921;
 P500 lc_922;
 int ro_923;
 P506 y_924;
 rstr f_925;
 rstr g_926;
 P506 y_927;
 rstr v_928;
 rstr access_929;
};
struct f_elaborate_capsule_264fr { int dummy;
 P498 d_260;
 P506 y_261;
 P498 args_262;
 P498 owner_263;
 P518 cr_930;
 P522 ctx_931;
 P506 m_932;
 P498 p_933;
 int ro_934;
 P520 w_937;
 P506 z_939;
};
struct f_exports_op_267fr { int dummy;
 P498 d_265;
 rstr *op_266;
 int result_;
 P498 p_940;
};
struct f_renamed_270fr { int dummy;
 P498 d_268;
 P506 z_269;
 P493 result_;
 P498 r_941;
};
struct f_gen_expose_272fr { int dummy;
 P498 d_271;
 P506 y_942;
 P506 m_943;
 P498 p_944;
 P498 r_945;
 P506 inst_946;
 int found_947;
 P506 z_948;
 int found_949;
 P506 z_950;
};
struct f_finish_ptr_274fr { int dummy;
 P502 t_273;
 P498 d_951;
 P498 p_952;
 P500 c_953;
 rstr dummy_954;
 P506 y_955;
};
struct f_declare_subprogram_276fr { int dummy;
 P498 d_275;
};
struct f_build_subprogram_278fr { int dummy;
 P498 d_277;
 P506 result_;
 P506 y_956;
 P498 p_957;
 P508 tail_958;
 P508 pm_959;
 P500 rc_961;
};
struct f_element_280fr { int dummy;
 P498 e_279;
 rt_int k_962;
 P502 t_963;
 rstr c_964;
};
struct f_storage_283fr { int dummy;
 rstr *name_281;
 P502 t_282;
 rstr result_;
 rstr g_965;
 rstr f_966;
};
struct f_bind_286fr { int dummy;
 P506 y_284;
 rstr *access_285;
};
struct f_var_decl_288fr { int dummy;
 P498 d_287;
 P500 c_967;
 P502 t_968;
 P506 y_969;
 rstr access_970;
 P502 vt_971;
 rstr v_972;
};
struct f_const_decl_290fr { int dummy;
 P498 d_289;
 P500 c_973;
 P502 t_974;
 P502 vt_975;
 P506 y_976;
 int ok_977;
 rstr v_978;
 rstr access_979;
};
struct f_subprogram_292fr { int dummy;
 P498 d_291;
};
struct f_gen_subprogram_295fr { int dummy;
 P498 d_293;
 P506 y_294;
 P512 saved_code_980;
 P512 saved_fields_981;
 int saved_in_982;
 P506 saved_sym_983;
 P516 saved_exits_984;
 rt_int saved_frames_985;
 P493 args_986;
 P508 pm_987;
 P510 saved_handlers_988;
 P510 saved_cleanups_989;
 P522 ctx_990;
 P493 head_991;
 P493 frame_992;
 P493 parent_993;
 P493 copy_back_994;
 rstr ct_996;
 rstr f_997;
 P506 p_998;
};
struct f_waits_of_297fr { int dummy;
 P498 d_296;
 rstr result_;
 P520 w_999;
};
struct f_task_waits_299fr { int dummy;
 P498 elems_298;
 rstr result_;
 P498 e_1000;
 P493 r_1001;
};
struct f_await_tasks_301fr { int dummy;
 P498 elems_300;
 rstr w_1002;
};
struct f_capsule_elements_303fr { int dummy;
 P498 elems_302;
 P498 e_1003;
};
struct f_body_elements_305fr { int dummy;
 P498 elems_304;
};
struct f_gen_body_307fr { int dummy;
 P498 elems_306;
};
struct f_pop_frames_309fr { int dummy;
 rt_int upto_308;
 rt_int i_1004;
 P510 c_1005;
};
struct f_push_cleanup_311fr { int dummy;
 rstr *s_310;
 P510 c_1006;
};
struct f_pop_cleanup_312fr { int dummy;
};
struct f_gen_statement_314fr { int dummy;
 P498 s_313;
 P493 label_1008;
 P516 x_1009;
};
struct f_st_assign_316fr { int dummy;
 P498 s_315;
 P493 lv_1012;
 P502 t_1013;
 P502 vt_1014;
 P500 c_1015;
 int ro_1016;
 rstr lo_1017;
 rstr hi_1018;
 rstr v_1019;
 rstr v_1020;
};
struct f_st_call_318fr { int dummy;
 P498 s_317;
 P498 c_1021;
 P502 t_1022;
 P498 x_1023;
};
struct f_st_if_320fr { int dummy;
 P498 s_319;
 P498 a_1024;
 int first_1025;
 P502 t_1026;
 rstr c_1027;
};
struct f_st_case_322fr { int dummy;
 P498 s_321;
 P502 st_1028;
 P502 vt_1029;
 int first_1030;
 P498 a_1031;
 rstr sel_1032;
 rstr tmp_1033;
 P498 lab_1034;
 P493 conds_1035;
 rstr v_1036;
 rstr lo_1037;
 rstr hi_1038;
};
struct f_st_repeat_324fr { int dummy;
 P498 s_323;
 P502 t_1039;
 P500 c_1040;
 rstr cond_1041;
 rstr access_1042;
 rstr lov_1043;
 rstr hiv_1044;
 rstr it_1045;
 P506 y_1046;
};
struct f_st_exit_326fr { int dummy;
 P498 s_325;
 P516 x_1047;
};
struct f_st_return_328fr { int dummy;
 P498 s_327;
 P502 vt_1048;
 rstr v_1049;
};
struct f_exc_id_331fr { int dummy;
 rstr *name_329;
 rt_int line_330;
 rstr result_;
 P506 y_1050;
};
struct f_st_guard_333fr { int dummy;
 P498 s_332;
 P498 h_1051;
 int first_1052;
 P510 hv_1053;
 rstr f_1054;
 rstr x_1055;
 P498 n_1057;
 P493 conds_1058;
};
struct f_st_alloc_335fr { int dummy;
 P498 s_334;
 P493 lv_1059;
 P502 t_1060;
 P502 target_1061;
 P502 vt_1062;
 P500 c_1063;
 P500 tc_1064;
 int ro_1065;
 P498 d_1066;
 P498 p_1067;
 P498 a_1068;
 rstr tcn_1069;
 rstr cell_1070;
 rstr v_1071;
 rstr pv_1072;
 P506 y_1073;
 rstr v_1074;
};
struct f_act_ref_337fr { int dummy;
 P498 e_336;
 rstr result_;
 P493 lv_1075;
 P502 t_1076;
 P500 c_1077;
 int ro_1078;
};
struct f_st_create_339fr { int dummy;
 P498 s_338;
 P506 y_1079;
 P508 pm_1080;
 P498 a_1081;
 P493 lv_1082;
 P502 lt_1083;
 P502 vt_1084;
 P500 lc_1085;
 int ro_1086;
 P502 at_1087;
 P500 ac_1088;
 int aro_1089;
 P493 act_1090;
 rstr nf_1091;
 P493 link_1092;
 rt_int i_1093;
 rstr v_1097;
};
struct f_hidden_var_343fr { int dummy;
 rstr *name_340;
 P502 t_341;
 rstr *place_342;
 P506 y_1098;
};
struct f_user_create_349fr { int dummy;
 P498 s_344;
 P506 y_345;
 rstr *uv_346;
 P502 ut_347;
 rstr *nf_348;
 P502 t_1099;
 P512 saved_1100;
 P512 hook_1101;
 P498 un_1102;
 rstr hn_1103;
 rstr aa_1104;
 rstr uname_1105;
 rstr aname_1106;
 P498 start_1107;
 P498 an_1108;
};
struct f_wait_alt_354fr { int dummy;
 P498 inv_350;
 rstr *arr_351;
 rt_int i_352;
 int mixed_353;
 rstr result_;
 P493 lv_1109;
 P502 t_1110;
 P502 vt_1111;
 P500 c_1112;
 int ro_1113;
 P498 fn_1114;
 P498 args_1115;
 rstr slot_1116;
 P493 dv_1117;
 P502 dt_1118;
 rstr tmp_1119;
 rstr v_1120;
 rstr v_1121;
};
struct f_builtin_wait_356fr { int dummy;
 P498 inv_355;
 int result_;
 P493 lv_1122;
 P502 t_1123;
 P500 c_1124;
 int ro_1125;
 P512 saved_1126;
 int ok_1127;
};
struct f_wait_op_361fr { int dummy;
 P498 inv_357;
 rstr *op_358;
 rstr *q_359;
 int is_stmt_360;
 rstr result_;
 P498 x_1130;
 P498 f_1131;
 P498 qn_1132;
 P502 t_1133;
 rstr r_1134;
};
struct f_user_wait_366fr { int dummy;
 P498 s_362;
 rstr *arr_363;
 rstr *w_364;
 rt_int n_365;
 P498 a_1135;
 rt_int i_1136;
 P493 tests_1137;
 P493 revokes_1138;
 P498 inv_1139;
 P498 st_1140;
 P500 c_1141;
 P502 qt_1142;
 rstr qname_1143;
 P506 y_1144;
 rstr access_1145;
};
struct f_st_wait_368fr { int dummy;
 P498 s_367;
 P498 a_1146;
 rt_int n_1147;
 int first_1148;
 P512 inits_1149;
 int user_1150;
 rstr arr_1151;
 rstr w_1152;
 P498 inv_1153;
 P498 inv_1154;
 P493 conds_1155;
 rt_int i_1156;
};
struct f_call_node_372fr { int dummy;
 rstr *name_369;
 P498 arg_370;
 rt_int line_371;
 P498 result_;
 P498 x_1160;
 P498 f_1161;
};
struct f_user_region_374fr { int dummy;
 P498 s_373;
 P502 t_1162;
 rstr f_1163;
 rstr lock_1164;
 rstr unlock_1165;
};
struct f_st_region_376fr { int dummy;
 P498 s_375;
 P493 lv_1166;
 P502 t_1167;
 P500 c_1168;
 int ro_1169;
 rstr lk_1170;
 rstr f_1171;
};
struct f_gparam_379fr { int dummy;
 P498 g_377;
 rstr *name_378;
 P498 result_;
 P498 p_1172;
};
struct f_bind_sym_381fr { int dummy;
 P498 p_380;
 P506 result_;
 P506 y_1173;
};
struct f_same_binds_384fr { int dummy;
 P506 a_382;
 P506 b_383;
 int result_;
 P506 x_1174;
 P506 y_1175;
};
struct f_same_binding_387fr { int dummy;
 P506 a_385;
 P506 b_386;
 int result_;
};
struct f_instantiate_392fr { int dummy;
 P506 g_388;
 P498 tt_389;
 P498 args_390;
 rt_int line_391;
 P506 result_;
 P498 gd_1176;
 P498 pat_1177;
 P506 binds_1178;
 P498 f_1179;
 P498 a_1180;
 P498 fp_1181;
 P506 inst_1182;
 P502 at_1183;
 P500 c_1184;
 P522 saved_fctx_1185;
 int saved_in_1186;
 rt_int saved_level_1187;
 P506 saved_sym_1188;
 P512 saved_code_1189;
 P498 p_1190;
 P506 b_1191;
 P498 st_1192;
 int ok_1193;
 int known_1194;
 P506 q_1195;
 P506 b_1196;
 rstr v_1197;
 P506 b_1198;
};
struct f_access_of_394fr { int dummy;
 P506 y_393;
 rstr result_;
 P493 p_1199;
 rt_int i_1200;
};
struct f_import_of_397fr { int dummy;
 P498 l_395;
 rstr *name_396;
 P498 result_;
 P498 p_1204;
};
struct f_check_import_400fr { int dummy;
 P506 y_398;
 rt_int line_399;
 int result_;
 P522 c_1205;
 int ro_1206;
 P498 imp_1207;
};
struct f_c_ident_402fr { int dummy;
 rstr *s_401;
 rstr result_;
};
struct f_deref_405fr { int dummy;
 rstr *base_403;
 P502 t_404;
 rstr result_;
};
struct f_is_lvalue_407fr { int dummy;
 P498 e_406;
 int result_;
 P506 y_1208;
};
struct f_lvalue_413fr { int dummy;
 P498 e_408;
 P493 *code_409;
 P493 code_409v;
 P502 *t_410;
 P502 t_410v;
 P500 *c_411;
 P500 c_411v;
 int *ro_412;
 int ro_412v;
 P493 base_1209;
 P502 bt_1210;
 P500 bc_1211;
 P506 y_1212;
};
struct f_select_on_421fr { int dummy;
 rstr *base_414;
 P502 bt_415;
 P498 e_416;
 int *ro_417;
 P493 *code_418;
 P493 code_418v;
 P502 *t_419;
 P502 t_419v;
 P500 *c_420;
 P500 c_420v;
 P498 p_1213;
 P504 f_1214;
};
struct f_index_on_430fr { int dummy;
 rstr *base_422;
 P502 bt_423;
 P498 e_424;
 int *ro_425;
 int lv_426;
 P493 *code_427;
 P493 code_427v;
 P502 *t_428;
 P502 t_428v;
 P500 *c_429;
 P500 c_429v;
 P498 a_1215;
 P502 it_1216;
 rstr i_1217;
 rstr j_1218;
 rstr lo_1219;
 rstr hi_1220;
 rstr i_1221;
 rstr i_1222;
};
struct f_gexpr_434fr { int dummy;
 P498 e_431;
 P502 want_432;
 P502 *t_433;
 P502 t_433v;
 rstr result_;
 rt_int k_1223;
 P493 code_1224;
 P500 c_1225;
 int ro_1226;
 P502 bt_1227;
 rt_int i_1228;
 P506 y_1229;
 int ro_1230;
 P498 call_1231;
 P498 fname_1232;
 rstr a_1233;
 rstr a_1234;
 rstr a_1235;
 P498 nm_1236;
 P506 y_1237;
 rstr base_1238;
 rstr base_1239;
};
struct f_copy_node_436fr { int dummy;
 P498 e_435;
 P498 result_;
 P498 x_1240;
};
struct f_wrap_apply_438fr { int dummy;
 P498 e_437;
 P498 result_;
 P498 x_1242;
};
struct f_c_string_440fr { int dummy;
 rstr *s_439;
 rstr result_;
 rt_int n_1243;
 rt_int i_1244;
 rstr r_1248;
 rt_int j_1249;
 rt_int i_1250;
};
struct f_enum_type_of_443fr { int dummy;
 rstr *lit_441;
 rt_int line_442;
 P502 result_;
 P506 y_1254;
 P500 c_1255;
 P498 st_1256;
};
struct f_attribute_446fr { int dummy;
 P498 e_444;
 P502 *t_445;
 P502 t_445v;
 rstr result_;
 P502 bt_1257;
 P500 c_1258;
 P493 base_1259;
 P506 y_1260;
 P498 st_1261;
};
struct f_gbinop_450fr { int dummy;
 P498 e_447;
 P502 want_448;
 P502 *t_449;
 P502 t_449v;
 rstr result_;
 P493 op_1262;
 P502 ta_1263;
 P502 tb_1264;
 P502 hint_1265;
 P506 uy_1266;
 P498 l_1267;
 P498 r_1268;
 P498 call_1269;
 P498 fname_1270;
 rstr s_1271;
 rstr a_1272;
 rstr a_1273;
 rstr b_1274;
 rstr a_1275;
 rstr b_1276;
 P502 wa_1277;
 P502 wb_1278;
 rstr a_1279;
 rstr b_1280;
 rstr dummy_1281;
 rstr a_1282;
 rstr b_1283;
 P502 ct_1284;
 rstr a_1285;
 rstr b_1286;
};
struct f_constructor_454fr { int dummy;
 P498 e_451;
 P502 want_452;
 P502 *t_453;
 P502 t_453v;
 rstr result_;
 P498 it_1287;
 P504 f_1288;
 P502 vt_1289;
 P493 s_1290;
 rstr v_1291;
 rstr tmp_1292;
 rstr ct_1293;
 rstr et_1294;
 P493 parts_1295;
 rstr lo_1296;
 rstr hi_1297;
 rstr v_1298;
 rt_int i_1299;
 rstr v_1303;
 rstr tmp_1304;
 P493 parts_1305;
 rstr v_1306;
};
struct f_fits_457fr { int dummy;
 P506 y_455;
 P498 args_456;
 int result_;
 P498 a_1307;
 P508 pm_1308;
 P502 t_1309;
 P512 saved_1310;
 int ok_1311;
 P493 lv_1312;
 P500 lc_1313;
 int ro_1314;
 rstr v_1317;
};
struct f_resolve_overload_462fr { int dummy;
 rstr *name_458;
 P498 args_459;
 int is_stmt_460;
 rt_int line_461;
 P506 result_;
 P506 y_1318;
 P506 first_1319;
 rt_int n_1320;
};
struct f_is_builtin_464fr { int dummy;
 rstr *n_463;
 int result_;
};
struct f_is_low_level_466fr { int dummy;
 rstr *n_465;
 int result_;
};
struct f_me_high_470fr { int dummy;
 P498 tt_467;
 rt_int line_468;
 P502 *t_469;
 P502 t_469v;
 rstr result_;
 P500 c_1321;
};
struct f_type_tag_472fr { int dummy;
 P502 t_471;
 rstr result_;
};
struct f_lock_ref_475fr { int dummy;
 P498 e_473;
 rstr *name_474;
 rstr result_;
 P493 lv_1322;
 P502 t_1323;
 P500 c_1324;
 int ro_1325;
};
struct f_user_op_478fr { int dummy;
 rstr *op_476;
 P498 args_477;
 P506 result_;
 P506 y_1326;
};
struct f_gcall_482fr { int dummy;
 P498 e_479;
 int is_stmt_480;
 P502 *t_481;
 P502 t_481v;
 rstr result_;
 P498 fn_1327;
 P498 tt_1328;
 P506 y_1329;
 P493 args_1330;
 P498 a_1331;
 P508 pm_1332;
 P502 lt_1333;
 P502 vt_1334;
 P493 lv_1335;
 P500 lc_1336;
 int ro_1337;
 P506 alt_1338;
 rt_int i_1339;
 rstr v_1343;
 rstr ct_1344;
 rstr v_1345;
};
struct f_builtin_489fr { int dummy;
 rstr *name_483;
 P498 tt_484;
 P498 args_485;
 rt_int line_486;
 int is_stmt_487;
 P502 *t_488;
 P502 t_488v;
 rstr result_;
 P502 at_1346;
 rt_int n_1347;
 rstr a_1348;
 rstr a_1349;
 rstr a_1350;
 rstr a_1351;
 rstr a_1352;
 rstr n1_1353;
 rstr m1_1354;
 rstr a_1355;
 rstr a_1356;
 P498 last_1357;
 rstr a_1358;
 rstr a_1359;
 P493 lv_1360;
 P500 lc_1361;
 int ro_1362;
 P498 last_1363;
 P493 lv_1364;
 P493 dv_1365;
 P500 lc_1366;
 int ro_1367;
 P502 mt_1368;
 P502 dt_1369;
 rstr v_1370;
 P493 lv_1371;
 P500 lc_1372;
 int ro_1373;
 P502 mt_1374;
 P493 lv_1375;
 P493 dv_1376;
 P493 bv_1377;
 P500 lc_1378;
 int ro_1379;
 P502 mt_1380;
 P502 dt_1381;
 P502 bt_1382;
 rstr v_1383;
 rstr v_1384;
 rstr v_1385;
 rstr v_1386;
 rstr a_1387;
 P493 bv_1388;
 P500 bc_1389;
 int ro_1390;
 P502 bt_1391;
 rstr l_1392;
 rstr dev_1393;
 rstr cmd_1394;
 P493 dv_1395;
 P500 dc_1396;
 int ro_1397;
 P502 dt_1398;
};
struct f_translate_491fr { int dummy;
 P498 units_490;
 P498 u_1399;
 P498 l_1401;
 rstr w_1402;
};
struct f_print_program_492fr { int dummy;
};
static void as_R523(R523 *d, R523 s);
static R523 cp_R523(R523 s);
static int eq_R523(R523 a, R523 b);
static void as_R521(R521 *d, R521 s);
static R521 cp_R521(R521 s);
static int eq_R521(R521 a, R521 b);
static void as_R519(R519 *d, R519 s);
static R519 cp_R519(R519 s);
static int eq_R519(R519 a, R519 b);
static void as_R517(R517 *d, R517 s);
static R517 cp_R517(R517 s);
static int eq_R517(R517 a, R517 b);
static void as_A515(A515 *d, A515 s);
static A515 cp_A515(A515 s);
static int eq_A515(A515 a, A515 b);
static void as_R513(R513 *d, R513 s);
static R513 cp_R513(R513 s);
static int eq_R513(R513 a, R513 b);
static void as_R511(R511 *d, R511 s);
static R511 cp_R511(R511 s);
static int eq_R511(R511 a, R511 b);
static void as_R509(R509 *d, R509 s);
static R509 cp_R509(R509 s);
static int eq_R509(R509 a, R509 b);
static void as_R507(R507 *d, R507 s);
static R507 cp_R507(R507 s);
static int eq_R507(R507 a, R507 b);
static void as_R505(R505 *d, R505 s);
static R505 cp_R505(R505 s);
static int eq_R505(R505 a, R505 b);
static void as_R503(R503 *d, R503 s);
static R503 cp_R503(R503 s);
static int eq_R503(R503 a, R503 b);
static void as_R501(R501 *d, R501 s);
static R501 cp_R501(R501 s);
static int eq_R501(R501 a, R501 b);
static void as_R499(R499 *d, R499 s);
static R499 cp_R499(R499 s);
static int eq_R499(R499 a, R499 b);
static void as_A497(A497 *d, A497 s);
static A497 cp_A497(A497 s);
static int eq_A497(A497 a, A497 b);
static void as_R495(R495 *d, R495 s);
static R495 cp_R495(R495 s);
static int eq_R495(R495 a, R495 b);
static P493 f_mk_3(rstr *s_2);
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
static P512 f_new_buffer_24(void);
static void f_put_27(P512 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P512 b_30);
static void f_splice_34(P512 a_32, P512 b_33);
static int f_is_reserved_36(rstr *w_35);
static int f_is_word_op_38(rstr *w_37);
static void f_add_token_42(rt_int kind_39, rstr *s_40, rt_int ival_41);
static void f_lex_line_44(rstr *line_43);
static void f_read_source_45(void);
static P498 f_nn_48(rt_int kind_46, rt_int line_47);
static void f_append_52(P498 *head_49, P498 *tail_50, P498 x_51);
static rt_int f_list_len_54(P498 l_53);
static rt_int f_cur_line_55(void);
static int f_at_kw_57(rstr *w_56);
static int f_at_op_59(rstr *w_58);
static int f_at_kind_61(rt_int k_60);
static rt_int f_kind_at_63(rt_int k_62);
static P493 f_text_at_65(rt_int k_64);
static void f_perror_67(rstr *msg_66);
static int f_accept_kw_69(rstr *w_68);
static int f_accept_op_71(rstr *w_70);
static void f_expect_kw_73(rstr *w_72);
static void f_expect_op_75(rstr *w_74);
static P493 f_expect_id_76(void);
static P498 f_name_node_77(void);
static P498 f_id_list_78(void);
static P498 f_p_subtype_79(void);
static P498 f_actual_params_80(void);
static int f_is_type_word_82(rstr *w_81);
static P498 f_actual_tt_83(void);
static P498 f_binop_88(P493 op_84, P498 l_85, P498 r_86, rt_int line_87);
static P498 f_expr_89(void);
static P498 f_expr_and_90(void);
static P498 f_expr_not_91(void);
static int f_is_rel_93(rstr *s_92);
static P498 f_expr_rel_94(void);
static P498 f_expr_add_95(void);
static P498 f_expr_mul_96(void);
static P498 f_expr_pow_97(void);
static P498 f_expr_prefix_98(void);
static P498 f_postfix_99(void);
static P498 f_primary_100(void);
static P498 f_constructor_item_101(void);
static int f_at_body_end_102(void);
static P498 f_body_103(void);
static P498 f_body_element_104(void);
static P498 f_declaration_105(void);
static P498 f_object_decl_106(void);
static P498 f_abbrev_decl_107(void);
static void f_skip_rep_108(void);
static P498 f_type_decl_109(void);
static rt_int f_mode_of_111(rstr *w_110);
static P498 f_formal_params_112(void);
static int f_imports_list_114(P498 owner_113);
static int f_is_definable_116(rstr *w_115);
static P493 f_definable_name_117(void);
static P498 f_subprogram_decl_118(void);
static P498 f_capsule_decl_119(void);
static P498 f_formal_tt_120(void);
static P498 f_generic_decl_121(void);
static P498 f_task_decl_122(void);
static P498 f_expose_decl_123(void);
static int f_is_compound_kw_125(rstr *w_124);
static P498 f_statement_126(void);
static P498 f_unlabeled_statement_127(void);
static P498 f_arm_131(P498 cond_128, P498 b_129, rt_int line_130);
static P498 f_if_stmt_132(void);
static P498 f_case_stmt_133(void);
static P498 f_repeat_stmt_134(void);
static P498 f_guard_stmt_135(void);
static P498 f_program_136(void);
static rt_int f_hash_138(rstr *s_137);
static P506 f_lookup_140(rstr *name_139);
static P506 f_lookup_decl_142(P498 d_141);
static void f_define_145(P506 y_143, rt_int line_144);
static int f_overloadable_147(P506 y_146);
static int f_same_signature_150(P508 a_148, P508 b_149);
static void f_open_scope_151(void);
static void f_close_scope_152(void);
static P506 f_new_sym_155(rt_int kind_153, P493 name_154);
static P502 f_new_typ_157(rt_int kind_156);
static P500 f_new_cons_158(void);
static int f_same_lits_161(P498 a_159, P498 b_160);
static int f_same_164(P502 a_162, P502 b_163);
static P502 f_base_of_166(P502 t_165);
static P500 f_base_cons_169(P502 t_167, P500 c_168);
static rstr f_kind_name_171(P502 t_170);
static void f_check_type_175(P502 got_172, P502 want_173, rt_int line_174);
static rstr f_ctype_177(P502 t_176);
static rstr f_field_decls_179(P502 t_178);
static void f_declare_ctype_181(P502 t_180);
static void f_init_ascii_182(void);
static rt_int f_lit_index_185(P498 lits_183, rstr *name_184);
static P502 f_resolve_subtype_188(P498 st_186, P500 *c_187);
static int f_opened_190(P502 t_189);
static rstr f_replace_all_194(rstr *s_191, rstr *pat_192, rstr *r_193);
static rstr f_subst_196(rstr *s_195);
static P502 f_new_type_200(P506 y_197, P498 st_198, P500 *c_199);
static void f_init_storage_204(rstr *lval_201, P502 t_202, P500 c_203);
static rstr f_init_call_207(P506 y_205, rstr *lval_206);
static P502 f_tparam_type_210(P502 t_208, rstr *name_209);
static void f_make_storage_214(rstr *lval_211, P502 t_212, P500 c_213);
static rt_int f_manifest_217(P498 e_215, int *ok_216);
static rstr f_mcopy_219(P502 t_218);
static int f_composite_221(P502 t_220);
static rstr f_assign_code_226(rstr *lval_222, P502 t_223, rstr *v_224, P500 c_225);
static rstr f_copy_code_229(P502 t_227, rstr *v_228);
static rstr f_eq_code_233(P502 t_230, rstr *a_231, rstr *b_232);
static rstr f_elem_assign_237(rstr *lval_234, P502 t_235, rstr *v_236);
static int f_seen_name_240(P510 l_238, rstr *s_239);
static void f_emit_helpers_241(void);
static void f_helper_bodies_243(P502 t_242);
static void f_declare_body_245(P498 elems_244);
static void f_manifest_const_247(P498 d_246);
static int f_exported_251(P498 d_248, rstr *name_249, int *ro_250);
static P506 f_copy_sym_253(P506 y_252);
static void f_gen_capsule_255(P498 d_254);
static void f_capsule_params_259(P498 d_256, P498 args_257, rt_int line_258);
static void f_elaborate_capsule_264(P498 d_260, P506 y_261, P498 args_262, P498 owner_263);
static int f_exports_op_267(P498 d_265, rstr *op_266);
static P493 f_renamed_270(P498 d_268, P506 z_269);
static void f_gen_expose_272(P498 d_271);
static void f_finish_ptr_274(P502 t_273);
static void f_declare_subprogram_276(P498 d_275);
static P506 f_build_subprogram_278(P498 d_277);
static void f_element_280(P498 e_279);
static rstr f_storage_283(rstr *name_281, P502 t_282);
static void f_bind_286(P506 y_284, rstr *access_285);
static void f_var_decl_288(P498 d_287);
static void f_const_decl_290(P498 d_289);
static void f_subprogram_292(P498 d_291);
static void f_gen_subprogram_295(P498 d_293, P506 y_294);
static rstr f_waits_of_297(P498 d_296);
static rstr f_task_waits_299(P498 elems_298);
static void f_await_tasks_301(P498 elems_300);
static void f_capsule_elements_303(P498 elems_302);
static void f_body_elements_305(P498 elems_304);
static void f_gen_body_307(P498 elems_306);
static void f_pop_frames_309(rt_int upto_308);
static void f_push_cleanup_311(rstr *s_310);
static void f_pop_cleanup_312(void);
static void f_gen_statement_314(P498 s_313);
static void f_st_assign_316(P498 s_315);
static void f_st_call_318(P498 s_317);
static void f_st_if_320(P498 s_319);
static void f_st_case_322(P498 s_321);
static void f_st_repeat_324(P498 s_323);
static void f_st_exit_326(P498 s_325);
static void f_st_return_328(P498 s_327);
static rstr f_exc_id_331(rstr *name_329, rt_int line_330);
static void f_st_guard_333(P498 s_332);
static void f_st_alloc_335(P498 s_334);
static rstr f_act_ref_337(P498 e_336);
static void f_st_create_339(P498 s_338);
static void f_hidden_var_343(rstr *name_340, P502 t_341, rstr *place_342);
static void f_user_create_349(P498 s_344, P506 y_345, rstr *uv_346, P502 ut_347, rstr *nf_348);
static rstr f_wait_alt_354(P498 inv_350, rstr *arr_351, rt_int i_352, int mixed_353);
static int f_builtin_wait_356(P498 inv_355);
static rstr f_wait_op_361(P498 inv_357, rstr *op_358, rstr *q_359, int is_stmt_360);
static void f_user_wait_366(P498 s_362, rstr *arr_363, rstr *w_364, rt_int n_365);
static void f_st_wait_368(P498 s_367);
static P498 f_call_node_372(rstr *name_369, P498 arg_370, rt_int line_371);
static void f_user_region_374(P498 s_373);
static void f_st_region_376(P498 s_375);
static P498 f_gparam_379(P498 g_377, rstr *name_378);
static P506 f_bind_sym_381(P498 p_380);
static int f_same_binds_384(P506 a_382, P506 b_383);
static int f_same_binding_387(P506 a_385, P506 b_386);
static P506 f_instantiate_392(P506 g_388, P498 tt_389, P498 args_390, rt_int line_391);
static rstr f_access_of_394(P506 y_393);
static P498 f_import_of_397(P498 l_395, rstr *name_396);
static int f_check_import_400(P506 y_398, rt_int line_399);
static rstr f_c_ident_402(rstr *s_401);
static rstr f_deref_405(rstr *base_403, P502 t_404);
static int f_is_lvalue_407(P498 e_406);
static void f_lvalue_413(P498 e_408, P493 *code_409, P502 *t_410, P500 *c_411, int *ro_412);
static void f_select_on_421(rstr *base_414, P502 bt_415, P498 e_416, int *ro_417, P493 *code_418, P502 *t_419, P500 *c_420);
static void f_index_on_430(rstr *base_422, P502 bt_423, P498 e_424, int *ro_425, int lv_426, P493 *code_427, P502 *t_428, P500 *c_429);
static rstr f_gexpr_434(P498 e_431, P502 want_432, P502 *t_433);
static P498 f_copy_node_436(P498 e_435);
static P498 f_wrap_apply_438(P498 e_437);
static rstr f_c_string_440(rstr *s_439);
static P502 f_enum_type_of_443(rstr *lit_441, rt_int line_442);
static rstr f_attribute_446(P498 e_444, P502 *t_445);
static rstr f_gbinop_450(P498 e_447, P502 want_448, P502 *t_449);
static rstr f_constructor_454(P498 e_451, P502 want_452, P502 *t_453);
static int f_fits_457(P506 y_455, P498 args_456);
static P506 f_resolve_overload_462(rstr *name_458, P498 args_459, int is_stmt_460, rt_int line_461);
static int f_is_builtin_464(rstr *n_463);
static int f_is_low_level_466(rstr *n_465);
static rstr f_me_high_470(P498 tt_467, rt_int line_468, P502 *t_469);
static rstr f_type_tag_472(P502 t_471);
static rstr f_lock_ref_475(P498 e_473, rstr *name_474);
static P506 f_user_op_478(rstr *op_476, P498 args_477);
static rstr f_gcall_482(P498 e_479, int is_stmt_480, P502 *t_481);
static rstr f_builtin_489(rstr *name_483, P498 tt_484, P498 args_485, rt_int line_486, int is_stmt_487, P502 *t_488);
static void f_translate_491(P498 units_490);
static void f_print_program_492(void);
static int ex_compile_error_1;
static P496 g_toks_524;
static rt_int g_ntoks_525;
static rt_int g_tpos_526;
static rt_int g_src_line_527;
static P514 g_table_528;
static rt_int g_depth_529;
static P506 g_scope_stack_530;
static P502 g_all_types_531;
static rt_int g_serial_532;
static P512 g_out_types_533;
static P512 g_out_helpers_534;
static P512 g_out_protos_535;
static P512 g_out_globals_536;
static P512 g_out_funcs_537;
static P512 g_out_init_538;
static P512 g_out_excs_539;
static P512 g_code_540;
static P512 g_fields_buf_541;
static int g_in_func_542;
static rt_int g_cur_level_543;
static P522 g_fctx_544;
static P518 g_caps_545;
static P520 g_cap_waits_546;
static P510 g_psub_547;
static P493 g_st_field_548;
static P512 g_out_frames_549;
static P506 g_func_sym_550;
static P516 g_exits_551;
static rt_int g_frames_552;
static P510 g_handlers_553;
static P510 g_cleanups_554;
static rt_int g_trial_555;
static P510 g_mcopies_556;
static P502 g_ty_int_557;
static P502 g_ty_bool_558;
static P502 g_ty_float_559;
static P502 g_ty_ascii_560;
static P502 g_ty_string_561;
static P502 g_ty_void_562;
static P502 g_ty_file_563;
static P502 g_ty_nil_564;
static P502 g_ty_lock_565;
static P502 g_ty_latch_566;
static P502 g_ty_act_567;
static P500 g_no_cons_568;
static P493 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
F->s_2 = s_2;
F->t_569 = NULL;
{ rstr *cell570 = rt_alloc(sizeof(rstr));
rt_int pv571 = ((*F->s_2)).len;
(*cell570) = rt_str_new(pv571);
rt_str_assign(&(*cell570), (*F->s_2));
F->t_569 = cell570;
}
F->result_ = F->t_569;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_chs_5(int c_4) {
  struct f_chs_5fr *F = rt_alloc(sizeof *F);
F->c_4 = c_4;
F->r_572 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_572, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_572;
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
F->letters_573 = rt_str_copy(rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
if (((97 <= F->c_12) && (F->c_12 <= 122))) {
F->result_ = rt_str_get(F->letters_573, rt_add(rt_sub(((rt_int)(F->c_12) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
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
F->letters_574 = rt_str_copy(rt_str("abcdefghijklmnopqrstuvwxyz", 26));
F->r_575 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_575, (*F->s_14));
{ rt_int lo577 = ((rt_int)1LL), hi578 = ((*F->s_14)).len;
for (rt_int it579 = lo577; it579 <= hi578; it579++) {
F->i_576 = it579;
if (((65 <= rt_str_get(F->r_575, F->i_576)) && (rt_str_get(F->r_575, F->i_576) <= 90))) {
(*rt_str_at(&F->r_575, F->i_576)) = rt_str_get(F->letters_574, rt_add(rt_sub(((rt_int)(rt_str_get(F->r_575, F->i_576)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_575;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_c_17(rstr *s_16) {
  struct f_field_c_17fr *F = rt_alloc(sizeof *F);
F->s_16 = s_16;
F->l_580 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->kw_581 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)));
F->w_582 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_580), rt_str(" ", 1)));
{ rt_int lo584 = ((rt_int)1LL), hi585 = rt_add(rt_sub((F->kw_581).len, (F->w_582).len), ((rt_int)1LL));
for (rt_int it586 = lo584; it586 <= hi585; it586++) {
F->i_583 = it586;
if (rt_str_eq(rt_str_slice(F->kw_581, F->i_583, rt_sub(rt_add(F->i_583, (F->w_582).len), ((rt_int)1LL))), F->w_582)) {
F->result_ = rt_str_cat(F->l_580, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_580;
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
g_serial_532 = rt_add(g_serial_532, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_532));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_fail_23(rt_int line_21, rstr *msg_22) {
  struct f_fail_23fr *F = rt_alloc(sizeof *F);
F->line_21 = line_21;
F->msg_22 = msg_22;
if ((g_trial_555 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  return;
}

static P512 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
F->b_587 = NULL;
{ R513 *cell588 = rt_alloc(sizeof(R513));
(*cell588).head = NULL;
(*cell588).tail = NULL;
F->b_587 = cell588;
}
F->result_ = F->b_587;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_put_27(P512 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_589 = NULL;
{ R511 *cell590 = rt_alloc(sizeof(R511));
(*cell590).s = NULL;
(*cell590).next = NULL;
F->l_589 = cell590;
}
(*(P510)rt_nil_check(F->l_589)).s = f_mk_3(&(*F->s_26));
if (((*(P512)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P512)rt_nil_check(F->b_25)).head = F->l_589;
} else {
(*(P510)rt_nil_check((*(P512)rt_nil_check(F->b_25)).tail)).next = F->l_589;
}
(*(P512)rt_nil_check(F->b_25)).tail = F->l_589;
ret_:
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
F->s_28 = s_28;
f_put_27(g_code_540, &(*F->s_28));
ret_:
  return;
}

static void f_print_buffer_31(P512 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
F->b_30 = b_30;
F->l_591 = NULL;
F->l_591 = (*(P512)rt_nil_check(F->b_30)).head;
while ((F->l_591 != NULL)) {
rt_putln((*(P493)rt_nil_check((*(P510)rt_nil_check(F->l_591)).s)));
F->l_591 = (*(P510)rt_nil_check(F->l_591)).next;
}
ret_:
  return;
}

static void f_splice_34(P512 a_32, P512 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P512)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P512)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P512)rt_nil_check(F->a_32)).head = (*(P512)rt_nil_check(F->b_33)).head;
} else {
(*(P510)rt_nil_check((*(P512)rt_nil_check(F->a_32)).tail)).next = (*(P512)rt_nil_check(F->b_33)).head;
}
(*(P512)rt_nil_check(F->a_32)).tail = (*(P512)rt_nil_check(F->b_33)).tail;
(*(P512)rt_nil_check(F->b_33)).head = NULL;
(*(P512)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
F->w_35 = w_35;
{ rstr sel592 = (*F->w_35);
if (0 || rt_str_eq(sel592, rt_str("ABBREV", 6)) || rt_str_eq(sel592, rt_str("ABNORMAL", 8)) || rt_str_eq(sel592, rt_str("ALL", 3)) || rt_str_eq(sel592, rt_str("ALLOC", 5)) || rt_str_eq(sel592, rt_str("ASSERT", 6)) || rt_str_eq(sel592, rt_str("BEGIN", 5)) || rt_str_eq(sel592, rt_str("BY", 2)) || rt_str_eq(sel592, rt_str("CAPSULE", 7)) || rt_str_eq(sel592, rt_str("CASE", 4)) || rt_str_eq(sel592, rt_str("CONST", 5)) || rt_str_eq(sel592, rt_str("CREATE", 6)) || rt_str_eq(sel592, rt_str("DO", 2)) || rt_str_eq(sel592, rt_str("ELSE", 4)) || rt_str_eq(sel592, rt_str("ELSEIF", 6)) || rt_str_eq(sel592, rt_str("END", 3)) || rt_str_eq(sel592, rt_str("EXCEPTION", 9)) || rt_str_eq(sel592, rt_str("EXIT", 4)) || rt_str_eq(sel592, rt_str("EXPORTS", 7)) || rt_str_eq(sel592, rt_str("EXPOSE", 6)) || rt_str_eq(sel592, rt_str("EXTERNAL", 8)) || rt_str_eq(sel592, rt_str("FOR", 3)) || rt_str_eq(sel592, rt_str("FROM", 4)) || rt_str_eq(sel592, rt_str("FUNC", 4)) || rt_str_eq(sel592, rt_str("GENERIC", 7)) || rt_str_eq(sel592, rt_str("GOTO", 4)) || rt_str_eq(sel592, rt_str("GUARD", 5)) || rt_str_eq(sel592, rt_str("IF", 2)) || rt_str_eq(sel592, rt_str("IMPORTS", 7)) || rt_str_eq(sel592, rt_str("LOCATION", 8)) || rt_str_eq(sel592, rt_str("NAMED", 5)) || rt_str_eq(sel592, rt_str("NEEDS", 5)) || rt_str_eq(sel592, rt_str("NEW", 3)) || rt_str_eq(sel592, rt_str("NONE", 4)) || rt_str_eq(sel592, rt_str("OUT", 3)) || rt_str_eq(sel592, rt_str("OF", 2)) || rt_str_eq(sel592, rt_str("PRAG", 4)) || rt_str_eq(sel592, rt_str("PROC", 4)) || rt_str_eq(sel592, rt_str("RAISE", 5)) || rt_str_eq(sel592, rt_str("READONLY", 8)) || rt_str_eq(sel592, rt_str("REVERSE", 7)) || rt_str_eq(sel592, rt_str("REGION", 6)) || rt_str_eq(sel592, rt_str("RENAMING", 8)) || rt_str_eq(sel592, rt_str("REP", 3)) || rt_str_eq(sel592, rt_str("REPEAT", 6)) || rt_str_eq(sel592, rt_str("RERAISE", 7)) || rt_str_eq(sel592, rt_str("RETURN", 6)) || rt_str_eq(sel592, rt_str("SUBTYPE", 7)) || rt_str_eq(sel592, rt_str("TASK", 4)) || rt_str_eq(sel592, rt_str("THEN", 4)) || rt_str_eq(sel592, rt_str("TO", 2)) || rt_str_eq(sel592, rt_str("TYPE", 4)) || rt_str_eq(sel592, rt_str("VAR", 3)) || rt_str_eq(sel592, rt_str("WAIT", 4)) || rt_str_eq(sel592, rt_str("WHEN", 4)) || rt_str_eq(sel592, rt_str("WHILE", 5))) {
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
F->t_593 = NULL;
{ R495 *cell594 = rt_alloc(sizeof(R495));
(*cell594).s = NULL;
F->t_593 = cell594;
}
(*(P494)rt_nil_check(F->t_593)).kind = F->kind_39;
(*(P494)rt_nil_check(F->t_593)).line = g_src_line_527;
(*(P494)rt_nil_check(F->t_593)).ival = F->ival_41;
(*(P494)rt_nil_check(F->t_593)).s = f_mk_3(&(*F->s_40));
g_ntoks_525 = rt_add(g_ntoks_525, ((rt_int)1LL));
(*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_ntoks_525, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo] = F->t_593;
ret_:
  return;
}

static void f_lex_line_44(rstr *line_43) {
  struct f_lex_line_44fr *F = rt_alloc(sizeof *F);
F->line_43 = line_43;
F->i_595 = ((rt_int)1LL);
F->j_596 = ((rt_int)0LL);
F->n_597 = ((*F->line_43)).len;
while ((F->i_595 <= F->n_597)) {
F->c_598 = rt_str_get((*F->line_43), F->i_595);
if (((((F->c_598 == 32) || (F->c_598 == 9)) || (F->c_598 == 13)) || (F->c_598 == 12))) {
F->i_595 = rt_add(F->i_595, ((rt_int)1LL));
} else if ((F->c_598 == 37)) {
F->i_595 = rt_add(F->n_597, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_598)) {
F->j_596 = F->i_595;
while (((F->j_596 <= F->n_597) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_596)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_596))) || (rt_str_get((*F->line_43), F->j_596) == 95)))) {
F->j_596 = rt_add(F->j_596, ((rt_int)1LL));
}
{
F->w_599 = rt_str_new(rt_sub(F->j_596, F->i_595));
rt_str_assign(&F->w_599, rt_str_slice((*F->line_43), F->i_595, rt_sub(F->j_596, ((rt_int)1LL))));
{ rt_int lo601 = ((rt_int)1LL), hi602 = (F->w_599).len;
for (rt_int it603 = lo601; it603 <= hi602; it603++) {
F->k_600 = it603;
(*rt_str_at(&F->w_599, F->k_600)) = f_upper_13(rt_str_get(F->w_599, F->k_600));
}
}
if (rt_str_eq(F->w_599, rt_str("PRAGMAT", 7))) {
while (((F->j_596 <= F->n_597) && (rt_str_get((*F->line_43), F->j_596) != 59))) {
F->j_596 = rt_add(F->j_596, ((rt_int)1LL));
}
F->j_596 = rt_add(F->j_596, ((rt_int)1LL));
} else if (f_is_reserved_36(&F->w_599)) {
f_add_token_42(((rt_int)2LL), &F->w_599, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_599)) {
f_add_token_42(((rt_int)3LL), &F->w_599, ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)1LL), &F->w_599, ((rt_int)0LL));
}
}
F->i_595 = F->j_596;
} else if (f_is_digit_11(F->c_598)) {
F->j_596 = F->i_595;
while (((F->j_596 <= F->n_597) && f_is_digit_11(rt_str_get((*F->line_43), F->j_596)))) {
F->j_596 = rt_add(F->j_596, ((rt_int)1LL));
}
if ((((F->j_596 < F->n_597) && (rt_str_get((*F->line_43), F->j_596) == 46)) && f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_596, ((rt_int)1LL)))))) {
F->j_596 = rt_add(F->j_596, ((rt_int)1LL));
while (((F->j_596 <= F->n_597) && f_is_digit_11(rt_str_get((*F->line_43), F->j_596)))) {
F->j_596 = rt_add(F->j_596, ((rt_int)1LL));
}
if (((F->j_596 <= F->n_597) && ((rt_str_get((*F->line_43), F->j_596) == 69) || (rt_str_get((*F->line_43), F->j_596) == 101)))) {
F->j_596 = rt_add(F->j_596, ((rt_int)1LL));
if (((F->j_596 <= F->n_597) && ((rt_str_get((*F->line_43), F->j_596) == 43) || (rt_str_get((*F->line_43), F->j_596) == 45)))) {
F->j_596 = rt_add(F->j_596, ((rt_int)1LL));
}
while (((F->j_596 <= F->n_597) && f_is_digit_11(rt_str_get((*F->line_43), F->j_596)))) {
F->j_596 = rt_add(F->j_596, ((rt_int)1LL));
}
}
f_add_token_42(((rt_int)5LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_595, rt_sub(F->j_596, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)4LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_595, rt_sub(F->j_596, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_43), F->i_595, rt_sub(F->j_596, ((rt_int)1LL)))));
}
F->i_595 = F->j_596;
} else if ((F->c_598 == 39)) {
F->j_596 = rt_add(F->i_595, ((rt_int)1LL));
if (((F->j_596 > F->n_597) || (!f_is_letter_9(rt_str_get((*F->line_43), F->j_596))))) {
f_fail_23(g_src_line_527, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_596 <= F->n_597) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_596)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_596))) || (rt_str_get((*F->line_43), F->j_596) == 95)))) {
F->j_596 = rt_add(F->j_596, ((rt_int)1LL));
}
{
F->w_604 = rt_str_new(rt_sub(rt_sub(F->j_596, F->i_595), ((rt_int)1LL)));
rt_str_assign(&F->w_604, rt_str_slice((*F->line_43), rt_add(F->i_595, ((rt_int)1LL)), rt_sub(F->j_596, ((rt_int)1LL))));
{ rt_int lo606 = ((rt_int)1LL), hi607 = (F->w_604).len;
for (rt_int it608 = lo606; it608 <= hi607; it608++) {
F->k_605 = it608;
(*rt_str_at(&F->w_604, F->k_605)) = f_upper_13(rt_str_get(F->w_604, F->k_605));
}
}
f_add_token_42(((rt_int)6LL), &F->w_604, ((rt_int)0LL));
}
F->i_595 = F->j_596;
} else if ((F->c_598 == 34)) {
F->j_596 = rt_add(F->i_595, ((rt_int)1LL));
while (((F->j_596 <= F->n_597) && (rt_str_get((*F->line_43), F->j_596) != 34))) {
F->j_596 = rt_add(F->j_596, ((rt_int)1LL));
}
if ((F->j_596 > F->n_597)) {
f_fail_23(g_src_line_527, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42(((rt_int)7LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), rt_add(F->i_595, ((rt_int)1LL)), rt_sub(F->j_596, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_595 = rt_add(F->j_596, ((rt_int)1LL));
} else {
{
F->two_609 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_609, rt_str("  ", 2));
(*rt_str_at(&F->two_609, ((rt_int)1LL))) = F->c_598;
if ((F->i_595 < F->n_597)) {
(*rt_str_at(&F->two_609, ((rt_int)2LL))) = rt_str_get((*F->line_43), rt_add(F->i_595, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_609, rt_str(":=", 2)) || rt_str_eq(F->two_609, rt_str("=>", 2))) || rt_str_eq(F->two_609, rt_str("..", 2))) || rt_str_eq(F->two_609, rt_str("**", 2))) || rt_str_eq(F->two_609, rt_str("/=", 2))) || rt_str_eq(F->two_609, rt_str("<=", 2))) || rt_str_eq(F->two_609, rt_str(">=", 2)))) {
f_add_token_42(((rt_int)3LL), &F->two_609, ((rt_int)0LL));
F->i_595 = rt_add(F->i_595, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_598 == 40) || (F->c_598 == 41)) || (F->c_598 == 91)) || (F->c_598 == 93)) || (F->c_598 == 44)) || (F->c_598 == 58)) || (F->c_598 == 59)) || (F->c_598 == 46)) || (F->c_598 == 35)) || (F->c_598 == 43)) || (F->c_598 == 45)) || (F->c_598 == 42)) || (F->c_598 == 47)) || (F->c_598 == 38)) || (F->c_598 == 61)) || (F->c_598 == 60)) || (F->c_598 == 62))) {
f_add_token_42(((rt_int)3LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_598); b_; }), ((rt_int)0LL));
F->i_595 = rt_add(F->i_595, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_527, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_610 = rt_str_new(rt_sizeln());
rt_readln(&F->line_610);
g_src_line_527 = rt_add(g_src_line_527, ((rt_int)1LL));
f_lex_line_44(&F->line_610);
}
f_add_token_42(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  return;
}

static P498 f_nn_48(rt_int kind_46, rt_int line_47) {
  struct f_nn_48fr *F = rt_alloc(sizeof *F);
F->kind_46 = kind_46;
F->line_47 = line_47;
F->x_611 = NULL;
{ R499 *cell612 = rt_alloc(sizeof(R499));
(*cell612).name = NULL;
(*cell612).tag = NULL;
(*cell612).a = NULL;
(*cell612).b = NULL;
(*cell612).c = NULL;
(*cell612).d = NULL;
(*cell612).e = NULL;
(*cell612).next = NULL;
F->x_611 = cell612;
}
(*(P498)rt_nil_check(F->x_611)).kind = F->kind_46;
(*(P498)rt_nil_check(F->x_611)).line = F->line_47;
F->result_ = F->x_611;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_append_52(P498 *head_49, P498 *tail_50, P498 x_51) {
  struct f_append_52fr *F = rt_alloc(sizeof *F);
F->head_49 = head_49;
F->tail_50 = tail_50;
F->x_51 = x_51;
if (((*F->head_49) == NULL)) {
(*F->head_49) = F->x_51;
} else {
(*(P498)rt_nil_check((*F->tail_50))).next = F->x_51;
}
(*F->tail_50) = F->x_51;
while (((*(P498)rt_nil_check((*F->tail_50))).next != NULL)) {
(*F->tail_50) = (*(P498)rt_nil_check((*F->tail_50))).next;
}
ret_:
  return;
}

static rt_int f_list_len_54(P498 l_53) {
  struct f_list_len_54fr *F = rt_alloc(sizeof *F);
F->l_53 = l_53;
F->n_613 = ((rt_int)0LL);
F->p_614 = NULL;
F->p_614 = F->l_53;
while ((F->p_614 != NULL)) {
F->n_613 = rt_add(F->n_613, ((rt_int)1LL));
F->p_614 = (*(P498)rt_nil_check(F->p_614)).next;
}
F->result_ = F->n_613;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_cur_line_55(void) {
  struct f_cur_line_55fr *F = rt_alloc(sizeof *F);
F->result_ = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kw_57(rstr *w_56) {
  struct f_at_kw_57fr *F = rt_alloc(sizeof *F);
F->w_56 = w_56;
F->result_ = (((*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).kind == ((rt_int)2LL)) && rt_str_eq((*(P493)rt_nil_check((*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s)), (*F->w_56)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_op_59(rstr *w_58) {
  struct f_at_op_59fr *F = rt_alloc(sizeof *F);
F->w_58 = w_58;
F->result_ = (((*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).kind == ((rt_int)3LL)) && rt_str_eq((*(P493)rt_nil_check((*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s)), (*F->w_58)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kind_61(rt_int k_60) {
  struct f_at_kind_61fr *F = rt_alloc(sizeof *F);
F->k_60 = k_60;
F->result_ = ((*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).kind == F->k_60);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_kind_at_63(rt_int k_62) {
  struct f_kind_at_63fr *F = rt_alloc(sizeof *F);
F->k_62 = k_62;
if ((rt_add(g_tpos_526, F->k_62) > g_ntoks_525)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(rt_add(g_tpos_526, F->k_62), (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P493 f_text_at_65(rt_int k_64) {
  struct f_text_at_65fr *F = rt_alloc(sizeof *F);
F->k_64 = k_64;
if ((rt_add(g_tpos_526, F->k_64) > g_ntoks_525)) {
F->result_ = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_ntoks_525, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s;
goto ret_;
}
F->result_ = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(rt_add(g_tpos_526, F->k_64), (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_perror_67(rstr *msg_66) {
  struct f_perror_67fr *F = rt_alloc(sizeof *F);
F->msg_66 = msg_66;
f_fail_23((*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_66), rt_str(" (at ", 5)), (*(P493)rt_nil_check((*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  return;
}

static int f_accept_kw_69(rstr *w_68) {
  struct f_accept_kw_69fr *F = rt_alloc(sizeof *F);
F->w_68 = w_68;
if (f_at_kw_57(&(*F->w_68))) {
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
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
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
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
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_op_75(rstr *w_74) {
  struct f_expect_op_75fr *F = rt_alloc(sizeof *F);
F->w_74 = w_74;
if ((!f_at_op_59(&(*F->w_74)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_74)); b_; }));
}
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
ret_:
  return;
}

static P493 f_expect_id_76(void) {
  struct f_expect_id_76fr *F = rt_alloc(sizeof *F);
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->result_ = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(rt_sub(g_tpos_526, ((rt_int)1LL)), (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_name_node_77(void) {
  struct f_name_node_77fr *F = rt_alloc(sizeof *F);
F->x_615 = NULL;
F->x_615 = f_nn_48(((rt_int)7LL), f_cur_line_55());
(*(P498)rt_nil_check(F->x_615)).name = f_expect_id_76();
F->result_ = F->x_615;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_id_list_78(void) {
  struct f_id_list_78fr *F = rt_alloc(sizeof *F);
F->head_616 = NULL;
F->tail_617 = NULL;
f_append_52(&F->head_616, &F->tail_617, f_name_node_77());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_616, &F->tail_617, f_name_node_77());
}
F->result_ = F->head_616;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_p_subtype_79(void) {
  struct f_p_subtype_79fr *F = rt_alloc(sizeof *F);
F->line_618 = f_cur_line_55();
F->x_619 = NULL;
if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->x_619 = f_nn_48(((rt_int)81LL), F->line_618);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P498)rt_nil_check(F->x_619)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_619;
goto ret_;
}
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_620 = rt_str_copy((*(P493)rt_nil_check((*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s)));
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
if (rt_str_eq(F->w_620, rt_str("ARRAY", 5))) {
F->x_619 = f_nn_48(((rt_int)74LL), F->line_618);
{
F->head_621 = NULL;
F->tail_622 = NULL;
f_append_52(&F->head_621, &F->tail_622, f_p_subtype_79());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_621, &F->tail_622, f_p_subtype_79());
}
(*(P498)rt_nil_check(F->x_619)).a = F->head_621;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P498)rt_nil_check(F->x_619)).b = f_p_subtype_79();
} else if ((rt_str_eq(F->w_620, rt_str("RECORD", 6)) || rt_str_eq(F->w_620, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_620, rt_str("RECORD", 6))) {
F->x_619 = f_nn_48(((rt_int)75LL), F->line_618);
} else {
F->x_619 = f_nn_48(((rt_int)76LL), F->line_618);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_623 = NULL;
F->tail_624 = NULL;
F->more_625 = 1;
while (F->more_625) {
F->names_626 = NULL;
F->names_626 = f_id_list_78();
F->st_627 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_627 = f_p_subtype_79();
while ((F->names_626 != NULL)) {
F->cmp_628 = NULL;
F->cmp_628 = f_nn_48(((rt_int)63LL), (*(P498)rt_nil_check(F->names_626)).line);
(*(P498)rt_nil_check(F->cmp_628)).name = (*(P498)rt_nil_check(F->names_626)).name;
(*(P498)rt_nil_check(F->cmp_628)).a = F->st_627;
f_append_52(&F->head_623, &F->tail_624, F->cmp_628);
F->names_626 = (*(P498)rt_nil_check(F->names_626)).next;
}
F->more_625 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P498)rt_nil_check(F->x_619)).a = F->head_623;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_620, rt_str("UNION", 5)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_619)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_620, rt_str("ENUM", 4))) {
F->x_619 = f_nn_48(((rt_int)72LL), F->line_618);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_629 = NULL;
F->tail_630 = NULL;
F->more_631 = 1;
while (F->more_631) {
F->lit_632 = NULL;
F->lit_632 = f_nn_48(((rt_int)4LL), F->line_618);
if ((!f_at_kind_61(((rt_int)6LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P498)rt_nil_check(F->lit_632)).name = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s;
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
f_append_52(&F->head_629, &F->tail_630, F->lit_632);
F->more_631 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P498)rt_nil_check(F->x_619)).a = F->head_629;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_619)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P498)rt_nil_check(F->x_619)).c = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_620, rt_str("STRING", 6)) || rt_str_eq(F->w_620, rt_str("SET", 3))) || rt_str_eq(F->w_620, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_620, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_620, rt_str("STRING", 6))) {
F->x_619 = f_nn_48(((rt_int)73LL), F->line_618);
} else if (rt_str_eq(F->w_620, rt_str("SET", 3))) {
F->x_619 = f_nn_48(((rt_int)77LL), F->line_618);
} else if (rt_str_eq(F->w_620, rt_str("MAILBOX", 7))) {
F->x_619 = f_nn_48(((rt_int)78LL), F->line_618);
} else {
F->x_619 = f_nn_48(((rt_int)79LL), F->line_618);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P498)rt_nil_check(F->x_619)).a = f_p_subtype_79();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_619)).b = f_actual_params_80();
}
} else if (rt_str_eq(F->w_620, rt_str("INT", 3))) {
F->x_619 = f_nn_48(((rt_int)70LL), F->line_618);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_619)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P498)rt_nil_check(F->x_619)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_620, rt_str("FLOAT", 5))) {
F->x_619 = f_nn_48(((rt_int)71LL), F->line_618);
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_619)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_619)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P498)rt_nil_check(F->x_619)).c = f_expr_89();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_619 = f_nn_48(((rt_int)80LL), F->line_618);
(*(P498)rt_nil_check(F->x_619)).name = f_mk_3(&F->w_620);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_619)).a = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_619)).b = f_actual_params_80();
(*(P498)rt_nil_check(F->x_619)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_619;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_actual_params_80(void) {
  struct f_actual_params_80fr *F = rt_alloc(sizeof *F);
F->head_633 = NULL;
F->tail_634 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_52(&F->head_633, &F->tail_634, f_expr_89());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_633, &F->tail_634, f_expr_89());
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_633;
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

static P498 f_actual_tt_83(void) {
  struct f_actual_tt_83fr *F = rt_alloc(sizeof *F);
F->head_635 = NULL;
F->tail_636 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_637 = 1;
while (F->more_637) {
if ((f_at_kind_61(((rt_int)1LL)) && f_is_type_word_82(&(*(P493)rt_nil_check((*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s))))) {
f_append_52(&F->head_635, &F->tail_636, f_p_subtype_79());
} else {
f_append_52(&F->head_635, &F->tail_636, f_expr_89());
}
F->more_637 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_635;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_binop_88(P493 op_84, P498 l_85, P498 r_86, rt_int line_87) {
  struct f_binop_88fr *F = rt_alloc(sizeof *F);
F->op_84 = op_84;
F->l_85 = l_85;
F->r_86 = r_86;
F->line_87 = line_87;
F->x_638 = NULL;
F->x_638 = f_nn_48(((rt_int)9LL), F->line_87);
(*(P498)rt_nil_check(F->x_638)).name = F->op_84;
(*(P498)rt_nil_check(F->x_638)).a = F->l_85;
(*(P498)rt_nil_check(F->x_638)).b = F->r_86;
F->result_ = F->x_638;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_expr_89(void) {
  struct f_expr_89fr *F = rt_alloc(sizeof *F);
F->l_639 = NULL;
F->l_639 = f_expr_and_90();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_640 = NULL;
F->op_640 = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s;
F->line_641 = f_cur_line_55();
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->l_639 = f_binop_88(F->op_640, F->l_639, f_expr_and_90(), F->line_641);
}
F->result_ = F->l_639;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_expr_and_90(void) {
  struct f_expr_and_90fr *F = rt_alloc(sizeof *F);
F->l_642 = NULL;
F->l_642 = f_expr_not_91();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_643 = f_cur_line_55();
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->l_642 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_642, f_expr_not_91(), F->line_643);
}
F->result_ = F->l_642;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_expr_not_91(void) {
  struct f_expr_not_91fr *F = rt_alloc(sizeof *F);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_644 = NULL;
F->x_644 = f_nn_48(((rt_int)8LL), f_cur_line_55());
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_644)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P498)rt_nil_check(F->x_644)).a = f_expr_not_91();
F->result_ = F->x_644;
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

static P498 f_expr_rel_94(void) {
  struct f_expr_rel_94fr *F = rt_alloc(sizeof *F);
F->l_645 = NULL;
F->l_645 = f_expr_add_95();
if ((f_at_kind_61(((rt_int)3LL)) && f_is_rel_93(&(*(P493)rt_nil_check((*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s))))) {
F->op_646 = NULL;
F->op_646 = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s;
F->line_647 = f_cur_line_55();
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->l_645 = f_binop_88(F->op_646, F->l_645, f_expr_add_95(), F->line_647);
}
F->result_ = F->l_645;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_expr_add_95(void) {
  struct f_expr_add_95fr *F = rt_alloc(sizeof *F);
F->l_648 = NULL;
F->l_648 = f_expr_mul_96();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_649 = NULL;
F->op_649 = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s;
F->line_650 = f_cur_line_55();
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->l_648 = f_binop_88(F->op_649, F->l_648, f_expr_mul_96(), F->line_650);
}
F->result_ = F->l_648;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_expr_mul_96(void) {
  struct f_expr_mul_96fr *F = rt_alloc(sizeof *F);
F->l_651 = NULL;
F->l_651 = f_expr_pow_97();
while (((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_652 = NULL;
F->op_652 = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s;
F->line_653 = f_cur_line_55();
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->l_651 = f_binop_88(F->op_652, F->l_651, f_expr_pow_97(), F->line_653);
}
F->result_ = F->l_651;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_expr_pow_97(void) {
  struct f_expr_pow_97fr *F = rt_alloc(sizeof *F);
F->l_654 = NULL;
F->l_654 = f_expr_prefix_98();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_655 = f_cur_line_55();
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->l_654 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_654, f_expr_prefix_98(), F->line_655);
}
F->result_ = F->l_654;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_expr_prefix_98(void) {
  struct f_expr_prefix_98fr *F = rt_alloc(sizeof *F);
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_656 = NULL;
F->x_656 = f_nn_48(((rt_int)8LL), f_cur_line_55());
(*(P498)rt_nil_check(F->x_656)).name = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s;
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_656)).a = f_expr_prefix_98();
F->result_ = F->x_656;
goto ret_;
}
F->result_ = f_postfix_99();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_postfix_99(void) {
  struct f_postfix_99fr *F = rt_alloc(sizeof *F);
F->p_657 = NULL;
F->p_657 = f_primary_100();
while (1) {
F->line_658 = f_cur_line_55();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_659 = NULL;
F->x_659 = f_nn_48(((rt_int)10LL), F->line_658);
F->head_660 = NULL;
F->tail_661 = NULL;
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_662 = 1;
while (F->more_662) {
F->lo_663 = NULL;
F->lo_663 = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_664 = NULL;
F->r_664 = f_nn_48(((rt_int)16LL), F->line_658);
(*(P498)rt_nil_check(F->r_664)).a = F->lo_663;
(*(P498)rt_nil_check(F->r_664)).b = f_expr_89();
f_append_52(&F->head_660, &F->tail_661, F->r_664);
} else {
f_append_52(&F->head_660, &F->tail_661, F->lo_663);
}
F->more_662 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P498)rt_nil_check(F->x_659)).a = F->p_657;
(*(P498)rt_nil_check(F->x_659)).b = F->head_660;
F->p_657 = F->x_659;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL)) || (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))))) {
F->x_665 = NULL;
F->x_665 = f_nn_48(((rt_int)11LL), F->line_658);
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_665)).a = F->p_657;
(*(P498)rt_nil_check(F->x_665)).name = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s;
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->p_657 = F->x_665;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P498)rt_nil_check(F->p_657)).kind == ((rt_int)7LL)))) {
F->x_666 = NULL;
F->x_666 = f_nn_48(((rt_int)12LL), F->line_658);
(*(P498)rt_nil_check(F->x_666)).a = F->p_657;
(*(P498)rt_nil_check(F->x_666)).b = f_actual_tt_83();
F->p_657 = F->x_666;
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_667 = NULL;
F->x_667 = f_nn_48(((rt_int)13LL), F->line_658);
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_667)).a = F->p_657;
(*(P498)rt_nil_check(F->x_667)).b = f_p_subtype_79();
F->p_657 = F->x_667;
} else {
F->result_ = F->p_657;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_primary_100(void) {
  struct f_primary_100fr *F = rt_alloc(sizeof *F);
F->line_668 = f_cur_line_55();
F->x_669 = NULL;
F->k_670 = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).kind;
if ((F->k_670 == ((rt_int)4LL))) {
F->x_669 = f_nn_48(((rt_int)1LL), F->line_668);
(*(P498)rt_nil_check(F->x_669)).ival = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).ival;
(*(P498)rt_nil_check(F->x_669)).name = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s;
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->result_ = F->x_669;
goto ret_;
}
if ((((F->k_670 == ((rt_int)5LL)) || (F->k_670 == ((rt_int)7LL))) || (F->k_670 == ((rt_int)6LL)))) {
if ((F->k_670 == ((rt_int)5LL))) {
F->x_669 = f_nn_48(((rt_int)2LL), F->line_668);
} else if ((F->k_670 == ((rt_int)7LL))) {
F->x_669 = f_nn_48(((rt_int)3LL), F->line_668);
} else {
F->x_669 = f_nn_48(((rt_int)4LL), F->line_668);
}
(*(P498)rt_nil_check(F->x_669)).name = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s;
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->result_ = F->x_669;
goto ret_;
}
if ((F->k_670 == ((rt_int)1LL))) {
F->w_671 = rt_str_copy((*(P493)rt_nil_check((*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s)));
if ((rt_str_eq(F->w_671, rt_str("TRUE", 4)) || rt_str_eq(F->w_671, rt_str("FALSE", 5)))) {
F->x_669 = f_nn_48(((rt_int)5LL), F->line_668);
if (rt_str_eq(F->w_671, rt_str("TRUE", 4))) {
(*(P498)rt_nil_check(F->x_669)).ival = ((rt_int)1LL);
}
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->result_ = F->x_669;
goto ret_;
}
if (rt_str_eq(F->w_671, rt_str("NIL", 3))) {
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)6LL), F->line_668);
goto ret_;
}
F->result_ = f_name_node_77();
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_669 = f_nn_48(((rt_int)17LL), F->line_668);
(*(P498)rt_nil_check(F->x_669)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_669;
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_672 = NULL;
F->tail_673 = NULL;
F->x_669 = f_nn_48(((rt_int)14LL), F->line_668);
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_674 = 1;
while (F->more_674) {
f_append_52(&F->head_672, &F->tail_673, f_constructor_item_101());
F->more_674 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P498)rt_nil_check(F->x_669)).a = F->head_672;
F->result_ = F->x_669;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_constructor_item_101(void) {
  struct f_constructor_item_101fr *F = rt_alloc(sizeof *F);
F->line_675 = f_cur_line_55();
F->it_676 = NULL;
F->it_676 = f_nn_48(((rt_int)15LL), F->line_675);
F->first_677 = NULL;
F->first_677 = f_expr_89();
F->keys_678 = NULL;
F->ktail_679 = NULL;
F->lab_680 = NULL;
F->lab_680 = f_nn_48(((rt_int)61LL), F->line_675);
(*(P498)rt_nil_check(F->lab_680)).a = F->first_677;
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P498)rt_nil_check(F->lab_680)).b = f_expr_89();
f_append_52(&F->keys_678, &F->ktail_679, F->lab_680);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_52(&F->keys_678, &F->ktail_679, F->lab_680);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_681 = g_tpos_526;
F->more_682 = NULL;
F->tail2_683 = NULL;
F->ok_684 = 0;
F->go_685 = 1;
while ((F->go_685 && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_686 = NULL;
F->l2_686 = f_nn_48(((rt_int)61LL), F->line_675);
(*(P498)rt_nil_check(F->l2_686)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P498)rt_nil_check(F->l2_686)).b = f_expr_89();
}
f_append_52(&F->more_682, &F->tail2_683, F->l2_686);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_684 = 1;
F->go_685 = 0;
} else if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_685 = 0;
}
}
if (F->ok_684) {
f_append_52(&F->keys_678, &F->ktail_679, F->lab_680);
f_append_52(&F->keys_678, &F->ktail_679, F->more_682);
} else {
g_tpos_526 = F->save_681;
}
}
if ((F->keys_678 != NULL)) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P498)rt_nil_check(F->it_676)).a = F->keys_678;
(*(P498)rt_nil_check(F->it_676)).b = f_expr_89();
} else {
(*(P498)rt_nil_check(F->it_676)).b = F->first_677;
}
F->result_ = F->it_676;
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

static P498 f_body_103(void) {
  struct f_body_103fr *F = rt_alloc(sizeof *F);
F->head_687 = NULL;
F->tail_688 = NULL;
while ((!f_at_body_end_102())) {
f_append_52(&F->head_687, &F->tail_688, f_body_element_104());
}
F->result_ = F->head_687;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_body_element_104(void) {
  struct f_body_element_104fr *F = rt_alloc(sizeof *F);
F->x_689 = NULL;
if ((((((((((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_689 = f_declaration_105();
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_689 = f_nn_48(((rt_int)33LL), f_cur_line_55());
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_689)).a = f_expr_89();
} else {
F->x_689 = f_statement_126();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_689;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_declaration_105(void) {
  struct f_declaration_105fr *F = rt_alloc(sizeof *F);
F->line_690 = f_cur_line_55();
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
F->head_691 = NULL;
F->tail_692 = NULL;
F->names_693 = NULL;
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->names_693 = f_id_list_78();
while ((F->names_693 != NULL)) {
F->x_694 = NULL;
F->x_694 = f_nn_48(((rt_int)49LL), F->line_690);
(*(P498)rt_nil_check(F->x_694)).name = (*(P498)rt_nil_check(F->names_693)).name;
f_append_52(&F->head_691, &F->tail_692, F->x_694);
F->names_693 = (*(P498)rt_nil_check(F->names_693)).next;
}
F->result_ = F->head_691;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_object_decl_106(void) {
  struct f_object_decl_106fr *F = rt_alloc(sizeof *F);
F->line_695 = f_cur_line_55();
F->is_var_696 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_697 = NULL;
F->st_698 = NULL;
F->init_699 = NULL;
F->head_700 = NULL;
F->tail_701 = NULL;
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->names_697 = f_id_list_78();
if (F->is_var_696) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_698 = f_p_subtype_79();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_699 = f_expr_89();
}
} else {
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_698 = f_p_subtype_79();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_699 = f_expr_89();
}
while ((F->names_697 != NULL)) {
F->x_702 = NULL;
if (F->is_var_696) {
F->x_702 = f_nn_48(((rt_int)40LL), F->line_695);
} else {
F->x_702 = f_nn_48(((rt_int)41LL), F->line_695);
}
(*(P498)rt_nil_check(F->x_702)).name = (*(P498)rt_nil_check(F->names_697)).name;
(*(P498)rt_nil_check(F->x_702)).a = F->st_698;
(*(P498)rt_nil_check(F->x_702)).b = F->init_699;
f_append_52(&F->head_700, &F->tail_701, F->x_702);
F->names_697 = (*(P498)rt_nil_check(F->names_697)).next;
}
F->result_ = F->head_700;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_abbrev_decl_107(void) {
  struct f_abbrev_decl_107fr *F = rt_alloc(sizeof *F);
F->x_703 = NULL;
F->x_703 = f_nn_48(((rt_int)42LL), f_cur_line_55());
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_703)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_703)).b = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P498)rt_nil_check(F->x_703)).a = f_p_subtype_79();
F->result_ = F->x_703;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_skip_rep_108(void) {
  struct f_skip_rep_108fr *F = rt_alloc(sizeof *F);
F->depth_704 = ((rt_int)0LL);
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((F->depth_704 == ((rt_int)0LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_61(((rt_int)0LL))))) {
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_704 = rt_add(F->depth_704, ((rt_int)1LL));
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_704 = rt_sub(F->depth_704, ((rt_int)1LL));
}
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
}
}
ret_:
  return;
}

static P498 f_type_decl_109(void) {
  struct f_type_decl_109fr *F = rt_alloc(sizeof *F);
F->line_705 = f_cur_line_55();
F->name_706 = NULL;
F->params_707 = NULL;
F->x_708 = NULL;
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->name_706 = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_707 = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P493)rt_nil_check((*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->x_708 = f_nn_48(((rt_int)44LL), F->line_705);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_708)).b = f_formal_params_112();
}
} else {
F->x_708 = f_nn_48(((rt_int)43LL), F->line_705);
(*(P498)rt_nil_check(F->x_708)).b = F->params_707;
}
(*(P498)rt_nil_check(F->x_708)).name = F->name_706;
(*(P498)rt_nil_check(F->x_708)).a = f_p_subtype_79();
f_skip_rep_108();
F->result_ = F->x_708;
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

static P498 f_formal_params_112(void) {
  struct f_formal_params_112fr *F = rt_alloc(sizeof *F);
F->head_709 = NULL;
F->tail_710 = NULL;
F->more_711 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_711) {
F->mode_712 = ((rt_int)1LL);
F->names_713 = NULL;
F->ntail_714 = NULL;
F->st_715 = NULL;
if ((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_712 = f_mode_of_111(&(*(P493)rt_nil_check((*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s)));
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
}
f_append_52(&F->names_713, &F->ntail_714, f_name_node_77());
while ((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL))) && (f_kind_at_63(((rt_int)2LL)) == ((rt_int)3LL))) && (rt_str_eq((*(P493)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P493)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
f_append_52(&F->names_713, &F->ntail_714, f_name_node_77());
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_715 = f_p_subtype_79();
while ((F->names_713 != NULL)) {
F->p_716 = NULL;
F->p_716 = f_nn_48(((rt_int)52LL), (*(P498)rt_nil_check(F->names_713)).line);
(*(P498)rt_nil_check(F->p_716)).name = (*(P498)rt_nil_check(F->names_713)).name;
(*(P498)rt_nil_check(F->p_716)).ival = F->mode_712;
(*(P498)rt_nil_check(F->p_716)).a = F->st_715;
f_append_52(&F->head_709, &F->tail_710, F->p_716);
F->names_713 = (*(P498)rt_nil_check(F->names_713)).next;
}
F->more_711 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_709;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_imports_list_114(P498 owner_113) {
  struct f_imports_list_114fr *F = rt_alloc(sizeof *F);
F->owner_113 = owner_113;
F->head_717 = NULL;
F->tail_718 = NULL;
F->more_719 = 1;
if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P498)rt_nil_check(F->owner_113)).flag = rt_add((*(P498)rt_nil_check(F->owner_113)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_719) {
F->ro_720 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_721 = NULL;
F->x_721 = f_name_node_77();
if (F->ro_720) {
(*(P498)rt_nil_check(F->x_721)).ival = ((rt_int)1LL);
}
f_append_52(&F->head_717, &F->tail_718, F->x_721);
F->more_719 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P498)rt_nil_check(F->owner_113)).d = F->head_717;
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

static P493 f_definable_name_117(void) {
  struct f_definable_name_117fr *F = rt_alloc(sizeof *F);
if ((f_at_kind_61(((rt_int)1LL)) || (f_at_kind_61(((rt_int)3LL)) && f_is_definable_116(&(*(P493)rt_nil_check((*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s)))))) {
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->result_ = (*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(rt_sub(g_tpos_526, ((rt_int)1LL)), (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_subprogram_decl_118(void) {
  struct f_subprogram_decl_118fr *F = rt_alloc(sizeof *F);
F->line_722 = f_cur_line_55();
F->x_723 = NULL;
F->is_abn_724 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_725 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_725) {
F->x_723 = f_nn_48(((rt_int)46LL), F->line_722);
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_723 = f_nn_48(((rt_int)45LL), F->line_722);
} else {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
if (F->is_abn_724) {
(*(P498)rt_nil_check(F->x_723)).flag = ((rt_int)1LL);
}
(*(P498)rt_nil_check(F->x_723)).name = f_definable_name_117();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_723)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_723)).a = f_formal_params_112();
}
if (F->is_func_725) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P498)rt_nil_check(F->x_723)).b = f_p_subtype_79();
}
F->dummy_726 = f_imports_list_114(F->x_723);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P498)rt_nil_check(F->x_723)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_725) {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P493)rt_nil_check(f_definable_name_117())), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->x_723)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->x_723)).name))); b_; }));
}
F->result_ = F->x_723;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_capsule_decl_119(void) {
  struct f_capsule_decl_119fr *F = rt_alloc(sizeof *F);
F->x_727 = NULL;
F->x_727 = f_nn_48(((rt_int)47LL), f_cur_line_55());
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_727)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_727)).b = f_formal_params_112();
}
F->dummy_728 = f_imports_list_114(F->x_727);
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P498)rt_nil_check(F->x_727)).ival = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P498)rt_nil_check(F->x_727)).ival = ((rt_int)0LL);
} else {
F->head_729 = NULL;
F->tail_730 = NULL;
F->more_731 = 1;
while (F->more_731) {
F->n_732 = NULL;
F->n_732 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P498)rt_nil_check(F->n_732)).ival = ((rt_int)1LL);
}
(*(P498)rt_nil_check(F->n_732)).name = f_definable_name_117();
f_append_52(&F->head_729, &F->tail_730, F->n_732);
F->more_731 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P498)rt_nil_check(F->x_727)).a = F->head_729;
(*(P498)rt_nil_check(F->x_727)).ival = ((rt_int)2LL);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P498)rt_nil_check(F->x_727)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P493)rt_nil_check(f_expect_id_76())), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->x_727)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_727;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_formal_tt_120(void) {
  struct f_formal_tt_120fr *F = rt_alloc(sizeof *F);
F->head_733 = NULL;
F->tail_734 = NULL;
F->more_735 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_735) {
f_append_52(&F->head_733, &F->tail_734, f_name_node_77());
F->more_735 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_733;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_generic_decl_121(void) {
  struct f_generic_decl_121fr *F = rt_alloc(sizeof *F);
F->x_736 = NULL;
F->x_736 = f_nn_48(((rt_int)51LL), f_cur_line_55());
F->head_737 = NULL;
F->tail_738 = NULL;
F->more_739 = 1;
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
while (F->more_739) {
F->names_740 = NULL;
F->names_740 = f_id_list_78();
F->kind_741 = ((rt_int)6LL);
F->st_742 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_741 = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_741 = ((rt_int)2LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_741 = ((rt_int)3LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_741 = ((rt_int)4LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_741 = ((rt_int)5LL);
} else {
F->st_742 = f_p_subtype_79();
}
if (((F->kind_741 <= ((rt_int)2LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P498)rt_nil_check(F->x_736)).e = f_actual_params_80();
} else if (((F->kind_741 >= ((rt_int)3LL)) && (F->kind_741 <= ((rt_int)5LL)))) {
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_742 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
}
if (((F->kind_741 == ((rt_int)4LL)) && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_742 = f_p_subtype_79();
}
}
while ((F->names_740 != NULL)) {
F->p_743 = NULL;
F->p_743 = f_nn_48(((rt_int)52LL), (*(P498)rt_nil_check(F->names_740)).line);
(*(P498)rt_nil_check(F->p_743)).name = (*(P498)rt_nil_check(F->names_740)).name;
(*(P498)rt_nil_check(F->p_743)).ival = F->kind_741;
(*(P498)rt_nil_check(F->p_743)).a = F->st_742;
f_append_52(&F->head_737, &F->tail_738, F->p_743);
F->names_740 = (*(P498)rt_nil_check(F->names_740)).next;
}
F->more_739 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_739 = 1;
while (F->more_739) {
F->nm_744 = NULL;
F->nm_744 = f_definable_name_117();
F->st_745 = NULL;
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_745 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_745 = f_p_subtype_79();
}
F->more_739 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P498)rt_nil_check(F->x_736)).a = F->head_737;
(*(P498)rt_nil_check(F->x_736)).b = f_declaration_105();
(*(P498)rt_nil_check(F->x_736)).name = (*(P498)rt_nil_check((*(P498)rt_nil_check(F->x_736)).b)).name;
F->result_ = F->x_736;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_task_decl_122(void) {
  struct f_task_decl_122fr *F = rt_alloc(sizeof *F);
F->x_746 = NULL;
F->x_746 = f_nn_48(((rt_int)50LL), f_cur_line_55());
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_746)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_746)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_746)).a = f_formal_params_112();
}
F->dummy_747 = f_imports_list_114(F->x_746);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P498)rt_nil_check(F->x_746)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P493)rt_nil_check(f_expect_id_76())), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->x_746)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->x_746)).name))); b_; }));
}
F->result_ = F->x_746;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_expose_decl_123(void) {
  struct f_expose_decl_123fr *F = rt_alloc(sizeof *F);
F->x_748 = NULL;
F->x_748 = f_nn_48(((rt_int)48LL), f_cur_line_55());
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P498)rt_nil_check(F->x_748)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_749 = NULL;
F->tail_750 = NULL;
F->more_751 = 1;
while (F->more_751) {
F->n_752 = NULL;
F->n_752 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P498)rt_nil_check(F->n_752)).ival = ((rt_int)1LL);
}
(*(P498)rt_nil_check(F->n_752)).name = f_definable_name_117();
f_append_52(&F->head_749, &F->tail_750, F->n_752);
F->more_751 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P498)rt_nil_check(F->x_748)).a = F->head_749;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P498)rt_nil_check(F->x_748)).flag = ((rt_int)1LL);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P498)rt_nil_check(F->x_748)).flag = rt_add((*(P498)rt_nil_check(F->x_748)).flag, ((rt_int)2LL));
}
(*(P498)rt_nil_check(F->x_748)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_748)).b = f_actual_params_80();
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_753 = NULL;
F->tail_754 = NULL;
F->more_755 = 1;
while (F->more_755) {
F->n_756 = NULL;
F->n_756 = f_nn_48(((rt_int)7LL), f_cur_line_55());
F->tgt_757 = NULL;
F->tgt_757 = f_nn_48(((rt_int)7LL), f_cur_line_55());
(*(P498)rt_nil_check(F->n_756)).name = f_definable_name_117();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P498)rt_nil_check(F->tgt_757)).name = f_definable_name_117();
(*(P498)rt_nil_check(F->n_756)).a = F->tgt_757;
f_append_52(&F->head_753, &F->tail_754, F->n_756);
F->more_755 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P498)rt_nil_check(F->x_748)).c = F->head_753;
}
F->result_ = F->x_748;
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

static P498 f_statement_126(void) {
  struct f_statement_126fr *F = rt_alloc(sizeof *F);
F->labels_758 = NULL;
F->ltail_759 = NULL;
F->match_760 = NULL;
F->s_761 = NULL;
while (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq((*(P493)rt_nil_check(f_text_at_65(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_52(&F->labels_758, &F->ltail_759, f_name_node_77());
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
}
if (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))) && f_is_compound_kw_125(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P493)rt_nil_check(f_text_at_65(((rt_int)1LL)))); b_; })))) {
F->match_760 = f_expect_id_76();
}
F->s_761 = f_unlabeled_statement_127();
if ((F->match_760 != NULL)) {
if (((((((((*(P498)rt_nil_check(F->s_761)).kind != ((rt_int)22LL)) && ((*(P498)rt_nil_check(F->s_761)).kind != ((rt_int)23LL))) && ((*(P498)rt_nil_check(F->s_761)).kind != ((rt_int)24LL))) && ((*(P498)rt_nil_check(F->s_761)).kind != ((rt_int)25LL))) && ((*(P498)rt_nil_check(F->s_761)).kind != ((rt_int)26LL))) && ((*(P498)rt_nil_check(F->s_761)).kind != ((rt_int)35LL))) && ((*(P498)rt_nil_check(F->s_761)).kind != ((rt_int)36LL)))) {
f_fail_23((*(P498)rt_nil_check(F->s_761)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P493)rt_nil_check(f_expect_id_76())), (*(P493)rt_nil_check(F->match_760))))) {
f_fail_23((*(P498)rt_nil_check(F->s_761)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P493)rt_nil_check(F->match_760))); b_; }));
}
(*(P498)rt_nil_check(F->s_761)).tag = F->match_760;
}
if ((F->labels_758 != NULL)) {
f_fail_23((*(P498)rt_nil_check(F->s_761)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_761;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_unlabeled_statement_127(void) {
  struct f_unlabeled_statement_127fr *F = rt_alloc(sizeof *F);
F->line_762 = f_cur_line_55();
F->x_763 = NULL;
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
F->x_763 = f_nn_48(((rt_int)25LL), F->line_762);
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_763)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_763;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_135();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_763 = f_nn_48(((rt_int)27LL), F->line_762);
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_763)).name = f_expect_id_76();
F->result_ = F->x_763;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_763 = f_nn_48(((rt_int)28LL), F->line_762);
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P498)rt_nil_check(F->x_763)).a = f_expr_89();
}
F->result_ = F->x_763;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_763 = f_nn_48(((rt_int)30LL), F->line_762);
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_763)).name = f_expect_id_76();
F->result_ = F->x_763;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)31LL), F->line_762);
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_763 = f_nn_48(((rt_int)34LL), F->line_762);
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_763)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_763)).e = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_763)).b = f_actual_params_80();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P498)rt_nil_check(F->x_763)).a = f_postfix_99();
F->result_ = F->x_763;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_764 = NULL;
F->tail_765 = NULL;
F->x_763 = f_nn_48(((rt_int)35LL), F->line_762);
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_766 = NULL;
F->itail_767 = NULL;
F->more_768 = 1;
while (F->more_768) {
f_append_52(&F->invs_766, &F->itail_767, f_postfix_99());
F->more_768 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_764, &F->tail_765, f_arm_131(F->invs_766, f_body_103(), F->line_762));
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P498)rt_nil_check(F->x_763)).a = F->head_764;
F->result_ = F->x_763;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_763 = f_nn_48(((rt_int)36LL), F->line_762);
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_763)).a = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P498)rt_nil_check(F->x_763)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_763;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_763 = f_nn_48(((rt_int)32LL), F->line_762);
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_763)).a = f_postfix_99();
if ((!(f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P493)rt_nil_check((*(P494)rt_nil_check((*(P496)rt_nil_check(g_toks_524)).p[rt_index(g_tpos_526, (*(P496)rt_nil_check(g_toks_524)).lo, (*(P496)rt_nil_check(g_toks_524)).hi) - (*(P496)rt_nil_check(g_toks_524)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P498)rt_nil_check(F->x_763)).b = f_actual_params_80();
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P498)rt_nil_check(F->x_763)).c = f_expr_89();
}
F->result_ = F->x_763;
goto ret_;
}
{
F->target_769 = NULL;
F->target_769 = f_postfix_99();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_763 = f_nn_48(((rt_int)20LL), F->line_762);
(*(P498)rt_nil_check(F->x_763)).a = F->target_769;
(*(P498)rt_nil_check(F->x_763)).b = f_expr_89();
} else {
F->x_763 = f_nn_48(((rt_int)21LL), F->line_762);
(*(P498)rt_nil_check(F->x_763)).a = F->target_769;
}
}
F->result_ = F->x_763;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_arm_131(P498 cond_128, P498 b_129, rt_int line_130) {
  struct f_arm_131fr *F = rt_alloc(sizeof *F);
F->cond_128 = cond_128;
F->b_129 = b_129;
F->line_130 = line_130;
F->x_770 = NULL;
F->x_770 = f_nn_48(((rt_int)60LL), F->line_130);
(*(P498)rt_nil_check(F->x_770)).a = F->cond_128;
(*(P498)rt_nil_check(F->x_770)).b = F->b_129;
F->result_ = F->x_770;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_if_stmt_132(void) {
  struct f_if_stmt_132fr *F = rt_alloc(sizeof *F);
F->x_771 = NULL;
F->x_771 = f_nn_48(((rt_int)22LL), f_cur_line_55());
F->head_772 = NULL;
F->tail_773 = NULL;
F->cond_774 = NULL;
F->go_775 = 1;
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
F->cond_774 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_772, &F->tail_773, f_arm_131(F->cond_774, f_body_103(), (*(P498)rt_nil_check(F->x_771)).line));
while (F->go_775) {
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_774 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_772, &F->tail_773, f_arm_131(F->cond_774, f_body_103(), (*(P498)rt_nil_check(F->x_771)).line));
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P498)rt_nil_check(F->x_771)).flag = ((rt_int)1LL);
(*(P498)rt_nil_check(F->x_771)).b = f_body_103();
} else {
F->go_775 = 0;
}
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P498)rt_nil_check(F->x_771)).a = F->head_772;
F->result_ = F->x_771;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_case_stmt_133(void) {
  struct f_case_stmt_133fr *F = rt_alloc(sizeof *F);
F->x_776 = NULL;
F->x_776 = f_nn_48(((rt_int)23LL), f_cur_line_55());
F->head_777 = NULL;
F->tail_778 = NULL;
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_776)).a = f_expr_89();
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_779 = NULL;
F->ltail_780 = NULL;
F->more_781 = 1;
while (F->more_781) {
F->l_782 = NULL;
F->l_782 = f_nn_48(((rt_int)61LL), f_cur_line_55());
(*(P498)rt_nil_check(F->l_782)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P498)rt_nil_check(F->l_782)).b = f_expr_89();
}
f_append_52(&F->labs_779, &F->ltail_780, F->l_782);
F->more_781 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_777, &F->tail_778, f_arm_131(F->labs_779, f_body_103(), (*(P498)rt_nil_check(F->x_776)).line));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P498)rt_nil_check(F->x_776)).flag = ((rt_int)1LL);
(*(P498)rt_nil_check(F->x_776)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P498)rt_nil_check(F->x_776)).b = F->head_777;
F->result_ = F->x_776;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_repeat_stmt_134(void) {
  struct f_repeat_stmt_134fr *F = rt_alloc(sizeof *F);
F->x_783 = NULL;
F->x_783 = f_nn_48(((rt_int)24LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P498)rt_nil_check(F->x_783)).flag = ((rt_int)1LL);
(*(P498)rt_nil_check(F->x_783)).name = f_expect_id_76();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P498)rt_nil_check(F->x_783)).ival = ((rt_int)1LL);
}
(*(P498)rt_nil_check(F->x_783)).a = f_p_subtype_79();
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P498)rt_nil_check(F->x_783)).a = f_expr_89();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P498)rt_nil_check(F->x_783)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_783;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_guard_stmt_135(void) {
  struct f_guard_stmt_135fr *F = rt_alloc(sizeof *F);
F->x_784 = NULL;
F->x_784 = f_nn_48(((rt_int)26LL), f_cur_line_55());
F->head_785 = NULL;
F->tail_786 = NULL;
g_tpos_526 = rt_add(g_tpos_526, ((rt_int)1LL));
(*(P498)rt_nil_check(F->x_784)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_787 = NULL;
F->h_787 = f_nn_48(((rt_int)62LL), f_cur_line_55());
(*(P498)rt_nil_check(F->h_787)).a = f_id_list_78();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P498)rt_nil_check(F->h_787)).b = f_body_103();
f_append_52(&F->head_785, &F->tail_786, F->h_787);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P498)rt_nil_check(F->x_784)).flag = ((rt_int)1LL);
(*(P498)rt_nil_check(F->x_784)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P498)rt_nil_check(F->x_784)).b = F->head_785;
F->result_ = F->x_784;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_program_136(void) {
  struct f_program_136fr *F = rt_alloc(sizeof *F);
F->head_788 = NULL;
F->tail_789 = NULL;
while ((!f_at_kind_61(((rt_int)0LL)))) {
if ((!f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
f_append_52(&F->head_788, &F->tail_789, f_capsule_decl_119());
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_788;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_hash_138(rstr *s_137) {
  struct f_hash_138fr *F = rt_alloc(sizeof *F);
F->s_137 = s_137;
F->h_790 = ((rt_int)0LL);
{ rt_int lo792 = ((rt_int)1LL), hi793 = ((*F->s_137)).len;
for (rt_int it794 = lo792; it794 <= hi793; it794++) {
F->i_791 = it794;
F->h_790 = rt_mod(rt_add(rt_mul(F->h_790, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_137), F->i_791)) + 1)), ((rt_int)4093LL));
}
}
F->result_ = F->h_790;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P506 f_lookup_140(rstr *name_139) {
  struct f_lookup_140fr *F = rt_alloc(sizeof *F);
F->name_139 = name_139;
F->y_795 = NULL;
F->y_795 = (*(P514)rt_nil_check(g_table_528)).p[rt_index(f_hash_138(&(*F->name_139)), (*(P514)rt_nil_check(g_table_528)).lo, (*(P514)rt_nil_check(g_table_528)).hi) - (*(P514)rt_nil_check(g_table_528)).lo];
while ((F->y_795 != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_795)).name)), (*F->name_139))) {
F->result_ = F->y_795;
goto ret_;
}
F->y_795 = (*(P506)rt_nil_check(F->y_795)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P506 f_lookup_decl_142(P498 d_141) {
  struct f_lookup_decl_142fr *F = rt_alloc(sizeof *F);
F->d_141 = d_141;
F->y_796 = NULL;
F->y_796 = (*(P514)rt_nil_check(g_table_528)).p[rt_index(f_hash_138(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->d_141)).name))), (*(P514)rt_nil_check(g_table_528)).lo, (*(P514)rt_nil_check(g_table_528)).hi) - (*(P514)rt_nil_check(g_table_528)).lo];
while ((F->y_796 != NULL)) {
if (((*(P506)rt_nil_check(F->y_796)).decl == F->d_141)) {
F->result_ = F->y_796;
goto ret_;
}
F->y_796 = (*(P506)rt_nil_check(F->y_796)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_define_145(P506 y_143, rt_int line_144) {
  struct f_define_145fr *F = rt_alloc(sizeof *F);
F->y_143 = y_143;
F->line_144 = line_144;
F->h_797 = f_hash_138(&(*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_143)).name)));
F->z_798 = NULL;
F->z_798 = (*(P514)rt_nil_check(g_table_528)).p[rt_index(F->h_797, (*(P514)rt_nil_check(g_table_528)).lo, (*(P514)rt_nil_check(g_table_528)).hi) - (*(P514)rt_nil_check(g_table_528)).lo];
while ((F->z_798 != NULL)) {
if (((((*(P506)rt_nil_check(F->z_798)).depth == g_depth_529) && rt_str_eq((*(P493)rt_nil_check((*(P506)rt_nil_check(F->z_798)).name)), (*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_143)).name)))) && (!(((f_overloadable_147(F->y_143) && f_overloadable_147(F->z_798)) && ((*(P506)rt_nil_check(F->z_798)).kind == (*(P506)rt_nil_check(F->y_143)).kind)) && (!f_same_signature_150((*(P506)rt_nil_check(F->y_143)).params, (*(P506)rt_nil_check(F->z_798)).params)))))) {
f_fail_23(F->line_144, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_143)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_798 = (*(P506)rt_nil_check(F->z_798)).chain;
}
(*(P506)rt_nil_check(F->y_143)).depth = g_depth_529;
(*(P506)rt_nil_check(F->y_143)).chain = (*(P514)rt_nil_check(g_table_528)).p[rt_index(F->h_797, (*(P514)rt_nil_check(g_table_528)).lo, (*(P514)rt_nil_check(g_table_528)).hi) - (*(P514)rt_nil_check(g_table_528)).lo];
(*(P514)rt_nil_check(g_table_528)).p[rt_index(F->h_797, (*(P514)rt_nil_check(g_table_528)).lo, (*(P514)rt_nil_check(g_table_528)).hi) - (*(P514)rt_nil_check(g_table_528)).lo] = F->y_143;
(*(P506)rt_nil_check(F->y_143)).stack = g_scope_stack_530;
g_scope_stack_530 = F->y_143;
ret_:
  return;
}

static int f_overloadable_147(P506 y_146) {
  struct f_overloadable_147fr *F = rt_alloc(sizeof *F);
F->y_146 = y_146;
F->result_ = ((((*(P506)rt_nil_check(F->y_146)).kind == ((rt_int)3LL)) || ((*(P506)rt_nil_check(F->y_146)).kind == ((rt_int)4LL))) || ((*(P506)rt_nil_check(F->y_146)).kind == ((rt_int)9LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_signature_150(P508 a_148, P508 b_149) {
  struct f_same_signature_150fr *F = rt_alloc(sizeof *F);
F->a_148 = a_148;
F->b_149 = b_149;
F->x_799 = NULL;
F->x_799 = F->a_148;
F->y_800 = NULL;
F->y_800 = F->b_149;
while (((F->x_799 != NULL) && (F->y_800 != NULL))) {
if ((!f_same_164((*(P508)rt_nil_check(F->x_799)).t, (*(P508)rt_nil_check(F->y_800)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_799 = (*(P508)rt_nil_check(F->x_799)).next;
F->y_800 = (*(P508)rt_nil_check(F->y_800)).next;
}
F->result_ = ((F->x_799 == NULL) && (F->y_800 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_open_scope_151(void) {
  struct f_open_scope_151fr *F = rt_alloc(sizeof *F);
g_depth_529 = rt_add(g_depth_529, ((rt_int)1LL));
ret_:
  return;
}

static void f_close_scope_152(void) {
  struct f_close_scope_152fr *F = rt_alloc(sizeof *F);
while (((g_scope_stack_530 != NULL) && ((*(P506)rt_nil_check(g_scope_stack_530)).depth == g_depth_529))) {
(*(P514)rt_nil_check(g_table_528)).p[rt_index(f_hash_138(&(*(P493)rt_nil_check((*(P506)rt_nil_check(g_scope_stack_530)).name))), (*(P514)rt_nil_check(g_table_528)).lo, (*(P514)rt_nil_check(g_table_528)).hi) - (*(P514)rt_nil_check(g_table_528)).lo] = (*(P506)rt_nil_check(g_scope_stack_530)).chain;
g_scope_stack_530 = (*(P506)rt_nil_check(g_scope_stack_530)).stack;
}
g_depth_529 = rt_sub(g_depth_529, ((rt_int)1LL));
ret_:
  return;
}

static P506 f_new_sym_155(rt_int kind_153, P493 name_154) {
  struct f_new_sym_155fr *F = rt_alloc(sizeof *F);
F->kind_153 = kind_153;
F->name_154 = name_154;
F->y_801 = NULL;
{ R507 *cell802 = rt_alloc(sizeof(R507));
(*cell802).name = NULL;
(*cell802).t = NULL;
(*cell802).c = NULL;
(*cell802).access = NULL;
(*cell802).cname = NULL;
(*cell802).st = NULL;
(*cell802).decl = NULL;
(*cell802).params = NULL;
(*cell802).result = NULL;
(*cell802).members = NULL;
(*cell802).mnext = NULL;
(*cell802).binds = NULL;
(*cell802).insts = NULL;
(*cell802).chain = NULL;
(*cell802).stack = NULL;
F->y_801 = cell802;
}
(*(P506)rt_nil_check(F->y_801)).kind = F->kind_153;
(*(P506)rt_nil_check(F->y_801)).name = F->name_154;
F->result_ = F->y_801;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P502 f_new_typ_157(rt_int kind_156) {
  struct f_new_typ_157fr *F = rt_alloc(sizeof *F);
F->kind_156 = kind_156;
F->t_803 = NULL;
{ R503 *cell804 = rt_alloc(sizeof(R503));
(*cell804).name = NULL;
(*cell804).lits = NULL;
(*cell804).elem = NULL;
(*cell804).idx = NULL;
(*cell804).idx2 = NULL;
(*cell804).elemcons = NULL;
(*cell804).elemst = NULL;
(*cell804).under = NULL;
(*cell804).tparams = NULL;
(*cell804).ocap = NULL;
(*cell804).fields = NULL;
(*cell804).target = NULL;
(*cell804).decl = NULL;
(*cell804).cname = NULL;
(*cell804).initp = NULL;
(*cell804).tpsyms = NULL;
(*cell804).next = NULL;
F->t_803 = cell804;
}
(*(P502)rt_nil_check(F->t_803)).kind = F->kind_156;
F->result_ = F->t_803;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P500 f_new_cons_158(void) {
  struct f_new_cons_158fr *F = rt_alloc(sizeof *F);
F->c_805 = NULL;
{ R501 *cell806 = rt_alloc(sizeof(R501));
(*cell806).lo = NULL;
(*cell806).hi = NULL;
(*cell806).lo2 = NULL;
(*cell806).hi2 = NULL;
(*cell806).slen = NULL;
(*cell806).args = NULL;
F->c_805 = cell806;
}
F->result_ = F->c_805;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_lits_161(P498 a_159, P498 b_160) {
  struct f_same_lits_161fr *F = rt_alloc(sizeof *F);
F->a_159 = a_159;
F->b_160 = b_160;
F->x_807 = NULL;
F->x_807 = F->a_159;
F->y_808 = NULL;
F->y_808 = F->b_160;
while (((F->x_807 != NULL) && (F->y_808 != NULL))) {
if ((!rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->x_807)).name)), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->y_808)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_807 = (*(P498)rt_nil_check(F->x_807)).next;
F->y_808 = (*(P498)rt_nil_check(F->y_808)).next;
}
F->result_ = ((F->x_807 == NULL) && (F->y_808 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_164(P502 a_162, P502 b_163) {
  struct f_same_164fr *F = rt_alloc(sizeof *F);
F->a_162 = a_162;
F->b_163 = b_163;
if ((F->a_162 == F->b_163)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_162 == NULL) || (F->b_163 == NULL)) || ((*(P502)rt_nil_check(F->a_162)).kind != (*(P502)rt_nil_check(F->b_163)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P502)rt_nil_check(F->a_162)).kind == ((rt_int)1LL)) || ((*(P502)rt_nil_check(F->a_162)).kind == ((rt_int)2LL))) || ((*(P502)rt_nil_check(F->a_162)).kind == ((rt_int)3LL))) || ((*(P502)rt_nil_check(F->a_162)).kind == ((rt_int)5LL))) || ((*(P502)rt_nil_check(F->a_162)).kind == ((rt_int)9LL))) || ((*(P502)rt_nil_check(F->a_162)).kind == ((rt_int)10LL)))) {
F->result_ = 1;
goto ret_;
}
if (((*(P502)rt_nil_check(F->a_162)).kind == ((rt_int)4LL))) {
F->result_ = f_same_lits_161((*(P502)rt_nil_check(F->a_162)).lits, (*(P502)rt_nil_check(F->b_163)).lits);
goto ret_;
}
if (((*(P502)rt_nil_check(F->a_162)).kind == ((rt_int)6LL))) {
if ((((*(P502)rt_nil_check(F->a_162)).idx2 == NULL) != ((*(P502)rt_nil_check(F->b_163)).idx2 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_164((*(P502)rt_nil_check(F->a_162)).elem, (*(P502)rt_nil_check(F->b_163)).elem) && f_same_164((*(P502)rt_nil_check(F->a_162)).idx, (*(P502)rt_nil_check(F->b_163)).idx));
goto ret_;
}
if ((((*(P502)rt_nil_check(F->a_162)).kind == ((rt_int)16LL)) || ((*(P502)rt_nil_check(F->a_162)).kind == ((rt_int)12LL)))) {
F->result_ = f_same_164((*(P502)rt_nil_check(F->a_162)).elem, (*(P502)rt_nil_check(F->b_163)).elem);
goto ret_;
}
if (((*(P502)rt_nil_check(F->a_162)).kind == ((rt_int)7LL))) {
F->f_809 = NULL;
F->f_809 = (*(P502)rt_nil_check(F->a_162)).fields;
F->g_810 = NULL;
F->g_810 = (*(P502)rt_nil_check(F->b_163)).fields;
while (((F->f_809 != NULL) && (F->g_810 != NULL))) {
if (((!rt_str_eq((*(P493)rt_nil_check((*(P504)rt_nil_check(F->f_809)).name)), (*(P493)rt_nil_check((*(P504)rt_nil_check(F->g_810)).name)))) || (!f_same_164((*(P504)rt_nil_check(F->f_809)).t, (*(P504)rt_nil_check(F->g_810)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_809 = (*(P504)rt_nil_check(F->f_809)).next;
F->g_810 = (*(P504)rt_nil_check(F->g_810)).next;
}
F->result_ = ((F->f_809 == NULL) && (F->g_810 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P502 f_base_of_166(P502 t_165) {
  struct f_base_of_166fr *F = rt_alloc(sizeof *F);
F->t_165 = t_165;
if ((((F->t_165 != NULL) && ((*(P502)rt_nil_check(F->t_165)).kind == ((rt_int)15LL))) && ((*(P502)rt_nil_check(F->t_165)).tparams == NULL))) {
F->result_ = f_base_of_166((*(P502)rt_nil_check(F->t_165)).under);
goto ret_;
}
F->result_ = F->t_165;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P500 f_base_cons_169(P502 t_167, P500 c_168) {
  struct f_base_cons_169fr *F = rt_alloc(sizeof *F);
F->t_167 = t_167;
F->c_168 = c_168;
if (((((F->t_167 != NULL) && ((*(P502)rt_nil_check(F->t_167)).kind == ((rt_int)15LL))) && ((*(P502)rt_nil_check(F->t_167)).tparams == NULL)) && ((*(P502)rt_nil_check(F->t_167)).elemcons != NULL))) {
F->result_ = f_base_cons_169((*(P502)rt_nil_check(F->t_167)).under, (*(P502)rt_nil_check(F->t_167)).elemcons);
goto ret_;
}
F->result_ = F->c_168;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_kind_name_171(P502 t_170) {
  struct f_kind_name_171fr *F = rt_alloc(sizeof *F);
F->t_170 = t_170;
{ rt_int sel811 = (*(P502)rt_nil_check(F->t_170)).kind;
if (0 || (sel811 == ((rt_int)1LL))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel811 == ((rt_int)2LL))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel811 == ((rt_int)3LL))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel811 == ((rt_int)4LL))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel811 == ((rt_int)5LL))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel811 == ((rt_int)6LL))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel811 == ((rt_int)7LL))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel811 == ((rt_int)8LL))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_170)).name)));
goto ret_;
} else if (0 || (sel811 == ((rt_int)11LL))) {
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

static void f_check_type_175(P502 got_172, P502 want_173, rt_int line_174) {
  struct f_check_type_175fr *F = rt_alloc(sizeof *F);
F->got_172 = got_172;
F->want_173 = want_173;
F->line_174 = line_174;
if ((F->want_173 == NULL)) {
goto ret_;
}
if ((((*(P502)rt_nil_check(F->got_172)).kind == ((rt_int)11LL)) && ((*(P502)rt_nil_check(F->want_173)).kind == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_164(F->got_172, F->want_173))) {
f_fail_23(F->line_174, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_171(F->got_172)), rt_str(" where ", 7)), f_kind_name_171(F->want_173)), rt_str(" is required", 12)); b_; }));
}
ret_:
  return;
}

static rstr f_ctype_177(P502 t_176) {
  struct f_ctype_177fr *F = rt_alloc(sizeof *F);
F->t_176 = t_176;
{ rt_int sel812 = (*(P502)rt_nil_check(F->t_176)).kind;
if (0 || (sel812 == ((rt_int)1LL))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel812 == ((rt_int)2LL)) || (sel812 == ((rt_int)4LL)) || (sel812 == ((rt_int)10LL))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel812 == ((rt_int)3LL))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel812 == ((rt_int)5LL))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel812 == ((rt_int)9LL))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel812 == ((rt_int)12LL))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel812 == ((rt_int)13LL))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel812 == ((rt_int)14LL))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel812 == ((rt_int)16LL))) {
F->result_ = rt_str("rset", 4);
goto ret_;
} else {
if (((*(P502)rt_nil_check(F->t_176)).cname == NULL)) {
f_declare_ctype_181(F->t_176);
} else if (((((*(P502)rt_nil_check(F->t_176)).kind == ((rt_int)7LL)) && (*(P502)rt_nil_check(F->t_176)).forward) && (!(*(P502)rt_nil_check(F->t_176)).defined))) {
(*(P502)rt_nil_check(F->t_176)).defined = 1;
f_put_27(g_out_types_533, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_176)).cname))), rt_str(" { ", 3)), f_field_decls_179(F->t_176)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_176)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_decls_179(P502 t_178) {
  struct f_field_decls_179fr *F = rt_alloc(sizeof *F);
F->t_178 = t_178;
F->f_813 = NULL;
F->f_813 = (*(P502)rt_nil_check(F->t_178)).fields;
F->s_814 = NULL;
F->s_814 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_813 != NULL)) {
F->s_814 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->s_814)), f_ctype_177((*(P504)rt_nil_check(F->f_813)).t)), rt_str(" ", 1)), f_field_c_17(&(*(P493)rt_nil_check((*(P504)rt_nil_check(F->f_813)).name)))), rt_str("; ", 2)); b_; }));
F->f_813 = (*(P504)rt_nil_check(F->f_813)).next;
}
F->result_ = (*(P493)rt_nil_check(F->s_814));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_declare_ctype_181(P502 t_180) {
  struct f_declare_ctype_181fr *F = rt_alloc(sizeof *F);
F->t_180 = t_180;
F->u_815 = NULL;
F->u_815 = g_all_types_531;
if ((((*(P502)rt_nil_check(F->t_180)).kind == ((rt_int)8LL)) && ((*(P502)rt_nil_check(F->t_180)).target == NULL))) {
f_finish_ptr_274(F->t_180);
if (((*(P502)rt_nil_check(F->t_180)).cname != NULL)) {
goto ret_;
}
}
if (((*(P502)rt_nil_check(F->t_180)).kind != ((rt_int)8LL))) {
while ((F->u_815 != NULL)) {
if ((((*(P502)rt_nil_check(F->u_815)).kind == (*(P502)rt_nil_check(F->t_180)).kind) && f_same_164(F->u_815, F->t_180))) {
(*(P502)rt_nil_check(F->t_180)).cname = (*(P502)rt_nil_check(F->u_815)).cname;
goto ret_;
}
F->u_815 = (*(P502)rt_nil_check(F->u_815)).next;
}
}
if ((((*(P502)rt_nil_check(F->t_180)).kind == ((rt_int)15LL)) && ((*(P502)rt_nil_check(F->t_180)).tparams == NULL))) {
(*(P502)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_177((*(P502)rt_nil_check(F->t_180)).under); b_; }));
goto ret_;
}
if (((*(P502)rt_nil_check(F->t_180)).kind == ((rt_int)6LL))) {
(*(P502)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P502)rt_nil_check(F->t_180)).kind == ((rt_int)15LL))) {
(*(P502)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((*(P502)rt_nil_check(F->t_180)).kind == ((rt_int)7LL))) {
(*(P502)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P502)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P502)rt_nil_check(F->t_180)).next = g_all_types_531;
g_all_types_531 = F->t_180;
if (((*(P502)rt_nil_check(F->t_180)).kind == ((rt_int)8LL))) {
F->target_816 = NULL;
F->target_816 = (*(P502)rt_nil_check(F->t_180)).target;
if (((*(P502)rt_nil_check(F->target_816)).kind == ((rt_int)7LL))) {
if (((*(P502)rt_nil_check(F->target_816)).cname == NULL)) {
(*(P502)rt_nil_check(F->target_816)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P502)rt_nil_check(F->target_816)).next = g_all_types_531;
g_all_types_531 = F->target_816;
f_put_27(g_out_types_533, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->target_816)).cname))), rt_str(" ", 1)), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->target_816)).cname))), rt_str(";", 1)); b_; }));
(*(P502)rt_nil_check(F->target_816)).forward = 1;
}
f_put_27(g_out_types_533, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->target_816)).cname))), rt_str(" *", 2)), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_533, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_177(F->target_816)), rt_str(" *", 2)), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P502)rt_nil_check(F->t_180)).kind == ((rt_int)6LL))) {
f_put_27(g_out_types_533, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_533, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_180)).cname))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_177((*(P502)rt_nil_check(F->t_180)).elem)), rt_str(" *p; };", 7)); b_; }));
} else if (((*(P502)rt_nil_check(F->t_180)).kind == ((rt_int)15LL))) {
F->p_817 = NULL;
F->p_817 = (*(P502)rt_nil_check(F->t_180)).tparams;
F->fs_818 = NULL;
F->fs_818 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_817 != NULL)) {
F->fs_818 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->fs_818)), f_ctype_177(f_tparam_type_210(F->t_180, &(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_817)).name))))), rt_str(" p_", 3)), f_lower_s_15(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_817)).name)))), rt_str("; ", 2)); b_; }));
F->p_817 = (*(P498)rt_nil_check(F->p_817)).next;
}
f_put_27(g_out_types_533, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_533, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_180)).cname))), rt_str(" {", 2)), (*(P493)rt_nil_check(F->fs_818))), f_ctype_177((*(P502)rt_nil_check(F->t_180)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_533, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
(*(P502)rt_nil_check(F->t_180)).defined = 1;
f_put_27(g_out_types_533, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_180)).cname))), rt_str(" { ", 3)), f_field_decls_179(F->t_180)), rt_str(" };", 3)); b_; }));
}
ret_:
  return;
}

static void f_init_ascii_182(void) {
  struct f_init_ascii_182fr *F = rt_alloc(sizeof *F);
F->names_819 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)));
F->head_820 = NULL;
F->tail_821 = NULL;
F->start_822 = ((rt_int)1LL);
{ rt_int lo824 = ((rt_int)1LL), hi825 = (F->names_819).len;
for (rt_int it826 = lo824; it826 <= hi825; it826++) {
F->i_823 = it826;
if ((rt_str_get(F->names_819, F->i_823) == 32)) {
F->lit_827 = NULL;
F->lit_827 = f_nn_48(((rt_int)4LL), ((rt_int)0LL));
(*(P498)rt_nil_check(F->lit_827)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice(F->names_819, F->start_822, rt_sub(F->i_823, ((rt_int)1LL))); b_; }));
f_append_52(&F->head_820, &F->tail_821, F->lit_827);
F->start_822 = rt_add(F->i_823, ((rt_int)1LL));
}
}
}
g_ty_ascii_560 = f_new_typ_157(((rt_int)4LL));
(*(P502)rt_nil_check(g_ty_ascii_560)).lits = F->head_820;
(*(P502)rt_nil_check(g_ty_ascii_560)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  return;
}

static rt_int f_lit_index_185(P498 lits_183, rstr *name_184) {
  struct f_lit_index_185fr *F = rt_alloc(sizeof *F);
F->lits_183 = lits_183;
F->name_184 = name_184;
F->i_828 = ((rt_int)0LL);
F->l_829 = NULL;
F->l_829 = F->lits_183;
while ((F->l_829 != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->l_829)).name)), (*F->name_184))) {
F->result_ = F->i_828;
goto ret_;
}
F->i_828 = rt_add(F->i_828, ((rt_int)1LL));
F->l_829 = (*(P498)rt_nil_check(F->l_829)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P502 f_resolve_subtype_188(P498 st_186, P500 *c_187) {
  struct f_resolve_subtype_188fr *F = rt_alloc(sizeof *F);
F->st_186 = st_186;
F->c_187 = c_187;
F->c_187v = *F->c_187;
F->t_830 = NULL;
F->dummy_832 = NULL;
F->c_187v = f_new_cons_158();
{ rt_int sel833 = (*(P498)rt_nil_check(F->st_186)).kind;
if (0 || (sel833 == ((rt_int)70LL))) {
if (((*(P498)rt_nil_check(F->st_186)).a != NULL)) {
(*(P500)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_434((*(P498)rt_nil_check(F->st_186)).a, g_ty_int_557, &F->dummy_832); b_; }));
(*(P500)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_434((*(P498)rt_nil_check(F->st_186)).b, g_ty_int_557, &F->dummy_832); b_; }));
(*(P500)rt_nil_check(F->c_187v)).mlo = f_manifest_217((*(P498)rt_nil_check(F->st_186)).a, &F->ok_831);
(*(P500)rt_nil_check(F->c_187v)).hasm = F->ok_831;
(*(P500)rt_nil_check(F->c_187v)).mhi = f_manifest_217((*(P498)rt_nil_check(F->st_186)).b, &F->ok_831);
(*(P500)rt_nil_check(F->c_187v)).hasm = ((*(P500)rt_nil_check(F->c_187v)).hasm && F->ok_831);
}
F->result_ = g_ty_int_557;
goto ret_;
} else if (0 || (sel833 == ((rt_int)71LL))) {
F->result_ = g_ty_float_559;
goto ret_;
} else if (0 || (sel833 == ((rt_int)72LL))) {
F->t_830 = f_new_typ_157(((rt_int)4LL));
(*(P502)rt_nil_check(F->t_830)).lits = (*(P498)rt_nil_check(F->st_186)).a;
if (((*(P498)rt_nil_check(F->st_186)).b != NULL)) {
(*(P500)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_434((*(P498)rt_nil_check(F->st_186)).b, F->t_830, &F->dummy_832); b_; }));
(*(P500)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_434((*(P498)rt_nil_check(F->st_186)).c, F->t_830, &F->dummy_832); b_; }));
}
F->result_ = F->t_830;
goto ret_;
} else if (0 || (sel833 == ((rt_int)73LL))) {
F->t_830 = f_resolve_subtype_188((*(P498)rt_nil_check(F->st_186)).a, &F->c_187v);
if ((!f_same_164(F->t_830, g_ty_ascii_560))) {
f_fail_23((*(P498)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
F->c_187v = f_new_cons_158();
if (((*(P498)rt_nil_check(F->st_186)).b != NULL)) {
(*(P500)rt_nil_check(F->c_187v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_434((*(P498)rt_nil_check(F->st_186)).b, g_ty_int_557, &F->dummy_832); b_; }));
}
F->result_ = g_ty_string_561;
goto ret_;
} else if (0 || (sel833 == ((rt_int)74LL))) {
if ((f_list_len_54((*(P498)rt_nil_check(F->st_186)).a) > ((rt_int)2LL))) {
f_fail_23((*(P498)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("arrays of more than two dimensions are not handled", 50); b_; }));
}
{
F->ic_834 = NULL;
F->ic2_835 = NULL;
F->ec_836 = NULL;
F->it_837 = NULL;
F->it_837 = f_resolve_subtype_188((*(P498)rt_nil_check(F->st_186)).a, &F->ic_834);
F->et_838 = NULL;
F->et_838 = f_resolve_subtype_188((*(P498)rt_nil_check(F->st_186)).b, &F->ec_836);
F->ic_834 = f_base_cons_169(F->it_837, F->ic_834);
F->t_830 = f_new_typ_157(((rt_int)6LL));
(*(P502)rt_nil_check(F->t_830)).idx = F->it_837;
(*(P502)rt_nil_check(F->t_830)).elem = F->et_838;
(*(P502)rt_nil_check(F->t_830)).elemcons = F->ec_836;
(*(P502)rt_nil_check(F->t_830)).elemst = (*(P498)rt_nil_check(F->st_186)).b;
if (((*(P500)rt_nil_check(F->ic_834)).lo != NULL)) {
(*(P500)rt_nil_check(F->c_187v)).lo = (*(P500)rt_nil_check(F->ic_834)).lo;
(*(P500)rt_nil_check(F->c_187v)).hi = (*(P500)rt_nil_check(F->ic_834)).hi;
} else if (((*(P502)rt_nil_check(f_base_of_166(F->it_837))).kind == ((rt_int)4LL))) {
(*(P500)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P500)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P502)rt_nil_check(f_base_of_166(F->it_837))).lits), ((rt_int)1LL))); b_; }));
}
(*(P500)rt_nil_check(F->c_187v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P500)rt_nil_check(F->c_187v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
if (((*(P498)rt_nil_check((*(P498)rt_nil_check(F->st_186)).a)).next != NULL)) {
(*(P502)rt_nil_check(F->t_830)).idx2 = f_resolve_subtype_188((*(P498)rt_nil_check((*(P498)rt_nil_check(F->st_186)).a)).next, &F->ic2_835);
if (((*(P500)rt_nil_check(F->ic2_835)).lo != NULL)) {
(*(P500)rt_nil_check(F->c_187v)).lo2 = (*(P500)rt_nil_check(F->ic2_835)).lo;
(*(P500)rt_nil_check(F->c_187v)).hi2 = (*(P500)rt_nil_check(F->ic2_835)).hi;
} else if (((*(P502)rt_nil_check((*(P502)rt_nil_check(F->t_830)).idx2)).kind == ((rt_int)4LL))) {
(*(P500)rt_nil_check(F->c_187v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P500)rt_nil_check(F->c_187v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P502)rt_nil_check((*(P502)rt_nil_check(F->t_830)).idx2)).lits), ((rt_int)1LL))); b_; }));
}
}
}
F->result_ = F->t_830;
goto ret_;
} else if (0 || (sel833 == ((rt_int)77LL))) {
F->t_830 = f_new_typ_157(((rt_int)16LL));
{
F->ec_839 = NULL;
(*(P502)rt_nil_check(F->t_830)).elem = f_resolve_subtype_188((*(P498)rt_nil_check(F->st_186)).a, &F->ec_839);
(*(P502)rt_nil_check(F->t_830)).elemcons = F->ec_839;
}
F->result_ = F->t_830;
goto ret_;
} else if (0 || (sel833 == ((rt_int)75LL))) {
F->t_830 = f_new_typ_157(((rt_int)7LL));
{
F->comp_840 = NULL;
F->comp_840 = (*(P498)rt_nil_check(F->st_186)).a;
F->tail_841 = NULL;
while ((F->comp_840 != NULL)) {
F->cc_842 = NULL;
F->f_843 = NULL;
{ R505 *cell844 = rt_alloc(sizeof(R505));
(*cell844).name = NULL;
(*cell844).t = NULL;
(*cell844).c = NULL;
(*cell844).st = NULL;
(*cell844).next = NULL;
F->f_843 = cell844;
}
(*(P504)rt_nil_check(F->f_843)).name = (*(P498)rt_nil_check(F->comp_840)).name;
(*(P504)rt_nil_check(F->f_843)).t = f_resolve_subtype_188((*(P498)rt_nil_check(F->comp_840)).a, &F->cc_842);
(*(P504)rt_nil_check(F->f_843)).c = F->cc_842;
(*(P504)rt_nil_check(F->f_843)).st = (*(P498)rt_nil_check(F->comp_840)).a;
if ((F->tail_841 == NULL)) {
(*(P502)rt_nil_check(F->t_830)).fields = F->f_843;
} else {
(*(P504)rt_nil_check(F->tail_841)).next = F->f_843;
}
F->tail_841 = F->f_843;
F->comp_840 = (*(P498)rt_nil_check(F->comp_840)).next;
}
}
F->result_ = F->t_830;
goto ret_;
} else if (0 || (sel833 == ((rt_int)79LL))) {
F->result_ = g_ty_file_563;
goto ret_;
} else if (0 || (sel833 == ((rt_int)78LL))) {
{
F->ec_845 = NULL;
F->t_830 = f_new_typ_157(((rt_int)12LL));
(*(P502)rt_nil_check(F->t_830)).elem = f_resolve_subtype_188((*(P498)rt_nil_check(F->st_186)).a, &F->ec_845);
(*(P502)rt_nil_check(F->t_830)).elemcons = F->ec_845;
if (((*(P498)rt_nil_check(F->st_186)).b != NULL)) {
(*(P500)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_434((*(P498)rt_nil_check(F->st_186)).b, g_ty_int_557, &F->dummy_832); b_; }));
}
}
F->result_ = F->t_830;
goto ret_;
} else if (0 || (sel833 == ((rt_int)80LL))) {
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->st_186)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_558;
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->st_186)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_560;
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->st_186)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_565;
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->st_186)).name)), rt_str("LATCH", 5))) {
F->result_ = g_ty_latch_566;
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->st_186)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_567;
goto ret_;
}
{
F->y_846 = NULL;
F->y_846 = f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->st_186)).name)));
if ((F->y_846 == NULL)) {
f_fail_23((*(P498)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->st_186)).name))); b_; }));
}
if (((((*(P506)rt_nil_check(F->y_846)).kind == ((rt_int)5LL)) && ((*(P506)rt_nil_check(F->y_846)).t != NULL)) && ((*(P502)rt_nil_check((*(P506)rt_nil_check(F->y_846)).t)).kind == ((rt_int)15LL)))) {
F->result_ = f_new_type_200(F->y_846, F->st_186, &F->c_187v);
goto ret_;
}
if (((((*(P506)rt_nil_check(F->y_846)).kind == ((rt_int)6LL)) || ((*(P506)rt_nil_check(F->y_846)).kind == ((rt_int)5LL))) && ((*(P506)rt_nil_check(F->y_846)).t != NULL))) {
if (((*(P506)rt_nil_check(F->y_846)).c != NULL)) {
F->c_187v = (*(P506)rt_nil_check(F->y_846)).c;
}
F->result_ = (*(P506)rt_nil_check(F->y_846)).t;
goto ret_;
}
if (((((*(P506)rt_nil_check(F->y_846)).kind == ((rt_int)5LL)) && ((*(P506)rt_nil_check(F->y_846)).decl != NULL)) && ((*(P498)rt_nil_check((*(P506)rt_nil_check(F->y_846)).decl)).kind == ((rt_int)43LL)))) {
F->result_ = f_new_type_200(F->y_846, F->st_186, &F->c_187v);
goto ret_;
}
if ((((*(P506)rt_nil_check(F->y_846)).kind == ((rt_int)6LL)) || ((*(P506)rt_nil_check(F->y_846)).kind == ((rt_int)5LL)))) {
F->result_ = f_resolve_subtype_188((*(P506)rt_nil_check(F->y_846)).st, &F->c_187v);
goto ret_;
}
f_fail_23((*(P498)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->st_186)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_23((*(P498)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_187) = F->c_187v;
  return F->result_;
}

static int f_opened_190(P502 t_189) {
  struct f_opened_190fr *F = rt_alloc(sizeof *F);
F->t_189 = t_189;
F->c_847 = NULL;
F->c_847 = g_caps_545;
if (((((*(P502)rt_nil_check(F->t_189)).kind != ((rt_int)15LL)) || ((*(P502)rt_nil_check(F->t_189)).ocap == NULL)) || ((*(P498)rt_nil_check((*(P502)rt_nil_check(F->t_189)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_847 != NULL)) {
if (((*(P518)rt_nil_check(F->c_847)).d == (*(P502)rt_nil_check(F->t_189)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_847 = (*(P518)rt_nil_check(F->c_847)).next;
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
F->i_848 = ((rt_int)1LL);
if (((((*F->pat_192)).len == ((rt_int)0LL)) || (((*F->s_191)).len < ((*F->pat_192)).len))) {
F->result_ = (*F->s_191);
goto ret_;
}
while ((rt_sub(rt_add(F->i_848, ((*F->pat_192)).len), ((rt_int)1LL)) <= ((*F->s_191)).len)) {
if (rt_str_eq(rt_str_slice((*F->s_191), F->i_848, rt_sub(rt_add(F->i_848, ((*F->pat_192)).len), ((rt_int)1LL))), (*F->pat_192))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_191), ((rt_int)1LL), rt_sub(F->i_848, ((rt_int)1LL))), (*F->r_193)), f_replace_all_194(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_191), rt_add(F->i_848, ((*F->pat_192)).len), ((*F->s_191)).len); b_; }), &(*F->pat_192), &(*F->r_193)));
goto ret_;
}
F->i_848 = rt_add(F->i_848, ((rt_int)1LL));
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
F->l_849 = NULL;
F->l_849 = g_psub_547;
F->r_850 = NULL;
F->r_850 = f_mk_3(&(*F->s_195));
while ((F->l_849 != NULL)) {
F->r_850 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_194(&(*(P493)rt_nil_check(F->r_850)), &(*(P493)rt_nil_check((*(P510)rt_nil_check(F->l_849)).s)), &(*(P493)rt_nil_check((*(P510)rt_nil_check((*(P510)rt_nil_check(F->l_849)).next)).s))); b_; }));
F->l_849 = (*(P510)rt_nil_check((*(P510)rt_nil_check(F->l_849)).next)).next;
}
F->result_ = (*(P493)rt_nil_check(F->r_850));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P502 f_new_type_200(P506 y_197, P498 st_198, P500 *c_199) {
  struct f_new_type_200fr *F = rt_alloc(sizeof *F);
F->y_197 = y_197;
F->st_198 = st_198;
F->c_199 = c_199;
F->c_199v = *F->c_199;
F->d_851 = NULL;
F->d_851 = (*(P506)rt_nil_check(F->y_197)).decl;
F->p_852 = NULL;
F->uc_853 = NULL;
F->c_199v = f_new_cons_158();
if (((*(P506)rt_nil_check(F->y_197)).t == NULL)) {
(*(P506)rt_nil_check(F->y_197)).t = f_new_typ_157(((rt_int)15LL));
(*(P502)rt_nil_check((*(P506)rt_nil_check(F->y_197)).t)).name = (*(P506)rt_nil_check(F->y_197)).name;
(*(P502)rt_nil_check((*(P506)rt_nil_check(F->y_197)).t)).decl = F->d_851;
(*(P502)rt_nil_check((*(P506)rt_nil_check(F->y_197)).t)).tparams = (*(P498)rt_nil_check(F->d_851)).b;
if ((g_caps_545 != NULL)) {
(*(P502)rt_nil_check((*(P506)rt_nil_check(F->y_197)).t)).ocap = (*(P518)rt_nil_check(g_caps_545)).d;
}
f_open_scope_151();
F->p_852 = (*(P498)rt_nil_check(F->d_851)).b;
while ((F->p_852 != NULL)) {
F->z_854 = NULL;
F->z_854 = f_new_sym_155(((rt_int)2LL), (*(P498)rt_nil_check(F->p_852)).name);
F->zc_855 = NULL;
(*(P506)rt_nil_check(F->z_854)).t = f_resolve_subtype_188((*(P498)rt_nil_check(F->p_852)).a, &F->zc_855);
(*(P506)rt_nil_check(F->z_854)).mnext = (*(P502)rt_nil_check((*(P506)rt_nil_check(F->y_197)).t)).tpsyms;
(*(P502)rt_nil_check((*(P506)rt_nil_check(F->y_197)).t)).tpsyms = F->z_854;
(*(P506)rt_nil_check(F->z_854)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_852)).name)))), rt_str("@", 1)); b_; }));
f_define_145(F->z_854, (*(P498)rt_nil_check(F->d_851)).line);
F->p_852 = (*(P498)rt_nil_check(F->p_852)).next;
}
(*(P502)rt_nil_check((*(P506)rt_nil_check(F->y_197)).t)).under = f_resolve_subtype_188((*(P498)rt_nil_check(F->d_851)).a, &F->uc_853);
(*(P502)rt_nil_check((*(P506)rt_nil_check(F->y_197)).t)).elemcons = F->uc_853;
f_close_scope_152();
}
(*(P500)rt_nil_check(F->c_199v)).args = (*(P498)rt_nil_check(F->st_198)).b;
F->result_ = (*(P506)rt_nil_check(F->y_197)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_199) = F->c_199v;
  return F->result_;
}

static void f_init_storage_204(rstr *lval_201, P502 t_202, P500 c_203) {
  struct f_init_storage_204fr *F = rt_alloc(sizeof *F);
F->lval_201 = lval_201;
F->t_202 = t_202;
F->c_203 = c_203;
f_make_storage_214(&(*F->lval_201), F->t_202, F->c_203);
if (((*(P502)rt_nil_check(F->t_202)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_207((*(P502)rt_nil_check(F->t_202)).initp, &(*F->lval_201)); b_; }));
}
ret_:
  return;
}

static rstr f_init_call_207(P506 y_205, rstr *lval_206) {
  struct f_init_call_207fr *F = rt_alloc(sizeof *F);
F->y_205 = y_205;
F->lval_206 = lval_206;
F->link_856 = NULL;
F->link_856 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P506)rt_nil_check(F->y_205)).level > ((rt_int)0LL))) {
F->link_856 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo858 = ((rt_int)1LL), hi859 = rt_sub(g_cur_level_543, (*(P506)rt_nil_check(F->y_205)).level);
for (rt_int it860 = lo858; it860 <= hi859; it860++) {
F->i_857 = it860;
F->link_856 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check(F->link_856)), rt_str("->up", 4)); b_; }));
}
}
F->link_856 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check(F->link_856)), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_205)).cname)), rt_str("(", 1)), (*(P493)rt_nil_check(F->link_856))), rt_str("&", 1)), (*F->lval_206)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P502 f_tparam_type_210(P502 t_208, rstr *name_209) {
  struct f_tparam_type_210fr *F = rt_alloc(sizeof *F);
F->t_208 = t_208;
F->name_209 = name_209;
F->z_861 = NULL;
F->z_861 = (*(P502)rt_nil_check(F->t_208)).tpsyms;
while ((F->z_861 != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P506)rt_nil_check(F->z_861)).name)), (*F->name_209))) {
F->result_ = (*(P506)rt_nil_check(F->z_861)).t;
goto ret_;
}
F->z_861 = (*(P506)rt_nil_check(F->z_861)).mnext;
}
F->result_ = g_ty_int_557;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_make_storage_214(rstr *lval_211, P502 t_212, P500 c_213) {
  struct f_make_storage_214fr *F = rt_alloc(sizeof *F);
F->lval_211 = lval_211;
F->t_212 = t_212;
F->c_213 = c_213;
if (((*(P502)rt_nil_check(F->t_212)).kind == ((rt_int)15LL))) {
F->p_862 = NULL;
F->p_862 = (*(P502)rt_nil_check(F->t_212)).tparams;
F->a_863 = NULL;
F->a_863 = (*(P500)rt_nil_check(F->c_213)).args;
F->uc_864 = NULL;
F->ut_865 = NULL;
F->at_866 = NULL;
if ((f_list_len_54(F->a_863) != f_list_len_54(F->p_862))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_212)).name))), rt_str(" needs ", 7)), f_itos_7(f_list_len_54(F->p_862))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_862 != NULL)) {
F->pt_867 = f_tparam_type_210(F->t_212, &(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_862)).name)));
F->v_868 = rt_str_copy(f_gexpr_434(F->a_863, F->pt_867, &F->at_866));
f_check_type_175(F->at_866, F->pt_867, (*(P498)rt_nil_check(F->a_863)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".p_", 3)), f_lower_s_15(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_862)).name)))), rt_str(" = ", 3)), F->v_868), rt_str(";", 1)); b_; }));
F->p_862 = (*(P498)rt_nil_check(F->p_862)).next;
F->a_863 = (*(P498)rt_nil_check(F->a_863)).next;
}
{
F->saved_869 = NULL;
F->saved_869 = g_psub_547;
F->p_862 = (*(P502)rt_nil_check(F->t_212)).tparams;
while ((F->p_862 != NULL)) {
F->l1_870 = NULL;
F->l2_871 = NULL;
{ R511 *cell872 = rt_alloc(sizeof(R511));
(*cell872).s = NULL;
(*cell872).next = NULL;
F->l1_870 = cell872;
}
{ R511 *cell873 = rt_alloc(sizeof(R511));
(*cell873).s = NULL;
(*cell873).next = NULL;
F->l2_871 = cell873;
}
(*(P510)rt_nil_check(F->l1_870)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_862)).name)))), rt_str("@", 1)); b_; }));
(*(P510)rt_nil_check(F->l2_871)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".p_", 3)), f_lower_s_15(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_862)).name)))); b_; }));
(*(P510)rt_nil_check(F->l1_870)).next = F->l2_871;
(*(P510)rt_nil_check(F->l2_871)).next = g_psub_547;
g_psub_547 = F->l1_870;
F->p_862 = (*(P498)rt_nil_check(F->p_862)).next;
}
if (((*(P502)rt_nil_check(F->t_212)).tparams == NULL)) {
f_init_storage_204(&(*F->lval_211), (*(P502)rt_nil_check(F->t_212)).under, (*(P502)rt_nil_check(F->t_212)).elemcons);
} else {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_211), rt_str(".all", 4)); b_; }), (*(P502)rt_nil_check(F->t_212)).under, (*(P502)rt_nil_check(F->t_212)).elemcons);
}
g_psub_547 = F->saved_869;
}
} else if (((*(P502)rt_nil_check(F->t_212)).kind == ((rt_int)12LL))) {
if (((*(P500)rt_nil_check(F->c_213)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_211), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_211)), rt_str(", ", 2)), f_subst_196(&(*(P493)rt_nil_check((*(P500)rt_nil_check(F->c_213)).lo)))), rt_str(", sizeof(", 9)), f_ctype_177((*(P502)rt_nil_check(F->t_212)).elem)), rt_str("), ", 3)), f_mcopy_219((*(P502)rt_nil_check(F->t_212)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P502)rt_nil_check(F->t_212)).kind == ((rt_int)13LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_211)), rt_str(");", 2)); b_; }));
} else if (((*(P502)rt_nil_check(F->t_212)).kind == ((rt_int)14LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_211), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if (((*(P502)rt_nil_check(F->t_212)).kind == ((rt_int)8LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_211), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P502)rt_nil_check(F->t_212)).kind == ((rt_int)5LL))) {
if (((*(P500)rt_nil_check(F->c_213)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_211), rt_str(" = rt_str_new(", 14)), f_subst_196(&(*(P493)rt_nil_check((*(P500)rt_nil_check(F->c_213)).slen)))), rt_str(");", 2)); b_; }));
} else if (((*(P502)rt_nil_check(F->t_212)).kind == ((rt_int)6LL))) {
if (((*(P500)rt_nil_check(F->c_213)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".lo = ", 6)), f_subst_196(&(*(P493)rt_nil_check((*(P500)rt_nil_check(F->c_213)).lo)))), rt_str("; ", 2)), (*F->lval_211)), rt_str(".hi = ", 6)), f_subst_196(&(*(P493)rt_nil_check((*(P500)rt_nil_check(F->c_213)).hi)))), rt_str("; ", 2)), (*F->lval_211)), rt_str(".lo2 = ", 7)), f_subst_196(&(*(P493)rt_nil_check((*(P500)rt_nil_check(F->c_213)).lo2)))), rt_str("; ", 2)), (*F->lval_211)), rt_str(".hi2 = ", 7)), f_subst_196(&(*(P493)rt_nil_check((*(P500)rt_nil_check(F->c_213)).hi2)))), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_177((*(P502)rt_nil_check(F->t_212)).elem)), rt_str(") * (size_t)RT_CNT(", 19)), (*F->lval_211)), rt_str("));", 3)); b_; }));
if ((((((((((*(P502)rt_nil_check((*(P502)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)5LL)) || ((*(P502)rt_nil_check((*(P502)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)6LL))) || ((*(P502)rt_nil_check((*(P502)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)7LL))) || ((*(P502)rt_nil_check((*(P502)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)15LL))) || ((*(P502)rt_nil_check((*(P502)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)8LL))) || ((*(P502)rt_nil_check((*(P502)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)12LL))) || ((*(P502)rt_nil_check((*(P502)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)13LL))) || ((*(P502)rt_nil_check((*(P502)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)14LL)))) {
F->i_874 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_874), rt_str(" = 0; ", 6)), F->i_874), rt_str(" < RT_CNT(", 10)), (*F->lval_211)), rt_str("); ", 3)), F->i_874), rt_str("++) {", 5)); b_; }));
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".p[", 3)), F->i_874), rt_str("]", 1)); b_; }), (*(P502)rt_nil_check(F->t_212)).elem, (*(P502)rt_nil_check(F->t_212)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P502)rt_nil_check(F->t_212)).kind == ((rt_int)7LL))) {
F->f_875 = NULL;
F->f_875 = (*(P502)rt_nil_check(F->t_212)).fields;
while ((F->f_875 != NULL)) {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".", 1)), f_field_c_17(&(*(P493)rt_nil_check((*(P504)rt_nil_check(F->f_875)).name)))); b_; }), (*(P504)rt_nil_check(F->f_875)).t, (*(P504)rt_nil_check(F->f_875)).c);
F->f_875 = (*(P504)rt_nil_check(F->f_875)).next;
}
}
ret_:
  return;
}

static rt_int f_manifest_217(P498 e_215, int *ok_216) {
  struct f_manifest_217fr *F = rt_alloc(sizeof *F);
F->e_215 = e_215;
F->ok_216 = ok_216;
F->ok_216v = *F->ok_216;
F->ok_216v = 0;
if (((*(P498)rt_nil_check(F->e_215)).kind == ((rt_int)1LL))) {
F->ok_216v = 1;
F->result_ = (*(P498)rt_nil_check(F->e_215)).ival;
goto ret_;
} else if (((*(P498)rt_nil_check(F->e_215)).kind == ((rt_int)17LL))) {
F->result_ = f_manifest_217((*(P498)rt_nil_check(F->e_215)).a, &F->ok_216v);
goto ret_;
} else if ((((*(P498)rt_nil_check(F->e_215)).kind == ((rt_int)8LL)) && rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_215)).name)), rt_str("-", 1)))) {
F->a_876 = f_manifest_217((*(P498)rt_nil_check(F->e_215)).a, &F->ok_216v);
F->result_ = rt_neg(F->a_876);
goto ret_;
} else if ((((*(P498)rt_nil_check(F->e_215)).kind == ((rt_int)9LL)) && ((rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_215)).name)), rt_str("+", 1)) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_215)).name)), rt_str("-", 1))) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_215)).name)), rt_str("*", 1))))) {
F->a_876 = f_manifest_217((*(P498)rt_nil_check(F->e_215)).a, &F->ok_216v);
F->b_877 = f_manifest_217((*(P498)rt_nil_check(F->e_215)).b, &F->ok2_878);
F->ok_216v = (F->ok_216v && F->ok2_878);
if ((!F->ok_216v)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_215)).name)), rt_str("+", 1))) {
F->result_ = rt_add(F->a_876, F->b_877);
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_215)).name)), rt_str("-", 1))) {
F->result_ = rt_sub(F->a_876, F->b_877);
goto ret_;
}
F->result_ = rt_mul(F->a_876, F->b_877);
goto ret_;
} else if (((*(P498)rt_nil_check(F->e_215)).kind == ((rt_int)7LL))) {
F->y_879 = NULL;
F->y_879 = f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_215)).name)));
if ((((F->y_879 != NULL) && ((*(P506)rt_nil_check(F->y_879)).kind == ((rt_int)2LL))) && (*(P506)rt_nil_check(F->y_879)).hasmv)) {
F->ok_216v = 1;
F->result_ = (*(P506)rt_nil_check(F->y_879)).mvalue;
goto ret_;
}
}
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_216) = F->ok_216v;
  return F->result_;
}

static rstr f_mcopy_219(P502 t_218) {
  struct f_mcopy_219fr *F = rt_alloc(sizeof *F);
F->t_218 = t_218;
F->ct_880 = rt_str_copy(f_ctype_177(F->t_218));
F->name_881 = rt_str_new(rt_add((F->ct_880).len, ((rt_int)3LL)));
rt_str_assign(&F->name_881, rt_str_cat(rt_str("mc_", 3), F->ct_880));
F->l_882 = NULL;
if ((!f_seen_name_240(g_mcopies_556, &F->name_881))) {
{ R511 *cell883 = rt_alloc(sizeof(R511));
(*cell883).s = NULL;
(*cell883).next = NULL;
F->l_882 = cell883;
}
(*(P510)rt_nil_check(F->l_882)).s = f_mk_3(&F->name_881);
(*(P510)rt_nil_check(F->l_882)).next = g_mcopies_556;
g_mcopies_556 = F->l_882;
f_put_27(g_out_protos_535, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_881), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_881), rt_str("(void *d, const void *s) { *(", 29)), F->ct_880), rt_str(" *)d = ", 7)), f_copy_code_229(F->t_218, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_880), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_881;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_composite_221(P502 t_220) {
  struct f_composite_221fr *F = rt_alloc(sizeof *F);
F->t_220 = t_220;
F->result_ = ((((*(P502)rt_nil_check(F->t_220)).kind == ((rt_int)6LL)) || ((*(P502)rt_nil_check(F->t_220)).kind == ((rt_int)7LL))) || (((*(P502)rt_nil_check(F->t_220)).kind == ((rt_int)15LL)) && ((*(P502)rt_nil_check(F->t_220)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_assign_code_226(rstr *lval_222, P502 t_223, rstr *v_224, P500 c_225) {
  struct f_assign_code_226fr *F = rt_alloc(sizeof *F);
F->lval_222 = lval_222;
F->t_223 = t_223;
F->v_224 = v_224;
F->c_225 = c_225;
if ((((*(P502)rt_nil_check(F->t_223)).kind == ((rt_int)15LL)) && ((*(P502)rt_nil_check(F->t_223)).tparams == NULL))) {
F->result_ = f_assign_code_226(&(*F->lval_222), (*(P502)rt_nil_check(F->t_223)).under, &(*F->v_224), F->c_225);
goto ret_;
}
if (f_composite_221(F->t_223)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_177(F->t_223)), rt_str("(&", 2)), (*F->lval_222)), rt_str(", ", 2)), (*F->v_224)), rt_str(");", 2));
goto ret_;
}
if (((*(P502)rt_nil_check(F->t_223)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_222)), rt_str(", ", 2)), (*F->v_224)), rt_str(");", 2));
goto ret_;
} else if ((((*(P502)rt_nil_check(F->t_223)).kind == ((rt_int)6LL)) || ((*(P502)rt_nil_check(F->t_223)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_177(F->t_223)), rt_str("(&", 2)), (*F->lval_222)), rt_str(", ", 2)), (*F->v_224)), rt_str(");", 2));
goto ret_;
} else if (((((*(P502)rt_nil_check(F->t_223)).kind == ((rt_int)1LL)) && (F->c_225 != NULL)) && (*(P500)rt_nil_check(F->c_225)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_222), rt_str(" = rt_range(", 12)), (*F->v_224)), rt_str(", ", 2)), f_itos_7((*(P500)rt_nil_check(F->c_225)).mlo)), rt_str(", ", 2)), f_itos_7((*(P500)rt_nil_check(F->c_225)).mhi)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_222), rt_str(" = ", 3)), (*F->v_224)), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_copy_code_229(P502 t_227, rstr *v_228) {
  struct f_copy_code_229fr *F = rt_alloc(sizeof *F);
F->t_227 = t_227;
F->v_228 = v_228;
if ((((*(P502)rt_nil_check(F->t_227)).kind == ((rt_int)15LL)) && ((*(P502)rt_nil_check(F->t_227)).tparams == NULL))) {
F->result_ = f_copy_code_229((*(P502)rt_nil_check(F->t_227)).under, &(*F->v_228));
goto ret_;
}
if (f_composite_221(F->t_227)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_177(F->t_227)), rt_str("(", 1)), (*F->v_228)), rt_str(")", 1));
goto ret_;
}
if (((*(P502)rt_nil_check(F->t_227)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_228)), rt_str(")", 1));
goto ret_;
} else if ((((*(P502)rt_nil_check(F->t_227)).kind == ((rt_int)6LL)) || ((*(P502)rt_nil_check(F->t_227)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_177(F->t_227)), rt_str("(", 1)), (*F->v_228)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_228);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_eq_code_233(P502 t_230, rstr *a_231, rstr *b_232) {
  struct f_eq_code_233fr *F = rt_alloc(sizeof *F);
F->t_230 = t_230;
F->a_231 = a_231;
F->b_232 = b_232;
if ((((*(P502)rt_nil_check(F->t_230)).kind == ((rt_int)15LL)) && ((*(P502)rt_nil_check(F->t_230)).tparams == NULL))) {
F->result_ = f_eq_code_233((*(P502)rt_nil_check(F->t_230)).under, &(*F->a_231), &(*F->b_232));
goto ret_;
}
if (f_composite_221(F->t_230)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_177(F->t_230)), rt_str("(", 1)), (*F->a_231)), rt_str(", ", 2)), (*F->b_232)), rt_str(")", 1));
goto ret_;
}
if (((*(P502)rt_nil_check(F->t_230)).kind == ((rt_int)16LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), (*F->a_231)), rt_str(", ", 2)), (*F->b_232)), rt_str(")", 1));
goto ret_;
}
if (((*(P502)rt_nil_check(F->t_230)).kind == ((rt_int)14LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_231)), rt_str(" == ", 4)), (*F->b_232)), rt_str(")", 1));
goto ret_;
}
if (((*(P502)rt_nil_check(F->t_230)).kind == ((rt_int)12LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_231)), rt_str(" == ", 4)), (*F->b_232)), rt_str(")", 1));
goto ret_;
}
if (((*(P502)rt_nil_check(F->t_230)).kind == ((rt_int)13LL))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P502)rt_nil_check(F->t_230)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_231)), rt_str(", ", 2)), (*F->b_232)), rt_str(")", 1));
goto ret_;
} else if ((((*(P502)rt_nil_check(F->t_230)).kind == ((rt_int)6LL)) || ((*(P502)rt_nil_check(F->t_230)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_177(F->t_230)), rt_str("(", 1)), (*F->a_231)), rt_str(", ", 2)), (*F->b_232)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_231)), rt_str(" == ", 4)), (*F->b_232)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_elem_assign_237(rstr *lval_234, P502 t_235, rstr *v_236) {
  struct f_elem_assign_237fr *F = rt_alloc(sizeof *F);
F->lval_234 = lval_234;
F->t_235 = t_235;
F->v_236 = v_236;
F->result_ = f_assign_code_226(&(*F->lval_234), F->t_235, &(*F->v_236), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_seen_name_240(P510 l_238, rstr *s_239) {
  struct f_seen_name_240fr *F = rt_alloc(sizeof *F);
F->l_238 = l_238;
F->s_239 = s_239;
F->p_884 = NULL;
F->p_884 = F->l_238;
while ((F->p_884 != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P510)rt_nil_check(F->p_884)).s)), (*F->s_239))) {
F->result_ = 1;
goto ret_;
}
F->p_884 = (*(P510)rt_nil_check(F->p_884)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_emit_helpers_241(void) {
  struct f_emit_helpers_241fr *F = rt_alloc(sizeof *F);
F->order_885 = NULL;
F->t_886 = NULL;
F->t_886 = g_all_types_531;
F->done_887 = NULL;
while ((F->t_886 != NULL)) {
if ((f_composite_221(F->t_886) && (!f_seen_name_240(F->done_887, &(*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_886)).cname)))))) {
F->l_888 = NULL;
F->c_889 = rt_str_new(((*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_886)).cname))).len);
rt_str_assign(&F->c_889, (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_886)).cname)));
{ R511 *cell890 = rt_alloc(sizeof(R511));
(*cell890).s = NULL;
(*cell890).next = NULL;
F->l_888 = cell890;
}
(*(P510)rt_nil_check(F->l_888)).s = (*(P502)rt_nil_check(F->t_886)).cname;
(*(P510)rt_nil_check(F->l_888)).next = F->done_887;
F->done_887 = F->l_888;
f_put_27(g_out_helpers_534, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_889), rt_str("(", 1)), F->c_889), rt_str(" *d, ", 5)), F->c_889), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_534, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_889), rt_str(" cp_", 4)), F->c_889), rt_str("(", 1)), F->c_889), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_534, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_889), rt_str("(", 1)), F->c_889), rt_str(" a, ", 4)), F->c_889), rt_str(" b);", 4)); b_; }));
f_helper_bodies_243(F->t_886);
}
F->t_886 = (*(P502)rt_nil_check(F->t_886)).next;
}
ret_:
  return;
}

static void f_helper_bodies_243(P502 t_242) {
  struct f_helper_bodies_243fr *F = rt_alloc(sizeof *F);
F->t_242 = t_242;
F->c_891 = rt_str_new(((*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_242)).cname))).len);
rt_str_assign(&F->c_891, (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_242)).cname)));
F->b_892 = NULL;
F->b_892 = g_out_funcs_537;
if (((*(P502)rt_nil_check(F->t_242)).kind == ((rt_int)6LL))) {
F->e_893 = NULL;
F->e_893 = (*(P502)rt_nil_check(F->t_242)).elem;
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_891), rt_str("(", 1)), F->c_891), rt_str(" *d, ", 5)), F->c_891), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, ", 99), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), f_elem_assign_237(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_893, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_891), rt_str(" cp_", 4)), F->c_891), rt_str("(", 1)), F->c_891), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_891), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_177(F->e_893)), rt_str(") * (size_t)RT_CNT(s));", 23)); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), f_copy_code_229(F->e_893, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_891), rt_str("(", 1)), F->c_891), rt_str(" a, ", 4)), F->c_891), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;", 77); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), f_eq_code_233(F->e_893, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P502)rt_nil_check(F->t_242)).kind == ((rt_int)15LL))) {
F->p_894 = NULL;
F->p_894 = (*(P502)rt_nil_check(F->t_242)).tparams;
F->pc_895 = NULL;
F->pc_895 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->p_894 != NULL)) {
F->pc_895 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->pc_895)), rt_str(" || d->p_", 9)), f_lower_s_15(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_894)).name)))), rt_str(" != s.p_", 8)), f_lower_s_15(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_894)).name)))); b_; }));
F->p_894 = (*(P498)rt_nil_check(F->p_894)).next;
}
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_891), rt_str("(", 1)), F->c_891), rt_str(" *d, ", 5)), F->c_891), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P493)rt_nil_check(F->pc_895))), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("constraint", 10)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_237(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P502)rt_nil_check(F->t_242)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_891), rt_str(" cp_", 4)), F->c_891), rt_str("(", 1)), F->c_891), rt_str(" s) { s.all = ", 14)), f_copy_code_229((*(P502)rt_nil_check(F->t_242)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_891), rt_str("(", 1)), F->c_891), rt_str(" a, ", 4)), F->c_891), rt_str(" b) { return ", 13)), f_eq_code_233((*(P502)rt_nil_check(F->t_242)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else {
F->f_896 = NULL;
F->f_896 = (*(P502)rt_nil_check(F->t_242)).fields;
F->conds_897 = NULL;
F->conds_897 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_891), rt_str("(", 1)), F->c_891), rt_str(" *d, ", 5)), F->c_891), rt_str(" s) {", 5)); b_; }));
while ((F->f_896 != NULL)) {
F->fn_898 = rt_str_copy(f_field_c_17(&(*(P493)rt_nil_check((*(P504)rt_nil_check(F->f_896)).name))));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_237(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_898); b_; }), (*(P504)rt_nil_check(F->f_896)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_898); b_; }))); b_; }));
F->f_896 = (*(P504)rt_nil_check(F->f_896)).next;
}
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_891), rt_str(" cp_", 4)), F->c_891), rt_str("(", 1)), F->c_891), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_891), rt_str(" d = s;", 7)); b_; }));
F->f_896 = (*(P502)rt_nil_check(F->t_242)).fields;
while ((F->f_896 != NULL)) {
F->fn_899 = rt_str_copy(f_field_c_17(&(*(P493)rt_nil_check((*(P504)rt_nil_check(F->f_896)).name))));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_899), rt_str(" = ", 3)), f_copy_code_229((*(P504)rt_nil_check(F->f_896)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_899); b_; }))), rt_str(";", 1)); b_; }));
F->conds_897 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->conds_897)), rt_str(" && ", 4)), f_eq_code_233((*(P504)rt_nil_check(F->f_896)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_899); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_899); b_; }))); b_; }));
F->f_896 = (*(P504)rt_nil_check(F->f_896)).next;
}
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_891), rt_str("(", 1)), F->c_891), rt_str(" a, ", 4)), F->c_891), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P493)rt_nil_check(F->conds_897))), rt_str(";", 1)); b_; }));
f_put_27(F->b_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_declare_body_245(P498 elems_244) {
  struct f_declare_body_245fr *F = rt_alloc(sizeof *F);
F->elems_244 = elems_244;
F->e_900 = NULL;
F->e_900 = F->elems_244;
while ((F->e_900 != NULL)) {
if ((((*(P498)rt_nil_check(F->e_900)).kind == ((rt_int)41LL)) && ((*(P498)rt_nil_check(F->e_900)).flag == ((rt_int)0LL)))) {
f_manifest_const_247(F->e_900);
} else if (((*(P498)rt_nil_check(F->e_900)).kind == ((rt_int)47LL))) {
f_gen_capsule_255(F->e_900);
} else if (((((*(P498)rt_nil_check(F->e_900)).kind == ((rt_int)48LL)) && ((*(P498)rt_nil_check(F->e_900)).flag != ((rt_int)1LL))) && ((*(P498)rt_nil_check(F->e_900)).flag != ((rt_int)3LL)))) {
f_gen_expose_272(F->e_900);
} else if (((*(P498)rt_nil_check(F->e_900)).kind == ((rt_int)49LL))) {
F->y_901 = NULL;
F->y_901 = f_new_sym_155(((rt_int)7LL), (*(P498)rt_nil_check(F->e_900)).name);
(*(P506)rt_nil_check(F->y_901)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_900)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_145(F->y_901, (*(P498)rt_nil_check(F->e_900)).line);
f_put_27(g_out_globals_536, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_901)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_901)).cname))), rt_str(" = rt_exc(", 10)), f_q_18()), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_900)).name))), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P498)rt_nil_check(F->e_900)).kind == ((rt_int)42LL))) {
F->y_902 = NULL;
F->y_902 = f_new_sym_155(((rt_int)6LL), (*(P498)rt_nil_check(F->e_900)).name);
(*(P506)rt_nil_check(F->y_902)).st = (*(P498)rt_nil_check(F->e_900)).a;
f_define_145(F->y_902, (*(P498)rt_nil_check(F->e_900)).line);
} else if (((*(P498)rt_nil_check(F->e_900)).kind == ((rt_int)44LL))) {
F->y_903 = NULL;
F->y_903 = f_new_sym_155(((rt_int)5LL), (*(P498)rt_nil_check(F->e_900)).name);
F->t_904 = NULL;
F->t_904 = f_new_typ_157(((rt_int)8LL));
(*(P502)rt_nil_check(F->t_904)).name = (*(P498)rt_nil_check(F->e_900)).name;
(*(P502)rt_nil_check(F->t_904)).decl = F->e_900;
(*(P506)rt_nil_check(F->y_903)).t = F->t_904;
f_define_145(F->y_903, (*(P498)rt_nil_check(F->e_900)).line);
} else if (((*(P498)rt_nil_check(F->e_900)).kind == ((rt_int)43LL))) {
F->y_905 = NULL;
F->y_905 = f_new_sym_155(((rt_int)5LL), (*(P498)rt_nil_check(F->e_900)).name);
(*(P506)rt_nil_check(F->y_905)).st = (*(P498)rt_nil_check(F->e_900)).a;
(*(P506)rt_nil_check(F->y_905)).decl = F->e_900;
f_define_145(F->y_905, (*(P498)rt_nil_check(F->e_900)).line);
}
F->e_900 = (*(P498)rt_nil_check(F->e_900)).next;
}
F->e_900 = F->elems_244;
while ((F->e_900 != NULL)) {
if (((((*(P498)rt_nil_check(F->e_900)).kind == ((rt_int)45LL)) || ((*(P498)rt_nil_check(F->e_900)).kind == ((rt_int)46LL))) || ((*(P498)rt_nil_check(F->e_900)).kind == ((rt_int)50LL)))) {
f_declare_subprogram_276(F->e_900);
} else if (((*(P498)rt_nil_check(F->e_900)).kind == ((rt_int)51LL))) {
F->g_906 = NULL;
F->g_906 = f_new_sym_155(((rt_int)10LL), (*(P498)rt_nil_check(F->e_900)).name);
(*(P506)rt_nil_check(F->g_906)).decl = F->e_900;
(*(P506)rt_nil_check(F->g_906)).level = g_cur_level_543;
f_define_145(F->g_906, (*(P498)rt_nil_check(F->e_900)).line);
}
F->e_900 = (*(P498)rt_nil_check(F->e_900)).next;
}
F->e_900 = F->elems_244;
while ((F->e_900 != NULL)) {
if ((((*(P498)rt_nil_check(F->e_900)).kind == ((rt_int)45LL)) && rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_900)).name)), rt_str("INITIALIZE", 10)))) {
F->y_907 = NULL;
F->y_907 = f_lookup_decl_142(F->e_900);
if (((((F->y_907 != NULL) && ((*(P506)rt_nil_check(F->y_907)).params != NULL)) && ((*(P508)rt_nil_check((*(P506)rt_nil_check(F->y_907)).params)).next == NULL)) && (((*(P502)rt_nil_check((*(P508)rt_nil_check((*(P506)rt_nil_check(F->y_907)).params)).t)).kind == ((rt_int)15LL)) || ((*(P502)rt_nil_check((*(P508)rt_nil_check((*(P506)rt_nil_check(F->y_907)).params)).t)).kind == ((rt_int)8LL))))) {
(*(P502)rt_nil_check((*(P508)rt_nil_check((*(P506)rt_nil_check(F->y_907)).params)).t)).initp = F->y_907;
}
}
F->e_900 = (*(P498)rt_nil_check(F->e_900)).next;
}
ret_:
  return;
}

static void f_manifest_const_247(P498 d_246) {
  struct f_manifest_const_247fr *F = rt_alloc(sizeof *F);
F->d_246 = d_246;
F->y_910 = NULL;
F->c_911 = NULL;
if (((*(P498)rt_nil_check(F->d_246)).a != NULL)) {
if ((((*(P498)rt_nil_check((*(P498)rt_nil_check(F->d_246)).a)).kind != ((rt_int)70LL)) || ((*(P498)rt_nil_check((*(P498)rt_nil_check(F->d_246)).a)).a != NULL))) {
goto ret_;
}
}
F->v_909 = f_manifest_217((*(P498)rt_nil_check(F->d_246)).b, &F->ok_908);
if ((!F->ok_908)) {
goto ret_;
}
(*(P498)rt_nil_check(F->d_246)).flag = ((rt_int)1LL);
F->y_910 = f_new_sym_155(((rt_int)2LL), (*(P498)rt_nil_check(F->d_246)).name);
(*(P506)rt_nil_check(F->y_910)).t = g_ty_int_557;
(*(P506)rt_nil_check(F->y_910)).c = f_new_cons_158();
(*(P506)rt_nil_check(F->y_910)).mvalue = F->v_909;
(*(P506)rt_nil_check(F->y_910)).hasmv = 1;
(*(P506)rt_nil_check(F->y_910)).ro_flag = 1;
(*(P506)rt_nil_check(F->y_910)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), f_itos_7(F->v_909)), rt_str("LL)", 3)); b_; }));
f_define_145(F->y_910, (*(P498)rt_nil_check(F->d_246)).line);
ret_:
  return;
}

static int f_exported_251(P498 d_248, rstr *name_249, int *ro_250) {
  struct f_exported_251fr *F = rt_alloc(sizeof *F);
F->d_248 = d_248;
F->name_249 = name_249;
F->ro_250 = ro_250;
F->ro_250v = *F->ro_250;
F->p_912 = NULL;
F->p_912 = (*(P498)rt_nil_check(F->d_248)).a;
F->ro_250v = 0;
if (((*(P498)rt_nil_check(F->d_248)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_912 != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_912)).name)), (*F->name_249))) {
F->ro_250v = ((*(P498)rt_nil_check(F->p_912)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_912 = (*(P498)rt_nil_check(F->p_912)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ro_250) = F->ro_250v;
  return F->result_;
}

static P506 f_copy_sym_253(P506 y_252) {
  struct f_copy_sym_253fr *F = rt_alloc(sizeof *F);
F->y_252 = y_252;
F->z_913 = NULL;
{ R507 *cell914 = rt_alloc(sizeof(R507));
(*cell914).name = NULL;
(*cell914).t = NULL;
(*cell914).c = NULL;
(*cell914).access = NULL;
(*cell914).cname = NULL;
(*cell914).st = NULL;
(*cell914).decl = NULL;
(*cell914).params = NULL;
(*cell914).result = NULL;
(*cell914).members = NULL;
(*cell914).mnext = NULL;
(*cell914).binds = NULL;
(*cell914).insts = NULL;
(*cell914).chain = NULL;
(*cell914).stack = NULL;
F->z_913 = cell914;
}
(*(P506)rt_nil_check(F->z_913)).kind = (*(P506)rt_nil_check(F->y_252)).kind;
(*(P506)rt_nil_check(F->z_913)).name = (*(P506)rt_nil_check(F->y_252)).name;
(*(P506)rt_nil_check(F->z_913)).t = (*(P506)rt_nil_check(F->y_252)).t;
(*(P506)rt_nil_check(F->z_913)).c = (*(P506)rt_nil_check(F->y_252)).c;
(*(P506)rt_nil_check(F->z_913)).access = (*(P506)rt_nil_check(F->y_252)).access;
(*(P506)rt_nil_check(F->z_913)).cname = (*(P506)rt_nil_check(F->y_252)).cname;
(*(P506)rt_nil_check(F->z_913)).ro_flag = (*(P506)rt_nil_check(F->y_252)).ro_flag;
(*(P506)rt_nil_check(F->z_913)).mvalue = (*(P506)rt_nil_check(F->y_252)).mvalue;
(*(P506)rt_nil_check(F->z_913)).hasmv = (*(P506)rt_nil_check(F->y_252)).hasmv;
(*(P506)rt_nil_check(F->z_913)).st = (*(P506)rt_nil_check(F->y_252)).st;
(*(P506)rt_nil_check(F->z_913)).decl = (*(P506)rt_nil_check(F->y_252)).decl;
(*(P506)rt_nil_check(F->z_913)).params = (*(P506)rt_nil_check(F->y_252)).params;
(*(P506)rt_nil_check(F->z_913)).result = (*(P506)rt_nil_check(F->y_252)).result;
(*(P506)rt_nil_check(F->z_913)).level = (*(P506)rt_nil_check(F->y_252)).level;
(*(P506)rt_nil_check(F->z_913)).byref = (*(P506)rt_nil_check(F->y_252)).byref;
(*(P506)rt_nil_check(F->z_913)).members = (*(P506)rt_nil_check(F->y_252)).members;
F->result_ = F->z_913;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_gen_capsule_255(P498 d_254) {
  struct f_gen_capsule_255fr *F = rt_alloc(sizeof *F);
F->d_254 = d_254;
F->y_915 = NULL;
F->y_915 = f_new_sym_155(((rt_int)8LL), (*(P498)rt_nil_check(F->d_254)).name);
(*(P506)rt_nil_check(F->y_915)).decl = F->d_254;
if (((*(P498)rt_nil_check(F->d_254)).b == NULL)) {
f_elaborate_capsule_264(F->d_254, F->y_915, NULL, F->d_254);
}
f_define_145(F->y_915, (*(P498)rt_nil_check(F->d_254)).line);
ret_:
  return;
}

static void f_capsule_params_259(P498 d_256, P498 args_257, rt_int line_258) {
  struct f_capsule_params_259fr *F = rt_alloc(sizeof *F);
F->d_256 = d_256;
F->args_257 = args_257;
F->line_258 = line_258;
F->p_916 = NULL;
F->p_916 = (*(P498)rt_nil_check(F->d_256)).b;
F->a_917 = NULL;
F->a_917 = F->args_257;
F->t_918 = NULL;
F->vt_919 = NULL;
F->c_920 = NULL;
while (((F->p_916 != NULL) && (F->a_917 != NULL))) {
F->t_918 = f_resolve_subtype_188((*(P498)rt_nil_check(F->p_916)).a, &F->c_920);
if (((*(P498)rt_nil_check(F->p_916)).ival == ((rt_int)3LL))) {
f_fail_23(F->line_258, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if ((((*(P498)rt_nil_check(F->p_916)).ival == ((rt_int)2LL)) || ((*(P498)rt_nil_check(F->p_916)).ival == ((rt_int)4LL)))) {
F->lv_921 = NULL;
F->lc_922 = NULL;
F->y_924 = NULL;
F->y_924 = f_new_sym_155(((rt_int)1LL), (*(P498)rt_nil_check(F->p_916)).name);
f_lvalue_413(F->a_917, &F->lv_921, &F->vt_919, &F->lc_922, &F->ro_923);
f_check_type_175(F->vt_919, F->t_918, F->line_258);
if ((F->ro_923 && ((*(P498)rt_nil_check(F->p_916)).ival == ((rt_int)2LL)))) {
f_fail_23(F->line_258, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_916)).name)), rt_str(" needs a variable", 17)); b_; }));
}
if (g_in_func_542) {
F->f_925 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_916)).name))), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_541, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177(F->t_918)), rt_str(" *", 2)), F->f_925), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_925), rt_str(" = &", 4)), (*(P493)rt_nil_check(F->lv_921))), rt_str(";", 1)); b_; }));
(*(P506)rt_nil_check(F->y_924)).level = g_cur_level_543;
(*(P506)rt_nil_check(F->y_924)).access = f_mk_3(&F->f_925);
(*(P506)rt_nil_check(F->y_924)).byref = 1;
} else {
F->g_926 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_916)).name)))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_536, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177(F->t_918)), rt_str(" *", 2)), F->g_926), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_926, rt_str(" = &", 4)), (*(P493)rt_nil_check(F->lv_921))), rt_str(";", 1)); b_; }));
(*(P506)rt_nil_check(F->y_924)).level = ((rt_int)0LL);
(*(P506)rt_nil_check(F->y_924)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_926), rt_str(")", 1)); b_; }));
}
(*(P506)rt_nil_check(F->y_924)).t = F->t_918;
(*(P506)rt_nil_check(F->y_924)).c = F->lc_922;
(*(P506)rt_nil_check(F->y_924)).ro_flag = ((*(P498)rt_nil_check(F->p_916)).ival == ((rt_int)4LL));
f_define_145(F->y_924, F->line_258);
} else {
F->y_927 = NULL;
F->y_927 = f_new_sym_155(((rt_int)2LL), (*(P498)rt_nil_check(F->p_916)).name);
F->v_928 = rt_str_copy(f_gexpr_434(F->a_917, F->t_918, &F->vt_919));
f_check_type_175(F->vt_919, F->t_918, F->line_258);
{
F->access_929 = rt_str_copy(f_storage_283(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_916)).name)), F->t_918));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_929, rt_str(" = ", 3)), f_copy_code_229(F->t_918, &F->v_928)), rt_str(";", 1)); b_; }));
f_bind_286(F->y_927, &F->access_929);
}
(*(P506)rt_nil_check(F->y_927)).t = F->t_918;
(*(P506)rt_nil_check(F->y_927)).c = F->c_920;
(*(P506)rt_nil_check(F->y_927)).ro_flag = 1;
f_define_145(F->y_927, F->line_258);
}
F->p_916 = (*(P498)rt_nil_check(F->p_916)).next;
F->a_917 = (*(P498)rt_nil_check(F->a_917)).next;
}
if (((F->p_916 != NULL) || (F->a_917 != NULL))) {
f_fail_23(F->line_258, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->d_256)).name))); b_; }));
}
ret_:
  return;
}

static void f_elaborate_capsule_264(P498 d_260, P506 y_261, P498 args_262, P498 owner_263) {
  struct f_elaborate_capsule_264fr *F = rt_alloc(sizeof *F);
F->d_260 = d_260;
F->y_261 = y_261;
F->args_262 = args_262;
F->owner_263 = owner_263;
F->cr_930 = NULL;
F->ctx_931 = NULL;
F->m_932 = NULL;
F->p_933 = NULL;
F->p_933 = (*(P498)rt_nil_check(F->d_260)).a;
{ R519 *cell935 = rt_alloc(sizeof(R519));
(*cell935).d = NULL;
(*cell935).next = NULL;
F->cr_930 = cell935;
}
(*(P518)rt_nil_check(F->cr_930)).d = F->d_260;
(*(P518)rt_nil_check(F->cr_930)).next = g_caps_545;
g_caps_545 = F->cr_930;
f_open_scope_151();
if (((*(P498)rt_nil_check(F->d_260)).b != NULL)) {
f_capsule_params_259(F->d_260, F->args_262, (*(P498)rt_nil_check(F->owner_263)).line);
}
{ R523 *cell936 = rt_alloc(sizeof(R523));
(*cell936).imps = NULL;
(*cell936).next = NULL;
F->ctx_931 = cell936;
}
(*(P522)rt_nil_check(F->ctx_931)).depth = g_depth_529;
(*(P522)rt_nil_check(F->ctx_931)).imps = (*(P498)rt_nil_check(F->d_260)).d;
(*(P522)rt_nil_check(F->ctx_931)).all_imp = ((*(P498)rt_nil_check(F->d_260)).flag >= ((rt_int)2LL));
(*(P522)rt_nil_check(F->ctx_931)).next = g_fctx_544;
g_fctx_544 = F->ctx_931;
f_declare_body_245((*(P498)rt_nil_check(F->d_260)).c);
f_capsule_elements_303((*(P498)rt_nil_check(F->d_260)).c);
{
F->w_937 = NULL;
{ R521 *cell938 = rt_alloc(sizeof(R521));
(*cell938).d = NULL;
(*cell938).w = NULL;
(*cell938).next = NULL;
F->w_937 = cell938;
}
(*(P520)rt_nil_check(F->w_937)).d = F->owner_263;
(*(P520)rt_nil_check(F->w_937)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_299((*(P498)rt_nil_check(F->d_260)).c); b_; }));
(*(P520)rt_nil_check(F->w_937)).next = g_cap_waits_546;
g_cap_waits_546 = F->w_937;
}
g_fctx_544 = (*(P522)rt_nil_check(g_fctx_544)).next;
F->m_932 = g_scope_stack_530;
while (((F->m_932 != NULL) && ((*(P506)rt_nil_check(F->m_932)).depth == g_depth_529))) {
if ((((((*(P506)rt_nil_check(F->m_932)).kind == ((rt_int)5LL)) && ((*(P506)rt_nil_check(F->m_932)).t == NULL)) && ((*(P506)rt_nil_check(F->m_932)).decl != NULL)) && ((*(P498)rt_nil_check((*(P506)rt_nil_check(F->m_932)).decl)).kind == ((rt_int)43LL)))) {
(*(P506)rt_nil_check(F->m_932)).t = f_new_type_200(F->m_932, f_nn_48(((rt_int)80LL), (*(P498)rt_nil_check(F->d_260)).line), &(*(P506)rt_nil_check(F->m_932)).c);
} else if (((((*(P506)rt_nil_check(F->m_932)).kind == ((rt_int)5LL)) || ((*(P506)rt_nil_check(F->m_932)).kind == ((rt_int)6LL))) && ((*(P506)rt_nil_check(F->m_932)).t == NULL))) {
(*(P506)rt_nil_check(F->m_932)).t = f_resolve_subtype_188((*(P506)rt_nil_check(F->m_932)).st, &(*(P506)rt_nil_check(F->m_932)).c);
} else if ((((*(P506)rt_nil_check(F->m_932)).kind == ((rt_int)5LL)) && ((*(P502)rt_nil_check((*(P506)rt_nil_check(F->m_932)).t)).kind == ((rt_int)8LL)))) {
f_finish_ptr_274((*(P506)rt_nil_check(F->m_932)).t);
}
F->m_932 = (*(P506)rt_nil_check(F->m_932)).stack;
}
F->m_932 = g_scope_stack_530;
while (((F->m_932 != NULL) && ((*(P506)rt_nil_check(F->m_932)).depth == g_depth_529))) {
if (f_exported_251(F->d_260, &(*(P493)rt_nil_check((*(P506)rt_nil_check(F->m_932)).name)), &F->ro_934)) {
F->z_939 = NULL;
F->z_939 = f_copy_sym_253(F->m_932);
if (F->ro_934) {
(*(P506)rt_nil_check(F->z_939)).ro_flag = 1;
}
(*(P506)rt_nil_check(F->z_939)).mnext = (*(P506)rt_nil_check(F->y_261)).members;
(*(P506)rt_nil_check(F->y_261)).members = F->z_939;
}
F->m_932 = (*(P506)rt_nil_check(F->m_932)).stack;
}
while ((F->p_933 != NULL)) {
if ((((!rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_933)).name)), rt_str(":=", 2))) && (!rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_933)).name)), rt_str("=", 1)))) && ((f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_933)).name))) == NULL) || ((*(P506)rt_nil_check(f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_933)).name))))).depth != g_depth_529)))) {
f_fail_23((*(P498)rt_nil_check(F->d_260)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_933)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->d_260)).name))); b_; }));
}
F->p_933 = (*(P498)rt_nil_check(F->p_933)).next;
}
f_close_scope_152();
g_caps_545 = (*(P518)rt_nil_check(g_caps_545)).next;
ret_:
  return;
}

static int f_exports_op_267(P498 d_265, rstr *op_266) {
  struct f_exports_op_267fr *F = rt_alloc(sizeof *F);
F->d_265 = d_265;
F->op_266 = op_266;
F->p_940 = NULL;
if ((F->d_265 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_940 = (*(P498)rt_nil_check(F->d_265)).a;
while ((F->p_940 != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_940)).name)), (*F->op_266))) {
F->result_ = 1;
goto ret_;
}
F->p_940 = (*(P498)rt_nil_check(F->p_940)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P493 f_renamed_270(P498 d_268, P506 z_269) {
  struct f_renamed_270fr *F = rt_alloc(sizeof *F);
F->d_268 = d_268;
F->z_269 = z_269;
F->r_941 = NULL;
F->r_941 = (*(P498)rt_nil_check(F->d_268)).c;
while ((F->r_941 != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->r_941)).name)), (*(P493)rt_nil_check((*(P506)rt_nil_check(F->z_269)).name)))) {
F->result_ = (*(P498)rt_nil_check((*(P498)rt_nil_check(F->r_941)).a)).name;
goto ret_;
}
F->r_941 = (*(P498)rt_nil_check(F->r_941)).next;
}
F->result_ = (*(P506)rt_nil_check(F->z_269)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_gen_expose_272(P498 d_271) {
  struct f_gen_expose_272fr *F = rt_alloc(sizeof *F);
F->d_271 = d_271;
F->y_942 = NULL;
F->y_942 = f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->d_271)).name)));
F->m_943 = NULL;
F->p_944 = NULL;
F->p_944 = (*(P498)rt_nil_check(F->d_271)).a;
F->r_945 = NULL;
F->r_945 = (*(P498)rt_nil_check(F->d_271)).c;
if (((F->y_942 == NULL) || ((*(P506)rt_nil_check(F->y_942)).kind != ((rt_int)8LL)))) {
f_fail_23((*(P498)rt_nil_check(F->d_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->d_271)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if ((((*(P498)rt_nil_check(F->d_271)).flag == ((rt_int)1LL)) || ((*(P498)rt_nil_check(F->d_271)).flag == ((rt_int)3LL)))) {
F->inst_946 = NULL;
F->inst_946 = f_new_sym_155(((rt_int)8LL), (*(P506)rt_nil_check(F->y_942)).name);
(*(P506)rt_nil_check(F->inst_946)).decl = (*(P506)rt_nil_check(F->y_942)).decl;
f_elaborate_capsule_264((*(P506)rt_nil_check(F->y_942)).decl, F->inst_946, (*(P498)rt_nil_check(F->d_271)).b, F->d_271);
F->y_942 = F->inst_946;
} else if ((((*(P506)rt_nil_check(F->y_942)).decl != NULL) && ((*(P498)rt_nil_check((*(P506)rt_nil_check(F->y_942)).decl)).b != NULL))) {
f_fail_23((*(P498)rt_nil_check(F->d_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->d_271)).name))), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P498)rt_nil_check(F->d_271)).b != NULL)) {
f_fail_23((*(P498)rt_nil_check(F->d_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_945 != NULL)) {
F->found_947 = 0;
F->m_943 = (*(P506)rt_nil_check(F->y_942)).members;
while ((F->m_943 != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P506)rt_nil_check(F->m_943)).name)), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->r_945)).name)))) {
F->found_947 = 1;
}
F->m_943 = (*(P506)rt_nil_check(F->m_943)).mnext;
}
if ((!F->found_947)) {
f_fail_23((*(P498)rt_nil_check(F->d_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->r_945)).name)), rt_str(" is renamed but not made known by ", 34)), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->d_271)).name))); b_; }));
}
F->r_945 = (*(P498)rt_nil_check(F->r_945)).next;
}
if (((*(P498)rt_nil_check(F->d_271)).ival == ((rt_int)1LL))) {
F->m_943 = (*(P506)rt_nil_check(F->y_942)).members;
while ((F->m_943 != NULL)) {
F->z_948 = NULL;
F->z_948 = f_copy_sym_253(F->m_943);
(*(P506)rt_nil_check(F->z_948)).name = f_renamed_270(F->d_271, F->m_943);
f_define_145(F->z_948, (*(P498)rt_nil_check(F->d_271)).line);
F->m_943 = (*(P506)rt_nil_check(F->m_943)).mnext;
}
goto ret_;
}
while ((F->p_944 != NULL)) {
F->found_949 = 0;
F->m_943 = (*(P506)rt_nil_check(F->y_942)).members;
while ((F->m_943 != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P506)rt_nil_check(F->m_943)).name)), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_944)).name)))) {
F->z_950 = NULL;
F->z_950 = f_copy_sym_253(F->m_943);
if (((*(P498)rt_nil_check(F->p_944)).ival == ((rt_int)1LL))) {
(*(P506)rt_nil_check(F->z_950)).ro_flag = 1;
}
(*(P506)rt_nil_check(F->z_950)).name = f_renamed_270(F->d_271, F->m_943);
f_define_145(F->z_950, (*(P498)rt_nil_check(F->d_271)).line);
F->found_949 = 1;
}
F->m_943 = (*(P506)rt_nil_check(F->m_943)).mnext;
}
if ((!F->found_949)) {
f_fail_23((*(P498)rt_nil_check(F->d_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_944)).name)), rt_str(" is not exported by ", 20)), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->d_271)).name))); b_; }));
}
F->p_944 = (*(P498)rt_nil_check(F->p_944)).next;
}
ret_:
  return;
}

static void f_finish_ptr_274(P502 t_273) {
  struct f_finish_ptr_274fr *F = rt_alloc(sizeof *F);
F->t_273 = t_273;
F->d_951 = NULL;
F->d_951 = (*(P502)rt_nil_check(F->t_273)).decl;
F->p_952 = NULL;
F->c_953 = NULL;
F->dummy_954 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_954, rt_str(" ", 1));
if (((*(P502)rt_nil_check(F->t_273)).target != NULL)) {
goto ret_;
}
f_open_scope_151();
F->p_952 = (*(P498)rt_nil_check(F->d_951)).b;
while ((F->p_952 != NULL)) {
F->y_955 = NULL;
F->y_955 = f_new_sym_155(((rt_int)2LL), (*(P498)rt_nil_check(F->p_952)).name);
(*(P506)rt_nil_check(F->y_955)).t = g_ty_int_557;
(*(P506)rt_nil_check(F->y_955)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_145(F->y_955, (*(P498)rt_nil_check(F->d_951)).line);
F->p_952 = (*(P498)rt_nil_check(F->p_952)).next;
}
(*(P502)rt_nil_check(F->t_273)).target = f_resolve_subtype_188((*(P498)rt_nil_check(F->d_951)).a, &F->c_953);
f_close_scope_152();
(*rt_str_at(&F->dummy_954, ((rt_int)1LL))) = rt_str_get(f_ctype_177(F->t_273), ((rt_int)1LL));
(*rt_str_at(&F->dummy_954, ((rt_int)1LL))) = rt_str_get(f_ctype_177((*(P502)rt_nil_check(F->t_273)).target), ((rt_int)1LL));
ret_:
  return;
}

static void f_declare_subprogram_276(P498 d_275) {
  struct f_declare_subprogram_276fr *F = rt_alloc(sizeof *F);
F->d_275 = d_275;
f_define_145(f_build_subprogram_278(F->d_275), (*(P498)rt_nil_check(F->d_275)).line);
ret_:
  return;
}

static P506 f_build_subprogram_278(P498 d_277) {
  struct f_build_subprogram_278fr *F = rt_alloc(sizeof *F);
F->d_277 = d_277;
F->y_956 = NULL;
F->p_957 = NULL;
F->p_957 = (*(P498)rt_nil_check(F->d_277)).a;
F->tail_958 = NULL;
if (((*(P498)rt_nil_check(F->d_277)).kind == ((rt_int)46LL))) {
F->y_956 = f_new_sym_155(((rt_int)3LL), (*(P498)rt_nil_check(F->d_277)).name);
} else if (((*(P498)rt_nil_check(F->d_277)).kind == ((rt_int)50LL))) {
F->y_956 = f_new_sym_155(((rt_int)9LL), (*(P498)rt_nil_check(F->d_277)).name);
} else {
F->y_956 = f_new_sym_155(((rt_int)4LL), (*(P498)rt_nil_check(F->d_277)).name);
}
while ((F->p_957 != NULL)) {
F->pm_959 = NULL;
{ R509 *cell960 = rt_alloc(sizeof(R509));
(*cell960).name = NULL;
(*cell960).t = NULL;
(*cell960).c = NULL;
(*cell960).cfield = NULL;
(*cell960).next = NULL;
F->pm_959 = cell960;
}
(*(P508)rt_nil_check(F->pm_959)).name = (*(P498)rt_nil_check(F->p_957)).name;
(*(P508)rt_nil_check(F->pm_959)).mode = (*(P498)rt_nil_check(F->p_957)).ival;
(*(P508)rt_nil_check(F->pm_959)).t = f_resolve_subtype_188((*(P498)rt_nil_check(F->p_957)).a, &(*(P508)rt_nil_check(F->pm_959)).c);
(*(P508)rt_nil_check(F->pm_959)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_957)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_958 == NULL)) {
(*(P506)rt_nil_check(F->y_956)).params = F->pm_959;
} else {
(*(P508)rt_nil_check(F->tail_958)).next = F->pm_959;
}
F->tail_958 = F->pm_959;
F->p_957 = (*(P498)rt_nil_check(F->p_957)).next;
}
(*(P506)rt_nil_check(F->y_956)).result = g_ty_void_562;
if (((*(P498)rt_nil_check(F->d_277)).b != NULL)) {
F->rc_961 = NULL;
(*(P506)rt_nil_check(F->y_956)).result = f_resolve_subtype_188((*(P498)rt_nil_check(F->d_277)).b, &F->rc_961);
}
(*(P506)rt_nil_check(F->y_956)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_402(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->d_277)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P506)rt_nil_check(F->y_956)).decl = F->d_277;
(*(P506)rt_nil_check(F->y_956)).level = g_cur_level_543;
if (((*(P498)rt_nil_check(F->d_277)).kind == ((rt_int)50LL))) {
f_put_27(g_out_globals_536, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_956)).cname))), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_956;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_element_280(P498 e_279) {
  struct f_element_280fr *F = rt_alloc(sizeof *F);
F->e_279 = e_279;
F->k_962 = (*(P498)rt_nil_check(F->e_279)).kind;
if (((F->k_962 == ((rt_int)48LL)) && (((*(P498)rt_nil_check(F->e_279)).flag == ((rt_int)1LL)) || ((*(P498)rt_nil_check(F->e_279)).flag == ((rt_int)3LL))))) {
f_gen_expose_272(F->e_279);
} else if ((((F->k_962 == ((rt_int)45LL)) || (F->k_962 == ((rt_int)46LL))) || (F->k_962 == ((rt_int)50LL)))) {
f_subprogram_292(F->e_279);
} else if (((((((F->k_962 == ((rt_int)49LL)) || (F->k_962 == ((rt_int)42LL))) || (F->k_962 == ((rt_int)43LL))) || (F->k_962 == ((rt_int)47LL))) || (F->k_962 == ((rt_int)48LL))) || (F->k_962 == ((rt_int)51LL)))) {
goto ret_;
} else if ((F->k_962 == ((rt_int)44LL))) {
f_finish_ptr_274((*(P506)rt_nil_check(f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_279)).name))))).t);
} else if ((F->k_962 == ((rt_int)40LL))) {
f_var_decl_288(F->e_279);
} else if (((F->k_962 == ((rt_int)41LL)) && ((*(P498)rt_nil_check(F->e_279)).flag == ((rt_int)0LL)))) {
f_const_decl_290(F->e_279);
} else if ((F->k_962 == ((rt_int)41LL))) {
goto ret_;
} else if ((F->k_962 == ((rt_int)33LL))) {
F->t_963 = NULL;
F->c_964 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_279)).a, g_ty_bool_558, &F->t_963));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_964), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_314(F->e_279);
}
ret_:
  return;
}

static rstr f_storage_283(rstr *name_281, P502 t_282) {
  struct f_storage_283fr *F = rt_alloc(sizeof *F);
F->name_281 = name_281;
F->t_282 = t_282;
if ((!g_in_func_542)) {
F->g_965 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_281))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_536, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177(F->t_282)), rt_str(" ", 1)), F->g_965), rt_str(";", 1)); b_; }));
g_st_field_548 = f_mk_3(&F->g_965);
F->result_ = F->g_965;
goto ret_;
}
{
F->f_966 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_281)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_541, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177(F->t_282)), rt_str(" ", 1)), F->f_966), rt_str(";", 1)); b_; }));
g_st_field_548 = f_mk_3(&F->f_966);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_966);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_bind_286(P506 y_284, rstr *access_285) {
  struct f_bind_286fr *F = rt_alloc(sizeof *F);
F->y_284 = y_284;
F->access_285 = access_285;
if (g_in_func_542) {
(*(P506)rt_nil_check(F->y_284)).level = g_cur_level_543;
(*(P506)rt_nil_check(F->y_284)).access = g_st_field_548;
} else {
(*(P506)rt_nil_check(F->y_284)).level = ((rt_int)0LL);
(*(P506)rt_nil_check(F->y_284)).access = f_mk_3(&(*F->access_285));
}
ret_:
  return;
}

static void f_var_decl_288(P498 d_287) {
  struct f_var_decl_288fr *F = rt_alloc(sizeof *F);
F->d_287 = d_287;
F->c_967 = NULL;
F->t_968 = NULL;
F->t_968 = f_resolve_subtype_188((*(P498)rt_nil_check(F->d_287)).a, &F->c_967);
F->y_969 = NULL;
F->y_969 = f_new_sym_155(((rt_int)1LL), (*(P498)rt_nil_check(F->d_287)).name);
F->access_970 = rt_str_copy(f_storage_283(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->d_287)).name)), F->t_968));
f_init_storage_204(&F->access_970, F->t_968, F->c_967);
if (((*(P498)rt_nil_check(F->d_287)).b != NULL)) {
F->vt_971 = NULL;
F->v_972 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->d_287)).b, F->t_968, &F->vt_971));
f_check_type_175(F->vt_971, F->t_968, (*(P498)rt_nil_check(F->d_287)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_226(&F->access_970, F->t_968, &F->v_972, F->c_967); b_; }));
}
(*(P506)rt_nil_check(F->y_969)).t = F->t_968;
(*(P506)rt_nil_check(F->y_969)).c = F->c_967;
f_bind_286(F->y_969, &F->access_970);
f_define_145(F->y_969, (*(P498)rt_nil_check(F->d_287)).line);
ret_:
  return;
}

static void f_const_decl_290(P498 d_289) {
  struct f_const_decl_290fr *F = rt_alloc(sizeof *F);
F->d_289 = d_289;
F->c_973 = NULL;
F->c_973 = f_new_cons_158();
F->t_974 = NULL;
F->vt_975 = NULL;
F->y_976 = NULL;
F->y_976 = f_new_sym_155(((rt_int)2LL), (*(P498)rt_nil_check(F->d_289)).name);
if (((*(P498)rt_nil_check(F->d_289)).a != NULL)) {
F->t_974 = f_resolve_subtype_188((*(P498)rt_nil_check(F->d_289)).a, &F->c_973);
}
{
F->v_978 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->d_289)).b, F->t_974, &F->vt_975));
if ((F->t_974 != NULL)) {
f_check_type_175(F->vt_975, F->t_974, (*(P498)rt_nil_check(F->d_289)).line);
} else {
F->t_974 = F->vt_975;
}
if (((*(P502)rt_nil_check(F->t_974)).kind == ((rt_int)1LL))) {
(*(P506)rt_nil_check(F->y_976)).mvalue = f_manifest_217((*(P498)rt_nil_check(F->d_289)).b, &F->ok_977);
(*(P506)rt_nil_check(F->y_976)).hasmv = F->ok_977;
}
{
F->access_979 = rt_str_copy(f_storage_283(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->d_289)).name)), F->t_974));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_979, rt_str(" = ", 3)), f_copy_code_229(F->t_974, &F->v_978)), rt_str(";", 1)); b_; }));
f_bind_286(F->y_976, &F->access_979);
}
}
(*(P506)rt_nil_check(F->y_976)).t = F->t_974;
(*(P506)rt_nil_check(F->y_976)).c = F->c_973;
(*(P506)rt_nil_check(F->y_976)).ro_flag = 1;
f_define_145(F->y_976, (*(P498)rt_nil_check(F->d_289)).line);
ret_:
  return;
}

static void f_subprogram_292(P498 d_291) {
  struct f_subprogram_292fr *F = rt_alloc(sizeof *F);
F->d_291 = d_291;
f_gen_subprogram_295(F->d_291, f_lookup_decl_142(F->d_291));
ret_:
  return;
}

static void f_gen_subprogram_295(P498 d_293, P506 y_294) {
  struct f_gen_subprogram_295fr *F = rt_alloc(sizeof *F);
F->d_293 = d_293;
F->y_294 = y_294;
F->saved_code_980 = NULL;
F->saved_code_980 = g_code_540;
F->saved_fields_981 = NULL;
F->saved_fields_981 = g_fields_buf_541;
F->saved_in_982 = g_in_func_542;
F->saved_sym_983 = NULL;
F->saved_sym_983 = g_func_sym_550;
F->saved_exits_984 = NULL;
F->saved_exits_984 = g_exits_551;
F->saved_frames_985 = g_frames_552;
F->args_986 = NULL;
F->args_986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_987 = NULL;
F->pm_987 = (*(P506)rt_nil_check(F->y_294)).params;
F->saved_handlers_988 = NULL;
F->saved_handlers_988 = g_handlers_553;
F->saved_cleanups_989 = NULL;
F->saved_cleanups_989 = g_cleanups_554;
F->ctx_990 = NULL;
F->head_991 = NULL;
F->frame_992 = NULL;
F->frame_992 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_294)).cname)), rt_str("fr", 2)); b_; }));
F->parent_993 = NULL;
F->copy_back_994 = NULL;
F->copy_back_994 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (g_in_func_542) {
F->parent_993 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P506)rt_nil_check(g_func_sym_550)).cname)), rt_str("fr", 2)); b_; }));
}
g_code_540 = f_new_buffer_24();
g_fields_buf_541 = f_new_buffer_24();
g_in_func_542 = 1;
g_func_sym_550 = F->y_294;
g_exits_551 = NULL;
g_frames_552 = ((rt_int)0LL);
g_handlers_553 = NULL;
g_cleanups_554 = NULL;
g_cur_level_543 = rt_add(g_cur_level_543, ((rt_int)1LL));
f_open_scope_151();
{ R523 *cell995 = rt_alloc(sizeof(R523));
(*cell995).imps = NULL;
(*cell995).next = NULL;
F->ctx_990 = cell995;
}
(*(P522)rt_nil_check(F->ctx_990)).depth = g_depth_529;
(*(P522)rt_nil_check(F->ctx_990)).imps = (*(P498)rt_nil_check(F->d_293)).d;
(*(P522)rt_nil_check(F->ctx_990)).all_imp = ((*(P498)rt_nil_check(F->d_293)).flag >= ((rt_int)2LL));
(*(P522)rt_nil_check(F->ctx_990)).next = g_fctx_544;
g_fctx_544 = F->ctx_990;
if ((F->parent_993 != NULL)) {
f_put_27(g_fields_buf_541, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P493)rt_nil_check(F->parent_993))), rt_str(" *up;", 5)); b_; }));
if (((*(P506)rt_nil_check(F->y_294)).kind != ((rt_int)9LL))) {
F->args_986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P493)rt_nil_check(F->parent_993))), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_987 != NULL)) {
F->ct_996 = rt_str_copy(f_ctype_177((*(P508)rt_nil_check(F->pm_987)).t));
F->f_997 = rt_str_copy((*(P493)rt_nil_check((*(P508)rt_nil_check(F->pm_987)).cfield)));
F->p_998 = NULL;
if ((((*(P493)rt_nil_check(F->args_986))).len > ((rt_int)0LL))) {
F->args_986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check(F->args_986)), rt_str(", ", 2)); b_; }));
}
if (((*(P508)rt_nil_check(F->pm_987)).mode == ((rt_int)1LL))) {
F->p_998 = f_new_sym_155(((rt_int)2LL), (*(P508)rt_nil_check(F->pm_987)).name);
f_put_27(g_fields_buf_541, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_996), rt_str(" ", 1)), F->f_997), rt_str(";", 1)); b_; }));
F->args_986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->args_986)), F->ct_996), rt_str(" ", 1)), F->f_997); b_; }));
(*(P506)rt_nil_check(F->p_998)).access = f_mk_3(&F->f_997);
if (((*(P506)rt_nil_check(F->y_294)).kind != ((rt_int)9LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_997), rt_str(" = ", 3)), f_copy_code_229((*(P508)rt_nil_check(F->pm_987)).t, &F->f_997)), rt_str(";", 1)); b_; }));
}
} else {
F->p_998 = f_new_sym_155(((rt_int)1LL), (*(P508)rt_nil_check(F->pm_987)).name);
f_put_27(g_fields_buf_541, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_996), rt_str(" *", 2)), F->f_997), rt_str(";", 1)); b_; }));
F->args_986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->args_986)), F->ct_996), rt_str(" *", 2)), F->f_997); b_; }));
(*(P506)rt_nil_check(F->p_998)).access = f_mk_3(&F->f_997);
(*(P506)rt_nil_check(F->p_998)).byref = 1;
if (((*(P506)rt_nil_check(F->y_294)).kind != ((rt_int)9LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_997), rt_str(" = ", 3)), F->f_997), rt_str(";", 1)); b_; }));
}
if ((((*(P508)rt_nil_check(F->pm_987)).mode == ((rt_int)3LL)) && ((*(P506)rt_nil_check(F->y_294)).kind != ((rt_int)9LL)))) {
f_put_27(g_fields_buf_541, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_996), rt_str(" ", 1)), F->f_997), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_997), rt_str("v = ", 4)), f_copy_code_229((*(P508)rt_nil_check(F->pm_987)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_997); b_; }))), rt_str(";", 1)); b_; }));
F->copy_back_994 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->copy_back_994)), rt_str("  ", 2)), f_assign_code_226(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_997), rt_str(")", 1)); b_; }), (*(P508)rt_nil_check(F->pm_987)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_997), rt_str("v", 1)); b_; }), (*(P508)rt_nil_check(F->pm_987)).c)); b_; }));
(*(P506)rt_nil_check(F->p_998)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_997, rt_str("v", 1)); b_; }));
(*(P506)rt_nil_check(F->p_998)).byref = 0;
}
}
(*(P506)rt_nil_check(F->p_998)).t = (*(P508)rt_nil_check(F->pm_987)).t;
(*(P506)rt_nil_check(F->p_998)).c = (*(P508)rt_nil_check(F->pm_987)).c;
(*(P506)rt_nil_check(F->p_998)).level = g_cur_level_543;
(*(P506)rt_nil_check(F->p_998)).ro_flag = (((*(P508)rt_nil_check(F->pm_987)).mode == ((rt_int)1LL)) || ((*(P508)rt_nil_check(F->pm_987)).mode == ((rt_int)4LL)));
f_define_145(F->p_998, (*(P498)rt_nil_check(F->d_293)).line);
F->pm_987 = (*(P508)rt_nil_check(F->pm_987)).next;
}
if (((*(P502)rt_nil_check((*(P506)rt_nil_check(F->y_294)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_fields_buf_541, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177((*(P506)rt_nil_check(F->y_294)).result)), rt_str(" result_;", 9)); b_; }));
}
f_declare_body_245((*(P498)rt_nil_check(F->d_293)).c);
f_body_elements_305((*(P498)rt_nil_check(F->d_293)).c);
f_close_scope_152();
g_fctx_544 = (*(P522)rt_nil_check(g_fctx_544)).next;
g_cur_level_543 = rt_sub(g_cur_level_543, ((rt_int)1LL));
if (((((*(P493)rt_nil_check(F->args_986))).len == ((rt_int)0LL)) || ((*(P506)rt_nil_check(F->y_294)).kind == ((rt_int)9LL)))) {
F->args_986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P506)rt_nil_check(F->y_294)).kind == ((rt_int)9LL))) {
F->args_986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_991 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177((*(P506)rt_nil_check(F->y_294)).result)), rt_str(" ", 1)), (*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_294)).cname))), rt_str("(", 1)), (*(P493)rt_nil_check(F->args_986))), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_535, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check(F->head_991)), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check(F->head_991)), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_549, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P493)rt_nil_check(F->frame_992))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_549, g_fields_buf_541);
f_put_27(g_out_frames_549, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P506)rt_nil_check(F->y_294)).kind == ((rt_int)9LL))) {
f_put_27(g_out_funcs_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P493)rt_nil_check(F->frame_992))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P493)rt_nil_check(F->frame_992))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_splice_34(g_out_funcs_537, g_code_540);
if (((*(P502)rt_nil_check((*(P506)rt_nil_check(F->y_294)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_out_funcs_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P493)rt_nil_check(F->copy_back_994))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_537, &(*(P493)rt_nil_check(F->copy_back_994)));
}
f_put_27(g_out_funcs_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P493)rt_nil_check(F->copy_back_994))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_537, &(*(P493)rt_nil_check(F->copy_back_994)));
}
f_put_27(g_out_funcs_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_540 = F->saved_code_980;
g_fields_buf_541 = F->saved_fields_981;
g_in_func_542 = F->saved_in_982;
g_func_sym_550 = F->saved_sym_983;
g_exits_551 = F->saved_exits_984;
g_frames_552 = F->saved_frames_985;
g_handlers_553 = F->saved_handlers_988;
g_cleanups_554 = F->saved_cleanups_989;
ret_:
  return;
}

static rstr f_waits_of_297(P498 d_296) {
  struct f_waits_of_297fr *F = rt_alloc(sizeof *F);
F->d_296 = d_296;
F->w_999 = NULL;
F->w_999 = g_cap_waits_546;
while ((F->w_999 != NULL)) {
if (((*(P520)rt_nil_check(F->w_999)).d == F->d_296)) {
F->result_ = (*(P493)rt_nil_check((*(P520)rt_nil_check(F->w_999)).w));
goto ret_;
}
F->w_999 = (*(P520)rt_nil_check(F->w_999)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_task_waits_299(P498 elems_298) {
  struct f_task_waits_299fr *F = rt_alloc(sizeof *F);
F->elems_298 = elems_298;
F->e_1000 = NULL;
F->e_1000 = F->elems_298;
F->r_1001 = NULL;
F->r_1001 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1000 != NULL)) {
if (((*(P498)rt_nil_check(F->e_1000)).kind == ((rt_int)50LL))) {
F->r_1001 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->r_1001)), rt_str(" rt_await_decl(&", 16)), (*(P493)rt_nil_check((*(P506)rt_nil_check(f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_1000)).name))))).cname))), rt_str("decl);", 6)); b_; }));
} else if ((((*(P498)rt_nil_check(F->e_1000)).kind == ((rt_int)47LL)) || (((*(P498)rt_nil_check(F->e_1000)).kind == ((rt_int)48LL)) && (((*(P498)rt_nil_check(F->e_1000)).flag == ((rt_int)1LL)) || ((*(P498)rt_nil_check(F->e_1000)).flag == ((rt_int)3LL)))))) {
F->r_1001 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check(F->r_1001)), f_waits_of_297(F->e_1000)); b_; }));
}
F->e_1000 = (*(P498)rt_nil_check(F->e_1000)).next;
}
F->result_ = (*(P493)rt_nil_check(F->r_1001));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_await_tasks_301(P498 elems_300) {
  struct f_await_tasks_301fr *F = rt_alloc(sizeof *F);
F->elems_300 = elems_300;
F->w_1002 = rt_str_copy(f_task_waits_299(F->elems_300));
if (((F->w_1002).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1002);
}
ret_:
  return;
}

static void f_capsule_elements_303(P498 elems_302) {
  struct f_capsule_elements_303fr *F = rt_alloc(sizeof *F);
F->elems_302 = elems_302;
F->e_1003 = NULL;
F->e_1003 = F->elems_302;
while ((F->e_1003 != NULL)) {
f_element_280(F->e_1003);
F->e_1003 = (*(P498)rt_nil_check(F->e_1003)).next;
}
ret_:
  return;
}

static void f_body_elements_305(P498 elems_304) {
  struct f_body_elements_305fr *F = rt_alloc(sizeof *F);
F->elems_304 = elems_304;
f_capsule_elements_303(F->elems_304);
f_await_tasks_301(F->elems_304);
ret_:
  return;
}

static void f_gen_body_307(P498 elems_306) {
  struct f_gen_body_307fr *F = rt_alloc(sizeof *F);
F->elems_306 = elems_306;
f_open_scope_151();
f_declare_body_245(F->elems_306);
f_body_elements_305(F->elems_306);
f_close_scope_152();
ret_:
  return;
}

static void f_pop_frames_309(rt_int upto_308) {
  struct f_pop_frames_309fr *F = rt_alloc(sizeof *F);
F->upto_308 = upto_308;
F->i_1004 = g_frames_552;
F->c_1005 = NULL;
F->c_1005 = g_cleanups_554;
while ((F->i_1004 > F->upto_308)) {
f_emit_29(&(*(P493)rt_nil_check((*(P510)rt_nil_check(F->c_1005)).s)));
F->c_1005 = (*(P510)rt_nil_check(F->c_1005)).next;
F->i_1004 = rt_sub(F->i_1004, ((rt_int)1LL));
}
ret_:
  return;
}

static void f_push_cleanup_311(rstr *s_310) {
  struct f_push_cleanup_311fr *F = rt_alloc(sizeof *F);
F->s_310 = s_310;
F->c_1006 = NULL;
{ R511 *cell1007 = rt_alloc(sizeof(R511));
(*cell1007).s = NULL;
(*cell1007).next = NULL;
F->c_1006 = cell1007;
}
(*(P510)rt_nil_check(F->c_1006)).s = f_mk_3(&(*F->s_310));
(*(P510)rt_nil_check(F->c_1006)).next = g_cleanups_554;
g_cleanups_554 = F->c_1006;
g_frames_552 = rt_add(g_frames_552, ((rt_int)1LL));
ret_:
  return;
}

static void f_pop_cleanup_312(void) {
  struct f_pop_cleanup_312fr *F = rt_alloc(sizeof *F);
g_cleanups_554 = (*(P510)rt_nil_check(g_cleanups_554)).next;
g_frames_552 = rt_sub(g_frames_552, ((rt_int)1LL));
ret_:
  return;
}

static void f_gen_statement_314(P498 s_313) {
  struct f_gen_statement_314fr *F = rt_alloc(sizeof *F);
F->s_313 = s_313;
F->label_1008 = NULL;
if (((*(P498)rt_nil_check(F->s_313)).tag != NULL)) {
F->x_1009 = NULL;
{ R517 *cell1010 = rt_alloc(sizeof(R517));
(*cell1010).match = NULL;
(*cell1010).label = NULL;
(*cell1010).next = NULL;
F->x_1009 = cell1010;
}
F->label_1008 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P516)rt_nil_check(F->x_1009)).match = (*(P498)rt_nil_check(F->s_313)).tag;
(*(P516)rt_nil_check(F->x_1009)).label = F->label_1008;
(*(P516)rt_nil_check(F->x_1009)).depth = g_frames_552;
(*(P516)rt_nil_check(F->x_1009)).next = g_exits_551;
g_exits_551 = F->x_1009;
}
{ rt_int sel1011 = (*(P498)rt_nil_check(F->s_313)).kind;
if (0 || (sel1011 == ((rt_int)20LL))) {
f_st_assign_316(F->s_313);
} else if (0 || (sel1011 == ((rt_int)21LL))) {
f_st_call_318(F->s_313);
} else if (0 || (sel1011 == ((rt_int)22LL))) {
f_st_if_320(F->s_313);
} else if (0 || (sel1011 == ((rt_int)23LL))) {
f_st_case_322(F->s_313);
} else if (0 || (sel1011 == ((rt_int)24LL))) {
f_st_repeat_324(F->s_313);
} else if (0 || (sel1011 == ((rt_int)25LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_307((*(P498)rt_nil_check(F->s_313)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1011 == ((rt_int)27LL))) {
f_st_exit_326(F->s_313);
} else if (0 || (sel1011 == ((rt_int)28LL))) {
f_st_return_328(F->s_313);
} else if (0 || (sel1011 == ((rt_int)30LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_331(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->s_313)).name)), (*(P498)rt_nil_check(F->s_313)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1011 == ((rt_int)31LL))) {
if ((g_handlers_553 == NULL)) {
f_fail_23((*(P498)rt_nil_check(F->s_313)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P493)rt_nil_check((*(P510)rt_nil_check(g_handlers_553)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel1011 == ((rt_int)26LL))) {
f_st_guard_333(F->s_313);
} else if (0 || (sel1011 == ((rt_int)32LL))) {
f_st_alloc_335(F->s_313);
} else if (0 || (sel1011 == ((rt_int)34LL))) {
f_st_create_339(F->s_313);
} else if (0 || (sel1011 == ((rt_int)35LL))) {
f_st_wait_368(F->s_313);
} else if (0 || (sel1011 == ((rt_int)36LL))) {
f_st_region_376(F->s_313);
} else {
f_fail_23((*(P498)rt_nil_check(F->s_313)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P498)rt_nil_check(F->s_313)).tag != NULL)) {
g_exits_551 = (*(P516)rt_nil_check(g_exits_551)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check(F->label_1008)), rt_str(": ;", 3)); b_; }));
}
ret_:
  return;
}

static void f_st_assign_316(P498 s_315) {
  struct f_st_assign_316fr *F = rt_alloc(sizeof *F);
F->s_315 = s_315;
F->lv_1012 = NULL;
F->t_1013 = NULL;
F->vt_1014 = NULL;
F->c_1015 = NULL;
if (((((*(P498)rt_nil_check((*(P498)rt_nil_check(F->s_315)).a)).kind == ((rt_int)10LL)) && ((*(P498)rt_nil_check((*(P498)rt_nil_check(F->s_315)).a)).b != NULL)) && ((*(P498)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->s_315)).a)).b)).kind == ((rt_int)16LL)))) {
f_lvalue_413((*(P498)rt_nil_check((*(P498)rt_nil_check(F->s_315)).a)).a, &F->lv_1012, &F->t_1013, &F->c_1015, &F->ro_1016);
if ((F->ro_1016 || ((*(P502)rt_nil_check(F->t_1013)).kind != ((rt_int)5LL)))) {
f_fail_23((*(P498)rt_nil_check(F->s_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string variable", 40); b_; }));
}
{
F->lo_1017 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->s_315)).a)).b)).a, g_ty_int_557, &F->vt_1014));
F->hi_1018 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->s_315)).a)).b)).b, g_ty_int_557, &F->vt_1014));
F->v_1019 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->s_315)).b, g_ty_string_561, &F->vt_1014));
f_check_type_175(F->vt_1014, g_ty_string_561, (*(P498)rt_nil_check(F->s_315)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P493)rt_nil_check(F->lv_1012))), rt_str(", ", 2)), F->lo_1017), rt_str(", ", 2)), F->hi_1018), rt_str(", ", 2)), F->v_1019), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_413((*(P498)rt_nil_check(F->s_315)).a, &F->lv_1012, &F->t_1013, &F->c_1015, &F->ro_1016);
if (F->ro_1016) {
f_fail_23((*(P498)rt_nil_check(F->s_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_190(F->t_1013)) && (!f_exports_op_267((*(P502)rt_nil_check(F->t_1013)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23((*(P498)rt_nil_check(F->s_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_1013)).name))), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1020 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->s_315)).b, F->t_1013, &F->vt_1014));
f_check_type_175(F->vt_1014, F->t_1013, (*(P498)rt_nil_check(F->s_315)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_226(&(*(P493)rt_nil_check(F->lv_1012)), F->t_1013, &F->v_1020, F->c_1015); b_; }));
}
ret_:
  return;
}

static void f_st_call_318(P498 s_317) {
  struct f_st_call_318fr *F = rt_alloc(sizeof *F);
F->s_317 = s_317;
F->c_1021 = NULL;
F->c_1021 = (*(P498)rt_nil_check(F->s_317)).a;
F->t_1022 = NULL;
if ((((*(P498)rt_nil_check(F->c_1021)).kind == ((rt_int)7LL)) || ((*(P498)rt_nil_check(F->c_1021)).kind == ((rt_int)12LL)))) {
F->x_1023 = NULL;
F->x_1023 = f_nn_48(((rt_int)10LL), (*(P498)rt_nil_check(F->c_1021)).line);
(*(P498)rt_nil_check(F->x_1023)).a = F->c_1021;
F->c_1021 = F->x_1023;
}
if (((*(P498)rt_nil_check(F->c_1021)).kind != ((rt_int)10LL))) {
f_fail_23((*(P498)rt_nil_check(F->s_317)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_482(F->c_1021, 1, &F->t_1022), rt_str(";", 1)); b_; }));
ret_:
  return;
}

static void f_st_if_320(P498 s_319) {
  struct f_st_if_320fr *F = rt_alloc(sizeof *F);
F->s_319 = s_319;
F->a_1024 = NULL;
F->a_1024 = (*(P498)rt_nil_check(F->s_319)).a;
F->first_1025 = 1;
F->t_1026 = NULL;
while ((F->a_1024 != NULL)) {
F->c_1027 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->a_1024)).a, g_ty_bool_558, &F->t_1026));
f_check_type_175(F->t_1026, g_ty_bool_558, (*(P498)rt_nil_check(F->s_319)).line);
if (F->first_1025) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1027), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1027), rt_str(") {", 3)); b_; }));
}
F->first_1025 = 0;
f_gen_body_307((*(P498)rt_nil_check(F->a_1024)).b);
F->a_1024 = (*(P498)rt_nil_check(F->a_1024)).next;
}
if (((*(P498)rt_nil_check(F->s_319)).flag == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_gen_body_307((*(P498)rt_nil_check(F->s_319)).b);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_case_322(P498 s_321) {
  struct f_st_case_322fr *F = rt_alloc(sizeof *F);
F->s_321 = s_321;
F->st_1028 = NULL;
F->vt_1029 = NULL;
F->first_1030 = 1;
F->a_1031 = NULL;
F->a_1031 = (*(P498)rt_nil_check(F->s_321)).b;
F->sel_1032 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->s_321)).a, NULL, &F->st_1028));
F->tmp_1033 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_177(F->st_1028)), rt_str(" ", 1)), F->tmp_1033), rt_str(" = ", 3)), F->sel_1032), rt_str(";", 1)); b_; }));
while ((F->a_1031 != NULL)) {
F->lab_1034 = NULL;
F->lab_1034 = (*(P498)rt_nil_check(F->a_1031)).a;
F->conds_1035 = NULL;
F->conds_1035 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1034 != NULL)) {
if (((*(P498)rt_nil_check(F->lab_1034)).b == NULL)) {
F->v_1036 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->lab_1034)).a, F->st_1028, &F->vt_1029));
f_check_type_175(F->vt_1029, F->st_1028, (*(P498)rt_nil_check(F->s_321)).line);
F->conds_1035 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->conds_1035)), rt_str(" || ", 4)), f_eq_code_233(F->st_1028, &F->tmp_1033, &F->v_1036)); b_; }));
} else {
F->lo_1037 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->lab_1034)).a, F->st_1028, &F->vt_1029));
F->hi_1038 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->lab_1034)).b, F->st_1028, &F->vt_1029));
F->conds_1035 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->conds_1035)), rt_str(" || (", 5)), F->tmp_1033), rt_str(" >= ", 4)), F->lo_1037), rt_str(" && ", 4)), F->tmp_1033), rt_str(" <= ", 4)), F->hi_1038), rt_str(")", 1)); b_; }));
}
F->lab_1034 = (*(P498)rt_nil_check(F->lab_1034)).next;
}
if (F->first_1030) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P493)rt_nil_check(F->conds_1035))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P493)rt_nil_check(F->conds_1035))), rt_str(") {", 3)); b_; }));
}
F->first_1030 = 0;
f_gen_body_307((*(P498)rt_nil_check(F->a_1031)).b);
F->a_1031 = (*(P498)rt_nil_check(F->a_1031)).next;
}
if (F->first_1030) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P498)rt_nil_check(F->s_321)).flag == ((rt_int)1LL))) {
f_gen_body_307((*(P498)rt_nil_check(F->s_321)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_repeat_324(P498 s_323) {
  struct f_st_repeat_324fr *F = rt_alloc(sizeof *F);
F->s_323 = s_323;
F->t_1039 = NULL;
F->c_1040 = NULL;
if (((*(P498)rt_nil_check(F->s_323)).flag == ((rt_int)0LL))) {
F->cond_1041 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->s_323)).a, g_ty_bool_558, &F->t_1039));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1041), rt_str(") {", 3)); b_; }));
f_gen_body_307((*(P498)rt_nil_check(F->s_323)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1039 = f_resolve_subtype_188((*(P498)rt_nil_check(F->s_323)).a, &F->c_1040);
F->c_1040 = f_base_cons_169(F->t_1039, F->c_1040);
if ((((*(P502)rt_nil_check(f_base_of_166(F->t_1039))).kind == ((rt_int)4LL)) && ((*(P500)rt_nil_check(F->c_1040)).lo == NULL))) {
F->c_1040 = f_new_cons_158();
(*(P500)rt_nil_check(F->c_1040)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P500)rt_nil_check(F->c_1040)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P502)rt_nil_check(f_base_of_166(F->t_1039))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P500)rt_nil_check(F->c_1040)).lo == NULL)) {
f_fail_23((*(P498)rt_nil_check(F->s_323)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1042 = rt_str_copy(f_storage_283(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->s_323)).name)), F->t_1039));
F->lov_1043 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1044 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1045 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1046 = NULL;
F->y_1046 = f_new_sym_155(((rt_int)2LL), (*(P498)rt_nil_check(F->s_323)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1043), rt_str(" = ", 3)), (*(P493)rt_nil_check((*(P500)rt_nil_check(F->c_1040)).lo))), rt_str(", ", 2)), F->hiv_1044), rt_str(" = ", 3)), (*(P493)rt_nil_check((*(P500)rt_nil_check(F->c_1040)).hi))), rt_str(";", 1)); b_; }));
if (((*(P498)rt_nil_check(F->s_323)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1045), rt_str(" = ", 3)), F->hiv_1044), rt_str("; ", 2)), F->it_1045), rt_str(" >= ", 4)), F->lov_1043), rt_str("; ", 2)), F->it_1045), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1045), rt_str(" = ", 3)), F->lov_1043), rt_str("; ", 2)), F->it_1045), rt_str(" <= ", 4)), F->hiv_1044), rt_str("; ", 2)), F->it_1045), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1042, rt_str(" = ", 3)), F->it_1045), rt_str(";", 1)); b_; }));
f_open_scope_151();
(*(P506)rt_nil_check(F->y_1046)).t = F->t_1039;
(*(P506)rt_nil_check(F->y_1046)).c = F->c_1040;
f_bind_286(F->y_1046, &F->access_1042);
(*(P506)rt_nil_check(F->y_1046)).ro_flag = 1;
f_define_145(F->y_1046, (*(P498)rt_nil_check(F->s_323)).line);
f_gen_body_307((*(P498)rt_nil_check(F->s_323)).b);
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_exit_326(P498 s_325) {
  struct f_st_exit_326fr *F = rt_alloc(sizeof *F);
F->s_325 = s_325;
F->x_1047 = NULL;
F->x_1047 = g_exits_551;
while ((F->x_1047 != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P516)rt_nil_check(F->x_1047)).match)), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->s_325)).name)))) {
f_pop_frames_309((*(P516)rt_nil_check(F->x_1047)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P493)rt_nil_check((*(P516)rt_nil_check(F->x_1047)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1047 = (*(P516)rt_nil_check(F->x_1047)).next;
}
f_fail_23((*(P498)rt_nil_check(F->s_325)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->s_325)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  return;
}

static void f_st_return_328(P498 s_327) {
  struct f_st_return_328fr *F = rt_alloc(sizeof *F);
F->s_327 = s_327;
F->vt_1048 = NULL;
if ((!g_in_func_542)) {
f_pop_frames_309(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P502)rt_nil_check((*(P506)rt_nil_check(g_func_sym_550)).result)).kind == ((rt_int)9LL))) {
if (((*(P498)rt_nil_check(F->s_327)).a != NULL)) {
f_fail_23((*(P498)rt_nil_check(F->s_327)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_309(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P498)rt_nil_check(F->s_327)).a == NULL)) {
f_fail_23((*(P498)rt_nil_check(F->s_327)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1049 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->s_327)).a, (*(P506)rt_nil_check(g_func_sym_550)).result, &F->vt_1048));
f_check_type_175(F->vt_1048, (*(P506)rt_nil_check(g_func_sym_550)).result, (*(P498)rt_nil_check(F->s_327)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->v_1049), rt_str(";", 1)); b_; }));
f_pop_frames_309(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  return;
}

static rstr f_exc_id_331(rstr *name_329, rt_int line_330) {
  struct f_exc_id_331fr *F = rt_alloc(sizeof *F);
F->name_329 = name_329;
F->line_330 = line_330;
F->y_1050 = NULL;
F->y_1050 = f_lookup_140(&(*F->name_329));
if (((F->y_1050 != NULL) && ((*(P506)rt_nil_check(F->y_1050)).kind == ((rt_int)7LL)))) {
F->result_ = (*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_1050)).cname));
goto ret_;
}
if (((((*F->name_329)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_329), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_329)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_330, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_329), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_guard_333(P498 s_332) {
  struct f_st_guard_333fr *F = rt_alloc(sizeof *F);
F->s_332 = s_332;
F->h_1051 = NULL;
F->h_1051 = (*(P498)rt_nil_check(F->s_332)).b;
F->first_1052 = 1;
F->hv_1053 = NULL;
{
F->f_1054 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1055 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1054), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1054), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1054), rt_str(")) {", 4)); b_; }));
f_gen_body_307((*(P498)rt_nil_check(F->s_332)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1054), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_312();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1054), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1055), rt_str(" = rt_xcur;", 11)); b_; }));
{ R511 *cell1056 = rt_alloc(sizeof(R511));
(*cell1056).s = NULL;
(*cell1056).next = NULL;
F->hv_1053 = cell1056;
}
(*(P510)rt_nil_check(F->hv_1053)).s = f_mk_3(&F->x_1055);
(*(P510)rt_nil_check(F->hv_1053)).next = g_handlers_553;
g_handlers_553 = F->hv_1053;
while ((F->h_1051 != NULL)) {
F->n_1057 = NULL;
F->n_1057 = (*(P498)rt_nil_check(F->h_1051)).a;
F->conds_1058 = NULL;
F->conds_1058 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1057 != NULL)) {
F->conds_1058 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->conds_1058)), rt_str(" || ", 4)), F->x_1055), rt_str(" == ", 4)), f_exc_id_331(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->n_1057)).name)), (*(P498)rt_nil_check(F->s_332)).line)); b_; }));
F->n_1057 = (*(P498)rt_nil_check(F->n_1057)).next;
}
if (F->first_1052) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P493)rt_nil_check(F->conds_1058))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P493)rt_nil_check(F->conds_1058))), rt_str(") {", 3)); b_; }));
}
F->first_1052 = 0;
f_gen_body_307((*(P498)rt_nil_check(F->h_1051)).b);
F->h_1051 = (*(P498)rt_nil_check(F->h_1051)).next;
}
if (F->first_1052) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P498)rt_nil_check(F->s_332)).flag == ((rt_int)1LL))) {
f_gen_body_307((*(P498)rt_nil_check(F->s_332)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1055), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_553 = (*(P510)rt_nil_check(g_handlers_553)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_alloc_335(P498 s_334) {
  struct f_st_alloc_335fr *F = rt_alloc(sizeof *F);
F->s_334 = s_334;
F->lv_1059 = NULL;
F->t_1060 = NULL;
F->target_1061 = NULL;
F->vt_1062 = NULL;
F->c_1063 = NULL;
F->tc_1064 = NULL;
F->d_1066 = NULL;
F->p_1067 = NULL;
F->a_1068 = NULL;
f_lvalue_413((*(P498)rt_nil_check(F->s_334)).a, &F->lv_1059, &F->t_1060, &F->c_1063, &F->ro_1065);
if (((*(P502)rt_nil_check(F->t_1060)).kind != ((rt_int)8LL))) {
f_fail_23((*(P498)rt_nil_check(F->s_334)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_274(F->t_1060);
F->d_1066 = (*(P502)rt_nil_check(F->t_1060)).decl;
F->target_1061 = (*(P502)rt_nil_check(F->t_1060)).target;
if ((f_list_len_54((*(P498)rt_nil_check(F->s_334)).b) != f_list_len_54((*(P498)rt_nil_check(F->d_1066)).b))) {
f_fail_23((*(P498)rt_nil_check(F->s_334)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_54((*(P498)rt_nil_check(F->d_1066)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_1069 = rt_str_copy(f_ctype_177(F->target_1061));
F->cell_1070 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1069), rt_str(" *", 2)), F->cell_1070), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1069), rt_str("));", 3)); b_; }));
f_open_scope_151();
F->p_1067 = (*(P498)rt_nil_check(F->d_1066)).b;
F->a_1068 = (*(P498)rt_nil_check(F->s_334)).b;
while ((F->p_1067 != NULL)) {
F->v_1071 = rt_str_copy(f_gexpr_434(F->a_1068, g_ty_int_557, &F->vt_1062));
F->pv_1072 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_1073 = NULL;
F->y_1073 = f_new_sym_155(((rt_int)2LL), (*(P498)rt_nil_check(F->p_1067)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_1072), rt_str(" = ", 3)), F->v_1071), rt_str(";", 1)); b_; }));
(*(P506)rt_nil_check(F->y_1073)).t = g_ty_int_557;
(*(P506)rt_nil_check(F->y_1073)).access = f_mk_3(&F->pv_1072);
f_define_145(F->y_1073, (*(P498)rt_nil_check(F->s_334)).line);
F->p_1067 = (*(P498)rt_nil_check(F->p_1067)).next;
F->a_1068 = (*(P498)rt_nil_check(F->a_1068)).next;
}
F->vt_1062 = f_resolve_subtype_188((*(P498)rt_nil_check(F->d_1066)).a, &F->tc_1064);
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1070), rt_str(")", 1)); b_; }), F->target_1061, F->tc_1064);
f_close_scope_152();
if (((*(P498)rt_nil_check(F->s_334)).c != NULL)) {
F->v_1074 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->s_334)).c, F->target_1061, &F->vt_1062));
f_check_type_175(F->vt_1062, F->target_1061, (*(P498)rt_nil_check(F->s_334)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_226(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1070), rt_str(")", 1)); b_; }), F->target_1061, &F->v_1074, F->tc_1064); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->lv_1059)), rt_str(" = ", 3)), F->cell_1070), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static rstr f_act_ref_337(P498 e_336) {
  struct f_act_ref_337fr *F = rt_alloc(sizeof *F);
F->e_336 = e_336;
F->lv_1075 = NULL;
F->t_1076 = NULL;
F->c_1077 = NULL;
if (((((*(P498)rt_nil_check(F->e_336)).kind == ((rt_int)7LL)) && rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_336)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
f_lvalue_413(F->e_336, &F->lv_1075, &F->t_1076, &F->c_1077, &F->ro_1078);
if (((*(P502)rt_nil_check(F->t_1076)).kind != ((rt_int)14LL))) {
f_fail_23((*(P498)rt_nil_check(F->e_336)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (*(P493)rt_nil_check(F->lv_1075));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_create_339(P498 s_338) {
  struct f_st_create_339fr *F = rt_alloc(sizeof *F);
F->s_338 = s_338;
F->y_1079 = NULL;
F->y_1079 = f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->s_338)).name)));
F->pm_1080 = NULL;
F->a_1081 = NULL;
F->a_1081 = (*(P498)rt_nil_check(F->s_338)).b;
F->lv_1082 = NULL;
F->lt_1083 = NULL;
F->vt_1084 = NULL;
F->lc_1085 = NULL;
if (((F->y_1079 != NULL) && ((*(P506)rt_nil_check(F->y_1079)).kind == ((rt_int)10LL)))) {
F->y_1079 = f_instantiate_392(F->y_1079, (*(P498)rt_nil_check(F->s_338)).e, (*(P498)rt_nil_check(F->s_338)).b, (*(P498)rt_nil_check(F->s_338)).line);
}
if (((F->y_1079 == NULL) || ((*(P506)rt_nil_check(F->y_1079)).kind != ((rt_int)9LL)))) {
f_fail_23((*(P498)rt_nil_check(F->s_338)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->s_338)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1080 = (*(P506)rt_nil_check(F->y_1079)).params;
{
F->at_1087 = NULL;
F->ac_1088 = NULL;
F->act_1090 = NULL;
F->nf_1091 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_413((*(P498)rt_nil_check(F->s_338)).a, &F->lv_1082, &F->at_1087, &F->ac_1088, &F->aro_1089);
if (((*(P502)rt_nil_check(F->at_1087)).kind == ((rt_int)14LL))) {
F->act_1090 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_337((*(P498)rt_nil_check(F->s_338)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_1079)).cname))), rt_str("fr *", 4)), F->nf_1091), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1091), rt_str(");", 2)); b_; }));
if (((*(P506)rt_nil_check(F->y_1079)).level > ((rt_int)0LL))) {
F->link_1092 = NULL;
F->link_1092 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1094 = ((rt_int)1LL), hi1095 = rt_sub(g_cur_level_543, (*(P506)rt_nil_check(F->y_1079)).level);
for (rt_int it1096 = lo1094; it1096 <= hi1095; it1096++) {
F->i_1093 = it1096;
F->link_1092 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check(F->link_1092)), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1091, rt_str("->up = ", 7)), (*(P493)rt_nil_check(F->link_1092))), rt_str(";", 1)); b_; }));
}
while (((F->a_1081 != NULL) && (F->pm_1080 != NULL))) {
if (((*(P508)rt_nil_check(F->pm_1080)).mode == ((rt_int)1LL))) {
F->v_1097 = rt_str_copy(f_gexpr_434(F->a_1081, (*(P508)rt_nil_check(F->pm_1080)).t, &F->vt_1084));
f_check_type_175(F->vt_1084, (*(P508)rt_nil_check(F->pm_1080)).t, (*(P498)rt_nil_check(F->s_338)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1091, rt_str("->", 2)), (*(P493)rt_nil_check((*(P508)rt_nil_check(F->pm_1080)).cfield))), rt_str(" = ", 3)), f_copy_code_229((*(P508)rt_nil_check(F->pm_1080)).t, &F->v_1097)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_413(F->a_1081, &F->lv_1082, &F->lt_1083, &F->lc_1085, &F->ro_1086);
f_check_type_175(F->lt_1083, (*(P508)rt_nil_check(F->pm_1080)).t, (*(P498)rt_nil_check(F->s_338)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1091, rt_str("->", 2)), (*(P493)rt_nil_check((*(P508)rt_nil_check(F->pm_1080)).cfield))), rt_str(" = &", 4)), (*(P493)rt_nil_check(F->lv_1082))), rt_str(";", 1)); b_; }));
}
F->a_1081 = (*(P498)rt_nil_check(F->a_1081)).next;
F->pm_1080 = (*(P508)rt_nil_check(F->pm_1080)).next;
}
if (((F->a_1081 != NULL) || (F->pm_1080 != NULL))) {
f_fail_23((*(P498)rt_nil_check(F->s_338)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->s_338)).name))); b_; }));
}
if ((F->act_1090 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (*(P493)rt_nil_check(F->act_1090))), rt_str(", &", 3)), (*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_1079)).cname))), rt_str("decl, ", 6)), (*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_1079)).cname))), rt_str(", ", 2)), F->nf_1091), rt_str("); }", 4)); b_; }));
} else {
f_user_create_349(F->s_338, F->y_1079, &(*(P493)rt_nil_check(F->lv_1082)), F->at_1087, &F->nf_1091);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  return;
}

static void f_hidden_var_343(rstr *name_340, P502 t_341, rstr *place_342) {
  struct f_hidden_var_343fr *F = rt_alloc(sizeof *F);
F->name_340 = name_340;
F->t_341 = t_341;
F->place_342 = place_342;
F->y_1098 = NULL;
F->y_1098 = f_new_sym_155(((rt_int)1LL), f_mk_3(&(*F->name_340)));
(*(P506)rt_nil_check(F->y_1098)).t = F->t_341;
(*(P506)rt_nil_check(F->y_1098)).level = ((rt_int)0LL);
(*(P506)rt_nil_check(F->y_1098)).access = f_mk_3(&(*F->place_342));
f_define_145(F->y_1098, ((rt_int)0LL));
ret_:
  return;
}

static void f_user_create_349(P498 s_344, P506 y_345, rstr *uv_346, P502 ut_347, rstr *nf_348) {
  struct f_user_create_349fr *F = rt_alloc(sizeof *F);
F->s_344 = s_344;
F->y_345 = y_345;
F->uv_346 = uv_346;
F->ut_347 = ut_347;
F->nf_348 = nf_348;
F->t_1099 = NULL;
F->saved_1100 = NULL;
F->saved_1100 = g_code_540;
F->hook_1101 = NULL;
F->hook_1101 = f_new_buffer_24();
F->un_1102 = NULL;
F->un_1102 = f_nn_48(((rt_int)7LL), (*(P498)rt_nil_check(F->s_344)).line);
F->hn_1103 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1104 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1105 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1106 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_151();
f_hidden_var_343(&F->uname_1105, F->ut_347, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->ut_347)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P498)rt_nil_check(F->un_1102)).name = f_mk_3(&F->uname_1105);
g_code_540 = F->hook_1101;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_482(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1102, (*(P498)rt_nil_check(F->s_344)).line), 1, &F->t_1099)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_482(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1102, (*(P498)rt_nil_check(F->s_344)).line), 1, &F->t_1099)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_482(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1102, (*(P498)rt_nil_check(F->s_344)).line), 1, &F->t_1099)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_482(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1102, (*(P498)rt_nil_check(F->s_344)).line), 1, &F->t_1099)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_540 = F->saved_1100;
f_put_27(g_out_protos_535, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1103), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1103), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (g_in_func_542) {
f_put_27(g_out_funcs_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P493)rt_nil_check((*(P506)rt_nil_check(g_func_sym_550)).cname))), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_537, F->hook_1101);
f_put_27(g_out_funcs_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1104), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1104, rt_str("->hook = ", 9)), F->hn_1103), rt_str("; ", 2)), F->aa_1104), rt_str("->ua = &", 8)), (*F->uv_346)), rt_str("; ", 2)), F->aa_1104), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_472(F->ut_347)), f_q_18()), rt_str(";", 1)); b_; }));
if (g_in_func_542) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1104, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1104), rt_str(", &", 3)), (*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_345)).cname))), rt_str("decl, ", 6)), (*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_345)).cname))), rt_str(", ", 2)), (*F->nf_348)), rt_str(");", 2)); b_; }));
f_hidden_var_343(&F->aname_1106, g_ty_act_567, &F->aa_1104);
{
F->start_1107 = NULL;
F->start_1107 = f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P498)rt_nil_check(F->s_344)).a, (*(P498)rt_nil_check(F->s_344)).line);
F->an_1108 = NULL;
F->an_1108 = f_nn_48(((rt_int)7LL), (*(P498)rt_nil_check(F->s_344)).line);
(*(P498)rt_nil_check(F->an_1108)).name = f_mk_3(&F->aname_1106);
(*(P498)rt_nil_check((*(P498)rt_nil_check(F->start_1107)).b)).next = F->an_1108;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_482(F->start_1107, 1, &F->t_1099), rt_str(";", 1)); b_; }));
}
f_close_scope_152();
ret_:
  return;
}

static rstr f_wait_alt_354(P498 inv_350, rstr *arr_351, rt_int i_352, int mixed_353) {
  struct f_wait_alt_354fr *F = rt_alloc(sizeof *F);
F->inv_350 = inv_350;
F->arr_351 = arr_351;
F->i_352 = i_352;
F->mixed_353 = mixed_353;
F->lv_1109 = NULL;
F->t_1110 = NULL;
F->vt_1111 = NULL;
F->c_1112 = NULL;
F->fn_1114 = NULL;
F->args_1115 = NULL;
F->slot_1116 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_351), rt_str("[", 1)), f_itos_7(F->i_352)), rt_str("]", 1)));
if ((((*(P498)rt_nil_check(F->inv_350)).kind != ((rt_int)10LL)) || ((*(P498)rt_nil_check((*(P498)rt_nil_check(F->inv_350)).a)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P498)rt_nil_check(F->inv_350)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1114 = (*(P498)rt_nil_check(F->inv_350)).a;
F->args_1115 = (*(P498)rt_nil_check(F->inv_350)).b;
if ((rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1114)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1114)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_413(F->args_1115, &F->lv_1109, &F->t_1110, &F->c_1112, &F->ro_1113);
if (((*(P502)rt_nil_check(F->t_1110)).kind != ((rt_int)12LL))) {
f_fail_23((*(P498)rt_nil_check(F->inv_350)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1114)).name)), rt_str("RECEIVE", 7))) {
F->dv_1117 = NULL;
F->dt_1118 = NULL;
f_lvalue_413((*(P498)rt_nil_check(F->args_1115)).next, &F->dv_1117, &F->dt_1118, &F->c_1112, &F->ro_1113);
f_check_type_175(F->dt_1118, (*(P502)rt_nil_check(F->t_1110)).elem, (*(P498)rt_nil_check(F->inv_350)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1116, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (*(P493)rt_nil_check(F->lv_1109))), rt_str(", &", 3)), (*(P493)rt_nil_check(F->dv_1117))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1119 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1120 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->args_1115)).next, (*(P502)rt_nil_check(F->t_1110)).elem, &F->vt_1111));
f_check_type_175(F->vt_1111, (*(P502)rt_nil_check(F->t_1110)).elem, (*(P498)rt_nil_check(F->inv_350)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_177((*(P502)rt_nil_check(F->t_1110)).elem), rt_str(" ", 1)), F->tmp_1119), rt_str(" = ", 3)), F->v_1120), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1116, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (*(P493)rt_nil_check(F->lv_1109))), rt_str(", &", 3)), F->tmp_1119), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1114)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1114)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_1121 = rt_str_copy(f_gexpr_434(F->args_1115, g_ty_int_557, &F->vt_1111));
if ((rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1114)).name)), rt_str("DELAY", 5)) && F->mixed_353)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1116, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1121), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1114)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1116, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1121), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1116, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1121), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1114)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1116, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_337(F->args_1115)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P498)rt_nil_check(F->inv_350)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1114)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_builtin_wait_356(P498 inv_355) {
  struct f_builtin_wait_356fr *F = rt_alloc(sizeof *F);
F->inv_355 = inv_355;
F->lv_1122 = NULL;
F->t_1123 = NULL;
F->c_1124 = NULL;
F->saved_1126 = NULL;
F->saved_1126 = g_code_540;
F->ok_1127 = 0;
if ((((*(P498)rt_nil_check(F->inv_355)).kind != ((rt_int)10LL)) || ((*(P498)rt_nil_check((*(P498)rt_nil_check(F->inv_355)).a)).kind != ((rt_int)7LL)))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->inv_355)).a)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->inv_355)).a)).name)), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->inv_355)).a)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->inv_355)).a)).name)), rt_str("SEND", 4))) && (!rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->inv_355)).a)).name)), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_555 = rt_add(g_trial_555, ((rt_int)1LL));
g_code_540 = f_new_buffer_24();
{ rt_frame xf1128;
if (RT_TRY(xf1128)) {
f_lvalue_413((*(P498)rt_nil_check(F->inv_355)).b, &F->lv_1122, &F->t_1123, &F->c_1124, &F->ro_1125);
F->ok_1127 = ((*(P502)rt_nil_check(F->t_1123)).kind == ((rt_int)12LL));
RT_POP(xf1128);
} else {
RT_POP(xf1128);
int x1129 = rt_xcur;
if (0 || x1129 == ex_compile_error_1) {
F->ok_1127 = 0;
} else {
rt_raise(x1129);
}
}
}
g_trial_555 = rt_sub(g_trial_555, ((rt_int)1LL));
g_code_540 = F->saved_1126;
F->result_ = F->ok_1127;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_wait_op_361(P498 inv_357, rstr *op_358, rstr *q_359, int is_stmt_360) {
  struct f_wait_op_361fr *F = rt_alloc(sizeof *F);
F->inv_357 = inv_357;
F->op_358 = op_358;
F->q_359 = q_359;
F->is_stmt_360 = is_stmt_360;
F->x_1130 = NULL;
F->x_1130 = f_nn_48(((rt_int)10LL), (*(P498)rt_nil_check(F->inv_357)).line);
F->f_1131 = NULL;
F->f_1131 = f_nn_48(((rt_int)7LL), (*(P498)rt_nil_check(F->inv_357)).line);
F->qn_1132 = NULL;
F->qn_1132 = f_nn_48(((rt_int)7LL), (*(P498)rt_nil_check(F->inv_357)).line);
F->t_1133 = NULL;
(*(P498)rt_nil_check(F->f_1131)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->inv_357)).a)).name)), rt_str("_", 1)), (*F->op_358)); b_; }));
(*(P498)rt_nil_check(F->qn_1132)).name = f_mk_3(&(*F->q_359));
(*(P498)rt_nil_check(F->qn_1132)).next = (*(P498)rt_nil_check(F->inv_357)).b;
(*(P498)rt_nil_check(F->x_1130)).a = F->f_1131;
(*(P498)rt_nil_check(F->x_1130)).b = F->qn_1132;
{
F->r_1134 = rt_str_copy(f_gcall_482(F->x_1130, F->is_stmt_360, &F->t_1133));
if ((!F->is_stmt_360)) {
f_check_type_175(F->t_1133, g_ty_bool_558, (*(P498)rt_nil_check(F->inv_357)).line);
}
F->result_ = F->r_1134;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_user_wait_366(P498 s_362, rstr *arr_363, rstr *w_364, rt_int n_365) {
  struct f_user_wait_366fr *F = rt_alloc(sizeof *F);
F->s_362 = s_362;
F->arr_363 = arr_363;
F->w_364 = w_364;
F->n_365 = n_365;
F->a_1135 = NULL;
F->a_1135 = (*(P498)rt_nil_check(F->s_362)).a;
F->i_1136 = ((rt_int)0LL);
F->tests_1137 = NULL;
F->tests_1137 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1138 = NULL;
F->revokes_1138 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_151();
while ((F->a_1135 != NULL)) {
F->inv_1139 = NULL;
F->inv_1139 = (*(P498)rt_nil_check(F->a_1135)).a;
while ((F->inv_1139 != NULL)) {
if (f_builtin_wait_356(F->inv_1139)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_354(F->inv_1139, &(*F->arr_363), F->i_1136, 1); b_; }));
} else {
F->st_1140 = NULL;
F->st_1140 = f_nn_48(((rt_int)80LL), (*(P498)rt_nil_check(F->inv_1139)).line);
F->c_1141 = NULL;
F->qt_1142 = NULL;
F->qname_1143 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1144 = NULL;
F->y_1144 = f_new_sym_155(((rt_int)1LL), f_mk_3(&F->qname_1143));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_363), rt_str("[", 1)), f_itos_7(F->i_1136)), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P498)rt_nil_check(F->st_1140)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->inv_1139)).a)).name)), rt_str("_ST", 3)); b_; }));
F->qt_1142 = f_resolve_subtype_188(F->st_1140, &F->c_1141);
{
F->access_1145 = rt_str_copy(f_storage_283(&F->qname_1143, F->qt_1142));
f_init_storage_204(&F->access_1145, F->qt_1142, F->c_1141);
(*(P506)rt_nil_check(F->y_1144)).t = F->qt_1142;
(*(P506)rt_nil_check(F->y_1144)).c = F->c_1141;
f_bind_286(F->y_1144, &F->access_1145);
f_define_145(F->y_1144, (*(P498)rt_nil_check(F->inv_1139)).line);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_361(F->inv_1139, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1143, 1), rt_str(";", 1)); b_; }));
F->tests_1137 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->tests_1137)), rt_str("if (", 4)), f_wait_op_361(F->inv_1139, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1143, 0)), rt_str(") { ", 4)), f_wait_op_361(F->inv_1139, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1143, 1)), rt_str("; ", 2)), (*F->w_364)), rt_str(" = ", 3)), f_itos_7(F->i_1136)), rt_str("; break; } ", 11)); b_; }));
F->revokes_1138 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->revokes_1138)), f_wait_op_361(F->inv_1139, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1143, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1136 = rt_add(F->i_1136, ((rt_int)1LL));
F->inv_1139 = (*(P498)rt_nil_check(F->inv_1139)).next;
}
F->a_1135 = (*(P498)rt_nil_check(F->a_1135)).next;
}
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_364)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (*(P493)rt_nil_check(F->tests_1137))); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_364), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_365)), rt_str(", ", 2)), (*F->arr_363)), rt_str("); if (", 7)), (*F->w_364)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_365)), rt_str(", ", 2)), (*F->arr_363)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_364)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_364)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(*(P493)rt_nil_check(F->revokes_1138)));
ret_:
  return;
}

static void f_st_wait_368(P498 s_367) {
  struct f_st_wait_368fr *F = rt_alloc(sizeof *F);
F->s_367 = s_367;
F->a_1146 = NULL;
F->a_1146 = (*(P498)rt_nil_check(F->s_367)).a;
F->n_1147 = ((rt_int)0LL);
F->first_1148 = 1;
F->inits_1149 = NULL;
F->inits_1149 = f_new_buffer_24();
F->user_1150 = 0;
F->arr_1151 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1152 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1146 != NULL)) {
F->inv_1153 = NULL;
F->inv_1153 = (*(P498)rt_nil_check(F->a_1146)).a;
F->n_1147 = rt_add(F->n_1147, f_list_len_54((*(P498)rt_nil_check(F->a_1146)).a));
while ((F->inv_1153 != NULL)) {
if ((!f_builtin_wait_356(F->inv_1153))) {
F->user_1150 = 1;
}
F->inv_1153 = (*(P498)rt_nil_check(F->inv_1153)).next;
}
F->a_1146 = (*(P498)rt_nil_check(F->a_1146)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1151), rt_str("[", 1)), f_itos_7(F->n_1147)), rt_str("];", 2)); b_; }));
if (F->user_1150) {
f_user_wait_366(F->s_367, &F->arr_1151, &F->w_1152, F->n_1147);
} else {
F->a_1146 = (*(P498)rt_nil_check(F->s_367)).a;
F->n_1147 = ((rt_int)0LL);
while ((F->a_1146 != NULL)) {
F->inv_1154 = NULL;
F->inv_1154 = (*(P498)rt_nil_check(F->a_1146)).a;
while ((F->inv_1154 != NULL)) {
f_put_27(F->inits_1149, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_354(F->inv_1154, &F->arr_1151, F->n_1147, 0); b_; }));
F->n_1147 = rt_add(F->n_1147, ((rt_int)1LL));
F->inv_1154 = (*(P498)rt_nil_check(F->inv_1154)).next;
}
F->a_1146 = (*(P498)rt_nil_check(F->a_1146)).next;
}
f_splice_34(g_code_540, F->inits_1149);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1152), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_1147)), rt_str(", ", 2)), F->arr_1151), rt_str(");", 2)); b_; }));
}
F->a_1146 = (*(P498)rt_nil_check(F->s_367)).a;
F->n_1147 = ((rt_int)0LL);
while ((F->a_1146 != NULL)) {
F->conds_1155 = NULL;
F->conds_1155 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1157 = ((rt_int)1LL), hi1158 = f_list_len_54((*(P498)rt_nil_check(F->a_1146)).a);
for (rt_int it1159 = lo1157; it1159 <= hi1158; it1159++) {
F->i_1156 = it1159;
F->conds_1155 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->conds_1155)), rt_str(" || ", 4)), F->w_1152), rt_str(" == ", 4)), f_itos_7(F->n_1147)); b_; }));
F->n_1147 = rt_add(F->n_1147, ((rt_int)1LL));
}
}
if (F->first_1148) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P493)rt_nil_check(F->conds_1155))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P493)rt_nil_check(F->conds_1155))), rt_str(") {", 3)); b_; }));
}
F->first_1148 = 0;
f_gen_body_307((*(P498)rt_nil_check(F->a_1146)).b);
F->a_1146 = (*(P498)rt_nil_check(F->a_1146)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static P498 f_call_node_372(rstr *name_369, P498 arg_370, rt_int line_371) {
  struct f_call_node_372fr *F = rt_alloc(sizeof *F);
F->name_369 = name_369;
F->arg_370 = arg_370;
F->line_371 = line_371;
F->x_1160 = NULL;
F->x_1160 = f_nn_48(((rt_int)10LL), F->line_371);
F->f_1161 = NULL;
F->f_1161 = f_nn_48(((rt_int)7LL), F->line_371);
(*(P498)rt_nil_check(F->f_1161)).name = f_mk_3(&(*F->name_369));
(*(P498)rt_nil_check(F->x_1160)).a = F->f_1161;
(*(P498)rt_nil_check(F->x_1160)).b = f_copy_node_436(F->arg_370);
(*(P498)rt_nil_check((*(P498)rt_nil_check(F->x_1160)).b)).next = NULL;
F->result_ = F->x_1160;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_user_region_374(P498 s_373) {
  struct f_user_region_374fr *F = rt_alloc(sizeof *F);
F->s_373 = s_373;
F->t_1162 = NULL;
F->f_1163 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1164 = rt_str_copy(f_gcall_482(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P498)rt_nil_check(F->s_373)).a, (*(P498)rt_nil_check(F->s_373)).line), 1, &F->t_1162));
F->unlock_1165 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_482(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P498)rt_nil_check(F->s_373)).a, (*(P498)rt_nil_check(F->s_373)).line), 1, &F->t_1162)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1164), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1163), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1163), rt_str(")) {", 4)); b_; }));
f_push_cleanup_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1163), rt_str("); ", 3)), F->unlock_1165); b_; }));
f_gen_body_307((*(P498)rt_nil_check(F->s_373)).b);
f_pop_cleanup_312();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1163), rt_str("); ", 3)), F->unlock_1165); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1163), rt_str("); ", 3)), F->unlock_1165), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_region_376(P498 s_375) {
  struct f_st_region_376fr *F = rt_alloc(sizeof *F);
F->s_375 = s_375;
F->lv_1166 = NULL;
F->t_1167 = NULL;
F->c_1168 = NULL;
F->lk_1170 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1171 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_413((*(P498)rt_nil_check(F->s_375)).a, &F->lv_1166, &F->t_1167, &F->c_1168, &F->ro_1169);
if (((*(P502)rt_nil_check(F->t_1167)).kind != ((rt_int)13LL))) {
f_user_region_374(F->s_375);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1170), rt_str(" = &", 4)), (*(P493)rt_nil_check(F->lv_1166))), rt_str("; rt_region_enter(", 18)), F->lk_1170), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1171), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1171), rt_str(")) {", 4)); b_; }));
f_push_cleanup_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1171), rt_str("); rt_region_leave(", 19)), F->lk_1170), rt_str(");", 2)); b_; }));
f_gen_body_307((*(P498)rt_nil_check(F->s_375)).b);
f_pop_cleanup_312();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1171), rt_str("); rt_region_leave(", 19)), F->lk_1170), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1171), rt_str("); rt_region_leave(", 19)), F->lk_1170), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static P498 f_gparam_379(P498 g_377, rstr *name_378) {
  struct f_gparam_379fr *F = rt_alloc(sizeof *F);
F->g_377 = g_377;
F->name_378 = name_378;
F->p_1172 = NULL;
F->p_1172 = (*(P498)rt_nil_check(F->g_377)).a;
while ((F->p_1172 != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_1172)).name)), (*F->name_378))) {
F->result_ = F->p_1172;
goto ret_;
}
F->p_1172 = (*(P498)rt_nil_check(F->p_1172)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P506 f_bind_sym_381(P498 p_380) {
  struct f_bind_sym_381fr *F = rt_alloc(sizeof *F);
F->p_380 = p_380;
F->y_1173 = NULL;
if (((*(P498)rt_nil_check(F->p_380)).ival <= ((rt_int)2LL))) {
F->y_1173 = f_new_sym_155(((rt_int)5LL), (*(P498)rt_nil_check(F->p_380)).name);
} else {
F->y_1173 = f_new_sym_155(((rt_int)2LL), (*(P498)rt_nil_check(F->p_380)).name);
}
F->result_ = F->y_1173;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binds_384(P506 a_382, P506 b_383) {
  struct f_same_binds_384fr *F = rt_alloc(sizeof *F);
F->a_382 = a_382;
F->b_383 = b_383;
F->x_1174 = NULL;
F->x_1174 = F->a_382;
F->y_1175 = NULL;
F->y_1175 = F->b_383;
while (((F->x_1174 != NULL) && (F->y_1175 != NULL))) {
if (((!rt_str_eq((*(P493)rt_nil_check((*(P506)rt_nil_check(F->x_1174)).name)), (*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_1175)).name)))) || (!f_same_binding_387(F->x_1174, F->y_1175)))) {
F->result_ = 0;
goto ret_;
}
F->x_1174 = (*(P506)rt_nil_check(F->x_1174)).mnext;
F->y_1175 = (*(P506)rt_nil_check(F->y_1175)).mnext;
}
F->result_ = ((F->x_1174 == NULL) && (F->y_1175 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binding_387(P506 a_385, P506 b_386) {
  struct f_same_binding_387fr *F = rt_alloc(sizeof *F);
F->a_385 = a_385;
F->b_386 = b_386;
if (((*(P506)rt_nil_check(F->a_385)).kind == ((rt_int)5LL))) {
F->result_ = (((*(P506)rt_nil_check(F->b_386)).kind == ((rt_int)5LL)) && f_same_164((*(P506)rt_nil_check(F->a_385)).t, (*(P506)rt_nil_check(F->b_386)).t));
goto ret_;
}
if ((((*(P506)rt_nil_check(F->a_385)).kind == ((rt_int)2LL)) && (*(P506)rt_nil_check(F->a_385)).hasmv)) {
F->result_ = ((*(P506)rt_nil_check(F->b_386)).hasmv && ((*(P506)rt_nil_check(F->a_385)).mvalue == (*(P506)rt_nil_check(F->b_386)).mvalue));
goto ret_;
}
F->result_ = ((((*(P506)rt_nil_check(F->a_385)).cname != NULL) && ((*(P506)rt_nil_check(F->b_386)).cname != NULL)) && rt_str_eq((*(P493)rt_nil_check((*(P506)rt_nil_check(F->a_385)).cname)), (*(P493)rt_nil_check((*(P506)rt_nil_check(F->b_386)).cname))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P506 f_instantiate_392(P506 g_388, P498 tt_389, P498 args_390, rt_int line_391) {
  struct f_instantiate_392fr *F = rt_alloc(sizeof *F);
F->g_388 = g_388;
F->tt_389 = tt_389;
F->args_390 = args_390;
F->line_391 = line_391;
F->gd_1176 = NULL;
F->gd_1176 = (*(P506)rt_nil_check(F->g_388)).decl;
F->pat_1177 = NULL;
F->pat_1177 = (*(P498)rt_nil_check(F->gd_1176)).b;
F->binds_1178 = NULL;
F->f_1179 = NULL;
F->f_1179 = (*(P498)rt_nil_check(F->pat_1177)).e;
F->a_1180 = NULL;
F->a_1180 = F->tt_389;
F->fp_1181 = NULL;
F->fp_1181 = (*(P498)rt_nil_check(F->pat_1177)).a;
F->inst_1182 = NULL;
F->at_1183 = NULL;
F->c_1184 = NULL;
F->saved_fctx_1185 = NULL;
F->saved_fctx_1185 = g_fctx_544;
F->saved_in_1186 = g_in_func_542;
F->saved_level_1187 = g_cur_level_543;
F->saved_sym_1188 = NULL;
F->saved_sym_1188 = g_func_sym_550;
F->saved_code_1189 = NULL;
F->saved_code_1189 = g_code_540;
while (((F->f_1179 != NULL) && (F->a_1180 != NULL))) {
F->p_1190 = NULL;
F->p_1190 = f_gparam_379(F->gd_1176, &(*(P493)rt_nil_check((*(P498)rt_nil_check(F->f_1179)).name)));
F->b_1191 = NULL;
if ((F->p_1190 == NULL)) {
f_fail_23(F->line_391, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->f_1179)).name)), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1191 = f_bind_sym_381(F->p_1190);
if (((*(P498)rt_nil_check(F->p_1190)).ival <= ((rt_int)2LL))) {
if (((*(P498)rt_nil_check(F->a_1180)).kind >= ((rt_int)70LL))) {
(*(P506)rt_nil_check(F->b_1191)).t = f_resolve_subtype_188(F->a_1180, &F->c_1184);
} else {
F->st_1192 = NULL;
F->st_1192 = f_nn_48(((rt_int)80LL), F->line_391);
(*(P498)rt_nil_check(F->st_1192)).name = (*(P498)rt_nil_check(F->a_1180)).name;
(*(P506)rt_nil_check(F->b_1191)).t = f_resolve_subtype_188(F->st_1192, &F->c_1184);
}
(*(P506)rt_nil_check(F->b_1191)).c = F->c_1184;
} else if (((*(P498)rt_nil_check(F->p_1190)).ival <= ((rt_int)5LL))) {
if ((((*(P498)rt_nil_check(F->a_1180)).kind != ((rt_int)7LL)) || (f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->a_1180)).name))) == NULL))) {
f_fail_23(F->line_391, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_1190)).name))); b_; }));
}
F->b_1191 = f_copy_sym_253(f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->a_1180)).name))));
(*(P506)rt_nil_check(F->b_1191)).name = (*(P498)rt_nil_check(F->p_1190)).name;
} else {
(*(P506)rt_nil_check(F->b_1191)).t = f_resolve_subtype_188((*(P498)rt_nil_check(F->p_1190)).a, &F->c_1184);
(*(P506)rt_nil_check(F->b_1191)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_434(F->a_1180, (*(P506)rt_nil_check(F->b_1191)).t, &F->at_1183); b_; }));
(*(P506)rt_nil_check(F->b_1191)).mvalue = f_manifest_217(F->a_1180, &F->ok_1193);
(*(P506)rt_nil_check(F->b_1191)).hasmv = F->ok_1193;
}
(*(P506)rt_nil_check(F->b_1191)).mnext = F->binds_1178;
F->binds_1178 = F->b_1191;
F->f_1179 = (*(P498)rt_nil_check(F->f_1179)).next;
F->a_1180 = (*(P498)rt_nil_check(F->a_1180)).next;
}
F->a_1180 = F->args_390;
while (((F->fp_1181 != NULL) && (F->a_1180 != NULL))) {
if (((((*(P498)rt_nil_check((*(P498)rt_nil_check(F->fp_1181)).a)).kind == ((rt_int)80LL)) && (f_gparam_379(F->gd_1176, &(*(P493)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->fp_1181)).a)).name))) != NULL)) && ((*(P498)rt_nil_check(f_gparam_379(F->gd_1176, &(*(P493)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->fp_1181)).a)).name))))).ival <= ((rt_int)2LL)))) {
F->known_1194 = 0;
F->q_1195 = NULL;
F->q_1195 = F->binds_1178;
while ((F->q_1195 != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P506)rt_nil_check(F->q_1195)).name)), (*(P493)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->fp_1181)).a)).name)))) {
F->known_1194 = 1;
}
F->q_1195 = (*(P506)rt_nil_check(F->q_1195)).mnext;
}
if ((!F->known_1194)) {
F->b_1196 = NULL;
F->b_1196 = f_bind_sym_381(f_gparam_379(F->gd_1176, &(*(P493)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->fp_1181)).a)).name))));
F->v_1197 = rt_str_copy(f_gexpr_434(F->a_1180, NULL, &F->at_1183));
(*(P506)rt_nil_check(F->b_1196)).t = F->at_1183;
(*(P506)rt_nil_check(F->b_1196)).c = g_no_cons_568;
(*(P506)rt_nil_check(F->b_1196)).mnext = F->binds_1178;
F->binds_1178 = F->b_1196;
}
}
F->fp_1181 = (*(P498)rt_nil_check(F->fp_1181)).next;
F->a_1180 = (*(P498)rt_nil_check(F->a_1180)).next;
}
F->inst_1182 = (*(P506)rt_nil_check(F->g_388)).insts;
while ((F->inst_1182 != NULL)) {
if (f_same_binds_384((*(P506)rt_nil_check(F->inst_1182)).members, F->binds_1178)) {
F->result_ = F->inst_1182;
goto ret_;
}
F->inst_1182 = (*(P506)rt_nil_check(F->inst_1182)).insts;
}
g_fctx_544 = NULL;
g_in_func_542 = 0;
g_cur_level_543 = ((rt_int)0LL);
g_func_sym_550 = NULL;
g_code_540 = f_new_buffer_24();
f_open_scope_151();
{
F->b_1198 = NULL;
F->b_1198 = F->binds_1178;
while ((F->b_1198 != NULL)) {
f_define_145(F->b_1198, F->line_391);
F->b_1198 = (*(P506)rt_nil_check(F->b_1198)).mnext;
}
}
F->inst_1182 = f_build_subprogram_278(F->pat_1177);
(*(P506)rt_nil_check(F->inst_1182)).members = F->binds_1178;
(*(P506)rt_nil_check(F->inst_1182)).insts = (*(P506)rt_nil_check(F->g_388)).insts;
(*(P506)rt_nil_check(F->g_388)).insts = F->inst_1182;
f_define_145(F->inst_1182, F->line_391);
f_gen_subprogram_295(F->pat_1177, F->inst_1182);
f_close_scope_152();
g_fctx_544 = F->saved_fctx_1185;
g_in_func_542 = F->saved_in_1186;
g_cur_level_543 = F->saved_level_1187;
g_func_sym_550 = F->saved_sym_1188;
g_code_540 = F->saved_code_1189;
F->result_ = F->inst_1182;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_access_of_394(P506 y_393) {
  struct f_access_of_394fr *F = rt_alloc(sizeof *F);
F->y_393 = y_393;
F->p_1199 = NULL;
F->p_1199 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P506)rt_nil_check(F->y_393)).level <= ((rt_int)0LL))) {
F->result_ = (*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_393)).access));
goto ret_;
}
{ rt_int lo1201 = ((rt_int)1LL), hi1202 = rt_sub(g_cur_level_543, (*(P506)rt_nil_check(F->y_393)).level);
for (rt_int it1203 = lo1201; it1203 <= hi1202; it1203++) {
F->i_1200 = it1203;
F->p_1199 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check(F->p_1199)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P506)rt_nil_check(F->y_393)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P493)rt_nil_check(F->p_1199))), rt_str("->", 2)), (*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_393)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->p_1199)), rt_str("->", 2)), (*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_393)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_import_of_397(P498 l_395, rstr *name_396) {
  struct f_import_of_397fr *F = rt_alloc(sizeof *F);
F->l_395 = l_395;
F->name_396 = name_396;
F->p_1204 = NULL;
F->p_1204 = F->l_395;
while ((F->p_1204 != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_1204)).name)), (*F->name_396))) {
F->result_ = F->p_1204;
goto ret_;
}
F->p_1204 = (*(P498)rt_nil_check(F->p_1204)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_check_import_400(P506 y_398, rt_int line_399) {
  struct f_check_import_400fr *F = rt_alloc(sizeof *F);
F->y_398 = y_398;
F->line_399 = line_399;
F->c_1205 = NULL;
F->c_1205 = g_fctx_544;
F->ro_1206 = 0;
while (((F->c_1205 != NULL) && ((*(P506)rt_nil_check(F->y_398)).depth < (*(P522)rt_nil_check(F->c_1205)).depth))) {
if ((!(*(P522)rt_nil_check(F->c_1205)).all_imp)) {
F->imp_1207 = NULL;
F->imp_1207 = f_import_of_397((*(P522)rt_nil_check(F->c_1205)).imps, &(*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_398)).name)));
if ((F->imp_1207 == NULL)) {
f_fail_23(F->line_399, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_398)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P498)rt_nil_check(F->imp_1207)).ival == ((rt_int)1LL))) {
F->ro_1206 = 1;
}
}
F->c_1205 = (*(P522)rt_nil_check(F->c_1205)).next;
}
F->result_ = F->ro_1206;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_ident_402(rstr *s_401) {
  struct f_c_ident_402fr *F = rt_alloc(sizeof *F);
F->s_401 = s_401;
if (rt_str_eq((*F->s_401), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_401), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_401), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_401), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_401), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_401), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_401), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_401), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_401), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_401), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_401), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_401), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_401), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_401), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_401));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_deref_405(rstr *base_403, P502 t_404) {
  struct f_deref_405fr *F = rt_alloc(sizeof *F);
F->base_403 = base_403;
F->t_404 = t_404;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->t_404)), rt_str(")rt_nil_check(", 14)), (*F->base_403)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_lvalue_407(P498 e_406) {
  struct f_is_lvalue_407fr *F = rt_alloc(sizeof *F);
F->e_406 = e_406;
if (((*(P498)rt_nil_check(F->e_406)).kind == ((rt_int)7LL))) {
F->y_1208 = NULL;
F->y_1208 = f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_406)).name)));
F->result_ = ((F->y_1208 != NULL) && (((*(P506)rt_nil_check(F->y_1208)).kind == ((rt_int)1LL)) || ((*(P506)rt_nil_check(F->y_1208)).kind == ((rt_int)2LL))));
goto ret_;
} else if (((*(P498)rt_nil_check(F->e_406)).kind == ((rt_int)17LL))) {
F->result_ = f_is_lvalue_407((*(P498)rt_nil_check(F->e_406)).a);
goto ret_;
} else if (((*(P498)rt_nil_check(F->e_406)).kind == ((rt_int)11LL))) {
F->result_ = ((!rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_406)).name)), rt_str("LEN", 3))) && f_is_lvalue_407((*(P498)rt_nil_check(F->e_406)).a));
goto ret_;
} else if (((*(P498)rt_nil_check(F->e_406)).kind == ((rt_int)10LL))) {
if ((((*(P498)rt_nil_check(F->e_406)).b != NULL) && ((*(P498)rt_nil_check((*(P498)rt_nil_check(F->e_406)).b)).kind == ((rt_int)16LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_407((*(P498)rt_nil_check(F->e_406)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_lvalue_413(P498 e_408, P493 *code_409, P502 *t_410, P500 *c_411, int *ro_412) {
  struct f_lvalue_413fr *F = rt_alloc(sizeof *F);
F->e_408 = e_408;
F->code_409 = code_409;
F->code_409v = *F->code_409;
F->t_410 = t_410;
F->t_410v = *F->t_410;
F->c_411 = c_411;
F->c_411v = *F->c_411;
F->ro_412 = ro_412;
F->ro_412v = *F->ro_412;
F->base_1209 = NULL;
F->bt_1210 = NULL;
F->bc_1211 = NULL;
if (((*(P498)rt_nil_check(F->e_408)).kind == ((rt_int)7LL))) {
F->y_1212 = NULL;
F->y_1212 = f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_408)).name)));
if ((F->y_1212 == NULL)) {
f_fail_23((*(P498)rt_nil_check(F->e_408)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_408)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P506)rt_nil_check(F->y_1212)).kind != ((rt_int)1LL)) && ((*(P506)rt_nil_check(F->y_1212)).kind != ((rt_int)2LL)))) {
f_fail_23((*(P498)rt_nil_check(F->e_408)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_408)).name)), rt_str(" is not a variable", 18)); b_; }));
}
F->code_409v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_394(F->y_1212); b_; }));
F->t_410v = (*(P506)rt_nil_check(F->y_1212)).t;
F->c_411v = (*(P506)rt_nil_check(F->y_1212)).c;
F->ro_412v = (*(P506)rt_nil_check(F->y_1212)).ro_flag;
if ((((*(P506)rt_nil_check(F->y_1212)).kind == ((rt_int)1LL)) && f_check_import_400(F->y_1212, (*(P498)rt_nil_check(F->e_408)).line))) {
F->ro_412v = 1;
}
} else if (((*(P498)rt_nil_check(F->e_408)).kind == ((rt_int)17LL))) {
f_lvalue_413((*(P498)rt_nil_check(F->e_408)).a, &F->code_409v, &F->t_410v, &F->c_411v, &F->ro_412v);
} else if ((((((*(P498)rt_nil_check(F->e_408)).kind == ((rt_int)12LL)) && ((*(P498)rt_nil_check((*(P498)rt_nil_check(F->e_408)).a)).kind == ((rt_int)7LL))) && rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->e_408)).a)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_409v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_470((*(P498)rt_nil_check(F->e_408)).b, (*(P498)rt_nil_check(F->e_408)).line, &F->t_410v); b_; }));
F->c_411v = g_no_cons_568;
F->ro_412v = 0;
} else if (((*(P498)rt_nil_check(F->e_408)).kind == ((rt_int)11LL))) {
f_lvalue_413((*(P498)rt_nil_check(F->e_408)).a, &F->base_1209, &F->bt_1210, &F->bc_1211, &F->ro_412v);
f_select_on_421(&(*(P493)rt_nil_check(F->base_1209)), F->bt_1210, F->e_408, &F->ro_412v, &F->code_409v, &F->t_410v, &F->c_411v);
} else if (((*(P498)rt_nil_check(F->e_408)).kind == ((rt_int)10LL))) {
f_lvalue_413((*(P498)rt_nil_check(F->e_408)).a, &F->base_1209, &F->bt_1210, &F->bc_1211, &F->ro_412v);
f_index_on_430(&(*(P493)rt_nil_check(F->base_1209)), F->bt_1210, F->e_408, &F->ro_412v, 1, &F->code_409v, &F->t_410v, &F->c_411v);
} else {
f_fail_23((*(P498)rt_nil_check(F->e_408)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_409) = F->code_409v;  (*F->t_410) = F->t_410v;  (*F->c_411) = F->c_411v;  (*F->ro_412) = F->ro_412v;
  return;
}

static void f_select_on_421(rstr *base_414, P502 bt_415, P498 e_416, int *ro_417, P493 *code_418, P502 *t_419, P500 *c_420) {
  struct f_select_on_421fr *F = rt_alloc(sizeof *F);
F->base_414 = base_414;
F->bt_415 = bt_415;
F->e_416 = e_416;
F->ro_417 = ro_417;
F->code_418 = code_418;
F->code_418v = *F->code_418;
F->t_419 = t_419;
F->t_419v = *F->t_419;
F->c_420 = c_420;
F->c_420v = *F->c_420;
F->c_420v = g_no_cons_568;
if (((*(P502)rt_nil_check(F->bt_415)).kind == ((rt_int)8LL))) {
f_finish_ptr_274(F->bt_415);
(*F->ro_417) = 0;
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_416)).name)), rt_str("ALL", 3))) {
F->code_418v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_405(&(*F->base_414), F->bt_415); b_; }));
F->t_419v = (*(P502)rt_nil_check(F->bt_415)).target;
goto ret_;
}
f_select_on_421(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_405(&(*F->base_414), F->bt_415); b_; }), (*(P502)rt_nil_check(F->bt_415)).target, F->e_416, &(*F->ro_417), &F->code_418v, &F->t_419v, &F->c_420v);
goto ret_;
}
if (((*(P502)rt_nil_check(F->bt_415)).kind == ((rt_int)15LL))) {
F->p_1213 = NULL;
F->p_1213 = (*(P502)rt_nil_check(F->bt_415)).tparams;
if ((!f_opened_190(F->bt_415))) {
f_fail_23((*(P498)rt_nil_check(F->e_416)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->bt_415)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P502)rt_nil_check(F->bt_415)).tparams == NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_416)).name)), rt_str("ALL", 3))) {
F->code_418v = f_mk_3(&(*F->base_414));
F->t_419v = (*(P502)rt_nil_check(F->bt_415)).under;
goto ret_;
}
f_select_on_421(&(*F->base_414), (*(P502)rt_nil_check(F->bt_415)).under, F->e_416, &(*F->ro_417), &F->code_418v, &F->t_419v, &F->c_420v);
goto ret_;
}
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_416)).name)), rt_str("ALL", 3))) {
F->code_418v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_414), rt_str(".all", 4)); b_; }));
F->t_419v = (*(P502)rt_nil_check(F->bt_415)).under;
goto ret_;
}
while ((F->p_1213 != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_1213)).name)), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_416)).name)))) {
F->code_418v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_414), rt_str(".p_", 3)), f_lower_s_15(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_1213)).name)))); b_; }));
F->t_419v = f_tparam_type_210(F->bt_415, &(*(P493)rt_nil_check((*(P498)rt_nil_check(F->p_1213)).name)));
(*F->ro_417) = 1;
goto ret_;
}
F->p_1213 = (*(P498)rt_nil_check(F->p_1213)).next;
}
f_select_on_421(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_414), rt_str(".all", 4)); b_; }), (*(P502)rt_nil_check(F->bt_415)).under, F->e_416, &(*F->ro_417), &F->code_418v, &F->t_419v, &F->c_420v);
goto ret_;
}
if (((*(P502)rt_nil_check(F->bt_415)).kind == ((rt_int)7LL))) {
F->f_1214 = NULL;
F->f_1214 = (*(P502)rt_nil_check(F->bt_415)).fields;
while ((F->f_1214 != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P504)rt_nil_check(F->f_1214)).name)), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_416)).name)))) {
F->c_420v = (*(P504)rt_nil_check(F->f_1214)).c;
F->code_418v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_414), rt_str(".", 1)), f_field_c_17(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_416)).name)))); b_; }));
F->t_419v = (*(P504)rt_nil_check(F->f_1214)).t;
goto ret_;
}
F->f_1214 = (*(P504)rt_nil_check(F->f_1214)).next;
}
f_fail_23((*(P498)rt_nil_check(F->e_416)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_416)).name))); b_; }));
}
f_fail_23((*(P498)rt_nil_check(F->e_416)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_416)).name))), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_418) = F->code_418v;  (*F->t_419) = F->t_419v;  (*F->c_420) = F->c_420v;
  return;
}

static void f_index_on_430(rstr *base_422, P502 bt_423, P498 e_424, int *ro_425, int lv_426, P493 *code_427, P502 *t_428, P500 *c_429) {
  struct f_index_on_430fr *F = rt_alloc(sizeof *F);
F->base_422 = base_422;
F->bt_423 = bt_423;
F->e_424 = e_424;
F->ro_425 = ro_425;
F->lv_426 = lv_426;
F->code_427 = code_427;
F->code_427v = *F->code_427;
F->t_428 = t_428;
F->t_428v = *F->t_428;
F->c_429 = c_429;
F->c_429v = *F->c_429;
F->a_1215 = NULL;
F->a_1215 = (*(P498)rt_nil_check(F->e_424)).b;
F->it_1216 = NULL;
F->c_429v = g_no_cons_568;
if (((*(P502)rt_nil_check(F->bt_423)).kind == ((rt_int)8LL))) {
f_finish_ptr_274(F->bt_423);
(*F->ro_425) = 0;
f_index_on_430(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_405(&(*F->base_422), F->bt_423); b_; }), (*(P502)rt_nil_check(F->bt_423)).target, F->e_424, &(*F->ro_425), F->lv_426, &F->code_427v, &F->t_428v, &F->c_429v);
goto ret_;
}
if (((*(P502)rt_nil_check(F->bt_423)).kind == ((rt_int)15LL))) {
if ((!f_opened_190(F->bt_423))) {
f_fail_23((*(P498)rt_nil_check(F->e_424)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->bt_423)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P502)rt_nil_check(F->bt_423)).tparams == NULL)) {
f_index_on_430(&(*F->base_422), (*(P502)rt_nil_check(F->bt_423)).under, F->e_424, &(*F->ro_425), F->lv_426, &F->code_427v, &F->t_428v, &F->c_429v);
} else {
f_index_on_430(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_422), rt_str(".all", 4)); b_; }), (*(P502)rt_nil_check(F->bt_423)).under, F->e_424, &(*F->ro_425), F->lv_426, &F->code_427v, &F->t_428v, &F->c_429v);
}
goto ret_;
}
if ((((*(P502)rt_nil_check(F->bt_423)).kind == ((rt_int)6LL)) && ((*(P502)rt_nil_check(F->bt_423)).idx2 != NULL))) {
if ((f_list_len_54(F->a_1215) != ((rt_int)2LL))) {
f_fail_23((*(P498)rt_nil_check(F->e_424)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("two subscripts expected", 23); b_; }));
}
{
F->i_1217 = rt_str_copy(f_gexpr_434(F->a_1215, (*(P502)rt_nil_check(F->bt_423)).idx, &F->it_1216));
F->j_1218 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->a_1215)).next, (*(P502)rt_nil_check(F->bt_423)).idx2, &F->it_1216));
F->code_427v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_422), rt_str(".p[(rt_index(", 13)), F->i_1217), rt_str(", ", 2)), (*F->base_422)), rt_str(".lo, ", 5)), (*F->base_422)), rt_str(".hi) - ", 7)), (*F->base_422)), rt_str(".lo) * (", 8)), (*F->base_422)), rt_str(".hi2 - ", 7)), (*F->base_422)), rt_str(".lo2 + 1) + rt_index(", 21)), F->j_1218), rt_str(", ", 2)), (*F->base_422)), rt_str(".lo2, ", 6)), (*F->base_422)), rt_str(".hi2) - ", 8)), (*F->base_422)), rt_str(".lo2]", 5)); b_; }));
F->t_428v = (*(P502)rt_nil_check(F->bt_423)).elem;
F->c_429v = (*(P502)rt_nil_check(F->bt_423)).elemcons;
}
goto ret_;
}
if ((f_list_len_54(F->a_1215) != ((rt_int)1LL))) {
f_fail_23((*(P498)rt_nil_check(F->e_424)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P502)rt_nil_check(F->bt_423)).kind == ((rt_int)5LL))) {
if (((*(P498)rt_nil_check(F->a_1215)).kind == ((rt_int)16LL))) {
F->lo_1219 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->a_1215)).a, g_ty_int_557, &F->it_1216));
F->hi_1220 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->a_1215)).b, g_ty_int_557, &F->it_1216));
F->code_427v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_422)), rt_str(", ", 2)), F->lo_1219), rt_str(", ", 2)), F->hi_1220), rt_str(")", 1)); b_; }));
F->t_428v = g_ty_string_561;
(*F->ro_425) = 1;
goto ret_;
}
{
F->i_1221 = rt_str_copy(f_gexpr_434(F->a_1215, g_ty_int_557, &F->it_1216));
F->t_428v = g_ty_ascii_560;
if (F->lv_426) {
F->code_427v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_422)), rt_str(", ", 2)), F->i_1221), rt_str("))", 2)); b_; }));
} else {
F->code_427v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_422)), rt_str(", ", 2)), F->i_1221), rt_str(")", 1)); b_; }));
(*F->ro_425) = 1;
}
}
goto ret_;
}
if (((*(P502)rt_nil_check(F->bt_423)).kind == ((rt_int)6LL))) {
F->i_1222 = rt_str_copy(f_gexpr_434(F->a_1215, (*(P502)rt_nil_check(F->bt_423)).idx, &F->it_1216));
F->code_427v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_422), rt_str(".p[rt_index(", 12)), F->i_1222), rt_str(", ", 2)), (*F->base_422)), rt_str(".lo, ", 5)), (*F->base_422)), rt_str(".hi) - ", 7)), (*F->base_422)), rt_str(".lo]", 4)); b_; }));
F->t_428v = (*(P502)rt_nil_check(F->bt_423)).elem;
F->c_429v = (*(P502)rt_nil_check(F->bt_423)).elemcons;
goto ret_;
}
f_fail_23((*(P498)rt_nil_check(F->e_424)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_427) = F->code_427v;  (*F->t_428) = F->t_428v;  (*F->c_429) = F->c_429v;
  return;
}

static rstr f_gexpr_434(P498 e_431, P502 want_432, P502 *t_433) {
  struct f_gexpr_434fr *F = rt_alloc(sizeof *F);
F->e_431 = e_431;
F->want_432 = want_432;
F->t_433 = t_433;
F->t_433v = *F->t_433;
F->k_1223 = (*(P498)rt_nil_check(F->e_431)).kind;
F->code_1224 = NULL;
F->c_1225 = NULL;
F->bt_1227 = NULL;
F->t_433v = g_ty_int_557;
if ((F->k_1223 == ((rt_int)1LL))) {
if (((F->want_432 != NULL) && ((*(P502)rt_nil_check(F->want_432)).kind == ((rt_int)3LL)))) {
F->t_433v = g_ty_float_559;
F->result_ = rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1223 == ((rt_int)2LL))) {
F->t_433v = g_ty_float_559;
F->result_ = (*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name));
goto ret_;
} else if ((F->k_1223 == ((rt_int)5LL))) {
F->t_433v = g_ty_bool_558;
F->result_ = f_itos_7((*(P498)rt_nil_check(F->e_431)).ival);
goto ret_;
} else if ((F->k_1223 == ((rt_int)3LL))) {
F->t_433v = g_ty_string_561;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_440(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)))), rt_str(", ", 2)), f_itos_7(((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_1223 == ((rt_int)6LL))) {
F->t_433v = g_ty_nil_564;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1223 == ((rt_int)4LL))) {
if (((F->want_432 != NULL) && ((*(P502)rt_nil_check(f_base_of_166(F->want_432))).kind == ((rt_int)4LL)))) {
F->t_433v = F->want_432;
} else {
F->t_433v = f_enum_type_of_443(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), (*(P498)rt_nil_check(F->e_431)).line);
}
{
F->i_1228 = f_lit_index_185((*(P502)rt_nil_check(f_base_of_166(F->t_433v))).lits, &(*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)));
if ((F->i_1228 < ((rt_int)0LL))) {
f_fail_23((*(P498)rt_nil_check(F->e_431)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1228);
goto ret_;
}
} else if ((F->k_1223 == ((rt_int)17LL))) {
F->result_ = f_gexpr_434((*(P498)rt_nil_check(F->e_431)).a, F->want_432, &F->t_433v);
goto ret_;
} else if ((F->k_1223 == ((rt_int)7LL))) {
F->y_1229 = NULL;
F->y_1229 = f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)));
if ((F->y_1229 == NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("ME", 2))) {
F->t_433v = g_ty_act_567;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("NIL_ACT", 7))) {
F->t_433v = g_ty_act_567;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("CRITICAL", 8)) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("NONCRITICAL", 11))) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("SYNC_RESET", 10))) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_482(f_wrap_apply_438(F->e_431), 0, &F->t_433v);
goto ret_;
}
if (((((((((rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("SYS_OUT", 7))) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("TIME", 4))) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("MILLISECONDS", 12))) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("SECONDS", 7))) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("MINUTES", 7))) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_482(f_wrap_apply_438(F->e_431), 0, &F->t_433v);
goto ret_;
}
f_fail_23((*(P498)rt_nil_check(F->e_431)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P506)rt_nil_check(F->y_1229)).kind == ((rt_int)1LL)) || ((*(P506)rt_nil_check(F->y_1229)).kind == ((rt_int)2LL)))) {
F->t_433v = (*(P506)rt_nil_check(F->y_1229)).t;
if (((*(P506)rt_nil_check(F->y_1229)).kind == ((rt_int)1LL))) {
F->ro_1230 = f_check_import_400(F->y_1229, (*(P498)rt_nil_check(F->e_431)).line);
}
F->result_ = f_access_of_394(F->y_1229);
goto ret_;
}
if (((*(P506)rt_nil_check(F->y_1229)).kind == ((rt_int)3LL))) {
F->result_ = f_gcall_482(f_wrap_apply_438(F->e_431), 0, &F->t_433v);
goto ret_;
}
f_fail_23((*(P498)rt_nil_check(F->e_431)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1223 == ((rt_int)8LL)) && (f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name))) != NULL)) && (f_user_op_478(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), f_copy_node_436((*(P498)rt_nil_check(F->e_431)).a)) != NULL))) {
F->call_1231 = NULL;
F->call_1231 = f_nn_48(((rt_int)10LL), (*(P498)rt_nil_check(F->e_431)).line);
F->fname_1232 = NULL;
F->fname_1232 = f_nn_48(((rt_int)7LL), (*(P498)rt_nil_check(F->e_431)).line);
(*(P498)rt_nil_check(F->fname_1232)).name = (*(P498)rt_nil_check(F->e_431)).name;
(*(P498)rt_nil_check(F->call_1231)).a = F->fname_1232;
(*(P498)rt_nil_check(F->call_1231)).b = f_copy_node_436((*(P498)rt_nil_check(F->e_431)).a);
F->result_ = f_gcall_482(F->call_1231, 0, &F->t_433v);
goto ret_;
} else if (((((F->k_1223 == ((rt_int)8LL)) && rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("NOT", 3))) && (F->want_432 != NULL)) && ((*(P502)rt_nil_check(F->want_432)).kind == ((rt_int)16LL)))) {
F->a_1233 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_431)).a, F->want_432, &F->t_433v));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_1233), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_54((*(P502)rt_nil_check((*(P502)rt_nil_check(F->want_432)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1223 == ((rt_int)8LL))) {
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("NOT", 3))) {
F->a_1234 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_431)).a, g_ty_bool_558, &F->t_433v));
f_check_type_175(F->t_433v, g_ty_bool_558, (*(P498)rt_nil_check(F->e_431)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1234), rt_str(")", 1));
goto ret_;
}
{
F->a_1235 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_431)).a, F->want_432, &F->t_433v));
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("+", 1))) {
F->result_ = F->a_1235;
goto ret_;
} else if (((*(P502)rt_nil_check(F->t_433v)).kind == ((rt_int)3LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1235), rt_str(")", 1));
goto ret_;
}
f_check_type_175(F->t_433v, g_ty_int_557, (*(P498)rt_nil_check(F->e_431)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1235), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1223 == ((rt_int)9LL))) {
F->result_ = f_gbinop_450(F->e_431, F->want_432, &F->t_433v);
goto ret_;
} else if ((F->k_1223 == ((rt_int)10LL))) {
if ((((*(P498)rt_nil_check((*(P498)rt_nil_check(F->e_431)).a)).kind == ((rt_int)7LL)) || ((*(P498)rt_nil_check((*(P498)rt_nil_check(F->e_431)).a)).kind == ((rt_int)12LL)))) {
F->nm_1236 = NULL;
F->nm_1236 = (*(P498)rt_nil_check(F->e_431)).a;
F->y_1237 = NULL;
if (((*(P498)rt_nil_check(F->nm_1236)).kind == ((rt_int)12LL))) {
F->nm_1236 = (*(P498)rt_nil_check(F->nm_1236)).a;
}
F->y_1237 = f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->nm_1236)).name)));
if (((((F->y_1237 == NULL) || ((*(P506)rt_nil_check(F->y_1237)).kind == ((rt_int)3LL))) || ((*(P506)rt_nil_check(F->y_1237)).kind == ((rt_int)4LL))) || ((*(P506)rt_nil_check(F->y_1237)).kind == ((rt_int)10LL)))) {
F->result_ = f_gcall_482(F->e_431, 0, &F->t_433v);
goto ret_;
}
}
{
F->base_1238 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_431)).a, NULL, &F->bt_1227));
F->ro_1226 = 1;
f_index_on_430(&F->base_1238, F->bt_1227, F->e_431, &F->ro_1226, 0, &F->code_1224, &F->t_433v, &F->c_1225);
F->result_ = (*(P493)rt_nil_check(F->code_1224));
goto ret_;
}
} else if ((F->k_1223 == ((rt_int)11LL))) {
if (((rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_431)).name)), rt_str("MAX", 3)))) {
F->result_ = f_attribute_446(F->e_431, &F->t_433v);
goto ret_;
}
{
F->base_1239 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_431)).a, NULL, &F->bt_1227));
F->ro_1226 = 1;
f_select_on_421(&F->base_1239, F->bt_1227, F->e_431, &F->ro_1226, &F->code_1224, &F->t_433v, &F->c_1225);
F->result_ = (*(P493)rt_nil_check(F->code_1224));
goto ret_;
}
} else if ((F->k_1223 == ((rt_int)12LL))) {
F->result_ = f_gcall_482(f_wrap_apply_438(F->e_431), 0, &F->t_433v);
goto ret_;
} else if ((F->k_1223 == ((rt_int)14LL))) {
F->result_ = f_constructor_454(F->e_431, F->want_432, &F->t_433v);
goto ret_;
}
f_fail_23((*(P498)rt_nil_check(F->e_431)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_433) = F->t_433v;
  return F->result_;
}

static P498 f_copy_node_436(P498 e_435) {
  struct f_copy_node_436fr *F = rt_alloc(sizeof *F);
F->e_435 = e_435;
F->x_1240 = NULL;
{ R499 *cell1241 = rt_alloc(sizeof(R499));
(*cell1241).name = NULL;
(*cell1241).tag = NULL;
(*cell1241).a = NULL;
(*cell1241).b = NULL;
(*cell1241).c = NULL;
(*cell1241).d = NULL;
(*cell1241).e = NULL;
(*cell1241).next = NULL;
F->x_1240 = cell1241;
}
(*(P498)rt_nil_check(F->x_1240)).kind = (*(P498)rt_nil_check(F->e_435)).kind;
(*(P498)rt_nil_check(F->x_1240)).line = (*(P498)rt_nil_check(F->e_435)).line;
(*(P498)rt_nil_check(F->x_1240)).ival = (*(P498)rt_nil_check(F->e_435)).ival;
(*(P498)rt_nil_check(F->x_1240)).flag = (*(P498)rt_nil_check(F->e_435)).flag;
(*(P498)rt_nil_check(F->x_1240)).name = (*(P498)rt_nil_check(F->e_435)).name;
(*(P498)rt_nil_check(F->x_1240)).tag = (*(P498)rt_nil_check(F->e_435)).tag;
(*(P498)rt_nil_check(F->x_1240)).a = (*(P498)rt_nil_check(F->e_435)).a;
(*(P498)rt_nil_check(F->x_1240)).b = (*(P498)rt_nil_check(F->e_435)).b;
(*(P498)rt_nil_check(F->x_1240)).c = (*(P498)rt_nil_check(F->e_435)).c;
(*(P498)rt_nil_check(F->x_1240)).d = (*(P498)rt_nil_check(F->e_435)).d;
F->result_ = F->x_1240;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P498 f_wrap_apply_438(P498 e_437) {
  struct f_wrap_apply_438fr *F = rt_alloc(sizeof *F);
F->e_437 = e_437;
F->x_1242 = NULL;
F->x_1242 = f_nn_48(((rt_int)10LL), (*(P498)rt_nil_check(F->e_437)).line);
(*(P498)rt_nil_check(F->x_1242)).a = F->e_437;
F->result_ = F->x_1242;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_string_440(rstr *s_439) {
  struct f_c_string_440fr *F = rt_alloc(sizeof *F);
F->s_439 = s_439;
F->n_1243 = ((rt_int)0LL);
{ rt_int lo1245 = ((rt_int)1LL), hi1246 = ((*F->s_439)).len;
for (rt_int it1247 = lo1245; it1247 <= hi1246; it1247++) {
F->i_1244 = it1247;
if (((rt_str_get((*F->s_439), F->i_1244) == 92) || (rt_str_get((*F->s_439), F->i_1244) == 63))) {
F->n_1243 = rt_add(F->n_1243, ((rt_int)1LL));
}
}
}
{
F->r_1248 = rt_str_new(rt_add(rt_add(((*F->s_439)).len, F->n_1243), ((rt_int)2LL)));
F->j_1249 = ((rt_int)1LL);
(*rt_str_at(&F->r_1248, ((rt_int)1LL))) = 34;
{ rt_int lo1251 = ((rt_int)1LL), hi1252 = ((*F->s_439)).len;
for (rt_int it1253 = lo1251; it1253 <= hi1252; it1253++) {
F->i_1250 = it1253;
F->j_1249 = rt_add(F->j_1249, ((rt_int)1LL));
if (((rt_str_get((*F->s_439), F->i_1250) == 92) || (rt_str_get((*F->s_439), F->i_1250) == 63))) {
(*rt_str_at(&F->r_1248, F->j_1249)) = 92;
F->j_1249 = rt_add(F->j_1249, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1248, F->j_1249)) = rt_str_get((*F->s_439), F->i_1250);
}
}
(*rt_str_at(&F->r_1248, rt_add(F->j_1249, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1248;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P502 f_enum_type_of_443(rstr *lit_441, rt_int line_442) {
  struct f_enum_type_of_443fr *F = rt_alloc(sizeof *F);
F->lit_441 = lit_441;
F->line_442 = line_442;
F->y_1254 = NULL;
F->y_1254 = g_scope_stack_530;
F->c_1255 = NULL;
if ((f_lit_index_185((*(P502)rt_nil_check(g_ty_ascii_560)).lits, &(*F->lit_441)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_560;
goto ret_;
}
while ((F->y_1254 != NULL)) {
if ((((((*(P506)rt_nil_check(F->y_1254)).kind == ((rt_int)6LL)) || ((*(P506)rt_nil_check(F->y_1254)).kind == ((rt_int)5LL))) && ((*(P506)rt_nil_check(F->y_1254)).st != NULL)) && ((*(P498)rt_nil_check((*(P506)rt_nil_check(F->y_1254)).st)).kind == ((rt_int)72LL)))) {
if ((f_lit_index_185((*(P498)rt_nil_check((*(P506)rt_nil_check(F->y_1254)).st)).a, &(*F->lit_441)) >= ((rt_int)0LL))) {
if (((*(P506)rt_nil_check(F->y_1254)).kind == ((rt_int)5LL))) {
F->st_1256 = NULL;
F->st_1256 = f_nn_48(((rt_int)80LL), F->line_442);
(*(P498)rt_nil_check(F->st_1256)).name = (*(P506)rt_nil_check(F->y_1254)).name;
F->result_ = f_resolve_subtype_188(F->st_1256, &F->c_1255);
goto ret_;
}
F->result_ = f_resolve_subtype_188((*(P506)rt_nil_check(F->y_1254)).st, &F->c_1255);
goto ret_;
}
}
F->y_1254 = (*(P506)rt_nil_check(F->y_1254)).stack;
}
f_fail_23(F->line_442, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_441)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_attribute_446(P498 e_444, P502 *t_445) {
  struct f_attribute_446fr *F = rt_alloc(sizeof *F);
F->e_444 = e_444;
F->t_445 = t_445;
F->t_445v = *F->t_445;
F->bt_1257 = NULL;
F->c_1258 = NULL;
F->t_445v = g_ty_int_557;
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_444)).name)), rt_str("LEN", 3))) {
F->base_1259 = NULL;
F->base_1259 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_434((*(P498)rt_nil_check(F->e_444)).a, NULL, &F->bt_1257); b_; }));
if (((*(P502)rt_nil_check(F->bt_1257)).kind == ((rt_int)8LL))) {
f_finish_ptr_274(F->bt_1257);
F->base_1259 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_405(&(*(P493)rt_nil_check(F->base_1259)), F->bt_1257); b_; }));
F->bt_1257 = (*(P502)rt_nil_check(F->bt_1257)).target;
}
if (((*(P502)rt_nil_check(F->bt_1257)).kind != ((rt_int)5LL))) {
f_fail_23((*(P498)rt_nil_check(F->e_444)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P493)rt_nil_check(F->base_1259))), rt_str(").len", 5));
goto ret_;
}
if (((*(P498)rt_nil_check((*(P498)rt_nil_check(F->e_444)).a)).kind == ((rt_int)7LL))) {
F->y_1260 = NULL;
F->y_1260 = f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->e_444)).a)).name)));
if (((F->y_1260 != NULL) && (((*(P506)rt_nil_check(F->y_1260)).kind == ((rt_int)6LL)) || ((*(P506)rt_nil_check(F->y_1260)).kind == ((rt_int)5LL))))) {
F->st_1261 = NULL;
F->st_1261 = f_nn_48(((rt_int)80LL), (*(P498)rt_nil_check(F->e_444)).line);
(*(P498)rt_nil_check(F->st_1261)).name = (*(P498)rt_nil_check((*(P498)rt_nil_check(F->e_444)).a)).name;
F->t_445v = f_resolve_subtype_188(F->st_1261, &F->c_1258);
if (((*(P502)rt_nil_check(F->t_445v)).kind == ((rt_int)4LL))) {
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_444)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_54((*(P502)rt_nil_check(F->t_445v)).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P500)rt_nil_check(F->c_1258)).lo != NULL)) {
if (rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_444)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P493)rt_nil_check((*(P500)rt_nil_check(F->c_1258)).lo));
goto ret_;
}
F->result_ = (*(P493)rt_nil_check((*(P500)rt_nil_check(F->c_1258)).hi));
goto ret_;
}
}
}
f_fail_23((*(P498)rt_nil_check(F->e_444)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P493)rt_nil_check((*(P498)rt_nil_check(F->e_444)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_445) = F->t_445v;
  return F->result_;
}

static rstr f_gbinop_450(P498 e_447, P502 want_448, P502 *t_449) {
  struct f_gbinop_450fr *F = rt_alloc(sizeof *F);
F->e_447 = e_447;
F->want_448 = want_448;
F->t_449 = t_449;
F->t_449v = *F->t_449;
F->op_1262 = NULL;
F->op_1262 = (*(P498)rt_nil_check(F->e_447)).name;
F->ta_1263 = NULL;
F->tb_1264 = NULL;
F->hint_1265 = NULL;
F->uy_1266 = NULL;
F->t_449v = g_ty_bool_558;
if ((f_lookup_140(&(*(P493)rt_nil_check(F->op_1262))) != NULL)) {
F->l_1267 = NULL;
F->r_1268 = NULL;
F->l_1267 = f_copy_node_436((*(P498)rt_nil_check(F->e_447)).a);
F->r_1268 = f_copy_node_436((*(P498)rt_nil_check(F->e_447)).b);
(*(P498)rt_nil_check(F->l_1267)).next = F->r_1268;
F->uy_1266 = f_user_op_478(&(*(P493)rt_nil_check(F->op_1262)), F->l_1267);
if ((F->uy_1266 != NULL)) {
F->call_1269 = NULL;
F->call_1269 = f_nn_48(((rt_int)10LL), (*(P498)rt_nil_check(F->e_447)).line);
F->fname_1270 = NULL;
F->fname_1270 = f_nn_48(((rt_int)7LL), (*(P498)rt_nil_check(F->e_447)).line);
(*(P498)rt_nil_check(F->fname_1270)).name = F->op_1262;
(*(P498)rt_nil_check(F->call_1269)).a = F->fname_1270;
(*(P498)rt_nil_check(F->call_1269)).b = F->l_1267;
F->result_ = f_gcall_482(F->call_1269, 0, &F->t_449v);
goto ret_;
}
}
if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("IN", 2))) {
F->s_1271 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_447)).b, NULL, &F->tb_1264));
if (((*(P502)rt_nil_check(F->tb_1264)).kind != ((rt_int)16LL))) {
f_fail_23((*(P498)rt_nil_check(F->e_447)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_1272 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_447)).a, (*(P502)rt_nil_check(F->tb_1264)).elem, &F->ta_1263));
f_check_type_175(F->ta_1263, (*(P502)rt_nil_check(F->tb_1264)).elem, (*(P498)rt_nil_check(F->e_447)).line);
F->t_449v = g_ty_bool_558;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_1272), rt_str(", ", 2)), F->s_1271), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("AND", 3)) || rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("OR", 2))) || rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("XOR", 3))) && (F->want_448 != NULL)) && ((*(P502)rt_nil_check(F->want_448)).kind == ((rt_int)16LL)))) {
F->a_1273 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_447)).a, F->want_448, &F->ta_1263));
F->b_1274 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_447)).b, F->want_448, &F->tb_1264));
f_check_type_175(F->tb_1264, F->ta_1263, (*(P498)rt_nil_check(F->e_447)).line);
F->t_449v = F->ta_1263;
if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_1273), rt_str(", ", 2)), F->b_1274), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_1273), rt_str(", ", 2)), F->b_1274), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_1273), rt_str(", ", 2)), F->b_1274), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("AND", 3)) || rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("OR", 2))) || rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("XOR", 3)))) {
F->a_1275 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_447)).a, g_ty_bool_558, &F->ta_1263));
F->b_1276 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_447)).b, g_ty_bool_558, &F->tb_1264));
f_check_type_175(F->ta_1263, g_ty_bool_558, (*(P498)rt_nil_check(F->e_447)).line);
f_check_type_175(F->tb_1264, g_ty_bool_558, (*(P498)rt_nil_check(F->e_447)).line);
if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1275), rt_str(" && ", 4)), F->b_1276), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1275), rt_str(" || ", 4)), F->b_1276), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1275), rt_str(" != ", 4)), F->b_1276), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("&", 1))) {
F->wa_1277 = NULL;
F->wb_1278 = NULL;
if (((*(P498)rt_nil_check((*(P498)rt_nil_check(F->e_447)).a)).kind == ((rt_int)4LL))) {
F->wa_1277 = g_ty_ascii_560;
}
if (((*(P498)rt_nil_check((*(P498)rt_nil_check(F->e_447)).b)).kind == ((rt_int)4LL))) {
F->wb_1278 = g_ty_ascii_560;
}
{
F->a_1279 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_447)).a, F->wa_1277, &F->ta_1263));
F->b_1280 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_447)).b, F->wb_1278, &F->tb_1264));
F->t_449v = g_ty_string_561;
if ((((*(P502)rt_nil_check(F->ta_1263)).kind == ((rt_int)5LL)) && ((*(P502)rt_nil_check(F->tb_1264)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_1279), rt_str(", ", 2)), F->b_1280), rt_str(")", 1));
goto ret_;
} else if ((((*(P502)rt_nil_check(F->ta_1263)).kind == ((rt_int)5LL)) && ((*(P502)rt_nil_check(F->tb_1264)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_1279), rt_str(", ", 2)), F->b_1280), rt_str(")", 1));
goto ret_;
} else if ((((*(P502)rt_nil_check(F->ta_1263)).kind == ((rt_int)4LL)) && ((*(P502)rt_nil_check(F->tb_1264)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_1279), rt_str(", ", 2)), F->b_1280), rt_str(")", 1));
goto ret_;
} else if ((((*(P502)rt_nil_check(F->ta_1263)).kind == ((rt_int)4LL)) && ((*(P502)rt_nil_check(F->tb_1264)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_1279), rt_str(", ", 2)), F->b_1280), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P498)rt_nil_check(F->e_447)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_93(&(*(P493)rt_nil_check(F->op_1262))) && (!rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("IN", 2))))) {
if (((((*(P498)rt_nil_check((*(P498)rt_nil_check(F->e_447)).a)).kind == ((rt_int)4LL)) || ((*(P498)rt_nil_check((*(P498)rt_nil_check(F->e_447)).a)).kind == ((rt_int)6LL))) || ((*(P498)rt_nil_check((*(P498)rt_nil_check(F->e_447)).a)).kind == ((rt_int)1LL)))) {
F->dummy_1281 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_447)).b, NULL, &F->hint_1265));
}
{
F->a_1282 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_447)).a, F->hint_1265, &F->ta_1263));
F->b_1283 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_447)).b, F->ta_1263, &F->tb_1264));
F->ct_1284 = NULL;
F->ct_1284 = f_base_of_166(F->ta_1263);
F->t_449v = g_ty_bool_558;
if ((((*(P502)rt_nil_check(F->ta_1263)).kind != ((rt_int)11LL)) && ((*(P502)rt_nil_check(F->tb_1264)).kind != ((rt_int)11LL)))) {
f_check_type_175(F->tb_1264, F->ta_1263, (*(P498)rt_nil_check(F->e_447)).line);
}
if (((*(P502)rt_nil_check(F->ta_1263)).kind == ((rt_int)11LL))) {
F->ct_1284 = f_base_of_166(F->tb_1264);
}
if (((*(P502)rt_nil_check(F->ct_1284)).kind == ((rt_int)5LL))) {
if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_1282), rt_str(", ", 2)), F->b_1283), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_1282), rt_str(", ", 2)), F->b_1283), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_1282), rt_str(", ", 2)), F->b_1283), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_1282), rt_str(", ", 2)), F->b_1283), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_1283), rt_str(", ", 2)), F->a_1282), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_1283), rt_str(", ", 2)), F->a_1282), rt_str(")", 1));
goto ret_;
}
if (((*(P502)rt_nil_check(F->ct_1284)).kind == ((rt_int)16LL))) {
if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_1282), rt_str(", ", 2)), F->b_1283), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_1282), rt_str(", ", 2)), F->b_1283), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_1282), rt_str(", ", 2)), F->b_1283), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_1283), rt_str(", ", 2)), F->a_1282), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P498)rt_nil_check(F->e_447)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_221(F->ct_1284)) {
if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("=", 1))) {
F->result_ = f_eq_code_233(F->ct_1284, &F->a_1282, &F->b_1283);
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_233(F->ct_1284, &F->a_1282, &F->b_1283)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P498)rt_nil_check(F->e_447)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1282), rt_str(" == ", 4)), F->b_1283), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1282), rt_str(" != ", 4)), F->b_1283), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1282), rt_str(" ", 1)), (*(P493)rt_nil_check(F->op_1262))), rt_str(" ", 1)), F->b_1283), rt_str(")", 1));
goto ret_;
}
}
{
F->a_1285 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_447)).a, F->want_448, &F->ta_1263));
F->b_1286 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->e_447)).b, F->ta_1263, &F->tb_1264));
if ((((*(P502)rt_nil_check(F->ta_1263)).kind == ((rt_int)3LL)) || ((*(P502)rt_nil_check(F->tb_1264)).kind == ((rt_int)3LL)))) {
F->t_449v = g_ty_float_559;
if (((rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("+", 1)) || rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("-", 1))) || rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1285), rt_str(" ", 1)), (*(P493)rt_nil_check(F->op_1262))), rt_str(" ", 1)), F->b_1286), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_1285), rt_str(", ", 2)), F->b_1286), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_1285), rt_str(", ", 2)), F->b_1286), rt_str(")", 1));
goto ret_;
}
}
f_check_type_175(F->ta_1263, g_ty_int_557, (*(P498)rt_nil_check(F->e_447)).line);
f_check_type_175(F->tb_1264, g_ty_int_557, (*(P498)rt_nil_check(F->e_447)).line);
F->t_449v = g_ty_int_557;
if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1285), rt_str(", ", 2)), F->b_1286), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1285), rt_str(", ", 2)), F->b_1286), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_1285), rt_str(", ", 2)), F->b_1286), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_1285), rt_str(", ", 2)), F->b_1286), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_1285), rt_str(", ", 2)), F->b_1286), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P493)rt_nil_check(F->op_1262)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_1285), rt_str(", ", 2)), F->b_1286), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P498)rt_nil_check(F->e_447)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P493)rt_nil_check(F->op_1262))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_449) = F->t_449v;
  return F->result_;
}

static rstr f_constructor_454(P498 e_451, P502 want_452, P502 *t_453) {
  struct f_constructor_454fr *F = rt_alloc(sizeof *F);
F->e_451 = e_451;
F->want_452 = want_452;
F->t_453 = t_453;
F->t_453v = *F->t_453;
F->it_1287 = NULL;
F->it_1287 = (*(P498)rt_nil_check(F->e_451)).a;
F->f_1288 = NULL;
F->vt_1289 = NULL;
if (((F->want_452 != NULL) && ((*(P502)rt_nil_check(F->want_452)).kind == ((rt_int)16LL)))) {
F->s_1290 = NULL;
F->s_1290 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
F->t_453v = F->want_452;
while ((F->it_1287 != NULL)) {
F->v_1291 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->it_1287)).b, (*(P502)rt_nil_check(F->want_452)).elem, &F->vt_1289));
f_check_type_175(F->vt_1289, (*(P502)rt_nil_check(F->want_452)).elem, (*(P498)rt_nil_check(F->e_451)).line);
F->s_1290 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (*(P493)rt_nil_check(F->s_1290))), rt_str(", ", 2)), F->v_1291), rt_str(")", 1)); b_; }));
F->it_1287 = (*(P498)rt_nil_check(F->it_1287)).next;
}
F->result_ = (*(P493)rt_nil_check(F->s_1290));
goto ret_;
}
if (((F->want_452 != NULL) && ((*(P502)rt_nil_check(F->want_452)).kind == ((rt_int)15LL)))) {
f_fail_23((*(P498)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (*(P493)rt_nil_check((*(P502)rt_nil_check(F->want_452)).name))), rt_str(" needs the underlying type", 26)); b_; }));
}
if ((((F->want_452 != NULL) && ((*(P502)rt_nil_check(F->want_452)).kind == ((rt_int)6LL))) && ((*(P502)rt_nil_check(F->want_452)).idx2 == NULL))) {
F->tmp_1292 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->ct_1293 = rt_str_copy(f_ctype_177(F->want_452));
F->et_1294 = rt_str_copy(f_ctype_177((*(P502)rt_nil_check(F->want_452)).elem));
F->parts_1295 = NULL;
F->t_453v = F->want_452;
if (((((F->it_1287 != NULL) && ((*(P498)rt_nil_check(F->it_1287)).a != NULL)) && ((*(P498)rt_nil_check((*(P498)rt_nil_check(F->it_1287)).a)).b != NULL)) && ((*(P498)rt_nil_check(F->it_1287)).next == NULL))) {
F->lo_1296 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check((*(P498)rt_nil_check(F->it_1287)).a)).a, (*(P502)rt_nil_check(F->want_452)).idx, &F->vt_1289));
F->hi_1297 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check((*(P498)rt_nil_check(F->it_1287)).a)).b, (*(P502)rt_nil_check(F->want_452)).idx, &F->vt_1289));
F->v_1298 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->it_1287)).b, (*(P502)rt_nil_check(F->want_452)).elem, &F->vt_1289));
f_check_type_175(F->vt_1289, (*(P502)rt_nil_check(F->want_452)).elem, (*(P498)rt_nil_check(F->e_451)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1293), rt_str(" ", 1)), F->tmp_1292), rt_str("; ", 2)), F->tmp_1292), rt_str(".lo = ", 6)), F->lo_1296), rt_str("; ", 2)), F->tmp_1292), rt_str(".hi = ", 6)), F->hi_1297), rt_str("; ", 2)), F->tmp_1292), rt_str(".lo2 = ", 7)), F->tmp_1292), rt_str(".hi2 = 1; ", 10)), F->tmp_1292), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1294), rt_str(") * (size_t)RT_CNT(", 19)), F->tmp_1292), rt_str(")); for (rt_int i_ = 0; i_ < RT_CNT(", 36)), F->tmp_1292), rt_str("); i_++) ", 9)), F->tmp_1292), rt_str(".p[i_] = ", 9)), f_copy_code_229((*(P502)rt_nil_check(F->want_452)).elem, &F->v_1298)), rt_str("; ", 2)), F->tmp_1292), rt_str("; })", 4));
goto ret_;
}
F->parts_1295 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1293), rt_str(" ", 1)), F->tmp_1292), rt_str("; ", 2)), F->tmp_1292), rt_str(".lo = 1; ", 9)), F->tmp_1292), rt_str(".hi = ", 6)), f_itos_7(f_list_len_54(F->it_1287))), rt_str("; ", 2)), F->tmp_1292), rt_str(".lo2 = ", 7)), F->tmp_1292), rt_str(".hi2 = 1; ", 10)), F->tmp_1292), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1294), rt_str(") * ", 4)), f_itos_7(rt_add(f_list_len_54(F->it_1287), ((rt_int)1LL)))), rt_str(");", 2)); b_; }));
{ rt_int lo1300 = ((rt_int)0LL), hi1301 = rt_sub(f_list_len_54((*(P498)rt_nil_check(F->e_451)).a), ((rt_int)1LL));
for (rt_int it1302 = lo1300; it1302 <= hi1301; it1302++) {
F->i_1299 = it1302;
if (((*(P498)rt_nil_check(F->it_1287)).a != NULL)) {
f_fail_23((*(P498)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only positional array constructors are handled", 46); b_; }));
}
{
F->v_1303 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->it_1287)).b, (*(P502)rt_nil_check(F->want_452)).elem, &F->vt_1289));
f_check_type_175(F->vt_1289, (*(P502)rt_nil_check(F->want_452)).elem, (*(P498)rt_nil_check(F->e_451)).line);
F->parts_1295 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->parts_1295)), rt_str(" ", 1)), F->tmp_1292), rt_str(".p[", 3)), f_itos_7(F->i_1299)), rt_str("] = ", 4)), f_copy_code_229((*(P502)rt_nil_check(F->want_452)).elem, &F->v_1303)), rt_str(";", 1)); b_; }));
}
F->it_1287 = (*(P498)rt_nil_check(F->it_1287)).next;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->parts_1295)), rt_str(" ", 1)), F->tmp_1292), rt_str("; })", 4));
goto ret_;
}
if (((F->want_452 == NULL) || ((*(P502)rt_nil_check(F->want_452)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P498)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_453v = F->want_452;
F->f_1288 = (*(P502)rt_nil_check(F->want_452)).fields;
{
F->tmp_1304 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_1305 = NULL;
F->parts_1305 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177(F->want_452)), rt_str(" ", 1)), F->tmp_1304), rt_str(";", 1)); b_; }));
if (((f_list_len_54(F->it_1287) != ((rt_int)0LL)) && (f_list_len_54(F->it_1287) != ((rt_int)0LL)))) {
while (((F->it_1287 != NULL) && (F->f_1288 != NULL))) {
if (((((*(P498)rt_nil_check(F->it_1287)).a == NULL) || ((*(P498)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->it_1287)).a)).a)).kind != ((rt_int)7LL))) || (!rt_str_eq((*(P493)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check((*(P498)rt_nil_check(F->it_1287)).a)).a)).name)), (*(P493)rt_nil_check((*(P504)rt_nil_check(F->f_1288)).name)))))) {
f_fail_23((*(P498)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P493)rt_nil_check((*(P504)rt_nil_check(F->f_1288)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_1306 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->it_1287)).b, (*(P504)rt_nil_check(F->f_1288)).t, &F->vt_1289));
f_check_type_175(F->vt_1289, (*(P504)rt_nil_check(F->f_1288)).t, (*(P498)rt_nil_check(F->e_451)).line);
F->parts_1305 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->parts_1305)), rt_str(" ", 1)), F->tmp_1304), rt_str(".", 1)), f_field_c_17(&(*(P493)rt_nil_check((*(P504)rt_nil_check(F->f_1288)).name)))), rt_str(" = ", 3)), f_copy_code_229((*(P504)rt_nil_check(F->f_1288)).t, &F->v_1306)), rt_str(";", 1)); b_; }));
}
F->it_1287 = (*(P498)rt_nil_check(F->it_1287)).next;
F->f_1288 = (*(P504)rt_nil_check(F->f_1288)).next;
}
}
if (((F->it_1287 != NULL) || (F->f_1288 != NULL))) {
f_fail_23((*(P498)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->parts_1305)), rt_str(" ", 1)), F->tmp_1304), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_453) = F->t_453v;
  return F->result_;
}

static int f_fits_457(P506 y_455, P498 args_456) {
  struct f_fits_457fr *F = rt_alloc(sizeof *F);
F->y_455 = y_455;
F->args_456 = args_456;
F->a_1307 = NULL;
F->a_1307 = F->args_456;
F->pm_1308 = NULL;
F->pm_1308 = (*(P506)rt_nil_check(F->y_455)).params;
F->t_1309 = NULL;
F->saved_1310 = NULL;
F->saved_1310 = g_code_540;
F->ok_1311 = 1;
F->lv_1312 = NULL;
F->lc_1313 = NULL;
g_trial_555 = rt_add(g_trial_555, ((rt_int)1LL));
g_code_540 = f_new_buffer_24();
{ rt_frame xf1315;
if (RT_TRY(xf1315)) {
while (((F->ok_1311 && (F->a_1307 != NULL)) && (F->pm_1308 != NULL))) {
if ((((*(P508)rt_nil_check(F->pm_1308)).mode == ((rt_int)2LL)) || ((*(P508)rt_nil_check(F->pm_1308)).mode == ((rt_int)3LL)))) {
f_lvalue_413(F->a_1307, &F->lv_1312, &F->t_1309, &F->lc_1313, &F->ro_1314);
} else {
F->v_1317 = rt_str_copy(f_gexpr_434(F->a_1307, (*(P508)rt_nil_check(F->pm_1308)).t, &F->t_1309));
}
if ((!(f_same_164(F->t_1309, (*(P508)rt_nil_check(F->pm_1308)).t) || (((*(P502)rt_nil_check(F->t_1309)).kind == ((rt_int)11LL)) && ((*(P502)rt_nil_check((*(P508)rt_nil_check(F->pm_1308)).t)).kind == ((rt_int)8LL)))))) {
F->ok_1311 = 0;
}
F->a_1307 = (*(P498)rt_nil_check(F->a_1307)).next;
F->pm_1308 = (*(P508)rt_nil_check(F->pm_1308)).next;
}
if (((F->a_1307 != NULL) || (F->pm_1308 != NULL))) {
F->ok_1311 = 0;
}
RT_POP(xf1315);
} else {
RT_POP(xf1315);
int x1316 = rt_xcur;
if (0 || x1316 == ex_compile_error_1) {
F->ok_1311 = 0;
} else {
rt_raise(x1316);
}
}
}
g_trial_555 = rt_sub(g_trial_555, ((rt_int)1LL));
g_code_540 = F->saved_1310;
F->result_ = F->ok_1311;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P506 f_resolve_overload_462(rstr *name_458, P498 args_459, int is_stmt_460, rt_int line_461) {
  struct f_resolve_overload_462fr *F = rt_alloc(sizeof *F);
F->name_458 = name_458;
F->args_459 = args_459;
F->is_stmt_460 = is_stmt_460;
F->line_461 = line_461;
F->y_1318 = NULL;
F->y_1318 = (*(P514)rt_nil_check(g_table_528)).p[rt_index(f_hash_138(&(*F->name_458)), (*(P514)rt_nil_check(g_table_528)).lo, (*(P514)rt_nil_check(g_table_528)).hi) - (*(P514)rt_nil_check(g_table_528)).lo];
F->first_1319 = NULL;
F->n_1320 = ((rt_int)0LL);
while ((F->y_1318 != NULL)) {
if ((rt_str_eq((*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_1318)).name)), (*F->name_458)) && (((*(P506)rt_nil_check(F->y_1318)).kind == ((rt_int)3LL)) || ((*(P506)rt_nil_check(F->y_1318)).kind == ((rt_int)4LL))))) {
F->n_1320 = rt_add(F->n_1320, ((rt_int)1LL));
if ((F->first_1319 == NULL)) {
F->first_1319 = F->y_1318;
}
if (((((*(P506)rt_nil_check(F->y_1318)).kind == ((rt_int)4LL)) == F->is_stmt_460) && f_fits_457(F->y_1318, F->args_459))) {
F->result_ = F->y_1318;
goto ret_;
}
}
F->y_1318 = (*(P506)rt_nil_check(F->y_1318)).chain;
}
if (f_is_builtin_464(&(*F->name_458))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_1320 > ((rt_int)1LL))) {
f_fail_23(F->line_461, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_458)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_1319;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_builtin_464(rstr *n_463) {
  struct f_is_builtin_464fr *F = rt_alloc(sizeof *F);
F->n_463 = n_463;
F->result_ = (((((((((((((((rt_str_eq((*F->n_463), rt_str("ABS", 3)) || rt_str_eq((*F->n_463), rt_str("POS", 3))) || rt_str_eq((*F->n_463), rt_str("SUCC", 4))) || rt_str_eq((*F->n_463), rt_str("PRED", 4))) || rt_str_eq((*F->n_463), rt_str("SQRT", 4))) || rt_str_eq((*F->n_463), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_463), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_463), rt_str("WRITE", 5))) || rt_str_eq((*F->n_463), rt_str("READLN", 6))) || rt_str_eq((*F->n_463), rt_str("SEND", 4))) || rt_str_eq((*F->n_463), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_463), rt_str("DELAY", 5))) || rt_str_eq((*F->n_463), rt_str("TIME", 4))) || rt_str_eq((*F->n_463), rt_str("CNVT", 4))) || rt_str_eq((*F->n_463), rt_str("FORMAT", 6))) || f_is_low_level_466(&(*F->n_463)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_low_level_466(rstr *n_465) {
  struct f_is_low_level_466fr *F = rt_alloc(sizeof *F);
F->n_465 = n_465;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_465), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_465), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_465), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_465), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_465), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_465), rt_str("LOCK", 4))) || rt_str_eq((*F->n_465), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_465), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_465), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_465), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_465), rt_str("WAITING", 7))) || rt_str_eq((*F->n_465), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_465), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_465), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_465), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_465), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_465), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_465), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_465), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_me_high_470(P498 tt_467, rt_int line_468, P502 *t_469) {
  struct f_me_high_470fr *F = rt_alloc(sizeof *F);
F->tt_467 = tt_467;
F->line_468 = line_468;
F->t_469 = t_469;
F->t_469v = *F->t_469;
F->c_1321 = NULL;
if ((F->tt_467 == NULL)) {
f_fail_23(F->line_468, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_469v = f_resolve_subtype_188(F->tt_467, &F->c_1321);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->t_469v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_472(F->t_469v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_469) = F->t_469v;
  return F->result_;
}

static rstr f_type_tag_472(P502 t_471) {
  struct f_type_tag_472fr *F = rt_alloc(sizeof *F);
F->t_471 = t_471;
if (((*(P502)rt_nil_check(F->t_471)).name != NULL)) {
F->result_ = (*(P493)rt_nil_check((*(P502)rt_nil_check(F->t_471)).name));
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_lock_ref_475(P498 e_473, rstr *name_474) {
  struct f_lock_ref_475fr *F = rt_alloc(sizeof *F);
F->e_473 = e_473;
F->name_474 = name_474;
F->lv_1322 = NULL;
F->t_1323 = NULL;
F->c_1324 = NULL;
f_lvalue_413(F->e_473, &F->lv_1322, &F->t_1323, &F->c_1324, &F->ro_1325);
if (((*(P502)rt_nil_check(F->t_1323)).kind != ((rt_int)13LL))) {
f_fail_23((*(P498)rt_nil_check(F->e_473)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_474), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (*(P493)rt_nil_check(F->lv_1322)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P506 f_user_op_478(rstr *op_476, P498 args_477) {
  struct f_user_op_478fr *F = rt_alloc(sizeof *F);
F->op_476 = op_476;
F->args_477 = args_477;
F->y_1326 = NULL;
F->y_1326 = (*(P514)rt_nil_check(g_table_528)).p[rt_index(f_hash_138(&(*F->op_476)), (*(P514)rt_nil_check(g_table_528)).lo, (*(P514)rt_nil_check(g_table_528)).hi) - (*(P514)rt_nil_check(g_table_528)).lo];
while ((F->y_1326 != NULL)) {
if (((rt_str_eq((*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_1326)).name)), (*F->op_476)) && ((*(P506)rt_nil_check(F->y_1326)).kind == ((rt_int)3LL))) && f_fits_457(F->y_1326, F->args_477))) {
F->result_ = F->y_1326;
goto ret_;
}
F->y_1326 = (*(P506)rt_nil_check(F->y_1326)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gcall_482(P498 e_479, int is_stmt_480, P502 *t_481) {
  struct f_gcall_482fr *F = rt_alloc(sizeof *F);
F->e_479 = e_479;
F->is_stmt_480 = is_stmt_480;
F->t_481 = t_481;
F->t_481v = *F->t_481;
F->fn_1327 = NULL;
F->fn_1327 = (*(P498)rt_nil_check(F->e_479)).a;
F->tt_1328 = NULL;
F->y_1329 = NULL;
F->args_1330 = NULL;
F->args_1330 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_1331 = NULL;
F->a_1331 = (*(P498)rt_nil_check(F->e_479)).b;
F->pm_1332 = NULL;
F->lt_1333 = NULL;
F->vt_1334 = NULL;
F->lv_1335 = NULL;
F->lc_1336 = NULL;
if (((*(P498)rt_nil_check(F->fn_1327)).kind == ((rt_int)12LL))) {
F->tt_1328 = (*(P498)rt_nil_check(F->fn_1327)).b;
F->fn_1327 = (*(P498)rt_nil_check(F->fn_1327)).a;
}
F->y_1329 = f_lookup_140(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1327)).name)));
if ((F->y_1329 == NULL)) {
F->result_ = f_builtin_489(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1327)).name)), F->tt_1328, (*(P498)rt_nil_check(F->e_479)).b, (*(P498)rt_nil_check(F->e_479)).line, F->is_stmt_480, &F->t_481v);
goto ret_;
}
if (((((*(P506)rt_nil_check(F->y_1329)).kind != ((rt_int)3LL)) && ((*(P506)rt_nil_check(F->y_1329)).kind != ((rt_int)4LL))) && ((*(P506)rt_nil_check(F->y_1329)).kind != ((rt_int)10LL)))) {
F->alt_1338 = NULL;
F->alt_1338 = f_resolve_overload_462(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1327)).name)), (*(P498)rt_nil_check(F->e_479)).b, F->is_stmt_480, (*(P498)rt_nil_check(F->e_479)).line);
if ((F->alt_1338 != NULL)) {
F->y_1329 = F->alt_1338;
} else if (f_is_builtin_464(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1327)).name)))) {
F->result_ = f_builtin_489(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1327)).name)), F->tt_1328, (*(P498)rt_nil_check(F->e_479)).b, (*(P498)rt_nil_check(F->e_479)).line, F->is_stmt_480, &F->t_481v);
goto ret_;
}
}
if (((*(P506)rt_nil_check(F->y_1329)).kind == ((rt_int)10LL))) {
F->y_1329 = f_instantiate_392(F->y_1329, F->tt_1328, (*(P498)rt_nil_check(F->e_479)).b, (*(P498)rt_nil_check(F->e_479)).line);
} else if ((((*(P506)rt_nil_check(F->y_1329)).kind == ((rt_int)3LL)) || ((*(P506)rt_nil_check(F->y_1329)).kind == ((rt_int)4LL)))) {
F->y_1329 = f_resolve_overload_462(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1327)).name)), (*(P498)rt_nil_check(F->e_479)).b, F->is_stmt_480, (*(P498)rt_nil_check(F->e_479)).line);
if ((F->y_1329 == NULL)) {
F->result_ = f_builtin_489(&(*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1327)).name)), F->tt_1328, (*(P498)rt_nil_check(F->e_479)).b, (*(P498)rt_nil_check(F->e_479)).line, F->is_stmt_480, &F->t_481v);
goto ret_;
}
}
if ((((*(P506)rt_nil_check(F->y_1329)).kind != ((rt_int)3LL)) && ((*(P506)rt_nil_check(F->y_1329)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P498)rt_nil_check(F->e_479)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1327)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_480 && ((*(P506)rt_nil_check(F->y_1329)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P498)rt_nil_check(F->e_479)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1327)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_480) && ((*(P506)rt_nil_check(F->y_1329)).kind != ((rt_int)3LL)))) {
f_fail_23((*(P498)rt_nil_check(F->e_479)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1327)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_1332 = (*(P506)rt_nil_check(F->y_1329)).params;
if (((*(P506)rt_nil_check(F->y_1329)).level > ((rt_int)0LL))) {
F->args_1330 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1340 = ((rt_int)1LL), hi1341 = rt_sub(g_cur_level_543, (*(P506)rt_nil_check(F->y_1329)).level);
for (rt_int it1342 = lo1340; it1342 <= hi1341; it1342++) {
F->i_1339 = it1342;
F->args_1330 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check(F->args_1330)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_1331 != NULL) && (F->pm_1332 != NULL))) {
if ((((*(P493)rt_nil_check(F->args_1330))).len > ((rt_int)0LL))) {
F->args_1330 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check(F->args_1330)), rt_str(", ", 2)); b_; }));
}
if ((((*(P508)rt_nil_check(F->pm_1332)).mode == ((rt_int)2LL)) || ((*(P508)rt_nil_check(F->pm_1332)).mode == ((rt_int)3LL)))) {
f_lvalue_413(F->a_1331, &F->lv_1335, &F->lt_1333, &F->lc_1336, &F->ro_1337);
if (F->ro_1337) {
f_fail_23((*(P498)rt_nil_check(F->e_479)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check((*(P508)rt_nil_check(F->pm_1332)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_175(F->lt_1333, (*(P508)rt_nil_check(F->pm_1332)).t, (*(P498)rt_nil_check(F->e_479)).line);
F->args_1330 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->args_1330)), rt_str("&", 1)), (*(P493)rt_nil_check(F->lv_1335))); b_; }));
} else if ((((*(P508)rt_nil_check(F->pm_1332)).mode == ((rt_int)4LL)) && f_is_lvalue_407(F->a_1331))) {
f_lvalue_413(F->a_1331, &F->lv_1335, &F->lt_1333, &F->lc_1336, &F->ro_1337);
f_check_type_175(F->lt_1333, (*(P508)rt_nil_check(F->pm_1332)).t, (*(P498)rt_nil_check(F->e_479)).line);
F->args_1330 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->args_1330)), rt_str("&", 1)), (*(P493)rt_nil_check(F->lv_1335))); b_; }));
} else if (((*(P508)rt_nil_check(F->pm_1332)).mode == ((rt_int)4LL))) {
F->v_1343 = rt_str_copy(f_gexpr_434(F->a_1331, (*(P508)rt_nil_check(F->pm_1332)).t, &F->vt_1334));
F->ct_1344 = rt_str_copy(f_ctype_177((*(P508)rt_nil_check(F->pm_1332)).t));
f_check_type_175(F->vt_1334, (*(P508)rt_nil_check(F->pm_1332)).t, (*(P498)rt_nil_check(F->e_479)).line);
F->args_1330 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->args_1330)), rt_str("({ ", 3)), F->ct_1344), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1344), rt_str(")); *b_ = ", 10)), F->v_1343), rt_str("; b_; })", 8)); b_; }));
} else {
F->v_1345 = rt_str_copy(f_gexpr_434(F->a_1331, (*(P508)rt_nil_check(F->pm_1332)).t, &F->vt_1334));
f_check_type_175(F->vt_1334, (*(P508)rt_nil_check(F->pm_1332)).t, (*(P498)rt_nil_check(F->e_479)).line);
if (((((*(P502)rt_nil_check((*(P508)rt_nil_check(F->pm_1332)).t)).kind == ((rt_int)1LL)) && ((*(P508)rt_nil_check(F->pm_1332)).c != NULL)) && (*(P500)rt_nil_check((*(P508)rt_nil_check(F->pm_1332)).c)).hasm)) {
F->args_1330 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->args_1330)), rt_str("rt_range(", 9)), F->v_1345), rt_str(", ", 2)), f_itos_7((*(P500)rt_nil_check((*(P508)rt_nil_check(F->pm_1332)).c)).mlo)), rt_str(", ", 2)), f_itos_7((*(P500)rt_nil_check((*(P508)rt_nil_check(F->pm_1332)).c)).mhi)), rt_str(")", 1)); b_; }));
} else {
F->args_1330 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P493)rt_nil_check(F->args_1330)), F->v_1345); b_; }));
}
}
F->a_1331 = (*(P498)rt_nil_check(F->a_1331)).next;
F->pm_1332 = (*(P508)rt_nil_check(F->pm_1332)).next;
}
if (((F->a_1331 != NULL) || (F->pm_1332 != NULL))) {
f_fail_23((*(P498)rt_nil_check(F->e_479)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check((*(P498)rt_nil_check(F->fn_1327)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_54((*(P498)rt_nil_check(F->e_479)).b), f_list_len_54(F->a_1331)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_481v = (*(P506)rt_nil_check(F->y_1329)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check((*(P506)rt_nil_check(F->y_1329)).cname)), rt_str("(", 1)), (*(P493)rt_nil_check(F->args_1330))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_481) = F->t_481v;
  return F->result_;
}

static rstr f_builtin_489(rstr *name_483, P498 tt_484, P498 args_485, rt_int line_486, int is_stmt_487, P502 *t_488) {
  struct f_builtin_489fr *F = rt_alloc(sizeof *F);
F->name_483 = name_483;
F->tt_484 = tt_484;
F->args_485 = args_485;
F->line_486 = line_486;
F->is_stmt_487 = is_stmt_487;
F->t_488 = t_488;
F->t_488v = *F->t_488;
F->at_1346 = NULL;
F->n_1347 = f_list_len_54(F->args_485);
F->t_488v = g_ty_void_562;
if (((rt_str_eq((*F->name_483), rt_str("POS", 3)) || rt_str_eq((*F->name_483), rt_str("SUCC", 4))) || rt_str_eq((*F->name_483), rt_str("PRED", 4)))) {
F->a_1348 = rt_str_copy(f_gexpr_434(F->args_485, NULL, &F->at_1346));
if (rt_str_eq((*F->name_483), rt_str("POS", 3))) {
if (((*(P502)rt_nil_check(f_base_of_166(F->at_1346))).kind != ((rt_int)4LL))) {
f_fail_23(F->line_486, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_488v = g_ty_int_557;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1348), rt_str(") + 1)", 6));
goto ret_;
}
F->t_488v = F->at_1346;
if (((*(P502)rt_nil_check(F->at_1346)).kind == ((rt_int)1LL))) {
if (rt_str_eq((*F->name_483), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1348), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1348), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_483), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1348), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P502)rt_nil_check(f_base_of_166(F->at_1346))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1348), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P502)rt_nil_check(f_base_of_166(F->at_1346))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_483), rt_str("SQRT", 4)) || rt_str_eq((*F->name_483), rt_str("SIN", 3))) || rt_str_eq((*F->name_483), rt_str("COS", 3))) || rt_str_eq((*F->name_483), rt_str("EXP", 3))) || rt_str_eq((*F->name_483), rt_str("LN", 2))) || rt_str_eq((*F->name_483), rt_str("FLOOR", 5)))) {
F->a_1349 = rt_str_copy(f_gexpr_434(F->args_485, g_ty_float_559, &F->at_1346));
F->t_488v = g_ty_float_559;
if (rt_str_eq((*F->name_483), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_1349), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_483)), rt_str("(", 1)), F->a_1349), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("IFLOAT", 6))) {
F->a_1350 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->args_485)).next, g_ty_int_557, &F->at_1346));
F->t_488v = g_ty_float_559;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_1350), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("IFIX", 4))) {
F->a_1351 = rt_str_copy(f_gexpr_434(F->args_485, g_ty_float_559, &F->at_1346));
F->t_488v = g_ty_int_557;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1351), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("FORMAT", 6))) {
F->a_1352 = rt_str_copy(f_gexpr_434(F->args_485, g_ty_float_559, &F->at_1346));
F->n1_1353 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->args_485)).next, g_ty_int_557, &F->at_1346));
F->m1_1354 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check((*(P498)rt_nil_check(F->args_485)).next)).next, g_ty_int_557, &F->at_1346));
F->t_488v = g_ty_string_561;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_1352), rt_str(", ", 2)), F->n1_1353), rt_str(", ", 2)), F->m1_1354), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("ABS", 3))) {
F->a_1355 = rt_str_copy(f_gexpr_434(F->args_485, NULL, &F->at_1346));
F->t_488v = F->at_1346;
if (((*(P502)rt_nil_check(F->at_1346)).kind == ((rt_int)1LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_1355), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_1355), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("CNVT", 4))) {
if ((F->tt_484 == NULL)) {
f_fail_23(F->line_486, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_1356 = rt_str_copy(f_gexpr_434(F->args_485, NULL, &F->at_1346));
if ((((*(P498)rt_nil_check(F->tt_484)).kind == ((rt_int)73LL)) && ((*(P502)rt_nil_check(F->at_1346)).kind == ((rt_int)1LL)))) {
F->t_488v = g_ty_string_561;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_1356), rt_str(")", 1));
goto ret_;
} else if ((((*(P498)rt_nil_check(F->tt_484)).kind == ((rt_int)73LL)) && ((*(P502)rt_nil_check(F->at_1346)).kind == ((rt_int)3LL)))) {
F->t_488v = g_ty_string_561;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_1356), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P498)rt_nil_check(F->tt_484)).kind == ((rt_int)73LL)) && ((*(P502)rt_nil_check(F->at_1346)).kind == ((rt_int)2LL)))) {
F->t_488v = g_ty_string_561;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_1356), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P498)rt_nil_check(F->tt_484)).kind == ((rt_int)70LL)) && ((*(P502)rt_nil_check(F->at_1346)).kind == ((rt_int)5LL)))) {
F->t_488v = g_ty_int_557;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_1356), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_486, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_483), rt_str("WRITELN", 7))) {
if ((F->n_1347 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_1357 = NULL;
F->last_1357 = F->args_485;
while (((*(P498)rt_nil_check(F->last_1357)).next != NULL)) {
F->last_1357 = (*(P498)rt_nil_check(F->last_1357)).next;
}
{
F->a_1358 = rt_str_copy(f_gexpr_434(F->last_1357, g_ty_string_561, &F->at_1346));
f_check_type_175(F->at_1346, g_ty_string_561, F->line_486);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_1358), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_483), rt_str("WRITE", 5))) {
F->a_1359 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->args_485)).next, NULL, &F->at_1346));
if (((*(P502)rt_nil_check(F->at_1346)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_1359), rt_str(")", 1));
goto ret_;
} else if (((*(P502)rt_nil_check(F->at_1346)).kind == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_1359), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_486, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_483), rt_str("READLN", 6))) {
F->lv_1360 = NULL;
F->lc_1361 = NULL;
F->last_1363 = NULL;
F->last_1363 = F->args_485;
while (((*(P498)rt_nil_check(F->last_1363)).next != NULL)) {
F->last_1363 = (*(P498)rt_nil_check(F->last_1363)).next;
}
f_lvalue_413(F->last_1363, &F->lv_1360, &F->at_1346, &F->lc_1361, &F->ro_1362);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P493)rt_nil_check(F->lv_1360))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("SIZELN", 6))) {
F->t_488v = g_ty_int_557;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("EOF", 3))) {
F->t_488v = g_ty_bool_558;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_483), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_483), rt_str("SYS_OUT", 7)))) {
F->t_488v = g_ty_file_563;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_483), rt_str("OPEN", 4)) || rt_str_eq((*F->name_483), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_483), rt_str("SEND", 4)) || rt_str_eq((*F->name_483), rt_str("RECEIVE", 7)))) {
F->lv_1364 = NULL;
F->dv_1365 = NULL;
F->lc_1366 = NULL;
F->mt_1368 = NULL;
F->dt_1369 = NULL;
f_lvalue_413(F->args_485, &F->lv_1364, &F->mt_1368, &F->lc_1366, &F->ro_1367);
if (((*(P502)rt_nil_check(F->mt_1368)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_486, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_483), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_483), rt_str("RECEIVE", 7))) {
f_lvalue_413((*(P498)rt_nil_check(F->args_485)).next, &F->dv_1365, &F->dt_1369, &F->lc_1366, &F->ro_1367);
f_check_type_175(F->dt_1369, (*(P502)rt_nil_check(F->mt_1368)).elem, F->line_486);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (*(P493)rt_nil_check(F->lv_1364))), rt_str(", &", 3)), (*(P493)rt_nil_check(F->dv_1365))), rt_str(")", 1));
goto ret_;
}
{
F->v_1370 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->args_485)).next, (*(P502)rt_nil_check(F->mt_1368)).elem, &F->at_1346));
f_check_type_175(F->at_1346, (*(P502)rt_nil_check(F->mt_1368)).elem, F->line_486);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P502)rt_nil_check(F->mt_1368)).elem)), rt_str(" m_ = ", 6)), F->v_1370), rt_str("; rt_send(", 10)), (*(P493)rt_nil_check(F->lv_1364))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_483), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_483), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_1371 = NULL;
F->lc_1372 = NULL;
F->mt_1374 = NULL;
f_lvalue_413(F->args_485, &F->lv_1371, &F->mt_1374, &F->lc_1372, &F->ro_1373);
if (((*(P502)rt_nil_check(F->mt_1374)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_486, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_483), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_488v = g_ty_int_557;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_483))), rt_str("(", 1)), (*(P493)rt_nil_check(F->lv_1371))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_483), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_483), rt_str("COND_RECEIVE", 12)))) {
F->lv_1375 = NULL;
F->dv_1376 = NULL;
F->bv_1377 = NULL;
F->lc_1378 = NULL;
F->mt_1380 = NULL;
F->dt_1381 = NULL;
F->bt_1382 = NULL;
f_lvalue_413(F->args_485, &F->lv_1375, &F->mt_1380, &F->lc_1378, &F->ro_1379);
if (((*(P502)rt_nil_check(F->mt_1380)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_486, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_483), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_413((*(P498)rt_nil_check((*(P498)rt_nil_check(F->args_485)).next)).next, &F->bv_1377, &F->bt_1382, &F->lc_1378, &F->ro_1379);
f_check_type_175(F->bt_1382, g_ty_bool_558, F->line_486);
if (rt_str_eq((*F->name_483), rt_str("COND_RECEIVE", 12))) {
f_lvalue_413((*(P498)rt_nil_check(F->args_485)).next, &F->dv_1376, &F->dt_1381, &F->lc_1378, &F->ro_1379);
f_check_type_175(F->dt_1381, (*(P502)rt_nil_check(F->mt_1380)).elem, F->line_486);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->bv_1377)), rt_str(" = rt_cond_receive(", 19)), (*(P493)rt_nil_check(F->lv_1375))), rt_str(", &", 3)), (*(P493)rt_nil_check(F->dv_1376))), rt_str(")", 1));
goto ret_;
}
{
F->v_1383 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->args_485)).next, (*(P502)rt_nil_check(F->mt_1380)).elem, &F->at_1346));
f_check_type_175(F->at_1346, (*(P502)rt_nil_check(F->mt_1380)).elem, F->line_486);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P502)rt_nil_check(F->mt_1380)).elem)), rt_str(" m_ = ", 6)), F->v_1383), rt_str("; ", 2)), (*(P493)rt_nil_check(F->bv_1377))), rt_str(" = rt_cond_send(", 16)), (*(P493)rt_nil_check(F->lv_1375))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_483), rt_str("PRIORITY", 8))) {
F->t_488v = g_ty_int_557;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_337(F->args_485)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("SET_PRIORITY", 12))) {
F->v_1384 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->args_485)).next, g_ty_int_557, &F->at_1346));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_337(F->args_485)), rt_str(", ", 2)), F->v_1384), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_337(F->args_485)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("ACTIVE", 6))) {
F->t_488v = g_ty_bool_558;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_is_active(", 13), f_act_ref_337(F->args_485)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("DELAY", 5))) {
F->v_1385 = rt_str_copy(f_gexpr_434(F->args_485, g_ty_int_557, &F->at_1346));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_1385), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("DELAY_UNTIL", 11))) {
F->v_1386 = rt_str_copy(f_gexpr_434(F->args_485, g_ty_int_557, &F->at_1346));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_1386), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_337(F->args_485)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("TIME", 4))) {
F->t_488v = g_ty_int_557;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_483), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_483), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_483), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_483), rt_str("HOURS", 5)))) {
F->t_488v = g_ty_int_557;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_483));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("HALT", 4))) {
F->a_1387 = rt_str_copy(f_gexpr_434(F->args_485, g_ty_int_557, &F->at_1346));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_1387), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_483), rt_str("ME", 2)) && (F->tt_484 != NULL))) {
F->result_ = f_me_high_470(F->tt_484, F->line_486, &F->t_488v);
goto ret_;
} else if ((rt_str_eq((*F->name_483), rt_str("WAITING", 7)) || rt_str_eq((*F->name_483), rt_str("SUSPENDED", 9)))) {
F->t_488v = g_ty_bool_558;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_483))), rt_str("(", 1)), f_act_ref_337(F->args_485)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_483), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_483), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_483), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_483), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_483), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_483), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_483))), rt_str("(", 1)), f_act_ref_337(F->args_485)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("TASK_START", 10))) {
if ((F->n_1347 != ((rt_int)2LL))) {
f_fail_23(F->line_486, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_337(F->args_485)), rt_str(", ", 2)), f_act_ref_337((*(P498)rt_nil_check(F->args_485)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_483), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_483), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_483), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_483), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_483), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_483), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((F->n_1347 != ((rt_int)0LL))) {
f_fail_23(F->line_486, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_483), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_483))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_475(F->args_485, &(*F->name_483))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_475(F->args_485, &(*F->name_483))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("COND_LOCK", 9))) {
F->bv_1388 = NULL;
F->bc_1389 = NULL;
F->bt_1391 = NULL;
F->l_1392 = rt_str_copy(f_lock_ref_475(F->args_485, &(*F->name_483)));
f_lvalue_413((*(P498)rt_nil_check(F->args_485)).next, &F->bv_1388, &F->bt_1391, &F->bc_1389, &F->ro_1390);
f_check_type_175(F->bt_1391, g_ty_bool_558, F->line_486);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P493)rt_nil_check(F->bv_1388)), rt_str(" = rt_cond_lock(", 16)), F->l_1392), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("EXCESS_LOCKS", 12))) {
F->t_488v = g_ty_int_557;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_475(F->args_485, &(*F->name_483))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("OWNER", 5))) {
F->t_488v = g_ty_act_567;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_475(F->args_485, &(*F->name_483))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_483), rt_str("LOW_IO", 6))) {
F->dev_1393 = rt_str_copy(f_gexpr_434(F->args_485, g_ty_int_557, &F->at_1346));
F->cmd_1394 = rt_str_copy(f_gexpr_434((*(P498)rt_nil_check(F->args_485)).next, g_ty_int_557, &F->at_1346));
if ((F->n_1347 == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_1393), rt_str(", ", 2)), F->cmd_1394), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_1395 = NULL;
F->dc_1396 = NULL;
F->dt_1398 = NULL;
f_lvalue_413((*(P498)rt_nil_check((*(P498)rt_nil_check(F->args_485)).next)).next, &F->dv_1395, &F->dt_1398, &F->dc_1396, &F->ro_1397);
f_check_type_175(F->dt_1398, g_ty_int_557, F->line_486);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_1393), rt_str(", ", 2)), F->cmd_1394), rt_str(", &", 3)), (*(P493)rt_nil_check(F->dv_1395))), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_486, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_483), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_488) = F->t_488v;
  return F->result_;
}

static void f_translate_491(P498 units_490) {
  struct f_translate_491fr *F = rt_alloc(sizeof *F);
F->units_490 = units_490;
F->u_1399 = NULL;
F->u_1399 = F->units_490;
while ((F->u_1399 != NULL)) {
if (((*(P498)rt_nil_check(F->u_1399)).next == NULL)) {
{ R519 *cell1400 = rt_alloc(sizeof(R519));
(*cell1400).d = NULL;
(*cell1400).next = NULL;
g_caps_545 = cell1400;
}
(*(P518)rt_nil_check(g_caps_545)).d = F->u_1399;
f_declare_body_245((*(P498)rt_nil_check(F->u_1399)).c);
f_body_elements_305((*(P498)rt_nil_check(F->u_1399)).c);
{
F->l_1401 = NULL;
F->l_1401 = F->units_490;
while ((F->l_1401 != F->u_1399)) {
{
F->w_1402 = rt_str_copy(f_waits_of_297(F->l_1401));
if (((F->w_1402).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1402);
}
}
F->l_1401 = (*(P498)rt_nil_check(F->l_1401)).next;
}
}
} else {
f_gen_capsule_255(F->u_1399);
}
F->u_1399 = (*(P498)rt_nil_check(F->u_1399)).next;
}
ret_:
  return;
}

static void f_print_program_492(void) {
  struct f_print_program_492fr *F = rt_alloc(sizeof *F);
f_emit_helpers_241();
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_533);
f_print_buffer_31(g_out_frames_549);
f_print_buffer_31(g_out_helpers_534);
f_print_buffer_31(g_out_protos_535);
f_print_buffer_31(g_out_globals_536);
f_print_buffer_31(g_out_funcs_537);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_excs_539);
f_print_buffer_31(g_out_init_538);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  return;
}

static void as_R523(R523 *d, R523 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R523 cp_R523(R523 s) {
  R523 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R523(R523 a, R523 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_R521(R521 *d, R521 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R521 cp_R521(R521 s) {
  R521 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R521(R521 a, R521 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R519(R519 *d, R519 s) {
  d->d = s.d;
  d->next = s.next;
}
static R519 cp_R519(R519 s) {
  R519 d = s;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R519(R519 a, R519 b) {
  return 1 && (a.d == b.d) && (a.next == b.next);
}
static void as_R517(R517 *d, R517 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R517 cp_R517(R517 s) {
  R517 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R517(R517 a, R517 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_A515(A515 *d, A515 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A515 cp_A515(A515 s) {
  A515 d = s; d.p = rt_alloc(sizeof(P506) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A515(A515 a, A515 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R513(R513 *d, R513 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R513 cp_R513(R513 s) {
  R513 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R513(R513 a, R513 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R511(R511 *d, R511 s) {
  d->s = s.s;
  d->next = s.next;
}
static R511 cp_R511(R511 s) {
  R511 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R511(R511 a, R511 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R509(R509 *d, R509 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R509 cp_R509(R509 s) {
  R509 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R509(R509 a, R509 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R507(R507 *d, R507 s) {
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
static R507 cp_R507(R507 s) {
  R507 d = s;
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
static int eq_R507(R507 a, R507 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.chain == b.chain) && (a.stack == b.stack);
}
static void as_R505(R505 *d, R505 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R505 cp_R505(R505 s) {
  R505 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R505(R505 a, R505 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R503(R503 *d, R503 s) {
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
  d->initp = s.initp;
  d->tpsyms = s.tpsyms;
  d->next = s.next;
}
static R503 cp_R503(R503 s) {
  R503 d = s;
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
  d.initp = s.initp;
  d.tpsyms = s.tpsyms;
  d.next = s.next;
  return d;
}
static int eq_R503(R503 a, R503 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.tpsyms == b.tpsyms) && (a.next == b.next);
}
static void as_R501(R501 *d, R501 s) {
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
static R501 cp_R501(R501 s) {
  R501 d = s;
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
static int eq_R501(R501 a, R501 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args);
}
static void as_R499(R499 *d, R499 s) {
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
static R499 cp_R499(R499 s) {
  R499 d = s;
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
static int eq_R499(R499 a, R499 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A497(A497 *d, A497 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A497 cp_A497(A497 s) {
  A497 d = s; d.p = rt_alloc(sizeof(P494) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A497(A497 a, A497 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R495(R495 *d, R495 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
}
static R495 cp_R495(R495 s) {
  R495 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  return d;
}
static int eq_R495(R495 a, R495 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_524 = NULL;
g_ntoks_525 = ((rt_int)0LL);
g_tpos_526 = ((rt_int)1LL);
g_src_line_527 = ((rt_int)0LL);
g_table_528 = NULL;
g_depth_529 = ((rt_int)0LL);
g_scope_stack_530 = NULL;
g_all_types_531 = NULL;
g_serial_532 = ((rt_int)0LL);
g_out_types_533 = NULL;
g_out_helpers_534 = NULL;
g_out_protos_535 = NULL;
g_out_globals_536 = NULL;
g_out_funcs_537 = NULL;
g_out_init_538 = NULL;
g_out_excs_539 = NULL;
g_code_540 = NULL;
g_fields_buf_541 = NULL;
g_in_func_542 = 0;
g_cur_level_543 = ((rt_int)0LL);
g_fctx_544 = NULL;
g_caps_545 = NULL;
g_cap_waits_546 = NULL;
g_psub_547 = NULL;
g_st_field_548 = NULL;
g_out_frames_549 = NULL;
g_func_sym_550 = NULL;
g_exits_551 = NULL;
g_frames_552 = ((rt_int)0LL);
g_handlers_553 = NULL;
g_cleanups_554 = NULL;
g_trial_555 = ((rt_int)0LL);
g_mcopies_556 = NULL;
g_ty_int_557 = NULL;
g_ty_bool_558 = NULL;
g_ty_float_559 = NULL;
g_ty_ascii_560 = NULL;
g_ty_string_561 = NULL;
g_ty_void_562 = NULL;
g_ty_file_563 = NULL;
g_ty_nil_564 = NULL;
g_ty_lock_565 = NULL;
g_ty_latch_566 = NULL;
g_ty_act_567 = NULL;
g_no_cons_568 = NULL;
{ A497 *cell1403 = rt_alloc(sizeof(A497));
rt_int pv1404 = ((rt_int)1000000LL);
(*cell1403).lo = ((rt_int)1LL); (*cell1403).hi = pv1404; (*cell1403).lo2 = 1; (*cell1403).hi2 = 1;
(*cell1403).p = rt_alloc(sizeof(P494) * (size_t)RT_CNT((*cell1403)));
for (rt_int i1405 = 0; i1405 < RT_CNT((*cell1403)); i1405++) {
(*cell1403).p[i1405] = NULL;
}
g_toks_524 = cell1403;
}
{ A515 *cell1406 = rt_alloc(sizeof(A515));
rt_int pv1407 = ((rt_int)4093LL);
(*cell1406).lo = ((rt_int)0LL); (*cell1406).hi = pv1407; (*cell1406).lo2 = 1; (*cell1406).hi2 = 1;
(*cell1406).p = rt_alloc(sizeof(P506) * (size_t)RT_CNT((*cell1406)));
for (rt_int i1408 = 0; i1408 < RT_CNT((*cell1406)); i1408++) {
(*cell1406).p[i1408] = NULL;
}
g_table_528 = cell1406;
}
g_out_types_533 = f_new_buffer_24();
g_out_helpers_534 = f_new_buffer_24();
g_out_protos_535 = f_new_buffer_24();
g_out_globals_536 = f_new_buffer_24();
g_out_funcs_537 = f_new_buffer_24();
g_out_init_538 = f_new_buffer_24();
g_out_excs_539 = f_new_buffer_24();
g_out_frames_549 = f_new_buffer_24();
g_code_540 = g_out_init_538;
g_no_cons_568 = f_new_cons_158();
g_ty_int_557 = f_new_typ_157(((rt_int)1LL));
g_ty_bool_558 = f_new_typ_157(((rt_int)2LL));
g_ty_float_559 = f_new_typ_157(((rt_int)3LL));
g_ty_string_561 = f_new_typ_157(((rt_int)5LL));
g_ty_void_562 = f_new_typ_157(((rt_int)9LL));
g_ty_file_563 = f_new_typ_157(((rt_int)10LL));
g_ty_nil_564 = f_new_typ_157(((rt_int)11LL));
g_ty_lock_565 = f_new_typ_157(((rt_int)13LL));
g_ty_latch_566 = f_new_typ_157(((rt_int)13LL));
g_ty_act_567 = f_new_typ_157(((rt_int)14LL));
{ rt_frame xf1409;
if (RT_TRY(xf1409)) {
f_init_ascii_182();
f_read_source_45();
f_translate_491(f_program_136());
f_print_program_492();
RT_POP(xf1409);
} else {
RT_POP(xf1409);
int x1410 = rt_xcur;
if (0 || x1410 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x1410);
}
}
}
  rt_main_done();
  return 0;
}
