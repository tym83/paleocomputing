#include "paleo.h"
#include <math.h>
typedef rstr *P642;
typedef struct R644 R644;
typedef struct R644 *P643;
struct R644 {  rt_int kind; rt_int line; rt_int ival; P642 s; P642 prags;  };
typedef struct A646 A646;
struct A646 { rt_int lo, hi, lo2, hi2; P643 *p; };
typedef A646 *P645;
typedef struct R648 R648;
typedef struct R648 *P647;
struct R648 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P642 name; P642 tag; P642 prags; P647 labels; P647 a; P647 b; P647 c; P647 d; P647 e; P647 next;  };
typedef struct R650 R650;
typedef struct R650 *P649;
struct R650 {  P642 lo; P642 hi; P642 lo2; P642 hi2; P642 slen; rt_int mlo; rt_int mhi; int hasm; P647 args; int dyn; rt_int lvl; P642 prec;  };
typedef struct R652 R652;
typedef struct R652 *P651;
typedef struct R654 R654;
typedef struct R654 *P653;
struct R654 {  P642 name; P651 t; P649 c; P647 st; P653 next;  };
typedef struct R656 R656;
typedef struct R656 *P655;
typedef struct R658 R658;
typedef struct R658 *P657;
struct R658 {  P642 name; rt_int mode; P651 t; P649 c; P642 cfield; P657 next;  };
typedef struct A660 A660;
struct A660 { rt_int lo, hi, lo2, hi2; P655 *p; };
typedef A660 *P659;
typedef struct R662 R662;
typedef struct R662 *P661;
struct R662 {  rt_int depth; P647 imps; int all_imp; P661 next;  };
typedef struct R664 R664;
typedef struct R664 *P663;
struct R664 {  rt_int kind; rt_int i; P642 s; P651 t;  };
typedef struct R666 R666;
typedef struct R666 *P665;
struct R666 {  P642 s; P665 next;  };
struct R656 {  rt_int kind; P642 name; P651 t; P649 c; P642 access; P642 cname; int ro_flag; rt_int mvalue; int hasmv; P647 st; P647 decl; P657 params; P651 result; rt_int depth; rt_int level; int byref; P655 members; P655 mnext; P647 binds; P655 insts; P659 env; P655 chain; P655 stack; P655 owner; P661 gctx; P663 mv; P665 reqs; int reqdone; P647 home;  };
struct R652 {  rt_int kind; P642 name; P647 lits; P651 elem; P651 idx; P651 idx2; P649 elemcons; P647 elemst; P651 under; P647 tparams; P647 ocap; P653 fields; P651 target; P647 decl; P642 cname; int forward; int defined; int helpers; P655 initp; P655 finalp; P655 tpsyms; P655 gen; P655 gbinds; P651 next;  };
typedef struct R668 R668;
typedef struct R668 *P667;
struct R668 {  P665 head; P665 tail;  };
typedef struct R670 R670;
typedef struct R670 *P669;
struct R670 {  P642 match; P642 label; rt_int depth; P669 next;  };
typedef struct R672 R672;
typedef struct R672 *P671;
struct R672 {  P647 d; P671 next;  };
typedef struct R674 R674;
typedef struct R674 *P673;
struct R674 {  P647 d; P642 w; P673 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P642 result_;
 P642 t_734;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_737;
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
};
struct f_lower_s_15fr { int dummy;
 rstr *s_14;
 rstr result_;
 rstr r_738;
 rt_int i_739;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_743;
 rstr w_744;
 rt_int i_745;
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
 P667 result_;
 P667 b_749;
};
struct f_put_27fr { int dummy;
 P667 b_25;
 rstr *s_26;
 P665 l_751;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P667 b_30;
 P665 l_753;
};
struct f_splice_34fr { int dummy;
 P667 a_32;
 P667 b_33;
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
 P643 t_755;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_757;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_758;
 rt_int k_759;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_763;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_764;
 P642 r_765;
 int more_766;
 rt_int k_767;
 int go_768;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_769;
 rt_int k_770;
 rstr p_771;
 int ok_772;
 int known_773;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_774;
 rt_int j_775;
 rt_int n_776;
 int c_777;
 rstr w_778;
 rt_int k_779;
 rstr w_783;
 rt_int k_784;
 rstr two_788;
};
struct f_read_source_58fr { int dummy;
 rstr line_789;
};
struct f_nn_61fr { int dummy;
 rt_int kind_59;
 rt_int line_60;
 P647 result_;
 P647 x_790;
};
struct f_append_65fr { int dummy;
 P647 *head_62;
 P647 *tail_63;
 P647 x_64;
};
struct f_list_len_67fr { int dummy;
 P647 l_66;
 rt_int result_;
 rt_int n_792;
 P647 p_793;
};
struct f_cur_line_68fr { int dummy;
 rt_int result_;
};
struct f_at_kw_70fr { int dummy;
 rstr *w_69;
 int result_;
};
struct f_at_op_72fr { int dummy;
 rstr *w_71;
 int result_;
};
struct f_at_kind_74fr { int dummy;
 rt_int k_73;
 int result_;
};
struct f_kind_at_76fr { int dummy;
 rt_int k_75;
 rt_int result_;
};
struct f_text_at_78fr { int dummy;
 rt_int k_77;
 P642 result_;
};
struct f_perror_80fr { int dummy;
 rstr *msg_79;
};
struct f_accept_kw_82fr { int dummy;
 rstr *w_81;
 int result_;
};
struct f_accept_op_84fr { int dummy;
 rstr *w_83;
 int result_;
};
struct f_expect_kw_86fr { int dummy;
 rstr *w_85;
};
struct f_expect_op_88fr { int dummy;
 rstr *w_87;
};
struct f_expect_id_89fr { int dummy;
 P642 result_;
};
struct f_name_node_90fr { int dummy;
 P647 result_;
 P647 x_794;
};
struct f_id_list_91fr { int dummy;
 P647 result_;
 P647 head_795;
 P647 tail_796;
};
struct f_p_subtype_92fr { int dummy;
 P647 result_;
 rt_int line_797;
 P647 x_798;
 rstr w_799;
 P647 head_800;
 P647 tail_801;
 P647 head_802;
 P647 tail_803;
 int more_804;
 P647 names_805;
 P647 st_806;
 P647 cmp_807;
 P647 head_808;
 P647 tail_809;
 int more_810;
 P647 lit_811;
};
struct f_actual_params_93fr { int dummy;
 P647 result_;
 P647 head_812;
 P647 tail_813;
};
struct f_is_type_word_95fr { int dummy;
 rstr *w_94;
 int result_;
};
struct f_actual_tt_96fr { int dummy;
 P647 result_;
 P647 head_814;
 P647 tail_815;
 int more_816;
};
struct f_binop_101fr { int dummy;
 P642 op_97;
 P647 l_98;
 P647 r_99;
 rt_int line_100;
 P647 result_;
 P647 x_817;
};
struct f_expr_102fr { int dummy;
 P647 result_;
 P647 l_818;
 P642 op_819;
 rt_int line_820;
};
struct f_expr_and_103fr { int dummy;
 P647 result_;
 P647 l_821;
 rt_int line_822;
};
struct f_expr_not_104fr { int dummy;
 P647 result_;
 P647 x_823;
};
struct f_is_rel_106fr { int dummy;
 rstr *s_105;
 int result_;
};
struct f_expr_rel_107fr { int dummy;
 P647 result_;
 P647 l_824;
 P642 op_825;
 rt_int line_826;
};
struct f_expr_add_108fr { int dummy;
 P647 result_;
 P647 l_827;
 P642 op_828;
 rt_int line_829;
};
struct f_expr_mul_109fr { int dummy;
 P647 result_;
 P647 l_830;
 P642 op_831;
 rt_int line_832;
};
struct f_expr_pow_110fr { int dummy;
 P647 result_;
 P647 l_833;
 rt_int line_834;
};
struct f_expr_prefix_111fr { int dummy;
 P647 result_;
 P647 x_835;
};
struct f_postfix_112fr { int dummy;
 P647 result_;
 P647 p_836;
 rt_int line_837;
 P647 x_838;
 P647 head_839;
 P647 tail_840;
 int more_841;
 P647 lo_842;
 P647 r_843;
 P647 x_844;
 P647 x_845;
 P647 x_846;
};
struct f_primary_113fr { int dummy;
 P647 result_;
 rt_int line_847;
 P647 x_848;
 rt_int k_849;
 rstr w_850;
 P647 head_851;
 P647 tail_852;
 int more_853;
};
struct f_constructor_item_114fr { int dummy;
 P647 result_;
 rt_int line_854;
 P647 it_855;
 P647 first_856;
 P647 keys_857;
 P647 ktail_858;
 P647 lab_859;
 rt_int save_860;
 P647 more_861;
 P647 tail2_862;
 int ok_863;
 int go_864;
 P647 l2_865;
};
struct f_at_body_end_115fr { int dummy;
 int result_;
};
struct f_body_116fr { int dummy;
 P647 result_;
 P647 head_866;
 P647 tail_867;
 int stmts_868;
 P647 after_869;
 P647 x_870;
};
struct f_body_element_117fr { int dummy;
 P647 result_;
 P647 x_871;
 P642 pr_872;
 P647 p_873;
};
struct f_declaration_118fr { int dummy;
 P647 result_;
 rt_int line_874;
 P647 head_875;
 P647 tail_876;
 P647 names_877;
 P647 x_878;
};
struct f_object_decl_119fr { int dummy;
 P647 result_;
 rt_int line_879;
 int is_var_880;
 P647 names_881;
 P647 st_882;
 P647 init_883;
 P647 loc_884;
 rt_int loc_kind_885;
 P647 head_886;
 P647 tail_887;
 P647 x_888;
};
struct f_abbrev_decl_120fr { int dummy;
 P647 result_;
 P647 x_889;
};
struct f_skip_rep_121fr { int dummy;
 rt_int depth_890;
};
struct f_type_decl_122fr { int dummy;
 P647 result_;
 rt_int line_891;
 P642 name_892;
 P647 params_893;
 P647 x_894;
 P647 tts_895;
};
struct f_mode_of_124fr { int dummy;
 rstr *w_123;
 rt_int result_;
};
struct f_formal_params_125fr { int dummy;
 P647 result_;
 P647 head_896;
 P647 tail_897;
 int more_898;
 rt_int mode_899;
 P647 names_900;
 P647 ntail_901;
 P647 st_902;
 P647 p_903;
};
struct f_imports_list_127fr { int dummy;
 P647 owner_126;
 int result_;
 P647 head_904;
 P647 tail_905;
 int more_906;
 int ro_907;
 P647 x_908;
};
struct f_is_definable_129fr { int dummy;
 rstr *w_128;
 int result_;
};
struct f_definable_name_130fr { int dummy;
 P642 result_;
};
struct f_subprogram_decl_131fr { int dummy;
 P647 result_;
 rt_int line_909;
 P647 x_910;
 int is_abn_911;
 int is_func_912;
 int dummy_913;
};
struct f_capsule_decl_132fr { int dummy;
 P647 result_;
 P647 x_914;
 int dummy_915;
 P647 head_916;
 P647 tail_917;
 int more_918;
 P647 n_919;
};
struct f_formal_tt_133fr { int dummy;
 P647 result_;
 P647 head_920;
 P647 tail_921;
 int more_922;
};
struct f_generic_decl_134fr { int dummy;
 P647 result_;
 P647 x_923;
 P647 head_924;
 P647 tail_925;
 int more_926;
 P647 names_927;
 rt_int kind_928;
 P647 st_929;
 P647 p_930;
 P642 nm_931;
 P647 st_932;
};
struct f_task_decl_135fr { int dummy;
 P647 result_;
 P647 x_933;
 int dummy_934;
};
struct f_expose_decl_136fr { int dummy;
 P647 result_;
 P647 x_935;
 P647 head_936;
 P647 tail_937;
 int more_938;
 P647 n_939;
 P647 head_940;
 P647 tail_941;
 int more_942;
 P647 n_943;
 P647 tgt_944;
};
struct f_is_compound_kw_138fr { int dummy;
 rstr *w_137;
 int result_;
};
struct f_statement_139fr { int dummy;
 P647 result_;
 P647 labels_945;
 P647 ltail_946;
 P642 match_947;
 P647 s_948;
};
struct f_unlabeled_statement_140fr { int dummy;
 P647 result_;
 rt_int line_949;
 P647 x_950;
 P647 head_951;
 P647 tail_952;
 P647 invs_953;
 P647 itail_954;
 int more_955;
 P647 target_956;
};
struct f_arm_144fr { int dummy;
 P647 cond_141;
 P647 b_142;
 rt_int line_143;
 P647 result_;
 P647 x_957;
};
struct f_if_stmt_145fr { int dummy;
 P647 result_;
 P647 x_958;
 P647 head_959;
 P647 tail_960;
 P647 cond_961;
 int go_962;
};
struct f_case_stmt_146fr { int dummy;
 P647 result_;
 P647 x_963;
 P647 head_964;
 P647 tail_965;
 P647 labs_966;
 P647 ltail_967;
 int more_968;
 P647 l_969;
};
struct f_repeat_stmt_147fr { int dummy;
 P647 result_;
 P647 x_970;
};
struct f_guard_stmt_148fr { int dummy;
 P647 result_;
 P647 x_971;
 P647 head_972;
 P647 tail_973;
 P647 h_974;
};
struct f_program_149fr { int dummy;
 P647 result_;
 P647 head_975;
 P647 tail_976;
 P642 pr_977;
 P647 u_978;
};
struct f_hash_151fr { int dummy;
 rstr *s_150;
 rt_int result_;
 rt_int h_979;
 rt_int i_980;
};
struct f_lookup_153fr { int dummy;
 rstr *name_152;
 P655 result_;
 P655 y_984;
};
struct f_lookup_decl_155fr { int dummy;
 P647 d_154;
 P655 result_;
 P655 y_985;
};
struct f_define_158fr { int dummy;
 P655 y_156;
 rt_int line_157;
 rt_int h_986;
 P655 z_987;
};
struct f_overloadable_160fr { int dummy;
 P655 y_159;
 int result_;
};
struct f_same_tt_163fr { int dummy;
 P647 a_161;
 P647 b_162;
 int result_;
 P647 x_988;
 P647 y_989;
};
struct f_same_signature_166fr { int dummy;
 P657 a_164;
 P657 b_165;
 int result_;
 P657 x_990;
 P657 y_991;
};
struct f_open_scope_167fr { int dummy;
};
struct f_close_scope_168fr { int dummy;
};
struct f_new_sym_171fr { int dummy;
 rt_int kind_169;
 P642 name_170;
 P655 result_;
 P655 y_992;
};
struct f_new_typ_173fr { int dummy;
 rt_int kind_172;
 P651 result_;
 P651 t_994;
};
struct f_new_cons_174fr { int dummy;
 P649 result_;
 P649 c_996;
};
struct f_scalar_kind_176fr { int dummy;
 P651 t_175;
 int result_;
};
struct f_bound_ctype_178fr { int dummy;
 P651 t_177;
 rstr result_;
};
struct f_cbound_181fr { int dummy;
 P649 c_179;
 rstr *b_180;
 rstr result_;
 P642 p_998;
 rt_int i_999;
};
struct f_clo_183fr { int dummy;
 P649 c_182;
 rstr result_;
};
struct f_chi_185fr { int dummy;
 P649 c_184;
 rstr result_;
};
struct f_sub_lo_188fr { int dummy;
 P651 t_186;
 P649 c_187;
 rstr result_;
};
struct f_sub_hi_191fr { int dummy;
 P651 t_189;
 P649 c_190;
 rstr result_;
};
struct f_raw_storage_194fr { int dummy;
 rstr *name_192;
 rstr *ct_193;
 rstr result_;
 rstr g_1003;
 rstr f_1004;
};
struct f_copy_cons_196fr { int dummy;
 P649 c_195;
 P649 result_;
 P649 r_1005;
};
struct f_freeze_199fr { int dummy;
 P649 c_197;
 P651 t_198;
 P649 result_;
 P649 r_1007;
 P642 saved_field_1008;
 rstr ct_1009;
 rstr la_1010;
 rstr lf_1011;
 rstr ha_1012;
 rstr hf_1013;
};
struct f_checked_203fr { int dummy;
 P651 t_200;
 P649 c_201;
 rstr *v_202;
 rstr result_;
};
struct f_same_lits_206fr { int dummy;
 P647 a_204;
 P647 b_205;
 int result_;
 P647 x_1014;
 P647 y_1015;
};
struct f_same_209fr { int dummy;
 P651 a_207;
 P651 b_208;
 int result_;
 P653 f_1016;
 P653 g_1017;
};
struct f_base_of_211fr { int dummy;
 P651 t_210;
 P651 result_;
};
struct f_base_cons_214fr { int dummy;
 P651 t_212;
 P649 c_213;
 P649 result_;
};
struct f_kind_name_216fr { int dummy;
 P651 t_215;
 rstr result_;
};
struct f_check_type_220fr { int dummy;
 P651 got_217;
 P651 want_218;
 rt_int line_219;
};
struct f_ctype_222fr { int dummy;
 P651 t_221;
 rstr result_;
};
struct f_field_decls_224fr { int dummy;
 P651 t_223;
 rstr result_;
 P653 f_1020;
 P642 s_1021;
};
struct f_declare_ctype_226fr { int dummy;
 P651 t_225;
 P651 u_1022;
 P651 target_1023;
 P647 p_1024;
 P642 fs_1025;
};
struct f_init_ascii_227fr { int dummy;
 P647 head_1026;
 P647 tail_1027;
 rt_int start_1028;
 rt_int i_1029;
 P647 lit_1033;
};
struct f_lit_index_230fr { int dummy;
 P647 lits_228;
 rstr *name_229;
 rt_int result_;
 rt_int i_1034;
 P647 l_1035;
};
struct f_resolve_subtype_233fr { int dummy;
 P647 st_231;
 P649 *c_232;
 P649 c_232v;
 P651 result_;
 P651 t_1036;
 int ok_1037;
 P651 dummy_1038;
 P649 ic_1040;
 P649 ic2_1041;
 P649 ec_1042;
 P651 it_1043;
 P651 et_1044;
 P649 ec_1045;
 P647 comp_1046;
 P653 tail_1047;
 P649 cc_1048;
 P653 f_1049;
 P647 gt_1051;
 P649 ec_1052;
 P655 y_1053;
};
struct f_float_lit_235fr { int dummy;
 P647 e_234;
 int result_;
};
struct f_opened_237fr { int dummy;
 P651 t_236;
 int result_;
 P671 c_1054;
};
struct f_replace_all_241fr { int dummy;
 rstr *s_238;
 rstr *pat_239;
 rstr *r_240;
 rstr result_;
 rt_int i_1055;
};
struct f_subst_243fr { int dummy;
 rstr *s_242;
 rstr result_;
 P665 l_1056;
 P642 r_1057;
};
struct f_new_type_247fr { int dummy;
 P655 y_244;
 P647 st_245;
 P649 *c_246;
 P649 c_246v;
 P651 result_;
 P647 d_1058;
 P647 p_1059;
 P649 uc_1060;
 P655 z_1061;
 P649 zc_1062;
};
struct f_init_storage_251fr { int dummy;
 rstr *lval_248;
 P651 t_249;
 P649 c_250;
};
struct f_init_call_254fr { int dummy;
 P655 y_252;
 rstr *lval_253;
 rstr result_;
 P642 link_1063;
 rt_int i_1064;
};
struct f_needs_fin_256fr { int dummy;
 P651 t_255;
 int result_;
 P653 f_1068;
};
struct f_fin_code_259fr { int dummy;
 rstr *lval_257;
 P651 t_258;
 rstr result_;
 P642 r_1069;
 rstr i_1070;
 P653 f_1071;
};
struct f_tparam_type_262fr { int dummy;
 P651 t_260;
 rstr *name_261;
 P651 result_;
 P655 z_1072;
};
struct f_make_storage_266fr { int dummy;
 rstr *lval_263;
 P651 t_264;
 P649 c_265;
 P647 p_1073;
 P647 a_1074;
 P649 uc_1075;
 P651 ut_1076;
 P651 at_1077;
 P651 pt_1078;
 rstr v_1079;
 P665 saved_1080;
 P665 l1_1081;
 P665 l2_1082;
 rstr i_1085;
 P653 f_1086;
};
struct f_manifest_269fr { int dummy;
 P647 e_267;
 int *ok_268;
 int ok_268v;
 rt_int result_;
 P663 v_1087;
};
struct f_mk_mval_272fr { int dummy;
 rt_int kind_270;
 rt_int i_271;
 P663 result_;
 P663 v_1088;
};
struct f_ipow_275fr { int dummy;
 rt_int a_273;
 rt_int b_274;
 rt_int result_;
 rt_int r_1090;
 rt_int i_1091;
};
struct f_meval_278fr { int dummy;
 P647 e_276;
 int *ok_277;
 int ok_277v;
 P663 result_;
 P663 a_1095;
 P663 b_1096;
 int ok2_1097;
 P642 op_1098;
 P655 y_1099;
 P663 r_1100;
};
struct f_bool_text_280fr { int dummy;
 int b_279;
 rstr result_;
};
struct f_bool_i_282fr { int dummy;
 int b_281;
 rt_int result_;
};
struct f_mstr_284fr { int dummy;
 P663 v_283;
 rstr result_;
};
struct f_ascii_char_286fr { int dummy;
 rt_int i_285;
 int result_;
 rstr printable_1101;
};
struct f_user_defined_288fr { int dummy;
 rstr *op_287;
 int result_;
 P655 y_1102;
};
struct f_mcopy_290fr { int dummy;
 P651 t_289;
 rstr result_;
 rstr ct_1103;
 rstr name_1104;
 P665 l_1105;
};
struct f_composite_292fr { int dummy;
 P651 t_291;
 int result_;
};
struct f_assign_code_297fr { int dummy;
 rstr *lval_293;
 P651 t_294;
 rstr *v_295;
 P649 c_296;
 rstr result_;
};
struct f_copy_code_300fr { int dummy;
 P651 t_298;
 rstr *v_299;
 rstr result_;
};
struct f_eq_code_304fr { int dummy;
 P651 t_301;
 rstr *a_302;
 rstr *b_303;
 rstr result_;
};
struct f_elem_assign_308fr { int dummy;
 rstr *lval_305;
 P651 t_306;
 rstr *v_307;
 rstr result_;
};
struct f_seen_name_311fr { int dummy;
 P665 l_309;
 rstr *s_310;
 int result_;
 P665 p_1107;
};
struct f_emit_helpers_312fr { int dummy;
 P651 order_1108;
 P651 t_1109;
 P665 done_1110;
 P665 l_1111;
 rstr c_1112;
};
struct f_helper_bodies_314fr { int dummy;
 P651 t_313;
 rstr c_1114;
 P667 b_1115;
 P651 e_1116;
 P647 p_1117;
 P642 pc_1118;
 P653 f_1119;
 P642 conds_1120;
 rstr fn_1121;
 rstr fn_1122;
};
struct f_declare_body_316fr { int dummy;
 P647 elems_315;
 P647 e_1123;
 P655 y_1124;
 P655 y_1125;
 P655 y_1126;
 P651 t_1127;
 P655 y_1128;
 P655 y_1129;
 P655 g_1130;
 P659 snap_1131;
 rt_int i_1135;
 P655 g_1139;
 P655 y_1140;
};
struct f_manifest_const_318fr { int dummy;
 P647 d_317;
 int ok_1141;
 P663 v_1142;
 P655 y_1143;
 P651 t_1144;
 P642 ctext_1145;
 P667 saved_1146;
};
struct f_exported_322fr { int dummy;
 P647 d_319;
 rstr *name_320;
 int *ro_321;
 int ro_321v;
 int result_;
 P647 p_1149;
};
struct f_copy_sym_324fr { int dummy;
 P655 y_323;
 P655 result_;
 P655 z_1150;
};
struct f_gen_capsule_326fr { int dummy;
 P647 d_325;
 P655 y_1152;
 P642 saved_1153;
};
struct f_capsule_params_330fr { int dummy;
 P647 d_327;
 P647 args_328;
 rt_int line_329;
 P647 p_1154;
 P647 a_1155;
 P651 t_1156;
 P651 vt_1157;
 P649 c_1158;
 P642 lv_1159;
 P649 lc_1160;
 int ro_1161;
 P655 y_1162;
 rstr f_1163;
 rstr g_1164;
 P655 y_1165;
 rstr v_1166;
 rstr access_1167;
};
struct f_elaborate_capsule_335fr { int dummy;
 P647 d_331;
 P655 y_332;
 P647 args_333;
 P647 owner_334;
 P671 cr_1168;
 P661 ctx_1169;
 P669 saved_gotos_1170;
 P655 m_1171;
 P647 p_1172;
 int ro_1173;
 P673 w_1176;
 P655 z_1178;
};
struct f_exports_op_338fr { int dummy;
 P647 d_336;
 rstr *op_337;
 int result_;
 P647 p_1179;
};
struct f_renamed_341fr { int dummy;
 P647 d_339;
 P655 z_340;
 P642 result_;
 P647 r_1180;
};
struct f_gen_expose_343fr { int dummy;
 P647 d_342;
 P655 y_1181;
 P655 m_1182;
 P647 p_1183;
 P647 r_1184;
 P655 inst_1185;
 int found_1186;
 P655 z_1187;
 int found_1188;
 P655 z_1189;
};
struct f_finish_ptr_345fr { int dummy;
 P651 t_344;
 P647 d_1190;
 P647 p_1191;
 P649 c_1192;
 rstr dummy_1193;
 P655 y_1194;
};
struct f_declare_subprogram_347fr { int dummy;
 P647 d_346;
};
struct f_build_subprogram_349fr { int dummy;
 P647 d_348;
 P655 result_;
 P655 y_1195;
 P647 p_1196;
 P657 tail_1197;
 P657 pm_1198;
 P649 rc_1200;
 P657 pm_1201;
 P667 saved_1202;
 P655 z_1203;
};
struct f_has_pragmat_352fr { int dummy;
 P642 pr_350;
 rstr *p_351;
 int result_;
 rt_int i_1204;
};
struct f_suppressing_354fr { int dummy;
 P642 pr_353;
 P642 result_;
 P642 r_1208;
 rt_int i_1209;
 rt_int j_1210;
 rt_int k_1211;
};
struct f_suppressed_356fr { int dummy;
 rstr *x_355;
 int result_;
 rstr w_1212;
 rt_int i_1213;
};
struct f_element_358fr { int dummy;
 P647 e_357;
 P642 saved_1217;
};
struct f_element1_360fr { int dummy;
 P647 e_359;
 rt_int k_1218;
 P655 g_1219;
 rt_int i_1223;
 P651 t_1227;
 rstr c_1228;
};
struct f_storage_363fr { int dummy;
 rstr *name_361;
 P651 t_362;
 rstr result_;
 rstr g_1229;
 rstr f_1230;
};
struct f_bind_366fr { int dummy;
 P655 y_364;
 rstr *access_365;
};
struct f_var_decl_368fr { int dummy;
 P647 d_367;
 P649 c_1231;
 P651 t_1232;
 P655 y_1233;
 rstr access_1234;
 P651 it_1235;
 rstr n_1236;
 P651 vt_1237;
 rstr v_1238;
};
struct f_open_fin_370fr { int dummy;
 rstr *fc_369;
 rstr f_1239;
 P665 l_1240;
};
struct f_close_fins_372fr { int dummy;
 P665 saved_371;
};
struct f_const_decl_374fr { int dummy;
 P647 d_373;
 P649 c_1242;
 P651 t_1243;
 P651 vt_1244;
 P655 y_1245;
 int ok_1246;
 rstr v_1247;
 rstr access_1248;
};
struct f_subprogram_376fr { int dummy;
 P647 d_375;
};
struct f_gen_subprogram_379fr { int dummy;
 P647 d_377;
 P655 y_378;
 P667 saved_code_1249;
 P667 saved_fields_1250;
 int saved_in_1251;
 P655 saved_sym_1252;
 P669 saved_exits_1253;
 P669 saved_gotos_1254;
 rt_int saved_frames_1255;
 P642 args_1256;
 P657 pm_1257;
 P665 saved_handlers_1258;
 P665 saved_cleanups_1259;
 P661 ctx_1260;
 P642 head_1261;
 P642 frame_1262;
 P642 parent_1263;
 P642 copy_back_1264;
 P642 pfin_1265;
 P665 saved_fins_1266;
 P649 saved_rc_1267;
 P642 saved_ret_1268;
 P642 saved_rflag_1269;
 P647 pn_1270;
 P642 nonrec_end_1271;
 int has_pfin_1272;
 rstr ct_1274;
 rstr f_1275;
 P655 p_1276;
 P649 pc_1277;
 P649 ac_1278;
 P649 fc_1279;
 P651 ft_1280;
 rstr bt_1281;
 P649 rc_1282;
 P651 rt_1283;
 rstr g_1284;
 P642 leave_1285;
};
struct f_waits_of_381fr { int dummy;
 P647 d_380;
 rstr result_;
 P673 w_1286;
};
struct f_task_waits_383fr { int dummy;
 P647 elems_382;
 rstr result_;
 P647 e_1287;
 P642 r_1288;
};
struct f_await_tasks_385fr { int dummy;
 P647 elems_384;
 rstr w_1289;
};
struct f_capsule_elements_387fr { int dummy;
 P647 elems_386;
 P647 e_1290;
};
struct f_declare_labels_389fr { int dummy;
 P647 elems_388;
 P647 e_1291;
 P647 l_1292;
 P669 x_1293;
};
struct f_start_labels_390fr { int dummy;
 P669 x_1295;
};
struct f_goto_label_392fr { int dummy;
 rstr *name_391;
 P669 result_;
 P669 x_1296;
};
struct f_has_return_394fr { int dummy;
 P647 e_393;
 int result_;
 P647 x_1297;
};
struct f_capsule_body_396fr { int dummy;
 P647 elems_395;
 P642 saved_ret_1298;
 P642 saved_flag_1299;
 rt_int saved_frames_1300;
 P647 e_1301;
 int stmt_1302;
};
struct f_body_elements_398fr { int dummy;
 P647 elems_397;
};
struct f_gen_body_400fr { int dummy;
 P647 elems_399;
 P665 saved_1303;
 P669 saved_gotos_1304;
};
struct f_pop_frames_402fr { int dummy;
 rt_int upto_401;
 rt_int i_1305;
 P665 c_1306;
};
struct f_push_cleanup_404fr { int dummy;
 rstr *s_403;
 P665 c_1307;
};
struct f_pop_cleanup_405fr { int dummy;
};
struct f_gen_statement_407fr { int dummy;
 P647 s_406;
 P642 label_1309;
 P647 gl_1310;
 P669 x_1311;
 P669 x_1314;
};
struct f_st_assign_409fr { int dummy;
 P647 s_408;
 P642 lv_1315;
 P651 t_1316;
 P651 vt_1317;
 P649 c_1318;
 int ro_1319;
 rstr lo_1320;
 rstr hi_1321;
 rstr v_1322;
 rstr v_1323;
};
struct f_st_call_411fr { int dummy;
 P647 s_410;
 P647 c_1324;
 P651 t_1325;
 P647 x_1326;
};
struct f_st_if_413fr { int dummy;
 P647 s_412;
 P647 a_1327;
 int first_1328;
 P651 t_1329;
 int taken_1330;
 int ok_1331;
 P663 mv_1332;
 rstr c_1333;
};
struct f_st_case_415fr { int dummy;
 P647 s_414;
 P651 st_1334;
 P651 vt_1335;
 int first_1336;
 P647 a_1337;
 rstr sel_1338;
 rstr tmp_1339;
 P647 lab_1340;
 P642 conds_1341;
 rstr v_1342;
 rstr lo_1343;
 rstr hi_1344;
};
struct f_st_repeat_417fr { int dummy;
 P647 s_416;
 P651 t_1345;
 P649 c_1346;
 rstr cond_1347;
 rstr access_1348;
 rstr lov_1349;
 rstr hiv_1350;
 rstr it_1351;
 P655 y_1352;
};
struct f_st_exit_419fr { int dummy;
 P647 s_418;
 P669 x_1353;
};
struct f_st_return_421fr { int dummy;
 P647 s_420;
 P651 vt_1354;
 rstr v_1355;
};
struct f_result_checked_425fr { int dummy;
 P651 t_422;
 P649 c_423;
 rstr *v_424;
 rstr result_;
};
struct f_exc_id_428fr { int dummy;
 rstr *name_426;
 rt_int line_427;
 rstr result_;
 P655 y_1356;
};
struct f_st_guard_430fr { int dummy;
 P647 s_429;
 P647 h_1357;
 int first_1358;
 P665 hv_1359;
 rstr f_1360;
 rstr x_1361;
 P647 n_1363;
 P642 conds_1364;
};
struct f_st_alloc_432fr { int dummy;
 P647 s_431;
 P642 lv_1365;
 P651 t_1366;
 P651 target_1367;
 P651 vt_1368;
 P649 c_1369;
 P649 tc_1370;
 int ro_1371;
 P647 d_1372;
 P647 p_1373;
 P647 a_1374;
 rstr tcn_1375;
 rstr cell_1376;
 rstr fn_1377;
 rstr v_1378;
 rstr pv_1379;
 P655 y_1380;
 rstr v_1381;
};
struct f_act_ref_434fr { int dummy;
 P647 e_433;
 rstr result_;
 P642 lv_1382;
 P651 t_1383;
 P649 c_1384;
 int ro_1385;
 rstr v_1386;
};
struct f_st_create_436fr { int dummy;
 P647 s_435;
 P655 y_1387;
 P657 pm_1388;
 P647 a_1389;
 P642 lv_1390;
 P651 lt_1391;
 P651 vt_1392;
 P649 lc_1393;
 int ro_1394;
 P651 at_1395;
 P649 ac_1396;
 int aro_1397;
 P642 act_1398;
 rstr nf_1399;
 P642 link_1400;
 rt_int i_1401;
 rstr v_1405;
};
struct f_hidden_var_440fr { int dummy;
 rstr *name_437;
 P651 t_438;
 rstr *place_439;
 P655 y_1406;
};
struct f_user_create_446fr { int dummy;
 P647 s_441;
 P655 y_442;
 rstr *uv_443;
 P651 ut_444;
 rstr *nf_445;
 P651 t_1407;
 P667 saved_1408;
 P667 hook_1409;
 P647 un_1410;
 rstr hn_1411;
 rstr aa_1412;
 rstr uname_1413;
 rstr aname_1414;
 P647 start_1415;
 P647 an_1416;
};
struct f_wait_alt_451fr { int dummy;
 P647 inv_447;
 rstr *arr_448;
 rt_int i_449;
 int mixed_450;
 rstr result_;
 P642 lv_1417;
 P651 t_1418;
 P651 vt_1419;
 P649 c_1420;
 int ro_1421;
 P647 fn_1422;
 P647 args_1423;
 rstr slot_1424;
 P642 dv_1425;
 P651 dt_1426;
 rstr tmp_1427;
 rstr v_1428;
 rstr v_1429;
};
struct f_builtin_wait_453fr { int dummy;
 P647 inv_452;
 int result_;
 P642 lv_1430;
 P651 t_1431;
 P649 c_1432;
 int ro_1433;
 P667 saved_1434;
 int ok_1435;
};
struct f_wait_op_458fr { int dummy;
 P647 inv_454;
 rstr *op_455;
 rstr *q_456;
 int is_stmt_457;
 rstr result_;
 P647 x_1438;
 P647 f_1439;
 P647 qn_1440;
 P651 t_1441;
 rstr r_1442;
};
struct f_user_wait_463fr { int dummy;
 P647 s_459;
 rstr *arr_460;
 rstr *w_461;
 rt_int n_462;
 P647 a_1443;
 rt_int i_1444;
 P642 tests_1445;
 P642 revokes_1446;
 P647 inv_1447;
 P647 st_1448;
 P649 c_1449;
 P651 qt_1450;
 rstr qname_1451;
 P655 y_1452;
 rstr access_1453;
};
struct f_st_wait_465fr { int dummy;
 P647 s_464;
 P647 a_1454;
 rt_int n_1455;
 int first_1456;
 P667 inits_1457;
 int user_1458;
 rstr arr_1459;
 rstr w_1460;
 P647 inv_1461;
 P647 inv_1462;
 P642 conds_1463;
 rt_int i_1464;
};
struct f_call_node_469fr { int dummy;
 rstr *name_466;
 P647 arg_467;
 rt_int line_468;
 P647 result_;
 P647 x_1468;
 P647 f_1469;
};
struct f_user_region_471fr { int dummy;
 P647 s_470;
 P651 t_1470;
 rstr f_1471;
 rstr lock_1472;
 rstr unlock_1473;
};
struct f_st_region_473fr { int dummy;
 P647 s_472;
 P642 lv_1474;
 P651 t_1475;
 P649 c_1476;
 int ro_1477;
 rstr lk_1478;
 rstr f_1479;
};
struct f_gparam_476fr { int dummy;
 P647 g_474;
 rstr *name_475;
 P647 result_;
 P647 p_1480;
};
struct f_bind_sym_478fr { int dummy;
 P647 p_477;
 P655 result_;
 P655 y_1481;
};
struct f_same_binds_481fr { int dummy;
 P655 a_479;
 P655 b_480;
 int result_;
 P655 x_1482;
 P655 y_1483;
};
struct f_same_binding_484fr { int dummy;
 P655 a_482;
 P655 b_483;
 int result_;
};
struct f_tt_binds_489fr { int dummy;
 P647 gd_485;
 P647 formals_486;
 P647 actuals_487;
 rt_int line_488;
 P655 result_;
 P647 f_1484;
 P647 a_1485;
 P655 binds_1486;
 P649 c_1487;
 P651 at_1488;
 P647 p_1489;
 P655 b_1490;
 P647 st_1491;
 int ok_1492;
};
struct f_generic_use_491fr { int dummy;
 P647 st_490;
 int result_;
};
struct f_infer_from_496fr { int dummy;
 P647 gd_492;
 P647 pat_493;
 P651 t_494;
 P655 known_495;
 P655 result_;
 P655 binds_1493;
 P647 e_1494;
 P647 tp_1495;
 P642 nm_1496;
 P655 q_1497;
 int have_1498;
 P655 g_1499;
 P655 b_1500;
};
struct f_instantiate_type_502fr { int dummy;
 P655 g_497;
 P647 tt_498;
 P647 args_499;
 P649 *c_500;
 P649 c_500v;
 rt_int line_501;
 P651 result_;
 P647 gd_1501;
 P647 pat_1502;
 P655 binds_1503;
 P655 inst_1504;
 P651 t_1505;
 P671 saved_caps_1506;
 P659 saved_env_1507;
 rt_int saved_gdepth_1508;
 P655 b_1509;
 P655 y_1510;
 P649 yc_1511;
};
struct f_instantiate_507fr { int dummy;
 P655 g_503;
 P647 tt_504;
 P647 args_505;
 rt_int line_506;
 P655 result_;
 P647 gd_1513;
 P647 pat_1514;
 P655 binds_1515;
 P647 f_1516;
 P647 a_1517;
 P647 fp_1518;
 P655 inst_1519;
 P651 at_1520;
 P649 c_1521;
 P661 saved_fctx_1522;
 int saved_in_1523;
 rt_int saved_level_1524;
 P655 saved_sym_1525;
 P667 saved_code_1526;
 P659 saved_env_1527;
 rt_int saved_gdepth_1528;
 rstr v_1529;
 int known_1530;
 P655 q_1531;
 P655 b_1532;
 rstr v_1533;
 P655 b_1534;
};
struct f_access_of_509fr { int dummy;
 P655 y_508;
 rstr result_;
 P642 p_1535;
 rt_int i_1536;
};
struct f_import_of_512fr { int dummy;
 P647 l_510;
 rstr *name_511;
 P647 result_;
 P647 p_1540;
};
struct f_check_import_515fr { int dummy;
 P655 y_513;
 rt_int line_514;
 int result_;
 P661 c_1541;
 int ro_1542;
 P647 imp_1543;
};
struct f_c_ident_517fr { int dummy;
 rstr *s_516;
 rstr result_;
};
struct f_deref_520fr { int dummy;
 rstr *base_518;
 P651 t_519;
 rstr result_;
};
struct f_is_lvalue_522fr { int dummy;
 P647 e_521;
 int result_;
 P655 y_1544;
};
struct f_lvalue_528fr { int dummy;
 P647 e_523;
 P642 *code_524;
 P642 code_524v;
 P651 *t_525;
 P651 t_525v;
 P649 *c_526;
 P649 c_526v;
 int *ro_527;
 int ro_527v;
 P642 base_1545;
 P651 bt_1546;
 P649 bc_1547;
 P655 y_1548;
};
struct f_select_on_536fr { int dummy;
 rstr *base_529;
 P651 bt_530;
 P647 e_531;
 int *ro_532;
 P642 *code_533;
 P642 code_533v;
 P651 *t_534;
 P651 t_534v;
 P649 *c_535;
 P649 c_535v;
 P647 p_1549;
 P653 f_1550;
};
struct f_ix_540fr { int dummy;
 rstr *i_537;
 rstr *lo_538;
 rstr *hi_539;
 rstr result_;
};
struct f_index_on_549fr { int dummy;
 rstr *base_541;
 P651 bt_542;
 P647 e_543;
 int *ro_544;
 int lv_545;
 P642 *code_546;
 P642 code_546v;
 P651 *t_547;
 P651 t_547v;
 P649 *c_548;
 P649 c_548v;
 P647 a_1551;
 P651 it_1552;
 rstr i_1553;
 rstr j_1554;
 rstr lo_1555;
 rstr hi_1556;
 rstr i_1557;
 rstr i_1558;
};
struct f_own_attribute_551fr { int dummy;
 P647 e_550;
 int result_;
 P667 saved_1559;
 P651 bt_1560;
 int ok_1561;
 rstr base_1564;
 P647 p_1565;
};
struct f_gexpr_555fr { int dummy;
 P647 e_552;
 P651 want_553;
 P651 *t_554;
 P651 t_554v;
 rstr result_;
 rt_int k_1566;
 P642 code_1567;
 P649 c_1568;
 int ro_1569;
 P651 bt_1570;
 rt_int i_1571;
 P655 y_1572;
 int ro_1573;
 P647 call_1574;
 P647 fname_1575;
 rstr a_1576;
 rstr a_1577;
 rstr a_1578;
 P647 nm_1579;
 P655 y_1580;
 rstr base_1581;
 rstr base_1582;
};
struct f_resolved_558fr { int dummy;
 P647 e_556;
 P651 *t_557;
 P651 t_557v;
 rstr result_;
 P649 c_1583;
 P651 vt_1584;
 P655 y_1585;
 P647 tt_1586;
 P647 call_1587;
 P647 f_1588;
 P647 fname_1589;
 rstr v_1590;
};
struct f_copy_node_560fr { int dummy;
 P647 e_559;
 P647 result_;
 P647 x_1591;
};
struct f_wrap_apply_562fr { int dummy;
 P647 e_561;
 P647 result_;
 P647 x_1593;
};
struct f_c_string_564fr { int dummy;
 rstr *s_563;
 rstr result_;
 rt_int n_1594;
 rt_int i_1595;
 rstr r_1599;
 rt_int j_1600;
 rt_int i_1601;
};
struct f_enum_type_of_567fr { int dummy;
 rstr *lit_565;
 rt_int line_566;
 P651 result_;
 P655 y_1605;
 P649 c_1606;
 P647 st_1607;
};
struct f_attribute_570fr { int dummy;
 P647 e_568;
 P651 *t_569;
 P651 t_569v;
 rstr result_;
 P651 bt_1608;
 P649 c_1609;
 P642 base_1610;
 P655 y_1611;
 P647 st_1612;
};
struct f_gbinop_574fr { int dummy;
 P647 e_571;
 P651 want_572;
 P651 *t_573;
 P651 t_573v;
 rstr result_;
 P642 op_1613;
 P651 ta_1614;
 P651 tb_1615;
 P651 hint_1616;
 P655 uy_1617;
 P647 l_1618;
 P647 r_1619;
 P647 call_1620;
 P647 fname_1621;
 rstr s_1622;
 rstr a_1623;
 rstr a_1624;
 rstr b_1625;
 rstr a_1626;
 rstr b_1627;
 P651 wa_1628;
 P651 wb_1629;
 rstr a_1630;
 rstr b_1631;
 rstr dummy_1632;
 rstr a_1633;
 rstr b_1634;
 P651 ct_1635;
 rstr a_1636;
 rstr b_1637;
};
struct f_constructor_578fr { int dummy;
 P647 e_575;
 P651 want_576;
 P651 *t_577;
 P651 t_577v;
 rstr result_;
 P647 it_1638;
 P653 f_1639;
 P651 vt_1640;
 P642 s_1641;
 rstr v_1642;
 rstr tmp_1643;
 rstr ct_1644;
 rstr et_1645;
 P642 parts_1646;
 rstr lo_1647;
 rstr hi_1648;
 rstr v_1649;
 rt_int i_1650;
 rstr v_1654;
 rstr tmp_1655;
 P642 parts_1656;
 rstr v_1657;
};
struct f_fits_581fr { int dummy;
 P655 y_579;
 P647 args_580;
 int result_;
 P647 a_1658;
 P657 pm_1659;
 P651 t_1660;
 P667 saved_1661;
 int ok_1662;
 P642 lv_1663;
 P649 lc_1664;
 int ro_1665;
 rstr v_1668;
};
struct f_resolve_overload_587fr { int dummy;
 rstr *name_582;
 P647 tt_583;
 P647 args_584;
 int is_stmt_585;
 rt_int line_586;
 P655 result_;
 P655 y_1669;
 P655 first_1670;
 rt_int n_1671;
 rt_int pass_1672;
};
struct f_tt_fits_590fr { int dummy;
 P655 y_588;
 P647 tt_589;
 int result_;
 P647 f_1676;
 P647 a_1677;
 P667 saved_1678;
 int ok_1679;
 P649 fc_1682;
 P649 ac_1683;
 P647 fst_1684;
 P651 ft_1685;
 P651 at_1686;
 P647 ast_1687;
};
struct f_overload_chain_593fr { int dummy;
 rstr *name_591;
 rt_int pass_592;
 P655 result_;
};
struct f_is_builtin_595fr { int dummy;
 rstr *n_594;
 int result_;
};
struct f_is_low_level_597fr { int dummy;
 rstr *n_596;
 int result_;
};
struct f_me_high_601fr { int dummy;
 P647 tt_598;
 rt_int line_599;
 P651 *t_600;
 P651 t_600v;
 rstr result_;
 P649 c_1688;
};
struct f_type_tag_603fr { int dummy;
 P651 t_602;
 rstr result_;
};
struct f_lock_ref_606fr { int dummy;
 P647 e_604;
 rstr *name_605;
 rstr result_;
 P642 lv_1689;
 P651 t_1690;
 P649 c_1691;
 int ro_1692;
};
struct f_user_op_609fr { int dummy;
 rstr *op_607;
 P647 args_608;
 P655 result_;
 P655 y_1693;
 rt_int pass_1694;
};
struct f_gcall_613fr { int dummy;
 P647 e_610;
 int is_stmt_611;
 P651 *t_612;
 P651 t_612v;
 rstr result_;
 P647 fn_1698;
 P647 tt_1699;
 P655 y_1700;
 P642 args_1701;
 P647 a_1702;
 P657 pm_1703;
 P651 lt_1704;
 P651 vt_1705;
 P642 lv_1706;
 P649 lc_1707;
 int ro_1708;
 P655 alt_1709;
 rt_int i_1710;
 rstr v_1714;
 rstr ct_1715;
 rstr v_1716;
};
struct f_requires_615fr { int dummy;
 P655 y_614;
 P665 result_;
 P647 imp_1717;
};
struct f_add_req_618fr { int dummy;
 P655 y_616;
 rstr *name_617;
 P665 l_1718;
};
struct f_require_calls_621fr { int dummy;
 P655 y_619;
 P647 e_620;
 P647 x_1720;
 P647 callee_1721;
 P655 z_1722;
 P665 l_1723;
};
struct f_declared_in_624fr { int dummy;
 P647 elems_622;
 rstr *name_623;
 int result_;
 P647 e_1724;
};
struct f_check_requires_627fr { int dummy;
 P655 y_625;
 rt_int line_626;
 P665 l_1725;
 P655 z_1726;
};
struct f_actual_bounds_631fr { int dummy;
 P651 ft_628;
 P651 t_629;
 P649 c_630;
 rstr result_;
};
struct f_builtin_638fr { int dummy;
 rstr *name_632;
 P647 tt_633;
 P647 args_634;
 rt_int line_635;
 int is_stmt_636;
 P651 *t_637;
 P651 t_637v;
 rstr result_;
 P651 at_1727;
 rt_int n_1728;
 rstr a_1729;
 rstr a_1730;
 rstr a_1731;
 rstr a_1732;
 rstr a_1733;
 rstr n1_1734;
 rstr m1_1735;
 rstr a_1736;
 rstr a_1737;
 P647 last_1738;
 rstr a_1739;
 rstr a_1740;
 P642 lv_1741;
 P649 lc_1742;
 int ro_1743;
 P647 last_1744;
 P642 lv_1745;
 P642 dv_1746;
 P649 lc_1747;
 int ro_1748;
 P651 mt_1749;
 P651 dt_1750;
 rstr v_1751;
 P642 lv_1752;
 P649 lc_1753;
 int ro_1754;
 P651 mt_1755;
 P642 lv_1756;
 P642 dv_1757;
 P642 bv_1758;
 P649 lc_1759;
 int ro_1760;
 P651 mt_1761;
 P651 dt_1762;
 P651 bt_1763;
 rstr v_1764;
 rstr v_1765;
 rstr v_1766;
 rstr v_1767;
 rstr a_1768;
 P642 bv_1769;
 P649 bc_1770;
 int ro_1771;
 P651 bt_1772;
 rstr l_1773;
 P642 pv_1774;
 P649 pc_1775;
 int ro_1776;
 P651 pt_1777;
 rstr dev_1778;
 rstr cmd_1779;
 P642 dv_1780;
 P649 dc_1781;
 int ro_1782;
 P651 dt_1783;
};
struct f_translate_640fr { int dummy;
 P647 units_639;
 P647 u_1784;
 P647 l_1786;
 rstr w_1787;
};
struct f_print_program_641fr { int dummy;
};
static void as_R674(R674 *d, R674 s);
static R674 cp_R674(R674 s);
static int eq_R674(R674 a, R674 b);
static void as_R672(R672 *d, R672 s);
static R672 cp_R672(R672 s);
static int eq_R672(R672 a, R672 b);
static void as_R670(R670 *d, R670 s);
static R670 cp_R670(R670 s);
static int eq_R670(R670 a, R670 b);
static void as_R668(R668 *d, R668 s);
static R668 cp_R668(R668 s);
static int eq_R668(R668 a, R668 b);
static void as_R666(R666 *d, R666 s);
static R666 cp_R666(R666 s);
static int eq_R666(R666 a, R666 b);
static void as_R664(R664 *d, R664 s);
static R664 cp_R664(R664 s);
static int eq_R664(R664 a, R664 b);
static void as_R662(R662 *d, R662 s);
static R662 cp_R662(R662 s);
static int eq_R662(R662 a, R662 b);
static void as_A660(A660 *d, A660 s);
static A660 cp_A660(A660 s);
static int eq_A660(A660 a, A660 b);
static void as_R658(R658 *d, R658 s);
static R658 cp_R658(R658 s);
static int eq_R658(R658 a, R658 b);
static void as_R656(R656 *d, R656 s);
static R656 cp_R656(R656 s);
static int eq_R656(R656 a, R656 b);
static void as_R654(R654 *d, R654 s);
static R654 cp_R654(R654 s);
static int eq_R654(R654 a, R654 b);
static void as_R652(R652 *d, R652 s);
static R652 cp_R652(R652 s);
static int eq_R652(R652 a, R652 b);
static void as_R650(R650 *d, R650 s);
static R650 cp_R650(R650 s);
static int eq_R650(R650 a, R650 b);
static void as_R648(R648 *d, R648 s);
static R648 cp_R648(R648 s);
static int eq_R648(R648 a, R648 b);
static void as_A646(A646 *d, A646 s);
static A646 cp_A646(A646 s);
static int eq_A646(A646 a, A646 b);
static void as_R644(R644 *d, R644 s);
static R644 cp_R644(R644 s);
static int eq_R644(R644 a, R644 b);
static P642 f_mk_3(rstr *s_2);
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
static P667 f_new_buffer_24(void);
static void f_put_27(P667 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P667 b_30);
static void f_splice_34(P667 a_32, P667 b_33);
static int f_is_reserved_36(rstr *w_35);
static int f_is_word_op_38(rstr *w_37);
static void f_add_token_42(rt_int kind_39, rstr *s_40, rt_int ival_41);
static rt_int f_ident_end_45(rstr *line_43, rt_int i_44);
static rstr f_upper_s_47(rstr *s_46);
static rt_int f_skip_blanks_50(rstr *line_48, rt_int i_49);
static rt_int f_lex_prag_53(rstr *line_51, rt_int at_52);
static void f_check_pragmats_55(rstr *r_54);
static void f_lex_line_57(rstr *line_56);
static void f_read_source_58(void);
static P647 f_nn_61(rt_int kind_59, rt_int line_60);
static void f_append_65(P647 *head_62, P647 *tail_63, P647 x_64);
static rt_int f_list_len_67(P647 l_66);
static rt_int f_cur_line_68(void);
static int f_at_kw_70(rstr *w_69);
static int f_at_op_72(rstr *w_71);
static int f_at_kind_74(rt_int k_73);
static rt_int f_kind_at_76(rt_int k_75);
static P642 f_text_at_78(rt_int k_77);
static void f_perror_80(rstr *msg_79);
static int f_accept_kw_82(rstr *w_81);
static int f_accept_op_84(rstr *w_83);
static void f_expect_kw_86(rstr *w_85);
static void f_expect_op_88(rstr *w_87);
static P642 f_expect_id_89(void);
static P647 f_name_node_90(void);
static P647 f_id_list_91(void);
static P647 f_p_subtype_92(void);
static P647 f_actual_params_93(void);
static int f_is_type_word_95(rstr *w_94);
static P647 f_actual_tt_96(void);
static P647 f_binop_101(P642 op_97, P647 l_98, P647 r_99, rt_int line_100);
static P647 f_expr_102(void);
static P647 f_expr_and_103(void);
static P647 f_expr_not_104(void);
static int f_is_rel_106(rstr *s_105);
static P647 f_expr_rel_107(void);
static P647 f_expr_add_108(void);
static P647 f_expr_mul_109(void);
static P647 f_expr_pow_110(void);
static P647 f_expr_prefix_111(void);
static P647 f_postfix_112(void);
static P647 f_primary_113(void);
static P647 f_constructor_item_114(void);
static int f_at_body_end_115(void);
static P647 f_body_116(void);
static P647 f_body_element_117(void);
static P647 f_declaration_118(void);
static P647 f_object_decl_119(void);
static P647 f_abbrev_decl_120(void);
static void f_skip_rep_121(void);
static P647 f_type_decl_122(void);
static rt_int f_mode_of_124(rstr *w_123);
static P647 f_formal_params_125(void);
static int f_imports_list_127(P647 owner_126);
static int f_is_definable_129(rstr *w_128);
static P642 f_definable_name_130(void);
static P647 f_subprogram_decl_131(void);
static P647 f_capsule_decl_132(void);
static P647 f_formal_tt_133(void);
static P647 f_generic_decl_134(void);
static P647 f_task_decl_135(void);
static P647 f_expose_decl_136(void);
static int f_is_compound_kw_138(rstr *w_137);
static P647 f_statement_139(void);
static P647 f_unlabeled_statement_140(void);
static P647 f_arm_144(P647 cond_141, P647 b_142, rt_int line_143);
static P647 f_if_stmt_145(void);
static P647 f_case_stmt_146(void);
static P647 f_repeat_stmt_147(void);
static P647 f_guard_stmt_148(void);
static P647 f_program_149(void);
static rt_int f_hash_151(rstr *s_150);
static P655 f_lookup_153(rstr *name_152);
static P655 f_lookup_decl_155(P647 d_154);
static void f_define_158(P655 y_156, rt_int line_157);
static int f_overloadable_160(P655 y_159);
static int f_same_tt_163(P647 a_161, P647 b_162);
static int f_same_signature_166(P657 a_164, P657 b_165);
static void f_open_scope_167(void);
static void f_close_scope_168(void);
static P655 f_new_sym_171(rt_int kind_169, P642 name_170);
static P651 f_new_typ_173(rt_int kind_172);
static P649 f_new_cons_174(void);
static int f_scalar_kind_176(P651 t_175);
static rstr f_bound_ctype_178(P651 t_177);
static rstr f_cbound_181(P649 c_179, rstr *b_180);
static rstr f_clo_183(P649 c_182);
static rstr f_chi_185(P649 c_184);
static rstr f_sub_lo_188(P651 t_186, P649 c_187);
static rstr f_sub_hi_191(P651 t_189, P649 c_190);
static rstr f_raw_storage_194(rstr *name_192, rstr *ct_193);
static P649 f_copy_cons_196(P649 c_195);
static P649 f_freeze_199(P649 c_197, P651 t_198);
static rstr f_checked_203(P651 t_200, P649 c_201, rstr *v_202);
static int f_same_lits_206(P647 a_204, P647 b_205);
static int f_same_209(P651 a_207, P651 b_208);
static P651 f_base_of_211(P651 t_210);
static P649 f_base_cons_214(P651 t_212, P649 c_213);
static rstr f_kind_name_216(P651 t_215);
static void f_check_type_220(P651 got_217, P651 want_218, rt_int line_219);
static rstr f_ctype_222(P651 t_221);
static rstr f_field_decls_224(P651 t_223);
static void f_declare_ctype_226(P651 t_225);
static void f_init_ascii_227(void);
static rt_int f_lit_index_230(P647 lits_228, rstr *name_229);
static P651 f_resolve_subtype_233(P647 st_231, P649 *c_232);
static int f_float_lit_235(P647 e_234);
static int f_opened_237(P651 t_236);
static rstr f_replace_all_241(rstr *s_238, rstr *pat_239, rstr *r_240);
static rstr f_subst_243(rstr *s_242);
static P651 f_new_type_247(P655 y_244, P647 st_245, P649 *c_246);
static void f_init_storage_251(rstr *lval_248, P651 t_249, P649 c_250);
static rstr f_init_call_254(P655 y_252, rstr *lval_253);
static int f_needs_fin_256(P651 t_255);
static rstr f_fin_code_259(rstr *lval_257, P651 t_258);
static P651 f_tparam_type_262(P651 t_260, rstr *name_261);
static void f_make_storage_266(rstr *lval_263, P651 t_264, P649 c_265);
static rt_int f_manifest_269(P647 e_267, int *ok_268);
static P663 f_mk_mval_272(rt_int kind_270, rt_int i_271);
static rt_int f_ipow_275(rt_int a_273, rt_int b_274);
static P663 f_meval_278(P647 e_276, int *ok_277);
static rstr f_bool_text_280(int b_279);
static rt_int f_bool_i_282(int b_281);
static rstr f_mstr_284(P663 v_283);
static int f_ascii_char_286(rt_int i_285);
static int f_user_defined_288(rstr *op_287);
static rstr f_mcopy_290(P651 t_289);
static int f_composite_292(P651 t_291);
static rstr f_assign_code_297(rstr *lval_293, P651 t_294, rstr *v_295, P649 c_296);
static rstr f_copy_code_300(P651 t_298, rstr *v_299);
static rstr f_eq_code_304(P651 t_301, rstr *a_302, rstr *b_303);
static rstr f_elem_assign_308(rstr *lval_305, P651 t_306, rstr *v_307);
static int f_seen_name_311(P665 l_309, rstr *s_310);
static void f_emit_helpers_312(void);
static void f_helper_bodies_314(P651 t_313);
static void f_declare_body_316(P647 elems_315);
static void f_manifest_const_318(P647 d_317);
static int f_exported_322(P647 d_319, rstr *name_320, int *ro_321);
static P655 f_copy_sym_324(P655 y_323);
static void f_gen_capsule_326(P647 d_325);
static void f_capsule_params_330(P647 d_327, P647 args_328, rt_int line_329);
static void f_elaborate_capsule_335(P647 d_331, P655 y_332, P647 args_333, P647 owner_334);
static int f_exports_op_338(P647 d_336, rstr *op_337);
static P642 f_renamed_341(P647 d_339, P655 z_340);
static void f_gen_expose_343(P647 d_342);
static void f_finish_ptr_345(P651 t_344);
static void f_declare_subprogram_347(P647 d_346);
static P655 f_build_subprogram_349(P647 d_348);
static int f_has_pragmat_352(P642 pr_350, rstr *p_351);
static P642 f_suppressing_354(P642 pr_353);
static int f_suppressed_356(rstr *x_355);
static void f_element_358(P647 e_357);
static void f_element1_360(P647 e_359);
static rstr f_storage_363(rstr *name_361, P651 t_362);
static void f_bind_366(P655 y_364, rstr *access_365);
static void f_var_decl_368(P647 d_367);
static void f_open_fin_370(rstr *fc_369);
static void f_close_fins_372(P665 saved_371);
static void f_const_decl_374(P647 d_373);
static void f_subprogram_376(P647 d_375);
static void f_gen_subprogram_379(P647 d_377, P655 y_378);
static rstr f_waits_of_381(P647 d_380);
static rstr f_task_waits_383(P647 elems_382);
static void f_await_tasks_385(P647 elems_384);
static void f_capsule_elements_387(P647 elems_386);
static void f_declare_labels_389(P647 elems_388);
static void f_start_labels_390(void);
static P669 f_goto_label_392(rstr *name_391);
static int f_has_return_394(P647 e_393);
static void f_capsule_body_396(P647 elems_395);
static void f_body_elements_398(P647 elems_397);
static void f_gen_body_400(P647 elems_399);
static void f_pop_frames_402(rt_int upto_401);
static void f_push_cleanup_404(rstr *s_403);
static void f_pop_cleanup_405(void);
static void f_gen_statement_407(P647 s_406);
static void f_st_assign_409(P647 s_408);
static void f_st_call_411(P647 s_410);
static void f_st_if_413(P647 s_412);
static void f_st_case_415(P647 s_414);
static void f_st_repeat_417(P647 s_416);
static void f_st_exit_419(P647 s_418);
static void f_st_return_421(P647 s_420);
static rstr f_result_checked_425(P651 t_422, P649 c_423, rstr *v_424);
static rstr f_exc_id_428(rstr *name_426, rt_int line_427);
static void f_st_guard_430(P647 s_429);
static void f_st_alloc_432(P647 s_431);
static rstr f_act_ref_434(P647 e_433);
static void f_st_create_436(P647 s_435);
static void f_hidden_var_440(rstr *name_437, P651 t_438, rstr *place_439);
static void f_user_create_446(P647 s_441, P655 y_442, rstr *uv_443, P651 ut_444, rstr *nf_445);
static rstr f_wait_alt_451(P647 inv_447, rstr *arr_448, rt_int i_449, int mixed_450);
static int f_builtin_wait_453(P647 inv_452);
static rstr f_wait_op_458(P647 inv_454, rstr *op_455, rstr *q_456, int is_stmt_457);
static void f_user_wait_463(P647 s_459, rstr *arr_460, rstr *w_461, rt_int n_462);
static void f_st_wait_465(P647 s_464);
static P647 f_call_node_469(rstr *name_466, P647 arg_467, rt_int line_468);
static void f_user_region_471(P647 s_470);
static void f_st_region_473(P647 s_472);
static P647 f_gparam_476(P647 g_474, rstr *name_475);
static P655 f_bind_sym_478(P647 p_477);
static int f_same_binds_481(P655 a_479, P655 b_480);
static int f_same_binding_484(P655 a_482, P655 b_483);
static P655 f_tt_binds_489(P647 gd_485, P647 formals_486, P647 actuals_487, rt_int line_488);
static int f_generic_use_491(P647 st_490);
static P655 f_infer_from_496(P647 gd_492, P647 pat_493, P651 t_494, P655 known_495);
static P651 f_instantiate_type_502(P655 g_497, P647 tt_498, P647 args_499, P649 *c_500, rt_int line_501);
static P655 f_instantiate_507(P655 g_503, P647 tt_504, P647 args_505, rt_int line_506);
static rstr f_access_of_509(P655 y_508);
static P647 f_import_of_512(P647 l_510, rstr *name_511);
static int f_check_import_515(P655 y_513, rt_int line_514);
static rstr f_c_ident_517(rstr *s_516);
static rstr f_deref_520(rstr *base_518, P651 t_519);
static int f_is_lvalue_522(P647 e_521);
static void f_lvalue_528(P647 e_523, P642 *code_524, P651 *t_525, P649 *c_526, int *ro_527);
static void f_select_on_536(rstr *base_529, P651 bt_530, P647 e_531, int *ro_532, P642 *code_533, P651 *t_534, P649 *c_535);
static rstr f_ix_540(rstr *i_537, rstr *lo_538, rstr *hi_539);
static void f_index_on_549(rstr *base_541, P651 bt_542, P647 e_543, int *ro_544, int lv_545, P642 *code_546, P651 *t_547, P649 *c_548);
static int f_own_attribute_551(P647 e_550);
static rstr f_gexpr_555(P647 e_552, P651 want_553, P651 *t_554);
static rstr f_resolved_558(P647 e_556, P651 *t_557);
static P647 f_copy_node_560(P647 e_559);
static P647 f_wrap_apply_562(P647 e_561);
static rstr f_c_string_564(rstr *s_563);
static P651 f_enum_type_of_567(rstr *lit_565, rt_int line_566);
static rstr f_attribute_570(P647 e_568, P651 *t_569);
static rstr f_gbinop_574(P647 e_571, P651 want_572, P651 *t_573);
static rstr f_constructor_578(P647 e_575, P651 want_576, P651 *t_577);
static int f_fits_581(P655 y_579, P647 args_580);
static P655 f_resolve_overload_587(rstr *name_582, P647 tt_583, P647 args_584, int is_stmt_585, rt_int line_586);
static int f_tt_fits_590(P655 y_588, P647 tt_589);
static P655 f_overload_chain_593(rstr *name_591, rt_int pass_592);
static int f_is_builtin_595(rstr *n_594);
static int f_is_low_level_597(rstr *n_596);
static rstr f_me_high_601(P647 tt_598, rt_int line_599, P651 *t_600);
static rstr f_type_tag_603(P651 t_602);
static rstr f_lock_ref_606(P647 e_604, rstr *name_605);
static P655 f_user_op_609(rstr *op_607, P647 args_608);
static rstr f_gcall_613(P647 e_610, int is_stmt_611, P651 *t_612);
static P665 f_requires_615(P655 y_614);
static void f_add_req_618(P655 y_616, rstr *name_617);
static void f_require_calls_621(P655 y_619, P647 e_620);
static int f_declared_in_624(P647 elems_622, rstr *name_623);
static void f_check_requires_627(P655 y_625, rt_int line_626);
static rstr f_actual_bounds_631(P651 ft_628, P651 t_629, P649 c_630);
static rstr f_builtin_638(rstr *name_632, P647 tt_633, P647 args_634, rt_int line_635, int is_stmt_636, P651 *t_637);
static void f_translate_640(P647 units_639);
static void f_print_program_641(void);
static int ex_compile_error_1;
static P645 g_toks_675;
static rt_int g_ntoks_676;
static rt_int g_tpos_677;
static rt_int g_src_line_678;
static P642 g_pending_prag_679;
static P659 g_table_680;
static P659 g_genv_681;
static P655 g_all_insts_682;
static rt_int g_depth_683;
static P655 g_scope_stack_684;
static P651 g_all_types_685;
static rt_int g_serial_686;
static P667 g_out_types_687;
static P667 g_out_helpers_688;
static P667 g_out_protos_689;
static P667 g_out_globals_690;
static P667 g_out_funcs_691;
static P667 g_out_init_692;
static P667 g_out_excs_693;
static P667 g_code_694;
static P667 g_fields_buf_695;
static int g_in_func_696;
static rt_int g_cur_level_697;
static P661 g_fctx_698;
static P671 g_caps_699;
static P673 g_cap_waits_700;
static P665 g_psub_701;
static P642 g_st_field_702;
static P667 g_out_frames_703;
static P667 g_out_roots_704;
static int g_uses_free_705;
static P665 g_fins_706;
static int g_uses_findyn_707;
static P655 g_func_sym_708;
static P649 g_func_rc_709;
static P642 g_cap_ret_710;
static P642 g_cap_rflag_711;
static rt_int g_ret_frames_712;
static rt_int g_gdepth_713;
static P642 g_suppress_714;
static P669 g_exits_715;
static P669 g_gotos_716;
static rt_int g_frames_717;
static P665 g_handlers_718;
static P665 g_cleanups_719;
static rt_int g_trial_720;
static P665 g_mcopies_721;
static P651 g_ty_int_722;
static P651 g_ty_bool_723;
static P651 g_ty_float_724;
static P651 g_ty_ascii_725;
static P651 g_ty_string_726;
static P651 g_ty_void_727;
static P651 g_ty_file_728;
static P651 g_ty_nil_729;
static P651 g_ty_lock_730;
static P651 g_ty_latch_731;
static P651 g_ty_act_732;
static P649 g_no_cons_733;
static P642 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_734 = NULL;
{ rstr *cell735 = rt_alloc(sizeof(rstr));
rt_int pv736 = ((*F->s_2)).len;
(*cell735) = rt_str_new(pv736);
rt_str_assign(&(*cell735), (*F->s_2));
F->t_734 = cell735;
}
F->result_ = F->t_734;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chs_5(int c_4) {
  struct f_chs_5fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_4 = c_4;
F->r_737 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_737, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_737;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_itos_7(rt_int n_6) {
  struct f_itos_7fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_6 = n_6;
F->result_ = rt_str_of_int(F->n_6);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_letter_9(int c_8) {
  struct f_is_letter_9fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_8 = c_8;
F->result_ = (((65 <= F->c_8) && (F->c_8 <= 90)) || ((97 <= F->c_8) && (F->c_8 <= 122)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_digit_11(int c_10) {
  struct f_is_digit_11fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_10 = c_10;
F->result_ = ((48 <= F->c_10) && (F->c_10 <= 57));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_upper_13(int c_12) {
  struct f_upper_13fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_12 = c_12;
if (((97 <= F->c_12) && (F->c_12 <= 122))) {
F->result_ = rt_str_get((rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26)), rt_add(rt_sub(((rt_int)(F->c_12) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
goto ret_;
}
F->result_ = F->c_12;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lower_s_15(rstr *s_14) {
  struct f_lower_s_15fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_14 = s_14;
F->r_738 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_738, (*F->s_14));
{ rt_int lo740 = ((rt_int)1LL), hi741 = ((*F->s_14)).len;
for (rt_int it742 = lo740; it742 <= hi741; it742++) {
F->i_739 = it742;
if (((65 <= rt_str_get(F->r_738, F->i_739)) && (rt_str_get(F->r_738, F->i_739) <= 90))) {
(*rt_str_at(&F->r_738, F->i_739)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_str_get(F->r_738, F->i_739)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_738;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_field_c_17(rstr *s_16) {
  struct f_field_c_17fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_16 = s_16;
F->l_743 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_744 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_743), rt_str(" ", 1)));
{ rt_int lo746 = ((rt_int)1LL), hi747 = rt_add(rt_sub(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len, (F->w_744).len), ((rt_int)1LL));
for (rt_int it748 = lo746; it748 <= hi747; it748++) {
F->i_745 = it748;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_745, rt_sub(rt_add(F->i_745, (F->w_744).len), ((rt_int)1LL))), F->w_744)) {
F->result_ = rt_str_cat(F->l_743, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_743;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_q_18(void) {
  struct f_q_18fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = f_chs_5(34);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_new_name_20(rstr *base_19) {
  struct f_new_name_20fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_19 = base_19;
g_serial_686 = rt_add(g_serial_686, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_686));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_fail_23(rt_int line_21, rstr *msg_22) {
  struct f_fail_23fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_21 = line_21;
F->msg_22 = msg_22;
if ((g_trial_720 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P667 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_749 = NULL;
{ R668 *cell750 = rt_alloc(sizeof(R668));
(*cell750).head = NULL;
(*cell750).tail = NULL;
F->b_749 = cell750;
}
F->result_ = F->b_749;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P667 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_751 = NULL;
{ R666 *cell752 = rt_alloc(sizeof(R666));
(*cell752).s = NULL;
(*cell752).next = NULL;
F->l_751 = cell752;
}
(*(P665)rt_nil_check(F->l_751)).s = f_mk_3(&(*F->s_26));
if (((*(P667)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P667)rt_nil_check(F->b_25)).head = F->l_751;
} else {
(*(P665)rt_nil_check((*(P667)rt_nil_check(F->b_25)).tail)).next = F->l_751;
}
(*(P667)rt_nil_check(F->b_25)).tail = F->l_751;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_694, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P667 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_753 = NULL;
F->l_753 = (*(P667)rt_nil_check(F->b_30)).head;
while ((F->l_753 != NULL)) {
rt_putln((*(P642)rt_nil_check((*(P665)rt_nil_check(F->l_753)).s)));
F->l_753 = (*(P665)rt_nil_check(F->l_753)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P667 a_32, P667 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P667)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P667)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P667)rt_nil_check(F->a_32)).head = (*(P667)rt_nil_check(F->b_33)).head;
} else {
(*(P665)rt_nil_check((*(P667)rt_nil_check(F->a_32)).tail)).next = (*(P667)rt_nil_check(F->b_33)).head;
}
(*(P667)rt_nil_check(F->a_32)).tail = (*(P667)rt_nil_check(F->b_33)).tail;
(*(P667)rt_nil_check(F->b_33)).head = NULL;
(*(P667)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel754 = (*F->w_35);
if (0 || rt_str_eq(sel754, rt_str("ABBREV", 6)) || rt_str_eq(sel754, rt_str("ABNORMAL", 8)) || rt_str_eq(sel754, rt_str("ALL", 3)) || rt_str_eq(sel754, rt_str("ALLOC", 5)) || rt_str_eq(sel754, rt_str("ASSERT", 6)) || rt_str_eq(sel754, rt_str("BEGIN", 5)) || rt_str_eq(sel754, rt_str("BY", 2)) || rt_str_eq(sel754, rt_str("CAPSULE", 7)) || rt_str_eq(sel754, rt_str("CASE", 4)) || rt_str_eq(sel754, rt_str("CONST", 5)) || rt_str_eq(sel754, rt_str("CREATE", 6)) || rt_str_eq(sel754, rt_str("DO", 2)) || rt_str_eq(sel754, rt_str("ELSE", 4)) || rt_str_eq(sel754, rt_str("ELSEIF", 6)) || rt_str_eq(sel754, rt_str("END", 3)) || rt_str_eq(sel754, rt_str("EXCEPTION", 9)) || rt_str_eq(sel754, rt_str("EXIT", 4)) || rt_str_eq(sel754, rt_str("EXPORTS", 7)) || rt_str_eq(sel754, rt_str("EXPOSE", 6)) || rt_str_eq(sel754, rt_str("EXTERNAL", 8)) || rt_str_eq(sel754, rt_str("FOR", 3)) || rt_str_eq(sel754, rt_str("FROM", 4)) || rt_str_eq(sel754, rt_str("FUNC", 4)) || rt_str_eq(sel754, rt_str("GENERIC", 7)) || rt_str_eq(sel754, rt_str("GOTO", 4)) || rt_str_eq(sel754, rt_str("GUARD", 5)) || rt_str_eq(sel754, rt_str("IF", 2)) || rt_str_eq(sel754, rt_str("IMPORTS", 7)) || rt_str_eq(sel754, rt_str("LOCATION", 8)) || rt_str_eq(sel754, rt_str("NAMED", 5)) || rt_str_eq(sel754, rt_str("NEEDS", 5)) || rt_str_eq(sel754, rt_str("NEW", 3)) || rt_str_eq(sel754, rt_str("NONE", 4)) || rt_str_eq(sel754, rt_str("OUT", 3)) || rt_str_eq(sel754, rt_str("OF", 2)) || rt_str_eq(sel754, rt_str("PRAG", 4)) || rt_str_eq(sel754, rt_str("PROC", 4)) || rt_str_eq(sel754, rt_str("RAISE", 5)) || rt_str_eq(sel754, rt_str("READONLY", 8)) || rt_str_eq(sel754, rt_str("REVERSE", 7)) || rt_str_eq(sel754, rt_str("REGION", 6)) || rt_str_eq(sel754, rt_str("RENAMING", 8)) || rt_str_eq(sel754, rt_str("REP", 3)) || rt_str_eq(sel754, rt_str("REPEAT", 6)) || rt_str_eq(sel754, rt_str("RERAISE", 7)) || rt_str_eq(sel754, rt_str("RETURN", 6)) || rt_str_eq(sel754, rt_str("SUBTYPE", 7)) || rt_str_eq(sel754, rt_str("TASK", 4)) || rt_str_eq(sel754, rt_str("THEN", 4)) || rt_str_eq(sel754, rt_str("TO", 2)) || rt_str_eq(sel754, rt_str("TYPE", 4)) || rt_str_eq(sel754, rt_str("VAR", 3)) || rt_str_eq(sel754, rt_str("WAIT", 4)) || rt_str_eq(sel754, rt_str("WHEN", 4)) || rt_str_eq(sel754, rt_str("WHILE", 5))) {
F->result_ = 1;
goto ret_;
} else {
F->result_ = 0;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_word_op_38(rstr *w_37) {
  struct f_is_word_op_38fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_37 = w_37;
F->result_ = ((((((rt_str_eq((*F->w_37), rt_str("DIV", 3)) || rt_str_eq((*F->w_37), rt_str("MOD", 3))) || rt_str_eq((*F->w_37), rt_str("IN", 2))) || rt_str_eq((*F->w_37), rt_str("OR", 2))) || rt_str_eq((*F->w_37), rt_str("XOR", 3))) || rt_str_eq((*F->w_37), rt_str("AND", 3))) || rt_str_eq((*F->w_37), rt_str("NOT", 3)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_token_42(rt_int kind_39, rstr *s_40, rt_int ival_41) {
  struct f_add_token_42fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_39 = kind_39;
F->s_40 = s_40;
F->ival_41 = ival_41;
F->t_755 = NULL;
{ R644 *cell756 = rt_alloc(sizeof(R644));
(*cell756).s = NULL;
(*cell756).prags = NULL;
F->t_755 = cell756;
}
(*(P643)rt_nil_check(F->t_755)).kind = F->kind_39;
(*(P643)rt_nil_check(F->t_755)).line = g_src_line_678;
(*(P643)rt_nil_check(F->t_755)).ival = F->ival_41;
(*(P643)rt_nil_check(F->t_755)).s = f_mk_3(&(*F->s_40));
(*(P643)rt_nil_check(F->t_755)).prags = g_pending_prag_679;
g_pending_prag_679 = NULL;
g_ntoks_676 = rt_add(g_ntoks_676, ((rt_int)1LL));
(*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_ntoks_676, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo] = F->t_755;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_757 = rt_add(F->i_44, ((rt_int)1LL));
while (((F->j_757 <= ((*F->line_43)).len) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_757)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_757))) || (rt_str_get((*F->line_43), F->j_757) == 95)))) {
if (((rt_str_get((*F->line_43), F->j_757) == 95) && ((F->j_757 == ((*F->line_43)).len) || (!(f_is_letter_9(rt_str_get((*F->line_43), rt_add(F->j_757, ((rt_int)1LL)))) || f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_757, ((rt_int)1LL))))))))) {
f_fail_23(g_src_line_678, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_757 = rt_add(F->j_757, ((rt_int)1LL));
}
F->result_ = F->j_757;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_upper_s_47(rstr *s_46) {
  struct f_upper_s_47fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_46 = s_46;
F->w_758 = rt_str_new(((*F->s_46)).len);
rt_str_assign(&F->w_758, (*F->s_46));
{ rt_int lo760 = ((rt_int)1LL), hi761 = (F->w_758).len;
for (rt_int it762 = lo760; it762 <= hi761; it762++) {
F->k_759 = it762;
(*rt_str_at(&F->w_758, F->k_759)) = f_upper_13(rt_str_get(F->w_758, F->k_759));
}
}
F->result_ = F->w_758;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_skip_blanks_50(rstr *line_48, rt_int i_49) {
  struct f_skip_blanks_50fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_48 = line_48;
F->i_49 = i_49;
F->j_763 = F->i_49;
while (((F->j_763 <= ((*F->line_48)).len) && ((rt_str_get((*F->line_48), F->j_763) == 32) || (rt_str_get((*F->line_48), F->j_763) == 9)))) {
F->j_763 = rt_add(F->j_763, ((rt_int)1LL));
}
F->result_ = F->j_763;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_lex_prag_53(rstr *line_51, rt_int at_52) {
  struct f_lex_prag_53fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_51 = line_51;
F->at_52 = at_52;
F->j_764 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_765 = NULL;
F->r_765 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_766 = 1;
if (((F->j_764 > ((*F->line_51)).len) || (rt_str_get((*F->line_51), F->j_764) != 40))) {
f_fail_23(g_src_line_678, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_764 = rt_add(F->j_764, ((rt_int)1LL));
while (F->more_766) {
F->j_764 = f_skip_blanks_50(&(*F->line_51), F->j_764);
if (((F->j_764 > ((*F->line_51)).len) || (!f_is_letter_9(rt_str_get((*F->line_51), F->j_764))))) {
f_fail_23(g_src_line_678, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_767 = f_ident_end_45(&(*F->line_51), F->j_764);
F->r_765 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->r_765)), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), F->j_764, rt_sub(F->k_767, ((rt_int)1LL))); b_; }))); b_; }));
F->j_764 = f_skip_blanks_50(&(*F->line_51), F->k_767);
if (((F->j_764 <= ((*F->line_51)).len) && (rt_str_get((*F->line_51), F->j_764) == 40))) {
F->go_768 = 1;
F->r_765 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->r_765)), rt_str("(", 1)); b_; }));
F->j_764 = rt_add(F->j_764, ((rt_int)1LL));
while (F->go_768) {
F->j_764 = f_skip_blanks_50(&(*F->line_51), F->j_764);
if (((F->j_764 > ((*F->line_51)).len) || (!f_is_letter_9(rt_str_get((*F->line_51), F->j_764))))) {
f_fail_23(g_src_line_678, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_767 = f_ident_end_45(&(*F->line_51), F->j_764);
F->r_765 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->r_765)), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), F->j_764, rt_sub(F->k_767, ((rt_int)1LL))); b_; }))); b_; }));
F->j_764 = f_skip_blanks_50(&(*F->line_51), F->k_767);
if (((F->j_764 <= ((*F->line_51)).len) && (rt_str_get((*F->line_51), F->j_764) == 44))) {
F->r_765 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->r_765)), rt_str(",", 1)); b_; }));
F->j_764 = rt_add(F->j_764, ((rt_int)1LL));
} else if (((F->j_764 <= ((*F->line_51)).len) && (rt_str_get((*F->line_51), F->j_764) == 41))) {
F->j_764 = rt_add(F->j_764, ((rt_int)1LL));
F->go_768 = 0;
} else {
f_fail_23(g_src_line_678, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_765 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->r_765)), rt_str(")", 1)); b_; }));
}
F->r_765 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->r_765)), rt_str(";", 1)); b_; }));
F->j_764 = f_skip_blanks_50(&(*F->line_51), F->j_764);
if (((F->j_764 <= ((*F->line_51)).len) && (rt_str_get((*F->line_51), F->j_764) == 44))) {
F->j_764 = rt_add(F->j_764, ((rt_int)1LL));
} else if (((F->j_764 <= ((*F->line_51)).len) && (rt_str_get((*F->line_51), F->j_764) == 41))) {
F->j_764 = rt_add(F->j_764, ((rt_int)1LL));
F->more_766 = 0;
} else {
f_fail_23(g_src_line_678, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(*(P642)rt_nil_check(F->r_765)));
if ((g_pending_prag_679 == NULL)) {
g_pending_prag_679 = F->r_765;
} else {
g_pending_prag_679 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(g_pending_prag_679)), (*(P642)rt_nil_check(F->r_765))); b_; }));
}
F->result_ = F->j_764;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_pragmats_55(rstr *r_54) {
  struct f_check_pragmats_55fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->r_54 = r_54;
F->i_769 = ((rt_int)1LL);
while ((F->i_769 <= ((*F->r_54)).len)) {
F->k_770 = F->i_769;
while ((rt_str_get((*F->r_54), F->k_770) != 59)) {
F->k_770 = rt_add(F->k_770, ((rt_int)1LL));
}
{
F->p_771 = rt_str_copy(rt_str_slice((*F->r_54), F->i_769, rt_sub(F->k_770, ((rt_int)1LL))));
F->ok_772 = ((((((((((rt_str_eq(F->p_771, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_771, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_771, rt_str("OPEN", 4))) || rt_str_eq(F->p_771, rt_str("CLOSED", 6))) || rt_str_eq(F->p_771, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_771, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_771, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_771, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_771, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_771, rt_str("OK(SHARE)", 9))) || (((F->p_771).len > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_771, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_773 = (((((((((F->p_771).len >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_771, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_771, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_771, rt_str("OPEN", 4))) || rt_str_eq(F->p_771, rt_str("CLOSED", 6))) || (((F->p_771).len >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_771, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_771, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_771, rt_str("NONREENTRANT", 12))) || (((F->p_771).len >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_771, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_773 && (!F->ok_772))) {
f_fail_23(g_src_line_678, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_771); b_; }));
}
}
F->i_769 = rt_add(F->k_770, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_774 = ((rt_int)1LL);
F->j_775 = ((rt_int)0LL);
F->n_776 = ((*F->line_56)).len;
while ((F->i_774 <= F->n_776)) {
F->c_777 = rt_str_get((*F->line_56), F->i_774);
if (((((F->c_777 == 32) || (F->c_777 == 9)) || (F->c_777 == 13)) || (F->c_777 == 12))) {
F->i_774 = rt_add(F->i_774, ((rt_int)1LL));
} else if ((F->c_777 == 37)) {
F->i_774 = rt_add(F->n_776, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_777)) {
F->j_775 = f_ident_end_45(&(*F->line_56), F->i_774);
{
F->w_778 = rt_str_new(rt_sub(F->j_775, F->i_774));
rt_str_assign(&F->w_778, rt_str_slice((*F->line_56), F->i_774, rt_sub(F->j_775, ((rt_int)1LL))));
{ rt_int lo780 = ((rt_int)1LL), hi781 = (F->w_778).len;
for (rt_int it782 = lo780; it782 <= hi781; it782++) {
F->k_779 = it782;
(*rt_str_at(&F->w_778, F->k_779)) = f_upper_13(rt_str_get(F->w_778, F->k_779));
}
}
if (rt_str_eq(F->w_778, rt_str("PRAGMAT", 7))) {
while (((F->j_775 <= F->n_776) && (rt_str_get((*F->line_56), F->j_775) != 59))) {
F->j_775 = rt_add(F->j_775, ((rt_int)1LL));
}
F->j_775 = rt_add(F->j_775, ((rt_int)1LL));
} else if (rt_str_eq(F->w_778, rt_str("PRAG", 4))) {
F->j_775 = f_lex_prag_53(&(*F->line_56), F->j_775);
} else if (f_is_reserved_36(&F->w_778)) {
f_add_token_42((((rt_int)2LL)), &F->w_778, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_778)) {
f_add_token_42((((rt_int)3LL)), &F->w_778, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_778, ((rt_int)0LL));
}
}
F->i_774 = F->j_775;
} else if (f_is_digit_11(F->c_777)) {
F->j_775 = F->i_774;
while (((F->j_775 <= F->n_776) && f_is_digit_11(rt_str_get((*F->line_56), F->j_775)))) {
F->j_775 = rt_add(F->j_775, ((rt_int)1LL));
}
if ((((F->j_775 < F->n_776) && (rt_str_get((*F->line_56), F->j_775) == 46)) && f_is_digit_11(rt_str_get((*F->line_56), rt_add(F->j_775, ((rt_int)1LL)))))) {
F->j_775 = rt_add(F->j_775, ((rt_int)1LL));
while (((F->j_775 <= F->n_776) && f_is_digit_11(rt_str_get((*F->line_56), F->j_775)))) {
F->j_775 = rt_add(F->j_775, ((rt_int)1LL));
}
if (((F->j_775 <= F->n_776) && ((rt_str_get((*F->line_56), F->j_775) == 69) || (rt_str_get((*F->line_56), F->j_775) == 101)))) {
F->j_775 = rt_add(F->j_775, ((rt_int)1LL));
if (((F->j_775 <= F->n_776) && ((rt_str_get((*F->line_56), F->j_775) == 43) || (rt_str_get((*F->line_56), F->j_775) == 45)))) {
F->j_775 = rt_add(F->j_775, ((rt_int)1LL));
}
while (((F->j_775 <= F->n_776) && f_is_digit_11(rt_str_get((*F->line_56), F->j_775)))) {
F->j_775 = rt_add(F->j_775, ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), F->i_774, rt_sub(F->j_775, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), F->i_774, rt_sub(F->j_775, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), F->i_774, rt_sub(F->j_775, ((rt_int)1LL)))));
}
F->i_774 = F->j_775;
} else if ((((F->c_777 == 39) && (F->i_774 < F->n_776)) && (rt_str_get((*F->line_56), rt_add(F->i_774, ((rt_int)1LL))) == 39))) {
F->j_775 = rt_add(F->i_774, ((rt_int)2LL));
while (((F->j_775 < F->n_776) && (!((rt_str_get((*F->line_56), F->j_775) == 39) && (rt_str_get((*F->line_56), rt_add(F->j_775, ((rt_int)1LL))) == 39))))) {
if ((rt_str_get((*F->line_56), F->j_775) == 34)) {
f_fail_23(g_src_line_678, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_775 = rt_add(F->j_775, ((rt_int)1LL));
}
if ((F->j_775 >= F->n_776)) {
f_fail_23(g_src_line_678, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(F->i_774, ((rt_int)2LL)), rt_sub(F->j_775, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_774 = rt_add(F->j_775, ((rt_int)2LL));
} else if ((F->c_777 == 39)) {
F->j_775 = rt_add(F->i_774, ((rt_int)1LL));
if (((F->j_775 > F->n_776) || (!f_is_letter_9(rt_str_get((*F->line_56), F->j_775))))) {
f_fail_23(g_src_line_678, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_775 = f_ident_end_45(&(*F->line_56), F->j_775);
{
F->w_783 = rt_str_new(rt_sub(rt_sub(F->j_775, F->i_774), ((rt_int)1LL)));
rt_str_assign(&F->w_783, rt_str_slice((*F->line_56), rt_add(F->i_774, ((rt_int)1LL)), rt_sub(F->j_775, ((rt_int)1LL))));
{ rt_int lo785 = ((rt_int)1LL), hi786 = (F->w_783).len;
for (rt_int it787 = lo785; it787 <= hi786; it787++) {
F->k_784 = it787;
(*rt_str_at(&F->w_783, F->k_784)) = f_upper_13(rt_str_get(F->w_783, F->k_784));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_783, ((rt_int)0LL));
}
F->i_774 = F->j_775;
} else if ((F->c_777 == 34)) {
F->j_775 = rt_add(F->i_774, ((rt_int)1LL));
while (((F->j_775 <= F->n_776) && (rt_str_get((*F->line_56), F->j_775) != 34))) {
if ((rt_str_get((*F->line_56), F->j_775) == 39)) {
f_fail_23(g_src_line_678, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_775 = rt_add(F->j_775, ((rt_int)1LL));
}
if ((F->j_775 > F->n_776)) {
f_fail_23(g_src_line_678, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(F->i_774, ((rt_int)1LL)), rt_sub(F->j_775, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_774 = rt_add(F->j_775, ((rt_int)1LL));
} else {
{
F->two_788 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_788, rt_str("  ", 2));
(*rt_str_at(&F->two_788, ((rt_int)1LL))) = F->c_777;
if ((F->i_774 < F->n_776)) {
(*rt_str_at(&F->two_788, ((rt_int)2LL))) = rt_str_get((*F->line_56), rt_add(F->i_774, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_788, rt_str(":=", 2)) || rt_str_eq(F->two_788, rt_str("=>", 2))) || rt_str_eq(F->two_788, rt_str("..", 2))) || rt_str_eq(F->two_788, rt_str("**", 2))) || rt_str_eq(F->two_788, rt_str("/=", 2))) || rt_str_eq(F->two_788, rt_str("<=", 2))) || rt_str_eq(F->two_788, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_788, ((rt_int)0LL));
F->i_774 = rt_add(F->i_774, ((rt_int)2LL));
} else if (((rt_str_eq(F->two_788, rt_str("<<", 2)) || rt_str_eq(F->two_788, rt_str(">>", 2))) || rt_str_eq(F->two_788, rt_str("::", 2)))) {
if (rt_str_eq(F->two_788, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_788, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_774 = rt_add(F->i_774, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_777 == 40) || (F->c_777 == 41)) || (F->c_777 == 91)) || (F->c_777 == 93)) || (F->c_777 == 44)) || (F->c_777 == 58)) || (F->c_777 == 59)) || (F->c_777 == 46)) || (F->c_777 == 35)) || (F->c_777 == 43)) || (F->c_777 == 45)) || (F->c_777 == 42)) || (F->c_777 == 47)) || (F->c_777 == 38)) || (F->c_777 == 61)) || (F->c_777 == 60)) || (F->c_777 == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_777); b_; }), ((rt_int)0LL));
F->i_774 = rt_add(F->i_774, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_678, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
}
}
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_read_source_58(void) {
  struct f_read_source_58fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while ((!rt_eof())) {
F->line_789 = rt_str_new(rt_sizeln());
rt_readln(&F->line_789);
g_src_line_678 = rt_add(g_src_line_678, ((rt_int)1LL));
f_lex_line_57(&F->line_789);
}
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P647 f_nn_61(rt_int kind_59, rt_int line_60) {
  struct f_nn_61fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_59 = kind_59;
F->line_60 = line_60;
F->x_790 = NULL;
{ R648 *cell791 = rt_alloc(sizeof(R648));
(*cell791).name = NULL;
(*cell791).tag = NULL;
(*cell791).prags = NULL;
(*cell791).labels = NULL;
(*cell791).a = NULL;
(*cell791).b = NULL;
(*cell791).c = NULL;
(*cell791).d = NULL;
(*cell791).e = NULL;
(*cell791).next = NULL;
F->x_790 = cell791;
}
(*(P647)rt_nil_check(F->x_790)).kind = F->kind_59;
(*(P647)rt_nil_check(F->x_790)).line = F->line_60;
F->result_ = F->x_790;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_65(P647 *head_62, P647 *tail_63, P647 x_64) {
  struct f_append_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_62 = head_62;
F->tail_63 = tail_63;
F->x_64 = x_64;
if (((*F->head_62) == NULL)) {
(*F->head_62) = F->x_64;
} else {
(*(P647)rt_nil_check((*F->tail_63))).next = F->x_64;
}
(*F->tail_63) = F->x_64;
while (((*(P647)rt_nil_check((*F->tail_63))).next != NULL)) {
(*F->tail_63) = (*(P647)rt_nil_check((*F->tail_63))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_67(P647 l_66) {
  struct f_list_len_67fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_66 = l_66;
F->n_792 = ((rt_int)0LL);
F->p_793 = NULL;
F->p_793 = F->l_66;
while ((F->p_793 != NULL)) {
F->n_792 = rt_add(F->n_792, ((rt_int)1LL));
F->p_793 = (*(P647)rt_nil_check(F->p_793)).next;
}
F->result_ = F->n_792;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_68(void) {
  struct f_cur_line_68fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_at_kw_70(rstr *w_69) {
  struct f_at_kw_70fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_69 = w_69;
F->result_ = (((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).kind == (((rt_int)2LL))) && rt_str_eq((*(P642)rt_nil_check((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s)), (*F->w_69)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_at_op_72(rstr *w_71) {
  struct f_at_op_72fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_71 = w_71;
F->result_ = (((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).kind == (((rt_int)3LL))) && rt_str_eq((*(P642)rt_nil_check((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s)), (*F->w_71)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_at_kind_74(rt_int k_73) {
  struct f_at_kind_74fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_73 = k_73;
F->result_ = ((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).kind == F->k_73);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_kind_at_76(rt_int k_75) {
  struct f_kind_at_76fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_75 = k_75;
if ((rt_add(g_tpos_677, F->k_75) > g_ntoks_676)) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(rt_add(g_tpos_677, F->k_75), (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P642 f_text_at_78(rt_int k_77) {
  struct f_text_at_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_77 = k_77;
if ((rt_add(g_tpos_677, F->k_77) > g_ntoks_676)) {
F->result_ = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_ntoks_676, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s;
goto ret_;
}
F->result_ = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(rt_add(g_tpos_677, F->k_77), (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_perror_80(rstr *msg_79) {
  struct f_perror_80fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->msg_79 = msg_79;
f_fail_23((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_79), rt_str(" (at ", 5)), (*(P642)rt_nil_check((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_82(rstr *w_81) {
  struct f_accept_kw_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_81 = w_81;
if (f_at_kw_70(&(*F->w_81))) {
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_accept_op_84(rstr *w_83) {
  struct f_accept_op_84fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_83 = w_83;
if (f_at_op_72(&(*F->w_83))) {
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_expect_kw_86(rstr *w_85) {
  struct f_expect_kw_86fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_85 = w_85;
if ((!f_at_kw_70(&(*F->w_85)))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_85)); b_; }));
}
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_expect_op_88(rstr *w_87) {
  struct f_expect_op_88fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_87 = w_87;
if ((!f_at_op_72(&(*F->w_87)))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_87)); b_; }));
}
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P642 f_expect_id_89(void) {
  struct f_expect_id_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->result_ = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(rt_sub(g_tpos_677, ((rt_int)1LL)), (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_name_node_90(void) {
  struct f_name_node_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_794 = NULL;
F->x_794 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P647)rt_nil_check(F->x_794)).name = f_expect_id_89();
F->result_ = F->x_794;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_id_list_91(void) {
  struct f_id_list_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_795 = NULL;
F->tail_796 = NULL;
f_append_65(&F->head_795, &F->tail_796, f_name_node_90());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_795, &F->tail_796, f_name_node_90());
}
F->result_ = F->head_795;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_p_subtype_92(void) {
  struct f_p_subtype_92fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_797 = f_cur_line_68();
F->x_798 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->x_798 = f_nn_61((((rt_int)81LL)), F->line_797);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P647)rt_nil_check(F->x_798)).a = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_798;
goto ret_;
}
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_799 = rt_str_copy((*(P642)rt_nil_check((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s)));
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
if (rt_str_eq(F->w_799, rt_str("ARRAY", 5))) {
F->x_798 = f_nn_61((((rt_int)74LL)), F->line_797);
{
F->head_800 = NULL;
F->tail_801 = NULL;
f_append_65(&F->head_800, &F->tail_801, f_p_subtype_92());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_800, &F->tail_801, f_p_subtype_92());
}
(*(P647)rt_nil_check(F->x_798)).a = F->head_800;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P647)rt_nil_check(F->x_798)).b = f_p_subtype_92();
} else if ((rt_str_eq(F->w_799, rt_str("RECORD", 6)) || rt_str_eq(F->w_799, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_799, rt_str("RECORD", 6))) {
F->x_798 = f_nn_61((((rt_int)75LL)), F->line_797);
} else {
F->x_798 = f_nn_61((((rt_int)76LL)), F->line_797);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_802 = NULL;
F->tail_803 = NULL;
F->more_804 = 1;
while (F->more_804) {
F->names_805 = NULL;
F->names_805 = f_id_list_91();
F->st_806 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_806 = f_p_subtype_92();
while ((F->names_805 != NULL)) {
F->cmp_807 = NULL;
F->cmp_807 = f_nn_61((((rt_int)63LL)), (*(P647)rt_nil_check(F->names_805)).line);
(*(P647)rt_nil_check(F->cmp_807)).name = (*(P647)rt_nil_check(F->names_805)).name;
(*(P647)rt_nil_check(F->cmp_807)).a = F->st_806;
f_append_65(&F->head_802, &F->tail_803, F->cmp_807);
F->names_805 = (*(P647)rt_nil_check(F->names_805)).next;
}
F->more_804 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P647)rt_nil_check(F->x_798)).a = F->head_802;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_799, rt_str("UNION", 5)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_798)).b = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_799, rt_str("ENUM", 4))) {
F->x_798 = f_nn_61((((rt_int)72LL)), F->line_797);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_808 = NULL;
F->tail_809 = NULL;
F->more_810 = 1;
while (F->more_810) {
F->lit_811 = NULL;
F->lit_811 = f_nn_61((((rt_int)4LL)), F->line_797);
if ((!f_at_kind_74((((rt_int)6LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P647)rt_nil_check(F->lit_811)).name = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s;
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
f_append_65(&F->head_808, &F->tail_809, F->lit_811);
F->more_810 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P647)rt_nil_check(F->x_798)).a = F->head_808;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_798)).b = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P647)rt_nil_check(F->x_798)).c = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_799, rt_str("STRING", 6)) || rt_str_eq(F->w_799, rt_str("SET", 3))) || rt_str_eq(F->w_799, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_799, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_799, rt_str("STRING", 6))) {
F->x_798 = f_nn_61((((rt_int)73LL)), F->line_797);
} else if (rt_str_eq(F->w_799, rt_str("SET", 3))) {
F->x_798 = f_nn_61((((rt_int)77LL)), F->line_797);
} else if (rt_str_eq(F->w_799, rt_str("MAILBOX", 7))) {
F->x_798 = f_nn_61((((rt_int)78LL)), F->line_797);
} else {
F->x_798 = f_nn_61((((rt_int)79LL)), F->line_797);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P647)rt_nil_check(F->x_798)).a = f_p_subtype_92();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_798)).b = f_actual_params_93();
}
} else if (rt_str_eq(F->w_799, rt_str("INT", 3))) {
F->x_798 = f_nn_61((((rt_int)70LL)), F->line_797);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_798)).a = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P647)rt_nil_check(F->x_798)).b = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_799, rt_str("FLOAT", 5))) {
F->x_798 = f_nn_61((((rt_int)71LL)), F->line_797);
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_798)).a = f_expr_102();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_798)).b = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P647)rt_nil_check(F->x_798)).c = f_expr_102();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_798 = f_nn_61((((rt_int)80LL)), F->line_797);
(*(P647)rt_nil_check(F->x_798)).name = f_mk_3(&F->w_799);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_798)).a = f_actual_tt_96();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_798)).b = f_actual_params_93();
(*(P647)rt_nil_check(F->x_798)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_798;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_actual_params_93(void) {
  struct f_actual_params_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_812 = NULL;
F->tail_813 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_65(&F->head_812, &F->tail_813, f_expr_102());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_812, &F->tail_813, f_expr_102());
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_812;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_type_word_95(rstr *w_94) {
  struct f_is_type_word_95fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_94 = w_94;
F->result_ = ((((((((((((((rt_str_eq((*F->w_94), rt_str("INT", 3)) || rt_str_eq((*F->w_94), rt_str("BOOL", 4))) || rt_str_eq((*F->w_94), rt_str("FLOAT", 5))) || rt_str_eq((*F->w_94), rt_str("ENUM", 4))) || rt_str_eq((*F->w_94), rt_str("RECORD", 6))) || rt_str_eq((*F->w_94), rt_str("UNION", 5))) || rt_str_eq((*F->w_94), rt_str("ARRAY", 5))) || rt_str_eq((*F->w_94), rt_str("STRING", 6))) || rt_str_eq((*F->w_94), rt_str("SET", 3))) || rt_str_eq((*F->w_94), rt_str("MAILBOX", 7))) || rt_str_eq((*F->w_94), rt_str("FILE", 4))) || rt_str_eq((*F->w_94), rt_str("ASCII", 5))) || rt_str_eq((*F->w_94), rt_str("ACT", 3))) || rt_str_eq((*F->w_94), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->w_94), rt_str("LATCH", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_actual_tt_96(void) {
  struct f_actual_tt_96fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_814 = NULL;
F->tail_815 = NULL;
F->more_816 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_816) {
if ((f_at_kind_74((((rt_int)1LL))) && f_is_type_word_95(&(*(P642)rt_nil_check((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s))))) {
f_append_65(&F->head_814, &F->tail_815, f_p_subtype_92());
} else {
f_append_65(&F->head_814, &F->tail_815, f_expr_102());
}
F->more_816 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_814;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_binop_101(P642 op_97, P647 l_98, P647 r_99, rt_int line_100) {
  struct f_binop_101fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_97 = op_97;
F->l_98 = l_98;
F->r_99 = r_99;
F->line_100 = line_100;
F->x_817 = NULL;
F->x_817 = f_nn_61((((rt_int)9LL)), F->line_100);
(*(P647)rt_nil_check(F->x_817)).name = F->op_97;
(*(P647)rt_nil_check(F->x_817)).a = F->l_98;
(*(P647)rt_nil_check(F->x_817)).b = F->r_99;
F->result_ = F->x_817;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_expr_102(void) {
  struct f_expr_102fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_818 = NULL;
F->l_818 = f_expr_and_103();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_819 = NULL;
F->op_819 = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s;
F->line_820 = f_cur_line_68();
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->l_818 = f_binop_101(F->op_819, F->l_818, f_expr_and_103(), F->line_820);
}
F->result_ = F->l_818;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_expr_and_103(void) {
  struct f_expr_and_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_821 = NULL;
F->l_821 = f_expr_not_104();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_822 = f_cur_line_68();
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->l_821 = f_binop_101(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_821, f_expr_not_104(), F->line_822);
}
F->result_ = F->l_821;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_expr_not_104(void) {
  struct f_expr_not_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_823 = NULL;
F->x_823 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_823)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P647)rt_nil_check(F->x_823)).a = f_expr_not_104();
F->result_ = F->x_823;
goto ret_;
}
F->result_ = f_expr_rel_107();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_rel_106(rstr *s_105) {
  struct f_is_rel_106fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_105 = s_105;
F->result_ = ((((((rt_str_eq((*F->s_105), rt_str("=", 1)) || rt_str_eq((*F->s_105), rt_str("/=", 2))) || rt_str_eq((*F->s_105), rt_str("<", 1))) || rt_str_eq((*F->s_105), rt_str("<=", 2))) || rt_str_eq((*F->s_105), rt_str(">", 1))) || rt_str_eq((*F->s_105), rt_str(">=", 2))) || rt_str_eq((*F->s_105), rt_str("IN", 2)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_expr_rel_107(void) {
  struct f_expr_rel_107fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_824 = NULL;
F->l_824 = f_expr_add_108();
if ((f_at_kind_74((((rt_int)3LL))) && f_is_rel_106(&(*(P642)rt_nil_check((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s))))) {
F->op_825 = NULL;
F->op_825 = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s;
F->line_826 = f_cur_line_68();
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->l_824 = f_binop_101(F->op_825, F->l_824, f_expr_add_108(), F->line_826);
}
F->result_ = F->l_824;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_expr_add_108(void) {
  struct f_expr_add_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_827 = NULL;
F->l_827 = f_expr_mul_109();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_828 = NULL;
F->op_828 = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s;
F->line_829 = f_cur_line_68();
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->l_827 = f_binop_101(F->op_828, F->l_827, f_expr_mul_109(), F->line_829);
}
F->result_ = F->l_827;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_expr_mul_109(void) {
  struct f_expr_mul_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_830 = NULL;
F->l_830 = f_expr_pow_110();
while (((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_831 = NULL;
F->op_831 = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s;
F->line_832 = f_cur_line_68();
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->l_830 = f_binop_101(F->op_831, F->l_830, f_expr_pow_110(), F->line_832);
}
F->result_ = F->l_830;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_expr_pow_110(void) {
  struct f_expr_pow_110fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_833 = NULL;
F->l_833 = f_expr_prefix_111();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_834 = f_cur_line_68();
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->l_833 = f_binop_101(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_833, f_expr_prefix_111(), F->line_834);
}
F->result_ = F->l_833;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_expr_prefix_111(void) {
  struct f_expr_prefix_111fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_835 = NULL;
F->x_835 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
(*(P647)rt_nil_check(F->x_835)).name = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s;
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_835)).a = f_expr_prefix_111();
F->result_ = F->x_835;
goto ret_;
}
F->result_ = f_postfix_112();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_postfix_112(void) {
  struct f_postfix_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_836 = NULL;
F->p_836 = f_primary_113();
while (1) {
F->line_837 = f_cur_line_68();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_838 = NULL;
F->x_838 = f_nn_61((((rt_int)10LL)), F->line_837);
F->head_839 = NULL;
F->tail_840 = NULL;
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_841 = 1;
while (F->more_841) {
F->lo_842 = NULL;
F->lo_842 = f_expr_102();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_843 = NULL;
F->r_843 = f_nn_61((((rt_int)16LL)), F->line_837);
(*(P647)rt_nil_check(F->r_843)).a = F->lo_842;
(*(P647)rt_nil_check(F->r_843)).b = f_expr_102();
f_append_65(&F->head_839, &F->tail_840, F->r_843);
} else {
f_append_65(&F->head_839, &F->tail_840, F->lo_842);
}
F->more_841 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P647)rt_nil_check(F->x_838)).a = F->p_836;
(*(P647)rt_nil_check(F->x_838)).b = F->head_839;
F->p_836 = F->x_838;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_844 = NULL;
F->x_844 = f_nn_61((((rt_int)11LL)), F->line_837);
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_844)).a = F->p_836;
(*(P647)rt_nil_check(F->x_844)).name = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s;
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->p_836 = F->x_844;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P647)rt_nil_check(F->p_836)).kind == (((rt_int)7LL))))) {
F->x_845 = NULL;
F->x_845 = f_nn_61((((rt_int)12LL)), F->line_837);
(*(P647)rt_nil_check(F->x_845)).a = F->p_836;
(*(P647)rt_nil_check(F->x_845)).b = f_actual_tt_96();
F->p_836 = F->x_845;
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_846 = NULL;
F->x_846 = f_nn_61((((rt_int)13LL)), F->line_837);
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_846)).a = F->p_836;
(*(P647)rt_nil_check(F->x_846)).b = f_p_subtype_92();
F->p_836 = F->x_846;
} else {
F->result_ = F->p_836;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_primary_113(void) {
  struct f_primary_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_847 = f_cur_line_68();
F->x_848 = NULL;
F->k_849 = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).kind;
if ((F->k_849 == (((rt_int)4LL)))) {
F->x_848 = f_nn_61((((rt_int)1LL)), F->line_847);
(*(P647)rt_nil_check(F->x_848)).ival = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).ival;
(*(P647)rt_nil_check(F->x_848)).name = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s;
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->result_ = F->x_848;
goto ret_;
}
if ((((F->k_849 == (((rt_int)5LL))) || (F->k_849 == (((rt_int)7LL)))) || (F->k_849 == (((rt_int)6LL))))) {
if ((F->k_849 == (((rt_int)5LL)))) {
F->x_848 = f_nn_61((((rt_int)2LL)), F->line_847);
} else if ((F->k_849 == (((rt_int)7LL)))) {
F->x_848 = f_nn_61((((rt_int)3LL)), F->line_847);
} else {
F->x_848 = f_nn_61((((rt_int)4LL)), F->line_847);
}
(*(P647)rt_nil_check(F->x_848)).name = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s;
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->result_ = F->x_848;
goto ret_;
}
if ((F->k_849 == (((rt_int)1LL)))) {
F->w_850 = rt_str_copy((*(P642)rt_nil_check((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s)));
if ((rt_str_eq(F->w_850, rt_str("TRUE", 4)) || rt_str_eq(F->w_850, rt_str("FALSE", 5)))) {
F->x_848 = f_nn_61((((rt_int)5LL)), F->line_847);
if (rt_str_eq(F->w_850, rt_str("TRUE", 4))) {
(*(P647)rt_nil_check(F->x_848)).ival = ((rt_int)1LL);
}
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->result_ = F->x_848;
goto ret_;
}
if (rt_str_eq(F->w_850, rt_str("NIL", 3))) {
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)6LL)), F->line_847);
goto ret_;
}
F->result_ = f_name_node_90();
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_848 = f_nn_61((((rt_int)17LL)), F->line_847);
(*(P647)rt_nil_check(F->x_848)).a = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_848;
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_851 = NULL;
F->tail_852 = NULL;
F->x_848 = f_nn_61((((rt_int)14LL)), F->line_847);
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_853 = 1;
while (F->more_853) {
f_append_65(&F->head_851, &F->tail_852, f_constructor_item_114());
F->more_853 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P647)rt_nil_check(F->x_848)).a = F->head_851;
F->result_ = F->x_848;
goto ret_;
}
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_constructor_item_114(void) {
  struct f_constructor_item_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_854 = f_cur_line_68();
F->it_855 = NULL;
F->it_855 = f_nn_61((((rt_int)15LL)), F->line_854);
F->first_856 = NULL;
F->first_856 = f_expr_102();
F->keys_857 = NULL;
F->ktail_858 = NULL;
F->lab_859 = NULL;
F->lab_859 = f_nn_61((((rt_int)61LL)), F->line_854);
(*(P647)rt_nil_check(F->lab_859)).a = F->first_856;
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P647)rt_nil_check(F->lab_859)).b = f_expr_102();
f_append_65(&F->keys_857, &F->ktail_858, F->lab_859);
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_65(&F->keys_857, &F->ktail_858, F->lab_859);
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_860 = g_tpos_677;
F->more_861 = NULL;
F->tail2_862 = NULL;
F->ok_863 = 0;
F->go_864 = 1;
while ((F->go_864 && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_865 = NULL;
F->l2_865 = f_nn_61((((rt_int)61LL)), F->line_854);
(*(P647)rt_nil_check(F->l2_865)).a = f_expr_102();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P647)rt_nil_check(F->l2_865)).b = f_expr_102();
}
f_append_65(&F->more_861, &F->tail2_862, F->l2_865);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_863 = 1;
F->go_864 = 0;
} else if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_864 = 0;
}
}
if (F->ok_863) {
f_append_65(&F->keys_857, &F->ktail_858, F->lab_859);
f_append_65(&F->keys_857, &F->ktail_858, F->more_861);
} else {
g_tpos_677 = F->save_860;
}
}
if ((F->keys_857 != NULL)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P647)rt_nil_check(F->it_855)).a = F->keys_857;
(*(P647)rt_nil_check(F->it_855)).b = f_expr_102();
} else {
(*(P647)rt_nil_check(F->it_855)).b = F->first_856;
}
F->result_ = F->it_855;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_at_body_end_115(void) {
  struct f_at_body_end_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = (((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }))) || f_at_kind_74((((rt_int)0LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_body_116(void) {
  struct f_body_116fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_866 = NULL;
F->tail_867 = NULL;
F->stmts_868 = 0;
F->after_869 = NULL;
while ((!f_at_body_end_115())) {
F->x_870 = NULL;
F->x_870 = f_body_element_117();
if (((F->x_870 != NULL) && (((((*(P647)rt_nil_check(F->x_870)).kind == (((rt_int)40LL))) || ((*(P647)rt_nil_check(F->x_870)).kind == (((rt_int)41LL)))) || ((*(P647)rt_nil_check(F->x_870)).kind == (((rt_int)49LL)))) || ((*(P647)rt_nil_check(F->x_870)).kind == (((rt_int)48LL)))))) {
if (F->stmts_868) {
f_fail_23((*(P647)rt_nil_check(F->x_870)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_870 != NULL) && ((*(P647)rt_nil_check(F->x_870)).kind >= (((rt_int)42LL)))) && ((*(P647)rt_nil_check(F->x_870)).kind <= (((rt_int)51LL))))) {
if ((F->stmts_868 && (F->after_869 == NULL))) {
F->after_869 = F->x_870;
}
} else if (((F->x_870 != NULL) && ((*(P647)rt_nil_check(F->x_870)).kind != (((rt_int)33LL))))) {
if ((F->after_869 != NULL)) {
f_fail_23((*(P647)rt_nil_check(F->after_869)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_868 = 1;
}
f_append_65(&F->head_866, &F->tail_867, F->x_870);
}
F->result_ = F->head_866;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_body_element_117(void) {
  struct f_body_element_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_871 = NULL;
F->pr_872 = NULL;
F->pr_872 = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).prags;
if ((((((((((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_871 = f_declaration_118();
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_871 = f_nn_61((((rt_int)33LL)), f_cur_line_68());
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_871)).a = f_expr_102();
} else {
F->x_871 = f_statement_139();
}
if ((F->pr_872 != NULL)) {
F->p_873 = NULL;
F->p_873 = F->x_871;
while ((F->p_873 != NULL)) {
if (((*(P647)rt_nil_check(F->p_873)).prags == NULL)) {
(*(P647)rt_nil_check(F->p_873)).prags = F->pr_872;
} else {
(*(P647)rt_nil_check(F->p_873)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->pr_872)), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_873)).prags))); b_; }));
}
F->p_873 = (*(P647)rt_nil_check(F->p_873)).next;
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_871;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_declaration_118(void) {
  struct f_declaration_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_874 = f_cur_line_68();
if ((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })))) {
F->result_ = f_object_decl_119();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) {
F->result_ = f_abbrev_decl_120();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->result_ = f_type_decl_122();
goto ret_;
} else if (((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; })))) {
F->result_ = f_subprogram_decl_131();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) {
F->result_ = f_capsule_decl_132();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) {
F->result_ = f_expose_decl_136();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->result_ = f_task_decl_135();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; }))) {
F->result_ = f_generic_decl_134();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) {
F->head_875 = NULL;
F->tail_876 = NULL;
F->names_877 = NULL;
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->names_877 = f_id_list_91();
while ((F->names_877 != NULL)) {
F->x_878 = NULL;
F->x_878 = f_nn_61((((rt_int)49LL)), F->line_874);
(*(P647)rt_nil_check(F->x_878)).name = (*(P647)rt_nil_check(F->names_877)).name;
f_append_65(&F->head_875, &F->tail_876, F->x_878);
F->names_877 = (*(P647)rt_nil_check(F->names_877)).next;
}
F->result_ = F->head_875;
goto ret_;
}
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_object_decl_119(void) {
  struct f_object_decl_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_879 = f_cur_line_68();
F->is_var_880 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_881 = NULL;
F->st_882 = NULL;
F->init_883 = NULL;
F->loc_884 = NULL;
F->loc_kind_885 = ((rt_int)0LL);
F->head_886 = NULL;
F->tail_887 = NULL;
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->names_881 = f_id_list_91();
if (F->is_var_880) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_882 = f_p_subtype_92();
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((*(P642)rt_nil_check((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s)), rt_str("INTERRUPT", 9)))) {
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->loc_kind_885 = ((rt_int)1LL);
} else {
F->loc_kind_885 = ((rt_int)2LL);
}
F->loc_884 = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_883 = f_expr_102();
}
} else {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_882 = f_p_subtype_92();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_883 = f_expr_102();
}
while ((F->names_881 != NULL)) {
F->x_888 = NULL;
if (F->is_var_880) {
F->x_888 = f_nn_61((((rt_int)40LL)), F->line_879);
} else {
F->x_888 = f_nn_61((((rt_int)41LL)), F->line_879);
}
(*(P647)rt_nil_check(F->x_888)).name = (*(P647)rt_nil_check(F->names_881)).name;
(*(P647)rt_nil_check(F->x_888)).a = F->st_882;
(*(P647)rt_nil_check(F->x_888)).b = F->init_883;
(*(P647)rt_nil_check(F->x_888)).c = F->loc_884;
(*(P647)rt_nil_check(F->x_888)).ival = F->loc_kind_885;
f_append_65(&F->head_886, &F->tail_887, F->x_888);
F->names_881 = (*(P647)rt_nil_check(F->names_881)).next;
}
F->result_ = F->head_886;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_abbrev_decl_120(void) {
  struct f_abbrev_decl_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_889 = NULL;
F->x_889 = f_nn_61((((rt_int)42LL)), f_cur_line_68());
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_889)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_889)).b = f_formal_params_125();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P647)rt_nil_check(F->x_889)).a = f_p_subtype_92();
F->result_ = F->x_889;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_skip_rep_121(void) {
  struct f_skip_rep_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->depth_890 = ((rt_int)0LL);
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((F->depth_890 == ((rt_int)0LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_74((((rt_int)0LL)))))) {
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_890 = rt_add(F->depth_890, ((rt_int)1LL));
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_890 = rt_sub(F->depth_890, ((rt_int)1LL));
}
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
}
}
ret_:
  RT_FPOP();
  return;
}

static P647 f_type_decl_122(void) {
  struct f_type_decl_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_891 = f_cur_line_68();
F->name_892 = NULL;
F->params_893 = NULL;
F->x_894 = NULL;
F->tts_895 = NULL;
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->name_892 = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_895 = f_formal_tt_133();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_893 = f_formal_params_125();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((*(P642)rt_nil_check((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->x_894 = f_nn_61((((rt_int)44LL)), F->line_891);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_894)).b = f_formal_params_125();
}
} else {
F->x_894 = f_nn_61((((rt_int)43LL)), F->line_891);
(*(P647)rt_nil_check(F->x_894)).b = F->params_893;
}
(*(P647)rt_nil_check(F->x_894)).name = F->name_892;
(*(P647)rt_nil_check(F->x_894)).e = F->tts_895;
(*(P647)rt_nil_check(F->x_894)).a = f_p_subtype_92();
f_skip_rep_121();
F->result_ = F->x_894;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_mode_of_124(rstr *w_123) {
  struct f_mode_of_124fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_123 = w_123;
if (rt_str_eq((*F->w_123), rt_str("VAR", 3))) {
F->result_ = (((rt_int)2LL));
goto ret_;
} else if (rt_str_eq((*F->w_123), rt_str("OUT", 3))) {
F->result_ = (((rt_int)3LL));
goto ret_;
} else if (rt_str_eq((*F->w_123), rt_str("READONLY", 8))) {
F->result_ = (((rt_int)4LL));
goto ret_;
}
F->result_ = (((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_formal_params_125(void) {
  struct f_formal_params_125fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_896 = NULL;
F->tail_897 = NULL;
F->more_898 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_898) {
F->mode_899 = (((rt_int)1LL));
F->names_900 = NULL;
F->ntail_901 = NULL;
F->st_902 = NULL;
if ((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_899 = f_mode_of_124(&(*(P642)rt_nil_check((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s)));
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
}
f_append_65(&F->names_900, &F->ntail_901, f_name_node_90());
while ((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_76(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((*(P642)rt_nil_check(f_text_at_78(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P642)rt_nil_check(f_text_at_78(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
f_append_65(&F->names_900, &F->ntail_901, f_name_node_90());
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_902 = f_p_subtype_92();
while ((F->names_900 != NULL)) {
F->p_903 = NULL;
F->p_903 = f_nn_61((((rt_int)52LL)), (*(P647)rt_nil_check(F->names_900)).line);
(*(P647)rt_nil_check(F->p_903)).name = (*(P647)rt_nil_check(F->names_900)).name;
(*(P647)rt_nil_check(F->p_903)).ival = F->mode_899;
(*(P647)rt_nil_check(F->p_903)).a = F->st_902;
f_append_65(&F->head_896, &F->tail_897, F->p_903);
F->names_900 = (*(P647)rt_nil_check(F->names_900)).next;
}
F->more_898 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_896;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_127(P647 owner_126) {
  struct f_imports_list_127fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_126 = owner_126;
F->head_904 = NULL;
F->tail_905 = NULL;
F->more_906 = 1;
if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P647)rt_nil_check(F->owner_126)).flag = rt_add((*(P647)rt_nil_check(F->owner_126)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_906) {
F->ro_907 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_908 = NULL;
F->x_908 = f_name_node_90();
if (F->ro_907) {
(*(P647)rt_nil_check(F->x_908)).ival = ((rt_int)1LL);
}
f_append_65(&F->head_904, &F->tail_905, F->x_908);
F->more_906 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P647)rt_nil_check(F->owner_126)).d = F->head_904;
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_definable_129(rstr *w_128) {
  struct f_is_definable_129fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_128 = w_128;
F->result_ = ((((((((((((((((((((rt_str_eq((*F->w_128), rt_str("+", 1)) || rt_str_eq((*F->w_128), rt_str("-", 1))) || rt_str_eq((*F->w_128), rt_str("*", 1))) || rt_str_eq((*F->w_128), rt_str("/", 1))) || rt_str_eq((*F->w_128), rt_str("**", 2))) || rt_str_eq((*F->w_128), rt_str("&", 1))) || rt_str_eq((*F->w_128), rt_str("=", 1))) || rt_str_eq((*F->w_128), rt_str("<", 1))) || rt_str_eq((*F->w_128), rt_str("<=", 2))) || rt_str_eq((*F->w_128), rt_str(">", 1))) || rt_str_eq((*F->w_128), rt_str(">=", 2))) || rt_str_eq((*F->w_128), rt_str("/=", 2))) || rt_str_eq((*F->w_128), rt_str("DIV", 3))) || rt_str_eq((*F->w_128), rt_str("MOD", 3))) || rt_str_eq((*F->w_128), rt_str("AND", 3))) || rt_str_eq((*F->w_128), rt_str("OR", 2))) || rt_str_eq((*F->w_128), rt_str("XOR", 3))) || rt_str_eq((*F->w_128), rt_str("NOT", 3))) || rt_str_eq((*F->w_128), rt_str("IN", 2))) || rt_str_eq((*F->w_128), rt_str(":=", 2))) || rt_str_eq((*F->w_128), rt_str("#", 1)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P642 f_definable_name_130(void) {
  struct f_definable_name_130fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_kind_74((((rt_int)1LL))) || (f_at_kind_74((((rt_int)3LL))) && f_is_definable_129(&(*(P642)rt_nil_check((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s)))))) {
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->result_ = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(rt_sub(g_tpos_677, ((rt_int)1LL)), (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s;
goto ret_;
}
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_subprogram_decl_131(void) {
  struct f_subprogram_decl_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_909 = f_cur_line_68();
F->x_910 = NULL;
F->is_abn_911 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_912 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_912) {
F->x_910 = f_nn_61((((rt_int)46LL)), F->line_909);
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_910 = f_nn_61((((rt_int)45LL)), F->line_909);
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
if (F->is_abn_911) {
(*(P647)rt_nil_check(F->x_910)).flag = ((rt_int)1LL);
}
(*(P647)rt_nil_check(F->x_910)).name = f_definable_name_130();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_910)).e = f_formal_tt_133();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_910)).a = f_formal_params_125();
}
if (F->is_func_912) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P647)rt_nil_check(F->x_910)).b = f_p_subtype_92();
}
F->dummy_913 = f_imports_list_127(F->x_910);
if (((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).prags != NULL)) {
if (((*(P647)rt_nil_check(F->x_910)).prags == NULL)) {
(*(P647)rt_nil_check(F->x_910)).prags = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).prags;
} else {
(*(P647)rt_nil_check(F->x_910)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->x_910)).prags)), (*(P642)rt_nil_check((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).prags))); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P647)rt_nil_check(F->x_910)).c = f_body_116();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_912) {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P642)rt_nil_check(f_definable_name_130())), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->x_910)).name))))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->x_910)).name))); b_; }));
}
F->result_ = F->x_910;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_capsule_decl_132(void) {
  struct f_capsule_decl_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_914 = NULL;
F->x_914 = f_nn_61((((rt_int)47LL)), f_cur_line_68());
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_914)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_914)).b = f_formal_params_125();
}
F->dummy_915 = f_imports_list_127(F->x_914);
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P647)rt_nil_check(F->x_914)).ival = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P647)rt_nil_check(F->x_914)).ival = ((rt_int)0LL);
} else {
F->head_916 = NULL;
F->tail_917 = NULL;
F->more_918 = 1;
while (F->more_918) {
F->n_919 = NULL;
F->n_919 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P647)rt_nil_check(F->n_919)).ival = ((rt_int)1LL);
}
(*(P647)rt_nil_check(F->n_919)).name = f_definable_name_130();
f_append_65(&F->head_916, &F->tail_917, F->n_919);
F->more_918 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P647)rt_nil_check(F->x_914)).a = F->head_916;
(*(P647)rt_nil_check(F->x_914)).ival = ((rt_int)2LL);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P647)rt_nil_check(F->x_914)).c = f_body_116();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P642)rt_nil_check(f_expect_id_89())), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->x_914)).name))))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_914;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_formal_tt_133(void) {
  struct f_formal_tt_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_920 = NULL;
F->tail_921 = NULL;
F->more_922 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_922) {
f_append_65(&F->head_920, &F->tail_921, f_name_node_90());
F->more_922 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_920;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_generic_decl_134(void) {
  struct f_generic_decl_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_923 = NULL;
F->x_923 = f_nn_61((((rt_int)51LL)), f_cur_line_68());
F->head_924 = NULL;
F->tail_925 = NULL;
F->more_926 = 1;
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
while (F->more_926) {
F->names_927 = NULL;
F->names_927 = f_id_list_91();
F->kind_928 = ((rt_int)6LL);
F->st_929 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_928 = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_928 = ((rt_int)2LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_928 = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_928 = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_928 = ((rt_int)5LL);
} else {
F->st_929 = f_p_subtype_92();
}
if (((F->kind_928 <= ((rt_int)2LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P647)rt_nil_check(F->x_923)).e = f_actual_params_93();
} else if (((F->kind_928 >= ((rt_int)3LL)) && (F->kind_928 <= ((rt_int)5LL)))) {
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_929 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
}
if (((F->kind_928 == ((rt_int)4LL)) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_929 = f_p_subtype_92();
}
}
while ((F->names_927 != NULL)) {
F->p_930 = NULL;
F->p_930 = f_nn_61((((rt_int)52LL)), (*(P647)rt_nil_check(F->names_927)).line);
(*(P647)rt_nil_check(F->p_930)).name = (*(P647)rt_nil_check(F->names_927)).name;
(*(P647)rt_nil_check(F->p_930)).ival = F->kind_928;
(*(P647)rt_nil_check(F->p_930)).a = F->st_929;
f_append_65(&F->head_924, &F->tail_925, F->p_930);
F->names_927 = (*(P647)rt_nil_check(F->names_927)).next;
}
F->more_926 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_926 = 1;
while (F->more_926) {
F->nm_931 = NULL;
F->nm_931 = f_definable_name_130();
F->st_932 = NULL;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_932 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_932 = f_p_subtype_92();
}
F->more_926 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P647)rt_nil_check(F->x_923)).a = F->head_924;
(*(P647)rt_nil_check(F->x_923)).b = f_declaration_118();
(*(P647)rt_nil_check(F->x_923)).name = (*(P647)rt_nil_check((*(P647)rt_nil_check(F->x_923)).b)).name;
F->result_ = F->x_923;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_task_decl_135(void) {
  struct f_task_decl_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_933 = NULL;
F->x_933 = f_nn_61((((rt_int)50LL)), f_cur_line_68());
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_933)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_933)).e = f_formal_tt_133();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_933)).a = f_formal_params_125();
}
F->dummy_934 = f_imports_list_127(F->x_933);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P647)rt_nil_check(F->x_933)).c = f_body_116();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P642)rt_nil_check(f_expect_id_89())), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->x_933)).name))))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->x_933)).name))); b_; }));
}
F->result_ = F->x_933;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_expose_decl_136(void) {
  struct f_expose_decl_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_935 = NULL;
F->x_935 = f_nn_61((((rt_int)48LL)), f_cur_line_68());
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P647)rt_nil_check(F->x_935)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_936 = NULL;
F->tail_937 = NULL;
F->more_938 = 1;
while (F->more_938) {
F->n_939 = NULL;
F->n_939 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P647)rt_nil_check(F->n_939)).ival = ((rt_int)1LL);
}
(*(P647)rt_nil_check(F->n_939)).name = f_definable_name_130();
f_append_65(&F->head_936, &F->tail_937, F->n_939);
F->more_938 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P647)rt_nil_check(F->x_935)).a = F->head_936;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P647)rt_nil_check(F->x_935)).flag = ((rt_int)1LL);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P647)rt_nil_check(F->x_935)).flag = rt_add((*(P647)rt_nil_check(F->x_935)).flag, ((rt_int)2LL));
}
(*(P647)rt_nil_check(F->x_935)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_935)).b = f_actual_params_93();
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_940 = NULL;
F->tail_941 = NULL;
F->more_942 = 1;
while (F->more_942) {
F->n_943 = NULL;
F->n_943 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
F->tgt_944 = NULL;
F->tgt_944 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P647)rt_nil_check(F->n_943)).name = f_definable_name_130();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P647)rt_nil_check(F->tgt_944)).name = f_definable_name_130();
(*(P647)rt_nil_check(F->n_943)).a = F->tgt_944;
f_append_65(&F->head_940, &F->tail_941, F->n_943);
F->more_942 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P647)rt_nil_check(F->x_935)).c = F->head_940;
}
F->result_ = F->x_935;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_compound_kw_138(rstr *w_137) {
  struct f_is_compound_kw_138fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_137 = w_137;
F->result_ = (((((((rt_str_eq((*F->w_137), rt_str("IF", 2)) || rt_str_eq((*F->w_137), rt_str("CASE", 4))) || rt_str_eq((*F->w_137), rt_str("FOR", 3))) || rt_str_eq((*F->w_137), rt_str("WHILE", 5))) || rt_str_eq((*F->w_137), rt_str("BEGIN", 5))) || rt_str_eq((*F->w_137), rt_str("GUARD", 5))) || rt_str_eq((*F->w_137), rt_str("WAIT", 4))) || rt_str_eq((*F->w_137), rt_str("REGION", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_statement_139(void) {
  struct f_statement_139fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_945 = NULL;
F->ltail_946 = NULL;
F->match_947 = NULL;
F->s_948 = NULL;
while (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((*(P642)rt_nil_check(f_text_at_78(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_65(&F->labels_945, &F->ltail_946, f_name_node_90());
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
}
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_138(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P642)rt_nil_check(f_text_at_78(((rt_int)1LL)))); b_; })))) {
F->match_947 = f_expect_id_89();
}
F->s_948 = f_unlabeled_statement_140();
if ((F->match_947 != NULL)) {
if (((((((((*(P647)rt_nil_check(F->s_948)).kind != (((rt_int)22LL))) && ((*(P647)rt_nil_check(F->s_948)).kind != (((rt_int)23LL)))) && ((*(P647)rt_nil_check(F->s_948)).kind != (((rt_int)24LL)))) && ((*(P647)rt_nil_check(F->s_948)).kind != (((rt_int)25LL)))) && ((*(P647)rt_nil_check(F->s_948)).kind != (((rt_int)26LL)))) && ((*(P647)rt_nil_check(F->s_948)).kind != (((rt_int)35LL)))) && ((*(P647)rt_nil_check(F->s_948)).kind != (((rt_int)36LL))))) {
f_fail_23((*(P647)rt_nil_check(F->s_948)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P642)rt_nil_check(f_expect_id_89())), (*(P642)rt_nil_check(F->match_947))))) {
f_fail_23((*(P647)rt_nil_check(F->s_948)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P642)rt_nil_check(F->match_947))); b_; }));
}
(*(P647)rt_nil_check(F->s_948)).tag = F->match_947;
}
(*(P647)rt_nil_check(F->s_948)).labels = F->labels_945;
F->result_ = F->s_948;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_unlabeled_statement_140(void) {
  struct f_unlabeled_statement_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_949 = f_cur_line_68();
F->x_950 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }))) {
F->result_ = f_if_stmt_145();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }))) {
F->result_ = f_case_stmt_146();
goto ret_;
} else if ((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; })))) {
F->result_ = f_repeat_stmt_147();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BEGIN", 5); b_; }))) {
F->x_950 = f_nn_61((((rt_int)25LL)), F->line_949);
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_950)).a = f_body_116();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_950;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_148();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_950 = f_nn_61((((rt_int)27LL)), F->line_949);
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_950)).name = f_expect_id_89();
F->result_ = F->x_950;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_950 = f_nn_61((((rt_int)28LL)), F->line_949);
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P647)rt_nil_check(F->x_950)).a = f_expr_102();
}
F->result_ = F->x_950;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_950 = f_nn_61((((rt_int)29LL)), F->line_949);
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_950)).name = f_expect_id_89();
F->result_ = F->x_950;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_950 = f_nn_61((((rt_int)30LL)), F->line_949);
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_950)).name = f_expect_id_89();
F->result_ = F->x_950;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)31LL)), F->line_949);
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_950 = f_nn_61((((rt_int)34LL)), F->line_949);
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_950)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_950)).e = f_actual_tt_96();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_950)).b = f_actual_params_93();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P647)rt_nil_check(F->x_950)).a = f_postfix_112();
F->result_ = F->x_950;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_951 = NULL;
F->tail_952 = NULL;
F->x_950 = f_nn_61((((rt_int)35LL)), F->line_949);
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_953 = NULL;
F->itail_954 = NULL;
F->more_955 = 1;
while (F->more_955) {
f_append_65(&F->invs_953, &F->itail_954, f_postfix_112());
F->more_955 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_951, &F->tail_952, f_arm_144(F->invs_953, f_body_116(), F->line_949));
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P647)rt_nil_check(F->x_950)).a = F->head_951;
F->result_ = F->x_950;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_950 = f_nn_61((((rt_int)36LL)), F->line_949);
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_950)).a = f_expr_102();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P647)rt_nil_check(F->x_950)).b = f_body_116();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_950;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_950 = f_nn_61((((rt_int)32LL)), F->line_949);
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_950)).a = f_postfix_112();
if ((!(f_at_kind_74((((rt_int)1LL))) && rt_str_eq((*(P642)rt_nil_check((*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P647)rt_nil_check(F->x_950)).b = f_actual_params_93();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P647)rt_nil_check(F->x_950)).c = f_expr_102();
}
F->result_ = F->x_950;
goto ret_;
}
{
F->target_956 = NULL;
F->target_956 = f_postfix_112();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_950 = f_nn_61((((rt_int)20LL)), F->line_949);
(*(P647)rt_nil_check(F->x_950)).a = F->target_956;
(*(P647)rt_nil_check(F->x_950)).b = f_expr_102();
} else {
F->x_950 = f_nn_61((((rt_int)21LL)), F->line_949);
(*(P647)rt_nil_check(F->x_950)).a = F->target_956;
}
}
F->result_ = F->x_950;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_arm_144(P647 cond_141, P647 b_142, rt_int line_143) {
  struct f_arm_144fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_141 = cond_141;
F->b_142 = b_142;
F->line_143 = line_143;
F->x_957 = NULL;
F->x_957 = f_nn_61((((rt_int)60LL)), F->line_143);
(*(P647)rt_nil_check(F->x_957)).a = F->cond_141;
(*(P647)rt_nil_check(F->x_957)).b = F->b_142;
F->result_ = F->x_957;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_if_stmt_145(void) {
  struct f_if_stmt_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_958 = NULL;
F->x_958 = f_nn_61((((rt_int)22LL)), f_cur_line_68());
F->head_959 = NULL;
F->tail_960 = NULL;
F->cond_961 = NULL;
F->go_962 = 1;
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
F->cond_961 = f_expr_102();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_959, &F->tail_960, f_arm_144(F->cond_961, f_body_116(), (*(P647)rt_nil_check(F->x_958)).line));
while (F->go_962) {
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_961 = f_expr_102();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_959, &F->tail_960, f_arm_144(F->cond_961, f_body_116(), (*(P647)rt_nil_check(F->x_958)).line));
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P647)rt_nil_check(F->x_958)).flag = ((rt_int)1LL);
(*(P647)rt_nil_check(F->x_958)).b = f_body_116();
} else {
F->go_962 = 0;
}
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P647)rt_nil_check(F->x_958)).a = F->head_959;
F->result_ = F->x_958;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_case_stmt_146(void) {
  struct f_case_stmt_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_963 = NULL;
F->x_963 = f_nn_61((((rt_int)23LL)), f_cur_line_68());
F->head_964 = NULL;
F->tail_965 = NULL;
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_963)).a = f_expr_102();
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_966 = NULL;
F->ltail_967 = NULL;
F->more_968 = 1;
while (F->more_968) {
F->l_969 = NULL;
F->l_969 = f_nn_61((((rt_int)61LL)), f_cur_line_68());
(*(P647)rt_nil_check(F->l_969)).a = f_expr_102();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P647)rt_nil_check(F->l_969)).b = f_expr_102();
}
f_append_65(&F->labs_966, &F->ltail_967, F->l_969);
F->more_968 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_964, &F->tail_965, f_arm_144(F->labs_966, f_body_116(), (*(P647)rt_nil_check(F->x_963)).line));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P647)rt_nil_check(F->x_963)).flag = ((rt_int)1LL);
(*(P647)rt_nil_check(F->x_963)).c = f_body_116();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P647)rt_nil_check(F->x_963)).b = F->head_964;
F->result_ = F->x_963;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_repeat_stmt_147(void) {
  struct f_repeat_stmt_147fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_970 = NULL;
F->x_970 = f_nn_61((((rt_int)24LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P647)rt_nil_check(F->x_970)).flag = ((rt_int)1LL);
(*(P647)rt_nil_check(F->x_970)).name = f_expect_id_89();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P647)rt_nil_check(F->x_970)).ival = ((rt_int)1LL);
}
(*(P647)rt_nil_check(F->x_970)).a = f_p_subtype_92();
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P647)rt_nil_check(F->x_970)).a = f_expr_102();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P647)rt_nil_check(F->x_970)).b = f_body_116();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_970;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_guard_stmt_148(void) {
  struct f_guard_stmt_148fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_971 = NULL;
F->x_971 = f_nn_61((((rt_int)26LL)), f_cur_line_68());
F->head_972 = NULL;
F->tail_973 = NULL;
g_tpos_677 = rt_add(g_tpos_677, ((rt_int)1LL));
(*(P647)rt_nil_check(F->x_971)).a = f_body_116();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_974 = NULL;
F->h_974 = f_nn_61((((rt_int)62LL)), f_cur_line_68());
(*(P647)rt_nil_check(F->h_974)).a = f_id_list_91();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P647)rt_nil_check(F->h_974)).b = f_body_116();
f_append_65(&F->head_972, &F->tail_973, F->h_974);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P647)rt_nil_check(F->x_971)).flag = ((rt_int)1LL);
(*(P647)rt_nil_check(F->x_971)).c = f_body_116();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P647)rt_nil_check(F->x_971)).b = F->head_972;
F->result_ = F->x_971;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_program_149(void) {
  struct f_program_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_975 = NULL;
F->tail_976 = NULL;
while ((!f_at_kind_74((((rt_int)0LL))))) {
if ((!f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_977 = NULL;
F->pr_977 = (*(P643)rt_nil_check((*(P645)rt_nil_check(g_toks_675)).p[rt_index(g_tpos_677, (*(P645)rt_nil_check(g_toks_675)).lo, (*(P645)rt_nil_check(g_toks_675)).hi) - (*(P645)rt_nil_check(g_toks_675)).lo])).prags;
F->u_978 = NULL;
F->u_978 = f_capsule_decl_132();
(*(P647)rt_nil_check(F->u_978)).prags = F->pr_977;
f_append_65(&F->head_975, &F->tail_976, F->u_978);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_975;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_hash_151(rstr *s_150) {
  struct f_hash_151fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_150 = s_150;
F->h_979 = ((rt_int)0LL);
{ rt_int lo981 = ((rt_int)1LL), hi982 = ((*F->s_150)).len;
for (rt_int it983 = lo981; it983 <= hi982; it983++) {
F->i_980 = it983;
F->h_979 = rt_mod(rt_add(rt_mul(F->h_979, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_150), F->i_980)) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = F->h_979;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P655 f_lookup_153(rstr *name_152) {
  struct f_lookup_153fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_152 = name_152;
F->y_984 = NULL;
F->y_984 = (*(P659)rt_nil_check(g_table_680)).p[rt_index(f_hash_151(&(*F->name_152)), (*(P659)rt_nil_check(g_table_680)).lo, (*(P659)rt_nil_check(g_table_680)).hi) - (*(P659)rt_nil_check(g_table_680)).lo];
if ((g_genv_681 != NULL)) {
while ((F->y_984 != NULL)) {
if ((((*(P655)rt_nil_check(F->y_984)).depth >= g_gdepth_713) && rt_str_eq((*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_984)).name)), (*F->name_152)))) {
F->result_ = F->y_984;
goto ret_;
}
F->y_984 = (*(P655)rt_nil_check(F->y_984)).chain;
}
F->y_984 = (*(P659)rt_nil_check(g_genv_681)).p[rt_index(f_hash_151(&(*F->name_152)), (*(P659)rt_nil_check(g_genv_681)).lo, (*(P659)rt_nil_check(g_genv_681)).hi) - (*(P659)rt_nil_check(g_genv_681)).lo];
while ((F->y_984 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_984)).name)), (*F->name_152))) {
F->result_ = F->y_984;
goto ret_;
}
F->y_984 = (*(P655)rt_nil_check(F->y_984)).chain;
}
F->y_984 = (*(P659)rt_nil_check(g_table_680)).p[rt_index(f_hash_151(&(*F->name_152)), (*(P659)rt_nil_check(g_table_680)).lo, (*(P659)rt_nil_check(g_table_680)).hi) - (*(P659)rt_nil_check(g_table_680)).lo];
}
while ((F->y_984 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_984)).name)), (*F->name_152))) {
F->result_ = F->y_984;
goto ret_;
}
F->y_984 = (*(P655)rt_nil_check(F->y_984)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P655 f_lookup_decl_155(P647 d_154) {
  struct f_lookup_decl_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_154 = d_154;
F->y_985 = NULL;
F->y_985 = (*(P659)rt_nil_check(g_table_680)).p[rt_index(f_hash_151(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->d_154)).name))), (*(P659)rt_nil_check(g_table_680)).lo, (*(P659)rt_nil_check(g_table_680)).hi) - (*(P659)rt_nil_check(g_table_680)).lo];
while ((F->y_985 != NULL)) {
if (((*(P655)rt_nil_check(F->y_985)).decl == F->d_154)) {
F->result_ = F->y_985;
goto ret_;
}
F->y_985 = (*(P655)rt_nil_check(F->y_985)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_158(P655 y_156, rt_int line_157) {
  struct f_define_158fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_156 = y_156;
F->line_157 = line_157;
F->h_986 = f_hash_151(&(*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_156)).name)));
F->z_987 = NULL;
F->z_987 = (*(P659)rt_nil_check(g_table_680)).p[rt_index(F->h_986, (*(P659)rt_nil_check(g_table_680)).lo, (*(P659)rt_nil_check(g_table_680)).hi) - (*(P659)rt_nil_check(g_table_680)).lo];
while ((F->z_987 != NULL)) {
if (((((*(P655)rt_nil_check(F->z_987)).depth == g_depth_683) && rt_str_eq((*(P642)rt_nil_check((*(P655)rt_nil_check(F->z_987)).name)), (*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_156)).name)))) && (!(((f_overloadable_160(F->y_156) && f_overloadable_160(F->z_987)) && ((*(P655)rt_nil_check(F->z_987)).kind == (*(P655)rt_nil_check(F->y_156)).kind)) && (!(f_same_signature_166((*(P655)rt_nil_check(F->y_156)).params, (*(P655)rt_nil_check(F->z_987)).params) && f_same_tt_163((*(P655)rt_nil_check(F->y_156)).decl, (*(P655)rt_nil_check(F->z_987)).decl))))))) {
f_fail_23(F->line_157, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_156)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_987 = (*(P655)rt_nil_check(F->z_987)).chain;
}
(*(P655)rt_nil_check(F->y_156)).depth = g_depth_683;
(*(P655)rt_nil_check(F->y_156)).chain = (*(P659)rt_nil_check(g_table_680)).p[rt_index(F->h_986, (*(P659)rt_nil_check(g_table_680)).lo, (*(P659)rt_nil_check(g_table_680)).hi) - (*(P659)rt_nil_check(g_table_680)).lo];
(*(P659)rt_nil_check(g_table_680)).p[rt_index(F->h_986, (*(P659)rt_nil_check(g_table_680)).lo, (*(P659)rt_nil_check(g_table_680)).hi) - (*(P659)rt_nil_check(g_table_680)).lo] = F->y_156;
(*(P655)rt_nil_check(F->y_156)).stack = g_scope_stack_684;
g_scope_stack_684 = F->y_156;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_160(P655 y_159) {
  struct f_overloadable_160fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_159 = y_159;
F->result_ = ((((*(P655)rt_nil_check(F->y_159)).kind == (((rt_int)3LL))) || ((*(P655)rt_nil_check(F->y_159)).kind == (((rt_int)4LL)))) || ((*(P655)rt_nil_check(F->y_159)).kind == (((rt_int)9LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_163(P647 a_161, P647 b_162) {
  struct f_same_tt_163fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_161 = a_161;
F->b_162 = b_162;
F->x_988 = NULL;
F->y_989 = NULL;
if (((F->a_161 == NULL) || (F->b_162 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_988 = (*(P647)rt_nil_check(F->a_161)).e;
F->y_989 = (*(P647)rt_nil_check(F->b_162)).e;
while (((F->x_988 != NULL) && (F->y_989 != NULL))) {
if ((!rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->x_988)).name)), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->y_989)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_988 = (*(P647)rt_nil_check(F->x_988)).next;
F->y_989 = (*(P647)rt_nil_check(F->y_989)).next;
}
F->result_ = ((F->x_988 == NULL) && (F->y_989 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_166(P657 a_164, P657 b_165) {
  struct f_same_signature_166fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_164 = a_164;
F->b_165 = b_165;
F->x_990 = NULL;
F->x_990 = F->a_164;
F->y_991 = NULL;
F->y_991 = F->b_165;
while (((F->x_990 != NULL) && (F->y_991 != NULL))) {
if ((!f_same_209((*(P657)rt_nil_check(F->x_990)).t, (*(P657)rt_nil_check(F->y_991)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_990 = (*(P657)rt_nil_check(F->x_990)).next;
F->y_991 = (*(P657)rt_nil_check(F->y_991)).next;
}
F->result_ = ((F->x_990 == NULL) && (F->y_991 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_167(void) {
  struct f_open_scope_167fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_683 = rt_add(g_depth_683, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_168(void) {
  struct f_close_scope_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_684 != NULL) && ((*(P655)rt_nil_check(g_scope_stack_684)).depth == g_depth_683))) {
(*(P659)rt_nil_check(g_table_680)).p[rt_index(f_hash_151(&(*(P642)rt_nil_check((*(P655)rt_nil_check(g_scope_stack_684)).name))), (*(P659)rt_nil_check(g_table_680)).lo, (*(P659)rt_nil_check(g_table_680)).hi) - (*(P659)rt_nil_check(g_table_680)).lo] = (*(P655)rt_nil_check(g_scope_stack_684)).chain;
g_scope_stack_684 = (*(P655)rt_nil_check(g_scope_stack_684)).stack;
}
g_depth_683 = rt_sub(g_depth_683, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P655 f_new_sym_171(rt_int kind_169, P642 name_170) {
  struct f_new_sym_171fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_169 = kind_169;
F->name_170 = name_170;
F->y_992 = NULL;
{ R656 *cell993 = rt_alloc(sizeof(R656));
(*cell993).name = NULL;
(*cell993).t = NULL;
(*cell993).c = NULL;
(*cell993).access = NULL;
(*cell993).cname = NULL;
(*cell993).st = NULL;
(*cell993).decl = NULL;
(*cell993).params = NULL;
(*cell993).result = NULL;
(*cell993).members = NULL;
(*cell993).mnext = NULL;
(*cell993).binds = NULL;
(*cell993).insts = NULL;
(*cell993).env = NULL;
(*cell993).chain = NULL;
(*cell993).stack = NULL;
(*cell993).owner = NULL;
(*cell993).gctx = NULL;
(*cell993).mv = NULL;
(*cell993).reqs = NULL;
(*cell993).home = NULL;
F->y_992 = cell993;
}
(*(P655)rt_nil_check(F->y_992)).kind = F->kind_169;
(*(P655)rt_nil_check(F->y_992)).name = F->name_170;
F->result_ = F->y_992;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P651 f_new_typ_173(rt_int kind_172) {
  struct f_new_typ_173fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_172 = kind_172;
F->t_994 = NULL;
{ R652 *cell995 = rt_alloc(sizeof(R652));
(*cell995).name = NULL;
(*cell995).lits = NULL;
(*cell995).elem = NULL;
(*cell995).idx = NULL;
(*cell995).idx2 = NULL;
(*cell995).elemcons = NULL;
(*cell995).elemst = NULL;
(*cell995).under = NULL;
(*cell995).tparams = NULL;
(*cell995).ocap = NULL;
(*cell995).fields = NULL;
(*cell995).target = NULL;
(*cell995).decl = NULL;
(*cell995).cname = NULL;
(*cell995).initp = NULL;
(*cell995).finalp = NULL;
(*cell995).tpsyms = NULL;
(*cell995).gen = NULL;
(*cell995).gbinds = NULL;
(*cell995).next = NULL;
F->t_994 = cell995;
}
(*(P651)rt_nil_check(F->t_994)).kind = F->kind_172;
F->result_ = F->t_994;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P649 f_new_cons_174(void) {
  struct f_new_cons_174fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_996 = NULL;
{ R650 *cell997 = rt_alloc(sizeof(R650));
(*cell997).lo = NULL;
(*cell997).hi = NULL;
(*cell997).lo2 = NULL;
(*cell997).hi2 = NULL;
(*cell997).slen = NULL;
(*cell997).args = NULL;
(*cell997).prec = NULL;
F->c_996 = cell997;
}
F->result_ = F->c_996;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_176(P651 t_175) {
  struct f_scalar_kind_176fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_175 = t_175;
F->result_ = ((F->t_175 != NULL) && ((((*(P651)rt_nil_check(F->t_175)).kind == (((rt_int)1LL))) || ((*(P651)rt_nil_check(F->t_175)).kind == (((rt_int)3LL)))) || ((*(P651)rt_nil_check(F->t_175)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_178(P651 t_177) {
  struct f_bound_ctype_178fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_177 = t_177;
if (((*(P651)rt_nil_check(F->t_177)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
}
F->result_ = rt_str("rt_int", 6);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cbound_181(P649 c_179, rstr *b_180) {
  struct f_cbound_181fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_179 = c_179;
F->b_180 = b_180;
F->p_998 = NULL;
F->p_998 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!(*(P649)rt_nil_check(F->c_179)).dyn) || ((*(P649)rt_nil_check(F->c_179)).lvl <= ((rt_int)0LL)))) {
F->result_ = (*F->b_180);
goto ret_;
}
{ rt_int lo1000 = ((rt_int)1LL), hi1001 = rt_sub(g_cur_level_697, (*(P649)rt_nil_check(F->c_179)).lvl);
for (rt_int it1002 = lo1000; it1002 <= hi1001; it1002++) {
F->i_999 = it1002;
F->p_998 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->p_998)), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->p_998)), rt_str("->", 2)), (*F->b_180));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_183(P649 c_182) {
  struct f_clo_183fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_182 = c_182;
F->result_ = f_cbound_181(F->c_182, &(*(P642)rt_nil_check((*(P649)rt_nil_check(F->c_182)).lo)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_185(P649 c_184) {
  struct f_chi_185fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_184 = c_184;
F->result_ = f_cbound_181(F->c_184, &(*(P642)rt_nil_check((*(P649)rt_nil_check(F->c_184)).hi)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_188(P651 t_186, P649 c_187) {
  struct f_sub_lo_188fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_186 = t_186;
F->c_187 = c_187;
if (((F->c_187 != NULL) && ((*(P649)rt_nil_check(F->c_187)).lo != NULL))) {
F->result_ = f_clo_183(F->c_187);
goto ret_;
} else if (((*(P651)rt_nil_check(F->t_186)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if (((*(P651)rt_nil_check(F->t_186)).kind == (((rt_int)4LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = rt_str("RT_IMIN", 7);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_hi_191(P651 t_189, P649 c_190) {
  struct f_sub_hi_191fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_189 = t_189;
F->c_190 = c_190;
if (((F->c_190 != NULL) && ((*(P649)rt_nil_check(F->c_190)).lo != NULL))) {
F->result_ = f_chi_185(F->c_190);
goto ret_;
} else if (((*(P651)rt_nil_check(F->t_189)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if (((*(P651)rt_nil_check(F->t_189)).kind == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_67((*(P651)rt_nil_check(F->t_189)).lits), ((rt_int)1LL)));
goto ret_;
}
F->result_ = rt_str("RT_IMAX", 7);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_raw_storage_194(rstr *name_192, rstr *ct_193) {
  struct f_raw_storage_194fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_192 = name_192;
F->ct_193 = ct_193;
if ((!g_in_func_696)) {
F->g_1003 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_192)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_690, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_193)), rt_str(" ", 1)), F->g_1003), rt_str(";", 1)); b_; }));
g_st_field_702 = f_mk_3(&F->g_1003);
F->result_ = F->g_1003;
goto ret_;
}
{
F->f_1004 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_192), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_695, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_193)), rt_str(" ", 1)), F->f_1004), rt_str(";", 1)); b_; }));
g_st_field_702 = f_mk_3(&F->f_1004);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1004);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P649 f_copy_cons_196(P649 c_195) {
  struct f_copy_cons_196fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_195 = c_195;
F->r_1005 = NULL;
{ R650 *cell1006 = rt_alloc(sizeof(R650));
(*cell1006).lo = NULL;
(*cell1006).hi = NULL;
(*cell1006).lo2 = NULL;
(*cell1006).hi2 = NULL;
(*cell1006).slen = NULL;
(*cell1006).args = NULL;
(*cell1006).prec = NULL;
F->r_1005 = cell1006;
}
(*(P649)rt_nil_check(F->r_1005)).lo = (*(P649)rt_nil_check(F->c_195)).lo;
(*(P649)rt_nil_check(F->r_1005)).hi = (*(P649)rt_nil_check(F->c_195)).hi;
(*(P649)rt_nil_check(F->r_1005)).lo2 = (*(P649)rt_nil_check(F->c_195)).lo2;
(*(P649)rt_nil_check(F->r_1005)).hi2 = (*(P649)rt_nil_check(F->c_195)).hi2;
(*(P649)rt_nil_check(F->r_1005)).slen = (*(P649)rt_nil_check(F->c_195)).slen;
(*(P649)rt_nil_check(F->r_1005)).mlo = (*(P649)rt_nil_check(F->c_195)).mlo;
(*(P649)rt_nil_check(F->r_1005)).mhi = (*(P649)rt_nil_check(F->c_195)).mhi;
(*(P649)rt_nil_check(F->r_1005)).hasm = (*(P649)rt_nil_check(F->c_195)).hasm;
(*(P649)rt_nil_check(F->r_1005)).args = (*(P649)rt_nil_check(F->c_195)).args;
(*(P649)rt_nil_check(F->r_1005)).dyn = (*(P649)rt_nil_check(F->c_195)).dyn;
(*(P649)rt_nil_check(F->r_1005)).lvl = (*(P649)rt_nil_check(F->c_195)).lvl;
(*(P649)rt_nil_check(F->r_1005)).prec = (*(P649)rt_nil_check(F->c_195)).prec;
F->result_ = F->r_1005;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P649 f_freeze_199(P649 c_197, P651 t_198) {
  struct f_freeze_199fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_197 = c_197;
F->t_198 = t_198;
F->r_1007 = NULL;
F->saved_field_1008 = NULL;
F->saved_field_1008 = g_st_field_702;
if ((((((F->c_197 == NULL) || ((*(P649)rt_nil_check(F->c_197)).lo == NULL)) || (*(P649)rt_nil_check(F->c_197)).hasm) || (*(P649)rt_nil_check(F->c_197)).dyn) || (!f_scalar_kind_176(F->t_198)))) {
F->result_ = F->c_197;
goto ret_;
}
F->r_1007 = f_copy_cons_196(F->c_197);
{
F->ct_1009 = rt_str_copy(f_bound_ctype_178(F->t_198));
F->la_1010 = rt_str_copy(f_raw_storage_194(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1009));
F->lf_1011 = rt_str_copy((*(P642)rt_nil_check(g_st_field_702)));
F->ha_1012 = rt_str_copy(f_raw_storage_194(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1009));
F->hf_1013 = rt_str_copy((*(P642)rt_nil_check(g_st_field_702)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1010, rt_str(" = ", 3)), f_clo_183(F->c_197)), rt_str("; ", 2)), F->ha_1012), rt_str(" = ", 3)), f_chi_185(F->c_197)), rt_str(";", 1)); b_; }));
if (g_in_func_696) {
(*(P649)rt_nil_check(F->r_1007)).lo = f_mk_3(&F->lf_1011);
(*(P649)rt_nil_check(F->r_1007)).hi = f_mk_3(&F->hf_1013);
(*(P649)rt_nil_check(F->r_1007)).dyn = 1;
(*(P649)rt_nil_check(F->r_1007)).lvl = g_cur_level_697;
} else {
(*(P649)rt_nil_check(F->r_1007)).lo = f_mk_3(&F->la_1010);
(*(P649)rt_nil_check(F->r_1007)).hi = f_mk_3(&F->ha_1012);
(*(P649)rt_nil_check(F->r_1007)).dyn = 0;
}
}
g_st_field_702 = F->saved_field_1008;
F->result_ = F->r_1007;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_203(P651 t_200, P649 c_201, rstr *v_202) {
  struct f_checked_203fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_200 = t_200;
F->c_201 = c_201;
F->v_202 = v_202;
if ((((F->c_201 == NULL) || (!f_scalar_kind_176(F->t_200))) || f_suppressed_356(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_202);
goto ret_;
} else if ((((*(P651)rt_nil_check(F->t_200)).kind != (((rt_int)3LL))) && (*(P649)rt_nil_check(F->c_201)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_202)), rt_str(", ", 2)), f_itos_7((*(P649)rt_nil_check(F->c_201)).mlo)), rt_str(", ", 2)), f_itos_7((*(P649)rt_nil_check(F->c_201)).mhi)), rt_str(")", 1));
goto ret_;
} else if (((*(P649)rt_nil_check(F->c_201)).lo == NULL)) {
F->result_ = (*F->v_202);
goto ret_;
} else if (((*(P651)rt_nil_check(F->t_200)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frange(", 10), (*F->v_202)), rt_str(", ", 2)), f_clo_183(F->c_201)), rt_str(", ", 2)), f_chi_185(F->c_201)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_202)), rt_str(", ", 2)), f_clo_183(F->c_201)), rt_str(", ", 2)), f_chi_185(F->c_201)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_lits_206(P647 a_204, P647 b_205) {
  struct f_same_lits_206fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_204 = a_204;
F->b_205 = b_205;
F->x_1014 = NULL;
F->x_1014 = F->a_204;
F->y_1015 = NULL;
F->y_1015 = F->b_205;
while (((F->x_1014 != NULL) && (F->y_1015 != NULL))) {
if ((!rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->x_1014)).name)), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->y_1015)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_1014 = (*(P647)rt_nil_check(F->x_1014)).next;
F->y_1015 = (*(P647)rt_nil_check(F->y_1015)).next;
}
F->result_ = ((F->x_1014 == NULL) && (F->y_1015 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_209(P651 a_207, P651 b_208) {
  struct f_same_209fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_207 = a_207;
F->b_208 = b_208;
if ((F->a_207 == F->b_208)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_207 == NULL) || (F->b_208 == NULL)) || ((*(P651)rt_nil_check(F->a_207)).kind != (*(P651)rt_nil_check(F->b_208)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P651)rt_nil_check(F->a_207)).kind == (((rt_int)1LL))) || ((*(P651)rt_nil_check(F->a_207)).kind == (((rt_int)2LL)))) || ((*(P651)rt_nil_check(F->a_207)).kind == (((rt_int)3LL)))) || ((*(P651)rt_nil_check(F->a_207)).kind == (((rt_int)5LL)))) || ((*(P651)rt_nil_check(F->a_207)).kind == (((rt_int)9LL)))) || ((*(P651)rt_nil_check(F->a_207)).kind == (((rt_int)10LL))))) {
F->result_ = 1;
goto ret_;
}
if (((*(P651)rt_nil_check(F->a_207)).kind == (((rt_int)4LL)))) {
F->result_ = f_same_lits_206((*(P651)rt_nil_check(F->a_207)).lits, (*(P651)rt_nil_check(F->b_208)).lits);
goto ret_;
}
if (((*(P651)rt_nil_check(F->a_207)).kind == (((rt_int)6LL)))) {
if ((((*(P651)rt_nil_check(F->a_207)).idx2 == NULL) != ((*(P651)rt_nil_check(F->b_208)).idx2 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_209((*(P651)rt_nil_check(F->a_207)).elem, (*(P651)rt_nil_check(F->b_208)).elem) && f_same_209((*(P651)rt_nil_check(F->a_207)).idx, (*(P651)rt_nil_check(F->b_208)).idx));
goto ret_;
}
if ((((*(P651)rt_nil_check(F->a_207)).kind == (((rt_int)16LL))) || ((*(P651)rt_nil_check(F->a_207)).kind == (((rt_int)12LL))))) {
F->result_ = f_same_209((*(P651)rt_nil_check(F->a_207)).elem, (*(P651)rt_nil_check(F->b_208)).elem);
goto ret_;
}
if (((*(P651)rt_nil_check(F->a_207)).kind == (((rt_int)7LL)))) {
F->f_1016 = NULL;
F->f_1016 = (*(P651)rt_nil_check(F->a_207)).fields;
F->g_1017 = NULL;
F->g_1017 = (*(P651)rt_nil_check(F->b_208)).fields;
while (((F->f_1016 != NULL) && (F->g_1017 != NULL))) {
if (((!rt_str_eq((*(P642)rt_nil_check((*(P653)rt_nil_check(F->f_1016)).name)), (*(P642)rt_nil_check((*(P653)rt_nil_check(F->g_1017)).name)))) || (!f_same_209((*(P653)rt_nil_check(F->f_1016)).t, (*(P653)rt_nil_check(F->g_1017)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1016 = (*(P653)rt_nil_check(F->f_1016)).next;
F->g_1017 = (*(P653)rt_nil_check(F->g_1017)).next;
}
F->result_ = ((F->f_1016 == NULL) && (F->g_1017 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P651 f_base_of_211(P651 t_210) {
  struct f_base_of_211fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_210 = t_210;
if ((((F->t_210 != NULL) && ((*(P651)rt_nil_check(F->t_210)).kind == (((rt_int)15LL)))) && ((*(P651)rt_nil_check(F->t_210)).tparams == NULL))) {
F->result_ = f_base_of_211((*(P651)rt_nil_check(F->t_210)).under);
goto ret_;
}
F->result_ = F->t_210;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P649 f_base_cons_214(P651 t_212, P649 c_213) {
  struct f_base_cons_214fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_212 = t_212;
F->c_213 = c_213;
if (((((F->t_212 != NULL) && ((*(P651)rt_nil_check(F->t_212)).kind == (((rt_int)15LL)))) && ((*(P651)rt_nil_check(F->t_212)).tparams == NULL)) && ((*(P651)rt_nil_check(F->t_212)).elemcons != NULL))) {
F->result_ = f_base_cons_214((*(P651)rt_nil_check(F->t_212)).under, (*(P651)rt_nil_check(F->t_212)).elemcons);
goto ret_;
}
F->result_ = F->c_213;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_216(P651 t_215) {
  struct f_kind_name_216fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_215 = t_215;
{ rt_int sel1018 = (*(P651)rt_nil_check(F->t_215)).kind;
if (0 || (sel1018 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1018 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1018 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1018 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1018 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1018 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1018 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1018 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_215)).name)));
goto ret_;
} else if (0 || (sel1018 == (((rt_int)11LL)))) {
F->result_ = rt_str("NIL", 3);
goto ret_;
} else {
F->result_ = rt_str("this type", 9);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_type_220(P651 got_217, P651 want_218, rt_int line_219) {
  struct f_check_type_220fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_217 = got_217;
F->want_218 = want_218;
F->line_219 = line_219;
if ((F->want_218 == NULL)) {
goto ret_;
}
if ((((*(P651)rt_nil_check(F->got_217)).kind == (((rt_int)11LL))) && ((*(P651)rt_nil_check(F->want_218)).kind == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_209(F->got_217, F->want_218))) {
f_fail_23(F->line_219, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_216(F->got_217)), rt_str(" where ", 7)), f_kind_name_216(F->want_218)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_222(P651 t_221) {
  struct f_ctype_222fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_221 = t_221;
{ rt_int sel1019 = (*(P651)rt_nil_check(F->t_221)).kind;
if (0 || (sel1019 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1019 == (((rt_int)2LL))) || (sel1019 == (((rt_int)4LL))) || (sel1019 == (((rt_int)10LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1019 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1019 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1019 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1019 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1019 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1019 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1019 == (((rt_int)16LL)))) {
F->result_ = rt_str("rset", 4);
goto ret_;
} else {
if (((*(P651)rt_nil_check(F->t_221)).cname == NULL)) {
f_declare_ctype_226(F->t_221);
} else if (((((*(P651)rt_nil_check(F->t_221)).kind == (((rt_int)7LL))) && (*(P651)rt_nil_check(F->t_221)).forward) && (!(*(P651)rt_nil_check(F->t_221)).defined))) {
(*(P651)rt_nil_check(F->t_221)).defined = 1;
f_put_27(g_out_types_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_221)).cname))), rt_str(" { ", 3)), f_field_decls_224(F->t_221)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_221)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_field_decls_224(P651 t_223) {
  struct f_field_decls_224fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_223 = t_223;
F->f_1020 = NULL;
F->f_1020 = (*(P651)rt_nil_check(F->t_223)).fields;
F->s_1021 = NULL;
F->s_1021 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1020 != NULL)) {
F->s_1021 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->s_1021)), f_ctype_222((*(P653)rt_nil_check(F->f_1020)).t)), rt_str(" ", 1)), f_field_c_17(&(*(P642)rt_nil_check((*(P653)rt_nil_check(F->f_1020)).name)))), rt_str("; ", 2)); b_; }));
F->f_1020 = (*(P653)rt_nil_check(F->f_1020)).next;
}
F->result_ = (*(P642)rt_nil_check(F->s_1021));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_226(P651 t_225) {
  struct f_declare_ctype_226fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_225 = t_225;
F->u_1022 = NULL;
F->u_1022 = g_all_types_685;
if ((((*(P651)rt_nil_check(F->t_225)).kind == (((rt_int)8LL))) && ((*(P651)rt_nil_check(F->t_225)).target == NULL))) {
f_finish_ptr_345(F->t_225);
if (((*(P651)rt_nil_check(F->t_225)).cname != NULL)) {
goto ret_;
}
}
if (((*(P651)rt_nil_check(F->t_225)).kind != (((rt_int)8LL)))) {
while ((F->u_1022 != NULL)) {
if ((((*(P651)rt_nil_check(F->u_1022)).kind == (*(P651)rt_nil_check(F->t_225)).kind) && f_same_209(F->u_1022, F->t_225))) {
(*(P651)rt_nil_check(F->t_225)).cname = (*(P651)rt_nil_check(F->u_1022)).cname;
goto ret_;
}
F->u_1022 = (*(P651)rt_nil_check(F->u_1022)).next;
}
}
if ((((*(P651)rt_nil_check(F->t_225)).kind == (((rt_int)15LL))) && ((*(P651)rt_nil_check(F->t_225)).tparams == NULL))) {
(*(P651)rt_nil_check(F->t_225)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_222((*(P651)rt_nil_check(F->t_225)).under); b_; }));
goto ret_;
}
if (((*(P651)rt_nil_check(F->t_225)).kind == (((rt_int)6LL)))) {
(*(P651)rt_nil_check(F->t_225)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P651)rt_nil_check(F->t_225)).kind == (((rt_int)15LL)))) {
(*(P651)rt_nil_check(F->t_225)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((*(P651)rt_nil_check(F->t_225)).kind == (((rt_int)7LL)))) {
(*(P651)rt_nil_check(F->t_225)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P651)rt_nil_check(F->t_225)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P651)rt_nil_check(F->t_225)).next = g_all_types_685;
g_all_types_685 = F->t_225;
if (((*(P651)rt_nil_check(F->t_225)).kind == (((rt_int)8LL)))) {
F->target_1023 = NULL;
F->target_1023 = (*(P651)rt_nil_check(F->t_225)).target;
if (((*(P651)rt_nil_check(F->target_1023)).kind == (((rt_int)7LL)))) {
if (((*(P651)rt_nil_check(F->target_1023)).cname == NULL)) {
(*(P651)rt_nil_check(F->target_1023)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P651)rt_nil_check(F->target_1023)).next = g_all_types_685;
g_all_types_685 = F->target_1023;
f_put_27(g_out_types_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->target_1023)).cname))), rt_str(" ", 1)), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->target_1023)).cname))), rt_str(";", 1)); b_; }));
(*(P651)rt_nil_check(F->target_1023)).forward = 1;
}
f_put_27(g_out_types_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->target_1023)).cname))), rt_str(" *", 2)), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_225)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_222(F->target_1023)), rt_str(" *", 2)), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_225)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P651)rt_nil_check(F->t_225)).kind == (((rt_int)6LL)))) {
f_put_27(g_out_types_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_225)).cname))), rt_str(" ", 1)), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_225)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_225)).cname))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_222((*(P651)rt_nil_check(F->t_225)).elem)), rt_str(" *p; };", 7)); b_; }));
} else if (((*(P651)rt_nil_check(F->t_225)).kind == (((rt_int)15LL)))) {
F->p_1024 = NULL;
F->p_1024 = (*(P651)rt_nil_check(F->t_225)).tparams;
F->fs_1025 = NULL;
F->fs_1025 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1024 != NULL)) {
F->fs_1025 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->fs_1025)), f_ctype_222(f_tparam_type_262(F->t_225, &(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1024)).name))))), rt_str(" p_", 3)), f_lower_s_15(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1024)).name)))), rt_str("; ", 2)); b_; }));
F->p_1024 = (*(P647)rt_nil_check(F->p_1024)).next;
}
f_put_27(g_out_types_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_225)).cname))), rt_str(" ", 1)), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_225)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_225)).cname))), rt_str(" {", 2)), (*(P642)rt_nil_check(F->fs_1025))), f_ctype_222((*(P651)rt_nil_check(F->t_225)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_225)).cname))), rt_str(" ", 1)), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_225)).cname))), rt_str(";", 1)); b_; }));
(*(P651)rt_nil_check(F->t_225)).defined = 1;
f_put_27(g_out_types_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_225)).cname))), rt_str(" { ", 3)), f_field_decls_224(F->t_225)), rt_str(" };", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_init_ascii_227(void) {
  struct f_init_ascii_227fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1026 = NULL;
F->tail_1027 = NULL;
F->start_1028 = ((rt_int)1LL);
{ rt_int lo1030 = ((rt_int)1LL), hi1031 = ((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len;
for (rt_int it1032 = lo1030; it1032 <= hi1031; it1032++) {
F->i_1029 = it1032;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1029) == 32)) {
F->lit_1033 = NULL;
F->lit_1033 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P647)rt_nil_check(F->lit_1033)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->start_1028, rt_sub(F->i_1029, ((rt_int)1LL))); b_; }));
f_append_65(&F->head_1026, &F->tail_1027, F->lit_1033);
F->start_1028 = rt_add(F->i_1029, ((rt_int)1LL));
}
}
}
g_ty_ascii_725 = f_new_typ_173((((rt_int)4LL)));
(*(P651)rt_nil_check(g_ty_ascii_725)).lits = F->head_1026;
(*(P651)rt_nil_check(g_ty_ascii_725)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rt_int f_lit_index_230(P647 lits_228, rstr *name_229) {
  struct f_lit_index_230fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_228 = lits_228;
F->name_229 = name_229;
F->i_1034 = ((rt_int)0LL);
F->l_1035 = NULL;
F->l_1035 = F->lits_228;
while ((F->l_1035 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->l_1035)).name)), (*F->name_229))) {
F->result_ = F->i_1034;
goto ret_;
}
F->i_1034 = rt_add(F->i_1034, ((rt_int)1LL));
F->l_1035 = (*(P647)rt_nil_check(F->l_1035)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P651 f_resolve_subtype_233(P647 st_231, P649 *c_232) {
  struct f_resolve_subtype_233fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_231 = st_231;
F->c_232 = c_232;
F->c_232v = *F->c_232;
F->t_1036 = NULL;
F->dummy_1038 = NULL;
F->c_232v = f_new_cons_174();
{ rt_int sel1039 = (*(P647)rt_nil_check(F->st_231)).kind;
if (0 || (sel1039 == (((rt_int)70LL)))) {
if (((*(P647)rt_nil_check(F->st_231)).a != NULL)) {
(*(P649)rt_nil_check(F->c_232v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_555((*(P647)rt_nil_check(F->st_231)).a, g_ty_int_722, &F->dummy_1038); b_; }));
(*(P649)rt_nil_check(F->c_232v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_555((*(P647)rt_nil_check(F->st_231)).b, g_ty_int_722, &F->dummy_1038); b_; }));
(*(P649)rt_nil_check(F->c_232v)).mlo = f_manifest_269((*(P647)rt_nil_check(F->st_231)).a, &F->ok_1037);
(*(P649)rt_nil_check(F->c_232v)).hasm = F->ok_1037;
(*(P649)rt_nil_check(F->c_232v)).mhi = f_manifest_269((*(P647)rt_nil_check(F->st_231)).b, &F->ok_1037);
(*(P649)rt_nil_check(F->c_232v)).hasm = ((*(P649)rt_nil_check(F->c_232v)).hasm && F->ok_1037);
}
F->result_ = g_ty_int_722;
goto ret_;
} else if (0 || (sel1039 == (((rt_int)71LL)))) {
if (((*(P647)rt_nil_check(F->st_231)).a != NULL)) {
(*(P649)rt_nil_check(F->c_232v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_555((*(P647)rt_nil_check(F->st_231)).a, g_ty_int_722, &F->dummy_1038); b_; }));
}
if (((*(P647)rt_nil_check(F->st_231)).b != NULL)) {
(*(P649)rt_nil_check(F->c_232v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_555((*(P647)rt_nil_check(F->st_231)).b, g_ty_float_724, &F->dummy_1038); b_; }));
(*(P649)rt_nil_check(F->c_232v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_555((*(P647)rt_nil_check(F->st_231)).c, g_ty_float_724, &F->dummy_1038); b_; }));
(*(P649)rt_nil_check(F->c_232v)).hasm = (f_float_lit_235((*(P647)rt_nil_check(F->st_231)).b) && f_float_lit_235((*(P647)rt_nil_check(F->st_231)).c));
}
F->result_ = g_ty_float_724;
goto ret_;
} else if (0 || (sel1039 == (((rt_int)72LL)))) {
F->t_1036 = f_new_typ_173((((rt_int)4LL)));
(*(P651)rt_nil_check(F->t_1036)).lits = (*(P647)rt_nil_check(F->st_231)).a;
if (((*(P647)rt_nil_check(F->st_231)).b != NULL)) {
(*(P649)rt_nil_check(F->c_232v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_555((*(P647)rt_nil_check(F->st_231)).b, F->t_1036, &F->dummy_1038); b_; }));
(*(P649)rt_nil_check(F->c_232v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_555((*(P647)rt_nil_check(F->st_231)).c, F->t_1036, &F->dummy_1038); b_; }));
if ((((*(P647)rt_nil_check((*(P647)rt_nil_check(F->st_231)).b)).kind == (((rt_int)4LL))) && ((*(P647)rt_nil_check((*(P647)rt_nil_check(F->st_231)).c)).kind == (((rt_int)4LL))))) {
(*(P649)rt_nil_check(F->c_232v)).mlo = f_lit_index_230((*(P651)rt_nil_check(F->t_1036)).lits, &(*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->st_231)).b)).name)));
(*(P649)rt_nil_check(F->c_232v)).mhi = f_lit_index_230((*(P651)rt_nil_check(F->t_1036)).lits, &(*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->st_231)).c)).name)));
(*(P649)rt_nil_check(F->c_232v)).hasm = 1;
}
}
F->result_ = F->t_1036;
goto ret_;
} else if (0 || (sel1039 == (((rt_int)73LL)))) {
F->t_1036 = f_resolve_subtype_233((*(P647)rt_nil_check(F->st_231)).a, &F->c_232v);
if ((!f_same_209(F->t_1036, g_ty_ascii_725))) {
f_fail_23((*(P647)rt_nil_check(F->st_231)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
F->c_232v = f_new_cons_174();
if (((*(P647)rt_nil_check(F->st_231)).b != NULL)) {
(*(P649)rt_nil_check(F->c_232v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_555((*(P647)rt_nil_check(F->st_231)).b, g_ty_int_722, &F->dummy_1038); b_; }));
}
F->result_ = g_ty_string_726;
goto ret_;
} else if (0 || (sel1039 == (((rt_int)74LL)))) {
if ((f_list_len_67((*(P647)rt_nil_check(F->st_231)).a) > ((rt_int)2LL))) {
f_fail_23((*(P647)rt_nil_check(F->st_231)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("arrays of more than two dimensions are not handled", 50); b_; }));
}
{
F->ic_1040 = NULL;
F->ic2_1041 = NULL;
F->ec_1042 = NULL;
F->it_1043 = NULL;
F->it_1043 = f_resolve_subtype_233((*(P647)rt_nil_check(F->st_231)).a, &F->ic_1040);
F->et_1044 = NULL;
F->et_1044 = f_resolve_subtype_233((*(P647)rt_nil_check(F->st_231)).b, &F->ec_1042);
F->ic_1040 = f_base_cons_214(F->it_1043, F->ic_1040);
F->t_1036 = f_new_typ_173((((rt_int)6LL)));
(*(P651)rt_nil_check(F->t_1036)).idx = F->it_1043;
(*(P651)rt_nil_check(F->t_1036)).elem = F->et_1044;
(*(P651)rt_nil_check(F->t_1036)).elemcons = F->ec_1042;
(*(P651)rt_nil_check(F->t_1036)).elemst = (*(P647)rt_nil_check(F->st_231)).b;
if (((*(P649)rt_nil_check(F->ic_1040)).lo != NULL)) {
(*(P649)rt_nil_check(F->c_232v)).lo = (*(P649)rt_nil_check(F->ic_1040)).lo;
(*(P649)rt_nil_check(F->c_232v)).hi = (*(P649)rt_nil_check(F->ic_1040)).hi;
} else if (((*(P651)rt_nil_check(f_base_of_211(F->it_1043))).kind == (((rt_int)4LL)))) {
(*(P649)rt_nil_check(F->c_232v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P649)rt_nil_check(F->c_232v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P651)rt_nil_check(f_base_of_211(F->it_1043))).lits), ((rt_int)1LL))); b_; }));
}
(*(P649)rt_nil_check(F->c_232v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P649)rt_nil_check(F->c_232v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
if (((*(P647)rt_nil_check((*(P647)rt_nil_check(F->st_231)).a)).next != NULL)) {
(*(P651)rt_nil_check(F->t_1036)).idx2 = f_resolve_subtype_233((*(P647)rt_nil_check((*(P647)rt_nil_check(F->st_231)).a)).next, &F->ic2_1041);
if (((*(P649)rt_nil_check(F->ic2_1041)).lo != NULL)) {
(*(P649)rt_nil_check(F->c_232v)).lo2 = (*(P649)rt_nil_check(F->ic2_1041)).lo;
(*(P649)rt_nil_check(F->c_232v)).hi2 = (*(P649)rt_nil_check(F->ic2_1041)).hi;
} else if (((*(P651)rt_nil_check((*(P651)rt_nil_check(F->t_1036)).idx2)).kind == (((rt_int)4LL)))) {
(*(P649)rt_nil_check(F->c_232v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P649)rt_nil_check(F->c_232v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P651)rt_nil_check((*(P651)rt_nil_check(F->t_1036)).idx2)).lits), ((rt_int)1LL))); b_; }));
}
}
}
F->result_ = F->t_1036;
goto ret_;
} else if (0 || (sel1039 == (((rt_int)77LL)))) {
F->t_1036 = f_new_typ_173((((rt_int)16LL)));
{
F->ec_1045 = NULL;
(*(P651)rt_nil_check(F->t_1036)).elem = f_resolve_subtype_233((*(P647)rt_nil_check(F->st_231)).a, &F->ec_1045);
(*(P651)rt_nil_check(F->t_1036)).elemcons = F->ec_1045;
}
F->result_ = F->t_1036;
goto ret_;
} else if (0 || (sel1039 == (((rt_int)75LL)))) {
F->t_1036 = f_new_typ_173((((rt_int)7LL)));
{
F->comp_1046 = NULL;
F->comp_1046 = (*(P647)rt_nil_check(F->st_231)).a;
F->tail_1047 = NULL;
while ((F->comp_1046 != NULL)) {
F->cc_1048 = NULL;
F->f_1049 = NULL;
{ R654 *cell1050 = rt_alloc(sizeof(R654));
(*cell1050).name = NULL;
(*cell1050).t = NULL;
(*cell1050).c = NULL;
(*cell1050).st = NULL;
(*cell1050).next = NULL;
F->f_1049 = cell1050;
}
(*(P653)rt_nil_check(F->f_1049)).name = (*(P647)rt_nil_check(F->comp_1046)).name;
(*(P653)rt_nil_check(F->f_1049)).t = f_resolve_subtype_233((*(P647)rt_nil_check(F->comp_1046)).a, &F->cc_1048);
(*(P653)rt_nil_check(F->f_1049)).c = F->cc_1048;
(*(P653)rt_nil_check(F->f_1049)).st = (*(P647)rt_nil_check(F->comp_1046)).a;
if ((F->tail_1047 == NULL)) {
(*(P651)rt_nil_check(F->t_1036)).fields = F->f_1049;
} else {
(*(P653)rt_nil_check(F->tail_1047)).next = F->f_1049;
}
F->tail_1047 = F->f_1049;
F->comp_1046 = (*(P647)rt_nil_check(F->comp_1046)).next;
}
}
F->result_ = F->t_1036;
goto ret_;
} else if (0 || (sel1039 == (((rt_int)79LL)))) {
F->result_ = g_ty_file_728;
goto ret_;
} else if (0 || (sel1039 == (((rt_int)78LL)))) {
if (((f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P655)rt_nil_check(f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1051 = NULL;
F->gt_1051 = f_copy_node_560((*(P647)rt_nil_check(F->st_231)).a);
(*(P647)rt_nil_check(F->gt_1051)).next = NULL;
F->result_ = f_instantiate_type_502(f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1051, (*(P647)rt_nil_check(F->st_231)).b, &F->c_232v, (*(P647)rt_nil_check(F->st_231)).line);
goto ret_;
}
{
F->ec_1052 = NULL;
F->t_1036 = f_new_typ_173((((rt_int)12LL)));
(*(P651)rt_nil_check(F->t_1036)).elem = f_resolve_subtype_233((*(P647)rt_nil_check(F->st_231)).a, &F->ec_1052);
(*(P651)rt_nil_check(F->t_1036)).elemcons = F->ec_1052;
if (((*(P647)rt_nil_check(F->st_231)).b != NULL)) {
(*(P649)rt_nil_check(F->c_232v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_555((*(P647)rt_nil_check(F->st_231)).b, g_ty_int_722, &F->dummy_1038); b_; }));
}
}
F->result_ = F->t_1036;
goto ret_;
} else if (0 || (sel1039 == (((rt_int)80LL)))) {
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->st_231)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_723;
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->st_231)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_725;
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->st_231)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_730;
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->st_231)).name)), rt_str("LATCH", 5))) {
F->result_ = g_ty_latch_731;
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->st_231)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_732;
goto ret_;
}
{
F->y_1053 = NULL;
F->y_1053 = f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->st_231)).name)));
if ((F->y_1053 == NULL)) {
f_fail_23((*(P647)rt_nil_check(F->st_231)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->st_231)).name))); b_; }));
}
if ((((*(P655)rt_nil_check(F->y_1053)).kind == (((rt_int)10LL))) && (((*(P647)rt_nil_check((*(P647)rt_nil_check((*(P655)rt_nil_check(F->y_1053)).decl)).b)).kind == (((rt_int)43LL))) || ((*(P647)rt_nil_check((*(P647)rt_nil_check((*(P655)rt_nil_check(F->y_1053)).decl)).b)).kind == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_502(F->y_1053, (*(P647)rt_nil_check(F->st_231)).a, (*(P647)rt_nil_check(F->st_231)).b, &F->c_232v, (*(P647)rt_nil_check(F->st_231)).line);
goto ret_;
}
if (((((*(P655)rt_nil_check(F->y_1053)).kind == (((rt_int)5LL))) && ((*(P655)rt_nil_check(F->y_1053)).t != NULL)) && ((*(P651)rt_nil_check((*(P655)rt_nil_check(F->y_1053)).t)).kind == (((rt_int)15LL))))) {
F->result_ = f_new_type_247(F->y_1053, F->st_231, &F->c_232v);
goto ret_;
}
if (((((*(P655)rt_nil_check(F->y_1053)).kind == (((rt_int)6LL))) || ((*(P655)rt_nil_check(F->y_1053)).kind == (((rt_int)5LL)))) && ((*(P655)rt_nil_check(F->y_1053)).t != NULL))) {
if (((*(P655)rt_nil_check(F->y_1053)).c != NULL)) {
F->c_232v = (*(P655)rt_nil_check(F->y_1053)).c;
}
F->result_ = (*(P655)rt_nil_check(F->y_1053)).t;
goto ret_;
}
if (((((*(P655)rt_nil_check(F->y_1053)).kind == (((rt_int)5LL))) && ((*(P655)rt_nil_check(F->y_1053)).decl != NULL)) && ((*(P647)rt_nil_check((*(P655)rt_nil_check(F->y_1053)).decl)).kind == (((rt_int)43LL))))) {
F->result_ = f_new_type_247(F->y_1053, F->st_231, &F->c_232v);
goto ret_;
}
if ((((*(P655)rt_nil_check(F->y_1053)).kind == (((rt_int)6LL))) || ((*(P655)rt_nil_check(F->y_1053)).kind == (((rt_int)5LL))))) {
F->result_ = f_resolve_subtype_233((*(P655)rt_nil_check(F->y_1053)).st, &F->c_232v);
goto ret_;
}
f_fail_23((*(P647)rt_nil_check(F->st_231)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->st_231)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_23((*(P647)rt_nil_check(F->st_231)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_232) = F->c_232v;
  RT_FPOP();
  return F->result_;
}

static int f_float_lit_235(P647 e_234) {
  struct f_float_lit_235fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_234 = e_234;
if ((((*(P647)rt_nil_check(F->e_234)).kind == (((rt_int)8LL))) && (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_234)).name)), rt_str("-", 1)) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_234)).name)), rt_str("+", 1))))) {
F->result_ = f_float_lit_235((*(P647)rt_nil_check(F->e_234)).a);
goto ret_;
}
F->result_ = (((*(P647)rt_nil_check(F->e_234)).kind == (((rt_int)2LL))) || ((*(P647)rt_nil_check(F->e_234)).kind == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_237(P651 t_236) {
  struct f_opened_237fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_236 = t_236;
F->c_1054 = NULL;
F->c_1054 = g_caps_699;
if (((((*(P651)rt_nil_check(F->t_236)).kind != (((rt_int)15LL))) || ((*(P651)rt_nil_check(F->t_236)).ocap == NULL)) || ((*(P647)rt_nil_check((*(P651)rt_nil_check(F->t_236)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1054 != NULL)) {
if (((*(P671)rt_nil_check(F->c_1054)).d == (*(P651)rt_nil_check(F->t_236)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1054 = (*(P671)rt_nil_check(F->c_1054)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_replace_all_241(rstr *s_238, rstr *pat_239, rstr *r_240) {
  struct f_replace_all_241fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_238 = s_238;
F->pat_239 = pat_239;
F->r_240 = r_240;
F->i_1055 = ((rt_int)1LL);
if (((((*F->pat_239)).len == ((rt_int)0LL)) || (((*F->s_238)).len < ((*F->pat_239)).len))) {
F->result_ = (*F->s_238);
goto ret_;
}
while ((rt_sub(rt_add(F->i_1055, ((*F->pat_239)).len), ((rt_int)1LL)) <= ((*F->s_238)).len)) {
if (rt_str_eq(rt_str_slice((*F->s_238), F->i_1055, rt_sub(rt_add(F->i_1055, ((*F->pat_239)).len), ((rt_int)1LL))), (*F->pat_239))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_238), ((rt_int)1LL), rt_sub(F->i_1055, ((rt_int)1LL))), (*F->r_240)), f_replace_all_241(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_238), rt_add(F->i_1055, ((*F->pat_239)).len), ((*F->s_238)).len); b_; }), &(*F->pat_239), &(*F->r_240)));
goto ret_;
}
F->i_1055 = rt_add(F->i_1055, ((rt_int)1LL));
}
F->result_ = (*F->s_238);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_subst_243(rstr *s_242) {
  struct f_subst_243fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_242 = s_242;
F->l_1056 = NULL;
F->l_1056 = g_psub_701;
F->r_1057 = NULL;
F->r_1057 = f_mk_3(&(*F->s_242));
while ((F->l_1056 != NULL)) {
F->r_1057 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_241(&(*(P642)rt_nil_check(F->r_1057)), &(*(P642)rt_nil_check((*(P665)rt_nil_check(F->l_1056)).s)), &(*(P642)rt_nil_check((*(P665)rt_nil_check((*(P665)rt_nil_check(F->l_1056)).next)).s))); b_; }));
F->l_1056 = (*(P665)rt_nil_check((*(P665)rt_nil_check(F->l_1056)).next)).next;
}
F->result_ = (*(P642)rt_nil_check(F->r_1057));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P651 f_new_type_247(P655 y_244, P647 st_245, P649 *c_246) {
  struct f_new_type_247fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_244 = y_244;
F->st_245 = st_245;
F->c_246 = c_246;
F->c_246v = *F->c_246;
F->d_1058 = NULL;
F->d_1058 = (*(P655)rt_nil_check(F->y_244)).decl;
F->p_1059 = NULL;
F->uc_1060 = NULL;
F->c_246v = f_new_cons_174();
if (((*(P655)rt_nil_check(F->y_244)).t == NULL)) {
(*(P655)rt_nil_check(F->y_244)).t = f_new_typ_173((((rt_int)15LL)));
(*(P651)rt_nil_check((*(P655)rt_nil_check(F->y_244)).t)).name = (*(P655)rt_nil_check(F->y_244)).name;
(*(P651)rt_nil_check((*(P655)rt_nil_check(F->y_244)).t)).decl = F->d_1058;
(*(P651)rt_nil_check((*(P655)rt_nil_check(F->y_244)).t)).tparams = (*(P647)rt_nil_check(F->d_1058)).b;
if ((g_caps_699 != NULL)) {
(*(P651)rt_nil_check((*(P655)rt_nil_check(F->y_244)).t)).ocap = (*(P671)rt_nil_check(g_caps_699)).d;
}
f_open_scope_167();
F->p_1059 = (*(P647)rt_nil_check(F->d_1058)).b;
while ((F->p_1059 != NULL)) {
F->z_1061 = NULL;
F->z_1061 = f_new_sym_171((((rt_int)2LL)), (*(P647)rt_nil_check(F->p_1059)).name);
F->zc_1062 = NULL;
(*(P655)rt_nil_check(F->z_1061)).t = f_resolve_subtype_233((*(P647)rt_nil_check(F->p_1059)).a, &F->zc_1062);
(*(P655)rt_nil_check(F->z_1061)).mnext = (*(P651)rt_nil_check((*(P655)rt_nil_check(F->y_244)).t)).tpsyms;
(*(P651)rt_nil_check((*(P655)rt_nil_check(F->y_244)).t)).tpsyms = F->z_1061;
(*(P655)rt_nil_check(F->z_1061)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1059)).name)))), rt_str("@", 1)); b_; }));
f_define_158(F->z_1061, (*(P647)rt_nil_check(F->d_1058)).line);
F->p_1059 = (*(P647)rt_nil_check(F->p_1059)).next;
}
(*(P651)rt_nil_check((*(P655)rt_nil_check(F->y_244)).t)).under = f_resolve_subtype_233((*(P647)rt_nil_check(F->d_1058)).a, &F->uc_1060);
(*(P651)rt_nil_check((*(P655)rt_nil_check(F->y_244)).t)).elemcons = F->uc_1060;
f_close_scope_168();
}
(*(P649)rt_nil_check(F->c_246v)).args = (*(P647)rt_nil_check(F->st_245)).b;
F->result_ = (*(P655)rt_nil_check(F->y_244)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_246) = F->c_246v;
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_251(rstr *lval_248, P651 t_249, P649 c_250) {
  struct f_init_storage_251fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_248 = lval_248;
F->t_249 = t_249;
F->c_250 = c_250;
f_make_storage_266(&(*F->lval_248), F->t_249, F->c_250);
if (((*(P651)rt_nil_check(F->t_249)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_254((*(P651)rt_nil_check(F->t_249)).initp, &(*F->lval_248)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_254(P655 y_252, rstr *lval_253) {
  struct f_init_call_254fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_252 = y_252;
F->lval_253 = lval_253;
F->link_1063 = NULL;
F->link_1063 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P655)rt_nil_check(F->y_252)).level > ((rt_int)0LL))) {
F->link_1063 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1065 = ((rt_int)1LL), hi1066 = rt_sub(g_cur_level_697, (*(P655)rt_nil_check(F->y_252)).level);
for (rt_int it1067 = lo1065; it1067 <= hi1066; it1067++) {
F->i_1064 = it1067;
F->link_1063 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->link_1063)), rt_str("->up", 4)); b_; }));
}
}
F->link_1063 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->link_1063)), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_252)).cname)), rt_str("(", 1)), (*(P642)rt_nil_check(F->link_1063))), rt_str("&", 1)), (*F->lval_253)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_256(P651 t_255) {
  struct f_needs_fin_256fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_255 = t_255;
if ((F->t_255 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P651)rt_nil_check(F->t_255)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if (((*(P651)rt_nil_check(F->t_255)).kind == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_256((*(P651)rt_nil_check(F->t_255)).under);
goto ret_;
} else if (((*(P651)rt_nil_check(F->t_255)).kind == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_256((*(P651)rt_nil_check(F->t_255)).elem);
goto ret_;
} else if (((*(P651)rt_nil_check(F->t_255)).kind == (((rt_int)7LL)))) {
F->f_1068 = NULL;
F->f_1068 = (*(P651)rt_nil_check(F->t_255)).fields;
while ((F->f_1068 != NULL)) {
if (f_needs_fin_256((*(P653)rt_nil_check(F->f_1068)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1068 = (*(P653)rt_nil_check(F->f_1068)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_259(rstr *lval_257, P651 t_258) {
  struct f_fin_code_259fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_257 = lval_257;
F->t_258 = t_258;
F->r_1069 = NULL;
F->r_1069 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P651)rt_nil_check(F->t_258)).finalp != NULL)) {
F->r_1069 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_254((*(P651)rt_nil_check(F->t_258)).finalp, &(*F->lval_257)), rt_str(" ", 1)); b_; }));
}
if ((((*(P651)rt_nil_check(F->t_258)).kind == (((rt_int)15LL))) && ((*(P651)rt_nil_check(F->t_258)).tparams == NULL))) {
F->result_ = rt_str_cat((*(P642)rt_nil_check(F->r_1069)), f_fin_code_259(&(*F->lval_257), (*(P651)rt_nil_check(F->t_258)).under));
goto ret_;
} else if (((*(P651)rt_nil_check(F->t_258)).kind == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((*(P642)rt_nil_check(F->r_1069)), f_fin_code_259(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_257), rt_str(".all", 4)); b_; }), (*(P651)rt_nil_check(F->t_258)).under));
goto ret_;
} else if ((((*(P651)rt_nil_check(F->t_258)).kind == (((rt_int)6LL))) && f_needs_fin_256((*(P651)rt_nil_check(F->t_258)).elem))) {
F->i_1070 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->r_1069)), rt_str("for (rt_int ", 12)), F->i_1070), rt_str(" = 0; ", 6)), F->i_1070), rt_str(" < RT_CNT(", 10)), (*F->lval_257)), rt_str("); ", 3)), F->i_1070), rt_str("++) { ", 6)), f_fin_code_259(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_257), rt_str(".p[", 3)), F->i_1070), rt_str("]", 1)); b_; }), (*(P651)rt_nil_check(F->t_258)).elem)), rt_str(" }", 2));
goto ret_;
} else if (((*(P651)rt_nil_check(F->t_258)).kind == (((rt_int)7LL)))) {
F->f_1071 = NULL;
F->f_1071 = (*(P651)rt_nil_check(F->t_258)).fields;
while ((F->f_1071 != NULL)) {
if (f_needs_fin_256((*(P653)rt_nil_check(F->f_1071)).t)) {
F->r_1069 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->r_1069)), f_fin_code_259(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_257), rt_str(".", 1)), f_field_c_17(&(*(P642)rt_nil_check((*(P653)rt_nil_check(F->f_1071)).name)))); b_; }), (*(P653)rt_nil_check(F->f_1071)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1071 = (*(P653)rt_nil_check(F->f_1071)).next;
}
}
F->result_ = (*(P642)rt_nil_check(F->r_1069));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P651 f_tparam_type_262(P651 t_260, rstr *name_261) {
  struct f_tparam_type_262fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_260 = t_260;
F->name_261 = name_261;
F->z_1072 = NULL;
F->z_1072 = (*(P651)rt_nil_check(F->t_260)).tpsyms;
while ((F->z_1072 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P655)rt_nil_check(F->z_1072)).name)), (*F->name_261))) {
F->result_ = (*(P655)rt_nil_check(F->z_1072)).t;
goto ret_;
}
F->z_1072 = (*(P655)rt_nil_check(F->z_1072)).mnext;
}
F->result_ = g_ty_int_722;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_266(rstr *lval_263, P651 t_264, P649 c_265) {
  struct f_make_storage_266fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_263 = lval_263;
F->t_264 = t_264;
F->c_265 = c_265;
if (((*(P651)rt_nil_check(F->t_264)).kind == (((rt_int)15LL)))) {
F->p_1073 = NULL;
F->p_1073 = (*(P651)rt_nil_check(F->t_264)).tparams;
F->a_1074 = NULL;
F->a_1074 = (*(P649)rt_nil_check(F->c_265)).args;
F->uc_1075 = NULL;
F->ut_1076 = NULL;
F->at_1077 = NULL;
if ((f_list_len_67(F->a_1074) != f_list_len_67(F->p_1073))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_264)).name))), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1073))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1073 != NULL)) {
F->pt_1078 = f_tparam_type_262(F->t_264, &(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1073)).name)));
F->v_1079 = rt_str_copy(f_gexpr_555(F->a_1074, F->pt_1078, &F->at_1077));
f_check_type_220(F->at_1077, F->pt_1078, (*(P647)rt_nil_check(F->a_1074)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_263), rt_str(".p_", 3)), f_lower_s_15(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1073)).name)))), rt_str(" = ", 3)), F->v_1079), rt_str(";", 1)); b_; }));
F->p_1073 = (*(P647)rt_nil_check(F->p_1073)).next;
F->a_1074 = (*(P647)rt_nil_check(F->a_1074)).next;
}
{
F->saved_1080 = NULL;
F->saved_1080 = g_psub_701;
F->p_1073 = (*(P651)rt_nil_check(F->t_264)).tparams;
while ((F->p_1073 != NULL)) {
F->l1_1081 = NULL;
F->l2_1082 = NULL;
{ R666 *cell1083 = rt_alloc(sizeof(R666));
(*cell1083).s = NULL;
(*cell1083).next = NULL;
F->l1_1081 = cell1083;
}
{ R666 *cell1084 = rt_alloc(sizeof(R666));
(*cell1084).s = NULL;
(*cell1084).next = NULL;
F->l2_1082 = cell1084;
}
(*(P665)rt_nil_check(F->l1_1081)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1073)).name)))), rt_str("@", 1)); b_; }));
(*(P665)rt_nil_check(F->l2_1082)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_263), rt_str(".p_", 3)), f_lower_s_15(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1073)).name)))); b_; }));
(*(P665)rt_nil_check(F->l1_1081)).next = F->l2_1082;
(*(P665)rt_nil_check(F->l2_1082)).next = g_psub_701;
g_psub_701 = F->l1_1081;
F->p_1073 = (*(P647)rt_nil_check(F->p_1073)).next;
}
if (((*(P651)rt_nil_check(F->t_264)).tparams == NULL)) {
f_init_storage_251(&(*F->lval_263), (*(P651)rt_nil_check(F->t_264)).under, (*(P651)rt_nil_check(F->t_264)).elemcons);
} else {
f_init_storage_251(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_263), rt_str(".all", 4)); b_; }), (*(P651)rt_nil_check(F->t_264)).under, (*(P651)rt_nil_check(F->t_264)).elemcons);
}
g_psub_701 = F->saved_1080;
}
} else if (((*(P651)rt_nil_check(F->t_264)).kind == (((rt_int)12LL)))) {
if (((*(P649)rt_nil_check(F->c_265)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_263), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_263)), rt_str(", ", 2)), f_subst_243(&(*(P642)rt_nil_check((*(P649)rt_nil_check(F->c_265)).lo)))), rt_str(", sizeof(", 9)), f_ctype_222((*(P651)rt_nil_check(F->t_264)).elem)), rt_str("), ", 3)), f_mcopy_290((*(P651)rt_nil_check(F->t_264)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P651)rt_nil_check(F->t_264)).kind == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_263)), rt_str(");", 2)); b_; }));
} else if (((*(P651)rt_nil_check(F->t_264)).kind == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_263), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if (((*(P651)rt_nil_check(F->t_264)).kind == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_263), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P651)rt_nil_check(F->t_264)).kind == (((rt_int)5LL)))) {
if (((*(P649)rt_nil_check(F->c_265)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_263), rt_str(" = rt_str_new(", 14)), f_subst_243(&(*(P642)rt_nil_check((*(P649)rt_nil_check(F->c_265)).slen)))), rt_str(");", 2)); b_; }));
} else if (((*(P651)rt_nil_check(F->t_264)).kind == (((rt_int)6LL)))) {
if (((*(P649)rt_nil_check(F->c_265)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_263), rt_str(".lo = ", 6)), f_subst_243(&(*(P642)rt_nil_check((*(P649)rt_nil_check(F->c_265)).lo)))), rt_str("; ", 2)), (*F->lval_263)), rt_str(".hi = ", 6)), f_subst_243(&(*(P642)rt_nil_check((*(P649)rt_nil_check(F->c_265)).hi)))), rt_str("; ", 2)), (*F->lval_263)), rt_str(".lo2 = ", 7)), f_subst_243(&(*(P642)rt_nil_check((*(P649)rt_nil_check(F->c_265)).lo2)))), rt_str("; ", 2)), (*F->lval_263)), rt_str(".hi2 = ", 7)), f_subst_243(&(*(P642)rt_nil_check((*(P649)rt_nil_check(F->c_265)).hi2)))), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_263), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_222((*(P651)rt_nil_check(F->t_264)).elem)), rt_str(") * (size_t)RT_CNT(", 19)), (*F->lval_263)), rt_str("));", 3)); b_; }));
if ((((((((((*(P651)rt_nil_check((*(P651)rt_nil_check(F->t_264)).elem)).kind == (((rt_int)5LL))) || ((*(P651)rt_nil_check((*(P651)rt_nil_check(F->t_264)).elem)).kind == (((rt_int)6LL)))) || ((*(P651)rt_nil_check((*(P651)rt_nil_check(F->t_264)).elem)).kind == (((rt_int)7LL)))) || ((*(P651)rt_nil_check((*(P651)rt_nil_check(F->t_264)).elem)).kind == (((rt_int)15LL)))) || ((*(P651)rt_nil_check((*(P651)rt_nil_check(F->t_264)).elem)).kind == (((rt_int)8LL)))) || ((*(P651)rt_nil_check((*(P651)rt_nil_check(F->t_264)).elem)).kind == (((rt_int)12LL)))) || ((*(P651)rt_nil_check((*(P651)rt_nil_check(F->t_264)).elem)).kind == (((rt_int)13LL)))) || ((*(P651)rt_nil_check((*(P651)rt_nil_check(F->t_264)).elem)).kind == (((rt_int)14LL))))) {
F->i_1085 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1085), rt_str(" = 0; ", 6)), F->i_1085), rt_str(" < RT_CNT(", 10)), (*F->lval_263)), rt_str("); ", 3)), F->i_1085), rt_str("++) {", 5)); b_; }));
f_init_storage_251(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_263), rt_str(".p[", 3)), F->i_1085), rt_str("]", 1)); b_; }), (*(P651)rt_nil_check(F->t_264)).elem, (*(P651)rt_nil_check(F->t_264)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P651)rt_nil_check(F->t_264)).kind == (((rt_int)7LL)))) {
F->f_1086 = NULL;
F->f_1086 = (*(P651)rt_nil_check(F->t_264)).fields;
while ((F->f_1086 != NULL)) {
f_init_storage_251(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_263), rt_str(".", 1)), f_field_c_17(&(*(P642)rt_nil_check((*(P653)rt_nil_check(F->f_1086)).name)))); b_; }), (*(P653)rt_nil_check(F->f_1086)).t, (*(P653)rt_nil_check(F->f_1086)).c);
F->f_1086 = (*(P653)rt_nil_check(F->f_1086)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_manifest_269(P647 e_267, int *ok_268) {
  struct f_manifest_269fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_267 = e_267;
F->ok_268 = ok_268;
F->ok_268v = *F->ok_268;
F->v_1087 = NULL;
F->v_1087 = f_meval_278(F->e_267, &F->ok_268v);
if ((F->ok_268v && ((*(P663)rt_nil_check(F->v_1087)).kind == (((rt_int)1LL))))) {
F->result_ = (*(P663)rt_nil_check(F->v_1087)).i;
goto ret_;
}
F->ok_268v = 0;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_268) = F->ok_268v;
  RT_FPOP();
  return F->result_;
}

static P663 f_mk_mval_272(rt_int kind_270, rt_int i_271) {
  struct f_mk_mval_272fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_270 = kind_270;
F->i_271 = i_271;
F->v_1088 = NULL;
{ R664 *cell1089 = rt_alloc(sizeof(R664));
(*cell1089).s = NULL;
(*cell1089).t = NULL;
F->v_1088 = cell1089;
}
(*(P663)rt_nil_check(F->v_1088)).kind = F->kind_270;
(*(P663)rt_nil_check(F->v_1088)).i = F->i_271;
F->result_ = F->v_1088;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_ipow_275(rt_int a_273, rt_int b_274) {
  struct f_ipow_275fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_273 = a_273;
F->b_274 = b_274;
F->r_1090 = ((rt_int)1LL);
{ rt_int lo1092 = ((rt_int)1LL), hi1093 = F->b_274;
for (rt_int it1094 = lo1092; it1094 <= hi1093; it1094++) {
F->i_1091 = it1094;
F->r_1090 = rt_mul(F->r_1090, F->a_273);
}
}
F->result_ = F->r_1090;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P663 f_meval_278(P647 e_276, int *ok_277) {
  struct f_meval_278fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_276 = e_276;
F->ok_277 = ok_277;
F->ok_277v = *F->ok_277;
F->a_1095 = NULL;
F->b_1096 = NULL;
F->op_1098 = NULL;
F->ok_277v = 0;
if ((F->e_276 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((*(P647)rt_nil_check(F->e_276)).kind == (((rt_int)1LL)))) {
F->ok_277v = 1;
F->result_ = f_mk_mval_272((((rt_int)1LL)), (*(P647)rt_nil_check(F->e_276)).ival);
goto ret_;
} else if (((*(P647)rt_nil_check(F->e_276)).kind == (((rt_int)5LL)))) {
F->ok_277v = 1;
F->result_ = f_mk_mval_272((((rt_int)2LL)), (*(P647)rt_nil_check(F->e_276)).ival);
goto ret_;
} else if (((*(P647)rt_nil_check(F->e_276)).kind == (((rt_int)2LL)))) {
F->ok_277v = 1;
F->result_ = f_mk_mval_272((((rt_int)3LL)), ((rt_int)0LL));
goto ret_;
} else if (((*(P647)rt_nil_check(F->e_276)).kind == (((rt_int)3LL)))) {
F->ok_277v = 1;
F->a_1095 = f_mk_mval_272((((rt_int)5LL)), ((rt_int)0LL));
(*(P663)rt_nil_check(F->a_1095)).s = (*(P647)rt_nil_check(F->e_276)).name;
F->result_ = F->a_1095;
goto ret_;
} else if (((*(P647)rt_nil_check(F->e_276)).kind == (((rt_int)4LL)))) {
if ((f_lit_index_230((*(P651)rt_nil_check(g_ty_ascii_725)).lits, &(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_276)).name))) >= ((rt_int)0LL))) {
F->ok_277v = 1;
F->a_1095 = f_mk_mval_272((((rt_int)4LL)), f_lit_index_230((*(P651)rt_nil_check(g_ty_ascii_725)).lits, &(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_276)).name))));
(*(P663)rt_nil_check(F->a_1095)).t = g_ty_ascii_725;
(*(P663)rt_nil_check(F->a_1095)).s = (*(P647)rt_nil_check(F->e_276)).name;
F->result_ = F->a_1095;
goto ret_;
}
F->a_1095 = f_mk_mval_272((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P663)rt_nil_check(F->a_1095)).s = (*(P647)rt_nil_check(F->e_276)).name;
F->ok_277v = 1;
F->result_ = F->a_1095;
goto ret_;
} else if (((*(P647)rt_nil_check(F->e_276)).kind == (((rt_int)17LL)))) {
F->result_ = f_meval_278((*(P647)rt_nil_check(F->e_276)).a, &F->ok_277v);
goto ret_;
} else if (((*(P647)rt_nil_check(F->e_276)).kind == (((rt_int)7LL)))) {
F->y_1099 = NULL;
F->y_1099 = f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_276)).name)));
if ((((F->y_1099 != NULL) && ((*(P655)rt_nil_check(F->y_1099)).kind == (((rt_int)2LL)))) && ((*(P655)rt_nil_check(F->y_1099)).mv != NULL))) {
F->ok_277v = 1;
F->result_ = (*(P655)rt_nil_check(F->y_1099)).mv;
goto ret_;
} else if ((((F->y_1099 != NULL) && ((*(P655)rt_nil_check(F->y_1099)).kind == (((rt_int)2LL)))) && (*(P655)rt_nil_check(F->y_1099)).hasmv)) {
F->ok_277v = 1;
F->result_ = f_mk_mval_272((((rt_int)1LL)), (*(P655)rt_nil_check(F->y_1099)).mvalue);
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if (((*(P647)rt_nil_check(F->e_276)).kind == (((rt_int)8LL)))) {
F->a_1095 = f_meval_278((*(P647)rt_nil_check(F->e_276)).a, &F->ok_277v);
if ((!F->ok_277v)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_276)).name)), rt_str("NOT", 3)) && ((*(P663)rt_nil_check(F->a_1095)).kind == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_272((((rt_int)2LL)), rt_sub(((rt_int)1LL), (*(P663)rt_nil_check(F->a_1095)).i));
goto ret_;
} else if ((rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_276)).name)), rt_str("-", 1)) && ((*(P663)rt_nil_check(F->a_1095)).kind == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_272((((rt_int)1LL)), rt_neg((*(P663)rt_nil_check(F->a_1095)).i));
goto ret_;
} else if (((rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_276)).name)), rt_str("+", 1)) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_276)).name)), rt_str("-", 1))) && (((*(P663)rt_nil_check(F->a_1095)).kind == (((rt_int)1LL))) || ((*(P663)rt_nil_check(F->a_1095)).kind == (((rt_int)3LL)))))) {
F->result_ = F->a_1095;
goto ret_;
}
F->ok_277v = 0;
F->result_ = NULL;
goto ret_;
} else if ((((*(P647)rt_nil_check(F->e_276)).kind != (((rt_int)9LL))) || f_user_defined_288(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_276)).name))))) {
F->result_ = NULL;
goto ret_;
}
F->op_1098 = (*(P647)rt_nil_check(F->e_276)).name;
F->a_1095 = f_meval_278((*(P647)rt_nil_check(F->e_276)).a, &F->ok_277v);
F->b_1096 = f_meval_278((*(P647)rt_nil_check(F->e_276)).b, &F->ok2_1097);
F->ok_277v = (F->ok_277v && F->ok2_1097);
if ((!F->ok_277v)) {
F->result_ = NULL;
goto ret_;
}
F->ok_277v = 0;
if ((((*(P663)rt_nil_check(F->a_1095)).kind == (((rt_int)1LL))) && ((*(P663)rt_nil_check(F->b_1096)).kind == (((rt_int)1LL))))) {
F->ok_277v = 1;
if (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("+", 1))) {
F->result_ = f_mk_mval_272((((rt_int)1LL)), rt_add((*(P663)rt_nil_check(F->a_1095)).i, (*(P663)rt_nil_check(F->b_1096)).i));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("-", 1))) {
F->result_ = f_mk_mval_272((((rt_int)1LL)), rt_sub((*(P663)rt_nil_check(F->a_1095)).i, (*(P663)rt_nil_check(F->b_1096)).i));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("*", 1))) {
F->result_ = f_mk_mval_272((((rt_int)1LL)), rt_mul((*(P663)rt_nil_check(F->a_1095)).i, (*(P663)rt_nil_check(F->b_1096)).i));
goto ret_;
} else if ((rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("DIV", 3)) && ((*(P663)rt_nil_check(F->b_1096)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_272((((rt_int)1LL)), rt_div((*(P663)rt_nil_check(F->a_1095)).i, (*(P663)rt_nil_check(F->b_1096)).i));
goto ret_;
} else if ((rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("MOD", 3)) && ((*(P663)rt_nil_check(F->b_1096)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_272((((rt_int)1LL)), rt_mod((*(P663)rt_nil_check(F->a_1095)).i, (*(P663)rt_nil_check(F->b_1096)).i));
goto ret_;
} else if ((rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("**", 2)) && ((*(P663)rt_nil_check(F->b_1096)).i >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_272((((rt_int)1LL)), f_ipow_275((*(P663)rt_nil_check(F->a_1095)).i, (*(P663)rt_nil_check(F->b_1096)).i));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("=", 1))) {
F->result_ = f_mk_mval_272((((rt_int)2LL)), f_bool_i_282(((*(P663)rt_nil_check(F->a_1095)).i == (*(P663)rt_nil_check(F->b_1096)).i)));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("/=", 2))) {
F->result_ = f_mk_mval_272((((rt_int)2LL)), f_bool_i_282(((*(P663)rt_nil_check(F->a_1095)).i != (*(P663)rt_nil_check(F->b_1096)).i)));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("<", 1))) {
F->result_ = f_mk_mval_272((((rt_int)2LL)), f_bool_i_282(((*(P663)rt_nil_check(F->a_1095)).i < (*(P663)rt_nil_check(F->b_1096)).i)));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("<=", 2))) {
F->result_ = f_mk_mval_272((((rt_int)2LL)), f_bool_i_282(((*(P663)rt_nil_check(F->a_1095)).i <= (*(P663)rt_nil_check(F->b_1096)).i)));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str(">", 1))) {
F->result_ = f_mk_mval_272((((rt_int)2LL)), f_bool_i_282(((*(P663)rt_nil_check(F->a_1095)).i > (*(P663)rt_nil_check(F->b_1096)).i)));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str(">=", 2))) {
F->result_ = f_mk_mval_272((((rt_int)2LL)), f_bool_i_282(((*(P663)rt_nil_check(F->a_1095)).i >= (*(P663)rt_nil_check(F->b_1096)).i)));
goto ret_;
}
} else if (((((*(P663)rt_nil_check(F->a_1095)).kind == (((rt_int)3LL))) && ((*(P663)rt_nil_check(F->b_1096)).kind == (((rt_int)3LL)))) && (((rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("+", 1)) || rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("-", 1))) || rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("*", 1))) || rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("/", 1))))) {
F->ok_277v = 1;
F->result_ = F->a_1095;
goto ret_;
} else if (((((*(P663)rt_nil_check(F->a_1095)).kind == (((rt_int)3LL))) && ((*(P663)rt_nil_check(F->b_1096)).kind == (((rt_int)1LL)))) && rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("**", 2)))) {
F->ok_277v = 1;
F->result_ = F->a_1095;
goto ret_;
} else if ((((*(P663)rt_nil_check(F->a_1095)).kind == (((rt_int)2LL))) && ((*(P663)rt_nil_check(F->b_1096)).kind == (((rt_int)2LL))))) {
F->ok_277v = 1;
if (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("AND", 3))) {
F->result_ = f_mk_mval_272((((rt_int)2LL)), rt_mul((*(P663)rt_nil_check(F->a_1095)).i, (*(P663)rt_nil_check(F->b_1096)).i));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("OR", 2))) {
F->result_ = f_mk_mval_272((((rt_int)2LL)), f_bool_i_282((rt_add((*(P663)rt_nil_check(F->a_1095)).i, (*(P663)rt_nil_check(F->b_1096)).i) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("XOR", 3)) || rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_272((((rt_int)2LL)), f_bool_i_282(((*(P663)rt_nil_check(F->a_1095)).i != (*(P663)rt_nil_check(F->b_1096)).i)));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("=", 1))) {
F->result_ = f_mk_mval_272((((rt_int)2LL)), f_bool_i_282(((*(P663)rt_nil_check(F->a_1095)).i == (*(P663)rt_nil_check(F->b_1096)).i)));
goto ret_;
}
} else if (((((*(P663)rt_nil_check(F->a_1095)).kind == (((rt_int)4LL))) && ((*(P663)rt_nil_check(F->b_1096)).kind == (((rt_int)4LL)))) && (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("=", 1)) || rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("/=", 2))))) {
F->ok_277v = 1;
if (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("=", 1))) {
F->result_ = f_mk_mval_272((((rt_int)2LL)), f_bool_i_282(rt_str_eq((*(P642)rt_nil_check((*(P663)rt_nil_check(F->a_1095)).s)), (*(P642)rt_nil_check((*(P663)rt_nil_check(F->b_1096)).s)))));
goto ret_;
}
F->result_ = f_mk_mval_272((((rt_int)2LL)), f_bool_i_282((!rt_str_eq((*(P642)rt_nil_check((*(P663)rt_nil_check(F->a_1095)).s)), (*(P642)rt_nil_check((*(P663)rt_nil_check(F->b_1096)).s))))));
goto ret_;
} else if (((((*(P663)rt_nil_check(F->a_1095)).kind == (((rt_int)5LL))) && ((*(P663)rt_nil_check(F->b_1096)).kind == (((rt_int)5LL)))) && (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("=", 1)) || rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("/=", 2))))) {
F->ok_277v = 1;
if (rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("=", 1))) {
F->result_ = f_mk_mval_272((((rt_int)2LL)), f_bool_i_282(rt_str_eq((*(P642)rt_nil_check((*(P663)rt_nil_check(F->a_1095)).s)), (*(P642)rt_nil_check((*(P663)rt_nil_check(F->b_1096)).s)))));
goto ret_;
}
F->result_ = f_mk_mval_272((((rt_int)2LL)), f_bool_i_282((!rt_str_eq((*(P642)rt_nil_check((*(P663)rt_nil_check(F->a_1095)).s)), (*(P642)rt_nil_check((*(P663)rt_nil_check(F->b_1096)).s))))));
goto ret_;
} else if (((rt_str_eq((*(P642)rt_nil_check(F->op_1098)), rt_str("&", 1)) && (((*(P663)rt_nil_check(F->a_1095)).kind == (((rt_int)5LL))) || ((*(P663)rt_nil_check(F->a_1095)).t == g_ty_ascii_725))) && (((*(P663)rt_nil_check(F->b_1096)).kind == (((rt_int)5LL))) || ((*(P663)rt_nil_check(F->b_1096)).t == g_ty_ascii_725)))) {
F->r_1100 = NULL;
F->r_1100 = f_mk_mval_272((((rt_int)5LL)), ((rt_int)0LL));
F->ok_277v = 1;
(*(P663)rt_nil_check(F->r_1100)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_284(F->a_1095), f_mstr_284(F->b_1096)); b_; }));
F->result_ = F->r_1100;
goto ret_;
}
F->ok_277v = 0;
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_277) = F->ok_277v;
  RT_FPOP();
  return F->result_;
}

static rstr f_bool_text_280(int b_279) {
  struct f_bool_text_280fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_279 = b_279;
if (F->b_279) {
F->result_ = rt_str("1", 1);
goto ret_;
}
F->result_ = rt_str("0", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_bool_i_282(int b_281) {
  struct f_bool_i_282fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_281 = b_281;
if (F->b_281) {
F->result_ = ((rt_int)1LL);
goto ret_;
}
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mstr_284(P663 v_283) {
  struct f_mstr_284fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_283 = v_283;
if (((*(P663)rt_nil_check(F->v_283)).kind == (((rt_int)5LL)))) {
F->result_ = (*(P642)rt_nil_check((*(P663)rt_nil_check(F->v_283)).s));
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_286((*(P663)rt_nil_check(F->v_283)).i));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ascii_char_286(rt_int i_285) {
  struct f_ascii_char_286fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_285 = i_285;
F->printable_1101 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_285 >= ((rt_int)32LL)) && (F->i_285 <= ((rt_int)126LL)))) {
F->result_ = rt_str_get(F->printable_1101, rt_sub(F->i_285, ((rt_int)31LL)));
goto ret_;
}
F->result_ = 32;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_user_defined_288(rstr *op_287) {
  struct f_user_defined_288fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_287 = op_287;
F->y_1102 = NULL;
F->y_1102 = f_lookup_153(&(*F->op_287));
F->result_ = ((F->y_1102 != NULL) && (((*(P655)rt_nil_check(F->y_1102)).kind == (((rt_int)3LL))) || ((*(P655)rt_nil_check(F->y_1102)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_290(P651 t_289) {
  struct f_mcopy_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_289 = t_289;
F->ct_1103 = rt_str_copy(f_ctype_222(F->t_289));
F->name_1104 = rt_str_new(rt_add((F->ct_1103).len, ((rt_int)3LL)));
rt_str_assign(&F->name_1104, rt_str_cat(rt_str("mc_", 3), F->ct_1103));
F->l_1105 = NULL;
if ((!f_seen_name_311(g_mcopies_721, &F->name_1104))) {
{ R666 *cell1106 = rt_alloc(sizeof(R666));
(*cell1106).s = NULL;
(*cell1106).next = NULL;
F->l_1105 = cell1106;
}
(*(P665)rt_nil_check(F->l_1105)).s = f_mk_3(&F->name_1104);
(*(P665)rt_nil_check(F->l_1105)).next = g_mcopies_721;
g_mcopies_721 = F->l_1105;
f_put_27(g_out_protos_689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1104), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1104), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1103), rt_str(" *)d = ", 7)), f_copy_code_300(F->t_289, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1103), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_1104;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_292(P651 t_291) {
  struct f_composite_292fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_291 = t_291;
F->result_ = ((((*(P651)rt_nil_check(F->t_291)).kind == (((rt_int)6LL))) || ((*(P651)rt_nil_check(F->t_291)).kind == (((rt_int)7LL)))) || (((*(P651)rt_nil_check(F->t_291)).kind == (((rt_int)15LL))) && ((*(P651)rt_nil_check(F->t_291)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_297(rstr *lval_293, P651 t_294, rstr *v_295, P649 c_296) {
  struct f_assign_code_297fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_293 = lval_293;
F->t_294 = t_294;
F->v_295 = v_295;
F->c_296 = c_296;
if ((((*(P651)rt_nil_check(F->t_294)).kind == (((rt_int)15LL))) && ((*(P651)rt_nil_check(F->t_294)).tparams == NULL))) {
F->result_ = f_assign_code_297(&(*F->lval_293), (*(P651)rt_nil_check(F->t_294)).under, &(*F->v_295), F->c_296);
goto ret_;
}
if (f_composite_292(F->t_294)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_222(F->t_294)), rt_str("(&", 2)), (*F->lval_293)), rt_str(", ", 2)), (*F->v_295)), rt_str(");", 2));
goto ret_;
}
if (((*(P651)rt_nil_check(F->t_294)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_293)), rt_str(", ", 2)), (*F->v_295)), rt_str(");", 2));
goto ret_;
} else if ((((*(P651)rt_nil_check(F->t_294)).kind == (((rt_int)6LL))) || ((*(P651)rt_nil_check(F->t_294)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_222(F->t_294)), rt_str("(&", 2)), (*F->lval_293)), rt_str(", ", 2)), (*F->v_295)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_293), rt_str(" = ", 3)), f_checked_203(F->t_294, F->c_296, &(*F->v_295))), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_300(P651 t_298, rstr *v_299) {
  struct f_copy_code_300fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_298 = t_298;
F->v_299 = v_299;
if ((((*(P651)rt_nil_check(F->t_298)).kind == (((rt_int)15LL))) && ((*(P651)rt_nil_check(F->t_298)).tparams == NULL))) {
F->result_ = f_copy_code_300((*(P651)rt_nil_check(F->t_298)).under, &(*F->v_299));
goto ret_;
}
if (f_composite_292(F->t_298)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_222(F->t_298)), rt_str("(", 1)), (*F->v_299)), rt_str(")", 1));
goto ret_;
}
if (((*(P651)rt_nil_check(F->t_298)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_299)), rt_str(")", 1));
goto ret_;
} else if ((((*(P651)rt_nil_check(F->t_298)).kind == (((rt_int)6LL))) || ((*(P651)rt_nil_check(F->t_298)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_222(F->t_298)), rt_str("(", 1)), (*F->v_299)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_299);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_304(P651 t_301, rstr *a_302, rstr *b_303) {
  struct f_eq_code_304fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_301 = t_301;
F->a_302 = a_302;
F->b_303 = b_303;
if ((((*(P651)rt_nil_check(F->t_301)).kind == (((rt_int)15LL))) && ((*(P651)rt_nil_check(F->t_301)).tparams == NULL))) {
F->result_ = f_eq_code_304((*(P651)rt_nil_check(F->t_301)).under, &(*F->a_302), &(*F->b_303));
goto ret_;
}
if (f_composite_292(F->t_301)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_222(F->t_301)), rt_str("(", 1)), (*F->a_302)), rt_str(", ", 2)), (*F->b_303)), rt_str(")", 1));
goto ret_;
}
if (((*(P651)rt_nil_check(F->t_301)).kind == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), (*F->a_302)), rt_str(", ", 2)), (*F->b_303)), rt_str(")", 1));
goto ret_;
}
if (((*(P651)rt_nil_check(F->t_301)).kind == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_302)), rt_str(" == ", 4)), (*F->b_303)), rt_str(")", 1));
goto ret_;
}
if (((*(P651)rt_nil_check(F->t_301)).kind == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_302)), rt_str(" == ", 4)), (*F->b_303)), rt_str(")", 1));
goto ret_;
}
if (((*(P651)rt_nil_check(F->t_301)).kind == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P651)rt_nil_check(F->t_301)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_302)), rt_str(", ", 2)), (*F->b_303)), rt_str(")", 1));
goto ret_;
} else if ((((*(P651)rt_nil_check(F->t_301)).kind == (((rt_int)6LL))) || ((*(P651)rt_nil_check(F->t_301)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_222(F->t_301)), rt_str("(", 1)), (*F->a_302)), rt_str(", ", 2)), (*F->b_303)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_302)), rt_str(" == ", 4)), (*F->b_303)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_308(rstr *lval_305, P651 t_306, rstr *v_307) {
  struct f_elem_assign_308fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_305 = lval_305;
F->t_306 = t_306;
F->v_307 = v_307;
F->result_ = f_assign_code_297(&(*F->lval_305), F->t_306, &(*F->v_307), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_311(P665 l_309, rstr *s_310) {
  struct f_seen_name_311fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_309 = l_309;
F->s_310 = s_310;
F->p_1107 = NULL;
F->p_1107 = F->l_309;
while ((F->p_1107 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P665)rt_nil_check(F->p_1107)).s)), (*F->s_310))) {
F->result_ = 1;
goto ret_;
}
F->p_1107 = (*(P665)rt_nil_check(F->p_1107)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_312(void) {
  struct f_emit_helpers_312fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_1108 = NULL;
F->t_1109 = NULL;
F->t_1109 = g_all_types_685;
F->done_1110 = NULL;
while ((F->t_1109 != NULL)) {
if ((f_composite_292(F->t_1109) && (!f_seen_name_311(F->done_1110, &(*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_1109)).cname)))))) {
F->l_1111 = NULL;
F->c_1112 = rt_str_new(((*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_1109)).cname))).len);
rt_str_assign(&F->c_1112, (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_1109)).cname)));
{ R666 *cell1113 = rt_alloc(sizeof(R666));
(*cell1113).s = NULL;
(*cell1113).next = NULL;
F->l_1111 = cell1113;
}
(*(P665)rt_nil_check(F->l_1111)).s = (*(P651)rt_nil_check(F->t_1109)).cname;
(*(P665)rt_nil_check(F->l_1111)).next = F->done_1110;
F->done_1110 = F->l_1111;
f_put_27(g_out_helpers_688, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1112), rt_str("(", 1)), F->c_1112), rt_str(" *d, ", 5)), F->c_1112), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_688, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1112), rt_str(" cp_", 4)), F->c_1112), rt_str("(", 1)), F->c_1112), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_688, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1112), rt_str("(", 1)), F->c_1112), rt_str(" a, ", 4)), F->c_1112), rt_str(" b);", 4)); b_; }));
f_helper_bodies_314(F->t_1109);
}
F->t_1109 = (*(P651)rt_nil_check(F->t_1109)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_314(P651 t_313) {
  struct f_helper_bodies_314fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_313 = t_313;
F->c_1114 = rt_str_new(((*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_313)).cname))).len);
rt_str_assign(&F->c_1114, (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_313)).cname)));
F->b_1115 = NULL;
F->b_1115 = g_out_funcs_691;
if (((*(P651)rt_nil_check(F->t_313)).kind == (((rt_int)6LL)))) {
F->e_1116 = NULL;
F->e_1116 = (*(P651)rt_nil_check(F->t_313)).elem;
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1114), rt_str("(", 1)), F->c_1114), rt_str(" *d, ", 5)), F->c_1114), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, ", 99), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), f_elem_assign_308(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1116, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1114), rt_str(" cp_", 4)), F->c_1114), rt_str("(", 1)), F->c_1114), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1114), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_222(F->e_1116)), rt_str(") * (size_t)RT_CNT(s));", 23)); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), f_copy_code_300(F->e_1116, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1114), rt_str("(", 1)), F->c_1114), rt_str(" a, ", 4)), F->c_1114), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;", 77); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), f_eq_code_304(F->e_1116, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P651)rt_nil_check(F->t_313)).kind == (((rt_int)15LL)))) {
F->p_1117 = NULL;
F->p_1117 = (*(P651)rt_nil_check(F->t_313)).tparams;
F->pc_1118 = NULL;
F->pc_1118 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->p_1117 != NULL)) {
F->pc_1118 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->pc_1118)), rt_str(" || d->p_", 9)), f_lower_s_15(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1117)).name)))), rt_str(" != s.p_", 8)), f_lower_s_15(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1117)).name)))); b_; }));
F->p_1117 = (*(P647)rt_nil_check(F->p_1117)).next;
}
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1114), rt_str("(", 1)), F->c_1114), rt_str(" *d, ", 5)), F->c_1114), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P642)rt_nil_check(F->pc_1118))), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("constraint", 10)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_308(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P651)rt_nil_check(F->t_313)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1114), rt_str(" cp_", 4)), F->c_1114), rt_str("(", 1)), F->c_1114), rt_str(" s) { s.all = ", 14)), f_copy_code_300((*(P651)rt_nil_check(F->t_313)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1114), rt_str("(", 1)), F->c_1114), rt_str(" a, ", 4)), F->c_1114), rt_str(" b) { return ", 13)), f_eq_code_304((*(P651)rt_nil_check(F->t_313)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else {
F->f_1119 = NULL;
F->f_1119 = (*(P651)rt_nil_check(F->t_313)).fields;
F->conds_1120 = NULL;
F->conds_1120 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1114), rt_str("(", 1)), F->c_1114), rt_str(" *d, ", 5)), F->c_1114), rt_str(" s) {", 5)); b_; }));
while ((F->f_1119 != NULL)) {
F->fn_1121 = rt_str_copy(f_field_c_17(&(*(P642)rt_nil_check((*(P653)rt_nil_check(F->f_1119)).name))));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_308(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1121); b_; }), (*(P653)rt_nil_check(F->f_1119)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1121); b_; }))); b_; }));
F->f_1119 = (*(P653)rt_nil_check(F->f_1119)).next;
}
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1114), rt_str(" cp_", 4)), F->c_1114), rt_str("(", 1)), F->c_1114), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1114), rt_str(" d = s;", 7)); b_; }));
F->f_1119 = (*(P651)rt_nil_check(F->t_313)).fields;
while ((F->f_1119 != NULL)) {
F->fn_1122 = rt_str_copy(f_field_c_17(&(*(P642)rt_nil_check((*(P653)rt_nil_check(F->f_1119)).name))));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1122), rt_str(" = ", 3)), f_copy_code_300((*(P653)rt_nil_check(F->f_1119)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1122); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1120 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->conds_1120)), rt_str(" && ", 4)), f_eq_code_304((*(P653)rt_nil_check(F->f_1119)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1122); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1122); b_; }))); b_; }));
F->f_1119 = (*(P653)rt_nil_check(F->f_1119)).next;
}
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1114), rt_str("(", 1)), F->c_1114), rt_str(" a, ", 4)), F->c_1114), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P642)rt_nil_check(F->conds_1120))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1115, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_316(P647 elems_315) {
  struct f_declare_body_316fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_315 = elems_315;
F->e_1123 = NULL;
F->e_1123 = F->elems_315;
while ((F->e_1123 != NULL)) {
if ((((*(P647)rt_nil_check(F->e_1123)).kind == (((rt_int)41LL))) && ((*(P647)rt_nil_check(F->e_1123)).flag == ((rt_int)0LL)))) {
f_manifest_const_318(F->e_1123);
} else if (((*(P647)rt_nil_check(F->e_1123)).kind == (((rt_int)47LL)))) {
f_gen_capsule_326(F->e_1123);
} else if (((((*(P647)rt_nil_check(F->e_1123)).kind == (((rt_int)48LL))) && ((*(P647)rt_nil_check(F->e_1123)).flag != ((rt_int)1LL))) && ((*(P647)rt_nil_check(F->e_1123)).flag != ((rt_int)3LL)))) {
f_gen_expose_343(F->e_1123);
} else if (((*(P647)rt_nil_check(F->e_1123)).kind == (((rt_int)49LL)))) {
F->y_1124 = NULL;
F->y_1124 = f_new_sym_171((((rt_int)7LL)), (*(P647)rt_nil_check(F->e_1123)).name);
(*(P655)rt_nil_check(F->y_1124)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_1123)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_158(F->y_1124, (*(P647)rt_nil_check(F->e_1123)).line);
f_put_27(g_out_globals_690, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_1124)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_693, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_1124)).cname))), rt_str(" = rt_exc(", 10)), f_q_18()), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_1123)).name))), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P647)rt_nil_check(F->e_1123)).kind == (((rt_int)42LL)))) {
F->y_1125 = NULL;
F->y_1125 = f_new_sym_171((((rt_int)6LL)), (*(P647)rt_nil_check(F->e_1123)).name);
(*(P655)rt_nil_check(F->y_1125)).st = (*(P647)rt_nil_check(F->e_1123)).a;
f_define_158(F->y_1125, (*(P647)rt_nil_check(F->e_1123)).line);
} else if (((*(P647)rt_nil_check(F->e_1123)).kind == (((rt_int)44LL)))) {
F->y_1126 = NULL;
F->y_1126 = f_new_sym_171((((rt_int)5LL)), (*(P647)rt_nil_check(F->e_1123)).name);
F->t_1127 = NULL;
F->t_1127 = f_new_typ_173((((rt_int)8LL)));
(*(P651)rt_nil_check(F->t_1127)).name = (*(P647)rt_nil_check(F->e_1123)).name;
(*(P651)rt_nil_check(F->t_1127)).decl = F->e_1123;
(*(P655)rt_nil_check(F->y_1126)).t = F->t_1127;
f_define_158(F->y_1126, (*(P647)rt_nil_check(F->e_1123)).line);
} else if (((*(P647)rt_nil_check(F->e_1123)).kind == (((rt_int)43LL)))) {
F->y_1128 = NULL;
F->y_1128 = f_new_sym_171((((rt_int)5LL)), (*(P647)rt_nil_check(F->e_1123)).name);
(*(P655)rt_nil_check(F->y_1128)).st = (*(P647)rt_nil_check(F->e_1123)).a;
(*(P655)rt_nil_check(F->y_1128)).decl = F->e_1123;
f_define_158(F->y_1128, (*(P647)rt_nil_check(F->e_1123)).line);
}
F->e_1123 = (*(P647)rt_nil_check(F->e_1123)).next;
}
F->e_1123 = F->elems_315;
while ((F->e_1123 != NULL)) {
if (((((*(P647)rt_nil_check(F->e_1123)).kind == (((rt_int)45LL))) || ((*(P647)rt_nil_check(F->e_1123)).kind == (((rt_int)46LL)))) || ((*(P647)rt_nil_check(F->e_1123)).kind == (((rt_int)50LL))))) {
F->y_1129 = NULL;
f_declare_subprogram_347(F->e_1123);
F->y_1129 = f_lookup_decl_155(F->e_1123);
(*(P655)rt_nil_check(F->y_1129)).home = F->elems_315;
} else if (((*(P647)rt_nil_check(F->e_1123)).kind == (((rt_int)51LL)))) {
F->g_1130 = NULL;
F->g_1130 = f_new_sym_171((((rt_int)10LL)), (*(P647)rt_nil_check(F->e_1123)).name);
(*(P655)rt_nil_check(F->g_1130)).decl = F->e_1123;
(*(P655)rt_nil_check(F->g_1130)).level = g_cur_level_697;
(*(P655)rt_nil_check(F->g_1130)).owner = g_func_sym_708;
(*(P655)rt_nil_check(F->g_1130)).gctx = g_fctx_698;
f_define_158(F->g_1130, (*(P647)rt_nil_check(F->e_1123)).line);
}
F->e_1123 = (*(P647)rt_nil_check(F->e_1123)).next;
}
F->e_1123 = F->elems_315;
{
F->snap_1131 = NULL;
while ((F->e_1123 != NULL)) {
if (((*(P647)rt_nil_check(F->e_1123)).kind == (((rt_int)51LL)))) {
if ((F->snap_1131 == NULL)) {
{ A660 *cell1132 = rt_alloc(sizeof(A660));
rt_int pv1133 = (((rt_int)4093LL));
(*cell1132).lo = ((rt_int)0LL); (*cell1132).hi = pv1133; (*cell1132).lo2 = 1; (*cell1132).hi2 = 1;
(*cell1132).p = rt_alloc(sizeof(P655) * (size_t)RT_CNT((*cell1132)));
for (rt_int i1134 = 0; i1134 < RT_CNT((*cell1132)); i1134++) {
(*cell1132).p[i1134] = NULL;
}
F->snap_1131 = cell1132;
}
{ rt_int lo1136 = ((rt_int)0LL), hi1137 = (((rt_int)4093LL));
for (rt_int it1138 = lo1136; it1138 <= hi1137; it1138++) {
F->i_1135 = it1138;
(*(P659)rt_nil_check(F->snap_1131)).p[rt_index(F->i_1135, (*(P659)rt_nil_check(F->snap_1131)).lo, (*(P659)rt_nil_check(F->snap_1131)).hi) - (*(P659)rt_nil_check(F->snap_1131)).lo] = (*(P659)rt_nil_check(g_table_680)).p[rt_index(F->i_1135, (*(P659)rt_nil_check(g_table_680)).lo, (*(P659)rt_nil_check(g_table_680)).hi) - (*(P659)rt_nil_check(g_table_680)).lo];
}
}
}
{
F->g_1139 = NULL;
F->g_1139 = f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_1123)).name)));
(*(P655)rt_nil_check(F->g_1139)).env = F->snap_1131;
}
}
F->e_1123 = (*(P647)rt_nil_check(F->e_1123)).next;
}
}
F->e_1123 = F->elems_315;
while ((F->e_1123 != NULL)) {
if ((((*(P647)rt_nil_check(F->e_1123)).kind == (((rt_int)45LL))) && (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_1123)).name)), rt_str("INITIALIZE", 10)) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_1123)).name)), rt_str("FINALIZE", 8))))) {
F->y_1140 = NULL;
F->y_1140 = f_lookup_decl_155(F->e_1123);
if (((((F->y_1140 != NULL) && ((*(P655)rt_nil_check(F->y_1140)).params != NULL)) && ((*(P657)rt_nil_check((*(P655)rt_nil_check(F->y_1140)).params)).next == NULL)) && (((*(P651)rt_nil_check((*(P657)rt_nil_check((*(P655)rt_nil_check(F->y_1140)).params)).t)).kind == (((rt_int)15LL))) || ((*(P651)rt_nil_check((*(P657)rt_nil_check((*(P655)rt_nil_check(F->y_1140)).params)).t)).kind == (((rt_int)8LL)))))) {
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_1123)).name)), rt_str("INITIALIZE", 10))) {
(*(P651)rt_nil_check((*(P657)rt_nil_check((*(P655)rt_nil_check(F->y_1140)).params)).t)).initp = F->y_1140;
} else {
(*(P651)rt_nil_check((*(P657)rt_nil_check((*(P655)rt_nil_check(F->y_1140)).params)).t)).finalp = F->y_1140;
}
}
}
F->e_1123 = (*(P647)rt_nil_check(F->e_1123)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_318(P647 d_317) {
  struct f_manifest_const_318fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_317 = d_317;
F->v_1142 = NULL;
F->y_1143 = NULL;
F->t_1144 = NULL;
F->ctext_1145 = NULL;
if (((*(P647)rt_nil_check(F->d_317)).a != NULL)) {
if ((((*(P647)rt_nil_check((*(P647)rt_nil_check(F->d_317)).a)).kind != (((rt_int)70LL))) || ((*(P647)rt_nil_check((*(P647)rt_nil_check(F->d_317)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1142 = f_meval_278((*(P647)rt_nil_check(F->d_317)).b, &F->ok_1141);
if ((!F->ok_1141)) {
goto ret_;
}
{
F->saved_1146 = NULL;
F->saved_1146 = g_code_694;
g_code_694 = f_new_buffer_24();
g_trial_720 = rt_add(g_trial_720, ((rt_int)1LL));
{ rt_frame xf1147;
if (RT_TRY(xf1147)) {
F->ctext_1145 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_555((*(P647)rt_nil_check(F->d_317)).b, NULL, &F->t_1144)), rt_str(")", 1)); b_; }));
RT_POP(xf1147);
} else {
RT_POP(xf1147);
int x1148 = rt_xcur;
if (0 || x1148 == ex_compile_error_1) {
F->ok_1141 = 0;
} else {
rt_raise(x1148);
}
}
}
g_trial_720 = rt_sub(g_trial_720, ((rt_int)1LL));
F->ok_1141 = (F->ok_1141 && ((*(P667)rt_nil_check(g_code_694)).head == NULL));
g_code_694 = F->saved_1146;
}
if (((!F->ok_1141) || (((*(P647)rt_nil_check(F->d_317)).a != NULL) && ((*(P651)rt_nil_check(F->t_1144)).kind != (((rt_int)1LL)))))) {
goto ret_;
}
if (((*(P663)rt_nil_check(F->v_1142)).kind == (((rt_int)4LL)))) {
(*(P663)rt_nil_check(F->v_1142)).t = F->t_1144;
(*(P663)rt_nil_check(F->v_1142)).i = f_lit_index_230((*(P651)rt_nil_check(f_base_of_211(F->t_1144))).lits, &(*(P642)rt_nil_check((*(P663)rt_nil_check(F->v_1142)).s)));
}
(*(P647)rt_nil_check(F->d_317)).flag = ((rt_int)1LL);
F->y_1143 = f_new_sym_171((((rt_int)2LL)), (*(P647)rt_nil_check(F->d_317)).name);
(*(P655)rt_nil_check(F->y_1143)).t = F->t_1144;
(*(P655)rt_nil_check(F->y_1143)).c = f_new_cons_174();
(*(P655)rt_nil_check(F->y_1143)).mv = F->v_1142;
if (((*(P663)rt_nil_check(F->v_1142)).kind == (((rt_int)1LL)))) {
(*(P655)rt_nil_check(F->y_1143)).mvalue = (*(P663)rt_nil_check(F->v_1142)).i;
(*(P655)rt_nil_check(F->y_1143)).hasmv = 1;
}
(*(P655)rt_nil_check(F->y_1143)).ro_flag = 1;
(*(P655)rt_nil_check(F->y_1143)).access = F->ctext_1145;
f_define_158(F->y_1143, (*(P647)rt_nil_check(F->d_317)).line);
ret_:
  RT_FPOP();
  return;
}

static int f_exported_322(P647 d_319, rstr *name_320, int *ro_321) {
  struct f_exported_322fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_319 = d_319;
F->name_320 = name_320;
F->ro_321 = ro_321;
F->ro_321v = *F->ro_321;
F->p_1149 = NULL;
F->p_1149 = (*(P647)rt_nil_check(F->d_319)).a;
F->ro_321v = 0;
if (((*(P647)rt_nil_check(F->d_319)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1149 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1149)).name)), (*F->name_320))) {
F->ro_321v = ((*(P647)rt_nil_check(F->p_1149)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1149 = (*(P647)rt_nil_check(F->p_1149)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ro_321) = F->ro_321v;
  RT_FPOP();
  return F->result_;
}

static P655 f_copy_sym_324(P655 y_323) {
  struct f_copy_sym_324fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_323 = y_323;
F->z_1150 = NULL;
{ R656 *cell1151 = rt_alloc(sizeof(R656));
(*cell1151).name = NULL;
(*cell1151).t = NULL;
(*cell1151).c = NULL;
(*cell1151).access = NULL;
(*cell1151).cname = NULL;
(*cell1151).st = NULL;
(*cell1151).decl = NULL;
(*cell1151).params = NULL;
(*cell1151).result = NULL;
(*cell1151).members = NULL;
(*cell1151).mnext = NULL;
(*cell1151).binds = NULL;
(*cell1151).insts = NULL;
(*cell1151).env = NULL;
(*cell1151).chain = NULL;
(*cell1151).stack = NULL;
(*cell1151).owner = NULL;
(*cell1151).gctx = NULL;
(*cell1151).mv = NULL;
(*cell1151).reqs = NULL;
(*cell1151).home = NULL;
F->z_1150 = cell1151;
}
(*(P655)rt_nil_check(F->z_1150)).kind = (*(P655)rt_nil_check(F->y_323)).kind;
(*(P655)rt_nil_check(F->z_1150)).name = (*(P655)rt_nil_check(F->y_323)).name;
(*(P655)rt_nil_check(F->z_1150)).t = (*(P655)rt_nil_check(F->y_323)).t;
(*(P655)rt_nil_check(F->z_1150)).c = (*(P655)rt_nil_check(F->y_323)).c;
(*(P655)rt_nil_check(F->z_1150)).access = (*(P655)rt_nil_check(F->y_323)).access;
(*(P655)rt_nil_check(F->z_1150)).cname = (*(P655)rt_nil_check(F->y_323)).cname;
(*(P655)rt_nil_check(F->z_1150)).ro_flag = (*(P655)rt_nil_check(F->y_323)).ro_flag;
(*(P655)rt_nil_check(F->z_1150)).mvalue = (*(P655)rt_nil_check(F->y_323)).mvalue;
(*(P655)rt_nil_check(F->z_1150)).hasmv = (*(P655)rt_nil_check(F->y_323)).hasmv;
(*(P655)rt_nil_check(F->z_1150)).st = (*(P655)rt_nil_check(F->y_323)).st;
(*(P655)rt_nil_check(F->z_1150)).decl = (*(P655)rt_nil_check(F->y_323)).decl;
(*(P655)rt_nil_check(F->z_1150)).params = (*(P655)rt_nil_check(F->y_323)).params;
(*(P655)rt_nil_check(F->z_1150)).result = (*(P655)rt_nil_check(F->y_323)).result;
(*(P655)rt_nil_check(F->z_1150)).level = (*(P655)rt_nil_check(F->y_323)).level;
(*(P655)rt_nil_check(F->z_1150)).byref = (*(P655)rt_nil_check(F->y_323)).byref;
(*(P655)rt_nil_check(F->z_1150)).members = (*(P655)rt_nil_check(F->y_323)).members;
(*(P655)rt_nil_check(F->z_1150)).env = (*(P655)rt_nil_check(F->y_323)).env;
F->result_ = F->z_1150;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_326(P647 d_325) {
  struct f_gen_capsule_326fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_325 = d_325;
F->y_1152 = NULL;
F->y_1152 = f_new_sym_171((((rt_int)8LL)), (*(P647)rt_nil_check(F->d_325)).name);
F->saved_1153 = NULL;
F->saved_1153 = g_suppress_714;
(*(P655)rt_nil_check(F->y_1152)).decl = F->d_325;
if (((*(P647)rt_nil_check(F->d_325)).b == NULL)) {
g_suppress_714 = f_suppressing_354((*(P647)rt_nil_check(F->d_325)).prags);
f_elaborate_capsule_335(F->d_325, F->y_1152, NULL, F->d_325);
g_suppress_714 = F->saved_1153;
}
f_define_158(F->y_1152, (*(P647)rt_nil_check(F->d_325)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_330(P647 d_327, P647 args_328, rt_int line_329) {
  struct f_capsule_params_330fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_327 = d_327;
F->args_328 = args_328;
F->line_329 = line_329;
F->p_1154 = NULL;
F->p_1154 = (*(P647)rt_nil_check(F->d_327)).b;
F->a_1155 = NULL;
F->a_1155 = F->args_328;
F->t_1156 = NULL;
F->vt_1157 = NULL;
F->c_1158 = NULL;
while (((F->p_1154 != NULL) && (F->a_1155 != NULL))) {
F->t_1156 = f_resolve_subtype_233((*(P647)rt_nil_check(F->p_1154)).a, &F->c_1158);
if (((*(P647)rt_nil_check(F->p_1154)).ival == (((rt_int)3LL)))) {
f_fail_23(F->line_329, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if ((((*(P647)rt_nil_check(F->p_1154)).ival == (((rt_int)2LL))) || ((*(P647)rt_nil_check(F->p_1154)).ival == (((rt_int)4LL))))) {
F->lv_1159 = NULL;
F->lc_1160 = NULL;
F->y_1162 = NULL;
F->y_1162 = f_new_sym_171((((rt_int)1LL)), (*(P647)rt_nil_check(F->p_1154)).name);
f_lvalue_528(F->a_1155, &F->lv_1159, &F->vt_1157, &F->lc_1160, &F->ro_1161);
f_check_type_220(F->vt_1157, F->t_1156, F->line_329);
if ((F->ro_1161 && ((*(P647)rt_nil_check(F->p_1154)).ival == (((rt_int)2LL))))) {
f_fail_23(F->line_329, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1154)).name)), rt_str(" needs a variable", 17)); b_; }));
}
if (g_in_func_696) {
F->f_1163 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1154)).name))), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_695, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_222(F->t_1156)), rt_str(" *", 2)), F->f_1163), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1163), rt_str(" = &", 4)), (*(P642)rt_nil_check(F->lv_1159))), rt_str(";", 1)); b_; }));
(*(P655)rt_nil_check(F->y_1162)).level = g_cur_level_697;
(*(P655)rt_nil_check(F->y_1162)).access = f_mk_3(&F->f_1163);
(*(P655)rt_nil_check(F->y_1162)).byref = 1;
} else {
F->g_1164 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1154)).name)))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_690, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_222(F->t_1156)), rt_str(" *", 2)), F->g_1164), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_704, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1164), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1164, rt_str(" = &", 4)), (*(P642)rt_nil_check(F->lv_1159))), rt_str(";", 1)); b_; }));
(*(P655)rt_nil_check(F->y_1162)).level = ((rt_int)0LL);
(*(P655)rt_nil_check(F->y_1162)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1164), rt_str(")", 1)); b_; }));
}
(*(P655)rt_nil_check(F->y_1162)).t = F->t_1156;
(*(P655)rt_nil_check(F->y_1162)).c = F->lc_1160;
(*(P655)rt_nil_check(F->y_1162)).ro_flag = ((*(P647)rt_nil_check(F->p_1154)).ival == (((rt_int)4LL)));
f_define_158(F->y_1162, F->line_329);
} else {
F->y_1165 = NULL;
F->y_1165 = f_new_sym_171((((rt_int)2LL)), (*(P647)rt_nil_check(F->p_1154)).name);
F->v_1166 = rt_str_copy(f_gexpr_555(F->a_1155, F->t_1156, &F->vt_1157));
f_check_type_220(F->vt_1157, F->t_1156, F->line_329);
{
F->access_1167 = rt_str_copy(f_storage_363(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1154)).name)), F->t_1156));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1167, rt_str(" = ", 3)), f_copy_code_300(F->t_1156, &F->v_1166)), rt_str(";", 1)); b_; }));
f_bind_366(F->y_1165, &F->access_1167);
}
(*(P655)rt_nil_check(F->y_1165)).t = F->t_1156;
(*(P655)rt_nil_check(F->y_1165)).c = F->c_1158;
(*(P655)rt_nil_check(F->y_1165)).ro_flag = 1;
f_define_158(F->y_1165, F->line_329);
}
F->p_1154 = (*(P647)rt_nil_check(F->p_1154)).next;
F->a_1155 = (*(P647)rt_nil_check(F->a_1155)).next;
}
if (((F->p_1154 != NULL) || (F->a_1155 != NULL))) {
f_fail_23(F->line_329, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->d_327)).name))); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_335(P647 d_331, P655 y_332, P647 args_333, P647 owner_334) {
  struct f_elaborate_capsule_335fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_331 = d_331;
F->y_332 = y_332;
F->args_333 = args_333;
F->owner_334 = owner_334;
F->cr_1168 = NULL;
F->ctx_1169 = NULL;
F->saved_gotos_1170 = NULL;
F->m_1171 = NULL;
F->p_1172 = NULL;
F->p_1172 = (*(P647)rt_nil_check(F->d_331)).a;
{ R672 *cell1174 = rt_alloc(sizeof(R672));
(*cell1174).d = NULL;
(*cell1174).next = NULL;
F->cr_1168 = cell1174;
}
(*(P671)rt_nil_check(F->cr_1168)).d = F->d_331;
(*(P671)rt_nil_check(F->cr_1168)).next = g_caps_699;
g_caps_699 = F->cr_1168;
f_open_scope_167();
if (((*(P647)rt_nil_check(F->d_331)).b != NULL)) {
f_capsule_params_330(F->d_331, F->args_333, (*(P647)rt_nil_check(F->owner_334)).line);
}
{ R662 *cell1175 = rt_alloc(sizeof(R662));
(*cell1175).imps = NULL;
(*cell1175).next = NULL;
F->ctx_1169 = cell1175;
}
(*(P661)rt_nil_check(F->ctx_1169)).depth = g_depth_683;
(*(P661)rt_nil_check(F->ctx_1169)).imps = (*(P647)rt_nil_check(F->d_331)).d;
(*(P661)rt_nil_check(F->ctx_1169)).all_imp = ((*(P647)rt_nil_check(F->d_331)).flag >= ((rt_int)2LL));
(*(P661)rt_nil_check(F->ctx_1169)).next = g_fctx_698;
g_fctx_698 = F->ctx_1169;
F->saved_gotos_1170 = g_gotos_716;
g_gotos_716 = NULL;
f_declare_labels_389((*(P647)rt_nil_check(F->d_331)).c);
f_declare_body_316((*(P647)rt_nil_check(F->d_331)).c);
f_capsule_body_396((*(P647)rt_nil_check(F->d_331)).c);
{
F->w_1176 = NULL;
{ R674 *cell1177 = rt_alloc(sizeof(R674));
(*cell1177).d = NULL;
(*cell1177).w = NULL;
(*cell1177).next = NULL;
F->w_1176 = cell1177;
}
(*(P673)rt_nil_check(F->w_1176)).d = F->owner_334;
(*(P673)rt_nil_check(F->w_1176)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_383((*(P647)rt_nil_check(F->d_331)).c); b_; }));
(*(P673)rt_nil_check(F->w_1176)).next = g_cap_waits_700;
g_cap_waits_700 = F->w_1176;
}
g_fctx_698 = (*(P661)rt_nil_check(g_fctx_698)).next;
F->m_1171 = g_scope_stack_684;
while (((F->m_1171 != NULL) && ((*(P655)rt_nil_check(F->m_1171)).depth == g_depth_683))) {
if ((((((*(P655)rt_nil_check(F->m_1171)).kind == (((rt_int)5LL))) && ((*(P655)rt_nil_check(F->m_1171)).t == NULL)) && ((*(P655)rt_nil_check(F->m_1171)).decl != NULL)) && ((*(P647)rt_nil_check((*(P655)rt_nil_check(F->m_1171)).decl)).kind == (((rt_int)43LL))))) {
(*(P655)rt_nil_check(F->m_1171)).t = f_new_type_247(F->m_1171, f_nn_61((((rt_int)80LL)), (*(P647)rt_nil_check(F->d_331)).line), &(*(P655)rt_nil_check(F->m_1171)).c);
} else if (((((*(P655)rt_nil_check(F->m_1171)).kind == (((rt_int)5LL))) || ((*(P655)rt_nil_check(F->m_1171)).kind == (((rt_int)6LL)))) && ((*(P655)rt_nil_check(F->m_1171)).t == NULL))) {
(*(P655)rt_nil_check(F->m_1171)).t = f_resolve_subtype_233((*(P655)rt_nil_check(F->m_1171)).st, &(*(P655)rt_nil_check(F->m_1171)).c);
} else if ((((*(P655)rt_nil_check(F->m_1171)).kind == (((rt_int)5LL))) && ((*(P651)rt_nil_check((*(P655)rt_nil_check(F->m_1171)).t)).kind == (((rt_int)8LL))))) {
f_finish_ptr_345((*(P655)rt_nil_check(F->m_1171)).t);
}
F->m_1171 = (*(P655)rt_nil_check(F->m_1171)).stack;
}
F->m_1171 = g_scope_stack_684;
while (((F->m_1171 != NULL) && ((*(P655)rt_nil_check(F->m_1171)).depth == g_depth_683))) {
if (f_exported_322(F->d_331, &(*(P642)rt_nil_check((*(P655)rt_nil_check(F->m_1171)).name)), &F->ro_1173)) {
F->z_1178 = NULL;
F->z_1178 = f_copy_sym_324(F->m_1171);
if (F->ro_1173) {
(*(P655)rt_nil_check(F->z_1178)).ro_flag = 1;
}
(*(P655)rt_nil_check(F->z_1178)).mnext = (*(P655)rt_nil_check(F->y_332)).members;
(*(P655)rt_nil_check(F->y_332)).members = F->z_1178;
}
F->m_1171 = (*(P655)rt_nil_check(F->m_1171)).stack;
}
while ((F->p_1172 != NULL)) {
if ((((!rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1172)).name)), rt_str(":=", 2))) && (!rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1172)).name)), rt_str("=", 1)))) && ((f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1172)).name))) == NULL) || ((*(P655)rt_nil_check(f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1172)).name))))).depth != g_depth_683)))) {
f_fail_23((*(P647)rt_nil_check(F->d_331)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1172)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->d_331)).name))); b_; }));
}
F->p_1172 = (*(P647)rt_nil_check(F->p_1172)).next;
}
f_close_scope_168();
g_caps_699 = (*(P671)rt_nil_check(g_caps_699)).next;
g_gotos_716 = F->saved_gotos_1170;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_338(P647 d_336, rstr *op_337) {
  struct f_exports_op_338fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_336 = d_336;
F->op_337 = op_337;
F->p_1179 = NULL;
if ((F->d_336 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1179 = (*(P647)rt_nil_check(F->d_336)).a;
while ((F->p_1179 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1179)).name)), (*F->op_337))) {
F->result_ = 1;
goto ret_;
}
F->p_1179 = (*(P647)rt_nil_check(F->p_1179)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P642 f_renamed_341(P647 d_339, P655 z_340) {
  struct f_renamed_341fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_339 = d_339;
F->z_340 = z_340;
F->r_1180 = NULL;
F->r_1180 = (*(P647)rt_nil_check(F->d_339)).c;
while ((F->r_1180 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->r_1180)).name)), (*(P642)rt_nil_check((*(P655)rt_nil_check(F->z_340)).name)))) {
F->result_ = (*(P647)rt_nil_check((*(P647)rt_nil_check(F->r_1180)).a)).name;
goto ret_;
}
F->r_1180 = (*(P647)rt_nil_check(F->r_1180)).next;
}
F->result_ = (*(P655)rt_nil_check(F->z_340)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_expose_343(P647 d_342) {
  struct f_gen_expose_343fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_342 = d_342;
F->y_1181 = NULL;
F->y_1181 = f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->d_342)).name)));
F->m_1182 = NULL;
F->p_1183 = NULL;
F->p_1183 = (*(P647)rt_nil_check(F->d_342)).a;
F->r_1184 = NULL;
F->r_1184 = (*(P647)rt_nil_check(F->d_342)).c;
if (((F->y_1181 == NULL) || ((*(P655)rt_nil_check(F->y_1181)).kind != (((rt_int)8LL))))) {
f_fail_23((*(P647)rt_nil_check(F->d_342)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->d_342)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if ((((*(P647)rt_nil_check(F->d_342)).flag == ((rt_int)1LL)) || ((*(P647)rt_nil_check(F->d_342)).flag == ((rt_int)3LL)))) {
F->inst_1185 = NULL;
F->inst_1185 = f_new_sym_171((((rt_int)8LL)), (*(P655)rt_nil_check(F->y_1181)).name);
(*(P655)rt_nil_check(F->inst_1185)).decl = (*(P655)rt_nil_check(F->y_1181)).decl;
f_elaborate_capsule_335((*(P655)rt_nil_check(F->y_1181)).decl, F->inst_1185, (*(P647)rt_nil_check(F->d_342)).b, F->d_342);
F->y_1181 = F->inst_1185;
} else if ((((*(P655)rt_nil_check(F->y_1181)).decl != NULL) && ((*(P647)rt_nil_check((*(P655)rt_nil_check(F->y_1181)).decl)).b != NULL))) {
f_fail_23((*(P647)rt_nil_check(F->d_342)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->d_342)).name))), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P647)rt_nil_check(F->d_342)).b != NULL)) {
f_fail_23((*(P647)rt_nil_check(F->d_342)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1184 != NULL)) {
F->found_1186 = 0;
F->m_1182 = (*(P655)rt_nil_check(F->y_1181)).members;
while ((F->m_1182 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P655)rt_nil_check(F->m_1182)).name)), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->r_1184)).name)))) {
F->found_1186 = 1;
}
F->m_1182 = (*(P655)rt_nil_check(F->m_1182)).mnext;
}
if ((!F->found_1186)) {
f_fail_23((*(P647)rt_nil_check(F->d_342)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->r_1184)).name)), rt_str(" is renamed but not made known by ", 34)), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->d_342)).name))); b_; }));
}
F->r_1184 = (*(P647)rt_nil_check(F->r_1184)).next;
}
if (((*(P647)rt_nil_check(F->d_342)).ival == ((rt_int)1LL))) {
F->m_1182 = (*(P655)rt_nil_check(F->y_1181)).members;
while ((F->m_1182 != NULL)) {
F->z_1187 = NULL;
F->z_1187 = f_copy_sym_324(F->m_1182);
(*(P655)rt_nil_check(F->z_1187)).name = f_renamed_341(F->d_342, F->m_1182);
f_define_158(F->z_1187, (*(P647)rt_nil_check(F->d_342)).line);
F->m_1182 = (*(P655)rt_nil_check(F->m_1182)).mnext;
}
goto ret_;
}
while ((F->p_1183 != NULL)) {
F->found_1188 = 0;
F->m_1182 = (*(P655)rt_nil_check(F->y_1181)).members;
while ((F->m_1182 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P655)rt_nil_check(F->m_1182)).name)), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1183)).name)))) {
F->z_1189 = NULL;
F->z_1189 = f_copy_sym_324(F->m_1182);
if (((*(P647)rt_nil_check(F->p_1183)).ival == ((rt_int)1LL))) {
(*(P655)rt_nil_check(F->z_1189)).ro_flag = 1;
}
(*(P655)rt_nil_check(F->z_1189)).name = f_renamed_341(F->d_342, F->m_1182);
f_define_158(F->z_1189, (*(P647)rt_nil_check(F->d_342)).line);
F->found_1188 = 1;
}
F->m_1182 = (*(P655)rt_nil_check(F->m_1182)).mnext;
}
if ((!F->found_1188)) {
f_fail_23((*(P647)rt_nil_check(F->d_342)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1183)).name)), rt_str(" is not exported by ", 20)), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->d_342)).name))); b_; }));
}
F->p_1183 = (*(P647)rt_nil_check(F->p_1183)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_345(P651 t_344) {
  struct f_finish_ptr_345fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_344 = t_344;
F->d_1190 = NULL;
F->d_1190 = (*(P651)rt_nil_check(F->t_344)).decl;
F->p_1191 = NULL;
F->c_1192 = NULL;
F->dummy_1193 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1193, rt_str(" ", 1));
if (((*(P651)rt_nil_check(F->t_344)).target != NULL)) {
goto ret_;
}
f_open_scope_167();
F->p_1191 = (*(P647)rt_nil_check(F->d_1190)).b;
while ((F->p_1191 != NULL)) {
F->y_1194 = NULL;
F->y_1194 = f_new_sym_171((((rt_int)2LL)), (*(P647)rt_nil_check(F->p_1191)).name);
(*(P655)rt_nil_check(F->y_1194)).t = g_ty_int_722;
(*(P655)rt_nil_check(F->y_1194)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_158(F->y_1194, (*(P647)rt_nil_check(F->d_1190)).line);
F->p_1191 = (*(P647)rt_nil_check(F->p_1191)).next;
}
(*(P651)rt_nil_check(F->t_344)).target = f_resolve_subtype_233((*(P647)rt_nil_check(F->d_1190)).a, &F->c_1192);
f_close_scope_168();
(*rt_str_at(&F->dummy_1193, ((rt_int)1LL))) = rt_str_get(f_ctype_222(F->t_344), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1193, ((rt_int)1LL))) = rt_str_get(f_ctype_222((*(P651)rt_nil_check(F->t_344)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_347(P647 d_346) {
  struct f_declare_subprogram_347fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_346 = d_346;
f_define_158(f_build_subprogram_349(F->d_346), (*(P647)rt_nil_check(F->d_346)).line);
ret_:
  RT_FPOP();
  return;
}

static P655 f_build_subprogram_349(P647 d_348) {
  struct f_build_subprogram_349fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_348 = d_348;
F->y_1195 = NULL;
F->p_1196 = NULL;
F->p_1196 = (*(P647)rt_nil_check(F->d_348)).a;
F->tail_1197 = NULL;
if (((*(P647)rt_nil_check(F->d_348)).kind == (((rt_int)46LL)))) {
F->y_1195 = f_new_sym_171((((rt_int)3LL)), (*(P647)rt_nil_check(F->d_348)).name);
} else if (((*(P647)rt_nil_check(F->d_348)).kind == (((rt_int)50LL)))) {
F->y_1195 = f_new_sym_171((((rt_int)9LL)), (*(P647)rt_nil_check(F->d_348)).name);
} else {
F->y_1195 = f_new_sym_171((((rt_int)4LL)), (*(P647)rt_nil_check(F->d_348)).name);
}
while ((F->p_1196 != NULL)) {
F->pm_1198 = NULL;
{ R658 *cell1199 = rt_alloc(sizeof(R658));
(*cell1199).name = NULL;
(*cell1199).t = NULL;
(*cell1199).c = NULL;
(*cell1199).cfield = NULL;
(*cell1199).next = NULL;
F->pm_1198 = cell1199;
}
(*(P657)rt_nil_check(F->pm_1198)).name = (*(P647)rt_nil_check(F->p_1196)).name;
(*(P657)rt_nil_check(F->pm_1198)).mode = (*(P647)rt_nil_check(F->p_1196)).ival;
(*(P657)rt_nil_check(F->pm_1198)).t = f_resolve_subtype_233((*(P647)rt_nil_check(F->p_1196)).a, &(*(P657)rt_nil_check(F->pm_1198)).c);
(*(P657)rt_nil_check(F->pm_1198)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1196)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1197 == NULL)) {
(*(P655)rt_nil_check(F->y_1195)).params = F->pm_1198;
} else {
(*(P657)rt_nil_check(F->tail_1197)).next = F->pm_1198;
}
F->tail_1197 = F->pm_1198;
F->p_1196 = (*(P647)rt_nil_check(F->p_1196)).next;
}
(*(P655)rt_nil_check(F->y_1195)).result = g_ty_void_727;
if (((*(P647)rt_nil_check(F->d_348)).b != NULL)) {
F->rc_1200 = NULL;
F->pm_1201 = NULL;
F->pm_1201 = (*(P655)rt_nil_check(F->y_1195)).params;
F->saved_1202 = NULL;
F->saved_1202 = g_code_694;
g_code_694 = f_new_buffer_24();
f_open_scope_167();
while ((F->pm_1201 != NULL)) {
F->z_1203 = NULL;
F->z_1203 = f_new_sym_171((((rt_int)2LL)), (*(P657)rt_nil_check(F->pm_1201)).name);
(*(P655)rt_nil_check(F->z_1203)).t = (*(P657)rt_nil_check(F->pm_1201)).t;
(*(P655)rt_nil_check(F->z_1203)).c = (*(P657)rt_nil_check(F->pm_1201)).c;
(*(P655)rt_nil_check(F->z_1203)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_158(F->z_1203, (*(P647)rt_nil_check(F->d_348)).line);
F->pm_1201 = (*(P657)rt_nil_check(F->pm_1201)).next;
}
(*(P655)rt_nil_check(F->y_1195)).result = f_resolve_subtype_233((*(P647)rt_nil_check(F->d_348)).b, &F->rc_1200);
f_close_scope_168();
g_code_694 = F->saved_1202;
}
(*(P655)rt_nil_check(F->y_1195)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_517(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->d_348)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P655)rt_nil_check(F->y_1195)).decl = F->d_348;
(*(P655)rt_nil_check(F->y_1195)).level = g_cur_level_697;
if (((*(P647)rt_nil_check(F->d_348)).kind == (((rt_int)50LL)))) {
f_put_27(g_out_globals_690, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_1195)).cname))), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1195;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_352(P642 pr_350, rstr *p_351) {
  struct f_has_pragmat_352fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_350 = pr_350;
F->p_351 = p_351;
if ((F->pr_350 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1205 = ((rt_int)1LL), hi1206 = rt_sub(((*(P642)rt_nil_check(F->pr_350))).len, ((*F->p_351)).len);
for (rt_int it1207 = lo1205; it1207 <= hi1206; it1207++) {
F->i_1204 = it1207;
if (((rt_str_eq(rt_str_slice((*(P642)rt_nil_check(F->pr_350)), F->i_1204, rt_sub(rt_add(F->i_1204, ((*F->p_351)).len), ((rt_int)1LL))), (*F->p_351)) && (rt_str_get((*(P642)rt_nil_check(F->pr_350)), rt_add(F->i_1204, ((*F->p_351)).len)) == 59)) && ((F->i_1204 == ((rt_int)1LL)) || (rt_str_get((*(P642)rt_nil_check(F->pr_350)), rt_sub(F->i_1204, ((rt_int)1LL))) == 59)))) {
F->result_ = 1;
goto ret_;
}
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P642 f_suppressing_354(P642 pr_353) {
  struct f_suppressing_354fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_353 = pr_353;
F->r_1208 = NULL;
F->r_1208 = g_suppress_714;
F->i_1209 = ((rt_int)1LL);
if ((F->pr_353 == NULL)) {
F->result_ = F->r_1208;
goto ret_;
}
if ((F->r_1208 == NULL)) {
F->r_1208 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(F->i_1209, ((rt_int)9LL)) <= ((*(P642)rt_nil_check(F->pr_353))).len)) {
if (rt_str_eq(rt_str_slice((*(P642)rt_nil_check(F->pr_353)), F->i_1209, rt_add(F->i_1209, ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1210 = rt_add(F->i_1209, ((rt_int)9LL));
F->k_1211 = F->j_1210;
while ((rt_str_get((*(P642)rt_nil_check(F->pr_353)), F->k_1211) != 41)) {
if ((rt_str_get((*(P642)rt_nil_check(F->pr_353)), F->k_1211) == 44)) {
F->r_1208 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->r_1208)), rt_str_slice((*(P642)rt_nil_check(F->pr_353)), F->j_1210, rt_sub(F->k_1211, ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1210 = rt_add(F->k_1211, ((rt_int)1LL));
}
F->k_1211 = rt_add(F->k_1211, ((rt_int)1LL));
}
F->r_1208 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->r_1208)), rt_str_slice((*(P642)rt_nil_check(F->pr_353)), F->j_1210, rt_sub(F->k_1211, ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1209 = F->k_1211;
}
F->i_1209 = rt_add(F->i_1209, ((rt_int)1LL));
}
F->result_ = F->r_1208;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_356(rstr *x_355) {
  struct f_suppressed_356fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_355 = x_355;
F->w_1212 = rt_str_new(rt_add(((*F->x_355)).len, ((rt_int)2LL)));
rt_str_assign(&F->w_1212, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_355)), rt_str(" ", 1)));
if ((g_suppress_714 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1214 = ((rt_int)1LL), hi1215 = rt_add(rt_sub(((*(P642)rt_nil_check(g_suppress_714))).len, (F->w_1212).len), ((rt_int)1LL));
for (rt_int it1216 = lo1214; it1216 <= hi1215; it1216++) {
F->i_1213 = it1216;
if (rt_str_eq(rt_str_slice((*(P642)rt_nil_check(g_suppress_714)), F->i_1213, rt_sub(rt_add(F->i_1213, (F->w_1212).len), ((rt_int)1LL))), F->w_1212)) {
F->result_ = 1;
goto ret_;
}
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_element_358(P647 e_357) {
  struct f_element_358fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_357 = e_357;
F->saved_1217 = NULL;
F->saved_1217 = g_suppress_714;
g_suppress_714 = f_suppressing_354((*(P647)rt_nil_check(F->e_357)).prags);
f_element1_360(F->e_357);
g_suppress_714 = F->saved_1217;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_360(P647 e_359) {
  struct f_element1_360fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_359 = e_359;
F->k_1218 = (*(P647)rt_nil_check(F->e_359)).kind;
if (((F->k_1218 == (((rt_int)48LL))) && (((*(P647)rt_nil_check(F->e_359)).flag == ((rt_int)1LL)) || ((*(P647)rt_nil_check(F->e_359)).flag == ((rt_int)3LL))))) {
f_gen_expose_343(F->e_359);
} else if ((((F->k_1218 == (((rt_int)45LL))) || (F->k_1218 == (((rt_int)46LL)))) || (F->k_1218 == (((rt_int)50LL))))) {
f_subprogram_376(F->e_359);
} else if ((F->k_1218 == (((rt_int)51LL)))) {
F->g_1219 = NULL;
F->g_1219 = f_lookup_decl_155(F->e_359);
if ((F->g_1219 != NULL)) {
{ A660 *cell1220 = rt_alloc(sizeof(A660));
rt_int pv1221 = (((rt_int)4093LL));
(*cell1220).lo = ((rt_int)0LL); (*cell1220).hi = pv1221; (*cell1220).lo2 = 1; (*cell1220).hi2 = 1;
(*cell1220).p = rt_alloc(sizeof(P655) * (size_t)RT_CNT((*cell1220)));
for (rt_int i1222 = 0; i1222 < RT_CNT((*cell1220)); i1222++) {
(*cell1220).p[i1222] = NULL;
}
(*(P655)rt_nil_check(F->g_1219)).env = cell1220;
}
{ rt_int lo1224 = ((rt_int)0LL), hi1225 = (((rt_int)4093LL));
for (rt_int it1226 = lo1224; it1226 <= hi1225; it1226++) {
F->i_1223 = it1226;
(*(P659)rt_nil_check((*(P655)rt_nil_check(F->g_1219)).env)).p[rt_index(F->i_1223, (*(P659)rt_nil_check((*(P655)rt_nil_check(F->g_1219)).env)).lo, (*(P659)rt_nil_check((*(P655)rt_nil_check(F->g_1219)).env)).hi) - (*(P659)rt_nil_check((*(P655)rt_nil_check(F->g_1219)).env)).lo] = (*(P659)rt_nil_check(g_table_680)).p[rt_index(F->i_1223, (*(P659)rt_nil_check(g_table_680)).lo, (*(P659)rt_nil_check(g_table_680)).hi) - (*(P659)rt_nil_check(g_table_680)).lo];
}
}
}
} else if ((((((F->k_1218 == (((rt_int)49LL))) || (F->k_1218 == (((rt_int)42LL)))) || (F->k_1218 == (((rt_int)43LL)))) || (F->k_1218 == (((rt_int)47LL)))) || (F->k_1218 == (((rt_int)48LL))))) {
goto ret_;
} else if ((F->k_1218 == (((rt_int)44LL)))) {
f_finish_ptr_345((*(P655)rt_nil_check(f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_359)).name))))).t);
} else if ((F->k_1218 == (((rt_int)40LL)))) {
f_var_decl_368(F->e_359);
} else if (((F->k_1218 == (((rt_int)41LL))) && ((*(P647)rt_nil_check(F->e_359)).flag == ((rt_int)0LL)))) {
f_const_decl_374(F->e_359);
} else if ((F->k_1218 == (((rt_int)41LL)))) {
goto ret_;
} else if ((F->k_1218 == (((rt_int)33LL)))) {
F->t_1227 = NULL;
F->c_1228 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_359)).a, g_ty_bool_723, &F->t_1227));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1228), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_407(F->e_359);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_363(rstr *name_361, P651 t_362) {
  struct f_storage_363fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_361 = name_361;
F->t_362 = t_362;
if ((!g_in_func_696)) {
F->g_1229 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_361))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_690, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_222(F->t_362)), rt_str(" ", 1)), F->g_1229), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_704, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1229), rt_str(");", 2)); b_; }));
g_st_field_702 = f_mk_3(&F->g_1229);
F->result_ = F->g_1229;
goto ret_;
}
{
F->f_1230 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_361)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_695, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_222(F->t_362)), rt_str(" ", 1)), F->f_1230), rt_str(";", 1)); b_; }));
g_st_field_702 = f_mk_3(&F->f_1230);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1230);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_366(P655 y_364, rstr *access_365) {
  struct f_bind_366fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_364 = y_364;
F->access_365 = access_365;
if (g_in_func_696) {
(*(P655)rt_nil_check(F->y_364)).level = g_cur_level_697;
(*(P655)rt_nil_check(F->y_364)).access = g_st_field_702;
} else {
(*(P655)rt_nil_check(F->y_364)).level = ((rt_int)0LL);
(*(P655)rt_nil_check(F->y_364)).access = f_mk_3(&(*F->access_365));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_368(P647 d_367) {
  struct f_var_decl_368fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_367 = d_367;
F->c_1231 = NULL;
F->t_1232 = NULL;
F->t_1232 = f_resolve_subtype_233((*(P647)rt_nil_check(F->d_367)).a, &F->c_1231);
F->y_1233 = NULL;
F->y_1233 = f_new_sym_171((((rt_int)1LL)), (*(P647)rt_nil_check(F->d_367)).name);
F->access_1234 = rt_str_copy(f_storage_363(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->d_367)).name)), F->t_1232));
F->c_1231 = f_freeze_199(F->c_1231, F->t_1232);
f_init_storage_251(&F->access_1234, F->t_1232, F->c_1231);
if (((*(P647)rt_nil_check(F->d_367)).ival == ((rt_int)1LL))) {
F->it_1235 = NULL;
F->n_1236 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->d_367)).c, g_ty_int_722, &F->it_1235));
if (((*(P651)rt_nil_check(F->t_1232)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P647)rt_nil_check(F->d_367)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_209((*(P651)rt_nil_check(F->t_1232)).elem, g_ty_ascii_725)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1234), rt_str(", ", 2)), F->n_1236), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1234), rt_str(", ", 2)), F->n_1236), rt_str(", 0);", 5)); b_; }));
}
} else if (((*(P647)rt_nil_check(F->d_367)).ival == ((rt_int)2LL))) {
f_fail_23((*(P647)rt_nil_check(F->d_367)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P647)rt_nil_check(F->d_367)).b != NULL)) {
F->vt_1237 = NULL;
F->v_1238 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->d_367)).b, F->t_1232, &F->vt_1237));
f_check_type_220(F->vt_1237, F->t_1232, (*(P647)rt_nil_check(F->d_367)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_297(&F->access_1234, F->t_1232, &F->v_1238, F->c_1231); b_; }));
}
(*(P655)rt_nil_check(F->y_1233)).t = F->t_1232;
(*(P655)rt_nil_check(F->y_1233)).c = F->c_1231;
f_bind_366(F->y_1233, &F->access_1234);
f_define_158(F->y_1233, (*(P647)rt_nil_check(F->d_367)).line);
if (f_needs_fin_256(F->t_1232)) {
f_open_fin_370(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_259(&F->access_1234, F->t_1232); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_370(rstr *fc_369) {
  struct f_open_fin_370fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_369 = fc_369;
F->f_1239 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1240 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1239), rt_str("; if (RT_TRY(", 13)), F->f_1239), rt_str(")) {", 4)); b_; }));
f_push_cleanup_404(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1239), rt_str("); ", 3)), (*F->fc_369)); b_; }));
{ R666 *cell1241 = rt_alloc(sizeof(R666));
(*cell1241).s = NULL;
(*cell1241).next = NULL;
F->l_1240 = cell1241;
}
(*(P665)rt_nil_check(F->l_1240)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1239), rt_str("); ", 3)), (*F->fc_369)), rt_str(" } else { RT_POP(", 17)), F->f_1239), rt_str("); ", 3)), (*F->fc_369)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P665)rt_nil_check(F->l_1240)).next = g_fins_706;
g_fins_706 = F->l_1240;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_372(P665 saved_371) {
  struct f_close_fins_372fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_371 = saved_371;
while (((g_fins_706 != F->saved_371) && (g_fins_706 != NULL))) {
f_emit_29(&(*(P642)rt_nil_check((*(P665)rt_nil_check(g_fins_706)).s)));
f_pop_cleanup_405();
g_fins_706 = (*(P665)rt_nil_check(g_fins_706)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_374(P647 d_373) {
  struct f_const_decl_374fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_373 = d_373;
F->c_1242 = NULL;
F->c_1242 = f_new_cons_174();
F->t_1243 = NULL;
F->vt_1244 = NULL;
F->y_1245 = NULL;
F->y_1245 = f_new_sym_171((((rt_int)2LL)), (*(P647)rt_nil_check(F->d_373)).name);
if (((*(P647)rt_nil_check(F->d_373)).a != NULL)) {
F->t_1243 = f_resolve_subtype_233((*(P647)rt_nil_check(F->d_373)).a, &F->c_1242);
}
{
F->v_1247 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->d_373)).b, F->t_1243, &F->vt_1244));
if ((F->t_1243 != NULL)) {
f_check_type_220(F->vt_1244, F->t_1243, (*(P647)rt_nil_check(F->d_373)).line);
} else {
F->t_1243 = F->vt_1244;
}
if (((*(P651)rt_nil_check(F->t_1243)).kind == (((rt_int)1LL)))) {
(*(P655)rt_nil_check(F->y_1245)).mvalue = f_manifest_269((*(P647)rt_nil_check(F->d_373)).b, &F->ok_1246);
(*(P655)rt_nil_check(F->y_1245)).hasmv = F->ok_1246;
}
{
F->access_1248 = rt_str_copy(f_storage_363(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->d_373)).name)), F->t_1243));
if (((*(P651)rt_nil_check(F->t_1243)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_254((*(P651)rt_nil_check(F->t_1243)).initp, &F->access_1248); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1248, rt_str(" = ", 3)), f_checked_203(F->t_1243, F->c_1242, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_300(F->t_1243, &F->v_1247); b_; }))), rt_str(";", 1)); b_; }));
f_bind_366(F->y_1245, &F->access_1248);
if (f_needs_fin_256(F->t_1243)) {
f_open_fin_370(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_259(&F->access_1248, F->t_1243); b_; }));
}
}
}
(*(P655)rt_nil_check(F->y_1245)).t = F->t_1243;
(*(P655)rt_nil_check(F->y_1245)).c = F->c_1242;
(*(P655)rt_nil_check(F->y_1245)).ro_flag = 1;
f_define_158(F->y_1245, (*(P647)rt_nil_check(F->d_373)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_376(P647 d_375) {
  struct f_subprogram_376fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_375 = d_375;
f_gen_subprogram_379(F->d_375, f_lookup_decl_155(F->d_375));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_379(P647 d_377, P655 y_378) {
  struct f_gen_subprogram_379fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_377 = d_377;
F->y_378 = y_378;
F->saved_code_1249 = NULL;
F->saved_code_1249 = g_code_694;
F->saved_fields_1250 = NULL;
F->saved_fields_1250 = g_fields_buf_695;
F->saved_in_1251 = g_in_func_696;
F->saved_sym_1252 = NULL;
F->saved_sym_1252 = g_func_sym_708;
F->saved_exits_1253 = NULL;
F->saved_exits_1253 = g_exits_715;
F->saved_gotos_1254 = NULL;
F->saved_gotos_1254 = g_gotos_716;
F->saved_frames_1255 = g_frames_717;
F->args_1256 = NULL;
F->args_1256 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1257 = NULL;
F->pm_1257 = (*(P655)rt_nil_check(F->y_378)).params;
F->saved_handlers_1258 = NULL;
F->saved_handlers_1258 = g_handlers_718;
F->saved_cleanups_1259 = NULL;
F->saved_cleanups_1259 = g_cleanups_719;
F->ctx_1260 = NULL;
F->head_1261 = NULL;
F->frame_1262 = NULL;
F->frame_1262 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_378)).cname)), rt_str("fr", 2)); b_; }));
F->parent_1263 = NULL;
F->copy_back_1264 = NULL;
F->copy_back_1264 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1265 = NULL;
F->pfin_1265 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1266 = NULL;
F->saved_fins_1266 = g_fins_706;
F->saved_rc_1267 = NULL;
F->saved_rc_1267 = g_func_rc_709;
F->saved_ret_1268 = NULL;
F->saved_ret_1268 = g_cap_ret_710;
F->saved_rflag_1269 = NULL;
F->saved_rflag_1269 = g_cap_rflag_711;
F->pn_1270 = NULL;
F->pn_1270 = (*(P647)rt_nil_check(F->d_377)).a;
F->nonrec_end_1271 = NULL;
if (g_in_func_696) {
F->parent_1263 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P655)rt_nil_check(g_func_sym_708)).cname)), rt_str("fr", 2)); b_; }));
}
g_fins_706 = NULL;
g_func_rc_709 = NULL;
g_cap_ret_710 = NULL;
g_cap_rflag_711 = NULL;
g_code_694 = f_new_buffer_24();
g_fields_buf_695 = f_new_buffer_24();
g_in_func_696 = 1;
g_func_sym_708 = F->y_378;
g_exits_715 = NULL;
g_gotos_716 = NULL;
g_frames_717 = ((rt_int)0LL);
g_handlers_718 = NULL;
g_cleanups_719 = NULL;
g_cur_level_697 = rt_add(g_cur_level_697, ((rt_int)1LL));
f_open_scope_167();
{ R662 *cell1273 = rt_alloc(sizeof(R662));
(*cell1273).imps = NULL;
(*cell1273).next = NULL;
F->ctx_1260 = cell1273;
}
(*(P661)rt_nil_check(F->ctx_1260)).depth = g_depth_683;
(*(P661)rt_nil_check(F->ctx_1260)).imps = (*(P647)rt_nil_check(F->d_377)).d;
(*(P661)rt_nil_check(F->ctx_1260)).all_imp = ((*(P647)rt_nil_check(F->d_377)).flag >= ((rt_int)2LL));
(*(P661)rt_nil_check(F->ctx_1260)).next = g_fctx_698;
g_fctx_698 = F->ctx_1260;
if ((F->parent_1263 != NULL)) {
f_put_27(g_fields_buf_695, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P642)rt_nil_check(F->parent_1263))), rt_str(" *up;", 5)); b_; }));
if (((*(P655)rt_nil_check(F->y_378)).kind != (((rt_int)9LL)))) {
F->args_1256 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P642)rt_nil_check(F->parent_1263))), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1257 != NULL)) {
F->ct_1274 = rt_str_copy(f_ctype_222((*(P657)rt_nil_check(F->pm_1257)).t));
F->f_1275 = rt_str_copy((*(P642)rt_nil_check((*(P657)rt_nil_check(F->pm_1257)).cfield)));
F->p_1276 = NULL;
F->pc_1277 = NULL;
F->pc_1277 = (*(P657)rt_nil_check(F->pm_1257)).c;
F->ac_1278 = NULL;
if ((((*(P642)rt_nil_check(F->args_1256))).len > ((rt_int)0LL))) {
F->args_1256 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->args_1256)), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_176((*(P657)rt_nil_check(F->pm_1257)).t)) {
F->fc_1279 = NULL;
F->ft_1280 = NULL;
F->ft_1280 = f_resolve_subtype_233((*(P647)rt_nil_check(F->pn_1270)).a, &F->fc_1279);
F->pc_1277 = f_freeze_199(F->fc_1279, (*(P657)rt_nil_check(F->pm_1257)).t);
}
if (((*(P657)rt_nil_check(F->pm_1257)).mode == (((rt_int)1LL)))) {
F->p_1276 = f_new_sym_171((((rt_int)2LL)), (*(P657)rt_nil_check(F->pm_1257)).name);
f_put_27(g_fields_buf_695, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1274), rt_str(" ", 1)), F->f_1275), rt_str(";", 1)); b_; }));
F->args_1256 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->args_1256)), F->ct_1274), rt_str(" ", 1)), F->f_1275); b_; }));
(*(P655)rt_nil_check(F->p_1276)).access = f_mk_3(&F->f_1275);
if (((*(P655)rt_nil_check(F->y_378)).kind != (((rt_int)9LL)))) {
if (((*(P651)rt_nil_check((*(P657)rt_nil_check(F->pm_1257)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_254((*(P651)rt_nil_check((*(P657)rt_nil_check(F->pm_1257)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1275); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1275), rt_str(" = ", 3)), f_checked_203((*(P657)rt_nil_check(F->pm_1257)).t, F->pc_1277, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_300((*(P657)rt_nil_check(F->pm_1257)).t, &F->f_1275); b_; }))), rt_str(";", 1)); b_; }));
if (f_needs_fin_256((*(P657)rt_nil_check(F->pm_1257)).t)) {
F->pfin_1265 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->pfin_1265)), f_fin_code_259(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1275); b_; }), (*(P657)rt_nil_check(F->pm_1257)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1276 = f_new_sym_171((((rt_int)1LL)), (*(P657)rt_nil_check(F->pm_1257)).name);
f_put_27(g_fields_buf_695, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1274), rt_str(" *", 2)), F->f_1275), rt_str(";", 1)); b_; }));
F->args_1256 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->args_1256)), F->ct_1274), rt_str(" *", 2)), F->f_1275); b_; }));
(*(P655)rt_nil_check(F->p_1276)).access = f_mk_3(&F->f_1275);
(*(P655)rt_nil_check(F->p_1276)).byref = 1;
if (((*(P655)rt_nil_check(F->y_378)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1275), rt_str(" = ", 3)), F->f_1275), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_176((*(P657)rt_nil_check(F->pm_1257)).t)) {
F->bt_1281 = rt_str_copy(f_bound_ctype_178((*(P657)rt_nil_check(F->pm_1257)).t));
f_put_27(g_fields_buf_695, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_1281), rt_str(" ", 1)), F->f_1275), rt_str("lo, ", 4)), F->f_1275), rt_str("hi;", 3)); b_; }));
F->args_1256 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->args_1256)), rt_str(", ", 2)), F->bt_1281), rt_str(" ", 1)), F->f_1275), rt_str("lo, ", 4)), F->bt_1281), rt_str(" ", 1)), F->f_1275), rt_str("hi", 2)); b_; }));
if (((*(P655)rt_nil_check(F->y_378)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1275), rt_str("lo = ", 5)), F->f_1275), rt_str("lo; F->", 7)), F->f_1275), rt_str("hi = ", 5)), F->f_1275), rt_str("hi;", 3)); b_; }));
}
F->ac_1278 = f_new_cons_174();
(*(P649)rt_nil_check(F->ac_1278)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1275, rt_str("lo", 2)); b_; }));
(*(P649)rt_nil_check(F->ac_1278)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1275, rt_str("hi", 2)); b_; }));
(*(P649)rt_nil_check(F->ac_1278)).dyn = 1;
(*(P649)rt_nil_check(F->ac_1278)).lvl = g_cur_level_697;
if (((F->pc_1277 == NULL) || ((*(P649)rt_nil_check(F->pc_1277)).lo == NULL))) {
F->pc_1277 = F->ac_1278;
} else if (((*(P657)rt_nil_check(F->pm_1257)).mode != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_1275), rt_str("lo <= F->", 9)), F->f_1275), rt_str("hi && (F->", 10)), F->f_1275), rt_str("lo != ", 6)), f_sub_lo_188((*(P657)rt_nil_check(F->pm_1257)).t, F->pc_1277)), rt_str(" || F->", 7)), F->f_1275), rt_str("hi != ", 6)), f_sub_hi_191((*(P657)rt_nil_check(F->pm_1257)).t, F->pc_1277)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if ((((*(P657)rt_nil_check(F->pm_1257)).mode == (((rt_int)3LL))) && ((*(P655)rt_nil_check(F->y_378)).kind != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_695, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1274), rt_str(" ", 1)), F->f_1275), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1275), rt_str("v = ", 4)), f_copy_code_300((*(P657)rt_nil_check(F->pm_1257)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1275); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P651)rt_nil_check((*(P657)rt_nil_check(F->pm_1257)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_254((*(P651)rt_nil_check((*(P657)rt_nil_check(F->pm_1257)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1275), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_1278 == NULL)) {
F->ac_1278 = (*(P657)rt_nil_check(F->pm_1257)).c;
}
F->copy_back_1264 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->copy_back_1264)), rt_str("  ", 2)), f_assign_code_297(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1275), rt_str(")", 1)); b_; }), (*(P657)rt_nil_check(F->pm_1257)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1275), rt_str("v", 1)); b_; }), F->ac_1278)); b_; }));
if (f_needs_fin_256((*(P657)rt_nil_check(F->pm_1257)).t)) {
F->pfin_1265 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->pfin_1265)), f_fin_code_259(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1275), rt_str("v", 1)); b_; }), (*(P657)rt_nil_check(F->pm_1257)).t)), rt_str(" ", 1)); b_; }));
}
(*(P655)rt_nil_check(F->p_1276)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1275, rt_str("v", 1)); b_; }));
(*(P655)rt_nil_check(F->p_1276)).byref = 0;
}
}
(*(P655)rt_nil_check(F->p_1276)).t = (*(P657)rt_nil_check(F->pm_1257)).t;
(*(P655)rt_nil_check(F->p_1276)).c = F->pc_1277;
(*(P655)rt_nil_check(F->p_1276)).level = g_cur_level_697;
(*(P655)rt_nil_check(F->p_1276)).ro_flag = (((*(P657)rt_nil_check(F->pm_1257)).mode == (((rt_int)1LL))) || ((*(P657)rt_nil_check(F->pm_1257)).mode == (((rt_int)4LL))));
f_define_158(F->p_1276, (*(P647)rt_nil_check(F->d_377)).line);
F->pm_1257 = (*(P657)rt_nil_check(F->pm_1257)).next;
F->pn_1270 = (*(P647)rt_nil_check(F->pn_1270)).next;
}
if (((*(P651)rt_nil_check((*(P655)rt_nil_check(F->y_378)).result)).kind != (((rt_int)9LL)))) {
if (((*(P647)rt_nil_check(F->d_377)).b != NULL)) {
F->rc_1282 = NULL;
F->rt_1283 = NULL;
F->rt_1283 = f_resolve_subtype_233((*(P647)rt_nil_check(F->d_377)).b, &F->rc_1282);
g_func_rc_709 = f_freeze_199(F->rc_1282, (*(P655)rt_nil_check(F->y_378)).result);
}
f_put_27(g_fields_buf_695, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_222((*(P655)rt_nil_check(F->y_378)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P651)rt_nil_check((*(P655)rt_nil_check(F->y_378)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_254((*(P651)rt_nil_check((*(P655)rt_nil_check(F->y_378)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_1272 = (((*(P642)rt_nil_check(F->pfin_1265))).len > ((rt_int)0LL));
if (F->has_pfin_1272) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_404(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_352((*(P647)rt_nil_check(F->d_377)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_352((*(P647)rt_nil_check(F->d_377)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_1284 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_1285 = NULL;
F->leave_1285 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_1284), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_690, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_1284), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_1284), rt_str(", ", 2)), f_bool_text_280(f_has_pragmat_352((*(P647)rt_nil_check(F->d_377)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_280(f_has_pragmat_352((*(P647)rt_nil_check(F->d_377)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->d_377)).name))), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_404(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_1264 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->copy_back_1264)), rt_str("  ", 2)), (*(P642)rt_nil_check(F->leave_1285))); b_; }));
F->nonrec_end_1271 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (*(P642)rt_nil_check(F->leave_1285))), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
f_declare_labels_389((*(P647)rt_nil_check(F->d_377)).c);
f_declare_body_316((*(P647)rt_nil_check(F->d_377)).c);
f_body_elements_398((*(P647)rt_nil_check(F->d_377)).c);
f_close_fins_372(NULL);
if ((F->nonrec_end_1271 != NULL)) {
f_emit_29(&(*(P642)rt_nil_check(F->nonrec_end_1271)));
f_pop_cleanup_405();
}
if (F->has_pfin_1272) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (*(P642)rt_nil_check(F->pfin_1265))), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_405();
F->copy_back_1264 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->copy_back_1264)), rt_str("  ", 2)), (*(P642)rt_nil_check(F->pfin_1265))); b_; }));
}
f_close_scope_168();
g_fctx_698 = (*(P661)rt_nil_check(g_fctx_698)).next;
g_cur_level_697 = rt_sub(g_cur_level_697, ((rt_int)1LL));
if (((((*(P642)rt_nil_check(F->args_1256))).len == ((rt_int)0LL)) || ((*(P655)rt_nil_check(F->y_378)).kind == (((rt_int)9LL))))) {
F->args_1256 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P655)rt_nil_check(F->y_378)).kind == (((rt_int)9LL)))) {
F->args_1256 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1261 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_222((*(P655)rt_nil_check(F->y_378)).result)), rt_str(" ", 1)), (*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_378)).cname))), rt_str("(", 1)), (*(P642)rt_nil_check(F->args_1256))), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->head_1261)), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->head_1261)), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_703, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P642)rt_nil_check(F->frame_1262))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_703, g_fields_buf_695);
f_put_27(g_out_frames_703, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P655)rt_nil_check(F->y_378)).kind == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P642)rt_nil_check(F->frame_1262))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P642)rt_nil_check(F->frame_1262))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_691, g_code_694);
if (((*(P651)rt_nil_check((*(P655)rt_nil_check(F->y_378)).result)).kind != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P642)rt_nil_check(F->copy_back_1264))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_691, &(*(P642)rt_nil_check(F->copy_back_1264)));
}
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P642)rt_nil_check(F->copy_back_1264))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_691, &(*(P642)rt_nil_check(F->copy_back_1264)));
}
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_694 = F->saved_code_1249;
g_fields_buf_695 = F->saved_fields_1250;
g_in_func_696 = F->saved_in_1251;
g_func_sym_708 = F->saved_sym_1252;
g_exits_715 = F->saved_exits_1253;
g_gotos_716 = F->saved_gotos_1254;
g_frames_717 = F->saved_frames_1255;
g_handlers_718 = F->saved_handlers_1258;
g_cleanups_719 = F->saved_cleanups_1259;
g_fins_706 = F->saved_fins_1266;
g_func_rc_709 = F->saved_rc_1267;
g_cap_ret_710 = F->saved_ret_1268;
g_cap_rflag_711 = F->saved_rflag_1269;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_381(P647 d_380) {
  struct f_waits_of_381fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_380 = d_380;
F->w_1286 = NULL;
F->w_1286 = g_cap_waits_700;
while ((F->w_1286 != NULL)) {
if (((*(P673)rt_nil_check(F->w_1286)).d == F->d_380)) {
F->result_ = (*(P642)rt_nil_check((*(P673)rt_nil_check(F->w_1286)).w));
goto ret_;
}
F->w_1286 = (*(P673)rt_nil_check(F->w_1286)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_383(P647 elems_382) {
  struct f_task_waits_383fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_382 = elems_382;
F->e_1287 = NULL;
F->e_1287 = F->elems_382;
F->r_1288 = NULL;
F->r_1288 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1287 != NULL)) {
if (((*(P647)rt_nil_check(F->e_1287)).kind == (((rt_int)50LL)))) {
F->r_1288 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->r_1288)), rt_str(" rt_await_decl(&", 16)), (*(P642)rt_nil_check((*(P655)rt_nil_check(f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_1287)).name))))).cname))), rt_str("decl);", 6)); b_; }));
} else if ((((*(P647)rt_nil_check(F->e_1287)).kind == (((rt_int)47LL))) || (((*(P647)rt_nil_check(F->e_1287)).kind == (((rt_int)48LL))) && (((*(P647)rt_nil_check(F->e_1287)).flag == ((rt_int)1LL)) || ((*(P647)rt_nil_check(F->e_1287)).flag == ((rt_int)3LL)))))) {
F->r_1288 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->r_1288)), f_waits_of_381(F->e_1287)); b_; }));
}
F->e_1287 = (*(P647)rt_nil_check(F->e_1287)).next;
}
F->result_ = (*(P642)rt_nil_check(F->r_1288));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_385(P647 elems_384) {
  struct f_await_tasks_385fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_384 = elems_384;
F->w_1289 = rt_str_copy(f_task_waits_383(F->elems_384));
if (((F->w_1289).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1289);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_387(P647 elems_386) {
  struct f_capsule_elements_387fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_386 = elems_386;
F->e_1290 = NULL;
F->e_1290 = F->elems_386;
while ((F->e_1290 != NULL)) {
if ((((*(P647)rt_nil_check(F->e_1290)).kind >= (((rt_int)20LL))) && ((*(P647)rt_nil_check(F->e_1290)).kind <= (((rt_int)36LL))))) {
f_start_labels_390();
}
f_element_358(F->e_1290);
F->e_1290 = (*(P647)rt_nil_check(F->e_1290)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_389(P647 elems_388) {
  struct f_declare_labels_389fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_388 = elems_388;
F->e_1291 = NULL;
F->e_1291 = F->elems_388;
while ((F->e_1291 != NULL)) {
F->l_1292 = NULL;
F->l_1292 = (*(P647)rt_nil_check(F->e_1291)).labels;
while ((F->l_1292 != NULL)) {
F->x_1293 = NULL;
F->x_1293 = g_gotos_716;
while (((F->x_1293 != NULL) && ((*(P669)rt_nil_check(F->x_1293)).depth == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((*(P642)rt_nil_check((*(P669)rt_nil_check(F->x_1293)).match)), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->l_1292)).name)))) {
f_fail_23((*(P647)rt_nil_check(F->l_1292)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->l_1292)).name))), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_1293 = (*(P669)rt_nil_check(F->x_1293)).next;
}
{ R670 *cell1294 = rt_alloc(sizeof(R670));
(*cell1294).match = NULL;
(*cell1294).label = NULL;
(*cell1294).next = NULL;
F->x_1293 = cell1294;
}
(*(P669)rt_nil_check(F->x_1293)).match = (*(P647)rt_nil_check(F->l_1292)).name;
(*(P669)rt_nil_check(F->x_1293)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P669)rt_nil_check(F->x_1293)).depth = rt_neg(((rt_int)1LL));
(*(P669)rt_nil_check(F->x_1293)).next = g_gotos_716;
g_gotos_716 = F->x_1293;
F->l_1292 = (*(P647)rt_nil_check(F->l_1292)).next;
}
F->e_1291 = (*(P647)rt_nil_check(F->e_1291)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_390(void) {
  struct f_start_labels_390fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1295 = NULL;
F->x_1295 = g_gotos_716;
while (((F->x_1295 != NULL) && ((*(P669)rt_nil_check(F->x_1295)).depth == rt_neg(((rt_int)1LL))))) {
(*(P669)rt_nil_check(F->x_1295)).depth = g_frames_717;
F->x_1295 = (*(P669)rt_nil_check(F->x_1295)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P669 f_goto_label_392(rstr *name_391) {
  struct f_goto_label_392fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_391 = name_391;
F->x_1296 = NULL;
F->x_1296 = g_gotos_716;
while ((F->x_1296 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P669)rt_nil_check(F->x_1296)).match)), (*F->name_391))) {
F->result_ = F->x_1296;
goto ret_;
}
F->x_1296 = (*(P669)rt_nil_check(F->x_1296)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_394(P647 e_393) {
  struct f_has_return_394fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_393 = e_393;
F->x_1297 = NULL;
F->x_1297 = F->e_393;
while ((F->x_1297 != NULL)) {
if (((*(P647)rt_nil_check(F->x_1297)).kind == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if (((((((*(P647)rt_nil_check(F->x_1297)).kind != (((rt_int)45LL))) && ((*(P647)rt_nil_check(F->x_1297)).kind != (((rt_int)46LL)))) && ((*(P647)rt_nil_check(F->x_1297)).kind != (((rt_int)50LL)))) && ((*(P647)rt_nil_check(F->x_1297)).kind != (((rt_int)47LL)))) && ((*(P647)rt_nil_check(F->x_1297)).kind != (((rt_int)51LL))))) {
if ((((((*(P647)rt_nil_check(F->x_1297)).a != NULL) && f_has_return_394((*(P647)rt_nil_check(F->x_1297)).a)) || (((*(P647)rt_nil_check(F->x_1297)).b != NULL) && f_has_return_394((*(P647)rt_nil_check(F->x_1297)).b))) || (((*(P647)rt_nil_check(F->x_1297)).c != NULL) && f_has_return_394((*(P647)rt_nil_check(F->x_1297)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_1297 = (*(P647)rt_nil_check(F->x_1297)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_396(P647 elems_395) {
  struct f_capsule_body_396fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_395 = elems_395;
F->saved_ret_1298 = NULL;
F->saved_ret_1298 = g_cap_ret_710;
F->saved_flag_1299 = NULL;
F->saved_flag_1299 = g_cap_rflag_711;
F->saved_frames_1300 = g_ret_frames_712;
F->e_1301 = NULL;
F->e_1301 = F->elems_395;
if ((!f_has_return_394(F->elems_395))) {
g_cap_ret_710 = NULL;
g_cap_rflag_711 = NULL;
f_capsule_elements_387(F->elems_395);
} else {
g_cap_rflag_711 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_194(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(g_cap_rflag_711)), rt_str(" = 0;", 5)); b_; }));
while ((F->e_1301 != NULL)) {
F->stmt_1302 = (((*(P647)rt_nil_check(F->e_1301)).kind >= (((rt_int)20LL))) && ((*(P647)rt_nil_check(F->e_1301)).kind <= (((rt_int)36LL))));
g_cap_ret_710 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_712 = g_frames_717;
if (F->stmt_1302) {
f_start_labels_390();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (*(P642)rt_nil_check(g_cap_rflag_711))), rt_str(") {", 3)); b_; }));
}
f_element_358(F->e_1301);
if (F->stmt_1302) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(g_cap_ret_710)), rt_str(": ;", 3)); b_; }));
F->e_1301 = (*(P647)rt_nil_check(F->e_1301)).next;
}
}
g_cap_ret_710 = F->saved_ret_1298;
g_cap_rflag_711 = F->saved_flag_1299;
g_ret_frames_712 = F->saved_frames_1300;
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_398(P647 elems_397) {
  struct f_body_elements_398fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_397 = elems_397;
f_capsule_elements_387(F->elems_397);
f_await_tasks_385(F->elems_397);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_400(P647 elems_399) {
  struct f_gen_body_400fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_399 = elems_399;
F->saved_1303 = NULL;
F->saved_1303 = g_fins_706;
F->saved_gotos_1304 = NULL;
F->saved_gotos_1304 = g_gotos_716;
f_open_scope_167();
f_declare_labels_389(F->elems_399);
f_declare_body_316(F->elems_399);
f_body_elements_398(F->elems_399);
f_close_fins_372(F->saved_1303);
f_close_scope_168();
g_gotos_716 = F->saved_gotos_1304;
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_402(rt_int upto_401) {
  struct f_pop_frames_402fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_401 = upto_401;
F->i_1305 = g_frames_717;
F->c_1306 = NULL;
F->c_1306 = g_cleanups_719;
while ((F->i_1305 > F->upto_401)) {
f_emit_29(&(*(P642)rt_nil_check((*(P665)rt_nil_check(F->c_1306)).s)));
F->c_1306 = (*(P665)rt_nil_check(F->c_1306)).next;
F->i_1305 = rt_sub(F->i_1305, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_404(rstr *s_403) {
  struct f_push_cleanup_404fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_403 = s_403;
F->c_1307 = NULL;
{ R666 *cell1308 = rt_alloc(sizeof(R666));
(*cell1308).s = NULL;
(*cell1308).next = NULL;
F->c_1307 = cell1308;
}
(*(P665)rt_nil_check(F->c_1307)).s = f_mk_3(&(*F->s_403));
(*(P665)rt_nil_check(F->c_1307)).next = g_cleanups_719;
g_cleanups_719 = F->c_1307;
g_frames_717 = rt_add(g_frames_717, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_405(void) {
  struct f_pop_cleanup_405fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_719 = (*(P665)rt_nil_check(g_cleanups_719)).next;
g_frames_717 = rt_sub(g_frames_717, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_407(P647 s_406) {
  struct f_gen_statement_407fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_406 = s_406;
F->label_1309 = NULL;
F->gl_1310 = NULL;
F->gl_1310 = (*(P647)rt_nil_check(F->s_406)).labels;
while ((F->gl_1310 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P669)rt_nil_check(f_goto_label_392(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->gl_1310)).name))))).label)), rt_str(": ;", 3)); b_; }));
F->gl_1310 = (*(P647)rt_nil_check(F->gl_1310)).next;
}
if (((*(P647)rt_nil_check(F->s_406)).tag != NULL)) {
F->x_1311 = NULL;
{ R670 *cell1312 = rt_alloc(sizeof(R670));
(*cell1312).match = NULL;
(*cell1312).label = NULL;
(*cell1312).next = NULL;
F->x_1311 = cell1312;
}
F->label_1309 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P669)rt_nil_check(F->x_1311)).match = (*(P647)rt_nil_check(F->s_406)).tag;
(*(P669)rt_nil_check(F->x_1311)).label = F->label_1309;
(*(P669)rt_nil_check(F->x_1311)).depth = g_frames_717;
(*(P669)rt_nil_check(F->x_1311)).next = g_exits_715;
g_exits_715 = F->x_1311;
}
{ rt_int sel1313 = (*(P647)rt_nil_check(F->s_406)).kind;
if (0 || (sel1313 == (((rt_int)20LL)))) {
f_st_assign_409(F->s_406);
} else if (0 || (sel1313 == (((rt_int)21LL)))) {
f_st_call_411(F->s_406);
} else if (0 || (sel1313 == (((rt_int)22LL)))) {
f_st_if_413(F->s_406);
} else if (0 || (sel1313 == (((rt_int)23LL)))) {
f_st_case_415(F->s_406);
} else if (0 || (sel1313 == (((rt_int)24LL)))) {
f_st_repeat_417(F->s_406);
} else if (0 || (sel1313 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_400((*(P647)rt_nil_check(F->s_406)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1313 == (((rt_int)27LL)))) {
f_st_exit_419(F->s_406);
} else if (0 || (sel1313 == (((rt_int)29LL)))) {
{
F->x_1314 = NULL;
F->x_1314 = f_goto_label_392(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->s_406)).name)));
if ((F->x_1314 == NULL)) {
f_fail_23((*(P647)rt_nil_check(F->s_406)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->s_406)).name)), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_402((*(P669)rt_nil_check(F->x_1314)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P642)rt_nil_check((*(P669)rt_nil_check(F->x_1314)).label))), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel1313 == (((rt_int)28LL)))) {
f_st_return_421(F->s_406);
} else if (0 || (sel1313 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_428(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->s_406)).name)), (*(P647)rt_nil_check(F->s_406)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1313 == (((rt_int)31LL)))) {
if ((g_handlers_718 == NULL)) {
f_fail_23((*(P647)rt_nil_check(F->s_406)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P642)rt_nil_check((*(P665)rt_nil_check(g_handlers_718)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel1313 == (((rt_int)26LL)))) {
f_st_guard_430(F->s_406);
} else if (0 || (sel1313 == (((rt_int)32LL)))) {
f_st_alloc_432(F->s_406);
} else if (0 || (sel1313 == (((rt_int)34LL)))) {
f_st_create_436(F->s_406);
} else if (0 || (sel1313 == (((rt_int)35LL)))) {
f_st_wait_465(F->s_406);
} else if (0 || (sel1313 == (((rt_int)36LL)))) {
f_st_region_473(F->s_406);
} else {
f_fail_23((*(P647)rt_nil_check(F->s_406)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P647)rt_nil_check(F->s_406)).tag != NULL)) {
g_exits_715 = (*(P669)rt_nil_check(g_exits_715)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->label_1309)), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_409(P647 s_408) {
  struct f_st_assign_409fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_408 = s_408;
F->lv_1315 = NULL;
F->t_1316 = NULL;
F->vt_1317 = NULL;
F->c_1318 = NULL;
if (((((*(P647)rt_nil_check((*(P647)rt_nil_check(F->s_408)).a)).kind == (((rt_int)10LL))) && ((*(P647)rt_nil_check((*(P647)rt_nil_check(F->s_408)).a)).b != NULL)) && ((*(P647)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->s_408)).a)).b)).kind == (((rt_int)16LL))))) {
f_lvalue_528((*(P647)rt_nil_check((*(P647)rt_nil_check(F->s_408)).a)).a, &F->lv_1315, &F->t_1316, &F->c_1318, &F->ro_1319);
if ((F->ro_1319 || ((*(P651)rt_nil_check(F->t_1316)).kind != (((rt_int)5LL))))) {
f_fail_23((*(P647)rt_nil_check(F->s_408)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string variable", 40); b_; }));
}
{
F->lo_1320 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->s_408)).a)).b)).a, g_ty_int_722, &F->vt_1317));
F->hi_1321 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->s_408)).a)).b)).b, g_ty_int_722, &F->vt_1317));
F->v_1322 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->s_408)).b, g_ty_string_726, &F->vt_1317));
f_check_type_220(F->vt_1317, g_ty_string_726, (*(P647)rt_nil_check(F->s_408)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P642)rt_nil_check(F->lv_1315))), rt_str(", ", 2)), F->lo_1320), rt_str(", ", 2)), F->hi_1321), rt_str(", ", 2)), F->v_1322), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_528((*(P647)rt_nil_check(F->s_408)).a, &F->lv_1315, &F->t_1316, &F->c_1318, &F->ro_1319);
if (F->ro_1319) {
f_fail_23((*(P647)rt_nil_check(F->s_408)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_237(F->t_1316)) && (!f_exports_op_338((*(P651)rt_nil_check(F->t_1316)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23((*(P647)rt_nil_check(F->s_408)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_1316)).name))), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1323 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->s_408)).b, F->t_1316, &F->vt_1317));
f_check_type_220(F->vt_1317, F->t_1316, (*(P647)rt_nil_check(F->s_408)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_297(&(*(P642)rt_nil_check(F->lv_1315)), F->t_1316, &F->v_1323, F->c_1318); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_411(P647 s_410) {
  struct f_st_call_411fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_410 = s_410;
F->c_1324 = NULL;
F->c_1324 = (*(P647)rt_nil_check(F->s_410)).a;
F->t_1325 = NULL;
if ((((*(P647)rt_nil_check(F->c_1324)).kind == (((rt_int)7LL))) || ((*(P647)rt_nil_check(F->c_1324)).kind == (((rt_int)12LL))))) {
F->x_1326 = NULL;
F->x_1326 = f_nn_61((((rt_int)10LL)), (*(P647)rt_nil_check(F->c_1324)).line);
(*(P647)rt_nil_check(F->x_1326)).a = F->c_1324;
F->c_1324 = F->x_1326;
}
if (((*(P647)rt_nil_check(F->c_1324)).kind != (((rt_int)10LL)))) {
f_fail_23((*(P647)rt_nil_check(F->s_410)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_613(F->c_1324, 1, &F->t_1325), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_413(P647 s_412) {
  struct f_st_if_413fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_412 = s_412;
F->a_1327 = NULL;
F->a_1327 = (*(P647)rt_nil_check(F->s_412)).a;
F->first_1328 = 1;
F->t_1329 = NULL;
F->taken_1330 = 0;
F->mv_1332 = NULL;
while (((F->a_1327 != NULL) && (!F->taken_1330))) {
F->mv_1332 = f_meval_278((*(P647)rt_nil_check(F->a_1327)).a, &F->ok_1331);
if (((F->ok_1331 && ((*(P663)rt_nil_check(F->mv_1332)).kind == (((rt_int)2LL)))) && ((*(P663)rt_nil_check(F->mv_1332)).i == ((rt_int)0LL)))) {
F->a_1327 = (*(P647)rt_nil_check(F->a_1327)).next;
} else {
if ((F->ok_1331 && ((*(P663)rt_nil_check(F->mv_1332)).kind == (((rt_int)2LL))))) {
F->taken_1330 = 1;
if (F->first_1328) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_1333 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->a_1327)).a, g_ty_bool_723, &F->t_1329));
f_check_type_220(F->t_1329, g_ty_bool_723, (*(P647)rt_nil_check(F->s_412)).line);
if (F->first_1328) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1333), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1333), rt_str(") {", 3)); b_; }));
}
}
F->first_1328 = 0;
f_gen_body_400((*(P647)rt_nil_check(F->a_1327)).b);
F->a_1327 = (*(P647)rt_nil_check(F->a_1327)).next;
}
}
if ((((*(P647)rt_nil_check(F->s_412)).flag == ((rt_int)1LL)) && (!F->taken_1330))) {
if (F->first_1328) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_1328 = 0;
f_gen_body_400((*(P647)rt_nil_check(F->s_412)).b);
}
if ((!F->first_1328)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_case_415(P647 s_414) {
  struct f_st_case_415fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_414 = s_414;
F->st_1334 = NULL;
F->vt_1335 = NULL;
F->first_1336 = 1;
F->a_1337 = NULL;
F->a_1337 = (*(P647)rt_nil_check(F->s_414)).b;
F->sel_1338 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->s_414)).a, NULL, &F->st_1334));
F->tmp_1339 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_222(F->st_1334)), rt_str(" ", 1)), F->tmp_1339), rt_str(" = ", 3)), F->sel_1338), rt_str(";", 1)); b_; }));
while ((F->a_1337 != NULL)) {
F->lab_1340 = NULL;
F->lab_1340 = (*(P647)rt_nil_check(F->a_1337)).a;
F->conds_1341 = NULL;
F->conds_1341 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1340 != NULL)) {
if (((*(P647)rt_nil_check(F->lab_1340)).b == NULL)) {
F->v_1342 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->lab_1340)).a, F->st_1334, &F->vt_1335));
f_check_type_220(F->vt_1335, F->st_1334, (*(P647)rt_nil_check(F->s_414)).line);
F->conds_1341 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->conds_1341)), rt_str(" || ", 4)), f_eq_code_304(F->st_1334, &F->tmp_1339, &F->v_1342)); b_; }));
} else {
F->lo_1343 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->lab_1340)).a, F->st_1334, &F->vt_1335));
F->hi_1344 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->lab_1340)).b, F->st_1334, &F->vt_1335));
F->conds_1341 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->conds_1341)), rt_str(" || (", 5)), F->tmp_1339), rt_str(" >= ", 4)), F->lo_1343), rt_str(" && ", 4)), F->tmp_1339), rt_str(" <= ", 4)), F->hi_1344), rt_str(")", 1)); b_; }));
}
F->lab_1340 = (*(P647)rt_nil_check(F->lab_1340)).next;
}
if (F->first_1336) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P642)rt_nil_check(F->conds_1341))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P642)rt_nil_check(F->conds_1341))), rt_str(") {", 3)); b_; }));
}
F->first_1336 = 0;
f_gen_body_400((*(P647)rt_nil_check(F->a_1337)).b);
F->a_1337 = (*(P647)rt_nil_check(F->a_1337)).next;
}
if (F->first_1336) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P647)rt_nil_check(F->s_414)).flag == ((rt_int)1LL))) {
f_gen_body_400((*(P647)rt_nil_check(F->s_414)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_417(P647 s_416) {
  struct f_st_repeat_417fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_416 = s_416;
F->t_1345 = NULL;
F->c_1346 = NULL;
if (((*(P647)rt_nil_check(F->s_416)).flag == ((rt_int)0LL))) {
F->cond_1347 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->s_416)).a, g_ty_bool_723, &F->t_1345));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1347), rt_str(") {", 3)); b_; }));
f_gen_body_400((*(P647)rt_nil_check(F->s_416)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1345 = f_resolve_subtype_233((*(P647)rt_nil_check(F->s_416)).a, &F->c_1346);
F->c_1346 = f_base_cons_214(F->t_1345, F->c_1346);
if ((((*(P651)rt_nil_check(f_base_of_211(F->t_1345))).kind == (((rt_int)4LL))) && ((*(P649)rt_nil_check(F->c_1346)).lo == NULL))) {
F->c_1346 = f_new_cons_174();
(*(P649)rt_nil_check(F->c_1346)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P649)rt_nil_check(F->c_1346)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P651)rt_nil_check(f_base_of_211(F->t_1345))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P649)rt_nil_check(F->c_1346)).lo == NULL)) {
f_fail_23((*(P647)rt_nil_check(F->s_416)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1348 = rt_str_copy(f_storage_363(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->s_416)).name)), F->t_1345));
F->lov_1349 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1350 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1351 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1352 = NULL;
F->y_1352 = f_new_sym_171((((rt_int)2LL)), (*(P647)rt_nil_check(F->s_416)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1349), rt_str(" = ", 3)), (*(P642)rt_nil_check((*(P649)rt_nil_check(F->c_1346)).lo))), rt_str(", ", 2)), F->hiv_1350), rt_str(" = ", 3)), (*(P642)rt_nil_check((*(P649)rt_nil_check(F->c_1346)).hi))), rt_str(";", 1)); b_; }));
if (((*(P647)rt_nil_check(F->s_416)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1351), rt_str(" = ", 3)), F->hiv_1350), rt_str("; ", 2)), F->it_1351), rt_str(" >= ", 4)), F->lov_1349), rt_str("; ", 2)), F->it_1351), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1351), rt_str(" = ", 3)), F->lov_1349), rt_str("; ", 2)), F->it_1351), rt_str(" <= ", 4)), F->hiv_1350), rt_str("; ", 2)), F->it_1351), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1348, rt_str(" = ", 3)), F->it_1351), rt_str(";", 1)); b_; }));
f_open_scope_167();
(*(P655)rt_nil_check(F->y_1352)).t = F->t_1345;
(*(P655)rt_nil_check(F->y_1352)).c = F->c_1346;
f_bind_366(F->y_1352, &F->access_1348);
(*(P655)rt_nil_check(F->y_1352)).ro_flag = 1;
f_define_158(F->y_1352, (*(P647)rt_nil_check(F->s_416)).line);
f_gen_body_400((*(P647)rt_nil_check(F->s_416)).b);
f_close_scope_168();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_419(P647 s_418) {
  struct f_st_exit_419fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_418 = s_418;
F->x_1353 = NULL;
F->x_1353 = g_exits_715;
while ((F->x_1353 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P669)rt_nil_check(F->x_1353)).match)), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->s_418)).name)))) {
f_pop_frames_402((*(P669)rt_nil_check(F->x_1353)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P642)rt_nil_check((*(P669)rt_nil_check(F->x_1353)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1353 = (*(P669)rt_nil_check(F->x_1353)).next;
}
f_fail_23((*(P647)rt_nil_check(F->s_418)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->s_418)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_421(P647 s_420) {
  struct f_st_return_421fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_420 = s_420;
F->vt_1354 = NULL;
if ((g_cap_ret_710 != NULL)) {
if (((*(P647)rt_nil_check(F->s_420)).a != NULL)) {
f_fail_23((*(P647)rt_nil_check(F->s_420)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_402(g_ret_frames_712);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(g_cap_rflag_711)), rt_str(" = 1; goto ", 11)), (*(P642)rt_nil_check(g_cap_ret_710))), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!g_in_func_696)) {
f_pop_frames_402(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P651)rt_nil_check((*(P655)rt_nil_check(g_func_sym_708)).result)).kind == (((rt_int)9LL)))) {
if (((*(P647)rt_nil_check(F->s_420)).a != NULL)) {
f_fail_23((*(P647)rt_nil_check(F->s_420)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_402(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P647)rt_nil_check(F->s_420)).a == NULL)) {
f_fail_23((*(P647)rt_nil_check(F->s_420)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1355 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->s_420)).a, (*(P655)rt_nil_check(g_func_sym_708)).result, &F->vt_1354));
f_check_type_220(F->vt_1354, (*(P655)rt_nil_check(g_func_sym_708)).result, (*(P647)rt_nil_check(F->s_420)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_425((*(P655)rt_nil_check(g_func_sym_708)).result, g_func_rc_709, &F->v_1355)), rt_str(";", 1)); b_; }));
f_pop_frames_402(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_425(P651 t_422, P649 c_423, rstr *v_424) {
  struct f_result_checked_425fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_422 = t_422;
F->c_423 = c_423;
F->v_424 = v_424;
if ((F->c_423 == NULL)) {
F->result_ = (*F->v_424);
goto ret_;
} else if ((((*(P651)rt_nil_check(F->t_422)).kind == (((rt_int)5LL))) && ((*(P649)rt_nil_check(F->c_423)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_424)), rt_str(", ", 2)), (*(P642)rt_nil_check((*(P649)rt_nil_check(F->c_423)).slen))), rt_str(")", 1));
goto ret_;
} else if ((((*(P651)rt_nil_check(F->t_422)).kind == (((rt_int)6LL))) && ((*(P649)rt_nil_check(F->c_423)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_222(F->t_422)), rt_str(" r_ = ", 6)), (*F->v_424)), rt_str("; if (RT_CNT(r_) != (", 21)), (*(P642)rt_nil_check((*(P649)rt_nil_check(F->c_423)).hi))), rt_str(") - (", 5)), (*(P642)rt_nil_check((*(P649)rt_nil_check(F->c_423)).lo))), rt_str(") + 1) rt_raise_msg(RT_X_SUBTYPE, ", 34)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_203(F->t_422, F->c_423, &(*F->v_424));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_428(rstr *name_426, rt_int line_427) {
  struct f_exc_id_428fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_426 = name_426;
F->line_427 = line_427;
F->y_1356 = NULL;
F->y_1356 = f_lookup_153(&(*F->name_426));
if (((F->y_1356 != NULL) && ((*(P655)rt_nil_check(F->y_1356)).kind == (((rt_int)7LL))))) {
F->result_ = (*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_1356)).cname));
goto ret_;
}
if (((((*F->name_426)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_426), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_426)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_427, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_426), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_430(P647 s_429) {
  struct f_st_guard_430fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_429 = s_429;
F->h_1357 = NULL;
F->h_1357 = (*(P647)rt_nil_check(F->s_429)).b;
F->first_1358 = 1;
F->hv_1359 = NULL;
{
F->f_1360 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1361 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_404(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1360), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1360), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1360), rt_str(")) {", 4)); b_; }));
f_gen_body_400((*(P647)rt_nil_check(F->s_429)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1360), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_405();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1360), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1361), rt_str(" = rt_xcur;", 11)); b_; }));
{ R666 *cell1362 = rt_alloc(sizeof(R666));
(*cell1362).s = NULL;
(*cell1362).next = NULL;
F->hv_1359 = cell1362;
}
(*(P665)rt_nil_check(F->hv_1359)).s = f_mk_3(&F->x_1361);
(*(P665)rt_nil_check(F->hv_1359)).next = g_handlers_718;
g_handlers_718 = F->hv_1359;
while ((F->h_1357 != NULL)) {
F->n_1363 = NULL;
F->n_1363 = (*(P647)rt_nil_check(F->h_1357)).a;
F->conds_1364 = NULL;
F->conds_1364 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1363 != NULL)) {
F->conds_1364 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->conds_1364)), rt_str(" || ", 4)), F->x_1361), rt_str(" == ", 4)), f_exc_id_428(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->n_1363)).name)), (*(P647)rt_nil_check(F->s_429)).line)); b_; }));
F->n_1363 = (*(P647)rt_nil_check(F->n_1363)).next;
}
if (F->first_1358) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P642)rt_nil_check(F->conds_1364))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P642)rt_nil_check(F->conds_1364))), rt_str(") {", 3)); b_; }));
}
F->first_1358 = 0;
f_gen_body_400((*(P647)rt_nil_check(F->h_1357)).b);
F->h_1357 = (*(P647)rt_nil_check(F->h_1357)).next;
}
if (F->first_1358) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P647)rt_nil_check(F->s_429)).flag == ((rt_int)1LL))) {
f_gen_body_400((*(P647)rt_nil_check(F->s_429)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1361), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_718 = (*(P665)rt_nil_check(g_handlers_718)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_432(P647 s_431) {
  struct f_st_alloc_432fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_431 = s_431;
F->lv_1365 = NULL;
F->t_1366 = NULL;
F->target_1367 = NULL;
F->vt_1368 = NULL;
F->c_1369 = NULL;
F->tc_1370 = NULL;
F->d_1372 = NULL;
F->p_1373 = NULL;
F->a_1374 = NULL;
f_lvalue_528((*(P647)rt_nil_check(F->s_431)).a, &F->lv_1365, &F->t_1366, &F->c_1369, &F->ro_1371);
if (((*(P651)rt_nil_check(F->t_1366)).kind != (((rt_int)8LL)))) {
f_fail_23((*(P647)rt_nil_check(F->s_431)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_345(F->t_1366);
F->d_1372 = (*(P651)rt_nil_check(F->t_1366)).decl;
F->target_1367 = (*(P651)rt_nil_check(F->t_1366)).target;
if ((f_list_len_67((*(P647)rt_nil_check(F->s_431)).b) != f_list_len_67((*(P647)rt_nil_check(F->d_1372)).b))) {
f_fail_23((*(P647)rt_nil_check(F->s_431)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_67((*(P647)rt_nil_check(F->d_1372)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_1375 = rt_str_copy(f_ctype_222(F->target_1367));
F->cell_1376 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_256(F->target_1367)) {
F->fn_1377 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_705 = 1;
g_uses_findyn_707 = 1;
f_put_27(g_out_protos_689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1377), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1377), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (g_in_func_696) {
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P642)rt_nil_check((*(P655)rt_nil_check(g_func_sym_708)).cname))), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_259(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_1375), rt_str(" *)cell_)", 9)); b_; }), F->target_1367)); b_; }));
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (g_in_func_696) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1375), rt_str(" *", 2)), F->cell_1376), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1375), rt_str("), ", 3)), F->fn_1377), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1375), rt_str(" *", 2)), F->cell_1376), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1375), rt_str("), ", 3)), F->fn_1377), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1375), rt_str(" *", 2)), F->cell_1376), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1375), rt_str("));", 3)); b_; }));
}
f_open_scope_167();
F->p_1373 = (*(P647)rt_nil_check(F->d_1372)).b;
F->a_1374 = (*(P647)rt_nil_check(F->s_431)).b;
while ((F->p_1373 != NULL)) {
F->v_1378 = rt_str_copy(f_gexpr_555(F->a_1374, g_ty_int_722, &F->vt_1368));
F->pv_1379 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_1380 = NULL;
F->y_1380 = f_new_sym_171((((rt_int)2LL)), (*(P647)rt_nil_check(F->p_1373)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_1379), rt_str(" = ", 3)), F->v_1378), rt_str(";", 1)); b_; }));
(*(P655)rt_nil_check(F->y_1380)).t = g_ty_int_722;
(*(P655)rt_nil_check(F->y_1380)).access = f_mk_3(&F->pv_1379);
f_define_158(F->y_1380, (*(P647)rt_nil_check(F->s_431)).line);
F->p_1373 = (*(P647)rt_nil_check(F->p_1373)).next;
F->a_1374 = (*(P647)rt_nil_check(F->a_1374)).next;
}
F->vt_1368 = f_resolve_subtype_233((*(P647)rt_nil_check(F->d_1372)).a, &F->tc_1370);
f_init_storage_251(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1376), rt_str(")", 1)); b_; }), F->target_1367, F->tc_1370);
f_close_scope_168();
if (((*(P647)rt_nil_check(F->s_431)).c != NULL)) {
F->v_1381 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->s_431)).c, F->target_1367, &F->vt_1368));
f_check_type_220(F->vt_1368, F->target_1367, (*(P647)rt_nil_check(F->s_431)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_297(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1376), rt_str(")", 1)); b_; }), F->target_1367, &F->v_1381, F->tc_1370); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->lv_1365)), rt_str(" = ", 3)), F->cell_1376), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_434(P647 e_433) {
  struct f_act_ref_434fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_433 = e_433;
F->lv_1382 = NULL;
F->t_1383 = NULL;
F->c_1384 = NULL;
if (((((*(P647)rt_nil_check(F->e_433)).kind == (((rt_int)7LL))) && rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_433)).name)), rt_str("ME", 2))) && (f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_522(F->e_433))) {
F->v_1386 = rt_str_copy(f_gexpr_555(F->e_433, g_ty_act_732, &F->t_1383));
if (((*(P651)rt_nil_check(F->t_1383)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P647)rt_nil_check(F->e_433)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1386;
goto ret_;
}
f_lvalue_528(F->e_433, &F->lv_1382, &F->t_1383, &F->c_1384, &F->ro_1385);
if (((*(P651)rt_nil_check(F->t_1383)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P647)rt_nil_check(F->e_433)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (*(P642)rt_nil_check(F->lv_1382));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_436(P647 s_435) {
  struct f_st_create_436fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_435 = s_435;
F->y_1387 = NULL;
F->y_1387 = f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->s_435)).name)));
F->pm_1388 = NULL;
F->a_1389 = NULL;
F->a_1389 = (*(P647)rt_nil_check(F->s_435)).b;
F->lv_1390 = NULL;
F->lt_1391 = NULL;
F->vt_1392 = NULL;
F->lc_1393 = NULL;
if (((F->y_1387 != NULL) && ((*(P655)rt_nil_check(F->y_1387)).kind == (((rt_int)10LL))))) {
F->y_1387 = f_instantiate_507(F->y_1387, (*(P647)rt_nil_check(F->s_435)).e, (*(P647)rt_nil_check(F->s_435)).b, (*(P647)rt_nil_check(F->s_435)).line);
}
if (((F->y_1387 == NULL) || ((*(P655)rt_nil_check(F->y_1387)).kind != (((rt_int)9LL))))) {
f_fail_23((*(P647)rt_nil_check(F->s_435)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->s_435)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1388 = (*(P655)rt_nil_check(F->y_1387)).params;
{
F->at_1395 = NULL;
F->ac_1396 = NULL;
F->act_1398 = NULL;
F->nf_1399 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_528((*(P647)rt_nil_check(F->s_435)).a, &F->lv_1390, &F->at_1395, &F->ac_1396, &F->aro_1397);
if (((*(P651)rt_nil_check(F->at_1395)).kind == (((rt_int)14LL)))) {
F->act_1398 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_434((*(P647)rt_nil_check(F->s_435)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_1387)).cname))), rt_str("fr *", 4)), F->nf_1399), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1399), rt_str(");", 2)); b_; }));
if (((*(P655)rt_nil_check(F->y_1387)).level > ((rt_int)0LL))) {
F->link_1400 = NULL;
F->link_1400 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1402 = ((rt_int)1LL), hi1403 = rt_sub(g_cur_level_697, (*(P655)rt_nil_check(F->y_1387)).level);
for (rt_int it1404 = lo1402; it1404 <= hi1403; it1404++) {
F->i_1401 = it1404;
F->link_1400 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->link_1400)), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1399, rt_str("->up = ", 7)), (*(P642)rt_nil_check(F->link_1400))), rt_str(";", 1)); b_; }));
}
while (((F->a_1389 != NULL) && (F->pm_1388 != NULL))) {
if (((*(P657)rt_nil_check(F->pm_1388)).mode == (((rt_int)1LL)))) {
F->v_1405 = rt_str_copy(f_gexpr_555(F->a_1389, (*(P657)rt_nil_check(F->pm_1388)).t, &F->vt_1392));
f_check_type_220(F->vt_1392, (*(P657)rt_nil_check(F->pm_1388)).t, (*(P647)rt_nil_check(F->s_435)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1399, rt_str("->", 2)), (*(P642)rt_nil_check((*(P657)rt_nil_check(F->pm_1388)).cfield))), rt_str(" = ", 3)), f_copy_code_300((*(P657)rt_nil_check(F->pm_1388)).t, &F->v_1405)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_528(F->a_1389, &F->lv_1390, &F->lt_1391, &F->lc_1393, &F->ro_1394);
f_check_type_220(F->lt_1391, (*(P657)rt_nil_check(F->pm_1388)).t, (*(P647)rt_nil_check(F->s_435)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1399, rt_str("->", 2)), (*(P642)rt_nil_check((*(P657)rt_nil_check(F->pm_1388)).cfield))), rt_str(" = &", 4)), (*(P642)rt_nil_check(F->lv_1390))), rt_str(";", 1)); b_; }));
if (f_scalar_kind_176((*(P657)rt_nil_check(F->pm_1388)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1399, rt_str("->", 2)), (*(P642)rt_nil_check((*(P657)rt_nil_check(F->pm_1388)).cfield))), rt_str("lo = ", 5)), f_sub_lo_188(F->lt_1391, F->lc_1393)), rt_str("; ", 2)), F->nf_1399), rt_str("->", 2)), (*(P642)rt_nil_check((*(P657)rt_nil_check(F->pm_1388)).cfield))), rt_str("hi = ", 5)), f_sub_hi_191(F->lt_1391, F->lc_1393)), rt_str(";", 1)); b_; }));
}
}
F->a_1389 = (*(P647)rt_nil_check(F->a_1389)).next;
F->pm_1388 = (*(P657)rt_nil_check(F->pm_1388)).next;
}
if (((F->a_1389 != NULL) || (F->pm_1388 != NULL))) {
f_fail_23((*(P647)rt_nil_check(F->s_435)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->s_435)).name))); b_; }));
}
if ((F->act_1398 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (*(P642)rt_nil_check(F->act_1398))), rt_str(", &", 3)), (*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_1387)).cname))), rt_str("decl, ", 6)), (*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_1387)).cname))), rt_str(", ", 2)), F->nf_1399), rt_str("); }", 4)); b_; }));
} else {
f_user_create_446(F->s_435, F->y_1387, &(*(P642)rt_nil_check(F->lv_1390)), F->at_1395, &F->nf_1399);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_440(rstr *name_437, P651 t_438, rstr *place_439) {
  struct f_hidden_var_440fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_437 = name_437;
F->t_438 = t_438;
F->place_439 = place_439;
F->y_1406 = NULL;
F->y_1406 = f_new_sym_171((((rt_int)1LL)), f_mk_3(&(*F->name_437)));
(*(P655)rt_nil_check(F->y_1406)).t = F->t_438;
(*(P655)rt_nil_check(F->y_1406)).level = ((rt_int)0LL);
(*(P655)rt_nil_check(F->y_1406)).access = f_mk_3(&(*F->place_439));
f_define_158(F->y_1406, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_446(P647 s_441, P655 y_442, rstr *uv_443, P651 ut_444, rstr *nf_445) {
  struct f_user_create_446fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_441 = s_441;
F->y_442 = y_442;
F->uv_443 = uv_443;
F->ut_444 = ut_444;
F->nf_445 = nf_445;
F->t_1407 = NULL;
F->saved_1408 = NULL;
F->saved_1408 = g_code_694;
F->hook_1409 = NULL;
F->hook_1409 = f_new_buffer_24();
F->un_1410 = NULL;
F->un_1410 = f_nn_61((((rt_int)7LL)), (*(P647)rt_nil_check(F->s_441)).line);
F->hn_1411 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1412 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1413 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1414 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_167();
f_hidden_var_440(&F->uname_1413, F->ut_444, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_222(F->ut_444)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P647)rt_nil_check(F->un_1410)).name = f_mk_3(&F->uname_1413);
g_code_694 = F->hook_1409;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_613(f_call_node_469(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1410, (*(P647)rt_nil_check(F->s_441)).line), 1, &F->t_1407)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_613(f_call_node_469(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1410, (*(P647)rt_nil_check(F->s_441)).line), 1, &F->t_1407)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_613(f_call_node_469(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1410, (*(P647)rt_nil_check(F->s_441)).line), 1, &F->t_1407)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_613(f_call_node_469(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1410, (*(P647)rt_nil_check(F->s_441)).line), 1, &F->t_1407)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_694 = F->saved_1408;
f_put_27(g_out_protos_689, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1411), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1411), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (g_in_func_696) {
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P642)rt_nil_check((*(P655)rt_nil_check(g_func_sym_708)).cname))), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_691, F->hook_1409);
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_691, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1412), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1412, rt_str("->hook = ", 9)), F->hn_1411), rt_str("; ", 2)), F->aa_1412), rt_str("->ua = &", 8)), (*F->uv_443)), rt_str("; ", 2)), F->aa_1412), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_603(F->ut_444)), f_q_18()), rt_str(";", 1)); b_; }));
if (g_in_func_696) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1412, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1412), rt_str(", &", 3)), (*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_442)).cname))), rt_str("decl, ", 6)), (*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_442)).cname))), rt_str(", ", 2)), (*F->nf_445)), rt_str(");", 2)); b_; }));
f_hidden_var_440(&F->aname_1414, g_ty_act_732, &F->aa_1412);
{
F->start_1415 = NULL;
F->start_1415 = f_call_node_469(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P647)rt_nil_check(F->s_441)).a, (*(P647)rt_nil_check(F->s_441)).line);
F->an_1416 = NULL;
F->an_1416 = f_nn_61((((rt_int)7LL)), (*(P647)rt_nil_check(F->s_441)).line);
(*(P647)rt_nil_check(F->an_1416)).name = f_mk_3(&F->aname_1414);
(*(P647)rt_nil_check((*(P647)rt_nil_check(F->start_1415)).b)).next = F->an_1416;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_613(F->start_1415, 1, &F->t_1407), rt_str(";", 1)); b_; }));
}
f_close_scope_168();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_451(P647 inv_447, rstr *arr_448, rt_int i_449, int mixed_450) {
  struct f_wait_alt_451fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_447 = inv_447;
F->arr_448 = arr_448;
F->i_449 = i_449;
F->mixed_450 = mixed_450;
F->lv_1417 = NULL;
F->t_1418 = NULL;
F->vt_1419 = NULL;
F->c_1420 = NULL;
F->fn_1422 = NULL;
F->args_1423 = NULL;
F->slot_1424 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_448), rt_str("[", 1)), f_itos_7(F->i_449)), rt_str("]", 1)));
if ((((*(P647)rt_nil_check(F->inv_447)).kind != (((rt_int)10LL))) || ((*(P647)rt_nil_check((*(P647)rt_nil_check(F->inv_447)).a)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P647)rt_nil_check(F->inv_447)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1422 = (*(P647)rt_nil_check(F->inv_447)).a;
F->args_1423 = (*(P647)rt_nil_check(F->inv_447)).b;
if ((rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1422)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1422)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_528(F->args_1423, &F->lv_1417, &F->t_1418, &F->c_1420, &F->ro_1421);
if (((*(P651)rt_nil_check(F->t_1418)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P647)rt_nil_check(F->inv_447)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1422)).name)), rt_str("RECEIVE", 7))) {
F->dv_1425 = NULL;
F->dt_1426 = NULL;
f_lvalue_528((*(P647)rt_nil_check(F->args_1423)).next, &F->dv_1425, &F->dt_1426, &F->c_1420, &F->ro_1421);
f_check_type_220(F->dt_1426, (*(P651)rt_nil_check(F->t_1418)).elem, (*(P647)rt_nil_check(F->inv_447)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1424, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (*(P642)rt_nil_check(F->lv_1417))), rt_str(", &", 3)), (*(P642)rt_nil_check(F->dv_1425))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1427 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1428 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->args_1423)).next, (*(P651)rt_nil_check(F->t_1418)).elem, &F->vt_1419));
f_check_type_220(F->vt_1419, (*(P651)rt_nil_check(F->t_1418)).elem, (*(P647)rt_nil_check(F->inv_447)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_222((*(P651)rt_nil_check(F->t_1418)).elem), rt_str(" ", 1)), F->tmp_1427), rt_str(" = ", 3)), F->v_1428), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1424, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (*(P642)rt_nil_check(F->lv_1417))), rt_str(", &", 3)), F->tmp_1427), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1422)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1422)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_1429 = rt_str_copy(f_gexpr_555(F->args_1423, g_ty_int_722, &F->vt_1419));
if ((rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1422)).name)), rt_str("DELAY", 5)) && F->mixed_450)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1424, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1429), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1422)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1424, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1429), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1424, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1429), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1422)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1424, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_434(F->args_1423)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P647)rt_nil_check(F->inv_447)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1422)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_453(P647 inv_452) {
  struct f_builtin_wait_453fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_452 = inv_452;
F->lv_1430 = NULL;
F->t_1431 = NULL;
F->c_1432 = NULL;
F->saved_1434 = NULL;
F->saved_1434 = g_code_694;
F->ok_1435 = 0;
if ((((*(P647)rt_nil_check(F->inv_452)).kind != (((rt_int)10LL))) || ((*(P647)rt_nil_check((*(P647)rt_nil_check(F->inv_452)).a)).kind != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->inv_452)).a)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->inv_452)).a)).name)), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->inv_452)).a)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->inv_452)).a)).name)), rt_str("SEND", 4))) && (!rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->inv_452)).a)).name)), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_720 = rt_add(g_trial_720, ((rt_int)1LL));
g_code_694 = f_new_buffer_24();
{ rt_frame xf1436;
if (RT_TRY(xf1436)) {
f_lvalue_528((*(P647)rt_nil_check(F->inv_452)).b, &F->lv_1430, &F->t_1431, &F->c_1432, &F->ro_1433);
F->ok_1435 = ((*(P651)rt_nil_check(F->t_1431)).kind == (((rt_int)12LL)));
RT_POP(xf1436);
} else {
RT_POP(xf1436);
int x1437 = rt_xcur;
if (0 || x1437 == ex_compile_error_1) {
F->ok_1435 = 0;
} else {
rt_raise(x1437);
}
}
}
g_trial_720 = rt_sub(g_trial_720, ((rt_int)1LL));
g_code_694 = F->saved_1434;
F->result_ = F->ok_1435;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_458(P647 inv_454, rstr *op_455, rstr *q_456, int is_stmt_457) {
  struct f_wait_op_458fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_454 = inv_454;
F->op_455 = op_455;
F->q_456 = q_456;
F->is_stmt_457 = is_stmt_457;
F->x_1438 = NULL;
F->x_1438 = f_nn_61((((rt_int)10LL)), (*(P647)rt_nil_check(F->inv_454)).line);
F->f_1439 = NULL;
F->f_1439 = f_nn_61((((rt_int)7LL)), (*(P647)rt_nil_check(F->inv_454)).line);
F->qn_1440 = NULL;
F->qn_1440 = f_nn_61((((rt_int)7LL)), (*(P647)rt_nil_check(F->inv_454)).line);
F->t_1441 = NULL;
(*(P647)rt_nil_check(F->f_1439)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->inv_454)).a)).name)), rt_str("_", 1)), (*F->op_455)); b_; }));
(*(P647)rt_nil_check(F->qn_1440)).name = f_mk_3(&(*F->q_456));
(*(P647)rt_nil_check(F->qn_1440)).next = (*(P647)rt_nil_check(F->inv_454)).b;
(*(P647)rt_nil_check(F->x_1438)).a = F->f_1439;
(*(P647)rt_nil_check(F->x_1438)).b = F->qn_1440;
{
F->r_1442 = rt_str_copy(f_gcall_613(F->x_1438, F->is_stmt_457, &F->t_1441));
if ((!F->is_stmt_457)) {
f_check_type_220(F->t_1441, g_ty_bool_723, (*(P647)rt_nil_check(F->inv_454)).line);
}
F->result_ = F->r_1442;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_463(P647 s_459, rstr *arr_460, rstr *w_461, rt_int n_462) {
  struct f_user_wait_463fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_459 = s_459;
F->arr_460 = arr_460;
F->w_461 = w_461;
F->n_462 = n_462;
F->a_1443 = NULL;
F->a_1443 = (*(P647)rt_nil_check(F->s_459)).a;
F->i_1444 = ((rt_int)0LL);
F->tests_1445 = NULL;
F->tests_1445 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1446 = NULL;
F->revokes_1446 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_167();
while ((F->a_1443 != NULL)) {
F->inv_1447 = NULL;
F->inv_1447 = (*(P647)rt_nil_check(F->a_1443)).a;
while ((F->inv_1447 != NULL)) {
if (f_builtin_wait_453(F->inv_1447)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_451(F->inv_1447, &(*F->arr_460), F->i_1444, 1); b_; }));
} else {
F->st_1448 = NULL;
F->st_1448 = f_nn_61((((rt_int)80LL)), (*(P647)rt_nil_check(F->inv_1447)).line);
F->c_1449 = NULL;
F->qt_1450 = NULL;
F->qname_1451 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1452 = NULL;
F->y_1452 = f_new_sym_171((((rt_int)1LL)), f_mk_3(&F->qname_1451));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_460), rt_str("[", 1)), f_itos_7(F->i_1444)), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P647)rt_nil_check(F->st_1448)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->inv_1447)).a)).name)), rt_str("_ST", 3)); b_; }));
F->qt_1450 = f_resolve_subtype_233(F->st_1448, &F->c_1449);
{
F->access_1453 = rt_str_copy(f_storage_363(&F->qname_1451, F->qt_1450));
f_init_storage_251(&F->access_1453, F->qt_1450, F->c_1449);
(*(P655)rt_nil_check(F->y_1452)).t = F->qt_1450;
(*(P655)rt_nil_check(F->y_1452)).c = F->c_1449;
f_bind_366(F->y_1452, &F->access_1453);
f_define_158(F->y_1452, (*(P647)rt_nil_check(F->inv_1447)).line);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_458(F->inv_1447, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1451, 1), rt_str(";", 1)); b_; }));
F->tests_1445 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->tests_1445)), rt_str("if (", 4)), f_wait_op_458(F->inv_1447, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1451, 0)), rt_str(") { ", 4)), f_wait_op_458(F->inv_1447, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1451, 1)), rt_str("; ", 2)), (*F->w_461)), rt_str(" = ", 3)), f_itos_7(F->i_1444)), rt_str("; break; } ", 11)); b_; }));
F->revokes_1446 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->revokes_1446)), f_wait_op_458(F->inv_1447, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1451, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1444 = rt_add(F->i_1444, ((rt_int)1LL));
F->inv_1447 = (*(P647)rt_nil_check(F->inv_1447)).next;
}
F->a_1443 = (*(P647)rt_nil_check(F->a_1443)).next;
}
f_close_scope_168();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_461)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (*(P642)rt_nil_check(F->tests_1445))); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_461), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_462)), rt_str(", ", 2)), (*F->arr_460)), rt_str("); if (", 7)), (*F->w_461)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_462)), rt_str(", ", 2)), (*F->arr_460)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_461)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_461)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(*(P642)rt_nil_check(F->revokes_1446)));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_465(P647 s_464) {
  struct f_st_wait_465fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_464 = s_464;
F->a_1454 = NULL;
F->a_1454 = (*(P647)rt_nil_check(F->s_464)).a;
F->n_1455 = ((rt_int)0LL);
F->first_1456 = 1;
F->inits_1457 = NULL;
F->inits_1457 = f_new_buffer_24();
F->user_1458 = 0;
F->arr_1459 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1460 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1454 != NULL)) {
F->inv_1461 = NULL;
F->inv_1461 = (*(P647)rt_nil_check(F->a_1454)).a;
F->n_1455 = rt_add(F->n_1455, f_list_len_67((*(P647)rt_nil_check(F->a_1454)).a));
while ((F->inv_1461 != NULL)) {
if ((!f_builtin_wait_453(F->inv_1461))) {
F->user_1458 = 1;
}
F->inv_1461 = (*(P647)rt_nil_check(F->inv_1461)).next;
}
F->a_1454 = (*(P647)rt_nil_check(F->a_1454)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1459), rt_str("[", 1)), f_itos_7(F->n_1455)), rt_str("];", 2)); b_; }));
if (F->user_1458) {
f_user_wait_463(F->s_464, &F->arr_1459, &F->w_1460, F->n_1455);
} else {
F->a_1454 = (*(P647)rt_nil_check(F->s_464)).a;
F->n_1455 = ((rt_int)0LL);
while ((F->a_1454 != NULL)) {
F->inv_1462 = NULL;
F->inv_1462 = (*(P647)rt_nil_check(F->a_1454)).a;
while ((F->inv_1462 != NULL)) {
f_put_27(F->inits_1457, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_451(F->inv_1462, &F->arr_1459, F->n_1455, 0); b_; }));
F->n_1455 = rt_add(F->n_1455, ((rt_int)1LL));
F->inv_1462 = (*(P647)rt_nil_check(F->inv_1462)).next;
}
F->a_1454 = (*(P647)rt_nil_check(F->a_1454)).next;
}
f_splice_34(g_code_694, F->inits_1457);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1460), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_1455)), rt_str(", ", 2)), F->arr_1459), rt_str(");", 2)); b_; }));
}
F->a_1454 = (*(P647)rt_nil_check(F->s_464)).a;
F->n_1455 = ((rt_int)0LL);
while ((F->a_1454 != NULL)) {
F->conds_1463 = NULL;
F->conds_1463 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1465 = ((rt_int)1LL), hi1466 = f_list_len_67((*(P647)rt_nil_check(F->a_1454)).a);
for (rt_int it1467 = lo1465; it1467 <= hi1466; it1467++) {
F->i_1464 = it1467;
F->conds_1463 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->conds_1463)), rt_str(" || ", 4)), F->w_1460), rt_str(" == ", 4)), f_itos_7(F->n_1455)); b_; }));
F->n_1455 = rt_add(F->n_1455, ((rt_int)1LL));
}
}
if (F->first_1456) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P642)rt_nil_check(F->conds_1463))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P642)rt_nil_check(F->conds_1463))), rt_str(") {", 3)); b_; }));
}
F->first_1456 = 0;
f_gen_body_400((*(P647)rt_nil_check(F->a_1454)).b);
F->a_1454 = (*(P647)rt_nil_check(F->a_1454)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P647 f_call_node_469(rstr *name_466, P647 arg_467, rt_int line_468) {
  struct f_call_node_469fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_466 = name_466;
F->arg_467 = arg_467;
F->line_468 = line_468;
F->x_1468 = NULL;
F->x_1468 = f_nn_61((((rt_int)10LL)), F->line_468);
F->f_1469 = NULL;
F->f_1469 = f_nn_61((((rt_int)7LL)), F->line_468);
(*(P647)rt_nil_check(F->f_1469)).name = f_mk_3(&(*F->name_466));
(*(P647)rt_nil_check(F->x_1468)).a = F->f_1469;
(*(P647)rt_nil_check(F->x_1468)).b = f_copy_node_560(F->arg_467);
(*(P647)rt_nil_check((*(P647)rt_nil_check(F->x_1468)).b)).next = NULL;
F->result_ = F->x_1468;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_471(P647 s_470) {
  struct f_user_region_471fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_470 = s_470;
F->t_1470 = NULL;
F->f_1471 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1472 = rt_str_copy(f_gcall_613(f_call_node_469(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P647)rt_nil_check(F->s_470)).a, (*(P647)rt_nil_check(F->s_470)).line), 1, &F->t_1470));
F->unlock_1473 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_613(f_call_node_469(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P647)rt_nil_check(F->s_470)).a, (*(P647)rt_nil_check(F->s_470)).line), 1, &F->t_1470)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1472), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1471), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1471), rt_str(")) {", 4)); b_; }));
f_push_cleanup_404(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1471), rt_str("); ", 3)), F->unlock_1473); b_; }));
f_gen_body_400((*(P647)rt_nil_check(F->s_470)).b);
f_pop_cleanup_405();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1471), rt_str("); ", 3)), F->unlock_1473); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1471), rt_str("); ", 3)), F->unlock_1473), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_473(P647 s_472) {
  struct f_st_region_473fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_472 = s_472;
F->lv_1474 = NULL;
F->t_1475 = NULL;
F->c_1476 = NULL;
F->lk_1478 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1479 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_528((*(P647)rt_nil_check(F->s_472)).a, &F->lv_1474, &F->t_1475, &F->c_1476, &F->ro_1477);
if (((*(P651)rt_nil_check(F->t_1475)).kind != (((rt_int)13LL)))) {
f_user_region_471(F->s_472);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1478), rt_str(" = &", 4)), (*(P642)rt_nil_check(F->lv_1474))), rt_str("; rt_region_enter(", 18)), F->lk_1478), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1479), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1479), rt_str(")) {", 4)); b_; }));
f_push_cleanup_404(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1479), rt_str("); rt_region_leave(", 19)), F->lk_1478), rt_str(");", 2)); b_; }));
f_gen_body_400((*(P647)rt_nil_check(F->s_472)).b);
f_pop_cleanup_405();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1479), rt_str("); rt_region_leave(", 19)), F->lk_1478), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1479), rt_str("); rt_region_leave(", 19)), F->lk_1478), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P647 f_gparam_476(P647 g_474, rstr *name_475) {
  struct f_gparam_476fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_474 = g_474;
F->name_475 = name_475;
F->p_1480 = NULL;
F->p_1480 = (*(P647)rt_nil_check(F->g_474)).a;
while ((F->p_1480 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1480)).name)), (*F->name_475))) {
F->result_ = F->p_1480;
goto ret_;
}
F->p_1480 = (*(P647)rt_nil_check(F->p_1480)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P655 f_bind_sym_478(P647 p_477) {
  struct f_bind_sym_478fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_477 = p_477;
F->y_1481 = NULL;
if (((*(P647)rt_nil_check(F->p_477)).ival <= ((rt_int)2LL))) {
F->y_1481 = f_new_sym_171((((rt_int)5LL)), (*(P647)rt_nil_check(F->p_477)).name);
} else {
F->y_1481 = f_new_sym_171((((rt_int)2LL)), (*(P647)rt_nil_check(F->p_477)).name);
}
F->result_ = F->y_1481;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_481(P655 a_479, P655 b_480) {
  struct f_same_binds_481fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_479 = a_479;
F->b_480 = b_480;
F->x_1482 = NULL;
F->x_1482 = F->a_479;
F->y_1483 = NULL;
F->y_1483 = F->b_480;
while (((F->x_1482 != NULL) && (F->y_1483 != NULL))) {
if (((!rt_str_eq((*(P642)rt_nil_check((*(P655)rt_nil_check(F->x_1482)).name)), (*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_1483)).name)))) || (!f_same_binding_484(F->x_1482, F->y_1483)))) {
F->result_ = 0;
goto ret_;
}
F->x_1482 = (*(P655)rt_nil_check(F->x_1482)).mnext;
F->y_1483 = (*(P655)rt_nil_check(F->y_1483)).mnext;
}
F->result_ = ((F->x_1482 == NULL) && (F->y_1483 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_484(P655 a_482, P655 b_483) {
  struct f_same_binding_484fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_482 = a_482;
F->b_483 = b_483;
if (((*(P655)rt_nil_check(F->a_482)).kind == (((rt_int)5LL)))) {
F->result_ = (((*(P655)rt_nil_check(F->b_483)).kind == (((rt_int)5LL))) && f_same_209((*(P655)rt_nil_check(F->a_482)).t, (*(P655)rt_nil_check(F->b_483)).t));
goto ret_;
}
if ((((*(P655)rt_nil_check(F->a_482)).kind == (((rt_int)2LL))) && (*(P655)rt_nil_check(F->a_482)).hasmv)) {
F->result_ = ((*(P655)rt_nil_check(F->b_483)).hasmv && ((*(P655)rt_nil_check(F->a_482)).mvalue == (*(P655)rt_nil_check(F->b_483)).mvalue));
goto ret_;
}
F->result_ = ((((*(P655)rt_nil_check(F->a_482)).cname != NULL) && ((*(P655)rt_nil_check(F->b_483)).cname != NULL)) && rt_str_eq((*(P642)rt_nil_check((*(P655)rt_nil_check(F->a_482)).cname)), (*(P642)rt_nil_check((*(P655)rt_nil_check(F->b_483)).cname))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P655 f_tt_binds_489(P647 gd_485, P647 formals_486, P647 actuals_487, rt_int line_488) {
  struct f_tt_binds_489fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_485 = gd_485;
F->formals_486 = formals_486;
F->actuals_487 = actuals_487;
F->line_488 = line_488;
F->f_1484 = NULL;
F->f_1484 = F->formals_486;
F->a_1485 = NULL;
F->a_1485 = F->actuals_487;
F->binds_1486 = NULL;
F->c_1487 = NULL;
F->at_1488 = NULL;
while (((F->f_1484 != NULL) && (F->a_1485 != NULL))) {
F->p_1489 = NULL;
F->p_1489 = f_gparam_476(F->gd_485, &(*(P642)rt_nil_check((*(P647)rt_nil_check(F->f_1484)).name)));
F->b_1490 = NULL;
if ((F->p_1489 == NULL)) {
f_fail_23(F->line_488, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->f_1484)).name)), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1490 = f_bind_sym_478(F->p_1489);
if (((*(P647)rt_nil_check(F->p_1489)).ival <= ((rt_int)2LL))) {
if (((*(P647)rt_nil_check(F->a_1485)).kind >= (((rt_int)70LL)))) {
(*(P655)rt_nil_check(F->b_1490)).t = f_resolve_subtype_233(F->a_1485, &F->c_1487);
} else {
F->st_1491 = NULL;
F->st_1491 = f_nn_61((((rt_int)80LL)), F->line_488);
(*(P647)rt_nil_check(F->st_1491)).name = (*(P647)rt_nil_check(F->a_1485)).name;
(*(P655)rt_nil_check(F->b_1490)).t = f_resolve_subtype_233(F->st_1491, &F->c_1487);
}
(*(P655)rt_nil_check(F->b_1490)).c = F->c_1487;
} else if (((*(P647)rt_nil_check(F->p_1489)).ival <= ((rt_int)5LL))) {
if ((((*(P647)rt_nil_check(F->a_1485)).kind != (((rt_int)7LL))) || (f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->a_1485)).name))) == NULL))) {
f_fail_23(F->line_488, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1489)).name))); b_; }));
}
F->b_1490 = f_copy_sym_324(f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->a_1485)).name))));
(*(P655)rt_nil_check(F->b_1490)).name = (*(P647)rt_nil_check(F->p_1489)).name;
} else {
(*(P655)rt_nil_check(F->b_1490)).t = f_resolve_subtype_233((*(P647)rt_nil_check(F->p_1489)).a, &F->c_1487);
(*(P655)rt_nil_check(F->b_1490)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_555(F->a_1485, (*(P655)rt_nil_check(F->b_1490)).t, &F->at_1488); b_; }));
(*(P655)rt_nil_check(F->b_1490)).mvalue = f_manifest_269(F->a_1485, &F->ok_1492);
(*(P655)rt_nil_check(F->b_1490)).hasmv = F->ok_1492;
}
(*(P655)rt_nil_check(F->b_1490)).mnext = F->binds_1486;
F->binds_1486 = F->b_1490;
F->f_1484 = (*(P647)rt_nil_check(F->f_1484)).next;
F->a_1485 = (*(P647)rt_nil_check(F->a_1485)).next;
}
F->result_ = F->binds_1486;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_491(P647 st_490) {
  struct f_generic_use_491fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_490 = st_490;
if (((*(P647)rt_nil_check(F->st_490)).kind == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P655)rt_nil_check(f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = (((((*(P647)rt_nil_check(F->st_490)).kind == (((rt_int)80LL))) && ((*(P647)rt_nil_check(F->st_490)).a != NULL)) && (f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->st_490)).name))) != NULL)) && ((*(P655)rt_nil_check(f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->st_490)).name))))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P655 f_infer_from_496(P647 gd_492, P647 pat_493, P651 t_494, P655 known_495) {
  struct f_infer_from_496fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_492 = gd_492;
F->pat_493 = pat_493;
F->t_494 = t_494;
F->known_495 = known_495;
F->binds_1493 = NULL;
F->binds_1493 = F->known_495;
F->e_1494 = NULL;
F->e_1494 = (*(P647)rt_nil_check(F->pat_493)).a;
F->tp_1495 = NULL;
if (((F->t_494 == NULL) || ((*(P651)rt_nil_check(F->t_494)).gen == NULL))) {
F->result_ = F->binds_1493;
goto ret_;
}
F->tp_1495 = (*(P647)rt_nil_check((*(P655)rt_nil_check((*(P651)rt_nil_check(F->t_494)).gen)).decl)).a;
if (((*(P647)rt_nil_check(F->pat_493)).kind == (((rt_int)78LL)))) {
F->e_1494 = f_copy_node_560((*(P647)rt_nil_check(F->pat_493)).a);
(*(P647)rt_nil_check(F->e_1494)).next = NULL;
}
while (((F->e_1494 != NULL) && (F->tp_1495 != NULL))) {
F->nm_1496 = NULL;
if ((((*(P647)rt_nil_check(F->e_1494)).kind == (((rt_int)7LL))) || ((*(P647)rt_nil_check(F->e_1494)).kind == (((rt_int)80LL))))) {
F->nm_1496 = (*(P647)rt_nil_check(F->e_1494)).name;
}
if ((((F->nm_1496 != NULL) && (f_gparam_476(F->gd_492, &(*(P642)rt_nil_check(F->nm_1496))) != NULL)) && ((*(P647)rt_nil_check(f_gparam_476(F->gd_492, &(*(P642)rt_nil_check(F->nm_1496))))).ival <= ((rt_int)2LL)))) {
F->q_1497 = NULL;
F->q_1497 = F->binds_1493;
F->have_1498 = 0;
while ((F->q_1497 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P655)rt_nil_check(F->q_1497)).name)), (*(P642)rt_nil_check(F->nm_1496)))) {
F->have_1498 = 1;
}
F->q_1497 = (*(P655)rt_nil_check(F->q_1497)).mnext;
}
if ((!F->have_1498)) {
F->g_1499 = NULL;
F->g_1499 = (*(P651)rt_nil_check(F->t_494)).gbinds;
while ((F->g_1499 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P655)rt_nil_check(F->g_1499)).name)), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->tp_1495)).name)))) {
F->b_1500 = NULL;
F->b_1500 = f_bind_sym_478(f_gparam_476(F->gd_492, &(*(P642)rt_nil_check(F->nm_1496))));
(*(P655)rt_nil_check(F->b_1500)).t = (*(P655)rt_nil_check(F->g_1499)).t;
(*(P655)rt_nil_check(F->b_1500)).c = (*(P655)rt_nil_check(F->g_1499)).c;
(*(P655)rt_nil_check(F->b_1500)).mnext = F->binds_1493;
F->binds_1493 = F->b_1500;
}
F->g_1499 = (*(P655)rt_nil_check(F->g_1499)).mnext;
}
}
}
F->e_1494 = (*(P647)rt_nil_check(F->e_1494)).next;
F->tp_1495 = (*(P647)rt_nil_check(F->tp_1495)).next;
}
F->result_ = F->binds_1493;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P651 f_instantiate_type_502(P655 g_497, P647 tt_498, P647 args_499, P649 *c_500, rt_int line_501) {
  struct f_instantiate_type_502fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_497 = g_497;
F->tt_498 = tt_498;
F->args_499 = args_499;
F->c_500 = c_500;
F->c_500v = *F->c_500;
F->line_501 = line_501;
F->gd_1501 = NULL;
F->gd_1501 = (*(P655)rt_nil_check(F->g_497)).decl;
F->pat_1502 = NULL;
F->pat_1502 = (*(P647)rt_nil_check(F->gd_1501)).b;
F->binds_1503 = NULL;
F->binds_1503 = f_tt_binds_489(F->gd_1501, (*(P647)rt_nil_check(F->pat_1502)).e, F->tt_498, F->line_501);
F->inst_1504 = NULL;
F->inst_1504 = g_all_insts_682;
F->t_1505 = NULL;
F->saved_caps_1506 = NULL;
F->saved_caps_1506 = g_caps_699;
F->saved_env_1507 = NULL;
F->saved_env_1507 = g_genv_681;
F->saved_gdepth_1508 = g_gdepth_713;
F->c_500v = f_new_cons_174();
(*(P649)rt_nil_check(F->c_500v)).args = F->args_499;
while ((F->inst_1504 != NULL)) {
if ((((*(P655)rt_nil_check(F->inst_1504)).decl == F->pat_1502) && f_same_binds_481((*(P655)rt_nil_check(F->inst_1504)).members, F->binds_1503))) {
F->result_ = (*(P655)rt_nil_check(F->inst_1504)).t;
goto ret_;
}
F->inst_1504 = (*(P655)rt_nil_check(F->inst_1504)).insts;
}
f_open_scope_167();
{
F->b_1509 = NULL;
F->b_1509 = F->binds_1503;
while ((F->b_1509 != NULL)) {
f_define_158(F->b_1509, F->line_501);
F->b_1509 = (*(P655)rt_nil_check(F->b_1509)).mnext;
}
}
g_caps_699 = NULL;
g_genv_681 = (*(P655)rt_nil_check(F->g_497)).env;
g_gdepth_713 = g_depth_683;
{
F->y_1510 = NULL;
F->y_1510 = f_new_sym_171((((rt_int)5LL)), (*(P647)rt_nil_check(F->pat_1502)).name);
F->yc_1511 = NULL;
(*(P655)rt_nil_check(F->y_1510)).decl = F->pat_1502;
if (((*(P647)rt_nil_check(F->pat_1502)).kind == (((rt_int)44LL)))) {
F->t_1505 = f_new_typ_173((((rt_int)8LL)));
(*(P651)rt_nil_check(F->t_1505)).name = (*(P647)rt_nil_check(F->pat_1502)).name;
(*(P651)rt_nil_check(F->t_1505)).decl = F->pat_1502;
(*(P655)rt_nil_check(F->y_1510)).t = F->t_1505;
f_define_158(F->y_1510, F->line_501);
f_finish_ptr_345(F->t_1505);
} else {
f_define_158(F->y_1510, F->line_501);
F->t_1505 = f_new_type_247(F->y_1510, f_nn_61((((rt_int)80LL)), F->line_501), &F->yc_1511);
}
}
g_caps_699 = F->saved_caps_1506;
g_genv_681 = F->saved_env_1507;
g_gdepth_713 = F->saved_gdepth_1508;
(*(P651)rt_nil_check(F->t_1505)).gen = F->g_497;
(*(P651)rt_nil_check(F->t_1505)).gbinds = F->binds_1503;
f_close_scope_168();
{ R656 *cell1512 = rt_alloc(sizeof(R656));
(*cell1512).name = NULL;
(*cell1512).t = NULL;
(*cell1512).c = NULL;
(*cell1512).access = NULL;
(*cell1512).cname = NULL;
(*cell1512).st = NULL;
(*cell1512).decl = NULL;
(*cell1512).params = NULL;
(*cell1512).result = NULL;
(*cell1512).members = NULL;
(*cell1512).mnext = NULL;
(*cell1512).binds = NULL;
(*cell1512).insts = NULL;
(*cell1512).env = NULL;
(*cell1512).chain = NULL;
(*cell1512).stack = NULL;
(*cell1512).owner = NULL;
(*cell1512).gctx = NULL;
(*cell1512).mv = NULL;
(*cell1512).reqs = NULL;
(*cell1512).home = NULL;
F->inst_1504 = cell1512;
}
(*(P655)rt_nil_check(F->inst_1504)).kind = (((rt_int)5LL));
(*(P655)rt_nil_check(F->inst_1504)).name = (*(P655)rt_nil_check(F->g_497)).name;
(*(P655)rt_nil_check(F->inst_1504)).decl = F->pat_1502;
(*(P655)rt_nil_check(F->inst_1504)).t = F->t_1505;
(*(P655)rt_nil_check(F->inst_1504)).members = F->binds_1503;
(*(P655)rt_nil_check(F->inst_1504)).insts = g_all_insts_682;
g_all_insts_682 = F->inst_1504;
F->result_ = F->t_1505;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_500) = F->c_500v;
  RT_FPOP();
  return F->result_;
}

static P655 f_instantiate_507(P655 g_503, P647 tt_504, P647 args_505, rt_int line_506) {
  struct f_instantiate_507fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_503 = g_503;
F->tt_504 = tt_504;
F->args_505 = args_505;
F->line_506 = line_506;
F->gd_1513 = NULL;
F->gd_1513 = (*(P655)rt_nil_check(F->g_503)).decl;
F->pat_1514 = NULL;
F->pat_1514 = (*(P647)rt_nil_check(F->gd_1513)).b;
F->binds_1515 = NULL;
F->f_1516 = NULL;
F->f_1516 = (*(P647)rt_nil_check(F->pat_1514)).e;
F->a_1517 = NULL;
F->a_1517 = F->tt_504;
F->fp_1518 = NULL;
F->fp_1518 = (*(P647)rt_nil_check(F->pat_1514)).a;
F->inst_1519 = NULL;
F->at_1520 = NULL;
F->c_1521 = NULL;
F->saved_fctx_1522 = NULL;
F->saved_fctx_1522 = g_fctx_698;
F->saved_in_1523 = g_in_func_696;
F->saved_level_1524 = g_cur_level_697;
F->saved_sym_1525 = NULL;
F->saved_sym_1525 = g_func_sym_708;
F->saved_code_1526 = NULL;
F->saved_code_1526 = g_code_694;
F->saved_env_1527 = NULL;
F->saved_env_1527 = g_genv_681;
F->saved_gdepth_1528 = g_gdepth_713;
F->binds_1515 = f_tt_binds_489(F->gd_1513, F->f_1516, F->a_1517, F->line_506);
F->a_1517 = F->args_505;
while (((F->fp_1518 != NULL) && (F->a_1517 != NULL))) {
if (f_generic_use_491((*(P647)rt_nil_check(F->fp_1518)).a)) {
F->v_1529 = rt_str_copy(f_gexpr_555(F->a_1517, NULL, &F->at_1520));
F->binds_1515 = f_infer_from_496(F->gd_1513, (*(P647)rt_nil_check(F->fp_1518)).a, F->at_1520, F->binds_1515);
} else if (((((*(P647)rt_nil_check((*(P647)rt_nil_check(F->fp_1518)).a)).kind == (((rt_int)80LL))) && (f_gparam_476(F->gd_1513, &(*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->fp_1518)).a)).name))) != NULL)) && ((*(P647)rt_nil_check(f_gparam_476(F->gd_1513, &(*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->fp_1518)).a)).name))))).ival <= ((rt_int)2LL)))) {
F->known_1530 = 0;
F->q_1531 = NULL;
F->q_1531 = F->binds_1515;
while ((F->q_1531 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P655)rt_nil_check(F->q_1531)).name)), (*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->fp_1518)).a)).name)))) {
F->known_1530 = 1;
}
F->q_1531 = (*(P655)rt_nil_check(F->q_1531)).mnext;
}
if ((!F->known_1530)) {
F->b_1532 = NULL;
F->b_1532 = f_bind_sym_478(f_gparam_476(F->gd_1513, &(*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->fp_1518)).a)).name))));
F->v_1533 = rt_str_copy(f_gexpr_555(F->a_1517, NULL, &F->at_1520));
(*(P655)rt_nil_check(F->b_1532)).t = F->at_1520;
(*(P655)rt_nil_check(F->b_1532)).c = g_no_cons_733;
(*(P655)rt_nil_check(F->b_1532)).mnext = F->binds_1515;
F->binds_1515 = F->b_1532;
}
}
F->fp_1518 = (*(P647)rt_nil_check(F->fp_1518)).next;
F->a_1517 = (*(P647)rt_nil_check(F->a_1517)).next;
}
F->inst_1519 = g_all_insts_682;
while ((F->inst_1519 != NULL)) {
if ((((*(P655)rt_nil_check(F->inst_1519)).decl == F->pat_1514) && f_same_binds_481((*(P655)rt_nil_check(F->inst_1519)).members, F->binds_1515))) {
F->result_ = F->inst_1519;
goto ret_;
}
F->inst_1519 = (*(P655)rt_nil_check(F->inst_1519)).insts;
}
g_fctx_698 = (*(P655)rt_nil_check(F->g_503)).gctx;
g_in_func_696 = ((*(P655)rt_nil_check(F->g_503)).level > ((rt_int)0LL));
g_cur_level_697 = (*(P655)rt_nil_check(F->g_503)).level;
g_func_sym_708 = (*(P655)rt_nil_check(F->g_503)).owner;
g_code_694 = f_new_buffer_24();
f_open_scope_167();
g_gdepth_713 = g_depth_683;
{
F->b_1534 = NULL;
F->b_1534 = F->binds_1515;
while ((F->b_1534 != NULL)) {
f_define_158(F->b_1534, F->line_506);
F->b_1534 = (*(P655)rt_nil_check(F->b_1534)).mnext;
}
}
g_genv_681 = (*(P655)rt_nil_check(F->g_503)).env;
F->inst_1519 = f_build_subprogram_349(F->pat_1514);
(*(P655)rt_nil_check(F->inst_1519)).members = F->binds_1515;
(*(P655)rt_nil_check(F->inst_1519)).insts = g_all_insts_682;
g_all_insts_682 = F->inst_1519;
f_define_158(F->inst_1519, F->line_506);
f_gen_subprogram_379(F->pat_1514, F->inst_1519);
f_close_scope_168();
g_fctx_698 = F->saved_fctx_1522;
g_in_func_696 = F->saved_in_1523;
g_cur_level_697 = F->saved_level_1524;
g_func_sym_708 = F->saved_sym_1525;
g_code_694 = F->saved_code_1526;
g_genv_681 = F->saved_env_1527;
g_gdepth_713 = F->saved_gdepth_1528;
F->result_ = F->inst_1519;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_509(P655 y_508) {
  struct f_access_of_509fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_508 = y_508;
F->p_1535 = NULL;
F->p_1535 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P655)rt_nil_check(F->y_508)).level <= ((rt_int)0LL))) {
F->result_ = (*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_508)).access));
goto ret_;
}
{ rt_int lo1537 = ((rt_int)1LL), hi1538 = rt_sub(g_cur_level_697, (*(P655)rt_nil_check(F->y_508)).level);
for (rt_int it1539 = lo1537; it1539 <= hi1538; it1539++) {
F->i_1536 = it1539;
F->p_1535 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->p_1535)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P655)rt_nil_check(F->y_508)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P642)rt_nil_check(F->p_1535))), rt_str("->", 2)), (*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_508)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->p_1535)), rt_str("->", 2)), (*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_508)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_import_of_512(P647 l_510, rstr *name_511) {
  struct f_import_of_512fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_510 = l_510;
F->name_511 = name_511;
F->p_1540 = NULL;
F->p_1540 = F->l_510;
while ((F->p_1540 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1540)).name)), (*F->name_511))) {
F->result_ = F->p_1540;
goto ret_;
}
F->p_1540 = (*(P647)rt_nil_check(F->p_1540)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_515(P655 y_513, rt_int line_514) {
  struct f_check_import_515fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_513 = y_513;
F->line_514 = line_514;
F->c_1541 = NULL;
F->c_1541 = g_fctx_698;
F->ro_1542 = 0;
while (((F->c_1541 != NULL) && ((*(P655)rt_nil_check(F->y_513)).depth < (*(P661)rt_nil_check(F->c_1541)).depth))) {
if ((!(*(P661)rt_nil_check(F->c_1541)).all_imp)) {
F->imp_1543 = NULL;
F->imp_1543 = f_import_of_512((*(P661)rt_nil_check(F->c_1541)).imps, &(*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_513)).name)));
if ((F->imp_1543 == NULL)) {
f_fail_23(F->line_514, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_513)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P647)rt_nil_check(F->imp_1543)).ival == ((rt_int)1LL))) {
F->ro_1542 = 1;
}
}
F->c_1541 = (*(P661)rt_nil_check(F->c_1541)).next;
}
F->result_ = F->ro_1542;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_517(rstr *s_516) {
  struct f_c_ident_517fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_516 = s_516;
if (rt_str_eq((*F->s_516), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_516), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_516), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_516), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_516), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_516), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_516), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_516), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_516), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_516), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_516), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_516), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_516), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_516), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_516));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_520(rstr *base_518, P651 t_519) {
  struct f_deref_520fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_518 = base_518;
F->t_519 = t_519;
if (f_suppressed_356(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_222(F->t_519)), rt_str(")(", 2)), (*F->base_518)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_222(F->t_519)), rt_str(")rt_nil_check(", 14)), (*F->base_518)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_522(P647 e_521) {
  struct f_is_lvalue_522fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_521 = e_521;
if (((*(P647)rt_nil_check(F->e_521)).kind == (((rt_int)7LL)))) {
F->y_1544 = NULL;
F->y_1544 = f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_521)).name)));
F->result_ = ((F->y_1544 != NULL) && (((*(P655)rt_nil_check(F->y_1544)).kind == (((rt_int)1LL))) || ((((*(P655)rt_nil_check(F->y_1544)).kind == (((rt_int)2LL))) && ((*(P655)rt_nil_check(F->y_1544)).mv == NULL)) && (!(*(P655)rt_nil_check(F->y_1544)).hasmv))));
goto ret_;
} else if (((*(P647)rt_nil_check(F->e_521)).kind == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_522((*(P647)rt_nil_check(F->e_521)).a);
goto ret_;
} else if (((*(P647)rt_nil_check(F->e_521)).kind == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_521)).name)), rt_str("LEN", 3))) && f_is_lvalue_522((*(P647)rt_nil_check(F->e_521)).a));
goto ret_;
} else if (((*(P647)rt_nil_check(F->e_521)).kind == (((rt_int)10LL)))) {
if ((((*(P647)rt_nil_check(F->e_521)).b != NULL) && ((*(P647)rt_nil_check((*(P647)rt_nil_check(F->e_521)).b)).kind == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_522((*(P647)rt_nil_check(F->e_521)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_528(P647 e_523, P642 *code_524, P651 *t_525, P649 *c_526, int *ro_527) {
  struct f_lvalue_528fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_523 = e_523;
F->code_524 = code_524;
F->code_524v = *F->code_524;
F->t_525 = t_525;
F->t_525v = *F->t_525;
F->c_526 = c_526;
F->c_526v = *F->c_526;
F->ro_527 = ro_527;
F->ro_527v = *F->ro_527;
F->base_1545 = NULL;
F->bt_1546 = NULL;
F->bc_1547 = NULL;
if (((*(P647)rt_nil_check(F->e_523)).kind == (((rt_int)7LL)))) {
F->y_1548 = NULL;
F->y_1548 = f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_523)).name)));
if ((F->y_1548 == NULL)) {
f_fail_23((*(P647)rt_nil_check(F->e_523)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_523)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P655)rt_nil_check(F->y_1548)).kind != (((rt_int)1LL))) && ((*(P655)rt_nil_check(F->y_1548)).kind != (((rt_int)2LL))))) {
f_fail_23((*(P647)rt_nil_check(F->e_523)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_523)).name)), rt_str(" is not a variable", 18)); b_; }));
}
F->code_524v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_509(F->y_1548); b_; }));
F->t_525v = (*(P655)rt_nil_check(F->y_1548)).t;
F->c_526v = (*(P655)rt_nil_check(F->y_1548)).c;
F->ro_527v = (*(P655)rt_nil_check(F->y_1548)).ro_flag;
if ((((*(P655)rt_nil_check(F->y_1548)).kind == (((rt_int)1LL))) && f_check_import_515(F->y_1548, (*(P647)rt_nil_check(F->e_523)).line))) {
F->ro_527v = 1;
}
} else if (((*(P647)rt_nil_check(F->e_523)).kind == (((rt_int)17LL)))) {
f_lvalue_528((*(P647)rt_nil_check(F->e_523)).a, &F->code_524v, &F->t_525v, &F->c_526v, &F->ro_527v);
} else if ((((((*(P647)rt_nil_check(F->e_523)).kind == (((rt_int)12LL))) && ((*(P647)rt_nil_check((*(P647)rt_nil_check(F->e_523)).a)).kind == (((rt_int)7LL)))) && rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->e_523)).a)).name)), rt_str("ME", 2))) && (f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_524v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_601((*(P647)rt_nil_check(F->e_523)).b, (*(P647)rt_nil_check(F->e_523)).line, &F->t_525v); b_; }));
F->c_526v = g_no_cons_733;
F->ro_527v = 0;
} else if (((*(P647)rt_nil_check(F->e_523)).kind == (((rt_int)11LL)))) {
f_lvalue_528((*(P647)rt_nil_check(F->e_523)).a, &F->base_1545, &F->bt_1546, &F->bc_1547, &F->ro_527v);
f_select_on_536(&(*(P642)rt_nil_check(F->base_1545)), F->bt_1546, F->e_523, &F->ro_527v, &F->code_524v, &F->t_525v, &F->c_526v);
} else if (((*(P647)rt_nil_check(F->e_523)).kind == (((rt_int)10LL)))) {
f_lvalue_528((*(P647)rt_nil_check(F->e_523)).a, &F->base_1545, &F->bt_1546, &F->bc_1547, &F->ro_527v);
f_index_on_549(&(*(P642)rt_nil_check(F->base_1545)), F->bt_1546, F->e_523, &F->ro_527v, 1, &F->code_524v, &F->t_525v, &F->c_526v);
} else {
f_fail_23((*(P647)rt_nil_check(F->e_523)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_524) = F->code_524v;  (*F->t_525) = F->t_525v;  (*F->c_526) = F->c_526v;  (*F->ro_527) = F->ro_527v;
  RT_FPOP();
  return;
}

static void f_select_on_536(rstr *base_529, P651 bt_530, P647 e_531, int *ro_532, P642 *code_533, P651 *t_534, P649 *c_535) {
  struct f_select_on_536fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_529 = base_529;
F->bt_530 = bt_530;
F->e_531 = e_531;
F->ro_532 = ro_532;
F->code_533 = code_533;
F->code_533v = *F->code_533;
F->t_534 = t_534;
F->t_534v = *F->t_534;
F->c_535 = c_535;
F->c_535v = *F->c_535;
F->c_535v = g_no_cons_733;
if (((*(P651)rt_nil_check(F->bt_530)).kind == (((rt_int)8LL)))) {
f_finish_ptr_345(F->bt_530);
(*F->ro_532) = 0;
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_531)).name)), rt_str("ALL", 3))) {
F->code_533v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_520(&(*F->base_529), F->bt_530); b_; }));
F->t_534v = (*(P651)rt_nil_check(F->bt_530)).target;
goto ret_;
}
f_select_on_536(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_520(&(*F->base_529), F->bt_530); b_; }), (*(P651)rt_nil_check(F->bt_530)).target, F->e_531, &(*F->ro_532), &F->code_533v, &F->t_534v, &F->c_535v);
goto ret_;
}
if (((*(P651)rt_nil_check(F->bt_530)).kind == (((rt_int)15LL)))) {
F->p_1549 = NULL;
F->p_1549 = (*(P651)rt_nil_check(F->bt_530)).tparams;
if ((!f_opened_237(F->bt_530))) {
f_fail_23((*(P647)rt_nil_check(F->e_531)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->bt_530)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P651)rt_nil_check(F->bt_530)).tparams == NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_531)).name)), rt_str("ALL", 3))) {
F->code_533v = f_mk_3(&(*F->base_529));
F->t_534v = (*(P651)rt_nil_check(F->bt_530)).under;
goto ret_;
}
f_select_on_536(&(*F->base_529), (*(P651)rt_nil_check(F->bt_530)).under, F->e_531, &(*F->ro_532), &F->code_533v, &F->t_534v, &F->c_535v);
goto ret_;
}
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_531)).name)), rt_str("ALL", 3))) {
F->code_533v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_529), rt_str(".all", 4)); b_; }));
F->t_534v = (*(P651)rt_nil_check(F->bt_530)).under;
goto ret_;
}
while ((F->p_1549 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1549)).name)), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_531)).name)))) {
F->code_533v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_529), rt_str(".p_", 3)), f_lower_s_15(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1549)).name)))); b_; }));
F->t_534v = f_tparam_type_262(F->bt_530, &(*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1549)).name)));
(*F->ro_532) = 1;
goto ret_;
}
F->p_1549 = (*(P647)rt_nil_check(F->p_1549)).next;
}
f_select_on_536(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_529), rt_str(".all", 4)); b_; }), (*(P651)rt_nil_check(F->bt_530)).under, F->e_531, &(*F->ro_532), &F->code_533v, &F->t_534v, &F->c_535v);
goto ret_;
}
if (((*(P651)rt_nil_check(F->bt_530)).kind == (((rt_int)7LL)))) {
F->f_1550 = NULL;
F->f_1550 = (*(P651)rt_nil_check(F->bt_530)).fields;
while ((F->f_1550 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P653)rt_nil_check(F->f_1550)).name)), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_531)).name)))) {
F->c_535v = (*(P653)rt_nil_check(F->f_1550)).c;
F->code_533v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_529), rt_str(".", 1)), f_field_c_17(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_531)).name)))); b_; }));
F->t_534v = (*(P653)rt_nil_check(F->f_1550)).t;
goto ret_;
}
F->f_1550 = (*(P653)rt_nil_check(F->f_1550)).next;
}
f_fail_23((*(P647)rt_nil_check(F->e_531)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_531)).name))); b_; }));
}
f_fail_23((*(P647)rt_nil_check(F->e_531)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_531)).name))), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_533) = F->code_533v;  (*F->t_534) = F->t_534v;  (*F->c_535) = F->c_535v;
  RT_FPOP();
  return;
}

static rstr f_ix_540(rstr *i_537, rstr *lo_538, rstr *hi_539) {
  struct f_ix_540fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_537 = i_537;
F->lo_538 = lo_538;
F->hi_539 = hi_539;
if (f_suppressed_356(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_537)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_537)), rt_str(", ", 2)), (*F->lo_538)), rt_str(", ", 2)), (*F->hi_539)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_549(rstr *base_541, P651 bt_542, P647 e_543, int *ro_544, int lv_545, P642 *code_546, P651 *t_547, P649 *c_548) {
  struct f_index_on_549fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_541 = base_541;
F->bt_542 = bt_542;
F->e_543 = e_543;
F->ro_544 = ro_544;
F->lv_545 = lv_545;
F->code_546 = code_546;
F->code_546v = *F->code_546;
F->t_547 = t_547;
F->t_547v = *F->t_547;
F->c_548 = c_548;
F->c_548v = *F->c_548;
F->a_1551 = NULL;
F->a_1551 = (*(P647)rt_nil_check(F->e_543)).b;
F->it_1552 = NULL;
F->c_548v = g_no_cons_733;
if (((*(P651)rt_nil_check(F->bt_542)).kind == (((rt_int)8LL)))) {
f_finish_ptr_345(F->bt_542);
(*F->ro_544) = 0;
f_index_on_549(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_520(&(*F->base_541), F->bt_542); b_; }), (*(P651)rt_nil_check(F->bt_542)).target, F->e_543, &(*F->ro_544), F->lv_545, &F->code_546v, &F->t_547v, &F->c_548v);
goto ret_;
}
if (((*(P651)rt_nil_check(F->bt_542)).kind == (((rt_int)15LL)))) {
if ((!f_opened_237(F->bt_542))) {
f_fail_23((*(P647)rt_nil_check(F->e_543)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->bt_542)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P651)rt_nil_check(F->bt_542)).tparams == NULL)) {
f_index_on_549(&(*F->base_541), (*(P651)rt_nil_check(F->bt_542)).under, F->e_543, &(*F->ro_544), F->lv_545, &F->code_546v, &F->t_547v, &F->c_548v);
} else {
f_index_on_549(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_541), rt_str(".all", 4)); b_; }), (*(P651)rt_nil_check(F->bt_542)).under, F->e_543, &(*F->ro_544), F->lv_545, &F->code_546v, &F->t_547v, &F->c_548v);
}
goto ret_;
}
if ((((*(P651)rt_nil_check(F->bt_542)).kind == (((rt_int)6LL))) && ((*(P651)rt_nil_check(F->bt_542)).idx2 != NULL))) {
if ((f_list_len_67(F->a_1551) != ((rt_int)2LL))) {
f_fail_23((*(P647)rt_nil_check(F->e_543)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("two subscripts expected", 23); b_; }));
}
{
F->i_1553 = rt_str_copy(f_gexpr_555(F->a_1551, (*(P651)rt_nil_check(F->bt_542)).idx, &F->it_1552));
F->j_1554 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->a_1551)).next, (*(P651)rt_nil_check(F->bt_542)).idx2, &F->it_1552));
F->code_546v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_541), rt_str(".p[(", 4)), f_ix_540(&F->i_1553, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_541), rt_str(".lo", 3)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_541), rt_str(".hi", 3)); b_; }))), rt_str(" - ", 3)), (*F->base_541)), rt_str(".lo) * (", 8)), (*F->base_541)), rt_str(".hi2 - ", 7)), (*F->base_541)), rt_str(".lo2 + 1) + ", 12)), f_ix_540(&F->j_1554, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_541), rt_str(".lo2", 4)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_541), rt_str(".hi2", 4)); b_; }))), rt_str(" - ", 3)), (*F->base_541)), rt_str(".lo2]", 5)); b_; }));
F->t_547v = (*(P651)rt_nil_check(F->bt_542)).elem;
F->c_548v = (*(P651)rt_nil_check(F->bt_542)).elemcons;
}
goto ret_;
}
if ((f_list_len_67(F->a_1551) != ((rt_int)1LL))) {
f_fail_23((*(P647)rt_nil_check(F->e_543)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P651)rt_nil_check(F->bt_542)).kind == (((rt_int)5LL)))) {
if (((*(P647)rt_nil_check(F->a_1551)).kind == (((rt_int)16LL)))) {
F->lo_1555 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->a_1551)).a, g_ty_int_722, &F->it_1552));
F->hi_1556 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->a_1551)).b, g_ty_int_722, &F->it_1552));
F->code_546v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_541)), rt_str(", ", 2)), F->lo_1555), rt_str(", ", 2)), F->hi_1556), rt_str(")", 1)); b_; }));
F->t_547v = g_ty_string_726;
(*F->ro_544) = 1;
goto ret_;
}
{
F->i_1557 = rt_str_copy(f_gexpr_555(F->a_1551, g_ty_int_722, &F->it_1552));
F->t_547v = g_ty_ascii_725;
if (F->lv_545) {
F->code_546v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_541)), rt_str(", ", 2)), F->i_1557), rt_str("))", 2)); b_; }));
} else {
F->code_546v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_541)), rt_str(", ", 2)), F->i_1557), rt_str(")", 1)); b_; }));
(*F->ro_544) = 1;
}
}
goto ret_;
}
if (((*(P651)rt_nil_check(F->bt_542)).kind == (((rt_int)6LL)))) {
F->i_1558 = rt_str_copy(f_gexpr_555(F->a_1551, (*(P651)rt_nil_check(F->bt_542)).idx, &F->it_1552));
F->code_546v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_541), rt_str(".p[", 3)), f_ix_540(&F->i_1558, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_541), rt_str(".lo", 3)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_541), rt_str(".hi", 3)); b_; }))), rt_str(" - ", 3)), (*F->base_541)), rt_str(".lo]", 4)); b_; }));
F->t_547v = (*(P651)rt_nil_check(F->bt_542)).elem;
F->c_548v = (*(P651)rt_nil_check(F->bt_542)).elemcons;
goto ret_;
}
f_fail_23((*(P647)rt_nil_check(F->e_543)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_546) = F->code_546v;  (*F->t_547) = F->t_547v;  (*F->c_548) = F->c_548v;
  RT_FPOP();
  return;
}

static int f_own_attribute_551(P647 e_550) {
  struct f_own_attribute_551fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_550 = e_550;
F->saved_1559 = NULL;
F->saved_1559 = g_code_694;
F->bt_1560 = NULL;
F->ok_1561 = 0;
g_trial_720 = rt_add(g_trial_720, ((rt_int)1LL));
g_code_694 = f_new_buffer_24();
{ rt_frame xf1562;
if (RT_TRY(xf1562)) {
F->base_1564 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_550)).a, NULL, &F->bt_1560));
while (((F->bt_1560 != NULL) && ((*(P651)rt_nil_check(F->bt_1560)).kind == (((rt_int)8LL))))) {
f_finish_ptr_345(F->bt_1560);
F->bt_1560 = (*(P651)rt_nil_check(F->bt_1560)).target;
}
if (((F->bt_1560 != NULL) && ((*(P651)rt_nil_check(F->bt_1560)).kind == (((rt_int)15LL))))) {
F->p_1565 = NULL;
F->p_1565 = (*(P651)rt_nil_check(F->bt_1560)).tparams;
while ((F->p_1565 != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->p_1565)).name)), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_550)).name)))) {
F->ok_1561 = 1;
}
F->p_1565 = (*(P647)rt_nil_check(F->p_1565)).next;
}
}
RT_POP(xf1562);
} else {
RT_POP(xf1562);
int x1563 = rt_xcur;
if (0 || x1563 == ex_compile_error_1) {
F->ok_1561 = 0;
} else {
rt_raise(x1563);
}
}
}
g_trial_720 = rt_sub(g_trial_720, ((rt_int)1LL));
g_code_694 = F->saved_1559;
F->result_ = F->ok_1561;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_555(P647 e_552, P651 want_553, P651 *t_554) {
  struct f_gexpr_555fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_552 = e_552;
F->want_553 = want_553;
F->t_554 = t_554;
F->t_554v = *F->t_554;
F->k_1566 = (*(P647)rt_nil_check(F->e_552)).kind;
F->code_1567 = NULL;
F->c_1568 = NULL;
F->bt_1570 = NULL;
F->t_554v = g_ty_int_722;
if ((F->k_1566 == (((rt_int)1LL)))) {
if (((F->want_553 != NULL) && ((*(P651)rt_nil_check(F->want_553)).kind == (((rt_int)3LL))))) {
F->t_554v = g_ty_float_724;
F->result_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1566 == (((rt_int)2LL)))) {
F->t_554v = g_ty_float_724;
F->result_ = (*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name));
goto ret_;
} else if ((F->k_1566 == (((rt_int)5LL)))) {
F->t_554v = g_ty_bool_723;
F->result_ = f_itos_7((*(P647)rt_nil_check(F->e_552)).ival);
goto ret_;
} else if ((F->k_1566 == (((rt_int)3LL)))) {
F->t_554v = g_ty_string_726;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_564(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)))), rt_str(", ", 2)), f_itos_7(((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_1566 == (((rt_int)6LL)))) {
F->t_554v = g_ty_nil_729;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1566 == (((rt_int)4LL)))) {
if (((F->want_553 != NULL) && ((*(P651)rt_nil_check(f_base_of_211(F->want_553))).kind == (((rt_int)4LL))))) {
F->t_554v = F->want_553;
} else {
F->t_554v = f_enum_type_of_567(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), (*(P647)rt_nil_check(F->e_552)).line);
}
{
F->i_1571 = f_lit_index_230((*(P651)rt_nil_check(f_base_of_211(F->t_554v))).lits, &(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)));
if ((F->i_1571 < ((rt_int)0LL))) {
f_fail_23((*(P647)rt_nil_check(F->e_552)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1571);
goto ret_;
}
} else if ((F->k_1566 == (((rt_int)17LL)))) {
F->result_ = f_gexpr_555((*(P647)rt_nil_check(F->e_552)).a, F->want_553, &F->t_554v);
goto ret_;
} else if ((F->k_1566 == (((rt_int)7LL)))) {
F->y_1572 = NULL;
F->y_1572 = f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)));
if ((F->y_1572 == NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("ME", 2))) {
F->t_554v = g_ty_act_732;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("NIL_ACT", 7))) {
F->t_554v = g_ty_act_732;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("CRITICAL", 8)) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("NONCRITICAL", 11))) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("SYNC_RESET", 10))) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_613(f_wrap_apply_562(F->e_552), 0, &F->t_554v);
goto ret_;
}
if (((((((((rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("SYS_OUT", 7))) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("TIME", 4))) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("MILLISECONDS", 12))) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("SECONDS", 7))) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("MINUTES", 7))) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_613(f_wrap_apply_562(F->e_552), 0, &F->t_554v);
goto ret_;
}
f_fail_23((*(P647)rt_nil_check(F->e_552)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P655)rt_nil_check(F->y_1572)).kind == (((rt_int)1LL))) || ((*(P655)rt_nil_check(F->y_1572)).kind == (((rt_int)2LL))))) {
F->t_554v = (*(P655)rt_nil_check(F->y_1572)).t;
if (((*(P655)rt_nil_check(F->y_1572)).kind == (((rt_int)1LL)))) {
F->ro_1573 = f_check_import_515(F->y_1572, (*(P647)rt_nil_check(F->e_552)).line);
}
F->result_ = f_access_of_509(F->y_1572);
goto ret_;
}
if (((*(P655)rt_nil_check(F->y_1572)).kind == (((rt_int)3LL)))) {
F->result_ = f_gcall_613(f_wrap_apply_562(F->e_552), 0, &F->t_554v);
goto ret_;
}
f_fail_23((*(P647)rt_nil_check(F->e_552)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1566 == (((rt_int)8LL))) && (f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name))) != NULL)) && (f_user_op_609(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), f_copy_node_560((*(P647)rt_nil_check(F->e_552)).a)) != NULL))) {
F->call_1574 = NULL;
F->call_1574 = f_nn_61((((rt_int)10LL)), (*(P647)rt_nil_check(F->e_552)).line);
F->fname_1575 = NULL;
F->fname_1575 = f_nn_61((((rt_int)7LL)), (*(P647)rt_nil_check(F->e_552)).line);
(*(P647)rt_nil_check(F->fname_1575)).name = (*(P647)rt_nil_check(F->e_552)).name;
(*(P647)rt_nil_check(F->call_1574)).a = F->fname_1575;
(*(P647)rt_nil_check(F->call_1574)).b = f_copy_node_560((*(P647)rt_nil_check(F->e_552)).a);
F->result_ = f_gcall_613(F->call_1574, 0, &F->t_554v);
goto ret_;
} else if (((((F->k_1566 == (((rt_int)8LL))) && rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("NOT", 3))) && (F->want_553 != NULL)) && ((*(P651)rt_nil_check(F->want_553)).kind == (((rt_int)16LL))))) {
F->a_1576 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_552)).a, F->want_553, &F->t_554v));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_1576), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_67((*(P651)rt_nil_check((*(P651)rt_nil_check(F->want_553)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1566 == (((rt_int)8LL)))) {
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("NOT", 3))) {
F->a_1577 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_552)).a, g_ty_bool_723, &F->t_554v));
f_check_type_220(F->t_554v, g_ty_bool_723, (*(P647)rt_nil_check(F->e_552)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1577), rt_str(")", 1));
goto ret_;
}
{
F->a_1578 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_552)).a, F->want_553, &F->t_554v));
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("+", 1))) {
F->result_ = F->a_1578;
goto ret_;
} else if (((*(P651)rt_nil_check(F->t_554v)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1578), rt_str(")", 1));
goto ret_;
}
f_check_type_220(F->t_554v, g_ty_int_722, (*(P647)rt_nil_check(F->e_552)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1578), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1566 == (((rt_int)9LL)))) {
F->result_ = f_gbinop_574(F->e_552, F->want_553, &F->t_554v);
goto ret_;
} else if ((F->k_1566 == (((rt_int)10LL)))) {
if ((((*(P647)rt_nil_check((*(P647)rt_nil_check(F->e_552)).a)).kind == (((rt_int)7LL))) || ((*(P647)rt_nil_check((*(P647)rt_nil_check(F->e_552)).a)).kind == (((rt_int)12LL))))) {
F->nm_1579 = NULL;
F->nm_1579 = (*(P647)rt_nil_check(F->e_552)).a;
F->y_1580 = NULL;
if (((*(P647)rt_nil_check(F->nm_1579)).kind == (((rt_int)12LL)))) {
F->nm_1579 = (*(P647)rt_nil_check(F->nm_1579)).a;
}
F->y_1580 = f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->nm_1579)).name)));
if (((((F->y_1580 == NULL) || ((*(P655)rt_nil_check(F->y_1580)).kind == (((rt_int)3LL)))) || ((*(P655)rt_nil_check(F->y_1580)).kind == (((rt_int)4LL)))) || ((*(P655)rt_nil_check(F->y_1580)).kind == (((rt_int)10LL))))) {
F->result_ = f_gcall_613(F->e_552, 0, &F->t_554v);
goto ret_;
}
}
{
F->base_1581 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_552)).a, NULL, &F->bt_1570));
F->ro_1569 = 1;
f_index_on_549(&F->base_1581, F->bt_1570, F->e_552, &F->ro_1569, 0, &F->code_1567, &F->t_554v, &F->c_1568);
F->result_ = (*(P642)rt_nil_check(F->code_1567));
goto ret_;
}
} else if ((F->k_1566 == (((rt_int)11LL)))) {
if ((((rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_552)).name)), rt_str("MAX", 3))) && (!f_own_attribute_551(F->e_552)))) {
F->result_ = f_attribute_570(F->e_552, &F->t_554v);
goto ret_;
}
{
F->base_1582 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_552)).a, NULL, &F->bt_1570));
F->ro_1569 = 1;
f_select_on_536(&F->base_1582, F->bt_1570, F->e_552, &F->ro_1569, &F->code_1567, &F->t_554v, &F->c_1568);
F->result_ = (*(P642)rt_nil_check(F->code_1567));
goto ret_;
}
} else if ((F->k_1566 == (((rt_int)12LL)))) {
F->result_ = f_gcall_613(f_wrap_apply_562(F->e_552), 0, &F->t_554v);
goto ret_;
} else if ((F->k_1566 == (((rt_int)14LL)))) {
F->result_ = f_constructor_578(F->e_552, F->want_553, &F->t_554v);
goto ret_;
} else if ((F->k_1566 == (((rt_int)13LL)))) {
F->result_ = f_resolved_558(F->e_552, &F->t_554v);
goto ret_;
}
f_fail_23((*(P647)rt_nil_check(F->e_552)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_554) = F->t_554v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_558(P647 e_556, P651 *t_557) {
  struct f_resolved_558fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_556 = e_556;
F->t_557 = t_557;
F->t_557v = *F->t_557;
F->c_1583 = NULL;
F->vt_1584 = NULL;
F->y_1585 = NULL;
F->y_1585 = f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_1586 = NULL;
F->tt_1586 = f_copy_node_560((*(P647)rt_nil_check(F->e_556)).b);
(*(P647)rt_nil_check(F->tt_1586)).next = NULL;
if (((F->y_1585 != NULL) && (((*(P655)rt_nil_check(F->y_1585)).kind == (((rt_int)10LL))) || (f_resolve_overload_587(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_1586, f_copy_node_560((*(P647)rt_nil_check(F->e_556)).a), 0, (*(P647)rt_nil_check(F->e_556)).line) != NULL)))) {
F->call_1587 = NULL;
F->call_1587 = f_nn_61((((rt_int)10LL)), (*(P647)rt_nil_check(F->e_556)).line);
F->f_1588 = NULL;
F->f_1588 = f_nn_61((((rt_int)12LL)), (*(P647)rt_nil_check(F->e_556)).line);
F->fname_1589 = NULL;
F->fname_1589 = f_nn_61((((rt_int)7LL)), (*(P647)rt_nil_check(F->e_556)).line);
(*(P647)rt_nil_check(F->fname_1589)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P647)rt_nil_check(F->f_1588)).a = F->fname_1589;
(*(P647)rt_nil_check(F->f_1588)).b = F->tt_1586;
(*(P647)rt_nil_check(F->call_1587)).a = F->f_1588;
(*(P647)rt_nil_check(F->call_1587)).b = f_copy_node_560((*(P647)rt_nil_check(F->e_556)).a);
(*(P647)rt_nil_check((*(P647)rt_nil_check(F->call_1587)).b)).next = NULL;
F->result_ = f_gcall_613(F->call_1587, 0, &F->t_557v);
goto ret_;
}
F->t_557v = f_resolve_subtype_233((*(P647)rt_nil_check(F->e_556)).b, &F->c_1583);
{
F->v_1590 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_556)).a, F->t_557v, &F->vt_1584));
f_check_type_220(F->vt_1584, F->t_557v, (*(P647)rt_nil_check(F->e_556)).line);
F->result_ = f_checked_203(F->t_557v, F->c_1583, &F->v_1590);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_557) = F->t_557v;
  RT_FPOP();
  return F->result_;
}

static P647 f_copy_node_560(P647 e_559) {
  struct f_copy_node_560fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_559 = e_559;
F->x_1591 = NULL;
{ R648 *cell1592 = rt_alloc(sizeof(R648));
(*cell1592).name = NULL;
(*cell1592).tag = NULL;
(*cell1592).prags = NULL;
(*cell1592).labels = NULL;
(*cell1592).a = NULL;
(*cell1592).b = NULL;
(*cell1592).c = NULL;
(*cell1592).d = NULL;
(*cell1592).e = NULL;
(*cell1592).next = NULL;
F->x_1591 = cell1592;
}
(*(P647)rt_nil_check(F->x_1591)).kind = (*(P647)rt_nil_check(F->e_559)).kind;
(*(P647)rt_nil_check(F->x_1591)).line = (*(P647)rt_nil_check(F->e_559)).line;
(*(P647)rt_nil_check(F->x_1591)).ival = (*(P647)rt_nil_check(F->e_559)).ival;
(*(P647)rt_nil_check(F->x_1591)).flag = (*(P647)rt_nil_check(F->e_559)).flag;
(*(P647)rt_nil_check(F->x_1591)).name = (*(P647)rt_nil_check(F->e_559)).name;
(*(P647)rt_nil_check(F->x_1591)).tag = (*(P647)rt_nil_check(F->e_559)).tag;
(*(P647)rt_nil_check(F->x_1591)).a = (*(P647)rt_nil_check(F->e_559)).a;
(*(P647)rt_nil_check(F->x_1591)).b = (*(P647)rt_nil_check(F->e_559)).b;
(*(P647)rt_nil_check(F->x_1591)).c = (*(P647)rt_nil_check(F->e_559)).c;
(*(P647)rt_nil_check(F->x_1591)).d = (*(P647)rt_nil_check(F->e_559)).d;
F->result_ = F->x_1591;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P647 f_wrap_apply_562(P647 e_561) {
  struct f_wrap_apply_562fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_561 = e_561;
F->x_1593 = NULL;
F->x_1593 = f_nn_61((((rt_int)10LL)), (*(P647)rt_nil_check(F->e_561)).line);
(*(P647)rt_nil_check(F->x_1593)).a = F->e_561;
F->result_ = F->x_1593;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_564(rstr *s_563) {
  struct f_c_string_564fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_563 = s_563;
F->n_1594 = ((rt_int)0LL);
{ rt_int lo1596 = ((rt_int)1LL), hi1597 = ((*F->s_563)).len;
for (rt_int it1598 = lo1596; it1598 <= hi1597; it1598++) {
F->i_1595 = it1598;
if (((rt_str_get((*F->s_563), F->i_1595) == 92) || (rt_str_get((*F->s_563), F->i_1595) == 63))) {
F->n_1594 = rt_add(F->n_1594, ((rt_int)1LL));
}
}
}
{
F->r_1599 = rt_str_new(rt_add(rt_add(((*F->s_563)).len, F->n_1594), ((rt_int)2LL)));
F->j_1600 = ((rt_int)1LL);
(*rt_str_at(&F->r_1599, ((rt_int)1LL))) = 34;
{ rt_int lo1602 = ((rt_int)1LL), hi1603 = ((*F->s_563)).len;
for (rt_int it1604 = lo1602; it1604 <= hi1603; it1604++) {
F->i_1601 = it1604;
F->j_1600 = rt_add(F->j_1600, ((rt_int)1LL));
if (((rt_str_get((*F->s_563), F->i_1601) == 92) || (rt_str_get((*F->s_563), F->i_1601) == 63))) {
(*rt_str_at(&F->r_1599, F->j_1600)) = 92;
F->j_1600 = rt_add(F->j_1600, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1599, F->j_1600)) = rt_str_get((*F->s_563), F->i_1601);
}
}
(*rt_str_at(&F->r_1599, rt_add(F->j_1600, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1599;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P651 f_enum_type_of_567(rstr *lit_565, rt_int line_566) {
  struct f_enum_type_of_567fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_565 = lit_565;
F->line_566 = line_566;
F->y_1605 = NULL;
F->y_1605 = g_scope_stack_684;
F->c_1606 = NULL;
if ((f_lit_index_230((*(P651)rt_nil_check(g_ty_ascii_725)).lits, &(*F->lit_565)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_725;
goto ret_;
}
while ((F->y_1605 != NULL)) {
if ((((((*(P655)rt_nil_check(F->y_1605)).kind == (((rt_int)6LL))) || ((*(P655)rt_nil_check(F->y_1605)).kind == (((rt_int)5LL)))) && ((*(P655)rt_nil_check(F->y_1605)).st != NULL)) && ((*(P647)rt_nil_check((*(P655)rt_nil_check(F->y_1605)).st)).kind == (((rt_int)72LL))))) {
if ((f_lit_index_230((*(P647)rt_nil_check((*(P655)rt_nil_check(F->y_1605)).st)).a, &(*F->lit_565)) >= ((rt_int)0LL))) {
if (((*(P655)rt_nil_check(F->y_1605)).kind == (((rt_int)5LL)))) {
F->st_1607 = NULL;
F->st_1607 = f_nn_61((((rt_int)80LL)), F->line_566);
(*(P647)rt_nil_check(F->st_1607)).name = (*(P655)rt_nil_check(F->y_1605)).name;
F->result_ = f_resolve_subtype_233(F->st_1607, &F->c_1606);
goto ret_;
}
F->result_ = f_resolve_subtype_233((*(P655)rt_nil_check(F->y_1605)).st, &F->c_1606);
goto ret_;
}
}
F->y_1605 = (*(P655)rt_nil_check(F->y_1605)).stack;
}
f_fail_23(F->line_566, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_565)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_570(P647 e_568, P651 *t_569) {
  struct f_attribute_570fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_568 = e_568;
F->t_569 = t_569;
F->t_569v = *F->t_569;
F->bt_1608 = NULL;
F->c_1609 = NULL;
F->t_569v = g_ty_int_722;
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_568)).name)), rt_str("LEN", 3))) {
F->base_1610 = NULL;
F->base_1610 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_555((*(P647)rt_nil_check(F->e_568)).a, NULL, &F->bt_1608); b_; }));
if (((*(P651)rt_nil_check(F->bt_1608)).kind == (((rt_int)8LL)))) {
f_finish_ptr_345(F->bt_1608);
F->base_1610 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_520(&(*(P642)rt_nil_check(F->base_1610)), F->bt_1608); b_; }));
F->bt_1608 = (*(P651)rt_nil_check(F->bt_1608)).target;
}
if (((*(P651)rt_nil_check(F->bt_1608)).kind != (((rt_int)5LL)))) {
f_fail_23((*(P647)rt_nil_check(F->e_568)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P642)rt_nil_check(F->base_1610))), rt_str(").len", 5));
goto ret_;
}
if (((*(P647)rt_nil_check((*(P647)rt_nil_check(F->e_568)).a)).kind == (((rt_int)7LL)))) {
F->y_1611 = NULL;
F->y_1611 = f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->e_568)).a)).name)));
if (((F->y_1611 != NULL) && (((*(P655)rt_nil_check(F->y_1611)).kind == (((rt_int)6LL))) || ((*(P655)rt_nil_check(F->y_1611)).kind == (((rt_int)5LL)))))) {
F->st_1612 = NULL;
F->st_1612 = f_nn_61((((rt_int)80LL)), (*(P647)rt_nil_check(F->e_568)).line);
(*(P647)rt_nil_check(F->st_1612)).name = (*(P647)rt_nil_check((*(P647)rt_nil_check(F->e_568)).a)).name;
F->t_569v = f_resolve_subtype_233(F->st_1612, &F->c_1609);
if (((*(P651)rt_nil_check(F->t_569v)).kind == (((rt_int)4LL)))) {
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_568)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_67((*(P651)rt_nil_check(F->t_569v)).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P649)rt_nil_check(F->c_1609)).lo != NULL)) {
if (rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_568)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P642)rt_nil_check((*(P649)rt_nil_check(F->c_1609)).lo));
goto ret_;
}
F->result_ = (*(P642)rt_nil_check((*(P649)rt_nil_check(F->c_1609)).hi));
goto ret_;
}
}
}
f_fail_23((*(P647)rt_nil_check(F->e_568)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_568)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_569) = F->t_569v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_574(P647 e_571, P651 want_572, P651 *t_573) {
  struct f_gbinop_574fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_571 = e_571;
F->want_572 = want_572;
F->t_573 = t_573;
F->t_573v = *F->t_573;
F->op_1613 = NULL;
F->op_1613 = (*(P647)rt_nil_check(F->e_571)).name;
F->ta_1614 = NULL;
F->tb_1615 = NULL;
F->hint_1616 = NULL;
F->uy_1617 = NULL;
F->t_573v = g_ty_bool_723;
if ((f_lookup_153(&(*(P642)rt_nil_check(F->op_1613))) != NULL)) {
F->l_1618 = NULL;
F->r_1619 = NULL;
F->l_1618 = f_copy_node_560((*(P647)rt_nil_check(F->e_571)).a);
F->r_1619 = f_copy_node_560((*(P647)rt_nil_check(F->e_571)).b);
(*(P647)rt_nil_check(F->l_1618)).next = F->r_1619;
F->uy_1617 = f_user_op_609(&(*(P642)rt_nil_check(F->op_1613)), F->l_1618);
if ((F->uy_1617 != NULL)) {
F->call_1620 = NULL;
F->call_1620 = f_nn_61((((rt_int)10LL)), (*(P647)rt_nil_check(F->e_571)).line);
F->fname_1621 = NULL;
F->fname_1621 = f_nn_61((((rt_int)7LL)), (*(P647)rt_nil_check(F->e_571)).line);
(*(P647)rt_nil_check(F->fname_1621)).name = F->op_1613;
(*(P647)rt_nil_check(F->call_1620)).a = F->fname_1621;
(*(P647)rt_nil_check(F->call_1620)).b = F->l_1618;
F->result_ = f_gcall_613(F->call_1620, 0, &F->t_573v);
goto ret_;
}
}
if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("IN", 2))) {
F->s_1622 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_571)).b, NULL, &F->tb_1615));
if (((*(P651)rt_nil_check(F->tb_1615)).kind != (((rt_int)16LL)))) {
f_fail_23((*(P647)rt_nil_check(F->e_571)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_1623 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_571)).a, (*(P651)rt_nil_check(F->tb_1615)).elem, &F->ta_1614));
f_check_type_220(F->ta_1614, (*(P651)rt_nil_check(F->tb_1615)).elem, (*(P647)rt_nil_check(F->e_571)).line);
F->t_573v = g_ty_bool_723;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_1623), rt_str(", ", 2)), F->s_1622), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("AND", 3)) || rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("OR", 2))) || rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("XOR", 3))) && (F->want_572 != NULL)) && ((*(P651)rt_nil_check(F->want_572)).kind == (((rt_int)16LL))))) {
F->a_1624 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_571)).a, F->want_572, &F->ta_1614));
F->b_1625 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_571)).b, F->want_572, &F->tb_1615));
f_check_type_220(F->tb_1615, F->ta_1614, (*(P647)rt_nil_check(F->e_571)).line);
F->t_573v = F->ta_1614;
if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_1624), rt_str(", ", 2)), F->b_1625), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_1624), rt_str(", ", 2)), F->b_1625), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_1624), rt_str(", ", 2)), F->b_1625), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("AND", 3)) || rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("OR", 2))) || rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("XOR", 3)))) {
F->a_1626 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_571)).a, g_ty_bool_723, &F->ta_1614));
F->b_1627 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_571)).b, g_ty_bool_723, &F->tb_1615));
f_check_type_220(F->ta_1614, g_ty_bool_723, (*(P647)rt_nil_check(F->e_571)).line);
f_check_type_220(F->tb_1615, g_ty_bool_723, (*(P647)rt_nil_check(F->e_571)).line);
if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1626), rt_str(" && ", 4)), F->b_1627), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1626), rt_str(" || ", 4)), F->b_1627), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1626), rt_str(" != ", 4)), F->b_1627), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("&", 1))) {
F->wa_1628 = NULL;
F->wb_1629 = NULL;
if (((*(P647)rt_nil_check((*(P647)rt_nil_check(F->e_571)).a)).kind == (((rt_int)4LL)))) {
F->wa_1628 = g_ty_ascii_725;
}
if (((*(P647)rt_nil_check((*(P647)rt_nil_check(F->e_571)).b)).kind == (((rt_int)4LL)))) {
F->wb_1629 = g_ty_ascii_725;
}
{
F->a_1630 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_571)).a, F->wa_1628, &F->ta_1614));
F->b_1631 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_571)).b, F->wb_1629, &F->tb_1615));
F->t_573v = g_ty_string_726;
if ((((*(P651)rt_nil_check(F->ta_1614)).kind == (((rt_int)5LL))) && ((*(P651)rt_nil_check(F->tb_1615)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_1630), rt_str(", ", 2)), F->b_1631), rt_str(")", 1));
goto ret_;
} else if ((((*(P651)rt_nil_check(F->ta_1614)).kind == (((rt_int)5LL))) && ((*(P651)rt_nil_check(F->tb_1615)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_1630), rt_str(", ", 2)), F->b_1631), rt_str(")", 1));
goto ret_;
} else if ((((*(P651)rt_nil_check(F->ta_1614)).kind == (((rt_int)4LL))) && ((*(P651)rt_nil_check(F->tb_1615)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_1630), rt_str(", ", 2)), F->b_1631), rt_str(")", 1));
goto ret_;
} else if ((((*(P651)rt_nil_check(F->ta_1614)).kind == (((rt_int)4LL))) && ((*(P651)rt_nil_check(F->tb_1615)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_1630), rt_str(", ", 2)), F->b_1631), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P647)rt_nil_check(F->e_571)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_106(&(*(P642)rt_nil_check(F->op_1613))) && (!rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("IN", 2))))) {
if (((((*(P647)rt_nil_check((*(P647)rt_nil_check(F->e_571)).a)).kind == (((rt_int)4LL))) || ((*(P647)rt_nil_check((*(P647)rt_nil_check(F->e_571)).a)).kind == (((rt_int)6LL)))) || ((*(P647)rt_nil_check((*(P647)rt_nil_check(F->e_571)).a)).kind == (((rt_int)1LL))))) {
F->dummy_1632 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_571)).b, NULL, &F->hint_1616));
}
{
F->a_1633 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_571)).a, F->hint_1616, &F->ta_1614));
F->b_1634 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_571)).b, F->ta_1614, &F->tb_1615));
F->ct_1635 = NULL;
F->ct_1635 = f_base_of_211(F->ta_1614);
F->t_573v = g_ty_bool_723;
if ((((*(P651)rt_nil_check(F->ta_1614)).kind != (((rt_int)11LL))) && ((*(P651)rt_nil_check(F->tb_1615)).kind != (((rt_int)11LL))))) {
f_check_type_220(F->tb_1615, F->ta_1614, (*(P647)rt_nil_check(F->e_571)).line);
}
if (((*(P651)rt_nil_check(F->ta_1614)).kind == (((rt_int)11LL)))) {
F->ct_1635 = f_base_of_211(F->tb_1615);
}
if (((*(P651)rt_nil_check(F->ct_1635)).kind == (((rt_int)5LL)))) {
if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_1633), rt_str(", ", 2)), F->b_1634), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_1633), rt_str(", ", 2)), F->b_1634), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_1633), rt_str(", ", 2)), F->b_1634), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_1633), rt_str(", ", 2)), F->b_1634), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_1634), rt_str(", ", 2)), F->a_1633), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_1634), rt_str(", ", 2)), F->a_1633), rt_str(")", 1));
goto ret_;
}
if (((*(P651)rt_nil_check(F->ct_1635)).kind == (((rt_int)16LL)))) {
if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_1633), rt_str(", ", 2)), F->b_1634), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_1633), rt_str(", ", 2)), F->b_1634), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_1633), rt_str(", ", 2)), F->b_1634), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_1634), rt_str(", ", 2)), F->a_1633), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P647)rt_nil_check(F->e_571)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_292(F->ct_1635)) {
if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("=", 1))) {
F->result_ = f_eq_code_304(F->ct_1635, &F->a_1633, &F->b_1634);
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_304(F->ct_1635, &F->a_1633, &F->b_1634)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P647)rt_nil_check(F->e_571)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1633), rt_str(" == ", 4)), F->b_1634), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1633), rt_str(" != ", 4)), F->b_1634), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1633), rt_str(" ", 1)), (*(P642)rt_nil_check(F->op_1613))), rt_str(" ", 1)), F->b_1634), rt_str(")", 1));
goto ret_;
}
}
{
F->a_1636 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_571)).a, F->want_572, &F->ta_1614));
F->b_1637 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->e_571)).b, F->ta_1614, &F->tb_1615));
if ((((*(P651)rt_nil_check(F->ta_1614)).kind == (((rt_int)3LL))) || ((*(P651)rt_nil_check(F->tb_1615)).kind == (((rt_int)3LL))))) {
F->t_573v = g_ty_float_724;
if (((rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("+", 1)) || rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("-", 1))) || rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1636), rt_str(" ", 1)), (*(P642)rt_nil_check(F->op_1613))), rt_str(" ", 1)), F->b_1637), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_1636), rt_str(", ", 2)), F->b_1637), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_1636), rt_str(", ", 2)), F->b_1637), rt_str(")", 1));
goto ret_;
}
}
f_check_type_220(F->ta_1614, g_ty_int_722, (*(P647)rt_nil_check(F->e_571)).line);
f_check_type_220(F->tb_1615, g_ty_int_722, (*(P647)rt_nil_check(F->e_571)).line);
F->t_573v = g_ty_int_722;
if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1636), rt_str(", ", 2)), F->b_1637), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1636), rt_str(", ", 2)), F->b_1637), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_1636), rt_str(", ", 2)), F->b_1637), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_1636), rt_str(", ", 2)), F->b_1637), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_1636), rt_str(", ", 2)), F->b_1637), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P642)rt_nil_check(F->op_1613)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_1636), rt_str(", ", 2)), F->b_1637), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P647)rt_nil_check(F->e_571)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P642)rt_nil_check(F->op_1613))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_573) = F->t_573v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_578(P647 e_575, P651 want_576, P651 *t_577) {
  struct f_constructor_578fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_575 = e_575;
F->want_576 = want_576;
F->t_577 = t_577;
F->t_577v = *F->t_577;
F->it_1638 = NULL;
F->it_1638 = (*(P647)rt_nil_check(F->e_575)).a;
F->f_1639 = NULL;
F->vt_1640 = NULL;
if (((F->want_576 != NULL) && ((*(P651)rt_nil_check(F->want_576)).kind == (((rt_int)16LL))))) {
F->s_1641 = NULL;
F->s_1641 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
F->t_577v = F->want_576;
while ((F->it_1638 != NULL)) {
F->v_1642 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->it_1638)).b, (*(P651)rt_nil_check(F->want_576)).elem, &F->vt_1640));
f_check_type_220(F->vt_1640, (*(P651)rt_nil_check(F->want_576)).elem, (*(P647)rt_nil_check(F->e_575)).line);
F->s_1641 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (*(P642)rt_nil_check(F->s_1641))), rt_str(", ", 2)), F->v_1642), rt_str(")", 1)); b_; }));
F->it_1638 = (*(P647)rt_nil_check(F->it_1638)).next;
}
F->result_ = (*(P642)rt_nil_check(F->s_1641));
goto ret_;
}
if (((F->want_576 != NULL) && ((*(P651)rt_nil_check(F->want_576)).kind == (((rt_int)15LL))))) {
f_fail_23((*(P647)rt_nil_check(F->e_575)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (*(P642)rt_nil_check((*(P651)rt_nil_check(F->want_576)).name))), rt_str(" needs the underlying type", 26)); b_; }));
}
if ((((F->want_576 != NULL) && ((*(P651)rt_nil_check(F->want_576)).kind == (((rt_int)6LL)))) && ((*(P651)rt_nil_check(F->want_576)).idx2 == NULL))) {
F->tmp_1643 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->ct_1644 = rt_str_copy(f_ctype_222(F->want_576));
F->et_1645 = rt_str_copy(f_ctype_222((*(P651)rt_nil_check(F->want_576)).elem));
F->parts_1646 = NULL;
F->t_577v = F->want_576;
if (((((F->it_1638 != NULL) && ((*(P647)rt_nil_check(F->it_1638)).a != NULL)) && ((*(P647)rt_nil_check((*(P647)rt_nil_check(F->it_1638)).a)).b != NULL)) && ((*(P647)rt_nil_check(F->it_1638)).next == NULL))) {
F->lo_1647 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check((*(P647)rt_nil_check(F->it_1638)).a)).a, (*(P651)rt_nil_check(F->want_576)).idx, &F->vt_1640));
F->hi_1648 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check((*(P647)rt_nil_check(F->it_1638)).a)).b, (*(P651)rt_nil_check(F->want_576)).idx, &F->vt_1640));
F->v_1649 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->it_1638)).b, (*(P651)rt_nil_check(F->want_576)).elem, &F->vt_1640));
f_check_type_220(F->vt_1640, (*(P651)rt_nil_check(F->want_576)).elem, (*(P647)rt_nil_check(F->e_575)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1644), rt_str(" ", 1)), F->tmp_1643), rt_str("; ", 2)), F->tmp_1643), rt_str(".lo = ", 6)), F->lo_1647), rt_str("; ", 2)), F->tmp_1643), rt_str(".hi = ", 6)), F->hi_1648), rt_str("; ", 2)), F->tmp_1643), rt_str(".lo2 = ", 7)), F->tmp_1643), rt_str(".hi2 = 1; ", 10)), F->tmp_1643), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1645), rt_str(") * (size_t)RT_CNT(", 19)), F->tmp_1643), rt_str(")); for (rt_int i_ = 0; i_ < RT_CNT(", 36)), F->tmp_1643), rt_str("); i_++) ", 9)), F->tmp_1643), rt_str(".p[i_] = ", 9)), f_copy_code_300((*(P651)rt_nil_check(F->want_576)).elem, &F->v_1649)), rt_str("; ", 2)), F->tmp_1643), rt_str("; })", 4));
goto ret_;
}
F->parts_1646 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1644), rt_str(" ", 1)), F->tmp_1643), rt_str("; ", 2)), F->tmp_1643), rt_str(".lo = 1; ", 9)), F->tmp_1643), rt_str(".hi = ", 6)), f_itos_7(f_list_len_67(F->it_1638))), rt_str("; ", 2)), F->tmp_1643), rt_str(".lo2 = ", 7)), F->tmp_1643), rt_str(".hi2 = 1; ", 10)), F->tmp_1643), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1645), rt_str(") * ", 4)), f_itos_7(rt_add(f_list_len_67(F->it_1638), ((rt_int)1LL)))), rt_str(");", 2)); b_; }));
{ rt_int lo1651 = ((rt_int)0LL), hi1652 = rt_sub(f_list_len_67((*(P647)rt_nil_check(F->e_575)).a), ((rt_int)1LL));
for (rt_int it1653 = lo1651; it1653 <= hi1652; it1653++) {
F->i_1650 = it1653;
if (((*(P647)rt_nil_check(F->it_1638)).a != NULL)) {
f_fail_23((*(P647)rt_nil_check(F->e_575)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only positional array constructors are handled", 46); b_; }));
}
{
F->v_1654 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->it_1638)).b, (*(P651)rt_nil_check(F->want_576)).elem, &F->vt_1640));
f_check_type_220(F->vt_1640, (*(P651)rt_nil_check(F->want_576)).elem, (*(P647)rt_nil_check(F->e_575)).line);
F->parts_1646 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->parts_1646)), rt_str(" ", 1)), F->tmp_1643), rt_str(".p[", 3)), f_itos_7(F->i_1650)), rt_str("] = ", 4)), f_copy_code_300((*(P651)rt_nil_check(F->want_576)).elem, &F->v_1654)), rt_str(";", 1)); b_; }));
}
F->it_1638 = (*(P647)rt_nil_check(F->it_1638)).next;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->parts_1646)), rt_str(" ", 1)), F->tmp_1643), rt_str("; })", 4));
goto ret_;
}
if (((F->want_576 == NULL) || ((*(P651)rt_nil_check(F->want_576)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P647)rt_nil_check(F->e_575)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_577v = F->want_576;
F->f_1639 = (*(P651)rt_nil_check(F->want_576)).fields;
{
F->tmp_1655 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_1656 = NULL;
F->parts_1656 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_222(F->want_576)), rt_str(" ", 1)), F->tmp_1655), rt_str(";", 1)); b_; }));
if (((f_list_len_67(F->it_1638) != ((rt_int)0LL)) && (f_list_len_67(F->it_1638) != ((rt_int)0LL)))) {
while (((F->it_1638 != NULL) && (F->f_1639 != NULL))) {
if (((((*(P647)rt_nil_check(F->it_1638)).a == NULL) || ((*(P647)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->it_1638)).a)).a)).kind != (((rt_int)7LL)))) || (!rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check((*(P647)rt_nil_check(F->it_1638)).a)).a)).name)), (*(P642)rt_nil_check((*(P653)rt_nil_check(F->f_1639)).name)))))) {
f_fail_23((*(P647)rt_nil_check(F->e_575)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P642)rt_nil_check((*(P653)rt_nil_check(F->f_1639)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_1657 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->it_1638)).b, (*(P653)rt_nil_check(F->f_1639)).t, &F->vt_1640));
f_check_type_220(F->vt_1640, (*(P653)rt_nil_check(F->f_1639)).t, (*(P647)rt_nil_check(F->e_575)).line);
F->parts_1656 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->parts_1656)), rt_str(" ", 1)), F->tmp_1655), rt_str(".", 1)), f_field_c_17(&(*(P642)rt_nil_check((*(P653)rt_nil_check(F->f_1639)).name)))), rt_str(" = ", 3)), f_copy_code_300((*(P653)rt_nil_check(F->f_1639)).t, &F->v_1657)), rt_str(";", 1)); b_; }));
}
F->it_1638 = (*(P647)rt_nil_check(F->it_1638)).next;
F->f_1639 = (*(P653)rt_nil_check(F->f_1639)).next;
}
}
if (((F->it_1638 != NULL) || (F->f_1639 != NULL))) {
f_fail_23((*(P647)rt_nil_check(F->e_575)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->parts_1656)), rt_str(" ", 1)), F->tmp_1655), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_577) = F->t_577v;
  RT_FPOP();
  return F->result_;
}

static int f_fits_581(P655 y_579, P647 args_580) {
  struct f_fits_581fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_579 = y_579;
F->args_580 = args_580;
F->a_1658 = NULL;
F->a_1658 = F->args_580;
F->pm_1659 = NULL;
F->pm_1659 = (*(P655)rt_nil_check(F->y_579)).params;
F->t_1660 = NULL;
F->saved_1661 = NULL;
F->saved_1661 = g_code_694;
F->ok_1662 = 1;
F->lv_1663 = NULL;
F->lc_1664 = NULL;
g_trial_720 = rt_add(g_trial_720, ((rt_int)1LL));
g_code_694 = f_new_buffer_24();
{ rt_frame xf1666;
if (RT_TRY(xf1666)) {
while (((F->ok_1662 && (F->a_1658 != NULL)) && (F->pm_1659 != NULL))) {
if ((((*(P657)rt_nil_check(F->pm_1659)).mode == (((rt_int)2LL))) || ((*(P657)rt_nil_check(F->pm_1659)).mode == (((rt_int)3LL))))) {
f_lvalue_528(F->a_1658, &F->lv_1663, &F->t_1660, &F->lc_1664, &F->ro_1665);
} else {
F->v_1668 = rt_str_copy(f_gexpr_555(F->a_1658, (*(P657)rt_nil_check(F->pm_1659)).t, &F->t_1660));
}
if ((!(f_same_209(F->t_1660, (*(P657)rt_nil_check(F->pm_1659)).t) || (((*(P651)rt_nil_check(F->t_1660)).kind == (((rt_int)11LL))) && ((*(P651)rt_nil_check((*(P657)rt_nil_check(F->pm_1659)).t)).kind == (((rt_int)8LL))))))) {
F->ok_1662 = 0;
}
F->a_1658 = (*(P647)rt_nil_check(F->a_1658)).next;
F->pm_1659 = (*(P657)rt_nil_check(F->pm_1659)).next;
}
if (((F->a_1658 != NULL) || (F->pm_1659 != NULL))) {
F->ok_1662 = 0;
}
RT_POP(xf1666);
} else {
RT_POP(xf1666);
int x1667 = rt_xcur;
if (0 || x1667 == ex_compile_error_1) {
F->ok_1662 = 0;
} else {
rt_raise(x1667);
}
}
}
g_trial_720 = rt_sub(g_trial_720, ((rt_int)1LL));
g_code_694 = F->saved_1661;
F->result_ = F->ok_1662;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P655 f_resolve_overload_587(rstr *name_582, P647 tt_583, P647 args_584, int is_stmt_585, rt_int line_586) {
  struct f_resolve_overload_587fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_582 = name_582;
F->tt_583 = tt_583;
F->args_584 = args_584;
F->is_stmt_585 = is_stmt_585;
F->line_586 = line_586;
F->y_1669 = NULL;
F->first_1670 = NULL;
F->n_1671 = ((rt_int)0LL);
{ rt_int lo1673 = ((rt_int)1LL), hi1674 = ((rt_int)3LL);
for (rt_int it1675 = lo1673; it1675 <= hi1674; it1675++) {
F->pass_1672 = it1675;
F->y_1669 = f_overload_chain_593(&(*F->name_582), F->pass_1672);
while ((F->y_1669 != NULL)) {
if (((rt_str_eq((*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_1669)).name)), (*F->name_582)) && (((*(P655)rt_nil_check(F->y_1669)).kind == (((rt_int)3LL))) || ((*(P655)rt_nil_check(F->y_1669)).kind == (((rt_int)4LL))))) && ((F->pass_1672 != ((rt_int)1LL)) || ((*(P655)rt_nil_check(F->y_1669)).depth >= g_gdepth_713)))) {
F->n_1671 = rt_add(F->n_1671, ((rt_int)1LL));
if ((F->first_1670 == NULL)) {
F->first_1670 = F->y_1669;
}
if ((((((*(P655)rt_nil_check(F->y_1669)).kind == (((rt_int)4LL))) == F->is_stmt_585) && f_tt_fits_590(F->y_1669, F->tt_583)) && f_fits_581(F->y_1669, F->args_584))) {
F->result_ = F->y_1669;
goto ret_;
}
}
F->y_1669 = (*(P655)rt_nil_check(F->y_1669)).chain;
}
}
}
if (f_is_builtin_595(&(*F->name_582))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_1671 > ((rt_int)1LL))) {
f_fail_23(F->line_586, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_582)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_1670;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_590(P655 y_588, P647 tt_589) {
  struct f_tt_fits_590fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_588 = y_588;
F->tt_589 = tt_589;
F->f_1676 = NULL;
F->a_1677 = NULL;
F->saved_1678 = NULL;
F->saved_1678 = g_code_694;
F->ok_1679 = 1;
if ((((*(P655)rt_nil_check(F->y_588)).decl == NULL) || ((*(P647)rt_nil_check((*(P655)rt_nil_check(F->y_588)).decl)).e == NULL))) {
F->result_ = (F->tt_589 == NULL);
goto ret_;
} else if ((F->tt_589 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_1676 = (*(P647)rt_nil_check((*(P655)rt_nil_check(F->y_588)).decl)).e;
F->a_1677 = F->tt_589;
g_trial_720 = rt_add(g_trial_720, ((rt_int)1LL));
g_code_694 = f_new_buffer_24();
{ rt_frame xf1680;
if (RT_TRY(xf1680)) {
while (((F->ok_1679 && (F->f_1676 != NULL)) && (F->a_1677 != NULL))) {
F->fc_1682 = NULL;
F->ac_1683 = NULL;
F->fst_1684 = NULL;
F->fst_1684 = f_nn_61((((rt_int)80LL)), (*(P647)rt_nil_check(F->f_1676)).line);
F->ft_1685 = NULL;
F->at_1686 = NULL;
(*(P647)rt_nil_check(F->fst_1684)).name = (*(P647)rt_nil_check(F->f_1676)).name;
F->ft_1685 = f_resolve_subtype_233(F->fst_1684, &F->fc_1682);
if (((*(P647)rt_nil_check(F->a_1677)).kind >= (((rt_int)70LL)))) {
F->at_1686 = f_resolve_subtype_233(F->a_1677, &F->ac_1683);
} else {
F->ast_1687 = NULL;
F->ast_1687 = f_nn_61((((rt_int)80LL)), (*(P647)rt_nil_check(F->a_1677)).line);
(*(P647)rt_nil_check(F->ast_1687)).name = (*(P647)rt_nil_check(F->a_1677)).name;
F->at_1686 = f_resolve_subtype_233(F->ast_1687, &F->ac_1683);
}
F->ok_1679 = f_same_209(F->ft_1685, F->at_1686);
F->f_1676 = (*(P647)rt_nil_check(F->f_1676)).next;
F->a_1677 = (*(P647)rt_nil_check(F->a_1677)).next;
}
F->ok_1679 = ((F->ok_1679 && (F->f_1676 == NULL)) && (F->a_1677 == NULL));
RT_POP(xf1680);
} else {
RT_POP(xf1680);
int x1681 = rt_xcur;
if (0 || x1681 == ex_compile_error_1) {
F->ok_1679 = 0;
} else {
rt_raise(x1681);
}
}
}
g_trial_720 = rt_sub(g_trial_720, ((rt_int)1LL));
g_code_694 = F->saved_1678;
F->result_ = F->ok_1679;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P655 f_overload_chain_593(rstr *name_591, rt_int pass_592) {
  struct f_overload_chain_593fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_591 = name_591;
F->pass_592 = pass_592;
if (((g_genv_681 == NULL) && (F->pass_592 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_592 == ((rt_int)2LL))) {
F->result_ = (*(P659)rt_nil_check(g_genv_681)).p[rt_index(f_hash_151(&(*F->name_591)), (*(P659)rt_nil_check(g_genv_681)).lo, (*(P659)rt_nil_check(g_genv_681)).hi) - (*(P659)rt_nil_check(g_genv_681)).lo];
goto ret_;
}
F->result_ = (*(P659)rt_nil_check(g_table_680)).p[rt_index(f_hash_151(&(*F->name_591)), (*(P659)rt_nil_check(g_table_680)).lo, (*(P659)rt_nil_check(g_table_680)).hi) - (*(P659)rt_nil_check(g_table_680)).lo];
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_595(rstr *n_594) {
  struct f_is_builtin_595fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_594 = n_594;
F->result_ = (((((((((((((((rt_str_eq((*F->n_594), rt_str("ABS", 3)) || rt_str_eq((*F->n_594), rt_str("POS", 3))) || rt_str_eq((*F->n_594), rt_str("SUCC", 4))) || rt_str_eq((*F->n_594), rt_str("PRED", 4))) || rt_str_eq((*F->n_594), rt_str("SQRT", 4))) || rt_str_eq((*F->n_594), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_594), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_594), rt_str("WRITE", 5))) || rt_str_eq((*F->n_594), rt_str("READLN", 6))) || rt_str_eq((*F->n_594), rt_str("SEND", 4))) || rt_str_eq((*F->n_594), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_594), rt_str("DELAY", 5))) || rt_str_eq((*F->n_594), rt_str("TIME", 4))) || rt_str_eq((*F->n_594), rt_str("CNVT", 4))) || rt_str_eq((*F->n_594), rt_str("FORMAT", 6))) || f_is_low_level_597(&(*F->n_594)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_597(rstr *n_596) {
  struct f_is_low_level_597fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_596 = n_596;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_596), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_596), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_596), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_596), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_596), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_596), rt_str("LOCK", 4))) || rt_str_eq((*F->n_596), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_596), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_596), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_596), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_596), rt_str("WAITING", 7))) || rt_str_eq((*F->n_596), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_596), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_596), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_596), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_596), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_596), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_596), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_596), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_601(P647 tt_598, rt_int line_599, P651 *t_600) {
  struct f_me_high_601fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_598 = tt_598;
F->line_599 = line_599;
F->t_600 = t_600;
F->t_600v = *F->t_600;
F->c_1688 = NULL;
if ((F->tt_598 == NULL)) {
f_fail_23(F->line_599, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_600v = f_resolve_subtype_233(F->tt_598, &F->c_1688);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_222(F->t_600v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_603(F->t_600v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_600) = F->t_600v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_603(P651 t_602) {
  struct f_type_tag_603fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_602 = t_602;
if (((*(P651)rt_nil_check(F->t_602)).name != NULL)) {
F->result_ = (*(P642)rt_nil_check((*(P651)rt_nil_check(F->t_602)).name));
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_606(P647 e_604, rstr *name_605) {
  struct f_lock_ref_606fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_604 = e_604;
F->name_605 = name_605;
F->lv_1689 = NULL;
F->t_1690 = NULL;
F->c_1691 = NULL;
f_lvalue_528(F->e_604, &F->lv_1689, &F->t_1690, &F->c_1691, &F->ro_1692);
if (((*(P651)rt_nil_check(F->t_1690)).kind != (((rt_int)13LL)))) {
f_fail_23((*(P647)rt_nil_check(F->e_604)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_605), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (*(P642)rt_nil_check(F->lv_1689)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P655 f_user_op_609(rstr *op_607, P647 args_608) {
  struct f_user_op_609fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_607 = op_607;
F->args_608 = args_608;
F->y_1693 = NULL;
{ rt_int lo1695 = ((rt_int)1LL), hi1696 = ((rt_int)3LL);
for (rt_int it1697 = lo1695; it1697 <= hi1696; it1697++) {
F->pass_1694 = it1697;
F->y_1693 = f_overload_chain_593(&(*F->op_607), F->pass_1694);
while ((F->y_1693 != NULL)) {
if ((((rt_str_eq((*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_1693)).name)), (*F->op_607)) && ((*(P655)rt_nil_check(F->y_1693)).kind == (((rt_int)3LL)))) && ((F->pass_1694 != ((rt_int)1LL)) || ((*(P655)rt_nil_check(F->y_1693)).depth >= g_gdepth_713))) && f_fits_581(F->y_1693, F->args_608))) {
F->result_ = F->y_1693;
goto ret_;
}
F->y_1693 = (*(P655)rt_nil_check(F->y_1693)).chain;
}
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gcall_613(P647 e_610, int is_stmt_611, P651 *t_612) {
  struct f_gcall_613fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_610 = e_610;
F->is_stmt_611 = is_stmt_611;
F->t_612 = t_612;
F->t_612v = *F->t_612;
F->fn_1698 = NULL;
F->fn_1698 = (*(P647)rt_nil_check(F->e_610)).a;
F->tt_1699 = NULL;
F->y_1700 = NULL;
F->args_1701 = NULL;
F->args_1701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_1702 = NULL;
F->a_1702 = (*(P647)rt_nil_check(F->e_610)).b;
F->pm_1703 = NULL;
F->lt_1704 = NULL;
F->vt_1705 = NULL;
F->lv_1706 = NULL;
F->lc_1707 = NULL;
if (((*(P647)rt_nil_check(F->fn_1698)).kind == (((rt_int)12LL)))) {
F->tt_1699 = (*(P647)rt_nil_check(F->fn_1698)).b;
F->fn_1698 = (*(P647)rt_nil_check(F->fn_1698)).a;
}
F->y_1700 = f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1698)).name)));
if ((F->y_1700 == NULL)) {
F->result_ = f_builtin_638(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1698)).name)), F->tt_1699, (*(P647)rt_nil_check(F->e_610)).b, (*(P647)rt_nil_check(F->e_610)).line, F->is_stmt_611, &F->t_612v);
goto ret_;
}
if (((((*(P655)rt_nil_check(F->y_1700)).kind != (((rt_int)3LL))) && ((*(P655)rt_nil_check(F->y_1700)).kind != (((rt_int)4LL)))) && ((*(P655)rt_nil_check(F->y_1700)).kind != (((rt_int)10LL))))) {
F->alt_1709 = NULL;
F->alt_1709 = f_resolve_overload_587(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1698)).name)), F->tt_1699, (*(P647)rt_nil_check(F->e_610)).b, F->is_stmt_611, (*(P647)rt_nil_check(F->e_610)).line);
if ((F->alt_1709 != NULL)) {
F->y_1700 = F->alt_1709;
} else if (f_is_builtin_595(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1698)).name)))) {
F->result_ = f_builtin_638(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1698)).name)), F->tt_1699, (*(P647)rt_nil_check(F->e_610)).b, (*(P647)rt_nil_check(F->e_610)).line, F->is_stmt_611, &F->t_612v);
goto ret_;
}
}
if (((*(P655)rt_nil_check(F->y_1700)).kind == (((rt_int)10LL)))) {
F->y_1700 = f_instantiate_507(F->y_1700, F->tt_1699, (*(P647)rt_nil_check(F->e_610)).b, (*(P647)rt_nil_check(F->e_610)).line);
} else if ((((*(P655)rt_nil_check(F->y_1700)).kind == (((rt_int)3LL))) || ((*(P655)rt_nil_check(F->y_1700)).kind == (((rt_int)4LL))))) {
F->y_1700 = f_resolve_overload_587(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1698)).name)), F->tt_1699, (*(P647)rt_nil_check(F->e_610)).b, F->is_stmt_611, (*(P647)rt_nil_check(F->e_610)).line);
if ((F->y_1700 == NULL)) {
F->result_ = f_builtin_638(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1698)).name)), F->tt_1699, (*(P647)rt_nil_check(F->e_610)).b, (*(P647)rt_nil_check(F->e_610)).line, F->is_stmt_611, &F->t_612v);
goto ret_;
}
}
if ((((*(P655)rt_nil_check(F->y_1700)).kind != (((rt_int)3LL))) && ((*(P655)rt_nil_check(F->y_1700)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P647)rt_nil_check(F->e_610)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1698)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_627(F->y_1700, (*(P647)rt_nil_check(F->e_610)).line);
if ((F->is_stmt_611 && ((*(P655)rt_nil_check(F->y_1700)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P647)rt_nil_check(F->e_610)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1698)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_611) && ((*(P655)rt_nil_check(F->y_1700)).kind != (((rt_int)3LL))))) {
f_fail_23((*(P647)rt_nil_check(F->e_610)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1698)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_1703 = (*(P655)rt_nil_check(F->y_1700)).params;
if (((*(P655)rt_nil_check(F->y_1700)).level > ((rt_int)0LL))) {
F->args_1701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1711 = ((rt_int)1LL), hi1712 = rt_sub(g_cur_level_697, (*(P655)rt_nil_check(F->y_1700)).level);
for (rt_int it1713 = lo1711; it1713 <= hi1712; it1713++) {
F->i_1710 = it1713;
F->args_1701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->args_1701)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_1702 != NULL) && (F->pm_1703 != NULL))) {
if ((((*(P642)rt_nil_check(F->args_1701))).len > ((rt_int)0LL))) {
F->args_1701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->args_1701)), rt_str(", ", 2)); b_; }));
}
if ((((*(P657)rt_nil_check(F->pm_1703)).mode == (((rt_int)2LL))) || ((*(P657)rt_nil_check(F->pm_1703)).mode == (((rt_int)3LL))))) {
f_lvalue_528(F->a_1702, &F->lv_1706, &F->lt_1704, &F->lc_1707, &F->ro_1708);
if (F->ro_1708) {
f_fail_23((*(P647)rt_nil_check(F->e_610)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check((*(P657)rt_nil_check(F->pm_1703)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_220(F->lt_1704, (*(P657)rt_nil_check(F->pm_1703)).t, (*(P647)rt_nil_check(F->e_610)).line);
F->args_1701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->args_1701)), rt_str("&", 1)), (*(P642)rt_nil_check(F->lv_1706))), f_actual_bounds_631((*(P657)rt_nil_check(F->pm_1703)).t, F->lt_1704, F->lc_1707)); b_; }));
} else if ((((*(P657)rt_nil_check(F->pm_1703)).mode == (((rt_int)4LL))) && f_is_lvalue_522(F->a_1702))) {
f_lvalue_528(F->a_1702, &F->lv_1706, &F->lt_1704, &F->lc_1707, &F->ro_1708);
f_check_type_220(F->lt_1704, (*(P657)rt_nil_check(F->pm_1703)).t, (*(P647)rt_nil_check(F->e_610)).line);
F->args_1701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->args_1701)), rt_str("&", 1)), (*(P642)rt_nil_check(F->lv_1706))), f_actual_bounds_631((*(P657)rt_nil_check(F->pm_1703)).t, F->lt_1704, F->lc_1707)); b_; }));
} else if (((*(P657)rt_nil_check(F->pm_1703)).mode == (((rt_int)4LL)))) {
F->v_1714 = rt_str_copy(f_gexpr_555(F->a_1702, (*(P657)rt_nil_check(F->pm_1703)).t, &F->vt_1705));
F->ct_1715 = rt_str_copy(f_ctype_222((*(P657)rt_nil_check(F->pm_1703)).t));
f_check_type_220(F->vt_1705, (*(P657)rt_nil_check(F->pm_1703)).t, (*(P647)rt_nil_check(F->e_610)).line);
F->args_1701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->args_1701)), rt_str("({ ", 3)), F->ct_1715), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1715), rt_str(")); *b_ = ", 10)), F->v_1714), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_176((*(P657)rt_nil_check(F->pm_1703)).t)) {
F->args_1701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->args_1701)), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_1716 = rt_str_copy(f_gexpr_555(F->a_1702, (*(P657)rt_nil_check(F->pm_1703)).t, &F->vt_1705));
f_check_type_220(F->vt_1705, (*(P657)rt_nil_check(F->pm_1703)).t, (*(P647)rt_nil_check(F->e_610)).line);
F->args_1701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P642)rt_nil_check(F->args_1701)), F->v_1716); b_; }));
}
F->a_1702 = (*(P647)rt_nil_check(F->a_1702)).next;
F->pm_1703 = (*(P657)rt_nil_check(F->pm_1703)).next;
}
if (((F->a_1702 != NULL) || (F->pm_1703 != NULL))) {
f_fail_23((*(P647)rt_nil_check(F->e_610)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check((*(P647)rt_nil_check(F->fn_1698)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_67((*(P647)rt_nil_check(F->e_610)).b), f_list_len_67(F->a_1702)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_612v = (*(P655)rt_nil_check(F->y_1700)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_1700)).cname)), rt_str("(", 1)), (*(P642)rt_nil_check(F->args_1701))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_612) = F->t_612v;
  RT_FPOP();
  return F->result_;
}

static P665 f_requires_615(P655 y_614) {
  struct f_requires_615fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_614 = y_614;
if ((*(P655)rt_nil_check(F->y_614)).reqdone) {
F->result_ = (*(P655)rt_nil_check(F->y_614)).reqs;
goto ret_;
}
(*(P655)rt_nil_check(F->y_614)).reqdone = 1;
if ((((*(P655)rt_nil_check(F->y_614)).decl != NULL) && ((((*(P647)rt_nil_check((*(P655)rt_nil_check(F->y_614)).decl)).kind == (((rt_int)45LL))) || ((*(P647)rt_nil_check((*(P655)rt_nil_check(F->y_614)).decl)).kind == (((rt_int)46LL)))) || ((*(P647)rt_nil_check((*(P655)rt_nil_check(F->y_614)).decl)).kind == (((rt_int)50LL)))))) {
F->imp_1717 = NULL;
F->imp_1717 = (*(P647)rt_nil_check((*(P655)rt_nil_check(F->y_614)).decl)).d;
while ((F->imp_1717 != NULL)) {
f_add_req_618(F->y_614, &(*(P642)rt_nil_check((*(P647)rt_nil_check(F->imp_1717)).name)));
F->imp_1717 = (*(P647)rt_nil_check(F->imp_1717)).next;
}
f_require_calls_621(F->y_614, (*(P647)rt_nil_check((*(P655)rt_nil_check(F->y_614)).decl)).c);
}
F->result_ = (*(P655)rt_nil_check(F->y_614)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_618(P655 y_616, rstr *name_617) {
  struct f_add_req_618fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_616 = y_616;
F->name_617 = name_617;
F->l_1718 = NULL;
if ((!f_seen_name_311((*(P655)rt_nil_check(F->y_616)).reqs, &(*F->name_617)))) {
{ R666 *cell1719 = rt_alloc(sizeof(R666));
(*cell1719).s = NULL;
(*cell1719).next = NULL;
F->l_1718 = cell1719;
}
(*(P665)rt_nil_check(F->l_1718)).s = f_mk_3(&(*F->name_617));
(*(P665)rt_nil_check(F->l_1718)).next = (*(P655)rt_nil_check(F->y_616)).reqs;
(*(P655)rt_nil_check(F->y_616)).reqs = F->l_1718;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_621(P655 y_619, P647 e_620) {
  struct f_require_calls_621fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_619 = y_619;
F->e_620 = e_620;
F->x_1720 = NULL;
F->x_1720 = F->e_620;
while ((F->x_1720 != NULL)) {
if (((((((*(P647)rt_nil_check(F->x_1720)).kind == (((rt_int)45LL))) || ((*(P647)rt_nil_check(F->x_1720)).kind == (((rt_int)46LL)))) || ((*(P647)rt_nil_check(F->x_1720)).kind == (((rt_int)50LL)))) || ((*(P647)rt_nil_check(F->x_1720)).kind == (((rt_int)47LL)))) || ((*(P647)rt_nil_check(F->x_1720)).kind == (((rt_int)51LL))))) {
F->x_1720 = (*(P647)rt_nil_check(F->x_1720)).next;
} else {
F->callee_1721 = NULL;
if ((((((*(P647)rt_nil_check(F->x_1720)).kind == (((rt_int)10LL))) || ((*(P647)rt_nil_check(F->x_1720)).kind == (((rt_int)21LL)))) && ((*(P647)rt_nil_check(F->x_1720)).a != NULL)) && ((*(P647)rt_nil_check((*(P647)rt_nil_check(F->x_1720)).a)).kind == (((rt_int)7LL))))) {
F->callee_1721 = (*(P647)rt_nil_check(F->x_1720)).a;
}
if ((F->callee_1721 != NULL)) {
F->z_1722 = NULL;
F->z_1722 = f_lookup_153(&(*(P642)rt_nil_check((*(P647)rt_nil_check(F->callee_1721)).name)));
if ((((F->z_1722 != NULL) && (F->z_1722 != F->y_619)) && (((*(P655)rt_nil_check(F->z_1722)).kind == (((rt_int)4LL))) || ((*(P655)rt_nil_check(F->z_1722)).kind == (((rt_int)3LL)))))) {
F->l_1723 = NULL;
F->l_1723 = f_requires_615(F->z_1722);
while ((F->l_1723 != NULL)) {
f_add_req_618(F->y_619, &(*(P642)rt_nil_check((*(P665)rt_nil_check(F->l_1723)).s)));
F->l_1723 = (*(P665)rt_nil_check(F->l_1723)).next;
}
}
}
if (((*(P647)rt_nil_check(F->x_1720)).a != NULL)) {
f_require_calls_621(F->y_619, (*(P647)rt_nil_check(F->x_1720)).a);
}
if (((*(P647)rt_nil_check(F->x_1720)).b != NULL)) {
f_require_calls_621(F->y_619, (*(P647)rt_nil_check(F->x_1720)).b);
}
if (((*(P647)rt_nil_check(F->x_1720)).c != NULL)) {
f_require_calls_621(F->y_619, (*(P647)rt_nil_check(F->x_1720)).c);
}
F->x_1720 = (*(P647)rt_nil_check(F->x_1720)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_624(P647 elems_622, rstr *name_623) {
  struct f_declared_in_624fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_622 = elems_622;
F->name_623 = name_623;
F->e_1724 = NULL;
F->e_1724 = F->elems_622;
while ((F->e_1724 != NULL)) {
if (((((*(P647)rt_nil_check(F->e_1724)).kind == (((rt_int)40LL))) || ((*(P647)rt_nil_check(F->e_1724)).kind == (((rt_int)41LL)))) && rt_str_eq((*(P642)rt_nil_check((*(P647)rt_nil_check(F->e_1724)).name)), (*F->name_623)))) {
F->result_ = 1;
goto ret_;
}
F->e_1724 = (*(P647)rt_nil_check(F->e_1724)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_627(P655 y_625, rt_int line_626) {
  struct f_check_requires_627fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_625 = y_625;
F->line_626 = line_626;
F->l_1725 = NULL;
F->l_1725 = f_requires_615(F->y_625);
if ((((*(P655)rt_nil_check(F->y_625)).home == NULL) || ((*(P655)rt_nil_check(F->y_625)).level != g_cur_level_697))) {
goto ret_;
}
while ((F->l_1725 != NULL)) {
F->z_1726 = NULL;
F->z_1726 = f_lookup_153(&(*(P642)rt_nil_check((*(P665)rt_nil_check(F->l_1725)).s)));
if ((f_declared_in_624((*(P655)rt_nil_check(F->y_625)).home, &(*(P642)rt_nil_check((*(P665)rt_nil_check(F->l_1725)).s))) && ((F->z_1726 == NULL) || ((*(P655)rt_nil_check(F->z_1726)).depth < (*(P655)rt_nil_check(F->y_625)).depth)))) {
f_fail_23(F->line_626, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check((*(P655)rt_nil_check(F->y_625)).name)), rt_str(" requires ", 10)), (*(P642)rt_nil_check((*(P665)rt_nil_check(F->l_1725)).s))), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_1725 = (*(P665)rt_nil_check(F->l_1725)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_actual_bounds_631(P651 ft_628, P651 t_629, P649 c_630) {
  struct f_actual_bounds_631fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_628 = ft_628;
F->t_629 = t_629;
F->c_630 = c_630;
if ((!f_scalar_kind_176(F->ft_628))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_188(F->t_629, F->c_630)), rt_str(", ", 2)), f_sub_hi_191(F->t_629, F->c_630));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_638(rstr *name_632, P647 tt_633, P647 args_634, rt_int line_635, int is_stmt_636, P651 *t_637) {
  struct f_builtin_638fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_632 = name_632;
F->tt_633 = tt_633;
F->args_634 = args_634;
F->line_635 = line_635;
F->is_stmt_636 = is_stmt_636;
F->t_637 = t_637;
F->t_637v = *F->t_637;
F->at_1727 = NULL;
F->n_1728 = f_list_len_67(F->args_634);
F->t_637v = g_ty_void_727;
if (((rt_str_eq((*F->name_632), rt_str("POS", 3)) || rt_str_eq((*F->name_632), rt_str("SUCC", 4))) || rt_str_eq((*F->name_632), rt_str("PRED", 4)))) {
F->a_1729 = rt_str_copy(f_gexpr_555(F->args_634, NULL, &F->at_1727));
if (rt_str_eq((*F->name_632), rt_str("POS", 3))) {
if (((*(P651)rt_nil_check(f_base_of_211(F->at_1727))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_637v = g_ty_int_722;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1729), rt_str(") + 1)", 6));
goto ret_;
}
F->t_637v = F->at_1727;
if (((*(P651)rt_nil_check(F->at_1727)).kind == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_632), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1729), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1729), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_632), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1729), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P651)rt_nil_check(f_base_of_211(F->at_1727))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1729), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P651)rt_nil_check(f_base_of_211(F->at_1727))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_632), rt_str("SQRT", 4)) || rt_str_eq((*F->name_632), rt_str("SIN", 3))) || rt_str_eq((*F->name_632), rt_str("COS", 3))) || rt_str_eq((*F->name_632), rt_str("EXP", 3))) || rt_str_eq((*F->name_632), rt_str("LN", 2))) || rt_str_eq((*F->name_632), rt_str("FLOOR", 5)))) {
F->a_1730 = rt_str_copy(f_gexpr_555(F->args_634, g_ty_float_724, &F->at_1727));
F->t_637v = g_ty_float_724;
if (rt_str_eq((*F->name_632), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_1730), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_632)), rt_str("(", 1)), F->a_1730), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("IFLOAT", 6))) {
F->a_1731 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->args_634)).next, g_ty_int_722, &F->at_1727));
F->t_637v = g_ty_float_724;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_1731), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("IFIX", 4))) {
F->a_1732 = rt_str_copy(f_gexpr_555(F->args_634, g_ty_float_724, &F->at_1727));
F->t_637v = g_ty_int_722;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1732), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("FORMAT", 6))) {
F->a_1733 = rt_str_copy(f_gexpr_555(F->args_634, g_ty_float_724, &F->at_1727));
F->n1_1734 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->args_634)).next, g_ty_int_722, &F->at_1727));
F->m1_1735 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check((*(P647)rt_nil_check(F->args_634)).next)).next, g_ty_int_722, &F->at_1727));
F->t_637v = g_ty_string_726;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_1733), rt_str(", ", 2)), F->n1_1734), rt_str(", ", 2)), F->m1_1735), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("ABS", 3))) {
F->a_1736 = rt_str_copy(f_gexpr_555(F->args_634, NULL, &F->at_1727));
F->t_637v = F->at_1727;
if (((*(P651)rt_nil_check(F->at_1727)).kind == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_1736), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_1736), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("CNVT", 4))) {
if ((F->tt_633 == NULL)) {
f_fail_23(F->line_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_1737 = rt_str_copy(f_gexpr_555(F->args_634, NULL, &F->at_1727));
if ((((*(P647)rt_nil_check(F->tt_633)).kind == (((rt_int)73LL))) && ((*(P651)rt_nil_check(F->at_1727)).kind == (((rt_int)1LL))))) {
F->t_637v = g_ty_string_726;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_1737), rt_str(")", 1));
goto ret_;
} else if ((((*(P647)rt_nil_check(F->tt_633)).kind == (((rt_int)73LL))) && ((*(P651)rt_nil_check(F->at_1727)).kind == (((rt_int)3LL))))) {
F->t_637v = g_ty_string_726;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_1737), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P647)rt_nil_check(F->tt_633)).kind == (((rt_int)73LL))) && ((*(P651)rt_nil_check(F->at_1727)).kind == (((rt_int)2LL))))) {
F->t_637v = g_ty_string_726;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_1737), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P647)rt_nil_check(F->tt_633)).kind == (((rt_int)70LL))) && ((*(P651)rt_nil_check(F->at_1727)).kind == (((rt_int)5LL))))) {
F->t_637v = g_ty_int_722;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_1737), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_632), rt_str("WRITELN", 7))) {
if ((F->n_1728 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_1738 = NULL;
F->last_1738 = F->args_634;
while (((*(P647)rt_nil_check(F->last_1738)).next != NULL)) {
F->last_1738 = (*(P647)rt_nil_check(F->last_1738)).next;
}
{
F->a_1739 = rt_str_copy(f_gexpr_555(F->last_1738, g_ty_string_726, &F->at_1727));
f_check_type_220(F->at_1727, g_ty_string_726, F->line_635);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_1739), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_632), rt_str("WRITE", 5))) {
F->a_1740 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->args_634)).next, NULL, &F->at_1727));
if (((*(P651)rt_nil_check(F->at_1727)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_1740), rt_str(")", 1));
goto ret_;
} else if (((*(P651)rt_nil_check(F->at_1727)).kind == (((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_1740), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_632), rt_str("READLN", 6))) {
F->lv_1741 = NULL;
F->lc_1742 = NULL;
F->last_1744 = NULL;
F->last_1744 = F->args_634;
while (((*(P647)rt_nil_check(F->last_1744)).next != NULL)) {
F->last_1744 = (*(P647)rt_nil_check(F->last_1744)).next;
}
f_lvalue_528(F->last_1744, &F->lv_1741, &F->at_1727, &F->lc_1742, &F->ro_1743);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P642)rt_nil_check(F->lv_1741))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("SIZELN", 6))) {
F->t_637v = g_ty_int_722;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("EOF", 3))) {
F->t_637v = g_ty_bool_723;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_632), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_632), rt_str("SYS_OUT", 7)))) {
F->t_637v = g_ty_file_728;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_632), rt_str("OPEN", 4)) || rt_str_eq((*F->name_632), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_632), rt_str("SEND", 4)) || rt_str_eq((*F->name_632), rt_str("RECEIVE", 7)))) {
F->lv_1745 = NULL;
F->dv_1746 = NULL;
F->lc_1747 = NULL;
F->mt_1749 = NULL;
F->dt_1750 = NULL;
f_lvalue_528(F->args_634, &F->lv_1745, &F->mt_1749, &F->lc_1747, &F->ro_1748);
if (((*(P651)rt_nil_check(F->mt_1749)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_632), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_632), rt_str("RECEIVE", 7))) {
f_lvalue_528((*(P647)rt_nil_check(F->args_634)).next, &F->dv_1746, &F->dt_1750, &F->lc_1747, &F->ro_1748);
f_check_type_220(F->dt_1750, (*(P651)rt_nil_check(F->mt_1749)).elem, F->line_635);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (*(P642)rt_nil_check(F->lv_1745))), rt_str(", &", 3)), (*(P642)rt_nil_check(F->dv_1746))), rt_str(")", 1));
goto ret_;
}
{
F->v_1751 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->args_634)).next, (*(P651)rt_nil_check(F->mt_1749)).elem, &F->at_1727));
f_check_type_220(F->at_1727, (*(P651)rt_nil_check(F->mt_1749)).elem, F->line_635);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_222((*(P651)rt_nil_check(F->mt_1749)).elem)), rt_str(" m_ = ", 6)), F->v_1751), rt_str("; rt_send(", 10)), (*(P642)rt_nil_check(F->lv_1745))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_632), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_632), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_1752 = NULL;
F->lc_1753 = NULL;
F->mt_1755 = NULL;
f_lvalue_528(F->args_634, &F->lv_1752, &F->mt_1755, &F->lc_1753, &F->ro_1754);
if (((*(P651)rt_nil_check(F->mt_1755)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_632), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_637v = g_ty_int_722;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_632))), rt_str("(", 1)), (*(P642)rt_nil_check(F->lv_1752))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_632), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_632), rt_str("COND_RECEIVE", 12)))) {
F->lv_1756 = NULL;
F->dv_1757 = NULL;
F->bv_1758 = NULL;
F->lc_1759 = NULL;
F->mt_1761 = NULL;
F->dt_1762 = NULL;
F->bt_1763 = NULL;
f_lvalue_528(F->args_634, &F->lv_1756, &F->mt_1761, &F->lc_1759, &F->ro_1760);
if (((*(P651)rt_nil_check(F->mt_1761)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_632), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_528((*(P647)rt_nil_check((*(P647)rt_nil_check(F->args_634)).next)).next, &F->bv_1758, &F->bt_1763, &F->lc_1759, &F->ro_1760);
f_check_type_220(F->bt_1763, g_ty_bool_723, F->line_635);
if (rt_str_eq((*F->name_632), rt_str("COND_RECEIVE", 12))) {
f_lvalue_528((*(P647)rt_nil_check(F->args_634)).next, &F->dv_1757, &F->dt_1762, &F->lc_1759, &F->ro_1760);
f_check_type_220(F->dt_1762, (*(P651)rt_nil_check(F->mt_1761)).elem, F->line_635);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->bv_1758)), rt_str(" = rt_cond_receive(", 19)), (*(P642)rt_nil_check(F->lv_1756))), rt_str(", &", 3)), (*(P642)rt_nil_check(F->dv_1757))), rt_str(")", 1));
goto ret_;
}
{
F->v_1764 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->args_634)).next, (*(P651)rt_nil_check(F->mt_1761)).elem, &F->at_1727));
f_check_type_220(F->at_1727, (*(P651)rt_nil_check(F->mt_1761)).elem, F->line_635);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_222((*(P651)rt_nil_check(F->mt_1761)).elem)), rt_str(" m_ = ", 6)), F->v_1764), rt_str("; ", 2)), (*(P642)rt_nil_check(F->bv_1758))), rt_str(" = rt_cond_send(", 16)), (*(P642)rt_nil_check(F->lv_1756))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_632), rt_str("PRIORITY", 8))) {
F->t_637v = g_ty_int_722;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_434(F->args_634)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("SET_PRIORITY", 12))) {
F->v_1765 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->args_634)).next, g_ty_int_722, &F->at_1727));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_434(F->args_634)), rt_str(", ", 2)), F->v_1765), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_434(F->args_634)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("ACTIVE", 6))) {
F->t_637v = g_ty_bool_723;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_434(F->args_634)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("DELAY", 5))) {
F->v_1766 = rt_str_copy(f_gexpr_555(F->args_634, g_ty_int_722, &F->at_1727));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_1766), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("DELAY_UNTIL", 11))) {
F->v_1767 = rt_str_copy(f_gexpr_555(F->args_634, g_ty_int_722, &F->at_1727));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_1767), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_434(F->args_634)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("TIME", 4))) {
F->t_637v = g_ty_int_722;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_632), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_632), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_632), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_632), rt_str("HOURS", 5)))) {
F->t_637v = g_ty_int_722;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_632));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("HALT", 4))) {
F->a_1768 = rt_str_copy(f_gexpr_555(F->args_634, g_ty_int_722, &F->at_1727));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_1768), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_632), rt_str("ME", 2)) && (F->tt_633 != NULL))) {
F->result_ = f_me_high_601(F->tt_633, F->line_635, &F->t_637v);
goto ret_;
} else if ((rt_str_eq((*F->name_632), rt_str("WAITING", 7)) || rt_str_eq((*F->name_632), rt_str("SUSPENDED", 9)))) {
F->t_637v = g_ty_bool_723;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_632))), rt_str("(", 1)), f_act_ref_434(F->args_634)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_632), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_632), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_632), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_632), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_632), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_632), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_632))), rt_str("(", 1)), f_act_ref_434(F->args_634)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("TASK_START", 10))) {
if ((F->n_1728 != ((rt_int)2LL))) {
f_fail_23(F->line_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_434(F->args_634)), rt_str(", ", 2)), f_act_ref_434((*(P647)rt_nil_check(F->args_634)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_632), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_632), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_632), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_632), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_632), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_632), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((F->n_1728 != ((rt_int)0LL))) {
f_fail_23(F->line_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_632), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_632))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_606(F->args_634, &(*F->name_632))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_606(F->args_634, &(*F->name_632))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("COND_LOCK", 9))) {
F->bv_1769 = NULL;
F->bc_1770 = NULL;
F->bt_1772 = NULL;
F->l_1773 = rt_str_copy(f_lock_ref_606(F->args_634, &(*F->name_632)));
f_lvalue_528((*(P647)rt_nil_check(F->args_634)).next, &F->bv_1769, &F->bt_1772, &F->bc_1770, &F->ro_1771);
f_check_type_220(F->bt_1772, g_ty_bool_723, F->line_635);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P642)rt_nil_check(F->bv_1769)), rt_str(" = rt_cond_lock(", 16)), F->l_1773), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("EXCESS_LOCKS", 12))) {
F->t_637v = g_ty_int_722;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_606(F->args_634, &(*F->name_632))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("OWNER", 5))) {
F->t_637v = g_ty_act_732;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_606(F->args_634, &(*F->name_632))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("FREE", 4))) {
F->pv_1774 = NULL;
F->pc_1775 = NULL;
F->pt_1777 = NULL;
f_lvalue_528(F->args_634, &F->pv_1774, &F->pt_1777, &F->pc_1775, &F->ro_1776);
if ((((*(P651)rt_nil_check(F->pt_1777)).kind != (((rt_int)8LL))) || F->ro_1776)) {
f_fail_23(F->line_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_705 = 1;
f_finish_ptr_345(F->pt_1777);
if (f_suppressed_356(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; }))) {
if (f_needs_fin_256((*(P651)rt_nil_check(F->pt_1777)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (*(P642)rt_nil_check(F->pv_1774))), rt_str(") { ", 4)), f_fin_code_259(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P642)rt_nil_check(F->pv_1774))), rt_str(")", 1)); b_; }), (*(P651)rt_nil_check(F->pt_1777)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (*(P642)rt_nil_check(F->pv_1774))), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (*(P642)rt_nil_check(F->pv_1774))), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_256((*(P651)rt_nil_check(F->pt_1777)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (*(P642)rt_nil_check(F->pv_1774))), rt_str("); if (", 7)), (*(P642)rt_nil_check(F->pv_1774))), rt_str(") { ", 4)), f_fin_code_259(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P642)rt_nil_check(F->pv_1774))), rt_str(")", 1)); b_; }), (*(P651)rt_nil_check(F->pt_1777)).target)), rt_str(" } rt_free((void **)&", 21)), (*(P642)rt_nil_check(F->pv_1774))), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (*(P642)rt_nil_check(F->pv_1774))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_632), rt_str("LOW_IO", 6))) {
F->dev_1778 = rt_str_copy(f_gexpr_555(F->args_634, g_ty_int_722, &F->at_1727));
F->cmd_1779 = rt_str_copy(f_gexpr_555((*(P647)rt_nil_check(F->args_634)).next, g_ty_int_722, &F->at_1727));
if ((F->n_1728 == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_1778), rt_str(", ", 2)), F->cmd_1779), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_1780 = NULL;
F->dc_1781 = NULL;
F->dt_1783 = NULL;
f_lvalue_528((*(P647)rt_nil_check((*(P647)rt_nil_check(F->args_634)).next)).next, &F->dv_1780, &F->dt_1783, &F->dc_1781, &F->ro_1782);
f_check_type_220(F->dt_1783, g_ty_int_722, F->line_635);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_1778), rt_str(", ", 2)), F->cmd_1779), rt_str(", &", 3)), (*(P642)rt_nil_check(F->dv_1780))), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_632), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_637) = F->t_637v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_640(P647 units_639) {
  struct f_translate_640fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_639 = units_639;
F->u_1784 = NULL;
F->u_1784 = F->units_639;
while ((F->u_1784 != NULL)) {
if (((*(P647)rt_nil_check(F->u_1784)).next == NULL)) {
{ R672 *cell1785 = rt_alloc(sizeof(R672));
(*cell1785).d = NULL;
(*cell1785).next = NULL;
g_caps_699 = cell1785;
}
(*(P671)rt_nil_check(g_caps_699)).d = F->u_1784;
f_declare_labels_389((*(P647)rt_nil_check(F->u_1784)).c);
f_declare_body_316((*(P647)rt_nil_check(F->u_1784)).c);
f_capsule_body_396((*(P647)rt_nil_check(F->u_1784)).c);
f_await_tasks_385((*(P647)rt_nil_check(F->u_1784)).c);
{
F->l_1786 = NULL;
F->l_1786 = F->units_639;
while ((F->l_1786 != F->u_1784)) {
{
F->w_1787 = rt_str_copy(f_waits_of_381(F->l_1786));
if (((F->w_1787).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1787);
}
}
F->l_1786 = (*(P647)rt_nil_check(F->l_1786)).next;
}
}
f_close_fins_372(NULL);
if (g_uses_findyn_707) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_326(F->u_1784);
}
F->u_1784 = (*(P647)rt_nil_check(F->u_1784)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_641(void) {
  struct f_print_program_641fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_312();
if (g_uses_free_705) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_687);
f_print_buffer_31(g_out_frames_703);
f_print_buffer_31(g_out_helpers_688);
f_print_buffer_31(g_out_protos_689);
f_print_buffer_31(g_out_globals_690);
f_print_buffer_31(g_out_funcs_691);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_704);
f_print_buffer_31(g_out_excs_693);
f_print_buffer_31(g_out_init_692);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R674(R674 *d, R674 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R674 cp_R674(R674 s) {
  R674 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R674(R674 a, R674 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R672(R672 *d, R672 s) {
  d->d = s.d;
  d->next = s.next;
}
static R672 cp_R672(R672 s) {
  R672 d = s;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R672(R672 a, R672 b) {
  return 1 && (a.d == b.d) && (a.next == b.next);
}
static void as_R670(R670 *d, R670 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R670 cp_R670(R670 s) {
  R670 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R670(R670 a, R670 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R668(R668 *d, R668 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R668 cp_R668(R668 s) {
  R668 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R668(R668 a, R668 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R666(R666 *d, R666 s) {
  d->s = s.s;
  d->next = s.next;
}
static R666 cp_R666(R666 s) {
  R666 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R666(R666 a, R666 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R664(R664 *d, R664 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
}
static R664 cp_R664(R664 s) {
  R664 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  return d;
}
static int eq_R664(R664 a, R664 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t);
}
static void as_R662(R662 *d, R662 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R662 cp_R662(R662 s) {
  R662 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R662(R662 a, R662 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A660(A660 *d, A660 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A660 cp_A660(A660 s) {
  A660 d = s; d.p = rt_alloc(sizeof(P655) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A660(A660 a, A660 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R658(R658 *d, R658 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R658 cp_R658(R658 s) {
  R658 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R658(R658 a, R658 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R656(R656 *d, R656 s) {
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
  d->env = s.env;
  d->chain = s.chain;
  d->stack = s.stack;
  d->owner = s.owner;
  d->gctx = s.gctx;
  d->mv = s.mv;
  d->reqs = s.reqs;
  d->reqdone = s.reqdone;
  d->home = s.home;
}
static R656 cp_R656(R656 s) {
  R656 d = s;
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
  d.env = s.env;
  d.chain = s.chain;
  d.stack = s.stack;
  d.owner = s.owner;
  d.gctx = s.gctx;
  d.mv = s.mv;
  d.reqs = s.reqs;
  d.reqdone = s.reqdone;
  d.home = s.home;
  return d;
}
static int eq_R656(R656 a, R656 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home);
}
static void as_R654(R654 *d, R654 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R654 cp_R654(R654 s) {
  R654 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R654(R654 a, R654 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R652(R652 *d, R652 s) {
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
  d->finalp = s.finalp;
  d->tpsyms = s.tpsyms;
  d->gen = s.gen;
  d->gbinds = s.gbinds;
  d->next = s.next;
}
static R652 cp_R652(R652 s) {
  R652 d = s;
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
  d.finalp = s.finalp;
  d.tpsyms = s.tpsyms;
  d.gen = s.gen;
  d.gbinds = s.gbinds;
  d.next = s.next;
  return d;
}
static int eq_R652(R652 a, R652 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next);
}
static void as_R650(R650 *d, R650 s) {
  d->lo = s.lo;
  d->hi = s.hi;
  d->lo2 = s.lo2;
  d->hi2 = s.hi2;
  d->slen = s.slen;
  d->mlo = s.mlo;
  d->mhi = s.mhi;
  d->hasm = s.hasm;
  d->args = s.args;
  d->dyn = s.dyn;
  d->lvl = s.lvl;
  d->prec = s.prec;
}
static R650 cp_R650(R650 s) {
  R650 d = s;
  d.lo = s.lo;
  d.hi = s.hi;
  d.lo2 = s.lo2;
  d.hi2 = s.hi2;
  d.slen = s.slen;
  d.mlo = s.mlo;
  d.mhi = s.mhi;
  d.hasm = s.hasm;
  d.args = s.args;
  d.dyn = s.dyn;
  d.lvl = s.lvl;
  d.prec = s.prec;
  return d;
}
static int eq_R650(R650 a, R650 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec);
}
static void as_R648(R648 *d, R648 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->flag = s.flag;
  d->name = s.name;
  d->tag = s.tag;
  d->prags = s.prags;
  d->labels = s.labels;
  d->a = s.a;
  d->b = s.b;
  d->c = s.c;
  d->d = s.d;
  d->e = s.e;
  d->next = s.next;
}
static R648 cp_R648(R648 s) {
  R648 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.flag = s.flag;
  d.name = s.name;
  d.tag = s.tag;
  d.prags = s.prags;
  d.labels = s.labels;
  d.a = s.a;
  d.b = s.b;
  d.c = s.c;
  d.d = s.d;
  d.e = s.e;
  d.next = s.next;
  return d;
}
static int eq_R648(R648 a, R648 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A646(A646 *d, A646 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A646 cp_A646(A646 s) {
  A646 d = s; d.p = rt_alloc(sizeof(P643) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A646(A646 a, A646 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R644(R644 *d, R644 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R644 cp_R644(R644 s) {
  R644 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R644(R644 a, R644 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_675);
  RT_ROOT(g_ntoks_676);
  RT_ROOT(g_tpos_677);
  RT_ROOT(g_src_line_678);
  RT_ROOT(g_pending_prag_679);
  RT_ROOT(g_table_680);
  RT_ROOT(g_genv_681);
  RT_ROOT(g_all_insts_682);
  RT_ROOT(g_depth_683);
  RT_ROOT(g_scope_stack_684);
  RT_ROOT(g_all_types_685);
  RT_ROOT(g_serial_686);
  RT_ROOT(g_out_types_687);
  RT_ROOT(g_out_helpers_688);
  RT_ROOT(g_out_protos_689);
  RT_ROOT(g_out_globals_690);
  RT_ROOT(g_out_funcs_691);
  RT_ROOT(g_out_init_692);
  RT_ROOT(g_out_excs_693);
  RT_ROOT(g_code_694);
  RT_ROOT(g_fields_buf_695);
  RT_ROOT(g_in_func_696);
  RT_ROOT(g_cur_level_697);
  RT_ROOT(g_fctx_698);
  RT_ROOT(g_caps_699);
  RT_ROOT(g_cap_waits_700);
  RT_ROOT(g_psub_701);
  RT_ROOT(g_st_field_702);
  RT_ROOT(g_out_frames_703);
  RT_ROOT(g_out_roots_704);
  RT_ROOT(g_uses_free_705);
  RT_ROOT(g_fins_706);
  RT_ROOT(g_uses_findyn_707);
  RT_ROOT(g_func_sym_708);
  RT_ROOT(g_func_rc_709);
  RT_ROOT(g_cap_ret_710);
  RT_ROOT(g_cap_rflag_711);
  RT_ROOT(g_ret_frames_712);
  RT_ROOT(g_gdepth_713);
  RT_ROOT(g_suppress_714);
  RT_ROOT(g_exits_715);
  RT_ROOT(g_gotos_716);
  RT_ROOT(g_frames_717);
  RT_ROOT(g_handlers_718);
  RT_ROOT(g_cleanups_719);
  RT_ROOT(g_trial_720);
  RT_ROOT(g_mcopies_721);
  RT_ROOT(g_ty_int_722);
  RT_ROOT(g_ty_bool_723);
  RT_ROOT(g_ty_float_724);
  RT_ROOT(g_ty_ascii_725);
  RT_ROOT(g_ty_string_726);
  RT_ROOT(g_ty_void_727);
  RT_ROOT(g_ty_file_728);
  RT_ROOT(g_ty_nil_729);
  RT_ROOT(g_ty_lock_730);
  RT_ROOT(g_ty_latch_731);
  RT_ROOT(g_ty_act_732);
  RT_ROOT(g_no_cons_733);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_675 = NULL;
g_ntoks_676 = ((rt_int)0LL);
g_tpos_677 = ((rt_int)1LL);
g_src_line_678 = ((rt_int)0LL);
g_pending_prag_679 = NULL;
g_table_680 = NULL;
g_genv_681 = NULL;
g_all_insts_682 = NULL;
g_depth_683 = ((rt_int)0LL);
g_scope_stack_684 = NULL;
g_all_types_685 = NULL;
g_serial_686 = ((rt_int)0LL);
g_out_types_687 = NULL;
g_out_helpers_688 = NULL;
g_out_protos_689 = NULL;
g_out_globals_690 = NULL;
g_out_funcs_691 = NULL;
g_out_init_692 = NULL;
g_out_excs_693 = NULL;
g_code_694 = NULL;
g_fields_buf_695 = NULL;
g_in_func_696 = 0;
g_cur_level_697 = ((rt_int)0LL);
g_fctx_698 = NULL;
g_caps_699 = NULL;
g_cap_waits_700 = NULL;
g_psub_701 = NULL;
g_st_field_702 = NULL;
g_out_frames_703 = NULL;
g_out_roots_704 = NULL;
g_uses_free_705 = 0;
g_fins_706 = NULL;
g_uses_findyn_707 = 0;
g_func_sym_708 = NULL;
g_func_rc_709 = NULL;
g_cap_ret_710 = NULL;
g_cap_rflag_711 = NULL;
g_ret_frames_712 = ((rt_int)0LL);
g_gdepth_713 = ((rt_int)0LL);
g_suppress_714 = NULL;
g_exits_715 = NULL;
g_gotos_716 = NULL;
g_frames_717 = ((rt_int)0LL);
g_handlers_718 = NULL;
g_cleanups_719 = NULL;
g_trial_720 = ((rt_int)0LL);
g_mcopies_721 = NULL;
g_ty_int_722 = NULL;
g_ty_bool_723 = NULL;
g_ty_float_724 = NULL;
g_ty_ascii_725 = NULL;
g_ty_string_726 = NULL;
g_ty_void_727 = NULL;
g_ty_file_728 = NULL;
g_ty_nil_729 = NULL;
g_ty_lock_730 = NULL;
g_ty_latch_731 = NULL;
g_ty_act_732 = NULL;
g_no_cons_733 = NULL;
{ A646 *cell1788 = rt_alloc(sizeof(A646));
rt_int pv1789 = ((rt_int)1000000LL);
(*cell1788).lo = ((rt_int)1LL); (*cell1788).hi = pv1789; (*cell1788).lo2 = 1; (*cell1788).hi2 = 1;
(*cell1788).p = rt_alloc(sizeof(P643) * (size_t)RT_CNT((*cell1788)));
for (rt_int i1790 = 0; i1790 < RT_CNT((*cell1788)); i1790++) {
(*cell1788).p[i1790] = NULL;
}
g_toks_675 = cell1788;
}
{ A660 *cell1791 = rt_alloc(sizeof(A660));
rt_int pv1792 = (((rt_int)4093LL));
(*cell1791).lo = ((rt_int)0LL); (*cell1791).hi = pv1792; (*cell1791).lo2 = 1; (*cell1791).hi2 = 1;
(*cell1791).p = rt_alloc(sizeof(P655) * (size_t)RT_CNT((*cell1791)));
for (rt_int i1793 = 0; i1793 < RT_CNT((*cell1791)); i1793++) {
(*cell1791).p[i1793] = NULL;
}
g_table_680 = cell1791;
}
g_out_types_687 = f_new_buffer_24();
g_out_helpers_688 = f_new_buffer_24();
g_out_protos_689 = f_new_buffer_24();
g_out_globals_690 = f_new_buffer_24();
g_out_funcs_691 = f_new_buffer_24();
g_out_init_692 = f_new_buffer_24();
g_out_excs_693 = f_new_buffer_24();
g_out_frames_703 = f_new_buffer_24();
g_out_roots_704 = f_new_buffer_24();
g_code_694 = g_out_init_692;
g_no_cons_733 = f_new_cons_174();
g_ty_int_722 = f_new_typ_173((((rt_int)1LL)));
g_ty_bool_723 = f_new_typ_173((((rt_int)2LL)));
g_ty_float_724 = f_new_typ_173((((rt_int)3LL)));
g_ty_string_726 = f_new_typ_173((((rt_int)5LL)));
g_ty_void_727 = f_new_typ_173((((rt_int)9LL)));
g_ty_file_728 = f_new_typ_173((((rt_int)10LL)));
g_ty_nil_729 = f_new_typ_173((((rt_int)11LL)));
g_ty_lock_730 = f_new_typ_173((((rt_int)13LL)));
g_ty_latch_731 = f_new_typ_173((((rt_int)13LL)));
g_ty_act_732 = f_new_typ_173((((rt_int)14LL)));
{ rt_frame xf1794;
if (RT_TRY(xf1794)) {
f_init_ascii_227();
f_read_source_58();
f_translate_640(f_program_149());
f_print_program_641();
RT_POP(xf1794);
} else {
RT_POP(xf1794);
int x1795 = rt_xcur;
if (0 || x1795 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x1795);
}
}
}
  rt_main_done();
  return 0;
}
