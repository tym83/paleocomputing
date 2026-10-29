#include "paleo.h"
#include <math.h>
typedef rstr *P716;
typedef struct R718 R718;
typedef struct R718 *P717;
struct R718 {  rt_int kind; rt_int line; rt_int ival; P716 s; P716 prags;  };
typedef struct A720 A720;
struct A720 { rt_int lo, hi, lo2, hi2; P717 *p; };
typedef A720 *P719;
typedef struct R722 R722;
typedef struct R722 *P721;
struct R722 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P716 name; P716 tag; P716 prags; P721 labels; P721 a; P721 b; P721 c; P721 d; P721 e; P721 next;  };
typedef struct R724 R724;
typedef struct R724 *P723;
typedef struct R726 R726;
typedef struct R726 *P725;
struct R726 {  P716 s; P725 next;  };
struct R724 {  P716 lo; P716 hi; P716 lo2; P716 hi2; P716 slen; rt_int mlo; rt_int mhi; int hasm; P721 args; int dyn; rt_int lvl; P716 prec; P725 bnds;  };
typedef struct R728 R728;
typedef struct R728 *P727;
typedef struct R730 R730;
typedef struct R730 *P729;
struct R730 {  P716 name; P727 t; P723 c; P721 st; P729 next;  };
typedef struct R732 R732;
typedef struct R732 *P731;
typedef struct R734 R734;
typedef struct R734 *P733;
struct R734 {  P716 name; rt_int mode; P727 t; P723 c; P716 cfield; P733 next;  };
typedef struct A736 A736;
struct A736 { rt_int lo, hi, lo2, hi2; P731 *p; };
typedef A736 *P735;
typedef struct R738 R738;
typedef struct R738 *P737;
struct R738 {  rt_int depth; P721 imps; int all_imp; P737 next;  };
typedef struct R740 R740;
typedef struct R740 *P739;
struct R740 {  rt_int kind; rt_int i; P716 s; P727 t;  };
struct R732 {  rt_int kind; P716 name; P727 t; P723 c; P716 access; P716 cname; int ro_flag; rt_int mvalue; int hasmv; P721 st; P721 decl; P733 params; P727 result; rt_int depth; rt_int level; int byref; P731 members; P731 mnext; P721 binds; P731 insts; P735 env; P731 chain; P731 stack; P731 owner; P737 gctx; P739 mv; P725 reqs; int reqdone; P721 home;  };
typedef struct R742 R742;
typedef struct R742 *P741;
struct R742 {  P727 t; P741 next;  };
struct R728 {  rt_int kind; P716 name; P721 lits; P727 elem; P727 idx; P727 idx2; P723 elemcons; P721 elemst; P727 under; P721 tparams; P721 ocap; P729 fields; P727 target; P721 decl; P716 cname; int forward; int defined; int helpers; P731 initp; P731 finalp; P731 tpsyms; P731 gen; P731 gbinds; P727 next; rt_int ndim; P741 idxs;  };
typedef struct R744 R744;
typedef struct R744 *P743;
struct R744 {  P725 head; P725 tail;  };
typedef struct R746 R746;
typedef struct R746 *P745;
struct R746 {  P716 match; P716 label; rt_int depth; P745 next;  };
typedef struct R748 R748;
typedef struct R748 *P747;
struct R748 {  P721 d; P747 next;  };
typedef struct R750 R750;
typedef struct R750 *P749;
struct R750 {  P721 d; P716 w; P749 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P716 result_;
 P716 t_811;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_814;
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
 rstr r_815;
 rt_int i_816;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_820;
 rstr w_821;
 rt_int i_822;
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
 P743 result_;
 P743 b_826;
};
struct f_put_27fr { int dummy;
 P743 b_25;
 rstr *s_26;
 P725 l_828;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P743 b_30;
 P725 l_830;
};
struct f_splice_34fr { int dummy;
 P743 a_32;
 P743 b_33;
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
 P717 t_832;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_834;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_835;
 rt_int k_836;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_840;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_841;
 P716 r_842;
 int more_843;
 rt_int k_844;
 int go_845;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_846;
 rt_int k_847;
 rstr p_848;
 int ok_849;
 int known_850;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_851;
 rt_int j_852;
 rt_int n_853;
 int c_854;
 rstr w_855;
 rt_int k_856;
 rstr w_860;
 rt_int k_861;
 rstr two_865;
};
struct f_read_source_58fr { int dummy;
 rstr line_866;
};
struct f_nn_61fr { int dummy;
 rt_int kind_59;
 rt_int line_60;
 P721 result_;
 P721 x_867;
};
struct f_append_65fr { int dummy;
 P721 *head_62;
 P721 *tail_63;
 P721 x_64;
};
struct f_list_len_67fr { int dummy;
 P721 l_66;
 rt_int result_;
 rt_int n_869;
 P721 p_870;
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
 P716 result_;
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
 P716 result_;
};
struct f_name_node_90fr { int dummy;
 P721 result_;
 P721 x_871;
};
struct f_id_list_91fr { int dummy;
 P721 result_;
 P721 head_872;
 P721 tail_873;
};
struct f_p_subtype_92fr { int dummy;
 P721 result_;
 rt_int line_874;
 P721 x_875;
 rstr w_876;
 P721 head_877;
 P721 tail_878;
 P721 head_879;
 P721 tail_880;
 int more_881;
 P721 names_882;
 P721 st_883;
 P721 cmp_884;
 P721 head_885;
 P721 tail_886;
 int more_887;
 P721 lit_888;
};
struct f_actual_params_93fr { int dummy;
 P721 result_;
 P721 head_889;
 P721 tail_890;
};
struct f_is_type_word_95fr { int dummy;
 rstr *w_94;
 int result_;
};
struct f_actual_tt_96fr { int dummy;
 P721 result_;
 P721 head_891;
 P721 tail_892;
 int more_893;
};
struct f_binop_101fr { int dummy;
 P716 op_97;
 P721 l_98;
 P721 r_99;
 rt_int line_100;
 P721 result_;
 P721 x_894;
};
struct f_expr_102fr { int dummy;
 P721 result_;
 P721 l_895;
 P716 op_896;
 rt_int line_897;
};
struct f_expr_and_103fr { int dummy;
 P721 result_;
 P721 l_898;
 rt_int line_899;
};
struct f_expr_not_104fr { int dummy;
 P721 result_;
 P721 x_900;
};
struct f_is_rel_106fr { int dummy;
 rstr *s_105;
 int result_;
};
struct f_expr_rel_107fr { int dummy;
 P721 result_;
 P721 l_901;
 P716 op_902;
 rt_int line_903;
};
struct f_expr_add_108fr { int dummy;
 P721 result_;
 P721 l_904;
 P716 op_905;
 rt_int line_906;
};
struct f_expr_mul_109fr { int dummy;
 P721 result_;
 P721 l_907;
 P716 op_908;
 rt_int line_909;
};
struct f_expr_pow_110fr { int dummy;
 P721 result_;
 P721 l_910;
 rt_int line_911;
};
struct f_expr_prefix_111fr { int dummy;
 P721 result_;
 P721 x_912;
};
struct f_postfix_112fr { int dummy;
 P721 result_;
 P721 p_913;
 rt_int line_914;
 P721 x_915;
 P721 head_916;
 P721 tail_917;
 int more_918;
 P721 lo_919;
 P721 r_920;
 P721 x_921;
 P721 x_922;
 P721 x_923;
};
struct f_primary_113fr { int dummy;
 P721 result_;
 rt_int line_924;
 P721 x_925;
 rt_int k_926;
 rstr w_927;
 P721 head_928;
 P721 tail_929;
 int more_930;
};
struct f_constructor_item_114fr { int dummy;
 P721 result_;
 rt_int line_931;
 P721 it_932;
 P721 first_933;
 P721 keys_934;
 P721 ktail_935;
 P721 lab_936;
 rt_int save_937;
 P721 more_938;
 P721 tail2_939;
 int ok_940;
 int go_941;
 P721 l2_942;
};
struct f_at_body_end_115fr { int dummy;
 int result_;
};
struct f_body_116fr { int dummy;
 P721 result_;
 P721 head_943;
 P721 tail_944;
 int stmts_945;
 P721 after_946;
 P721 x_947;
};
struct f_body_element_117fr { int dummy;
 P721 result_;
 P721 x_948;
 P716 pr_949;
 P721 p_950;
};
struct f_declaration_118fr { int dummy;
 P721 result_;
 rt_int line_951;
 P721 head_952;
 P721 tail_953;
 P721 names_954;
 P721 x_955;
};
struct f_object_decl_119fr { int dummy;
 P721 result_;
 rt_int line_956;
 int is_var_957;
 P721 names_958;
 P721 st_959;
 P721 init_960;
 P721 loc_961;
 rt_int loc_kind_962;
 P721 head_963;
 P721 tail_964;
 P721 x_965;
};
struct f_abbrev_decl_120fr { int dummy;
 P721 result_;
 P721 x_966;
};
struct f_skip_rep_121fr { int dummy;
 rt_int depth_967;
};
struct f_type_decl_122fr { int dummy;
 P721 result_;
 rt_int line_968;
 P716 name_969;
 P721 params_970;
 P721 x_971;
 P721 tts_972;
};
struct f_mode_of_124fr { int dummy;
 rstr *w_123;
 rt_int result_;
};
struct f_formal_params_125fr { int dummy;
 P721 result_;
 P721 head_973;
 P721 tail_974;
 int more_975;
 rt_int mode_976;
 P721 names_977;
 P721 ntail_978;
 P721 st_979;
 P721 p_980;
};
struct f_imports_list_127fr { int dummy;
 P721 owner_126;
 int result_;
 P721 head_981;
 P721 tail_982;
 int more_983;
 int ro_984;
 P721 x_985;
};
struct f_is_definable_129fr { int dummy;
 rstr *w_128;
 int result_;
};
struct f_definable_name_130fr { int dummy;
 P716 result_;
};
struct f_subprogram_decl_131fr { int dummy;
 P721 result_;
 rt_int line_986;
 P721 x_987;
 int is_abn_988;
 int is_func_989;
 int dummy_990;
};
struct f_capsule_decl_132fr { int dummy;
 P721 result_;
 P721 x_991;
 int dummy_992;
 P721 head_993;
 P721 tail_994;
 int more_995;
 P721 n_996;
};
struct f_formal_tt_133fr { int dummy;
 P721 result_;
 P721 head_997;
 P721 tail_998;
 int more_999;
};
struct f_generic_decl_134fr { int dummy;
 P721 result_;
 P721 x_1000;
 P721 head_1001;
 P721 tail_1002;
 int more_1003;
 P721 names_1004;
 rt_int kind_1005;
 P721 st_1006;
 P721 p_1007;
 P716 nm_1008;
 P721 st_1009;
};
struct f_task_decl_135fr { int dummy;
 P721 result_;
 P721 x_1010;
 int dummy_1011;
};
struct f_expose_decl_136fr { int dummy;
 P721 result_;
 P721 x_1012;
 P721 head_1013;
 P721 tail_1014;
 int more_1015;
 P721 n_1016;
 P721 head_1017;
 P721 tail_1018;
 int more_1019;
 P721 n_1020;
 P721 tgt_1021;
};
struct f_is_compound_kw_138fr { int dummy;
 rstr *w_137;
 int result_;
};
struct f_statement_139fr { int dummy;
 P721 result_;
 P721 labels_1022;
 P721 ltail_1023;
 P716 match_1024;
 P721 s_1025;
};
struct f_unlabeled_statement_140fr { int dummy;
 P721 result_;
 rt_int line_1026;
 P721 x_1027;
 P721 head_1028;
 P721 tail_1029;
 P721 invs_1030;
 P721 itail_1031;
 int more_1032;
 P721 target_1033;
};
struct f_arm_144fr { int dummy;
 P721 cond_141;
 P721 b_142;
 rt_int line_143;
 P721 result_;
 P721 x_1034;
};
struct f_if_stmt_145fr { int dummy;
 P721 result_;
 P721 x_1035;
 P721 head_1036;
 P721 tail_1037;
 P721 cond_1038;
 int go_1039;
};
struct f_case_stmt_146fr { int dummy;
 P721 result_;
 P721 x_1040;
 P721 head_1041;
 P721 tail_1042;
 P721 labs_1043;
 P721 ltail_1044;
 int more_1045;
 P721 l_1046;
};
struct f_repeat_stmt_147fr { int dummy;
 P721 result_;
 P721 x_1047;
};
struct f_guard_stmt_148fr { int dummy;
 P721 result_;
 P721 x_1048;
 P721 head_1049;
 P721 tail_1050;
 P721 h_1051;
};
struct f_program_149fr { int dummy;
 P721 result_;
 P721 head_1052;
 P721 tail_1053;
 P716 pr_1054;
 P721 u_1055;
};
struct f_hash_151fr { int dummy;
 rstr *s_150;
 rt_int result_;
 rt_int h_1056;
 rt_int i_1057;
};
struct f_lookup_153fr { int dummy;
 rstr *name_152;
 P731 result_;
 P731 y_1061;
};
struct f_lookup_decl_155fr { int dummy;
 P721 d_154;
 P731 result_;
 P731 y_1062;
};
struct f_define_158fr { int dummy;
 P731 y_156;
 rt_int line_157;
 rt_int h_1063;
 P731 z_1064;
};
struct f_overloadable_160fr { int dummy;
 P731 y_159;
 int result_;
};
struct f_same_tt_163fr { int dummy;
 P721 a_161;
 P721 b_162;
 int result_;
 P721 x_1065;
 P721 y_1066;
};
struct f_same_signature_166fr { int dummy;
 P733 a_164;
 P733 b_165;
 int result_;
 P733 x_1067;
 P733 y_1068;
};
struct f_open_scope_167fr { int dummy;
};
struct f_close_scope_168fr { int dummy;
};
struct f_new_sym_171fr { int dummy;
 rt_int kind_169;
 P716 name_170;
 P731 result_;
 P731 y_1069;
};
struct f_new_typ_173fr { int dummy;
 rt_int kind_172;
 P727 result_;
 P727 t_1071;
};
struct f_new_cons_174fr { int dummy;
 P723 result_;
 P723 c_1073;
};
struct f_scalar_kind_176fr { int dummy;
 P727 t_175;
 int result_;
};
struct f_bound_ctype_178fr { int dummy;
 P727 t_177;
 rstr result_;
};
struct f_cbound_181fr { int dummy;
 P723 c_179;
 rstr *b_180;
 rstr result_;
 P716 p_1075;
 rt_int i_1076;
};
struct f_clo_183fr { int dummy;
 P723 c_182;
 rstr result_;
};
struct f_chi_185fr { int dummy;
 P723 c_184;
 rstr result_;
};
struct f_sub_lo_188fr { int dummy;
 P727 t_186;
 P723 c_187;
 rstr result_;
};
struct f_sub_hi_191fr { int dummy;
 P727 t_189;
 P723 c_190;
 rstr result_;
};
struct f_raw_storage_194fr { int dummy;
 rstr *name_192;
 rstr *ct_193;
 rstr result_;
 rstr g_1080;
 rstr f_1081;
};
struct f_copy_cons_196fr { int dummy;
 P723 c_195;
 P723 result_;
 P723 r_1082;
};
struct f_freeze_199fr { int dummy;
 P723 c_197;
 P727 t_198;
 P723 result_;
 P723 r_1084;
 P716 saved_field_1085;
 rstr ct_1086;
 rstr la_1087;
 rstr lf_1088;
 rstr ha_1089;
 rstr hf_1090;
};
struct f_checked_203fr { int dummy;
 P727 t_200;
 P723 c_201;
 rstr *v_202;
 rstr result_;
};
struct f_same_lits_206fr { int dummy;
 P721 a_204;
 P721 b_205;
 int result_;
 P721 x_1091;
 P721 y_1092;
};
struct f_same_209fr { int dummy;
 P727 a_207;
 P727 b_208;
 int result_;
 P741 x_1093;
 P741 y_1094;
 P729 f_1095;
 P729 g_1096;
};
struct f_base_of_211fr { int dummy;
 P727 t_210;
 P727 result_;
};
struct f_base_cons_214fr { int dummy;
 P727 t_212;
 P723 c_213;
 P723 result_;
};
struct f_kind_name_216fr { int dummy;
 P727 t_215;
 rstr result_;
};
struct f_check_type_220fr { int dummy;
 P727 got_217;
 P727 want_218;
 rt_int line_219;
};
struct f_ctype_222fr { int dummy;
 P727 t_221;
 rstr result_;
};
struct f_struct_body_224fr { int dummy;
 P727 t_223;
 rstr result_;
};
struct f_field_decls_226fr { int dummy;
 P727 t_225;
 rstr result_;
 P729 f_1099;
 P716 s_1100;
};
struct f_declare_ctype_228fr { int dummy;
 P727 t_227;
 P727 u_1101;
 P727 target_1102;
 P721 p_1103;
 P716 fs_1104;
};
struct f_dim_lo_230fr { int dummy;
 rt_int k_229;
 rstr result_;
};
struct f_dim_hi_232fr { int dummy;
 rt_int k_231;
 rstr result_;
};
struct f_more_dims_234fr { int dummy;
 P727 t_233;
 rstr result_;
 P716 r_1105;
 rt_int k_1106;
};
struct f_acnt_237fr { int dummy;
 P727 t_235;
 rstr *base_236;
 rstr result_;
 P716 r_1110;
 rt_int k_1111;
};
struct f_cons_lo_240fr { int dummy;
 P723 c_238;
 rt_int k_239;
 P716 result_;
 P725 l_1115;
 rt_int i_1116;
};
struct f_cons_hi_243fr { int dummy;
 P723 c_241;
 rt_int k_242;
 P716 result_;
 P725 l_1120;
 rt_int i_1121;
};
struct f_idx_type_246fr { int dummy;
 P727 t_244;
 rt_int k_245;
 P727 result_;
 P741 l_1125;
 rt_int i_1126;
};
struct f_init_ascii_247fr { int dummy;
 P721 head_1130;
 P721 tail_1131;
 rt_int start_1132;
 rt_int i_1133;
 P721 lit_1137;
};
struct f_lit_index_250fr { int dummy;
 P721 lits_248;
 rstr *name_249;
 rt_int result_;
 rt_int i_1138;
 P721 l_1139;
};
struct f_resolve_subtype_253fr { int dummy;
 P721 st_251;
 P723 *c_252;
 P723 c_252v;
 P727 result_;
 P727 t_1140;
 int ok_1141;
 P727 dummy_1142;
 P723 ec_1144;
 P727 et_1145;
 P721 ix_1146;
 rt_int k_1147;
 P741 tail_1148;
 P725 btail_1149;
 P723 ic_1150;
 P727 it_1151;
 P716 lo_1152;
 P716 hi_1153;
 P741 tl_1154;
 P725 l1_1156;
 P725 l2_1157;
 P723 ec_1160;
 P721 comp_1161;
 P729 tail_1162;
 P723 cc_1163;
 P729 f_1164;
 P721 lits_1166;
 P721 ltail_1167;
 P729 f_1168;
 P721 l_1169;
 P721 gt_1170;
 P723 ec_1171;
 P731 y_1172;
};
struct f_float_lit_255fr { int dummy;
 P721 e_254;
 int result_;
};
struct f_tag_constraint_259fr { int dummy;
 P727 t_256;
 P721 e_257;
 P723 c_258;
 P727 dummy_1173;
};
struct f_opened_261fr { int dummy;
 P727 t_260;
 int result_;
 P747 c_1174;
};
struct f_replace_all_265fr { int dummy;
 rstr *s_262;
 rstr *pat_263;
 rstr *r_264;
 rstr result_;
 rt_int i_1175;
};
struct f_subst_267fr { int dummy;
 rstr *s_266;
 rstr result_;
 P725 l_1176;
 P716 r_1177;
};
struct f_new_type_271fr { int dummy;
 P731 y_268;
 P721 st_269;
 P723 *c_270;
 P723 c_270v;
 P727 result_;
 P721 d_1178;
 P721 p_1179;
 P723 uc_1180;
 P731 z_1181;
 P723 zc_1182;
};
struct f_init_storage_275fr { int dummy;
 rstr *lval_272;
 P727 t_273;
 P723 c_274;
};
struct f_init_call_278fr { int dummy;
 P731 y_276;
 rstr *lval_277;
 rstr result_;
 P716 link_1183;
 rt_int i_1184;
};
struct f_needs_fin_280fr { int dummy;
 P727 t_279;
 int result_;
 P729 f_1188;
};
struct f_fin_code_283fr { int dummy;
 rstr *lval_281;
 P727 t_282;
 rstr result_;
 P716 r_1189;
 rstr i_1190;
 P729 f_1191;
 P729 f_1192;
 rt_int i_1193;
};
struct f_tparam_type_286fr { int dummy;
 P727 t_284;
 rstr *name_285;
 P727 result_;
 P731 z_1194;
};
struct f_make_storage_290fr { int dummy;
 rstr *lval_287;
 P727 t_288;
 P723 c_289;
 P721 p_1195;
 P721 a_1196;
 P723 uc_1197;
 P727 ut_1198;
 P727 at_1199;
 P727 pt_1200;
 rstr v_1201;
 P725 saved_1202;
 P725 l1_1203;
 P725 l2_1204;
 rt_int k_1207;
 rstr i_1211;
 P729 f_1212;
 P729 f_1213;
 rt_int i_1214;
};
struct f_manifest_293fr { int dummy;
 P721 e_291;
 int *ok_292;
 int ok_292v;
 rt_int result_;
 P739 v_1218;
};
struct f_mk_mval_296fr { int dummy;
 rt_int kind_294;
 rt_int i_295;
 P739 result_;
 P739 v_1219;
};
struct f_ipow_299fr { int dummy;
 rt_int a_297;
 rt_int b_298;
 rt_int result_;
 rt_int r_1221;
 rt_int i_1222;
};
struct f_meval_302fr { int dummy;
 P721 e_300;
 int *ok_301;
 int ok_301v;
 P739 result_;
 P739 a_1226;
 P739 b_1227;
 int ok2_1228;
 P716 op_1229;
 P731 y_1230;
 P739 r_1231;
};
struct f_bool_text_304fr { int dummy;
 int b_303;
 rstr result_;
};
struct f_bool_i_306fr { int dummy;
 int b_305;
 rt_int result_;
};
struct f_mstr_308fr { int dummy;
 P739 v_307;
 rstr result_;
};
struct f_ascii_char_310fr { int dummy;
 rt_int i_309;
 int result_;
 rstr printable_1232;
};
struct f_user_defined_312fr { int dummy;
 rstr *op_311;
 int result_;
 P731 y_1233;
};
struct f_mcopy_314fr { int dummy;
 P727 t_313;
 rstr result_;
 rstr ct_1234;
 rstr name_1235;
 P725 l_1236;
};
struct f_composite_316fr { int dummy;
 P727 t_315;
 int result_;
};
struct f_assign_code_321fr { int dummy;
 rstr *lval_317;
 P727 t_318;
 rstr *v_319;
 P723 c_320;
 rstr result_;
};
struct f_copy_code_324fr { int dummy;
 P727 t_322;
 rstr *v_323;
 rstr result_;
};
struct f_eq_code_328fr { int dummy;
 P727 t_325;
 rstr *a_326;
 rstr *b_327;
 rstr result_;
};
struct f_elem_assign_332fr { int dummy;
 rstr *lval_329;
 P727 t_330;
 rstr *v_331;
 rstr result_;
};
struct f_seen_name_335fr { int dummy;
 P725 l_333;
 rstr *s_334;
 int result_;
 P725 p_1238;
};
struct f_emit_helpers_336fr { int dummy;
 P727 order_1239;
 P727 t_1240;
 P725 done_1241;
 P725 l_1242;
 rstr c_1243;
};
struct f_helper_bodies_338fr { int dummy;
 P727 t_337;
 rstr c_1245;
 P743 b_1246;
 P727 e_1247;
 P716 sizes_1248;
 P716 bounds_1249;
 rt_int k_1250;
 rstr l_1254;
 rstr h_1255;
 P725 saved_1256;
 P721 p_1257;
 P725 l1_1258;
 P725 l2_1259;
 P729 f_1262;
 rt_int i_1263;
 P716 cases_as_1264;
 P716 cases_cp_1265;
 P716 cases_eq_1266;
 rstr fn_1267;
 P729 f_1268;
 P716 conds_1269;
 rstr fn_1270;
 rstr fn_1271;
};
struct f_declare_body_340fr { int dummy;
 P721 elems_339;
 P721 e_1272;
 P731 y_1273;
 P731 y_1274;
 P731 y_1275;
 P727 t_1276;
 P731 y_1277;
 P731 y_1278;
 P731 g_1279;
 P735 snap_1280;
 rt_int i_1284;
 P731 g_1288;
 P731 y_1289;
};
struct f_manifest_const_342fr { int dummy;
 P721 d_341;
 int ok_1290;
 P739 v_1291;
 P731 y_1292;
 P727 t_1293;
 P716 ctext_1294;
 P743 saved_1295;
};
struct f_exported_346fr { int dummy;
 P721 d_343;
 rstr *name_344;
 int *ro_345;
 int ro_345v;
 int result_;
 P721 p_1298;
};
struct f_copy_sym_348fr { int dummy;
 P731 y_347;
 P731 result_;
 P731 z_1299;
};
struct f_gen_capsule_350fr { int dummy;
 P721 d_349;
 P731 y_1301;
 P716 saved_1302;
};
struct f_capsule_params_354fr { int dummy;
 P721 d_351;
 P721 args_352;
 rt_int line_353;
 P721 p_1303;
 P721 a_1304;
 P727 t_1305;
 P727 vt_1306;
 P723 c_1307;
 P716 lv_1308;
 P723 lc_1309;
 int ro_1310;
 P731 y_1311;
 rstr f_1312;
 rstr g_1313;
 P731 y_1314;
 rstr v_1315;
 rstr access_1316;
};
struct f_elaborate_capsule_359fr { int dummy;
 P721 d_355;
 P731 y_356;
 P721 args_357;
 P721 owner_358;
 P747 cr_1317;
 P737 ctx_1318;
 P745 saved_gotos_1319;
 P731 m_1320;
 P721 p_1321;
 int ro_1322;
 P749 w_1325;
 P731 z_1327;
};
struct f_exports_op_362fr { int dummy;
 P721 d_360;
 rstr *op_361;
 int result_;
 P721 p_1328;
};
struct f_renamed_365fr { int dummy;
 P721 d_363;
 P731 z_364;
 P716 result_;
 P721 r_1329;
};
struct f_gen_expose_367fr { int dummy;
 P721 d_366;
 P731 y_1330;
 P731 m_1331;
 P721 p_1332;
 P721 r_1333;
 P731 inst_1334;
 int found_1335;
 P731 z_1336;
 int found_1337;
 P731 z_1338;
};
struct f_finish_ptr_369fr { int dummy;
 P727 t_368;
 P721 d_1339;
 P721 p_1340;
 P723 c_1341;
 rstr dummy_1342;
 P731 y_1343;
};
struct f_declare_subprogram_371fr { int dummy;
 P721 d_370;
};
struct f_build_subprogram_373fr { int dummy;
 P721 d_372;
 P731 result_;
 P731 y_1344;
 P721 p_1345;
 P733 tail_1346;
 P733 pm_1347;
 P723 rc_1349;
 P733 pm_1350;
 P743 saved_1351;
 P731 z_1352;
};
struct f_has_pragmat_376fr { int dummy;
 P716 pr_374;
 rstr *p_375;
 int result_;
 rt_int i_1353;
};
struct f_suppressing_378fr { int dummy;
 P716 pr_377;
 P716 result_;
 P716 r_1357;
 rt_int i_1358;
 rt_int j_1359;
 rt_int k_1360;
};
struct f_suppressed_380fr { int dummy;
 rstr *x_379;
 int result_;
 rstr w_1361;
 rt_int i_1362;
};
struct f_element_382fr { int dummy;
 P721 e_381;
 P716 saved_1366;
};
struct f_element1_384fr { int dummy;
 P721 e_383;
 rt_int k_1367;
 P731 g_1368;
 rt_int i_1372;
 P727 t_1376;
 rstr c_1377;
};
struct f_storage_387fr { int dummy;
 rstr *name_385;
 P727 t_386;
 rstr result_;
 rstr g_1378;
 rstr f_1379;
};
struct f_bind_390fr { int dummy;
 P731 y_388;
 rstr *access_389;
};
struct f_var_decl_392fr { int dummy;
 P721 d_391;
 P723 c_1380;
 P727 t_1381;
 P731 y_1382;
 rstr access_1383;
 P727 it_1384;
 rstr n_1385;
 P727 vt_1386;
 rstr v_1387;
};
struct f_open_fin_394fr { int dummy;
 rstr *fc_393;
 rstr f_1388;
 P725 l_1389;
};
struct f_close_fins_396fr { int dummy;
 P725 saved_395;
};
struct f_const_decl_398fr { int dummy;
 P721 d_397;
 P723 c_1391;
 P727 t_1392;
 P727 vt_1393;
 P731 y_1394;
 int ok_1395;
 rstr v_1396;
 rstr access_1397;
};
struct f_subprogram_400fr { int dummy;
 P721 d_399;
};
struct f_gen_subprogram_403fr { int dummy;
 P721 d_401;
 P731 y_402;
 P743 saved_code_1398;
 P743 saved_fields_1399;
 int saved_in_1400;
 P731 saved_sym_1401;
 P745 saved_exits_1402;
 P745 saved_gotos_1403;
 rt_int saved_frames_1404;
 P716 args_1405;
 P733 pm_1406;
 P725 saved_handlers_1407;
 P725 saved_cleanups_1408;
 P737 ctx_1409;
 P716 head_1410;
 P716 frame_1411;
 P716 parent_1412;
 P716 copy_back_1413;
 P716 pfin_1414;
 P725 saved_fins_1415;
 P723 saved_rc_1416;
 P716 saved_ret_1417;
 P716 saved_rflag_1418;
 P721 pn_1419;
 P716 nonrec_end_1420;
 int has_pfin_1421;
 rstr ct_1423;
 rstr f_1424;
 P731 p_1425;
 P723 pc_1426;
 P723 ac_1427;
 P723 fc_1428;
 P727 ft_1429;
 rstr bt_1430;
 P723 rc_1431;
 P727 rt_1432;
 rstr g_1433;
 P716 leave_1434;
};
struct f_waits_of_405fr { int dummy;
 P721 d_404;
 rstr result_;
 P749 w_1435;
};
struct f_task_waits_407fr { int dummy;
 P721 elems_406;
 rstr result_;
 P721 e_1436;
 P716 r_1437;
};
struct f_await_tasks_409fr { int dummy;
 P721 elems_408;
 rstr w_1438;
};
struct f_capsule_elements_411fr { int dummy;
 P721 elems_410;
 P721 e_1439;
};
struct f_declare_labels_413fr { int dummy;
 P721 elems_412;
 P721 e_1440;
 P721 l_1441;
 P745 x_1442;
};
struct f_start_labels_414fr { int dummy;
 P745 x_1444;
};
struct f_goto_label_416fr { int dummy;
 rstr *name_415;
 P745 result_;
 P745 x_1445;
};
struct f_has_return_418fr { int dummy;
 P721 e_417;
 int result_;
 P721 x_1446;
};
struct f_capsule_body_420fr { int dummy;
 P721 elems_419;
 P716 saved_ret_1447;
 P716 saved_flag_1448;
 rt_int saved_frames_1449;
 P721 e_1450;
 int stmt_1451;
};
struct f_body_elements_422fr { int dummy;
 P721 elems_421;
};
struct f_gen_body_424fr { int dummy;
 P721 elems_423;
 P725 saved_1452;
 P745 saved_gotos_1453;
};
struct f_pop_frames_426fr { int dummy;
 rt_int upto_425;
 rt_int i_1454;
 P725 c_1455;
};
struct f_push_cleanup_428fr { int dummy;
 rstr *s_427;
 P725 c_1456;
};
struct f_pop_cleanup_429fr { int dummy;
};
struct f_gen_statement_431fr { int dummy;
 P721 s_430;
 P716 label_1458;
 P721 gl_1459;
 P745 x_1460;
 P745 x_1463;
};
struct f_st_assign_433fr { int dummy;
 P721 s_432;
 P716 lv_1464;
 P727 t_1465;
 P727 vt_1466;
 P723 c_1467;
 int ro_1468;
 rstr lo_1469;
 rstr hi_1470;
 rstr v_1471;
 rstr lo_1472;
 rstr hi_1473;
 rstr v_1474;
 rstr v_1475;
};
struct f_st_call_435fr { int dummy;
 P721 s_434;
 P721 c_1476;
 P727 t_1477;
 P721 x_1478;
};
struct f_st_if_437fr { int dummy;
 P721 s_436;
 P721 a_1479;
 int first_1480;
 P727 t_1481;
 int taken_1482;
 int ok_1483;
 P739 mv_1484;
 rstr c_1485;
};
struct f_st_case_439fr { int dummy;
 P721 s_438;
 P727 st_1486;
 P727 vt_1487;
 int first_1488;
 P721 a_1489;
 rstr sel_1490;
 rstr tmp_1491;
 P721 lab_1492;
 P716 conds_1493;
 rstr v_1494;
 rstr lo_1495;
 rstr hi_1496;
};
struct f_st_repeat_441fr { int dummy;
 P721 s_440;
 P727 t_1497;
 P723 c_1498;
 rstr cond_1499;
 rstr access_1500;
 rstr lov_1501;
 rstr hiv_1502;
 rstr it_1503;
 P731 y_1504;
};
struct f_st_exit_443fr { int dummy;
 P721 s_442;
 P745 x_1505;
};
struct f_st_return_445fr { int dummy;
 P721 s_444;
 P727 vt_1506;
 rstr v_1507;
};
struct f_result_checked_449fr { int dummy;
 P727 t_446;
 P723 c_447;
 rstr *v_448;
 rstr result_;
};
struct f_exc_id_452fr { int dummy;
 rstr *name_450;
 rt_int line_451;
 rstr result_;
 P731 y_1508;
};
struct f_st_guard_454fr { int dummy;
 P721 s_453;
 P721 h_1509;
 int first_1510;
 P725 hv_1511;
 rstr f_1512;
 rstr x_1513;
 P721 n_1515;
 P716 conds_1516;
};
struct f_st_alloc_456fr { int dummy;
 P721 s_455;
 P716 lv_1517;
 P727 t_1518;
 P727 target_1519;
 P727 vt_1520;
 P723 c_1521;
 P723 tc_1522;
 int ro_1523;
 P721 d_1524;
 P721 p_1525;
 P721 a_1526;
 rstr tcn_1527;
 rstr cell_1528;
 rstr fn_1529;
 rstr v_1530;
 rstr pv_1531;
 P731 y_1532;
 rstr v_1533;
};
struct f_act_ref_458fr { int dummy;
 P721 e_457;
 rstr result_;
 P716 lv_1534;
 P727 t_1535;
 P723 c_1536;
 int ro_1537;
 rstr v_1538;
};
struct f_st_create_460fr { int dummy;
 P721 s_459;
 P731 y_1539;
 P733 pm_1540;
 P721 a_1541;
 P716 lv_1542;
 P727 lt_1543;
 P727 vt_1544;
 P723 lc_1545;
 int ro_1546;
 P727 at_1547;
 P723 ac_1548;
 int aro_1549;
 P716 act_1550;
 rstr nf_1551;
 P716 link_1552;
 rt_int i_1553;
 rstr v_1557;
};
struct f_hidden_var_464fr { int dummy;
 rstr *name_461;
 P727 t_462;
 rstr *place_463;
 P731 y_1558;
};
struct f_user_create_470fr { int dummy;
 P721 s_465;
 P731 y_466;
 rstr *uv_467;
 P727 ut_468;
 rstr *nf_469;
 P727 t_1559;
 P743 saved_1560;
 P743 hook_1561;
 P721 un_1562;
 rstr hn_1563;
 rstr aa_1564;
 rstr uname_1565;
 rstr aname_1566;
 P721 start_1567;
 P721 an_1568;
};
struct f_wait_alt_475fr { int dummy;
 P721 inv_471;
 rstr *arr_472;
 rt_int i_473;
 int mixed_474;
 rstr result_;
 P716 lv_1569;
 P727 t_1570;
 P727 vt_1571;
 P723 c_1572;
 int ro_1573;
 P721 fn_1574;
 P721 args_1575;
 rstr slot_1576;
 P716 dv_1577;
 P727 dt_1578;
 rstr tmp_1579;
 rstr v_1580;
 rstr v_1581;
};
struct f_builtin_wait_477fr { int dummy;
 P721 inv_476;
 int result_;
 P716 lv_1582;
 P727 t_1583;
 P723 c_1584;
 int ro_1585;
 P743 saved_1586;
 int ok_1587;
};
struct f_wait_op_482fr { int dummy;
 P721 inv_478;
 rstr *op_479;
 rstr *q_480;
 int is_stmt_481;
 rstr result_;
 P721 x_1590;
 P721 f_1591;
 P721 qn_1592;
 P727 t_1593;
 rstr r_1594;
};
struct f_user_wait_487fr { int dummy;
 P721 s_483;
 rstr *arr_484;
 rstr *w_485;
 rt_int n_486;
 P721 a_1595;
 rt_int i_1596;
 P716 tests_1597;
 P716 revokes_1598;
 P721 inv_1599;
 P721 st_1600;
 P723 c_1601;
 P727 qt_1602;
 rstr qname_1603;
 P731 y_1604;
 rstr access_1605;
};
struct f_st_wait_489fr { int dummy;
 P721 s_488;
 P721 a_1606;
 rt_int n_1607;
 int first_1608;
 P743 inits_1609;
 int user_1610;
 rstr arr_1611;
 rstr w_1612;
 P721 inv_1613;
 P721 inv_1614;
 P716 conds_1615;
 rt_int i_1616;
};
struct f_call_node_493fr { int dummy;
 rstr *name_490;
 P721 arg_491;
 rt_int line_492;
 P721 result_;
 P721 x_1620;
 P721 f_1621;
};
struct f_user_region_495fr { int dummy;
 P721 s_494;
 P727 t_1622;
 rstr f_1623;
 rstr lock_1624;
 rstr unlock_1625;
};
struct f_st_region_497fr { int dummy;
 P721 s_496;
 P716 lv_1626;
 P727 t_1627;
 P723 c_1628;
 int ro_1629;
 rstr lk_1630;
 rstr f_1631;
};
struct f_gparam_500fr { int dummy;
 P721 g_498;
 rstr *name_499;
 P721 result_;
 P721 p_1632;
};
struct f_bind_sym_502fr { int dummy;
 P721 p_501;
 P731 result_;
 P731 y_1633;
};
struct f_same_binds_505fr { int dummy;
 P731 a_503;
 P731 b_504;
 int result_;
 P731 x_1634;
 P731 y_1635;
};
struct f_same_binding_508fr { int dummy;
 P731 a_506;
 P731 b_507;
 int result_;
};
struct f_tt_binds_513fr { int dummy;
 P721 gd_509;
 P721 formals_510;
 P721 actuals_511;
 rt_int line_512;
 P731 result_;
 P721 f_1636;
 P721 a_1637;
 P731 binds_1638;
 P723 c_1639;
 P727 at_1640;
 P721 p_1641;
 P731 b_1642;
 P721 st_1643;
 int ok_1644;
};
struct f_generic_use_515fr { int dummy;
 P721 st_514;
 int result_;
};
struct f_infer_from_520fr { int dummy;
 P721 gd_516;
 P721 pat_517;
 P727 t_518;
 P731 known_519;
 P731 result_;
 P731 binds_1645;
 P721 e_1646;
 P721 tp_1647;
 P716 nm_1648;
 P731 q_1649;
 int have_1650;
 P731 g_1651;
 P731 b_1652;
};
struct f_instantiate_type_526fr { int dummy;
 P731 g_521;
 P721 tt_522;
 P721 args_523;
 P723 *c_524;
 P723 c_524v;
 rt_int line_525;
 P727 result_;
 P721 gd_1653;
 P721 pat_1654;
 P731 binds_1655;
 P731 inst_1656;
 P727 t_1657;
 P747 saved_caps_1658;
 P735 saved_env_1659;
 rt_int saved_gdepth_1660;
 P731 b_1661;
 P731 y_1662;
 P723 yc_1663;
};
struct f_instantiate_531fr { int dummy;
 P731 g_527;
 P721 tt_528;
 P721 args_529;
 rt_int line_530;
 P731 result_;
 P721 gd_1665;
 P721 pat_1666;
 P731 binds_1667;
 P721 f_1668;
 P721 a_1669;
 P721 fp_1670;
 P731 inst_1671;
 P727 at_1672;
 P723 c_1673;
 P737 saved_fctx_1674;
 int saved_in_1675;
 rt_int saved_level_1676;
 P731 saved_sym_1677;
 P743 saved_code_1678;
 P735 saved_env_1679;
 rt_int saved_gdepth_1680;
 rstr v_1681;
 int known_1682;
 P731 q_1683;
 P731 b_1684;
 rstr v_1685;
 P731 b_1686;
};
struct f_access_of_533fr { int dummy;
 P731 y_532;
 rstr result_;
 P716 p_1687;
 rt_int i_1688;
};
struct f_import_of_536fr { int dummy;
 P721 l_534;
 rstr *name_535;
 P721 result_;
 P721 p_1692;
};
struct f_check_import_539fr { int dummy;
 P731 y_537;
 rt_int line_538;
 int result_;
 P737 c_1693;
 int ro_1694;
 P721 imp_1695;
};
struct f_c_ident_541fr { int dummy;
 rstr *s_540;
 rstr result_;
};
struct f_deref_544fr { int dummy;
 rstr *base_542;
 P727 t_543;
 rstr result_;
};
struct f_is_lvalue_546fr { int dummy;
 P721 e_545;
 int result_;
 P731 y_1696;
};
struct f_lvalue_552fr { int dummy;
 P721 e_547;
 P716 *code_548;
 P716 code_548v;
 P727 *t_549;
 P727 t_549v;
 P723 *c_550;
 P723 c_550v;
 int *ro_551;
 int ro_551v;
 P716 base_1697;
 P727 bt_1698;
 P723 bc_1699;
 P731 y_1700;
};
struct f_select_on_560fr { int dummy;
 rstr *base_553;
 P727 bt_554;
 P721 e_555;
 int *ro_556;
 P716 *code_557;
 P716 code_557v;
 P727 *t_558;
 P727 t_558v;
 P723 *c_559;
 P723 c_559v;
 P721 p_1701;
 P729 f_1702;
 rt_int i_1703;
 rstr fn_1704;
 P729 f_1705;
};
struct f_has_call_562fr { int dummy;
 rstr *s_561;
 int result_;
 rt_int i_1706;
};
struct f_need_slice_564fr { int dummy;
 P727 t_563;
 rstr c_1710;
 rstr n_1711;
 P725 l_1712;
};
struct f_ix_568fr { int dummy;
 rstr *i_565;
 rstr *lo_566;
 rstr *hi_567;
 rstr result_;
};
struct f_index_on_577fr { int dummy;
 rstr *base_569;
 P727 bt_570;
 P721 e_571;
 int *ro_572;
 int lv_573;
 P716 *code_574;
 P716 code_574v;
 P727 *t_575;
 P727 t_575v;
 P723 *c_576;
 P723 c_576v;
 P721 a_1714;
 P727 it_1715;
 rstr lo_1716;
 rstr hi_1717;
 P716 off_1718;
 rt_int k_1719;
 P716 b_1720;
 P716 pre_1721;
 rstr i_1722;
 rstr l_1723;
 rstr h_1724;
 rstr lo_1725;
 rstr hi_1726;
 rstr i_1727;
};
struct f_own_attribute_579fr { int dummy;
 P721 e_578;
 int result_;
 P743 saved_1728;
 P727 bt_1729;
 int ok_1730;
 rstr base_1733;
 P721 p_1734;
};
struct f_gexpr_583fr { int dummy;
 P721 e_580;
 P727 want_581;
 P727 *t_582;
 P727 t_582v;
 rstr result_;
 rt_int k_1735;
 P716 code_1736;
 P723 c_1737;
 int ro_1738;
 P727 bt_1739;
 P723 ctx_1740;
 rt_int i_1741;
 P731 y_1742;
 int ro_1743;
 P721 call_1744;
 P721 fname_1745;
 rstr a_1746;
 rstr a_1747;
 rstr a_1748;
 P721 nm_1749;
 P731 y_1750;
 rstr base_1751;
 rstr base_1752;
};
struct f_resolved_586fr { int dummy;
 P721 e_584;
 P727 *t_585;
 P727 t_585v;
 rstr result_;
 P723 c_1753;
 P727 vt_1754;
 P731 y_1755;
 P721 tt_1756;
 P721 call_1757;
 P721 f_1758;
 P721 fname_1759;
 rstr v_1760;
};
struct f_gexpr_in_591fr { int dummy;
 P721 e_587;
 P727 want_588;
 P723 c_589;
 P727 *t_590;
 P727 t_590v;
 rstr result_;
};
struct f_copy_node_593fr { int dummy;
 P721 e_592;
 P721 result_;
 P721 x_1761;
};
struct f_wrap_apply_595fr { int dummy;
 P721 e_594;
 P721 result_;
 P721 x_1763;
};
struct f_c_string_597fr { int dummy;
 rstr *s_596;
 rstr result_;
 rt_int n_1764;
 rt_int i_1765;
 rstr r_1769;
 rt_int j_1770;
 rt_int i_1771;
};
struct f_enum_type_of_600fr { int dummy;
 rstr *lit_598;
 rt_int line_599;
 P727 result_;
 P731 y_1775;
 P723 c_1776;
 P721 st_1777;
};
struct f_attribute_603fr { int dummy;
 P721 e_601;
 P727 *t_602;
 P727 t_602v;
 rstr result_;
 P727 bt_1778;
 P723 c_1779;
 P716 base_1780;
 P731 y_1781;
 P721 st_1782;
};
struct f_gbinop_607fr { int dummy;
 P721 e_604;
 P727 want_605;
 P727 *t_606;
 P727 t_606v;
 rstr result_;
 P716 op_1783;
 P727 ta_1784;
 P727 tb_1785;
 P727 hint_1786;
 P731 uy_1787;
 P721 l_1788;
 P721 r_1789;
 P721 call_1790;
 P721 fname_1791;
 rstr s_1792;
 rstr a_1793;
 rstr a_1794;
 rstr b_1795;
 rstr a_1796;
 rstr b_1797;
 P727 at_1798;
 rstr a_1799;
 rstr b_1800;
 P727 wa_1801;
 P727 wb_1802;
 rstr a_1803;
 rstr b_1804;
 rstr dummy_1805;
 rstr a_1806;
 rstr b_1807;
 P727 ct_1808;
 rstr a_1809;
 rstr b_1810;
};
struct f_constructor_612fr { int dummy;
 P721 e_608;
 P727 want_609;
 P723 ctx_610;
 P727 *t_611;
 P727 t_611v;
 rstr result_;
 P721 it_1811;
 P729 f_1812;
 P727 vt_1813;
 P716 s_1814;
 rstr v_1815;
 rt_int i_1816;
 rstr tmp_1817;
 rstr v_1818;
 rstr tmp_1819;
 P716 parts_1820;
 P721 k_1821;
 P716 shared_1822;
 rstr v_1823;
 rstr v_1824;
};
struct f_comp_value_616fr { int dummy;
 P727 t_613;
 P723 c_614;
 rstr *v_615;
 rstr result_;
};
struct f_has_at_618fr { int dummy;
 rstr *s_617;
 int result_;
 rt_int i_1825;
};
struct f_set_elem_621fr { int dummy;
 P727 st_619;
 rstr *v_620;
 rstr result_;
};
struct f_array_cons_626fr { int dummy;
 P721 e_622;
 P727 at_623;
 P723 ctx_624;
 P727 *t_625;
 P727 t_625v;
 rstr result_;
 rstr tmp_1829;
 P716 parts_1830;
 P721 it_1831;
 int positional_1832;
 rt_int k_1833;
 P716 lo_1837;
 P716 hi_1838;
};
struct f_fill_items_632fr { int dummy;
 P721 items_627;
 P727 at_628;
 rstr *tmp_629;
 P725 prefix_630;
 rt_int dim_631;
 rstr result_;
 P721 it_1839;
 rt_int pos_1840;
 P716 r_1841;
 P727 vt_1842;
 rstr v_1843;
 P721 k_1844;
 rt_int d_1845;
 P725 pre_1846;
 P716 loops_1847;
 P716 ends_1848;
 rstr v_1849;
 rstr xv_1850;
 P721 k_1851;
 rstr xv_1852;
 rstr v_1853;
};
struct f_e_line_634fr { int dummy;
 P721 e_633;
 rt_int result_;
};
struct f_add_line_637fr { int dummy;
 P725 l_635;
 rstr *s_636;
 P725 result_;
 P725 r_1854;
 P725 tail_1855;
 P725 x_1856;
 P725 p_1857;
};
struct f_item_value_642fr { int dummy;
 P721 e_638;
 P727 at_639;
 rt_int line_640;
 P727 *vt_641;
 P727 vt_641v;
 rstr result_;
 rstr v_1860;
};
struct f_key_loop_647fr { int dummy;
 P721 k_643;
 P727 at_644;
 rt_int d_645;
 rstr *xv_646;
 rstr result_;
 P727 it_1861;
 rstr lo_1862;
 rstr hi_1863;
};
struct f_store_at_652fr { int dummy;
 P727 at_648;
 rstr *tmp_649;
 P725 xs_650;
 rt_int n_651;
 rstr result_;
 P716 off_1864;
 P725 x_1865;
 rt_int k_1866;
 rstr l_1867;
 rstr h_1868;
};
struct f_fits_655fr { int dummy;
 P731 y_653;
 P721 args_654;
 int result_;
 P721 a_1869;
 P733 pm_1870;
 P727 t_1871;
 P743 saved_1872;
 int ok_1873;
 P716 lv_1874;
 P723 lc_1875;
 int ro_1876;
 rstr v_1879;
};
struct f_resolve_overload_661fr { int dummy;
 rstr *name_656;
 P721 tt_657;
 P721 args_658;
 int is_stmt_659;
 rt_int line_660;
 P731 result_;
 P731 y_1880;
 P731 first_1881;
 rt_int n_1882;
 rt_int pass_1883;
};
struct f_tt_fits_664fr { int dummy;
 P731 y_662;
 P721 tt_663;
 int result_;
 P721 f_1887;
 P721 a_1888;
 P743 saved_1889;
 int ok_1890;
 P723 fc_1893;
 P723 ac_1894;
 P721 fst_1895;
 P727 ft_1896;
 P727 at_1897;
 P721 ast_1898;
};
struct f_overload_chain_667fr { int dummy;
 rstr *name_665;
 rt_int pass_666;
 P731 result_;
};
struct f_is_builtin_669fr { int dummy;
 rstr *n_668;
 int result_;
};
struct f_is_low_level_671fr { int dummy;
 rstr *n_670;
 int result_;
};
struct f_me_high_675fr { int dummy;
 P721 tt_672;
 rt_int line_673;
 P727 *t_674;
 P727 t_674v;
 rstr result_;
 P723 c_1899;
};
struct f_type_tag_677fr { int dummy;
 P727 t_676;
 rstr result_;
};
struct f_lock_ref_680fr { int dummy;
 P721 e_678;
 rstr *name_679;
 rstr result_;
 P716 lv_1900;
 P727 t_1901;
 P723 c_1902;
 int ro_1903;
};
struct f_user_op_683fr { int dummy;
 rstr *op_681;
 P721 args_682;
 P731 result_;
 P731 y_1904;
 rt_int pass_1905;
};
struct f_gcall_687fr { int dummy;
 P721 e_684;
 int is_stmt_685;
 P727 *t_686;
 P727 t_686v;
 rstr result_;
 P721 fn_1909;
 P721 tt_1910;
 P731 y_1911;
 P716 args_1912;
 P721 a_1913;
 P733 pm_1914;
 P727 lt_1915;
 P727 vt_1916;
 P716 lv_1917;
 P723 lc_1918;
 int ro_1919;
 P731 alt_1920;
 rt_int i_1921;
 rstr v_1925;
 rstr ct_1926;
 rstr v_1927;
};
struct f_requires_689fr { int dummy;
 P731 y_688;
 P725 result_;
 P721 imp_1928;
};
struct f_add_req_692fr { int dummy;
 P731 y_690;
 rstr *name_691;
 P725 l_1929;
};
struct f_require_calls_695fr { int dummy;
 P731 y_693;
 P721 e_694;
 P721 x_1931;
 P721 callee_1932;
 P731 z_1933;
 P725 l_1934;
};
struct f_declared_in_698fr { int dummy;
 P721 elems_696;
 rstr *name_697;
 int result_;
 P721 e_1935;
};
struct f_check_requires_701fr { int dummy;
 P731 y_699;
 rt_int line_700;
 P725 l_1936;
 P731 z_1937;
};
struct f_actual_bounds_705fr { int dummy;
 P727 ft_702;
 P727 t_703;
 P723 c_704;
 rstr result_;
};
struct f_builtin_712fr { int dummy;
 rstr *name_706;
 P721 tt_707;
 P721 args_708;
 rt_int line_709;
 int is_stmt_710;
 P727 *t_711;
 P727 t_711v;
 rstr result_;
 P727 at_1938;
 rt_int n_1939;
 rstr a_1940;
 rstr a_1941;
 rstr a_1942;
 rstr a_1943;
 rstr a_1944;
 rstr n1_1945;
 rstr m1_1946;
 rstr a_1947;
 rstr a_1948;
 P721 last_1949;
 rstr a_1950;
 rstr a_1951;
 P716 lv_1952;
 P723 lc_1953;
 int ro_1954;
 P721 last_1955;
 P716 lv_1956;
 P716 dv_1957;
 P723 lc_1958;
 int ro_1959;
 P727 mt_1960;
 P727 dt_1961;
 rstr v_1962;
 P716 lv_1963;
 P723 lc_1964;
 int ro_1965;
 P727 mt_1966;
 P716 lv_1967;
 P716 dv_1968;
 P716 bv_1969;
 P723 lc_1970;
 int ro_1971;
 P727 mt_1972;
 P727 dt_1973;
 P727 bt_1974;
 rstr v_1975;
 rstr v_1976;
 rstr v_1977;
 rstr v_1978;
 rstr a_1979;
 P716 bv_1980;
 P723 bc_1981;
 int ro_1982;
 P727 bt_1983;
 rstr l_1984;
 P716 pv_1985;
 P723 pc_1986;
 int ro_1987;
 P727 pt_1988;
 rstr dev_1989;
 rstr cmd_1990;
 P716 dv_1991;
 P723 dc_1992;
 int ro_1993;
 P727 dt_1994;
};
struct f_translate_714fr { int dummy;
 P721 units_713;
 P721 u_1995;
 P721 l_1997;
 rstr w_1998;
};
struct f_print_program_715fr { int dummy;
};
static void as_R750(R750 *d, R750 s);
static R750 cp_R750(R750 s);
static int eq_R750(R750 a, R750 b);
static void as_R748(R748 *d, R748 s);
static R748 cp_R748(R748 s);
static int eq_R748(R748 a, R748 b);
static void as_R746(R746 *d, R746 s);
static R746 cp_R746(R746 s);
static int eq_R746(R746 a, R746 b);
static void as_R744(R744 *d, R744 s);
static R744 cp_R744(R744 s);
static int eq_R744(R744 a, R744 b);
static void as_R742(R742 *d, R742 s);
static R742 cp_R742(R742 s);
static int eq_R742(R742 a, R742 b);
static void as_R740(R740 *d, R740 s);
static R740 cp_R740(R740 s);
static int eq_R740(R740 a, R740 b);
static void as_R738(R738 *d, R738 s);
static R738 cp_R738(R738 s);
static int eq_R738(R738 a, R738 b);
static void as_A736(A736 *d, A736 s);
static A736 cp_A736(A736 s);
static int eq_A736(A736 a, A736 b);
static void as_R734(R734 *d, R734 s);
static R734 cp_R734(R734 s);
static int eq_R734(R734 a, R734 b);
static void as_R732(R732 *d, R732 s);
static R732 cp_R732(R732 s);
static int eq_R732(R732 a, R732 b);
static void as_R730(R730 *d, R730 s);
static R730 cp_R730(R730 s);
static int eq_R730(R730 a, R730 b);
static void as_R728(R728 *d, R728 s);
static R728 cp_R728(R728 s);
static int eq_R728(R728 a, R728 b);
static void as_R726(R726 *d, R726 s);
static R726 cp_R726(R726 s);
static int eq_R726(R726 a, R726 b);
static void as_R724(R724 *d, R724 s);
static R724 cp_R724(R724 s);
static int eq_R724(R724 a, R724 b);
static void as_R722(R722 *d, R722 s);
static R722 cp_R722(R722 s);
static int eq_R722(R722 a, R722 b);
static void as_A720(A720 *d, A720 s);
static A720 cp_A720(A720 s);
static int eq_A720(A720 a, A720 b);
static void as_R718(R718 *d, R718 s);
static R718 cp_R718(R718 s);
static int eq_R718(R718 a, R718 b);
static P716 f_mk_3(rstr *s_2);
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
static P743 f_new_buffer_24(void);
static void f_put_27(P743 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P743 b_30);
static void f_splice_34(P743 a_32, P743 b_33);
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
static P721 f_nn_61(rt_int kind_59, rt_int line_60);
static void f_append_65(P721 *head_62, P721 *tail_63, P721 x_64);
static rt_int f_list_len_67(P721 l_66);
static rt_int f_cur_line_68(void);
static int f_at_kw_70(rstr *w_69);
static int f_at_op_72(rstr *w_71);
static int f_at_kind_74(rt_int k_73);
static rt_int f_kind_at_76(rt_int k_75);
static P716 f_text_at_78(rt_int k_77);
static void f_perror_80(rstr *msg_79);
static int f_accept_kw_82(rstr *w_81);
static int f_accept_op_84(rstr *w_83);
static void f_expect_kw_86(rstr *w_85);
static void f_expect_op_88(rstr *w_87);
static P716 f_expect_id_89(void);
static P721 f_name_node_90(void);
static P721 f_id_list_91(void);
static P721 f_p_subtype_92(void);
static P721 f_actual_params_93(void);
static int f_is_type_word_95(rstr *w_94);
static P721 f_actual_tt_96(void);
static P721 f_binop_101(P716 op_97, P721 l_98, P721 r_99, rt_int line_100);
static P721 f_expr_102(void);
static P721 f_expr_and_103(void);
static P721 f_expr_not_104(void);
static int f_is_rel_106(rstr *s_105);
static P721 f_expr_rel_107(void);
static P721 f_expr_add_108(void);
static P721 f_expr_mul_109(void);
static P721 f_expr_pow_110(void);
static P721 f_expr_prefix_111(void);
static P721 f_postfix_112(void);
static P721 f_primary_113(void);
static P721 f_constructor_item_114(void);
static int f_at_body_end_115(void);
static P721 f_body_116(void);
static P721 f_body_element_117(void);
static P721 f_declaration_118(void);
static P721 f_object_decl_119(void);
static P721 f_abbrev_decl_120(void);
static void f_skip_rep_121(void);
static P721 f_type_decl_122(void);
static rt_int f_mode_of_124(rstr *w_123);
static P721 f_formal_params_125(void);
static int f_imports_list_127(P721 owner_126);
static int f_is_definable_129(rstr *w_128);
static P716 f_definable_name_130(void);
static P721 f_subprogram_decl_131(void);
static P721 f_capsule_decl_132(void);
static P721 f_formal_tt_133(void);
static P721 f_generic_decl_134(void);
static P721 f_task_decl_135(void);
static P721 f_expose_decl_136(void);
static int f_is_compound_kw_138(rstr *w_137);
static P721 f_statement_139(void);
static P721 f_unlabeled_statement_140(void);
static P721 f_arm_144(P721 cond_141, P721 b_142, rt_int line_143);
static P721 f_if_stmt_145(void);
static P721 f_case_stmt_146(void);
static P721 f_repeat_stmt_147(void);
static P721 f_guard_stmt_148(void);
static P721 f_program_149(void);
static rt_int f_hash_151(rstr *s_150);
static P731 f_lookup_153(rstr *name_152);
static P731 f_lookup_decl_155(P721 d_154);
static void f_define_158(P731 y_156, rt_int line_157);
static int f_overloadable_160(P731 y_159);
static int f_same_tt_163(P721 a_161, P721 b_162);
static int f_same_signature_166(P733 a_164, P733 b_165);
static void f_open_scope_167(void);
static void f_close_scope_168(void);
static P731 f_new_sym_171(rt_int kind_169, P716 name_170);
static P727 f_new_typ_173(rt_int kind_172);
static P723 f_new_cons_174(void);
static int f_scalar_kind_176(P727 t_175);
static rstr f_bound_ctype_178(P727 t_177);
static rstr f_cbound_181(P723 c_179, rstr *b_180);
static rstr f_clo_183(P723 c_182);
static rstr f_chi_185(P723 c_184);
static rstr f_sub_lo_188(P727 t_186, P723 c_187);
static rstr f_sub_hi_191(P727 t_189, P723 c_190);
static rstr f_raw_storage_194(rstr *name_192, rstr *ct_193);
static P723 f_copy_cons_196(P723 c_195);
static P723 f_freeze_199(P723 c_197, P727 t_198);
static rstr f_checked_203(P727 t_200, P723 c_201, rstr *v_202);
static int f_same_lits_206(P721 a_204, P721 b_205);
static int f_same_209(P727 a_207, P727 b_208);
static P727 f_base_of_211(P727 t_210);
static P723 f_base_cons_214(P727 t_212, P723 c_213);
static rstr f_kind_name_216(P727 t_215);
static void f_check_type_220(P727 got_217, P727 want_218, rt_int line_219);
static rstr f_ctype_222(P727 t_221);
static rstr f_struct_body_224(P727 t_223);
static rstr f_field_decls_226(P727 t_225);
static void f_declare_ctype_228(P727 t_227);
static rstr f_dim_lo_230(rt_int k_229);
static rstr f_dim_hi_232(rt_int k_231);
static rstr f_more_dims_234(P727 t_233);
static rstr f_acnt_237(P727 t_235, rstr *base_236);
static P716 f_cons_lo_240(P723 c_238, rt_int k_239);
static P716 f_cons_hi_243(P723 c_241, rt_int k_242);
static P727 f_idx_type_246(P727 t_244, rt_int k_245);
static void f_init_ascii_247(void);
static rt_int f_lit_index_250(P721 lits_248, rstr *name_249);
static P727 f_resolve_subtype_253(P721 st_251, P723 *c_252);
static int f_float_lit_255(P721 e_254);
static void f_tag_constraint_259(P727 t_256, P721 e_257, P723 c_258);
static int f_opened_261(P727 t_260);
static rstr f_replace_all_265(rstr *s_262, rstr *pat_263, rstr *r_264);
static rstr f_subst_267(rstr *s_266);
static P727 f_new_type_271(P731 y_268, P721 st_269, P723 *c_270);
static void f_init_storage_275(rstr *lval_272, P727 t_273, P723 c_274);
static rstr f_init_call_278(P731 y_276, rstr *lval_277);
static int f_needs_fin_280(P727 t_279);
static rstr f_fin_code_283(rstr *lval_281, P727 t_282);
static P727 f_tparam_type_286(P727 t_284, rstr *name_285);
static void f_make_storage_290(rstr *lval_287, P727 t_288, P723 c_289);
static rt_int f_manifest_293(P721 e_291, int *ok_292);
static P739 f_mk_mval_296(rt_int kind_294, rt_int i_295);
static rt_int f_ipow_299(rt_int a_297, rt_int b_298);
static P739 f_meval_302(P721 e_300, int *ok_301);
static rstr f_bool_text_304(int b_303);
static rt_int f_bool_i_306(int b_305);
static rstr f_mstr_308(P739 v_307);
static int f_ascii_char_310(rt_int i_309);
static int f_user_defined_312(rstr *op_311);
static rstr f_mcopy_314(P727 t_313);
static int f_composite_316(P727 t_315);
static rstr f_assign_code_321(rstr *lval_317, P727 t_318, rstr *v_319, P723 c_320);
static rstr f_copy_code_324(P727 t_322, rstr *v_323);
static rstr f_eq_code_328(P727 t_325, rstr *a_326, rstr *b_327);
static rstr f_elem_assign_332(rstr *lval_329, P727 t_330, rstr *v_331);
static int f_seen_name_335(P725 l_333, rstr *s_334);
static void f_emit_helpers_336(void);
static void f_helper_bodies_338(P727 t_337);
static void f_declare_body_340(P721 elems_339);
static void f_manifest_const_342(P721 d_341);
static int f_exported_346(P721 d_343, rstr *name_344, int *ro_345);
static P731 f_copy_sym_348(P731 y_347);
static void f_gen_capsule_350(P721 d_349);
static void f_capsule_params_354(P721 d_351, P721 args_352, rt_int line_353);
static void f_elaborate_capsule_359(P721 d_355, P731 y_356, P721 args_357, P721 owner_358);
static int f_exports_op_362(P721 d_360, rstr *op_361);
static P716 f_renamed_365(P721 d_363, P731 z_364);
static void f_gen_expose_367(P721 d_366);
static void f_finish_ptr_369(P727 t_368);
static void f_declare_subprogram_371(P721 d_370);
static P731 f_build_subprogram_373(P721 d_372);
static int f_has_pragmat_376(P716 pr_374, rstr *p_375);
static P716 f_suppressing_378(P716 pr_377);
static int f_suppressed_380(rstr *x_379);
static void f_element_382(P721 e_381);
static void f_element1_384(P721 e_383);
static rstr f_storage_387(rstr *name_385, P727 t_386);
static void f_bind_390(P731 y_388, rstr *access_389);
static void f_var_decl_392(P721 d_391);
static void f_open_fin_394(rstr *fc_393);
static void f_close_fins_396(P725 saved_395);
static void f_const_decl_398(P721 d_397);
static void f_subprogram_400(P721 d_399);
static void f_gen_subprogram_403(P721 d_401, P731 y_402);
static rstr f_waits_of_405(P721 d_404);
static rstr f_task_waits_407(P721 elems_406);
static void f_await_tasks_409(P721 elems_408);
static void f_capsule_elements_411(P721 elems_410);
static void f_declare_labels_413(P721 elems_412);
static void f_start_labels_414(void);
static P745 f_goto_label_416(rstr *name_415);
static int f_has_return_418(P721 e_417);
static void f_capsule_body_420(P721 elems_419);
static void f_body_elements_422(P721 elems_421);
static void f_gen_body_424(P721 elems_423);
static void f_pop_frames_426(rt_int upto_425);
static void f_push_cleanup_428(rstr *s_427);
static void f_pop_cleanup_429(void);
static void f_gen_statement_431(P721 s_430);
static void f_st_assign_433(P721 s_432);
static void f_st_call_435(P721 s_434);
static void f_st_if_437(P721 s_436);
static void f_st_case_439(P721 s_438);
static void f_st_repeat_441(P721 s_440);
static void f_st_exit_443(P721 s_442);
static void f_st_return_445(P721 s_444);
static rstr f_result_checked_449(P727 t_446, P723 c_447, rstr *v_448);
static rstr f_exc_id_452(rstr *name_450, rt_int line_451);
static void f_st_guard_454(P721 s_453);
static void f_st_alloc_456(P721 s_455);
static rstr f_act_ref_458(P721 e_457);
static void f_st_create_460(P721 s_459);
static void f_hidden_var_464(rstr *name_461, P727 t_462, rstr *place_463);
static void f_user_create_470(P721 s_465, P731 y_466, rstr *uv_467, P727 ut_468, rstr *nf_469);
static rstr f_wait_alt_475(P721 inv_471, rstr *arr_472, rt_int i_473, int mixed_474);
static int f_builtin_wait_477(P721 inv_476);
static rstr f_wait_op_482(P721 inv_478, rstr *op_479, rstr *q_480, int is_stmt_481);
static void f_user_wait_487(P721 s_483, rstr *arr_484, rstr *w_485, rt_int n_486);
static void f_st_wait_489(P721 s_488);
static P721 f_call_node_493(rstr *name_490, P721 arg_491, rt_int line_492);
static void f_user_region_495(P721 s_494);
static void f_st_region_497(P721 s_496);
static P721 f_gparam_500(P721 g_498, rstr *name_499);
static P731 f_bind_sym_502(P721 p_501);
static int f_same_binds_505(P731 a_503, P731 b_504);
static int f_same_binding_508(P731 a_506, P731 b_507);
static P731 f_tt_binds_513(P721 gd_509, P721 formals_510, P721 actuals_511, rt_int line_512);
static int f_generic_use_515(P721 st_514);
static P731 f_infer_from_520(P721 gd_516, P721 pat_517, P727 t_518, P731 known_519);
static P727 f_instantiate_type_526(P731 g_521, P721 tt_522, P721 args_523, P723 *c_524, rt_int line_525);
static P731 f_instantiate_531(P731 g_527, P721 tt_528, P721 args_529, rt_int line_530);
static rstr f_access_of_533(P731 y_532);
static P721 f_import_of_536(P721 l_534, rstr *name_535);
static int f_check_import_539(P731 y_537, rt_int line_538);
static rstr f_c_ident_541(rstr *s_540);
static rstr f_deref_544(rstr *base_542, P727 t_543);
static int f_is_lvalue_546(P721 e_545);
static void f_lvalue_552(P721 e_547, P716 *code_548, P727 *t_549, P723 *c_550, int *ro_551);
static void f_select_on_560(rstr *base_553, P727 bt_554, P721 e_555, int *ro_556, P716 *code_557, P727 *t_558, P723 *c_559);
static int f_has_call_562(rstr *s_561);
static void f_need_slice_564(P727 t_563);
static rstr f_ix_568(rstr *i_565, rstr *lo_566, rstr *hi_567);
static void f_index_on_577(rstr *base_569, P727 bt_570, P721 e_571, int *ro_572, int lv_573, P716 *code_574, P727 *t_575, P723 *c_576);
static int f_own_attribute_579(P721 e_578);
static rstr f_gexpr_583(P721 e_580, P727 want_581, P727 *t_582);
static rstr f_resolved_586(P721 e_584, P727 *t_585);
static rstr f_gexpr_in_591(P721 e_587, P727 want_588, P723 c_589, P727 *t_590);
static P721 f_copy_node_593(P721 e_592);
static P721 f_wrap_apply_595(P721 e_594);
static rstr f_c_string_597(rstr *s_596);
static P727 f_enum_type_of_600(rstr *lit_598, rt_int line_599);
static rstr f_attribute_603(P721 e_601, P727 *t_602);
static rstr f_gbinop_607(P721 e_604, P727 want_605, P727 *t_606);
static rstr f_constructor_612(P721 e_608, P727 want_609, P723 ctx_610, P727 *t_611);
static rstr f_comp_value_616(P727 t_613, P723 c_614, rstr *v_615);
static int f_has_at_618(rstr *s_617);
static rstr f_set_elem_621(P727 st_619, rstr *v_620);
static rstr f_array_cons_626(P721 e_622, P727 at_623, P723 ctx_624, P727 *t_625);
static rstr f_fill_items_632(P721 items_627, P727 at_628, rstr *tmp_629, P725 prefix_630, rt_int dim_631);
static rt_int f_e_line_634(P721 e_633);
static P725 f_add_line_637(P725 l_635, rstr *s_636);
static rstr f_item_value_642(P721 e_638, P727 at_639, rt_int line_640, P727 *vt_641);
static rstr f_key_loop_647(P721 k_643, P727 at_644, rt_int d_645, rstr *xv_646);
static rstr f_store_at_652(P727 at_648, rstr *tmp_649, P725 xs_650, rt_int n_651);
static int f_fits_655(P731 y_653, P721 args_654);
static P731 f_resolve_overload_661(rstr *name_656, P721 tt_657, P721 args_658, int is_stmt_659, rt_int line_660);
static int f_tt_fits_664(P731 y_662, P721 tt_663);
static P731 f_overload_chain_667(rstr *name_665, rt_int pass_666);
static int f_is_builtin_669(rstr *n_668);
static int f_is_low_level_671(rstr *n_670);
static rstr f_me_high_675(P721 tt_672, rt_int line_673, P727 *t_674);
static rstr f_type_tag_677(P727 t_676);
static rstr f_lock_ref_680(P721 e_678, rstr *name_679);
static P731 f_user_op_683(rstr *op_681, P721 args_682);
static rstr f_gcall_687(P721 e_684, int is_stmt_685, P727 *t_686);
static P725 f_requires_689(P731 y_688);
static void f_add_req_692(P731 y_690, rstr *name_691);
static void f_require_calls_695(P731 y_693, P721 e_694);
static int f_declared_in_698(P721 elems_696, rstr *name_697);
static void f_check_requires_701(P731 y_699, rt_int line_700);
static rstr f_actual_bounds_705(P727 ft_702, P727 t_703, P723 c_704);
static rstr f_builtin_712(rstr *name_706, P721 tt_707, P721 args_708, rt_int line_709, int is_stmt_710, P727 *t_711);
static void f_translate_714(P721 units_713);
static void f_print_program_715(void);
static int ex_compile_error_1;
static P719 g_toks_751;
static rt_int g_ntoks_752;
static rt_int g_tpos_753;
static rt_int g_src_line_754;
static P716 g_pending_prag_755;
static P735 g_table_756;
static P735 g_genv_757;
static P731 g_all_insts_758;
static rt_int g_depth_759;
static P731 g_scope_stack_760;
static P727 g_all_types_761;
static rt_int g_serial_762;
static P743 g_out_types_763;
static P743 g_out_helpers_764;
static P743 g_out_protos_765;
static P743 g_out_globals_766;
static P743 g_out_funcs_767;
static P743 g_out_init_768;
static P743 g_out_excs_769;
static P743 g_code_770;
static P743 g_fields_buf_771;
static int g_in_func_772;
static rt_int g_cur_level_773;
static P737 g_fctx_774;
static P747 g_caps_775;
static P749 g_cap_waits_776;
static P725 g_psub_777;
static P716 g_st_field_778;
static P743 g_out_frames_779;
static P743 g_out_roots_780;
static int g_uses_free_781;
static P725 g_fins_782;
static int g_uses_findyn_783;
static P731 g_func_sym_784;
static P723 g_func_rc_785;
static P716 g_cap_ret_786;
static P716 g_cap_rflag_787;
static rt_int g_ret_frames_788;
static rt_int g_gdepth_789;
static P716 g_suppress_790;
static P723 g_cons_ctx_791;
static P745 g_exits_792;
static P745 g_gotos_793;
static rt_int g_frames_794;
static P725 g_handlers_795;
static P725 g_cleanups_796;
static rt_int g_trial_797;
static P725 g_mcopies_798;
static P727 g_ty_int_799;
static P727 g_ty_bool_800;
static P727 g_ty_float_801;
static P727 g_ty_ascii_802;
static P727 g_ty_string_803;
static P727 g_ty_void_804;
static P727 g_ty_file_805;
static P727 g_ty_nil_806;
static P727 g_ty_lock_807;
static P727 g_ty_latch_808;
static P727 g_ty_act_809;
static P723 g_no_cons_810;
static P716 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_811 = NULL;
{ rstr *cell812 = rt_alloc(sizeof(rstr));
rt_int pv813 = ((*F->s_2)).len;
(*cell812) = rt_str_new(pv813);
rt_str_assign(&(*cell812), (*F->s_2));
F->t_811 = cell812;
}
F->result_ = F->t_811;
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
F->r_814 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_814, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_814;
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
F->r_815 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_815, (*F->s_14));
{ rt_int lo817 = ((rt_int)1LL), hi818 = ((*F->s_14)).len;
for (rt_int it819 = lo817; it819 <= hi818; it819++) {
F->i_816 = it819;
if (((65 <= rt_str_get(F->r_815, F->i_816)) && (rt_str_get(F->r_815, F->i_816) <= 90))) {
(*rt_str_at(&F->r_815, F->i_816)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_str_get(F->r_815, F->i_816)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_815;
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
F->l_820 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_821 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_820), rt_str(" ", 1)));
{ rt_int lo823 = ((rt_int)1LL), hi824 = rt_add(rt_sub(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len, (F->w_821).len), ((rt_int)1LL));
for (rt_int it825 = lo823; it825 <= hi824; it825++) {
F->i_822 = it825;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_822, rt_sub(rt_add(F->i_822, (F->w_821).len), ((rt_int)1LL))), F->w_821)) {
F->result_ = rt_str_cat(F->l_820, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_820;
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
g_serial_762 = rt_add(g_serial_762, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_762));
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
if ((g_trial_797 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P743 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_826 = NULL;
{ R744 *cell827 = rt_alloc(sizeof(R744));
(*cell827).head = NULL;
(*cell827).tail = NULL;
F->b_826 = cell827;
}
F->result_ = F->b_826;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P743 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_828 = NULL;
{ R726 *cell829 = rt_alloc(sizeof(R726));
(*cell829).s = NULL;
(*cell829).next = NULL;
F->l_828 = cell829;
}
(*(P725)rt_nil_check(F->l_828)).s = f_mk_3(&(*F->s_26));
if (((*(P743)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P743)rt_nil_check(F->b_25)).head = F->l_828;
} else {
(*(P725)rt_nil_check((*(P743)rt_nil_check(F->b_25)).tail)).next = F->l_828;
}
(*(P743)rt_nil_check(F->b_25)).tail = F->l_828;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_770, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P743 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_830 = NULL;
F->l_830 = (*(P743)rt_nil_check(F->b_30)).head;
while ((F->l_830 != NULL)) {
rt_putln((*(P716)rt_nil_check((*(P725)rt_nil_check(F->l_830)).s)));
F->l_830 = (*(P725)rt_nil_check(F->l_830)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P743 a_32, P743 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P743)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P743)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P743)rt_nil_check(F->a_32)).head = (*(P743)rt_nil_check(F->b_33)).head;
} else {
(*(P725)rt_nil_check((*(P743)rt_nil_check(F->a_32)).tail)).next = (*(P743)rt_nil_check(F->b_33)).head;
}
(*(P743)rt_nil_check(F->a_32)).tail = (*(P743)rt_nil_check(F->b_33)).tail;
(*(P743)rt_nil_check(F->b_33)).head = NULL;
(*(P743)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel831 = (*F->w_35);
if (0 || rt_str_eq(sel831, rt_str("ABBREV", 6)) || rt_str_eq(sel831, rt_str("ABNORMAL", 8)) || rt_str_eq(sel831, rt_str("ALL", 3)) || rt_str_eq(sel831, rt_str("ALLOC", 5)) || rt_str_eq(sel831, rt_str("ASSERT", 6)) || rt_str_eq(sel831, rt_str("BEGIN", 5)) || rt_str_eq(sel831, rt_str("BY", 2)) || rt_str_eq(sel831, rt_str("CAPSULE", 7)) || rt_str_eq(sel831, rt_str("CASE", 4)) || rt_str_eq(sel831, rt_str("CONST", 5)) || rt_str_eq(sel831, rt_str("CREATE", 6)) || rt_str_eq(sel831, rt_str("DO", 2)) || rt_str_eq(sel831, rt_str("ELSE", 4)) || rt_str_eq(sel831, rt_str("ELSEIF", 6)) || rt_str_eq(sel831, rt_str("END", 3)) || rt_str_eq(sel831, rt_str("EXCEPTION", 9)) || rt_str_eq(sel831, rt_str("EXIT", 4)) || rt_str_eq(sel831, rt_str("EXPORTS", 7)) || rt_str_eq(sel831, rt_str("EXPOSE", 6)) || rt_str_eq(sel831, rt_str("EXTERNAL", 8)) || rt_str_eq(sel831, rt_str("FOR", 3)) || rt_str_eq(sel831, rt_str("FROM", 4)) || rt_str_eq(sel831, rt_str("FUNC", 4)) || rt_str_eq(sel831, rt_str("GENERIC", 7)) || rt_str_eq(sel831, rt_str("GOTO", 4)) || rt_str_eq(sel831, rt_str("GUARD", 5)) || rt_str_eq(sel831, rt_str("IF", 2)) || rt_str_eq(sel831, rt_str("IMPORTS", 7)) || rt_str_eq(sel831, rt_str("LOCATION", 8)) || rt_str_eq(sel831, rt_str("NAMED", 5)) || rt_str_eq(sel831, rt_str("NEEDS", 5)) || rt_str_eq(sel831, rt_str("NEW", 3)) || rt_str_eq(sel831, rt_str("NONE", 4)) || rt_str_eq(sel831, rt_str("OUT", 3)) || rt_str_eq(sel831, rt_str("OF", 2)) || rt_str_eq(sel831, rt_str("PRAG", 4)) || rt_str_eq(sel831, rt_str("PROC", 4)) || rt_str_eq(sel831, rt_str("RAISE", 5)) || rt_str_eq(sel831, rt_str("READONLY", 8)) || rt_str_eq(sel831, rt_str("REVERSE", 7)) || rt_str_eq(sel831, rt_str("REGION", 6)) || rt_str_eq(sel831, rt_str("RENAMING", 8)) || rt_str_eq(sel831, rt_str("REP", 3)) || rt_str_eq(sel831, rt_str("REPEAT", 6)) || rt_str_eq(sel831, rt_str("RERAISE", 7)) || rt_str_eq(sel831, rt_str("RETURN", 6)) || rt_str_eq(sel831, rt_str("SUBTYPE", 7)) || rt_str_eq(sel831, rt_str("TASK", 4)) || rt_str_eq(sel831, rt_str("THEN", 4)) || rt_str_eq(sel831, rt_str("TO", 2)) || rt_str_eq(sel831, rt_str("TYPE", 4)) || rt_str_eq(sel831, rt_str("VAR", 3)) || rt_str_eq(sel831, rt_str("WAIT", 4)) || rt_str_eq(sel831, rt_str("WHEN", 4)) || rt_str_eq(sel831, rt_str("WHILE", 5))) {
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
F->t_832 = NULL;
{ R718 *cell833 = rt_alloc(sizeof(R718));
(*cell833).s = NULL;
(*cell833).prags = NULL;
F->t_832 = cell833;
}
(*(P717)rt_nil_check(F->t_832)).kind = F->kind_39;
(*(P717)rt_nil_check(F->t_832)).line = g_src_line_754;
(*(P717)rt_nil_check(F->t_832)).ival = F->ival_41;
(*(P717)rt_nil_check(F->t_832)).s = f_mk_3(&(*F->s_40));
(*(P717)rt_nil_check(F->t_832)).prags = g_pending_prag_755;
g_pending_prag_755 = NULL;
g_ntoks_752 = rt_add(g_ntoks_752, ((rt_int)1LL));
(*(P719)rt_nil_check(g_toks_751)).p[(rt_index(g_ntoks_752, (*(P719)rt_nil_check(g_toks_751)).lo, (*(P719)rt_nil_check(g_toks_751)).hi) - (*(P719)rt_nil_check(g_toks_751)).lo)] = F->t_832;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_834 = rt_add(F->i_44, ((rt_int)1LL));
while (((F->j_834 <= ((*F->line_43)).len) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_834)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_834))) || (rt_str_get((*F->line_43), F->j_834) == 95)))) {
if (((rt_str_get((*F->line_43), F->j_834) == 95) && ((F->j_834 == ((*F->line_43)).len) || (!(f_is_letter_9(rt_str_get((*F->line_43), rt_add(F->j_834, ((rt_int)1LL)))) || f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_834, ((rt_int)1LL))))))))) {
f_fail_23(g_src_line_754, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_834 = rt_add(F->j_834, ((rt_int)1LL));
}
F->result_ = F->j_834;
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
F->w_835 = rt_str_new(((*F->s_46)).len);
rt_str_assign(&F->w_835, (*F->s_46));
{ rt_int lo837 = ((rt_int)1LL), hi838 = (F->w_835).len;
for (rt_int it839 = lo837; it839 <= hi838; it839++) {
F->k_836 = it839;
(*rt_str_at(&F->w_835, F->k_836)) = f_upper_13(rt_str_get(F->w_835, F->k_836));
}
}
F->result_ = F->w_835;
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
F->j_840 = F->i_49;
while (((F->j_840 <= ((*F->line_48)).len) && ((rt_str_get((*F->line_48), F->j_840) == 32) || (rt_str_get((*F->line_48), F->j_840) == 9)))) {
F->j_840 = rt_add(F->j_840, ((rt_int)1LL));
}
F->result_ = F->j_840;
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
F->j_841 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_842 = NULL;
F->r_842 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_843 = 1;
if (((F->j_841 > ((*F->line_51)).len) || (rt_str_get((*F->line_51), F->j_841) != 40))) {
f_fail_23(g_src_line_754, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_841 = rt_add(F->j_841, ((rt_int)1LL));
while (F->more_843) {
F->j_841 = f_skip_blanks_50(&(*F->line_51), F->j_841);
if (((F->j_841 > ((*F->line_51)).len) || (!f_is_letter_9(rt_str_get((*F->line_51), F->j_841))))) {
f_fail_23(g_src_line_754, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_844 = f_ident_end_45(&(*F->line_51), F->j_841);
F->r_842 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->r_842)), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), F->j_841, rt_sub(F->k_844, ((rt_int)1LL))); b_; }))); b_; }));
F->j_841 = f_skip_blanks_50(&(*F->line_51), F->k_844);
if (((F->j_841 <= ((*F->line_51)).len) && (rt_str_get((*F->line_51), F->j_841) == 40))) {
F->go_845 = 1;
F->r_842 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->r_842)), rt_str("(", 1)); b_; }));
F->j_841 = rt_add(F->j_841, ((rt_int)1LL));
while (F->go_845) {
F->j_841 = f_skip_blanks_50(&(*F->line_51), F->j_841);
if (((F->j_841 > ((*F->line_51)).len) || (!f_is_letter_9(rt_str_get((*F->line_51), F->j_841))))) {
f_fail_23(g_src_line_754, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_844 = f_ident_end_45(&(*F->line_51), F->j_841);
F->r_842 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->r_842)), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), F->j_841, rt_sub(F->k_844, ((rt_int)1LL))); b_; }))); b_; }));
F->j_841 = f_skip_blanks_50(&(*F->line_51), F->k_844);
if (((F->j_841 <= ((*F->line_51)).len) && (rt_str_get((*F->line_51), F->j_841) == 44))) {
F->r_842 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->r_842)), rt_str(",", 1)); b_; }));
F->j_841 = rt_add(F->j_841, ((rt_int)1LL));
} else if (((F->j_841 <= ((*F->line_51)).len) && (rt_str_get((*F->line_51), F->j_841) == 41))) {
F->j_841 = rt_add(F->j_841, ((rt_int)1LL));
F->go_845 = 0;
} else {
f_fail_23(g_src_line_754, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_842 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->r_842)), rt_str(")", 1)); b_; }));
}
F->r_842 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->r_842)), rt_str(";", 1)); b_; }));
F->j_841 = f_skip_blanks_50(&(*F->line_51), F->j_841);
if (((F->j_841 <= ((*F->line_51)).len) && (rt_str_get((*F->line_51), F->j_841) == 44))) {
F->j_841 = rt_add(F->j_841, ((rt_int)1LL));
} else if (((F->j_841 <= ((*F->line_51)).len) && (rt_str_get((*F->line_51), F->j_841) == 41))) {
F->j_841 = rt_add(F->j_841, ((rt_int)1LL));
F->more_843 = 0;
} else {
f_fail_23(g_src_line_754, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(*(P716)rt_nil_check(F->r_842)));
if ((g_pending_prag_755 == NULL)) {
g_pending_prag_755 = F->r_842;
} else {
g_pending_prag_755 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(g_pending_prag_755)), (*(P716)rt_nil_check(F->r_842))); b_; }));
}
F->result_ = F->j_841;
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
F->i_846 = ((rt_int)1LL);
while ((F->i_846 <= ((*F->r_54)).len)) {
F->k_847 = F->i_846;
while ((rt_str_get((*F->r_54), F->k_847) != 59)) {
F->k_847 = rt_add(F->k_847, ((rt_int)1LL));
}
{
F->p_848 = rt_str_copy(rt_str_slice((*F->r_54), F->i_846, rt_sub(F->k_847, ((rt_int)1LL))));
F->ok_849 = ((((((((((rt_str_eq(F->p_848, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_848, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_848, rt_str("OPEN", 4))) || rt_str_eq(F->p_848, rt_str("CLOSED", 6))) || rt_str_eq(F->p_848, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_848, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_848, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_848, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_848, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_848, rt_str("OK(SHARE)", 9))) || (((F->p_848).len > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_848, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_850 = (((((((((F->p_848).len >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_848, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_848, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_848, rt_str("OPEN", 4))) || rt_str_eq(F->p_848, rt_str("CLOSED", 6))) || (((F->p_848).len >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_848, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_848, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_848, rt_str("NONREENTRANT", 12))) || (((F->p_848).len >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_848, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_850 && (!F->ok_849))) {
f_fail_23(g_src_line_754, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_848); b_; }));
}
}
F->i_846 = rt_add(F->k_847, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_851 = ((rt_int)1LL);
F->j_852 = ((rt_int)0LL);
F->n_853 = ((*F->line_56)).len;
while ((F->i_851 <= F->n_853)) {
F->c_854 = rt_str_get((*F->line_56), F->i_851);
if (((((F->c_854 == 32) || (F->c_854 == 9)) || (F->c_854 == 13)) || (F->c_854 == 12))) {
F->i_851 = rt_add(F->i_851, ((rt_int)1LL));
} else if ((F->c_854 == 37)) {
F->i_851 = rt_add(F->n_853, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_854)) {
F->j_852 = f_ident_end_45(&(*F->line_56), F->i_851);
{
F->w_855 = rt_str_new(rt_sub(F->j_852, F->i_851));
rt_str_assign(&F->w_855, rt_str_slice((*F->line_56), F->i_851, rt_sub(F->j_852, ((rt_int)1LL))));
{ rt_int lo857 = ((rt_int)1LL), hi858 = (F->w_855).len;
for (rt_int it859 = lo857; it859 <= hi858; it859++) {
F->k_856 = it859;
(*rt_str_at(&F->w_855, F->k_856)) = f_upper_13(rt_str_get(F->w_855, F->k_856));
}
}
if (rt_str_eq(F->w_855, rt_str("PRAGMAT", 7))) {
while (((F->j_852 <= F->n_853) && (rt_str_get((*F->line_56), F->j_852) != 59))) {
F->j_852 = rt_add(F->j_852, ((rt_int)1LL));
}
F->j_852 = rt_add(F->j_852, ((rt_int)1LL));
} else if (rt_str_eq(F->w_855, rt_str("PRAG", 4))) {
F->j_852 = f_lex_prag_53(&(*F->line_56), F->j_852);
} else if (f_is_reserved_36(&F->w_855)) {
f_add_token_42((((rt_int)2LL)), &F->w_855, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_855)) {
f_add_token_42((((rt_int)3LL)), &F->w_855, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_855, ((rt_int)0LL));
}
}
F->i_851 = F->j_852;
} else if (f_is_digit_11(F->c_854)) {
F->j_852 = F->i_851;
while (((F->j_852 <= F->n_853) && f_is_digit_11(rt_str_get((*F->line_56), F->j_852)))) {
F->j_852 = rt_add(F->j_852, ((rt_int)1LL));
}
if ((((F->j_852 < F->n_853) && (rt_str_get((*F->line_56), F->j_852) == 46)) && f_is_digit_11(rt_str_get((*F->line_56), rt_add(F->j_852, ((rt_int)1LL)))))) {
F->j_852 = rt_add(F->j_852, ((rt_int)1LL));
while (((F->j_852 <= F->n_853) && f_is_digit_11(rt_str_get((*F->line_56), F->j_852)))) {
F->j_852 = rt_add(F->j_852, ((rt_int)1LL));
}
if (((F->j_852 <= F->n_853) && ((rt_str_get((*F->line_56), F->j_852) == 69) || (rt_str_get((*F->line_56), F->j_852) == 101)))) {
F->j_852 = rt_add(F->j_852, ((rt_int)1LL));
if (((F->j_852 <= F->n_853) && ((rt_str_get((*F->line_56), F->j_852) == 43) || (rt_str_get((*F->line_56), F->j_852) == 45)))) {
F->j_852 = rt_add(F->j_852, ((rt_int)1LL));
}
while (((F->j_852 <= F->n_853) && f_is_digit_11(rt_str_get((*F->line_56), F->j_852)))) {
F->j_852 = rt_add(F->j_852, ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), F->i_851, rt_sub(F->j_852, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), F->i_851, rt_sub(F->j_852, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), F->i_851, rt_sub(F->j_852, ((rt_int)1LL)))));
}
F->i_851 = F->j_852;
} else if ((((F->c_854 == 39) && (F->i_851 < F->n_853)) && (rt_str_get((*F->line_56), rt_add(F->i_851, ((rt_int)1LL))) == 39))) {
F->j_852 = rt_add(F->i_851, ((rt_int)2LL));
while (((F->j_852 < F->n_853) && (!((rt_str_get((*F->line_56), F->j_852) == 39) && (rt_str_get((*F->line_56), rt_add(F->j_852, ((rt_int)1LL))) == 39))))) {
if ((rt_str_get((*F->line_56), F->j_852) == 34)) {
f_fail_23(g_src_line_754, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_852 = rt_add(F->j_852, ((rt_int)1LL));
}
if ((F->j_852 >= F->n_853)) {
f_fail_23(g_src_line_754, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(F->i_851, ((rt_int)2LL)), rt_sub(F->j_852, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_851 = rt_add(F->j_852, ((rt_int)2LL));
} else if ((F->c_854 == 39)) {
F->j_852 = rt_add(F->i_851, ((rt_int)1LL));
if (((F->j_852 > F->n_853) || (!f_is_letter_9(rt_str_get((*F->line_56), F->j_852))))) {
f_fail_23(g_src_line_754, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_852 = f_ident_end_45(&(*F->line_56), F->j_852);
{
F->w_860 = rt_str_new(rt_sub(rt_sub(F->j_852, F->i_851), ((rt_int)1LL)));
rt_str_assign(&F->w_860, rt_str_slice((*F->line_56), rt_add(F->i_851, ((rt_int)1LL)), rt_sub(F->j_852, ((rt_int)1LL))));
{ rt_int lo862 = ((rt_int)1LL), hi863 = (F->w_860).len;
for (rt_int it864 = lo862; it864 <= hi863; it864++) {
F->k_861 = it864;
(*rt_str_at(&F->w_860, F->k_861)) = f_upper_13(rt_str_get(F->w_860, F->k_861));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_860, ((rt_int)0LL));
}
F->i_851 = F->j_852;
} else if ((F->c_854 == 34)) {
F->j_852 = rt_add(F->i_851, ((rt_int)1LL));
while (((F->j_852 <= F->n_853) && (rt_str_get((*F->line_56), F->j_852) != 34))) {
if ((rt_str_get((*F->line_56), F->j_852) == 39)) {
f_fail_23(g_src_line_754, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_852 = rt_add(F->j_852, ((rt_int)1LL));
}
if ((F->j_852 > F->n_853)) {
f_fail_23(g_src_line_754, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(F->i_851, ((rt_int)1LL)), rt_sub(F->j_852, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_851 = rt_add(F->j_852, ((rt_int)1LL));
} else {
{
F->two_865 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_865, rt_str("  ", 2));
(*rt_str_at(&F->two_865, ((rt_int)1LL))) = F->c_854;
if ((F->i_851 < F->n_853)) {
(*rt_str_at(&F->two_865, ((rt_int)2LL))) = rt_str_get((*F->line_56), rt_add(F->i_851, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_865, rt_str(":=", 2)) || rt_str_eq(F->two_865, rt_str("=>", 2))) || rt_str_eq(F->two_865, rt_str("..", 2))) || rt_str_eq(F->two_865, rt_str("**", 2))) || rt_str_eq(F->two_865, rt_str("/=", 2))) || rt_str_eq(F->two_865, rt_str("<=", 2))) || rt_str_eq(F->two_865, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_865, ((rt_int)0LL));
F->i_851 = rt_add(F->i_851, ((rt_int)2LL));
} else if (((rt_str_eq(F->two_865, rt_str("<<", 2)) || rt_str_eq(F->two_865, rt_str(">>", 2))) || rt_str_eq(F->two_865, rt_str("::", 2)))) {
if (rt_str_eq(F->two_865, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_865, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_851 = rt_add(F->i_851, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_854 == 40) || (F->c_854 == 41)) || (F->c_854 == 91)) || (F->c_854 == 93)) || (F->c_854 == 44)) || (F->c_854 == 58)) || (F->c_854 == 59)) || (F->c_854 == 46)) || (F->c_854 == 35)) || (F->c_854 == 43)) || (F->c_854 == 45)) || (F->c_854 == 42)) || (F->c_854 == 47)) || (F->c_854 == 38)) || (F->c_854 == 61)) || (F->c_854 == 60)) || (F->c_854 == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_854); b_; }), ((rt_int)0LL));
F->i_851 = rt_add(F->i_851, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_754, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_866 = rt_str_new(rt_sizeln());
rt_readln(&F->line_866);
g_src_line_754 = rt_add(g_src_line_754, ((rt_int)1LL));
f_lex_line_57(&F->line_866);
}
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P721 f_nn_61(rt_int kind_59, rt_int line_60) {
  struct f_nn_61fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_59 = kind_59;
F->line_60 = line_60;
F->x_867 = NULL;
{ R722 *cell868 = rt_alloc(sizeof(R722));
(*cell868).name = NULL;
(*cell868).tag = NULL;
(*cell868).prags = NULL;
(*cell868).labels = NULL;
(*cell868).a = NULL;
(*cell868).b = NULL;
(*cell868).c = NULL;
(*cell868).d = NULL;
(*cell868).e = NULL;
(*cell868).next = NULL;
F->x_867 = cell868;
}
(*(P721)rt_nil_check(F->x_867)).kind = F->kind_59;
(*(P721)rt_nil_check(F->x_867)).line = F->line_60;
F->result_ = F->x_867;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_65(P721 *head_62, P721 *tail_63, P721 x_64) {
  struct f_append_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_62 = head_62;
F->tail_63 = tail_63;
F->x_64 = x_64;
if (((*F->head_62) == NULL)) {
(*F->head_62) = F->x_64;
} else {
(*(P721)rt_nil_check((*F->tail_63))).next = F->x_64;
}
(*F->tail_63) = F->x_64;
while (((*(P721)rt_nil_check((*F->tail_63))).next != NULL)) {
(*F->tail_63) = (*(P721)rt_nil_check((*F->tail_63))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_67(P721 l_66) {
  struct f_list_len_67fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_66 = l_66;
F->n_869 = ((rt_int)0LL);
F->p_870 = NULL;
F->p_870 = F->l_66;
while ((F->p_870 != NULL)) {
F->n_869 = rt_add(F->n_869, ((rt_int)1LL));
F->p_870 = (*(P721)rt_nil_check(F->p_870)).next;
}
F->result_ = F->n_869;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_68(void) {
  struct f_cur_line_68fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).line;
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
F->result_ = (((*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).kind == (((rt_int)2LL))) && rt_str_eq((*(P716)rt_nil_check((*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s)), (*F->w_69)));
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
F->result_ = (((*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).kind == (((rt_int)3LL))) && rt_str_eq((*(P716)rt_nil_check((*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s)), (*F->w_71)));
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
F->result_ = ((*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).kind == F->k_73);
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
if ((rt_add(g_tpos_753, F->k_75) > g_ntoks_752)) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(rt_add(g_tpos_753, F->k_75), b_.lo, b_.hi) - b_.lo)]; }))).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P716 f_text_at_78(rt_int k_77) {
  struct f_text_at_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_77 = k_77;
if ((rt_add(g_tpos_753, F->k_77) > g_ntoks_752)) {
F->result_ = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_ntoks_752, b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(rt_add(g_tpos_753, F->k_77), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23((*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_79), rt_str(" (at ", 5)), (*(P716)rt_nil_check((*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s))), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_82(rstr *w_81) {
  struct f_accept_kw_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_81 = w_81;
if (f_at_kw_70(&(*F->w_81))) {
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
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
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
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
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
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
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P716 f_expect_id_89(void) {
  struct f_expect_id_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->result_ = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(rt_sub(g_tpos_753, ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_name_node_90(void) {
  struct f_name_node_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_871 = NULL;
F->x_871 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P721)rt_nil_check(F->x_871)).name = f_expect_id_89();
F->result_ = F->x_871;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_id_list_91(void) {
  struct f_id_list_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_872 = NULL;
F->tail_873 = NULL;
f_append_65(&F->head_872, &F->tail_873, f_name_node_90());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_872, &F->tail_873, f_name_node_90());
}
F->result_ = F->head_872;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_p_subtype_92(void) {
  struct f_p_subtype_92fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_874 = f_cur_line_68();
F->x_875 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->x_875 = f_nn_61((((rt_int)81LL)), F->line_874);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P721)rt_nil_check(F->x_875)).a = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_875;
goto ret_;
}
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_876 = rt_str_copy((*(P716)rt_nil_check((*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s)));
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
if (rt_str_eq(F->w_876, rt_str("ARRAY", 5))) {
F->x_875 = f_nn_61((((rt_int)74LL)), F->line_874);
{
F->head_877 = NULL;
F->tail_878 = NULL;
f_append_65(&F->head_877, &F->tail_878, f_p_subtype_92());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_877, &F->tail_878, f_p_subtype_92());
}
(*(P721)rt_nil_check(F->x_875)).a = F->head_877;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P721)rt_nil_check(F->x_875)).b = f_p_subtype_92();
} else if ((rt_str_eq(F->w_876, rt_str("RECORD", 6)) || rt_str_eq(F->w_876, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_876, rt_str("RECORD", 6))) {
F->x_875 = f_nn_61((((rt_int)75LL)), F->line_874);
} else {
F->x_875 = f_nn_61((((rt_int)76LL)), F->line_874);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_879 = NULL;
F->tail_880 = NULL;
F->more_881 = 1;
while (F->more_881) {
F->names_882 = NULL;
F->names_882 = f_id_list_91();
F->st_883 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_883 = f_p_subtype_92();
while ((F->names_882 != NULL)) {
F->cmp_884 = NULL;
F->cmp_884 = f_nn_61((((rt_int)63LL)), (*(P721)rt_nil_check(F->names_882)).line);
(*(P721)rt_nil_check(F->cmp_884)).name = (*(P721)rt_nil_check(F->names_882)).name;
(*(P721)rt_nil_check(F->cmp_884)).a = F->st_883;
f_append_65(&F->head_879, &F->tail_880, F->cmp_884);
F->names_882 = (*(P721)rt_nil_check(F->names_882)).next;
}
F->more_881 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P721)rt_nil_check(F->x_875)).a = F->head_879;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_876, rt_str("UNION", 5)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_875)).b = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_876, rt_str("ENUM", 4))) {
F->x_875 = f_nn_61((((rt_int)72LL)), F->line_874);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_885 = NULL;
F->tail_886 = NULL;
F->more_887 = 1;
while (F->more_887) {
F->lit_888 = NULL;
F->lit_888 = f_nn_61((((rt_int)4LL)), F->line_874);
if ((!f_at_kind_74((((rt_int)6LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P721)rt_nil_check(F->lit_888)).name = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
f_append_65(&F->head_885, &F->tail_886, F->lit_888);
F->more_887 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P721)rt_nil_check(F->x_875)).a = F->head_885;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_875)).b = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P721)rt_nil_check(F->x_875)).c = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_876, rt_str("STRING", 6)) || rt_str_eq(F->w_876, rt_str("SET", 3))) || rt_str_eq(F->w_876, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_876, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_876, rt_str("STRING", 6))) {
F->x_875 = f_nn_61((((rt_int)73LL)), F->line_874);
} else if (rt_str_eq(F->w_876, rt_str("SET", 3))) {
F->x_875 = f_nn_61((((rt_int)77LL)), F->line_874);
} else if (rt_str_eq(F->w_876, rt_str("MAILBOX", 7))) {
F->x_875 = f_nn_61((((rt_int)78LL)), F->line_874);
} else {
F->x_875 = f_nn_61((((rt_int)79LL)), F->line_874);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P721)rt_nil_check(F->x_875)).a = f_p_subtype_92();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_875)).b = f_actual_params_93();
}
} else if (rt_str_eq(F->w_876, rt_str("INT", 3))) {
F->x_875 = f_nn_61((((rt_int)70LL)), F->line_874);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_875)).a = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P721)rt_nil_check(F->x_875)).b = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_876, rt_str("FLOAT", 5))) {
F->x_875 = f_nn_61((((rt_int)71LL)), F->line_874);
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_875)).a = f_expr_102();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_875)).b = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P721)rt_nil_check(F->x_875)).c = f_expr_102();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_875 = f_nn_61((((rt_int)80LL)), F->line_874);
(*(P721)rt_nil_check(F->x_875)).name = f_mk_3(&F->w_876);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_875)).a = f_actual_tt_96();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_875)).b = f_actual_params_93();
(*(P721)rt_nil_check(F->x_875)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_875;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_actual_params_93(void) {
  struct f_actual_params_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_889 = NULL;
F->tail_890 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_65(&F->head_889, &F->tail_890, f_expr_102());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_889, &F->tail_890, f_expr_102());
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_889;
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

static P721 f_actual_tt_96(void) {
  struct f_actual_tt_96fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_891 = NULL;
F->tail_892 = NULL;
F->more_893 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_893) {
if ((f_at_kind_74((((rt_int)1LL))) && f_is_type_word_95(&(*(P716)rt_nil_check((*(P717)rt_nil_check((*(P719)rt_nil_check(g_toks_751)).p[(rt_index(g_tpos_753, (*(P719)rt_nil_check(g_toks_751)).lo, (*(P719)rt_nil_check(g_toks_751)).hi) - (*(P719)rt_nil_check(g_toks_751)).lo)])).s))))) {
f_append_65(&F->head_891, &F->tail_892, f_p_subtype_92());
} else {
f_append_65(&F->head_891, &F->tail_892, f_expr_102());
}
F->more_893 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_891;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_binop_101(P716 op_97, P721 l_98, P721 r_99, rt_int line_100) {
  struct f_binop_101fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_97 = op_97;
F->l_98 = l_98;
F->r_99 = r_99;
F->line_100 = line_100;
F->x_894 = NULL;
F->x_894 = f_nn_61((((rt_int)9LL)), F->line_100);
(*(P721)rt_nil_check(F->x_894)).name = F->op_97;
(*(P721)rt_nil_check(F->x_894)).a = F->l_98;
(*(P721)rt_nil_check(F->x_894)).b = F->r_99;
F->result_ = F->x_894;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_expr_102(void) {
  struct f_expr_102fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_895 = NULL;
F->l_895 = f_expr_and_103();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_896 = NULL;
F->op_896 = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_897 = f_cur_line_68();
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->l_895 = f_binop_101(F->op_896, F->l_895, f_expr_and_103(), F->line_897);
}
F->result_ = F->l_895;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_expr_and_103(void) {
  struct f_expr_and_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_898 = NULL;
F->l_898 = f_expr_not_104();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_899 = f_cur_line_68();
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->l_898 = f_binop_101(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_898, f_expr_not_104(), F->line_899);
}
F->result_ = F->l_898;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_expr_not_104(void) {
  struct f_expr_not_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_900 = NULL;
F->x_900 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_900)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P721)rt_nil_check(F->x_900)).a = f_expr_not_104();
F->result_ = F->x_900;
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

static P721 f_expr_rel_107(void) {
  struct f_expr_rel_107fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_901 = NULL;
F->l_901 = f_expr_add_108();
if ((f_at_kind_74((((rt_int)3LL))) && f_is_rel_106(&(*(P716)rt_nil_check((*(P717)rt_nil_check((*(P719)rt_nil_check(g_toks_751)).p[(rt_index(g_tpos_753, (*(P719)rt_nil_check(g_toks_751)).lo, (*(P719)rt_nil_check(g_toks_751)).hi) - (*(P719)rt_nil_check(g_toks_751)).lo)])).s))))) {
F->op_902 = NULL;
F->op_902 = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_903 = f_cur_line_68();
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->l_901 = f_binop_101(F->op_902, F->l_901, f_expr_add_108(), F->line_903);
}
F->result_ = F->l_901;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_expr_add_108(void) {
  struct f_expr_add_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_904 = NULL;
F->l_904 = f_expr_mul_109();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_905 = NULL;
F->op_905 = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_906 = f_cur_line_68();
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->l_904 = f_binop_101(F->op_905, F->l_904, f_expr_mul_109(), F->line_906);
}
F->result_ = F->l_904;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_expr_mul_109(void) {
  struct f_expr_mul_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_907 = NULL;
F->l_907 = f_expr_pow_110();
while (((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_908 = NULL;
F->op_908 = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_909 = f_cur_line_68();
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->l_907 = f_binop_101(F->op_908, F->l_907, f_expr_pow_110(), F->line_909);
}
F->result_ = F->l_907;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_expr_pow_110(void) {
  struct f_expr_pow_110fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_910 = NULL;
F->l_910 = f_expr_prefix_111();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_911 = f_cur_line_68();
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->l_910 = f_binop_101(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_910, f_expr_prefix_111(), F->line_911);
}
F->result_ = F->l_910;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_expr_prefix_111(void) {
  struct f_expr_prefix_111fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_912 = NULL;
F->x_912 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
(*(P721)rt_nil_check(F->x_912)).name = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_912)).a = f_expr_prefix_111();
F->result_ = F->x_912;
goto ret_;
}
F->result_ = f_postfix_112();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_postfix_112(void) {
  struct f_postfix_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_913 = NULL;
F->p_913 = f_primary_113();
while (1) {
F->line_914 = f_cur_line_68();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_915 = NULL;
F->x_915 = f_nn_61((((rt_int)10LL)), F->line_914);
F->head_916 = NULL;
F->tail_917 = NULL;
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_918 = 1;
while (F->more_918) {
F->lo_919 = NULL;
F->lo_919 = f_expr_102();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_920 = NULL;
F->r_920 = f_nn_61((((rt_int)16LL)), F->line_914);
(*(P721)rt_nil_check(F->r_920)).a = F->lo_919;
(*(P721)rt_nil_check(F->r_920)).b = f_expr_102();
f_append_65(&F->head_916, &F->tail_917, F->r_920);
} else {
f_append_65(&F->head_916, &F->tail_917, F->lo_919);
}
F->more_918 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P721)rt_nil_check(F->x_915)).a = F->p_913;
(*(P721)rt_nil_check(F->x_915)).b = F->head_916;
F->p_913 = F->x_915;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_921 = NULL;
F->x_921 = f_nn_61((((rt_int)11LL)), F->line_914);
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_921)).a = F->p_913;
(*(P721)rt_nil_check(F->x_921)).name = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->p_913 = F->x_921;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P721)rt_nil_check(F->p_913)).kind == (((rt_int)7LL))))) {
F->x_922 = NULL;
F->x_922 = f_nn_61((((rt_int)12LL)), F->line_914);
(*(P721)rt_nil_check(F->x_922)).a = F->p_913;
(*(P721)rt_nil_check(F->x_922)).b = f_actual_tt_96();
F->p_913 = F->x_922;
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_923 = NULL;
F->x_923 = f_nn_61((((rt_int)13LL)), F->line_914);
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_923)).a = F->p_913;
(*(P721)rt_nil_check(F->x_923)).b = f_p_subtype_92();
F->p_913 = F->x_923;
} else {
F->result_ = F->p_913;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_primary_113(void) {
  struct f_primary_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_924 = f_cur_line_68();
F->x_925 = NULL;
F->k_926 = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).kind;
if ((F->k_926 == (((rt_int)4LL)))) {
F->x_925 = f_nn_61((((rt_int)1LL)), F->line_924);
(*(P721)rt_nil_check(F->x_925)).ival = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).ival;
(*(P721)rt_nil_check(F->x_925)).name = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->result_ = F->x_925;
goto ret_;
}
if ((((F->k_926 == (((rt_int)5LL))) || (F->k_926 == (((rt_int)7LL)))) || (F->k_926 == (((rt_int)6LL))))) {
if ((F->k_926 == (((rt_int)5LL)))) {
F->x_925 = f_nn_61((((rt_int)2LL)), F->line_924);
} else if ((F->k_926 == (((rt_int)7LL)))) {
F->x_925 = f_nn_61((((rt_int)3LL)), F->line_924);
} else {
F->x_925 = f_nn_61((((rt_int)4LL)), F->line_924);
}
(*(P721)rt_nil_check(F->x_925)).name = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->result_ = F->x_925;
goto ret_;
}
if ((F->k_926 == (((rt_int)1LL)))) {
F->w_927 = rt_str_copy((*(P716)rt_nil_check((*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s)));
if ((rt_str_eq(F->w_927, rt_str("TRUE", 4)) || rt_str_eq(F->w_927, rt_str("FALSE", 5)))) {
F->x_925 = f_nn_61((((rt_int)5LL)), F->line_924);
if (rt_str_eq(F->w_927, rt_str("TRUE", 4))) {
(*(P721)rt_nil_check(F->x_925)).ival = ((rt_int)1LL);
}
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->result_ = F->x_925;
goto ret_;
}
if (rt_str_eq(F->w_927, rt_str("NIL", 3))) {
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)6LL)), F->line_924);
goto ret_;
}
F->result_ = f_name_node_90();
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_925 = f_nn_61((((rt_int)17LL)), F->line_924);
(*(P721)rt_nil_check(F->x_925)).a = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_925;
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_928 = NULL;
F->tail_929 = NULL;
F->x_925 = f_nn_61((((rt_int)14LL)), F->line_924);
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_930 = 1;
while (F->more_930) {
f_append_65(&F->head_928, &F->tail_929, f_constructor_item_114());
F->more_930 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P721)rt_nil_check(F->x_925)).a = F->head_928;
F->result_ = F->x_925;
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

static P721 f_constructor_item_114(void) {
  struct f_constructor_item_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_931 = f_cur_line_68();
F->it_932 = NULL;
F->it_932 = f_nn_61((((rt_int)15LL)), F->line_931);
F->first_933 = NULL;
F->first_933 = f_expr_102();
F->keys_934 = NULL;
F->ktail_935 = NULL;
F->lab_936 = NULL;
F->lab_936 = f_nn_61((((rt_int)61LL)), F->line_931);
(*(P721)rt_nil_check(F->lab_936)).a = F->first_933;
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P721)rt_nil_check(F->lab_936)).b = f_expr_102();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_65(&F->keys_934, &F->ktail_935, F->lab_936);
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_937 = g_tpos_753;
F->more_938 = NULL;
F->tail2_939 = NULL;
F->ok_940 = 0;
F->go_941 = 1;
while ((F->go_941 && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_942 = NULL;
F->l2_942 = f_nn_61((((rt_int)61LL)), F->line_931);
(*(P721)rt_nil_check(F->l2_942)).a = f_expr_102();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P721)rt_nil_check(F->l2_942)).b = f_expr_102();
}
f_append_65(&F->more_938, &F->tail2_939, F->l2_942);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_940 = 1;
F->go_941 = 0;
} else if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_941 = 0;
}
}
if (F->ok_940) {
f_append_65(&F->keys_934, &F->ktail_935, F->lab_936);
f_append_65(&F->keys_934, &F->ktail_935, F->more_938);
} else {
g_tpos_753 = F->save_937;
}
}
if (((F->keys_934 == NULL) && ((*(P721)rt_nil_check(F->lab_936)).b != NULL))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_934 != NULL)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P721)rt_nil_check(F->it_932)).a = F->keys_934;
(*(P721)rt_nil_check(F->it_932)).b = f_expr_102();
} else {
(*(P721)rt_nil_check(F->it_932)).b = F->first_933;
}
F->result_ = F->it_932;
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

static P721 f_body_116(void) {
  struct f_body_116fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_943 = NULL;
F->tail_944 = NULL;
F->stmts_945 = 0;
F->after_946 = NULL;
while ((!f_at_body_end_115())) {
F->x_947 = NULL;
F->x_947 = f_body_element_117();
if (((F->x_947 != NULL) && (((((*(P721)rt_nil_check(F->x_947)).kind == (((rt_int)40LL))) || ((*(P721)rt_nil_check(F->x_947)).kind == (((rt_int)41LL)))) || ((*(P721)rt_nil_check(F->x_947)).kind == (((rt_int)49LL)))) || ((*(P721)rt_nil_check(F->x_947)).kind == (((rt_int)48LL)))))) {
if (F->stmts_945) {
f_fail_23((*(P721)rt_nil_check(F->x_947)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_947 != NULL) && ((*(P721)rt_nil_check(F->x_947)).kind >= (((rt_int)42LL)))) && ((*(P721)rt_nil_check(F->x_947)).kind <= (((rt_int)51LL))))) {
if ((F->stmts_945 && (F->after_946 == NULL))) {
F->after_946 = F->x_947;
}
} else if (((F->x_947 != NULL) && ((*(P721)rt_nil_check(F->x_947)).kind != (((rt_int)33LL))))) {
if ((F->after_946 != NULL)) {
f_fail_23((*(P721)rt_nil_check(F->after_946)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_945 = 1;
}
f_append_65(&F->head_943, &F->tail_944, F->x_947);
}
F->result_ = F->head_943;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_body_element_117(void) {
  struct f_body_element_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_948 = NULL;
F->pr_949 = NULL;
F->pr_949 = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_948 = f_declaration_118();
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_948 = f_nn_61((((rt_int)33LL)), f_cur_line_68());
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_948)).a = f_expr_102();
} else {
F->x_948 = f_statement_139();
}
if ((F->pr_949 != NULL)) {
F->p_950 = NULL;
F->p_950 = F->x_948;
while ((F->p_950 != NULL)) {
if (((*(P721)rt_nil_check(F->p_950)).prags == NULL)) {
(*(P721)rt_nil_check(F->p_950)).prags = F->pr_949;
} else {
(*(P721)rt_nil_check(F->p_950)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->pr_949)), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_950)).prags))); b_; }));
}
F->p_950 = (*(P721)rt_nil_check(F->p_950)).next;
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_948;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_declaration_118(void) {
  struct f_declaration_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_951 = f_cur_line_68();
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
F->head_952 = NULL;
F->tail_953 = NULL;
F->names_954 = NULL;
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->names_954 = f_id_list_91();
while ((F->names_954 != NULL)) {
F->x_955 = NULL;
F->x_955 = f_nn_61((((rt_int)49LL)), F->line_951);
(*(P721)rt_nil_check(F->x_955)).name = (*(P721)rt_nil_check(F->names_954)).name;
f_append_65(&F->head_952, &F->tail_953, F->x_955);
F->names_954 = (*(P721)rt_nil_check(F->names_954)).next;
}
F->result_ = F->head_952;
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

static P721 f_object_decl_119(void) {
  struct f_object_decl_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_956 = f_cur_line_68();
F->is_var_957 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_958 = NULL;
F->st_959 = NULL;
F->init_960 = NULL;
F->loc_961 = NULL;
F->loc_kind_962 = ((rt_int)0LL);
F->head_963 = NULL;
F->tail_964 = NULL;
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->names_958 = f_id_list_91();
if (F->is_var_957) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_959 = f_p_subtype_92();
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((*(P716)rt_nil_check((*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s)), rt_str("INTERRUPT", 9)))) {
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->loc_kind_962 = ((rt_int)1LL);
} else {
F->loc_kind_962 = ((rt_int)2LL);
}
F->loc_961 = f_expr_102();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_960 = f_expr_102();
}
} else {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_959 = f_p_subtype_92();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_960 = f_expr_102();
}
while ((F->names_958 != NULL)) {
F->x_965 = NULL;
if (F->is_var_957) {
F->x_965 = f_nn_61((((rt_int)40LL)), F->line_956);
} else {
F->x_965 = f_nn_61((((rt_int)41LL)), F->line_956);
}
(*(P721)rt_nil_check(F->x_965)).name = (*(P721)rt_nil_check(F->names_958)).name;
(*(P721)rt_nil_check(F->x_965)).a = F->st_959;
(*(P721)rt_nil_check(F->x_965)).b = F->init_960;
(*(P721)rt_nil_check(F->x_965)).c = F->loc_961;
(*(P721)rt_nil_check(F->x_965)).ival = F->loc_kind_962;
f_append_65(&F->head_963, &F->tail_964, F->x_965);
F->names_958 = (*(P721)rt_nil_check(F->names_958)).next;
}
F->result_ = F->head_963;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_abbrev_decl_120(void) {
  struct f_abbrev_decl_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_966 = NULL;
F->x_966 = f_nn_61((((rt_int)42LL)), f_cur_line_68());
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_966)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_966)).b = f_formal_params_125();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P721)rt_nil_check(F->x_966)).a = f_p_subtype_92();
F->result_ = F->x_966;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_skip_rep_121(void) {
  struct f_skip_rep_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->depth_967 = ((rt_int)0LL);
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((F->depth_967 == ((rt_int)0LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_74((((rt_int)0LL)))))) {
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_967 = rt_add(F->depth_967, ((rt_int)1LL));
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_967 = rt_sub(F->depth_967, ((rt_int)1LL));
}
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
}
}
ret_:
  RT_FPOP();
  return;
}

static P721 f_type_decl_122(void) {
  struct f_type_decl_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_968 = f_cur_line_68();
F->name_969 = NULL;
F->params_970 = NULL;
F->x_971 = NULL;
F->tts_972 = NULL;
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->name_969 = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_972 = f_formal_tt_133();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_970 = f_formal_params_125();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((*(P716)rt_nil_check((*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s)), rt_str("PTR", 3)))) {
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->x_971 = f_nn_61((((rt_int)44LL)), F->line_968);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_971)).b = f_formal_params_125();
}
} else {
F->x_971 = f_nn_61((((rt_int)43LL)), F->line_968);
(*(P721)rt_nil_check(F->x_971)).b = F->params_970;
}
(*(P721)rt_nil_check(F->x_971)).name = F->name_969;
(*(P721)rt_nil_check(F->x_971)).e = F->tts_972;
(*(P721)rt_nil_check(F->x_971)).a = f_p_subtype_92();
f_skip_rep_121();
F->result_ = F->x_971;
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

static P721 f_formal_params_125(void) {
  struct f_formal_params_125fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_973 = NULL;
F->tail_974 = NULL;
F->more_975 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_975) {
F->mode_976 = (((rt_int)1LL));
F->names_977 = NULL;
F->ntail_978 = NULL;
F->st_979 = NULL;
if ((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_976 = f_mode_of_124(&(*(P716)rt_nil_check((*(P717)rt_nil_check((*(P719)rt_nil_check(g_toks_751)).p[(rt_index(g_tpos_753, (*(P719)rt_nil_check(g_toks_751)).lo, (*(P719)rt_nil_check(g_toks_751)).hi) - (*(P719)rt_nil_check(g_toks_751)).lo)])).s)));
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
}
f_append_65(&F->names_977, &F->ntail_978, f_name_node_90());
while ((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_76(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((*(P716)rt_nil_check(f_text_at_78(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P716)rt_nil_check(f_text_at_78(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
f_append_65(&F->names_977, &F->ntail_978, f_name_node_90());
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_979 = f_p_subtype_92();
while ((F->names_977 != NULL)) {
F->p_980 = NULL;
F->p_980 = f_nn_61((((rt_int)52LL)), (*(P721)rt_nil_check(F->names_977)).line);
(*(P721)rt_nil_check(F->p_980)).name = (*(P721)rt_nil_check(F->names_977)).name;
(*(P721)rt_nil_check(F->p_980)).ival = F->mode_976;
(*(P721)rt_nil_check(F->p_980)).a = F->st_979;
f_append_65(&F->head_973, &F->tail_974, F->p_980);
F->names_977 = (*(P721)rt_nil_check(F->names_977)).next;
}
F->more_975 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_973;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_127(P721 owner_126) {
  struct f_imports_list_127fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_126 = owner_126;
F->head_981 = NULL;
F->tail_982 = NULL;
F->more_983 = 1;
if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P721)rt_nil_check(F->owner_126)).flag = rt_add((*(P721)rt_nil_check(F->owner_126)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_983) {
F->ro_984 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_985 = NULL;
F->x_985 = f_name_node_90();
if (F->ro_984) {
(*(P721)rt_nil_check(F->x_985)).ival = ((rt_int)1LL);
}
f_append_65(&F->head_981, &F->tail_982, F->x_985);
F->more_983 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P721)rt_nil_check(F->owner_126)).d = F->head_981;
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

static P716 f_definable_name_130(void) {
  struct f_definable_name_130fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_kind_74((((rt_int)1LL))) || (f_at_kind_74((((rt_int)3LL))) && f_is_definable_129(&(*(P716)rt_nil_check((*(P717)rt_nil_check((*(P719)rt_nil_check(g_toks_751)).p[(rt_index(g_tpos_753, (*(P719)rt_nil_check(g_toks_751)).lo, (*(P719)rt_nil_check(g_toks_751)).hi) - (*(P719)rt_nil_check(g_toks_751)).lo)])).s)))))) {
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->result_ = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(rt_sub(g_tpos_753, ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P721 f_subprogram_decl_131(void) {
  struct f_subprogram_decl_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_986 = f_cur_line_68();
F->x_987 = NULL;
F->is_abn_988 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_989 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_989) {
F->x_987 = f_nn_61((((rt_int)46LL)), F->line_986);
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_987 = f_nn_61((((rt_int)45LL)), F->line_986);
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
if (F->is_abn_988) {
(*(P721)rt_nil_check(F->x_987)).flag = ((rt_int)1LL);
}
(*(P721)rt_nil_check(F->x_987)).name = f_definable_name_130();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_987)).e = f_formal_tt_133();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_987)).a = f_formal_params_125();
}
if (F->is_func_989) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P721)rt_nil_check(F->x_987)).b = f_p_subtype_92();
}
F->dummy_990 = f_imports_list_127(F->x_987);
if (((*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P721)rt_nil_check(F->x_987)).prags == NULL)) {
(*(P721)rt_nil_check(F->x_987)).prags = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P721)rt_nil_check(F->x_987)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->x_987)).prags)), (*(P716)rt_nil_check((*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).prags))); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P721)rt_nil_check(F->x_987)).c = f_body_116();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_989) {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P716)rt_nil_check(f_definable_name_130())), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->x_987)).name))))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->x_987)).name))); b_; }));
}
F->result_ = F->x_987;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_capsule_decl_132(void) {
  struct f_capsule_decl_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_991 = NULL;
F->x_991 = f_nn_61((((rt_int)47LL)), f_cur_line_68());
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_991)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_991)).b = f_formal_params_125();
}
F->dummy_992 = f_imports_list_127(F->x_991);
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P721)rt_nil_check(F->x_991)).ival = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P721)rt_nil_check(F->x_991)).ival = ((rt_int)0LL);
} else {
F->head_993 = NULL;
F->tail_994 = NULL;
F->more_995 = 1;
while (F->more_995) {
F->n_996 = NULL;
F->n_996 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P721)rt_nil_check(F->n_996)).ival = ((rt_int)1LL);
}
(*(P721)rt_nil_check(F->n_996)).name = f_definable_name_130();
f_append_65(&F->head_993, &F->tail_994, F->n_996);
F->more_995 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P721)rt_nil_check(F->x_991)).a = F->head_993;
(*(P721)rt_nil_check(F->x_991)).ival = ((rt_int)2LL);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P721)rt_nil_check(F->x_991)).c = f_body_116();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P716)rt_nil_check(f_expect_id_89())), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->x_991)).name))))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_991;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_formal_tt_133(void) {
  struct f_formal_tt_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_997 = NULL;
F->tail_998 = NULL;
F->more_999 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_999) {
f_append_65(&F->head_997, &F->tail_998, f_name_node_90());
F->more_999 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_997;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_generic_decl_134(void) {
  struct f_generic_decl_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1000 = NULL;
F->x_1000 = f_nn_61((((rt_int)51LL)), f_cur_line_68());
F->head_1001 = NULL;
F->tail_1002 = NULL;
F->more_1003 = 1;
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
while (F->more_1003) {
F->names_1004 = NULL;
F->names_1004 = f_id_list_91();
F->kind_1005 = ((rt_int)6LL);
F->st_1006 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1005 = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1005 = ((rt_int)2LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1005 = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1005 = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1005 = ((rt_int)5LL);
} else {
F->st_1006 = f_p_subtype_92();
}
if (((F->kind_1005 <= ((rt_int)2LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P721)rt_nil_check(F->x_1000)).e = f_actual_params_93();
} else if (((F->kind_1005 >= ((rt_int)3LL)) && (F->kind_1005 <= ((rt_int)5LL)))) {
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_1006 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
}
if (((F->kind_1005 == ((rt_int)4LL)) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1006 = f_p_subtype_92();
}
}
while ((F->names_1004 != NULL)) {
F->p_1007 = NULL;
F->p_1007 = f_nn_61((((rt_int)52LL)), (*(P721)rt_nil_check(F->names_1004)).line);
(*(P721)rt_nil_check(F->p_1007)).name = (*(P721)rt_nil_check(F->names_1004)).name;
(*(P721)rt_nil_check(F->p_1007)).ival = F->kind_1005;
(*(P721)rt_nil_check(F->p_1007)).a = F->st_1006;
f_append_65(&F->head_1001, &F->tail_1002, F->p_1007);
F->names_1004 = (*(P721)rt_nil_check(F->names_1004)).next;
}
F->more_1003 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_1003 = 1;
while (F->more_1003) {
F->nm_1008 = NULL;
F->nm_1008 = f_definable_name_130();
F->st_1009 = NULL;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_1009 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_1009 = f_p_subtype_92();
}
F->more_1003 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P721)rt_nil_check(F->x_1000)).a = F->head_1001;
(*(P721)rt_nil_check(F->x_1000)).b = f_declaration_118();
(*(P721)rt_nil_check(F->x_1000)).name = (*(P721)rt_nil_check((*(P721)rt_nil_check(F->x_1000)).b)).name;
F->result_ = F->x_1000;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_task_decl_135(void) {
  struct f_task_decl_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1010 = NULL;
F->x_1010 = f_nn_61((((rt_int)50LL)), f_cur_line_68());
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_1010)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_1010)).e = f_formal_tt_133();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_1010)).a = f_formal_params_125();
}
F->dummy_1011 = f_imports_list_127(F->x_1010);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P721)rt_nil_check(F->x_1010)).c = f_body_116();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P716)rt_nil_check(f_expect_id_89())), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->x_1010)).name))))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->x_1010)).name))); b_; }));
}
F->result_ = F->x_1010;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_expose_decl_136(void) {
  struct f_expose_decl_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1012 = NULL;
F->x_1012 = f_nn_61((((rt_int)48LL)), f_cur_line_68());
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P721)rt_nil_check(F->x_1012)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1013 = NULL;
F->tail_1014 = NULL;
F->more_1015 = 1;
while (F->more_1015) {
F->n_1016 = NULL;
F->n_1016 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P721)rt_nil_check(F->n_1016)).ival = ((rt_int)1LL);
}
(*(P721)rt_nil_check(F->n_1016)).name = f_definable_name_130();
f_append_65(&F->head_1013, &F->tail_1014, F->n_1016);
F->more_1015 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P721)rt_nil_check(F->x_1012)).a = F->head_1013;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P721)rt_nil_check(F->x_1012)).flag = ((rt_int)1LL);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P721)rt_nil_check(F->x_1012)).flag = rt_add((*(P721)rt_nil_check(F->x_1012)).flag, ((rt_int)2LL));
}
(*(P721)rt_nil_check(F->x_1012)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_1012)).b = f_actual_params_93();
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1017 = NULL;
F->tail_1018 = NULL;
F->more_1019 = 1;
while (F->more_1019) {
F->n_1020 = NULL;
F->n_1020 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
F->tgt_1021 = NULL;
F->tgt_1021 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P721)rt_nil_check(F->n_1020)).name = f_definable_name_130();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P721)rt_nil_check(F->tgt_1021)).name = f_definable_name_130();
(*(P721)rt_nil_check(F->n_1020)).a = F->tgt_1021;
f_append_65(&F->head_1017, &F->tail_1018, F->n_1020);
F->more_1019 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P721)rt_nil_check(F->x_1012)).c = F->head_1017;
}
F->result_ = F->x_1012;
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

static P721 f_statement_139(void) {
  struct f_statement_139fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1022 = NULL;
F->ltail_1023 = NULL;
F->match_1024 = NULL;
F->s_1025 = NULL;
while (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((*(P716)rt_nil_check(f_text_at_78(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_65(&F->labels_1022, &F->ltail_1023, f_name_node_90());
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
}
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_138(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P716)rt_nil_check(f_text_at_78(((rt_int)1LL)))); b_; })))) {
F->match_1024 = f_expect_id_89();
}
F->s_1025 = f_unlabeled_statement_140();
if ((F->match_1024 != NULL)) {
if (((((((((*(P721)rt_nil_check(F->s_1025)).kind != (((rt_int)22LL))) && ((*(P721)rt_nil_check(F->s_1025)).kind != (((rt_int)23LL)))) && ((*(P721)rt_nil_check(F->s_1025)).kind != (((rt_int)24LL)))) && ((*(P721)rt_nil_check(F->s_1025)).kind != (((rt_int)25LL)))) && ((*(P721)rt_nil_check(F->s_1025)).kind != (((rt_int)26LL)))) && ((*(P721)rt_nil_check(F->s_1025)).kind != (((rt_int)35LL)))) && ((*(P721)rt_nil_check(F->s_1025)).kind != (((rt_int)36LL))))) {
f_fail_23((*(P721)rt_nil_check(F->s_1025)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P716)rt_nil_check(f_expect_id_89())), (*(P716)rt_nil_check(F->match_1024))))) {
f_fail_23((*(P721)rt_nil_check(F->s_1025)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P716)rt_nil_check(F->match_1024))); b_; }));
}
(*(P721)rt_nil_check(F->s_1025)).tag = F->match_1024;
}
(*(P721)rt_nil_check(F->s_1025)).labels = F->labels_1022;
F->result_ = F->s_1025;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_unlabeled_statement_140(void) {
  struct f_unlabeled_statement_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1026 = f_cur_line_68();
F->x_1027 = NULL;
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
F->x_1027 = f_nn_61((((rt_int)25LL)), F->line_1026);
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_1027)).a = f_body_116();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1027;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_148();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1027 = f_nn_61((((rt_int)27LL)), F->line_1026);
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_1027)).name = f_expect_id_89();
F->result_ = F->x_1027;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1027 = f_nn_61((((rt_int)28LL)), F->line_1026);
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P721)rt_nil_check(F->x_1027)).a = f_expr_102();
}
F->result_ = F->x_1027;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1027 = f_nn_61((((rt_int)29LL)), F->line_1026);
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_1027)).name = f_expect_id_89();
F->result_ = F->x_1027;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1027 = f_nn_61((((rt_int)30LL)), F->line_1026);
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_1027)).name = f_expect_id_89();
F->result_ = F->x_1027;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)31LL)), F->line_1026);
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1027 = f_nn_61((((rt_int)34LL)), F->line_1026);
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_1027)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_1027)).e = f_actual_tt_96();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_1027)).b = f_actual_params_93();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P721)rt_nil_check(F->x_1027)).a = f_postfix_112();
F->result_ = F->x_1027;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1028 = NULL;
F->tail_1029 = NULL;
F->x_1027 = f_nn_61((((rt_int)35LL)), F->line_1026);
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1030 = NULL;
F->itail_1031 = NULL;
F->more_1032 = 1;
while (F->more_1032) {
f_append_65(&F->invs_1030, &F->itail_1031, f_postfix_112());
F->more_1032 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1028, &F->tail_1029, f_arm_144(F->invs_1030, f_body_116(), F->line_1026));
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P721)rt_nil_check(F->x_1027)).a = F->head_1028;
F->result_ = F->x_1027;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1027 = f_nn_61((((rt_int)36LL)), F->line_1026);
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_1027)).a = f_expr_102();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P721)rt_nil_check(F->x_1027)).b = f_body_116();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1027;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1027 = f_nn_61((((rt_int)32LL)), F->line_1026);
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_1027)).a = f_postfix_112();
if ((!(f_at_kind_74((((rt_int)1LL))) && rt_str_eq((*(P716)rt_nil_check((*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).s)), rt_str("PTR", 3))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P721)rt_nil_check(F->x_1027)).b = f_actual_params_93();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P721)rt_nil_check(F->x_1027)).c = f_expr_102();
}
F->result_ = F->x_1027;
goto ret_;
}
{
F->target_1033 = NULL;
F->target_1033 = f_postfix_112();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1027 = f_nn_61((((rt_int)20LL)), F->line_1026);
(*(P721)rt_nil_check(F->x_1027)).a = F->target_1033;
(*(P721)rt_nil_check(F->x_1027)).b = f_expr_102();
} else {
F->x_1027 = f_nn_61((((rt_int)21LL)), F->line_1026);
(*(P721)rt_nil_check(F->x_1027)).a = F->target_1033;
}
}
F->result_ = F->x_1027;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_arm_144(P721 cond_141, P721 b_142, rt_int line_143) {
  struct f_arm_144fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_141 = cond_141;
F->b_142 = b_142;
F->line_143 = line_143;
F->x_1034 = NULL;
F->x_1034 = f_nn_61((((rt_int)60LL)), F->line_143);
(*(P721)rt_nil_check(F->x_1034)).a = F->cond_141;
(*(P721)rt_nil_check(F->x_1034)).b = F->b_142;
F->result_ = F->x_1034;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_if_stmt_145(void) {
  struct f_if_stmt_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1035 = NULL;
F->x_1035 = f_nn_61((((rt_int)22LL)), f_cur_line_68());
F->head_1036 = NULL;
F->tail_1037 = NULL;
F->cond_1038 = NULL;
F->go_1039 = 1;
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
F->cond_1038 = f_expr_102();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1036, &F->tail_1037, f_arm_144(F->cond_1038, f_body_116(), (*(P721)rt_nil_check(F->x_1035)).line));
while (F->go_1039) {
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1038 = f_expr_102();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1036, &F->tail_1037, f_arm_144(F->cond_1038, f_body_116(), (*(P721)rt_nil_check(F->x_1035)).line));
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P721)rt_nil_check(F->x_1035)).flag = ((rt_int)1LL);
(*(P721)rt_nil_check(F->x_1035)).b = f_body_116();
} else {
F->go_1039 = 0;
}
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P721)rt_nil_check(F->x_1035)).a = F->head_1036;
F->result_ = F->x_1035;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_case_stmt_146(void) {
  struct f_case_stmt_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1040 = NULL;
F->x_1040 = f_nn_61((((rt_int)23LL)), f_cur_line_68());
F->head_1041 = NULL;
F->tail_1042 = NULL;
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_1040)).a = f_expr_102();
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1043 = NULL;
F->ltail_1044 = NULL;
F->more_1045 = 1;
while (F->more_1045) {
F->l_1046 = NULL;
F->l_1046 = f_nn_61((((rt_int)61LL)), f_cur_line_68());
(*(P721)rt_nil_check(F->l_1046)).a = f_expr_102();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P721)rt_nil_check(F->l_1046)).b = f_expr_102();
}
f_append_65(&F->labs_1043, &F->ltail_1044, F->l_1046);
F->more_1045 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1041, &F->tail_1042, f_arm_144(F->labs_1043, f_body_116(), (*(P721)rt_nil_check(F->x_1040)).line));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P721)rt_nil_check(F->x_1040)).flag = ((rt_int)1LL);
(*(P721)rt_nil_check(F->x_1040)).c = f_body_116();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P721)rt_nil_check(F->x_1040)).b = F->head_1041;
F->result_ = F->x_1040;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_repeat_stmt_147(void) {
  struct f_repeat_stmt_147fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1047 = NULL;
F->x_1047 = f_nn_61((((rt_int)24LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P721)rt_nil_check(F->x_1047)).flag = ((rt_int)1LL);
(*(P721)rt_nil_check(F->x_1047)).name = f_expect_id_89();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P721)rt_nil_check(F->x_1047)).ival = ((rt_int)1LL);
}
(*(P721)rt_nil_check(F->x_1047)).a = f_p_subtype_92();
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P721)rt_nil_check(F->x_1047)).a = f_expr_102();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P721)rt_nil_check(F->x_1047)).b = f_body_116();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1047;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_guard_stmt_148(void) {
  struct f_guard_stmt_148fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1048 = NULL;
F->x_1048 = f_nn_61((((rt_int)26LL)), f_cur_line_68());
F->head_1049 = NULL;
F->tail_1050 = NULL;
g_tpos_753 = rt_add(g_tpos_753, ((rt_int)1LL));
(*(P721)rt_nil_check(F->x_1048)).a = f_body_116();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1051 = NULL;
F->h_1051 = f_nn_61((((rt_int)62LL)), f_cur_line_68());
(*(P721)rt_nil_check(F->h_1051)).a = f_id_list_91();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P721)rt_nil_check(F->h_1051)).b = f_body_116();
f_append_65(&F->head_1049, &F->tail_1050, F->h_1051);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P721)rt_nil_check(F->x_1048)).flag = ((rt_int)1LL);
(*(P721)rt_nil_check(F->x_1048)).c = f_body_116();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P721)rt_nil_check(F->x_1048)).b = F->head_1049;
F->result_ = F->x_1048;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_program_149(void) {
  struct f_program_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1052 = NULL;
F->tail_1053 = NULL;
while ((!f_at_kind_74((((rt_int)0LL))))) {
if ((!f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1054 = NULL;
F->pr_1054 = (*(P717)rt_nil_check(({ A720 b_ = (*(P719)rt_nil_check(g_toks_751)); b_.p[(rt_index(g_tpos_753, b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1055 = NULL;
F->u_1055 = f_capsule_decl_132();
(*(P721)rt_nil_check(F->u_1055)).prags = F->pr_1054;
f_append_65(&F->head_1052, &F->tail_1053, F->u_1055);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1052;
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
F->h_1056 = ((rt_int)0LL);
{ rt_int lo1058 = ((rt_int)1LL), hi1059 = ((*F->s_150)).len;
for (rt_int it1060 = lo1058; it1060 <= hi1059; it1060++) {
F->i_1057 = it1060;
F->h_1056 = rt_mod(rt_add(rt_mul(F->h_1056, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_150), F->i_1057)) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = F->h_1056;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P731 f_lookup_153(rstr *name_152) {
  struct f_lookup_153fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_152 = name_152;
F->y_1061 = NULL;
F->y_1061 = ({ A736 b_ = (*(P735)rt_nil_check(g_table_756)); b_.p[(rt_index(f_hash_151(&(*F->name_152)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_757 != NULL)) {
while ((F->y_1061 != NULL)) {
if ((((*(P731)rt_nil_check(F->y_1061)).depth >= g_gdepth_789) && rt_str_eq((*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_1061)).name)), (*F->name_152)))) {
F->result_ = F->y_1061;
goto ret_;
}
F->y_1061 = (*(P731)rt_nil_check(F->y_1061)).chain;
}
F->y_1061 = ({ A736 b_ = (*(P735)rt_nil_check(g_genv_757)); b_.p[(rt_index(f_hash_151(&(*F->name_152)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1061 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_1061)).name)), (*F->name_152))) {
F->result_ = F->y_1061;
goto ret_;
}
F->y_1061 = (*(P731)rt_nil_check(F->y_1061)).chain;
}
F->y_1061 = ({ A736 b_ = (*(P735)rt_nil_check(g_table_756)); b_.p[(rt_index(f_hash_151(&(*F->name_152)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1061 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_1061)).name)), (*F->name_152))) {
F->result_ = F->y_1061;
goto ret_;
}
F->y_1061 = (*(P731)rt_nil_check(F->y_1061)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P731 f_lookup_decl_155(P721 d_154) {
  struct f_lookup_decl_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_154 = d_154;
F->y_1062 = NULL;
F->y_1062 = ({ A736 b_ = (*(P735)rt_nil_check(g_table_756)); b_.p[(rt_index(f_hash_151(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->d_154)).name))), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1062 != NULL)) {
if (((*(P731)rt_nil_check(F->y_1062)).decl == F->d_154)) {
F->result_ = F->y_1062;
goto ret_;
}
F->y_1062 = (*(P731)rt_nil_check(F->y_1062)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_158(P731 y_156, rt_int line_157) {
  struct f_define_158fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_156 = y_156;
F->line_157 = line_157;
F->h_1063 = f_hash_151(&(*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_156)).name)));
F->z_1064 = NULL;
F->z_1064 = ({ A736 b_ = (*(P735)rt_nil_check(g_table_756)); b_.p[(rt_index(F->h_1063, b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1064 != NULL)) {
if (((((*(P731)rt_nil_check(F->z_1064)).depth == g_depth_759) && rt_str_eq((*(P716)rt_nil_check((*(P731)rt_nil_check(F->z_1064)).name)), (*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_156)).name)))) && (!(((f_overloadable_160(F->y_156) && f_overloadable_160(F->z_1064)) && ((*(P731)rt_nil_check(F->z_1064)).kind == (*(P731)rt_nil_check(F->y_156)).kind)) && (!(f_same_signature_166((*(P731)rt_nil_check(F->y_156)).params, (*(P731)rt_nil_check(F->z_1064)).params) && f_same_tt_163((*(P731)rt_nil_check(F->y_156)).decl, (*(P731)rt_nil_check(F->z_1064)).decl))))))) {
f_fail_23(F->line_157, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_156)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1064 = (*(P731)rt_nil_check(F->z_1064)).chain;
}
(*(P731)rt_nil_check(F->y_156)).depth = g_depth_759;
(*(P731)rt_nil_check(F->y_156)).chain = ({ A736 b_ = (*(P735)rt_nil_check(g_table_756)); b_.p[(rt_index(F->h_1063, b_.lo, b_.hi) - b_.lo)]; });
(*(P735)rt_nil_check(g_table_756)).p[(rt_index(F->h_1063, (*(P735)rt_nil_check(g_table_756)).lo, (*(P735)rt_nil_check(g_table_756)).hi) - (*(P735)rt_nil_check(g_table_756)).lo)] = F->y_156;
(*(P731)rt_nil_check(F->y_156)).stack = g_scope_stack_760;
g_scope_stack_760 = F->y_156;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_160(P731 y_159) {
  struct f_overloadable_160fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_159 = y_159;
F->result_ = ((((*(P731)rt_nil_check(F->y_159)).kind == (((rt_int)3LL))) || ((*(P731)rt_nil_check(F->y_159)).kind == (((rt_int)4LL)))) || ((*(P731)rt_nil_check(F->y_159)).kind == (((rt_int)9LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_163(P721 a_161, P721 b_162) {
  struct f_same_tt_163fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_161 = a_161;
F->b_162 = b_162;
F->x_1065 = NULL;
F->y_1066 = NULL;
if (((F->a_161 == NULL) || (F->b_162 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1065 = (*(P721)rt_nil_check(F->a_161)).e;
F->y_1066 = (*(P721)rt_nil_check(F->b_162)).e;
while (((F->x_1065 != NULL) && (F->y_1066 != NULL))) {
if ((!rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->x_1065)).name)), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->y_1066)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_1065 = (*(P721)rt_nil_check(F->x_1065)).next;
F->y_1066 = (*(P721)rt_nil_check(F->y_1066)).next;
}
F->result_ = ((F->x_1065 == NULL) && (F->y_1066 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_166(P733 a_164, P733 b_165) {
  struct f_same_signature_166fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_164 = a_164;
F->b_165 = b_165;
F->x_1067 = NULL;
F->x_1067 = F->a_164;
F->y_1068 = NULL;
F->y_1068 = F->b_165;
while (((F->x_1067 != NULL) && (F->y_1068 != NULL))) {
if ((!f_same_209((*(P733)rt_nil_check(F->x_1067)).t, (*(P733)rt_nil_check(F->y_1068)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1067 = (*(P733)rt_nil_check(F->x_1067)).next;
F->y_1068 = (*(P733)rt_nil_check(F->y_1068)).next;
}
F->result_ = ((F->x_1067 == NULL) && (F->y_1068 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_167(void) {
  struct f_open_scope_167fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_759 = rt_add(g_depth_759, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_168(void) {
  struct f_close_scope_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_760 != NULL) && ((*(P731)rt_nil_check(g_scope_stack_760)).depth == g_depth_759))) {
(*(P735)rt_nil_check(g_table_756)).p[(rt_index(f_hash_151(&(*(P716)rt_nil_check((*(P731)rt_nil_check(g_scope_stack_760)).name))), (*(P735)rt_nil_check(g_table_756)).lo, (*(P735)rt_nil_check(g_table_756)).hi) - (*(P735)rt_nil_check(g_table_756)).lo)] = (*(P731)rt_nil_check(g_scope_stack_760)).chain;
g_scope_stack_760 = (*(P731)rt_nil_check(g_scope_stack_760)).stack;
}
g_depth_759 = rt_sub(g_depth_759, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P731 f_new_sym_171(rt_int kind_169, P716 name_170) {
  struct f_new_sym_171fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_169 = kind_169;
F->name_170 = name_170;
F->y_1069 = NULL;
{ R732 *cell1070 = rt_alloc(sizeof(R732));
(*cell1070).name = NULL;
(*cell1070).t = NULL;
(*cell1070).c = NULL;
(*cell1070).access = NULL;
(*cell1070).cname = NULL;
(*cell1070).st = NULL;
(*cell1070).decl = NULL;
(*cell1070).params = NULL;
(*cell1070).result = NULL;
(*cell1070).members = NULL;
(*cell1070).mnext = NULL;
(*cell1070).binds = NULL;
(*cell1070).insts = NULL;
(*cell1070).env = NULL;
(*cell1070).chain = NULL;
(*cell1070).stack = NULL;
(*cell1070).owner = NULL;
(*cell1070).gctx = NULL;
(*cell1070).mv = NULL;
(*cell1070).reqs = NULL;
(*cell1070).home = NULL;
F->y_1069 = cell1070;
}
(*(P731)rt_nil_check(F->y_1069)).kind = F->kind_169;
(*(P731)rt_nil_check(F->y_1069)).name = F->name_170;
F->result_ = F->y_1069;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P727 f_new_typ_173(rt_int kind_172) {
  struct f_new_typ_173fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_172 = kind_172;
F->t_1071 = NULL;
{ R728 *cell1072 = rt_alloc(sizeof(R728));
(*cell1072).name = NULL;
(*cell1072).lits = NULL;
(*cell1072).elem = NULL;
(*cell1072).idx = NULL;
(*cell1072).idx2 = NULL;
(*cell1072).elemcons = NULL;
(*cell1072).elemst = NULL;
(*cell1072).under = NULL;
(*cell1072).tparams = NULL;
(*cell1072).ocap = NULL;
(*cell1072).fields = NULL;
(*cell1072).target = NULL;
(*cell1072).decl = NULL;
(*cell1072).cname = NULL;
(*cell1072).initp = NULL;
(*cell1072).finalp = NULL;
(*cell1072).tpsyms = NULL;
(*cell1072).gen = NULL;
(*cell1072).gbinds = NULL;
(*cell1072).next = NULL;
(*cell1072).idxs = NULL;
F->t_1071 = cell1072;
}
(*(P727)rt_nil_check(F->t_1071)).kind = F->kind_172;
F->result_ = F->t_1071;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P723 f_new_cons_174(void) {
  struct f_new_cons_174fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1073 = NULL;
{ R724 *cell1074 = rt_alloc(sizeof(R724));
(*cell1074).lo = NULL;
(*cell1074).hi = NULL;
(*cell1074).lo2 = NULL;
(*cell1074).hi2 = NULL;
(*cell1074).slen = NULL;
(*cell1074).args = NULL;
(*cell1074).prec = NULL;
(*cell1074).bnds = NULL;
F->c_1073 = cell1074;
}
F->result_ = F->c_1073;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_176(P727 t_175) {
  struct f_scalar_kind_176fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_175 = t_175;
F->result_ = ((F->t_175 != NULL) && ((((*(P727)rt_nil_check(F->t_175)).kind == (((rt_int)1LL))) || ((*(P727)rt_nil_check(F->t_175)).kind == (((rt_int)3LL)))) || ((*(P727)rt_nil_check(F->t_175)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_178(P727 t_177) {
  struct f_bound_ctype_178fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_177 = t_177;
if (((*(P727)rt_nil_check(F->t_177)).kind == (((rt_int)3LL)))) {
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

static rstr f_cbound_181(P723 c_179, rstr *b_180) {
  struct f_cbound_181fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_179 = c_179;
F->b_180 = b_180;
F->p_1075 = NULL;
F->p_1075 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!(*(P723)rt_nil_check(F->c_179)).dyn) || ((*(P723)rt_nil_check(F->c_179)).lvl <= ((rt_int)0LL)))) {
F->result_ = (*F->b_180);
goto ret_;
}
{ rt_int lo1077 = ((rt_int)1LL), hi1078 = rt_sub(g_cur_level_773, (*(P723)rt_nil_check(F->c_179)).lvl);
for (rt_int it1079 = lo1077; it1079 <= hi1078; it1079++) {
F->i_1076 = it1079;
F->p_1075 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->p_1075)), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->p_1075)), rt_str("->", 2)), (*F->b_180));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_183(P723 c_182) {
  struct f_clo_183fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_182 = c_182;
F->result_ = f_cbound_181(F->c_182, &(*(P716)rt_nil_check((*(P723)rt_nil_check(F->c_182)).lo)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_185(P723 c_184) {
  struct f_chi_185fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_184 = c_184;
F->result_ = f_cbound_181(F->c_184, &(*(P716)rt_nil_check((*(P723)rt_nil_check(F->c_184)).hi)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_188(P727 t_186, P723 c_187) {
  struct f_sub_lo_188fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_186 = t_186;
F->c_187 = c_187;
if (((F->c_187 != NULL) && ((*(P723)rt_nil_check(F->c_187)).lo != NULL))) {
F->result_ = f_clo_183(F->c_187);
goto ret_;
} else if (((*(P727)rt_nil_check(F->t_186)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if (((*(P727)rt_nil_check(F->t_186)).kind == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_191(P727 t_189, P723 c_190) {
  struct f_sub_hi_191fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_189 = t_189;
F->c_190 = c_190;
if (((F->c_190 != NULL) && ((*(P723)rt_nil_check(F->c_190)).lo != NULL))) {
F->result_ = f_chi_185(F->c_190);
goto ret_;
} else if (((*(P727)rt_nil_check(F->t_189)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if (((*(P727)rt_nil_check(F->t_189)).kind == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_67((*(P727)rt_nil_check(F->t_189)).lits), ((rt_int)1LL)));
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
if ((!g_in_func_772)) {
F->g_1080 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_192)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_193)), rt_str(" ", 1)), F->g_1080), rt_str(";", 1)); b_; }));
g_st_field_778 = f_mk_3(&F->g_1080);
F->result_ = F->g_1080;
goto ret_;
}
{
F->f_1081 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_192), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_771, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_193)), rt_str(" ", 1)), F->f_1081), rt_str(";", 1)); b_; }));
g_st_field_778 = f_mk_3(&F->f_1081);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1081);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P723 f_copy_cons_196(P723 c_195) {
  struct f_copy_cons_196fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_195 = c_195;
F->r_1082 = NULL;
{ R724 *cell1083 = rt_alloc(sizeof(R724));
(*cell1083).lo = NULL;
(*cell1083).hi = NULL;
(*cell1083).lo2 = NULL;
(*cell1083).hi2 = NULL;
(*cell1083).slen = NULL;
(*cell1083).args = NULL;
(*cell1083).prec = NULL;
(*cell1083).bnds = NULL;
F->r_1082 = cell1083;
}
(*(P723)rt_nil_check(F->r_1082)).lo = (*(P723)rt_nil_check(F->c_195)).lo;
(*(P723)rt_nil_check(F->r_1082)).hi = (*(P723)rt_nil_check(F->c_195)).hi;
(*(P723)rt_nil_check(F->r_1082)).lo2 = (*(P723)rt_nil_check(F->c_195)).lo2;
(*(P723)rt_nil_check(F->r_1082)).hi2 = (*(P723)rt_nil_check(F->c_195)).hi2;
(*(P723)rt_nil_check(F->r_1082)).slen = (*(P723)rt_nil_check(F->c_195)).slen;
(*(P723)rt_nil_check(F->r_1082)).mlo = (*(P723)rt_nil_check(F->c_195)).mlo;
(*(P723)rt_nil_check(F->r_1082)).mhi = (*(P723)rt_nil_check(F->c_195)).mhi;
(*(P723)rt_nil_check(F->r_1082)).hasm = (*(P723)rt_nil_check(F->c_195)).hasm;
(*(P723)rt_nil_check(F->r_1082)).args = (*(P723)rt_nil_check(F->c_195)).args;
(*(P723)rt_nil_check(F->r_1082)).dyn = (*(P723)rt_nil_check(F->c_195)).dyn;
(*(P723)rt_nil_check(F->r_1082)).lvl = (*(P723)rt_nil_check(F->c_195)).lvl;
(*(P723)rt_nil_check(F->r_1082)).prec = (*(P723)rt_nil_check(F->c_195)).prec;
F->result_ = F->r_1082;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P723 f_freeze_199(P723 c_197, P727 t_198) {
  struct f_freeze_199fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_197 = c_197;
F->t_198 = t_198;
F->r_1084 = NULL;
F->saved_field_1085 = NULL;
F->saved_field_1085 = g_st_field_778;
if ((((((F->c_197 == NULL) || ((*(P723)rt_nil_check(F->c_197)).lo == NULL)) || (*(P723)rt_nil_check(F->c_197)).hasm) || (*(P723)rt_nil_check(F->c_197)).dyn) || (!f_scalar_kind_176(F->t_198)))) {
F->result_ = F->c_197;
goto ret_;
}
F->r_1084 = f_copy_cons_196(F->c_197);
{
F->ct_1086 = rt_str_copy(f_bound_ctype_178(F->t_198));
F->la_1087 = rt_str_copy(f_raw_storage_194(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1086));
F->lf_1088 = rt_str_copy((*(P716)rt_nil_check(g_st_field_778)));
F->ha_1089 = rt_str_copy(f_raw_storage_194(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1086));
F->hf_1090 = rt_str_copy((*(P716)rt_nil_check(g_st_field_778)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1087, rt_str(" = ", 3)), f_clo_183(F->c_197)), rt_str("; ", 2)), F->ha_1089), rt_str(" = ", 3)), f_chi_185(F->c_197)), rt_str(";", 1)); b_; }));
if (g_in_func_772) {
(*(P723)rt_nil_check(F->r_1084)).lo = f_mk_3(&F->lf_1088);
(*(P723)rt_nil_check(F->r_1084)).hi = f_mk_3(&F->hf_1090);
(*(P723)rt_nil_check(F->r_1084)).dyn = 1;
(*(P723)rt_nil_check(F->r_1084)).lvl = g_cur_level_773;
} else {
(*(P723)rt_nil_check(F->r_1084)).lo = f_mk_3(&F->la_1087);
(*(P723)rt_nil_check(F->r_1084)).hi = f_mk_3(&F->ha_1089);
(*(P723)rt_nil_check(F->r_1084)).dyn = 0;
}
}
g_st_field_778 = F->saved_field_1085;
F->result_ = F->r_1084;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_203(P727 t_200, P723 c_201, rstr *v_202) {
  struct f_checked_203fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_200 = t_200;
F->c_201 = c_201;
F->v_202 = v_202;
if ((((F->c_201 == NULL) || (!f_scalar_kind_176(F->t_200))) || f_suppressed_380(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_202);
goto ret_;
} else if ((((*(P727)rt_nil_check(F->t_200)).kind != (((rt_int)3LL))) && (*(P723)rt_nil_check(F->c_201)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_202)), rt_str(", ", 2)), f_itos_7((*(P723)rt_nil_check(F->c_201)).mlo)), rt_str(", ", 2)), f_itos_7((*(P723)rt_nil_check(F->c_201)).mhi)), rt_str(")", 1));
goto ret_;
} else if (((*(P723)rt_nil_check(F->c_201)).lo == NULL)) {
F->result_ = (*F->v_202);
goto ret_;
} else if (((*(P727)rt_nil_check(F->t_200)).kind == (((rt_int)3LL)))) {
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

static int f_same_lits_206(P721 a_204, P721 b_205) {
  struct f_same_lits_206fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_204 = a_204;
F->b_205 = b_205;
F->x_1091 = NULL;
F->x_1091 = F->a_204;
F->y_1092 = NULL;
F->y_1092 = F->b_205;
while (((F->x_1091 != NULL) && (F->y_1092 != NULL))) {
if ((!rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->x_1091)).name)), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->y_1092)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_1091 = (*(P721)rt_nil_check(F->x_1091)).next;
F->y_1092 = (*(P721)rt_nil_check(F->y_1092)).next;
}
F->result_ = ((F->x_1091 == NULL) && (F->y_1092 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_209(P727 a_207, P727 b_208) {
  struct f_same_209fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_207 = a_207;
F->b_208 = b_208;
if ((F->a_207 == F->b_208)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_207 == NULL) || (F->b_208 == NULL)) || ((*(P727)rt_nil_check(F->a_207)).kind != (*(P727)rt_nil_check(F->b_208)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P727)rt_nil_check(F->a_207)).kind == (((rt_int)1LL))) || ((*(P727)rt_nil_check(F->a_207)).kind == (((rt_int)2LL)))) || ((*(P727)rt_nil_check(F->a_207)).kind == (((rt_int)3LL)))) || ((*(P727)rt_nil_check(F->a_207)).kind == (((rt_int)5LL)))) || ((*(P727)rt_nil_check(F->a_207)).kind == (((rt_int)9LL)))) || ((*(P727)rt_nil_check(F->a_207)).kind == (((rt_int)10LL))))) {
F->result_ = 1;
goto ret_;
}
if (((*(P727)rt_nil_check(F->a_207)).kind == (((rt_int)4LL)))) {
F->result_ = f_same_lits_206((*(P727)rt_nil_check(F->a_207)).lits, (*(P727)rt_nil_check(F->b_208)).lits);
goto ret_;
}
if (((*(P727)rt_nil_check(F->a_207)).kind == (((rt_int)6LL)))) {
F->x_1093 = NULL;
F->x_1093 = (*(P727)rt_nil_check(F->a_207)).idxs;
F->y_1094 = NULL;
F->y_1094 = (*(P727)rt_nil_check(F->b_208)).idxs;
while (((F->x_1093 != NULL) && (F->y_1094 != NULL))) {
if ((!f_same_209((*(P741)rt_nil_check(F->x_1093)).t, (*(P741)rt_nil_check(F->y_1094)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1093 = (*(P741)rt_nil_check(F->x_1093)).next;
F->y_1094 = (*(P741)rt_nil_check(F->y_1094)).next;
}
F->result_ = (((F->x_1093 == NULL) && (F->y_1094 == NULL)) && f_same_209((*(P727)rt_nil_check(F->a_207)).elem, (*(P727)rt_nil_check(F->b_208)).elem));
goto ret_;
}
if ((((*(P727)rt_nil_check(F->a_207)).kind == (((rt_int)16LL))) || ((*(P727)rt_nil_check(F->a_207)).kind == (((rt_int)12LL))))) {
F->result_ = f_same_209((*(P727)rt_nil_check(F->a_207)).elem, (*(P727)rt_nil_check(F->b_208)).elem);
goto ret_;
}
if ((((*(P727)rt_nil_check(F->a_207)).kind == (((rt_int)7LL))) || ((*(P727)rt_nil_check(F->a_207)).kind == (((rt_int)17LL))))) {
F->f_1095 = NULL;
F->f_1095 = (*(P727)rt_nil_check(F->a_207)).fields;
F->g_1096 = NULL;
F->g_1096 = (*(P727)rt_nil_check(F->b_208)).fields;
while (((F->f_1095 != NULL) && (F->g_1096 != NULL))) {
if (((!rt_str_eq((*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1095)).name)), (*(P716)rt_nil_check((*(P729)rt_nil_check(F->g_1096)).name)))) || (!f_same_209((*(P729)rt_nil_check(F->f_1095)).t, (*(P729)rt_nil_check(F->g_1096)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1095 = (*(P729)rt_nil_check(F->f_1095)).next;
F->g_1096 = (*(P729)rt_nil_check(F->g_1096)).next;
}
F->result_ = ((F->f_1095 == NULL) && (F->g_1096 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P727 f_base_of_211(P727 t_210) {
  struct f_base_of_211fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_210 = t_210;
if ((((F->t_210 != NULL) && ((*(P727)rt_nil_check(F->t_210)).kind == (((rt_int)15LL)))) && ((*(P727)rt_nil_check(F->t_210)).tparams == NULL))) {
F->result_ = f_base_of_211((*(P727)rt_nil_check(F->t_210)).under);
goto ret_;
}
F->result_ = F->t_210;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P723 f_base_cons_214(P727 t_212, P723 c_213) {
  struct f_base_cons_214fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_212 = t_212;
F->c_213 = c_213;
if (((((F->t_212 != NULL) && ((*(P727)rt_nil_check(F->t_212)).kind == (((rt_int)15LL)))) && ((*(P727)rt_nil_check(F->t_212)).tparams == NULL)) && ((*(P727)rt_nil_check(F->t_212)).elemcons != NULL))) {
F->result_ = f_base_cons_214((*(P727)rt_nil_check(F->t_212)).under, (*(P727)rt_nil_check(F->t_212)).elemcons);
goto ret_;
}
F->result_ = F->c_213;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_216(P727 t_215) {
  struct f_kind_name_216fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_215 = t_215;
{ rt_int sel1097 = (*(P727)rt_nil_check(F->t_215)).kind;
if (0 || (sel1097 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1097 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1097 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1097 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1097 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1097 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1097 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1097 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1097 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_215)).name)));
goto ret_;
} else if (0 || (sel1097 == (((rt_int)11LL)))) {
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

static void f_check_type_220(P727 got_217, P727 want_218, rt_int line_219) {
  struct f_check_type_220fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_217 = got_217;
F->want_218 = want_218;
F->line_219 = line_219;
if ((F->want_218 == NULL)) {
goto ret_;
}
if ((((*(P727)rt_nil_check(F->got_217)).kind == (((rt_int)11LL))) && ((*(P727)rt_nil_check(F->want_218)).kind == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_209(F->got_217, F->want_218))) {
f_fail_23(F->line_219, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_216(F->got_217)), rt_str(" where ", 7)), f_kind_name_216(F->want_218)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_222(P727 t_221) {
  struct f_ctype_222fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_221 = t_221;
{ rt_int sel1098 = (*(P727)rt_nil_check(F->t_221)).kind;
if (0 || (sel1098 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1098 == (((rt_int)2LL))) || (sel1098 == (((rt_int)4LL))) || (sel1098 == (((rt_int)10LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1098 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1098 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1098 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1098 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1098 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1098 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1098 == (((rt_int)16LL)))) {
F->result_ = rt_str("rset", 4);
goto ret_;
} else {
if (((*(P727)rt_nil_check(F->t_221)).cname == NULL)) {
f_declare_ctype_228(F->t_221);
} else if ((((((*(P727)rt_nil_check(F->t_221)).kind == (((rt_int)7LL))) || ((*(P727)rt_nil_check(F->t_221)).kind == (((rt_int)17LL)))) && (*(P727)rt_nil_check(F->t_221)).forward) && (!(*(P727)rt_nil_check(F->t_221)).defined))) {
(*(P727)rt_nil_check(F->t_221)).defined = 1;
f_put_27(g_out_types_763, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_221)).cname))), rt_str(" ", 1)), f_struct_body_224(F->t_221)), rt_str(";", 1)); b_; }));
}
F->result_ = (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_221)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_224(P727 t_223) {
  struct f_struct_body_224fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_223 = t_223;
if (((*(P727)rt_nil_check(F->t_223)).kind == (((rt_int)17LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ int tag; union { ", 19), f_field_decls_226(F->t_223)), rt_str(" } u; }", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_field_decls_226(F->t_223)), rt_str(" }", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_field_decls_226(P727 t_225) {
  struct f_field_decls_226fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_225 = t_225;
F->f_1099 = NULL;
F->f_1099 = (*(P727)rt_nil_check(F->t_225)).fields;
F->s_1100 = NULL;
F->s_1100 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1099 != NULL)) {
F->s_1100 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->s_1100)), f_ctype_222((*(P729)rt_nil_check(F->f_1099)).t)), rt_str(" ", 1)), f_field_c_17(&(*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1099)).name)))), rt_str("; ", 2)); b_; }));
F->f_1099 = (*(P729)rt_nil_check(F->f_1099)).next;
}
F->result_ = (*(P716)rt_nil_check(F->s_1100));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_228(P727 t_227) {
  struct f_declare_ctype_228fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_227 = t_227;
F->u_1101 = NULL;
F->u_1101 = g_all_types_761;
if ((((*(P727)rt_nil_check(F->t_227)).kind == (((rt_int)8LL))) && ((*(P727)rt_nil_check(F->t_227)).target == NULL))) {
f_finish_ptr_369(F->t_227);
if (((*(P727)rt_nil_check(F->t_227)).cname != NULL)) {
goto ret_;
}
}
if (((*(P727)rt_nil_check(F->t_227)).kind != (((rt_int)8LL)))) {
while ((F->u_1101 != NULL)) {
if ((((*(P727)rt_nil_check(F->u_1101)).kind == (*(P727)rt_nil_check(F->t_227)).kind) && f_same_209(F->u_1101, F->t_227))) {
(*(P727)rt_nil_check(F->t_227)).cname = (*(P727)rt_nil_check(F->u_1101)).cname;
goto ret_;
}
F->u_1101 = (*(P727)rt_nil_check(F->u_1101)).next;
}
}
if ((((*(P727)rt_nil_check(F->t_227)).kind == (((rt_int)15LL))) && ((*(P727)rt_nil_check(F->t_227)).tparams == NULL))) {
(*(P727)rt_nil_check(F->t_227)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_222((*(P727)rt_nil_check(F->t_227)).under); b_; }));
goto ret_;
}
if (((*(P727)rt_nil_check(F->t_227)).kind == (((rt_int)6LL)))) {
(*(P727)rt_nil_check(F->t_227)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P727)rt_nil_check(F->t_227)).kind == (((rt_int)15LL)))) {
(*(P727)rt_nil_check(F->t_227)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if ((((*(P727)rt_nil_check(F->t_227)).kind == (((rt_int)7LL))) || ((*(P727)rt_nil_check(F->t_227)).kind == (((rt_int)17LL))))) {
(*(P727)rt_nil_check(F->t_227)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P727)rt_nil_check(F->t_227)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P727)rt_nil_check(F->t_227)).next = g_all_types_761;
g_all_types_761 = F->t_227;
if (((*(P727)rt_nil_check(F->t_227)).kind == (((rt_int)8LL)))) {
F->target_1102 = NULL;
F->target_1102 = (*(P727)rt_nil_check(F->t_227)).target;
if ((((*(P727)rt_nil_check(F->target_1102)).kind == (((rt_int)7LL))) || ((*(P727)rt_nil_check(F->target_1102)).kind == (((rt_int)17LL))))) {
if (((*(P727)rt_nil_check(F->target_1102)).cname == NULL)) {
(*(P727)rt_nil_check(F->target_1102)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P727)rt_nil_check(F->target_1102)).next = g_all_types_761;
g_all_types_761 = F->target_1102;
f_put_27(g_out_types_763, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->target_1102)).cname))), rt_str(" ", 1)), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->target_1102)).cname))), rt_str(";", 1)); b_; }));
(*(P727)rt_nil_check(F->target_1102)).forward = 1;
}
f_put_27(g_out_types_763, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->target_1102)).cname))), rt_str(" *", 2)), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_227)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_763, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_222(F->target_1102)), rt_str(" *", 2)), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_227)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P727)rt_nil_check(F->t_227)).kind == (((rt_int)6LL)))) {
f_put_27(g_out_types_763, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_227)).cname))), rt_str(" ", 1)), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_227)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_763, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_227)).cname))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_222((*(P727)rt_nil_check(F->t_227)).elem)), rt_str(" *p;", 4)), f_more_dims_234(F->t_227)), rt_str(" };", 3)); b_; }));
} else if (((*(P727)rt_nil_check(F->t_227)).kind == (((rt_int)15LL)))) {
F->p_1103 = NULL;
F->p_1103 = (*(P727)rt_nil_check(F->t_227)).tparams;
F->fs_1104 = NULL;
F->fs_1104 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1103 != NULL)) {
F->fs_1104 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->fs_1104)), f_ctype_222(f_tparam_type_286(F->t_227, &(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1103)).name))))), rt_str(" p_", 3)), f_lower_s_15(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1103)).name)))), rt_str("; ", 2)); b_; }));
F->p_1103 = (*(P721)rt_nil_check(F->p_1103)).next;
}
f_put_27(g_out_types_763, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_227)).cname))), rt_str(" ", 1)), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_227)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_763, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_227)).cname))), rt_str(" {", 2)), (*(P716)rt_nil_check(F->fs_1104))), f_ctype_222((*(P727)rt_nil_check(F->t_227)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_763, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_227)).cname))), rt_str(" ", 1)), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_227)).cname))), rt_str(";", 1)); b_; }));
(*(P727)rt_nil_check(F->t_227)).defined = 1;
f_put_27(g_out_types_763, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_227)).cname))), rt_str(" ", 1)), f_struct_body_224(F->t_227)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_dim_lo_230(rt_int k_229) {
  struct f_dim_lo_230fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_229 = k_229;
if ((F->k_229 == ((rt_int)1LL))) {
F->result_ = rt_str("lo", 2);
goto ret_;
}
F->result_ = rt_str_cat(rt_str("lo", 2), f_itos_7(F->k_229));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_dim_hi_232(rt_int k_231) {
  struct f_dim_hi_232fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_231 = k_231;
if ((F->k_231 == ((rt_int)1LL))) {
F->result_ = rt_str("hi", 2);
goto ret_;
}
F->result_ = rt_str_cat(rt_str("hi", 2), f_itos_7(F->k_231));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_more_dims_234(P727 t_233) {
  struct f_more_dims_234fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_233 = t_233;
F->r_1105 = NULL;
F->r_1105 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1107 = ((rt_int)3LL), hi1108 = (*(P727)rt_nil_check(F->t_233)).ndim;
for (rt_int it1109 = lo1107; it1109 <= hi1108; it1109++) {
F->k_1106 = it1109;
F->r_1105 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->r_1105)), rt_str(" rt_int ", 8)), f_dim_lo_230(F->k_1106)), rt_str(", ", 2)), f_dim_hi_232(F->k_1106)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (*(P716)rt_nil_check(F->r_1105));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_237(P727 t_235, rstr *base_236) {
  struct f_acnt_237fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_235 = t_235;
F->base_236 = base_236;
F->r_1110 = NULL;
F->r_1110 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_236)), rt_str(")", 1)); b_; }));
{ rt_int lo1112 = ((rt_int)3LL), hi1113 = (*(P727)rt_nil_check(F->t_235)).ndim;
for (rt_int it1114 = lo1112; it1114 <= hi1113; it1114++) {
F->k_1111 = it1114;
F->r_1110 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->r_1110)), rt_str(" * RT_R_EXT(", 12)), (*F->base_236)), rt_str(".", 1)), f_dim_lo_230(F->k_1111)), rt_str(", ", 2)), (*F->base_236)), rt_str(".", 1)), f_dim_hi_232(F->k_1111)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P716)rt_nil_check(F->r_1110))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P716 f_cons_lo_240(P723 c_238, rt_int k_239) {
  struct f_cons_lo_240fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_238 = c_238;
F->k_239 = k_239;
F->l_1115 = NULL;
if ((F->k_239 == ((rt_int)1LL))) {
F->result_ = (*(P723)rt_nil_check(F->c_238)).lo;
goto ret_;
} else if ((F->k_239 == ((rt_int)2LL))) {
F->result_ = (*(P723)rt_nil_check(F->c_238)).lo2;
goto ret_;
}
F->l_1115 = (*(P723)rt_nil_check(F->c_238)).bnds;
{ rt_int lo1117 = ((rt_int)1LL), hi1118 = rt_sub(rt_add(F->k_239, F->k_239), ((rt_int)6LL));
for (rt_int it1119 = lo1117; it1119 <= hi1118; it1119++) {
F->i_1116 = it1119;
if ((F->l_1115 != NULL)) {
F->l_1115 = (*(P725)rt_nil_check(F->l_1115)).next;
}
}
}
if ((F->l_1115 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P725)rt_nil_check(F->l_1115)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P716 f_cons_hi_243(P723 c_241, rt_int k_242) {
  struct f_cons_hi_243fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_241 = c_241;
F->k_242 = k_242;
F->l_1120 = NULL;
if ((F->k_242 == ((rt_int)1LL))) {
F->result_ = (*(P723)rt_nil_check(F->c_241)).hi;
goto ret_;
} else if ((F->k_242 == ((rt_int)2LL))) {
F->result_ = (*(P723)rt_nil_check(F->c_241)).hi2;
goto ret_;
}
F->l_1120 = (*(P723)rt_nil_check(F->c_241)).bnds;
{ rt_int lo1122 = ((rt_int)1LL), hi1123 = rt_sub(rt_add(F->k_242, F->k_242), ((rt_int)5LL));
for (rt_int it1124 = lo1122; it1124 <= hi1123; it1124++) {
F->i_1121 = it1124;
if ((F->l_1120 != NULL)) {
F->l_1120 = (*(P725)rt_nil_check(F->l_1120)).next;
}
}
}
if ((F->l_1120 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P725)rt_nil_check(F->l_1120)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P727 f_idx_type_246(P727 t_244, rt_int k_245) {
  struct f_idx_type_246fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_244 = t_244;
F->k_245 = k_245;
F->l_1125 = NULL;
F->l_1125 = (*(P727)rt_nil_check(F->t_244)).idxs;
{ rt_int lo1127 = ((rt_int)2LL), hi1128 = F->k_245;
for (rt_int it1129 = lo1127; it1129 <= hi1128; it1129++) {
F->i_1126 = it1129;
F->l_1125 = (*(P741)rt_nil_check(F->l_1125)).next;
}
}
F->result_ = (*(P741)rt_nil_check(F->l_1125)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_247(void) {
  struct f_init_ascii_247fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1130 = NULL;
F->tail_1131 = NULL;
F->start_1132 = ((rt_int)1LL);
{ rt_int lo1134 = ((rt_int)1LL), hi1135 = ((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len;
for (rt_int it1136 = lo1134; it1136 <= hi1135; it1136++) {
F->i_1133 = it1136;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1133) == 32)) {
F->lit_1137 = NULL;
F->lit_1137 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P721)rt_nil_check(F->lit_1137)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->start_1132, rt_sub(F->i_1133, ((rt_int)1LL))); b_; }));
f_append_65(&F->head_1130, &F->tail_1131, F->lit_1137);
F->start_1132 = rt_add(F->i_1133, ((rt_int)1LL));
}
}
}
g_ty_ascii_802 = f_new_typ_173((((rt_int)4LL)));
(*(P727)rt_nil_check(g_ty_ascii_802)).lits = F->head_1130;
(*(P727)rt_nil_check(g_ty_ascii_802)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rt_int f_lit_index_250(P721 lits_248, rstr *name_249) {
  struct f_lit_index_250fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_248 = lits_248;
F->name_249 = name_249;
F->i_1138 = ((rt_int)0LL);
F->l_1139 = NULL;
F->l_1139 = F->lits_248;
while ((F->l_1139 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->l_1139)).name)), (*F->name_249))) {
F->result_ = F->i_1138;
goto ret_;
}
F->i_1138 = rt_add(F->i_1138, ((rt_int)1LL));
F->l_1139 = (*(P721)rt_nil_check(F->l_1139)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P727 f_resolve_subtype_253(P721 st_251, P723 *c_252) {
  struct f_resolve_subtype_253fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_251 = st_251;
F->c_252 = c_252;
F->c_252v = *F->c_252;
F->t_1140 = NULL;
F->dummy_1142 = NULL;
F->c_252v = f_new_cons_174();
{ rt_int sel1143 = (*(P721)rt_nil_check(F->st_251)).kind;
if (0 || (sel1143 == (((rt_int)70LL)))) {
if (((*(P721)rt_nil_check(F->st_251)).a != NULL)) {
(*(P723)rt_nil_check(F->c_252v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_583((*(P721)rt_nil_check(F->st_251)).a, g_ty_int_799, &F->dummy_1142); b_; }));
(*(P723)rt_nil_check(F->c_252v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_583((*(P721)rt_nil_check(F->st_251)).b, g_ty_int_799, &F->dummy_1142); b_; }));
(*(P723)rt_nil_check(F->c_252v)).mlo = f_manifest_293((*(P721)rt_nil_check(F->st_251)).a, &F->ok_1141);
(*(P723)rt_nil_check(F->c_252v)).hasm = F->ok_1141;
(*(P723)rt_nil_check(F->c_252v)).mhi = f_manifest_293((*(P721)rt_nil_check(F->st_251)).b, &F->ok_1141);
(*(P723)rt_nil_check(F->c_252v)).hasm = ((*(P723)rt_nil_check(F->c_252v)).hasm && F->ok_1141);
}
F->result_ = g_ty_int_799;
goto ret_;
} else if (0 || (sel1143 == (((rt_int)71LL)))) {
if (((*(P721)rt_nil_check(F->st_251)).a != NULL)) {
(*(P723)rt_nil_check(F->c_252v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_583((*(P721)rt_nil_check(F->st_251)).a, g_ty_int_799, &F->dummy_1142); b_; }));
}
if (((*(P721)rt_nil_check(F->st_251)).b != NULL)) {
(*(P723)rt_nil_check(F->c_252v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_583((*(P721)rt_nil_check(F->st_251)).b, g_ty_float_801, &F->dummy_1142); b_; }));
(*(P723)rt_nil_check(F->c_252v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_583((*(P721)rt_nil_check(F->st_251)).c, g_ty_float_801, &F->dummy_1142); b_; }));
(*(P723)rt_nil_check(F->c_252v)).hasm = (f_float_lit_255((*(P721)rt_nil_check(F->st_251)).b) && f_float_lit_255((*(P721)rt_nil_check(F->st_251)).c));
}
F->result_ = g_ty_float_801;
goto ret_;
} else if (0 || (sel1143 == (((rt_int)72LL)))) {
F->t_1140 = f_new_typ_173((((rt_int)4LL)));
(*(P727)rt_nil_check(F->t_1140)).lits = (*(P721)rt_nil_check(F->st_251)).a;
if (((*(P721)rt_nil_check(F->st_251)).b != NULL)) {
(*(P723)rt_nil_check(F->c_252v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_583((*(P721)rt_nil_check(F->st_251)).b, F->t_1140, &F->dummy_1142); b_; }));
(*(P723)rt_nil_check(F->c_252v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_583((*(P721)rt_nil_check(F->st_251)).c, F->t_1140, &F->dummy_1142); b_; }));
if ((((*(P721)rt_nil_check((*(P721)rt_nil_check(F->st_251)).b)).kind == (((rt_int)4LL))) && ((*(P721)rt_nil_check((*(P721)rt_nil_check(F->st_251)).c)).kind == (((rt_int)4LL))))) {
(*(P723)rt_nil_check(F->c_252v)).mlo = f_lit_index_250((*(P727)rt_nil_check(F->t_1140)).lits, &(*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->st_251)).b)).name)));
(*(P723)rt_nil_check(F->c_252v)).mhi = f_lit_index_250((*(P727)rt_nil_check(F->t_1140)).lits, &(*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->st_251)).c)).name)));
(*(P723)rt_nil_check(F->c_252v)).hasm = 1;
}
}
F->result_ = F->t_1140;
goto ret_;
} else if (0 || (sel1143 == (((rt_int)73LL)))) {
F->t_1140 = f_resolve_subtype_253((*(P721)rt_nil_check(F->st_251)).a, &F->c_252v);
if ((!f_same_209(F->t_1140, g_ty_ascii_802))) {
f_fail_23((*(P721)rt_nil_check(F->st_251)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
F->c_252v = f_new_cons_174();
if (((*(P721)rt_nil_check(F->st_251)).b != NULL)) {
(*(P723)rt_nil_check(F->c_252v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_583((*(P721)rt_nil_check(F->st_251)).b, g_ty_int_799, &F->dummy_1142); b_; }));
}
F->result_ = g_ty_string_803;
goto ret_;
} else if (0 || (sel1143 == (((rt_int)74LL)))) {
{
F->ec_1144 = NULL;
F->et_1145 = NULL;
F->et_1145 = f_resolve_subtype_253((*(P721)rt_nil_check(F->st_251)).b, &F->ec_1144);
F->ix_1146 = NULL;
F->ix_1146 = (*(P721)rt_nil_check(F->st_251)).a;
F->k_1147 = ((rt_int)0LL);
F->tail_1148 = NULL;
F->btail_1149 = NULL;
F->t_1140 = f_new_typ_173((((rt_int)6LL)));
(*(P727)rt_nil_check(F->t_1140)).elem = F->et_1145;
(*(P727)rt_nil_check(F->t_1140)).elemcons = F->ec_1144;
(*(P727)rt_nil_check(F->t_1140)).elemst = (*(P721)rt_nil_check(F->st_251)).b;
(*(P723)rt_nil_check(F->c_252v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P723)rt_nil_check(F->c_252v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1146 != NULL)) {
F->ic_1150 = NULL;
F->it_1151 = NULL;
F->it_1151 = f_resolve_subtype_253(F->ix_1146, &F->ic_1150);
F->lo_1152 = NULL;
F->hi_1153 = NULL;
F->tl_1154 = NULL;
if ((((*(P727)rt_nil_check(f_base_of_211(F->it_1151))).kind != (((rt_int)1LL))) && ((*(P727)rt_nil_check(f_base_of_211(F->it_1151))).kind != (((rt_int)4LL))))) {
f_fail_23((*(P721)rt_nil_check(F->st_251)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1150 = f_base_cons_214(F->it_1151, F->ic_1150);
F->k_1147 = rt_add(F->k_1147, ((rt_int)1LL));
{ R742 *cell1155 = rt_alloc(sizeof(R742));
(*cell1155).t = NULL;
(*cell1155).next = NULL;
F->tl_1154 = cell1155;
}
(*(P741)rt_nil_check(F->tl_1154)).t = F->it_1151;
if ((F->tail_1148 == NULL)) {
(*(P727)rt_nil_check(F->t_1140)).idxs = F->tl_1154;
} else {
(*(P741)rt_nil_check(F->tail_1148)).next = F->tl_1154;
}
F->tail_1148 = F->tl_1154;
if (((F->ic_1150 != NULL) && ((*(P723)rt_nil_check(F->ic_1150)).lo != NULL))) {
F->lo_1152 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_183(F->ic_1150); b_; }));
F->hi_1153 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_185(F->ic_1150); b_; }));
} else if (((*(P727)rt_nil_check(f_base_of_211(F->it_1151))).kind == (((rt_int)4LL)))) {
F->lo_1152 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1153 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P727)rt_nil_check(f_base_of_211(F->it_1151))).lits), ((rt_int)1LL))); b_; }));
}
if ((F->k_1147 == ((rt_int)1LL))) {
(*(P727)rt_nil_check(F->t_1140)).idx = F->it_1151;
(*(P723)rt_nil_check(F->c_252v)).lo = F->lo_1152;
(*(P723)rt_nil_check(F->c_252v)).hi = F->hi_1153;
} else if ((F->k_1147 == ((rt_int)2LL))) {
(*(P727)rt_nil_check(F->t_1140)).idx2 = F->it_1151;
(*(P723)rt_nil_check(F->c_252v)).lo2 = F->lo_1152;
(*(P723)rt_nil_check(F->c_252v)).hi2 = F->hi_1153;
} else if ((F->lo_1152 != NULL)) {
F->l1_1156 = NULL;
F->l2_1157 = NULL;
{ R726 *cell1158 = rt_alloc(sizeof(R726));
(*cell1158).s = NULL;
(*cell1158).next = NULL;
F->l1_1156 = cell1158;
}
{ R726 *cell1159 = rt_alloc(sizeof(R726));
(*cell1159).s = NULL;
(*cell1159).next = NULL;
F->l2_1157 = cell1159;
}
(*(P725)rt_nil_check(F->l1_1156)).s = F->lo_1152;
(*(P725)rt_nil_check(F->l2_1157)).s = F->hi_1153;
(*(P725)rt_nil_check(F->l1_1156)).next = F->l2_1157;
if ((F->btail_1149 == NULL)) {
(*(P723)rt_nil_check(F->c_252v)).bnds = F->l1_1156;
} else {
(*(P725)rt_nil_check(F->btail_1149)).next = F->l1_1156;
}
F->btail_1149 = F->l2_1157;
}
F->ix_1146 = (*(P721)rt_nil_check(F->ix_1146)).next;
}
(*(P727)rt_nil_check(F->t_1140)).ndim = F->k_1147;
}
F->result_ = F->t_1140;
goto ret_;
} else if (0 || (sel1143 == (((rt_int)77LL)))) {
F->t_1140 = f_new_typ_173((((rt_int)16LL)));
{
F->ec_1160 = NULL;
(*(P727)rt_nil_check(F->t_1140)).elem = f_resolve_subtype_253((*(P721)rt_nil_check(F->st_251)).a, &F->ec_1160);
(*(P727)rt_nil_check(F->t_1140)).elemcons = F->ec_1160;
}
F->result_ = F->t_1140;
goto ret_;
} else if (0 || (sel1143 == (((rt_int)75LL))) || (sel1143 == (((rt_int)76LL)))) {
if (((*(P721)rt_nil_check(F->st_251)).kind == (((rt_int)76LL)))) {
F->t_1140 = f_new_typ_173((((rt_int)17LL)));
} else {
F->t_1140 = f_new_typ_173((((rt_int)7LL)));
}
{
F->comp_1161 = NULL;
F->comp_1161 = (*(P721)rt_nil_check(F->st_251)).a;
F->tail_1162 = NULL;
while ((F->comp_1161 != NULL)) {
F->cc_1163 = NULL;
F->f_1164 = NULL;
{ R730 *cell1165 = rt_alloc(sizeof(R730));
(*cell1165).name = NULL;
(*cell1165).t = NULL;
(*cell1165).c = NULL;
(*cell1165).st = NULL;
(*cell1165).next = NULL;
F->f_1164 = cell1165;
}
(*(P729)rt_nil_check(F->f_1164)).name = (*(P721)rt_nil_check(F->comp_1161)).name;
(*(P729)rt_nil_check(F->f_1164)).t = f_resolve_subtype_253((*(P721)rt_nil_check(F->comp_1161)).a, &F->cc_1163);
(*(P729)rt_nil_check(F->f_1164)).c = F->cc_1163;
(*(P729)rt_nil_check(F->f_1164)).st = (*(P721)rt_nil_check(F->comp_1161)).a;
if ((F->tail_1162 == NULL)) {
(*(P727)rt_nil_check(F->t_1140)).fields = F->f_1164;
} else {
(*(P729)rt_nil_check(F->tail_1162)).next = F->f_1164;
}
F->tail_1162 = F->f_1164;
F->comp_1161 = (*(P721)rt_nil_check(F->comp_1161)).next;
}
}
if (((*(P727)rt_nil_check(F->t_1140)).kind == (((rt_int)17LL)))) {
F->lits_1166 = NULL;
F->ltail_1167 = NULL;
F->f_1168 = NULL;
F->f_1168 = (*(P727)rt_nil_check(F->t_1140)).fields;
while ((F->f_1168 != NULL)) {
F->l_1169 = NULL;
F->l_1169 = f_nn_61((((rt_int)4LL)), (*(P721)rt_nil_check(F->st_251)).line);
if (rt_str_eq((*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1168)).name)), rt_str("TAG", 3))) {
f_fail_23((*(P721)rt_nil_check(F->st_251)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P721)rt_nil_check(F->l_1169)).name = (*(P729)rt_nil_check(F->f_1168)).name;
f_append_65(&F->lits_1166, &F->ltail_1167, F->l_1169);
F->f_1168 = (*(P729)rt_nil_check(F->f_1168)).next;
}
(*(P727)rt_nil_check(F->t_1140)).elem = f_new_typ_173((((rt_int)4LL)));
(*(P727)rt_nil_check((*(P727)rt_nil_check(F->t_1140)).elem)).lits = F->lits_1166;
if (((*(P721)rt_nil_check(F->st_251)).b != NULL)) {
f_tag_constraint_259(F->t_1140, (*(P721)rt_nil_check(F->st_251)).b, F->c_252v);
}
}
F->result_ = F->t_1140;
goto ret_;
} else if (0 || (sel1143 == (((rt_int)79LL)))) {
F->result_ = g_ty_file_805;
goto ret_;
} else if (0 || (sel1143 == (((rt_int)78LL)))) {
if (((f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P731)rt_nil_check(f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1170 = NULL;
F->gt_1170 = f_copy_node_593((*(P721)rt_nil_check(F->st_251)).a);
(*(P721)rt_nil_check(F->gt_1170)).next = NULL;
F->result_ = f_instantiate_type_526(f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1170, (*(P721)rt_nil_check(F->st_251)).b, &F->c_252v, (*(P721)rt_nil_check(F->st_251)).line);
goto ret_;
}
{
F->ec_1171 = NULL;
F->t_1140 = f_new_typ_173((((rt_int)12LL)));
(*(P727)rt_nil_check(F->t_1140)).elem = f_resolve_subtype_253((*(P721)rt_nil_check(F->st_251)).a, &F->ec_1171);
(*(P727)rt_nil_check(F->t_1140)).elemcons = F->ec_1171;
if (((*(P721)rt_nil_check(F->st_251)).b != NULL)) {
(*(P723)rt_nil_check(F->c_252v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_583((*(P721)rt_nil_check(F->st_251)).b, g_ty_int_799, &F->dummy_1142); b_; }));
}
}
F->result_ = F->t_1140;
goto ret_;
} else if (0 || (sel1143 == (((rt_int)80LL)))) {
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->st_251)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_800;
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->st_251)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_802;
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->st_251)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_807;
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->st_251)).name)), rt_str("LATCH", 5))) {
F->result_ = g_ty_latch_808;
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->st_251)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_809;
goto ret_;
}
{
F->y_1172 = NULL;
F->y_1172 = f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->st_251)).name)));
if ((F->y_1172 == NULL)) {
f_fail_23((*(P721)rt_nil_check(F->st_251)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->st_251)).name))); b_; }));
}
if ((((*(P731)rt_nil_check(F->y_1172)).kind == (((rt_int)10LL))) && (((*(P721)rt_nil_check((*(P721)rt_nil_check((*(P731)rt_nil_check(F->y_1172)).decl)).b)).kind == (((rt_int)43LL))) || ((*(P721)rt_nil_check((*(P721)rt_nil_check((*(P731)rt_nil_check(F->y_1172)).decl)).b)).kind == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_526(F->y_1172, (*(P721)rt_nil_check(F->st_251)).a, (*(P721)rt_nil_check(F->st_251)).b, &F->c_252v, (*(P721)rt_nil_check(F->st_251)).line);
goto ret_;
}
if (((((*(P731)rt_nil_check(F->y_1172)).kind == (((rt_int)5LL))) && ((*(P731)rt_nil_check(F->y_1172)).t != NULL)) && ((*(P727)rt_nil_check((*(P731)rt_nil_check(F->y_1172)).t)).kind == (((rt_int)15LL))))) {
F->result_ = f_new_type_271(F->y_1172, F->st_251, &F->c_252v);
goto ret_;
}
if (((((*(P731)rt_nil_check(F->y_1172)).kind == (((rt_int)6LL))) || ((*(P731)rt_nil_check(F->y_1172)).kind == (((rt_int)5LL)))) && ((*(P731)rt_nil_check(F->y_1172)).t != NULL))) {
if (((*(P731)rt_nil_check(F->y_1172)).c != NULL)) {
F->c_252v = (*(P731)rt_nil_check(F->y_1172)).c;
}
F->result_ = (*(P731)rt_nil_check(F->y_1172)).t;
goto ret_;
}
if (((((*(P731)rt_nil_check(F->y_1172)).kind == (((rt_int)5LL))) && ((*(P731)rt_nil_check(F->y_1172)).decl != NULL)) && ((*(P721)rt_nil_check((*(P731)rt_nil_check(F->y_1172)).decl)).kind == (((rt_int)43LL))))) {
F->result_ = f_new_type_271(F->y_1172, F->st_251, &F->c_252v);
goto ret_;
}
if ((((*(P731)rt_nil_check(F->y_1172)).kind == (((rt_int)6LL))) || ((*(P731)rt_nil_check(F->y_1172)).kind == (((rt_int)5LL))))) {
F->result_ = f_resolve_subtype_253((*(P731)rt_nil_check(F->y_1172)).st, &F->c_252v);
goto ret_;
}
f_fail_23((*(P721)rt_nil_check(F->st_251)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->st_251)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_23((*(P721)rt_nil_check(F->st_251)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_252) = F->c_252v;
  RT_FPOP();
  return F->result_;
}

static int f_float_lit_255(P721 e_254) {
  struct f_float_lit_255fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_254 = e_254;
if ((((*(P721)rt_nil_check(F->e_254)).kind == (((rt_int)8LL))) && (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_254)).name)), rt_str("-", 1)) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_254)).name)), rt_str("+", 1))))) {
F->result_ = f_float_lit_255((*(P721)rt_nil_check(F->e_254)).a);
goto ret_;
}
F->result_ = (((*(P721)rt_nil_check(F->e_254)).kind == (((rt_int)2LL))) || ((*(P721)rt_nil_check(F->e_254)).kind == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_259(P727 t_256, P721 e_257, P723 c_258) {
  struct f_tag_constraint_259fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_256 = t_256;
F->e_257 = e_257;
F->c_258 = c_258;
F->dummy_1173 = NULL;
(*(P723)rt_nil_check(F->c_258)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_583(F->e_257, (*(P727)rt_nil_check(F->t_256)).elem, &F->dummy_1173); b_; }));
f_check_type_220(F->dummy_1173, (*(P727)rt_nil_check(F->t_256)).elem, (*(P721)rt_nil_check(F->e_257)).line);
(*(P723)rt_nil_check(F->c_258)).hi = (*(P723)rt_nil_check(F->c_258)).lo;
if (((*(P721)rt_nil_check(F->e_257)).kind == (((rt_int)4LL)))) {
(*(P723)rt_nil_check(F->c_258)).mlo = f_lit_index_250((*(P727)rt_nil_check((*(P727)rt_nil_check(F->t_256)).elem)).lits, &(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_257)).name)));
(*(P723)rt_nil_check(F->c_258)).mhi = (*(P723)rt_nil_check(F->c_258)).mlo;
(*(P723)rt_nil_check(F->c_258)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static int f_opened_261(P727 t_260) {
  struct f_opened_261fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_260 = t_260;
F->c_1174 = NULL;
F->c_1174 = g_caps_775;
if (((((*(P727)rt_nil_check(F->t_260)).kind != (((rt_int)15LL))) || ((*(P727)rt_nil_check(F->t_260)).ocap == NULL)) || ((*(P721)rt_nil_check((*(P727)rt_nil_check(F->t_260)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1174 != NULL)) {
if (((*(P747)rt_nil_check(F->c_1174)).d == (*(P727)rt_nil_check(F->t_260)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1174 = (*(P747)rt_nil_check(F->c_1174)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_replace_all_265(rstr *s_262, rstr *pat_263, rstr *r_264) {
  struct f_replace_all_265fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_262 = s_262;
F->pat_263 = pat_263;
F->r_264 = r_264;
F->i_1175 = ((rt_int)1LL);
if (((((*F->pat_263)).len == ((rt_int)0LL)) || (((*F->s_262)).len < ((*F->pat_263)).len))) {
F->result_ = (*F->s_262);
goto ret_;
}
while ((rt_sub(rt_add(F->i_1175, ((*F->pat_263)).len), ((rt_int)1LL)) <= ((*F->s_262)).len)) {
if (rt_str_eq(rt_str_slice((*F->s_262), F->i_1175, rt_sub(rt_add(F->i_1175, ((*F->pat_263)).len), ((rt_int)1LL))), (*F->pat_263))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_262), ((rt_int)1LL), rt_sub(F->i_1175, ((rt_int)1LL))), (*F->r_264)), f_replace_all_265(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_262), rt_add(F->i_1175, ((*F->pat_263)).len), ((*F->s_262)).len); b_; }), &(*F->pat_263), &(*F->r_264)));
goto ret_;
}
F->i_1175 = rt_add(F->i_1175, ((rt_int)1LL));
}
F->result_ = (*F->s_262);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_subst_267(rstr *s_266) {
  struct f_subst_267fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_266 = s_266;
F->l_1176 = NULL;
F->l_1176 = g_psub_777;
F->r_1177 = NULL;
F->r_1177 = f_mk_3(&(*F->s_266));
while ((F->l_1176 != NULL)) {
F->r_1177 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_265(&(*(P716)rt_nil_check(F->r_1177)), &(*(P716)rt_nil_check((*(P725)rt_nil_check(F->l_1176)).s)), &(*(P716)rt_nil_check((*(P725)rt_nil_check((*(P725)rt_nil_check(F->l_1176)).next)).s))); b_; }));
F->l_1176 = (*(P725)rt_nil_check((*(P725)rt_nil_check(F->l_1176)).next)).next;
}
F->result_ = (*(P716)rt_nil_check(F->r_1177));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P727 f_new_type_271(P731 y_268, P721 st_269, P723 *c_270) {
  struct f_new_type_271fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_268 = y_268;
F->st_269 = st_269;
F->c_270 = c_270;
F->c_270v = *F->c_270;
F->d_1178 = NULL;
F->d_1178 = (*(P731)rt_nil_check(F->y_268)).decl;
F->p_1179 = NULL;
F->uc_1180 = NULL;
F->c_270v = f_new_cons_174();
if (((*(P731)rt_nil_check(F->y_268)).t == NULL)) {
(*(P731)rt_nil_check(F->y_268)).t = f_new_typ_173((((rt_int)15LL)));
(*(P727)rt_nil_check((*(P731)rt_nil_check(F->y_268)).t)).name = (*(P731)rt_nil_check(F->y_268)).name;
(*(P727)rt_nil_check((*(P731)rt_nil_check(F->y_268)).t)).decl = F->d_1178;
(*(P727)rt_nil_check((*(P731)rt_nil_check(F->y_268)).t)).tparams = (*(P721)rt_nil_check(F->d_1178)).b;
if ((g_caps_775 != NULL)) {
(*(P727)rt_nil_check((*(P731)rt_nil_check(F->y_268)).t)).ocap = (*(P747)rt_nil_check(g_caps_775)).d;
}
f_open_scope_167();
F->p_1179 = (*(P721)rt_nil_check(F->d_1178)).b;
while ((F->p_1179 != NULL)) {
F->z_1181 = NULL;
F->z_1181 = f_new_sym_171((((rt_int)2LL)), (*(P721)rt_nil_check(F->p_1179)).name);
F->zc_1182 = NULL;
(*(P731)rt_nil_check(F->z_1181)).t = f_resolve_subtype_253((*(P721)rt_nil_check(F->p_1179)).a, &F->zc_1182);
(*(P731)rt_nil_check(F->z_1181)).mnext = (*(P727)rt_nil_check((*(P731)rt_nil_check(F->y_268)).t)).tpsyms;
(*(P727)rt_nil_check((*(P731)rt_nil_check(F->y_268)).t)).tpsyms = F->z_1181;
(*(P731)rt_nil_check(F->z_1181)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1179)).name)))), rt_str("@", 1)); b_; }));
f_define_158(F->z_1181, (*(P721)rt_nil_check(F->d_1178)).line);
F->p_1179 = (*(P721)rt_nil_check(F->p_1179)).next;
}
(*(P727)rt_nil_check((*(P731)rt_nil_check(F->y_268)).t)).under = f_resolve_subtype_253((*(P721)rt_nil_check(F->d_1178)).a, &F->uc_1180);
(*(P727)rt_nil_check((*(P731)rt_nil_check(F->y_268)).t)).elemcons = F->uc_1180;
f_close_scope_168();
}
(*(P723)rt_nil_check(F->c_270v)).args = (*(P721)rt_nil_check(F->st_269)).b;
F->result_ = (*(P731)rt_nil_check(F->y_268)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_270) = F->c_270v;
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_275(rstr *lval_272, P727 t_273, P723 c_274) {
  struct f_init_storage_275fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_272 = lval_272;
F->t_273 = t_273;
F->c_274 = c_274;
f_make_storage_290(&(*F->lval_272), F->t_273, F->c_274);
if (((*(P727)rt_nil_check(F->t_273)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_278((*(P727)rt_nil_check(F->t_273)).initp, &(*F->lval_272)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_278(P731 y_276, rstr *lval_277) {
  struct f_init_call_278fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_276 = y_276;
F->lval_277 = lval_277;
F->link_1183 = NULL;
F->link_1183 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P731)rt_nil_check(F->y_276)).level > ((rt_int)0LL))) {
F->link_1183 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1185 = ((rt_int)1LL), hi1186 = rt_sub(g_cur_level_773, (*(P731)rt_nil_check(F->y_276)).level);
for (rt_int it1187 = lo1185; it1187 <= hi1186; it1187++) {
F->i_1184 = it1187;
F->link_1183 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->link_1183)), rt_str("->up", 4)); b_; }));
}
}
F->link_1183 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->link_1183)), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_276)).cname)), rt_str("(", 1)), (*(P716)rt_nil_check(F->link_1183))), rt_str("&", 1)), (*F->lval_277)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_280(P727 t_279) {
  struct f_needs_fin_280fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_279 = t_279;
if ((F->t_279 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P727)rt_nil_check(F->t_279)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if (((*(P727)rt_nil_check(F->t_279)).kind == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_280((*(P727)rt_nil_check(F->t_279)).under);
goto ret_;
} else if (((*(P727)rt_nil_check(F->t_279)).kind == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_280((*(P727)rt_nil_check(F->t_279)).elem);
goto ret_;
} else if ((((*(P727)rt_nil_check(F->t_279)).kind == (((rt_int)7LL))) || ((*(P727)rt_nil_check(F->t_279)).kind == (((rt_int)17LL))))) {
F->f_1188 = NULL;
F->f_1188 = (*(P727)rt_nil_check(F->t_279)).fields;
while ((F->f_1188 != NULL)) {
if (f_needs_fin_280((*(P729)rt_nil_check(F->f_1188)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1188 = (*(P729)rt_nil_check(F->f_1188)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_283(rstr *lval_281, P727 t_282) {
  struct f_fin_code_283fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_281 = lval_281;
F->t_282 = t_282;
F->r_1189 = NULL;
F->r_1189 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P727)rt_nil_check(F->t_282)).finalp != NULL)) {
F->r_1189 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_278((*(P727)rt_nil_check(F->t_282)).finalp, &(*F->lval_281)), rt_str(" ", 1)); b_; }));
}
if ((((*(P727)rt_nil_check(F->t_282)).kind == (((rt_int)15LL))) && ((*(P727)rt_nil_check(F->t_282)).tparams == NULL))) {
F->result_ = rt_str_cat((*(P716)rt_nil_check(F->r_1189)), f_fin_code_283(&(*F->lval_281), (*(P727)rt_nil_check(F->t_282)).under));
goto ret_;
} else if (((*(P727)rt_nil_check(F->t_282)).kind == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((*(P716)rt_nil_check(F->r_1189)), f_fin_code_283(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_281), rt_str(".all", 4)); b_; }), (*(P727)rt_nil_check(F->t_282)).under));
goto ret_;
} else if ((((*(P727)rt_nil_check(F->t_282)).kind == (((rt_int)6LL))) && f_needs_fin_280((*(P727)rt_nil_check(F->t_282)).elem))) {
F->i_1190 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->r_1189)), rt_str("for (rt_int ", 12)), F->i_1190), rt_str(" = 0; ", 6)), F->i_1190), rt_str(" < ", 3)), f_acnt_237(F->t_282, &(*F->lval_281))), rt_str("; ", 2)), F->i_1190), rt_str("++) { ", 6)), f_fin_code_283(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_281), rt_str(".p[", 3)), F->i_1190), rt_str("]", 1)); b_; }), (*(P727)rt_nil_check(F->t_282)).elem)), rt_str(" }", 2));
goto ret_;
} else if (((*(P727)rt_nil_check(F->t_282)).kind == (((rt_int)7LL)))) {
F->f_1191 = NULL;
F->f_1191 = (*(P727)rt_nil_check(F->t_282)).fields;
while ((F->f_1191 != NULL)) {
if (f_needs_fin_280((*(P729)rt_nil_check(F->f_1191)).t)) {
F->r_1189 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->r_1189)), f_fin_code_283(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_281), rt_str(".", 1)), f_field_c_17(&(*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1191)).name)))); b_; }), (*(P729)rt_nil_check(F->f_1191)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1191 = (*(P729)rt_nil_check(F->f_1191)).next;
}
} else if (((*(P727)rt_nil_check(F->t_282)).kind == (((rt_int)17LL)))) {
F->f_1192 = NULL;
F->f_1192 = (*(P727)rt_nil_check(F->t_282)).fields;
F->i_1193 = ((rt_int)0LL);
F->r_1189 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->r_1189)), rt_str("switch (", 8)), (*F->lval_281)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1192 != NULL)) {
if (f_needs_fin_280((*(P729)rt_nil_check(F->f_1192)).t)) {
F->r_1189 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->r_1189)), rt_str(" case ", 6)), f_itos_7(F->i_1193)), rt_str(": ", 2)), f_fin_code_283(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_281), rt_str(".u.", 3)), f_field_c_17(&(*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1192)).name)))); b_; }), (*(P729)rt_nil_check(F->f_1192)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1193 = rt_add(F->i_1193, ((rt_int)1LL));
F->f_1192 = (*(P729)rt_nil_check(F->f_1192)).next;
}
F->r_1189 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->r_1189)), rt_str(" }", 2)); b_; }));
}
F->result_ = (*(P716)rt_nil_check(F->r_1189));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P727 f_tparam_type_286(P727 t_284, rstr *name_285) {
  struct f_tparam_type_286fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_284 = t_284;
F->name_285 = name_285;
F->z_1194 = NULL;
F->z_1194 = (*(P727)rt_nil_check(F->t_284)).tpsyms;
while ((F->z_1194 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P731)rt_nil_check(F->z_1194)).name)), (*F->name_285))) {
F->result_ = (*(P731)rt_nil_check(F->z_1194)).t;
goto ret_;
}
F->z_1194 = (*(P731)rt_nil_check(F->z_1194)).mnext;
}
F->result_ = g_ty_int_799;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_290(rstr *lval_287, P727 t_288, P723 c_289) {
  struct f_make_storage_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_287 = lval_287;
F->t_288 = t_288;
F->c_289 = c_289;
if (((*(P727)rt_nil_check(F->t_288)).kind == (((rt_int)15LL)))) {
F->p_1195 = NULL;
F->p_1195 = (*(P727)rt_nil_check(F->t_288)).tparams;
F->a_1196 = NULL;
F->a_1196 = (*(P723)rt_nil_check(F->c_289)).args;
F->uc_1197 = NULL;
F->ut_1198 = NULL;
F->at_1199 = NULL;
if ((f_list_len_67(F->a_1196) != f_list_len_67(F->p_1195))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_288)).name))), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1195))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1195 != NULL)) {
F->pt_1200 = f_tparam_type_286(F->t_288, &(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1195)).name)));
F->v_1201 = rt_str_copy(f_gexpr_583(F->a_1196, F->pt_1200, &F->at_1199));
f_check_type_220(F->at_1199, F->pt_1200, (*(P721)rt_nil_check(F->a_1196)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_287), rt_str(".p_", 3)), f_lower_s_15(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1195)).name)))), rt_str(" = ", 3)), F->v_1201), rt_str(";", 1)); b_; }));
F->p_1195 = (*(P721)rt_nil_check(F->p_1195)).next;
F->a_1196 = (*(P721)rt_nil_check(F->a_1196)).next;
}
{
F->saved_1202 = NULL;
F->saved_1202 = g_psub_777;
F->p_1195 = (*(P727)rt_nil_check(F->t_288)).tparams;
while ((F->p_1195 != NULL)) {
F->l1_1203 = NULL;
F->l2_1204 = NULL;
{ R726 *cell1205 = rt_alloc(sizeof(R726));
(*cell1205).s = NULL;
(*cell1205).next = NULL;
F->l1_1203 = cell1205;
}
{ R726 *cell1206 = rt_alloc(sizeof(R726));
(*cell1206).s = NULL;
(*cell1206).next = NULL;
F->l2_1204 = cell1206;
}
(*(P725)rt_nil_check(F->l1_1203)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1195)).name)))), rt_str("@", 1)); b_; }));
(*(P725)rt_nil_check(F->l2_1204)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_287), rt_str(".p_", 3)), f_lower_s_15(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1195)).name)))); b_; }));
(*(P725)rt_nil_check(F->l1_1203)).next = F->l2_1204;
(*(P725)rt_nil_check(F->l2_1204)).next = g_psub_777;
g_psub_777 = F->l1_1203;
F->p_1195 = (*(P721)rt_nil_check(F->p_1195)).next;
}
if (((*(P727)rt_nil_check(F->t_288)).tparams == NULL)) {
f_init_storage_275(&(*F->lval_287), (*(P727)rt_nil_check(F->t_288)).under, (*(P727)rt_nil_check(F->t_288)).elemcons);
} else {
f_init_storage_275(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_287), rt_str(".all", 4)); b_; }), (*(P727)rt_nil_check(F->t_288)).under, (*(P727)rt_nil_check(F->t_288)).elemcons);
}
g_psub_777 = F->saved_1202;
}
} else if (((*(P727)rt_nil_check(F->t_288)).kind == (((rt_int)12LL)))) {
if (((*(P723)rt_nil_check(F->c_289)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_287), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_287)), rt_str(", ", 2)), f_subst_267(&(*(P716)rt_nil_check((*(P723)rt_nil_check(F->c_289)).lo)))), rt_str(", sizeof(", 9)), f_ctype_222((*(P727)rt_nil_check(F->t_288)).elem)), rt_str("), ", 3)), f_mcopy_314((*(P727)rt_nil_check(F->t_288)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P727)rt_nil_check(F->t_288)).kind == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_287)), rt_str(");", 2)); b_; }));
} else if (((*(P727)rt_nil_check(F->t_288)).kind == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_287), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if (((*(P727)rt_nil_check(F->t_288)).kind == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_287), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P727)rt_nil_check(F->t_288)).kind == (((rt_int)5LL)))) {
if (((*(P723)rt_nil_check(F->c_289)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_287), rt_str(" = rt_str_new(", 14)), f_subst_267(&(*(P716)rt_nil_check((*(P723)rt_nil_check(F->c_289)).slen)))), rt_str(");", 2)); b_; }));
} else if (((*(P727)rt_nil_check(F->t_288)).kind == (((rt_int)6LL)))) {
if (((*(P723)rt_nil_check(F->c_289)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1208 = ((rt_int)1LL), hi1209 = (*(P727)rt_nil_check(F->t_288)).ndim;
for (rt_int it1210 = lo1208; it1210 <= hi1209; it1210++) {
F->k_1207 = it1210;
if ((f_cons_lo_240(F->c_289, F->k_1207) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_287), rt_str(".", 1)), f_dim_lo_230(F->k_1207)), rt_str(" = ", 3)), f_subst_267(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P716)rt_nil_check(f_cons_lo_240(F->c_289, F->k_1207))); b_; }))), rt_str("; ", 2)), (*F->lval_287)), rt_str(".", 1)), f_dim_hi_232(F->k_1207)), rt_str(" = ", 3)), f_subst_267(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P716)rt_nil_check(f_cons_hi_243(F->c_289, F->k_1207))); b_; }))), rt_str(";", 1)); b_; }));
}
}
if (((*(P727)rt_nil_check(F->t_288)).ndim == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_287), rt_str(".lo2 = ", 7)), (*F->lval_287)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_287), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_222((*(P727)rt_nil_check(F->t_288)).elem)), rt_str(") * (size_t)", 12)), f_acnt_237(F->t_288, &(*F->lval_287))), rt_str(" + 1);", 6)); b_; }));
if ((((((((((*(P727)rt_nil_check((*(P727)rt_nil_check(F->t_288)).elem)).kind == (((rt_int)5LL))) || ((*(P727)rt_nil_check((*(P727)rt_nil_check(F->t_288)).elem)).kind == (((rt_int)6LL)))) || ((*(P727)rt_nil_check((*(P727)rt_nil_check(F->t_288)).elem)).kind == (((rt_int)7LL)))) || ((*(P727)rt_nil_check((*(P727)rt_nil_check(F->t_288)).elem)).kind == (((rt_int)15LL)))) || ((*(P727)rt_nil_check((*(P727)rt_nil_check(F->t_288)).elem)).kind == (((rt_int)8LL)))) || ((*(P727)rt_nil_check((*(P727)rt_nil_check(F->t_288)).elem)).kind == (((rt_int)12LL)))) || ((*(P727)rt_nil_check((*(P727)rt_nil_check(F->t_288)).elem)).kind == (((rt_int)13LL)))) || ((*(P727)rt_nil_check((*(P727)rt_nil_check(F->t_288)).elem)).kind == (((rt_int)14LL))))) {
F->i_1211 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1211), rt_str(" = 0; ", 6)), F->i_1211), rt_str(" < ", 3)), f_acnt_237(F->t_288, &(*F->lval_287))), rt_str("; ", 2)), F->i_1211), rt_str("++) {", 5)); b_; }));
f_init_storage_275(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_287), rt_str(".p[", 3)), F->i_1211), rt_str("]", 1)); b_; }), (*(P727)rt_nil_check(F->t_288)).elem, (*(P727)rt_nil_check(F->t_288)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P727)rt_nil_check(F->t_288)).kind == (((rt_int)7LL)))) {
F->f_1212 = NULL;
F->f_1212 = (*(P727)rt_nil_check(F->t_288)).fields;
while ((F->f_1212 != NULL)) {
f_init_storage_275(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_287), rt_str(".", 1)), f_field_c_17(&(*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1212)).name)))); b_; }), (*(P729)rt_nil_check(F->f_1212)).t, (*(P729)rt_nil_check(F->f_1212)).c);
F->f_1212 = (*(P729)rt_nil_check(F->f_1212)).next;
}
} else if (((*(P727)rt_nil_check(F->t_288)).kind == (((rt_int)17LL)))) {
if (((F->c_289 != NULL) && (*(P723)rt_nil_check(F->c_289)).hasm)) {
F->f_1213 = NULL;
F->f_1213 = (*(P727)rt_nil_check(F->t_288)).fields;
{ rt_int lo1215 = ((rt_int)1LL), hi1216 = (*(P723)rt_nil_check(F->c_289)).mlo;
for (rt_int it1217 = lo1215; it1217 <= hi1216; it1217++) {
F->i_1214 = it1217;
F->f_1213 = (*(P729)rt_nil_check(F->f_1213)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_287), rt_str(".tag = ", 7)), f_itos_7((*(P723)rt_nil_check(F->c_289)).mlo)), rt_str(";", 1)); b_; }));
f_init_storage_275(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_287), rt_str(".u.", 3)), f_field_c_17(&(*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1213)).name)))); b_; }), (*(P729)rt_nil_check(F->f_1213)).t, (*(P729)rt_nil_check(F->f_1213)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_287), rt_str(".tag = -1;", 10)); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_manifest_293(P721 e_291, int *ok_292) {
  struct f_manifest_293fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_291 = e_291;
F->ok_292 = ok_292;
F->ok_292v = *F->ok_292;
F->v_1218 = NULL;
F->v_1218 = f_meval_302(F->e_291, &F->ok_292v);
if ((F->ok_292v && ((*(P739)rt_nil_check(F->v_1218)).kind == (((rt_int)1LL))))) {
F->result_ = (*(P739)rt_nil_check(F->v_1218)).i;
goto ret_;
}
F->ok_292v = 0;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_292) = F->ok_292v;
  RT_FPOP();
  return F->result_;
}

static P739 f_mk_mval_296(rt_int kind_294, rt_int i_295) {
  struct f_mk_mval_296fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_294 = kind_294;
F->i_295 = i_295;
F->v_1219 = NULL;
{ R740 *cell1220 = rt_alloc(sizeof(R740));
(*cell1220).s = NULL;
(*cell1220).t = NULL;
F->v_1219 = cell1220;
}
(*(P739)rt_nil_check(F->v_1219)).kind = F->kind_294;
(*(P739)rt_nil_check(F->v_1219)).i = F->i_295;
F->result_ = F->v_1219;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_ipow_299(rt_int a_297, rt_int b_298) {
  struct f_ipow_299fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_297 = a_297;
F->b_298 = b_298;
F->r_1221 = ((rt_int)1LL);
{ rt_int lo1223 = ((rt_int)1LL), hi1224 = F->b_298;
for (rt_int it1225 = lo1223; it1225 <= hi1224; it1225++) {
F->i_1222 = it1225;
F->r_1221 = rt_mul(F->r_1221, F->a_297);
}
}
F->result_ = F->r_1221;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P739 f_meval_302(P721 e_300, int *ok_301) {
  struct f_meval_302fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_300 = e_300;
F->ok_301 = ok_301;
F->ok_301v = *F->ok_301;
F->a_1226 = NULL;
F->b_1227 = NULL;
F->op_1229 = NULL;
F->ok_301v = 0;
if ((F->e_300 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((*(P721)rt_nil_check(F->e_300)).kind == (((rt_int)1LL)))) {
F->ok_301v = 1;
F->result_ = f_mk_mval_296((((rt_int)1LL)), (*(P721)rt_nil_check(F->e_300)).ival);
goto ret_;
} else if (((*(P721)rt_nil_check(F->e_300)).kind == (((rt_int)5LL)))) {
F->ok_301v = 1;
F->result_ = f_mk_mval_296((((rt_int)2LL)), (*(P721)rt_nil_check(F->e_300)).ival);
goto ret_;
} else if (((*(P721)rt_nil_check(F->e_300)).kind == (((rt_int)2LL)))) {
F->ok_301v = 1;
F->result_ = f_mk_mval_296((((rt_int)3LL)), ((rt_int)0LL));
goto ret_;
} else if (((*(P721)rt_nil_check(F->e_300)).kind == (((rt_int)3LL)))) {
F->ok_301v = 1;
F->a_1226 = f_mk_mval_296((((rt_int)5LL)), ((rt_int)0LL));
(*(P739)rt_nil_check(F->a_1226)).s = (*(P721)rt_nil_check(F->e_300)).name;
F->result_ = F->a_1226;
goto ret_;
} else if (((*(P721)rt_nil_check(F->e_300)).kind == (((rt_int)4LL)))) {
if ((f_lit_index_250((*(P727)rt_nil_check(g_ty_ascii_802)).lits, &(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_300)).name))) >= ((rt_int)0LL))) {
F->ok_301v = 1;
F->a_1226 = f_mk_mval_296((((rt_int)4LL)), f_lit_index_250((*(P727)rt_nil_check(g_ty_ascii_802)).lits, &(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_300)).name))));
(*(P739)rt_nil_check(F->a_1226)).t = g_ty_ascii_802;
(*(P739)rt_nil_check(F->a_1226)).s = (*(P721)rt_nil_check(F->e_300)).name;
F->result_ = F->a_1226;
goto ret_;
}
F->a_1226 = f_mk_mval_296((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P739)rt_nil_check(F->a_1226)).s = (*(P721)rt_nil_check(F->e_300)).name;
F->ok_301v = 1;
F->result_ = F->a_1226;
goto ret_;
} else if (((*(P721)rt_nil_check(F->e_300)).kind == (((rt_int)17LL)))) {
F->result_ = f_meval_302((*(P721)rt_nil_check(F->e_300)).a, &F->ok_301v);
goto ret_;
} else if (((*(P721)rt_nil_check(F->e_300)).kind == (((rt_int)7LL)))) {
F->y_1230 = NULL;
F->y_1230 = f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_300)).name)));
if ((((F->y_1230 != NULL) && ((*(P731)rt_nil_check(F->y_1230)).kind == (((rt_int)2LL)))) && ((*(P731)rt_nil_check(F->y_1230)).mv != NULL))) {
F->ok_301v = 1;
F->result_ = (*(P731)rt_nil_check(F->y_1230)).mv;
goto ret_;
} else if ((((F->y_1230 != NULL) && ((*(P731)rt_nil_check(F->y_1230)).kind == (((rt_int)2LL)))) && (*(P731)rt_nil_check(F->y_1230)).hasmv)) {
F->ok_301v = 1;
F->result_ = f_mk_mval_296((((rt_int)1LL)), (*(P731)rt_nil_check(F->y_1230)).mvalue);
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if (((*(P721)rt_nil_check(F->e_300)).kind == (((rt_int)8LL)))) {
F->a_1226 = f_meval_302((*(P721)rt_nil_check(F->e_300)).a, &F->ok_301v);
if ((!F->ok_301v)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_300)).name)), rt_str("NOT", 3)) && ((*(P739)rt_nil_check(F->a_1226)).kind == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_296((((rt_int)2LL)), rt_sub(((rt_int)1LL), (*(P739)rt_nil_check(F->a_1226)).i));
goto ret_;
} else if ((rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_300)).name)), rt_str("-", 1)) && ((*(P739)rt_nil_check(F->a_1226)).kind == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_296((((rt_int)1LL)), rt_neg((*(P739)rt_nil_check(F->a_1226)).i));
goto ret_;
} else if (((rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_300)).name)), rt_str("+", 1)) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_300)).name)), rt_str("-", 1))) && (((*(P739)rt_nil_check(F->a_1226)).kind == (((rt_int)1LL))) || ((*(P739)rt_nil_check(F->a_1226)).kind == (((rt_int)3LL)))))) {
F->result_ = F->a_1226;
goto ret_;
}
F->ok_301v = 0;
F->result_ = NULL;
goto ret_;
} else if ((((*(P721)rt_nil_check(F->e_300)).kind != (((rt_int)9LL))) || f_user_defined_312(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_300)).name))))) {
F->result_ = NULL;
goto ret_;
}
F->op_1229 = (*(P721)rt_nil_check(F->e_300)).name;
F->a_1226 = f_meval_302((*(P721)rt_nil_check(F->e_300)).a, &F->ok_301v);
F->b_1227 = f_meval_302((*(P721)rt_nil_check(F->e_300)).b, &F->ok2_1228);
F->ok_301v = (F->ok_301v && F->ok2_1228);
if ((!F->ok_301v)) {
F->result_ = NULL;
goto ret_;
}
F->ok_301v = 0;
if ((((*(P739)rt_nil_check(F->a_1226)).kind == (((rt_int)1LL))) && ((*(P739)rt_nil_check(F->b_1227)).kind == (((rt_int)1LL))))) {
F->ok_301v = 1;
if (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("+", 1))) {
F->result_ = f_mk_mval_296((((rt_int)1LL)), rt_add((*(P739)rt_nil_check(F->a_1226)).i, (*(P739)rt_nil_check(F->b_1227)).i));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("-", 1))) {
F->result_ = f_mk_mval_296((((rt_int)1LL)), rt_sub((*(P739)rt_nil_check(F->a_1226)).i, (*(P739)rt_nil_check(F->b_1227)).i));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("*", 1))) {
F->result_ = f_mk_mval_296((((rt_int)1LL)), rt_mul((*(P739)rt_nil_check(F->a_1226)).i, (*(P739)rt_nil_check(F->b_1227)).i));
goto ret_;
} else if ((rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("DIV", 3)) && ((*(P739)rt_nil_check(F->b_1227)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_296((((rt_int)1LL)), rt_div((*(P739)rt_nil_check(F->a_1226)).i, (*(P739)rt_nil_check(F->b_1227)).i));
goto ret_;
} else if ((rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("MOD", 3)) && ((*(P739)rt_nil_check(F->b_1227)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_296((((rt_int)1LL)), rt_mod((*(P739)rt_nil_check(F->a_1226)).i, (*(P739)rt_nil_check(F->b_1227)).i));
goto ret_;
} else if ((rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("**", 2)) && ((*(P739)rt_nil_check(F->b_1227)).i >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_296((((rt_int)1LL)), f_ipow_299((*(P739)rt_nil_check(F->a_1226)).i, (*(P739)rt_nil_check(F->b_1227)).i));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("=", 1))) {
F->result_ = f_mk_mval_296((((rt_int)2LL)), f_bool_i_306(((*(P739)rt_nil_check(F->a_1226)).i == (*(P739)rt_nil_check(F->b_1227)).i)));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("/=", 2))) {
F->result_ = f_mk_mval_296((((rt_int)2LL)), f_bool_i_306(((*(P739)rt_nil_check(F->a_1226)).i != (*(P739)rt_nil_check(F->b_1227)).i)));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("<", 1))) {
F->result_ = f_mk_mval_296((((rt_int)2LL)), f_bool_i_306(((*(P739)rt_nil_check(F->a_1226)).i < (*(P739)rt_nil_check(F->b_1227)).i)));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("<=", 2))) {
F->result_ = f_mk_mval_296((((rt_int)2LL)), f_bool_i_306(((*(P739)rt_nil_check(F->a_1226)).i <= (*(P739)rt_nil_check(F->b_1227)).i)));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str(">", 1))) {
F->result_ = f_mk_mval_296((((rt_int)2LL)), f_bool_i_306(((*(P739)rt_nil_check(F->a_1226)).i > (*(P739)rt_nil_check(F->b_1227)).i)));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str(">=", 2))) {
F->result_ = f_mk_mval_296((((rt_int)2LL)), f_bool_i_306(((*(P739)rt_nil_check(F->a_1226)).i >= (*(P739)rt_nil_check(F->b_1227)).i)));
goto ret_;
}
} else if (((((*(P739)rt_nil_check(F->a_1226)).kind == (((rt_int)3LL))) && ((*(P739)rt_nil_check(F->b_1227)).kind == (((rt_int)3LL)))) && (((rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("+", 1)) || rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("-", 1))) || rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("*", 1))) || rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("/", 1))))) {
F->ok_301v = 1;
F->result_ = F->a_1226;
goto ret_;
} else if (((((*(P739)rt_nil_check(F->a_1226)).kind == (((rt_int)3LL))) && ((*(P739)rt_nil_check(F->b_1227)).kind == (((rt_int)1LL)))) && rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("**", 2)))) {
F->ok_301v = 1;
F->result_ = F->a_1226;
goto ret_;
} else if ((((*(P739)rt_nil_check(F->a_1226)).kind == (((rt_int)2LL))) && ((*(P739)rt_nil_check(F->b_1227)).kind == (((rt_int)2LL))))) {
F->ok_301v = 1;
if (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("AND", 3))) {
F->result_ = f_mk_mval_296((((rt_int)2LL)), rt_mul((*(P739)rt_nil_check(F->a_1226)).i, (*(P739)rt_nil_check(F->b_1227)).i));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("OR", 2))) {
F->result_ = f_mk_mval_296((((rt_int)2LL)), f_bool_i_306((rt_add((*(P739)rt_nil_check(F->a_1226)).i, (*(P739)rt_nil_check(F->b_1227)).i) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("XOR", 3)) || rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_296((((rt_int)2LL)), f_bool_i_306(((*(P739)rt_nil_check(F->a_1226)).i != (*(P739)rt_nil_check(F->b_1227)).i)));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("=", 1))) {
F->result_ = f_mk_mval_296((((rt_int)2LL)), f_bool_i_306(((*(P739)rt_nil_check(F->a_1226)).i == (*(P739)rt_nil_check(F->b_1227)).i)));
goto ret_;
}
} else if (((((*(P739)rt_nil_check(F->a_1226)).kind == (((rt_int)4LL))) && ((*(P739)rt_nil_check(F->b_1227)).kind == (((rt_int)4LL)))) && (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("=", 1)) || rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("/=", 2))))) {
F->ok_301v = 1;
if (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("=", 1))) {
F->result_ = f_mk_mval_296((((rt_int)2LL)), f_bool_i_306(rt_str_eq((*(P716)rt_nil_check((*(P739)rt_nil_check(F->a_1226)).s)), (*(P716)rt_nil_check((*(P739)rt_nil_check(F->b_1227)).s)))));
goto ret_;
}
F->result_ = f_mk_mval_296((((rt_int)2LL)), f_bool_i_306((!rt_str_eq((*(P716)rt_nil_check((*(P739)rt_nil_check(F->a_1226)).s)), (*(P716)rt_nil_check((*(P739)rt_nil_check(F->b_1227)).s))))));
goto ret_;
} else if (((((*(P739)rt_nil_check(F->a_1226)).kind == (((rt_int)5LL))) && ((*(P739)rt_nil_check(F->b_1227)).kind == (((rt_int)5LL)))) && (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("=", 1)) || rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("/=", 2))))) {
F->ok_301v = 1;
if (rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("=", 1))) {
F->result_ = f_mk_mval_296((((rt_int)2LL)), f_bool_i_306(rt_str_eq((*(P716)rt_nil_check((*(P739)rt_nil_check(F->a_1226)).s)), (*(P716)rt_nil_check((*(P739)rt_nil_check(F->b_1227)).s)))));
goto ret_;
}
F->result_ = f_mk_mval_296((((rt_int)2LL)), f_bool_i_306((!rt_str_eq((*(P716)rt_nil_check((*(P739)rt_nil_check(F->a_1226)).s)), (*(P716)rt_nil_check((*(P739)rt_nil_check(F->b_1227)).s))))));
goto ret_;
} else if (((rt_str_eq((*(P716)rt_nil_check(F->op_1229)), rt_str("&", 1)) && (((*(P739)rt_nil_check(F->a_1226)).kind == (((rt_int)5LL))) || ((*(P739)rt_nil_check(F->a_1226)).t == g_ty_ascii_802))) && (((*(P739)rt_nil_check(F->b_1227)).kind == (((rt_int)5LL))) || ((*(P739)rt_nil_check(F->b_1227)).t == g_ty_ascii_802)))) {
F->r_1231 = NULL;
F->r_1231 = f_mk_mval_296((((rt_int)5LL)), ((rt_int)0LL));
F->ok_301v = 1;
(*(P739)rt_nil_check(F->r_1231)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_308(F->a_1226), f_mstr_308(F->b_1227)); b_; }));
F->result_ = F->r_1231;
goto ret_;
}
F->ok_301v = 0;
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_301) = F->ok_301v;
  RT_FPOP();
  return F->result_;
}

static rstr f_bool_text_304(int b_303) {
  struct f_bool_text_304fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_303 = b_303;
if (F->b_303) {
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

static rt_int f_bool_i_306(int b_305) {
  struct f_bool_i_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_305 = b_305;
if (F->b_305) {
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

static rstr f_mstr_308(P739 v_307) {
  struct f_mstr_308fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_307 = v_307;
if (((*(P739)rt_nil_check(F->v_307)).kind == (((rt_int)5LL)))) {
F->result_ = (*(P716)rt_nil_check((*(P739)rt_nil_check(F->v_307)).s));
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_310((*(P739)rt_nil_check(F->v_307)).i));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ascii_char_310(rt_int i_309) {
  struct f_ascii_char_310fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_309 = i_309;
F->printable_1232 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_309 >= ((rt_int)32LL)) && (F->i_309 <= ((rt_int)126LL)))) {
F->result_ = rt_str_get(F->printable_1232, rt_sub(F->i_309, ((rt_int)31LL)));
goto ret_;
}
F->result_ = 32;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_user_defined_312(rstr *op_311) {
  struct f_user_defined_312fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_311 = op_311;
F->y_1233 = NULL;
F->y_1233 = f_lookup_153(&(*F->op_311));
F->result_ = ((F->y_1233 != NULL) && (((*(P731)rt_nil_check(F->y_1233)).kind == (((rt_int)3LL))) || ((*(P731)rt_nil_check(F->y_1233)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_314(P727 t_313) {
  struct f_mcopy_314fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_313 = t_313;
F->ct_1234 = rt_str_copy(f_ctype_222(F->t_313));
F->name_1235 = rt_str_new(rt_add((F->ct_1234).len, ((rt_int)3LL)));
rt_str_assign(&F->name_1235, rt_str_cat(rt_str("mc_", 3), F->ct_1234));
F->l_1236 = NULL;
if ((!f_seen_name_335(g_mcopies_798, &F->name_1235))) {
{ R726 *cell1237 = rt_alloc(sizeof(R726));
(*cell1237).s = NULL;
(*cell1237).next = NULL;
F->l_1236 = cell1237;
}
(*(P725)rt_nil_check(F->l_1236)).s = f_mk_3(&F->name_1235);
(*(P725)rt_nil_check(F->l_1236)).next = g_mcopies_798;
g_mcopies_798 = F->l_1236;
f_put_27(g_out_protos_765, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1235), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1235), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1234), rt_str(" *)d = ", 7)), f_copy_code_324(F->t_313, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1234), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_1235;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_316(P727 t_315) {
  struct f_composite_316fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_315 = t_315;
F->result_ = (((((*(P727)rt_nil_check(F->t_315)).kind == (((rt_int)6LL))) || ((*(P727)rt_nil_check(F->t_315)).kind == (((rt_int)7LL)))) || ((*(P727)rt_nil_check(F->t_315)).kind == (((rt_int)17LL)))) || (((*(P727)rt_nil_check(F->t_315)).kind == (((rt_int)15LL))) && ((*(P727)rt_nil_check(F->t_315)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_321(rstr *lval_317, P727 t_318, rstr *v_319, P723 c_320) {
  struct f_assign_code_321fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_317 = lval_317;
F->t_318 = t_318;
F->v_319 = v_319;
F->c_320 = c_320;
if ((((*(P727)rt_nil_check(F->t_318)).kind == (((rt_int)15LL))) && ((*(P727)rt_nil_check(F->t_318)).tparams == NULL))) {
F->result_ = f_assign_code_321(&(*F->lval_317), (*(P727)rt_nil_check(F->t_318)).under, &(*F->v_319), F->c_320);
goto ret_;
}
if (((((*(P727)rt_nil_check(F->t_318)).kind == (((rt_int)17LL))) && (F->c_320 != NULL)) && ((*(P723)rt_nil_check(F->c_320)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_222(F->t_318)), rt_str(" u_ = ", 6)), (*F->v_319)), rt_str("; if (u_.tag != (", 17)), (*(P716)rt_nil_check((*(P723)rt_nil_check(F->c_320)).lo))), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_222(F->t_318)), rt_str("(&", 2)), (*F->lval_317)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_316(F->t_318)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_222(F->t_318)), rt_str("(&", 2)), (*F->lval_317)), rt_str(", ", 2)), (*F->v_319)), rt_str(");", 2));
goto ret_;
}
if (((*(P727)rt_nil_check(F->t_318)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_317)), rt_str(", ", 2)), (*F->v_319)), rt_str(");", 2));
goto ret_;
} else if ((((*(P727)rt_nil_check(F->t_318)).kind == (((rt_int)6LL))) || ((*(P727)rt_nil_check(F->t_318)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_222(F->t_318)), rt_str("(&", 2)), (*F->lval_317)), rt_str(", ", 2)), (*F->v_319)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_317), rt_str(" = ", 3)), f_checked_203(F->t_318, F->c_320, &(*F->v_319))), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_324(P727 t_322, rstr *v_323) {
  struct f_copy_code_324fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_322 = t_322;
F->v_323 = v_323;
if ((((*(P727)rt_nil_check(F->t_322)).kind == (((rt_int)15LL))) && ((*(P727)rt_nil_check(F->t_322)).tparams == NULL))) {
F->result_ = f_copy_code_324((*(P727)rt_nil_check(F->t_322)).under, &(*F->v_323));
goto ret_;
}
if (f_composite_316(F->t_322)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_222(F->t_322)), rt_str("(", 1)), (*F->v_323)), rt_str(")", 1));
goto ret_;
}
if (((*(P727)rt_nil_check(F->t_322)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_323)), rt_str(")", 1));
goto ret_;
} else if ((((*(P727)rt_nil_check(F->t_322)).kind == (((rt_int)6LL))) || ((*(P727)rt_nil_check(F->t_322)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_222(F->t_322)), rt_str("(", 1)), (*F->v_323)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_323);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_328(P727 t_325, rstr *a_326, rstr *b_327) {
  struct f_eq_code_328fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_325 = t_325;
F->a_326 = a_326;
F->b_327 = b_327;
if ((((*(P727)rt_nil_check(F->t_325)).kind == (((rt_int)15LL))) && ((*(P727)rt_nil_check(F->t_325)).tparams == NULL))) {
F->result_ = f_eq_code_328((*(P727)rt_nil_check(F->t_325)).under, &(*F->a_326), &(*F->b_327));
goto ret_;
}
if (f_composite_316(F->t_325)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_222(F->t_325)), rt_str("(", 1)), (*F->a_326)), rt_str(", ", 2)), (*F->b_327)), rt_str(")", 1));
goto ret_;
}
if (((*(P727)rt_nil_check(F->t_325)).kind == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), (*F->a_326)), rt_str(", ", 2)), (*F->b_327)), rt_str(")", 1));
goto ret_;
}
if (((*(P727)rt_nil_check(F->t_325)).kind == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_326)), rt_str(" == ", 4)), (*F->b_327)), rt_str(")", 1));
goto ret_;
}
if (((*(P727)rt_nil_check(F->t_325)).kind == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_326)), rt_str(" == ", 4)), (*F->b_327)), rt_str(")", 1));
goto ret_;
}
if (((*(P727)rt_nil_check(F->t_325)).kind == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P727)rt_nil_check(F->t_325)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_326)), rt_str(", ", 2)), (*F->b_327)), rt_str(")", 1));
goto ret_;
} else if ((((*(P727)rt_nil_check(F->t_325)).kind == (((rt_int)6LL))) || ((*(P727)rt_nil_check(F->t_325)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_222(F->t_325)), rt_str("(", 1)), (*F->a_326)), rt_str(", ", 2)), (*F->b_327)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_326)), rt_str(" == ", 4)), (*F->b_327)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_332(rstr *lval_329, P727 t_330, rstr *v_331) {
  struct f_elem_assign_332fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_329 = lval_329;
F->t_330 = t_330;
F->v_331 = v_331;
F->result_ = f_assign_code_321(&(*F->lval_329), F->t_330, &(*F->v_331), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_335(P725 l_333, rstr *s_334) {
  struct f_seen_name_335fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_333 = l_333;
F->s_334 = s_334;
F->p_1238 = NULL;
F->p_1238 = F->l_333;
while ((F->p_1238 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P725)rt_nil_check(F->p_1238)).s)), (*F->s_334))) {
F->result_ = 1;
goto ret_;
}
F->p_1238 = (*(P725)rt_nil_check(F->p_1238)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_336(void) {
  struct f_emit_helpers_336fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_1239 = NULL;
F->t_1240 = NULL;
F->t_1240 = g_all_types_761;
F->done_1241 = NULL;
while ((F->t_1240 != NULL)) {
if ((f_composite_316(F->t_1240) && (!f_seen_name_335(F->done_1241, &(*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_1240)).cname)))))) {
F->l_1242 = NULL;
F->c_1243 = rt_str_new(((*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_1240)).cname))).len);
rt_str_assign(&F->c_1243, (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_1240)).cname)));
{ R726 *cell1244 = rt_alloc(sizeof(R726));
(*cell1244).s = NULL;
(*cell1244).next = NULL;
F->l_1242 = cell1244;
}
(*(P725)rt_nil_check(F->l_1242)).s = (*(P727)rt_nil_check(F->t_1240)).cname;
(*(P725)rt_nil_check(F->l_1242)).next = F->done_1241;
F->done_1241 = F->l_1242;
f_put_27(g_out_helpers_764, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1243), rt_str("(", 1)), F->c_1243), rt_str(" *d, ", 5)), F->c_1243), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_764, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1243), rt_str(" cp_", 4)), F->c_1243), rt_str("(", 1)), F->c_1243), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_764, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1243), rt_str("(", 1)), F->c_1243), rt_str(" a, ", 4)), F->c_1243), rt_str(" b);", 4)); b_; }));
f_helper_bodies_338(F->t_1240);
}
F->t_1240 = (*(P727)rt_nil_check(F->t_1240)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_338(P727 t_337) {
  struct f_helper_bodies_338fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_337 = t_337;
F->c_1245 = rt_str_new(((*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_337)).cname))).len);
rt_str_assign(&F->c_1245, (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_337)).cname)));
F->b_1246 = NULL;
F->b_1246 = g_out_funcs_767;
if (((*(P727)rt_nil_check(F->t_337)).kind == (((rt_int)6LL)))) {
F->e_1247 = NULL;
F->e_1247 = (*(P727)rt_nil_check(F->t_337)).elem;
F->sizes_1248 = NULL;
F->sizes_1248 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1249 = NULL;
F->bounds_1249 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1251 = ((rt_int)1LL), hi1252 = (*(P727)rt_nil_check(F->t_337)).ndim;
for (rt_int it1253 = lo1251; it1253 <= hi1252; it1253++) {
F->k_1250 = it1253;
F->l_1254 = rt_str_copy(f_dim_lo_230(F->k_1250));
F->h_1255 = rt_str_copy(f_dim_hi_232(F->k_1250));
F->sizes_1248 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->sizes_1248)), rt_str(" || RT_R_EXT(d->", 16)), F->l_1254), rt_str(", d->", 5)), F->h_1255), rt_str(") != RT_R_EXT(s.", 16)), F->l_1254), rt_str(", s.", 4)), F->h_1255), rt_str(")", 1)); b_; }));
F->bounds_1249 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->bounds_1249)), rt_str(" || a.", 6)), F->l_1254), rt_str(" != b.", 6)), F->l_1254), rt_str(" || a.", 6)), F->h_1255), rt_str(" != b.", 6)), F->h_1255); b_; }));
}
}
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1245), rt_str("(", 1)), F->c_1245), rt_str(" *d, ", 5)), F->c_1245), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P716)rt_nil_check(F->sizes_1248))), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_237(F->t_337, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_332(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1247, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_332(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1247, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1245), rt_str(" cp_", 4)), F->c_1245), rt_str("(", 1)), F->c_1245), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1245), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_222(F->e_1247)), rt_str(") * (size_t)", 12)), f_acnt_237(F->t_337, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_237(F->t_337, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_324(F->e_1247, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1245), rt_str("(", 1)), F->c_1245), rt_str(" a, ", 4)), F->c_1245), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P716)rt_nil_check(F->bounds_1249))), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_237(F->t_337, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_328(F->e_1247, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P727)rt_nil_check(F->t_337)).kind == (((rt_int)15LL)))) {
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1245), rt_str("(", 1)), F->c_1245), rt_str(" *d, ", 5)), F->c_1245), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_176((*(P727)rt_nil_check(F->t_337)).under) && ((*(P727)rt_nil_check(F->t_337)).elemcons != NULL)) && ((*(P723)rt_nil_check((*(P727)rt_nil_check(F->t_337)).elemcons)).lo != NULL))) {
F->saved_1256 = NULL;
F->saved_1256 = g_psub_777;
F->p_1257 = NULL;
F->p_1257 = (*(P727)rt_nil_check(F->t_337)).tparams;
while ((F->p_1257 != NULL)) {
F->l1_1258 = NULL;
F->l2_1259 = NULL;
{ R726 *cell1260 = rt_alloc(sizeof(R726));
(*cell1260).s = NULL;
(*cell1260).next = NULL;
F->l1_1258 = cell1260;
}
{ R726 *cell1261 = rt_alloc(sizeof(R726));
(*cell1261).s = NULL;
(*cell1261).next = NULL;
F->l2_1259 = cell1261;
}
(*(P725)rt_nil_check(F->l1_1258)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1257)).name)))), rt_str("@", 1)); b_; }));
(*(P725)rt_nil_check(F->l2_1259)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1257)).name)))); b_; }));
(*(P725)rt_nil_check(F->l1_1258)).next = F->l2_1259;
(*(P725)rt_nil_check(F->l2_1259)).next = g_psub_777;
g_psub_777 = F->l1_1258;
F->p_1257 = (*(P721)rt_nil_check(F->p_1257)).next;
}
if (((*(P727)rt_nil_check((*(P727)rt_nil_check(F->t_337)).under)).kind == (((rt_int)3LL)))) {
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_267(&(*(P716)rt_nil_check((*(P723)rt_nil_check((*(P727)rt_nil_check(F->t_337)).elemcons)).lo)))), rt_str(", ", 2)), f_subst_267(&(*(P716)rt_nil_check((*(P723)rt_nil_check((*(P727)rt_nil_check(F->t_337)).elemcons)).hi)))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_267(&(*(P716)rt_nil_check((*(P723)rt_nil_check((*(P727)rt_nil_check(F->t_337)).elemcons)).lo)))), rt_str(", ", 2)), f_subst_267(&(*(P716)rt_nil_check((*(P723)rt_nil_check((*(P727)rt_nil_check(F->t_337)).elemcons)).hi)))), rt_str(");", 2)); b_; }));
}
g_psub_777 = F->saved_1256;
} else {
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_332(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P727)rt_nil_check(F->t_337)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1245), rt_str(" cp_", 4)), F->c_1245), rt_str("(", 1)), F->c_1245), rt_str(" s) { s.all = ", 14)), f_copy_code_324((*(P727)rt_nil_check(F->t_337)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1245), rt_str("(", 1)), F->c_1245), rt_str(" a, ", 4)), F->c_1245), rt_str(" b) { return ", 13)), f_eq_code_328((*(P727)rt_nil_check(F->t_337)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if (((*(P727)rt_nil_check(F->t_337)).kind == (((rt_int)17LL)))) {
F->f_1262 = NULL;
F->f_1262 = (*(P727)rt_nil_check(F->t_337)).fields;
F->i_1263 = ((rt_int)0LL);
F->cases_as_1264 = NULL;
F->cases_as_1264 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1265 = NULL;
F->cases_cp_1265 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1266 = NULL;
F->cases_eq_1266 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1262 != NULL)) {
F->fn_1267 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1262)).name)))));
F->cases_as_1264 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->cases_as_1264)), rt_str(" case ", 6)), f_itos_7(F->i_1263)), rt_str(": d->", 5)), F->fn_1267), rt_str(" = ", 3)), f_copy_code_324((*(P729)rt_nil_check(F->f_1262)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1267); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1265 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->cases_cp_1265)), rt_str(" case ", 6)), f_itos_7(F->i_1263)), rt_str(": d.", 4)), F->fn_1267), rt_str(" = ", 3)), f_copy_code_324((*(P729)rt_nil_check(F->f_1262)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1267); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1266 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->cases_eq_1266)), rt_str(" case ", 6)), f_itos_7(F->i_1263)), rt_str(": return ", 9)), f_eq_code_328((*(P729)rt_nil_check(F->f_1262)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1267); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1267); b_; }))), rt_str(";", 1)); b_; }));
F->i_1263 = rt_add(F->i_1263, ((rt_int)1LL));
F->f_1262 = (*(P729)rt_nil_check(F->f_1262)).next;
}
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1245), rt_str("(", 1)), F->c_1245), rt_str(" *d, ", 5)), F->c_1245), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (*(P716)rt_nil_check(F->cases_as_1264))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1245), rt_str(" cp_", 4)), F->c_1245), rt_str("(", 1)), F->c_1245), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1245), rt_str(" d = s; switch (s.tag) {", 24)), (*(P716)rt_nil_check(F->cases_cp_1265))), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1245), rt_str("(", 1)), F->c_1245), rt_str(" a, ", 4)), F->c_1245), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (*(P716)rt_nil_check(F->cases_eq_1266))), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1268 = NULL;
F->f_1268 = (*(P727)rt_nil_check(F->t_337)).fields;
F->conds_1269 = NULL;
F->conds_1269 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1245), rt_str("(", 1)), F->c_1245), rt_str(" *d, ", 5)), F->c_1245), rt_str(" s) {", 5)); b_; }));
while ((F->f_1268 != NULL)) {
F->fn_1270 = rt_str_copy(f_field_c_17(&(*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1268)).name))));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_332(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1270); b_; }), (*(P729)rt_nil_check(F->f_1268)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1270); b_; }))); b_; }));
F->f_1268 = (*(P729)rt_nil_check(F->f_1268)).next;
}
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1245), rt_str(" cp_", 4)), F->c_1245), rt_str("(", 1)), F->c_1245), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1245), rt_str(" d = s;", 7)); b_; }));
F->f_1268 = (*(P727)rt_nil_check(F->t_337)).fields;
while ((F->f_1268 != NULL)) {
F->fn_1271 = rt_str_copy(f_field_c_17(&(*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1268)).name))));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1271), rt_str(" = ", 3)), f_copy_code_324((*(P729)rt_nil_check(F->f_1268)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1271); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1269 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->conds_1269)), rt_str(" && ", 4)), f_eq_code_328((*(P729)rt_nil_check(F->f_1268)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1271); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1271); b_; }))); b_; }));
F->f_1268 = (*(P729)rt_nil_check(F->f_1268)).next;
}
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1245), rt_str("(", 1)), F->c_1245), rt_str(" a, ", 4)), F->c_1245), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P716)rt_nil_check(F->conds_1269))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1246, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_340(P721 elems_339) {
  struct f_declare_body_340fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_339 = elems_339;
F->e_1272 = NULL;
F->e_1272 = F->elems_339;
while ((F->e_1272 != NULL)) {
if ((((*(P721)rt_nil_check(F->e_1272)).kind == (((rt_int)41LL))) && ((*(P721)rt_nil_check(F->e_1272)).flag == ((rt_int)0LL)))) {
f_manifest_const_342(F->e_1272);
} else if (((*(P721)rt_nil_check(F->e_1272)).kind == (((rt_int)47LL)))) {
f_gen_capsule_350(F->e_1272);
} else if (((((*(P721)rt_nil_check(F->e_1272)).kind == (((rt_int)48LL))) && ((*(P721)rt_nil_check(F->e_1272)).flag != ((rt_int)1LL))) && ((*(P721)rt_nil_check(F->e_1272)).flag != ((rt_int)3LL)))) {
f_gen_expose_367(F->e_1272);
} else if (((*(P721)rt_nil_check(F->e_1272)).kind == (((rt_int)49LL)))) {
F->y_1273 = NULL;
F->y_1273 = f_new_sym_171((((rt_int)7LL)), (*(P721)rt_nil_check(F->e_1272)).name);
(*(P731)rt_nil_check(F->y_1273)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_1272)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_158(F->y_1273, (*(P721)rt_nil_check(F->e_1272)).line);
f_put_27(g_out_globals_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_1273)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_769, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_1273)).cname))), rt_str(" = rt_exc(", 10)), f_q_18()), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_1272)).name))), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P721)rt_nil_check(F->e_1272)).kind == (((rt_int)42LL)))) {
F->y_1274 = NULL;
F->y_1274 = f_new_sym_171((((rt_int)6LL)), (*(P721)rt_nil_check(F->e_1272)).name);
(*(P731)rt_nil_check(F->y_1274)).st = (*(P721)rt_nil_check(F->e_1272)).a;
f_define_158(F->y_1274, (*(P721)rt_nil_check(F->e_1272)).line);
} else if (((*(P721)rt_nil_check(F->e_1272)).kind == (((rt_int)44LL)))) {
F->y_1275 = NULL;
F->y_1275 = f_new_sym_171((((rt_int)5LL)), (*(P721)rt_nil_check(F->e_1272)).name);
F->t_1276 = NULL;
F->t_1276 = f_new_typ_173((((rt_int)8LL)));
(*(P727)rt_nil_check(F->t_1276)).name = (*(P721)rt_nil_check(F->e_1272)).name;
(*(P727)rt_nil_check(F->t_1276)).decl = F->e_1272;
(*(P731)rt_nil_check(F->y_1275)).t = F->t_1276;
f_define_158(F->y_1275, (*(P721)rt_nil_check(F->e_1272)).line);
} else if (((*(P721)rt_nil_check(F->e_1272)).kind == (((rt_int)43LL)))) {
F->y_1277 = NULL;
F->y_1277 = f_new_sym_171((((rt_int)5LL)), (*(P721)rt_nil_check(F->e_1272)).name);
(*(P731)rt_nil_check(F->y_1277)).st = (*(P721)rt_nil_check(F->e_1272)).a;
(*(P731)rt_nil_check(F->y_1277)).decl = F->e_1272;
f_define_158(F->y_1277, (*(P721)rt_nil_check(F->e_1272)).line);
}
F->e_1272 = (*(P721)rt_nil_check(F->e_1272)).next;
}
F->e_1272 = F->elems_339;
while ((F->e_1272 != NULL)) {
if (((((*(P721)rt_nil_check(F->e_1272)).kind == (((rt_int)45LL))) || ((*(P721)rt_nil_check(F->e_1272)).kind == (((rt_int)46LL)))) || ((*(P721)rt_nil_check(F->e_1272)).kind == (((rt_int)50LL))))) {
F->y_1278 = NULL;
f_declare_subprogram_371(F->e_1272);
F->y_1278 = f_lookup_decl_155(F->e_1272);
(*(P731)rt_nil_check(F->y_1278)).home = F->elems_339;
} else if (((*(P721)rt_nil_check(F->e_1272)).kind == (((rt_int)51LL)))) {
F->g_1279 = NULL;
F->g_1279 = f_new_sym_171((((rt_int)10LL)), (*(P721)rt_nil_check(F->e_1272)).name);
(*(P731)rt_nil_check(F->g_1279)).decl = F->e_1272;
(*(P731)rt_nil_check(F->g_1279)).level = g_cur_level_773;
(*(P731)rt_nil_check(F->g_1279)).owner = g_func_sym_784;
(*(P731)rt_nil_check(F->g_1279)).gctx = g_fctx_774;
f_define_158(F->g_1279, (*(P721)rt_nil_check(F->e_1272)).line);
}
F->e_1272 = (*(P721)rt_nil_check(F->e_1272)).next;
}
F->e_1272 = F->elems_339;
{
F->snap_1280 = NULL;
while ((F->e_1272 != NULL)) {
if (((*(P721)rt_nil_check(F->e_1272)).kind == (((rt_int)51LL)))) {
if ((F->snap_1280 == NULL)) {
{ A736 *cell1281 = rt_alloc(sizeof(A736));
rt_int pv1282 = (((rt_int)4093LL));
(*cell1281).lo = ((rt_int)0LL); (*cell1281).hi = pv1282;
(*cell1281).lo2 = (*cell1281).hi2 = 1;
(*cell1281).p = rt_alloc(sizeof(P731) * (size_t)(RT_CNT((*cell1281))) + 1);
for (rt_int i1283 = 0; i1283 < (RT_CNT((*cell1281))); i1283++) {
(*cell1281).p[i1283] = NULL;
}
F->snap_1280 = cell1281;
}
{ rt_int lo1285 = ((rt_int)0LL), hi1286 = (((rt_int)4093LL));
for (rt_int it1287 = lo1285; it1287 <= hi1286; it1287++) {
F->i_1284 = it1287;
(*(P735)rt_nil_check(F->snap_1280)).p[(rt_index(F->i_1284, (*(P735)rt_nil_check(F->snap_1280)).lo, (*(P735)rt_nil_check(F->snap_1280)).hi) - (*(P735)rt_nil_check(F->snap_1280)).lo)] = ({ A736 b_ = (*(P735)rt_nil_check(g_table_756)); b_.p[(rt_index(F->i_1284, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1288 = NULL;
F->g_1288 = f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_1272)).name)));
(*(P731)rt_nil_check(F->g_1288)).env = F->snap_1280;
}
}
F->e_1272 = (*(P721)rt_nil_check(F->e_1272)).next;
}
}
F->e_1272 = F->elems_339;
while ((F->e_1272 != NULL)) {
if ((((*(P721)rt_nil_check(F->e_1272)).kind == (((rt_int)45LL))) && (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_1272)).name)), rt_str("INITIALIZE", 10)) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_1272)).name)), rt_str("FINALIZE", 8))))) {
F->y_1289 = NULL;
F->y_1289 = f_lookup_decl_155(F->e_1272);
if (((((F->y_1289 != NULL) && ((*(P731)rt_nil_check(F->y_1289)).params != NULL)) && ((*(P733)rt_nil_check((*(P731)rt_nil_check(F->y_1289)).params)).next == NULL)) && (((*(P727)rt_nil_check((*(P733)rt_nil_check((*(P731)rt_nil_check(F->y_1289)).params)).t)).kind == (((rt_int)15LL))) || ((*(P727)rt_nil_check((*(P733)rt_nil_check((*(P731)rt_nil_check(F->y_1289)).params)).t)).kind == (((rt_int)8LL)))))) {
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_1272)).name)), rt_str("INITIALIZE", 10))) {
(*(P727)rt_nil_check((*(P733)rt_nil_check((*(P731)rt_nil_check(F->y_1289)).params)).t)).initp = F->y_1289;
} else {
(*(P727)rt_nil_check((*(P733)rt_nil_check((*(P731)rt_nil_check(F->y_1289)).params)).t)).finalp = F->y_1289;
}
}
}
F->e_1272 = (*(P721)rt_nil_check(F->e_1272)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_342(P721 d_341) {
  struct f_manifest_const_342fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_341 = d_341;
F->v_1291 = NULL;
F->y_1292 = NULL;
F->t_1293 = NULL;
F->ctext_1294 = NULL;
if (((*(P721)rt_nil_check(F->d_341)).a != NULL)) {
if ((((*(P721)rt_nil_check((*(P721)rt_nil_check(F->d_341)).a)).kind != (((rt_int)70LL))) || ((*(P721)rt_nil_check((*(P721)rt_nil_check(F->d_341)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1291 = f_meval_302((*(P721)rt_nil_check(F->d_341)).b, &F->ok_1290);
if ((!F->ok_1290)) {
goto ret_;
}
{
F->saved_1295 = NULL;
F->saved_1295 = g_code_770;
g_code_770 = f_new_buffer_24();
g_trial_797 = rt_add(g_trial_797, ((rt_int)1LL));
{ rt_frame xf1296;
if (RT_TRY(xf1296)) {
F->ctext_1294 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_583((*(P721)rt_nil_check(F->d_341)).b, NULL, &F->t_1293)), rt_str(")", 1)); b_; }));
RT_POP(xf1296);
} else {
RT_POP(xf1296);
int x1297 = rt_xcur;
if (0 || x1297 == ex_compile_error_1) {
F->ok_1290 = 0;
} else {
rt_raise(x1297);
}
}
}
g_trial_797 = rt_sub(g_trial_797, ((rt_int)1LL));
F->ok_1290 = (F->ok_1290 && ((*(P743)rt_nil_check(g_code_770)).head == NULL));
g_code_770 = F->saved_1295;
}
if (((!F->ok_1290) || (((*(P721)rt_nil_check(F->d_341)).a != NULL) && ((*(P727)rt_nil_check(F->t_1293)).kind != (((rt_int)1LL)))))) {
goto ret_;
}
if (((*(P739)rt_nil_check(F->v_1291)).kind == (((rt_int)4LL)))) {
(*(P739)rt_nil_check(F->v_1291)).t = F->t_1293;
(*(P739)rt_nil_check(F->v_1291)).i = f_lit_index_250((*(P727)rt_nil_check(f_base_of_211(F->t_1293))).lits, &(*(P716)rt_nil_check((*(P739)rt_nil_check(F->v_1291)).s)));
}
(*(P721)rt_nil_check(F->d_341)).flag = ((rt_int)1LL);
F->y_1292 = f_new_sym_171((((rt_int)2LL)), (*(P721)rt_nil_check(F->d_341)).name);
(*(P731)rt_nil_check(F->y_1292)).t = F->t_1293;
(*(P731)rt_nil_check(F->y_1292)).c = f_new_cons_174();
(*(P731)rt_nil_check(F->y_1292)).mv = F->v_1291;
if (((*(P739)rt_nil_check(F->v_1291)).kind == (((rt_int)1LL)))) {
(*(P731)rt_nil_check(F->y_1292)).mvalue = (*(P739)rt_nil_check(F->v_1291)).i;
(*(P731)rt_nil_check(F->y_1292)).hasmv = 1;
}
(*(P731)rt_nil_check(F->y_1292)).ro_flag = 1;
(*(P731)rt_nil_check(F->y_1292)).access = F->ctext_1294;
f_define_158(F->y_1292, (*(P721)rt_nil_check(F->d_341)).line);
ret_:
  RT_FPOP();
  return;
}

static int f_exported_346(P721 d_343, rstr *name_344, int *ro_345) {
  struct f_exported_346fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_343 = d_343;
F->name_344 = name_344;
F->ro_345 = ro_345;
F->ro_345v = *F->ro_345;
F->p_1298 = NULL;
F->p_1298 = (*(P721)rt_nil_check(F->d_343)).a;
F->ro_345v = 0;
if (((*(P721)rt_nil_check(F->d_343)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1298 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1298)).name)), (*F->name_344))) {
F->ro_345v = ((*(P721)rt_nil_check(F->p_1298)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1298 = (*(P721)rt_nil_check(F->p_1298)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ro_345) = F->ro_345v;
  RT_FPOP();
  return F->result_;
}

static P731 f_copy_sym_348(P731 y_347) {
  struct f_copy_sym_348fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_347 = y_347;
F->z_1299 = NULL;
{ R732 *cell1300 = rt_alloc(sizeof(R732));
(*cell1300).name = NULL;
(*cell1300).t = NULL;
(*cell1300).c = NULL;
(*cell1300).access = NULL;
(*cell1300).cname = NULL;
(*cell1300).st = NULL;
(*cell1300).decl = NULL;
(*cell1300).params = NULL;
(*cell1300).result = NULL;
(*cell1300).members = NULL;
(*cell1300).mnext = NULL;
(*cell1300).binds = NULL;
(*cell1300).insts = NULL;
(*cell1300).env = NULL;
(*cell1300).chain = NULL;
(*cell1300).stack = NULL;
(*cell1300).owner = NULL;
(*cell1300).gctx = NULL;
(*cell1300).mv = NULL;
(*cell1300).reqs = NULL;
(*cell1300).home = NULL;
F->z_1299 = cell1300;
}
(*(P731)rt_nil_check(F->z_1299)).kind = (*(P731)rt_nil_check(F->y_347)).kind;
(*(P731)rt_nil_check(F->z_1299)).name = (*(P731)rt_nil_check(F->y_347)).name;
(*(P731)rt_nil_check(F->z_1299)).t = (*(P731)rt_nil_check(F->y_347)).t;
(*(P731)rt_nil_check(F->z_1299)).c = (*(P731)rt_nil_check(F->y_347)).c;
(*(P731)rt_nil_check(F->z_1299)).access = (*(P731)rt_nil_check(F->y_347)).access;
(*(P731)rt_nil_check(F->z_1299)).cname = (*(P731)rt_nil_check(F->y_347)).cname;
(*(P731)rt_nil_check(F->z_1299)).ro_flag = (*(P731)rt_nil_check(F->y_347)).ro_flag;
(*(P731)rt_nil_check(F->z_1299)).mvalue = (*(P731)rt_nil_check(F->y_347)).mvalue;
(*(P731)rt_nil_check(F->z_1299)).hasmv = (*(P731)rt_nil_check(F->y_347)).hasmv;
(*(P731)rt_nil_check(F->z_1299)).st = (*(P731)rt_nil_check(F->y_347)).st;
(*(P731)rt_nil_check(F->z_1299)).decl = (*(P731)rt_nil_check(F->y_347)).decl;
(*(P731)rt_nil_check(F->z_1299)).params = (*(P731)rt_nil_check(F->y_347)).params;
(*(P731)rt_nil_check(F->z_1299)).result = (*(P731)rt_nil_check(F->y_347)).result;
(*(P731)rt_nil_check(F->z_1299)).level = (*(P731)rt_nil_check(F->y_347)).level;
(*(P731)rt_nil_check(F->z_1299)).byref = (*(P731)rt_nil_check(F->y_347)).byref;
(*(P731)rt_nil_check(F->z_1299)).members = (*(P731)rt_nil_check(F->y_347)).members;
(*(P731)rt_nil_check(F->z_1299)).env = (*(P731)rt_nil_check(F->y_347)).env;
F->result_ = F->z_1299;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_350(P721 d_349) {
  struct f_gen_capsule_350fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_349 = d_349;
F->y_1301 = NULL;
F->y_1301 = f_new_sym_171((((rt_int)8LL)), (*(P721)rt_nil_check(F->d_349)).name);
F->saved_1302 = NULL;
F->saved_1302 = g_suppress_790;
(*(P731)rt_nil_check(F->y_1301)).decl = F->d_349;
if (((*(P721)rt_nil_check(F->d_349)).b == NULL)) {
g_suppress_790 = f_suppressing_378((*(P721)rt_nil_check(F->d_349)).prags);
f_elaborate_capsule_359(F->d_349, F->y_1301, NULL, F->d_349);
g_suppress_790 = F->saved_1302;
}
f_define_158(F->y_1301, (*(P721)rt_nil_check(F->d_349)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_354(P721 d_351, P721 args_352, rt_int line_353) {
  struct f_capsule_params_354fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_351 = d_351;
F->args_352 = args_352;
F->line_353 = line_353;
F->p_1303 = NULL;
F->p_1303 = (*(P721)rt_nil_check(F->d_351)).b;
F->a_1304 = NULL;
F->a_1304 = F->args_352;
F->t_1305 = NULL;
F->vt_1306 = NULL;
F->c_1307 = NULL;
while (((F->p_1303 != NULL) && (F->a_1304 != NULL))) {
F->t_1305 = f_resolve_subtype_253((*(P721)rt_nil_check(F->p_1303)).a, &F->c_1307);
if (((*(P721)rt_nil_check(F->p_1303)).ival == (((rt_int)3LL)))) {
f_fail_23(F->line_353, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if ((((*(P721)rt_nil_check(F->p_1303)).ival == (((rt_int)2LL))) || ((*(P721)rt_nil_check(F->p_1303)).ival == (((rt_int)4LL))))) {
F->lv_1308 = NULL;
F->lc_1309 = NULL;
F->y_1311 = NULL;
F->y_1311 = f_new_sym_171((((rt_int)1LL)), (*(P721)rt_nil_check(F->p_1303)).name);
f_lvalue_552(F->a_1304, &F->lv_1308, &F->vt_1306, &F->lc_1309, &F->ro_1310);
f_check_type_220(F->vt_1306, F->t_1305, F->line_353);
if ((F->ro_1310 && ((*(P721)rt_nil_check(F->p_1303)).ival == (((rt_int)2LL))))) {
f_fail_23(F->line_353, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1303)).name)), rt_str(" needs a variable", 17)); b_; }));
}
if (g_in_func_772) {
F->f_1312 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1303)).name))), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_771, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_222(F->t_1305)), rt_str(" *", 2)), F->f_1312), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1312), rt_str(" = &", 4)), (*(P716)rt_nil_check(F->lv_1308))), rt_str(";", 1)); b_; }));
(*(P731)rt_nil_check(F->y_1311)).level = g_cur_level_773;
(*(P731)rt_nil_check(F->y_1311)).access = f_mk_3(&F->f_1312);
(*(P731)rt_nil_check(F->y_1311)).byref = 1;
} else {
F->g_1313 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1303)).name)))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_222(F->t_1305)), rt_str(" *", 2)), F->g_1313), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_780, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1313), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1313, rt_str(" = &", 4)), (*(P716)rt_nil_check(F->lv_1308))), rt_str(";", 1)); b_; }));
(*(P731)rt_nil_check(F->y_1311)).level = ((rt_int)0LL);
(*(P731)rt_nil_check(F->y_1311)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1313), rt_str(")", 1)); b_; }));
}
(*(P731)rt_nil_check(F->y_1311)).t = F->t_1305;
(*(P731)rt_nil_check(F->y_1311)).c = F->lc_1309;
(*(P731)rt_nil_check(F->y_1311)).ro_flag = ((*(P721)rt_nil_check(F->p_1303)).ival == (((rt_int)4LL)));
f_define_158(F->y_1311, F->line_353);
} else {
F->y_1314 = NULL;
F->y_1314 = f_new_sym_171((((rt_int)2LL)), (*(P721)rt_nil_check(F->p_1303)).name);
F->v_1315 = rt_str_copy(f_gexpr_583(F->a_1304, F->t_1305, &F->vt_1306));
f_check_type_220(F->vt_1306, F->t_1305, F->line_353);
{
F->access_1316 = rt_str_copy(f_storage_387(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1303)).name)), F->t_1305));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1316, rt_str(" = ", 3)), f_copy_code_324(F->t_1305, &F->v_1315)), rt_str(";", 1)); b_; }));
f_bind_390(F->y_1314, &F->access_1316);
}
(*(P731)rt_nil_check(F->y_1314)).t = F->t_1305;
(*(P731)rt_nil_check(F->y_1314)).c = F->c_1307;
(*(P731)rt_nil_check(F->y_1314)).ro_flag = 1;
f_define_158(F->y_1314, F->line_353);
}
F->p_1303 = (*(P721)rt_nil_check(F->p_1303)).next;
F->a_1304 = (*(P721)rt_nil_check(F->a_1304)).next;
}
if (((F->p_1303 != NULL) || (F->a_1304 != NULL))) {
f_fail_23(F->line_353, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->d_351)).name))); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_359(P721 d_355, P731 y_356, P721 args_357, P721 owner_358) {
  struct f_elaborate_capsule_359fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_355 = d_355;
F->y_356 = y_356;
F->args_357 = args_357;
F->owner_358 = owner_358;
F->cr_1317 = NULL;
F->ctx_1318 = NULL;
F->saved_gotos_1319 = NULL;
F->m_1320 = NULL;
F->p_1321 = NULL;
F->p_1321 = (*(P721)rt_nil_check(F->d_355)).a;
{ R748 *cell1323 = rt_alloc(sizeof(R748));
(*cell1323).d = NULL;
(*cell1323).next = NULL;
F->cr_1317 = cell1323;
}
(*(P747)rt_nil_check(F->cr_1317)).d = F->d_355;
(*(P747)rt_nil_check(F->cr_1317)).next = g_caps_775;
g_caps_775 = F->cr_1317;
f_open_scope_167();
if (((*(P721)rt_nil_check(F->d_355)).b != NULL)) {
f_capsule_params_354(F->d_355, F->args_357, (*(P721)rt_nil_check(F->owner_358)).line);
}
{ R738 *cell1324 = rt_alloc(sizeof(R738));
(*cell1324).imps = NULL;
(*cell1324).next = NULL;
F->ctx_1318 = cell1324;
}
(*(P737)rt_nil_check(F->ctx_1318)).depth = g_depth_759;
(*(P737)rt_nil_check(F->ctx_1318)).imps = (*(P721)rt_nil_check(F->d_355)).d;
(*(P737)rt_nil_check(F->ctx_1318)).all_imp = ((*(P721)rt_nil_check(F->d_355)).flag >= ((rt_int)2LL));
(*(P737)rt_nil_check(F->ctx_1318)).next = g_fctx_774;
g_fctx_774 = F->ctx_1318;
F->saved_gotos_1319 = g_gotos_793;
g_gotos_793 = NULL;
f_declare_labels_413((*(P721)rt_nil_check(F->d_355)).c);
f_declare_body_340((*(P721)rt_nil_check(F->d_355)).c);
f_capsule_body_420((*(P721)rt_nil_check(F->d_355)).c);
{
F->w_1325 = NULL;
{ R750 *cell1326 = rt_alloc(sizeof(R750));
(*cell1326).d = NULL;
(*cell1326).w = NULL;
(*cell1326).next = NULL;
F->w_1325 = cell1326;
}
(*(P749)rt_nil_check(F->w_1325)).d = F->owner_358;
(*(P749)rt_nil_check(F->w_1325)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_407((*(P721)rt_nil_check(F->d_355)).c); b_; }));
(*(P749)rt_nil_check(F->w_1325)).next = g_cap_waits_776;
g_cap_waits_776 = F->w_1325;
}
g_fctx_774 = (*(P737)rt_nil_check(g_fctx_774)).next;
F->m_1320 = g_scope_stack_760;
while (((F->m_1320 != NULL) && ((*(P731)rt_nil_check(F->m_1320)).depth == g_depth_759))) {
if ((((((*(P731)rt_nil_check(F->m_1320)).kind == (((rt_int)5LL))) && ((*(P731)rt_nil_check(F->m_1320)).t == NULL)) && ((*(P731)rt_nil_check(F->m_1320)).decl != NULL)) && ((*(P721)rt_nil_check((*(P731)rt_nil_check(F->m_1320)).decl)).kind == (((rt_int)43LL))))) {
(*(P731)rt_nil_check(F->m_1320)).t = f_new_type_271(F->m_1320, f_nn_61((((rt_int)80LL)), (*(P721)rt_nil_check(F->d_355)).line), &(*(P731)rt_nil_check(F->m_1320)).c);
} else if (((((*(P731)rt_nil_check(F->m_1320)).kind == (((rt_int)5LL))) || ((*(P731)rt_nil_check(F->m_1320)).kind == (((rt_int)6LL)))) && ((*(P731)rt_nil_check(F->m_1320)).t == NULL))) {
(*(P731)rt_nil_check(F->m_1320)).t = f_resolve_subtype_253((*(P731)rt_nil_check(F->m_1320)).st, &(*(P731)rt_nil_check(F->m_1320)).c);
} else if ((((*(P731)rt_nil_check(F->m_1320)).kind == (((rt_int)5LL))) && ((*(P727)rt_nil_check((*(P731)rt_nil_check(F->m_1320)).t)).kind == (((rt_int)8LL))))) {
f_finish_ptr_369((*(P731)rt_nil_check(F->m_1320)).t);
}
F->m_1320 = (*(P731)rt_nil_check(F->m_1320)).stack;
}
F->m_1320 = g_scope_stack_760;
while (((F->m_1320 != NULL) && ((*(P731)rt_nil_check(F->m_1320)).depth == g_depth_759))) {
if (f_exported_346(F->d_355, &(*(P716)rt_nil_check((*(P731)rt_nil_check(F->m_1320)).name)), &F->ro_1322)) {
F->z_1327 = NULL;
F->z_1327 = f_copy_sym_348(F->m_1320);
if (F->ro_1322) {
(*(P731)rt_nil_check(F->z_1327)).ro_flag = 1;
}
(*(P731)rt_nil_check(F->z_1327)).mnext = (*(P731)rt_nil_check(F->y_356)).members;
(*(P731)rt_nil_check(F->y_356)).members = F->z_1327;
}
F->m_1320 = (*(P731)rt_nil_check(F->m_1320)).stack;
}
while ((F->p_1321 != NULL)) {
if ((((!rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1321)).name)), rt_str(":=", 2))) && (!rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1321)).name)), rt_str("=", 1)))) && ((f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1321)).name))) == NULL) || ((*(P731)rt_nil_check(f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1321)).name))))).depth != g_depth_759)))) {
f_fail_23((*(P721)rt_nil_check(F->d_355)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1321)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->d_355)).name))); b_; }));
}
F->p_1321 = (*(P721)rt_nil_check(F->p_1321)).next;
}
f_close_scope_168();
g_caps_775 = (*(P747)rt_nil_check(g_caps_775)).next;
g_gotos_793 = F->saved_gotos_1319;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_362(P721 d_360, rstr *op_361) {
  struct f_exports_op_362fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_360 = d_360;
F->op_361 = op_361;
F->p_1328 = NULL;
if ((F->d_360 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1328 = (*(P721)rt_nil_check(F->d_360)).a;
while ((F->p_1328 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1328)).name)), (*F->op_361))) {
F->result_ = 1;
goto ret_;
}
F->p_1328 = (*(P721)rt_nil_check(F->p_1328)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P716 f_renamed_365(P721 d_363, P731 z_364) {
  struct f_renamed_365fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_363 = d_363;
F->z_364 = z_364;
F->r_1329 = NULL;
F->r_1329 = (*(P721)rt_nil_check(F->d_363)).c;
while ((F->r_1329 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->r_1329)).name)), (*(P716)rt_nil_check((*(P731)rt_nil_check(F->z_364)).name)))) {
F->result_ = (*(P721)rt_nil_check((*(P721)rt_nil_check(F->r_1329)).a)).name;
goto ret_;
}
F->r_1329 = (*(P721)rt_nil_check(F->r_1329)).next;
}
F->result_ = (*(P731)rt_nil_check(F->z_364)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_expose_367(P721 d_366) {
  struct f_gen_expose_367fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_366 = d_366;
F->y_1330 = NULL;
F->y_1330 = f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->d_366)).name)));
F->m_1331 = NULL;
F->p_1332 = NULL;
F->p_1332 = (*(P721)rt_nil_check(F->d_366)).a;
F->r_1333 = NULL;
F->r_1333 = (*(P721)rt_nil_check(F->d_366)).c;
if (((F->y_1330 == NULL) || ((*(P731)rt_nil_check(F->y_1330)).kind != (((rt_int)8LL))))) {
f_fail_23((*(P721)rt_nil_check(F->d_366)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->d_366)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if ((((*(P721)rt_nil_check(F->d_366)).flag == ((rt_int)1LL)) || ((*(P721)rt_nil_check(F->d_366)).flag == ((rt_int)3LL)))) {
F->inst_1334 = NULL;
F->inst_1334 = f_new_sym_171((((rt_int)8LL)), (*(P731)rt_nil_check(F->y_1330)).name);
(*(P731)rt_nil_check(F->inst_1334)).decl = (*(P731)rt_nil_check(F->y_1330)).decl;
f_elaborate_capsule_359((*(P731)rt_nil_check(F->y_1330)).decl, F->inst_1334, (*(P721)rt_nil_check(F->d_366)).b, F->d_366);
F->y_1330 = F->inst_1334;
} else if ((((*(P731)rt_nil_check(F->y_1330)).decl != NULL) && ((*(P721)rt_nil_check((*(P731)rt_nil_check(F->y_1330)).decl)).b != NULL))) {
f_fail_23((*(P721)rt_nil_check(F->d_366)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->d_366)).name))), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P721)rt_nil_check(F->d_366)).b != NULL)) {
f_fail_23((*(P721)rt_nil_check(F->d_366)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1333 != NULL)) {
F->found_1335 = 0;
F->m_1331 = (*(P731)rt_nil_check(F->y_1330)).members;
while ((F->m_1331 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P731)rt_nil_check(F->m_1331)).name)), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->r_1333)).name)))) {
F->found_1335 = 1;
}
F->m_1331 = (*(P731)rt_nil_check(F->m_1331)).mnext;
}
if ((!F->found_1335)) {
f_fail_23((*(P721)rt_nil_check(F->d_366)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->r_1333)).name)), rt_str(" is renamed but not made known by ", 34)), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->d_366)).name))); b_; }));
}
F->r_1333 = (*(P721)rt_nil_check(F->r_1333)).next;
}
if (((*(P721)rt_nil_check(F->d_366)).ival == ((rt_int)1LL))) {
F->m_1331 = (*(P731)rt_nil_check(F->y_1330)).members;
while ((F->m_1331 != NULL)) {
F->z_1336 = NULL;
F->z_1336 = f_copy_sym_348(F->m_1331);
(*(P731)rt_nil_check(F->z_1336)).name = f_renamed_365(F->d_366, F->m_1331);
f_define_158(F->z_1336, (*(P721)rt_nil_check(F->d_366)).line);
F->m_1331 = (*(P731)rt_nil_check(F->m_1331)).mnext;
}
goto ret_;
}
while ((F->p_1332 != NULL)) {
F->found_1337 = 0;
F->m_1331 = (*(P731)rt_nil_check(F->y_1330)).members;
while ((F->m_1331 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P731)rt_nil_check(F->m_1331)).name)), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1332)).name)))) {
F->z_1338 = NULL;
F->z_1338 = f_copy_sym_348(F->m_1331);
if (((*(P721)rt_nil_check(F->p_1332)).ival == ((rt_int)1LL))) {
(*(P731)rt_nil_check(F->z_1338)).ro_flag = 1;
}
(*(P731)rt_nil_check(F->z_1338)).name = f_renamed_365(F->d_366, F->m_1331);
f_define_158(F->z_1338, (*(P721)rt_nil_check(F->d_366)).line);
F->found_1337 = 1;
}
F->m_1331 = (*(P731)rt_nil_check(F->m_1331)).mnext;
}
if ((!F->found_1337)) {
f_fail_23((*(P721)rt_nil_check(F->d_366)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1332)).name)), rt_str(" is not exported by ", 20)), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->d_366)).name))); b_; }));
}
F->p_1332 = (*(P721)rt_nil_check(F->p_1332)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_369(P727 t_368) {
  struct f_finish_ptr_369fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_368 = t_368;
F->d_1339 = NULL;
F->d_1339 = (*(P727)rt_nil_check(F->t_368)).decl;
F->p_1340 = NULL;
F->c_1341 = NULL;
F->dummy_1342 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1342, rt_str(" ", 1));
if (((*(P727)rt_nil_check(F->t_368)).target != NULL)) {
goto ret_;
}
f_open_scope_167();
F->p_1340 = (*(P721)rt_nil_check(F->d_1339)).b;
while ((F->p_1340 != NULL)) {
F->y_1343 = NULL;
F->y_1343 = f_new_sym_171((((rt_int)2LL)), (*(P721)rt_nil_check(F->p_1340)).name);
(*(P731)rt_nil_check(F->y_1343)).t = g_ty_int_799;
(*(P731)rt_nil_check(F->y_1343)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_158(F->y_1343, (*(P721)rt_nil_check(F->d_1339)).line);
F->p_1340 = (*(P721)rt_nil_check(F->p_1340)).next;
}
(*(P727)rt_nil_check(F->t_368)).target = f_resolve_subtype_253((*(P721)rt_nil_check(F->d_1339)).a, &F->c_1341);
f_close_scope_168();
(*rt_str_at(&F->dummy_1342, ((rt_int)1LL))) = rt_str_get(f_ctype_222(F->t_368), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1342, ((rt_int)1LL))) = rt_str_get(f_ctype_222((*(P727)rt_nil_check(F->t_368)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_371(P721 d_370) {
  struct f_declare_subprogram_371fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_370 = d_370;
f_define_158(f_build_subprogram_373(F->d_370), (*(P721)rt_nil_check(F->d_370)).line);
ret_:
  RT_FPOP();
  return;
}

static P731 f_build_subprogram_373(P721 d_372) {
  struct f_build_subprogram_373fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_372 = d_372;
F->y_1344 = NULL;
F->p_1345 = NULL;
F->p_1345 = (*(P721)rt_nil_check(F->d_372)).a;
F->tail_1346 = NULL;
if (((*(P721)rt_nil_check(F->d_372)).kind == (((rt_int)46LL)))) {
F->y_1344 = f_new_sym_171((((rt_int)3LL)), (*(P721)rt_nil_check(F->d_372)).name);
} else if (((*(P721)rt_nil_check(F->d_372)).kind == (((rt_int)50LL)))) {
F->y_1344 = f_new_sym_171((((rt_int)9LL)), (*(P721)rt_nil_check(F->d_372)).name);
} else {
F->y_1344 = f_new_sym_171((((rt_int)4LL)), (*(P721)rt_nil_check(F->d_372)).name);
}
while ((F->p_1345 != NULL)) {
F->pm_1347 = NULL;
{ R734 *cell1348 = rt_alloc(sizeof(R734));
(*cell1348).name = NULL;
(*cell1348).t = NULL;
(*cell1348).c = NULL;
(*cell1348).cfield = NULL;
(*cell1348).next = NULL;
F->pm_1347 = cell1348;
}
(*(P733)rt_nil_check(F->pm_1347)).name = (*(P721)rt_nil_check(F->p_1345)).name;
(*(P733)rt_nil_check(F->pm_1347)).mode = (*(P721)rt_nil_check(F->p_1345)).ival;
(*(P733)rt_nil_check(F->pm_1347)).t = f_resolve_subtype_253((*(P721)rt_nil_check(F->p_1345)).a, &(*(P733)rt_nil_check(F->pm_1347)).c);
(*(P733)rt_nil_check(F->pm_1347)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1345)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1346 == NULL)) {
(*(P731)rt_nil_check(F->y_1344)).params = F->pm_1347;
} else {
(*(P733)rt_nil_check(F->tail_1346)).next = F->pm_1347;
}
F->tail_1346 = F->pm_1347;
F->p_1345 = (*(P721)rt_nil_check(F->p_1345)).next;
}
(*(P731)rt_nil_check(F->y_1344)).result = g_ty_void_804;
if (((*(P721)rt_nil_check(F->d_372)).b != NULL)) {
F->rc_1349 = NULL;
F->pm_1350 = NULL;
F->pm_1350 = (*(P731)rt_nil_check(F->y_1344)).params;
F->saved_1351 = NULL;
F->saved_1351 = g_code_770;
g_code_770 = f_new_buffer_24();
f_open_scope_167();
while ((F->pm_1350 != NULL)) {
F->z_1352 = NULL;
F->z_1352 = f_new_sym_171((((rt_int)2LL)), (*(P733)rt_nil_check(F->pm_1350)).name);
(*(P731)rt_nil_check(F->z_1352)).t = (*(P733)rt_nil_check(F->pm_1350)).t;
(*(P731)rt_nil_check(F->z_1352)).c = (*(P733)rt_nil_check(F->pm_1350)).c;
(*(P731)rt_nil_check(F->z_1352)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_158(F->z_1352, (*(P721)rt_nil_check(F->d_372)).line);
F->pm_1350 = (*(P733)rt_nil_check(F->pm_1350)).next;
}
(*(P731)rt_nil_check(F->y_1344)).result = f_resolve_subtype_253((*(P721)rt_nil_check(F->d_372)).b, &F->rc_1349);
f_close_scope_168();
g_code_770 = F->saved_1351;
}
(*(P731)rt_nil_check(F->y_1344)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_541(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->d_372)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P731)rt_nil_check(F->y_1344)).decl = F->d_372;
(*(P731)rt_nil_check(F->y_1344)).level = g_cur_level_773;
if (((*(P721)rt_nil_check(F->d_372)).kind == (((rt_int)50LL)))) {
f_put_27(g_out_globals_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_1344)).cname))), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1344;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_376(P716 pr_374, rstr *p_375) {
  struct f_has_pragmat_376fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_374 = pr_374;
F->p_375 = p_375;
if ((F->pr_374 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1354 = ((rt_int)1LL), hi1355 = rt_sub(((*(P716)rt_nil_check(F->pr_374))).len, ((*F->p_375)).len);
for (rt_int it1356 = lo1354; it1356 <= hi1355; it1356++) {
F->i_1353 = it1356;
if (((rt_str_eq(rt_str_slice((*(P716)rt_nil_check(F->pr_374)), F->i_1353, rt_sub(rt_add(F->i_1353, ((*F->p_375)).len), ((rt_int)1LL))), (*F->p_375)) && (rt_str_get((*(P716)rt_nil_check(F->pr_374)), rt_add(F->i_1353, ((*F->p_375)).len)) == 59)) && ((F->i_1353 == ((rt_int)1LL)) || (rt_str_get((*(P716)rt_nil_check(F->pr_374)), rt_sub(F->i_1353, ((rt_int)1LL))) == 59)))) {
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

static P716 f_suppressing_378(P716 pr_377) {
  struct f_suppressing_378fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_377 = pr_377;
F->r_1357 = NULL;
F->r_1357 = g_suppress_790;
F->i_1358 = ((rt_int)1LL);
if ((F->pr_377 == NULL)) {
F->result_ = F->r_1357;
goto ret_;
}
if ((F->r_1357 == NULL)) {
F->r_1357 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(F->i_1358, ((rt_int)9LL)) <= ((*(P716)rt_nil_check(F->pr_377))).len)) {
if (rt_str_eq(rt_str_slice((*(P716)rt_nil_check(F->pr_377)), F->i_1358, rt_add(F->i_1358, ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1359 = rt_add(F->i_1358, ((rt_int)9LL));
F->k_1360 = F->j_1359;
while ((rt_str_get((*(P716)rt_nil_check(F->pr_377)), F->k_1360) != 41)) {
if ((rt_str_get((*(P716)rt_nil_check(F->pr_377)), F->k_1360) == 44)) {
F->r_1357 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->r_1357)), rt_str_slice((*(P716)rt_nil_check(F->pr_377)), F->j_1359, rt_sub(F->k_1360, ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1359 = rt_add(F->k_1360, ((rt_int)1LL));
}
F->k_1360 = rt_add(F->k_1360, ((rt_int)1LL));
}
F->r_1357 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->r_1357)), rt_str_slice((*(P716)rt_nil_check(F->pr_377)), F->j_1359, rt_sub(F->k_1360, ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1358 = F->k_1360;
}
F->i_1358 = rt_add(F->i_1358, ((rt_int)1LL));
}
F->result_ = F->r_1357;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_380(rstr *x_379) {
  struct f_suppressed_380fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_379 = x_379;
F->w_1361 = rt_str_new(rt_add(((*F->x_379)).len, ((rt_int)2LL)));
rt_str_assign(&F->w_1361, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_379)), rt_str(" ", 1)));
if ((g_suppress_790 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1363 = ((rt_int)1LL), hi1364 = rt_add(rt_sub(((*(P716)rt_nil_check(g_suppress_790))).len, (F->w_1361).len), ((rt_int)1LL));
for (rt_int it1365 = lo1363; it1365 <= hi1364; it1365++) {
F->i_1362 = it1365;
if (rt_str_eq(rt_str_slice((*(P716)rt_nil_check(g_suppress_790)), F->i_1362, rt_sub(rt_add(F->i_1362, (F->w_1361).len), ((rt_int)1LL))), F->w_1361)) {
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

static void f_element_382(P721 e_381) {
  struct f_element_382fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_381 = e_381;
F->saved_1366 = NULL;
F->saved_1366 = g_suppress_790;
g_suppress_790 = f_suppressing_378((*(P721)rt_nil_check(F->e_381)).prags);
f_element1_384(F->e_381);
g_suppress_790 = F->saved_1366;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_384(P721 e_383) {
  struct f_element1_384fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_383 = e_383;
F->k_1367 = (*(P721)rt_nil_check(F->e_383)).kind;
if (((F->k_1367 == (((rt_int)48LL))) && (((*(P721)rt_nil_check(F->e_383)).flag == ((rt_int)1LL)) || ((*(P721)rt_nil_check(F->e_383)).flag == ((rt_int)3LL))))) {
f_gen_expose_367(F->e_383);
} else if ((((F->k_1367 == (((rt_int)45LL))) || (F->k_1367 == (((rt_int)46LL)))) || (F->k_1367 == (((rt_int)50LL))))) {
f_subprogram_400(F->e_383);
} else if ((F->k_1367 == (((rt_int)51LL)))) {
F->g_1368 = NULL;
F->g_1368 = f_lookup_decl_155(F->e_383);
if ((F->g_1368 != NULL)) {
{ A736 *cell1369 = rt_alloc(sizeof(A736));
rt_int pv1370 = (((rt_int)4093LL));
(*cell1369).lo = ((rt_int)0LL); (*cell1369).hi = pv1370;
(*cell1369).lo2 = (*cell1369).hi2 = 1;
(*cell1369).p = rt_alloc(sizeof(P731) * (size_t)(RT_CNT((*cell1369))) + 1);
for (rt_int i1371 = 0; i1371 < (RT_CNT((*cell1369))); i1371++) {
(*cell1369).p[i1371] = NULL;
}
(*(P731)rt_nil_check(F->g_1368)).env = cell1369;
}
{ rt_int lo1373 = ((rt_int)0LL), hi1374 = (((rt_int)4093LL));
for (rt_int it1375 = lo1373; it1375 <= hi1374; it1375++) {
F->i_1372 = it1375;
(*(P735)rt_nil_check((*(P731)rt_nil_check(F->g_1368)).env)).p[(rt_index(F->i_1372, (*(P735)rt_nil_check((*(P731)rt_nil_check(F->g_1368)).env)).lo, (*(P735)rt_nil_check((*(P731)rt_nil_check(F->g_1368)).env)).hi) - (*(P735)rt_nil_check((*(P731)rt_nil_check(F->g_1368)).env)).lo)] = ({ A736 b_ = (*(P735)rt_nil_check(g_table_756)); b_.p[(rt_index(F->i_1372, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((((F->k_1367 == (((rt_int)49LL))) || (F->k_1367 == (((rt_int)42LL)))) || (F->k_1367 == (((rt_int)43LL)))) || (F->k_1367 == (((rt_int)47LL)))) || (F->k_1367 == (((rt_int)48LL))))) {
goto ret_;
} else if ((F->k_1367 == (((rt_int)44LL)))) {
f_finish_ptr_369((*(P731)rt_nil_check(f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_383)).name))))).t);
} else if ((F->k_1367 == (((rt_int)40LL)))) {
f_var_decl_392(F->e_383);
} else if (((F->k_1367 == (((rt_int)41LL))) && ((*(P721)rt_nil_check(F->e_383)).flag == ((rt_int)0LL)))) {
f_const_decl_398(F->e_383);
} else if ((F->k_1367 == (((rt_int)41LL)))) {
goto ret_;
} else if ((F->k_1367 == (((rt_int)33LL)))) {
F->t_1376 = NULL;
F->c_1377 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_383)).a, g_ty_bool_800, &F->t_1376));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1377), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_431(F->e_383);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_387(rstr *name_385, P727 t_386) {
  struct f_storage_387fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_385 = name_385;
F->t_386 = t_386;
if ((!g_in_func_772)) {
F->g_1378 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_385))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_222(F->t_386)), rt_str(" ", 1)), F->g_1378), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_780, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1378), rt_str(");", 2)); b_; }));
g_st_field_778 = f_mk_3(&F->g_1378);
F->result_ = F->g_1378;
goto ret_;
}
{
F->f_1379 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_385)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_771, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_222(F->t_386)), rt_str(" ", 1)), F->f_1379), rt_str(";", 1)); b_; }));
g_st_field_778 = f_mk_3(&F->f_1379);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1379);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_390(P731 y_388, rstr *access_389) {
  struct f_bind_390fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_388 = y_388;
F->access_389 = access_389;
if (g_in_func_772) {
(*(P731)rt_nil_check(F->y_388)).level = g_cur_level_773;
(*(P731)rt_nil_check(F->y_388)).access = g_st_field_778;
} else {
(*(P731)rt_nil_check(F->y_388)).level = ((rt_int)0LL);
(*(P731)rt_nil_check(F->y_388)).access = f_mk_3(&(*F->access_389));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_392(P721 d_391) {
  struct f_var_decl_392fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_391 = d_391;
F->c_1380 = NULL;
F->t_1381 = NULL;
F->t_1381 = f_resolve_subtype_253((*(P721)rt_nil_check(F->d_391)).a, &F->c_1380);
F->y_1382 = NULL;
F->y_1382 = f_new_sym_171((((rt_int)1LL)), (*(P721)rt_nil_check(F->d_391)).name);
F->access_1383 = rt_str_copy(f_storage_387(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->d_391)).name)), F->t_1381));
F->c_1380 = f_freeze_199(F->c_1380, F->t_1381);
f_init_storage_275(&F->access_1383, F->t_1381, F->c_1380);
if (((*(P721)rt_nil_check(F->d_391)).ival == ((rt_int)1LL))) {
F->it_1384 = NULL;
F->n_1385 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->d_391)).c, g_ty_int_799, &F->it_1384));
if (((*(P727)rt_nil_check(F->t_1381)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P721)rt_nil_check(F->d_391)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_209((*(P727)rt_nil_check(F->t_1381)).elem, g_ty_ascii_802)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1383), rt_str(", ", 2)), F->n_1385), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1383), rt_str(", ", 2)), F->n_1385), rt_str(", 0);", 5)); b_; }));
}
} else if (((*(P721)rt_nil_check(F->d_391)).ival == ((rt_int)2LL))) {
f_fail_23((*(P721)rt_nil_check(F->d_391)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P721)rt_nil_check(F->d_391)).b != NULL)) {
F->vt_1386 = NULL;
F->v_1387 = rt_str_copy(f_gexpr_in_591((*(P721)rt_nil_check(F->d_391)).b, F->t_1381, F->c_1380, &F->vt_1386));
f_check_type_220(F->vt_1386, F->t_1381, (*(P721)rt_nil_check(F->d_391)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_321(&F->access_1383, F->t_1381, &F->v_1387, F->c_1380); b_; }));
}
(*(P731)rt_nil_check(F->y_1382)).t = F->t_1381;
(*(P731)rt_nil_check(F->y_1382)).c = F->c_1380;
f_bind_390(F->y_1382, &F->access_1383);
f_define_158(F->y_1382, (*(P721)rt_nil_check(F->d_391)).line);
if (f_needs_fin_280(F->t_1381)) {
f_open_fin_394(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_283(&F->access_1383, F->t_1381); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_394(rstr *fc_393) {
  struct f_open_fin_394fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_393 = fc_393;
F->f_1388 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1389 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1388), rt_str("; if (RT_TRY(", 13)), F->f_1388), rt_str(")) {", 4)); b_; }));
f_push_cleanup_428(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1388), rt_str("); ", 3)), (*F->fc_393)); b_; }));
{ R726 *cell1390 = rt_alloc(sizeof(R726));
(*cell1390).s = NULL;
(*cell1390).next = NULL;
F->l_1389 = cell1390;
}
(*(P725)rt_nil_check(F->l_1389)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1388), rt_str("); ", 3)), (*F->fc_393)), rt_str(" } else { RT_POP(", 17)), F->f_1388), rt_str("); ", 3)), (*F->fc_393)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P725)rt_nil_check(F->l_1389)).next = g_fins_782;
g_fins_782 = F->l_1389;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_396(P725 saved_395) {
  struct f_close_fins_396fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_395 = saved_395;
while (((g_fins_782 != F->saved_395) && (g_fins_782 != NULL))) {
f_emit_29(&(*(P716)rt_nil_check((*(P725)rt_nil_check(g_fins_782)).s)));
f_pop_cleanup_429();
g_fins_782 = (*(P725)rt_nil_check(g_fins_782)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_398(P721 d_397) {
  struct f_const_decl_398fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_397 = d_397;
F->c_1391 = NULL;
F->c_1391 = f_new_cons_174();
F->t_1392 = NULL;
F->vt_1393 = NULL;
F->y_1394 = NULL;
F->y_1394 = f_new_sym_171((((rt_int)2LL)), (*(P721)rt_nil_check(F->d_397)).name);
if (((*(P721)rt_nil_check(F->d_397)).a != NULL)) {
F->t_1392 = f_resolve_subtype_253((*(P721)rt_nil_check(F->d_397)).a, &F->c_1391);
}
{
F->v_1396 = rt_str_copy(f_gexpr_in_591((*(P721)rt_nil_check(F->d_397)).b, F->t_1392, F->c_1391, &F->vt_1393));
if ((F->t_1392 != NULL)) {
f_check_type_220(F->vt_1393, F->t_1392, (*(P721)rt_nil_check(F->d_397)).line);
} else {
F->t_1392 = F->vt_1393;
}
if (((*(P727)rt_nil_check(F->t_1392)).kind == (((rt_int)1LL)))) {
(*(P731)rt_nil_check(F->y_1394)).mvalue = f_manifest_293((*(P721)rt_nil_check(F->d_397)).b, &F->ok_1395);
(*(P731)rt_nil_check(F->y_1394)).hasmv = F->ok_1395;
}
{
F->access_1397 = rt_str_copy(f_storage_387(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->d_397)).name)), F->t_1392));
if (((*(P727)rt_nil_check(F->t_1392)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_278((*(P727)rt_nil_check(F->t_1392)).initp, &F->access_1397); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1397, rt_str(" = ", 3)), f_checked_203(F->t_1392, F->c_1391, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_324(F->t_1392, &F->v_1396); b_; }))), rt_str(";", 1)); b_; }));
f_bind_390(F->y_1394, &F->access_1397);
if (f_needs_fin_280(F->t_1392)) {
f_open_fin_394(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_283(&F->access_1397, F->t_1392); b_; }));
}
}
}
(*(P731)rt_nil_check(F->y_1394)).t = F->t_1392;
(*(P731)rt_nil_check(F->y_1394)).c = F->c_1391;
(*(P731)rt_nil_check(F->y_1394)).ro_flag = 1;
f_define_158(F->y_1394, (*(P721)rt_nil_check(F->d_397)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_400(P721 d_399) {
  struct f_subprogram_400fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_399 = d_399;
f_gen_subprogram_403(F->d_399, f_lookup_decl_155(F->d_399));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_403(P721 d_401, P731 y_402) {
  struct f_gen_subprogram_403fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_401 = d_401;
F->y_402 = y_402;
F->saved_code_1398 = NULL;
F->saved_code_1398 = g_code_770;
F->saved_fields_1399 = NULL;
F->saved_fields_1399 = g_fields_buf_771;
F->saved_in_1400 = g_in_func_772;
F->saved_sym_1401 = NULL;
F->saved_sym_1401 = g_func_sym_784;
F->saved_exits_1402 = NULL;
F->saved_exits_1402 = g_exits_792;
F->saved_gotos_1403 = NULL;
F->saved_gotos_1403 = g_gotos_793;
F->saved_frames_1404 = g_frames_794;
F->args_1405 = NULL;
F->args_1405 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1406 = NULL;
F->pm_1406 = (*(P731)rt_nil_check(F->y_402)).params;
F->saved_handlers_1407 = NULL;
F->saved_handlers_1407 = g_handlers_795;
F->saved_cleanups_1408 = NULL;
F->saved_cleanups_1408 = g_cleanups_796;
F->ctx_1409 = NULL;
F->head_1410 = NULL;
F->frame_1411 = NULL;
F->frame_1411 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_402)).cname)), rt_str("fr", 2)); b_; }));
F->parent_1412 = NULL;
F->copy_back_1413 = NULL;
F->copy_back_1413 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1414 = NULL;
F->pfin_1414 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1415 = NULL;
F->saved_fins_1415 = g_fins_782;
F->saved_rc_1416 = NULL;
F->saved_rc_1416 = g_func_rc_785;
F->saved_ret_1417 = NULL;
F->saved_ret_1417 = g_cap_ret_786;
F->saved_rflag_1418 = NULL;
F->saved_rflag_1418 = g_cap_rflag_787;
F->pn_1419 = NULL;
F->pn_1419 = (*(P721)rt_nil_check(F->d_401)).a;
F->nonrec_end_1420 = NULL;
if (g_in_func_772) {
F->parent_1412 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P731)rt_nil_check(g_func_sym_784)).cname)), rt_str("fr", 2)); b_; }));
}
g_fins_782 = NULL;
g_func_rc_785 = NULL;
g_cap_ret_786 = NULL;
g_cap_rflag_787 = NULL;
g_code_770 = f_new_buffer_24();
g_fields_buf_771 = f_new_buffer_24();
g_in_func_772 = 1;
g_func_sym_784 = F->y_402;
g_exits_792 = NULL;
g_gotos_793 = NULL;
g_frames_794 = ((rt_int)0LL);
g_handlers_795 = NULL;
g_cleanups_796 = NULL;
g_cur_level_773 = rt_add(g_cur_level_773, ((rt_int)1LL));
f_open_scope_167();
{ R738 *cell1422 = rt_alloc(sizeof(R738));
(*cell1422).imps = NULL;
(*cell1422).next = NULL;
F->ctx_1409 = cell1422;
}
(*(P737)rt_nil_check(F->ctx_1409)).depth = g_depth_759;
(*(P737)rt_nil_check(F->ctx_1409)).imps = (*(P721)rt_nil_check(F->d_401)).d;
(*(P737)rt_nil_check(F->ctx_1409)).all_imp = ((*(P721)rt_nil_check(F->d_401)).flag >= ((rt_int)2LL));
(*(P737)rt_nil_check(F->ctx_1409)).next = g_fctx_774;
g_fctx_774 = F->ctx_1409;
if ((F->parent_1412 != NULL)) {
f_put_27(g_fields_buf_771, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P716)rt_nil_check(F->parent_1412))), rt_str(" *up;", 5)); b_; }));
if (((*(P731)rt_nil_check(F->y_402)).kind != (((rt_int)9LL)))) {
F->args_1405 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P716)rt_nil_check(F->parent_1412))), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1406 != NULL)) {
F->ct_1423 = rt_str_copy(f_ctype_222((*(P733)rt_nil_check(F->pm_1406)).t));
F->f_1424 = rt_str_copy((*(P716)rt_nil_check((*(P733)rt_nil_check(F->pm_1406)).cfield)));
F->p_1425 = NULL;
F->pc_1426 = NULL;
F->pc_1426 = (*(P733)rt_nil_check(F->pm_1406)).c;
F->ac_1427 = NULL;
if ((((*(P716)rt_nil_check(F->args_1405))).len > ((rt_int)0LL))) {
F->args_1405 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->args_1405)), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_176((*(P733)rt_nil_check(F->pm_1406)).t)) {
F->fc_1428 = NULL;
F->ft_1429 = NULL;
F->ft_1429 = f_resolve_subtype_253((*(P721)rt_nil_check(F->pn_1419)).a, &F->fc_1428);
F->pc_1426 = f_freeze_199(F->fc_1428, (*(P733)rt_nil_check(F->pm_1406)).t);
}
if (((*(P733)rt_nil_check(F->pm_1406)).mode == (((rt_int)1LL)))) {
F->p_1425 = f_new_sym_171((((rt_int)2LL)), (*(P733)rt_nil_check(F->pm_1406)).name);
f_put_27(g_fields_buf_771, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1423), rt_str(" ", 1)), F->f_1424), rt_str(";", 1)); b_; }));
F->args_1405 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->args_1405)), F->ct_1423), rt_str(" ", 1)), F->f_1424); b_; }));
(*(P731)rt_nil_check(F->p_1425)).access = f_mk_3(&F->f_1424);
if (((*(P731)rt_nil_check(F->y_402)).kind != (((rt_int)9LL)))) {
if (((*(P727)rt_nil_check((*(P733)rt_nil_check(F->pm_1406)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_278((*(P727)rt_nil_check((*(P733)rt_nil_check(F->pm_1406)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1424); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1424), rt_str(" = ", 3)), f_checked_203((*(P733)rt_nil_check(F->pm_1406)).t, F->pc_1426, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_324((*(P733)rt_nil_check(F->pm_1406)).t, &F->f_1424); b_; }))), rt_str(";", 1)); b_; }));
if (f_needs_fin_280((*(P733)rt_nil_check(F->pm_1406)).t)) {
F->pfin_1414 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->pfin_1414)), f_fin_code_283(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1424); b_; }), (*(P733)rt_nil_check(F->pm_1406)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1425 = f_new_sym_171((((rt_int)1LL)), (*(P733)rt_nil_check(F->pm_1406)).name);
f_put_27(g_fields_buf_771, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1423), rt_str(" *", 2)), F->f_1424), rt_str(";", 1)); b_; }));
F->args_1405 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->args_1405)), F->ct_1423), rt_str(" *", 2)), F->f_1424); b_; }));
(*(P731)rt_nil_check(F->p_1425)).access = f_mk_3(&F->f_1424);
(*(P731)rt_nil_check(F->p_1425)).byref = 1;
if (((*(P731)rt_nil_check(F->y_402)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1424), rt_str(" = ", 3)), F->f_1424), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_176((*(P733)rt_nil_check(F->pm_1406)).t)) {
F->bt_1430 = rt_str_copy(f_bound_ctype_178((*(P733)rt_nil_check(F->pm_1406)).t));
f_put_27(g_fields_buf_771, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_1430), rt_str(" ", 1)), F->f_1424), rt_str("lo, ", 4)), F->f_1424), rt_str("hi;", 3)); b_; }));
F->args_1405 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->args_1405)), rt_str(", ", 2)), F->bt_1430), rt_str(" ", 1)), F->f_1424), rt_str("lo, ", 4)), F->bt_1430), rt_str(" ", 1)), F->f_1424), rt_str("hi", 2)); b_; }));
if (((*(P731)rt_nil_check(F->y_402)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1424), rt_str("lo = ", 5)), F->f_1424), rt_str("lo; F->", 7)), F->f_1424), rt_str("hi = ", 5)), F->f_1424), rt_str("hi;", 3)); b_; }));
}
F->ac_1427 = f_new_cons_174();
(*(P723)rt_nil_check(F->ac_1427)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1424, rt_str("lo", 2)); b_; }));
(*(P723)rt_nil_check(F->ac_1427)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1424, rt_str("hi", 2)); b_; }));
(*(P723)rt_nil_check(F->ac_1427)).dyn = 1;
(*(P723)rt_nil_check(F->ac_1427)).lvl = g_cur_level_773;
if (((F->pc_1426 == NULL) || ((*(P723)rt_nil_check(F->pc_1426)).lo == NULL))) {
F->pc_1426 = F->ac_1427;
} else if (((*(P733)rt_nil_check(F->pm_1406)).mode != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_1424), rt_str("lo <= F->", 9)), F->f_1424), rt_str("hi && (F->", 10)), F->f_1424), rt_str("lo != ", 6)), f_sub_lo_188((*(P733)rt_nil_check(F->pm_1406)).t, F->pc_1426)), rt_str(" || F->", 7)), F->f_1424), rt_str("hi != ", 6)), f_sub_hi_191((*(P733)rt_nil_check(F->pm_1406)).t, F->pc_1426)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if ((((*(P733)rt_nil_check(F->pm_1406)).mode == (((rt_int)3LL))) && ((*(P731)rt_nil_check(F->y_402)).kind != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_771, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1423), rt_str(" ", 1)), F->f_1424), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1424), rt_str("v = ", 4)), f_copy_code_324((*(P733)rt_nil_check(F->pm_1406)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1424); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P727)rt_nil_check((*(P733)rt_nil_check(F->pm_1406)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_278((*(P727)rt_nil_check((*(P733)rt_nil_check(F->pm_1406)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1424), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_1427 == NULL)) {
F->ac_1427 = (*(P733)rt_nil_check(F->pm_1406)).c;
}
F->copy_back_1413 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->copy_back_1413)), rt_str("  ", 2)), f_assign_code_321(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1424), rt_str(")", 1)); b_; }), (*(P733)rt_nil_check(F->pm_1406)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1424), rt_str("v", 1)); b_; }), F->ac_1427)); b_; }));
if (f_needs_fin_280((*(P733)rt_nil_check(F->pm_1406)).t)) {
F->pfin_1414 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->pfin_1414)), f_fin_code_283(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1424), rt_str("v", 1)); b_; }), (*(P733)rt_nil_check(F->pm_1406)).t)), rt_str(" ", 1)); b_; }));
}
(*(P731)rt_nil_check(F->p_1425)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1424, rt_str("v", 1)); b_; }));
(*(P731)rt_nil_check(F->p_1425)).byref = 0;
}
}
(*(P731)rt_nil_check(F->p_1425)).t = (*(P733)rt_nil_check(F->pm_1406)).t;
(*(P731)rt_nil_check(F->p_1425)).c = F->pc_1426;
(*(P731)rt_nil_check(F->p_1425)).level = g_cur_level_773;
(*(P731)rt_nil_check(F->p_1425)).ro_flag = (((*(P733)rt_nil_check(F->pm_1406)).mode == (((rt_int)1LL))) || ((*(P733)rt_nil_check(F->pm_1406)).mode == (((rt_int)4LL))));
f_define_158(F->p_1425, (*(P721)rt_nil_check(F->d_401)).line);
F->pm_1406 = (*(P733)rt_nil_check(F->pm_1406)).next;
F->pn_1419 = (*(P721)rt_nil_check(F->pn_1419)).next;
}
if (((*(P727)rt_nil_check((*(P731)rt_nil_check(F->y_402)).result)).kind != (((rt_int)9LL)))) {
if (((*(P721)rt_nil_check(F->d_401)).b != NULL)) {
F->rc_1431 = NULL;
F->rt_1432 = NULL;
F->rt_1432 = f_resolve_subtype_253((*(P721)rt_nil_check(F->d_401)).b, &F->rc_1431);
g_func_rc_785 = f_freeze_199(F->rc_1431, (*(P731)rt_nil_check(F->y_402)).result);
}
f_put_27(g_fields_buf_771, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_222((*(P731)rt_nil_check(F->y_402)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P727)rt_nil_check((*(P731)rt_nil_check(F->y_402)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_278((*(P727)rt_nil_check((*(P731)rt_nil_check(F->y_402)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_1421 = (((*(P716)rt_nil_check(F->pfin_1414))).len > ((rt_int)0LL));
if (F->has_pfin_1421) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_428(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_376((*(P721)rt_nil_check(F->d_401)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_376((*(P721)rt_nil_check(F->d_401)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_1433 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_1434 = NULL;
F->leave_1434 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_1433), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_1433), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_1433), rt_str(", ", 2)), f_bool_text_304(f_has_pragmat_376((*(P721)rt_nil_check(F->d_401)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_304(f_has_pragmat_376((*(P721)rt_nil_check(F->d_401)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->d_401)).name))), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_428(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_1413 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->copy_back_1413)), rt_str("  ", 2)), (*(P716)rt_nil_check(F->leave_1434))); b_; }));
F->nonrec_end_1420 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (*(P716)rt_nil_check(F->leave_1434))), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
f_declare_labels_413((*(P721)rt_nil_check(F->d_401)).c);
f_declare_body_340((*(P721)rt_nil_check(F->d_401)).c);
f_body_elements_422((*(P721)rt_nil_check(F->d_401)).c);
f_close_fins_396(NULL);
if ((F->nonrec_end_1420 != NULL)) {
f_emit_29(&(*(P716)rt_nil_check(F->nonrec_end_1420)));
f_pop_cleanup_429();
}
if (F->has_pfin_1421) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (*(P716)rt_nil_check(F->pfin_1414))), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_429();
F->copy_back_1413 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->copy_back_1413)), rt_str("  ", 2)), (*(P716)rt_nil_check(F->pfin_1414))); b_; }));
}
f_close_scope_168();
g_fctx_774 = (*(P737)rt_nil_check(g_fctx_774)).next;
g_cur_level_773 = rt_sub(g_cur_level_773, ((rt_int)1LL));
if (((((*(P716)rt_nil_check(F->args_1405))).len == ((rt_int)0LL)) || ((*(P731)rt_nil_check(F->y_402)).kind == (((rt_int)9LL))))) {
F->args_1405 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P731)rt_nil_check(F->y_402)).kind == (((rt_int)9LL)))) {
F->args_1405 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1410 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_222((*(P731)rt_nil_check(F->y_402)).result)), rt_str(" ", 1)), (*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_402)).cname))), rt_str("(", 1)), (*(P716)rt_nil_check(F->args_1405))), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_765, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->head_1410)), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->head_1410)), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_779, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P716)rt_nil_check(F->frame_1411))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_779, g_fields_buf_771);
f_put_27(g_out_frames_779, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P731)rt_nil_check(F->y_402)).kind == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P716)rt_nil_check(F->frame_1411))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P716)rt_nil_check(F->frame_1411))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_767, g_code_770);
if (((*(P727)rt_nil_check((*(P731)rt_nil_check(F->y_402)).result)).kind != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P716)rt_nil_check(F->copy_back_1413))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_767, &(*(P716)rt_nil_check(F->copy_back_1413)));
}
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P716)rt_nil_check(F->copy_back_1413))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_767, &(*(P716)rt_nil_check(F->copy_back_1413)));
}
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_770 = F->saved_code_1398;
g_fields_buf_771 = F->saved_fields_1399;
g_in_func_772 = F->saved_in_1400;
g_func_sym_784 = F->saved_sym_1401;
g_exits_792 = F->saved_exits_1402;
g_gotos_793 = F->saved_gotos_1403;
g_frames_794 = F->saved_frames_1404;
g_handlers_795 = F->saved_handlers_1407;
g_cleanups_796 = F->saved_cleanups_1408;
g_fins_782 = F->saved_fins_1415;
g_func_rc_785 = F->saved_rc_1416;
g_cap_ret_786 = F->saved_ret_1417;
g_cap_rflag_787 = F->saved_rflag_1418;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_405(P721 d_404) {
  struct f_waits_of_405fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_404 = d_404;
F->w_1435 = NULL;
F->w_1435 = g_cap_waits_776;
while ((F->w_1435 != NULL)) {
if (((*(P749)rt_nil_check(F->w_1435)).d == F->d_404)) {
F->result_ = (*(P716)rt_nil_check((*(P749)rt_nil_check(F->w_1435)).w));
goto ret_;
}
F->w_1435 = (*(P749)rt_nil_check(F->w_1435)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_407(P721 elems_406) {
  struct f_task_waits_407fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_406 = elems_406;
F->e_1436 = NULL;
F->e_1436 = F->elems_406;
F->r_1437 = NULL;
F->r_1437 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1436 != NULL)) {
if (((*(P721)rt_nil_check(F->e_1436)).kind == (((rt_int)50LL)))) {
F->r_1437 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->r_1437)), rt_str(" rt_await_decl(&", 16)), (*(P716)rt_nil_check((*(P731)rt_nil_check(f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_1436)).name))))).cname))), rt_str("decl);", 6)); b_; }));
} else if ((((*(P721)rt_nil_check(F->e_1436)).kind == (((rt_int)47LL))) || (((*(P721)rt_nil_check(F->e_1436)).kind == (((rt_int)48LL))) && (((*(P721)rt_nil_check(F->e_1436)).flag == ((rt_int)1LL)) || ((*(P721)rt_nil_check(F->e_1436)).flag == ((rt_int)3LL)))))) {
F->r_1437 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->r_1437)), f_waits_of_405(F->e_1436)); b_; }));
}
F->e_1436 = (*(P721)rt_nil_check(F->e_1436)).next;
}
F->result_ = (*(P716)rt_nil_check(F->r_1437));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_409(P721 elems_408) {
  struct f_await_tasks_409fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_408 = elems_408;
F->w_1438 = rt_str_copy(f_task_waits_407(F->elems_408));
if (((F->w_1438).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1438);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_411(P721 elems_410) {
  struct f_capsule_elements_411fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_410 = elems_410;
F->e_1439 = NULL;
F->e_1439 = F->elems_410;
while ((F->e_1439 != NULL)) {
if ((((*(P721)rt_nil_check(F->e_1439)).kind >= (((rt_int)20LL))) && ((*(P721)rt_nil_check(F->e_1439)).kind <= (((rt_int)36LL))))) {
f_start_labels_414();
}
f_element_382(F->e_1439);
F->e_1439 = (*(P721)rt_nil_check(F->e_1439)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_413(P721 elems_412) {
  struct f_declare_labels_413fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_412 = elems_412;
F->e_1440 = NULL;
F->e_1440 = F->elems_412;
while ((F->e_1440 != NULL)) {
F->l_1441 = NULL;
F->l_1441 = (*(P721)rt_nil_check(F->e_1440)).labels;
while ((F->l_1441 != NULL)) {
F->x_1442 = NULL;
F->x_1442 = g_gotos_793;
while (((F->x_1442 != NULL) && ((*(P745)rt_nil_check(F->x_1442)).depth == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((*(P716)rt_nil_check((*(P745)rt_nil_check(F->x_1442)).match)), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->l_1441)).name)))) {
f_fail_23((*(P721)rt_nil_check(F->l_1441)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->l_1441)).name))), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_1442 = (*(P745)rt_nil_check(F->x_1442)).next;
}
{ R746 *cell1443 = rt_alloc(sizeof(R746));
(*cell1443).match = NULL;
(*cell1443).label = NULL;
(*cell1443).next = NULL;
F->x_1442 = cell1443;
}
(*(P745)rt_nil_check(F->x_1442)).match = (*(P721)rt_nil_check(F->l_1441)).name;
(*(P745)rt_nil_check(F->x_1442)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P745)rt_nil_check(F->x_1442)).depth = rt_neg(((rt_int)1LL));
(*(P745)rt_nil_check(F->x_1442)).next = g_gotos_793;
g_gotos_793 = F->x_1442;
F->l_1441 = (*(P721)rt_nil_check(F->l_1441)).next;
}
F->e_1440 = (*(P721)rt_nil_check(F->e_1440)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_414(void) {
  struct f_start_labels_414fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1444 = NULL;
F->x_1444 = g_gotos_793;
while (((F->x_1444 != NULL) && ((*(P745)rt_nil_check(F->x_1444)).depth == rt_neg(((rt_int)1LL))))) {
(*(P745)rt_nil_check(F->x_1444)).depth = g_frames_794;
F->x_1444 = (*(P745)rt_nil_check(F->x_1444)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P745 f_goto_label_416(rstr *name_415) {
  struct f_goto_label_416fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_415 = name_415;
F->x_1445 = NULL;
F->x_1445 = g_gotos_793;
while ((F->x_1445 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P745)rt_nil_check(F->x_1445)).match)), (*F->name_415))) {
F->result_ = F->x_1445;
goto ret_;
}
F->x_1445 = (*(P745)rt_nil_check(F->x_1445)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_418(P721 e_417) {
  struct f_has_return_418fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_417 = e_417;
F->x_1446 = NULL;
F->x_1446 = F->e_417;
while ((F->x_1446 != NULL)) {
if (((*(P721)rt_nil_check(F->x_1446)).kind == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if (((((((*(P721)rt_nil_check(F->x_1446)).kind != (((rt_int)45LL))) && ((*(P721)rt_nil_check(F->x_1446)).kind != (((rt_int)46LL)))) && ((*(P721)rt_nil_check(F->x_1446)).kind != (((rt_int)50LL)))) && ((*(P721)rt_nil_check(F->x_1446)).kind != (((rt_int)47LL)))) && ((*(P721)rt_nil_check(F->x_1446)).kind != (((rt_int)51LL))))) {
if ((((((*(P721)rt_nil_check(F->x_1446)).a != NULL) && f_has_return_418((*(P721)rt_nil_check(F->x_1446)).a)) || (((*(P721)rt_nil_check(F->x_1446)).b != NULL) && f_has_return_418((*(P721)rt_nil_check(F->x_1446)).b))) || (((*(P721)rt_nil_check(F->x_1446)).c != NULL) && f_has_return_418((*(P721)rt_nil_check(F->x_1446)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_1446 = (*(P721)rt_nil_check(F->x_1446)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_420(P721 elems_419) {
  struct f_capsule_body_420fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_419 = elems_419;
F->saved_ret_1447 = NULL;
F->saved_ret_1447 = g_cap_ret_786;
F->saved_flag_1448 = NULL;
F->saved_flag_1448 = g_cap_rflag_787;
F->saved_frames_1449 = g_ret_frames_788;
F->e_1450 = NULL;
F->e_1450 = F->elems_419;
if ((!f_has_return_418(F->elems_419))) {
g_cap_ret_786 = NULL;
g_cap_rflag_787 = NULL;
f_capsule_elements_411(F->elems_419);
} else {
g_cap_rflag_787 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_194(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(g_cap_rflag_787)), rt_str(" = 0;", 5)); b_; }));
while ((F->e_1450 != NULL)) {
F->stmt_1451 = (((*(P721)rt_nil_check(F->e_1450)).kind >= (((rt_int)20LL))) && ((*(P721)rt_nil_check(F->e_1450)).kind <= (((rt_int)36LL))));
g_cap_ret_786 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_788 = g_frames_794;
if (F->stmt_1451) {
f_start_labels_414();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (*(P716)rt_nil_check(g_cap_rflag_787))), rt_str(") {", 3)); b_; }));
}
f_element_382(F->e_1450);
if (F->stmt_1451) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(g_cap_ret_786)), rt_str(": ;", 3)); b_; }));
F->e_1450 = (*(P721)rt_nil_check(F->e_1450)).next;
}
}
g_cap_ret_786 = F->saved_ret_1447;
g_cap_rflag_787 = F->saved_flag_1448;
g_ret_frames_788 = F->saved_frames_1449;
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_422(P721 elems_421) {
  struct f_body_elements_422fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_421 = elems_421;
f_capsule_elements_411(F->elems_421);
f_await_tasks_409(F->elems_421);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_424(P721 elems_423) {
  struct f_gen_body_424fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_423 = elems_423;
F->saved_1452 = NULL;
F->saved_1452 = g_fins_782;
F->saved_gotos_1453 = NULL;
F->saved_gotos_1453 = g_gotos_793;
f_open_scope_167();
f_declare_labels_413(F->elems_423);
f_declare_body_340(F->elems_423);
f_body_elements_422(F->elems_423);
f_close_fins_396(F->saved_1452);
f_close_scope_168();
g_gotos_793 = F->saved_gotos_1453;
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_426(rt_int upto_425) {
  struct f_pop_frames_426fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_425 = upto_425;
F->i_1454 = g_frames_794;
F->c_1455 = NULL;
F->c_1455 = g_cleanups_796;
while ((F->i_1454 > F->upto_425)) {
f_emit_29(&(*(P716)rt_nil_check((*(P725)rt_nil_check(F->c_1455)).s)));
F->c_1455 = (*(P725)rt_nil_check(F->c_1455)).next;
F->i_1454 = rt_sub(F->i_1454, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_428(rstr *s_427) {
  struct f_push_cleanup_428fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_427 = s_427;
F->c_1456 = NULL;
{ R726 *cell1457 = rt_alloc(sizeof(R726));
(*cell1457).s = NULL;
(*cell1457).next = NULL;
F->c_1456 = cell1457;
}
(*(P725)rt_nil_check(F->c_1456)).s = f_mk_3(&(*F->s_427));
(*(P725)rt_nil_check(F->c_1456)).next = g_cleanups_796;
g_cleanups_796 = F->c_1456;
g_frames_794 = rt_add(g_frames_794, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_429(void) {
  struct f_pop_cleanup_429fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_796 = (*(P725)rt_nil_check(g_cleanups_796)).next;
g_frames_794 = rt_sub(g_frames_794, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_431(P721 s_430) {
  struct f_gen_statement_431fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_430 = s_430;
F->label_1458 = NULL;
F->gl_1459 = NULL;
F->gl_1459 = (*(P721)rt_nil_check(F->s_430)).labels;
while ((F->gl_1459 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P745)rt_nil_check(f_goto_label_416(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->gl_1459)).name))))).label)), rt_str(": ;", 3)); b_; }));
F->gl_1459 = (*(P721)rt_nil_check(F->gl_1459)).next;
}
if (((*(P721)rt_nil_check(F->s_430)).tag != NULL)) {
F->x_1460 = NULL;
{ R746 *cell1461 = rt_alloc(sizeof(R746));
(*cell1461).match = NULL;
(*cell1461).label = NULL;
(*cell1461).next = NULL;
F->x_1460 = cell1461;
}
F->label_1458 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P745)rt_nil_check(F->x_1460)).match = (*(P721)rt_nil_check(F->s_430)).tag;
(*(P745)rt_nil_check(F->x_1460)).label = F->label_1458;
(*(P745)rt_nil_check(F->x_1460)).depth = g_frames_794;
(*(P745)rt_nil_check(F->x_1460)).next = g_exits_792;
g_exits_792 = F->x_1460;
}
{ rt_int sel1462 = (*(P721)rt_nil_check(F->s_430)).kind;
if (0 || (sel1462 == (((rt_int)20LL)))) {
f_st_assign_433(F->s_430);
} else if (0 || (sel1462 == (((rt_int)21LL)))) {
f_st_call_435(F->s_430);
} else if (0 || (sel1462 == (((rt_int)22LL)))) {
f_st_if_437(F->s_430);
} else if (0 || (sel1462 == (((rt_int)23LL)))) {
f_st_case_439(F->s_430);
} else if (0 || (sel1462 == (((rt_int)24LL)))) {
f_st_repeat_441(F->s_430);
} else if (0 || (sel1462 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_424((*(P721)rt_nil_check(F->s_430)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1462 == (((rt_int)27LL)))) {
f_st_exit_443(F->s_430);
} else if (0 || (sel1462 == (((rt_int)29LL)))) {
{
F->x_1463 = NULL;
F->x_1463 = f_goto_label_416(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->s_430)).name)));
if ((F->x_1463 == NULL)) {
f_fail_23((*(P721)rt_nil_check(F->s_430)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->s_430)).name)), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_426((*(P745)rt_nil_check(F->x_1463)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P716)rt_nil_check((*(P745)rt_nil_check(F->x_1463)).label))), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel1462 == (((rt_int)28LL)))) {
f_st_return_445(F->s_430);
} else if (0 || (sel1462 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_452(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->s_430)).name)), (*(P721)rt_nil_check(F->s_430)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1462 == (((rt_int)31LL)))) {
if ((g_handlers_795 == NULL)) {
f_fail_23((*(P721)rt_nil_check(F->s_430)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P716)rt_nil_check((*(P725)rt_nil_check(g_handlers_795)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel1462 == (((rt_int)26LL)))) {
f_st_guard_454(F->s_430);
} else if (0 || (sel1462 == (((rt_int)32LL)))) {
f_st_alloc_456(F->s_430);
} else if (0 || (sel1462 == (((rt_int)34LL)))) {
f_st_create_460(F->s_430);
} else if (0 || (sel1462 == (((rt_int)35LL)))) {
f_st_wait_489(F->s_430);
} else if (0 || (sel1462 == (((rt_int)36LL)))) {
f_st_region_497(F->s_430);
} else {
f_fail_23((*(P721)rt_nil_check(F->s_430)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P721)rt_nil_check(F->s_430)).tag != NULL)) {
g_exits_792 = (*(P745)rt_nil_check(g_exits_792)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->label_1458)), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_433(P721 s_432) {
  struct f_st_assign_433fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_432 = s_432;
F->lv_1464 = NULL;
F->t_1465 = NULL;
F->vt_1466 = NULL;
F->c_1467 = NULL;
if (((((*(P721)rt_nil_check((*(P721)rt_nil_check(F->s_432)).a)).kind == (((rt_int)10LL))) && ((*(P721)rt_nil_check((*(P721)rt_nil_check(F->s_432)).a)).b != NULL)) && ((*(P721)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->s_432)).a)).b)).kind == (((rt_int)16LL))))) {
f_lvalue_552((*(P721)rt_nil_check((*(P721)rt_nil_check(F->s_432)).a)).a, &F->lv_1464, &F->t_1465, &F->c_1467, &F->ro_1468);
while (((*(P727)rt_nil_check(F->t_1465)).kind == (((rt_int)8LL)))) {
f_finish_ptr_369(F->t_1465);
F->lv_1464 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_544(&(*(P716)rt_nil_check(F->lv_1464)), F->t_1465); b_; }));
F->t_1465 = (*(P727)rt_nil_check(F->t_1465)).target;
}
if ((((*(P727)rt_nil_check(F->t_1465)).kind == (((rt_int)15LL))) && ((*(P727)rt_nil_check(F->t_1465)).tparams == NULL))) {
F->t_1465 = (*(P727)rt_nil_check(F->t_1465)).under;
} else if (((*(P727)rt_nil_check(F->t_1465)).kind == (((rt_int)15LL)))) {
F->lv_1464 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->lv_1464)), rt_str(".all", 4)); b_; }));
F->t_1465 = (*(P727)rt_nil_check(F->t_1465)).under;
}
if ((((!F->ro_1468) && ((*(P727)rt_nil_check(F->t_1465)).kind == (((rt_int)6LL)))) && ((*(P727)rt_nil_check(F->t_1465)).ndim == ((rt_int)1LL)))) {
F->lo_1469 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->s_432)).a)).b)).a, (*(P727)rt_nil_check(F->t_1465)).idx, &F->vt_1466));
F->hi_1470 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->s_432)).a)).b)).b, (*(P727)rt_nil_check(F->t_1465)).idx, &F->vt_1466));
F->v_1471 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->s_432)).b, F->t_1465, &F->vt_1466));
f_need_slice_564(F->t_1465);
f_check_type_220(F->vt_1466, F->t_1465, (*(P721)rt_nil_check(F->s_432)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_222(F->t_1465)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_222(F->t_1465)), rt_str("(", 1)), (*(P716)rt_nil_check(F->lv_1464))), rt_str(", ", 2)), F->lo_1469), rt_str(", ", 2)), F->hi_1470), rt_str("); as_", 6)), f_ctype_222(F->t_1465)), rt_str("(&sl_, ", 7)), F->v_1471), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((F->ro_1468 || ((*(P727)rt_nil_check(F->t_1465)).kind != (((rt_int)5LL))))) {
f_fail_23((*(P721)rt_nil_check(F->s_432)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_1472 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->s_432)).a)).b)).a, g_ty_int_799, &F->vt_1466));
F->hi_1473 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->s_432)).a)).b)).b, g_ty_int_799, &F->vt_1466));
F->v_1474 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->s_432)).b, g_ty_string_803, &F->vt_1466));
f_check_type_220(F->vt_1466, g_ty_string_803, (*(P721)rt_nil_check(F->s_432)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P716)rt_nil_check(F->lv_1464))), rt_str(", ", 2)), F->lo_1472), rt_str(", ", 2)), F->hi_1473), rt_str(", ", 2)), F->v_1474), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_552((*(P721)rt_nil_check(F->s_432)).a, &F->lv_1464, &F->t_1465, &F->c_1467, &F->ro_1468);
if (F->ro_1468) {
f_fail_23((*(P721)rt_nil_check(F->s_432)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_261(F->t_1465)) && (!f_exports_op_362((*(P727)rt_nil_check(F->t_1465)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23((*(P721)rt_nil_check(F->s_432)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_1465)).name))), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1475 = rt_str_copy(f_gexpr_in_591((*(P721)rt_nil_check(F->s_432)).b, F->t_1465, F->c_1467, &F->vt_1466));
f_check_type_220(F->vt_1466, F->t_1465, (*(P721)rt_nil_check(F->s_432)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_321(&(*(P716)rt_nil_check(F->lv_1464)), F->t_1465, &F->v_1475, F->c_1467); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_435(P721 s_434) {
  struct f_st_call_435fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_434 = s_434;
F->c_1476 = NULL;
F->c_1476 = (*(P721)rt_nil_check(F->s_434)).a;
F->t_1477 = NULL;
if ((((*(P721)rt_nil_check(F->c_1476)).kind == (((rt_int)7LL))) || ((*(P721)rt_nil_check(F->c_1476)).kind == (((rt_int)12LL))))) {
F->x_1478 = NULL;
F->x_1478 = f_nn_61((((rt_int)10LL)), (*(P721)rt_nil_check(F->c_1476)).line);
(*(P721)rt_nil_check(F->x_1478)).a = F->c_1476;
F->c_1476 = F->x_1478;
}
if (((*(P721)rt_nil_check(F->c_1476)).kind != (((rt_int)10LL)))) {
f_fail_23((*(P721)rt_nil_check(F->s_434)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_687(F->c_1476, 1, &F->t_1477), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_437(P721 s_436) {
  struct f_st_if_437fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_436 = s_436;
F->a_1479 = NULL;
F->a_1479 = (*(P721)rt_nil_check(F->s_436)).a;
F->first_1480 = 1;
F->t_1481 = NULL;
F->taken_1482 = 0;
F->mv_1484 = NULL;
while (((F->a_1479 != NULL) && (!F->taken_1482))) {
F->mv_1484 = f_meval_302((*(P721)rt_nil_check(F->a_1479)).a, &F->ok_1483);
if (((F->ok_1483 && ((*(P739)rt_nil_check(F->mv_1484)).kind == (((rt_int)2LL)))) && ((*(P739)rt_nil_check(F->mv_1484)).i == ((rt_int)0LL)))) {
F->a_1479 = (*(P721)rt_nil_check(F->a_1479)).next;
} else {
if ((F->ok_1483 && ((*(P739)rt_nil_check(F->mv_1484)).kind == (((rt_int)2LL))))) {
F->taken_1482 = 1;
if (F->first_1480) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_1485 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->a_1479)).a, g_ty_bool_800, &F->t_1481));
f_check_type_220(F->t_1481, g_ty_bool_800, (*(P721)rt_nil_check(F->s_436)).line);
if (F->first_1480) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1485), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1485), rt_str(") {", 3)); b_; }));
}
}
F->first_1480 = 0;
f_gen_body_424((*(P721)rt_nil_check(F->a_1479)).b);
F->a_1479 = (*(P721)rt_nil_check(F->a_1479)).next;
}
}
if ((((*(P721)rt_nil_check(F->s_436)).flag == ((rt_int)1LL)) && (!F->taken_1482))) {
if (F->first_1480) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_1480 = 0;
f_gen_body_424((*(P721)rt_nil_check(F->s_436)).b);
}
if ((!F->first_1480)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_case_439(P721 s_438) {
  struct f_st_case_439fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_438 = s_438;
F->st_1486 = NULL;
F->vt_1487 = NULL;
F->first_1488 = 1;
F->a_1489 = NULL;
F->a_1489 = (*(P721)rt_nil_check(F->s_438)).b;
F->sel_1490 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->s_438)).a, NULL, &F->st_1486));
F->tmp_1491 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_222(F->st_1486)), rt_str(" ", 1)), F->tmp_1491), rt_str(" = ", 3)), F->sel_1490), rt_str(";", 1)); b_; }));
while ((F->a_1489 != NULL)) {
F->lab_1492 = NULL;
F->lab_1492 = (*(P721)rt_nil_check(F->a_1489)).a;
F->conds_1493 = NULL;
F->conds_1493 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1492 != NULL)) {
if (((*(P721)rt_nil_check(F->lab_1492)).b == NULL)) {
F->v_1494 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->lab_1492)).a, F->st_1486, &F->vt_1487));
f_check_type_220(F->vt_1487, F->st_1486, (*(P721)rt_nil_check(F->s_438)).line);
F->conds_1493 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->conds_1493)), rt_str(" || ", 4)), f_eq_code_328(F->st_1486, &F->tmp_1491, &F->v_1494)); b_; }));
} else {
F->lo_1495 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->lab_1492)).a, F->st_1486, &F->vt_1487));
F->hi_1496 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->lab_1492)).b, F->st_1486, &F->vt_1487));
F->conds_1493 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->conds_1493)), rt_str(" || (", 5)), F->tmp_1491), rt_str(" >= ", 4)), F->lo_1495), rt_str(" && ", 4)), F->tmp_1491), rt_str(" <= ", 4)), F->hi_1496), rt_str(")", 1)); b_; }));
}
F->lab_1492 = (*(P721)rt_nil_check(F->lab_1492)).next;
}
if (F->first_1488) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P716)rt_nil_check(F->conds_1493))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P716)rt_nil_check(F->conds_1493))), rt_str(") {", 3)); b_; }));
}
F->first_1488 = 0;
f_gen_body_424((*(P721)rt_nil_check(F->a_1489)).b);
F->a_1489 = (*(P721)rt_nil_check(F->a_1489)).next;
}
if (F->first_1488) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P721)rt_nil_check(F->s_438)).flag == ((rt_int)1LL))) {
f_gen_body_424((*(P721)rt_nil_check(F->s_438)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_441(P721 s_440) {
  struct f_st_repeat_441fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_440 = s_440;
F->t_1497 = NULL;
F->c_1498 = NULL;
if (((*(P721)rt_nil_check(F->s_440)).flag == ((rt_int)0LL))) {
F->cond_1499 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->s_440)).a, g_ty_bool_800, &F->t_1497));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1499), rt_str(") {", 3)); b_; }));
f_gen_body_424((*(P721)rt_nil_check(F->s_440)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1497 = f_resolve_subtype_253((*(P721)rt_nil_check(F->s_440)).a, &F->c_1498);
F->c_1498 = f_base_cons_214(F->t_1497, F->c_1498);
if ((((*(P727)rt_nil_check(f_base_of_211(F->t_1497))).kind == (((rt_int)4LL))) && ((*(P723)rt_nil_check(F->c_1498)).lo == NULL))) {
F->c_1498 = f_new_cons_174();
(*(P723)rt_nil_check(F->c_1498)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P723)rt_nil_check(F->c_1498)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P727)rt_nil_check(f_base_of_211(F->t_1497))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P723)rt_nil_check(F->c_1498)).lo == NULL)) {
f_fail_23((*(P721)rt_nil_check(F->s_440)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1500 = rt_str_copy(f_storage_387(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->s_440)).name)), F->t_1497));
F->lov_1501 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1502 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1503 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1504 = NULL;
F->y_1504 = f_new_sym_171((((rt_int)2LL)), (*(P721)rt_nil_check(F->s_440)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1501), rt_str(" = ", 3)), (*(P716)rt_nil_check((*(P723)rt_nil_check(F->c_1498)).lo))), rt_str(", ", 2)), F->hiv_1502), rt_str(" = ", 3)), (*(P716)rt_nil_check((*(P723)rt_nil_check(F->c_1498)).hi))), rt_str(";", 1)); b_; }));
if (((*(P721)rt_nil_check(F->s_440)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1503), rt_str(" = ", 3)), F->hiv_1502), rt_str("; ", 2)), F->it_1503), rt_str(" >= ", 4)), F->lov_1501), rt_str("; ", 2)), F->it_1503), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1503), rt_str(" = ", 3)), F->lov_1501), rt_str("; ", 2)), F->it_1503), rt_str(" <= ", 4)), F->hiv_1502), rt_str("; ", 2)), F->it_1503), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1500, rt_str(" = ", 3)), F->it_1503), rt_str(";", 1)); b_; }));
f_open_scope_167();
(*(P731)rt_nil_check(F->y_1504)).t = F->t_1497;
(*(P731)rt_nil_check(F->y_1504)).c = F->c_1498;
f_bind_390(F->y_1504, &F->access_1500);
(*(P731)rt_nil_check(F->y_1504)).ro_flag = 1;
f_define_158(F->y_1504, (*(P721)rt_nil_check(F->s_440)).line);
f_gen_body_424((*(P721)rt_nil_check(F->s_440)).b);
f_close_scope_168();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_443(P721 s_442) {
  struct f_st_exit_443fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_442 = s_442;
F->x_1505 = NULL;
F->x_1505 = g_exits_792;
while ((F->x_1505 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P745)rt_nil_check(F->x_1505)).match)), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->s_442)).name)))) {
f_pop_frames_426((*(P745)rt_nil_check(F->x_1505)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P716)rt_nil_check((*(P745)rt_nil_check(F->x_1505)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1505 = (*(P745)rt_nil_check(F->x_1505)).next;
}
f_fail_23((*(P721)rt_nil_check(F->s_442)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->s_442)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_445(P721 s_444) {
  struct f_st_return_445fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_444 = s_444;
F->vt_1506 = NULL;
if ((g_cap_ret_786 != NULL)) {
if (((*(P721)rt_nil_check(F->s_444)).a != NULL)) {
f_fail_23((*(P721)rt_nil_check(F->s_444)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_426(g_ret_frames_788);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(g_cap_rflag_787)), rt_str(" = 1; goto ", 11)), (*(P716)rt_nil_check(g_cap_ret_786))), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!g_in_func_772)) {
f_pop_frames_426(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P727)rt_nil_check((*(P731)rt_nil_check(g_func_sym_784)).result)).kind == (((rt_int)9LL)))) {
if (((*(P721)rt_nil_check(F->s_444)).a != NULL)) {
f_fail_23((*(P721)rt_nil_check(F->s_444)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_426(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P721)rt_nil_check(F->s_444)).a == NULL)) {
f_fail_23((*(P721)rt_nil_check(F->s_444)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1507 = rt_str_copy(f_gexpr_in_591((*(P721)rt_nil_check(F->s_444)).a, (*(P731)rt_nil_check(g_func_sym_784)).result, g_func_rc_785, &F->vt_1506));
f_check_type_220(F->vt_1506, (*(P731)rt_nil_check(g_func_sym_784)).result, (*(P721)rt_nil_check(F->s_444)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_449((*(P731)rt_nil_check(g_func_sym_784)).result, g_func_rc_785, &F->v_1507)), rt_str(";", 1)); b_; }));
f_pop_frames_426(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_449(P727 t_446, P723 c_447, rstr *v_448) {
  struct f_result_checked_449fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_446 = t_446;
F->c_447 = c_447;
F->v_448 = v_448;
if ((F->c_447 == NULL)) {
F->result_ = (*F->v_448);
goto ret_;
} else if ((((*(P727)rt_nil_check(F->t_446)).kind == (((rt_int)5LL))) && ((*(P723)rt_nil_check(F->c_447)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_448)), rt_str(", ", 2)), (*(P716)rt_nil_check((*(P723)rt_nil_check(F->c_447)).slen))), rt_str(")", 1));
goto ret_;
} else if ((((*(P727)rt_nil_check(F->t_446)).kind == (((rt_int)6LL))) && ((*(P723)rt_nil_check(F->c_447)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_222(F->t_446)), rt_str(" r_ = ", 6)), (*F->v_448)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (*(P716)rt_nil_check((*(P723)rt_nil_check(F->c_447)).lo))), rt_str(", ", 2)), (*(P716)rt_nil_check((*(P723)rt_nil_check(F->c_447)).hi))), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_203(F->t_446, F->c_447, &(*F->v_448));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_452(rstr *name_450, rt_int line_451) {
  struct f_exc_id_452fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_450 = name_450;
F->line_451 = line_451;
F->y_1508 = NULL;
F->y_1508 = f_lookup_153(&(*F->name_450));
if (((F->y_1508 != NULL) && ((*(P731)rt_nil_check(F->y_1508)).kind == (((rt_int)7LL))))) {
F->result_ = (*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_1508)).cname));
goto ret_;
}
if (((((*F->name_450)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_450), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_450)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_451, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_450), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_454(P721 s_453) {
  struct f_st_guard_454fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_453 = s_453;
F->h_1509 = NULL;
F->h_1509 = (*(P721)rt_nil_check(F->s_453)).b;
F->first_1510 = 1;
F->hv_1511 = NULL;
{
F->f_1512 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1513 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_428(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1512), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1512), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1512), rt_str(")) {", 4)); b_; }));
f_gen_body_424((*(P721)rt_nil_check(F->s_453)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1512), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_429();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1512), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1513), rt_str(" = rt_xcur;", 11)); b_; }));
{ R726 *cell1514 = rt_alloc(sizeof(R726));
(*cell1514).s = NULL;
(*cell1514).next = NULL;
F->hv_1511 = cell1514;
}
(*(P725)rt_nil_check(F->hv_1511)).s = f_mk_3(&F->x_1513);
(*(P725)rt_nil_check(F->hv_1511)).next = g_handlers_795;
g_handlers_795 = F->hv_1511;
while ((F->h_1509 != NULL)) {
F->n_1515 = NULL;
F->n_1515 = (*(P721)rt_nil_check(F->h_1509)).a;
F->conds_1516 = NULL;
F->conds_1516 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1515 != NULL)) {
F->conds_1516 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->conds_1516)), rt_str(" || ", 4)), F->x_1513), rt_str(" == ", 4)), f_exc_id_452(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->n_1515)).name)), (*(P721)rt_nil_check(F->s_453)).line)); b_; }));
F->n_1515 = (*(P721)rt_nil_check(F->n_1515)).next;
}
if (F->first_1510) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P716)rt_nil_check(F->conds_1516))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P716)rt_nil_check(F->conds_1516))), rt_str(") {", 3)); b_; }));
}
F->first_1510 = 0;
f_gen_body_424((*(P721)rt_nil_check(F->h_1509)).b);
F->h_1509 = (*(P721)rt_nil_check(F->h_1509)).next;
}
if (F->first_1510) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P721)rt_nil_check(F->s_453)).flag == ((rt_int)1LL))) {
f_gen_body_424((*(P721)rt_nil_check(F->s_453)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1513), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_795 = (*(P725)rt_nil_check(g_handlers_795)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_456(P721 s_455) {
  struct f_st_alloc_456fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_455 = s_455;
F->lv_1517 = NULL;
F->t_1518 = NULL;
F->target_1519 = NULL;
F->vt_1520 = NULL;
F->c_1521 = NULL;
F->tc_1522 = NULL;
F->d_1524 = NULL;
F->p_1525 = NULL;
F->a_1526 = NULL;
f_lvalue_552((*(P721)rt_nil_check(F->s_455)).a, &F->lv_1517, &F->t_1518, &F->c_1521, &F->ro_1523);
if (((*(P727)rt_nil_check(F->t_1518)).kind != (((rt_int)8LL)))) {
f_fail_23((*(P721)rt_nil_check(F->s_455)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_369(F->t_1518);
F->d_1524 = (*(P727)rt_nil_check(F->t_1518)).decl;
F->target_1519 = (*(P727)rt_nil_check(F->t_1518)).target;
if ((f_list_len_67((*(P721)rt_nil_check(F->s_455)).b) != f_list_len_67((*(P721)rt_nil_check(F->d_1524)).b))) {
f_fail_23((*(P721)rt_nil_check(F->s_455)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_67((*(P721)rt_nil_check(F->d_1524)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_1527 = rt_str_copy(f_ctype_222(F->target_1519));
F->cell_1528 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_280(F->target_1519)) {
F->fn_1529 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_781 = 1;
g_uses_findyn_783 = 1;
f_put_27(g_out_protos_765, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1529), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1529), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (g_in_func_772) {
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P716)rt_nil_check((*(P731)rt_nil_check(g_func_sym_784)).cname))), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_283(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_1527), rt_str(" *)cell_)", 9)); b_; }), F->target_1519)); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (g_in_func_772) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1527), rt_str(" *", 2)), F->cell_1528), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1527), rt_str("), ", 3)), F->fn_1529), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1527), rt_str(" *", 2)), F->cell_1528), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1527), rt_str("), ", 3)), F->fn_1529), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1527), rt_str(" *", 2)), F->cell_1528), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1527), rt_str("));", 3)); b_; }));
}
f_open_scope_167();
F->p_1525 = (*(P721)rt_nil_check(F->d_1524)).b;
F->a_1526 = (*(P721)rt_nil_check(F->s_455)).b;
while ((F->p_1525 != NULL)) {
F->v_1530 = rt_str_copy(f_gexpr_583(F->a_1526, g_ty_int_799, &F->vt_1520));
F->pv_1531 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_1532 = NULL;
F->y_1532 = f_new_sym_171((((rt_int)2LL)), (*(P721)rt_nil_check(F->p_1525)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_1531), rt_str(" = ", 3)), F->v_1530), rt_str(";", 1)); b_; }));
(*(P731)rt_nil_check(F->y_1532)).t = g_ty_int_799;
(*(P731)rt_nil_check(F->y_1532)).access = f_mk_3(&F->pv_1531);
f_define_158(F->y_1532, (*(P721)rt_nil_check(F->s_455)).line);
F->p_1525 = (*(P721)rt_nil_check(F->p_1525)).next;
F->a_1526 = (*(P721)rt_nil_check(F->a_1526)).next;
}
F->vt_1520 = f_resolve_subtype_253((*(P721)rt_nil_check(F->d_1524)).a, &F->tc_1522);
f_init_storage_275(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1528), rt_str(")", 1)); b_; }), F->target_1519, F->tc_1522);
f_close_scope_168();
if (((*(P721)rt_nil_check(F->s_455)).c != NULL)) {
F->v_1533 = rt_str_copy(f_gexpr_in_591((*(P721)rt_nil_check(F->s_455)).c, F->target_1519, F->tc_1522, &F->vt_1520));
f_check_type_220(F->vt_1520, F->target_1519, (*(P721)rt_nil_check(F->s_455)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_321(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1528), rt_str(")", 1)); b_; }), F->target_1519, &F->v_1533, F->tc_1522); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->lv_1517)), rt_str(" = ", 3)), F->cell_1528), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_458(P721 e_457) {
  struct f_act_ref_458fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_457 = e_457;
F->lv_1534 = NULL;
F->t_1535 = NULL;
F->c_1536 = NULL;
if (((((*(P721)rt_nil_check(F->e_457)).kind == (((rt_int)7LL))) && rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_457)).name)), rt_str("ME", 2))) && (f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_546(F->e_457))) {
F->v_1538 = rt_str_copy(f_gexpr_583(F->e_457, g_ty_act_809, &F->t_1535));
if (((*(P727)rt_nil_check(F->t_1535)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P721)rt_nil_check(F->e_457)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1538;
goto ret_;
}
f_lvalue_552(F->e_457, &F->lv_1534, &F->t_1535, &F->c_1536, &F->ro_1537);
if (((*(P727)rt_nil_check(F->t_1535)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P721)rt_nil_check(F->e_457)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (*(P716)rt_nil_check(F->lv_1534));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_460(P721 s_459) {
  struct f_st_create_460fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_459 = s_459;
F->y_1539 = NULL;
F->y_1539 = f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->s_459)).name)));
F->pm_1540 = NULL;
F->a_1541 = NULL;
F->a_1541 = (*(P721)rt_nil_check(F->s_459)).b;
F->lv_1542 = NULL;
F->lt_1543 = NULL;
F->vt_1544 = NULL;
F->lc_1545 = NULL;
if (((F->y_1539 != NULL) && ((*(P731)rt_nil_check(F->y_1539)).kind == (((rt_int)10LL))))) {
F->y_1539 = f_instantiate_531(F->y_1539, (*(P721)rt_nil_check(F->s_459)).e, (*(P721)rt_nil_check(F->s_459)).b, (*(P721)rt_nil_check(F->s_459)).line);
}
if (((F->y_1539 == NULL) || ((*(P731)rt_nil_check(F->y_1539)).kind != (((rt_int)9LL))))) {
f_fail_23((*(P721)rt_nil_check(F->s_459)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->s_459)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1540 = (*(P731)rt_nil_check(F->y_1539)).params;
{
F->at_1547 = NULL;
F->ac_1548 = NULL;
F->act_1550 = NULL;
F->nf_1551 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_552((*(P721)rt_nil_check(F->s_459)).a, &F->lv_1542, &F->at_1547, &F->ac_1548, &F->aro_1549);
if (((*(P727)rt_nil_check(F->at_1547)).kind == (((rt_int)14LL)))) {
F->act_1550 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_458((*(P721)rt_nil_check(F->s_459)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_1539)).cname))), rt_str("fr *", 4)), F->nf_1551), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1551), rt_str(");", 2)); b_; }));
if (((*(P731)rt_nil_check(F->y_1539)).level > ((rt_int)0LL))) {
F->link_1552 = NULL;
F->link_1552 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1554 = ((rt_int)1LL), hi1555 = rt_sub(g_cur_level_773, (*(P731)rt_nil_check(F->y_1539)).level);
for (rt_int it1556 = lo1554; it1556 <= hi1555; it1556++) {
F->i_1553 = it1556;
F->link_1552 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->link_1552)), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1551, rt_str("->up = ", 7)), (*(P716)rt_nil_check(F->link_1552))), rt_str(";", 1)); b_; }));
}
while (((F->a_1541 != NULL) && (F->pm_1540 != NULL))) {
if (((*(P733)rt_nil_check(F->pm_1540)).mode == (((rt_int)1LL)))) {
F->v_1557 = rt_str_copy(f_gexpr_in_591(F->a_1541, (*(P733)rt_nil_check(F->pm_1540)).t, (*(P733)rt_nil_check(F->pm_1540)).c, &F->vt_1544));
f_check_type_220(F->vt_1544, (*(P733)rt_nil_check(F->pm_1540)).t, (*(P721)rt_nil_check(F->s_459)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1551, rt_str("->", 2)), (*(P716)rt_nil_check((*(P733)rt_nil_check(F->pm_1540)).cfield))), rt_str(" = ", 3)), f_copy_code_324((*(P733)rt_nil_check(F->pm_1540)).t, &F->v_1557)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_552(F->a_1541, &F->lv_1542, &F->lt_1543, &F->lc_1545, &F->ro_1546);
f_check_type_220(F->lt_1543, (*(P733)rt_nil_check(F->pm_1540)).t, (*(P721)rt_nil_check(F->s_459)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1551, rt_str("->", 2)), (*(P716)rt_nil_check((*(P733)rt_nil_check(F->pm_1540)).cfield))), rt_str(" = &", 4)), (*(P716)rt_nil_check(F->lv_1542))), rt_str(";", 1)); b_; }));
if (f_scalar_kind_176((*(P733)rt_nil_check(F->pm_1540)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1551, rt_str("->", 2)), (*(P716)rt_nil_check((*(P733)rt_nil_check(F->pm_1540)).cfield))), rt_str("lo = ", 5)), f_sub_lo_188(F->lt_1543, F->lc_1545)), rt_str("; ", 2)), F->nf_1551), rt_str("->", 2)), (*(P716)rt_nil_check((*(P733)rt_nil_check(F->pm_1540)).cfield))), rt_str("hi = ", 5)), f_sub_hi_191(F->lt_1543, F->lc_1545)), rt_str(";", 1)); b_; }));
}
}
F->a_1541 = (*(P721)rt_nil_check(F->a_1541)).next;
F->pm_1540 = (*(P733)rt_nil_check(F->pm_1540)).next;
}
if (((F->a_1541 != NULL) || (F->pm_1540 != NULL))) {
f_fail_23((*(P721)rt_nil_check(F->s_459)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->s_459)).name))); b_; }));
}
if ((F->act_1550 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (*(P716)rt_nil_check(F->act_1550))), rt_str(", &", 3)), (*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_1539)).cname))), rt_str("decl, ", 6)), (*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_1539)).cname))), rt_str(", ", 2)), F->nf_1551), rt_str("); }", 4)); b_; }));
} else {
f_user_create_470(F->s_459, F->y_1539, &(*(P716)rt_nil_check(F->lv_1542)), F->at_1547, &F->nf_1551);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_464(rstr *name_461, P727 t_462, rstr *place_463) {
  struct f_hidden_var_464fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_461 = name_461;
F->t_462 = t_462;
F->place_463 = place_463;
F->y_1558 = NULL;
F->y_1558 = f_new_sym_171((((rt_int)1LL)), f_mk_3(&(*F->name_461)));
(*(P731)rt_nil_check(F->y_1558)).t = F->t_462;
(*(P731)rt_nil_check(F->y_1558)).level = ((rt_int)0LL);
(*(P731)rt_nil_check(F->y_1558)).access = f_mk_3(&(*F->place_463));
f_define_158(F->y_1558, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_470(P721 s_465, P731 y_466, rstr *uv_467, P727 ut_468, rstr *nf_469) {
  struct f_user_create_470fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_465 = s_465;
F->y_466 = y_466;
F->uv_467 = uv_467;
F->ut_468 = ut_468;
F->nf_469 = nf_469;
F->t_1559 = NULL;
F->saved_1560 = NULL;
F->saved_1560 = g_code_770;
F->hook_1561 = NULL;
F->hook_1561 = f_new_buffer_24();
F->un_1562 = NULL;
F->un_1562 = f_nn_61((((rt_int)7LL)), (*(P721)rt_nil_check(F->s_465)).line);
F->hn_1563 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1564 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1565 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1566 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_167();
f_hidden_var_464(&F->uname_1565, F->ut_468, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_222(F->ut_468)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P721)rt_nil_check(F->un_1562)).name = f_mk_3(&F->uname_1565);
g_code_770 = F->hook_1561;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_687(f_call_node_493(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1562, (*(P721)rt_nil_check(F->s_465)).line), 1, &F->t_1559)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_687(f_call_node_493(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1562, (*(P721)rt_nil_check(F->s_465)).line), 1, &F->t_1559)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_687(f_call_node_493(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1562, (*(P721)rt_nil_check(F->s_465)).line), 1, &F->t_1559)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_687(f_call_node_493(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1562, (*(P721)rt_nil_check(F->s_465)).line), 1, &F->t_1559)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_770 = F->saved_1560;
f_put_27(g_out_protos_765, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1563), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1563), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (g_in_func_772) {
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P716)rt_nil_check((*(P731)rt_nil_check(g_func_sym_784)).cname))), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_767, F->hook_1561);
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1564), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1564, rt_str("->hook = ", 9)), F->hn_1563), rt_str("; ", 2)), F->aa_1564), rt_str("->ua = &", 8)), (*F->uv_467)), rt_str("; ", 2)), F->aa_1564), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_677(F->ut_468)), f_q_18()), rt_str(";", 1)); b_; }));
if (g_in_func_772) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1564, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1564), rt_str(", &", 3)), (*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_466)).cname))), rt_str("decl, ", 6)), (*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_466)).cname))), rt_str(", ", 2)), (*F->nf_469)), rt_str(");", 2)); b_; }));
f_hidden_var_464(&F->aname_1566, g_ty_act_809, &F->aa_1564);
{
F->start_1567 = NULL;
F->start_1567 = f_call_node_493(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P721)rt_nil_check(F->s_465)).a, (*(P721)rt_nil_check(F->s_465)).line);
F->an_1568 = NULL;
F->an_1568 = f_nn_61((((rt_int)7LL)), (*(P721)rt_nil_check(F->s_465)).line);
(*(P721)rt_nil_check(F->an_1568)).name = f_mk_3(&F->aname_1566);
(*(P721)rt_nil_check((*(P721)rt_nil_check(F->start_1567)).b)).next = F->an_1568;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_687(F->start_1567, 1, &F->t_1559), rt_str(";", 1)); b_; }));
}
f_close_scope_168();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_475(P721 inv_471, rstr *arr_472, rt_int i_473, int mixed_474) {
  struct f_wait_alt_475fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_471 = inv_471;
F->arr_472 = arr_472;
F->i_473 = i_473;
F->mixed_474 = mixed_474;
F->lv_1569 = NULL;
F->t_1570 = NULL;
F->vt_1571 = NULL;
F->c_1572 = NULL;
F->fn_1574 = NULL;
F->args_1575 = NULL;
F->slot_1576 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_472), rt_str("[", 1)), f_itos_7(F->i_473)), rt_str("]", 1)));
if ((((*(P721)rt_nil_check(F->inv_471)).kind != (((rt_int)10LL))) || ((*(P721)rt_nil_check((*(P721)rt_nil_check(F->inv_471)).a)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P721)rt_nil_check(F->inv_471)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1574 = (*(P721)rt_nil_check(F->inv_471)).a;
F->args_1575 = (*(P721)rt_nil_check(F->inv_471)).b;
if ((rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1574)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1574)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_552(F->args_1575, &F->lv_1569, &F->t_1570, &F->c_1572, &F->ro_1573);
if (((*(P727)rt_nil_check(F->t_1570)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P721)rt_nil_check(F->inv_471)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1574)).name)), rt_str("RECEIVE", 7))) {
F->dv_1577 = NULL;
F->dt_1578 = NULL;
f_lvalue_552((*(P721)rt_nil_check(F->args_1575)).next, &F->dv_1577, &F->dt_1578, &F->c_1572, &F->ro_1573);
f_check_type_220(F->dt_1578, (*(P727)rt_nil_check(F->t_1570)).elem, (*(P721)rt_nil_check(F->inv_471)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1576, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (*(P716)rt_nil_check(F->lv_1569))), rt_str(", &", 3)), (*(P716)rt_nil_check(F->dv_1577))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1579 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1580 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->args_1575)).next, (*(P727)rt_nil_check(F->t_1570)).elem, &F->vt_1571));
f_check_type_220(F->vt_1571, (*(P727)rt_nil_check(F->t_1570)).elem, (*(P721)rt_nil_check(F->inv_471)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_222((*(P727)rt_nil_check(F->t_1570)).elem), rt_str(" ", 1)), F->tmp_1579), rt_str(" = ", 3)), F->v_1580), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1576, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (*(P716)rt_nil_check(F->lv_1569))), rt_str(", &", 3)), F->tmp_1579), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1574)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1574)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_1581 = rt_str_copy(f_gexpr_583(F->args_1575, g_ty_int_799, &F->vt_1571));
if ((rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1574)).name)), rt_str("DELAY", 5)) && F->mixed_474)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1576, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1581), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1574)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1576, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1581), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1576, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1581), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1574)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1576, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_458(F->args_1575)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P721)rt_nil_check(F->inv_471)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1574)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_477(P721 inv_476) {
  struct f_builtin_wait_477fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_476 = inv_476;
F->lv_1582 = NULL;
F->t_1583 = NULL;
F->c_1584 = NULL;
F->saved_1586 = NULL;
F->saved_1586 = g_code_770;
F->ok_1587 = 0;
if ((((*(P721)rt_nil_check(F->inv_476)).kind != (((rt_int)10LL))) || ((*(P721)rt_nil_check((*(P721)rt_nil_check(F->inv_476)).a)).kind != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->inv_476)).a)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->inv_476)).a)).name)), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->inv_476)).a)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->inv_476)).a)).name)), rt_str("SEND", 4))) && (!rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->inv_476)).a)).name)), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_797 = rt_add(g_trial_797, ((rt_int)1LL));
g_code_770 = f_new_buffer_24();
{ rt_frame xf1588;
if (RT_TRY(xf1588)) {
f_lvalue_552((*(P721)rt_nil_check(F->inv_476)).b, &F->lv_1582, &F->t_1583, &F->c_1584, &F->ro_1585);
F->ok_1587 = ((*(P727)rt_nil_check(F->t_1583)).kind == (((rt_int)12LL)));
RT_POP(xf1588);
} else {
RT_POP(xf1588);
int x1589 = rt_xcur;
if (0 || x1589 == ex_compile_error_1) {
F->ok_1587 = 0;
} else {
rt_raise(x1589);
}
}
}
g_trial_797 = rt_sub(g_trial_797, ((rt_int)1LL));
g_code_770 = F->saved_1586;
F->result_ = F->ok_1587;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_482(P721 inv_478, rstr *op_479, rstr *q_480, int is_stmt_481) {
  struct f_wait_op_482fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_478 = inv_478;
F->op_479 = op_479;
F->q_480 = q_480;
F->is_stmt_481 = is_stmt_481;
F->x_1590 = NULL;
F->x_1590 = f_nn_61((((rt_int)10LL)), (*(P721)rt_nil_check(F->inv_478)).line);
F->f_1591 = NULL;
F->f_1591 = f_nn_61((((rt_int)7LL)), (*(P721)rt_nil_check(F->inv_478)).line);
F->qn_1592 = NULL;
F->qn_1592 = f_nn_61((((rt_int)7LL)), (*(P721)rt_nil_check(F->inv_478)).line);
F->t_1593 = NULL;
(*(P721)rt_nil_check(F->f_1591)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->inv_478)).a)).name)), rt_str("_", 1)), (*F->op_479)); b_; }));
(*(P721)rt_nil_check(F->qn_1592)).name = f_mk_3(&(*F->q_480));
(*(P721)rt_nil_check(F->qn_1592)).next = (*(P721)rt_nil_check(F->inv_478)).b;
(*(P721)rt_nil_check(F->x_1590)).a = F->f_1591;
(*(P721)rt_nil_check(F->x_1590)).b = F->qn_1592;
{
F->r_1594 = rt_str_copy(f_gcall_687(F->x_1590, F->is_stmt_481, &F->t_1593));
if ((!F->is_stmt_481)) {
f_check_type_220(F->t_1593, g_ty_bool_800, (*(P721)rt_nil_check(F->inv_478)).line);
}
F->result_ = F->r_1594;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_487(P721 s_483, rstr *arr_484, rstr *w_485, rt_int n_486) {
  struct f_user_wait_487fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_483 = s_483;
F->arr_484 = arr_484;
F->w_485 = w_485;
F->n_486 = n_486;
F->a_1595 = NULL;
F->a_1595 = (*(P721)rt_nil_check(F->s_483)).a;
F->i_1596 = ((rt_int)0LL);
F->tests_1597 = NULL;
F->tests_1597 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1598 = NULL;
F->revokes_1598 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_167();
while ((F->a_1595 != NULL)) {
F->inv_1599 = NULL;
F->inv_1599 = (*(P721)rt_nil_check(F->a_1595)).a;
while ((F->inv_1599 != NULL)) {
if (f_builtin_wait_477(F->inv_1599)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_475(F->inv_1599, &(*F->arr_484), F->i_1596, 1); b_; }));
} else {
F->st_1600 = NULL;
F->st_1600 = f_nn_61((((rt_int)80LL)), (*(P721)rt_nil_check(F->inv_1599)).line);
F->c_1601 = NULL;
F->qt_1602 = NULL;
F->qname_1603 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1604 = NULL;
F->y_1604 = f_new_sym_171((((rt_int)1LL)), f_mk_3(&F->qname_1603));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_484), rt_str("[", 1)), f_itos_7(F->i_1596)), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P721)rt_nil_check(F->st_1600)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->inv_1599)).a)).name)), rt_str("_ST", 3)); b_; }));
F->qt_1602 = f_resolve_subtype_253(F->st_1600, &F->c_1601);
{
F->access_1605 = rt_str_copy(f_storage_387(&F->qname_1603, F->qt_1602));
f_init_storage_275(&F->access_1605, F->qt_1602, F->c_1601);
(*(P731)rt_nil_check(F->y_1604)).t = F->qt_1602;
(*(P731)rt_nil_check(F->y_1604)).c = F->c_1601;
f_bind_390(F->y_1604, &F->access_1605);
f_define_158(F->y_1604, (*(P721)rt_nil_check(F->inv_1599)).line);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_482(F->inv_1599, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1603, 1), rt_str(";", 1)); b_; }));
F->tests_1597 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->tests_1597)), rt_str("if (", 4)), f_wait_op_482(F->inv_1599, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1603, 0)), rt_str(") { ", 4)), f_wait_op_482(F->inv_1599, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1603, 1)), rt_str("; ", 2)), (*F->w_485)), rt_str(" = ", 3)), f_itos_7(F->i_1596)), rt_str("; break; } ", 11)); b_; }));
F->revokes_1598 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->revokes_1598)), f_wait_op_482(F->inv_1599, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1603, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1596 = rt_add(F->i_1596, ((rt_int)1LL));
F->inv_1599 = (*(P721)rt_nil_check(F->inv_1599)).next;
}
F->a_1595 = (*(P721)rt_nil_check(F->a_1595)).next;
}
f_close_scope_168();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_485)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (*(P716)rt_nil_check(F->tests_1597))); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_485), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_486)), rt_str(", ", 2)), (*F->arr_484)), rt_str("); if (", 7)), (*F->w_485)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_486)), rt_str(", ", 2)), (*F->arr_484)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_485)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_485)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(*(P716)rt_nil_check(F->revokes_1598)));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_489(P721 s_488) {
  struct f_st_wait_489fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_488 = s_488;
F->a_1606 = NULL;
F->a_1606 = (*(P721)rt_nil_check(F->s_488)).a;
F->n_1607 = ((rt_int)0LL);
F->first_1608 = 1;
F->inits_1609 = NULL;
F->inits_1609 = f_new_buffer_24();
F->user_1610 = 0;
F->arr_1611 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1612 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1606 != NULL)) {
F->inv_1613 = NULL;
F->inv_1613 = (*(P721)rt_nil_check(F->a_1606)).a;
F->n_1607 = rt_add(F->n_1607, f_list_len_67((*(P721)rt_nil_check(F->a_1606)).a));
while ((F->inv_1613 != NULL)) {
if ((!f_builtin_wait_477(F->inv_1613))) {
F->user_1610 = 1;
}
F->inv_1613 = (*(P721)rt_nil_check(F->inv_1613)).next;
}
F->a_1606 = (*(P721)rt_nil_check(F->a_1606)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1611), rt_str("[", 1)), f_itos_7(F->n_1607)), rt_str("];", 2)); b_; }));
if (F->user_1610) {
f_user_wait_487(F->s_488, &F->arr_1611, &F->w_1612, F->n_1607);
} else {
F->a_1606 = (*(P721)rt_nil_check(F->s_488)).a;
F->n_1607 = ((rt_int)0LL);
while ((F->a_1606 != NULL)) {
F->inv_1614 = NULL;
F->inv_1614 = (*(P721)rt_nil_check(F->a_1606)).a;
while ((F->inv_1614 != NULL)) {
f_put_27(F->inits_1609, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_475(F->inv_1614, &F->arr_1611, F->n_1607, 0); b_; }));
F->n_1607 = rt_add(F->n_1607, ((rt_int)1LL));
F->inv_1614 = (*(P721)rt_nil_check(F->inv_1614)).next;
}
F->a_1606 = (*(P721)rt_nil_check(F->a_1606)).next;
}
f_splice_34(g_code_770, F->inits_1609);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1612), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_1607)), rt_str(", ", 2)), F->arr_1611), rt_str(");", 2)); b_; }));
}
F->a_1606 = (*(P721)rt_nil_check(F->s_488)).a;
F->n_1607 = ((rt_int)0LL);
while ((F->a_1606 != NULL)) {
F->conds_1615 = NULL;
F->conds_1615 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1617 = ((rt_int)1LL), hi1618 = f_list_len_67((*(P721)rt_nil_check(F->a_1606)).a);
for (rt_int it1619 = lo1617; it1619 <= hi1618; it1619++) {
F->i_1616 = it1619;
F->conds_1615 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->conds_1615)), rt_str(" || ", 4)), F->w_1612), rt_str(" == ", 4)), f_itos_7(F->n_1607)); b_; }));
F->n_1607 = rt_add(F->n_1607, ((rt_int)1LL));
}
}
if (F->first_1608) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P716)rt_nil_check(F->conds_1615))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P716)rt_nil_check(F->conds_1615))), rt_str(") {", 3)); b_; }));
}
F->first_1608 = 0;
f_gen_body_424((*(P721)rt_nil_check(F->a_1606)).b);
F->a_1606 = (*(P721)rt_nil_check(F->a_1606)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P721 f_call_node_493(rstr *name_490, P721 arg_491, rt_int line_492) {
  struct f_call_node_493fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_490 = name_490;
F->arg_491 = arg_491;
F->line_492 = line_492;
F->x_1620 = NULL;
F->x_1620 = f_nn_61((((rt_int)10LL)), F->line_492);
F->f_1621 = NULL;
F->f_1621 = f_nn_61((((rt_int)7LL)), F->line_492);
(*(P721)rt_nil_check(F->f_1621)).name = f_mk_3(&(*F->name_490));
(*(P721)rt_nil_check(F->x_1620)).a = F->f_1621;
(*(P721)rt_nil_check(F->x_1620)).b = f_copy_node_593(F->arg_491);
(*(P721)rt_nil_check((*(P721)rt_nil_check(F->x_1620)).b)).next = NULL;
F->result_ = F->x_1620;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_495(P721 s_494) {
  struct f_user_region_495fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_494 = s_494;
F->t_1622 = NULL;
F->f_1623 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1624 = rt_str_copy(f_gcall_687(f_call_node_493(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P721)rt_nil_check(F->s_494)).a, (*(P721)rt_nil_check(F->s_494)).line), 1, &F->t_1622));
F->unlock_1625 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_687(f_call_node_493(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P721)rt_nil_check(F->s_494)).a, (*(P721)rt_nil_check(F->s_494)).line), 1, &F->t_1622)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1624), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1623), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1623), rt_str(")) {", 4)); b_; }));
f_push_cleanup_428(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1623), rt_str("); ", 3)), F->unlock_1625); b_; }));
f_gen_body_424((*(P721)rt_nil_check(F->s_494)).b);
f_pop_cleanup_429();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1623), rt_str("); ", 3)), F->unlock_1625); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1623), rt_str("); ", 3)), F->unlock_1625), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_497(P721 s_496) {
  struct f_st_region_497fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_496 = s_496;
F->lv_1626 = NULL;
F->t_1627 = NULL;
F->c_1628 = NULL;
F->lk_1630 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1631 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_552((*(P721)rt_nil_check(F->s_496)).a, &F->lv_1626, &F->t_1627, &F->c_1628, &F->ro_1629);
if (((*(P727)rt_nil_check(F->t_1627)).kind != (((rt_int)13LL)))) {
f_user_region_495(F->s_496);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1630), rt_str(" = &", 4)), (*(P716)rt_nil_check(F->lv_1626))), rt_str("; rt_region_enter(", 18)), F->lk_1630), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1631), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1631), rt_str(")) {", 4)); b_; }));
f_push_cleanup_428(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1631), rt_str("); rt_region_leave(", 19)), F->lk_1630), rt_str(");", 2)); b_; }));
f_gen_body_424((*(P721)rt_nil_check(F->s_496)).b);
f_pop_cleanup_429();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1631), rt_str("); rt_region_leave(", 19)), F->lk_1630), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1631), rt_str("); rt_region_leave(", 19)), F->lk_1630), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P721 f_gparam_500(P721 g_498, rstr *name_499) {
  struct f_gparam_500fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_498 = g_498;
F->name_499 = name_499;
F->p_1632 = NULL;
F->p_1632 = (*(P721)rt_nil_check(F->g_498)).a;
while ((F->p_1632 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1632)).name)), (*F->name_499))) {
F->result_ = F->p_1632;
goto ret_;
}
F->p_1632 = (*(P721)rt_nil_check(F->p_1632)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P731 f_bind_sym_502(P721 p_501) {
  struct f_bind_sym_502fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_501 = p_501;
F->y_1633 = NULL;
if (((*(P721)rt_nil_check(F->p_501)).ival <= ((rt_int)2LL))) {
F->y_1633 = f_new_sym_171((((rt_int)5LL)), (*(P721)rt_nil_check(F->p_501)).name);
} else {
F->y_1633 = f_new_sym_171((((rt_int)2LL)), (*(P721)rt_nil_check(F->p_501)).name);
}
F->result_ = F->y_1633;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_505(P731 a_503, P731 b_504) {
  struct f_same_binds_505fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_503 = a_503;
F->b_504 = b_504;
F->x_1634 = NULL;
F->x_1634 = F->a_503;
F->y_1635 = NULL;
F->y_1635 = F->b_504;
while (((F->x_1634 != NULL) && (F->y_1635 != NULL))) {
if (((!rt_str_eq((*(P716)rt_nil_check((*(P731)rt_nil_check(F->x_1634)).name)), (*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_1635)).name)))) || (!f_same_binding_508(F->x_1634, F->y_1635)))) {
F->result_ = 0;
goto ret_;
}
F->x_1634 = (*(P731)rt_nil_check(F->x_1634)).mnext;
F->y_1635 = (*(P731)rt_nil_check(F->y_1635)).mnext;
}
F->result_ = ((F->x_1634 == NULL) && (F->y_1635 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_508(P731 a_506, P731 b_507) {
  struct f_same_binding_508fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_506 = a_506;
F->b_507 = b_507;
if (((*(P731)rt_nil_check(F->a_506)).kind == (((rt_int)5LL)))) {
F->result_ = (((*(P731)rt_nil_check(F->b_507)).kind == (((rt_int)5LL))) && f_same_209((*(P731)rt_nil_check(F->a_506)).t, (*(P731)rt_nil_check(F->b_507)).t));
goto ret_;
}
if ((((*(P731)rt_nil_check(F->a_506)).kind == (((rt_int)2LL))) && (*(P731)rt_nil_check(F->a_506)).hasmv)) {
F->result_ = ((*(P731)rt_nil_check(F->b_507)).hasmv && ((*(P731)rt_nil_check(F->a_506)).mvalue == (*(P731)rt_nil_check(F->b_507)).mvalue));
goto ret_;
}
F->result_ = ((((*(P731)rt_nil_check(F->a_506)).cname != NULL) && ((*(P731)rt_nil_check(F->b_507)).cname != NULL)) && rt_str_eq((*(P716)rt_nil_check((*(P731)rt_nil_check(F->a_506)).cname)), (*(P716)rt_nil_check((*(P731)rt_nil_check(F->b_507)).cname))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P731 f_tt_binds_513(P721 gd_509, P721 formals_510, P721 actuals_511, rt_int line_512) {
  struct f_tt_binds_513fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_509 = gd_509;
F->formals_510 = formals_510;
F->actuals_511 = actuals_511;
F->line_512 = line_512;
F->f_1636 = NULL;
F->f_1636 = F->formals_510;
F->a_1637 = NULL;
F->a_1637 = F->actuals_511;
F->binds_1638 = NULL;
F->c_1639 = NULL;
F->at_1640 = NULL;
while (((F->f_1636 != NULL) && (F->a_1637 != NULL))) {
F->p_1641 = NULL;
F->p_1641 = f_gparam_500(F->gd_509, &(*(P716)rt_nil_check((*(P721)rt_nil_check(F->f_1636)).name)));
F->b_1642 = NULL;
if ((F->p_1641 == NULL)) {
f_fail_23(F->line_512, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->f_1636)).name)), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1642 = f_bind_sym_502(F->p_1641);
if (((*(P721)rt_nil_check(F->p_1641)).ival <= ((rt_int)2LL))) {
if (((*(P721)rt_nil_check(F->a_1637)).kind >= (((rt_int)70LL)))) {
(*(P731)rt_nil_check(F->b_1642)).t = f_resolve_subtype_253(F->a_1637, &F->c_1639);
} else {
F->st_1643 = NULL;
F->st_1643 = f_nn_61((((rt_int)80LL)), F->line_512);
(*(P721)rt_nil_check(F->st_1643)).name = (*(P721)rt_nil_check(F->a_1637)).name;
(*(P731)rt_nil_check(F->b_1642)).t = f_resolve_subtype_253(F->st_1643, &F->c_1639);
}
(*(P731)rt_nil_check(F->b_1642)).c = F->c_1639;
} else if (((*(P721)rt_nil_check(F->p_1641)).ival <= ((rt_int)5LL))) {
if ((((*(P721)rt_nil_check(F->a_1637)).kind != (((rt_int)7LL))) || (f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->a_1637)).name))) == NULL))) {
f_fail_23(F->line_512, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1641)).name))); b_; }));
}
F->b_1642 = f_copy_sym_348(f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->a_1637)).name))));
(*(P731)rt_nil_check(F->b_1642)).name = (*(P721)rt_nil_check(F->p_1641)).name;
} else {
(*(P731)rt_nil_check(F->b_1642)).t = f_resolve_subtype_253((*(P721)rt_nil_check(F->p_1641)).a, &F->c_1639);
(*(P731)rt_nil_check(F->b_1642)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_583(F->a_1637, (*(P731)rt_nil_check(F->b_1642)).t, &F->at_1640); b_; }));
(*(P731)rt_nil_check(F->b_1642)).mvalue = f_manifest_293(F->a_1637, &F->ok_1644);
(*(P731)rt_nil_check(F->b_1642)).hasmv = F->ok_1644;
}
(*(P731)rt_nil_check(F->b_1642)).mnext = F->binds_1638;
F->binds_1638 = F->b_1642;
F->f_1636 = (*(P721)rt_nil_check(F->f_1636)).next;
F->a_1637 = (*(P721)rt_nil_check(F->a_1637)).next;
}
F->result_ = F->binds_1638;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_515(P721 st_514) {
  struct f_generic_use_515fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_514 = st_514;
if (((*(P721)rt_nil_check(F->st_514)).kind == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P731)rt_nil_check(f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = (((((*(P721)rt_nil_check(F->st_514)).kind == (((rt_int)80LL))) && ((*(P721)rt_nil_check(F->st_514)).a != NULL)) && (f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->st_514)).name))) != NULL)) && ((*(P731)rt_nil_check(f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->st_514)).name))))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P731 f_infer_from_520(P721 gd_516, P721 pat_517, P727 t_518, P731 known_519) {
  struct f_infer_from_520fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_516 = gd_516;
F->pat_517 = pat_517;
F->t_518 = t_518;
F->known_519 = known_519;
F->binds_1645 = NULL;
F->binds_1645 = F->known_519;
F->e_1646 = NULL;
F->e_1646 = (*(P721)rt_nil_check(F->pat_517)).a;
F->tp_1647 = NULL;
if (((F->t_518 == NULL) || ((*(P727)rt_nil_check(F->t_518)).gen == NULL))) {
F->result_ = F->binds_1645;
goto ret_;
}
F->tp_1647 = (*(P721)rt_nil_check((*(P731)rt_nil_check((*(P727)rt_nil_check(F->t_518)).gen)).decl)).a;
if (((*(P721)rt_nil_check(F->pat_517)).kind == (((rt_int)78LL)))) {
F->e_1646 = f_copy_node_593((*(P721)rt_nil_check(F->pat_517)).a);
(*(P721)rt_nil_check(F->e_1646)).next = NULL;
}
while (((F->e_1646 != NULL) && (F->tp_1647 != NULL))) {
F->nm_1648 = NULL;
if ((((*(P721)rt_nil_check(F->e_1646)).kind == (((rt_int)7LL))) || ((*(P721)rt_nil_check(F->e_1646)).kind == (((rt_int)80LL))))) {
F->nm_1648 = (*(P721)rt_nil_check(F->e_1646)).name;
}
if ((((F->nm_1648 != NULL) && (f_gparam_500(F->gd_516, &(*(P716)rt_nil_check(F->nm_1648))) != NULL)) && ((*(P721)rt_nil_check(f_gparam_500(F->gd_516, &(*(P716)rt_nil_check(F->nm_1648))))).ival <= ((rt_int)2LL)))) {
F->q_1649 = NULL;
F->q_1649 = F->binds_1645;
F->have_1650 = 0;
while ((F->q_1649 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P731)rt_nil_check(F->q_1649)).name)), (*(P716)rt_nil_check(F->nm_1648)))) {
F->have_1650 = 1;
}
F->q_1649 = (*(P731)rt_nil_check(F->q_1649)).mnext;
}
if ((!F->have_1650)) {
F->g_1651 = NULL;
F->g_1651 = (*(P727)rt_nil_check(F->t_518)).gbinds;
while ((F->g_1651 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P731)rt_nil_check(F->g_1651)).name)), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->tp_1647)).name)))) {
F->b_1652 = NULL;
F->b_1652 = f_bind_sym_502(f_gparam_500(F->gd_516, &(*(P716)rt_nil_check(F->nm_1648))));
(*(P731)rt_nil_check(F->b_1652)).t = (*(P731)rt_nil_check(F->g_1651)).t;
(*(P731)rt_nil_check(F->b_1652)).c = (*(P731)rt_nil_check(F->g_1651)).c;
(*(P731)rt_nil_check(F->b_1652)).mnext = F->binds_1645;
F->binds_1645 = F->b_1652;
}
F->g_1651 = (*(P731)rt_nil_check(F->g_1651)).mnext;
}
}
}
F->e_1646 = (*(P721)rt_nil_check(F->e_1646)).next;
F->tp_1647 = (*(P721)rt_nil_check(F->tp_1647)).next;
}
F->result_ = F->binds_1645;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P727 f_instantiate_type_526(P731 g_521, P721 tt_522, P721 args_523, P723 *c_524, rt_int line_525) {
  struct f_instantiate_type_526fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_521 = g_521;
F->tt_522 = tt_522;
F->args_523 = args_523;
F->c_524 = c_524;
F->c_524v = *F->c_524;
F->line_525 = line_525;
F->gd_1653 = NULL;
F->gd_1653 = (*(P731)rt_nil_check(F->g_521)).decl;
F->pat_1654 = NULL;
F->pat_1654 = (*(P721)rt_nil_check(F->gd_1653)).b;
F->binds_1655 = NULL;
F->binds_1655 = f_tt_binds_513(F->gd_1653, (*(P721)rt_nil_check(F->pat_1654)).e, F->tt_522, F->line_525);
F->inst_1656 = NULL;
F->inst_1656 = g_all_insts_758;
F->t_1657 = NULL;
F->saved_caps_1658 = NULL;
F->saved_caps_1658 = g_caps_775;
F->saved_env_1659 = NULL;
F->saved_env_1659 = g_genv_757;
F->saved_gdepth_1660 = g_gdepth_789;
F->c_524v = f_new_cons_174();
(*(P723)rt_nil_check(F->c_524v)).args = F->args_523;
while ((F->inst_1656 != NULL)) {
if ((((*(P731)rt_nil_check(F->inst_1656)).decl == F->pat_1654) && f_same_binds_505((*(P731)rt_nil_check(F->inst_1656)).members, F->binds_1655))) {
F->result_ = (*(P731)rt_nil_check(F->inst_1656)).t;
goto ret_;
}
F->inst_1656 = (*(P731)rt_nil_check(F->inst_1656)).insts;
}
f_open_scope_167();
{
F->b_1661 = NULL;
F->b_1661 = F->binds_1655;
while ((F->b_1661 != NULL)) {
f_define_158(F->b_1661, F->line_525);
F->b_1661 = (*(P731)rt_nil_check(F->b_1661)).mnext;
}
}
g_caps_775 = NULL;
g_genv_757 = (*(P731)rt_nil_check(F->g_521)).env;
g_gdepth_789 = g_depth_759;
{
F->y_1662 = NULL;
F->y_1662 = f_new_sym_171((((rt_int)5LL)), (*(P721)rt_nil_check(F->pat_1654)).name);
F->yc_1663 = NULL;
(*(P731)rt_nil_check(F->y_1662)).decl = F->pat_1654;
if (((*(P721)rt_nil_check(F->pat_1654)).kind == (((rt_int)44LL)))) {
F->t_1657 = f_new_typ_173((((rt_int)8LL)));
(*(P727)rt_nil_check(F->t_1657)).name = (*(P721)rt_nil_check(F->pat_1654)).name;
(*(P727)rt_nil_check(F->t_1657)).decl = F->pat_1654;
(*(P731)rt_nil_check(F->y_1662)).t = F->t_1657;
f_define_158(F->y_1662, F->line_525);
f_finish_ptr_369(F->t_1657);
} else {
f_define_158(F->y_1662, F->line_525);
F->t_1657 = f_new_type_271(F->y_1662, f_nn_61((((rt_int)80LL)), F->line_525), &F->yc_1663);
}
}
g_caps_775 = F->saved_caps_1658;
g_genv_757 = F->saved_env_1659;
g_gdepth_789 = F->saved_gdepth_1660;
(*(P727)rt_nil_check(F->t_1657)).gen = F->g_521;
(*(P727)rt_nil_check(F->t_1657)).gbinds = F->binds_1655;
f_close_scope_168();
{ R732 *cell1664 = rt_alloc(sizeof(R732));
(*cell1664).name = NULL;
(*cell1664).t = NULL;
(*cell1664).c = NULL;
(*cell1664).access = NULL;
(*cell1664).cname = NULL;
(*cell1664).st = NULL;
(*cell1664).decl = NULL;
(*cell1664).params = NULL;
(*cell1664).result = NULL;
(*cell1664).members = NULL;
(*cell1664).mnext = NULL;
(*cell1664).binds = NULL;
(*cell1664).insts = NULL;
(*cell1664).env = NULL;
(*cell1664).chain = NULL;
(*cell1664).stack = NULL;
(*cell1664).owner = NULL;
(*cell1664).gctx = NULL;
(*cell1664).mv = NULL;
(*cell1664).reqs = NULL;
(*cell1664).home = NULL;
F->inst_1656 = cell1664;
}
(*(P731)rt_nil_check(F->inst_1656)).kind = (((rt_int)5LL));
(*(P731)rt_nil_check(F->inst_1656)).name = (*(P731)rt_nil_check(F->g_521)).name;
(*(P731)rt_nil_check(F->inst_1656)).decl = F->pat_1654;
(*(P731)rt_nil_check(F->inst_1656)).t = F->t_1657;
(*(P731)rt_nil_check(F->inst_1656)).members = F->binds_1655;
(*(P731)rt_nil_check(F->inst_1656)).insts = g_all_insts_758;
g_all_insts_758 = F->inst_1656;
F->result_ = F->t_1657;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_524) = F->c_524v;
  RT_FPOP();
  return F->result_;
}

static P731 f_instantiate_531(P731 g_527, P721 tt_528, P721 args_529, rt_int line_530) {
  struct f_instantiate_531fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_527 = g_527;
F->tt_528 = tt_528;
F->args_529 = args_529;
F->line_530 = line_530;
F->gd_1665 = NULL;
F->gd_1665 = (*(P731)rt_nil_check(F->g_527)).decl;
F->pat_1666 = NULL;
F->pat_1666 = (*(P721)rt_nil_check(F->gd_1665)).b;
F->binds_1667 = NULL;
F->f_1668 = NULL;
F->f_1668 = (*(P721)rt_nil_check(F->pat_1666)).e;
F->a_1669 = NULL;
F->a_1669 = F->tt_528;
F->fp_1670 = NULL;
F->fp_1670 = (*(P721)rt_nil_check(F->pat_1666)).a;
F->inst_1671 = NULL;
F->at_1672 = NULL;
F->c_1673 = NULL;
F->saved_fctx_1674 = NULL;
F->saved_fctx_1674 = g_fctx_774;
F->saved_in_1675 = g_in_func_772;
F->saved_level_1676 = g_cur_level_773;
F->saved_sym_1677 = NULL;
F->saved_sym_1677 = g_func_sym_784;
F->saved_code_1678 = NULL;
F->saved_code_1678 = g_code_770;
F->saved_env_1679 = NULL;
F->saved_env_1679 = g_genv_757;
F->saved_gdepth_1680 = g_gdepth_789;
F->binds_1667 = f_tt_binds_513(F->gd_1665, F->f_1668, F->a_1669, F->line_530);
F->a_1669 = F->args_529;
while (((F->fp_1670 != NULL) && (F->a_1669 != NULL))) {
if (f_generic_use_515((*(P721)rt_nil_check(F->fp_1670)).a)) {
F->v_1681 = rt_str_copy(f_gexpr_583(F->a_1669, NULL, &F->at_1672));
F->binds_1667 = f_infer_from_520(F->gd_1665, (*(P721)rt_nil_check(F->fp_1670)).a, F->at_1672, F->binds_1667);
} else if (((((*(P721)rt_nil_check((*(P721)rt_nil_check(F->fp_1670)).a)).kind == (((rt_int)80LL))) && (f_gparam_500(F->gd_1665, &(*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->fp_1670)).a)).name))) != NULL)) && ((*(P721)rt_nil_check(f_gparam_500(F->gd_1665, &(*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->fp_1670)).a)).name))))).ival <= ((rt_int)2LL)))) {
F->known_1682 = 0;
F->q_1683 = NULL;
F->q_1683 = F->binds_1667;
while ((F->q_1683 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P731)rt_nil_check(F->q_1683)).name)), (*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->fp_1670)).a)).name)))) {
F->known_1682 = 1;
}
F->q_1683 = (*(P731)rt_nil_check(F->q_1683)).mnext;
}
if ((!F->known_1682)) {
F->b_1684 = NULL;
F->b_1684 = f_bind_sym_502(f_gparam_500(F->gd_1665, &(*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->fp_1670)).a)).name))));
F->v_1685 = rt_str_copy(f_gexpr_583(F->a_1669, NULL, &F->at_1672));
(*(P731)rt_nil_check(F->b_1684)).t = F->at_1672;
(*(P731)rt_nil_check(F->b_1684)).c = g_no_cons_810;
(*(P731)rt_nil_check(F->b_1684)).mnext = F->binds_1667;
F->binds_1667 = F->b_1684;
}
}
F->fp_1670 = (*(P721)rt_nil_check(F->fp_1670)).next;
F->a_1669 = (*(P721)rt_nil_check(F->a_1669)).next;
}
F->inst_1671 = g_all_insts_758;
while ((F->inst_1671 != NULL)) {
if ((((*(P731)rt_nil_check(F->inst_1671)).decl == F->pat_1666) && f_same_binds_505((*(P731)rt_nil_check(F->inst_1671)).members, F->binds_1667))) {
F->result_ = F->inst_1671;
goto ret_;
}
F->inst_1671 = (*(P731)rt_nil_check(F->inst_1671)).insts;
}
g_fctx_774 = (*(P731)rt_nil_check(F->g_527)).gctx;
g_in_func_772 = ((*(P731)rt_nil_check(F->g_527)).level > ((rt_int)0LL));
g_cur_level_773 = (*(P731)rt_nil_check(F->g_527)).level;
g_func_sym_784 = (*(P731)rt_nil_check(F->g_527)).owner;
g_code_770 = f_new_buffer_24();
f_open_scope_167();
g_gdepth_789 = g_depth_759;
{
F->b_1686 = NULL;
F->b_1686 = F->binds_1667;
while ((F->b_1686 != NULL)) {
f_define_158(F->b_1686, F->line_530);
F->b_1686 = (*(P731)rt_nil_check(F->b_1686)).mnext;
}
}
g_genv_757 = (*(P731)rt_nil_check(F->g_527)).env;
F->inst_1671 = f_build_subprogram_373(F->pat_1666);
(*(P731)rt_nil_check(F->inst_1671)).members = F->binds_1667;
(*(P731)rt_nil_check(F->inst_1671)).insts = g_all_insts_758;
g_all_insts_758 = F->inst_1671;
f_define_158(F->inst_1671, F->line_530);
f_gen_subprogram_403(F->pat_1666, F->inst_1671);
f_close_scope_168();
g_fctx_774 = F->saved_fctx_1674;
g_in_func_772 = F->saved_in_1675;
g_cur_level_773 = F->saved_level_1676;
g_func_sym_784 = F->saved_sym_1677;
g_code_770 = F->saved_code_1678;
g_genv_757 = F->saved_env_1679;
g_gdepth_789 = F->saved_gdepth_1680;
F->result_ = F->inst_1671;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_533(P731 y_532) {
  struct f_access_of_533fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_532 = y_532;
F->p_1687 = NULL;
F->p_1687 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P731)rt_nil_check(F->y_532)).level <= ((rt_int)0LL))) {
F->result_ = (*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_532)).access));
goto ret_;
}
{ rt_int lo1689 = ((rt_int)1LL), hi1690 = rt_sub(g_cur_level_773, (*(P731)rt_nil_check(F->y_532)).level);
for (rt_int it1691 = lo1689; it1691 <= hi1690; it1691++) {
F->i_1688 = it1691;
F->p_1687 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->p_1687)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P731)rt_nil_check(F->y_532)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P716)rt_nil_check(F->p_1687))), rt_str("->", 2)), (*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_532)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->p_1687)), rt_str("->", 2)), (*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_532)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_import_of_536(P721 l_534, rstr *name_535) {
  struct f_import_of_536fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_534 = l_534;
F->name_535 = name_535;
F->p_1692 = NULL;
F->p_1692 = F->l_534;
while ((F->p_1692 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1692)).name)), (*F->name_535))) {
F->result_ = F->p_1692;
goto ret_;
}
F->p_1692 = (*(P721)rt_nil_check(F->p_1692)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_539(P731 y_537, rt_int line_538) {
  struct f_check_import_539fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_537 = y_537;
F->line_538 = line_538;
F->c_1693 = NULL;
F->c_1693 = g_fctx_774;
F->ro_1694 = 0;
while (((F->c_1693 != NULL) && ((*(P731)rt_nil_check(F->y_537)).depth < (*(P737)rt_nil_check(F->c_1693)).depth))) {
if ((!(*(P737)rt_nil_check(F->c_1693)).all_imp)) {
F->imp_1695 = NULL;
F->imp_1695 = f_import_of_536((*(P737)rt_nil_check(F->c_1693)).imps, &(*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_537)).name)));
if ((F->imp_1695 == NULL)) {
f_fail_23(F->line_538, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_537)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P721)rt_nil_check(F->imp_1695)).ival == ((rt_int)1LL))) {
F->ro_1694 = 1;
}
}
F->c_1693 = (*(P737)rt_nil_check(F->c_1693)).next;
}
F->result_ = F->ro_1694;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_541(rstr *s_540) {
  struct f_c_ident_541fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_540 = s_540;
if (rt_str_eq((*F->s_540), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_540), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_540), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_540), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_540), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_540), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_540), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_540), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_540), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_540), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_540), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_540), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_540), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_540), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_540));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_544(rstr *base_542, P727 t_543) {
  struct f_deref_544fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_542 = base_542;
F->t_543 = t_543;
if (f_suppressed_380(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_222(F->t_543)), rt_str(")(", 2)), (*F->base_542)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_222(F->t_543)), rt_str(")rt_nil_check(", 14)), (*F->base_542)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_546(P721 e_545) {
  struct f_is_lvalue_546fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_545 = e_545;
if (((*(P721)rt_nil_check(F->e_545)).kind == (((rt_int)7LL)))) {
F->y_1696 = NULL;
F->y_1696 = f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_545)).name)));
F->result_ = ((F->y_1696 != NULL) && (((*(P731)rt_nil_check(F->y_1696)).kind == (((rt_int)1LL))) || ((((*(P731)rt_nil_check(F->y_1696)).kind == (((rt_int)2LL))) && ((*(P731)rt_nil_check(F->y_1696)).mv == NULL)) && (!(*(P731)rt_nil_check(F->y_1696)).hasmv))));
goto ret_;
} else if (((*(P721)rt_nil_check(F->e_545)).kind == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_546((*(P721)rt_nil_check(F->e_545)).a);
goto ret_;
} else if (((*(P721)rt_nil_check(F->e_545)).kind == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_545)).name)), rt_str("LEN", 3))) && f_is_lvalue_546((*(P721)rt_nil_check(F->e_545)).a));
goto ret_;
} else if (((*(P721)rt_nil_check(F->e_545)).kind == (((rt_int)10LL)))) {
if ((((*(P721)rt_nil_check(F->e_545)).b != NULL) && ((*(P721)rt_nil_check((*(P721)rt_nil_check(F->e_545)).b)).kind == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_546((*(P721)rt_nil_check(F->e_545)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_552(P721 e_547, P716 *code_548, P727 *t_549, P723 *c_550, int *ro_551) {
  struct f_lvalue_552fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_547 = e_547;
F->code_548 = code_548;
F->code_548v = *F->code_548;
F->t_549 = t_549;
F->t_549v = *F->t_549;
F->c_550 = c_550;
F->c_550v = *F->c_550;
F->ro_551 = ro_551;
F->ro_551v = *F->ro_551;
F->base_1697 = NULL;
F->bt_1698 = NULL;
F->bc_1699 = NULL;
if (((*(P721)rt_nil_check(F->e_547)).kind == (((rt_int)7LL)))) {
F->y_1700 = NULL;
F->y_1700 = f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_547)).name)));
if ((F->y_1700 == NULL)) {
f_fail_23((*(P721)rt_nil_check(F->e_547)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_547)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P731)rt_nil_check(F->y_1700)).kind != (((rt_int)1LL))) && ((*(P731)rt_nil_check(F->y_1700)).kind != (((rt_int)2LL))))) {
f_fail_23((*(P721)rt_nil_check(F->e_547)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_547)).name)), rt_str(" is not a variable", 18)); b_; }));
}
F->code_548v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_533(F->y_1700); b_; }));
F->t_549v = (*(P731)rt_nil_check(F->y_1700)).t;
F->c_550v = (*(P731)rt_nil_check(F->y_1700)).c;
F->ro_551v = (*(P731)rt_nil_check(F->y_1700)).ro_flag;
if ((((*(P731)rt_nil_check(F->y_1700)).kind == (((rt_int)1LL))) && f_check_import_539(F->y_1700, (*(P721)rt_nil_check(F->e_547)).line))) {
F->ro_551v = 1;
}
} else if (((*(P721)rt_nil_check(F->e_547)).kind == (((rt_int)17LL)))) {
f_lvalue_552((*(P721)rt_nil_check(F->e_547)).a, &F->code_548v, &F->t_549v, &F->c_550v, &F->ro_551v);
} else if ((((((*(P721)rt_nil_check(F->e_547)).kind == (((rt_int)12LL))) && ((*(P721)rt_nil_check((*(P721)rt_nil_check(F->e_547)).a)).kind == (((rt_int)7LL)))) && rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->e_547)).a)).name)), rt_str("ME", 2))) && (f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_548v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_675((*(P721)rt_nil_check(F->e_547)).b, (*(P721)rt_nil_check(F->e_547)).line, &F->t_549v); b_; }));
F->c_550v = g_no_cons_810;
F->ro_551v = 0;
} else if (((*(P721)rt_nil_check(F->e_547)).kind == (((rt_int)11LL)))) {
f_lvalue_552((*(P721)rt_nil_check(F->e_547)).a, &F->base_1697, &F->bt_1698, &F->bc_1699, &F->ro_551v);
f_select_on_560(&(*(P716)rt_nil_check(F->base_1697)), F->bt_1698, F->e_547, &F->ro_551v, &F->code_548v, &F->t_549v, &F->c_550v);
} else if (((*(P721)rt_nil_check(F->e_547)).kind == (((rt_int)10LL)))) {
f_lvalue_552((*(P721)rt_nil_check(F->e_547)).a, &F->base_1697, &F->bt_1698, &F->bc_1699, &F->ro_551v);
f_index_on_577(&(*(P716)rt_nil_check(F->base_1697)), F->bt_1698, F->e_547, &F->ro_551v, 1, &F->code_548v, &F->t_549v, &F->c_550v);
} else {
f_fail_23((*(P721)rt_nil_check(F->e_547)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_548) = F->code_548v;  (*F->t_549) = F->t_549v;  (*F->c_550) = F->c_550v;  (*F->ro_551) = F->ro_551v;
  RT_FPOP();
  return;
}

static void f_select_on_560(rstr *base_553, P727 bt_554, P721 e_555, int *ro_556, P716 *code_557, P727 *t_558, P723 *c_559) {
  struct f_select_on_560fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_553 = base_553;
F->bt_554 = bt_554;
F->e_555 = e_555;
F->ro_556 = ro_556;
F->code_557 = code_557;
F->code_557v = *F->code_557;
F->t_558 = t_558;
F->t_558v = *F->t_558;
F->c_559 = c_559;
F->c_559v = *F->c_559;
F->c_559v = g_no_cons_810;
if (((*(P727)rt_nil_check(F->bt_554)).kind == (((rt_int)8LL)))) {
f_finish_ptr_369(F->bt_554);
(*F->ro_556) = 0;
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_555)).name)), rt_str("ALL", 3))) {
F->code_557v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_544(&(*F->base_553), F->bt_554); b_; }));
F->t_558v = (*(P727)rt_nil_check(F->bt_554)).target;
goto ret_;
}
f_select_on_560(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_544(&(*F->base_553), F->bt_554); b_; }), (*(P727)rt_nil_check(F->bt_554)).target, F->e_555, &(*F->ro_556), &F->code_557v, &F->t_558v, &F->c_559v);
goto ret_;
}
if (((*(P727)rt_nil_check(F->bt_554)).kind == (((rt_int)15LL)))) {
F->p_1701 = NULL;
F->p_1701 = (*(P727)rt_nil_check(F->bt_554)).tparams;
if ((!f_opened_261(F->bt_554))) {
f_fail_23((*(P721)rt_nil_check(F->e_555)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->bt_554)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P727)rt_nil_check(F->bt_554)).tparams == NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_555)).name)), rt_str("ALL", 3))) {
F->code_557v = f_mk_3(&(*F->base_553));
F->t_558v = (*(P727)rt_nil_check(F->bt_554)).under;
goto ret_;
}
f_select_on_560(&(*F->base_553), (*(P727)rt_nil_check(F->bt_554)).under, F->e_555, &(*F->ro_556), &F->code_557v, &F->t_558v, &F->c_559v);
goto ret_;
}
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_555)).name)), rt_str("ALL", 3))) {
F->code_557v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_553), rt_str(".all", 4)); b_; }));
F->t_558v = (*(P727)rt_nil_check(F->bt_554)).under;
goto ret_;
}
while ((F->p_1701 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1701)).name)), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_555)).name)))) {
F->code_557v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_553), rt_str(".p_", 3)), f_lower_s_15(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1701)).name)))); b_; }));
F->t_558v = f_tparam_type_286(F->bt_554, &(*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1701)).name)));
(*F->ro_556) = 1;
goto ret_;
}
F->p_1701 = (*(P721)rt_nil_check(F->p_1701)).next;
}
f_select_on_560(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_553), rt_str(".all", 4)); b_; }), (*(P727)rt_nil_check(F->bt_554)).under, F->e_555, &(*F->ro_556), &F->code_557v, &F->t_558v, &F->c_559v);
goto ret_;
}
if (((*(P727)rt_nil_check(F->bt_554)).kind == (((rt_int)17LL)))) {
F->f_1702 = NULL;
F->f_1702 = (*(P727)rt_nil_check(F->bt_554)).fields;
F->i_1703 = ((rt_int)0LL);
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_555)).name)), rt_str("TAG", 3))) {
F->code_557v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_553)), rt_str(").tag)", 6)); b_; }));
F->t_558v = (*(P727)rt_nil_check(F->bt_554)).elem;
(*F->ro_556) = 1;
goto ret_;
}
while ((F->f_1702 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1702)).name)), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_555)).name)))) {
F->fn_1704 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_553)), rt_str(").u.", 4)), f_field_c_17(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_555)).name)))));
F->c_559v = (*(P729)rt_nil_check(F->f_1702)).c;
F->code_557v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_553)), rt_str(").tag == ", 9)), f_itos_7(F->i_1703)), rt_str(" \? &", 4)), F->fn_1704), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_1704), rt_str(")))", 3)); b_; }));
F->t_558v = (*(P729)rt_nil_check(F->f_1702)).t;
goto ret_;
}
F->i_1703 = rt_add(F->i_1703, ((rt_int)1LL));
F->f_1702 = (*(P729)rt_nil_check(F->f_1702)).next;
}
f_fail_23((*(P721)rt_nil_check(F->e_555)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_555)).name))); b_; }));
}
if (((*(P727)rt_nil_check(F->bt_554)).kind == (((rt_int)7LL)))) {
F->f_1705 = NULL;
F->f_1705 = (*(P727)rt_nil_check(F->bt_554)).fields;
while ((F->f_1705 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1705)).name)), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_555)).name)))) {
F->c_559v = (*(P729)rt_nil_check(F->f_1705)).c;
F->code_557v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_553), rt_str(".", 1)), f_field_c_17(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_555)).name)))); b_; }));
F->t_558v = (*(P729)rt_nil_check(F->f_1705)).t;
goto ret_;
}
F->f_1705 = (*(P729)rt_nil_check(F->f_1705)).next;
}
f_fail_23((*(P721)rt_nil_check(F->e_555)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_555)).name))); b_; }));
}
f_fail_23((*(P721)rt_nil_check(F->e_555)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_555)).name))), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_557) = F->code_557v;  (*F->t_558) = F->t_558v;  (*F->c_559) = F->c_559v;
  RT_FPOP();
  return;
}

static int f_has_call_562(rstr *s_561) {
  struct f_has_call_562fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_561 = s_561;
{ rt_int lo1707 = ((rt_int)1LL), hi1708 = ((*F->s_561)).len;
for (rt_int it1709 = lo1707; it1709 <= hi1708; it1709++) {
F->i_1706 = it1709;
if ((rt_str_get((*F->s_561), F->i_1706) == 40)) {
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

static void f_need_slice_564(P727 t_563) {
  struct f_need_slice_564fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_563 = t_563;
F->c_1710 = rt_str_copy(f_ctype_222(F->t_563));
F->n_1711 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_1710));
F->l_1712 = NULL;
if (f_seen_name_335(g_mcopies_798, &F->n_1711)) {
goto ret_;
}
{ R726 *cell1713 = rt_alloc(sizeof(R726));
(*cell1713).s = NULL;
(*cell1713).next = NULL;
F->l_1712 = cell1713;
}
(*(P725)rt_nil_check(F->l_1712)).s = f_mk_3(&F->n_1711);
(*(P725)rt_nil_check(F->l_1712)).next = g_mcopies_798;
g_mcopies_798 = F->l_1712;
f_put_27(g_out_protos_765, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1710), rt_str(" ", 1)), F->n_1711), rt_str("(", 1)), F->c_1710), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1710), rt_str(" ", 1)), F->n_1711), rt_str("(", 1)), F->c_1710), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_765, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1710), rt_str(" rt_r_acat_", 11)), F->c_1710), rt_str("(", 1)), F->c_1710), rt_str(" a, ", 4)), F->c_1710), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1710), rt_str(" rt_r_acat_", 11)), F->c_1710), rt_str("(", 1)), F->c_1710), rt_str(" a, ", 4)), F->c_1710), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_1710), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_324((*(P727)rt_nil_check(F->t_563)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_324((*(P727)rt_nil_check(F->t_563)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_568(rstr *i_565, rstr *lo_566, rstr *hi_567) {
  struct f_ix_568fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_565 = i_565;
F->lo_566 = lo_566;
F->hi_567 = hi_567;
if (f_suppressed_380(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_565)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_565)), rt_str(", ", 2)), (*F->lo_566)), rt_str(", ", 2)), (*F->hi_567)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_577(rstr *base_569, P727 bt_570, P721 e_571, int *ro_572, int lv_573, P716 *code_574, P727 *t_575, P723 *c_576) {
  struct f_index_on_577fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_569 = base_569;
F->bt_570 = bt_570;
F->e_571 = e_571;
F->ro_572 = ro_572;
F->lv_573 = lv_573;
F->code_574 = code_574;
F->code_574v = *F->code_574;
F->t_575 = t_575;
F->t_575v = *F->t_575;
F->c_576 = c_576;
F->c_576v = *F->c_576;
F->a_1714 = NULL;
F->a_1714 = (*(P721)rt_nil_check(F->e_571)).b;
F->it_1715 = NULL;
F->c_576v = g_no_cons_810;
if (((*(P727)rt_nil_check(F->bt_570)).kind == (((rt_int)8LL)))) {
f_finish_ptr_369(F->bt_570);
(*F->ro_572) = 0;
f_index_on_577(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_544(&(*F->base_569), F->bt_570); b_; }), (*(P727)rt_nil_check(F->bt_570)).target, F->e_571, &(*F->ro_572), F->lv_573, &F->code_574v, &F->t_575v, &F->c_576v);
goto ret_;
}
if (((*(P727)rt_nil_check(F->bt_570)).kind == (((rt_int)15LL)))) {
if ((!f_opened_261(F->bt_570))) {
f_fail_23((*(P721)rt_nil_check(F->e_571)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->bt_570)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P727)rt_nil_check(F->bt_570)).tparams == NULL)) {
f_index_on_577(&(*F->base_569), (*(P727)rt_nil_check(F->bt_570)).under, F->e_571, &(*F->ro_572), F->lv_573, &F->code_574v, &F->t_575v, &F->c_576v);
} else {
f_index_on_577(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_569), rt_str(".all", 4)); b_; }), (*(P727)rt_nil_check(F->bt_570)).under, F->e_571, &(*F->ro_572), F->lv_573, &F->code_574v, &F->t_575v, &F->c_576v);
}
goto ret_;
}
if (((((*(P727)rt_nil_check(F->bt_570)).kind == (((rt_int)6LL))) && (F->a_1714 != NULL)) && ((*(P721)rt_nil_check(F->a_1714)).kind == (((rt_int)16LL))))) {
if ((((*(P727)rt_nil_check(F->bt_570)).ndim != ((rt_int)1LL)) || ((*(P721)rt_nil_check(F->a_1714)).next != NULL))) {
f_fail_23((*(P721)rt_nil_check(F->e_571)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_1716 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->a_1714)).a, (*(P727)rt_nil_check(F->bt_570)).idx, &F->it_1715));
F->hi_1717 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->a_1714)).b, (*(P727)rt_nil_check(F->bt_570)).idx, &F->it_1715));
F->code_574v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_222(F->bt_570)), rt_str("(", 1)), (*F->base_569)), rt_str(", ", 2)), F->lo_1716), rt_str(", ", 2)), F->hi_1717), rt_str(")", 1)); b_; }));
f_need_slice_564(F->bt_570);
F->t_575v = F->bt_570;
(*F->ro_572) = 1;
}
goto ret_;
}
if (((*(P727)rt_nil_check(F->bt_570)).kind == (((rt_int)6LL)))) {
F->off_1718 = NULL;
F->k_1719 = ((rt_int)0LL);
F->b_1720 = NULL;
F->b_1720 = f_mk_3(&(*F->base_569));
F->pre_1721 = NULL;
F->pre_1721 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_67(F->a_1714) != (*(P727)rt_nil_check(F->bt_570)).ndim)) {
f_fail_23((*(P721)rt_nil_check(F->e_571)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7((*(P727)rt_nil_check(F->bt_570)).ndim), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_573) && f_has_call_562(&(*F->base_569)))) {
F->pre_1721 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_222(F->bt_570)), rt_str(" b_ = ", 6)), (*F->base_569)), rt_str("; ", 2)); b_; }));
F->b_1720 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_1714 != NULL)) {
F->k_1719 = rt_add(F->k_1719, ((rt_int)1LL));
{
F->i_1722 = rt_str_copy(f_gexpr_583(F->a_1714, f_idx_type_246(F->bt_570, F->k_1719), &F->it_1715));
F->l_1723 = rt_str_copy(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->b_1720)), rt_str(".", 1)), f_dim_lo_230(F->k_1719)));
F->h_1724 = rt_str_copy(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->b_1720)), rt_str(".", 1)), f_dim_hi_232(F->k_1719)));
f_check_type_220(F->it_1715, f_idx_type_246(F->bt_570, F->k_1719), (*(P721)rt_nil_check(F->e_571)).line);
if ((F->off_1718 == NULL)) {
F->off_1718 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_568(&F->i_1722, &F->l_1723, &F->h_1724)), rt_str(" - ", 3)), F->l_1723), rt_str(")", 1)); b_; }));
} else {
F->off_1718 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P716)rt_nil_check(F->off_1718))), rt_str(" * RT_R_EXT(", 12)), F->l_1723), rt_str(", ", 2)), F->h_1724), rt_str(") + ", 4)), f_ix_568(&F->i_1722, &F->l_1723, &F->h_1724)), rt_str(" - ", 3)), F->l_1723), rt_str(")", 1)); b_; }));
}
}
F->a_1714 = (*(P721)rt_nil_check(F->a_1714)).next;
}
if ((((*(P716)rt_nil_check(F->pre_1721))).len > ((rt_int)0LL))) {
F->code_574v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->pre_1721)), (*(P716)rt_nil_check(F->b_1720))), rt_str(".p[", 3)), (*(P716)rt_nil_check(F->off_1718))), rt_str("]; })", 5)); b_; }));
} else {
F->code_574v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->b_1720)), rt_str(".p[", 3)), (*(P716)rt_nil_check(F->off_1718))), rt_str("]", 1)); b_; }));
}
F->t_575v = (*(P727)rt_nil_check(F->bt_570)).elem;
F->c_576v = (*(P727)rt_nil_check(F->bt_570)).elemcons;
goto ret_;
}
if ((f_list_len_67(F->a_1714) != ((rt_int)1LL))) {
f_fail_23((*(P721)rt_nil_check(F->e_571)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P727)rt_nil_check(F->bt_570)).kind == (((rt_int)5LL)))) {
if (((*(P721)rt_nil_check(F->a_1714)).kind == (((rt_int)16LL)))) {
F->lo_1725 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->a_1714)).a, g_ty_int_799, &F->it_1715));
F->hi_1726 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->a_1714)).b, g_ty_int_799, &F->it_1715));
F->code_574v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_569)), rt_str(", ", 2)), F->lo_1725), rt_str(", ", 2)), F->hi_1726), rt_str(")", 1)); b_; }));
F->t_575v = g_ty_string_803;
(*F->ro_572) = 1;
goto ret_;
}
{
F->i_1727 = rt_str_copy(f_gexpr_583(F->a_1714, g_ty_int_799, &F->it_1715));
F->t_575v = g_ty_ascii_802;
if (F->lv_573) {
F->code_574v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_569)), rt_str(", ", 2)), F->i_1727), rt_str("))", 2)); b_; }));
} else {
F->code_574v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_569)), rt_str(", ", 2)), F->i_1727), rt_str(")", 1)); b_; }));
(*F->ro_572) = 1;
}
}
goto ret_;
}
f_fail_23((*(P721)rt_nil_check(F->e_571)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_574) = F->code_574v;  (*F->t_575) = F->t_575v;  (*F->c_576) = F->c_576v;
  RT_FPOP();
  return;
}

static int f_own_attribute_579(P721 e_578) {
  struct f_own_attribute_579fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_578 = e_578;
F->saved_1728 = NULL;
F->saved_1728 = g_code_770;
F->bt_1729 = NULL;
F->ok_1730 = 0;
g_trial_797 = rt_add(g_trial_797, ((rt_int)1LL));
g_code_770 = f_new_buffer_24();
{ rt_frame xf1731;
if (RT_TRY(xf1731)) {
F->base_1733 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_578)).a, NULL, &F->bt_1729));
while (((F->bt_1729 != NULL) && ((*(P727)rt_nil_check(F->bt_1729)).kind == (((rt_int)8LL))))) {
f_finish_ptr_369(F->bt_1729);
F->bt_1729 = (*(P727)rt_nil_check(F->bt_1729)).target;
}
if (((F->bt_1729 != NULL) && ((*(P727)rt_nil_check(F->bt_1729)).kind == (((rt_int)15LL))))) {
F->p_1734 = NULL;
F->p_1734 = (*(P727)rt_nil_check(F->bt_1729)).tparams;
while ((F->p_1734 != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->p_1734)).name)), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_578)).name)))) {
F->ok_1730 = 1;
}
F->p_1734 = (*(P721)rt_nil_check(F->p_1734)).next;
}
}
RT_POP(xf1731);
} else {
RT_POP(xf1731);
int x1732 = rt_xcur;
if (0 || x1732 == ex_compile_error_1) {
F->ok_1730 = 0;
} else {
rt_raise(x1732);
}
}
}
g_trial_797 = rt_sub(g_trial_797, ((rt_int)1LL));
g_code_770 = F->saved_1728;
F->result_ = F->ok_1730;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_583(P721 e_580, P727 want_581, P727 *t_582) {
  struct f_gexpr_583fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_580 = e_580;
F->want_581 = want_581;
F->t_582 = t_582;
F->t_582v = *F->t_582;
F->k_1735 = (*(P721)rt_nil_check(F->e_580)).kind;
F->code_1736 = NULL;
F->c_1737 = NULL;
F->bt_1739 = NULL;
F->ctx_1740 = NULL;
F->ctx_1740 = g_cons_ctx_791;
g_cons_ctx_791 = NULL;
F->t_582v = g_ty_int_799;
if ((F->k_1735 == (((rt_int)1LL)))) {
if (((F->want_581 != NULL) && ((*(P727)rt_nil_check(F->want_581)).kind == (((rt_int)3LL))))) {
F->t_582v = g_ty_float_801;
F->result_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1735 == (((rt_int)2LL)))) {
F->t_582v = g_ty_float_801;
F->result_ = (*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name));
goto ret_;
} else if ((F->k_1735 == (((rt_int)5LL)))) {
F->t_582v = g_ty_bool_800;
F->result_ = f_itos_7((*(P721)rt_nil_check(F->e_580)).ival);
goto ret_;
} else if ((F->k_1735 == (((rt_int)3LL)))) {
F->t_582v = g_ty_string_803;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_597(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)))), rt_str(", ", 2)), f_itos_7(((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_1735 == (((rt_int)6LL)))) {
F->t_582v = g_ty_nil_806;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1735 == (((rt_int)4LL)))) {
if (((F->want_581 != NULL) && ((*(P727)rt_nil_check(f_base_of_211(F->want_581))).kind == (((rt_int)4LL))))) {
F->t_582v = F->want_581;
} else {
F->t_582v = f_enum_type_of_600(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), (*(P721)rt_nil_check(F->e_580)).line);
}
{
F->i_1741 = f_lit_index_250((*(P727)rt_nil_check(f_base_of_211(F->t_582v))).lits, &(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)));
if ((F->i_1741 < ((rt_int)0LL))) {
f_fail_23((*(P721)rt_nil_check(F->e_580)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1741);
goto ret_;
}
} else if ((F->k_1735 == (((rt_int)17LL)))) {
g_cons_ctx_791 = F->ctx_1740;
F->result_ = f_gexpr_583((*(P721)rt_nil_check(F->e_580)).a, F->want_581, &F->t_582v);
goto ret_;
} else if ((F->k_1735 == (((rt_int)7LL)))) {
F->y_1742 = NULL;
F->y_1742 = f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)));
if ((F->y_1742 == NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("ME", 2))) {
F->t_582v = g_ty_act_809;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("NIL_ACT", 7))) {
F->t_582v = g_ty_act_809;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("CRITICAL", 8)) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("NONCRITICAL", 11))) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("SYNC_RESET", 10))) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_687(f_wrap_apply_595(F->e_580), 0, &F->t_582v);
goto ret_;
}
if (((((((((rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("SYS_OUT", 7))) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("TIME", 4))) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("MILLISECONDS", 12))) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("SECONDS", 7))) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("MINUTES", 7))) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_687(f_wrap_apply_595(F->e_580), 0, &F->t_582v);
goto ret_;
}
f_fail_23((*(P721)rt_nil_check(F->e_580)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P731)rt_nil_check(F->y_1742)).kind == (((rt_int)1LL))) || ((*(P731)rt_nil_check(F->y_1742)).kind == (((rt_int)2LL))))) {
F->t_582v = (*(P731)rt_nil_check(F->y_1742)).t;
if (((*(P731)rt_nil_check(F->y_1742)).kind == (((rt_int)1LL)))) {
F->ro_1743 = f_check_import_539(F->y_1742, (*(P721)rt_nil_check(F->e_580)).line);
}
F->result_ = f_access_of_533(F->y_1742);
goto ret_;
}
if (((*(P731)rt_nil_check(F->y_1742)).kind == (((rt_int)3LL)))) {
F->result_ = f_gcall_687(f_wrap_apply_595(F->e_580), 0, &F->t_582v);
goto ret_;
}
f_fail_23((*(P721)rt_nil_check(F->e_580)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1735 == (((rt_int)8LL))) && (f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name))) != NULL)) && (f_user_op_683(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), f_copy_node_593((*(P721)rt_nil_check(F->e_580)).a)) != NULL))) {
F->call_1744 = NULL;
F->call_1744 = f_nn_61((((rt_int)10LL)), (*(P721)rt_nil_check(F->e_580)).line);
F->fname_1745 = NULL;
F->fname_1745 = f_nn_61((((rt_int)7LL)), (*(P721)rt_nil_check(F->e_580)).line);
(*(P721)rt_nil_check(F->fname_1745)).name = (*(P721)rt_nil_check(F->e_580)).name;
(*(P721)rt_nil_check(F->call_1744)).a = F->fname_1745;
(*(P721)rt_nil_check(F->call_1744)).b = f_copy_node_593((*(P721)rt_nil_check(F->e_580)).a);
F->result_ = f_gcall_687(F->call_1744, 0, &F->t_582v);
goto ret_;
} else if (((((F->k_1735 == (((rt_int)8LL))) && rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("NOT", 3))) && (F->want_581 != NULL)) && ((*(P727)rt_nil_check(F->want_581)).kind == (((rt_int)16LL))))) {
F->a_1746 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_580)).a, F->want_581, &F->t_582v));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_1746), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_67((*(P727)rt_nil_check((*(P727)rt_nil_check(F->want_581)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1735 == (((rt_int)8LL)))) {
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("NOT", 3))) {
F->a_1747 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_580)).a, g_ty_bool_800, &F->t_582v));
f_check_type_220(F->t_582v, g_ty_bool_800, (*(P721)rt_nil_check(F->e_580)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1747), rt_str(")", 1));
goto ret_;
}
{
F->a_1748 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_580)).a, F->want_581, &F->t_582v));
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("+", 1))) {
F->result_ = F->a_1748;
goto ret_;
} else if (((*(P727)rt_nil_check(F->t_582v)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1748), rt_str(")", 1));
goto ret_;
}
f_check_type_220(F->t_582v, g_ty_int_799, (*(P721)rt_nil_check(F->e_580)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1748), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1735 == (((rt_int)9LL)))) {
F->result_ = f_gbinop_607(F->e_580, F->want_581, &F->t_582v);
goto ret_;
} else if ((F->k_1735 == (((rt_int)10LL)))) {
if ((((*(P721)rt_nil_check((*(P721)rt_nil_check(F->e_580)).a)).kind == (((rt_int)7LL))) || ((*(P721)rt_nil_check((*(P721)rt_nil_check(F->e_580)).a)).kind == (((rt_int)12LL))))) {
F->nm_1749 = NULL;
F->nm_1749 = (*(P721)rt_nil_check(F->e_580)).a;
F->y_1750 = NULL;
if (((*(P721)rt_nil_check(F->nm_1749)).kind == (((rt_int)12LL)))) {
F->nm_1749 = (*(P721)rt_nil_check(F->nm_1749)).a;
}
F->y_1750 = f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->nm_1749)).name)));
if (((((F->y_1750 == NULL) || ((*(P731)rt_nil_check(F->y_1750)).kind == (((rt_int)3LL)))) || ((*(P731)rt_nil_check(F->y_1750)).kind == (((rt_int)4LL)))) || ((*(P731)rt_nil_check(F->y_1750)).kind == (((rt_int)10LL))))) {
F->result_ = f_gcall_687(F->e_580, 0, &F->t_582v);
goto ret_;
}
}
{
F->base_1751 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_580)).a, NULL, &F->bt_1739));
F->ro_1738 = 1;
f_index_on_577(&F->base_1751, F->bt_1739, F->e_580, &F->ro_1738, 0, &F->code_1736, &F->t_582v, &F->c_1737);
F->result_ = (*(P716)rt_nil_check(F->code_1736));
goto ret_;
}
} else if ((F->k_1735 == (((rt_int)11LL)))) {
if ((((rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_580)).name)), rt_str("MAX", 3))) && (!f_own_attribute_579(F->e_580)))) {
F->result_ = f_attribute_603(F->e_580, &F->t_582v);
goto ret_;
}
{
F->base_1752 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_580)).a, NULL, &F->bt_1739));
F->ro_1738 = 1;
f_select_on_560(&F->base_1752, F->bt_1739, F->e_580, &F->ro_1738, &F->code_1736, &F->t_582v, &F->c_1737);
F->result_ = (*(P716)rt_nil_check(F->code_1736));
goto ret_;
}
} else if ((F->k_1735 == (((rt_int)12LL)))) {
F->result_ = f_gcall_687(f_wrap_apply_595(F->e_580), 0, &F->t_582v);
goto ret_;
} else if ((F->k_1735 == (((rt_int)14LL)))) {
F->result_ = f_constructor_612(F->e_580, F->want_581, F->ctx_1740, &F->t_582v);
goto ret_;
} else if ((F->k_1735 == (((rt_int)13LL)))) {
F->result_ = f_resolved_586(F->e_580, &F->t_582v);
goto ret_;
}
f_fail_23((*(P721)rt_nil_check(F->e_580)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_582) = F->t_582v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_586(P721 e_584, P727 *t_585) {
  struct f_resolved_586fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_584 = e_584;
F->t_585 = t_585;
F->t_585v = *F->t_585;
F->c_1753 = NULL;
F->vt_1754 = NULL;
F->y_1755 = NULL;
F->y_1755 = f_lookup_153(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_1756 = NULL;
F->tt_1756 = f_copy_node_593((*(P721)rt_nil_check(F->e_584)).b);
(*(P721)rt_nil_check(F->tt_1756)).next = NULL;
if (((F->y_1755 != NULL) && (((*(P731)rt_nil_check(F->y_1755)).kind == (((rt_int)10LL))) || (f_resolve_overload_661(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_1756, f_copy_node_593((*(P721)rt_nil_check(F->e_584)).a), 0, (*(P721)rt_nil_check(F->e_584)).line) != NULL)))) {
F->call_1757 = NULL;
F->call_1757 = f_nn_61((((rt_int)10LL)), (*(P721)rt_nil_check(F->e_584)).line);
F->f_1758 = NULL;
F->f_1758 = f_nn_61((((rt_int)12LL)), (*(P721)rt_nil_check(F->e_584)).line);
F->fname_1759 = NULL;
F->fname_1759 = f_nn_61((((rt_int)7LL)), (*(P721)rt_nil_check(F->e_584)).line);
(*(P721)rt_nil_check(F->fname_1759)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P721)rt_nil_check(F->f_1758)).a = F->fname_1759;
(*(P721)rt_nil_check(F->f_1758)).b = F->tt_1756;
(*(P721)rt_nil_check(F->call_1757)).a = F->f_1758;
(*(P721)rt_nil_check(F->call_1757)).b = f_copy_node_593((*(P721)rt_nil_check(F->e_584)).a);
(*(P721)rt_nil_check((*(P721)rt_nil_check(F->call_1757)).b)).next = NULL;
F->result_ = f_gcall_687(F->call_1757, 0, &F->t_585v);
goto ret_;
}
F->t_585v = f_resolve_subtype_253((*(P721)rt_nil_check(F->e_584)).b, &F->c_1753);
{
F->v_1760 = rt_str_copy(f_gexpr_in_591((*(P721)rt_nil_check(F->e_584)).a, F->t_585v, F->c_1753, &F->vt_1754));
f_check_type_220(F->vt_1754, F->t_585v, (*(P721)rt_nil_check(F->e_584)).line);
F->result_ = f_checked_203(F->t_585v, F->c_1753, &F->v_1760);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_585) = F->t_585v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_591(P721 e_587, P727 want_588, P723 c_589, P727 *t_590) {
  struct f_gexpr_in_591fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_587 = e_587;
F->want_588 = want_588;
F->c_589 = c_589;
F->t_590 = t_590;
F->t_590v = *F->t_590;
g_cons_ctx_791 = F->c_589;
F->result_ = f_gexpr_583(F->e_587, F->want_588, &F->t_590v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_590) = F->t_590v;
  RT_FPOP();
  return F->result_;
}

static P721 f_copy_node_593(P721 e_592) {
  struct f_copy_node_593fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_592 = e_592;
F->x_1761 = NULL;
{ R722 *cell1762 = rt_alloc(sizeof(R722));
(*cell1762).name = NULL;
(*cell1762).tag = NULL;
(*cell1762).prags = NULL;
(*cell1762).labels = NULL;
(*cell1762).a = NULL;
(*cell1762).b = NULL;
(*cell1762).c = NULL;
(*cell1762).d = NULL;
(*cell1762).e = NULL;
(*cell1762).next = NULL;
F->x_1761 = cell1762;
}
(*(P721)rt_nil_check(F->x_1761)).kind = (*(P721)rt_nil_check(F->e_592)).kind;
(*(P721)rt_nil_check(F->x_1761)).line = (*(P721)rt_nil_check(F->e_592)).line;
(*(P721)rt_nil_check(F->x_1761)).ival = (*(P721)rt_nil_check(F->e_592)).ival;
(*(P721)rt_nil_check(F->x_1761)).flag = (*(P721)rt_nil_check(F->e_592)).flag;
(*(P721)rt_nil_check(F->x_1761)).name = (*(P721)rt_nil_check(F->e_592)).name;
(*(P721)rt_nil_check(F->x_1761)).tag = (*(P721)rt_nil_check(F->e_592)).tag;
(*(P721)rt_nil_check(F->x_1761)).a = (*(P721)rt_nil_check(F->e_592)).a;
(*(P721)rt_nil_check(F->x_1761)).b = (*(P721)rt_nil_check(F->e_592)).b;
(*(P721)rt_nil_check(F->x_1761)).c = (*(P721)rt_nil_check(F->e_592)).c;
(*(P721)rt_nil_check(F->x_1761)).d = (*(P721)rt_nil_check(F->e_592)).d;
F->result_ = F->x_1761;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P721 f_wrap_apply_595(P721 e_594) {
  struct f_wrap_apply_595fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_594 = e_594;
F->x_1763 = NULL;
F->x_1763 = f_nn_61((((rt_int)10LL)), (*(P721)rt_nil_check(F->e_594)).line);
(*(P721)rt_nil_check(F->x_1763)).a = F->e_594;
F->result_ = F->x_1763;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_597(rstr *s_596) {
  struct f_c_string_597fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_596 = s_596;
F->n_1764 = ((rt_int)0LL);
{ rt_int lo1766 = ((rt_int)1LL), hi1767 = ((*F->s_596)).len;
for (rt_int it1768 = lo1766; it1768 <= hi1767; it1768++) {
F->i_1765 = it1768;
if (((rt_str_get((*F->s_596), F->i_1765) == 92) || (rt_str_get((*F->s_596), F->i_1765) == 63))) {
F->n_1764 = rt_add(F->n_1764, ((rt_int)1LL));
}
}
}
{
F->r_1769 = rt_str_new(rt_add(rt_add(((*F->s_596)).len, F->n_1764), ((rt_int)2LL)));
F->j_1770 = ((rt_int)1LL);
(*rt_str_at(&F->r_1769, ((rt_int)1LL))) = 34;
{ rt_int lo1772 = ((rt_int)1LL), hi1773 = ((*F->s_596)).len;
for (rt_int it1774 = lo1772; it1774 <= hi1773; it1774++) {
F->i_1771 = it1774;
F->j_1770 = rt_add(F->j_1770, ((rt_int)1LL));
if (((rt_str_get((*F->s_596), F->i_1771) == 92) || (rt_str_get((*F->s_596), F->i_1771) == 63))) {
(*rt_str_at(&F->r_1769, F->j_1770)) = 92;
F->j_1770 = rt_add(F->j_1770, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1769, F->j_1770)) = rt_str_get((*F->s_596), F->i_1771);
}
}
(*rt_str_at(&F->r_1769, rt_add(F->j_1770, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1769;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P727 f_enum_type_of_600(rstr *lit_598, rt_int line_599) {
  struct f_enum_type_of_600fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_598 = lit_598;
F->line_599 = line_599;
F->y_1775 = NULL;
F->y_1775 = g_scope_stack_760;
F->c_1776 = NULL;
if ((f_lit_index_250((*(P727)rt_nil_check(g_ty_ascii_802)).lits, &(*F->lit_598)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_802;
goto ret_;
}
while ((F->y_1775 != NULL)) {
if ((((((*(P731)rt_nil_check(F->y_1775)).kind == (((rt_int)6LL))) || ((*(P731)rt_nil_check(F->y_1775)).kind == (((rt_int)5LL)))) && ((*(P731)rt_nil_check(F->y_1775)).st != NULL)) && ((*(P721)rt_nil_check((*(P731)rt_nil_check(F->y_1775)).st)).kind == (((rt_int)72LL))))) {
if ((f_lit_index_250((*(P721)rt_nil_check((*(P731)rt_nil_check(F->y_1775)).st)).a, &(*F->lit_598)) >= ((rt_int)0LL))) {
if (((*(P731)rt_nil_check(F->y_1775)).kind == (((rt_int)5LL)))) {
F->st_1777 = NULL;
F->st_1777 = f_nn_61((((rt_int)80LL)), F->line_599);
(*(P721)rt_nil_check(F->st_1777)).name = (*(P731)rt_nil_check(F->y_1775)).name;
F->result_ = f_resolve_subtype_253(F->st_1777, &F->c_1776);
goto ret_;
}
F->result_ = f_resolve_subtype_253((*(P731)rt_nil_check(F->y_1775)).st, &F->c_1776);
goto ret_;
}
}
F->y_1775 = (*(P731)rt_nil_check(F->y_1775)).stack;
}
f_fail_23(F->line_599, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_598)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_603(P721 e_601, P727 *t_602) {
  struct f_attribute_603fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_601 = e_601;
F->t_602 = t_602;
F->t_602v = *F->t_602;
F->bt_1778 = NULL;
F->c_1779 = NULL;
F->t_602v = g_ty_int_799;
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_601)).name)), rt_str("LEN", 3))) {
F->base_1780 = NULL;
F->base_1780 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_583((*(P721)rt_nil_check(F->e_601)).a, NULL, &F->bt_1778); b_; }));
if (((*(P727)rt_nil_check(F->bt_1778)).kind == (((rt_int)8LL)))) {
f_finish_ptr_369(F->bt_1778);
F->base_1780 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_544(&(*(P716)rt_nil_check(F->base_1780)), F->bt_1778); b_; }));
F->bt_1778 = (*(P727)rt_nil_check(F->bt_1778)).target;
}
if (((*(P727)rt_nil_check(F->bt_1778)).kind != (((rt_int)5LL)))) {
f_fail_23((*(P721)rt_nil_check(F->e_601)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P716)rt_nil_check(F->base_1780))), rt_str(").len", 5));
goto ret_;
}
if (((*(P721)rt_nil_check((*(P721)rt_nil_check(F->e_601)).a)).kind == (((rt_int)7LL)))) {
F->y_1781 = NULL;
F->y_1781 = f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->e_601)).a)).name)));
if (((F->y_1781 != NULL) && (((*(P731)rt_nil_check(F->y_1781)).kind == (((rt_int)6LL))) || ((*(P731)rt_nil_check(F->y_1781)).kind == (((rt_int)5LL)))))) {
F->st_1782 = NULL;
F->st_1782 = f_nn_61((((rt_int)80LL)), (*(P721)rt_nil_check(F->e_601)).line);
(*(P721)rt_nil_check(F->st_1782)).name = (*(P721)rt_nil_check((*(P721)rt_nil_check(F->e_601)).a)).name;
F->t_602v = f_resolve_subtype_253(F->st_1782, &F->c_1779);
if (((*(P727)rt_nil_check(F->t_602v)).kind == (((rt_int)4LL)))) {
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_601)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_67((*(P727)rt_nil_check(F->t_602v)).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P723)rt_nil_check(F->c_1779)).lo != NULL)) {
if (rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_601)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P716)rt_nil_check((*(P723)rt_nil_check(F->c_1779)).lo));
goto ret_;
}
F->result_ = (*(P716)rt_nil_check((*(P723)rt_nil_check(F->c_1779)).hi));
goto ret_;
}
}
}
f_fail_23((*(P721)rt_nil_check(F->e_601)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_601)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_602) = F->t_602v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_607(P721 e_604, P727 want_605, P727 *t_606) {
  struct f_gbinop_607fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_604 = e_604;
F->want_605 = want_605;
F->t_606 = t_606;
F->t_606v = *F->t_606;
F->op_1783 = NULL;
F->op_1783 = (*(P721)rt_nil_check(F->e_604)).name;
F->ta_1784 = NULL;
F->tb_1785 = NULL;
F->hint_1786 = NULL;
F->uy_1787 = NULL;
F->t_606v = g_ty_bool_800;
if ((f_lookup_153(&(*(P716)rt_nil_check(F->op_1783))) != NULL)) {
F->l_1788 = NULL;
F->r_1789 = NULL;
F->l_1788 = f_copy_node_593((*(P721)rt_nil_check(F->e_604)).a);
F->r_1789 = f_copy_node_593((*(P721)rt_nil_check(F->e_604)).b);
(*(P721)rt_nil_check(F->l_1788)).next = F->r_1789;
F->uy_1787 = f_user_op_683(&(*(P716)rt_nil_check(F->op_1783)), F->l_1788);
if ((F->uy_1787 != NULL)) {
F->call_1790 = NULL;
F->call_1790 = f_nn_61((((rt_int)10LL)), (*(P721)rt_nil_check(F->e_604)).line);
F->fname_1791 = NULL;
F->fname_1791 = f_nn_61((((rt_int)7LL)), (*(P721)rt_nil_check(F->e_604)).line);
(*(P721)rt_nil_check(F->fname_1791)).name = F->op_1783;
(*(P721)rt_nil_check(F->call_1790)).a = F->fname_1791;
(*(P721)rt_nil_check(F->call_1790)).b = F->l_1788;
F->result_ = f_gcall_687(F->call_1790, 0, &F->t_606v);
goto ret_;
}
}
if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("IN", 2))) {
F->s_1792 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_604)).b, NULL, &F->tb_1785));
if (((*(P727)rt_nil_check(F->tb_1785)).kind != (((rt_int)16LL)))) {
f_fail_23((*(P721)rt_nil_check(F->e_604)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_1793 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_604)).a, (*(P727)rt_nil_check(F->tb_1785)).elem, &F->ta_1784));
f_check_type_220(F->ta_1784, (*(P727)rt_nil_check(F->tb_1785)).elem, (*(P721)rt_nil_check(F->e_604)).line);
F->t_606v = g_ty_bool_800;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_1793), rt_str(", ", 2)), F->s_1792), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("AND", 3)) || rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("OR", 2))) || rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("XOR", 3))) && (F->want_605 != NULL)) && ((*(P727)rt_nil_check(F->want_605)).kind == (((rt_int)16LL))))) {
F->a_1794 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_604)).a, F->want_605, &F->ta_1784));
F->b_1795 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_604)).b, F->want_605, &F->tb_1785));
f_check_type_220(F->tb_1785, F->ta_1784, (*(P721)rt_nil_check(F->e_604)).line);
F->t_606v = F->ta_1784;
if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_1794), rt_str(", ", 2)), F->b_1795), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_1794), rt_str(", ", 2)), F->b_1795), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_1794), rt_str(", ", 2)), F->b_1795), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("AND", 3)) || rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("OR", 2))) || rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("XOR", 3)))) {
F->a_1796 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_604)).a, g_ty_bool_800, &F->ta_1784));
F->b_1797 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_604)).b, g_ty_bool_800, &F->tb_1785));
f_check_type_220(F->ta_1784, g_ty_bool_800, (*(P721)rt_nil_check(F->e_604)).line);
f_check_type_220(F->tb_1785, g_ty_bool_800, (*(P721)rt_nil_check(F->e_604)).line);
if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1796), rt_str(" && ", 4)), F->b_1797), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1796), rt_str(" || ", 4)), F->b_1797), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1796), rt_str(" != ", 4)), F->b_1797), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("&", 1)) && (F->want_605 != NULL)) && ((*(P727)rt_nil_check(f_base_of_211(F->want_605))).kind == (((rt_int)6LL))))) {
F->at_1798 = NULL;
F->at_1798 = f_base_of_211(F->want_605);
F->a_1799 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_604)).a, F->at_1798, &F->ta_1784));
F->b_1800 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_604)).b, F->at_1798, &F->tb_1785));
f_check_type_220(F->ta_1784, F->at_1798, (*(P721)rt_nil_check(F->e_604)).line);
f_check_type_220(F->tb_1785, F->at_1798, (*(P721)rt_nil_check(F->e_604)).line);
if ((((*(P727)rt_nil_check(F->at_1798)).ndim != ((rt_int)1LL)) || ((*(P727)rt_nil_check(f_base_of_211((*(P727)rt_nil_check(F->at_1798)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23((*(P721)rt_nil_check(F->e_604)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_564(F->at_1798);
F->t_606v = F->at_1798;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_222(F->at_1798)), rt_str("(", 1)), F->a_1799), rt_str(", ", 2)), F->b_1800), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("&", 1))) {
F->wa_1801 = NULL;
F->wb_1802 = NULL;
if (((*(P721)rt_nil_check((*(P721)rt_nil_check(F->e_604)).a)).kind == (((rt_int)4LL)))) {
F->wa_1801 = g_ty_ascii_802;
}
if (((*(P721)rt_nil_check((*(P721)rt_nil_check(F->e_604)).b)).kind == (((rt_int)4LL)))) {
F->wb_1802 = g_ty_ascii_802;
}
{
F->a_1803 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_604)).a, F->wa_1801, &F->ta_1784));
F->b_1804 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_604)).b, F->wb_1802, &F->tb_1785));
F->t_606v = g_ty_string_803;
if ((((*(P727)rt_nil_check(F->ta_1784)).kind == (((rt_int)5LL))) && ((*(P727)rt_nil_check(F->tb_1785)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_1803), rt_str(", ", 2)), F->b_1804), rt_str(")", 1));
goto ret_;
} else if ((((*(P727)rt_nil_check(F->ta_1784)).kind == (((rt_int)5LL))) && ((*(P727)rt_nil_check(F->tb_1785)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_1803), rt_str(", ", 2)), F->b_1804), rt_str(")", 1));
goto ret_;
} else if ((((*(P727)rt_nil_check(F->ta_1784)).kind == (((rt_int)4LL))) && ((*(P727)rt_nil_check(F->tb_1785)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_1803), rt_str(", ", 2)), F->b_1804), rt_str(")", 1));
goto ret_;
} else if ((((*(P727)rt_nil_check(F->ta_1784)).kind == (((rt_int)4LL))) && ((*(P727)rt_nil_check(F->tb_1785)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_1803), rt_str(", ", 2)), F->b_1804), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P721)rt_nil_check(F->e_604)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_106(&(*(P716)rt_nil_check(F->op_1783))) && (!rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("IN", 2))))) {
if (((((*(P721)rt_nil_check((*(P721)rt_nil_check(F->e_604)).a)).kind == (((rt_int)4LL))) || ((*(P721)rt_nil_check((*(P721)rt_nil_check(F->e_604)).a)).kind == (((rt_int)6LL)))) || ((*(P721)rt_nil_check((*(P721)rt_nil_check(F->e_604)).a)).kind == (((rt_int)1LL))))) {
F->dummy_1805 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_604)).b, NULL, &F->hint_1786));
}
{
F->a_1806 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_604)).a, F->hint_1786, &F->ta_1784));
F->b_1807 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_604)).b, F->ta_1784, &F->tb_1785));
F->ct_1808 = NULL;
F->ct_1808 = f_base_of_211(F->ta_1784);
F->t_606v = g_ty_bool_800;
if ((((*(P727)rt_nil_check(F->ta_1784)).kind != (((rt_int)11LL))) && ((*(P727)rt_nil_check(F->tb_1785)).kind != (((rt_int)11LL))))) {
f_check_type_220(F->tb_1785, F->ta_1784, (*(P721)rt_nil_check(F->e_604)).line);
}
if (((*(P727)rt_nil_check(F->ta_1784)).kind == (((rt_int)11LL)))) {
F->ct_1808 = f_base_of_211(F->tb_1785);
}
if (((*(P727)rt_nil_check(F->ct_1808)).kind == (((rt_int)5LL)))) {
if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_1806), rt_str(", ", 2)), F->b_1807), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_1806), rt_str(", ", 2)), F->b_1807), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_1806), rt_str(", ", 2)), F->b_1807), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_1806), rt_str(", ", 2)), F->b_1807), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_1807), rt_str(", ", 2)), F->a_1806), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_1807), rt_str(", ", 2)), F->a_1806), rt_str(")", 1));
goto ret_;
}
if (((*(P727)rt_nil_check(F->ct_1808)).kind == (((rt_int)16LL)))) {
if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_1806), rt_str(", ", 2)), F->b_1807), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_1806), rt_str(", ", 2)), F->b_1807), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_1806), rt_str(", ", 2)), F->b_1807), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_1807), rt_str(", ", 2)), F->a_1806), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P721)rt_nil_check(F->e_604)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_316(F->ct_1808)) {
if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("=", 1))) {
F->result_ = f_eq_code_328(F->ct_1808, &F->a_1806, &F->b_1807);
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_328(F->ct_1808, &F->a_1806, &F->b_1807)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P721)rt_nil_check(F->e_604)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1806), rt_str(" == ", 4)), F->b_1807), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1806), rt_str(" != ", 4)), F->b_1807), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1806), rt_str(" ", 1)), (*(P716)rt_nil_check(F->op_1783))), rt_str(" ", 1)), F->b_1807), rt_str(")", 1));
goto ret_;
}
}
{
F->a_1809 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_604)).a, F->want_605, &F->ta_1784));
F->b_1810 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->e_604)).b, F->ta_1784, &F->tb_1785));
if ((((*(P727)rt_nil_check(F->ta_1784)).kind == (((rt_int)3LL))) || ((*(P727)rt_nil_check(F->tb_1785)).kind == (((rt_int)3LL))))) {
F->t_606v = g_ty_float_801;
if (((rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("+", 1)) || rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("-", 1))) || rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1809), rt_str(" ", 1)), (*(P716)rt_nil_check(F->op_1783))), rt_str(" ", 1)), F->b_1810), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_1809), rt_str(", ", 2)), F->b_1810), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_1809), rt_str(", ", 2)), F->b_1810), rt_str(")", 1));
goto ret_;
}
}
f_check_type_220(F->ta_1784, g_ty_int_799, (*(P721)rt_nil_check(F->e_604)).line);
f_check_type_220(F->tb_1785, g_ty_int_799, (*(P721)rt_nil_check(F->e_604)).line);
F->t_606v = g_ty_int_799;
if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1809), rt_str(", ", 2)), F->b_1810), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1809), rt_str(", ", 2)), F->b_1810), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_1809), rt_str(", ", 2)), F->b_1810), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_1809), rt_str(", ", 2)), F->b_1810), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_1809), rt_str(", ", 2)), F->b_1810), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P716)rt_nil_check(F->op_1783)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_1809), rt_str(", ", 2)), F->b_1810), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P721)rt_nil_check(F->e_604)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P716)rt_nil_check(F->op_1783))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_606) = F->t_606v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_612(P721 e_608, P727 want_609, P723 ctx_610, P727 *t_611) {
  struct f_constructor_612fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_608 = e_608;
F->want_609 = want_609;
F->ctx_610 = ctx_610;
F->t_611 = t_611;
F->t_611v = *F->t_611;
F->it_1811 = NULL;
F->it_1811 = (*(P721)rt_nil_check(F->e_608)).a;
F->f_1812 = NULL;
F->vt_1813 = NULL;
if (((F->want_609 != NULL) && ((*(P727)rt_nil_check(F->want_609)).kind == (((rt_int)16LL))))) {
F->s_1814 = NULL;
F->s_1814 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
F->t_611v = F->want_609;
while ((F->it_1811 != NULL)) {
F->v_1815 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->it_1811)).b, (*(P727)rt_nil_check(F->want_609)).elem, &F->vt_1813));
f_check_type_220(F->vt_1813, (*(P727)rt_nil_check(F->want_609)).elem, (*(P721)rt_nil_check(F->e_608)).line);
F->s_1814 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (*(P716)rt_nil_check(F->s_1814))), rt_str(", ", 2)), f_set_elem_621(F->want_609, &F->v_1815)), rt_str(")", 1)); b_; }));
F->it_1811 = (*(P721)rt_nil_check(F->it_1811)).next;
}
F->result_ = (*(P716)rt_nil_check(F->s_1814));
goto ret_;
}
if (((F->want_609 != NULL) && ((*(P727)rt_nil_check(F->want_609)).kind == (((rt_int)15LL))))) {
f_fail_23((*(P721)rt_nil_check(F->e_608)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (*(P716)rt_nil_check((*(P727)rt_nil_check(F->want_609)).name))), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_609 != NULL) && ((*(P727)rt_nil_check(F->want_609)).kind == (((rt_int)6LL))))) {
F->result_ = f_array_cons_626(F->e_608, F->want_609, F->ctx_610, &F->t_611v);
goto ret_;
}
if (((F->want_609 != NULL) && ((*(P727)rt_nil_check(F->want_609)).kind == (((rt_int)17LL))))) {
if ((((((F->it_1811 == NULL) || ((*(P721)rt_nil_check(F->it_1811)).next != NULL)) || ((*(P721)rt_nil_check(F->it_1811)).a == NULL)) || ((*(P721)rt_nil_check((*(P721)rt_nil_check(F->it_1811)).a)).next != NULL)) || ((*(P721)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->it_1811)).a)).a)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P721)rt_nil_check(F->e_608)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_1812 = (*(P727)rt_nil_check(F->want_609)).fields;
{
F->i_1816 = ((rt_int)0LL);
F->tmp_1817 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_1812 != NULL) && (!rt_str_eq((*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1812)).name)), (*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->it_1811)).a)).a)).name)))))) {
F->i_1816 = rt_add(F->i_1816, ((rt_int)1LL));
F->f_1812 = (*(P729)rt_nil_check(F->f_1812)).next;
}
if ((F->f_1812 == NULL)) {
f_fail_23((*(P721)rt_nil_check(F->e_608)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->it_1811)).a)).a)).name))); b_; }));
}
F->t_611v = F->want_609;
g_cons_ctx_791 = (*(P729)rt_nil_check(F->f_1812)).c;
{
F->v_1818 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->it_1811)).b, (*(P729)rt_nil_check(F->f_1812)).t, &F->vt_1813));
f_check_type_220(F->vt_1813, (*(P729)rt_nil_check(F->f_1812)).t, (*(P721)rt_nil_check(F->e_608)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_222(F->want_609)), rt_str(" ", 1)), F->tmp_1817), rt_str("; ", 2)), F->tmp_1817), rt_str(".tag = ", 7)), f_itos_7(F->i_1816)), rt_str("; ", 2)), F->tmp_1817), rt_str(".u.", 3)), f_field_c_17(&(*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1812)).name)))), rt_str(" = ", 3)), f_comp_value_616((*(P729)rt_nil_check(F->f_1812)).t, (*(P729)rt_nil_check(F->f_1812)).c, &F->v_1818)), rt_str("; ", 2)), F->tmp_1817), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_609 == NULL) || ((*(P727)rt_nil_check(F->want_609)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P721)rt_nil_check(F->e_608)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_611v = F->want_609;
F->f_1812 = (*(P727)rt_nil_check(F->want_609)).fields;
{
F->tmp_1819 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_1820 = NULL;
F->parts_1820 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_222(F->want_609)), rt_str(" ", 1)), F->tmp_1819), rt_str(";", 1)); b_; }));
while ((F->it_1811 != NULL)) {
F->k_1821 = NULL;
F->k_1821 = (*(P721)rt_nil_check(F->it_1811)).a;
F->shared_1822 = NULL;
if ((F->k_1821 == NULL)) {
f_fail_23((*(P721)rt_nil_check(F->e_608)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_1821 != NULL)) {
if (((((F->f_1812 == NULL) || ((*(P721)rt_nil_check((*(P721)rt_nil_check(F->k_1821)).a)).kind != (((rt_int)7LL)))) || ((*(P721)rt_nil_check(F->k_1821)).b != NULL)) || (!rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check((*(P721)rt_nil_check(F->k_1821)).a)).name)), (*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1812)).name)))))) {
if ((F->f_1812 == NULL)) {
f_fail_23((*(P721)rt_nil_check(F->e_608)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23((*(P721)rt_nil_check(F->e_608)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1812)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P721)rt_nil_check((*(P721)rt_nil_check(F->it_1811)).a)).next == NULL)) {
g_cons_ctx_791 = (*(P729)rt_nil_check(F->f_1812)).c;
{
F->v_1823 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->it_1811)).b, (*(P729)rt_nil_check(F->f_1812)).t, &F->vt_1813));
f_check_type_220(F->vt_1813, (*(P729)rt_nil_check(F->f_1812)).t, (*(P721)rt_nil_check(F->e_608)).line);
F->parts_1820 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->parts_1820)), rt_str(" ", 1)), F->tmp_1819), rt_str(".", 1)), f_field_c_17(&(*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1812)).name)))), rt_str(" = ", 3)), f_comp_value_616((*(P729)rt_nil_check(F->f_1812)).t, (*(P729)rt_nil_check(F->f_1812)).c, &F->v_1823)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_1822 == NULL)) {
F->v_1824 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->it_1811)).b, (*(P729)rt_nil_check(F->f_1812)).t, &F->vt_1813));
F->shared_1822 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_220(F->vt_1813, (*(P729)rt_nil_check(F->f_1812)).t, (*(P721)rt_nil_check(F->e_608)).line);
F->parts_1820 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->parts_1820)), rt_str(" ", 1)), f_ctype_222((*(P729)rt_nil_check(F->f_1812)).t)), rt_str(" ", 1)), (*(P716)rt_nil_check(F->shared_1822))), rt_str(" = ", 3)), F->v_1824), rt_str(";", 1)); b_; }));
}
f_check_type_220(F->vt_1813, (*(P729)rt_nil_check(F->f_1812)).t, (*(P721)rt_nil_check(F->e_608)).line);
F->parts_1820 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->parts_1820)), rt_str(" ", 1)), F->tmp_1819), rt_str(".", 1)), f_field_c_17(&(*(P716)rt_nil_check((*(P729)rt_nil_check(F->f_1812)).name)))), rt_str(" = ", 3)), f_comp_value_616((*(P729)rt_nil_check(F->f_1812)).t, (*(P729)rt_nil_check(F->f_1812)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_324((*(P729)rt_nil_check(F->f_1812)).t, &(*(P716)rt_nil_check(F->shared_1822))); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_1812 = (*(P729)rt_nil_check(F->f_1812)).next;
F->k_1821 = (*(P721)rt_nil_check(F->k_1821)).next;
}
F->it_1811 = (*(P721)rt_nil_check(F->it_1811)).next;
}
if ((F->f_1812 != NULL)) {
f_fail_23((*(P721)rt_nil_check(F->e_608)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->parts_1820)), rt_str(" ", 1)), F->tmp_1819), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_611) = F->t_611v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_616(P727 t_613, P723 c_614, rstr *v_615) {
  struct f_comp_value_616fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_613 = t_613;
F->c_614 = c_614;
F->v_615 = v_615;
if (((F->c_614 == NULL) || (((*(P723)rt_nil_check(F->c_614)).lo != NULL) && f_has_at_618(&(*(P716)rt_nil_check((*(P723)rt_nil_check(F->c_614)).lo)))))) {
F->result_ = f_copy_code_324(F->t_613, &(*F->v_615));
goto ret_;
} else if (((((*(P727)rt_nil_check(F->t_613)).kind == (((rt_int)5LL))) && ((*(P723)rt_nil_check(F->c_614)).slen != NULL)) && (!f_has_at_618(&(*(P716)rt_nil_check((*(P723)rt_nil_check(F->c_614)).slen)))))) {
F->result_ = f_copy_code_324(F->t_613, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_615)), rt_str(", ", 2)), (*(P716)rt_nil_check((*(P723)rt_nil_check(F->c_614)).slen))), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_203(F->t_613, F->c_614, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_324(F->t_613, &(*F->v_615)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_618(rstr *s_617) {
  struct f_has_at_618fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_617 = s_617;
{ rt_int lo1826 = ((rt_int)1LL), hi1827 = ((*F->s_617)).len;
for (rt_int it1828 = lo1826; it1828 <= hi1827; it1828++) {
F->i_1825 = it1828;
if ((rt_str_get((*F->s_617), F->i_1825) == 64)) {
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

static rstr f_set_elem_621(P727 st_619, rstr *v_620) {
  struct f_set_elem_621fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_619 = st_619;
F->v_620 = v_620;
F->result_ = (*F->v_620);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_626(P721 e_622, P727 at_623, P723 ctx_624, P727 *t_625) {
  struct f_array_cons_626fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_622 = e_622;
F->at_623 = at_623;
F->ctx_624 = ctx_624;
F->t_625 = t_625;
F->t_625v = *F->t_625;
F->tmp_1829 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_1830 = NULL;
F->parts_1830 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_222(F->at_623)), rt_str(" ", 1)), F->tmp_1829), rt_str(";", 1)); b_; }));
F->it_1831 = NULL;
F->it_1831 = (*(P721)rt_nil_check(F->e_622)).a;
F->positional_1832 = 1;
F->t_625v = F->at_623;
while ((F->it_1831 != NULL)) {
if (((*(P721)rt_nil_check(F->it_1831)).a != NULL)) {
F->positional_1832 = 0;
}
F->it_1831 = (*(P721)rt_nil_check(F->it_1831)).next;
}
{ rt_int lo1834 = ((rt_int)1LL), hi1835 = (*(P727)rt_nil_check(F->at_623)).ndim;
for (rt_int it1836 = lo1834; it1836 <= hi1835; it1836++) {
F->k_1833 = it1836;
F->lo_1837 = NULL;
F->hi_1838 = NULL;
if ((((F->ctx_624 != NULL) && (f_cons_lo_240(F->ctx_624, F->k_1833) != NULL)) && (!f_has_at_618(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P716)rt_nil_check(f_cons_lo_240(F->ctx_624, F->k_1833))); b_; }))))) {
F->lo_1837 = f_cons_lo_240(F->ctx_624, F->k_1833);
F->hi_1838 = f_cons_hi_243(F->ctx_624, F->k_1833);
} else if ((((*(P727)rt_nil_check(F->at_623)).ndim == ((rt_int)1LL)) && F->positional_1832)) {
if (((*(P727)rt_nil_check(f_base_of_211((*(P727)rt_nil_check(F->at_623)).idx))).kind == (((rt_int)4LL)))) {
F->lo_1837 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_1837 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_1838 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P716)rt_nil_check(F->lo_1837))), rt_str(" + ", 3)), f_itos_7(f_list_len_67((*(P721)rt_nil_check(F->e_622)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23((*(P721)rt_nil_check(F->e_622)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_1830 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->parts_1830)), rt_str(" ", 1)), F->tmp_1829), rt_str(".", 1)), f_dim_lo_230(F->k_1833)), rt_str(" = ", 3)), (*(P716)rt_nil_check(F->lo_1837))), rt_str("; ", 2)), F->tmp_1829), rt_str(".", 1)), f_dim_hi_232(F->k_1833)), rt_str(" = ", 3)), (*(P716)rt_nil_check(F->hi_1838))), rt_str(";", 1)); b_; }));
}
}
if (((*(P727)rt_nil_check(F->at_623)).ndim == ((rt_int)1LL))) {
F->parts_1830 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->parts_1830)), rt_str(" ", 1)), F->tmp_1829), rt_str(".lo2 = ", 7)), F->tmp_1829), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_1830 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->parts_1830)), rt_str(" rt_int n_", 10)), F->tmp_1829), rt_str(" = ", 3)), f_acnt_237(F->at_623, &F->tmp_1829)), rt_str("; ", 2)), F->tmp_1829), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_222((*(P727)rt_nil_check(F->at_623)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_1829), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_1829), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_1829), rt_str(" + 1);", 6)); b_; }));
F->parts_1830 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->parts_1830)), f_fill_items_632((*(P721)rt_nil_check(F->e_622)).a, F->at_623, &F->tmp_1829, NULL, ((rt_int)1LL))); b_; }));
F->parts_1830 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->parts_1830)), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_1829), rt_str("; i_++) if (seen_", 17)), F->tmp_1829), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_1829), rt_str("; })", 4)); b_; }));
F->result_ = (*(P716)rt_nil_check(F->parts_1830));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_625) = F->t_625v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_632(P721 items_627, P727 at_628, rstr *tmp_629, P725 prefix_630, rt_int dim_631) {
  struct f_fill_items_632fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_627 = items_627;
F->at_628 = at_628;
F->tmp_629 = tmp_629;
F->prefix_630 = prefix_630;
F->dim_631 = dim_631;
F->it_1839 = NULL;
F->it_1839 = F->items_627;
F->pos_1840 = ((rt_int)0LL);
F->r_1841 = NULL;
F->r_1841 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_1842 = NULL;
while ((F->it_1839 != NULL)) {
if (((*(P721)rt_nil_check(F->it_1839)).a == NULL)) {
if (((F->dim_631 < (*(P727)rt_nil_check(F->at_628)).ndim) && ((*(P721)rt_nil_check((*(P721)rt_nil_check(F->it_1839)).b)).kind == (((rt_int)14LL))))) {
F->r_1841 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->r_1841)), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_631)), rt_str(" = ", 3)), (*F->tmp_629)), rt_str(".", 1)), f_dim_lo_230(F->dim_631)), rt_str(" + ", 3)), f_itos_7(F->pos_1840)), rt_str("; ", 2)), f_fill_items_632((*(P721)rt_nil_check((*(P721)rt_nil_check(F->it_1839)).b)).a, F->at_628, &(*F->tmp_629), f_add_line_637(F->prefix_630, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_631)); b_; })), rt_add(F->dim_631, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_1843 = rt_str_copy(f_item_value_642((*(P721)rt_nil_check(F->it_1839)).b, F->at_628, f_e_line_634(F->it_1839), &F->vt_1842));
if (((F->dim_631 == ((rt_int)1LL)) && ((*(P727)rt_nil_check(F->at_628)).ndim > ((rt_int)1LL)))) {
F->r_1841 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->r_1841)), rt_str(" { ", 3)), F->v_1843), rt_str(" if (", 5)), f_itos_7(F->pos_1840)), rt_str(" >= n_", 6)), (*F->tmp_629)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_629)), rt_str(".p[", 3)), f_itos_7(F->pos_1840)), rt_str("] = ", 4)), f_copy_code_324((*(P727)rt_nil_check(F->at_628)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_629)), rt_str("[", 1)), f_itos_7(F->pos_1840)), rt_str("]++; }", 6)); b_; }));
} else {
F->r_1841 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->r_1841)), rt_str(" { ", 3)), F->v_1843), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_631)), rt_str(" = ", 3)), (*F->tmp_629)), rt_str(".", 1)), f_dim_lo_230(F->dim_631)), rt_str(" + ", 3)), f_itos_7(F->pos_1840)), rt_str("; ", 2)), f_store_at_652(F->at_628, &(*F->tmp_629), f_add_line_637(F->prefix_630, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_631)); b_; })), F->dim_631)), rt_str(" }", 2)); b_; }));
}
}
F->pos_1840 = rt_add(F->pos_1840, ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_631, f_list_len_67((*(P721)rt_nil_check(F->it_1839)).a)), ((rt_int)1LL)) == (*(P727)rt_nil_check(F->at_628)).ndim)) {
F->k_1844 = NULL;
F->k_1844 = (*(P721)rt_nil_check(F->it_1839)).a;
F->d_1845 = F->dim_631;
F->pre_1846 = NULL;
F->pre_1846 = F->prefix_630;
F->loops_1847 = NULL;
F->loops_1847 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_1848 = NULL;
F->ends_1848 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_1849 = rt_str_copy(f_item_value_642((*(P721)rt_nil_check(F->it_1839)).b, F->at_628, (*(P721)rt_nil_check(F->it_1839)).line, &F->vt_1842));
while ((F->k_1844 != NULL)) {
F->xv_1850 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->d_1845)));
F->loops_1847 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->loops_1847)), f_key_loop_647(F->k_1844, F->at_628, F->d_1845, &F->xv_1850)); b_; }));
F->ends_1848 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->ends_1848)), rt_str(" }", 2)); b_; }));
F->pre_1846 = f_add_line_637(F->pre_1846, &F->xv_1850);
F->d_1845 = rt_add(F->d_1845, ((rt_int)1LL));
F->k_1844 = (*(P721)rt_nil_check(F->k_1844)).next;
}
F->r_1841 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->r_1841)), rt_str(" { ", 3)), F->v_1849), (*(P716)rt_nil_check(F->loops_1847))), rt_str(" ", 1)), f_store_at_652(F->at_628, &(*F->tmp_629), F->pre_1846, (*(P727)rt_nil_check(F->at_628)).ndim)), (*(P716)rt_nil_check(F->ends_1848))), rt_str(" }", 2)); b_; }));
} else if (((F->dim_631 == (*(P727)rt_nil_check(F->at_628)).ndim) || ((*(P721)rt_nil_check((*(P721)rt_nil_check(F->it_1839)).b)).kind == (((rt_int)14LL))))) {
F->k_1851 = NULL;
F->k_1851 = (*(P721)rt_nil_check(F->it_1839)).a;
while ((F->k_1851 != NULL)) {
F->xv_1852 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_631)));
if ((F->dim_631 < (*(P727)rt_nil_check(F->at_628)).ndim)) {
F->r_1841 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->r_1841)), rt_str(" {", 2)), f_key_loop_647(F->k_1851, F->at_628, F->dim_631, &F->xv_1852)), rt_str(" ", 1)), f_fill_items_632((*(P721)rt_nil_check((*(P721)rt_nil_check(F->it_1839)).b)).a, F->at_628, &(*F->tmp_629), f_add_line_637(F->prefix_630, &F->xv_1852), rt_add(F->dim_631, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_1853 = rt_str_copy(f_item_value_642((*(P721)rt_nil_check(F->it_1839)).b, F->at_628, (*(P721)rt_nil_check(F->it_1839)).line, &F->vt_1842));
F->r_1841 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->r_1841)), rt_str(" { ", 3)), F->v_1853), f_key_loop_647(F->k_1851, F->at_628, F->dim_631, &F->xv_1852)), rt_str(" ", 1)), f_store_at_652(F->at_628, &(*F->tmp_629), f_add_line_637(F->prefix_630, &F->xv_1852), F->dim_631)), rt_str(" } }", 4)); b_; }));
}
F->k_1851 = (*(P721)rt_nil_check(F->k_1851)).next;
}
} else {
f_fail_23((*(P721)rt_nil_check(F->it_1839)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub((*(P727)rt_nil_check(F->at_628)).ndim, F->dim_631), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_1839 = (*(P721)rt_nil_check(F->it_1839)).next;
}
F->result_ = (*(P716)rt_nil_check(F->r_1841));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_634(P721 e_633) {
  struct f_e_line_634fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_633 = e_633;
F->result_ = (*(P721)rt_nil_check(F->e_633)).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P725 f_add_line_637(P725 l_635, rstr *s_636) {
  struct f_add_line_637fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_635 = l_635;
F->s_636 = s_636;
F->r_1854 = NULL;
F->tail_1855 = NULL;
F->x_1856 = NULL;
F->p_1857 = NULL;
F->p_1857 = F->l_635;
while ((F->p_1857 != NULL)) {
{ R726 *cell1858 = rt_alloc(sizeof(R726));
(*cell1858).s = NULL;
(*cell1858).next = NULL;
F->x_1856 = cell1858;
}
(*(P725)rt_nil_check(F->x_1856)).s = (*(P725)rt_nil_check(F->p_1857)).s;
if ((F->tail_1855 == NULL)) {
F->r_1854 = F->x_1856;
} else {
(*(P725)rt_nil_check(F->tail_1855)).next = F->x_1856;
}
F->tail_1855 = F->x_1856;
F->p_1857 = (*(P725)rt_nil_check(F->p_1857)).next;
}
{ R726 *cell1859 = rt_alloc(sizeof(R726));
(*cell1859).s = NULL;
(*cell1859).next = NULL;
F->x_1856 = cell1859;
}
(*(P725)rt_nil_check(F->x_1856)).s = f_mk_3(&(*F->s_636));
if ((F->tail_1855 == NULL)) {
F->r_1854 = F->x_1856;
} else {
(*(P725)rt_nil_check(F->tail_1855)).next = F->x_1856;
}
F->result_ = F->r_1854;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_642(P721 e_638, P727 at_639, rt_int line_640, P727 *vt_641) {
  struct f_item_value_642fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_638 = e_638;
F->at_639 = at_639;
F->line_640 = line_640;
F->vt_641 = vt_641;
F->vt_641v = *F->vt_641;
g_cons_ctx_791 = (*(P727)rt_nil_check(F->at_639)).elemcons;
{
F->v_1860 = rt_str_copy(f_gexpr_583(F->e_638, (*(P727)rt_nil_check(F->at_639)).elem, &F->vt_641v));
f_check_type_220(F->vt_641v, (*(P727)rt_nil_check(F->at_639)).elem, F->line_640);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_222((*(P727)rt_nil_check(F->at_639)).elem), rt_str(" v_ = ", 6)), f_comp_value_616((*(P727)rt_nil_check(F->at_639)).elem, (*(P727)rt_nil_check(F->at_639)).elemcons, &F->v_1860)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_641) = F->vt_641v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_647(P721 k_643, P727 at_644, rt_int d_645, rstr *xv_646) {
  struct f_key_loop_647fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_643 = k_643;
F->at_644 = at_644;
F->d_645 = d_645;
F->xv_646 = xv_646;
F->it_1861 = NULL;
F->lo_1862 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->k_643)).a, f_idx_type_246(F->at_644, F->d_645), &F->it_1861));
f_check_type_220(F->it_1861, f_idx_type_246(F->at_644, F->d_645), (*(P721)rt_nil_check(F->k_643)).line);
if (((*(P721)rt_nil_check(F->k_643)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_646)), rt_str(" = ", 3)), F->lo_1862), rt_str(";", 1));
goto ret_;
}
{
F->hi_1863 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->k_643)).b, f_idx_type_246(F->at_644, F->d_645), &F->it_1861));
f_check_type_220(F->it_1861, f_idx_type_246(F->at_644, F->d_645), (*(P721)rt_nil_check(F->k_643)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_646)), rt_str(" = ", 3)), F->lo_1862), rt_str(", h", 3)), (*F->xv_646)), rt_str(" = ", 3)), F->hi_1863), rt_str("; ", 2)), (*F->xv_646)), rt_str(" <= h", 5)), (*F->xv_646)), rt_str("; ", 2)), (*F->xv_646)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_652(P727 at_648, rstr *tmp_649, P725 xs_650, rt_int n_651) {
  struct f_store_at_652fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_648 = at_648;
F->tmp_649 = tmp_649;
F->xs_650 = xs_650;
F->n_651 = n_651;
F->off_1864 = NULL;
F->x_1865 = NULL;
F->x_1865 = F->xs_650;
F->k_1866 = ((rt_int)0LL);
while ((F->x_1865 != NULL)) {
F->k_1866 = rt_add(F->k_1866, ((rt_int)1LL));
{
F->l_1867 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_649), rt_str(".", 1)), f_dim_lo_230(F->k_1866)));
F->h_1868 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_649), rt_str(".", 1)), f_dim_hi_232(F->k_1866)));
if ((F->off_1864 == NULL)) {
F->off_1864 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (*(P716)rt_nil_check((*(P725)rt_nil_check(F->x_1865)).s))), rt_str(", ", 2)), F->l_1867), rt_str(", ", 2)), F->h_1868), rt_str(") - ", 4)), F->l_1867), rt_str(")", 1)); b_; }));
} else {
F->off_1864 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P716)rt_nil_check(F->off_1864))), rt_str(" * RT_R_EXT(", 12)), F->l_1867), rt_str(", ", 2)), F->h_1868), rt_str(") + rt_index(", 13)), (*(P716)rt_nil_check((*(P725)rt_nil_check(F->x_1865)).s))), rt_str(", ", 2)), F->l_1867), rt_str(", ", 2)), F->h_1868), rt_str(") - ", 4)), F->l_1867), rt_str(")", 1)); b_; }));
}
}
F->x_1865 = (*(P725)rt_nil_check(F->x_1865)).next;
}
if ((F->k_1866 != (*(P727)rt_nil_check(F->at_648)).ndim)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7((*(P727)rt_nil_check(F->at_648)).ndim)), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (*(P716)rt_nil_check(F->off_1864))), rt_str("; ", 2)), (*F->tmp_649)), rt_str(".p[o_] = ", 9)), f_copy_code_324((*(P727)rt_nil_check(F->at_648)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_649)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_655(P731 y_653, P721 args_654) {
  struct f_fits_655fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_653 = y_653;
F->args_654 = args_654;
F->a_1869 = NULL;
F->a_1869 = F->args_654;
F->pm_1870 = NULL;
F->pm_1870 = (*(P731)rt_nil_check(F->y_653)).params;
F->t_1871 = NULL;
F->saved_1872 = NULL;
F->saved_1872 = g_code_770;
F->ok_1873 = 1;
F->lv_1874 = NULL;
F->lc_1875 = NULL;
g_trial_797 = rt_add(g_trial_797, ((rt_int)1LL));
g_code_770 = f_new_buffer_24();
{ rt_frame xf1877;
if (RT_TRY(xf1877)) {
while (((F->ok_1873 && (F->a_1869 != NULL)) && (F->pm_1870 != NULL))) {
if ((((*(P733)rt_nil_check(F->pm_1870)).mode == (((rt_int)2LL))) || ((*(P733)rt_nil_check(F->pm_1870)).mode == (((rt_int)3LL))))) {
f_lvalue_552(F->a_1869, &F->lv_1874, &F->t_1871, &F->lc_1875, &F->ro_1876);
} else {
F->v_1879 = rt_str_copy(f_gexpr_583(F->a_1869, (*(P733)rt_nil_check(F->pm_1870)).t, &F->t_1871));
}
if ((!(f_same_209(F->t_1871, (*(P733)rt_nil_check(F->pm_1870)).t) || (((*(P727)rt_nil_check(F->t_1871)).kind == (((rt_int)11LL))) && ((*(P727)rt_nil_check((*(P733)rt_nil_check(F->pm_1870)).t)).kind == (((rt_int)8LL))))))) {
F->ok_1873 = 0;
}
F->a_1869 = (*(P721)rt_nil_check(F->a_1869)).next;
F->pm_1870 = (*(P733)rt_nil_check(F->pm_1870)).next;
}
if (((F->a_1869 != NULL) || (F->pm_1870 != NULL))) {
F->ok_1873 = 0;
}
RT_POP(xf1877);
} else {
RT_POP(xf1877);
int x1878 = rt_xcur;
if (0 || x1878 == ex_compile_error_1) {
F->ok_1873 = 0;
} else {
rt_raise(x1878);
}
}
}
g_trial_797 = rt_sub(g_trial_797, ((rt_int)1LL));
g_code_770 = F->saved_1872;
F->result_ = F->ok_1873;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P731 f_resolve_overload_661(rstr *name_656, P721 tt_657, P721 args_658, int is_stmt_659, rt_int line_660) {
  struct f_resolve_overload_661fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_656 = name_656;
F->tt_657 = tt_657;
F->args_658 = args_658;
F->is_stmt_659 = is_stmt_659;
F->line_660 = line_660;
F->y_1880 = NULL;
F->first_1881 = NULL;
F->n_1882 = ((rt_int)0LL);
{ rt_int lo1884 = ((rt_int)1LL), hi1885 = ((rt_int)3LL);
for (rt_int it1886 = lo1884; it1886 <= hi1885; it1886++) {
F->pass_1883 = it1886;
F->y_1880 = f_overload_chain_667(&(*F->name_656), F->pass_1883);
while ((F->y_1880 != NULL)) {
if (((rt_str_eq((*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_1880)).name)), (*F->name_656)) && (((*(P731)rt_nil_check(F->y_1880)).kind == (((rt_int)3LL))) || ((*(P731)rt_nil_check(F->y_1880)).kind == (((rt_int)4LL))))) && ((F->pass_1883 != ((rt_int)1LL)) || ((*(P731)rt_nil_check(F->y_1880)).depth >= g_gdepth_789)))) {
F->n_1882 = rt_add(F->n_1882, ((rt_int)1LL));
if ((F->first_1881 == NULL)) {
F->first_1881 = F->y_1880;
}
if ((((((*(P731)rt_nil_check(F->y_1880)).kind == (((rt_int)4LL))) == F->is_stmt_659) && f_tt_fits_664(F->y_1880, F->tt_657)) && f_fits_655(F->y_1880, F->args_658))) {
F->result_ = F->y_1880;
goto ret_;
}
}
F->y_1880 = (*(P731)rt_nil_check(F->y_1880)).chain;
}
}
}
if (f_is_builtin_669(&(*F->name_656))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_1882 > ((rt_int)1LL))) {
f_fail_23(F->line_660, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_656)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_1881;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_664(P731 y_662, P721 tt_663) {
  struct f_tt_fits_664fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_662 = y_662;
F->tt_663 = tt_663;
F->f_1887 = NULL;
F->a_1888 = NULL;
F->saved_1889 = NULL;
F->saved_1889 = g_code_770;
F->ok_1890 = 1;
if ((((*(P731)rt_nil_check(F->y_662)).decl == NULL) || ((*(P721)rt_nil_check((*(P731)rt_nil_check(F->y_662)).decl)).e == NULL))) {
F->result_ = (F->tt_663 == NULL);
goto ret_;
} else if ((F->tt_663 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_1887 = (*(P721)rt_nil_check((*(P731)rt_nil_check(F->y_662)).decl)).e;
F->a_1888 = F->tt_663;
g_trial_797 = rt_add(g_trial_797, ((rt_int)1LL));
g_code_770 = f_new_buffer_24();
{ rt_frame xf1891;
if (RT_TRY(xf1891)) {
while (((F->ok_1890 && (F->f_1887 != NULL)) && (F->a_1888 != NULL))) {
F->fc_1893 = NULL;
F->ac_1894 = NULL;
F->fst_1895 = NULL;
F->fst_1895 = f_nn_61((((rt_int)80LL)), (*(P721)rt_nil_check(F->f_1887)).line);
F->ft_1896 = NULL;
F->at_1897 = NULL;
(*(P721)rt_nil_check(F->fst_1895)).name = (*(P721)rt_nil_check(F->f_1887)).name;
F->ft_1896 = f_resolve_subtype_253(F->fst_1895, &F->fc_1893);
if (((*(P721)rt_nil_check(F->a_1888)).kind >= (((rt_int)70LL)))) {
F->at_1897 = f_resolve_subtype_253(F->a_1888, &F->ac_1894);
} else {
F->ast_1898 = NULL;
F->ast_1898 = f_nn_61((((rt_int)80LL)), (*(P721)rt_nil_check(F->a_1888)).line);
(*(P721)rt_nil_check(F->ast_1898)).name = (*(P721)rt_nil_check(F->a_1888)).name;
F->at_1897 = f_resolve_subtype_253(F->ast_1898, &F->ac_1894);
}
F->ok_1890 = f_same_209(F->ft_1896, F->at_1897);
F->f_1887 = (*(P721)rt_nil_check(F->f_1887)).next;
F->a_1888 = (*(P721)rt_nil_check(F->a_1888)).next;
}
F->ok_1890 = ((F->ok_1890 && (F->f_1887 == NULL)) && (F->a_1888 == NULL));
RT_POP(xf1891);
} else {
RT_POP(xf1891);
int x1892 = rt_xcur;
if (0 || x1892 == ex_compile_error_1) {
F->ok_1890 = 0;
} else {
rt_raise(x1892);
}
}
}
g_trial_797 = rt_sub(g_trial_797, ((rt_int)1LL));
g_code_770 = F->saved_1889;
F->result_ = F->ok_1890;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P731 f_overload_chain_667(rstr *name_665, rt_int pass_666) {
  struct f_overload_chain_667fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_665 = name_665;
F->pass_666 = pass_666;
if (((g_genv_757 == NULL) && (F->pass_666 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_666 == ((rt_int)2LL))) {
F->result_ = ({ A736 b_ = (*(P735)rt_nil_check(g_genv_757)); b_.p[(rt_index(f_hash_151(&(*F->name_665)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A736 b_ = (*(P735)rt_nil_check(g_table_756)); b_.p[(rt_index(f_hash_151(&(*F->name_665)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_669(rstr *n_668) {
  struct f_is_builtin_669fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_668 = n_668;
F->result_ = (((((((((((((((rt_str_eq((*F->n_668), rt_str("ABS", 3)) || rt_str_eq((*F->n_668), rt_str("POS", 3))) || rt_str_eq((*F->n_668), rt_str("SUCC", 4))) || rt_str_eq((*F->n_668), rt_str("PRED", 4))) || rt_str_eq((*F->n_668), rt_str("SQRT", 4))) || rt_str_eq((*F->n_668), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_668), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_668), rt_str("WRITE", 5))) || rt_str_eq((*F->n_668), rt_str("READLN", 6))) || rt_str_eq((*F->n_668), rt_str("SEND", 4))) || rt_str_eq((*F->n_668), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_668), rt_str("DELAY", 5))) || rt_str_eq((*F->n_668), rt_str("TIME", 4))) || rt_str_eq((*F->n_668), rt_str("CNVT", 4))) || rt_str_eq((*F->n_668), rt_str("FORMAT", 6))) || f_is_low_level_671(&(*F->n_668)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_671(rstr *n_670) {
  struct f_is_low_level_671fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_670 = n_670;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_670), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_670), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_670), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_670), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_670), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_670), rt_str("LOCK", 4))) || rt_str_eq((*F->n_670), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_670), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_670), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_670), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_670), rt_str("WAITING", 7))) || rt_str_eq((*F->n_670), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_670), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_670), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_670), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_670), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_670), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_670), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_670), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_675(P721 tt_672, rt_int line_673, P727 *t_674) {
  struct f_me_high_675fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_672 = tt_672;
F->line_673 = line_673;
F->t_674 = t_674;
F->t_674v = *F->t_674;
F->c_1899 = NULL;
if ((F->tt_672 == NULL)) {
f_fail_23(F->line_673, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_674v = f_resolve_subtype_253(F->tt_672, &F->c_1899);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_222(F->t_674v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_677(F->t_674v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_674) = F->t_674v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_677(P727 t_676) {
  struct f_type_tag_677fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_676 = t_676;
if (((*(P727)rt_nil_check(F->t_676)).name != NULL)) {
F->result_ = (*(P716)rt_nil_check((*(P727)rt_nil_check(F->t_676)).name));
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_680(P721 e_678, rstr *name_679) {
  struct f_lock_ref_680fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_678 = e_678;
F->name_679 = name_679;
F->lv_1900 = NULL;
F->t_1901 = NULL;
F->c_1902 = NULL;
f_lvalue_552(F->e_678, &F->lv_1900, &F->t_1901, &F->c_1902, &F->ro_1903);
if (((*(P727)rt_nil_check(F->t_1901)).kind != (((rt_int)13LL)))) {
f_fail_23((*(P721)rt_nil_check(F->e_678)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_679), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (*(P716)rt_nil_check(F->lv_1900)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P731 f_user_op_683(rstr *op_681, P721 args_682) {
  struct f_user_op_683fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_681 = op_681;
F->args_682 = args_682;
F->y_1904 = NULL;
{ rt_int lo1906 = ((rt_int)1LL), hi1907 = ((rt_int)3LL);
for (rt_int it1908 = lo1906; it1908 <= hi1907; it1908++) {
F->pass_1905 = it1908;
F->y_1904 = f_overload_chain_667(&(*F->op_681), F->pass_1905);
while ((F->y_1904 != NULL)) {
if ((((rt_str_eq((*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_1904)).name)), (*F->op_681)) && ((*(P731)rt_nil_check(F->y_1904)).kind == (((rt_int)3LL)))) && ((F->pass_1905 != ((rt_int)1LL)) || ((*(P731)rt_nil_check(F->y_1904)).depth >= g_gdepth_789))) && f_fits_655(F->y_1904, F->args_682))) {
F->result_ = F->y_1904;
goto ret_;
}
F->y_1904 = (*(P731)rt_nil_check(F->y_1904)).chain;
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

static rstr f_gcall_687(P721 e_684, int is_stmt_685, P727 *t_686) {
  struct f_gcall_687fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_684 = e_684;
F->is_stmt_685 = is_stmt_685;
F->t_686 = t_686;
F->t_686v = *F->t_686;
F->fn_1909 = NULL;
F->fn_1909 = (*(P721)rt_nil_check(F->e_684)).a;
F->tt_1910 = NULL;
F->y_1911 = NULL;
F->args_1912 = NULL;
F->args_1912 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_1913 = NULL;
F->a_1913 = (*(P721)rt_nil_check(F->e_684)).b;
F->pm_1914 = NULL;
F->lt_1915 = NULL;
F->vt_1916 = NULL;
F->lv_1917 = NULL;
F->lc_1918 = NULL;
if (((*(P721)rt_nil_check(F->fn_1909)).kind == (((rt_int)12LL)))) {
F->tt_1910 = (*(P721)rt_nil_check(F->fn_1909)).b;
F->fn_1909 = (*(P721)rt_nil_check(F->fn_1909)).a;
}
F->y_1911 = f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1909)).name)));
if ((F->y_1911 == NULL)) {
F->result_ = f_builtin_712(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1909)).name)), F->tt_1910, (*(P721)rt_nil_check(F->e_684)).b, (*(P721)rt_nil_check(F->e_684)).line, F->is_stmt_685, &F->t_686v);
goto ret_;
}
if (((((*(P731)rt_nil_check(F->y_1911)).kind != (((rt_int)3LL))) && ((*(P731)rt_nil_check(F->y_1911)).kind != (((rt_int)4LL)))) && ((*(P731)rt_nil_check(F->y_1911)).kind != (((rt_int)10LL))))) {
F->alt_1920 = NULL;
F->alt_1920 = f_resolve_overload_661(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1909)).name)), F->tt_1910, (*(P721)rt_nil_check(F->e_684)).b, F->is_stmt_685, (*(P721)rt_nil_check(F->e_684)).line);
if ((F->alt_1920 != NULL)) {
F->y_1911 = F->alt_1920;
} else if (f_is_builtin_669(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1909)).name)))) {
F->result_ = f_builtin_712(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1909)).name)), F->tt_1910, (*(P721)rt_nil_check(F->e_684)).b, (*(P721)rt_nil_check(F->e_684)).line, F->is_stmt_685, &F->t_686v);
goto ret_;
}
}
if (((*(P731)rt_nil_check(F->y_1911)).kind == (((rt_int)10LL)))) {
F->y_1911 = f_instantiate_531(F->y_1911, F->tt_1910, (*(P721)rt_nil_check(F->e_684)).b, (*(P721)rt_nil_check(F->e_684)).line);
} else if ((((*(P731)rt_nil_check(F->y_1911)).kind == (((rt_int)3LL))) || ((*(P731)rt_nil_check(F->y_1911)).kind == (((rt_int)4LL))))) {
F->y_1911 = f_resolve_overload_661(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1909)).name)), F->tt_1910, (*(P721)rt_nil_check(F->e_684)).b, F->is_stmt_685, (*(P721)rt_nil_check(F->e_684)).line);
if ((F->y_1911 == NULL)) {
F->result_ = f_builtin_712(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1909)).name)), F->tt_1910, (*(P721)rt_nil_check(F->e_684)).b, (*(P721)rt_nil_check(F->e_684)).line, F->is_stmt_685, &F->t_686v);
goto ret_;
}
}
if ((((*(P731)rt_nil_check(F->y_1911)).kind != (((rt_int)3LL))) && ((*(P731)rt_nil_check(F->y_1911)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P721)rt_nil_check(F->e_684)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1909)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_701(F->y_1911, (*(P721)rt_nil_check(F->e_684)).line);
if ((F->is_stmt_685 && ((*(P731)rt_nil_check(F->y_1911)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P721)rt_nil_check(F->e_684)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1909)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_685) && ((*(P731)rt_nil_check(F->y_1911)).kind != (((rt_int)3LL))))) {
f_fail_23((*(P721)rt_nil_check(F->e_684)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1909)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_1914 = (*(P731)rt_nil_check(F->y_1911)).params;
if (((*(P731)rt_nil_check(F->y_1911)).level > ((rt_int)0LL))) {
F->args_1912 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1922 = ((rt_int)1LL), hi1923 = rt_sub(g_cur_level_773, (*(P731)rt_nil_check(F->y_1911)).level);
for (rt_int it1924 = lo1922; it1924 <= hi1923; it1924++) {
F->i_1921 = it1924;
F->args_1912 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->args_1912)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_1913 != NULL) && (F->pm_1914 != NULL))) {
if ((((*(P716)rt_nil_check(F->args_1912))).len > ((rt_int)0LL))) {
F->args_1912 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->args_1912)), rt_str(", ", 2)); b_; }));
}
if ((((*(P733)rt_nil_check(F->pm_1914)).mode == (((rt_int)2LL))) || ((*(P733)rt_nil_check(F->pm_1914)).mode == (((rt_int)3LL))))) {
f_lvalue_552(F->a_1913, &F->lv_1917, &F->lt_1915, &F->lc_1918, &F->ro_1919);
if (F->ro_1919) {
f_fail_23((*(P721)rt_nil_check(F->e_684)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check((*(P733)rt_nil_check(F->pm_1914)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_220(F->lt_1915, (*(P733)rt_nil_check(F->pm_1914)).t, (*(P721)rt_nil_check(F->e_684)).line);
F->args_1912 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->args_1912)), rt_str("&", 1)), (*(P716)rt_nil_check(F->lv_1917))), f_actual_bounds_705((*(P733)rt_nil_check(F->pm_1914)).t, F->lt_1915, F->lc_1918)); b_; }));
} else if ((((*(P733)rt_nil_check(F->pm_1914)).mode == (((rt_int)4LL))) && f_is_lvalue_546(F->a_1913))) {
f_lvalue_552(F->a_1913, &F->lv_1917, &F->lt_1915, &F->lc_1918, &F->ro_1919);
f_check_type_220(F->lt_1915, (*(P733)rt_nil_check(F->pm_1914)).t, (*(P721)rt_nil_check(F->e_684)).line);
F->args_1912 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->args_1912)), rt_str("&", 1)), (*(P716)rt_nil_check(F->lv_1917))), f_actual_bounds_705((*(P733)rt_nil_check(F->pm_1914)).t, F->lt_1915, F->lc_1918)); b_; }));
} else if (((*(P733)rt_nil_check(F->pm_1914)).mode == (((rt_int)4LL)))) {
F->v_1925 = rt_str_copy(f_gexpr_in_591(F->a_1913, (*(P733)rt_nil_check(F->pm_1914)).t, (*(P733)rt_nil_check(F->pm_1914)).c, &F->vt_1916));
F->ct_1926 = rt_str_copy(f_ctype_222((*(P733)rt_nil_check(F->pm_1914)).t));
f_check_type_220(F->vt_1916, (*(P733)rt_nil_check(F->pm_1914)).t, (*(P721)rt_nil_check(F->e_684)).line);
F->args_1912 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->args_1912)), rt_str("({ ", 3)), F->ct_1926), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1926), rt_str(")); *b_ = ", 10)), F->v_1925), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_176((*(P733)rt_nil_check(F->pm_1914)).t)) {
F->args_1912 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->args_1912)), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_1927 = rt_str_copy(f_gexpr_in_591(F->a_1913, (*(P733)rt_nil_check(F->pm_1914)).t, (*(P733)rt_nil_check(F->pm_1914)).c, &F->vt_1916));
f_check_type_220(F->vt_1916, (*(P733)rt_nil_check(F->pm_1914)).t, (*(P721)rt_nil_check(F->e_684)).line);
F->args_1912 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P716)rt_nil_check(F->args_1912)), F->v_1927); b_; }));
}
F->a_1913 = (*(P721)rt_nil_check(F->a_1913)).next;
F->pm_1914 = (*(P733)rt_nil_check(F->pm_1914)).next;
}
if (((F->a_1913 != NULL) || (F->pm_1914 != NULL))) {
f_fail_23((*(P721)rt_nil_check(F->e_684)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check((*(P721)rt_nil_check(F->fn_1909)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_67((*(P721)rt_nil_check(F->e_684)).b), f_list_len_67(F->a_1913)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_686v = (*(P731)rt_nil_check(F->y_1911)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_1911)).cname)), rt_str("(", 1)), (*(P716)rt_nil_check(F->args_1912))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_686) = F->t_686v;
  RT_FPOP();
  return F->result_;
}

static P725 f_requires_689(P731 y_688) {
  struct f_requires_689fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_688 = y_688;
if ((*(P731)rt_nil_check(F->y_688)).reqdone) {
F->result_ = (*(P731)rt_nil_check(F->y_688)).reqs;
goto ret_;
}
(*(P731)rt_nil_check(F->y_688)).reqdone = 1;
if ((((*(P731)rt_nil_check(F->y_688)).decl != NULL) && ((((*(P721)rt_nil_check((*(P731)rt_nil_check(F->y_688)).decl)).kind == (((rt_int)45LL))) || ((*(P721)rt_nil_check((*(P731)rt_nil_check(F->y_688)).decl)).kind == (((rt_int)46LL)))) || ((*(P721)rt_nil_check((*(P731)rt_nil_check(F->y_688)).decl)).kind == (((rt_int)50LL)))))) {
F->imp_1928 = NULL;
F->imp_1928 = (*(P721)rt_nil_check((*(P731)rt_nil_check(F->y_688)).decl)).d;
while ((F->imp_1928 != NULL)) {
f_add_req_692(F->y_688, &(*(P716)rt_nil_check((*(P721)rt_nil_check(F->imp_1928)).name)));
F->imp_1928 = (*(P721)rt_nil_check(F->imp_1928)).next;
}
f_require_calls_695(F->y_688, (*(P721)rt_nil_check((*(P731)rt_nil_check(F->y_688)).decl)).c);
}
F->result_ = (*(P731)rt_nil_check(F->y_688)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_692(P731 y_690, rstr *name_691) {
  struct f_add_req_692fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_690 = y_690;
F->name_691 = name_691;
F->l_1929 = NULL;
if ((!f_seen_name_335((*(P731)rt_nil_check(F->y_690)).reqs, &(*F->name_691)))) {
{ R726 *cell1930 = rt_alloc(sizeof(R726));
(*cell1930).s = NULL;
(*cell1930).next = NULL;
F->l_1929 = cell1930;
}
(*(P725)rt_nil_check(F->l_1929)).s = f_mk_3(&(*F->name_691));
(*(P725)rt_nil_check(F->l_1929)).next = (*(P731)rt_nil_check(F->y_690)).reqs;
(*(P731)rt_nil_check(F->y_690)).reqs = F->l_1929;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_695(P731 y_693, P721 e_694) {
  struct f_require_calls_695fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_693 = y_693;
F->e_694 = e_694;
F->x_1931 = NULL;
F->x_1931 = F->e_694;
while ((F->x_1931 != NULL)) {
if (((((((*(P721)rt_nil_check(F->x_1931)).kind == (((rt_int)45LL))) || ((*(P721)rt_nil_check(F->x_1931)).kind == (((rt_int)46LL)))) || ((*(P721)rt_nil_check(F->x_1931)).kind == (((rt_int)50LL)))) || ((*(P721)rt_nil_check(F->x_1931)).kind == (((rt_int)47LL)))) || ((*(P721)rt_nil_check(F->x_1931)).kind == (((rt_int)51LL))))) {
F->x_1931 = (*(P721)rt_nil_check(F->x_1931)).next;
} else {
F->callee_1932 = NULL;
if ((((((*(P721)rt_nil_check(F->x_1931)).kind == (((rt_int)10LL))) || ((*(P721)rt_nil_check(F->x_1931)).kind == (((rt_int)21LL)))) && ((*(P721)rt_nil_check(F->x_1931)).a != NULL)) && ((*(P721)rt_nil_check((*(P721)rt_nil_check(F->x_1931)).a)).kind == (((rt_int)7LL))))) {
F->callee_1932 = (*(P721)rt_nil_check(F->x_1931)).a;
}
if ((F->callee_1932 != NULL)) {
F->z_1933 = NULL;
F->z_1933 = f_lookup_153(&(*(P716)rt_nil_check((*(P721)rt_nil_check(F->callee_1932)).name)));
if ((((F->z_1933 != NULL) && (F->z_1933 != F->y_693)) && (((*(P731)rt_nil_check(F->z_1933)).kind == (((rt_int)4LL))) || ((*(P731)rt_nil_check(F->z_1933)).kind == (((rt_int)3LL)))))) {
F->l_1934 = NULL;
F->l_1934 = f_requires_689(F->z_1933);
while ((F->l_1934 != NULL)) {
f_add_req_692(F->y_693, &(*(P716)rt_nil_check((*(P725)rt_nil_check(F->l_1934)).s)));
F->l_1934 = (*(P725)rt_nil_check(F->l_1934)).next;
}
}
}
if (((*(P721)rt_nil_check(F->x_1931)).a != NULL)) {
f_require_calls_695(F->y_693, (*(P721)rt_nil_check(F->x_1931)).a);
}
if (((*(P721)rt_nil_check(F->x_1931)).b != NULL)) {
f_require_calls_695(F->y_693, (*(P721)rt_nil_check(F->x_1931)).b);
}
if (((*(P721)rt_nil_check(F->x_1931)).c != NULL)) {
f_require_calls_695(F->y_693, (*(P721)rt_nil_check(F->x_1931)).c);
}
F->x_1931 = (*(P721)rt_nil_check(F->x_1931)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_698(P721 elems_696, rstr *name_697) {
  struct f_declared_in_698fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_696 = elems_696;
F->name_697 = name_697;
F->e_1935 = NULL;
F->e_1935 = F->elems_696;
while ((F->e_1935 != NULL)) {
if (((((*(P721)rt_nil_check(F->e_1935)).kind == (((rt_int)40LL))) || ((*(P721)rt_nil_check(F->e_1935)).kind == (((rt_int)41LL)))) && rt_str_eq((*(P716)rt_nil_check((*(P721)rt_nil_check(F->e_1935)).name)), (*F->name_697)))) {
F->result_ = 1;
goto ret_;
}
F->e_1935 = (*(P721)rt_nil_check(F->e_1935)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_701(P731 y_699, rt_int line_700) {
  struct f_check_requires_701fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_699 = y_699;
F->line_700 = line_700;
F->l_1936 = NULL;
F->l_1936 = f_requires_689(F->y_699);
if ((((*(P731)rt_nil_check(F->y_699)).home == NULL) || ((*(P731)rt_nil_check(F->y_699)).level != g_cur_level_773))) {
goto ret_;
}
while ((F->l_1936 != NULL)) {
F->z_1937 = NULL;
F->z_1937 = f_lookup_153(&(*(P716)rt_nil_check((*(P725)rt_nil_check(F->l_1936)).s)));
if ((f_declared_in_698((*(P731)rt_nil_check(F->y_699)).home, &(*(P716)rt_nil_check((*(P725)rt_nil_check(F->l_1936)).s))) && ((F->z_1937 == NULL) || ((*(P731)rt_nil_check(F->z_1937)).depth < (*(P731)rt_nil_check(F->y_699)).depth)))) {
f_fail_23(F->line_700, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check((*(P731)rt_nil_check(F->y_699)).name)), rt_str(" requires ", 10)), (*(P716)rt_nil_check((*(P725)rt_nil_check(F->l_1936)).s))), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_1936 = (*(P725)rt_nil_check(F->l_1936)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_actual_bounds_705(P727 ft_702, P727 t_703, P723 c_704) {
  struct f_actual_bounds_705fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_702 = ft_702;
F->t_703 = t_703;
F->c_704 = c_704;
if ((!f_scalar_kind_176(F->ft_702))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_188(F->t_703, F->c_704)), rt_str(", ", 2)), f_sub_hi_191(F->t_703, F->c_704));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_712(rstr *name_706, P721 tt_707, P721 args_708, rt_int line_709, int is_stmt_710, P727 *t_711) {
  struct f_builtin_712fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_706 = name_706;
F->tt_707 = tt_707;
F->args_708 = args_708;
F->line_709 = line_709;
F->is_stmt_710 = is_stmt_710;
F->t_711 = t_711;
F->t_711v = *F->t_711;
F->at_1938 = NULL;
F->n_1939 = f_list_len_67(F->args_708);
F->t_711v = g_ty_void_804;
if (((rt_str_eq((*F->name_706), rt_str("POS", 3)) || rt_str_eq((*F->name_706), rt_str("SUCC", 4))) || rt_str_eq((*F->name_706), rt_str("PRED", 4)))) {
F->a_1940 = rt_str_copy(f_gexpr_583(F->args_708, NULL, &F->at_1938));
if (rt_str_eq((*F->name_706), rt_str("POS", 3))) {
if (((*(P727)rt_nil_check(f_base_of_211(F->at_1938))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_711v = g_ty_int_799;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1940), rt_str(") + 1)", 6));
goto ret_;
}
F->t_711v = F->at_1938;
if (((*(P727)rt_nil_check(F->at_1938)).kind == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_706), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1940), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1940), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_706), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1940), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P727)rt_nil_check(f_base_of_211(F->at_1938))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1940), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P727)rt_nil_check(f_base_of_211(F->at_1938))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_706), rt_str("SQRT", 4)) || rt_str_eq((*F->name_706), rt_str("SIN", 3))) || rt_str_eq((*F->name_706), rt_str("COS", 3))) || rt_str_eq((*F->name_706), rt_str("EXP", 3))) || rt_str_eq((*F->name_706), rt_str("LN", 2))) || rt_str_eq((*F->name_706), rt_str("FLOOR", 5)))) {
F->a_1941 = rt_str_copy(f_gexpr_583(F->args_708, g_ty_float_801, &F->at_1938));
F->t_711v = g_ty_float_801;
if (rt_str_eq((*F->name_706), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_1941), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_706)), rt_str("(", 1)), F->a_1941), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("IFLOAT", 6))) {
F->a_1942 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->args_708)).next, g_ty_int_799, &F->at_1938));
F->t_711v = g_ty_float_801;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_1942), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("IFIX", 4))) {
F->a_1943 = rt_str_copy(f_gexpr_583(F->args_708, g_ty_float_801, &F->at_1938));
F->t_711v = g_ty_int_799;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1943), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("FORMAT", 6))) {
F->a_1944 = rt_str_copy(f_gexpr_583(F->args_708, g_ty_float_801, &F->at_1938));
F->n1_1945 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->args_708)).next, g_ty_int_799, &F->at_1938));
F->m1_1946 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check((*(P721)rt_nil_check(F->args_708)).next)).next, g_ty_int_799, &F->at_1938));
F->t_711v = g_ty_string_803;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_1944), rt_str(", ", 2)), F->n1_1945), rt_str(", ", 2)), F->m1_1946), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("ABS", 3))) {
F->a_1947 = rt_str_copy(f_gexpr_583(F->args_708, NULL, &F->at_1938));
F->t_711v = F->at_1938;
if (((*(P727)rt_nil_check(F->at_1938)).kind == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_1947), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_1947), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("CNVT", 4))) {
if ((F->tt_707 == NULL)) {
f_fail_23(F->line_709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_1948 = rt_str_copy(f_gexpr_583(F->args_708, NULL, &F->at_1938));
if ((((*(P721)rt_nil_check(F->tt_707)).kind == (((rt_int)73LL))) && ((*(P727)rt_nil_check(F->at_1938)).kind == (((rt_int)1LL))))) {
F->t_711v = g_ty_string_803;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_1948), rt_str(")", 1));
goto ret_;
} else if ((((*(P721)rt_nil_check(F->tt_707)).kind == (((rt_int)73LL))) && ((*(P727)rt_nil_check(F->at_1938)).kind == (((rt_int)3LL))))) {
F->t_711v = g_ty_string_803;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_1948), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P721)rt_nil_check(F->tt_707)).kind == (((rt_int)73LL))) && ((*(P727)rt_nil_check(F->at_1938)).kind == (((rt_int)2LL))))) {
F->t_711v = g_ty_string_803;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_1948), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P721)rt_nil_check(F->tt_707)).kind == (((rt_int)70LL))) && ((*(P727)rt_nil_check(F->at_1938)).kind == (((rt_int)5LL))))) {
F->t_711v = g_ty_int_799;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_1948), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_706), rt_str("WRITELN", 7))) {
if ((F->n_1939 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_1949 = NULL;
F->last_1949 = F->args_708;
while (((*(P721)rt_nil_check(F->last_1949)).next != NULL)) {
F->last_1949 = (*(P721)rt_nil_check(F->last_1949)).next;
}
{
F->a_1950 = rt_str_copy(f_gexpr_583(F->last_1949, g_ty_string_803, &F->at_1938));
f_check_type_220(F->at_1938, g_ty_string_803, F->line_709);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_1950), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_706), rt_str("WRITE", 5))) {
F->a_1951 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->args_708)).next, NULL, &F->at_1938));
if (((*(P727)rt_nil_check(F->at_1938)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_1951), rt_str(")", 1));
goto ret_;
} else if (((*(P727)rt_nil_check(F->at_1938)).kind == (((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_1951), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_706), rt_str("READLN", 6))) {
F->lv_1952 = NULL;
F->lc_1953 = NULL;
F->last_1955 = NULL;
F->last_1955 = F->args_708;
while (((*(P721)rt_nil_check(F->last_1955)).next != NULL)) {
F->last_1955 = (*(P721)rt_nil_check(F->last_1955)).next;
}
f_lvalue_552(F->last_1955, &F->lv_1952, &F->at_1938, &F->lc_1953, &F->ro_1954);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P716)rt_nil_check(F->lv_1952))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("SIZELN", 6))) {
F->t_711v = g_ty_int_799;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("EOF", 3))) {
F->t_711v = g_ty_bool_800;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_706), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_706), rt_str("SYS_OUT", 7)))) {
F->t_711v = g_ty_file_805;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_706), rt_str("OPEN", 4)) || rt_str_eq((*F->name_706), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_706), rt_str("SEND", 4)) || rt_str_eq((*F->name_706), rt_str("RECEIVE", 7)))) {
F->lv_1956 = NULL;
F->dv_1957 = NULL;
F->lc_1958 = NULL;
F->mt_1960 = NULL;
F->dt_1961 = NULL;
f_lvalue_552(F->args_708, &F->lv_1956, &F->mt_1960, &F->lc_1958, &F->ro_1959);
if (((*(P727)rt_nil_check(F->mt_1960)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_706), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_706), rt_str("RECEIVE", 7))) {
f_lvalue_552((*(P721)rt_nil_check(F->args_708)).next, &F->dv_1957, &F->dt_1961, &F->lc_1958, &F->ro_1959);
f_check_type_220(F->dt_1961, (*(P727)rt_nil_check(F->mt_1960)).elem, F->line_709);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (*(P716)rt_nil_check(F->lv_1956))), rt_str(", &", 3)), (*(P716)rt_nil_check(F->dv_1957))), rt_str(")", 1));
goto ret_;
}
{
F->v_1962 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->args_708)).next, (*(P727)rt_nil_check(F->mt_1960)).elem, &F->at_1938));
f_check_type_220(F->at_1938, (*(P727)rt_nil_check(F->mt_1960)).elem, F->line_709);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_222((*(P727)rt_nil_check(F->mt_1960)).elem)), rt_str(" m_ = ", 6)), F->v_1962), rt_str("; rt_send(", 10)), (*(P716)rt_nil_check(F->lv_1956))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_706), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_706), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_1963 = NULL;
F->lc_1964 = NULL;
F->mt_1966 = NULL;
f_lvalue_552(F->args_708, &F->lv_1963, &F->mt_1966, &F->lc_1964, &F->ro_1965);
if (((*(P727)rt_nil_check(F->mt_1966)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_706), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_711v = g_ty_int_799;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_706))), rt_str("(", 1)), (*(P716)rt_nil_check(F->lv_1963))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_706), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_706), rt_str("COND_RECEIVE", 12)))) {
F->lv_1967 = NULL;
F->dv_1968 = NULL;
F->bv_1969 = NULL;
F->lc_1970 = NULL;
F->mt_1972 = NULL;
F->dt_1973 = NULL;
F->bt_1974 = NULL;
f_lvalue_552(F->args_708, &F->lv_1967, &F->mt_1972, &F->lc_1970, &F->ro_1971);
if (((*(P727)rt_nil_check(F->mt_1972)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_706), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_552((*(P721)rt_nil_check((*(P721)rt_nil_check(F->args_708)).next)).next, &F->bv_1969, &F->bt_1974, &F->lc_1970, &F->ro_1971);
f_check_type_220(F->bt_1974, g_ty_bool_800, F->line_709);
if (rt_str_eq((*F->name_706), rt_str("COND_RECEIVE", 12))) {
f_lvalue_552((*(P721)rt_nil_check(F->args_708)).next, &F->dv_1968, &F->dt_1973, &F->lc_1970, &F->ro_1971);
f_check_type_220(F->dt_1973, (*(P727)rt_nil_check(F->mt_1972)).elem, F->line_709);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->bv_1969)), rt_str(" = rt_cond_receive(", 19)), (*(P716)rt_nil_check(F->lv_1967))), rt_str(", &", 3)), (*(P716)rt_nil_check(F->dv_1968))), rt_str(")", 1));
goto ret_;
}
{
F->v_1975 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->args_708)).next, (*(P727)rt_nil_check(F->mt_1972)).elem, &F->at_1938));
f_check_type_220(F->at_1938, (*(P727)rt_nil_check(F->mt_1972)).elem, F->line_709);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_222((*(P727)rt_nil_check(F->mt_1972)).elem)), rt_str(" m_ = ", 6)), F->v_1975), rt_str("; ", 2)), (*(P716)rt_nil_check(F->bv_1969))), rt_str(" = rt_cond_send(", 16)), (*(P716)rt_nil_check(F->lv_1967))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_706), rt_str("PRIORITY", 8))) {
F->t_711v = g_ty_int_799;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_458(F->args_708)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("SET_PRIORITY", 12))) {
F->v_1976 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->args_708)).next, g_ty_int_799, &F->at_1938));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_458(F->args_708)), rt_str(", ", 2)), F->v_1976), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_458(F->args_708)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("ACTIVE", 6))) {
F->t_711v = g_ty_bool_800;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_458(F->args_708)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("DELAY", 5))) {
F->v_1977 = rt_str_copy(f_gexpr_583(F->args_708, g_ty_int_799, &F->at_1938));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_1977), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("DELAY_UNTIL", 11))) {
F->v_1978 = rt_str_copy(f_gexpr_583(F->args_708, g_ty_int_799, &F->at_1938));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_1978), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_458(F->args_708)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("TIME", 4))) {
F->t_711v = g_ty_int_799;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_706), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_706), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_706), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_706), rt_str("HOURS", 5)))) {
F->t_711v = g_ty_int_799;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_706));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("HALT", 4))) {
F->a_1979 = rt_str_copy(f_gexpr_583(F->args_708, g_ty_int_799, &F->at_1938));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_1979), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_706), rt_str("ME", 2)) && (F->tt_707 != NULL))) {
F->result_ = f_me_high_675(F->tt_707, F->line_709, &F->t_711v);
goto ret_;
} else if ((rt_str_eq((*F->name_706), rt_str("WAITING", 7)) || rt_str_eq((*F->name_706), rt_str("SUSPENDED", 9)))) {
F->t_711v = g_ty_bool_800;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_706))), rt_str("(", 1)), f_act_ref_458(F->args_708)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_706), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_706), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_706), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_706), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_706), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_706), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_706))), rt_str("(", 1)), f_act_ref_458(F->args_708)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("TASK_START", 10))) {
if ((F->n_1939 != ((rt_int)2LL))) {
f_fail_23(F->line_709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_458(F->args_708)), rt_str(", ", 2)), f_act_ref_458((*(P721)rt_nil_check(F->args_708)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_706), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_706), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_706), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_706), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_706), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_706), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((F->n_1939 != ((rt_int)0LL))) {
f_fail_23(F->line_709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_706), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_706))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_680(F->args_708, &(*F->name_706))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_680(F->args_708, &(*F->name_706))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("COND_LOCK", 9))) {
F->bv_1980 = NULL;
F->bc_1981 = NULL;
F->bt_1983 = NULL;
F->l_1984 = rt_str_copy(f_lock_ref_680(F->args_708, &(*F->name_706)));
f_lvalue_552((*(P721)rt_nil_check(F->args_708)).next, &F->bv_1980, &F->bt_1983, &F->bc_1981, &F->ro_1982);
f_check_type_220(F->bt_1983, g_ty_bool_800, F->line_709);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P716)rt_nil_check(F->bv_1980)), rt_str(" = rt_cond_lock(", 16)), F->l_1984), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("EXCESS_LOCKS", 12))) {
F->t_711v = g_ty_int_799;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_680(F->args_708, &(*F->name_706))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("OWNER", 5))) {
F->t_711v = g_ty_act_809;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_680(F->args_708, &(*F->name_706))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("FREE", 4))) {
F->pv_1985 = NULL;
F->pc_1986 = NULL;
F->pt_1988 = NULL;
f_lvalue_552(F->args_708, &F->pv_1985, &F->pt_1988, &F->pc_1986, &F->ro_1987);
if ((((*(P727)rt_nil_check(F->pt_1988)).kind != (((rt_int)8LL))) || F->ro_1987)) {
f_fail_23(F->line_709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_781 = 1;
f_finish_ptr_369(F->pt_1988);
if (f_suppressed_380(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; }))) {
if (f_needs_fin_280((*(P727)rt_nil_check(F->pt_1988)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (*(P716)rt_nil_check(F->pv_1985))), rt_str(") { ", 4)), f_fin_code_283(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P716)rt_nil_check(F->pv_1985))), rt_str(")", 1)); b_; }), (*(P727)rt_nil_check(F->pt_1988)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (*(P716)rt_nil_check(F->pv_1985))), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (*(P716)rt_nil_check(F->pv_1985))), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_280((*(P727)rt_nil_check(F->pt_1988)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (*(P716)rt_nil_check(F->pv_1985))), rt_str("); if (", 7)), (*(P716)rt_nil_check(F->pv_1985))), rt_str(") { ", 4)), f_fin_code_283(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P716)rt_nil_check(F->pv_1985))), rt_str(")", 1)); b_; }), (*(P727)rt_nil_check(F->pt_1988)).target)), rt_str(" } rt_free((void **)&", 21)), (*(P716)rt_nil_check(F->pv_1985))), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (*(P716)rt_nil_check(F->pv_1985))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_706), rt_str("LOW_IO", 6))) {
F->dev_1989 = rt_str_copy(f_gexpr_583(F->args_708, g_ty_int_799, &F->at_1938));
F->cmd_1990 = rt_str_copy(f_gexpr_583((*(P721)rt_nil_check(F->args_708)).next, g_ty_int_799, &F->at_1938));
if ((F->n_1939 == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_1989), rt_str(", ", 2)), F->cmd_1990), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_1991 = NULL;
F->dc_1992 = NULL;
F->dt_1994 = NULL;
f_lvalue_552((*(P721)rt_nil_check((*(P721)rt_nil_check(F->args_708)).next)).next, &F->dv_1991, &F->dt_1994, &F->dc_1992, &F->ro_1993);
f_check_type_220(F->dt_1994, g_ty_int_799, F->line_709);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_1989), rt_str(", ", 2)), F->cmd_1990), rt_str(", &", 3)), (*(P716)rt_nil_check(F->dv_1991))), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_706), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_711) = F->t_711v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_714(P721 units_713) {
  struct f_translate_714fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_713 = units_713;
F->u_1995 = NULL;
F->u_1995 = F->units_713;
while ((F->u_1995 != NULL)) {
if (((*(P721)rt_nil_check(F->u_1995)).next == NULL)) {
{ R748 *cell1996 = rt_alloc(sizeof(R748));
(*cell1996).d = NULL;
(*cell1996).next = NULL;
g_caps_775 = cell1996;
}
(*(P747)rt_nil_check(g_caps_775)).d = F->u_1995;
f_declare_labels_413((*(P721)rt_nil_check(F->u_1995)).c);
f_declare_body_340((*(P721)rt_nil_check(F->u_1995)).c);
f_capsule_body_420((*(P721)rt_nil_check(F->u_1995)).c);
f_await_tasks_409((*(P721)rt_nil_check(F->u_1995)).c);
{
F->l_1997 = NULL;
F->l_1997 = F->units_713;
while ((F->l_1997 != F->u_1995)) {
{
F->w_1998 = rt_str_copy(f_waits_of_405(F->l_1997));
if (((F->w_1998).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1998);
}
}
F->l_1997 = (*(P721)rt_nil_check(F->l_1997)).next;
}
}
f_close_fins_396(NULL);
if (g_uses_findyn_783) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_350(F->u_1995);
}
F->u_1995 = (*(P721)rt_nil_check(F->u_1995)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_715(void) {
  struct f_print_program_715fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_336();
if (g_uses_free_781) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_763);
f_print_buffer_31(g_out_frames_779);
f_print_buffer_31(g_out_helpers_764);
f_print_buffer_31(g_out_protos_765);
f_print_buffer_31(g_out_globals_766);
f_print_buffer_31(g_out_funcs_767);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_780);
f_print_buffer_31(g_out_excs_769);
f_print_buffer_31(g_out_init_768);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R750(R750 *d, R750 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R750 cp_R750(R750 s) {
  R750 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R750(R750 a, R750 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R748(R748 *d, R748 s) {
  d->d = s.d;
  d->next = s.next;
}
static R748 cp_R748(R748 s) {
  R748 d = s;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R748(R748 a, R748 b) {
  return 1 && (a.d == b.d) && (a.next == b.next);
}
static void as_R746(R746 *d, R746 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R746 cp_R746(R746 s) {
  R746 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R746(R746 a, R746 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R744(R744 *d, R744 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R744 cp_R744(R744 s) {
  R744 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R744(R744 a, R744 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R742(R742 *d, R742 s) {
  d->t = s.t;
  d->next = s.next;
}
static R742 cp_R742(R742 s) {
  R742 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R742(R742 a, R742 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R740(R740 *d, R740 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
}
static R740 cp_R740(R740 s) {
  R740 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  return d;
}
static int eq_R740(R740 a, R740 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t);
}
static void as_R738(R738 *d, R738 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R738 cp_R738(R738 s) {
  R738 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R738(R738 a, R738 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A736(A736 *d, A736 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A736 cp_A736(A736 s) {
  A736 d = s; d.p = rt_alloc(sizeof(P731) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A736(A736 a, A736 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R734(R734 *d, R734 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R734 cp_R734(R734 s) {
  R734 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R734(R734 a, R734 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R732(R732 *d, R732 s) {
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
static R732 cp_R732(R732 s) {
  R732 d = s;
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
static int eq_R732(R732 a, R732 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home);
}
static void as_R730(R730 *d, R730 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R730 cp_R730(R730 s) {
  R730 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R730(R730 a, R730 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R728(R728 *d, R728 s) {
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
  d->ndim = s.ndim;
  d->idxs = s.idxs;
}
static R728 cp_R728(R728 s) {
  R728 d = s;
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
  d.ndim = s.ndim;
  d.idxs = s.idxs;
  return d;
}
static int eq_R728(R728 a, R728 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs);
}
static void as_R726(R726 *d, R726 s) {
  d->s = s.s;
  d->next = s.next;
}
static R726 cp_R726(R726 s) {
  R726 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R726(R726 a, R726 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R724(R724 *d, R724 s) {
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
  d->bnds = s.bnds;
}
static R724 cp_R724(R724 s) {
  R724 d = s;
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
  d.bnds = s.bnds;
  return d;
}
static int eq_R724(R724 a, R724 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R722(R722 *d, R722 s) {
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
static R722 cp_R722(R722 s) {
  R722 d = s;
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
static int eq_R722(R722 a, R722 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A720(A720 *d, A720 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A720 cp_A720(A720 s) {
  A720 d = s; d.p = rt_alloc(sizeof(P717) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A720(A720 a, A720 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R718(R718 *d, R718 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R718 cp_R718(R718 s) {
  R718 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R718(R718 a, R718 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_751);
  RT_ROOT(g_ntoks_752);
  RT_ROOT(g_tpos_753);
  RT_ROOT(g_src_line_754);
  RT_ROOT(g_pending_prag_755);
  RT_ROOT(g_table_756);
  RT_ROOT(g_genv_757);
  RT_ROOT(g_all_insts_758);
  RT_ROOT(g_depth_759);
  RT_ROOT(g_scope_stack_760);
  RT_ROOT(g_all_types_761);
  RT_ROOT(g_serial_762);
  RT_ROOT(g_out_types_763);
  RT_ROOT(g_out_helpers_764);
  RT_ROOT(g_out_protos_765);
  RT_ROOT(g_out_globals_766);
  RT_ROOT(g_out_funcs_767);
  RT_ROOT(g_out_init_768);
  RT_ROOT(g_out_excs_769);
  RT_ROOT(g_code_770);
  RT_ROOT(g_fields_buf_771);
  RT_ROOT(g_in_func_772);
  RT_ROOT(g_cur_level_773);
  RT_ROOT(g_fctx_774);
  RT_ROOT(g_caps_775);
  RT_ROOT(g_cap_waits_776);
  RT_ROOT(g_psub_777);
  RT_ROOT(g_st_field_778);
  RT_ROOT(g_out_frames_779);
  RT_ROOT(g_out_roots_780);
  RT_ROOT(g_uses_free_781);
  RT_ROOT(g_fins_782);
  RT_ROOT(g_uses_findyn_783);
  RT_ROOT(g_func_sym_784);
  RT_ROOT(g_func_rc_785);
  RT_ROOT(g_cap_ret_786);
  RT_ROOT(g_cap_rflag_787);
  RT_ROOT(g_ret_frames_788);
  RT_ROOT(g_gdepth_789);
  RT_ROOT(g_suppress_790);
  RT_ROOT(g_cons_ctx_791);
  RT_ROOT(g_exits_792);
  RT_ROOT(g_gotos_793);
  RT_ROOT(g_frames_794);
  RT_ROOT(g_handlers_795);
  RT_ROOT(g_cleanups_796);
  RT_ROOT(g_trial_797);
  RT_ROOT(g_mcopies_798);
  RT_ROOT(g_ty_int_799);
  RT_ROOT(g_ty_bool_800);
  RT_ROOT(g_ty_float_801);
  RT_ROOT(g_ty_ascii_802);
  RT_ROOT(g_ty_string_803);
  RT_ROOT(g_ty_void_804);
  RT_ROOT(g_ty_file_805);
  RT_ROOT(g_ty_nil_806);
  RT_ROOT(g_ty_lock_807);
  RT_ROOT(g_ty_latch_808);
  RT_ROOT(g_ty_act_809);
  RT_ROOT(g_no_cons_810);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_751 = NULL;
g_ntoks_752 = ((rt_int)0LL);
g_tpos_753 = ((rt_int)1LL);
g_src_line_754 = ((rt_int)0LL);
g_pending_prag_755 = NULL;
g_table_756 = NULL;
g_genv_757 = NULL;
g_all_insts_758 = NULL;
g_depth_759 = ((rt_int)0LL);
g_scope_stack_760 = NULL;
g_all_types_761 = NULL;
g_serial_762 = ((rt_int)0LL);
g_out_types_763 = NULL;
g_out_helpers_764 = NULL;
g_out_protos_765 = NULL;
g_out_globals_766 = NULL;
g_out_funcs_767 = NULL;
g_out_init_768 = NULL;
g_out_excs_769 = NULL;
g_code_770 = NULL;
g_fields_buf_771 = NULL;
g_in_func_772 = 0;
g_cur_level_773 = ((rt_int)0LL);
g_fctx_774 = NULL;
g_caps_775 = NULL;
g_cap_waits_776 = NULL;
g_psub_777 = NULL;
g_st_field_778 = NULL;
g_out_frames_779 = NULL;
g_out_roots_780 = NULL;
g_uses_free_781 = 0;
g_fins_782 = NULL;
g_uses_findyn_783 = 0;
g_func_sym_784 = NULL;
g_func_rc_785 = NULL;
g_cap_ret_786 = NULL;
g_cap_rflag_787 = NULL;
g_ret_frames_788 = ((rt_int)0LL);
g_gdepth_789 = ((rt_int)0LL);
g_suppress_790 = NULL;
g_cons_ctx_791 = NULL;
g_exits_792 = NULL;
g_gotos_793 = NULL;
g_frames_794 = ((rt_int)0LL);
g_handlers_795 = NULL;
g_cleanups_796 = NULL;
g_trial_797 = ((rt_int)0LL);
g_mcopies_798 = NULL;
g_ty_int_799 = NULL;
g_ty_bool_800 = NULL;
g_ty_float_801 = NULL;
g_ty_ascii_802 = NULL;
g_ty_string_803 = NULL;
g_ty_void_804 = NULL;
g_ty_file_805 = NULL;
g_ty_nil_806 = NULL;
g_ty_lock_807 = NULL;
g_ty_latch_808 = NULL;
g_ty_act_809 = NULL;
g_no_cons_810 = NULL;
{ A720 *cell1999 = rt_alloc(sizeof(A720));
rt_int pv2000 = ((rt_int)1000000LL);
(*cell1999).lo = ((rt_int)1LL); (*cell1999).hi = pv2000;
(*cell1999).lo2 = (*cell1999).hi2 = 1;
(*cell1999).p = rt_alloc(sizeof(P717) * (size_t)(RT_CNT((*cell1999))) + 1);
for (rt_int i2001 = 0; i2001 < (RT_CNT((*cell1999))); i2001++) {
(*cell1999).p[i2001] = NULL;
}
g_toks_751 = cell1999;
}
{ A736 *cell2002 = rt_alloc(sizeof(A736));
rt_int pv2003 = (((rt_int)4093LL));
(*cell2002).lo = ((rt_int)0LL); (*cell2002).hi = pv2003;
(*cell2002).lo2 = (*cell2002).hi2 = 1;
(*cell2002).p = rt_alloc(sizeof(P731) * (size_t)(RT_CNT((*cell2002))) + 1);
for (rt_int i2004 = 0; i2004 < (RT_CNT((*cell2002))); i2004++) {
(*cell2002).p[i2004] = NULL;
}
g_table_756 = cell2002;
}
g_out_types_763 = f_new_buffer_24();
g_out_helpers_764 = f_new_buffer_24();
g_out_protos_765 = f_new_buffer_24();
g_out_globals_766 = f_new_buffer_24();
g_out_funcs_767 = f_new_buffer_24();
g_out_init_768 = f_new_buffer_24();
g_out_excs_769 = f_new_buffer_24();
g_out_frames_779 = f_new_buffer_24();
g_out_roots_780 = f_new_buffer_24();
g_code_770 = g_out_init_768;
g_no_cons_810 = f_new_cons_174();
g_ty_int_799 = f_new_typ_173((((rt_int)1LL)));
g_ty_bool_800 = f_new_typ_173((((rt_int)2LL)));
g_ty_float_801 = f_new_typ_173((((rt_int)3LL)));
g_ty_string_803 = f_new_typ_173((((rt_int)5LL)));
g_ty_void_804 = f_new_typ_173((((rt_int)9LL)));
g_ty_file_805 = f_new_typ_173((((rt_int)10LL)));
g_ty_nil_806 = f_new_typ_173((((rt_int)11LL)));
g_ty_lock_807 = f_new_typ_173((((rt_int)13LL)));
g_ty_latch_808 = f_new_typ_173((((rt_int)13LL)));
g_ty_act_809 = f_new_typ_173((((rt_int)14LL)));
{ rt_frame xf2005;
if (RT_TRY(xf2005)) {
f_init_ascii_247();
f_read_source_58();
f_translate_714(f_program_149());
f_print_program_715();
RT_POP(xf2005);
} else {
RT_POP(xf2005);
int x2006 = rt_xcur;
if (0 || x2006 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2006);
}
}
}
  rt_main_done();
  return 0;
}
