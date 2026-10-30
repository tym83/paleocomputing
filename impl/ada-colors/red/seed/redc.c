#include "paleo.h"
#include <math.h>
typedef struct Pc809 *P808;
typedef struct R811 R811;
typedef struct R811 *P810;
struct R811 {  rt_int kind; rt_int line; rt_int ival; P808 s; P808 prags;  };
typedef struct Pc813 *P812;
typedef struct A814 A814;
struct A814 { rt_int lo, hi, lo2, hi2; P810 *p; };
typedef struct R816 R816;
typedef struct R816 *P815;
struct R816 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P808 name; P808 tag; P808 prags; P815 labels; P815 a; P815 b; P815 c; P815 d; P815 e; P815 next;  };
typedef struct R818 R818;
typedef struct R818 *P817;
typedef struct R820 R820;
typedef struct R820 *P819;
struct R820 {  P808 s; P819 next;  };
struct R818 {  P808 lo; P808 hi; P808 lo2; P808 hi2; P808 slen; rt_int mlo; rt_int mhi; int hasm; P815 args; int dyn; rt_int lvl; P808 prec; P819 bnds;  };
typedef struct R822 R822;
typedef struct R822 *P821;
typedef struct R824 R824;
typedef struct R824 *P823;
struct R824 {  P808 name; P821 t; P817 c; P815 st; P823 next;  };
typedef struct R826 R826;
typedef struct R826 *P825;
typedef struct R828 R828;
typedef struct R828 *P827;
struct R828 {  P808 name; rt_int mode; P821 t; P817 c; P808 cfield; P827 next;  };
typedef struct Pc830 *P829;
typedef struct A831 A831;
struct A831 { rt_int lo, hi, lo2, hi2; P825 *p; };
typedef struct R833 R833;
typedef struct R833 *P832;
struct R833 {  rt_int depth; P815 imps; int all_imp; P832 next;  };
typedef struct R835 R835;
typedef struct R835 *P834;
struct R835 {  rt_int kind; rt_int i; P808 s; P821 t;  };
struct R826 {  rt_int kind; P808 name; P821 t; P817 c; P808 access; P808 cname; int ro_flag; rt_int mvalue; int hasmv; P815 st; P815 decl; P827 params; P821 result; rt_int depth; rt_int level; int byref; P825 members; P825 mnext; P815 binds; P825 insts; P829 env; P825 chain; P825 stack; P825 owner; P832 gctx; P834 mv; P819 reqs; int reqdone; P815 home; P815 capn;  };
typedef struct R837 R837;
typedef struct R837 *P836;
struct R837 {  P821 t; P836 next;  };
struct R822 {  rt_int kind; P808 name; P815 lits; P821 elem; P821 idx; P821 idx2; P817 elemcons; P815 elemst; P821 under; P815 tparams; P815 ocap; P823 fields; P821 target; P815 decl; P808 cname; int forward; int defined; int helpers; P825 initp; P825 finalp; P825 tpsyms; P825 gen; P825 gbinds; P821 next; rt_int ndim; P836 idxs;  };
typedef struct R839 R839;
typedef struct R839 *P838;
struct R839 {  P819 head; P819 tail;  };
typedef struct R841 R841;
typedef struct R841 *P840;
struct R841 {  P808 match; P808 label; rt_int depth; P840 next;  };
typedef struct R843 R843;
typedef struct R843 *P842;
struct R843 {  P815 d; P842 next; rt_int depth;  };
typedef struct R845 R845;
typedef struct R845 *P844;
struct R845 {  P815 d; P808 w; P844 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P808 result_;
 P808 t_908;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_911;
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
 rstr r_912;
 rt_int i_913;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_917;
 rstr w_918;
 rt_int i_919;
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
 P838 result_;
 P838 b_923;
};
struct f_put_27fr { int dummy;
 P838 b_25;
 rstr *s_26;
 P819 l_925;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P838 b_30;
 P819 l_927;
};
struct f_splice_34fr { int dummy;
 P838 a_32;
 P838 b_33;
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
 P810 t_929;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_931;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_932;
 rt_int k_933;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_937;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_938;
 P808 r_939;
 int more_940;
 rt_int k_941;
 int go_942;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_943;
 rt_int k_944;
 rstr p_945;
 int ok_946;
 int known_947;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_948;
 rt_int j_949;
 rt_int n_950;
 int c_951;
 rstr w_952;
 rt_int k_953;
 rstr w_957;
 rt_int k_958;
 rstr two_962;
};
struct f_read_source_58fr { int dummy;
 rstr line_963;
};
struct f_nn_61fr { int dummy;
 rt_int kind_59;
 rt_int line_60;
 P815 result_;
 P815 x_964;
};
struct f_append_65fr { int dummy;
 P815 *head_62;
 P815 *tail_63;
 P815 x_64;
};
struct f_list_len_67fr { int dummy;
 P815 l_66;
 rt_int result_;
 rt_int n_966;
 P815 p_967;
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
 P808 result_;
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
 P808 result_;
};
struct f_name_node_90fr { int dummy;
 P815 result_;
 P815 x_968;
};
struct f_id_list_91fr { int dummy;
 P815 result_;
 P815 head_969;
 P815 tail_970;
};
struct f_p_subtype_92fr { int dummy;
 P815 result_;
 rt_int line_971;
 P815 x_972;
 rstr w_973;
 P815 head_974;
 P815 tail_975;
 P815 head_976;
 P815 tail_977;
 int more_978;
 P815 names_979;
 P815 st_980;
 P815 cmp_981;
 P815 head_982;
 P815 tail_983;
 int more_984;
 P815 lit_985;
};
struct f_constraint_list_93fr { int dummy;
 P815 result_;
 P815 head_986;
 P815 tail_987;
 int more_988;
 rt_int line_989;
 P815 lo_990;
 P815 r_991;
};
struct f_actual_params_94fr { int dummy;
 P815 result_;
 P815 head_992;
 P815 tail_993;
};
struct f_is_type_word_96fr { int dummy;
 rstr *w_95;
 int result_;
};
struct f_actual_tt_97fr { int dummy;
 P815 result_;
 P815 head_994;
 P815 tail_995;
 int more_996;
};
struct f_binop_102fr { int dummy;
 P808 op_98;
 P815 l_99;
 P815 r_100;
 rt_int line_101;
 P815 result_;
 P815 x_997;
};
struct f_expr_103fr { int dummy;
 P815 result_;
 P815 l_998;
 P808 op_999;
 rt_int line_1000;
};
struct f_expr_and_104fr { int dummy;
 P815 result_;
 P815 l_1001;
 rt_int line_1002;
};
struct f_expr_not_105fr { int dummy;
 P815 result_;
 P815 x_1003;
};
struct f_is_rel_107fr { int dummy;
 rstr *s_106;
 int result_;
};
struct f_expr_rel_108fr { int dummy;
 P815 result_;
 P815 l_1004;
 P808 op_1005;
 rt_int line_1006;
};
struct f_expr_add_109fr { int dummy;
 P815 result_;
 P815 l_1007;
 P808 op_1008;
 rt_int line_1009;
};
struct f_expr_mul_110fr { int dummy;
 P815 result_;
 P815 l_1010;
 P808 op_1011;
 rt_int line_1012;
};
struct f_expr_pow_111fr { int dummy;
 P815 result_;
 P815 l_1013;
 rt_int line_1014;
};
struct f_expr_prefix_112fr { int dummy;
 P815 result_;
 P815 x_1015;
};
struct f_postfix_113fr { int dummy;
 P815 result_;
 P815 p_1016;
 rt_int line_1017;
 P815 x_1018;
 P815 head_1019;
 P815 tail_1020;
 int more_1021;
 P815 lo_1022;
 P815 r_1023;
 P815 x_1024;
 P815 x_1025;
 P815 x_1026;
};
struct f_primary_114fr { int dummy;
 P815 result_;
 rt_int line_1027;
 P815 x_1028;
 rt_int k_1029;
 rstr w_1030;
 P815 head_1031;
 P815 tail_1032;
 int more_1033;
};
struct f_constructor_item_115fr { int dummy;
 P815 result_;
 rt_int line_1034;
 P815 it_1035;
 P815 first_1036;
 P815 keys_1037;
 P815 ktail_1038;
 P815 lab_1039;
 rt_int save_1040;
 P815 more_1041;
 P815 tail2_1042;
 int ok_1043;
 int go_1044;
 P815 l2_1045;
};
struct f_at_body_end_116fr { int dummy;
 int result_;
};
struct f_body_117fr { int dummy;
 P815 result_;
 P815 head_1046;
 P815 tail_1047;
 int stmts_1048;
 P815 after_1049;
 P815 x_1050;
};
struct f_body_element_118fr { int dummy;
 P815 result_;
 P815 x_1051;
 P808 pr_1052;
 P815 p_1053;
};
struct f_declaration_119fr { int dummy;
 P815 result_;
 rt_int line_1054;
 P815 head_1055;
 P815 tail_1056;
 P815 names_1057;
 P815 x_1058;
};
struct f_object_decl_120fr { int dummy;
 P815 result_;
 rt_int line_1059;
 int is_var_1060;
 P815 names_1061;
 P815 st_1062;
 P815 init_1063;
 P815 loc_1064;
 rt_int loc_kind_1065;
 P815 head_1066;
 P815 tail_1067;
 P815 x_1068;
};
struct f_abbrev_decl_121fr { int dummy;
 P815 result_;
 P815 x_1069;
};
struct f_skip_rep_122fr { int dummy;
 rt_int depth_1070;
};
struct f_type_decl_123fr { int dummy;
 P815 result_;
 rt_int line_1071;
 P808 name_1072;
 P815 params_1073;
 P815 x_1074;
 P815 tts_1075;
};
struct f_mode_of_125fr { int dummy;
 rstr *w_124;
 rt_int result_;
};
struct f_formal_params_126fr { int dummy;
 P815 result_;
 P815 head_1076;
 P815 tail_1077;
 int more_1078;
 rt_int mode_1079;
 P815 names_1080;
 P815 ntail_1081;
 P815 st_1082;
 P815 p_1083;
};
struct f_imports_list_128fr { int dummy;
 P815 owner_127;
 int result_;
 P815 head_1084;
 P815 tail_1085;
 int more_1086;
 int ro_1087;
 P815 x_1088;
};
struct f_is_definable_130fr { int dummy;
 rstr *w_129;
 int result_;
};
struct f_definable_name_131fr { int dummy;
 P808 result_;
};
struct f_subprogram_decl_132fr { int dummy;
 P815 result_;
 rt_int line_1089;
 P815 x_1090;
 int is_abn_1091;
 int is_func_1092;
 int dummy_1093;
};
struct f_capsule_decl_133fr { int dummy;
 P815 result_;
 P815 x_1094;
 int dummy_1095;
 P815 head_1096;
 P815 tail_1097;
 int more_1098;
 P815 n_1099;
};
struct f_formal_tt_134fr { int dummy;
 P815 result_;
 P815 head_1100;
 P815 tail_1101;
 int more_1102;
};
struct f_generic_decl_135fr { int dummy;
 P815 result_;
 P815 x_1103;
 P815 head_1104;
 P815 tail_1105;
 int more_1106;
 P815 names_1107;
 rt_int kind_1108;
 P815 st_1109;
 P815 p_1110;
 P808 nm_1111;
 P815 st_1112;
};
struct f_task_decl_136fr { int dummy;
 P815 result_;
 P815 x_1113;
 int dummy_1114;
};
struct f_expose_decl_137fr { int dummy;
 P815 result_;
 P815 x_1115;
 P815 head_1116;
 P815 tail_1117;
 int more_1118;
 P815 n_1119;
 P815 head_1120;
 P815 tail_1121;
 int more_1122;
 P815 n_1123;
 P815 tgt_1124;
};
struct f_is_compound_kw_139fr { int dummy;
 rstr *w_138;
 int result_;
};
struct f_statement_140fr { int dummy;
 P815 result_;
 P815 labels_1125;
 P815 ltail_1126;
 P808 match_1127;
 P815 s_1128;
};
struct f_unlabeled_statement_141fr { int dummy;
 P815 result_;
 rt_int line_1129;
 P815 x_1130;
 P815 head_1131;
 P815 tail_1132;
 P815 invs_1133;
 P815 itail_1134;
 int more_1135;
 P815 target_1136;
};
struct f_arm_145fr { int dummy;
 P815 cond_142;
 P815 b_143;
 rt_int line_144;
 P815 result_;
 P815 x_1137;
};
struct f_if_stmt_146fr { int dummy;
 P815 result_;
 P815 x_1138;
 P815 head_1139;
 P815 tail_1140;
 P815 cond_1141;
 int go_1142;
};
struct f_case_stmt_147fr { int dummy;
 P815 result_;
 P815 x_1143;
 P815 head_1144;
 P815 tail_1145;
 P815 labs_1146;
 P815 ltail_1147;
 int more_1148;
 P815 l_1149;
};
struct f_repeat_stmt_148fr { int dummy;
 P815 result_;
 P815 x_1150;
};
struct f_guard_stmt_149fr { int dummy;
 P815 result_;
 P815 x_1151;
 P815 head_1152;
 P815 tail_1153;
 P815 h_1154;
};
struct f_program_150fr { int dummy;
 P815 result_;
 P815 head_1155;
 P815 tail_1156;
 P808 pr_1157;
 P815 u_1158;
};
struct f_hash_152fr { int dummy;
 rstr *s_151;
 rt_int result_;
 rt_int h_1159;
 rt_int i_1160;
};
struct f_lookup_154fr { int dummy;
 rstr *name_153;
 P825 result_;
 P825 y_1164;
};
struct f_lookup_decl_156fr { int dummy;
 P815 d_155;
 P825 result_;
 P825 y_1165;
};
struct f_define_159fr { int dummy;
 P825 y_157;
 rt_int line_158;
 rt_int h_1166;
 P825 z_1167;
};
struct f_overloadable_161fr { int dummy;
 P825 y_160;
 int result_;
};
struct f_same_tt_164fr { int dummy;
 P815 a_162;
 P815 b_163;
 int result_;
 P815 x_1168;
 P815 y_1169;
};
struct f_same_signature_167fr { int dummy;
 P827 a_165;
 P827 b_166;
 int result_;
 P827 x_1170;
 P827 y_1171;
};
struct f_open_scope_168fr { int dummy;
};
struct f_close_scope_169fr { int dummy;
};
struct f_new_sym_172fr { int dummy;
 rt_int kind_170;
 P808 name_171;
 P825 result_;
 P825 y_1172;
};
struct f_new_typ_174fr { int dummy;
 rt_int kind_173;
 P821 result_;
 P821 t_1174;
};
struct f_new_cons_175fr { int dummy;
 P817 result_;
 P817 c_1176;
};
struct f_scalar_kind_177fr { int dummy;
 P821 t_176;
 int result_;
};
struct f_bound_ctype_179fr { int dummy;
 P821 t_178;
 rstr result_;
};
struct f_cbound_182fr { int dummy;
 P817 c_180;
 rstr *b_181;
 rstr result_;
 P808 p_1178;
 rt_int i_1179;
};
struct f_clo_184fr { int dummy;
 P817 c_183;
 rstr result_;
};
struct f_chi_186fr { int dummy;
 P817 c_185;
 rstr result_;
};
struct f_sub_lo_189fr { int dummy;
 P821 t_187;
 P817 c_188;
 rstr result_;
};
struct f_sub_hi_192fr { int dummy;
 P821 t_190;
 P817 c_191;
 rstr result_;
};
struct f_raw_storage_195fr { int dummy;
 rstr *name_193;
 rstr *ct_194;
 rstr result_;
 rstr g_1183;
 rstr f_1184;
};
struct f_copy_cons_197fr { int dummy;
 P817 c_196;
 P817 result_;
 P817 r_1185;
};
struct f_freeze_200fr { int dummy;
 P817 c_198;
 P821 t_199;
 P817 result_;
 P817 r_1187;
 P808 saved_field_1188;
 rstr ct_1189;
 rstr la_1190;
 rstr lf_1191;
 rstr ha_1192;
 rstr hf_1193;
};
struct f_checked_204fr { int dummy;
 P821 t_201;
 P817 c_202;
 rstr *v_203;
 rstr result_;
};
struct f_same_lits_207fr { int dummy;
 P815 a_205;
 P815 b_206;
 int result_;
 P815 x_1194;
 P815 y_1195;
};
struct f_str_elem_209fr { int dummy;
 P821 t_208;
 P821 result_;
};
struct f_same_212fr { int dummy;
 P821 a_210;
 P821 b_211;
 int result_;
 P836 x_1196;
 P836 y_1197;
 P823 f_1198;
 P823 g_1199;
};
struct f_base_of_214fr { int dummy;
 P821 t_213;
 P821 result_;
};
struct f_base_cons_217fr { int dummy;
 P821 t_215;
 P817 c_216;
 P817 result_;
};
struct f_kind_name_219fr { int dummy;
 P821 t_218;
 rstr result_;
};
struct f_check_type_223fr { int dummy;
 P821 got_220;
 P821 want_221;
 rt_int line_222;
};
struct f_ctype_225fr { int dummy;
 P821 t_224;
 rstr result_;
};
struct f_struct_body_227fr { int dummy;
 P821 t_226;
 rstr result_;
};
struct f_field_decls_229fr { int dummy;
 P821 t_228;
 rstr result_;
 P823 f_1202;
 P808 s_1203;
};
struct f_declare_ctype_231fr { int dummy;
 P821 t_230;
 P821 u_1204;
 P815 p_1205;
 P808 fs_1206;
 rstr sn_1207;
 P817 pc_1208;
 P821 target_1209;
 P815 p_1210;
 P808 fs_1211;
};
struct f_dim_lo_233fr { int dummy;
 rt_int k_232;
 rstr result_;
};
struct f_dim_hi_235fr { int dummy;
 rt_int k_234;
 rstr result_;
};
struct f_more_dims_237fr { int dummy;
 P821 t_236;
 rstr result_;
 P808 r_1212;
 rt_int k_1213;
};
struct f_acnt_240fr { int dummy;
 P821 t_238;
 rstr *base_239;
 rstr result_;
 P808 r_1217;
 rt_int k_1218;
};
struct f_cons_lo_243fr { int dummy;
 P817 c_241;
 rt_int k_242;
 P808 result_;
 P819 l_1222;
 rt_int i_1223;
};
struct f_cons_hi_246fr { int dummy;
 P817 c_244;
 rt_int k_245;
 P808 result_;
 P819 l_1227;
 rt_int i_1228;
};
struct f_idx_type_249fr { int dummy;
 P821 t_247;
 rt_int k_248;
 P821 result_;
 P836 l_1232;
 rt_int i_1233;
};
struct f_init_ascii_250fr { int dummy;
 P815 head_1237;
 P815 tail_1238;
 rt_int start_1239;
 rt_int i_1240;
 P815 lit_1244;
 P815 h2_1245;
 P815 t2_1246;
 P815 l1_1247;
 P815 l2_1248;
 P815 l3_1249;
};
struct f_lit_index_253fr { int dummy;
 P815 lits_251;
 rstr *name_252;
 rt_int result_;
 rt_int i_1250;
 P815 l_1251;
};
struct f_resolve_subtype_256fr { int dummy;
 P815 st_254;
 P817 *c_255;
 P817 c_255v;
 P821 result_;
 P821 t_1252;
 int ok_1253;
 P821 dummy_1254;
 P821 et_1256;
 P817 ec_1257;
 P821 et_1258;
 P815 ix_1259;
 rt_int k_1260;
 P836 tail_1261;
 P819 btail_1262;
 P817 ic_1263;
 P821 it_1264;
 P808 lo_1265;
 P808 hi_1266;
 P836 tl_1267;
 P819 l1_1269;
 P819 l2_1270;
 P817 ec_1273;
 P815 comp_1274;
 P823 tail_1275;
 P817 cc_1276;
 P823 f_1277;
 P815 lits_1279;
 P815 ltail_1280;
 P823 f_1281;
 P815 l_1282;
 P815 gt_1283;
 P817 ec_1284;
 P808 base_1285;
};
struct f_float_lit_258fr { int dummy;
 P815 e_257;
 int result_;
};
struct f_tag_constraint_262fr { int dummy;
 P821 t_259;
 P815 e_260;
 P817 c_261;
 P821 dummy_1286;
};
struct f_named_subtype_265fr { int dummy;
 P815 st_263;
 P817 *c_264;
 P817 c_264v;
 P821 result_;
 P821 t_1287;
 P825 y_1288;
 rstr name_1289;
};
struct f_invoke_abbrev_269fr { int dummy;
 P825 y_266;
 P815 st_267;
 P817 *c_268;
 P817 c_268v;
 P821 result_;
 P815 p_1290;
 P815 a_1291;
 P821 t_1292;
 P825 z_1293;
 P817 pc_1294;
 P821 at_1295;
 int ok_1296;
};
struct f_apply_constraint_274fr { int dummy;
 P821 t_270;
 P815 args_271;
 P817 c_272;
 rt_int line_273;
 P821 dummy_1297;
 int ok_1298;
};
struct f_value_subtype_278fr { int dummy;
 P815 e_275;
 P817 *c_276;
 P817 c_276v;
 P808 *base_277;
 P808 base_277v;
 P821 result_;
 P821 t_1299;
 P817 c0_1300;
 int ro_1301;
 rt_int k_1302;
 rstr lo_1306;
 rstr hi_1307;
 P819 l1_1308;
 P819 l2_1309;
 P815 p_1312;
 P815 head_1313;
 P815 tail_1314;
 P815 sel_1315;
};
struct f_reverse_pairs_280fr { int dummy;
 P819 l_279;
 P819 result_;
 P819 r_1316;
 P819 p_1317;
 P819 a_1318;
 P819 b_1319;
};
struct f_inquiry_283fr { int dummy;
 P815 st_281;
 P817 *c_282;
 P817 c_282v;
 P821 result_;
 P808 base_1320;
 P821 t_1321;
 rstr name_1322;
 P815 sub_1323;
 P817 c2_1324;
 rt_int k_1325;
 int ok_1326;
 P817 ac_1327;
};
struct f_as_subtype_285fr { int dummy;
 P815 e_284;
 P815 result_;
 P815 st_1328;
 rstr name_1329;
 P825 y_1330;
};
struct f_tt_subtype_290fr { int dummy;
 P808 name_286;
 P815 tt_287;
 P815 args_288;
 rt_int line_289;
 P815 result_;
 P815 st_1331;
};
struct f_type_name_292fr { int dummy;
 rstr *name_291;
 int result_;
 P825 y_1332;
};
struct f_empty_set_294fr { int dummy;
 P821 t_293;
 rstr result_;
};
struct f_opened_296fr { int dummy;
 P821 t_295;
 int result_;
 P842 c_1333;
};
struct f_replace_all_300fr { int dummy;
 rstr *s_297;
 rstr *pat_298;
 rstr *r_299;
 rstr result_;
 rt_int i_1334;
};
struct f_subst_302fr { int dummy;
 rstr *s_301;
 rstr result_;
 P819 l_1335;
 P808 r_1336;
};
struct f_new_type_306fr { int dummy;
 P825 y_303;
 P815 st_304;
 P817 *c_305;
 P817 c_305v;
 P821 result_;
 P815 d_1337;
 P815 p_1338;
 P817 uc_1339;
 P825 z_1340;
 P817 zc_1341;
};
struct f_init_storage_310fr { int dummy;
 rstr *lval_307;
 P821 t_308;
 P817 c_309;
};
struct f_init_call_313fr { int dummy;
 P825 y_311;
 rstr *lval_312;
 rstr result_;
 P808 link_1342;
 rt_int i_1343;
};
struct f_needs_fin_315fr { int dummy;
 P821 t_314;
 int result_;
 P823 f_1347;
};
struct f_fin_code_318fr { int dummy;
 rstr *lval_316;
 P821 t_317;
 rstr result_;
 P808 r_1348;
 rstr i_1349;
 P823 f_1350;
 P823 f_1351;
 rt_int i_1352;
};
struct f_tparam_type_321fr { int dummy;
 P821 t_319;
 rstr *name_320;
 P821 result_;
 P825 z_1353;
};
struct f_make_storage_325fr { int dummy;
 rstr *lval_322;
 P821 t_323;
 P817 c_324;
 P815 p_1354;
 P815 a_1355;
 P817 uc_1356;
 P821 ut_1357;
 P821 at_1358;
 P821 pt_1359;
 rstr v_1360;
 P819 saved_1361;
 P819 l1_1362;
 P819 l2_1363;
 rt_int k_1366;
 rstr i_1370;
 P823 f_1371;
 P823 f_1372;
 rt_int i_1373;
};
struct f_uninit_value_327fr { int dummy;
 P821 t_326;
 rstr result_;
};
struct f_init_chk_330fr { int dummy;
 P821 t_328;
 rstr *v_329;
 rstr result_;
 P821 b_1377;
};
struct f_manifest_333fr { int dummy;
 P815 e_331;
 int *ok_332;
 int ok_332v;
 rt_int result_;
 P834 v_1378;
};
struct f_mk_mval_336fr { int dummy;
 rt_int kind_334;
 rt_int i_335;
 P834 result_;
 P834 v_1379;
};
struct f_ipow_339fr { int dummy;
 rt_int a_337;
 rt_int b_338;
 rt_int result_;
 rt_int r_1381;
 rt_int i_1382;
};
struct f_meval_342fr { int dummy;
 P815 e_340;
 int *ok_341;
 int ok_341v;
 P834 result_;
 P834 a_1386;
 P834 b_1387;
 int ok2_1388;
 P808 op_1389;
 P825 y_1390;
 P834 r_1391;
};
struct f_bool_text_344fr { int dummy;
 int b_343;
 rstr result_;
};
struct f_bool_i_346fr { int dummy;
 int b_345;
 rt_int result_;
};
struct f_mstr_348fr { int dummy;
 P834 v_347;
 rstr result_;
};
struct f_ascii_char_350fr { int dummy;
 rt_int i_349;
 int result_;
 rstr printable_1392;
};
struct f_user_defined_352fr { int dummy;
 rstr *op_351;
 int result_;
 P825 y_1393;
};
struct f_mcopy_354fr { int dummy;
 P821 t_353;
 rstr result_;
 rstr ct_1394;
 rstr name_1395;
 P819 l_1396;
};
struct f_composite_356fr { int dummy;
 P821 t_355;
 int result_;
};
struct f_assign_code_361fr { int dummy;
 rstr *lval_357;
 P821 t_358;
 rstr *v_359;
 P817 c_360;
 rstr result_;
};
struct f_copy_code_364fr { int dummy;
 P821 t_362;
 rstr *v_363;
 rstr result_;
};
struct f_eq_code_368fr { int dummy;
 P821 t_365;
 rstr *a_366;
 rstr *b_367;
 rstr result_;
};
struct f_elem_assign_372fr { int dummy;
 rstr *lval_369;
 P821 t_370;
 rstr *v_371;
 rstr result_;
};
struct f_seen_name_375fr { int dummy;
 P819 l_373;
 rstr *s_374;
 int result_;
 P819 p_1398;
};
struct f_emit_helpers_376fr { int dummy;
 P821 order_1399;
 P821 t_1400;
 P819 done_1401;
 P819 l_1402;
 rstr c_1403;
};
struct f_helper_bodies_378fr { int dummy;
 P821 t_377;
 rstr c_1405;
 P838 b_1406;
 P821 e_1407;
 P808 sizes_1408;
 P808 bounds_1409;
 rt_int k_1410;
 rstr l_1414;
 rstr h_1415;
 P819 saved_1416;
 P815 p_1417;
 P819 l1_1418;
 P819 l2_1419;
 P823 f_1422;
 rt_int i_1423;
 P808 cases_as_1424;
 P808 cases_cp_1425;
 P808 cases_eq_1426;
 rstr fn_1427;
 P823 f_1428;
 P808 conds_1429;
 rstr fn_1430;
 rstr fn_1431;
};
struct f_declare_body_380fr { int dummy;
 P815 elems_379;
 P815 e_1432;
 P825 y_1433;
 P825 y_1434;
 P825 y_1435;
 P821 t_1436;
 P825 y_1437;
 P825 y_1438;
 P825 g_1439;
 P829 snap_1440;
 rt_int i_1444;
 P825 g_1448;
 P825 y_1449;
};
struct f_manifest_const_382fr { int dummy;
 P815 d_381;
 int ok_1450;
 P834 v_1451;
 P825 y_1452;
 P821 t_1453;
 P808 ctext_1454;
 P838 saved_1455;
};
struct f_exported_386fr { int dummy;
 P815 d_383;
 rstr *name_384;
 int *ro_385;
 int ro_385v;
 int result_;
 P815 p_1458;
};
struct f_copy_sym_388fr { int dummy;
 P825 y_387;
 P825 result_;
 P825 z_1459;
};
struct f_gen_capsule_390fr { int dummy;
 P815 d_389;
 P825 y_1461;
 P808 saved_1462;
};
struct f_capsule_params_394fr { int dummy;
 P815 d_391;
 P815 args_392;
 rt_int line_393;
 P815 p_1463;
 P815 a_1464;
 P821 t_1465;
 P821 vt_1466;
 P817 c_1467;
 P808 lv_1468;
 P817 lc_1469;
 int ro_1470;
 P825 y_1471;
 rstr f_1472;
 rstr g_1473;
 P825 y_1474;
 rstr v_1475;
 rstr access_1476;
};
struct f_elaborate_capsule_399fr { int dummy;
 P815 d_395;
 P825 y_396;
 P815 args_397;
 P815 owner_398;
 P842 cr_1477;
 P832 ctx_1478;
 P840 saved_gotos_1479;
 P825 m_1480;
 P815 p_1481;
 int ro_1482;
 P844 w_1485;
 P825 z_1487;
};
struct f_exports_op_402fr { int dummy;
 P815 d_400;
 rstr *op_401;
 int result_;
 P815 p_1488;
};
struct f_renamed_405fr { int dummy;
 P815 d_403;
 P825 z_404;
 P808 result_;
 P815 r_1489;
};
struct f_gen_expose_407fr { int dummy;
 P815 d_406;
 P825 y_1490;
 P825 m_1491;
 P815 p_1492;
 P815 r_1493;
 P825 inst_1494;
 int found_1495;
 P825 z_1496;
 int found_1497;
 P825 z_1498;
};
struct f_finish_ptr_409fr { int dummy;
 P821 t_408;
 P815 d_1499;
 P815 p_1500;
 P817 c_1501;
 rstr dummy_1502;
 rt_int pass_1503;
 P825 y_1507;
 P817 pc_1508;
};
struct f_ptr_args_411fr { int dummy;
 P817 c_410;
 P815 result_;
};
struct f_bind_ptr_params_416fr { int dummy;
 P815 formals_412;
 P815 actuals_413;
 rstr *cell_414;
 rt_int line_415;
 P815 p_1509;
 P815 a_1510;
 P821 vt_1511;
 P817 pc_1512;
 P825 y_1513;
 rstr v_1514;
 rstr pv_1515;
};
struct f_alloc_cell_421fr { int dummy;
 P815 s_417;
 rstr *lv_418;
 P821 t_419;
 P817 c_420;
 P815 d_1516;
 P817 tc_1517;
 P821 vt_1518;
 rstr pt_1519;
 rstr cell_1520;
 rstr fn_1521;
 rstr v_1522;
};
struct f_freeze_args_425fr { int dummy;
 P817 c_422;
 P821 t_423;
 rt_int line_424;
 P817 result_;
 P817 r_1523;
 P815 p_1524;
 P815 a_1525;
 P815 head_1526;
 P815 tail_1527;
 P808 saved_1528;
 P817 pc_1529;
 P821 vt_1530;
 P821 pt_1531;
 rstr nm_1532;
 P825 y_1533;
 P815 n_1534;
 rstr v_1535;
 rstr access_1536;
};
struct f_ptr_subtype_check_429fr { int dummy;
 P821 t_426;
 P817 c_427;
 P815 src_428;
 P808 lv_1537;
 P821 st_1538;
 P817 sc_1539;
 int ro_1540;
 P808 cond_1541;
 P815 a_1542;
 P815 b_1543;
 P821 at_1544;
 P821 bt_1545;
 rstr x_1546;
 rstr y_1547;
};
struct f_normal_function_432fr { int dummy;
 P815 d_430;
 P825 y_431;
 P827 p_1548;
 P815 imp_1549;
 int ro_1550;
 P825 z_1551;
};
struct f_declare_subprogram_434fr { int dummy;
 P815 d_433;
};
struct f_build_subprogram_436fr { int dummy;
 P815 d_435;
 P825 result_;
 P825 y_1552;
 P815 p_1553;
 P827 tail_1554;
 P827 pm_1555;
 P817 rc_1557;
 P827 pm_1558;
 P838 saved_1559;
 P825 z_1560;
};
struct f_has_pragmat_439fr { int dummy;
 P808 pr_437;
 rstr *p_438;
 int result_;
 rt_int i_1561;
};
struct f_suppressing_441fr { int dummy;
 P808 pr_440;
 P808 result_;
 P808 r_1565;
 rt_int i_1566;
 rt_int j_1567;
 rt_int k_1568;
};
struct f_suppressed_443fr { int dummy;
 rstr *x_442;
 int result_;
 rstr w_1569;
 rt_int i_1570;
};
struct f_element_445fr { int dummy;
 P815 e_444;
 P808 saved_1574;
};
struct f_element1_447fr { int dummy;
 P815 e_446;
 rt_int k_1575;
 P825 g_1576;
 rt_int i_1580;
 P821 t_1584;
 rstr c_1585;
};
struct f_storage_450fr { int dummy;
 rstr *name_448;
 P821 t_449;
 rstr result_;
 rstr g_1586;
 rstr f_1587;
};
struct f_bind_453fr { int dummy;
 P825 y_451;
 rstr *access_452;
};
struct f_var_decl_455fr { int dummy;
 P815 d_454;
 P817 c_1588;
 P821 t_1589;
 P825 y_1590;
 rstr access_1591;
 P821 it_1592;
 rstr n_1593;
 P821 vt_1594;
 rstr v_1595;
};
struct f_open_fin_457fr { int dummy;
 rstr *fc_456;
 rstr f_1596;
 P819 l_1597;
};
struct f_close_fins_459fr { int dummy;
 P819 saved_458;
};
struct f_const_decl_461fr { int dummy;
 P815 d_460;
 P817 c_1599;
 P821 t_1600;
 P821 vt_1601;
 P825 y_1602;
 int ok_1603;
 rstr v_1604;
 rstr access_1605;
};
struct f_subprogram_463fr { int dummy;
 P815 d_462;
};
struct f_gen_subprogram_466fr { int dummy;
 P815 d_464;
 P825 y_465;
 P838 saved_code_1606;
 P838 saved_fields_1607;
 int saved_in_1608;
 P825 saved_sym_1609;
 P840 saved_exits_1610;
 P840 saved_gotos_1611;
 rt_int saved_frames_1612;
 P808 args_1613;
 P827 pm_1614;
 P819 saved_handlers_1615;
 P819 saved_cleanups_1616;
 P832 ctx_1617;
 P808 head_1618;
 P808 frame_1619;
 P808 parent_1620;
 P808 copy_back_1621;
 P808 pfin_1622;
 P819 saved_fins_1623;
 P817 saved_rc_1624;
 P808 saved_ret_1625;
 P808 saved_rflag_1626;
 P815 pn_1627;
 P808 nonrec_end_1628;
 int has_pfin_1629;
 rstr ct_1631;
 rstr f_1632;
 P825 p_1633;
 P817 pc_1634;
 P817 ac_1635;
 P817 fc_1636;
 P821 ft_1637;
 rstr bt_1638;
 P817 rc_1639;
 P821 rt_1640;
 rstr g_1641;
 P808 leave_1642;
};
struct f_waits_of_468fr { int dummy;
 P815 d_467;
 rstr result_;
 P844 w_1643;
};
struct f_task_waits_470fr { int dummy;
 P815 elems_469;
 rstr result_;
 P815 e_1644;
 P808 r_1645;
};
struct f_await_tasks_472fr { int dummy;
 P815 elems_471;
 rstr w_1646;
};
struct f_capsule_elements_474fr { int dummy;
 P815 elems_473;
 P815 e_1647;
};
struct f_declare_labels_476fr { int dummy;
 P815 elems_475;
 P815 e_1648;
 P815 l_1649;
 P840 x_1650;
};
struct f_start_labels_477fr { int dummy;
 P840 x_1652;
};
struct f_goto_label_479fr { int dummy;
 rstr *name_478;
 P840 result_;
 P840 x_1653;
};
struct f_has_return_481fr { int dummy;
 P815 e_480;
 int result_;
 P815 x_1654;
};
struct f_capsule_body_483fr { int dummy;
 P815 elems_482;
 P808 saved_ret_1655;
 P808 saved_flag_1656;
 rt_int saved_frames_1657;
 P815 e_1658;
 int stmt_1659;
};
struct f_body_elements_485fr { int dummy;
 P815 elems_484;
};
struct f_gen_body_487fr { int dummy;
 P815 elems_486;
 P819 saved_1660;
 P840 saved_gotos_1661;
};
struct f_pop_frames_489fr { int dummy;
 rt_int upto_488;
 rt_int i_1662;
 P819 c_1663;
};
struct f_push_cleanup_491fr { int dummy;
 rstr *s_490;
 P819 c_1664;
};
struct f_pop_cleanup_492fr { int dummy;
};
struct f_gen_statement_494fr { int dummy;
 P815 s_493;
 P808 label_1666;
 P815 gl_1667;
 P840 x_1668;
 P840 x_1671;
};
struct f_st_assign_496fr { int dummy;
 P815 s_495;
 P808 lv_1672;
 P821 t_1673;
 P821 vt_1674;
 P817 c_1675;
 int ro_1676;
 rstr lo_1677;
 rstr hi_1678;
 rstr v_1679;
 rstr lo_1680;
 rstr hi_1681;
 rstr v_1682;
 rstr v_1683;
};
struct f_st_call_498fr { int dummy;
 P815 s_497;
 P815 c_1684;
 P821 t_1685;
 P815 x_1686;
};
struct f_st_if_500fr { int dummy;
 P815 s_499;
 P815 a_1687;
 int first_1688;
 P821 t_1689;
 int taken_1690;
 int ok_1691;
 P834 mv_1692;
 rstr c_1693;
};
struct f_st_case_502fr { int dummy;
 P815 s_501;
 P821 st_1694;
 P821 vt_1695;
 int first_1696;
 P815 a_1697;
 rstr sel_1698;
 rstr tmp_1699;
 P815 lab_1700;
 P808 conds_1701;
 rstr v_1702;
 rstr lo_1703;
 rstr hi_1704;
};
struct f_st_repeat_504fr { int dummy;
 P815 s_503;
 P821 t_1705;
 P817 c_1706;
 rstr cond_1707;
 rstr access_1708;
 rstr lov_1709;
 rstr hiv_1710;
 rstr it_1711;
 P825 y_1712;
};
struct f_st_exit_506fr { int dummy;
 P815 s_505;
 P840 x_1713;
};
struct f_st_return_508fr { int dummy;
 P815 s_507;
 P821 vt_1714;
 rstr v_1715;
};
struct f_result_checked_512fr { int dummy;
 P821 t_509;
 P817 c_510;
 rstr *v_511;
 rstr result_;
};
struct f_exc_id_515fr { int dummy;
 rstr *name_513;
 rt_int line_514;
 rstr result_;
 P825 y_1716;
};
struct f_st_guard_517fr { int dummy;
 P815 s_516;
 P815 h_1717;
 int first_1718;
 P819 hv_1719;
 rstr f_1720;
 rstr x_1721;
 P815 n_1723;
 P808 conds_1724;
};
struct f_st_alloc_519fr { int dummy;
 P815 s_518;
 P808 lv_1725;
 P821 t_1726;
 P821 target_1727;
 P821 vt_1728;
 P817 c_1729;
 P817 tc_1730;
 int ro_1731;
 P815 d_1732;
 P815 p_1733;
 P815 a_1734;
 rstr tcn_1735;
 rstr cell_1736;
 rstr fn_1737;
 rstr v_1738;
};
struct f_act_ref_521fr { int dummy;
 P815 e_520;
 rstr result_;
 P808 lv_1739;
 P821 t_1740;
 P817 c_1741;
 int ro_1742;
 rstr v_1743;
};
struct f_st_create_523fr { int dummy;
 P815 s_522;
 P825 y_1744;
 P827 pm_1745;
 P815 a_1746;
 P808 lv_1747;
 P821 lt_1748;
 P821 vt_1749;
 P817 lc_1750;
 int ro_1751;
 P821 at_1752;
 P817 ac_1753;
 int aro_1754;
 P808 act_1755;
 rstr nf_1756;
 P808 link_1757;
 rt_int i_1758;
 rstr v_1762;
};
struct f_hidden_var_527fr { int dummy;
 rstr *name_524;
 P821 t_525;
 rstr *place_526;
 P825 y_1763;
};
struct f_user_create_533fr { int dummy;
 P815 s_528;
 P825 y_529;
 rstr *uv_530;
 P821 ut_531;
 rstr *nf_532;
 P821 t_1764;
 P838 saved_1765;
 P838 hook_1766;
 P815 un_1767;
 rstr hn_1768;
 rstr aa_1769;
 rstr uname_1770;
 rstr aname_1771;
 P815 start_1772;
 P815 an_1773;
};
struct f_wait_alt_538fr { int dummy;
 P815 inv_534;
 rstr *arr_535;
 rt_int i_536;
 int mixed_537;
 rstr result_;
 P808 lv_1774;
 P821 t_1775;
 P821 vt_1776;
 P817 c_1777;
 int ro_1778;
 P815 fn_1779;
 P815 args_1780;
 rstr slot_1781;
 P808 dv_1782;
 P821 dt_1783;
 rstr tmp_1784;
 rstr v_1785;
 rstr v_1786;
};
struct f_builtin_wait_540fr { int dummy;
 P815 inv_539;
 int result_;
 P808 lv_1787;
 P821 t_1788;
 P817 c_1789;
 int ro_1790;
 P838 saved_1791;
 int ok_1792;
};
struct f_wait_op_545fr { int dummy;
 P815 inv_541;
 rstr *op_542;
 rstr *q_543;
 int is_stmt_544;
 rstr result_;
 P815 x_1795;
 P815 f_1796;
 P815 qn_1797;
 P821 t_1798;
 rstr r_1799;
};
struct f_user_wait_550fr { int dummy;
 P815 s_546;
 rstr *arr_547;
 rstr *w_548;
 rt_int n_549;
 P815 a_1800;
 rt_int i_1801;
 P808 tests_1802;
 P808 revokes_1803;
 P815 inv_1804;
 P815 st_1805;
 P817 c_1806;
 P821 qt_1807;
 rstr qname_1808;
 P825 y_1809;
 rstr access_1810;
};
struct f_st_wait_552fr { int dummy;
 P815 s_551;
 P815 a_1811;
 rt_int n_1812;
 int first_1813;
 P838 inits_1814;
 int user_1815;
 rstr arr_1816;
 rstr w_1817;
 P815 inv_1818;
 P815 inv_1819;
 P808 conds_1820;
 rt_int i_1821;
};
struct f_call_node_556fr { int dummy;
 rstr *name_553;
 P815 arg_554;
 rt_int line_555;
 P815 result_;
 P815 x_1825;
 P815 f_1826;
};
struct f_user_region_558fr { int dummy;
 P815 s_557;
 P821 t_1827;
 rstr f_1828;
 rstr lock_1829;
 rstr unlock_1830;
};
struct f_st_region_560fr { int dummy;
 P815 s_559;
 P808 lv_1831;
 P821 t_1832;
 P817 c_1833;
 int ro_1834;
 rstr lk_1835;
 rstr f_1836;
};
struct f_gparam_563fr { int dummy;
 P815 g_561;
 rstr *name_562;
 P815 result_;
 P815 p_1837;
};
struct f_bind_sym_565fr { int dummy;
 P815 p_564;
 P825 result_;
 P825 y_1838;
};
struct f_same_binds_568fr { int dummy;
 P825 a_566;
 P825 b_567;
 int result_;
 P825 x_1839;
 P825 y_1840;
};
struct f_same_binding_571fr { int dummy;
 P825 a_569;
 P825 b_570;
 int result_;
};
struct f_tt_binds_576fr { int dummy;
 P815 gd_572;
 P815 formals_573;
 P815 actuals_574;
 rt_int line_575;
 P825 result_;
 P815 f_1841;
 P815 a_1842;
 P825 binds_1843;
 P817 c_1844;
 P821 at_1845;
 P815 p_1846;
 P825 b_1847;
 P815 st_1848;
 int ok_1849;
};
struct f_generic_use_578fr { int dummy;
 P815 st_577;
 int result_;
};
struct f_infer_from_583fr { int dummy;
 P815 gd_579;
 P815 pat_580;
 P821 t_581;
 P825 known_582;
 P825 result_;
 P825 binds_1850;
 P815 e_1851;
 P815 tp_1852;
 P808 nm_1853;
 P825 q_1854;
 int have_1855;
 P825 g_1856;
 P825 b_1857;
};
struct f_instantiate_type_589fr { int dummy;
 P825 g_584;
 P815 tt_585;
 P815 args_586;
 P817 *c_587;
 P817 c_587v;
 rt_int line_588;
 P821 result_;
 P815 gd_1858;
 P815 pat_1859;
 P825 binds_1860;
 P825 inst_1861;
 P821 t_1862;
 P842 saved_caps_1863;
 P829 saved_env_1864;
 rt_int saved_gdepth_1865;
 P825 b_1866;
 P825 y_1867;
 P817 yc_1868;
};
struct f_instantiate_594fr { int dummy;
 P825 g_590;
 P815 tt_591;
 P815 args_592;
 rt_int line_593;
 P825 result_;
 P815 gd_1870;
 P815 pat_1871;
 P825 binds_1872;
 P815 f_1873;
 P815 a_1874;
 P815 fp_1875;
 P825 inst_1876;
 P821 at_1877;
 P817 c_1878;
 P832 saved_fctx_1879;
 int saved_in_1880;
 rt_int saved_level_1881;
 P825 saved_sym_1882;
 P838 saved_code_1883;
 P829 saved_env_1884;
 rt_int saved_gdepth_1885;
 rstr v_1886;
 int known_1887;
 P825 q_1888;
 P825 b_1889;
 rstr v_1890;
 P825 b_1891;
};
struct f_access_of_596fr { int dummy;
 P825 y_595;
 rstr result_;
 P808 p_1892;
 rt_int i_1893;
};
struct f_import_of_599fr { int dummy;
 P815 l_597;
 rstr *name_598;
 P815 result_;
 P815 p_1897;
};
struct f_check_import_602fr { int dummy;
 P825 y_600;
 rt_int line_601;
 int result_;
 P832 c_1898;
 int ro_1899;
 P815 imp_1900;
};
struct f_c_ident_604fr { int dummy;
 rstr *s_603;
 rstr result_;
};
struct f_cell_deref_607fr { int dummy;
 P821 t_605;
 rstr *p_606;
 rstr result_;
};
struct f_deref_610fr { int dummy;
 rstr *base_608;
 P821 t_609;
 rstr result_;
};
struct f_is_lvalue_612fr { int dummy;
 P815 e_611;
 int result_;
 P825 y_1901;
};
struct f_lvalue_618fr { int dummy;
 P815 e_613;
 P808 *code_614;
 P808 code_614v;
 P821 *t_615;
 P821 t_615v;
 P817 *c_616;
 P817 c_616v;
 int *ro_617;
 int ro_617v;
 P808 base_1902;
 P821 bt_1903;
 P817 bc_1904;
 P825 y_1905;
};
struct f_select_on_626fr { int dummy;
 rstr *base_619;
 P821 bt_620;
 P815 e_621;
 int *ro_622;
 P808 *code_623;
 P808 code_623v;
 P821 *t_624;
 P821 t_624v;
 P817 *c_625;
 P817 c_625v;
 P815 p_1906;
 P817 pc_1907;
 P815 p_1908;
 P823 f_1909;
 rt_int i_1910;
 rstr fn_1911;
 P823 f_1912;
};
struct f_has_call_628fr { int dummy;
 rstr *s_627;
 int result_;
 rt_int i_1913;
};
struct f_need_slice_630fr { int dummy;
 P821 t_629;
 rstr c_1917;
 rstr n_1918;
 P819 l_1919;
};
struct f_ix_634fr { int dummy;
 rstr *i_631;
 rstr *lo_632;
 rstr *hi_633;
 rstr result_;
};
struct f_index_on_643fr { int dummy;
 rstr *base_635;
 P821 bt_636;
 P815 e_637;
 int *ro_638;
 int lv_639;
 P808 *code_640;
 P808 code_640v;
 P821 *t_641;
 P821 t_641v;
 P817 *c_642;
 P817 c_642v;
 P815 a_1921;
 P821 it_1922;
 rstr lo_1923;
 rstr hi_1924;
 P808 off_1925;
 rt_int k_1926;
 P808 b_1927;
 P808 pre_1928;
 rstr i_1929;
 rstr l_1930;
 rstr h_1931;
 rstr lo_1932;
 rstr hi_1933;
 rstr i_1934;
};
struct f_own_attribute_645fr { int dummy;
 P815 e_644;
 int result_;
 P838 saved_1935;
 P821 bt_1936;
 int ok_1937;
 rstr base_1940;
 P815 p_1941;
 P823 f_1942;
};
struct f_gexpr_649fr { int dummy;
 P815 e_646;
 P821 want_647;
 P821 *t_648;
 P821 t_648v;
 rstr result_;
 rt_int k_1943;
 P808 code_1944;
 P817 c_1945;
 int ro_1946;
 P821 bt_1947;
 P817 ctx_1948;
 P808 r_1949;
 rt_int i_1950;
 rt_int pos_1954;
 rt_int i_1955;
 P825 y_1956;
 int ro_1957;
 P815 call_1958;
 P815 fname_1959;
 rstr a_1960;
 rstr a_1961;
 rstr a_1962;
 P815 nm_1963;
 P825 y_1964;
 rstr base_1965;
 rstr base_1966;
};
struct f_resolved_652fr { int dummy;
 P815 e_650;
 P821 *t_651;
 P821 t_651v;
 rstr result_;
 P817 c_1967;
 P821 vt_1968;
 P825 y_1969;
 P815 tt_1970;
 P815 call_1971;
 P815 f_1972;
 P815 fname_1973;
 rstr v_1974;
};
struct f_gexpr_in_657fr { int dummy;
 P815 e_653;
 P821 want_654;
 P817 c_655;
 P821 *t_656;
 P821 t_656v;
 rstr result_;
};
struct f_ascii_lit_659fr { int dummy;
 int ch_658;
 rstr result_;
 P815 l_1975;
 rt_int i_1976;
};
struct f_octal_661fr { int dummy;
 rt_int n_660;
 rstr result_;
 rstr r_1980;
};
struct f_str_cat_part_663fr { int dummy;
 P821 t_662;
 P821 result_;
};
struct f_peek_type_665fr { int dummy;
 P815 e_664;
 P821 result_;
 P838 saved_1981;
 P821 t_1982;
 rstr v_1985;
};
struct f_set_operands_668fr { int dummy;
 P815 e_666;
 P821 want_667;
 P821 result_;
 P821 t_1986;
};
struct f_copy_node_670fr { int dummy;
 P815 e_669;
 P815 result_;
 P815 x_1987;
};
struct f_wrap_apply_672fr { int dummy;
 P815 e_671;
 P815 result_;
 P815 x_1989;
};
struct f_c_string_674fr { int dummy;
 rstr *s_673;
 rstr result_;
 rt_int n_1990;
 rt_int i_1991;
 rstr r_1995;
 rt_int j_1996;
 rt_int i_1997;
};
struct f_enum_type_of_677fr { int dummy;
 rstr *lit_675;
 rt_int line_676;
 P821 result_;
 P825 y_2001;
 P817 c_2002;
 P815 st_2003;
};
struct f_ptr_attribute_679fr { int dummy;
 P815 e_678;
 int result_;
 P808 lv_2004;
 P821 t_2005;
 P817 c_2006;
 int ro_2007;
 P815 p_2008;
 P838 saved_2009;
};
struct f_attribute_682fr { int dummy;
 P815 e_680;
 P821 *t_681;
 P821 t_681v;
 rstr result_;
 P821 bt_2010;
 P817 c_2011;
 P808 base_2012;
 P815 sub_2013;
 rstr name_2014;
 P815 p_2015;
 P815 a_2016;
 P817 pc_2017;
 rstr v_2018;
 P815 p_2019;
 P815 a_2020;
 P821 pt_2021;
 rstr v_2022;
};
struct f_subtype_compare_687fr { int dummy;
 P815 sa_683;
 P815 sb_684;
 rstr *op_685;
 rt_int line_686;
 rstr result_;
 P817 ca_2023;
 P817 cb_2024;
 P821 ta_2025;
 P821 tb_2026;
 P808 r_2027;
 rstr yes_2028;
 rstr no_2029;
 rt_int k_2030;
 P815 a_2034;
 P815 b_2035;
 P821 at_2036;
 P821 bt2_2037;
 rstr x_2038;
 rstr y_2039;
};
struct f_float_prec_689fr { int dummy;
 P817 c_688;
 rstr result_;
};
struct f_file_attribute_695fr { int dummy;
 P815 e_690;
 P821 bt_691;
 P817 c_692;
 P808 base_693;
 P821 *t_694;
 P821 t_694v;
 rstr result_;
};
struct f_gbinop_699fr { int dummy;
 P815 e_696;
 P821 want_697;
 P821 *t_698;
 P821 t_698v;
 rstr result_;
 P808 op_2040;
 P821 ta_2041;
 P821 tb_2042;
 P821 hint_2043;
 P825 uy_2044;
 P815 l_2045;
 P815 r_2046;
 P815 call_2047;
 P815 fname_2048;
 rstr s_2049;
 rstr a_2050;
 rstr a_2051;
 rstr b_2052;
 rstr a_2053;
 rstr b_2054;
 P821 at_2055;
 rstr a_2056;
 rstr b_2057;
 P821 wa_2058;
 P821 wb_2059;
 P821 ws_2060;
 P821 ce_2061;
 rstr a_2062;
 rstr b_2063;
 rstr dummy_2064;
 rstr a_2065;
 rstr b_2066;
 P821 ct_2067;
 rstr a_2068;
 rstr b_2069;
};
struct f_constructor_704fr { int dummy;
 P815 e_700;
 P821 want_701;
 P817 ctx_702;
 P821 *t_703;
 P821 t_703v;
 rstr result_;
 P815 it_2070;
 P823 f_2071;
 P821 vt_2072;
 P808 s_2073;
 rstr v_2074;
 rt_int i_2075;
 rstr tmp_2076;
 rstr v_2077;
 rstr tmp_2078;
 P808 parts_2079;
 P815 k_2080;
 P808 shared_2081;
 rstr v_2082;
 rstr v_2083;
};
struct f_comp_value_708fr { int dummy;
 P821 t_705;
 P817 c_706;
 rstr *v_707;
 rstr result_;
};
struct f_has_at_710fr { int dummy;
 rstr *s_709;
 int result_;
 rt_int i_2084;
};
struct f_set_elem_713fr { int dummy;
 P821 st_711;
 rstr *v_712;
 rstr result_;
};
struct f_array_cons_718fr { int dummy;
 P815 e_714;
 P821 at_715;
 P817 ctx_716;
 P821 *t_717;
 P821 t_717v;
 rstr result_;
 rstr tmp_2088;
 P808 parts_2089;
 P815 it_2090;
 int positional_2091;
 rt_int k_2092;
 P808 lo_2096;
 P808 hi_2097;
};
struct f_fill_items_724fr { int dummy;
 P815 items_719;
 P821 at_720;
 rstr *tmp_721;
 P819 prefix_722;
 rt_int dim_723;
 rstr result_;
 P815 it_2098;
 rt_int pos_2099;
 P808 r_2100;
 P821 vt_2101;
 rstr v_2102;
 P815 k_2103;
 rt_int d_2104;
 P819 pre_2105;
 P808 loops_2106;
 P808 ends_2107;
 rstr v_2108;
 rstr xv_2109;
 P815 k_2110;
 rstr xv_2111;
 rstr v_2112;
};
struct f_e_line_726fr { int dummy;
 P815 e_725;
 rt_int result_;
};
struct f_add_line_729fr { int dummy;
 P819 l_727;
 rstr *s_728;
 P819 result_;
 P819 r_2113;
 P819 tail_2114;
 P819 x_2115;
 P819 p_2116;
};
struct f_item_value_734fr { int dummy;
 P815 e_730;
 P821 at_731;
 rt_int line_732;
 P821 *vt_733;
 P821 vt_733v;
 rstr result_;
 rstr v_2119;
};
struct f_key_loop_739fr { int dummy;
 P815 k_735;
 P821 at_736;
 rt_int d_737;
 rstr *xv_738;
 rstr result_;
 P821 it_2120;
 rstr lo_2121;
 rstr hi_2122;
};
struct f_store_at_744fr { int dummy;
 P821 at_740;
 rstr *tmp_741;
 P819 xs_742;
 rt_int n_743;
 rstr result_;
 P808 off_2123;
 P819 x_2124;
 rt_int k_2125;
 rstr l_2126;
 rstr h_2127;
};
struct f_fits_747fr { int dummy;
 P825 y_745;
 P815 args_746;
 int result_;
 P815 a_2128;
 P827 pm_2129;
 P821 t_2130;
 P838 saved_2131;
 int ok_2132;
 P808 lv_2133;
 P817 lc_2134;
 int ro_2135;
 rstr v_2138;
};
struct f_resolve_overload_753fr { int dummy;
 rstr *name_748;
 P815 tt_749;
 P815 args_750;
 int is_stmt_751;
 rt_int line_752;
 P825 result_;
 P825 y_2139;
 P825 first_2140;
 rt_int n_2141;
 rt_int pass_2142;
};
struct f_tt_fits_756fr { int dummy;
 P825 y_754;
 P815 tt_755;
 int result_;
 P815 f_2146;
 P815 a_2147;
 P838 saved_2148;
 int ok_2149;
 P817 fc_2152;
 P817 ac_2153;
 P815 fst_2154;
 P821 ft_2155;
 P821 at_2156;
 P815 ast_2157;
};
struct f_overload_chain_759fr { int dummy;
 rstr *name_757;
 rt_int pass_758;
 P825 result_;
};
struct f_is_builtin_761fr { int dummy;
 rstr *n_760;
 int result_;
};
struct f_is_low_level_763fr { int dummy;
 rstr *n_762;
 int result_;
};
struct f_me_high_767fr { int dummy;
 P815 tt_764;
 rt_int line_765;
 P821 *t_766;
 P821 t_766v;
 rstr result_;
 P817 c_2158;
};
struct f_type_tag_769fr { int dummy;
 P821 t_768;
 rstr result_;
};
struct f_lock_ref_772fr { int dummy;
 P815 e_770;
 rstr *name_771;
 rstr result_;
 P808 lv_2159;
 P821 t_2160;
 P817 c_2161;
 int ro_2162;
};
struct f_user_op_775fr { int dummy;
 rstr *op_773;
 P815 args_774;
 P825 result_;
 P825 y_2163;
 rt_int pass_2164;
};
struct f_gcall_779fr { int dummy;
 P815 e_776;
 int is_stmt_777;
 P821 *t_778;
 P821 t_778v;
 rstr result_;
 P815 fn_2168;
 P815 tt_2169;
 P825 y_2170;
 P808 args_2171;
 P815 a_2172;
 P827 pm_2173;
 P821 lt_2174;
 P821 vt_2175;
 P808 lv_2176;
 P817 lc_2177;
 int ro_2178;
 P825 alt_2179;
 P842 cr_2180;
 rt_int i_2181;
 rstr v_2185;
 rstr ct_2186;
 rstr v_2187;
};
struct f_requires_781fr { int dummy;
 P825 y_780;
 P819 result_;
 P815 imp_2188;
};
struct f_add_req_784fr { int dummy;
 P825 y_782;
 rstr *name_783;
 P819 l_2189;
};
struct f_require_calls_787fr { int dummy;
 P825 y_785;
 P815 e_786;
 P815 x_2191;
 P815 callee_2192;
 P825 z_2193;
 P819 l_2194;
};
struct f_declared_in_790fr { int dummy;
 P815 elems_788;
 rstr *name_789;
 int result_;
 P815 e_2195;
};
struct f_check_requires_793fr { int dummy;
 P825 y_791;
 rt_int line_792;
 P819 l_2196;
 P825 z_2197;
};
struct f_actual_bounds_797fr { int dummy;
 P821 ft_794;
 P821 t_795;
 P817 c_796;
 rstr result_;
};
struct f_builtin_804fr { int dummy;
 rstr *name_798;
 P815 tt_799;
 P815 args_800;
 rt_int line_801;
 int is_stmt_802;
 P821 *t_803;
 P821 t_803v;
 rstr result_;
 P821 at_2198;
 rt_int n_2199;
 rstr a_2200;
 rstr a_2201;
 rstr a_2202;
 rstr a_2203;
 rstr a_2204;
 rstr n1_2205;
 rstr m1_2206;
 rstr a_2207;
 rstr a_2208;
 P815 last_2209;
 rstr a_2210;
 rstr a_2211;
 P808 lv_2212;
 P817 lc_2213;
 int ro_2214;
 P815 last_2215;
 P808 lv_2216;
 P808 dv_2217;
 P817 lc_2218;
 int ro_2219;
 P821 mt_2220;
 P821 dt_2221;
 rstr v_2222;
 P808 lv_2223;
 P817 lc_2224;
 int ro_2225;
 P821 mt_2226;
 P808 lv_2227;
 P808 dv_2228;
 P808 bv_2229;
 P817 lc_2230;
 int ro_2231;
 P821 mt_2232;
 P821 dt_2233;
 P821 bt_2234;
 rstr v_2235;
 rstr v_2236;
 rstr v_2237;
 rstr v_2238;
 rstr a_2239;
 P808 bv_2240;
 P817 bc_2241;
 int ro_2242;
 P821 bt_2243;
 rstr l_2244;
 P808 pv_2245;
 P817 pc_2246;
 int ro_2247;
 P821 pt_2248;
 rstr dev_2249;
 rstr cmd_2250;
 P808 dv_2251;
 P817 dc_2252;
 int ro_2253;
 P821 dt_2254;
};
struct f_translate_806fr { int dummy;
 P815 units_805;
 P815 u_2255;
 P815 l_2257;
 rstr w_2258;
};
struct f_print_program_807fr { int dummy;
};
struct Pc809 { rt_int p_n; rstr all; };
struct Pc813 { rt_int p_n; A814 all; };
struct Pc830 { rt_int p_n; A831 all; };
static void as_R845(R845 *d, R845 s);
static R845 cp_R845(R845 s);
static int eq_R845(R845 a, R845 b);
static void as_R843(R843 *d, R843 s);
static R843 cp_R843(R843 s);
static int eq_R843(R843 a, R843 b);
static void as_R841(R841 *d, R841 s);
static R841 cp_R841(R841 s);
static int eq_R841(R841 a, R841 b);
static void as_R839(R839 *d, R839 s);
static R839 cp_R839(R839 s);
static int eq_R839(R839 a, R839 b);
static void as_R837(R837 *d, R837 s);
static R837 cp_R837(R837 s);
static int eq_R837(R837 a, R837 b);
static void as_R835(R835 *d, R835 s);
static R835 cp_R835(R835 s);
static int eq_R835(R835 a, R835 b);
static void as_R833(R833 *d, R833 s);
static R833 cp_R833(R833 s);
static int eq_R833(R833 a, R833 b);
static void as_A831(A831 *d, A831 s);
static A831 cp_A831(A831 s);
static int eq_A831(A831 a, A831 b);
static void as_R828(R828 *d, R828 s);
static R828 cp_R828(R828 s);
static int eq_R828(R828 a, R828 b);
static void as_R826(R826 *d, R826 s);
static R826 cp_R826(R826 s);
static int eq_R826(R826 a, R826 b);
static void as_R824(R824 *d, R824 s);
static R824 cp_R824(R824 s);
static int eq_R824(R824 a, R824 b);
static void as_R822(R822 *d, R822 s);
static R822 cp_R822(R822 s);
static int eq_R822(R822 a, R822 b);
static void as_R820(R820 *d, R820 s);
static R820 cp_R820(R820 s);
static int eq_R820(R820 a, R820 b);
static void as_R818(R818 *d, R818 s);
static R818 cp_R818(R818 s);
static int eq_R818(R818 a, R818 b);
static void as_R816(R816 *d, R816 s);
static R816 cp_R816(R816 s);
static int eq_R816(R816 a, R816 b);
static void as_A814(A814 *d, A814 s);
static A814 cp_A814(A814 s);
static int eq_A814(A814 a, A814 b);
static void as_R811(R811 *d, R811 s);
static R811 cp_R811(R811 s);
static int eq_R811(R811 a, R811 b);
static P808 f_mk_3(rstr *s_2);
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
static P838 f_new_buffer_24(void);
static void f_put_27(P838 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P838 b_30);
static void f_splice_34(P838 a_32, P838 b_33);
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
static P815 f_nn_61(rt_int kind_59, rt_int line_60);
static void f_append_65(P815 *head_62, P815 *tail_63, P815 x_64);
static rt_int f_list_len_67(P815 l_66);
static rt_int f_cur_line_68(void);
static int f_at_kw_70(rstr *w_69);
static int f_at_op_72(rstr *w_71);
static int f_at_kind_74(rt_int k_73);
static rt_int f_kind_at_76(rt_int k_75);
static P808 f_text_at_78(rt_int k_77);
static void f_perror_80(rstr *msg_79);
static int f_accept_kw_82(rstr *w_81);
static int f_accept_op_84(rstr *w_83);
static void f_expect_kw_86(rstr *w_85);
static void f_expect_op_88(rstr *w_87);
static P808 f_expect_id_89(void);
static P815 f_name_node_90(void);
static P815 f_id_list_91(void);
static P815 f_p_subtype_92(void);
static P815 f_constraint_list_93(void);
static P815 f_actual_params_94(void);
static int f_is_type_word_96(rstr *w_95);
static P815 f_actual_tt_97(void);
static P815 f_binop_102(P808 op_98, P815 l_99, P815 r_100, rt_int line_101);
static P815 f_expr_103(void);
static P815 f_expr_and_104(void);
static P815 f_expr_not_105(void);
static int f_is_rel_107(rstr *s_106);
static P815 f_expr_rel_108(void);
static P815 f_expr_add_109(void);
static P815 f_expr_mul_110(void);
static P815 f_expr_pow_111(void);
static P815 f_expr_prefix_112(void);
static P815 f_postfix_113(void);
static P815 f_primary_114(void);
static P815 f_constructor_item_115(void);
static int f_at_body_end_116(void);
static P815 f_body_117(void);
static P815 f_body_element_118(void);
static P815 f_declaration_119(void);
static P815 f_object_decl_120(void);
static P815 f_abbrev_decl_121(void);
static void f_skip_rep_122(void);
static P815 f_type_decl_123(void);
static rt_int f_mode_of_125(rstr *w_124);
static P815 f_formal_params_126(void);
static int f_imports_list_128(P815 owner_127);
static int f_is_definable_130(rstr *w_129);
static P808 f_definable_name_131(void);
static P815 f_subprogram_decl_132(void);
static P815 f_capsule_decl_133(void);
static P815 f_formal_tt_134(void);
static P815 f_generic_decl_135(void);
static P815 f_task_decl_136(void);
static P815 f_expose_decl_137(void);
static int f_is_compound_kw_139(rstr *w_138);
static P815 f_statement_140(void);
static P815 f_unlabeled_statement_141(void);
static P815 f_arm_145(P815 cond_142, P815 b_143, rt_int line_144);
static P815 f_if_stmt_146(void);
static P815 f_case_stmt_147(void);
static P815 f_repeat_stmt_148(void);
static P815 f_guard_stmt_149(void);
static P815 f_program_150(void);
static rt_int f_hash_152(rstr *s_151);
static P825 f_lookup_154(rstr *name_153);
static P825 f_lookup_decl_156(P815 d_155);
static void f_define_159(P825 y_157, rt_int line_158);
static int f_overloadable_161(P825 y_160);
static int f_same_tt_164(P815 a_162, P815 b_163);
static int f_same_signature_167(P827 a_165, P827 b_166);
static void f_open_scope_168(void);
static void f_close_scope_169(void);
static P825 f_new_sym_172(rt_int kind_170, P808 name_171);
static P821 f_new_typ_174(rt_int kind_173);
static P817 f_new_cons_175(void);
static int f_scalar_kind_177(P821 t_176);
static rstr f_bound_ctype_179(P821 t_178);
static rstr f_cbound_182(P817 c_180, rstr *b_181);
static rstr f_clo_184(P817 c_183);
static rstr f_chi_186(P817 c_185);
static rstr f_sub_lo_189(P821 t_187, P817 c_188);
static rstr f_sub_hi_192(P821 t_190, P817 c_191);
static rstr f_raw_storage_195(rstr *name_193, rstr *ct_194);
static P817 f_copy_cons_197(P817 c_196);
static P817 f_freeze_200(P817 c_198, P821 t_199);
static rstr f_checked_204(P821 t_201, P817 c_202, rstr *v_203);
static int f_same_lits_207(P815 a_205, P815 b_206);
static P821 f_str_elem_209(P821 t_208);
static int f_same_212(P821 a_210, P821 b_211);
static P821 f_base_of_214(P821 t_213);
static P817 f_base_cons_217(P821 t_215, P817 c_216);
static rstr f_kind_name_219(P821 t_218);
static void f_check_type_223(P821 got_220, P821 want_221, rt_int line_222);
static rstr f_ctype_225(P821 t_224);
static rstr f_struct_body_227(P821 t_226);
static rstr f_field_decls_229(P821 t_228);
static void f_declare_ctype_231(P821 t_230);
static rstr f_dim_lo_233(rt_int k_232);
static rstr f_dim_hi_235(rt_int k_234);
static rstr f_more_dims_237(P821 t_236);
static rstr f_acnt_240(P821 t_238, rstr *base_239);
static P808 f_cons_lo_243(P817 c_241, rt_int k_242);
static P808 f_cons_hi_246(P817 c_244, rt_int k_245);
static P821 f_idx_type_249(P821 t_247, rt_int k_248);
static void f_init_ascii_250(void);
static rt_int f_lit_index_253(P815 lits_251, rstr *name_252);
static P821 f_resolve_subtype_256(P815 st_254, P817 *c_255);
static int f_float_lit_258(P815 e_257);
static void f_tag_constraint_262(P821 t_259, P815 e_260, P817 c_261);
static P821 f_named_subtype_265(P815 st_263, P817 *c_264);
static P821 f_invoke_abbrev_269(P825 y_266, P815 st_267, P817 *c_268);
static void f_apply_constraint_274(P821 t_270, P815 args_271, P817 c_272, rt_int line_273);
static P821 f_value_subtype_278(P815 e_275, P817 *c_276, P808 *base_277);
static P819 f_reverse_pairs_280(P819 l_279);
static P821 f_inquiry_283(P815 st_281, P817 *c_282);
static P815 f_as_subtype_285(P815 e_284);
static P815 f_tt_subtype_290(P808 name_286, P815 tt_287, P815 args_288, rt_int line_289);
static int f_type_name_292(rstr *name_291);
static rstr f_empty_set_294(P821 t_293);
static int f_opened_296(P821 t_295);
static rstr f_replace_all_300(rstr *s_297, rstr *pat_298, rstr *r_299);
static rstr f_subst_302(rstr *s_301);
static P821 f_new_type_306(P825 y_303, P815 st_304, P817 *c_305);
static void f_init_storage_310(rstr *lval_307, P821 t_308, P817 c_309);
static rstr f_init_call_313(P825 y_311, rstr *lval_312);
static int f_needs_fin_315(P821 t_314);
static rstr f_fin_code_318(rstr *lval_316, P821 t_317);
static P821 f_tparam_type_321(P821 t_319, rstr *name_320);
static void f_make_storage_325(rstr *lval_322, P821 t_323, P817 c_324);
static rstr f_uninit_value_327(P821 t_326);
static rstr f_init_chk_330(P821 t_328, rstr *v_329);
static rt_int f_manifest_333(P815 e_331, int *ok_332);
static P834 f_mk_mval_336(rt_int kind_334, rt_int i_335);
static rt_int f_ipow_339(rt_int a_337, rt_int b_338);
static P834 f_meval_342(P815 e_340, int *ok_341);
static rstr f_bool_text_344(int b_343);
static rt_int f_bool_i_346(int b_345);
static rstr f_mstr_348(P834 v_347);
static int f_ascii_char_350(rt_int i_349);
static int f_user_defined_352(rstr *op_351);
static rstr f_mcopy_354(P821 t_353);
static int f_composite_356(P821 t_355);
static rstr f_assign_code_361(rstr *lval_357, P821 t_358, rstr *v_359, P817 c_360);
static rstr f_copy_code_364(P821 t_362, rstr *v_363);
static rstr f_eq_code_368(P821 t_365, rstr *a_366, rstr *b_367);
static rstr f_elem_assign_372(rstr *lval_369, P821 t_370, rstr *v_371);
static int f_seen_name_375(P819 l_373, rstr *s_374);
static void f_emit_helpers_376(void);
static void f_helper_bodies_378(P821 t_377);
static void f_declare_body_380(P815 elems_379);
static void f_manifest_const_382(P815 d_381);
static int f_exported_386(P815 d_383, rstr *name_384, int *ro_385);
static P825 f_copy_sym_388(P825 y_387);
static void f_gen_capsule_390(P815 d_389);
static void f_capsule_params_394(P815 d_391, P815 args_392, rt_int line_393);
static void f_elaborate_capsule_399(P815 d_395, P825 y_396, P815 args_397, P815 owner_398);
static int f_exports_op_402(P815 d_400, rstr *op_401);
static P808 f_renamed_405(P815 d_403, P825 z_404);
static void f_gen_expose_407(P815 d_406);
static void f_finish_ptr_409(P821 t_408);
static P815 f_ptr_args_411(P817 c_410);
static void f_bind_ptr_params_416(P815 formals_412, P815 actuals_413, rstr *cell_414, rt_int line_415);
static void f_alloc_cell_421(P815 s_417, rstr *lv_418, P821 t_419, P817 c_420);
static P817 f_freeze_args_425(P817 c_422, P821 t_423, rt_int line_424);
static void f_ptr_subtype_check_429(P821 t_426, P817 c_427, P815 src_428);
static void f_normal_function_432(P815 d_430, P825 y_431);
static void f_declare_subprogram_434(P815 d_433);
static P825 f_build_subprogram_436(P815 d_435);
static int f_has_pragmat_439(P808 pr_437, rstr *p_438);
static P808 f_suppressing_441(P808 pr_440);
static int f_suppressed_443(rstr *x_442);
static void f_element_445(P815 e_444);
static void f_element1_447(P815 e_446);
static rstr f_storage_450(rstr *name_448, P821 t_449);
static void f_bind_453(P825 y_451, rstr *access_452);
static void f_var_decl_455(P815 d_454);
static void f_open_fin_457(rstr *fc_456);
static void f_close_fins_459(P819 saved_458);
static void f_const_decl_461(P815 d_460);
static void f_subprogram_463(P815 d_462);
static void f_gen_subprogram_466(P815 d_464, P825 y_465);
static rstr f_waits_of_468(P815 d_467);
static rstr f_task_waits_470(P815 elems_469);
static void f_await_tasks_472(P815 elems_471);
static void f_capsule_elements_474(P815 elems_473);
static void f_declare_labels_476(P815 elems_475);
static void f_start_labels_477(void);
static P840 f_goto_label_479(rstr *name_478);
static int f_has_return_481(P815 e_480);
static void f_capsule_body_483(P815 elems_482);
static void f_body_elements_485(P815 elems_484);
static void f_gen_body_487(P815 elems_486);
static void f_pop_frames_489(rt_int upto_488);
static void f_push_cleanup_491(rstr *s_490);
static void f_pop_cleanup_492(void);
static void f_gen_statement_494(P815 s_493);
static void f_st_assign_496(P815 s_495);
static void f_st_call_498(P815 s_497);
static void f_st_if_500(P815 s_499);
static void f_st_case_502(P815 s_501);
static void f_st_repeat_504(P815 s_503);
static void f_st_exit_506(P815 s_505);
static void f_st_return_508(P815 s_507);
static rstr f_result_checked_512(P821 t_509, P817 c_510, rstr *v_511);
static rstr f_exc_id_515(rstr *name_513, rt_int line_514);
static void f_st_guard_517(P815 s_516);
static void f_st_alloc_519(P815 s_518);
static rstr f_act_ref_521(P815 e_520);
static void f_st_create_523(P815 s_522);
static void f_hidden_var_527(rstr *name_524, P821 t_525, rstr *place_526);
static void f_user_create_533(P815 s_528, P825 y_529, rstr *uv_530, P821 ut_531, rstr *nf_532);
static rstr f_wait_alt_538(P815 inv_534, rstr *arr_535, rt_int i_536, int mixed_537);
static int f_builtin_wait_540(P815 inv_539);
static rstr f_wait_op_545(P815 inv_541, rstr *op_542, rstr *q_543, int is_stmt_544);
static void f_user_wait_550(P815 s_546, rstr *arr_547, rstr *w_548, rt_int n_549);
static void f_st_wait_552(P815 s_551);
static P815 f_call_node_556(rstr *name_553, P815 arg_554, rt_int line_555);
static void f_user_region_558(P815 s_557);
static void f_st_region_560(P815 s_559);
static P815 f_gparam_563(P815 g_561, rstr *name_562);
static P825 f_bind_sym_565(P815 p_564);
static int f_same_binds_568(P825 a_566, P825 b_567);
static int f_same_binding_571(P825 a_569, P825 b_570);
static P825 f_tt_binds_576(P815 gd_572, P815 formals_573, P815 actuals_574, rt_int line_575);
static int f_generic_use_578(P815 st_577);
static P825 f_infer_from_583(P815 gd_579, P815 pat_580, P821 t_581, P825 known_582);
static P821 f_instantiate_type_589(P825 g_584, P815 tt_585, P815 args_586, P817 *c_587, rt_int line_588);
static P825 f_instantiate_594(P825 g_590, P815 tt_591, P815 args_592, rt_int line_593);
static rstr f_access_of_596(P825 y_595);
static P815 f_import_of_599(P815 l_597, rstr *name_598);
static int f_check_import_602(P825 y_600, rt_int line_601);
static rstr f_c_ident_604(rstr *s_603);
static rstr f_cell_deref_607(P821 t_605, rstr *p_606);
static rstr f_deref_610(rstr *base_608, P821 t_609);
static int f_is_lvalue_612(P815 e_611);
static void f_lvalue_618(P815 e_613, P808 *code_614, P821 *t_615, P817 *c_616, int *ro_617);
static void f_select_on_626(rstr *base_619, P821 bt_620, P815 e_621, int *ro_622, P808 *code_623, P821 *t_624, P817 *c_625);
static int f_has_call_628(rstr *s_627);
static void f_need_slice_630(P821 t_629);
static rstr f_ix_634(rstr *i_631, rstr *lo_632, rstr *hi_633);
static void f_index_on_643(rstr *base_635, P821 bt_636, P815 e_637, int *ro_638, int lv_639, P808 *code_640, P821 *t_641, P817 *c_642);
static int f_own_attribute_645(P815 e_644);
static rstr f_gexpr_649(P815 e_646, P821 want_647, P821 *t_648);
static rstr f_resolved_652(P815 e_650, P821 *t_651);
static rstr f_gexpr_in_657(P815 e_653, P821 want_654, P817 c_655, P821 *t_656);
static rstr f_ascii_lit_659(int ch_658);
static rstr f_octal_661(rt_int n_660);
static P821 f_str_cat_part_663(P821 t_662);
static P821 f_peek_type_665(P815 e_664);
static P821 f_set_operands_668(P815 e_666, P821 want_667);
static P815 f_copy_node_670(P815 e_669);
static P815 f_wrap_apply_672(P815 e_671);
static rstr f_c_string_674(rstr *s_673);
static P821 f_enum_type_of_677(rstr *lit_675, rt_int line_676);
static int f_ptr_attribute_679(P815 e_678);
static rstr f_attribute_682(P815 e_680, P821 *t_681);
static rstr f_subtype_compare_687(P815 sa_683, P815 sb_684, rstr *op_685, rt_int line_686);
static rstr f_float_prec_689(P817 c_688);
static rstr f_file_attribute_695(P815 e_690, P821 bt_691, P817 c_692, P808 base_693, P821 *t_694);
static rstr f_gbinop_699(P815 e_696, P821 want_697, P821 *t_698);
static rstr f_constructor_704(P815 e_700, P821 want_701, P817 ctx_702, P821 *t_703);
static rstr f_comp_value_708(P821 t_705, P817 c_706, rstr *v_707);
static int f_has_at_710(rstr *s_709);
static rstr f_set_elem_713(P821 st_711, rstr *v_712);
static rstr f_array_cons_718(P815 e_714, P821 at_715, P817 ctx_716, P821 *t_717);
static rstr f_fill_items_724(P815 items_719, P821 at_720, rstr *tmp_721, P819 prefix_722, rt_int dim_723);
static rt_int f_e_line_726(P815 e_725);
static P819 f_add_line_729(P819 l_727, rstr *s_728);
static rstr f_item_value_734(P815 e_730, P821 at_731, rt_int line_732, P821 *vt_733);
static rstr f_key_loop_739(P815 k_735, P821 at_736, rt_int d_737, rstr *xv_738);
static rstr f_store_at_744(P821 at_740, rstr *tmp_741, P819 xs_742, rt_int n_743);
static int f_fits_747(P825 y_745, P815 args_746);
static P825 f_resolve_overload_753(rstr *name_748, P815 tt_749, P815 args_750, int is_stmt_751, rt_int line_752);
static int f_tt_fits_756(P825 y_754, P815 tt_755);
static P825 f_overload_chain_759(rstr *name_757, rt_int pass_758);
static int f_is_builtin_761(rstr *n_760);
static int f_is_low_level_763(rstr *n_762);
static rstr f_me_high_767(P815 tt_764, rt_int line_765, P821 *t_766);
static rstr f_type_tag_769(P821 t_768);
static rstr f_lock_ref_772(P815 e_770, rstr *name_771);
static P825 f_user_op_775(rstr *op_773, P815 args_774);
static rstr f_gcall_779(P815 e_776, int is_stmt_777, P821 *t_778);
static P819 f_requires_781(P825 y_780);
static void f_add_req_784(P825 y_782, rstr *name_783);
static void f_require_calls_787(P825 y_785, P815 e_786);
static int f_declared_in_790(P815 elems_788, rstr *name_789);
static void f_check_requires_793(P825 y_791, rt_int line_792);
static rstr f_actual_bounds_797(P821 ft_794, P821 t_795, P817 c_796);
static rstr f_builtin_804(rstr *name_798, P815 tt_799, P815 args_800, rt_int line_801, int is_stmt_802, P821 *t_803);
static void f_translate_806(P815 units_805);
static void f_print_program_807(void);
static int ex_compile_error_1;
static P812 g_toks_846;
static rt_int g_ntoks_847;
static rt_int g_tpos_848;
static rt_int g_src_line_849;
static P808 g_pending_prag_850;
static P829 g_table_851;
static P829 g_genv_852;
static P825 g_all_insts_853;
static rt_int g_depth_854;
static P825 g_scope_stack_855;
static P821 g_all_types_856;
static rt_int g_serial_857;
static P838 g_out_types_858;
static P838 g_out_helpers_859;
static P838 g_out_protos_860;
static P838 g_out_globals_861;
static P838 g_out_funcs_862;
static P838 g_out_init_863;
static P838 g_out_excs_864;
static P838 g_code_865;
static P838 g_fields_buf_866;
static int g_in_func_867;
static rt_int g_cur_level_868;
static P832 g_fctx_869;
static P842 g_caps_870;
static P844 g_cap_waits_871;
static P819 g_psub_872;
static P808 g_st_field_873;
static P838 g_out_frames_874;
static P838 g_out_roots_875;
static int g_uses_free_876;
static P819 g_fins_877;
static int g_uses_findyn_878;
static P825 g_func_sym_879;
static P817 g_func_rc_880;
static P808 g_cap_ret_881;
static P808 g_cap_rflag_882;
static rt_int g_ret_frames_883;
static rt_int g_gdepth_884;
static P808 g_suppress_885;
static P817 g_cons_ctx_886;
static int g_mark_uninit_887;
static P840 g_exits_888;
static P840 g_gotos_889;
static rt_int g_frames_890;
static P819 g_handlers_891;
static P819 g_cleanups_892;
static rt_int g_trial_893;
static P819 g_mcopies_894;
static P821 g_ty_int_895;
static P821 g_ty_bool_896;
static P821 g_ty_float_897;
static P821 g_ty_ascii_898;
static P821 g_ty_string_899;
static P821 g_ty_void_900;
static P821 g_ty_file_901;
static P821 g_ty_nil_902;
static P821 g_ty_lock_903;
static P821 g_ty_latch_904;
static P821 g_ty_act_905;
static P821 g_file_mode_type_906;
static P817 g_no_cons_907;
static P808 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_908 = NULL;
{ P808 cell909 = rt_alloc(sizeof *cell909);
rt_int pv910 = ((rt_int)(((*F->s_2)).len));
cell909->p_n = pv910;
cell909->all = rt_str_new(pv910);
rt_str_assign(&cell909->all, (*F->s_2));
F->t_908 = cell909;
}
F->result_ = F->t_908;
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
F->r_911 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_911, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_911;
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
F->r_912 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_912, (*F->s_14));
{ rt_int lo914 = ((rt_int)1LL), hi915 = ((rt_int)(((*F->s_14)).len));
for (rt_int it916 = lo914; it916 <= hi915; it916++) {
F->i_913 = it916;
if (((65 <= rt_r_echk(rt_str_get(F->r_912, F->i_913))) && (rt_r_echk(rt_str_get(F->r_912, F->i_913)) <= 90))) {
(*rt_str_at(&F->r_912, F->i_913)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_r_echk(rt_str_get(F->r_912, F->i_913))) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_912;
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
F->l_917 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_918 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_917), rt_str(" ", 1)));
{ rt_int lo920 = ((rt_int)1LL), hi921 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_918).len))), ((rt_int)1LL));
for (rt_int it922 = lo920; it922 <= hi921; it922++) {
F->i_919 = it922;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_919, rt_sub(rt_add(F->i_919, ((rt_int)((F->w_918).len))), ((rt_int)1LL))), F->w_918)) {
F->result_ = rt_str_cat(F->l_917, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_917;
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
g_serial_857 = rt_add(rt_r_ichk(g_serial_857), ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(rt_r_ichk(g_serial_857)));
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
if ((rt_r_ichk(g_trial_893) == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P838 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_923 = NULL;
{ R839 *cell924 = rt_alloc(sizeof(R839));
(*cell924).head = NULL;
(*cell924).tail = NULL;
F->b_923 = cell924;
}
F->result_ = F->b_923;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P838 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_925 = NULL;
{ R820 *cell926 = rt_alloc(sizeof(R820));
(*cell926).s = NULL;
(*cell926).next = NULL;
F->l_925 = cell926;
}
(*(P819)rt_nil_check(F->l_925)).s = f_mk_3(&(*F->s_26));
if (((*(P838)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P838)rt_nil_check(F->b_25)).head = F->l_925;
} else {
(*(P819)rt_nil_check((*(P838)rt_nil_check(F->b_25)).tail)).next = F->l_925;
}
(*(P838)rt_nil_check(F->b_25)).tail = F->l_925;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_865, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P838 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_927 = NULL;
F->l_927 = (*(P838)rt_nil_check(F->b_30)).head;
while ((F->l_927 != NULL)) {
rt_putln((((P808)rt_nil_check((*(P819)rt_nil_check(F->l_927)).s))->all));
F->l_927 = (*(P819)rt_nil_check(F->l_927)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P838 a_32, P838 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P838)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P838)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P838)rt_nil_check(F->a_32)).head = (*(P838)rt_nil_check(F->b_33)).head;
} else {
(*(P819)rt_nil_check((*(P838)rt_nil_check(F->a_32)).tail)).next = (*(P838)rt_nil_check(F->b_33)).head;
}
(*(P838)rt_nil_check(F->a_32)).tail = (*(P838)rt_nil_check(F->b_33)).tail;
(*(P838)rt_nil_check(F->b_33)).head = NULL;
(*(P838)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel928 = (*F->w_35);
if (0 || rt_str_eq(sel928, rt_str("ABBREV", 6)) || rt_str_eq(sel928, rt_str("ABNORMAL", 8)) || rt_str_eq(sel928, rt_str("ALL", 3)) || rt_str_eq(sel928, rt_str("ALLOC", 5)) || rt_str_eq(sel928, rt_str("ASSERT", 6)) || rt_str_eq(sel928, rt_str("BEGIN", 5)) || rt_str_eq(sel928, rt_str("BY", 2)) || rt_str_eq(sel928, rt_str("CAPSULE", 7)) || rt_str_eq(sel928, rt_str("CASE", 4)) || rt_str_eq(sel928, rt_str("CONST", 5)) || rt_str_eq(sel928, rt_str("CREATE", 6)) || rt_str_eq(sel928, rt_str("DO", 2)) || rt_str_eq(sel928, rt_str("ELSE", 4)) || rt_str_eq(sel928, rt_str("ELSEIF", 6)) || rt_str_eq(sel928, rt_str("END", 3)) || rt_str_eq(sel928, rt_str("EXCEPTION", 9)) || rt_str_eq(sel928, rt_str("EXIT", 4)) || rt_str_eq(sel928, rt_str("EXPORTS", 7)) || rt_str_eq(sel928, rt_str("EXPOSE", 6)) || rt_str_eq(sel928, rt_str("EXTERNAL", 8)) || rt_str_eq(sel928, rt_str("FOR", 3)) || rt_str_eq(sel928, rt_str("FROM", 4)) || rt_str_eq(sel928, rt_str("FUNC", 4)) || rt_str_eq(sel928, rt_str("GENERIC", 7)) || rt_str_eq(sel928, rt_str("GOTO", 4)) || rt_str_eq(sel928, rt_str("GUARD", 5)) || rt_str_eq(sel928, rt_str("IF", 2)) || rt_str_eq(sel928, rt_str("IMPORTS", 7)) || rt_str_eq(sel928, rt_str("LOCATION", 8)) || rt_str_eq(sel928, rt_str("NAMED", 5)) || rt_str_eq(sel928, rt_str("NEEDS", 5)) || rt_str_eq(sel928, rt_str("NEW", 3)) || rt_str_eq(sel928, rt_str("NONE", 4)) || rt_str_eq(sel928, rt_str("OUT", 3)) || rt_str_eq(sel928, rt_str("OF", 2)) || rt_str_eq(sel928, rt_str("PRAG", 4)) || rt_str_eq(sel928, rt_str("PROC", 4)) || rt_str_eq(sel928, rt_str("RAISE", 5)) || rt_str_eq(sel928, rt_str("READONLY", 8)) || rt_str_eq(sel928, rt_str("REVERSE", 7)) || rt_str_eq(sel928, rt_str("REGION", 6)) || rt_str_eq(sel928, rt_str("RENAMING", 8)) || rt_str_eq(sel928, rt_str("REP", 3)) || rt_str_eq(sel928, rt_str("REPEAT", 6)) || rt_str_eq(sel928, rt_str("RERAISE", 7)) || rt_str_eq(sel928, rt_str("RETURN", 6)) || rt_str_eq(sel928, rt_str("SUBTYPE", 7)) || rt_str_eq(sel928, rt_str("TASK", 4)) || rt_str_eq(sel928, rt_str("THEN", 4)) || rt_str_eq(sel928, rt_str("TO", 2)) || rt_str_eq(sel928, rt_str("TYPE", 4)) || rt_str_eq(sel928, rt_str("VAR", 3)) || rt_str_eq(sel928, rt_str("WAIT", 4)) || rt_str_eq(sel928, rt_str("WHEN", 4)) || rt_str_eq(sel928, rt_str("WHILE", 5))) {
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
F->t_929 = NULL;
{ R811 *cell930 = rt_alloc(sizeof(R811));
(*cell930).s = NULL;
(*cell930).prags = NULL;
F->t_929 = cell930;
}
(*(P810)rt_nil_check(F->t_929)).kind = F->kind_39;
(*(P810)rt_nil_check(F->t_929)).line = rt_r_ichk(g_src_line_849);
(*(P810)rt_nil_check(F->t_929)).ival = F->ival_41;
(*(P810)rt_nil_check(F->t_929)).s = f_mk_3(&(*F->s_40));
(*(P810)rt_nil_check(F->t_929)).prags = g_pending_prag_850;
g_pending_prag_850 = NULL;
g_ntoks_847 = rt_add(rt_r_ichk(g_ntoks_847), ((rt_int)1LL));
(((P812)rt_nil_check(g_toks_846))->all).p[(rt_index(rt_r_ichk(g_ntoks_847), (((P812)rt_nil_check(g_toks_846))->all).lo, (((P812)rt_nil_check(g_toks_846))->all).hi) - (((P812)rt_nil_check(g_toks_846))->all).lo)] = F->t_929;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_931 = RT_R_IUNDEF;
F->j_931 = rt_add(F->i_44, ((rt_int)1LL));
while (((rt_r_ichk(F->j_931) <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_931)))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_931))))) || (rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_931))) == 95)))) {
if (((rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_931))) == 95) && ((rt_r_ichk(F->j_931) == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_931), ((rt_int)1LL))))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_931), ((rt_int)1LL)))))))))) {
f_fail_23(rt_r_ichk(g_src_line_849), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_931 = rt_add(rt_r_ichk(F->j_931), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_931);
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
F->w_932 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_932, (*F->s_46));
{ rt_int lo934 = ((rt_int)1LL), hi935 = ((rt_int)((F->w_932).len));
for (rt_int it936 = lo934; it936 <= hi935; it936++) {
F->k_933 = it936;
(*rt_str_at(&F->w_932, F->k_933)) = f_upper_13(rt_r_echk(rt_str_get(F->w_932, F->k_933)));
}
}
F->result_ = F->w_932;
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
F->j_937 = RT_R_IUNDEF;
F->j_937 = F->i_49;
while (((rt_r_ichk(F->j_937) <= ((rt_int)(((*F->line_48)).len))) && ((rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_937))) == 32) || (rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_937))) == 9)))) {
F->j_937 = rt_add(rt_r_ichk(F->j_937), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_937);
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
F->j_938 = RT_R_IUNDEF;
F->j_938 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_939 = NULL;
F->r_939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_940 = RT_R_EUNDEF;
F->more_940 = 1;
if (((rt_r_ichk(F->j_938) > ((rt_int)(((*F->line_51)).len))) || (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_938))) != 40))) {
f_fail_23(rt_r_ichk(g_src_line_849), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_938 = rt_add(rt_r_ichk(F->j_938), ((rt_int)1LL));
while (rt_r_echk(F->more_940)) {
F->k_941 = RT_R_IUNDEF;
F->j_938 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_938));
if (((rt_r_ichk(F->j_938) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_938))))))) {
f_fail_23(rt_r_ichk(g_src_line_849), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_941 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_938));
F->r_939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->r_939))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_938), rt_sub(rt_r_ichk(F->k_941), ((rt_int)1LL))); b_; }))); b_; }));
F->j_938 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_941));
if (((rt_r_ichk(F->j_938) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_938))) == 40))) {
F->go_942 = RT_R_EUNDEF;
F->go_942 = 1;
F->r_939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->r_939))->all), rt_str("(", 1)); b_; }));
F->j_938 = rt_add(rt_r_ichk(F->j_938), ((rt_int)1LL));
while (rt_r_echk(F->go_942)) {
F->j_938 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_938));
if (((rt_r_ichk(F->j_938) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_938))))))) {
f_fail_23(rt_r_ichk(g_src_line_849), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_941 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_938));
F->r_939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->r_939))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_938), rt_sub(rt_r_ichk(F->k_941), ((rt_int)1LL))); b_; }))); b_; }));
F->j_938 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_941));
if (((rt_r_ichk(F->j_938) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_938))) == 44))) {
F->r_939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->r_939))->all), rt_str(",", 1)); b_; }));
F->j_938 = rt_add(rt_r_ichk(F->j_938), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_938) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_938))) == 41))) {
F->j_938 = rt_add(rt_r_ichk(F->j_938), ((rt_int)1LL));
F->go_942 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_849), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->r_939))->all), rt_str(")", 1)); b_; }));
}
F->r_939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->r_939))->all), rt_str(";", 1)); b_; }));
F->j_938 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_938));
if (((rt_r_ichk(F->j_938) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_938))) == 44))) {
F->j_938 = rt_add(rt_r_ichk(F->j_938), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_938) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_938))) == 41))) {
F->j_938 = rt_add(rt_r_ichk(F->j_938), ((rt_int)1LL));
F->more_940 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_849), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P808)rt_nil_check(F->r_939))->all));
if ((g_pending_prag_850 == NULL)) {
g_pending_prag_850 = F->r_939;
} else {
g_pending_prag_850 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(g_pending_prag_850))->all), (((P808)rt_nil_check(F->r_939))->all)); b_; }));
}
F->result_ = rt_r_ichk(F->j_938);
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
F->i_943 = RT_R_IUNDEF;
F->i_943 = ((rt_int)1LL);
F->k_944 = RT_R_IUNDEF;
while ((rt_r_ichk(F->i_943) <= ((rt_int)(((*F->r_54)).len)))) {
F->k_944 = rt_r_ichk(F->i_943);
while ((rt_r_echk(rt_str_get((*F->r_54), rt_r_ichk(F->k_944))) != 59)) {
F->k_944 = rt_add(rt_r_ichk(F->k_944), ((rt_int)1LL));
}
{
F->p_945 = rt_str_copy(rt_str_slice((*F->r_54), rt_r_ichk(F->i_943), rt_sub(rt_r_ichk(F->k_944), ((rt_int)1LL))));
F->ok_946 = ((((((((((rt_str_eq(F->p_945, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_945, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_945, rt_str("OPEN", 4))) || rt_str_eq(F->p_945, rt_str("CLOSED", 6))) || rt_str_eq(F->p_945, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_945, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_945, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_945, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_945, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_945, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_945).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_945, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_947 = ((((((((((rt_int)((F->p_945).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_945, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_945, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_945, rt_str("OPEN", 4))) || rt_str_eq(F->p_945, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_945).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_945, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_945, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_945, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_945).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_945, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_947 && (!F->ok_946))) {
f_fail_23(rt_r_ichk(g_src_line_849), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_945); b_; }));
}
}
F->i_943 = rt_add(rt_r_ichk(F->k_944), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_948 = RT_R_IUNDEF;
F->i_948 = ((rt_int)1LL);
F->j_949 = RT_R_IUNDEF;
F->j_949 = ((rt_int)0LL);
F->n_950 = RT_R_IUNDEF;
F->n_950 = ((rt_int)(((*F->line_56)).len));
F->c_951 = RT_R_EUNDEF;
while ((rt_r_ichk(F->i_948) <= rt_r_ichk(F->n_950))) {
F->c_951 = rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->i_948)));
if (((((rt_r_echk(F->c_951) == 32) || (rt_r_echk(F->c_951) == 9)) || (rt_r_echk(F->c_951) == 13)) || (rt_r_echk(F->c_951) == 12))) {
F->i_948 = rt_add(rt_r_ichk(F->i_948), ((rt_int)1LL));
} else if ((rt_r_echk(F->c_951) == 37)) {
F->i_948 = rt_add(rt_r_ichk(F->n_950), ((rt_int)1LL));
} else if (f_is_letter_9(rt_r_echk(F->c_951))) {
F->j_949 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->i_948));
{
F->w_952 = rt_str_new(rt_sub(rt_r_ichk(F->j_949), rt_r_ichk(F->i_948)));
rt_str_assign(&F->w_952, rt_str_slice((*F->line_56), rt_r_ichk(F->i_948), rt_sub(rt_r_ichk(F->j_949), ((rt_int)1LL))));
{ rt_int lo954 = ((rt_int)1LL), hi955 = ((rt_int)((F->w_952).len));
for (rt_int it956 = lo954; it956 <= hi955; it956++) {
F->k_953 = it956;
(*rt_str_at(&F->w_952, F->k_953)) = f_upper_13(rt_r_echk(rt_str_get(F->w_952, F->k_953)));
}
}
if (rt_str_eq(F->w_952, rt_str("PRAGMAT", 7))) {
while (((rt_r_ichk(F->j_949) <= rt_r_ichk(F->n_950)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_949))) != 59))) {
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
}
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
} else if (rt_str_eq(F->w_952, rt_str("PRAG", 4))) {
F->j_949 = f_lex_prag_53(&(*F->line_56), rt_r_ichk(F->j_949));
} else if (f_is_reserved_36(&F->w_952)) {
f_add_token_42((((rt_int)2LL)), &F->w_952, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_952)) {
f_add_token_42((((rt_int)3LL)), &F->w_952, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_952, ((rt_int)0LL));
}
}
F->i_948 = rt_r_ichk(F->j_949);
} else if (f_is_digit_11(rt_r_echk(F->c_951))) {
F->j_949 = rt_r_ichk(F->i_948);
while (((rt_r_ichk(F->j_949) <= rt_r_ichk(F->n_950)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_949)))))) {
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
}
if ((((rt_r_ichk(F->j_949) < rt_r_ichk(F->n_950)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_949))) == 46)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL))))))) {
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
while (((rt_r_ichk(F->j_949) <= rt_r_ichk(F->n_950)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_949)))))) {
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
}
if (((rt_r_ichk(F->j_949) <= rt_r_ichk(F->n_950)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_949))) == 69) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_949))) == 101)))) {
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
if (((rt_r_ichk(F->j_949) <= rt_r_ichk(F->n_950)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_949))) == 43) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_949))) == 45)))) {
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
}
while (((rt_r_ichk(F->j_949) <= rt_r_ichk(F->n_950)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_949)))))) {
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_948), rt_sub(rt_r_ichk(F->j_949), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_948), rt_sub(rt_r_ichk(F->j_949), ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), rt_r_ichk(F->i_948), rt_sub(rt_r_ichk(F->j_949), ((rt_int)1LL)))));
}
F->i_948 = rt_r_ichk(F->j_949);
} else if ((((rt_r_echk(F->c_951) == 39) && (rt_r_ichk(F->i_948) < rt_r_ichk(F->n_950))) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_948), ((rt_int)1LL)))) == 39))) {
F->j_949 = rt_add(rt_r_ichk(F->i_948), ((rt_int)2LL));
while (((rt_r_ichk(F->j_949) < rt_r_ichk(F->n_950)) && (!((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_949))) == 39) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL)))) == 39))))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_949))) == 34)) {
f_fail_23(rt_r_ichk(g_src_line_849), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_949) >= rt_r_ichk(F->n_950))) {
f_fail_23(rt_r_ichk(g_src_line_849), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_948), ((rt_int)2LL)), rt_sub(rt_r_ichk(F->j_949), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_948 = rt_add(rt_r_ichk(F->j_949), ((rt_int)2LL));
} else if ((rt_r_echk(F->c_951) == 39)) {
F->j_949 = rt_add(rt_r_ichk(F->i_948), ((rt_int)1LL));
if (((rt_r_ichk(F->j_949) > rt_r_ichk(F->n_950)) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_949))))))) {
f_fail_23(rt_r_ichk(g_src_line_849), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_949 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->j_949));
{
F->w_957 = rt_str_new(rt_sub(rt_sub(rt_r_ichk(F->j_949), rt_r_ichk(F->i_948)), ((rt_int)1LL)));
rt_str_assign(&F->w_957, rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_948), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_949), ((rt_int)1LL))));
{ rt_int lo959 = ((rt_int)1LL), hi960 = ((rt_int)((F->w_957).len));
for (rt_int it961 = lo959; it961 <= hi960; it961++) {
F->k_958 = it961;
(*rt_str_at(&F->w_957, F->k_958)) = f_upper_13(rt_r_echk(rt_str_get(F->w_957, F->k_958)));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_957, ((rt_int)0LL));
}
F->i_948 = rt_r_ichk(F->j_949);
} else if ((rt_r_echk(F->c_951) == 34)) {
F->j_949 = rt_add(rt_r_ichk(F->i_948), ((rt_int)1LL));
while (((rt_r_ichk(F->j_949) <= rt_r_ichk(F->n_950)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_949))) != 34))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_949))) == 39)) {
f_fail_23(rt_r_ichk(g_src_line_849), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_949 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_949) > rt_r_ichk(F->n_950))) {
f_fail_23(rt_r_ichk(g_src_line_849), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_948), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_949), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_948 = rt_add(rt_r_ichk(F->j_949), ((rt_int)1LL));
} else {
{
F->two_962 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_962, rt_str("  ", 2));
(*rt_str_at(&F->two_962, ((rt_int)1LL))) = rt_r_echk(F->c_951);
if ((rt_r_ichk(F->i_948) < rt_r_ichk(F->n_950))) {
(*rt_str_at(&F->two_962, ((rt_int)2LL))) = rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_948), ((rt_int)1LL))));
}
if (((((((rt_str_eq(F->two_962, rt_str(":=", 2)) || rt_str_eq(F->two_962, rt_str("=>", 2))) || rt_str_eq(F->two_962, rt_str("..", 2))) || rt_str_eq(F->two_962, rt_str("**", 2))) || rt_str_eq(F->two_962, rt_str("/=", 2))) || rt_str_eq(F->two_962, rt_str("<=", 2))) || rt_str_eq(F->two_962, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_962, ((rt_int)0LL));
F->i_948 = rt_add(rt_r_ichk(F->i_948), ((rt_int)2LL));
} else if (((rt_str_eq(F->two_962, rt_str("<<", 2)) || rt_str_eq(F->two_962, rt_str(">>", 2))) || rt_str_eq(F->two_962, rt_str("::", 2)))) {
if (rt_str_eq(F->two_962, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_962, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_948 = rt_add(rt_r_ichk(F->i_948), ((rt_int)2LL));
} else if ((((((((((((((((((rt_r_echk(F->c_951) == 40) || (rt_r_echk(F->c_951) == 41)) || (rt_r_echk(F->c_951) == 91)) || (rt_r_echk(F->c_951) == 93)) || (rt_r_echk(F->c_951) == 44)) || (rt_r_echk(F->c_951) == 58)) || (rt_r_echk(F->c_951) == 59)) || (rt_r_echk(F->c_951) == 46)) || (rt_r_echk(F->c_951) == 35)) || (rt_r_echk(F->c_951) == 43)) || (rt_r_echk(F->c_951) == 45)) || (rt_r_echk(F->c_951) == 42)) || (rt_r_echk(F->c_951) == 47)) || (rt_r_echk(F->c_951) == 38)) || (rt_r_echk(F->c_951) == 61)) || (rt_r_echk(F->c_951) == 60)) || (rt_r_echk(F->c_951) == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(rt_r_echk(F->c_951)); b_; }), ((rt_int)0LL));
F->i_948 = rt_add(rt_r_ichk(F->i_948), ((rt_int)1LL));
} else {
f_fail_23(rt_r_ichk(g_src_line_849), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_963 = rt_str_new(rt_sizeln());
rt_readln(&F->line_963);
g_src_line_849 = rt_add(rt_r_ichk(g_src_line_849), ((rt_int)1LL));
f_lex_line_57(&F->line_963);
}
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P815 f_nn_61(rt_int kind_59, rt_int line_60) {
  struct f_nn_61fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_59 = kind_59;
F->line_60 = line_60;
F->x_964 = NULL;
{ R816 *cell965 = rt_alloc(sizeof(R816));
(*cell965).name = NULL;
(*cell965).tag = NULL;
(*cell965).prags = NULL;
(*cell965).labels = NULL;
(*cell965).a = NULL;
(*cell965).b = NULL;
(*cell965).c = NULL;
(*cell965).d = NULL;
(*cell965).e = NULL;
(*cell965).next = NULL;
F->x_964 = cell965;
}
(*(P815)rt_nil_check(F->x_964)).kind = F->kind_59;
(*(P815)rt_nil_check(F->x_964)).line = F->line_60;
F->result_ = F->x_964;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_65(P815 *head_62, P815 *tail_63, P815 x_64) {
  struct f_append_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_62 = head_62;
F->tail_63 = tail_63;
F->x_64 = x_64;
if (((*F->head_62) == NULL)) {
(*F->head_62) = F->x_64;
} else {
(*(P815)rt_nil_check((*F->tail_63))).next = F->x_64;
}
(*F->tail_63) = F->x_64;
while (((*(P815)rt_nil_check((*F->tail_63))).next != NULL)) {
(*F->tail_63) = (*(P815)rt_nil_check((*F->tail_63))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_67(P815 l_66) {
  struct f_list_len_67fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_66 = l_66;
F->n_966 = RT_R_IUNDEF;
F->n_966 = ((rt_int)0LL);
F->p_967 = NULL;
F->p_967 = F->l_66;
while ((F->p_967 != NULL)) {
F->n_966 = rt_add(rt_r_ichk(F->n_966), ((rt_int)1LL));
F->p_967 = (*(P815)rt_nil_check(F->p_967)).next;
}
F->result_ = rt_r_ichk(F->n_966);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_68(void) {
  struct f_cur_line_68fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = rt_r_ichk((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).line);
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
F->result_ = ((rt_r_ichk((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)2LL))) && rt_str_eq((((P808)rt_nil_check((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_69)));
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
F->result_ = ((rt_r_ichk((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)3LL))) && rt_str_eq((((P808)rt_nil_check((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_71)));
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
F->result_ = (rt_r_ichk((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).kind) == F->k_73);
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
if ((rt_add(rt_r_ichk(g_tpos_848), F->k_75) > rt_r_ichk(g_ntoks_847))) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = rt_r_ichk((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_848), F->k_75), b_.lo, b_.hi) - b_.lo)]; }))).kind);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P808 f_text_at_78(rt_int k_77) {
  struct f_text_at_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_77 = k_77;
if ((rt_add(rt_r_ichk(g_tpos_848), F->k_77) > rt_r_ichk(g_ntoks_847))) {
F->result_ = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_ntoks_847), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_848), F->k_77), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23(rt_r_ichk((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_79), rt_str(" (at ", 5)), (((P808)rt_nil_check((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_82(rstr *w_81) {
  struct f_accept_kw_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_81 = w_81;
if (f_at_kw_70(&(*F->w_81))) {
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
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
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
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
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
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
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P808 f_expect_id_89(void) {
  struct f_expect_id_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->result_ = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_848), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_name_node_90(void) {
  struct f_name_node_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_968 = NULL;
F->x_968 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P815)rt_nil_check(F->x_968)).name = f_expect_id_89();
F->result_ = F->x_968;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_id_list_91(void) {
  struct f_id_list_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_969 = NULL;
F->tail_970 = NULL;
f_append_65(&F->head_969, &F->tail_970, f_name_node_90());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_969, &F->tail_970, f_name_node_90());
}
F->result_ = F->head_969;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_p_subtype_92(void) {
  struct f_p_subtype_92fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_971 = RT_R_IUNDEF;
F->line_971 = f_cur_line_68();
F->x_972 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->x_972 = f_nn_61((((rt_int)81LL)), rt_r_ichk(F->line_971));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P815)rt_nil_check(F->x_972)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_972;
goto ret_;
}
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_973 = rt_str_copy((((P808)rt_nil_check((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
if (rt_str_eq(F->w_973, rt_str("ARRAY", 5))) {
F->x_972 = f_nn_61((((rt_int)74LL)), rt_r_ichk(F->line_971));
{
F->head_974 = NULL;
F->tail_975 = NULL;
f_append_65(&F->head_974, &F->tail_975, f_p_subtype_92());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_974, &F->tail_975, f_p_subtype_92());
}
(*(P815)rt_nil_check(F->x_972)).a = F->head_974;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P815)rt_nil_check(F->x_972)).b = f_p_subtype_92();
} else if ((rt_str_eq(F->w_973, rt_str("RECORD", 6)) || rt_str_eq(F->w_973, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_973, rt_str("RECORD", 6))) {
F->x_972 = f_nn_61((((rt_int)75LL)), rt_r_ichk(F->line_971));
} else {
F->x_972 = f_nn_61((((rt_int)76LL)), rt_r_ichk(F->line_971));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_976 = NULL;
F->tail_977 = NULL;
F->more_978 = RT_R_EUNDEF;
F->more_978 = 1;
while (rt_r_echk(F->more_978)) {
F->names_979 = NULL;
F->names_979 = f_id_list_91();
F->st_980 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_980 = f_p_subtype_92();
while ((F->names_979 != NULL)) {
F->cmp_981 = NULL;
F->cmp_981 = f_nn_61((((rt_int)63LL)), rt_r_ichk((*(P815)rt_nil_check(F->names_979)).line));
(*(P815)rt_nil_check(F->cmp_981)).name = (*(P815)rt_nil_check(F->names_979)).name;
(*(P815)rt_nil_check(F->cmp_981)).a = F->st_980;
f_append_65(&F->head_976, &F->tail_977, F->cmp_981);
F->names_979 = (*(P815)rt_nil_check(F->names_979)).next;
}
F->more_978 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P815)rt_nil_check(F->x_972)).a = F->head_976;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_973, rt_str("UNION", 5)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_972)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_973, rt_str("ENUM", 4))) {
F->x_972 = f_nn_61((((rt_int)72LL)), rt_r_ichk(F->line_971));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_982 = NULL;
F->tail_983 = NULL;
F->more_984 = RT_R_EUNDEF;
F->more_984 = 1;
while (rt_r_echk(F->more_984)) {
F->lit_985 = NULL;
F->lit_985 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_971));
if ((!f_at_kind_74((((rt_int)6LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P815)rt_nil_check(F->lit_985)).name = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
f_append_65(&F->head_982, &F->tail_983, F->lit_985);
F->more_984 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P815)rt_nil_check(F->x_972)).a = F->head_982;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_972)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P815)rt_nil_check(F->x_972)).c = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_973, rt_str("STRING", 6)) || rt_str_eq(F->w_973, rt_str("SET", 3))) || rt_str_eq(F->w_973, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_973, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_973, rt_str("STRING", 6))) {
F->x_972 = f_nn_61((((rt_int)73LL)), rt_r_ichk(F->line_971));
} else if (rt_str_eq(F->w_973, rt_str("SET", 3))) {
F->x_972 = f_nn_61((((rt_int)77LL)), rt_r_ichk(F->line_971));
} else if (rt_str_eq(F->w_973, rt_str("MAILBOX", 7))) {
F->x_972 = f_nn_61((((rt_int)78LL)), rt_r_ichk(F->line_971));
} else {
F->x_972 = f_nn_61((((rt_int)79LL)), rt_r_ichk(F->line_971));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P815)rt_nil_check(F->x_972)).a = f_p_subtype_92();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_972)).b = f_actual_params_94();
}
} else if (rt_str_eq(F->w_973, rt_str("INT", 3))) {
F->x_972 = f_nn_61((((rt_int)70LL)), rt_r_ichk(F->line_971));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_972)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P815)rt_nil_check(F->x_972)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_973, rt_str("FLOAT", 5))) {
F->x_972 = f_nn_61((((rt_int)71LL)), rt_r_ichk(F->line_971));
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_972)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_972)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P815)rt_nil_check(F->x_972)).c = f_expr_103();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_972 = f_nn_61((((rt_int)80LL)), rt_r_ichk(F->line_971));
(*(P815)rt_nil_check(F->x_972)).name = f_mk_3(&F->w_973);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_972)).a = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_972)).b = f_constraint_list_93();
(*(P815)rt_nil_check(F->x_972)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_972;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_constraint_list_93(void) {
  struct f_constraint_list_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_986 = NULL;
F->tail_987 = NULL;
F->more_988 = RT_R_EUNDEF;
F->more_988 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_988)) {
F->line_989 = RT_R_IUNDEF;
F->line_989 = f_cur_line_68();
F->lo_990 = NULL;
F->lo_990 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_991 = NULL;
F->r_991 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_989));
(*(P815)rt_nil_check(F->r_991)).a = F->lo_990;
(*(P815)rt_nil_check(F->r_991)).b = f_expr_103();
f_append_65(&F->head_986, &F->tail_987, F->r_991);
} else {
f_append_65(&F->head_986, &F->tail_987, F->lo_990);
}
F->more_988 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_986;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_actual_params_94(void) {
  struct f_actual_params_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_992 = NULL;
F->tail_993 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_65(&F->head_992, &F->tail_993, f_expr_103());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_992, &F->tail_993, f_expr_103());
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_992;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_type_word_96(rstr *w_95) {
  struct f_is_type_word_96fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_95 = w_95;
F->result_ = ((((((((((((((rt_str_eq((*F->w_95), rt_str("INT", 3)) || rt_str_eq((*F->w_95), rt_str("BOOL", 4))) || rt_str_eq((*F->w_95), rt_str("FLOAT", 5))) || rt_str_eq((*F->w_95), rt_str("ENUM", 4))) || rt_str_eq((*F->w_95), rt_str("RECORD", 6))) || rt_str_eq((*F->w_95), rt_str("UNION", 5))) || rt_str_eq((*F->w_95), rt_str("ARRAY", 5))) || rt_str_eq((*F->w_95), rt_str("STRING", 6))) || rt_str_eq((*F->w_95), rt_str("SET", 3))) || rt_str_eq((*F->w_95), rt_str("MAILBOX", 7))) || rt_str_eq((*F->w_95), rt_str("FILE", 4))) || rt_str_eq((*F->w_95), rt_str("ASCII", 5))) || rt_str_eq((*F->w_95), rt_str("ACT", 3))) || rt_str_eq((*F->w_95), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->w_95), rt_str("LATCH", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_actual_tt_97(void) {
  struct f_actual_tt_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_994 = NULL;
F->tail_995 = NULL;
F->more_996 = RT_R_EUNDEF;
F->more_996 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_996)) {
if ((f_at_kind_74((((rt_int)1LL))) && f_is_type_word_96(&(((P808)rt_nil_check((*(P810)rt_nil_check((((P812)rt_nil_check(g_toks_846))->all).p[(rt_index(rt_r_ichk(g_tpos_848), (((P812)rt_nil_check(g_toks_846))->all).lo, (((P812)rt_nil_check(g_toks_846))->all).hi) - (((P812)rt_nil_check(g_toks_846))->all).lo)])).s))->all)))) {
f_append_65(&F->head_994, &F->tail_995, f_p_subtype_92());
} else {
f_append_65(&F->head_994, &F->tail_995, f_expr_103());
}
F->more_996 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_994;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_binop_102(P808 op_98, P815 l_99, P815 r_100, rt_int line_101) {
  struct f_binop_102fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_98 = op_98;
F->l_99 = l_99;
F->r_100 = r_100;
F->line_101 = line_101;
F->x_997 = NULL;
F->x_997 = f_nn_61((((rt_int)9LL)), F->line_101);
(*(P815)rt_nil_check(F->x_997)).name = F->op_98;
(*(P815)rt_nil_check(F->x_997)).a = F->l_99;
(*(P815)rt_nil_check(F->x_997)).b = F->r_100;
F->result_ = F->x_997;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_expr_103(void) {
  struct f_expr_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_998 = NULL;
F->l_998 = f_expr_and_104();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_999 = NULL;
F->op_999 = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1000 = RT_R_IUNDEF;
F->line_1000 = f_cur_line_68();
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->l_998 = f_binop_102(F->op_999, F->l_998, f_expr_and_104(), rt_r_ichk(F->line_1000));
}
F->result_ = F->l_998;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_expr_and_104(void) {
  struct f_expr_and_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1001 = NULL;
F->l_1001 = f_expr_not_105();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_1002 = RT_R_IUNDEF;
F->line_1002 = f_cur_line_68();
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->l_1001 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_1001, f_expr_not_105(), rt_r_ichk(F->line_1002));
}
F->result_ = F->l_1001;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_expr_not_105(void) {
  struct f_expr_not_105fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_1003 = NULL;
F->x_1003 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1003)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P815)rt_nil_check(F->x_1003)).a = f_expr_not_105();
F->result_ = F->x_1003;
goto ret_;
}
F->result_ = f_expr_rel_108();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_rel_107(rstr *s_106) {
  struct f_is_rel_107fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_106 = s_106;
F->result_ = ((((((rt_str_eq((*F->s_106), rt_str("=", 1)) || rt_str_eq((*F->s_106), rt_str("/=", 2))) || rt_str_eq((*F->s_106), rt_str("<", 1))) || rt_str_eq((*F->s_106), rt_str("<=", 2))) || rt_str_eq((*F->s_106), rt_str(">", 1))) || rt_str_eq((*F->s_106), rt_str(">=", 2))) || rt_str_eq((*F->s_106), rt_str("IN", 2)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_expr_rel_108(void) {
  struct f_expr_rel_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1004 = NULL;
F->l_1004 = f_expr_add_109();
while ((f_at_kind_74((((rt_int)3LL))) && f_is_rel_107(&(((P808)rt_nil_check((*(P810)rt_nil_check((((P812)rt_nil_check(g_toks_846))->all).p[(rt_index(rt_r_ichk(g_tpos_848), (((P812)rt_nil_check(g_toks_846))->all).lo, (((P812)rt_nil_check(g_toks_846))->all).hi) - (((P812)rt_nil_check(g_toks_846))->all).lo)])).s))->all)))) {
F->op_1005 = NULL;
F->op_1005 = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1006 = RT_R_IUNDEF;
F->line_1006 = f_cur_line_68();
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->l_1004 = f_binop_102(F->op_1005, F->l_1004, f_expr_add_109(), rt_r_ichk(F->line_1006));
}
F->result_ = F->l_1004;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_expr_add_109(void) {
  struct f_expr_add_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1007 = NULL;
F->l_1007 = f_expr_mul_110();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_1008 = NULL;
F->op_1008 = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1009 = RT_R_IUNDEF;
F->line_1009 = f_cur_line_68();
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->l_1007 = f_binop_102(F->op_1008, F->l_1007, f_expr_mul_110(), rt_r_ichk(F->line_1009));
}
F->result_ = F->l_1007;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_expr_mul_110(void) {
  struct f_expr_mul_110fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1010 = NULL;
F->l_1010 = f_expr_pow_111();
while (((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1011 = NULL;
F->op_1011 = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1012 = RT_R_IUNDEF;
F->line_1012 = f_cur_line_68();
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->l_1010 = f_binop_102(F->op_1011, F->l_1010, f_expr_pow_111(), rt_r_ichk(F->line_1012));
}
F->result_ = F->l_1010;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_expr_pow_111(void) {
  struct f_expr_pow_111fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1013 = NULL;
F->l_1013 = f_expr_prefix_112();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1014 = RT_R_IUNDEF;
F->line_1014 = f_cur_line_68();
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->l_1013 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1013, f_expr_prefix_112(), rt_r_ichk(F->line_1014));
}
F->result_ = F->l_1013;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_expr_prefix_112(void) {
  struct f_expr_prefix_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1015 = NULL;
F->x_1015 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
(*(P815)rt_nil_check(F->x_1015)).name = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1015)).a = f_expr_prefix_112();
F->result_ = F->x_1015;
goto ret_;
}
F->result_ = f_postfix_113();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_postfix_113(void) {
  struct f_postfix_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1016 = NULL;
F->p_1016 = f_primary_114();
while (1) {
F->line_1017 = RT_R_IUNDEF;
F->line_1017 = f_cur_line_68();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1018 = NULL;
F->x_1018 = f_nn_61((((rt_int)10LL)), rt_r_ichk(F->line_1017));
F->head_1019 = NULL;
F->tail_1020 = NULL;
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1021 = RT_R_EUNDEF;
F->more_1021 = 1;
while (rt_r_echk(F->more_1021)) {
F->lo_1022 = NULL;
F->lo_1022 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1023 = NULL;
F->r_1023 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_1017));
(*(P815)rt_nil_check(F->r_1023)).a = F->lo_1022;
(*(P815)rt_nil_check(F->r_1023)).b = f_expr_103();
f_append_65(&F->head_1019, &F->tail_1020, F->r_1023);
} else {
f_append_65(&F->head_1019, &F->tail_1020, F->lo_1022);
}
F->more_1021 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P815)rt_nil_check(F->x_1018)).a = F->p_1016;
(*(P815)rt_nil_check(F->x_1018)).b = F->head_1019;
F->p_1016 = F->x_1018;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1024 = NULL;
F->x_1024 = f_nn_61((((rt_int)11LL)), rt_r_ichk(F->line_1017));
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1024)).a = F->p_1016;
(*(P815)rt_nil_check(F->x_1024)).name = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->p_1016 = F->x_1024;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && (rt_r_ichk((*(P815)rt_nil_check(F->p_1016)).kind) == (((rt_int)7LL))))) {
F->x_1025 = NULL;
F->x_1025 = f_nn_61((((rt_int)12LL)), rt_r_ichk(F->line_1017));
(*(P815)rt_nil_check(F->x_1025)).a = F->p_1016;
(*(P815)rt_nil_check(F->x_1025)).b = f_actual_tt_97();
F->p_1016 = F->x_1025;
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1026 = NULL;
F->x_1026 = f_nn_61((((rt_int)13LL)), rt_r_ichk(F->line_1017));
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1026)).a = F->p_1016;
(*(P815)rt_nil_check(F->x_1026)).b = f_p_subtype_92();
F->p_1016 = F->x_1026;
} else {
F->result_ = F->p_1016;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_primary_114(void) {
  struct f_primary_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1027 = RT_R_IUNDEF;
F->line_1027 = f_cur_line_68();
F->x_1028 = NULL;
F->k_1029 = RT_R_IUNDEF;
F->k_1029 = rt_r_ichk((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).kind);
if ((rt_r_ichk(F->k_1029) == (((rt_int)4LL)))) {
F->x_1028 = f_nn_61((((rt_int)1LL)), rt_r_ichk(F->line_1027));
(*(P815)rt_nil_check(F->x_1028)).ival = rt_r_ichk((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).ival);
(*(P815)rt_nil_check(F->x_1028)).name = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->result_ = F->x_1028;
goto ret_;
}
if ((((rt_r_ichk(F->k_1029) == (((rt_int)5LL))) || (rt_r_ichk(F->k_1029) == (((rt_int)7LL)))) || (rt_r_ichk(F->k_1029) == (((rt_int)6LL))))) {
if ((rt_r_ichk(F->k_1029) == (((rt_int)5LL)))) {
F->x_1028 = f_nn_61((((rt_int)2LL)), rt_r_ichk(F->line_1027));
} else if ((rt_r_ichk(F->k_1029) == (((rt_int)7LL)))) {
F->x_1028 = f_nn_61((((rt_int)3LL)), rt_r_ichk(F->line_1027));
} else {
F->x_1028 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_1027));
}
(*(P815)rt_nil_check(F->x_1028)).name = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->result_ = F->x_1028;
goto ret_;
}
if ((rt_r_ichk(F->k_1029) == (((rt_int)1LL)))) {
F->w_1030 = rt_str_copy((((P808)rt_nil_check((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1030, rt_str("TRUE", 4)) || rt_str_eq(F->w_1030, rt_str("FALSE", 5)))) {
F->x_1028 = f_nn_61((((rt_int)5LL)), rt_r_ichk(F->line_1027));
if (rt_str_eq(F->w_1030, rt_str("TRUE", 4))) {
(*(P815)rt_nil_check(F->x_1028)).ival = ((rt_int)1LL);
}
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->result_ = F->x_1028;
goto ret_;
}
if (rt_str_eq(F->w_1030, rt_str("NIL", 3))) {
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)6LL)), rt_r_ichk(F->line_1027));
goto ret_;
}
F->result_ = f_name_node_90();
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1028 = f_nn_61((((rt_int)17LL)), rt_r_ichk(F->line_1027));
(*(P815)rt_nil_check(F->x_1028)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1028;
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1031 = NULL;
F->tail_1032 = NULL;
F->x_1028 = f_nn_61((((rt_int)14LL)), rt_r_ichk(F->line_1027));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1033 = RT_R_EUNDEF;
F->more_1033 = 1;
while (rt_r_echk(F->more_1033)) {
f_append_65(&F->head_1031, &F->tail_1032, f_constructor_item_115());
F->more_1033 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P815)rt_nil_check(F->x_1028)).a = F->head_1031;
F->result_ = F->x_1028;
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

static P815 f_constructor_item_115(void) {
  struct f_constructor_item_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1034 = RT_R_IUNDEF;
F->line_1034 = f_cur_line_68();
F->it_1035 = NULL;
F->it_1035 = f_nn_61((((rt_int)15LL)), rt_r_ichk(F->line_1034));
F->first_1036 = NULL;
F->first_1036 = f_expr_103();
F->keys_1037 = NULL;
F->ktail_1038 = NULL;
F->lab_1039 = NULL;
F->lab_1039 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1034));
(*(P815)rt_nil_check(F->lab_1039)).a = F->first_1036;
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P815)rt_nil_check(F->lab_1039)).b = f_expr_103();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_65(&F->keys_1037, &F->ktail_1038, F->lab_1039);
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1040 = RT_R_IUNDEF;
F->save_1040 = rt_r_ichk(g_tpos_848);
F->more_1041 = NULL;
F->tail2_1042 = NULL;
F->ok_1043 = RT_R_EUNDEF;
F->ok_1043 = 0;
F->go_1044 = RT_R_EUNDEF;
F->go_1044 = 1;
while ((rt_r_echk(F->go_1044) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1045 = NULL;
F->l2_1045 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1034));
(*(P815)rt_nil_check(F->l2_1045)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P815)rt_nil_check(F->l2_1045)).b = f_expr_103();
}
f_append_65(&F->more_1041, &F->tail2_1042, F->l2_1045);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1043 = 1;
F->go_1044 = 0;
} else if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1044 = 0;
}
}
if (rt_r_echk(F->ok_1043)) {
f_append_65(&F->keys_1037, &F->ktail_1038, F->lab_1039);
f_append_65(&F->keys_1037, &F->ktail_1038, F->more_1041);
} else {
g_tpos_848 = rt_r_ichk(F->save_1040);
}
}
if (((F->keys_1037 == NULL) && ((*(P815)rt_nil_check(F->lab_1039)).b != NULL))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1037 != NULL)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P815)rt_nil_check(F->it_1035)).a = F->keys_1037;
(*(P815)rt_nil_check(F->it_1035)).b = f_expr_103();
} else {
(*(P815)rt_nil_check(F->it_1035)).b = F->first_1036;
}
F->result_ = F->it_1035;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_at_body_end_116(void) {
  struct f_at_body_end_116fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = (((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }))) || f_at_kind_74((((rt_int)0LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_body_117(void) {
  struct f_body_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1046 = NULL;
F->tail_1047 = NULL;
F->stmts_1048 = RT_R_EUNDEF;
F->stmts_1048 = 0;
F->after_1049 = NULL;
while ((!f_at_body_end_116())) {
F->x_1050 = NULL;
F->x_1050 = f_body_element_118();
if (((F->x_1050 != NULL) && ((((rt_r_ichk((*(P815)rt_nil_check(F->x_1050)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P815)rt_nil_check(F->x_1050)).kind) == (((rt_int)41LL)))) || (rt_r_ichk((*(P815)rt_nil_check(F->x_1050)).kind) == (((rt_int)49LL)))) || (rt_r_ichk((*(P815)rt_nil_check(F->x_1050)).kind) == (((rt_int)48LL)))))) {
if (rt_r_echk(F->stmts_1048)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->x_1050)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1050 != NULL) && (rt_r_ichk((*(P815)rt_nil_check(F->x_1050)).kind) >= (((rt_int)42LL)))) && (rt_r_ichk((*(P815)rt_nil_check(F->x_1050)).kind) <= (((rt_int)51LL))))) {
if ((rt_r_echk(F->stmts_1048) && (F->after_1049 == NULL))) {
F->after_1049 = F->x_1050;
}
} else if (((F->x_1050 != NULL) && (rt_r_ichk((*(P815)rt_nil_check(F->x_1050)).kind) != (((rt_int)33LL))))) {
if ((F->after_1049 != NULL)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->after_1049)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1048 = 1;
}
f_append_65(&F->head_1046, &F->tail_1047, F->x_1050);
}
F->result_ = F->head_1046;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_body_element_118(void) {
  struct f_body_element_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1051 = NULL;
F->pr_1052 = NULL;
F->pr_1052 = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1051 = f_declaration_119();
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1051 = f_nn_61((((rt_int)33LL)), f_cur_line_68());
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1051)).a = f_expr_103();
} else {
F->x_1051 = f_statement_140();
}
if ((F->pr_1052 != NULL)) {
F->p_1053 = NULL;
F->p_1053 = F->x_1051;
while ((F->p_1053 != NULL)) {
if (((*(P815)rt_nil_check(F->p_1053)).prags == NULL)) {
(*(P815)rt_nil_check(F->p_1053)).prags = F->pr_1052;
} else {
(*(P815)rt_nil_check(F->p_1053)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->pr_1052))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1053)).prags))->all)); b_; }));
}
F->p_1053 = (*(P815)rt_nil_check(F->p_1053)).next;
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1051;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_declaration_119(void) {
  struct f_declaration_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1054 = RT_R_IUNDEF;
F->line_1054 = f_cur_line_68();
if ((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })))) {
F->result_ = f_object_decl_120();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) {
F->result_ = f_abbrev_decl_121();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->result_ = f_type_decl_123();
goto ret_;
} else if (((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; })))) {
F->result_ = f_subprogram_decl_132();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) {
F->result_ = f_capsule_decl_133();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) {
F->result_ = f_expose_decl_137();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->result_ = f_task_decl_136();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; }))) {
F->result_ = f_generic_decl_135();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) {
F->head_1055 = NULL;
F->tail_1056 = NULL;
F->names_1057 = NULL;
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->names_1057 = f_id_list_91();
while ((F->names_1057 != NULL)) {
F->x_1058 = NULL;
F->x_1058 = f_nn_61((((rt_int)49LL)), rt_r_ichk(F->line_1054));
(*(P815)rt_nil_check(F->x_1058)).name = (*(P815)rt_nil_check(F->names_1057)).name;
f_append_65(&F->head_1055, &F->tail_1056, F->x_1058);
F->names_1057 = (*(P815)rt_nil_check(F->names_1057)).next;
}
F->result_ = F->head_1055;
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

static P815 f_object_decl_120(void) {
  struct f_object_decl_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1059 = RT_R_IUNDEF;
F->line_1059 = f_cur_line_68();
F->is_var_1060 = RT_R_EUNDEF;
F->is_var_1060 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1061 = NULL;
F->st_1062 = NULL;
F->init_1063 = NULL;
F->loc_1064 = NULL;
F->loc_kind_1065 = RT_R_IUNDEF;
F->loc_kind_1065 = ((rt_int)0LL);
F->head_1066 = NULL;
F->tail_1067 = NULL;
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->names_1061 = f_id_list_91();
if (rt_r_echk(F->is_var_1060)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1062 = f_p_subtype_92();
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P808)rt_nil_check((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->loc_kind_1065 = ((rt_int)1LL);
} else {
F->loc_kind_1065 = ((rt_int)2LL);
}
F->loc_1064 = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1063 = f_expr_103();
}
} else {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1062 = f_p_subtype_92();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1063 = f_expr_103();
}
while ((F->names_1061 != NULL)) {
F->x_1068 = NULL;
if (rt_r_echk(F->is_var_1060)) {
F->x_1068 = f_nn_61((((rt_int)40LL)), rt_r_ichk(F->line_1059));
} else {
F->x_1068 = f_nn_61((((rt_int)41LL)), rt_r_ichk(F->line_1059));
}
(*(P815)rt_nil_check(F->x_1068)).name = (*(P815)rt_nil_check(F->names_1061)).name;
(*(P815)rt_nil_check(F->x_1068)).a = F->st_1062;
(*(P815)rt_nil_check(F->x_1068)).b = F->init_1063;
(*(P815)rt_nil_check(F->x_1068)).c = F->loc_1064;
(*(P815)rt_nil_check(F->x_1068)).ival = rt_r_ichk(F->loc_kind_1065);
f_append_65(&F->head_1066, &F->tail_1067, F->x_1068);
F->names_1061 = (*(P815)rt_nil_check(F->names_1061)).next;
}
F->result_ = F->head_1066;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_abbrev_decl_121(void) {
  struct f_abbrev_decl_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1069 = NULL;
F->x_1069 = f_nn_61((((rt_int)42LL)), f_cur_line_68());
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1069)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_1069)).b = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P815)rt_nil_check(F->x_1069)).a = f_p_subtype_92();
F->result_ = F->x_1069;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_skip_rep_122(void) {
  struct f_skip_rep_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->depth_1070 = RT_R_IUNDEF;
F->depth_1070 = ((rt_int)0LL);
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((rt_r_ichk(F->depth_1070) == ((rt_int)0LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_74((((rt_int)0LL)))))) {
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_1070 = rt_add(rt_r_ichk(F->depth_1070), ((rt_int)1LL));
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_1070 = rt_sub(rt_r_ichk(F->depth_1070), ((rt_int)1LL));
}
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
}
}
ret_:
  RT_FPOP();
  return;
}

static P815 f_type_decl_123(void) {
  struct f_type_decl_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1071 = RT_R_IUNDEF;
F->line_1071 = f_cur_line_68();
F->name_1072 = NULL;
F->params_1073 = NULL;
F->x_1074 = NULL;
F->tts_1075 = NULL;
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->name_1072 = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1075 = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1073 = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P808)rt_nil_check((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->x_1074 = f_nn_61((((rt_int)44LL)), rt_r_ichk(F->line_1071));
(*(P815)rt_nil_check(F->x_1074)).d = F->params_1073;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_1074)).b = f_formal_params_126();
}
} else {
F->x_1074 = f_nn_61((((rt_int)43LL)), rt_r_ichk(F->line_1071));
(*(P815)rt_nil_check(F->x_1074)).b = F->params_1073;
}
(*(P815)rt_nil_check(F->x_1074)).name = F->name_1072;
(*(P815)rt_nil_check(F->x_1074)).e = F->tts_1075;
(*(P815)rt_nil_check(F->x_1074)).a = f_p_subtype_92();
f_skip_rep_122();
F->result_ = F->x_1074;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_mode_of_125(rstr *w_124) {
  struct f_mode_of_125fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_124 = w_124;
if (rt_str_eq((*F->w_124), rt_str("VAR", 3))) {
F->result_ = (((rt_int)2LL));
goto ret_;
} else if (rt_str_eq((*F->w_124), rt_str("OUT", 3))) {
F->result_ = (((rt_int)3LL));
goto ret_;
} else if (rt_str_eq((*F->w_124), rt_str("READONLY", 8))) {
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

static P815 f_formal_params_126(void) {
  struct f_formal_params_126fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1076 = NULL;
F->tail_1077 = NULL;
F->more_1078 = RT_R_EUNDEF;
F->more_1078 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1078)) {
F->mode_1079 = RT_R_IUNDEF;
F->mode_1079 = (((rt_int)1LL));
F->names_1080 = NULL;
F->ntail_1081 = NULL;
F->st_1082 = NULL;
if ((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1079 = f_mode_of_125(&(((P808)rt_nil_check((*(P810)rt_nil_check((((P812)rt_nil_check(g_toks_846))->all).p[(rt_index(rt_r_ichk(g_tpos_848), (((P812)rt_nil_check(g_toks_846))->all).lo, (((P812)rt_nil_check(g_toks_846))->all).hi) - (((P812)rt_nil_check(g_toks_846))->all).lo)])).s))->all));
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
}
f_append_65(&F->names_1080, &F->ntail_1081, f_name_node_90());
while ((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_76(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P808)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P808)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
f_append_65(&F->names_1080, &F->ntail_1081, f_name_node_90());
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1082 = f_p_subtype_92();
while ((F->names_1080 != NULL)) {
F->p_1083 = NULL;
F->p_1083 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P815)rt_nil_check(F->names_1080)).line));
(*(P815)rt_nil_check(F->p_1083)).name = (*(P815)rt_nil_check(F->names_1080)).name;
(*(P815)rt_nil_check(F->p_1083)).ival = rt_r_ichk(F->mode_1079);
(*(P815)rt_nil_check(F->p_1083)).a = F->st_1082;
f_append_65(&F->head_1076, &F->tail_1077, F->p_1083);
F->names_1080 = (*(P815)rt_nil_check(F->names_1080)).next;
}
F->more_1078 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1076;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_128(P815 owner_127) {
  struct f_imports_list_128fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_127 = owner_127;
F->head_1084 = NULL;
F->tail_1085 = NULL;
F->more_1086 = RT_R_EUNDEF;
F->more_1086 = 1;
if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P815)rt_nil_check(F->owner_127)).flag = rt_add(rt_r_ichk((*(P815)rt_nil_check(F->owner_127)).flag), ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (rt_r_echk(F->more_1086)) {
F->ro_1087 = RT_R_EUNDEF;
F->ro_1087 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1088 = NULL;
F->x_1088 = f_name_node_90();
if (rt_r_echk(F->ro_1087)) {
(*(P815)rt_nil_check(F->x_1088)).ival = ((rt_int)1LL);
}
f_append_65(&F->head_1084, &F->tail_1085, F->x_1088);
F->more_1086 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P815)rt_nil_check(F->owner_127)).d = F->head_1084;
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_definable_130(rstr *w_129) {
  struct f_is_definable_130fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_129 = w_129;
F->result_ = ((((((((((((((((((((rt_str_eq((*F->w_129), rt_str("+", 1)) || rt_str_eq((*F->w_129), rt_str("-", 1))) || rt_str_eq((*F->w_129), rt_str("*", 1))) || rt_str_eq((*F->w_129), rt_str("/", 1))) || rt_str_eq((*F->w_129), rt_str("**", 2))) || rt_str_eq((*F->w_129), rt_str("&", 1))) || rt_str_eq((*F->w_129), rt_str("=", 1))) || rt_str_eq((*F->w_129), rt_str("<", 1))) || rt_str_eq((*F->w_129), rt_str("<=", 2))) || rt_str_eq((*F->w_129), rt_str(">", 1))) || rt_str_eq((*F->w_129), rt_str(">=", 2))) || rt_str_eq((*F->w_129), rt_str("/=", 2))) || rt_str_eq((*F->w_129), rt_str("DIV", 3))) || rt_str_eq((*F->w_129), rt_str("MOD", 3))) || rt_str_eq((*F->w_129), rt_str("AND", 3))) || rt_str_eq((*F->w_129), rt_str("OR", 2))) || rt_str_eq((*F->w_129), rt_str("XOR", 3))) || rt_str_eq((*F->w_129), rt_str("NOT", 3))) || rt_str_eq((*F->w_129), rt_str("IN", 2))) || rt_str_eq((*F->w_129), rt_str(":=", 2))) || rt_str_eq((*F->w_129), rt_str("#", 1)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P808 f_definable_name_131(void) {
  struct f_definable_name_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_kind_74((((rt_int)1LL))) || (f_at_kind_74((((rt_int)3LL))) && f_is_definable_130(&(((P808)rt_nil_check((*(P810)rt_nil_check((((P812)rt_nil_check(g_toks_846))->all).p[(rt_index(rt_r_ichk(g_tpos_848), (((P812)rt_nil_check(g_toks_846))->all).lo, (((P812)rt_nil_check(g_toks_846))->all).hi) - (((P812)rt_nil_check(g_toks_846))->all).lo)])).s))->all))))) {
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->result_ = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_848), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P815 f_subprogram_decl_132(void) {
  struct f_subprogram_decl_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1089 = RT_R_IUNDEF;
F->line_1089 = f_cur_line_68();
F->x_1090 = NULL;
F->is_abn_1091 = RT_R_EUNDEF;
F->is_abn_1091 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1092 = RT_R_EUNDEF;
F->is_func_1092 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
F->dummy_1093 = RT_R_EUNDEF;
if (rt_r_echk(F->is_func_1092)) {
F->x_1090 = f_nn_61((((rt_int)46LL)), rt_r_ichk(F->line_1089));
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1090 = f_nn_61((((rt_int)45LL)), rt_r_ichk(F->line_1089));
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
if (rt_r_echk(F->is_abn_1091)) {
(*(P815)rt_nil_check(F->x_1090)).flag = ((rt_int)1LL);
}
(*(P815)rt_nil_check(F->x_1090)).name = f_definable_name_131();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_1090)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_1090)).a = f_formal_params_126();
}
if (rt_r_echk(F->is_func_1092)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P815)rt_nil_check(F->x_1090)).b = f_p_subtype_92();
}
F->dummy_1093 = f_imports_list_128(F->x_1090);
if (((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P815)rt_nil_check(F->x_1090)).prags == NULL)) {
(*(P815)rt_nil_check(F->x_1090)).prags = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P815)rt_nil_check(F->x_1090)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->x_1090)).prags))->all), (((P808)rt_nil_check((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P815)rt_nil_check(F->x_1090)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (rt_r_echk(F->is_func_1092)) {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P808)rt_nil_check(f_definable_name_131()))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->x_1090)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P808)rt_nil_check((*(P815)rt_nil_check(F->x_1090)).name))->all)); b_; }));
}
F->result_ = F->x_1090;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_capsule_decl_133(void) {
  struct f_capsule_decl_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1094 = NULL;
F->x_1094 = f_nn_61((((rt_int)47LL)), f_cur_line_68());
F->dummy_1095 = RT_R_EUNDEF;
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1094)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_1094)).b = f_formal_params_126();
}
F->dummy_1095 = f_imports_list_128(F->x_1094);
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P815)rt_nil_check(F->x_1094)).ival = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P815)rt_nil_check(F->x_1094)).ival = ((rt_int)0LL);
} else {
F->head_1096 = NULL;
F->tail_1097 = NULL;
F->more_1098 = RT_R_EUNDEF;
F->more_1098 = 1;
while (rt_r_echk(F->more_1098)) {
F->n_1099 = NULL;
F->n_1099 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P815)rt_nil_check(F->n_1099)).ival = ((rt_int)1LL);
}
(*(P815)rt_nil_check(F->n_1099)).name = f_definable_name_131();
f_append_65(&F->head_1096, &F->tail_1097, F->n_1099);
F->more_1098 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P815)rt_nil_check(F->x_1094)).a = F->head_1096;
(*(P815)rt_nil_check(F->x_1094)).ival = ((rt_int)2LL);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P815)rt_nil_check(F->x_1094)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((((P808)rt_nil_check(f_expect_id_89()))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->x_1094)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1094;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_formal_tt_134(void) {
  struct f_formal_tt_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1100 = NULL;
F->tail_1101 = NULL;
F->more_1102 = RT_R_EUNDEF;
F->more_1102 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1102)) {
f_append_65(&F->head_1100, &F->tail_1101, f_name_node_90());
F->more_1102 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1100;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_generic_decl_135(void) {
  struct f_generic_decl_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1103 = NULL;
F->x_1103 = f_nn_61((((rt_int)51LL)), f_cur_line_68());
F->head_1104 = NULL;
F->tail_1105 = NULL;
F->more_1106 = RT_R_EUNDEF;
F->more_1106 = 1;
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
while (rt_r_echk(F->more_1106)) {
F->names_1107 = NULL;
F->names_1107 = f_id_list_91();
F->kind_1108 = RT_R_IUNDEF;
F->kind_1108 = ((rt_int)6LL);
F->st_1109 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1108 = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1108 = ((rt_int)2LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1108 = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1108 = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1108 = ((rt_int)5LL);
} else {
F->st_1109 = f_p_subtype_92();
}
if (((rt_r_ichk(F->kind_1108) <= ((rt_int)2LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P815)rt_nil_check(F->x_1103)).e = f_actual_params_94();
} else if (((rt_r_ichk(F->kind_1108) >= ((rt_int)3LL)) && (rt_r_ichk(F->kind_1108) <= ((rt_int)5LL)))) {
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_1109 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
}
if (((rt_r_ichk(F->kind_1108) == ((rt_int)4LL)) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1109 = f_p_subtype_92();
}
}
while ((F->names_1107 != NULL)) {
F->p_1110 = NULL;
F->p_1110 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P815)rt_nil_check(F->names_1107)).line));
(*(P815)rt_nil_check(F->p_1110)).name = (*(P815)rt_nil_check(F->names_1107)).name;
(*(P815)rt_nil_check(F->p_1110)).ival = rt_r_ichk(F->kind_1108);
(*(P815)rt_nil_check(F->p_1110)).a = F->st_1109;
f_append_65(&F->head_1104, &F->tail_1105, F->p_1110);
F->names_1107 = (*(P815)rt_nil_check(F->names_1107)).next;
}
F->more_1106 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_1106 = 1;
while (rt_r_echk(F->more_1106)) {
F->nm_1111 = NULL;
F->nm_1111 = f_definable_name_131();
F->st_1112 = NULL;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_1112 = f_p_subtype_92();
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_1112 = f_p_subtype_92();
}
F->more_1106 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P815)rt_nil_check(F->x_1103)).a = F->head_1104;
(*(P815)rt_nil_check(F->x_1103)).b = f_declaration_119();
(*(P815)rt_nil_check(F->x_1103)).name = (*(P815)rt_nil_check((*(P815)rt_nil_check(F->x_1103)).b)).name;
F->result_ = F->x_1103;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_task_decl_136(void) {
  struct f_task_decl_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1113 = NULL;
F->x_1113 = f_nn_61((((rt_int)50LL)), f_cur_line_68());
F->dummy_1114 = RT_R_EUNDEF;
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1113)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_1113)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_1113)).a = f_formal_params_126();
}
F->dummy_1114 = f_imports_list_128(F->x_1113);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P815)rt_nil_check(F->x_1113)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P808)rt_nil_check(f_expect_id_89()))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->x_1113)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P808)rt_nil_check((*(P815)rt_nil_check(F->x_1113)).name))->all)); b_; }));
}
F->result_ = F->x_1113;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_expose_decl_137(void) {
  struct f_expose_decl_137fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1115 = NULL;
F->x_1115 = f_nn_61((((rt_int)48LL)), f_cur_line_68());
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P815)rt_nil_check(F->x_1115)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1116 = NULL;
F->tail_1117 = NULL;
F->more_1118 = RT_R_EUNDEF;
F->more_1118 = 1;
while (rt_r_echk(F->more_1118)) {
F->n_1119 = NULL;
F->n_1119 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P815)rt_nil_check(F->n_1119)).ival = ((rt_int)1LL);
}
(*(P815)rt_nil_check(F->n_1119)).name = f_definable_name_131();
f_append_65(&F->head_1116, &F->tail_1117, F->n_1119);
F->more_1118 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P815)rt_nil_check(F->x_1115)).a = F->head_1116;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P815)rt_nil_check(F->x_1115)).flag = ((rt_int)1LL);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P815)rt_nil_check(F->x_1115)).flag = rt_add(rt_r_ichk((*(P815)rt_nil_check(F->x_1115)).flag), ((rt_int)2LL));
}
(*(P815)rt_nil_check(F->x_1115)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_1115)).b = f_actual_params_94();
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1120 = NULL;
F->tail_1121 = NULL;
F->more_1122 = RT_R_EUNDEF;
F->more_1122 = 1;
while (rt_r_echk(F->more_1122)) {
F->n_1123 = NULL;
F->n_1123 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
F->tgt_1124 = NULL;
F->tgt_1124 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P815)rt_nil_check(F->n_1123)).name = f_definable_name_131();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P815)rt_nil_check(F->tgt_1124)).name = f_definable_name_131();
(*(P815)rt_nil_check(F->n_1123)).a = F->tgt_1124;
f_append_65(&F->head_1120, &F->tail_1121, F->n_1123);
F->more_1122 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P815)rt_nil_check(F->x_1115)).c = F->head_1120;
}
F->result_ = F->x_1115;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_compound_kw_139(rstr *w_138) {
  struct f_is_compound_kw_139fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_138 = w_138;
F->result_ = (((((((rt_str_eq((*F->w_138), rt_str("IF", 2)) || rt_str_eq((*F->w_138), rt_str("CASE", 4))) || rt_str_eq((*F->w_138), rt_str("FOR", 3))) || rt_str_eq((*F->w_138), rt_str("WHILE", 5))) || rt_str_eq((*F->w_138), rt_str("BEGIN", 5))) || rt_str_eq((*F->w_138), rt_str("GUARD", 5))) || rt_str_eq((*F->w_138), rt_str("WAIT", 4))) || rt_str_eq((*F->w_138), rt_str("REGION", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_statement_140(void) {
  struct f_statement_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1125 = NULL;
F->ltail_1126 = NULL;
F->match_1127 = NULL;
F->s_1128 = NULL;
while (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P808)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_65(&F->labels_1125, &F->ltail_1126, f_name_node_90());
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
}
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_139(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P808)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all); b_; })))) {
F->match_1127 = f_expect_id_89();
}
F->s_1128 = f_unlabeled_statement_141();
if ((F->match_1127 != NULL)) {
if ((((((((rt_r_ichk((*(P815)rt_nil_check(F->s_1128)).kind) != (((rt_int)22LL))) && (rt_r_ichk((*(P815)rt_nil_check(F->s_1128)).kind) != (((rt_int)23LL)))) && (rt_r_ichk((*(P815)rt_nil_check(F->s_1128)).kind) != (((rt_int)24LL)))) && (rt_r_ichk((*(P815)rt_nil_check(F->s_1128)).kind) != (((rt_int)25LL)))) && (rt_r_ichk((*(P815)rt_nil_check(F->s_1128)).kind) != (((rt_int)26LL)))) && (rt_r_ichk((*(P815)rt_nil_check(F->s_1128)).kind) != (((rt_int)35LL)))) && (rt_r_ichk((*(P815)rt_nil_check(F->s_1128)).kind) != (((rt_int)36LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_1128)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P808)rt_nil_check(f_expect_id_89()))->all), (((P808)rt_nil_check(F->match_1127))->all)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_1128)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P808)rt_nil_check(F->match_1127))->all)); b_; }));
}
(*(P815)rt_nil_check(F->s_1128)).tag = F->match_1127;
}
(*(P815)rt_nil_check(F->s_1128)).labels = F->labels_1125;
F->result_ = F->s_1128;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_unlabeled_statement_141(void) {
  struct f_unlabeled_statement_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1129 = RT_R_IUNDEF;
F->line_1129 = f_cur_line_68();
F->x_1130 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }))) {
F->result_ = f_if_stmt_146();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }))) {
F->result_ = f_case_stmt_147();
goto ret_;
} else if ((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; })))) {
F->result_ = f_repeat_stmt_148();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BEGIN", 5); b_; }))) {
F->x_1130 = f_nn_61((((rt_int)25LL)), rt_r_ichk(F->line_1129));
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1130)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1130;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_149();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1130 = f_nn_61((((rt_int)27LL)), rt_r_ichk(F->line_1129));
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1130)).name = f_expect_id_89();
F->result_ = F->x_1130;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1130 = f_nn_61((((rt_int)28LL)), rt_r_ichk(F->line_1129));
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P815)rt_nil_check(F->x_1130)).a = f_expr_103();
}
F->result_ = F->x_1130;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1130 = f_nn_61((((rt_int)29LL)), rt_r_ichk(F->line_1129));
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1130)).name = f_expect_id_89();
F->result_ = F->x_1130;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1130 = f_nn_61((((rt_int)30LL)), rt_r_ichk(F->line_1129));
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1130)).name = f_expect_id_89();
F->result_ = F->x_1130;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)31LL)), rt_r_ichk(F->line_1129));
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1130 = f_nn_61((((rt_int)34LL)), rt_r_ichk(F->line_1129));
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1130)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_1130)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_1130)).b = f_actual_params_94();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P815)rt_nil_check(F->x_1130)).a = f_postfix_113();
F->result_ = F->x_1130;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1131 = NULL;
F->tail_1132 = NULL;
F->x_1130 = f_nn_61((((rt_int)35LL)), rt_r_ichk(F->line_1129));
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1133 = NULL;
F->itail_1134 = NULL;
F->more_1135 = RT_R_EUNDEF;
F->more_1135 = 1;
while (rt_r_echk(F->more_1135)) {
f_append_65(&F->invs_1133, &F->itail_1134, f_postfix_113());
F->more_1135 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1131, &F->tail_1132, f_arm_145(F->invs_1133, f_body_117(), rt_r_ichk(F->line_1129)));
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P815)rt_nil_check(F->x_1130)).a = F->head_1131;
F->result_ = F->x_1130;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1130 = f_nn_61((((rt_int)36LL)), rt_r_ichk(F->line_1129));
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1130)).a = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P815)rt_nil_check(F->x_1130)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1130;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1130 = f_nn_61((((rt_int)32LL)), rt_r_ichk(F->line_1129));
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1130)).a = f_postfix_113();
if ((!(f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P808)rt_nil_check((*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P815)rt_nil_check(F->x_1130)).b = f_actual_params_94();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P815)rt_nil_check(F->x_1130)).c = f_expr_103();
}
F->result_ = F->x_1130;
goto ret_;
}
{
F->target_1136 = NULL;
F->target_1136 = f_postfix_113();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1130 = f_nn_61((((rt_int)20LL)), rt_r_ichk(F->line_1129));
(*(P815)rt_nil_check(F->x_1130)).a = F->target_1136;
(*(P815)rt_nil_check(F->x_1130)).b = f_expr_103();
} else {
F->x_1130 = f_nn_61((((rt_int)21LL)), rt_r_ichk(F->line_1129));
(*(P815)rt_nil_check(F->x_1130)).a = F->target_1136;
}
}
F->result_ = F->x_1130;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_arm_145(P815 cond_142, P815 b_143, rt_int line_144) {
  struct f_arm_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_142 = cond_142;
F->b_143 = b_143;
F->line_144 = line_144;
F->x_1137 = NULL;
F->x_1137 = f_nn_61((((rt_int)60LL)), F->line_144);
(*(P815)rt_nil_check(F->x_1137)).a = F->cond_142;
(*(P815)rt_nil_check(F->x_1137)).b = F->b_143;
F->result_ = F->x_1137;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_if_stmt_146(void) {
  struct f_if_stmt_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1138 = NULL;
F->x_1138 = f_nn_61((((rt_int)22LL)), f_cur_line_68());
F->head_1139 = NULL;
F->tail_1140 = NULL;
F->cond_1141 = NULL;
F->go_1142 = RT_R_EUNDEF;
F->go_1142 = 1;
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
F->cond_1141 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1139, &F->tail_1140, f_arm_145(F->cond_1141, f_body_117(), rt_r_ichk((*(P815)rt_nil_check(F->x_1138)).line)));
while (rt_r_echk(F->go_1142)) {
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1141 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1139, &F->tail_1140, f_arm_145(F->cond_1141, f_body_117(), rt_r_ichk((*(P815)rt_nil_check(F->x_1138)).line)));
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P815)rt_nil_check(F->x_1138)).flag = ((rt_int)1LL);
(*(P815)rt_nil_check(F->x_1138)).b = f_body_117();
} else {
F->go_1142 = 0;
}
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P815)rt_nil_check(F->x_1138)).a = F->head_1139;
F->result_ = F->x_1138;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_case_stmt_147(void) {
  struct f_case_stmt_147fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1143 = NULL;
F->x_1143 = f_nn_61((((rt_int)23LL)), f_cur_line_68());
F->head_1144 = NULL;
F->tail_1145 = NULL;
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1143)).a = f_expr_103();
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1146 = NULL;
F->ltail_1147 = NULL;
F->more_1148 = RT_R_EUNDEF;
F->more_1148 = 1;
while (rt_r_echk(F->more_1148)) {
F->l_1149 = NULL;
F->l_1149 = f_nn_61((((rt_int)61LL)), f_cur_line_68());
(*(P815)rt_nil_check(F->l_1149)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P815)rt_nil_check(F->l_1149)).b = f_expr_103();
}
f_append_65(&F->labs_1146, &F->ltail_1147, F->l_1149);
F->more_1148 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1144, &F->tail_1145, f_arm_145(F->labs_1146, f_body_117(), rt_r_ichk((*(P815)rt_nil_check(F->x_1143)).line)));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P815)rt_nil_check(F->x_1143)).flag = ((rt_int)1LL);
(*(P815)rt_nil_check(F->x_1143)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P815)rt_nil_check(F->x_1143)).b = F->head_1144;
F->result_ = F->x_1143;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_repeat_stmt_148(void) {
  struct f_repeat_stmt_148fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1150 = NULL;
F->x_1150 = f_nn_61((((rt_int)24LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P815)rt_nil_check(F->x_1150)).flag = ((rt_int)1LL);
(*(P815)rt_nil_check(F->x_1150)).name = f_expect_id_89();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P815)rt_nil_check(F->x_1150)).ival = ((rt_int)1LL);
}
(*(P815)rt_nil_check(F->x_1150)).a = f_p_subtype_92();
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P815)rt_nil_check(F->x_1150)).a = f_expr_103();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P815)rt_nil_check(F->x_1150)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1150;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_guard_stmt_149(void) {
  struct f_guard_stmt_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1151 = NULL;
F->x_1151 = f_nn_61((((rt_int)26LL)), f_cur_line_68());
F->head_1152 = NULL;
F->tail_1153 = NULL;
g_tpos_848 = rt_add(rt_r_ichk(g_tpos_848), ((rt_int)1LL));
(*(P815)rt_nil_check(F->x_1151)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1154 = NULL;
F->h_1154 = f_nn_61((((rt_int)62LL)), f_cur_line_68());
(*(P815)rt_nil_check(F->h_1154)).a = f_id_list_91();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P815)rt_nil_check(F->h_1154)).b = f_body_117();
f_append_65(&F->head_1152, &F->tail_1153, F->h_1154);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P815)rt_nil_check(F->x_1151)).flag = ((rt_int)1LL);
(*(P815)rt_nil_check(F->x_1151)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P815)rt_nil_check(F->x_1151)).b = F->head_1152;
F->result_ = F->x_1151;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_program_150(void) {
  struct f_program_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1155 = NULL;
F->tail_1156 = NULL;
while ((!f_at_kind_74((((rt_int)0LL))))) {
if ((!f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1157 = NULL;
F->pr_1157 = (*(P810)rt_nil_check(({ A814 b_ = (((P812)rt_nil_check(g_toks_846))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_848), b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1158 = NULL;
F->u_1158 = f_capsule_decl_133();
(*(P815)rt_nil_check(F->u_1158)).prags = F->pr_1157;
f_append_65(&F->head_1155, &F->tail_1156, F->u_1158);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1155;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_hash_152(rstr *s_151) {
  struct f_hash_152fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_151 = s_151;
F->h_1159 = RT_R_IUNDEF;
F->h_1159 = ((rt_int)0LL);
{ rt_int lo1161 = ((rt_int)1LL), hi1162 = ((rt_int)(((*F->s_151)).len));
for (rt_int it1163 = lo1161; it1163 <= hi1162; it1163++) {
F->i_1160 = it1163;
F->h_1159 = rt_mod(rt_add(rt_mul(rt_r_ichk(F->h_1159), ((rt_int)31LL)), ((rt_int)(rt_r_echk(rt_str_get((*F->s_151), F->i_1160))) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = rt_r_ichk(F->h_1159);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P825 f_lookup_154(rstr *name_153) {
  struct f_lookup_154fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_153 = name_153;
F->y_1164 = NULL;
F->y_1164 = ({ A831 b_ = (((P829)rt_nil_check(g_table_851))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_852 != NULL)) {
while ((F->y_1164 != NULL)) {
if (((rt_r_ichk((*(P825)rt_nil_check(F->y_1164)).depth) >= rt_r_ichk(g_gdepth_884)) && rt_str_eq((((P808)rt_nil_check((*(P825)rt_nil_check(F->y_1164)).name))->all), (*F->name_153)))) {
F->result_ = F->y_1164;
goto ret_;
}
F->y_1164 = (*(P825)rt_nil_check(F->y_1164)).chain;
}
F->y_1164 = ({ A831 b_ = (((P829)rt_nil_check(g_genv_852))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1164 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P825)rt_nil_check(F->y_1164)).name))->all), (*F->name_153))) {
F->result_ = F->y_1164;
goto ret_;
}
F->y_1164 = (*(P825)rt_nil_check(F->y_1164)).chain;
}
F->y_1164 = ({ A831 b_ = (((P829)rt_nil_check(g_table_851))->all); b_.p[(rt_index(f_hash_152(&(*F->name_153)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1164 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P825)rt_nil_check(F->y_1164)).name))->all), (*F->name_153))) {
F->result_ = F->y_1164;
goto ret_;
}
F->y_1164 = (*(P825)rt_nil_check(F->y_1164)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P825 f_lookup_decl_156(P815 d_155) {
  struct f_lookup_decl_156fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_155 = d_155;
F->y_1165 = NULL;
F->y_1165 = ({ A831 b_ = (((P829)rt_nil_check(g_table_851))->all); b_.p[(rt_index(f_hash_152(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->d_155)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1165 != NULL)) {
if (((*(P825)rt_nil_check(F->y_1165)).decl == F->d_155)) {
F->result_ = F->y_1165;
goto ret_;
}
F->y_1165 = (*(P825)rt_nil_check(F->y_1165)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_159(P825 y_157, rt_int line_158) {
  struct f_define_159fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_157 = y_157;
F->line_158 = line_158;
F->h_1166 = RT_R_IUNDEF;
F->h_1166 = f_hash_152(&(((P808)rt_nil_check((*(P825)rt_nil_check(F->y_157)).name))->all));
F->z_1167 = NULL;
F->z_1167 = ({ A831 b_ = (((P829)rt_nil_check(g_table_851))->all); b_.p[(rt_index(rt_r_ichk(F->h_1166), b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1167 != NULL)) {
if ((((rt_r_ichk((*(P825)rt_nil_check(F->z_1167)).depth) == rt_r_ichk(g_depth_854)) && rt_str_eq((((P808)rt_nil_check((*(P825)rt_nil_check(F->z_1167)).name))->all), (((P808)rt_nil_check((*(P825)rt_nil_check(F->y_157)).name))->all))) && (!(((f_overloadable_161(F->y_157) && f_overloadable_161(F->z_1167)) && (rt_r_ichk((*(P825)rt_nil_check(F->z_1167)).kind) == rt_r_ichk((*(P825)rt_nil_check(F->y_157)).kind))) && (!(f_same_signature_167((*(P825)rt_nil_check(F->y_157)).params, (*(P825)rt_nil_check(F->z_1167)).params) && f_same_tt_164((*(P825)rt_nil_check(F->y_157)).decl, (*(P825)rt_nil_check(F->z_1167)).decl))))))) {
f_fail_23(F->line_158, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P825)rt_nil_check(F->y_157)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1167 = (*(P825)rt_nil_check(F->z_1167)).chain;
}
(*(P825)rt_nil_check(F->y_157)).depth = rt_r_ichk(g_depth_854);
(*(P825)rt_nil_check(F->y_157)).chain = ({ A831 b_ = (((P829)rt_nil_check(g_table_851))->all); b_.p[(rt_index(rt_r_ichk(F->h_1166), b_.lo, b_.hi) - b_.lo)]; });
(((P829)rt_nil_check(g_table_851))->all).p[(rt_index(rt_r_ichk(F->h_1166), (((P829)rt_nil_check(g_table_851))->all).lo, (((P829)rt_nil_check(g_table_851))->all).hi) - (((P829)rt_nil_check(g_table_851))->all).lo)] = F->y_157;
(*(P825)rt_nil_check(F->y_157)).stack = g_scope_stack_855;
g_scope_stack_855 = F->y_157;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_161(P825 y_160) {
  struct f_overloadable_161fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_160 = y_160;
F->result_ = (((rt_r_ichk((*(P825)rt_nil_check(F->y_160)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P825)rt_nil_check(F->y_160)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P825)rt_nil_check(F->y_160)).kind) == (((rt_int)9LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_164(P815 a_162, P815 b_163) {
  struct f_same_tt_164fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_162 = a_162;
F->b_163 = b_163;
F->x_1168 = NULL;
F->y_1169 = NULL;
if (((F->a_162 == NULL) || (F->b_163 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1168 = (*(P815)rt_nil_check(F->a_162)).e;
F->y_1169 = (*(P815)rt_nil_check(F->b_163)).e;
while (((F->x_1168 != NULL) && (F->y_1169 != NULL))) {
if ((!rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->x_1168)).name))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->y_1169)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1168 = (*(P815)rt_nil_check(F->x_1168)).next;
F->y_1169 = (*(P815)rt_nil_check(F->y_1169)).next;
}
F->result_ = ((F->x_1168 == NULL) && (F->y_1169 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_167(P827 a_165, P827 b_166) {
  struct f_same_signature_167fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_165 = a_165;
F->b_166 = b_166;
F->x_1170 = NULL;
F->x_1170 = F->a_165;
F->y_1171 = NULL;
F->y_1171 = F->b_166;
while (((F->x_1170 != NULL) && (F->y_1171 != NULL))) {
if ((!f_same_212((*(P827)rt_nil_check(F->x_1170)).t, (*(P827)rt_nil_check(F->y_1171)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1170 = (*(P827)rt_nil_check(F->x_1170)).next;
F->y_1171 = (*(P827)rt_nil_check(F->y_1171)).next;
}
F->result_ = ((F->x_1170 == NULL) && (F->y_1171 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_168(void) {
  struct f_open_scope_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_854 = rt_add(rt_r_ichk(g_depth_854), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_169(void) {
  struct f_close_scope_169fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_855 != NULL) && (rt_r_ichk((*(P825)rt_nil_check(g_scope_stack_855)).depth) == rt_r_ichk(g_depth_854)))) {
(((P829)rt_nil_check(g_table_851))->all).p[(rt_index(f_hash_152(&(((P808)rt_nil_check((*(P825)rt_nil_check(g_scope_stack_855)).name))->all)), (((P829)rt_nil_check(g_table_851))->all).lo, (((P829)rt_nil_check(g_table_851))->all).hi) - (((P829)rt_nil_check(g_table_851))->all).lo)] = (*(P825)rt_nil_check(g_scope_stack_855)).chain;
g_scope_stack_855 = (*(P825)rt_nil_check(g_scope_stack_855)).stack;
}
g_depth_854 = rt_sub(rt_r_ichk(g_depth_854), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P825 f_new_sym_172(rt_int kind_170, P808 name_171) {
  struct f_new_sym_172fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_170 = kind_170;
F->name_171 = name_171;
F->y_1172 = NULL;
{ R826 *cell1173 = rt_alloc(sizeof(R826));
(*cell1173).name = NULL;
(*cell1173).t = NULL;
(*cell1173).c = NULL;
(*cell1173).access = NULL;
(*cell1173).cname = NULL;
(*cell1173).st = NULL;
(*cell1173).decl = NULL;
(*cell1173).params = NULL;
(*cell1173).result = NULL;
(*cell1173).members = NULL;
(*cell1173).mnext = NULL;
(*cell1173).binds = NULL;
(*cell1173).insts = NULL;
(*cell1173).env = NULL;
(*cell1173).chain = NULL;
(*cell1173).stack = NULL;
(*cell1173).owner = NULL;
(*cell1173).gctx = NULL;
(*cell1173).mv = NULL;
(*cell1173).reqs = NULL;
(*cell1173).home = NULL;
(*cell1173).capn = NULL;
F->y_1172 = cell1173;
}
(*(P825)rt_nil_check(F->y_1172)).kind = F->kind_170;
(*(P825)rt_nil_check(F->y_1172)).name = F->name_171;
F->result_ = F->y_1172;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P821 f_new_typ_174(rt_int kind_173) {
  struct f_new_typ_174fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_173 = kind_173;
F->t_1174 = NULL;
{ R822 *cell1175 = rt_alloc(sizeof(R822));
(*cell1175).name = NULL;
(*cell1175).lits = NULL;
(*cell1175).elem = NULL;
(*cell1175).idx = NULL;
(*cell1175).idx2 = NULL;
(*cell1175).elemcons = NULL;
(*cell1175).elemst = NULL;
(*cell1175).under = NULL;
(*cell1175).tparams = NULL;
(*cell1175).ocap = NULL;
(*cell1175).fields = NULL;
(*cell1175).target = NULL;
(*cell1175).decl = NULL;
(*cell1175).cname = NULL;
(*cell1175).initp = NULL;
(*cell1175).finalp = NULL;
(*cell1175).tpsyms = NULL;
(*cell1175).gen = NULL;
(*cell1175).gbinds = NULL;
(*cell1175).next = NULL;
(*cell1175).idxs = NULL;
F->t_1174 = cell1175;
}
(*(P821)rt_nil_check(F->t_1174)).kind = F->kind_173;
F->result_ = F->t_1174;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P817 f_new_cons_175(void) {
  struct f_new_cons_175fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1176 = NULL;
{ R818 *cell1177 = rt_alloc(sizeof(R818));
(*cell1177).lo = NULL;
(*cell1177).hi = NULL;
(*cell1177).lo2 = NULL;
(*cell1177).hi2 = NULL;
(*cell1177).slen = NULL;
(*cell1177).args = NULL;
(*cell1177).prec = NULL;
(*cell1177).bnds = NULL;
F->c_1176 = cell1177;
}
F->result_ = F->c_1176;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_177(P821 t_176) {
  struct f_scalar_kind_177fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_176 = t_176;
F->result_ = ((F->t_176 != NULL) && (((rt_r_ichk((*(P821)rt_nil_check(F->t_176)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->t_176)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P821)rt_nil_check(F->t_176)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_179(P821 t_178) {
  struct f_bound_ctype_179fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_178 = t_178;
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_178)).kind) == (((rt_int)3LL)))) {
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

static rstr f_cbound_182(P817 c_180, rstr *b_181) {
  struct f_cbound_182fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_180 = c_180;
F->b_181 = b_181;
F->p_1178 = NULL;
F->p_1178 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!rt_r_echk((*(P817)rt_nil_check(F->c_180)).dyn)) || (rt_r_ichk((*(P817)rt_nil_check(F->c_180)).lvl) <= ((rt_int)0LL)))) {
F->result_ = (*F->b_181);
goto ret_;
}
{ rt_int lo1180 = ((rt_int)1LL), hi1181 = rt_sub(rt_r_ichk(g_cur_level_868), rt_r_ichk((*(P817)rt_nil_check(F->c_180)).lvl));
for (rt_int it1182 = lo1180; it1182 <= hi1181; it1182++) {
F->i_1179 = it1182;
F->p_1178 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->p_1178))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->p_1178))->all), rt_str("->", 2)), (*F->b_181));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_184(P817 c_183) {
  struct f_clo_184fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_183 = c_183;
F->result_ = f_cbound_182(F->c_183, &(((P808)rt_nil_check((*(P817)rt_nil_check(F->c_183)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_186(P817 c_185) {
  struct f_chi_186fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_185 = c_185;
F->result_ = f_cbound_182(F->c_185, &(((P808)rt_nil_check((*(P817)rt_nil_check(F->c_185)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_189(P821 t_187, P817 c_188) {
  struct f_sub_lo_189fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_187 = t_187;
F->c_188 = c_188;
if (((F->c_188 != NULL) && ((*(P817)rt_nil_check(F->c_188)).lo != NULL))) {
F->result_ = f_clo_184(F->c_188);
goto ret_;
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_187)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_187)).kind) == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_192(P821 t_190, P817 c_191) {
  struct f_sub_hi_192fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_190 = t_190;
F->c_191 = c_191;
if (((F->c_191 != NULL) && ((*(P817)rt_nil_check(F->c_191)).lo != NULL))) {
F->result_ = f_chi_186(F->c_191);
goto ret_;
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_190)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_190)).kind) == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_67((*(P821)rt_nil_check(F->t_190)).lits), ((rt_int)1LL)));
goto ret_;
}
F->result_ = rt_str("RT_IMAX", 7);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_raw_storage_195(rstr *name_193, rstr *ct_194) {
  struct f_raw_storage_195fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_193 = name_193;
F->ct_194 = ct_194;
if ((!rt_r_echk(g_in_func_867))) {
F->g_1183 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_193)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_861, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_194)), rt_str(" ", 1)), F->g_1183), rt_str(";", 1)); b_; }));
g_st_field_873 = f_mk_3(&F->g_1183);
F->result_ = F->g_1183;
goto ret_;
}
{
F->f_1184 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_193), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_194)), rt_str(" ", 1)), F->f_1184), rt_str(";", 1)); b_; }));
g_st_field_873 = f_mk_3(&F->f_1184);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1184);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P817 f_copy_cons_197(P817 c_196) {
  struct f_copy_cons_197fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_196 = c_196;
F->r_1185 = NULL;
{ R818 *cell1186 = rt_alloc(sizeof(R818));
(*cell1186).lo = NULL;
(*cell1186).hi = NULL;
(*cell1186).lo2 = NULL;
(*cell1186).hi2 = NULL;
(*cell1186).slen = NULL;
(*cell1186).args = NULL;
(*cell1186).prec = NULL;
(*cell1186).bnds = NULL;
F->r_1185 = cell1186;
}
(*(P817)rt_nil_check(F->r_1185)).lo = (*(P817)rt_nil_check(F->c_196)).lo;
(*(P817)rt_nil_check(F->r_1185)).hi = (*(P817)rt_nil_check(F->c_196)).hi;
(*(P817)rt_nil_check(F->r_1185)).lo2 = (*(P817)rt_nil_check(F->c_196)).lo2;
(*(P817)rt_nil_check(F->r_1185)).hi2 = (*(P817)rt_nil_check(F->c_196)).hi2;
(*(P817)rt_nil_check(F->r_1185)).slen = (*(P817)rt_nil_check(F->c_196)).slen;
(*(P817)rt_nil_check(F->r_1185)).mlo = rt_r_ichk((*(P817)rt_nil_check(F->c_196)).mlo);
(*(P817)rt_nil_check(F->r_1185)).mhi = rt_r_ichk((*(P817)rt_nil_check(F->c_196)).mhi);
(*(P817)rt_nil_check(F->r_1185)).hasm = rt_r_echk((*(P817)rt_nil_check(F->c_196)).hasm);
(*(P817)rt_nil_check(F->r_1185)).args = (*(P817)rt_nil_check(F->c_196)).args;
(*(P817)rt_nil_check(F->r_1185)).dyn = rt_r_echk((*(P817)rt_nil_check(F->c_196)).dyn);
(*(P817)rt_nil_check(F->r_1185)).lvl = rt_r_ichk((*(P817)rt_nil_check(F->c_196)).lvl);
(*(P817)rt_nil_check(F->r_1185)).prec = (*(P817)rt_nil_check(F->c_196)).prec;
F->result_ = F->r_1185;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P817 f_freeze_200(P817 c_198, P821 t_199) {
  struct f_freeze_200fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_198 = c_198;
F->t_199 = t_199;
F->r_1187 = NULL;
F->saved_field_1188 = NULL;
F->saved_field_1188 = g_st_field_873;
if ((((((F->c_198 == NULL) || ((*(P817)rt_nil_check(F->c_198)).lo == NULL)) || rt_r_echk((*(P817)rt_nil_check(F->c_198)).hasm)) || rt_r_echk((*(P817)rt_nil_check(F->c_198)).dyn)) || (!f_scalar_kind_177(F->t_199)))) {
F->result_ = F->c_198;
goto ret_;
}
F->r_1187 = f_copy_cons_197(F->c_198);
{
F->ct_1189 = rt_str_copy(f_bound_ctype_179(F->t_199));
F->la_1190 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1189));
F->lf_1191 = rt_str_copy((((P808)rt_nil_check(g_st_field_873))->all));
F->ha_1192 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1189));
F->hf_1193 = rt_str_copy((((P808)rt_nil_check(g_st_field_873))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1190, rt_str(" = ", 3)), f_clo_184(F->c_198)), rt_str("; ", 2)), F->ha_1192), rt_str(" = ", 3)), f_chi_186(F->c_198)), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_867)) {
(*(P817)rt_nil_check(F->r_1187)).lo = f_mk_3(&F->lf_1191);
(*(P817)rt_nil_check(F->r_1187)).hi = f_mk_3(&F->hf_1193);
(*(P817)rt_nil_check(F->r_1187)).dyn = 1;
(*(P817)rt_nil_check(F->r_1187)).lvl = rt_r_ichk(g_cur_level_868);
} else {
(*(P817)rt_nil_check(F->r_1187)).lo = f_mk_3(&F->la_1190);
(*(P817)rt_nil_check(F->r_1187)).hi = f_mk_3(&F->ha_1192);
(*(P817)rt_nil_check(F->r_1187)).dyn = 0;
}
}
g_st_field_873 = F->saved_field_1188;
F->result_ = F->r_1187;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_204(P821 t_201, P817 c_202, rstr *v_203) {
  struct f_checked_204fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_201 = t_201;
F->c_202 = c_202;
F->v_203 = v_203;
if ((((F->c_202 == NULL) || (!f_scalar_kind_177(F->t_201))) || f_suppressed_443(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_203);
goto ret_;
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->t_201)).kind) != (((rt_int)3LL))) && rt_r_echk((*(P817)rt_nil_check(F->c_202)).hasm))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_203)), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P817)rt_nil_check(F->c_202)).mlo))), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P817)rt_nil_check(F->c_202)).mhi))), rt_str(")", 1));
goto ret_;
} else if (((*(P817)rt_nil_check(F->c_202)).lo == NULL)) {
F->result_ = (*F->v_203);
goto ret_;
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_201)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frange(", 10), (*F->v_203)), rt_str(", ", 2)), f_clo_184(F->c_202)), rt_str(", ", 2)), f_chi_186(F->c_202)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_203)), rt_str(", ", 2)), f_clo_184(F->c_202)), rt_str(", ", 2)), f_chi_186(F->c_202)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_lits_207(P815 a_205, P815 b_206) {
  struct f_same_lits_207fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_205 = a_205;
F->b_206 = b_206;
F->x_1194 = NULL;
F->x_1194 = F->a_205;
F->y_1195 = NULL;
F->y_1195 = F->b_206;
while (((F->x_1194 != NULL) && (F->y_1195 != NULL))) {
if ((!rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->x_1194)).name))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->y_1195)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1194 = (*(P815)rt_nil_check(F->x_1194)).next;
F->y_1195 = (*(P815)rt_nil_check(F->y_1195)).next;
}
F->result_ = ((F->x_1194 == NULL) && (F->y_1195 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P821 f_str_elem_209(P821 t_208) {
  struct f_str_elem_209fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_208 = t_208;
if (((*(P821)rt_nil_check(F->t_208)).elem == NULL)) {
F->result_ = g_ty_ascii_898;
goto ret_;
}
F->result_ = (*(P821)rt_nil_check(F->t_208)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_212(P821 a_210, P821 b_211) {
  struct f_same_212fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_210 = a_210;
F->b_211 = b_211;
if ((F->a_210 == F->b_211)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_210 == NULL) || (F->b_211 == NULL)) || (rt_r_ichk((*(P821)rt_nil_check(F->a_210)).kind) != rt_r_ichk((*(P821)rt_nil_check(F->b_211)).kind)))) {
F->result_ = 0;
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->a_210)).kind) == (((rt_int)5LL)))) {
F->result_ = f_same_212(f_str_elem_209(F->a_210), f_str_elem_209(F->b_211));
goto ret_;
}
if ((((((rt_r_ichk((*(P821)rt_nil_check(F->a_210)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->a_210)).kind) == (((rt_int)2LL)))) || (rt_r_ichk((*(P821)rt_nil_check(F->a_210)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P821)rt_nil_check(F->a_210)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P821)rt_nil_check(F->a_210)).kind) == (((rt_int)10LL))))) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->a_210)).kind) == (((rt_int)4LL)))) {
F->result_ = f_same_lits_207((*(P821)rt_nil_check(F->a_210)).lits, (*(P821)rt_nil_check(F->b_211)).lits);
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->a_210)).kind) == (((rt_int)6LL)))) {
F->x_1196 = NULL;
F->x_1196 = (*(P821)rt_nil_check(F->a_210)).idxs;
F->y_1197 = NULL;
F->y_1197 = (*(P821)rt_nil_check(F->b_211)).idxs;
while (((F->x_1196 != NULL) && (F->y_1197 != NULL))) {
if ((!f_same_212((*(P836)rt_nil_check(F->x_1196)).t, (*(P836)rt_nil_check(F->y_1197)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1196 = (*(P836)rt_nil_check(F->x_1196)).next;
F->y_1197 = (*(P836)rt_nil_check(F->y_1197)).next;
}
F->result_ = (((F->x_1196 == NULL) && (F->y_1197 == NULL)) && f_same_212((*(P821)rt_nil_check(F->a_210)).elem, (*(P821)rt_nil_check(F->b_211)).elem));
goto ret_;
}
if (((rt_r_ichk((*(P821)rt_nil_check(F->a_210)).kind) == (((rt_int)16LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->a_210)).kind) == (((rt_int)12LL))))) {
F->result_ = f_same_212((*(P821)rt_nil_check(F->a_210)).elem, (*(P821)rt_nil_check(F->b_211)).elem);
goto ret_;
}
if (((rt_r_ichk((*(P821)rt_nil_check(F->a_210)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->a_210)).kind) == (((rt_int)17LL))))) {
F->f_1198 = NULL;
F->f_1198 = (*(P821)rt_nil_check(F->a_210)).fields;
F->g_1199 = NULL;
F->g_1199 = (*(P821)rt_nil_check(F->b_211)).fields;
while (((F->f_1198 != NULL) && (F->g_1199 != NULL))) {
if (((!rt_str_eq((((P808)rt_nil_check((*(P823)rt_nil_check(F->f_1198)).name))->all), (((P808)rt_nil_check((*(P823)rt_nil_check(F->g_1199)).name))->all))) || (!f_same_212((*(P823)rt_nil_check(F->f_1198)).t, (*(P823)rt_nil_check(F->g_1199)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1198 = (*(P823)rt_nil_check(F->f_1198)).next;
F->g_1199 = (*(P823)rt_nil_check(F->g_1199)).next;
}
F->result_ = ((F->f_1198 == NULL) && (F->g_1199 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P821 f_base_of_214(P821 t_213) {
  struct f_base_of_214fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_213 = t_213;
if ((((F->t_213 != NULL) && (rt_r_ichk((*(P821)rt_nil_check(F->t_213)).kind) == (((rt_int)15LL)))) && ((*(P821)rt_nil_check(F->t_213)).tparams == NULL))) {
F->result_ = f_base_of_214((*(P821)rt_nil_check(F->t_213)).under);
goto ret_;
}
F->result_ = F->t_213;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P817 f_base_cons_217(P821 t_215, P817 c_216) {
  struct f_base_cons_217fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_215 = t_215;
F->c_216 = c_216;
if (((((F->t_215 != NULL) && (rt_r_ichk((*(P821)rt_nil_check(F->t_215)).kind) == (((rt_int)15LL)))) && ((*(P821)rt_nil_check(F->t_215)).tparams == NULL)) && ((*(P821)rt_nil_check(F->t_215)).elemcons != NULL))) {
F->result_ = f_base_cons_217((*(P821)rt_nil_check(F->t_215)).under, (*(P821)rt_nil_check(F->t_215)).elemcons);
goto ret_;
}
F->result_ = F->c_216;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_219(P821 t_218) {
  struct f_kind_name_219fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_218 = t_218;
{ rt_int sel1200 = rt_r_ichk((*(P821)rt_nil_check(F->t_218)).kind);
if (0 || (sel1200 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1200 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1200 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1200 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1200 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1200 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1200 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1200 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1200 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_218)).name))->all));
goto ret_;
} else if (0 || (sel1200 == (((rt_int)11LL)))) {
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

static void f_check_type_223(P821 got_220, P821 want_221, rt_int line_222) {
  struct f_check_type_223fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_220 = got_220;
F->want_221 = want_221;
F->line_222 = line_222;
if ((F->want_221 == NULL)) {
goto ret_;
}
if (((rt_r_ichk((*(P821)rt_nil_check(F->got_220)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P821)rt_nil_check(F->want_221)).kind) == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_212(F->got_220, F->want_221))) {
f_fail_23(F->line_222, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_219(F->got_220)), rt_str(" where ", 7)), f_kind_name_219(F->want_221)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_225(P821 t_224) {
  struct f_ctype_225fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_224 = t_224;
{ rt_int sel1201 = rt_r_ichk((*(P821)rt_nil_check(F->t_224)).kind);
if (0 || (sel1201 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1201 == (((rt_int)2LL))) || (sel1201 == (((rt_int)4LL))) || (sel1201 == (((rt_int)10LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1201 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1201 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1201 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1201 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1201 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1201 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1201 == (((rt_int)16LL)))) {
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P821)rt_nil_check(F->t_224)).cname == NULL)) {
f_declare_ctype_231(F->t_224);
} else if (((((rt_r_ichk((*(P821)rt_nil_check(F->t_224)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->t_224)).kind) == (((rt_int)17LL)))) && rt_r_echk((*(P821)rt_nil_check(F->t_224)).forward)) && (!rt_r_echk((*(P821)rt_nil_check(F->t_224)).defined)))) {
(*(P821)rt_nil_check(F->t_224)).defined = 1;
f_put_27(g_out_types_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_224)).cname))->all)), rt_str(" ", 1)), f_struct_body_227(F->t_224)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_224)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_227(P821 t_226) {
  struct f_struct_body_227fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_226 = t_226;
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_226)).kind) == (((rt_int)17LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ int tag; union { ", 19), f_field_decls_229(F->t_226)), rt_str(" } u; }", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_field_decls_229(F->t_226)), rt_str(" }", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_field_decls_229(P821 t_228) {
  struct f_field_decls_229fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_228 = t_228;
F->f_1202 = NULL;
F->f_1202 = (*(P821)rt_nil_check(F->t_228)).fields;
F->s_1203 = NULL;
F->s_1203 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1202 != NULL)) {
F->s_1203 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->s_1203))->all), f_ctype_225((*(P823)rt_nil_check(F->f_1202)).t)), rt_str(" ", 1)), f_field_c_17(&(((P808)rt_nil_check((*(P823)rt_nil_check(F->f_1202)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1202 = (*(P823)rt_nil_check(F->f_1202)).next;
}
F->result_ = (((P808)rt_nil_check(F->s_1203))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_231(P821 t_230) {
  struct f_declare_ctype_231fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_230 = t_230;
F->u_1204 = NULL;
F->u_1204 = g_all_types_856;
if (((rt_r_ichk((*(P821)rt_nil_check(F->t_230)).kind) == (((rt_int)8LL))) && ((*(P821)rt_nil_check(F->t_230)).target == NULL))) {
f_finish_ptr_409(F->t_230);
if (((*(P821)rt_nil_check(F->t_230)).cname != NULL)) {
goto ret_;
}
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_230)).kind) != (((rt_int)8LL)))) {
while ((F->u_1204 != NULL)) {
if (((rt_r_ichk((*(P821)rt_nil_check(F->u_1204)).kind) == rt_r_ichk((*(P821)rt_nil_check(F->t_230)).kind)) && f_same_212(F->u_1204, F->t_230))) {
(*(P821)rt_nil_check(F->t_230)).cname = (*(P821)rt_nil_check(F->u_1204)).cname;
goto ret_;
}
F->u_1204 = (*(P821)rt_nil_check(F->u_1204)).next;
}
}
if (((rt_r_ichk((*(P821)rt_nil_check(F->t_230)).kind) == (((rt_int)15LL))) && ((*(P821)rt_nil_check(F->t_230)).tparams == NULL))) {
(*(P821)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_225((*(P821)rt_nil_check(F->t_230)).under); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_230)).kind) == (((rt_int)6LL)))) {
(*(P821)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_230)).kind) == (((rt_int)15LL)))) {
(*(P821)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->t_230)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->t_230)).kind) == (((rt_int)17LL))))) {
(*(P821)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P821)rt_nil_check(F->t_230)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P821)rt_nil_check(F->t_230)).next = g_all_types_856;
g_all_types_856 = F->t_230;
if ((((rt_r_ichk((*(P821)rt_nil_check(F->t_230)).kind) == (((rt_int)8LL))) && ((*(P821)rt_nil_check(F->t_230)).decl != NULL)) && ((*(P815)rt_nil_check((*(P821)rt_nil_check(F->t_230)).decl)).b != NULL))) {
F->p_1205 = NULL;
F->p_1205 = (*(P815)rt_nil_check((*(P821)rt_nil_check(F->t_230)).decl)).b;
F->fs_1206 = NULL;
F->fs_1206 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1207 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1205 != NULL)) {
F->pc_1208 = NULL;
F->fs_1206 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->fs_1206))->all), rt_str(" ", 1)), f_ctype_225(f_resolve_subtype_256((*(P815)rt_nil_check(F->p_1205)).a, &F->pc_1208))), rt_str(" p_", 3)), f_lower_s_15(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1205)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1205 = (*(P815)rt_nil_check(F->p_1205)).next;
}
f_put_27(g_out_types_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1207), rt_str(" *", 2)), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1207), rt_str(" {", 2)), (((P808)rt_nil_check(F->fs_1206))->all)), rt_str(" ", 1)), f_ctype_225((*(P821)rt_nil_check(F->t_230)).target)), rt_str(" all; };", 8)); b_; }));
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_230)).kind) == (((rt_int)8LL)))) {
F->target_1209 = NULL;
F->target_1209 = (*(P821)rt_nil_check(F->t_230)).target;
if (((rt_r_ichk((*(P821)rt_nil_check(F->target_1209)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->target_1209)).kind) == (((rt_int)17LL))))) {
if (((*(P821)rt_nil_check(F->target_1209)).cname == NULL)) {
(*(P821)rt_nil_check(F->target_1209)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P821)rt_nil_check(F->target_1209)).next = g_all_types_856;
g_all_types_856 = F->target_1209;
f_put_27(g_out_types_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P808)rt_nil_check((*(P821)rt_nil_check(F->target_1209)).cname))->all)), rt_str(" ", 1)), (((P808)rt_nil_check((*(P821)rt_nil_check(F->target_1209)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P821)rt_nil_check(F->target_1209)).forward = 1;
}
f_put_27(g_out_types_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P808)rt_nil_check((*(P821)rt_nil_check(F->target_1209)).cname))->all)), rt_str(" *", 2)), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_225(F->target_1209)), rt_str(" *", 2)), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_230)).kind) == (((rt_int)6LL)))) {
f_put_27(g_out_types_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_230)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_225((*(P821)rt_nil_check(F->t_230)).elem)), rt_str(" *p;", 4)), f_more_dims_237(F->t_230)), rt_str(" };", 3)); b_; }));
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_230)).kind) == (((rt_int)15LL)))) {
F->p_1210 = NULL;
F->p_1210 = (*(P821)rt_nil_check(F->t_230)).tparams;
F->fs_1211 = NULL;
F->fs_1211 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1210 != NULL)) {
F->fs_1211 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->fs_1211))->all), f_ctype_225(f_tparam_type_321(F->t_230, &(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1210)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1210)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1210 = (*(P815)rt_nil_check(F->p_1210)).next;
}
f_put_27(g_out_types_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_230)).cname))->all)), rt_str(" {", 2)), (((P808)rt_nil_check(F->fs_1211))->all)), f_ctype_225((*(P821)rt_nil_check(F->t_230)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_230)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P821)rt_nil_check(F->t_230)).defined = 1;
f_put_27(g_out_types_858, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_230)).cname))->all)), rt_str(" ", 1)), f_struct_body_227(F->t_230)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_dim_lo_233(rt_int k_232) {
  struct f_dim_lo_233fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_232 = k_232;
if ((F->k_232 == ((rt_int)1LL))) {
F->result_ = rt_str("lo", 2);
goto ret_;
}
F->result_ = rt_str_cat(rt_str("lo", 2), f_itos_7(F->k_232));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_dim_hi_235(rt_int k_234) {
  struct f_dim_hi_235fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_234 = k_234;
if ((F->k_234 == ((rt_int)1LL))) {
F->result_ = rt_str("hi", 2);
goto ret_;
}
F->result_ = rt_str_cat(rt_str("hi", 2), f_itos_7(F->k_234));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_more_dims_237(P821 t_236) {
  struct f_more_dims_237fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_236 = t_236;
F->r_1212 = NULL;
F->r_1212 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1214 = ((rt_int)3LL), hi1215 = rt_r_ichk((*(P821)rt_nil_check(F->t_236)).ndim);
for (rt_int it1216 = lo1214; it1216 <= hi1215; it1216++) {
F->k_1213 = it1216;
F->r_1212 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_1212))->all), rt_str(" rt_int ", 8)), f_dim_lo_233(F->k_1213)), rt_str(", ", 2)), f_dim_hi_235(F->k_1213)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P808)rt_nil_check(F->r_1212))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_240(P821 t_238, rstr *base_239) {
  struct f_acnt_240fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_238 = t_238;
F->base_239 = base_239;
F->r_1217 = NULL;
F->r_1217 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_239)), rt_str(")", 1)); b_; }));
{ rt_int lo1219 = ((rt_int)3LL), hi1220 = rt_r_ichk((*(P821)rt_nil_check(F->t_238)).ndim);
for (rt_int it1221 = lo1219; it1221 <= hi1220; it1221++) {
F->k_1218 = it1221;
F->r_1217 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_1217))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_239)), rt_str(".", 1)), f_dim_lo_233(F->k_1218)), rt_str(", ", 2)), (*F->base_239)), rt_str(".", 1)), f_dim_hi_235(F->k_1218)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P808)rt_nil_check(F->r_1217))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P808 f_cons_lo_243(P817 c_241, rt_int k_242) {
  struct f_cons_lo_243fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_241 = c_241;
F->k_242 = k_242;
F->l_1222 = NULL;
if ((F->k_242 == ((rt_int)1LL))) {
F->result_ = (*(P817)rt_nil_check(F->c_241)).lo;
goto ret_;
} else if ((F->k_242 == ((rt_int)2LL))) {
F->result_ = (*(P817)rt_nil_check(F->c_241)).lo2;
goto ret_;
}
F->l_1222 = (*(P817)rt_nil_check(F->c_241)).bnds;
{ rt_int lo1224 = ((rt_int)1LL), hi1225 = rt_sub(rt_add(F->k_242, F->k_242), ((rt_int)6LL));
for (rt_int it1226 = lo1224; it1226 <= hi1225; it1226++) {
F->i_1223 = it1226;
if ((F->l_1222 != NULL)) {
F->l_1222 = (*(P819)rt_nil_check(F->l_1222)).next;
}
}
}
if ((F->l_1222 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P819)rt_nil_check(F->l_1222)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P808 f_cons_hi_246(P817 c_244, rt_int k_245) {
  struct f_cons_hi_246fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_244 = c_244;
F->k_245 = k_245;
F->l_1227 = NULL;
if ((F->k_245 == ((rt_int)1LL))) {
F->result_ = (*(P817)rt_nil_check(F->c_244)).hi;
goto ret_;
} else if ((F->k_245 == ((rt_int)2LL))) {
F->result_ = (*(P817)rt_nil_check(F->c_244)).hi2;
goto ret_;
}
F->l_1227 = (*(P817)rt_nil_check(F->c_244)).bnds;
{ rt_int lo1229 = ((rt_int)1LL), hi1230 = rt_sub(rt_add(F->k_245, F->k_245), ((rt_int)5LL));
for (rt_int it1231 = lo1229; it1231 <= hi1230; it1231++) {
F->i_1228 = it1231;
if ((F->l_1227 != NULL)) {
F->l_1227 = (*(P819)rt_nil_check(F->l_1227)).next;
}
}
}
if ((F->l_1227 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P819)rt_nil_check(F->l_1227)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P821 f_idx_type_249(P821 t_247, rt_int k_248) {
  struct f_idx_type_249fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_247 = t_247;
F->k_248 = k_248;
F->l_1232 = NULL;
F->l_1232 = (*(P821)rt_nil_check(F->t_247)).idxs;
{ rt_int lo1234 = ((rt_int)2LL), hi1235 = F->k_248;
for (rt_int it1236 = lo1234; it1236 <= hi1235; it1236++) {
F->i_1233 = it1236;
F->l_1232 = (*(P836)rt_nil_check(F->l_1232)).next;
}
}
F->result_ = (*(P836)rt_nil_check(F->l_1232)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_250(void) {
  struct f_init_ascii_250fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1237 = NULL;
F->tail_1238 = NULL;
F->start_1239 = RT_R_IUNDEF;
F->start_1239 = ((rt_int)1LL);
{ rt_int lo1241 = ((rt_int)1LL), hi1242 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1243 = lo1241; it1243 <= hi1242; it1243++) {
F->i_1240 = it1243;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1240) == 32)) {
F->lit_1244 = NULL;
F->lit_1244 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P815)rt_nil_check(F->lit_1244)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), rt_r_ichk(F->start_1239), rt_sub(F->i_1240, ((rt_int)1LL))); b_; }));
f_append_65(&F->head_1237, &F->tail_1238, F->lit_1244);
F->start_1239 = rt_add(F->i_1240, ((rt_int)1LL));
}
}
}
g_ty_ascii_898 = f_new_typ_174((((rt_int)4LL)));
(*(P821)rt_nil_check(g_ty_ascii_898)).lits = F->head_1237;
(*(P821)rt_nil_check(g_ty_ascii_898)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1245 = NULL;
F->t2_1246 = NULL;
F->l1_1247 = NULL;
F->l1_1247 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1248 = NULL;
F->l2_1248 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1249 = NULL;
F->l3_1249 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P815)rt_nil_check(F->l1_1247)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P815)rt_nil_check(F->l2_1248)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P815)rt_nil_check(F->l3_1249)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_65(&F->h2_1245, &F->t2_1246, F->l1_1247);
f_append_65(&F->h2_1245, &F->t2_1246, F->l2_1248);
f_append_65(&F->h2_1245, &F->t2_1246, F->l3_1249);
g_file_mode_type_906 = f_new_typ_174((((rt_int)4LL)));
(*(P821)rt_nil_check(g_file_mode_type_906)).lits = F->h2_1245;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_lit_index_253(P815 lits_251, rstr *name_252) {
  struct f_lit_index_253fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_251 = lits_251;
F->name_252 = name_252;
F->i_1250 = RT_R_IUNDEF;
F->i_1250 = ((rt_int)0LL);
F->l_1251 = NULL;
F->l_1251 = F->lits_251;
while ((F->l_1251 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->l_1251)).name))->all), (*F->name_252))) {
F->result_ = rt_r_ichk(F->i_1250);
goto ret_;
}
F->i_1250 = rt_add(rt_r_ichk(F->i_1250), ((rt_int)1LL));
F->l_1251 = (*(P815)rt_nil_check(F->l_1251)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P821 f_resolve_subtype_256(P815 st_254, P817 *c_255) {
  struct f_resolve_subtype_256fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_254 = st_254;
F->c_255 = c_255;
F->c_255v = *F->c_255;
F->t_1252 = NULL;
F->ok_1253 = RT_R_EUNDEF;
F->dummy_1254 = NULL;
F->c_255v = f_new_cons_175();
{ rt_int sel1255 = rt_r_ichk((*(P815)rt_nil_check(F->st_254)).kind);
if (0 || (sel1255 == (((rt_int)70LL)))) {
if (((*(P815)rt_nil_check(F->st_254)).a != NULL)) {
(*(P817)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649((*(P815)rt_nil_check(F->st_254)).a, g_ty_int_895, &F->dummy_1254); b_; }));
(*(P817)rt_nil_check(F->c_255v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649((*(P815)rt_nil_check(F->st_254)).b, g_ty_int_895, &F->dummy_1254); b_; }));
(*(P817)rt_nil_check(F->c_255v)).mlo = f_manifest_333((*(P815)rt_nil_check(F->st_254)).a, &F->ok_1253);
(*(P817)rt_nil_check(F->c_255v)).hasm = rt_r_echk(F->ok_1253);
(*(P817)rt_nil_check(F->c_255v)).mhi = f_manifest_333((*(P815)rt_nil_check(F->st_254)).b, &F->ok_1253);
(*(P817)rt_nil_check(F->c_255v)).hasm = (rt_r_echk((*(P817)rt_nil_check(F->c_255v)).hasm) && rt_r_echk(F->ok_1253));
}
F->result_ = g_ty_int_895;
goto ret_;
} else if (0 || (sel1255 == (((rt_int)71LL)))) {
if (((*(P815)rt_nil_check(F->st_254)).a != NULL)) {
(*(P817)rt_nil_check(F->c_255v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649((*(P815)rt_nil_check(F->st_254)).a, g_ty_int_895, &F->dummy_1254); b_; }));
}
if (((*(P815)rt_nil_check(F->st_254)).b != NULL)) {
(*(P817)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649((*(P815)rt_nil_check(F->st_254)).b, g_ty_float_897, &F->dummy_1254); b_; }));
(*(P817)rt_nil_check(F->c_255v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649((*(P815)rt_nil_check(F->st_254)).c, g_ty_float_897, &F->dummy_1254); b_; }));
(*(P817)rt_nil_check(F->c_255v)).hasm = (f_float_lit_258((*(P815)rt_nil_check(F->st_254)).b) && f_float_lit_258((*(P815)rt_nil_check(F->st_254)).c));
}
F->result_ = g_ty_float_897;
goto ret_;
} else if (0 || (sel1255 == (((rt_int)72LL)))) {
F->t_1252 = f_new_typ_174((((rt_int)4LL)));
(*(P821)rt_nil_check(F->t_1252)).lits = (*(P815)rt_nil_check(F->st_254)).a;
if (((*(P815)rt_nil_check(F->st_254)).b != NULL)) {
(*(P817)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649((*(P815)rt_nil_check(F->st_254)).b, F->t_1252, &F->dummy_1254); b_; }));
(*(P817)rt_nil_check(F->c_255v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649((*(P815)rt_nil_check(F->st_254)).c, F->t_1252, &F->dummy_1254); b_; }));
if (((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->st_254)).b)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->st_254)).c)).kind) == (((rt_int)4LL))))) {
(*(P817)rt_nil_check(F->c_255v)).mlo = f_lit_index_253((*(P821)rt_nil_check(F->t_1252)).lits, &(((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->st_254)).b)).name))->all));
(*(P817)rt_nil_check(F->c_255v)).mhi = f_lit_index_253((*(P821)rt_nil_check(F->t_1252)).lits, &(((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->st_254)).c)).name))->all));
(*(P817)rt_nil_check(F->c_255v)).hasm = 1;
}
}
F->result_ = F->t_1252;
goto ret_;
} else if (0 || (sel1255 == (((rt_int)73LL)))) {
F->t_1252 = f_resolve_subtype_256((*(P815)rt_nil_check(F->st_254)).a, &F->c_255v);
if (((*(P821)rt_nil_check(f_base_of_214(F->t_1252))).kind != (((rt_int)4LL)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_212(F->t_1252, g_ty_ascii_898) && ((F->c_255v == NULL) || ((*(P817)rt_nil_check(F->c_255v)).lo == NULL)))) {
F->t_1252 = g_ty_string_899;
} else {
F->et_1256 = NULL;
F->et_1256 = F->t_1252;
F->t_1252 = f_new_typ_174((((rt_int)5LL)));
(*(P821)rt_nil_check(F->t_1252)).elem = F->et_1256;
(*(P821)rt_nil_check(F->t_1252)).elemcons = F->c_255v;
}
F->c_255v = f_new_cons_175();
if (((*(P815)rt_nil_check(F->st_254)).b != NULL)) {
(*(P817)rt_nil_check(F->c_255v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649((*(P815)rt_nil_check(F->st_254)).b, g_ty_int_895, &F->dummy_1254); b_; }));
}
F->result_ = F->t_1252;
goto ret_;
} else if (0 || (sel1255 == (((rt_int)74LL)))) {
{
F->ec_1257 = NULL;
F->et_1258 = NULL;
F->et_1258 = f_resolve_subtype_256((*(P815)rt_nil_check(F->st_254)).b, &F->ec_1257);
F->ix_1259 = NULL;
F->ix_1259 = (*(P815)rt_nil_check(F->st_254)).a;
F->k_1260 = RT_R_IUNDEF;
F->k_1260 = ((rt_int)0LL);
F->tail_1261 = NULL;
F->btail_1262 = NULL;
F->t_1252 = f_new_typ_174((((rt_int)6LL)));
(*(P821)rt_nil_check(F->t_1252)).elem = F->et_1258;
(*(P821)rt_nil_check(F->t_1252)).elemcons = F->ec_1257;
(*(P821)rt_nil_check(F->t_1252)).elemst = (*(P815)rt_nil_check(F->st_254)).b;
(*(P817)rt_nil_check(F->c_255v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P817)rt_nil_check(F->c_255v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1259 != NULL)) {
F->ic_1263 = NULL;
F->it_1264 = NULL;
F->it_1264 = f_resolve_subtype_256(F->ix_1259, &F->ic_1263);
F->lo_1265 = NULL;
F->hi_1266 = NULL;
F->tl_1267 = NULL;
if ((((*(P821)rt_nil_check(f_base_of_214(F->it_1264))).kind != (((rt_int)1LL))) && ((*(P821)rt_nil_check(f_base_of_214(F->it_1264))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1263 = f_base_cons_217(F->it_1264, F->ic_1263);
F->k_1260 = rt_add(rt_r_ichk(F->k_1260), ((rt_int)1LL));
{ R837 *cell1268 = rt_alloc(sizeof(R837));
(*cell1268).t = NULL;
(*cell1268).next = NULL;
F->tl_1267 = cell1268;
}
(*(P836)rt_nil_check(F->tl_1267)).t = F->it_1264;
if ((F->tail_1261 == NULL)) {
(*(P821)rt_nil_check(F->t_1252)).idxs = F->tl_1267;
} else {
(*(P836)rt_nil_check(F->tail_1261)).next = F->tl_1267;
}
F->tail_1261 = F->tl_1267;
if (((F->ic_1263 != NULL) && ((*(P817)rt_nil_check(F->ic_1263)).lo != NULL))) {
F->lo_1265 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_184(F->ic_1263); b_; }));
F->hi_1266 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_186(F->ic_1263); b_; }));
} else if (((*(P821)rt_nil_check(f_base_of_214(F->it_1264))).kind == (((rt_int)4LL)))) {
F->lo_1265 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1266 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P821)rt_nil_check(f_base_of_214(F->it_1264))).lits), ((rt_int)1LL))); b_; }));
}
if ((rt_r_ichk(F->k_1260) == ((rt_int)1LL))) {
(*(P821)rt_nil_check(F->t_1252)).idx = F->it_1264;
(*(P817)rt_nil_check(F->c_255v)).lo = F->lo_1265;
(*(P817)rt_nil_check(F->c_255v)).hi = F->hi_1266;
} else if ((rt_r_ichk(F->k_1260) == ((rt_int)2LL))) {
(*(P821)rt_nil_check(F->t_1252)).idx2 = F->it_1264;
(*(P817)rt_nil_check(F->c_255v)).lo2 = F->lo_1265;
(*(P817)rt_nil_check(F->c_255v)).hi2 = F->hi_1266;
} else if ((F->lo_1265 != NULL)) {
F->l1_1269 = NULL;
F->l2_1270 = NULL;
{ R820 *cell1271 = rt_alloc(sizeof(R820));
(*cell1271).s = NULL;
(*cell1271).next = NULL;
F->l1_1269 = cell1271;
}
{ R820 *cell1272 = rt_alloc(sizeof(R820));
(*cell1272).s = NULL;
(*cell1272).next = NULL;
F->l2_1270 = cell1272;
}
(*(P819)rt_nil_check(F->l1_1269)).s = F->lo_1265;
(*(P819)rt_nil_check(F->l2_1270)).s = F->hi_1266;
(*(P819)rt_nil_check(F->l1_1269)).next = F->l2_1270;
if ((F->btail_1262 == NULL)) {
(*(P817)rt_nil_check(F->c_255v)).bnds = F->l1_1269;
} else {
(*(P819)rt_nil_check(F->btail_1262)).next = F->l1_1269;
}
F->btail_1262 = F->l2_1270;
}
F->ix_1259 = (*(P815)rt_nil_check(F->ix_1259)).next;
}
(*(P821)rt_nil_check(F->t_1252)).ndim = rt_r_ichk(F->k_1260);
}
F->result_ = F->t_1252;
goto ret_;
} else if (0 || (sel1255 == (((rt_int)77LL)))) {
F->t_1252 = f_new_typ_174((((rt_int)16LL)));
{
F->ec_1273 = NULL;
(*(P821)rt_nil_check(F->t_1252)).elem = f_resolve_subtype_256((*(P815)rt_nil_check(F->st_254)).a, &F->ec_1273);
(*(P821)rt_nil_check(F->t_1252)).elemcons = F->ec_1273;
if ((((*(P821)rt_nil_check(f_base_of_214((*(P821)rt_nil_check(F->t_1252)).elem))).kind != (((rt_int)1LL))) && ((*(P821)rt_nil_check(f_base_of_214((*(P821)rt_nil_check(F->t_1252)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
if ((((*(P821)rt_nil_check(f_base_of_214((*(P821)rt_nil_check(F->t_1252)).elem))).kind == (((rt_int)1LL))) && ((F->ec_1273 == NULL) || ((*(P817)rt_nil_check(F->ec_1273)).lo == NULL)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SET[INT] needs a range here: a set of every INT cannot be represented", 69); b_; }));
}
}
F->result_ = F->t_1252;
goto ret_;
} else if (0 || (sel1255 == (((rt_int)75LL))) || (sel1255 == (((rt_int)76LL)))) {
if ((rt_r_ichk((*(P815)rt_nil_check(F->st_254)).kind) == (((rt_int)76LL)))) {
F->t_1252 = f_new_typ_174((((rt_int)17LL)));
} else {
F->t_1252 = f_new_typ_174((((rt_int)7LL)));
}
{
F->comp_1274 = NULL;
F->comp_1274 = (*(P815)rt_nil_check(F->st_254)).a;
F->tail_1275 = NULL;
while ((F->comp_1274 != NULL)) {
F->cc_1276 = NULL;
F->f_1277 = NULL;
{ R824 *cell1278 = rt_alloc(sizeof(R824));
(*cell1278).name = NULL;
(*cell1278).t = NULL;
(*cell1278).c = NULL;
(*cell1278).st = NULL;
(*cell1278).next = NULL;
F->f_1277 = cell1278;
}
(*(P823)rt_nil_check(F->f_1277)).name = (*(P815)rt_nil_check(F->comp_1274)).name;
(*(P823)rt_nil_check(F->f_1277)).t = f_resolve_subtype_256((*(P815)rt_nil_check(F->comp_1274)).a, &F->cc_1276);
(*(P823)rt_nil_check(F->f_1277)).c = F->cc_1276;
(*(P823)rt_nil_check(F->f_1277)).st = (*(P815)rt_nil_check(F->comp_1274)).a;
if ((F->tail_1275 == NULL)) {
(*(P821)rt_nil_check(F->t_1252)).fields = F->f_1277;
} else {
(*(P823)rt_nil_check(F->tail_1275)).next = F->f_1277;
}
F->tail_1275 = F->f_1277;
F->comp_1274 = (*(P815)rt_nil_check(F->comp_1274)).next;
}
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_1252)).kind) == (((rt_int)17LL)))) {
F->lits_1279 = NULL;
F->ltail_1280 = NULL;
F->f_1281 = NULL;
F->f_1281 = (*(P821)rt_nil_check(F->t_1252)).fields;
while ((F->f_1281 != NULL)) {
F->l_1282 = NULL;
F->l_1282 = f_nn_61((((rt_int)4LL)), rt_r_ichk((*(P815)rt_nil_check(F->st_254)).line));
if (rt_str_eq((((P808)rt_nil_check((*(P823)rt_nil_check(F->f_1281)).name))->all), rt_str("TAG", 3))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P815)rt_nil_check(F->l_1282)).name = (*(P823)rt_nil_check(F->f_1281)).name;
f_append_65(&F->lits_1279, &F->ltail_1280, F->l_1282);
F->f_1281 = (*(P823)rt_nil_check(F->f_1281)).next;
}
(*(P821)rt_nil_check(F->t_1252)).elem = f_new_typ_174((((rt_int)4LL)));
(*(P821)rt_nil_check((*(P821)rt_nil_check(F->t_1252)).elem)).lits = F->lits_1279;
if (((*(P815)rt_nil_check(F->st_254)).b != NULL)) {
f_tag_constraint_262(F->t_1252, (*(P815)rt_nil_check(F->st_254)).b, F->c_255v);
}
}
F->result_ = F->t_1252;
goto ret_;
} else if (0 || (sel1255 == (((rt_int)79LL)))) {
F->result_ = g_ty_file_901;
goto ret_;
} else if (0 || (sel1255 == (((rt_int)78LL)))) {
if (((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P825)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1283 = NULL;
F->gt_1283 = f_copy_node_670((*(P815)rt_nil_check(F->st_254)).a);
(*(P815)rt_nil_check(F->gt_1283)).next = NULL;
F->result_ = f_instantiate_type_589(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1283, (*(P815)rt_nil_check(F->st_254)).b, &F->c_255v, rt_r_ichk((*(P815)rt_nil_check(F->st_254)).line));
goto ret_;
}
{
F->ec_1284 = NULL;
F->t_1252 = f_new_typ_174((((rt_int)12LL)));
(*(P821)rt_nil_check(F->t_1252)).elem = f_resolve_subtype_256((*(P815)rt_nil_check(F->st_254)).a, &F->ec_1284);
(*(P821)rt_nil_check(F->t_1252)).elemcons = F->ec_1284;
if (((*(P815)rt_nil_check(F->st_254)).b != NULL)) {
(*(P817)rt_nil_check(F->c_255v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649((*(P815)rt_nil_check(F->st_254)).b, g_ty_int_895, &F->dummy_1254); b_; }));
}
}
F->result_ = F->t_1252;
goto ret_;
} else if (0 || (sel1255 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_265(F->st_254, &F->c_255v);
goto ret_;
} else if (0 || (sel1255 == (((rt_int)81LL)))) {
{
F->base_1285 = NULL;
F->result_ = f_value_subtype_278((*(P815)rt_nil_check(F->st_254)).a, &F->c_255v, &F->base_1285);
goto ret_;
}
} else {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->st_254)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_255) = F->c_255v;
  RT_FPOP();
  return F->result_;
}

static int f_float_lit_258(P815 e_257) {
  struct f_float_lit_258fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_257 = e_257;
if (((rt_r_ichk((*(P815)rt_nil_check(F->e_257)).kind) == (((rt_int)8LL))) && (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_257)).name))->all), rt_str("-", 1)) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_257)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_258((*(P815)rt_nil_check(F->e_257)).a);
goto ret_;
}
F->result_ = ((rt_r_ichk((*(P815)rt_nil_check(F->e_257)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P815)rt_nil_check(F->e_257)).kind) == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_262(P821 t_259, P815 e_260, P817 c_261) {
  struct f_tag_constraint_262fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_259 = t_259;
F->e_260 = e_260;
F->c_261 = c_261;
F->dummy_1286 = NULL;
(*(P817)rt_nil_check(F->c_261)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649(F->e_260, (*(P821)rt_nil_check(F->t_259)).elem, &F->dummy_1286); b_; }));
f_check_type_223(F->dummy_1286, (*(P821)rt_nil_check(F->t_259)).elem, rt_r_ichk((*(P815)rt_nil_check(F->e_260)).line));
(*(P817)rt_nil_check(F->c_261)).hi = (*(P817)rt_nil_check(F->c_261)).lo;
if ((rt_r_ichk((*(P815)rt_nil_check(F->e_260)).kind) == (((rt_int)4LL)))) {
(*(P817)rt_nil_check(F->c_261)).mlo = f_lit_index_253((*(P821)rt_nil_check((*(P821)rt_nil_check(F->t_259)).elem)).lits, &(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_260)).name))->all));
(*(P817)rt_nil_check(F->c_261)).mhi = rt_r_ichk((*(P817)rt_nil_check(F->c_261)).mlo);
(*(P817)rt_nil_check(F->c_261)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P821 f_named_subtype_265(P815 st_263, P817 *c_264) {
  struct f_named_subtype_265fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_263 = st_263;
F->c_264 = c_264;
F->c_264v = *F->c_264;
F->t_1287 = NULL;
F->y_1288 = NULL;
F->y_1288 = f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->st_263)).name))->all));
F->name_1289 = rt_str_copy((((P808)rt_nil_check((*(P815)rt_nil_check(F->st_263)).name))->all));
F->c_264v = f_new_cons_175();
if (((F->y_1288 == NULL) && ((rt_str_eq(F->name_1289, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1289, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1289, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_283(F->st_263, &F->c_264v);
goto ret_;
}
if ((F->y_1288 == NULL)) {
if (rt_str_eq(F->name_1289, rt_str("BOOL", 4))) {
F->t_1287 = g_ty_bool_896;
} else if (rt_str_eq(F->name_1289, rt_str("ASCII", 5))) {
F->t_1287 = g_ty_ascii_898;
} else if (rt_str_eq(F->name_1289, rt_str("DATA_LOCK", 9))) {
F->t_1287 = g_ty_lock_903;
} else if (rt_str_eq(F->name_1289, rt_str("LATCH", 5))) {
F->t_1287 = g_ty_latch_904;
} else if (rt_str_eq(F->name_1289, rt_str("ACT", 3))) {
F->t_1287 = g_ty_act_905;
} else if (rt_str_eq(F->name_1289, rt_str("INT", 3))) {
F->t_1287 = g_ty_int_895;
} else if (rt_str_eq(F->name_1289, rt_str("FLOAT", 5))) {
F->t_1287 = g_ty_float_897;
} else {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->st_263)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1289); b_; }));
}
if (((*(P815)rt_nil_check(F->st_263)).b != NULL)) {
f_apply_constraint_274(F->t_1287, (*(P815)rt_nil_check(F->st_263)).b, F->c_264v, rt_r_ichk((*(P815)rt_nil_check(F->st_263)).line));
}
F->result_ = F->t_1287;
goto ret_;
}
if (((rt_r_ichk((*(P825)rt_nil_check(F->y_1288)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_1288)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_1288)).decl)).b)).kind) == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_589(F->y_1288, (*(P815)rt_nil_check(F->st_263)).a, (*(P815)rt_nil_check(F->st_263)).b, &F->c_264v, rt_r_ichk((*(P815)rt_nil_check(F->st_263)).line));
goto ret_;
}
if ((((rt_r_ichk((*(P825)rt_nil_check(F->y_1288)).kind) == (((rt_int)5LL))) && ((*(P825)rt_nil_check(F->y_1288)).t != NULL)) && (rt_r_ichk((*(P821)rt_nil_check((*(P825)rt_nil_check(F->y_1288)).t)).kind) == (((rt_int)15LL))))) {
F->result_ = f_new_type_306(F->y_1288, F->st_263, &F->c_264v);
goto ret_;
}
if ((((rt_r_ichk((*(P825)rt_nil_check(F->y_1288)).kind) == (((rt_int)5LL))) && ((*(P825)rt_nil_check(F->y_1288)).t != NULL)) && (rt_r_ichk((*(P821)rt_nil_check((*(P825)rt_nil_check(F->y_1288)).t)).kind) == (((rt_int)8LL))))) {
(*(P817)rt_nil_check(F->c_264v)).args = (*(P815)rt_nil_check(F->st_263)).b;
F->result_ = (*(P825)rt_nil_check(F->y_1288)).t;
goto ret_;
}
if ((((rt_r_ichk((*(P825)rt_nil_check(F->y_1288)).kind) == (((rt_int)6LL))) && ((*(P825)rt_nil_check(F->y_1288)).decl != NULL)) && ((*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_1288)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_269(F->y_1288, F->st_263, &F->c_264v);
goto ret_;
}
if ((((rt_r_ichk((*(P825)rt_nil_check(F->y_1288)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P825)rt_nil_check(F->y_1288)).kind) == (((rt_int)5LL)))) && ((*(P825)rt_nil_check(F->y_1288)).t != NULL))) {
if (((*(P825)rt_nil_check(F->y_1288)).c != NULL)) {
F->c_264v = (*(P825)rt_nil_check(F->y_1288)).c;
}
F->t_1287 = (*(P825)rt_nil_check(F->y_1288)).t;
} else if ((((rt_r_ichk((*(P825)rt_nil_check(F->y_1288)).kind) == (((rt_int)5LL))) && ((*(P825)rt_nil_check(F->y_1288)).decl != NULL)) && (rt_r_ichk((*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_1288)).decl)).kind) == (((rt_int)43LL))))) {
F->result_ = f_new_type_306(F->y_1288, F->st_263, &F->c_264v);
goto ret_;
} else if (((rt_r_ichk((*(P825)rt_nil_check(F->y_1288)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P825)rt_nil_check(F->y_1288)).kind) == (((rt_int)5LL))))) {
F->t_1287 = f_resolve_subtype_256((*(P825)rt_nil_check(F->y_1288)).st, &F->c_264v);
} else {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->st_263)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1289, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P815)rt_nil_check(F->st_263)).b != NULL)) {
F->c_264v = f_copy_cons_197(F->c_264v);
f_apply_constraint_274(F->t_1287, (*(P815)rt_nil_check(F->st_263)).b, F->c_264v, rt_r_ichk((*(P815)rt_nil_check(F->st_263)).line));
}
F->result_ = F->t_1287;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_264) = F->c_264v;
  RT_FPOP();
  return F->result_;
}

static P821 f_invoke_abbrev_269(P825 y_266, P815 st_267, P817 *c_268) {
  struct f_invoke_abbrev_269fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_266 = y_266;
F->st_267 = st_267;
F->c_268 = c_268;
F->c_268v = *F->c_268;
F->p_1290 = NULL;
F->p_1290 = (*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_266)).decl)).b;
F->a_1291 = NULL;
F->a_1291 = (*(P815)rt_nil_check(F->st_267)).b;
F->t_1292 = NULL;
if ((f_list_len_67(F->p_1290) != f_list_len_67(F->a_1291))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->st_267)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check((*(P825)rt_nil_check(F->y_266)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1290))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_168();
while ((F->p_1290 != NULL)) {
F->z_1293 = NULL;
F->z_1293 = f_new_sym_172((((rt_int)2LL)), (*(P815)rt_nil_check(F->p_1290)).name);
F->pc_1294 = NULL;
F->at_1295 = NULL;
F->ok_1296 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P815)rt_nil_check(F->p_1290)).ival) != (((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->st_267)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P825)rt_nil_check(F->z_1293)).t = f_resolve_subtype_256((*(P815)rt_nil_check(F->p_1290)).a, &F->pc_1294);
(*(P825)rt_nil_check(F->z_1293)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_649(F->a_1291, (*(P825)rt_nil_check(F->z_1293)).t, &F->at_1295)), rt_str(")", 1)); b_; }));
f_check_type_223(F->at_1295, (*(P825)rt_nil_check(F->z_1293)).t, rt_r_ichk((*(P815)rt_nil_check(F->st_267)).line));
(*(P825)rt_nil_check(F->z_1293)).mvalue = f_manifest_333(F->a_1291, &F->ok_1296);
(*(P825)rt_nil_check(F->z_1293)).hasmv = rt_r_echk(F->ok_1296);
(*(P825)rt_nil_check(F->z_1293)).mv = f_meval_342(F->a_1291, &F->ok_1296);
if ((!rt_r_echk(F->ok_1296))) {
(*(P825)rt_nil_check(F->z_1293)).mv = NULL;
}
(*(P825)rt_nil_check(F->z_1293)).ro_flag = 1;
f_define_159(F->z_1293, rt_r_ichk((*(P815)rt_nil_check(F->st_267)).line));
F->p_1290 = (*(P815)rt_nil_check(F->p_1290)).next;
F->a_1291 = (*(P815)rt_nil_check(F->a_1291)).next;
}
F->t_1292 = f_resolve_subtype_256((*(P825)rt_nil_check(F->y_266)).st, &F->c_268v);
f_close_scope_169();
F->result_ = F->t_1292;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_268) = F->c_268v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_274(P821 t_270, P815 args_271, P817 c_272, rt_int line_273) {
  struct f_apply_constraint_274fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_270 = t_270;
F->args_271 = args_271;
F->c_272 = c_272;
F->line_273 = line_273;
F->dummy_1297 = NULL;
F->ok_1298 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P821)rt_nil_check(F->t_270)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->t_270)).kind) == (((rt_int)4LL))))) {
if (((rt_r_ichk((*(P815)rt_nil_check(F->args_271)).kind) != (((rt_int)16LL))) || ((*(P815)rt_nil_check(F->args_271)).next != NULL))) {
f_fail_23(F->line_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P817)rt_nil_check(F->c_272)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649((*(P815)rt_nil_check(F->args_271)).a, F->t_270, &F->dummy_1297); b_; }));
f_check_type_223(F->dummy_1297, F->t_270, F->line_273);
(*(P817)rt_nil_check(F->c_272)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649((*(P815)rt_nil_check(F->args_271)).b, F->t_270, &F->dummy_1297); b_; }));
f_check_type_223(F->dummy_1297, F->t_270, F->line_273);
(*(P817)rt_nil_check(F->c_272)).hasm = 0;
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_270)).kind) == (((rt_int)1LL)))) {
(*(P817)rt_nil_check(F->c_272)).mlo = f_manifest_333((*(P815)rt_nil_check(F->args_271)).a, &F->ok_1298);
(*(P817)rt_nil_check(F->c_272)).hasm = rt_r_echk(F->ok_1298);
(*(P817)rt_nil_check(F->c_272)).mhi = f_manifest_333((*(P815)rt_nil_check(F->args_271)).b, &F->ok_1298);
(*(P817)rt_nil_check(F->c_272)).hasm = (rt_r_echk((*(P817)rt_nil_check(F->c_272)).hasm) && rt_r_echk(F->ok_1298));
} else if (((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->args_271)).a)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->args_271)).b)).kind) == (((rt_int)4LL))))) {
(*(P817)rt_nil_check(F->c_272)).mlo = f_lit_index_253((*(P821)rt_nil_check(f_base_of_214(F->t_270))).lits, &(((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->args_271)).a)).name))->all));
(*(P817)rt_nil_check(F->c_272)).mhi = f_lit_index_253((*(P821)rt_nil_check(f_base_of_214(F->t_270))).lits, &(((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->args_271)).b)).name))->all));
(*(P817)rt_nil_check(F->c_272)).hasm = 1;
}
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_270)).kind) == (((rt_int)3LL)))) {
(*(P817)rt_nil_check(F->c_272)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649(F->args_271, g_ty_int_895, &F->dummy_1297); b_; }));
if (((*(P815)rt_nil_check(F->args_271)).next != NULL)) {
if ((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->args_271)).next)).kind) != (((rt_int)16LL)))) {
f_fail_23(F->line_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P817)rt_nil_check(F->c_272)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649((*(P815)rt_nil_check((*(P815)rt_nil_check(F->args_271)).next)).a, g_ty_float_897, &F->dummy_1297); b_; }));
(*(P817)rt_nil_check(F->c_272)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649((*(P815)rt_nil_check((*(P815)rt_nil_check(F->args_271)).next)).b, g_ty_float_897, &F->dummy_1297); b_; }));
(*(P817)rt_nil_check(F->c_272)).hasm = (f_float_lit_258((*(P815)rt_nil_check((*(P815)rt_nil_check(F->args_271)).next)).a) && f_float_lit_258((*(P815)rt_nil_check((*(P815)rt_nil_check(F->args_271)).next)).b));
}
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_270)).kind) == (((rt_int)5LL)))) {
(*(P817)rt_nil_check(F->c_272)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649(F->args_271, g_ty_int_895, &F->dummy_1297); b_; }));
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_270)).kind) == (((rt_int)12LL)))) {
(*(P817)rt_nil_check(F->c_272)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649(F->args_271, g_ty_int_895, &F->dummy_1297); b_; }));
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_270)).kind) == (((rt_int)17LL)))) {
f_tag_constraint_262(F->t_270, F->args_271, F->c_272);
} else {
f_fail_23(F->line_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P821 f_value_subtype_278(P815 e_275, P817 *c_276, P808 *base_277) {
  struct f_value_subtype_278fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_275 = e_275;
F->c_276 = c_276;
F->c_276v = *F->c_276;
F->base_277 = base_277;
F->base_277v = *F->base_277;
F->t_1299 = NULL;
F->c0_1300 = NULL;
F->ro_1301 = RT_R_EUNDEF;
if (f_is_lvalue_612(F->e_275)) {
f_lvalue_618(F->e_275, &F->base_277v, &F->t_1299, &F->c0_1300, &F->ro_1301);
} else {
F->base_277v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649(F->e_275, NULL, &F->t_1299); b_; }));
}
if ((F->c0_1300 == NULL)) {
F->c_276v = f_new_cons_175();
} else {
F->c_276v = f_copy_cons_197(F->c0_1300);
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_1299)).kind) == (((rt_int)5LL)))) {
(*(P817)rt_nil_check(F->c_276v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P808)rt_nil_check(F->base_277v))->all)), rt_str(").len", 5)); b_; }));
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_1299)).kind) == (((rt_int)6LL)))) {
(*(P817)rt_nil_check(F->c_276v)).bnds = NULL;
{ rt_int lo1303 = ((rt_int)1LL), hi1304 = rt_r_ichk((*(P821)rt_nil_check(F->t_1299)).ndim);
for (rt_int it1305 = lo1303; it1305 <= hi1304; it1305++) {
F->k_1302 = it1305;
F->lo_1306 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P808)rt_nil_check(F->base_277v))->all)), rt_str(").", 2)), f_dim_lo_233(F->k_1302)));
F->hi_1307 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P808)rt_nil_check(F->base_277v))->all)), rt_str(").", 2)), f_dim_hi_235(F->k_1302)));
if ((F->k_1302 == ((rt_int)1LL))) {
(*(P817)rt_nil_check(F->c_276v)).lo = f_mk_3(&F->lo_1306);
(*(P817)rt_nil_check(F->c_276v)).hi = f_mk_3(&F->hi_1307);
} else if ((F->k_1302 == ((rt_int)2LL))) {
(*(P817)rt_nil_check(F->c_276v)).lo2 = f_mk_3(&F->lo_1306);
(*(P817)rt_nil_check(F->c_276v)).hi2 = f_mk_3(&F->hi_1307);
} else {
F->l1_1308 = NULL;
F->l2_1309 = NULL;
{ R820 *cell1310 = rt_alloc(sizeof(R820));
(*cell1310).s = NULL;
(*cell1310).next = NULL;
F->l1_1308 = cell1310;
}
{ R820 *cell1311 = rt_alloc(sizeof(R820));
(*cell1311).s = NULL;
(*cell1311).next = NULL;
F->l2_1309 = cell1311;
}
(*(P819)rt_nil_check(F->l1_1308)).s = f_mk_3(&F->lo_1306);
(*(P819)rt_nil_check(F->l2_1309)).s = f_mk_3(&F->hi_1307);
(*(P819)rt_nil_check(F->l1_1308)).next = F->l2_1309;
(*(P819)rt_nil_check(F->l2_1309)).next = (*(P817)rt_nil_check(F->c_276v)).bnds;
(*(P817)rt_nil_check(F->c_276v)).bnds = F->l1_1308;
}
}
}
(*(P817)rt_nil_check(F->c_276v)).bnds = f_reverse_pairs_280((*(P817)rt_nil_check(F->c_276v)).bnds);
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_1299)).kind) == (((rt_int)12LL)))) {
(*(P817)rt_nil_check(F->c_276v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P808)rt_nil_check(F->base_277v))->all)), rt_str(")->cap", 6)); b_; }));
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->t_1299)).kind) == (((rt_int)15LL))) && ((*(P821)rt_nil_check(F->t_1299)).tparams != NULL))) {
F->p_1312 = NULL;
F->p_1312 = (*(P821)rt_nil_check(F->t_1299)).tparams;
F->head_1313 = NULL;
F->tail_1314 = NULL;
while ((F->p_1312 != NULL)) {
F->sel_1315 = NULL;
F->sel_1315 = f_nn_61((((rt_int)11LL)), rt_r_ichk((*(P815)rt_nil_check(F->e_275)).line));
(*(P815)rt_nil_check(F->sel_1315)).a = F->e_275;
(*(P815)rt_nil_check(F->sel_1315)).name = (*(P815)rt_nil_check(F->p_1312)).name;
f_append_65(&F->head_1313, &F->tail_1314, F->sel_1315);
F->p_1312 = (*(P815)rt_nil_check(F->p_1312)).next;
}
(*(P817)rt_nil_check(F->c_276v)).args = F->head_1313;
}
F->result_ = F->t_1299;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_276) = F->c_276v;  (*F->base_277) = F->base_277v;
  RT_FPOP();
  return F->result_;
}

static P819 f_reverse_pairs_280(P819 l_279) {
  struct f_reverse_pairs_280fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_279 = l_279;
F->r_1316 = NULL;
F->p_1317 = NULL;
F->p_1317 = F->l_279;
while ((F->p_1317 != NULL)) {
F->a_1318 = NULL;
F->a_1318 = F->p_1317;
F->b_1319 = NULL;
F->b_1319 = (*(P819)rt_nil_check(F->p_1317)).next;
F->p_1317 = (*(P819)rt_nil_check(F->b_1319)).next;
(*(P819)rt_nil_check(F->b_1319)).next = F->r_1316;
F->r_1316 = F->a_1318;
}
F->result_ = F->r_1316;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P821 f_inquiry_283(P815 st_281, P817 *c_282) {
  struct f_inquiry_283fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_281 = st_281;
F->c_282 = c_282;
F->c_282v = *F->c_282;
F->base_1320 = NULL;
F->t_1321 = NULL;
F->name_1322 = rt_str_copy((((P808)rt_nil_check((*(P815)rt_nil_check(F->st_281)).name))->all));
if (((*(P815)rt_nil_check(F->st_281)).b == NULL)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->st_281)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1322, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1322, rt_str("TYPEOF", 6))) {
F->sub_1323 = NULL;
F->sub_1323 = f_as_subtype_285((*(P815)rt_nil_check(F->st_281)).b);
F->c2_1324 = NULL;
if ((F->sub_1323 != NULL)) {
F->t_1321 = f_resolve_subtype_256(F->sub_1323, &F->c2_1324);
} else {
F->t_1321 = f_value_subtype_278((*(P815)rt_nil_check(F->st_281)).b, &F->c2_1324, &F->base_1320);
}
F->c_282v = f_new_cons_175();
F->result_ = F->t_1321;
goto ret_;
}
F->t_1321 = f_value_subtype_278((*(P815)rt_nil_check(F->st_281)).b, &F->c_282v, &F->base_1320);
if (rt_str_eq(F->name_1322, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1321;
goto ret_;
}
{
F->k_1325 = RT_R_IUNDEF;
F->k_1325 = ((rt_int)1LL);
F->ok_1326 = RT_R_EUNDEF;
F->ok_1326 = 1;
F->ac_1327 = NULL;
F->ac_1327 = F->c_282v;
if (((*(P815)rt_nil_check((*(P815)rt_nil_check(F->st_281)).b)).next != NULL)) {
F->k_1325 = f_manifest_333((*(P815)rt_nil_check((*(P815)rt_nil_check(F->st_281)).b)).next, &F->ok_1326);
}
while (((rt_r_ichk((*(P821)rt_nil_check(F->t_1321)).kind) == (((rt_int)15LL))) && ((*(P821)rt_nil_check(F->t_1321)).tparams == NULL))) {
F->t_1321 = (*(P821)rt_nil_check(F->t_1321)).under;
}
if (((((rt_r_ichk((*(P821)rt_nil_check(F->t_1321)).kind) != (((rt_int)6LL))) || (!rt_r_echk(F->ok_1326))) || (rt_r_ichk(F->k_1325) < ((rt_int)1LL))) || (rt_r_ichk(F->k_1325) > rt_r_ichk((*(P821)rt_nil_check(F->t_1321)).ndim)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->st_281)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_282v = f_new_cons_175();
(*(P817)rt_nil_check(F->c_282v)).lo = f_cons_lo_243(F->ac_1327, rt_r_ichk(F->k_1325));
(*(P817)rt_nil_check(F->c_282v)).hi = f_cons_hi_246(F->ac_1327, rt_r_ichk(F->k_1325));
F->result_ = f_idx_type_249(F->t_1321, rt_r_ichk(F->k_1325));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_282) = F->c_282v;
  RT_FPOP();
  return F->result_;
}

static P815 f_as_subtype_285(P815 e_284) {
  struct f_as_subtype_285fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_284 = e_284;
F->st_1328 = NULL;
if ((F->e_284 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_284)).kind) == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_285((*(P815)rt_nil_check(F->e_284)).a);
goto ret_;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_284)).kind) == (((rt_int)7LL)))) {
if ((!f_type_name_292(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_284)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1328 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P815)rt_nil_check(F->e_284)).line));
(*(P815)rt_nil_check(F->st_1328)).name = (*(P815)rt_nil_check(F->e_284)).name;
F->result_ = F->st_1328;
goto ret_;
} else if (((rt_r_ichk((*(P815)rt_nil_check(F->e_284)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_290((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).a)).name, (*(P815)rt_nil_check(F->e_284)).b, NULL, rt_r_ichk((*(P815)rt_nil_check(F->e_284)).line));
goto ret_;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_284)).kind) != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).a)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).a)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_290((*(P815)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).a)).a)).name, (*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).a)).b, (*(P815)rt_nil_check(F->e_284)).b, rt_r_ichk((*(P815)rt_nil_check(F->e_284)).line));
goto ret_;
} else if ((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).a)).kind) != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1329 = rt_str_copy((((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).a)).name))->all));
F->y_1330 = NULL;
F->y_1330 = f_lookup_154(&F->name_1329);
if ((rt_str_eq(F->name_1329, rt_str("INT", 3)) && (F->y_1330 == NULL))) {
if (((((*(P815)rt_nil_check(F->e_284)).b == NULL) || (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).b)).kind) != (((rt_int)16LL)))) || ((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1328 = f_nn_61((((rt_int)70LL)), rt_r_ichk((*(P815)rt_nil_check(F->e_284)).line));
(*(P815)rt_nil_check(F->st_1328)).a = (*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).b)).a;
(*(P815)rt_nil_check(F->st_1328)).b = (*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).b)).b;
F->result_ = F->st_1328;
goto ret_;
} else if ((rt_str_eq(F->name_1329, rt_str("FLOAT", 5)) && (F->y_1330 == NULL))) {
F->st_1328 = f_nn_61((((rt_int)71LL)), rt_r_ichk((*(P815)rt_nil_check(F->e_284)).line));
(*(P815)rt_nil_check(F->st_1328)).a = (*(P815)rt_nil_check(F->e_284)).b;
if ((((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).b)).next != NULL) && (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).b)).next)).kind) == (((rt_int)16LL))))) {
(*(P815)rt_nil_check(F->st_1328)).b = (*(P815)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).b)).next)).a;
(*(P815)rt_nil_check(F->st_1328)).c = (*(P815)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).b)).next)).b;
}
F->result_ = F->st_1328;
goto ret_;
} else if (((!f_type_name_292(&F->name_1329)) && (!((F->y_1330 == NULL) && ((rt_str_eq(F->name_1329, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1329, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1329, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1328 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P815)rt_nil_check(F->e_284)).line));
(*(P815)rt_nil_check(F->st_1328)).name = (*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_284)).a)).name;
(*(P815)rt_nil_check(F->st_1328)).b = (*(P815)rt_nil_check(F->e_284)).b;
(*(P815)rt_nil_check(F->st_1328)).flag = ((rt_int)1LL);
F->result_ = F->st_1328;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_tt_subtype_290(P808 name_286, P815 tt_287, P815 args_288, rt_int line_289) {
  struct f_tt_subtype_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_286 = name_286;
F->tt_287 = tt_287;
F->args_288 = args_288;
F->line_289 = line_289;
F->st_1331 = NULL;
if (rt_str_eq((((P808)rt_nil_check(F->name_286))->all), rt_str("STRING", 6))) {
F->st_1331 = f_nn_61((((rt_int)73LL)), F->line_289);
} else if (rt_str_eq((((P808)rt_nil_check(F->name_286))->all), rt_str("SET", 3))) {
F->st_1331 = f_nn_61((((rt_int)77LL)), F->line_289);
} else if ((rt_str_eq((((P808)rt_nil_check(F->name_286))->all), rt_str("MAILBOX", 7)) && ((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P825)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1331 = f_nn_61((((rt_int)78LL)), F->line_289);
} else if (rt_str_eq((((P808)rt_nil_check(F->name_286))->all), rt_str("FILE", 4))) {
F->st_1331 = f_nn_61((((rt_int)79LL)), F->line_289);
} else if (f_type_name_292(&(((P808)rt_nil_check(F->name_286))->all))) {
F->st_1331 = f_nn_61((((rt_int)80LL)), F->line_289);
(*(P815)rt_nil_check(F->st_1331)).name = F->name_286;
(*(P815)rt_nil_check(F->st_1331)).a = F->tt_287;
(*(P815)rt_nil_check(F->st_1331)).b = F->args_288;
F->result_ = F->st_1331;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P815)rt_nil_check(F->st_1331)).a = F->tt_287;
(*(P815)rt_nil_check(F->st_1331)).b = F->args_288;
F->result_ = F->st_1331;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_name_292(rstr *name_291) {
  struct f_type_name_292fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_291 = name_291;
F->y_1332 = NULL;
F->y_1332 = f_lookup_154(&(*F->name_291));
if ((F->y_1332 == NULL)) {
F->result_ = ((((((rt_str_eq((*F->name_291), rt_str("INT", 3)) || rt_str_eq((*F->name_291), rt_str("BOOL", 4))) || rt_str_eq((*F->name_291), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_291), rt_str("ASCII", 5))) || rt_str_eq((*F->name_291), rt_str("ACT", 3))) || rt_str_eq((*F->name_291), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_291), rt_str("LATCH", 5)));
goto ret_;
}
F->result_ = (((rt_r_ichk((*(P825)rt_nil_check(F->y_1332)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P825)rt_nil_check(F->y_1332)).kind) == (((rt_int)6LL)))) || ((rt_r_ichk((*(P825)rt_nil_check(F->y_1332)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_1332)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_1332)).decl)).b)).kind) == (((rt_int)44LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_294(P821 t_293) {
  struct f_empty_set_294fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_293 = t_293;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_189(f_base_of_214((*(P821)rt_nil_check(F->t_293)).elem), f_base_cons_217((*(P821)rt_nil_check(F->t_293)).elem, (*(P821)rt_nil_check(F->t_293)).elemcons))), rt_str(", ", 2)), f_sub_hi_192(f_base_of_214((*(P821)rt_nil_check(F->t_293)).elem), f_base_cons_217((*(P821)rt_nil_check(F->t_293)).elem, (*(P821)rt_nil_check(F->t_293)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_296(P821 t_295) {
  struct f_opened_296fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_295 = t_295;
F->c_1333 = NULL;
F->c_1333 = g_caps_870;
if ((((rt_r_ichk((*(P821)rt_nil_check(F->t_295)).kind) != (((rt_int)15LL))) || ((*(P821)rt_nil_check(F->t_295)).ocap == NULL)) || (rt_r_ichk((*(P815)rt_nil_check((*(P821)rt_nil_check(F->t_295)).ocap)).ival) == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1333 != NULL)) {
if (((*(P842)rt_nil_check(F->c_1333)).d == (*(P821)rt_nil_check(F->t_295)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1333 = (*(P842)rt_nil_check(F->c_1333)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_replace_all_300(rstr *s_297, rstr *pat_298, rstr *r_299) {
  struct f_replace_all_300fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_297 = s_297;
F->pat_298 = pat_298;
F->r_299 = r_299;
F->i_1334 = RT_R_IUNDEF;
F->i_1334 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_298)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_297)).len)) < ((rt_int)(((*F->pat_298)).len))))) {
F->result_ = (*F->s_297);
goto ret_;
}
while ((rt_sub(rt_add(rt_r_ichk(F->i_1334), ((rt_int)(((*F->pat_298)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_297)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_297), rt_r_ichk(F->i_1334), rt_sub(rt_add(rt_r_ichk(F->i_1334), ((rt_int)(((*F->pat_298)).len))), ((rt_int)1LL))), (*F->pat_298))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_297), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1334), ((rt_int)1LL))), (*F->r_299)), f_replace_all_300(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_297), rt_add(rt_r_ichk(F->i_1334), ((rt_int)(((*F->pat_298)).len))), ((rt_int)(((*F->s_297)).len))); b_; }), &(*F->pat_298), &(*F->r_299)));
goto ret_;
}
F->i_1334 = rt_add(rt_r_ichk(F->i_1334), ((rt_int)1LL));
}
F->result_ = (*F->s_297);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_subst_302(rstr *s_301) {
  struct f_subst_302fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_301 = s_301;
F->l_1335 = NULL;
F->l_1335 = g_psub_872;
F->r_1336 = NULL;
F->r_1336 = f_mk_3(&(*F->s_301));
while ((F->l_1335 != NULL)) {
F->r_1336 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_300(&(((P808)rt_nil_check(F->r_1336))->all), &(((P808)rt_nil_check((*(P819)rt_nil_check(F->l_1335)).s))->all), &(((P808)rt_nil_check((*(P819)rt_nil_check((*(P819)rt_nil_check(F->l_1335)).next)).s))->all)); b_; }));
F->l_1335 = (*(P819)rt_nil_check((*(P819)rt_nil_check(F->l_1335)).next)).next;
}
F->result_ = (((P808)rt_nil_check(F->r_1336))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P821 f_new_type_306(P825 y_303, P815 st_304, P817 *c_305) {
  struct f_new_type_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_303 = y_303;
F->st_304 = st_304;
F->c_305 = c_305;
F->c_305v = *F->c_305;
F->d_1337 = NULL;
F->d_1337 = (*(P825)rt_nil_check(F->y_303)).decl;
F->p_1338 = NULL;
F->uc_1339 = NULL;
F->c_305v = f_new_cons_175();
if (((*(P825)rt_nil_check(F->y_303)).t == NULL)) {
(*(P825)rt_nil_check(F->y_303)).t = f_new_typ_174((((rt_int)15LL)));
(*(P821)rt_nil_check((*(P825)rt_nil_check(F->y_303)).t)).name = (*(P825)rt_nil_check(F->y_303)).name;
(*(P821)rt_nil_check((*(P825)rt_nil_check(F->y_303)).t)).decl = F->d_1337;
(*(P821)rt_nil_check((*(P825)rt_nil_check(F->y_303)).t)).tparams = (*(P815)rt_nil_check(F->d_1337)).b;
if ((g_caps_870 != NULL)) {
(*(P821)rt_nil_check((*(P825)rt_nil_check(F->y_303)).t)).ocap = (*(P842)rt_nil_check(g_caps_870)).d;
}
f_open_scope_168();
F->p_1338 = (*(P815)rt_nil_check(F->d_1337)).b;
while ((F->p_1338 != NULL)) {
F->z_1340 = NULL;
F->z_1340 = f_new_sym_172((((rt_int)2LL)), (*(P815)rt_nil_check(F->p_1338)).name);
F->zc_1341 = NULL;
(*(P825)rt_nil_check(F->z_1340)).t = f_resolve_subtype_256((*(P815)rt_nil_check(F->p_1338)).a, &F->zc_1341);
(*(P825)rt_nil_check(F->z_1340)).mnext = (*(P821)rt_nil_check((*(P825)rt_nil_check(F->y_303)).t)).tpsyms;
(*(P821)rt_nil_check((*(P825)rt_nil_check(F->y_303)).t)).tpsyms = F->z_1340;
(*(P825)rt_nil_check(F->z_1340)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1338)).name))->all))), rt_str("@", 1)); b_; }));
f_define_159(F->z_1340, rt_r_ichk((*(P815)rt_nil_check(F->d_1337)).line));
F->p_1338 = (*(P815)rt_nil_check(F->p_1338)).next;
}
(*(P821)rt_nil_check((*(P825)rt_nil_check(F->y_303)).t)).under = f_resolve_subtype_256((*(P815)rt_nil_check(F->d_1337)).a, &F->uc_1339);
(*(P821)rt_nil_check((*(P825)rt_nil_check(F->y_303)).t)).elemcons = F->uc_1339;
f_close_scope_169();
}
(*(P817)rt_nil_check(F->c_305v)).args = (*(P815)rt_nil_check(F->st_304)).b;
F->result_ = (*(P825)rt_nil_check(F->y_303)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_305) = F->c_305v;
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_310(rstr *lval_307, P821 t_308, P817 c_309) {
  struct f_init_storage_310fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_307 = lval_307;
F->t_308 = t_308;
F->c_309 = c_309;
f_make_storage_325(&(*F->lval_307), F->t_308, F->c_309);
if (((*(P821)rt_nil_check(F->t_308)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P821)rt_nil_check(F->t_308)).initp, &(*F->lval_307)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_313(P825 y_311, rstr *lval_312) {
  struct f_init_call_313fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_311 = y_311;
F->lval_312 = lval_312;
F->link_1342 = NULL;
F->link_1342 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P825)rt_nil_check(F->y_311)).level) > ((rt_int)0LL))) {
F->link_1342 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1344 = ((rt_int)1LL), hi1345 = rt_sub(rt_r_ichk(g_cur_level_868), rt_r_ichk((*(P825)rt_nil_check(F->y_311)).level));
for (rt_int it1346 = lo1344; it1346 <= hi1345; it1346++) {
F->i_1343 = it1346;
F->link_1342 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->link_1342))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1342 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->link_1342))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check((*(P825)rt_nil_check(F->y_311)).cname))->all), rt_str("(", 1)), (((P808)rt_nil_check(F->link_1342))->all)), rt_str("&", 1)), (*F->lval_312)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_315(P821 t_314) {
  struct f_needs_fin_315fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_314 = t_314;
if ((F->t_314 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P821)rt_nil_check(F->t_314)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_314)).kind) == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_315((*(P821)rt_nil_check(F->t_314)).under);
goto ret_;
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_314)).kind) == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_315((*(P821)rt_nil_check(F->t_314)).elem);
goto ret_;
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->t_314)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->t_314)).kind) == (((rt_int)17LL))))) {
F->f_1347 = NULL;
F->f_1347 = (*(P821)rt_nil_check(F->t_314)).fields;
while ((F->f_1347 != NULL)) {
if (f_needs_fin_315((*(P823)rt_nil_check(F->f_1347)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1347 = (*(P823)rt_nil_check(F->f_1347)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_318(rstr *lval_316, P821 t_317) {
  struct f_fin_code_318fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_316 = lval_316;
F->t_317 = t_317;
F->r_1348 = NULL;
F->r_1348 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P821)rt_nil_check(F->t_317)).finalp != NULL)) {
F->r_1348 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_313((*(P821)rt_nil_check(F->t_317)).finalp, &(*F->lval_316)), rt_str(" ", 1)); b_; }));
}
if (((rt_r_ichk((*(P821)rt_nil_check(F->t_317)).kind) == (((rt_int)15LL))) && ((*(P821)rt_nil_check(F->t_317)).tparams == NULL))) {
F->result_ = rt_str_cat((((P808)rt_nil_check(F->r_1348))->all), f_fin_code_318(&(*F->lval_316), (*(P821)rt_nil_check(F->t_317)).under));
goto ret_;
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_317)).kind) == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P808)rt_nil_check(F->r_1348))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_316), rt_str(".all", 4)); b_; }), (*(P821)rt_nil_check(F->t_317)).under));
goto ret_;
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->t_317)).kind) == (((rt_int)6LL))) && f_needs_fin_315((*(P821)rt_nil_check(F->t_317)).elem))) {
F->i_1349 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_1348))->all), rt_str("for (rt_int ", 12)), F->i_1349), rt_str(" = 0; ", 6)), F->i_1349), rt_str(" < ", 3)), f_acnt_240(F->t_317, &(*F->lval_316))), rt_str("; ", 2)), F->i_1349), rt_str("++) { ", 6)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_316), rt_str(".p[", 3)), F->i_1349), rt_str("]", 1)); b_; }), (*(P821)rt_nil_check(F->t_317)).elem)), rt_str(" }", 2));
goto ret_;
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_317)).kind) == (((rt_int)7LL)))) {
F->f_1350 = NULL;
F->f_1350 = (*(P821)rt_nil_check(F->t_317)).fields;
while ((F->f_1350 != NULL)) {
if (f_needs_fin_315((*(P823)rt_nil_check(F->f_1350)).t)) {
F->r_1348 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_1348))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_316), rt_str(".", 1)), f_field_c_17(&(((P808)rt_nil_check((*(P823)rt_nil_check(F->f_1350)).name))->all))); b_; }), (*(P823)rt_nil_check(F->f_1350)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1350 = (*(P823)rt_nil_check(F->f_1350)).next;
}
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_317)).kind) == (((rt_int)17LL)))) {
F->f_1351 = NULL;
F->f_1351 = (*(P821)rt_nil_check(F->t_317)).fields;
F->i_1352 = RT_R_IUNDEF;
F->i_1352 = ((rt_int)0LL);
F->r_1348 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_1348))->all), rt_str("switch (", 8)), (*F->lval_316)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1351 != NULL)) {
if (f_needs_fin_315((*(P823)rt_nil_check(F->f_1351)).t)) {
F->r_1348 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_1348))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1352))), rt_str(": ", 2)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_316), rt_str(".u.", 3)), f_field_c_17(&(((P808)rt_nil_check((*(P823)rt_nil_check(F->f_1351)).name))->all))); b_; }), (*(P823)rt_nil_check(F->f_1351)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1352 = rt_add(rt_r_ichk(F->i_1352), ((rt_int)1LL));
F->f_1351 = (*(P823)rt_nil_check(F->f_1351)).next;
}
F->r_1348 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->r_1348))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P808)rt_nil_check(F->r_1348))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P821 f_tparam_type_321(P821 t_319, rstr *name_320) {
  struct f_tparam_type_321fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_319 = t_319;
F->name_320 = name_320;
F->z_1353 = NULL;
F->z_1353 = (*(P821)rt_nil_check(F->t_319)).tpsyms;
while ((F->z_1353 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P825)rt_nil_check(F->z_1353)).name))->all), (*F->name_320))) {
F->result_ = (*(P825)rt_nil_check(F->z_1353)).t;
goto ret_;
}
F->z_1353 = (*(P825)rt_nil_check(F->z_1353)).mnext;
}
F->result_ = g_ty_int_895;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_325(rstr *lval_322, P821 t_323, P817 c_324) {
  struct f_make_storage_325fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_322 = lval_322;
F->t_323 = t_323;
F->c_324 = c_324;
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_323)).kind) == (((rt_int)15LL)))) {
F->p_1354 = NULL;
F->p_1354 = (*(P821)rt_nil_check(F->t_323)).tparams;
F->a_1355 = NULL;
F->a_1355 = (*(P817)rt_nil_check(F->c_324)).args;
F->uc_1356 = NULL;
F->ut_1357 = NULL;
F->at_1358 = NULL;
if ((f_list_len_67(F->a_1355) != f_list_len_67(F->p_1354))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_323)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1354))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1354 != NULL)) {
F->pt_1359 = f_tparam_type_321(F->t_323, &(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1354)).name))->all));
F->v_1360 = rt_str_copy(f_gexpr_649(F->a_1355, F->pt_1359, &F->at_1358));
f_check_type_223(F->at_1358, F->pt_1359, rt_r_ichk((*(P815)rt_nil_check(F->a_1355)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p_", 3)), f_lower_s_15(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1354)).name))->all))), rt_str(" = ", 3)), F->v_1360), rt_str(";", 1)); b_; }));
F->p_1354 = (*(P815)rt_nil_check(F->p_1354)).next;
F->a_1355 = (*(P815)rt_nil_check(F->a_1355)).next;
}
{
F->saved_1361 = NULL;
F->saved_1361 = g_psub_872;
F->p_1354 = (*(P821)rt_nil_check(F->t_323)).tparams;
while ((F->p_1354 != NULL)) {
F->l1_1362 = NULL;
F->l2_1363 = NULL;
{ R820 *cell1364 = rt_alloc(sizeof(R820));
(*cell1364).s = NULL;
(*cell1364).next = NULL;
F->l1_1362 = cell1364;
}
{ R820 *cell1365 = rt_alloc(sizeof(R820));
(*cell1365).s = NULL;
(*cell1365).next = NULL;
F->l2_1363 = cell1365;
}
(*(P819)rt_nil_check(F->l1_1362)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1354)).name))->all))), rt_str("@", 1)); b_; }));
(*(P819)rt_nil_check(F->l2_1363)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p_", 3)), f_lower_s_15(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1354)).name))->all))); b_; }));
(*(P819)rt_nil_check(F->l1_1362)).next = F->l2_1363;
(*(P819)rt_nil_check(F->l2_1363)).next = g_psub_872;
g_psub_872 = F->l1_1362;
F->p_1354 = (*(P815)rt_nil_check(F->p_1354)).next;
}
if (((*(P821)rt_nil_check(F->t_323)).tparams == NULL)) {
f_init_storage_310(&(*F->lval_322), (*(P821)rt_nil_check(F->t_323)).under, (*(P821)rt_nil_check(F->t_323)).elemcons);
} else {
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(".all", 4)); b_; }), (*(P821)rt_nil_check(F->t_323)).under, (*(P821)rt_nil_check(F->t_323)).elemcons);
}
g_psub_872 = F->saved_1361;
}
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_323)).kind) == (((rt_int)12LL)))) {
if (((*(P817)rt_nil_check(F->c_324)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_322)), rt_str(", ", 2)), f_subst_302(&(((P808)rt_nil_check((*(P817)rt_nil_check(F->c_324)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_225((*(P821)rt_nil_check(F->t_323)).elem)), rt_str("), ", 3)), f_mcopy_354((*(P821)rt_nil_check(F->t_323)).elem)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_323)).kind) == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_322)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_323)).kind) == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(" = ", 3)), f_empty_set_294(F->t_323)), rt_str(";", 1)); b_; }));
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_323)).kind) == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_323)).kind) == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(" = NULL;", 8)); b_; }));
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_323)).kind) == (((rt_int)5LL)))) {
if (((*(P817)rt_nil_check(F->c_324)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(" = rt_str_new(", 14)), f_subst_302(&(((P808)rt_nil_check((*(P817)rt_nil_check(F->c_324)).slen))->all))), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_323)).kind) == (((rt_int)6LL)))) {
if (((*(P817)rt_nil_check(F->c_324)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1367 = ((rt_int)1LL), hi1368 = rt_r_ichk((*(P821)rt_nil_check(F->t_323)).ndim);
for (rt_int it1369 = lo1367; it1369 <= hi1368; it1369++) {
F->k_1366 = it1369;
if ((f_cons_lo_243(F->c_324, F->k_1366) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".", 1)), f_dim_lo_233(F->k_1366)), rt_str(" = ", 3)), f_subst_302(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P808)rt_nil_check(f_cons_lo_243(F->c_324, F->k_1366)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_322)), rt_str(".", 1)), f_dim_hi_235(F->k_1366)), rt_str(" = ", 3)), f_subst_302(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P808)rt_nil_check(f_cons_hi_246(F->c_324, F->k_1366)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_323)).ndim) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".lo2 = ", 7)), (*F->lval_322)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_225((*(P821)rt_nil_check(F->t_323)).elem)), rt_str(") * (size_t)", 12)), f_acnt_240(F->t_323, &(*F->lval_322))), rt_str(" + 1);", 6)); b_; }));
if (((((((((((rt_r_ichk((*(P821)rt_nil_check((*(P821)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P821)rt_nil_check((*(P821)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P821)rt_nil_check((*(P821)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P821)rt_nil_check((*(P821)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)15LL)))) || (rt_r_ichk((*(P821)rt_nil_check((*(P821)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P821)rt_nil_check((*(P821)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)12LL)))) || (rt_r_ichk((*(P821)rt_nil_check((*(P821)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)13LL)))) || (rt_r_ichk((*(P821)rt_nil_check((*(P821)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P821)rt_nil_check((*(P821)rt_nil_check(F->t_323)).elem)).kind) == (((rt_int)17LL)))) || (rt_r_echk(g_mark_uninit_887) && (!rt_str_eq(f_uninit_value_327((*(P821)rt_nil_check(F->t_323)).elem), rt_str("", 0)))))) {
F->i_1370 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1370), rt_str(" = 0; ", 6)), F->i_1370), rt_str(" < ", 3)), f_acnt_240(F->t_323, &(*F->lval_322))), rt_str("; ", 2)), F->i_1370), rt_str("++) {", 5)); b_; }));
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".p[", 3)), F->i_1370), rt_str("]", 1)); b_; }), (*(P821)rt_nil_check(F->t_323)).elem, (*(P821)rt_nil_check(F->t_323)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_323)).kind) == (((rt_int)7LL)))) {
F->f_1371 = NULL;
F->f_1371 = (*(P821)rt_nil_check(F->t_323)).fields;
while ((F->f_1371 != NULL)) {
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".", 1)), f_field_c_17(&(((P808)rt_nil_check((*(P823)rt_nil_check(F->f_1371)).name))->all))); b_; }), (*(P823)rt_nil_check(F->f_1371)).t, (*(P823)rt_nil_check(F->f_1371)).c);
F->f_1371 = (*(P823)rt_nil_check(F->f_1371)).next;
}
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_323)).kind) == (((rt_int)17LL)))) {
if (((F->c_324 != NULL) && rt_r_echk((*(P817)rt_nil_check(F->c_324)).hasm))) {
F->f_1372 = NULL;
F->f_1372 = (*(P821)rt_nil_check(F->t_323)).fields;
{ rt_int lo1374 = ((rt_int)1LL), hi1375 = rt_r_ichk((*(P817)rt_nil_check(F->c_324)).mlo);
for (rt_int it1376 = lo1374; it1376 <= hi1375; it1376++) {
F->i_1373 = it1376;
F->f_1372 = (*(P823)rt_nil_check(F->f_1372)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk((*(P817)rt_nil_check(F->c_324)).mlo))), rt_str(";", 1)); b_; }));
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_322), rt_str(".u.", 3)), f_field_c_17(&(((P808)rt_nil_check((*(P823)rt_nil_check(F->f_1372)).name))->all))); b_; }), (*(P823)rt_nil_check(F->f_1372)).t, (*(P823)rt_nil_check(F->f_1372)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_322), rt_str(".tag = -1;", 10)); b_; }));
}
} else if ((rt_r_echk(g_mark_uninit_887) && (!rt_str_eq(f_uninit_value_327(F->t_323), rt_str("", 0))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_322), rt_str(" = ", 3)), f_uninit_value_327(F->t_323)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_uninit_value_327(P821 t_326) {
  struct f_uninit_value_327fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_326 = t_326;
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_326)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str("RT_R_IUNDEF", 11);
goto ret_;
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->t_326)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->t_326)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str("RT_R_EUNDEF", 11);
goto ret_;
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_326)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("rt_r_fundef()", 13);
goto ret_;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_init_chk_330(P821 t_328, rstr *v_329) {
  struct f_init_chk_330fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_328 = t_328;
F->v_329 = v_329;
F->b_1377 = NULL;
F->b_1377 = f_base_of_214(F->t_328);
if (f_suppressed_443(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))) {
F->result_ = (*F->v_329);
goto ret_;
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->b_1377)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_ichk(", 10), (*F->v_329)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->b_1377)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->b_1377)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_echk(", 10), (*F->v_329)), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->b_1377)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fchk(", 10), (*F->v_329)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_329);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_manifest_333(P815 e_331, int *ok_332) {
  struct f_manifest_333fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_331 = e_331;
F->ok_332 = ok_332;
F->ok_332v = *F->ok_332;
F->v_1378 = NULL;
F->v_1378 = f_meval_342(F->e_331, &F->ok_332v);
if ((rt_r_echk(F->ok_332v) && (rt_r_ichk((*(P834)rt_nil_check(F->v_1378)).kind) == (((rt_int)1LL))))) {
F->result_ = rt_r_ichk((*(P834)rt_nil_check(F->v_1378)).i);
goto ret_;
}
F->ok_332v = 0;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_332v)) (*F->ok_332) = F->ok_332v;
  RT_FPOP();
  return F->result_;
}

static P834 f_mk_mval_336(rt_int kind_334, rt_int i_335) {
  struct f_mk_mval_336fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_334 = kind_334;
F->i_335 = i_335;
F->v_1379 = NULL;
{ R835 *cell1380 = rt_alloc(sizeof(R835));
(*cell1380).s = NULL;
(*cell1380).t = NULL;
F->v_1379 = cell1380;
}
(*(P834)rt_nil_check(F->v_1379)).kind = F->kind_334;
(*(P834)rt_nil_check(F->v_1379)).i = F->i_335;
F->result_ = F->v_1379;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_ipow_339(rt_int a_337, rt_int b_338) {
  struct f_ipow_339fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_337 = a_337;
F->b_338 = b_338;
F->r_1381 = RT_R_IUNDEF;
F->r_1381 = ((rt_int)1LL);
{ rt_int lo1383 = ((rt_int)1LL), hi1384 = F->b_338;
for (rt_int it1385 = lo1383; it1385 <= hi1384; it1385++) {
F->i_1382 = it1385;
F->r_1381 = rt_mul(rt_r_ichk(F->r_1381), F->a_337);
}
}
F->result_ = rt_r_ichk(F->r_1381);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P834 f_meval_342(P815 e_340, int *ok_341) {
  struct f_meval_342fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_340 = e_340;
F->ok_341 = ok_341;
F->ok_341v = *F->ok_341;
F->a_1386 = NULL;
F->b_1387 = NULL;
F->ok2_1388 = RT_R_EUNDEF;
F->op_1389 = NULL;
F->ok_341v = 0;
if ((F->e_340 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_340)).kind) == (((rt_int)1LL)))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_r_ichk((*(P815)rt_nil_check(F->e_340)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_340)).kind) == (((rt_int)5LL)))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)2LL)), rt_r_ichk((*(P815)rt_nil_check(F->e_340)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_340)).kind) == (((rt_int)2LL)))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)3LL)), ((rt_int)0LL));
goto ret_;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_340)).kind) == (((rt_int)3LL)))) {
F->ok_341v = 1;
F->a_1386 = f_mk_mval_336((((rt_int)5LL)), ((rt_int)0LL));
(*(P834)rt_nil_check(F->a_1386)).s = (*(P815)rt_nil_check(F->e_340)).name;
F->result_ = F->a_1386;
goto ret_;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_340)).kind) == (((rt_int)4LL)))) {
if ((f_lit_index_253((*(P821)rt_nil_check(g_ty_ascii_898)).lits, &(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_340)).name))->all)) >= ((rt_int)0LL))) {
F->ok_341v = 1;
F->a_1386 = f_mk_mval_336((((rt_int)4LL)), f_lit_index_253((*(P821)rt_nil_check(g_ty_ascii_898)).lits, &(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_340)).name))->all)));
(*(P834)rt_nil_check(F->a_1386)).t = g_ty_ascii_898;
(*(P834)rt_nil_check(F->a_1386)).s = (*(P815)rt_nil_check(F->e_340)).name;
F->result_ = F->a_1386;
goto ret_;
}
F->a_1386 = f_mk_mval_336((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P834)rt_nil_check(F->a_1386)).s = (*(P815)rt_nil_check(F->e_340)).name;
F->ok_341v = 1;
F->result_ = F->a_1386;
goto ret_;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_340)).kind) == (((rt_int)17LL)))) {
F->result_ = f_meval_342((*(P815)rt_nil_check(F->e_340)).a, &F->ok_341v);
goto ret_;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_340)).kind) == (((rt_int)7LL)))) {
F->y_1390 = NULL;
F->y_1390 = f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_340)).name))->all));
if ((((F->y_1390 != NULL) && (rt_r_ichk((*(P825)rt_nil_check(F->y_1390)).kind) == (((rt_int)2LL)))) && ((*(P825)rt_nil_check(F->y_1390)).mv != NULL))) {
F->ok_341v = 1;
F->result_ = (*(P825)rt_nil_check(F->y_1390)).mv;
goto ret_;
} else if ((((F->y_1390 != NULL) && (rt_r_ichk((*(P825)rt_nil_check(F->y_1390)).kind) == (((rt_int)2LL)))) && rt_r_echk((*(P825)rt_nil_check(F->y_1390)).hasmv))) {
F->ok_341v = 1;
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_r_ichk((*(P825)rt_nil_check(F->y_1390)).mvalue));
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_340)).kind) == (((rt_int)8LL)))) {
F->a_1386 = f_meval_342((*(P815)rt_nil_check(F->e_340)).a, &F->ok_341v);
if ((!rt_r_echk(F->ok_341v))) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_340)).name))->all), rt_str("NOT", 3)) && (rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).kind) == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), rt_sub(((rt_int)1LL), rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i)));
goto ret_;
} else if ((rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_340)).name))->all), rt_str("-", 1)) && (rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).kind) == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_neg(rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i)));
goto ret_;
} else if (((rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_340)).name))->all), rt_str("+", 1)) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_340)).name))->all), rt_str("-", 1))) && ((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).kind) == (((rt_int)3LL)))))) {
F->result_ = F->a_1386;
goto ret_;
}
F->ok_341v = 0;
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P815)rt_nil_check(F->e_340)).kind) != (((rt_int)9LL))) || f_user_defined_352(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_340)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1389 = (*(P815)rt_nil_check(F->e_340)).name;
F->a_1386 = f_meval_342((*(P815)rt_nil_check(F->e_340)).a, &F->ok_341v);
F->b_1387 = f_meval_342((*(P815)rt_nil_check(F->e_340)).b, &F->ok2_1388);
F->ok_341v = (rt_r_echk(F->ok_341v) && rt_r_echk(F->ok2_1388));
if ((!rt_r_echk(F->ok_341v))) {
F->result_ = NULL;
goto ret_;
}
F->ok_341v = 0;
if (((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).kind) == (((rt_int)1LL))) && (rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).kind) == (((rt_int)1LL))))) {
F->ok_341v = 1;
if (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_add(rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i), rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i)));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_sub(rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i), rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i)));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_mul(rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i), rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i)));
goto ret_;
} else if ((rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("DIV", 3)) && (rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_div(rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i), rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i)));
goto ret_;
} else if ((rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("MOD", 3)) && (rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), rt_mod(rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i), rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i)));
goto ret_;
} else if ((rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("**", 2)) && (rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i) >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_336((((rt_int)1LL)), f_ipow_339(rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i), rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i)));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i) == rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i))));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i) != rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i))));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i) < rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i))));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i) <= rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i))));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i) > rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i))));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i) >= rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).kind) == (((rt_int)3LL)))) && (((rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("+", 1)) || rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("-", 1))) || rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("*", 1))) || rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("/", 1))))) {
F->ok_341v = 1;
F->result_ = F->a_1386;
goto ret_;
} else if ((((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).kind) == (((rt_int)1LL)))) && rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("**", 2)))) {
F->ok_341v = 1;
F->result_ = F->a_1386;
goto ret_;
} else if (((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).kind) == (((rt_int)2LL))) && (rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).kind) == (((rt_int)2LL))))) {
F->ok_341v = 1;
if (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), rt_mul(rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i), rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i)));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_add(rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i), rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i)) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("XOR", 3)) || rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i) != rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i))));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).i) == rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).kind) == (((rt_int)4LL)))) && (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("=", 1)) || rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("/=", 2))))) {
F->ok_341v = 1;
if (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346(rt_str_eq((((P808)rt_nil_check((*(P834)rt_nil_check(F->a_1386)).s))->all), (((P808)rt_nil_check((*(P834)rt_nil_check(F->b_1387)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((!rt_str_eq((((P808)rt_nil_check((*(P834)rt_nil_check(F->a_1386)).s))->all), (((P808)rt_nil_check((*(P834)rt_nil_check(F->b_1387)).s))->all)))));
goto ret_;
} else if ((((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).kind) == (((rt_int)5LL)))) && (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("=", 1)) || rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("/=", 2))))) {
F->ok_341v = 1;
if (rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346(rt_str_eq((((P808)rt_nil_check((*(P834)rt_nil_check(F->a_1386)).s))->all), (((P808)rt_nil_check((*(P834)rt_nil_check(F->b_1387)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_336((((rt_int)2LL)), f_bool_i_346((!rt_str_eq((((P808)rt_nil_check((*(P834)rt_nil_check(F->a_1386)).s))->all), (((P808)rt_nil_check((*(P834)rt_nil_check(F->b_1387)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P808)rt_nil_check(F->op_1389))->all), rt_str("&", 1)) && ((rt_r_ichk((*(P834)rt_nil_check(F->a_1386)).kind) == (((rt_int)5LL))) || ((*(P834)rt_nil_check(F->a_1386)).t == g_ty_ascii_898))) && ((rt_r_ichk((*(P834)rt_nil_check(F->b_1387)).kind) == (((rt_int)5LL))) || ((*(P834)rt_nil_check(F->b_1387)).t == g_ty_ascii_898)))) {
F->r_1391 = NULL;
F->r_1391 = f_mk_mval_336((((rt_int)5LL)), ((rt_int)0LL));
F->ok_341v = 1;
(*(P834)rt_nil_check(F->r_1391)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_348(F->a_1386), f_mstr_348(F->b_1387)); b_; }));
F->result_ = F->r_1391;
goto ret_;
}
F->ok_341v = 0;
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_341v)) (*F->ok_341) = F->ok_341v;
  RT_FPOP();
  return F->result_;
}

static rstr f_bool_text_344(int b_343) {
  struct f_bool_text_344fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_343 = b_343;
if (F->b_343) {
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

static rt_int f_bool_i_346(int b_345) {
  struct f_bool_i_346fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_345 = b_345;
if (F->b_345) {
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

static rstr f_mstr_348(P834 v_347) {
  struct f_mstr_348fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_347 = v_347;
if ((rt_r_ichk((*(P834)rt_nil_check(F->v_347)).kind) == (((rt_int)5LL)))) {
F->result_ = (((P808)rt_nil_check((*(P834)rt_nil_check(F->v_347)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_350(rt_r_ichk((*(P834)rt_nil_check(F->v_347)).i)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ascii_char_350(rt_int i_349) {
  struct f_ascii_char_350fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_349 = i_349;
F->printable_1392 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_349 >= ((rt_int)32LL)) && (F->i_349 <= ((rt_int)126LL)))) {
F->result_ = rt_r_echk(rt_str_get(F->printable_1392, rt_sub(F->i_349, ((rt_int)31LL))));
goto ret_;
}
F->result_ = 32;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_user_defined_352(rstr *op_351) {
  struct f_user_defined_352fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_351 = op_351;
F->y_1393 = NULL;
F->y_1393 = f_lookup_154(&(*F->op_351));
F->result_ = ((F->y_1393 != NULL) && ((rt_r_ichk((*(P825)rt_nil_check(F->y_1393)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P825)rt_nil_check(F->y_1393)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_354(P821 t_353) {
  struct f_mcopy_354fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_353 = t_353;
F->ct_1394 = rt_str_copy(f_ctype_225(F->t_353));
F->name_1395 = rt_str_new(rt_add(((rt_int)((F->ct_1394).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1395, rt_str_cat(rt_str("mc_", 3), F->ct_1394));
F->l_1396 = NULL;
if ((!f_seen_name_375(g_mcopies_894, &F->name_1395))) {
{ R820 *cell1397 = rt_alloc(sizeof(R820));
(*cell1397).s = NULL;
(*cell1397).next = NULL;
F->l_1396 = cell1397;
}
(*(P819)rt_nil_check(F->l_1396)).s = f_mk_3(&F->name_1395);
(*(P819)rt_nil_check(F->l_1396)).next = g_mcopies_894;
g_mcopies_894 = F->l_1396;
f_put_27(g_out_protos_860, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1395), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1395), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1394), rt_str(" *)d = ", 7)), f_copy_code_364(F->t_353, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1394), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_1395;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_356(P821 t_355) {
  struct f_composite_356fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_355 = t_355;
F->result_ = ((((rt_r_ichk((*(P821)rt_nil_check(F->t_355)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->t_355)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P821)rt_nil_check(F->t_355)).kind) == (((rt_int)17LL)))) || ((rt_r_ichk((*(P821)rt_nil_check(F->t_355)).kind) == (((rt_int)15LL))) && ((*(P821)rt_nil_check(F->t_355)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_361(rstr *lval_357, P821 t_358, rstr *v_359, P817 c_360) {
  struct f_assign_code_361fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_357 = lval_357;
F->t_358 = t_358;
F->v_359 = v_359;
F->c_360 = c_360;
if (((rt_r_ichk((*(P821)rt_nil_check(F->t_358)).kind) == (((rt_int)15LL))) && ((*(P821)rt_nil_check(F->t_358)).tparams == NULL))) {
F->result_ = f_assign_code_361(&(*F->lval_357), (*(P821)rt_nil_check(F->t_358)).under, &(*F->v_359), F->c_360);
goto ret_;
}
if ((((rt_r_ichk((*(P821)rt_nil_check(F->t_358)).kind) == (((rt_int)17LL))) && (F->c_360 != NULL)) && ((*(P817)rt_nil_check(F->c_360)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_225(F->t_358)), rt_str(" u_ = ", 6)), (*F->v_359)), rt_str("; if (u_.tag != (", 17)), (((P808)rt_nil_check((*(P817)rt_nil_check(F->c_360)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_225(F->t_358)), rt_str("(&", 2)), (*F->lval_357)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_356(F->t_358)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_225(F->t_358)), rt_str("(&", 2)), (*F->lval_357)), rt_str(", ", 2)), (*F->v_359)), rt_str(");", 2));
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_358)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_357)), rt_str(", ", 2)), (*F->v_359)), rt_str(");", 2));
goto ret_;
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->t_358)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->t_358)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_225(F->t_358)), rt_str("(&", 2)), (*F->lval_357)), rt_str(", ", 2)), (*F->v_359)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_357), rt_str(" = ", 3)), f_checked_204(F->t_358, F->c_360, &(*F->v_359))), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_364(P821 t_362, rstr *v_363) {
  struct f_copy_code_364fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_362 = t_362;
F->v_363 = v_363;
if (((rt_r_ichk((*(P821)rt_nil_check(F->t_362)).kind) == (((rt_int)15LL))) && ((*(P821)rt_nil_check(F->t_362)).tparams == NULL))) {
F->result_ = f_copy_code_364((*(P821)rt_nil_check(F->t_362)).under, &(*F->v_363));
goto ret_;
}
if (f_composite_356(F->t_362)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_225(F->t_362)), rt_str("(", 1)), (*F->v_363)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_362)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_363)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->t_362)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->t_362)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_225(F->t_362)), rt_str("(", 1)), (*F->v_363)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_363);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_368(P821 t_365, rstr *a_366, rstr *b_367) {
  struct f_eq_code_368fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_365 = t_365;
F->a_366 = a_366;
F->b_367 = b_367;
if (((rt_r_ichk((*(P821)rt_nil_check(F->t_365)).kind) == (((rt_int)15LL))) && ((*(P821)rt_nil_check(F->t_365)).tparams == NULL))) {
F->result_ = f_eq_code_368((*(P821)rt_nil_check(F->t_365)).under, &(*F->a_366), &(*F->b_367));
goto ret_;
}
if (f_composite_356(F->t_365)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_225(F->t_365)), rt_str("(", 1)), (*F->a_366)), rt_str(", ", 2)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_365)).kind) == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), (*F->a_366)), rt_str(", ", 2)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_365)).kind) == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_366)), rt_str(" == ", 4)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_365)).kind) == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_366)), rt_str(" == ", 4)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_365)).kind) == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_365)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_366)), rt_str(", ", 2)), (*F->b_367)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->t_365)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->t_365)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_225(F->t_365)), rt_str("(", 1)), (*F->a_366)), rt_str(", ", 2)), (*F->b_367)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_366)), rt_str(" == ", 4)), (*F->b_367)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_372(rstr *lval_369, P821 t_370, rstr *v_371) {
  struct f_elem_assign_372fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_369 = lval_369;
F->t_370 = t_370;
F->v_371 = v_371;
F->result_ = f_assign_code_361(&(*F->lval_369), F->t_370, &(*F->v_371), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_375(P819 l_373, rstr *s_374) {
  struct f_seen_name_375fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_373 = l_373;
F->s_374 = s_374;
F->p_1398 = NULL;
F->p_1398 = F->l_373;
while ((F->p_1398 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P819)rt_nil_check(F->p_1398)).s))->all), (*F->s_374))) {
F->result_ = 1;
goto ret_;
}
F->p_1398 = (*(P819)rt_nil_check(F->p_1398)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_376(void) {
  struct f_emit_helpers_376fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_1399 = NULL;
F->t_1400 = NULL;
F->t_1400 = g_all_types_856;
F->done_1401 = NULL;
while ((F->t_1400 != NULL)) {
if ((f_composite_356(F->t_1400) && (!f_seen_name_375(F->done_1401, &(((P808)rt_nil_check((*(P821)rt_nil_check(F->t_1400)).cname))->all))))) {
F->l_1402 = NULL;
F->c_1403 = rt_str_new(((rt_int)(((((P808)rt_nil_check((*(P821)rt_nil_check(F->t_1400)).cname))->all)).len)));
rt_str_assign(&F->c_1403, (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_1400)).cname))->all));
{ R820 *cell1404 = rt_alloc(sizeof(R820));
(*cell1404).s = NULL;
(*cell1404).next = NULL;
F->l_1402 = cell1404;
}
(*(P819)rt_nil_check(F->l_1402)).s = (*(P821)rt_nil_check(F->t_1400)).cname;
(*(P819)rt_nil_check(F->l_1402)).next = F->done_1401;
F->done_1401 = F->l_1402;
f_put_27(g_out_helpers_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1403), rt_str("(", 1)), F->c_1403), rt_str(" *d, ", 5)), F->c_1403), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1403), rt_str(" cp_", 4)), F->c_1403), rt_str("(", 1)), F->c_1403), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_859, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1403), rt_str("(", 1)), F->c_1403), rt_str(" a, ", 4)), F->c_1403), rt_str(" b);", 4)); b_; }));
f_helper_bodies_378(F->t_1400);
}
F->t_1400 = (*(P821)rt_nil_check(F->t_1400)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_378(P821 t_377) {
  struct f_helper_bodies_378fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_377 = t_377;
F->c_1405 = rt_str_new(((rt_int)(((((P808)rt_nil_check((*(P821)rt_nil_check(F->t_377)).cname))->all)).len)));
rt_str_assign(&F->c_1405, (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_377)).cname))->all));
F->b_1406 = NULL;
F->b_1406 = g_out_funcs_862;
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_377)).kind) == (((rt_int)6LL)))) {
F->e_1407 = NULL;
F->e_1407 = (*(P821)rt_nil_check(F->t_377)).elem;
F->sizes_1408 = NULL;
F->sizes_1408 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1409 = NULL;
F->bounds_1409 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1411 = ((rt_int)1LL), hi1412 = rt_r_ichk((*(P821)rt_nil_check(F->t_377)).ndim);
for (rt_int it1413 = lo1411; it1413 <= hi1412; it1413++) {
F->k_1410 = it1413;
F->l_1414 = rt_str_copy(f_dim_lo_233(F->k_1410));
F->h_1415 = rt_str_copy(f_dim_hi_235(F->k_1410));
F->sizes_1408 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->sizes_1408))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1414), rt_str(", d->", 5)), F->h_1415), rt_str(") != RT_R_EXT(s.", 16)), F->l_1414), rt_str(", s.", 4)), F->h_1415), rt_str(")", 1)); b_; }));
F->bounds_1409 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->bounds_1409))->all), rt_str(" || a.", 6)), F->l_1414), rt_str(" != b.", 6)), F->l_1414), rt_str(" || a.", 6)), F->h_1415), rt_str(" != b.", 6)), F->h_1415); b_; }));
}
}
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1405), rt_str("(", 1)), F->c_1405), rt_str(" *d, ", 5)), F->c_1405), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P808)rt_nil_check(F->sizes_1408))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1407, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1407, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1405), rt_str(" cp_", 4)), F->c_1405), rt_str("(", 1)), F->c_1405), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1405), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_225(F->e_1407)), rt_str(") * (size_t)", 12)), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_364(F->e_1407, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1405), rt_str("(", 1)), F->c_1405), rt_str(" a, ", 4)), F->c_1405), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P808)rt_nil_check(F->bounds_1409))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_240(F->t_377, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_368(F->e_1407, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_377)).kind) == (((rt_int)15LL)))) {
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1405), rt_str("(", 1)), F->c_1405), rt_str(" *d, ", 5)), F->c_1405), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_177((*(P821)rt_nil_check(F->t_377)).under) && ((*(P821)rt_nil_check(F->t_377)).elemcons != NULL)) && ((*(P817)rt_nil_check((*(P821)rt_nil_check(F->t_377)).elemcons)).lo != NULL))) {
F->saved_1416 = NULL;
F->saved_1416 = g_psub_872;
F->p_1417 = NULL;
F->p_1417 = (*(P821)rt_nil_check(F->t_377)).tparams;
while ((F->p_1417 != NULL)) {
F->l1_1418 = NULL;
F->l2_1419 = NULL;
{ R820 *cell1420 = rt_alloc(sizeof(R820));
(*cell1420).s = NULL;
(*cell1420).next = NULL;
F->l1_1418 = cell1420;
}
{ R820 *cell1421 = rt_alloc(sizeof(R820));
(*cell1421).s = NULL;
(*cell1421).next = NULL;
F->l2_1419 = cell1421;
}
(*(P819)rt_nil_check(F->l1_1418)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1417)).name))->all))), rt_str("@", 1)); b_; }));
(*(P819)rt_nil_check(F->l2_1419)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1417)).name))->all))); b_; }));
(*(P819)rt_nil_check(F->l1_1418)).next = F->l2_1419;
(*(P819)rt_nil_check(F->l2_1419)).next = g_psub_872;
g_psub_872 = F->l1_1418;
F->p_1417 = (*(P815)rt_nil_check(F->p_1417)).next;
}
if ((rt_r_ichk((*(P821)rt_nil_check((*(P821)rt_nil_check(F->t_377)).under)).kind) == (((rt_int)3LL)))) {
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_302(&(((P808)rt_nil_check((*(P817)rt_nil_check((*(P821)rt_nil_check(F->t_377)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_302(&(((P808)rt_nil_check((*(P817)rt_nil_check((*(P821)rt_nil_check(F->t_377)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_302(&(((P808)rt_nil_check((*(P817)rt_nil_check((*(P821)rt_nil_check(F->t_377)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_302(&(((P808)rt_nil_check((*(P817)rt_nil_check((*(P821)rt_nil_check(F->t_377)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_872 = F->saved_1416;
} else {
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P821)rt_nil_check(F->t_377)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1405), rt_str(" cp_", 4)), F->c_1405), rt_str("(", 1)), F->c_1405), rt_str(" s) { s.all = ", 14)), f_copy_code_364((*(P821)rt_nil_check(F->t_377)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1405), rt_str("(", 1)), F->c_1405), rt_str(" a, ", 4)), F->c_1405), rt_str(" b) { return ", 13)), f_eq_code_368((*(P821)rt_nil_check(F->t_377)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_377)).kind) == (((rt_int)17LL)))) {
F->f_1422 = NULL;
F->f_1422 = (*(P821)rt_nil_check(F->t_377)).fields;
F->i_1423 = RT_R_IUNDEF;
F->i_1423 = ((rt_int)0LL);
F->cases_as_1424 = NULL;
F->cases_as_1424 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1425 = NULL;
F->cases_cp_1425 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1426 = NULL;
F->cases_eq_1426 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1422 != NULL)) {
F->fn_1427 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P808)rt_nil_check((*(P823)rt_nil_check(F->f_1422)).name))->all))));
F->cases_as_1424 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->cases_as_1424))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1423))), rt_str(": d->", 5)), F->fn_1427), rt_str(" = ", 3)), f_copy_code_364((*(P823)rt_nil_check(F->f_1422)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1427); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1425 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->cases_cp_1425))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1423))), rt_str(": d.", 4)), F->fn_1427), rt_str(" = ", 3)), f_copy_code_364((*(P823)rt_nil_check(F->f_1422)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1427); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1426 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->cases_eq_1426))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1423))), rt_str(": return ", 9)), f_eq_code_368((*(P823)rt_nil_check(F->f_1422)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1427); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1427); b_; }))), rt_str(";", 1)); b_; }));
F->i_1423 = rt_add(rt_r_ichk(F->i_1423), ((rt_int)1LL));
F->f_1422 = (*(P823)rt_nil_check(F->f_1422)).next;
}
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1405), rt_str("(", 1)), F->c_1405), rt_str(" *d, ", 5)), F->c_1405), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P808)rt_nil_check(F->cases_as_1424))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1405), rt_str(" cp_", 4)), F->c_1405), rt_str("(", 1)), F->c_1405), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1405), rt_str(" d = s; switch (s.tag) {", 24)), (((P808)rt_nil_check(F->cases_cp_1425))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1405), rt_str("(", 1)), F->c_1405), rt_str(" a, ", 4)), F->c_1405), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P808)rt_nil_check(F->cases_eq_1426))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1428 = NULL;
F->f_1428 = (*(P821)rt_nil_check(F->t_377)).fields;
F->conds_1429 = NULL;
F->conds_1429 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1405), rt_str("(", 1)), F->c_1405), rt_str(" *d, ", 5)), F->c_1405), rt_str(" s) {", 5)); b_; }));
while ((F->f_1428 != NULL)) {
F->fn_1430 = rt_str_copy(f_field_c_17(&(((P808)rt_nil_check((*(P823)rt_nil_check(F->f_1428)).name))->all)));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1430); b_; }), (*(P823)rt_nil_check(F->f_1428)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1430); b_; }))); b_; }));
F->f_1428 = (*(P823)rt_nil_check(F->f_1428)).next;
}
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1405), rt_str(" cp_", 4)), F->c_1405), rt_str("(", 1)), F->c_1405), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1405), rt_str(" d = s;", 7)); b_; }));
F->f_1428 = (*(P821)rt_nil_check(F->t_377)).fields;
while ((F->f_1428 != NULL)) {
F->fn_1431 = rt_str_copy(f_field_c_17(&(((P808)rt_nil_check((*(P823)rt_nil_check(F->f_1428)).name))->all)));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1431), rt_str(" = ", 3)), f_copy_code_364((*(P823)rt_nil_check(F->f_1428)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1431); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1429 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->conds_1429))->all), rt_str(" && ", 4)), f_eq_code_368((*(P823)rt_nil_check(F->f_1428)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1431); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1431); b_; }))); b_; }));
F->f_1428 = (*(P823)rt_nil_check(F->f_1428)).next;
}
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1405), rt_str("(", 1)), F->c_1405), rt_str(" a, ", 4)), F->c_1405), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P808)rt_nil_check(F->conds_1429))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_380(P815 elems_379) {
  struct f_declare_body_380fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_379 = elems_379;
F->e_1432 = NULL;
F->e_1432 = F->elems_379;
while ((F->e_1432 != NULL)) {
if (((rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).kind) == (((rt_int)41LL))) && (rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).flag) == ((rt_int)0LL)))) {
f_manifest_const_382(F->e_1432);
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).kind) == (((rt_int)47LL)))) {
f_gen_capsule_390(F->e_1432);
} else if ((((rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).kind) == (((rt_int)48LL))) && (rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).flag) != ((rt_int)1LL))) && (rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).flag) != ((rt_int)3LL)))) {
f_gen_expose_407(F->e_1432);
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).kind) == (((rt_int)49LL)))) {
F->y_1433 = NULL;
F->y_1433 = f_new_sym_172((((rt_int)7LL)), (*(P815)rt_nil_check(F->e_1432)).name);
(*(P825)rt_nil_check(F->y_1433)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_1432)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_159(F->y_1433, rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).line));
f_put_27(g_out_globals_861, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P808)rt_nil_check((*(P825)rt_nil_check(F->y_1433)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_864, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P808)rt_nil_check((*(P825)rt_nil_check(F->y_1433)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P808)rt_nil_check((*(P815)rt_nil_check(F->e_1432)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).kind) == (((rt_int)42LL)))) {
F->y_1434 = NULL;
F->y_1434 = f_new_sym_172((((rt_int)6LL)), (*(P815)rt_nil_check(F->e_1432)).name);
(*(P825)rt_nil_check(F->y_1434)).st = (*(P815)rt_nil_check(F->e_1432)).a;
(*(P825)rt_nil_check(F->y_1434)).decl = F->e_1432;
f_define_159(F->y_1434, rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).line));
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).kind) == (((rt_int)44LL)))) {
F->y_1435 = NULL;
F->y_1435 = f_new_sym_172((((rt_int)5LL)), (*(P815)rt_nil_check(F->e_1432)).name);
F->t_1436 = NULL;
F->t_1436 = f_new_typ_174((((rt_int)8LL)));
(*(P821)rt_nil_check(F->t_1436)).name = (*(P815)rt_nil_check(F->e_1432)).name;
(*(P821)rt_nil_check(F->t_1436)).decl = F->e_1432;
(*(P825)rt_nil_check(F->y_1435)).t = F->t_1436;
f_define_159(F->y_1435, rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).line));
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).kind) == (((rt_int)43LL)))) {
F->y_1437 = NULL;
F->y_1437 = f_new_sym_172((((rt_int)5LL)), (*(P815)rt_nil_check(F->e_1432)).name);
(*(P825)rt_nil_check(F->y_1437)).st = (*(P815)rt_nil_check(F->e_1432)).a;
(*(P825)rt_nil_check(F->y_1437)).decl = F->e_1432;
f_define_159(F->y_1437, rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).line));
}
F->e_1432 = (*(P815)rt_nil_check(F->e_1432)).next;
}
F->e_1432 = F->elems_379;
while ((F->e_1432 != NULL)) {
if ((((rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).kind) == (((rt_int)50LL))))) {
F->y_1438 = NULL;
f_declare_subprogram_434(F->e_1432);
F->y_1438 = f_lookup_decl_156(F->e_1432);
(*(P825)rt_nil_check(F->y_1438)).home = F->elems_379;
f_normal_function_432(F->e_1432, F->y_1438);
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).kind) == (((rt_int)51LL)))) {
F->g_1439 = NULL;
F->g_1439 = f_new_sym_172((((rt_int)10LL)), (*(P815)rt_nil_check(F->e_1432)).name);
(*(P825)rt_nil_check(F->g_1439)).decl = F->e_1432;
(*(P825)rt_nil_check(F->g_1439)).level = rt_r_ichk(g_cur_level_868);
(*(P825)rt_nil_check(F->g_1439)).owner = g_func_sym_879;
(*(P825)rt_nil_check(F->g_1439)).gctx = g_fctx_869;
f_define_159(F->g_1439, rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).line));
}
F->e_1432 = (*(P815)rt_nil_check(F->e_1432)).next;
}
F->e_1432 = F->elems_379;
{
F->snap_1440 = NULL;
while ((F->e_1432 != NULL)) {
if ((rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).kind) == (((rt_int)51LL)))) {
if ((F->snap_1440 == NULL)) {
{ P829 cell1441 = rt_alloc(sizeof *cell1441);
rt_int pv1442 = (((rt_int)4093LL));
cell1441->p_n = pv1442;
cell1441->all.lo = ((rt_int)0LL); cell1441->all.hi = pv1442;
cell1441->all.lo2 = cell1441->all.hi2 = 1;
cell1441->all.p = rt_alloc(sizeof(P825) * (size_t)(RT_CNT(cell1441->all)) + 1);
for (rt_int i1443 = 0; i1443 < (RT_CNT(cell1441->all)); i1443++) {
cell1441->all.p[i1443] = NULL;
}
F->snap_1440 = cell1441;
}
{ rt_int lo1445 = ((rt_int)0LL), hi1446 = (((rt_int)4093LL));
for (rt_int it1447 = lo1445; it1447 <= hi1446; it1447++) {
F->i_1444 = it1447;
(((P829)rt_nil_check(F->snap_1440))->all).p[(rt_index(F->i_1444, (((P829)rt_nil_check(F->snap_1440))->all).lo, (((P829)rt_nil_check(F->snap_1440))->all).hi) - (((P829)rt_nil_check(F->snap_1440))->all).lo)] = ({ A831 b_ = (((P829)rt_nil_check(g_table_851))->all); b_.p[(rt_index(F->i_1444, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1448 = NULL;
F->g_1448 = f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_1432)).name))->all));
(*(P825)rt_nil_check(F->g_1448)).env = F->snap_1440;
}
}
F->e_1432 = (*(P815)rt_nil_check(F->e_1432)).next;
}
}
F->e_1432 = F->elems_379;
while ((F->e_1432 != NULL)) {
if (((rt_r_ichk((*(P815)rt_nil_check(F->e_1432)).kind) == (((rt_int)45LL))) && (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_1432)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_1432)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1449 = NULL;
F->y_1449 = f_lookup_decl_156(F->e_1432);
if (((((F->y_1449 != NULL) && ((*(P825)rt_nil_check(F->y_1449)).params != NULL)) && ((*(P827)rt_nil_check((*(P825)rt_nil_check(F->y_1449)).params)).next == NULL)) && ((rt_r_ichk((*(P821)rt_nil_check((*(P827)rt_nil_check((*(P825)rt_nil_check(F->y_1449)).params)).t)).kind) == (((rt_int)15LL))) || (rt_r_ichk((*(P821)rt_nil_check((*(P827)rt_nil_check((*(P825)rt_nil_check(F->y_1449)).params)).t)).kind) == (((rt_int)8LL)))))) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_1432)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P821)rt_nil_check((*(P827)rt_nil_check((*(P825)rt_nil_check(F->y_1449)).params)).t)).initp = F->y_1449;
} else {
(*(P821)rt_nil_check((*(P827)rt_nil_check((*(P825)rt_nil_check(F->y_1449)).params)).t)).finalp = F->y_1449;
}
}
}
F->e_1432 = (*(P815)rt_nil_check(F->e_1432)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_382(P815 d_381) {
  struct f_manifest_const_382fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_381 = d_381;
F->ok_1450 = RT_R_EUNDEF;
F->v_1451 = NULL;
F->y_1452 = NULL;
F->t_1453 = NULL;
F->ctext_1454 = NULL;
if (((*(P815)rt_nil_check(F->d_381)).a != NULL)) {
if (((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->d_381)).a)).kind) != (((rt_int)70LL))) || ((*(P815)rt_nil_check((*(P815)rt_nil_check(F->d_381)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1451 = f_meval_342((*(P815)rt_nil_check(F->d_381)).b, &F->ok_1450);
if ((!rt_r_echk(F->ok_1450))) {
goto ret_;
}
{
F->saved_1455 = NULL;
F->saved_1455 = g_code_865;
g_code_865 = f_new_buffer_24();
g_trial_893 = rt_add(rt_r_ichk(g_trial_893), ((rt_int)1LL));
{ rt_frame xf1456;
if (RT_TRY(xf1456)) {
F->ctext_1454 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_649((*(P815)rt_nil_check(F->d_381)).b, NULL, &F->t_1453)), rt_str(")", 1)); b_; }));
RT_POP(xf1456);
} else {
RT_POP(xf1456);
int x1457 = rt_xcur;
if (0 || x1457 == ex_compile_error_1) {
F->ok_1450 = 0;
} else {
rt_raise(x1457);
}
}
}
g_trial_893 = rt_sub(rt_r_ichk(g_trial_893), ((rt_int)1LL));
F->ok_1450 = (rt_r_echk(F->ok_1450) && ((*(P838)rt_nil_check(g_code_865)).head == NULL));
g_code_865 = F->saved_1455;
}
if (((!rt_r_echk(F->ok_1450)) || (((*(P815)rt_nil_check(F->d_381)).a != NULL) && (rt_r_ichk((*(P821)rt_nil_check(F->t_1453)).kind) != (((rt_int)1LL)))))) {
goto ret_;
}
if ((rt_r_ichk((*(P834)rt_nil_check(F->v_1451)).kind) == (((rt_int)4LL)))) {
(*(P834)rt_nil_check(F->v_1451)).t = F->t_1453;
(*(P834)rt_nil_check(F->v_1451)).i = f_lit_index_253((*(P821)rt_nil_check(f_base_of_214(F->t_1453))).lits, &(((P808)rt_nil_check((*(P834)rt_nil_check(F->v_1451)).s))->all));
}
(*(P815)rt_nil_check(F->d_381)).flag = ((rt_int)1LL);
F->y_1452 = f_new_sym_172((((rt_int)2LL)), (*(P815)rt_nil_check(F->d_381)).name);
(*(P825)rt_nil_check(F->y_1452)).t = F->t_1453;
(*(P825)rt_nil_check(F->y_1452)).c = f_new_cons_175();
(*(P825)rt_nil_check(F->y_1452)).mv = F->v_1451;
if ((rt_r_ichk((*(P834)rt_nil_check(F->v_1451)).kind) == (((rt_int)1LL)))) {
(*(P825)rt_nil_check(F->y_1452)).mvalue = rt_r_ichk((*(P834)rt_nil_check(F->v_1451)).i);
(*(P825)rt_nil_check(F->y_1452)).hasmv = 1;
}
(*(P825)rt_nil_check(F->y_1452)).ro_flag = 1;
(*(P825)rt_nil_check(F->y_1452)).access = F->ctext_1454;
f_define_159(F->y_1452, rt_r_ichk((*(P815)rt_nil_check(F->d_381)).line));
ret_:
  RT_FPOP();
  return;
}

static int f_exported_386(P815 d_383, rstr *name_384, int *ro_385) {
  struct f_exported_386fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_383 = d_383;
F->name_384 = name_384;
F->ro_385 = ro_385;
F->ro_385v = *F->ro_385;
F->p_1458 = NULL;
F->p_1458 = (*(P815)rt_nil_check(F->d_383)).a;
F->ro_385v = 0;
if ((rt_r_ichk((*(P815)rt_nil_check(F->d_383)).ival) == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1458 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1458)).name))->all), (*F->name_384))) {
F->ro_385v = (rt_r_ichk((*(P815)rt_nil_check(F->p_1458)).ival) == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1458 = (*(P815)rt_nil_check(F->p_1458)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ro_385v)) (*F->ro_385) = F->ro_385v;
  RT_FPOP();
  return F->result_;
}

static P825 f_copy_sym_388(P825 y_387) {
  struct f_copy_sym_388fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_387 = y_387;
F->z_1459 = NULL;
{ R826 *cell1460 = rt_alloc(sizeof(R826));
(*cell1460).name = NULL;
(*cell1460).t = NULL;
(*cell1460).c = NULL;
(*cell1460).access = NULL;
(*cell1460).cname = NULL;
(*cell1460).st = NULL;
(*cell1460).decl = NULL;
(*cell1460).params = NULL;
(*cell1460).result = NULL;
(*cell1460).members = NULL;
(*cell1460).mnext = NULL;
(*cell1460).binds = NULL;
(*cell1460).insts = NULL;
(*cell1460).env = NULL;
(*cell1460).chain = NULL;
(*cell1460).stack = NULL;
(*cell1460).owner = NULL;
(*cell1460).gctx = NULL;
(*cell1460).mv = NULL;
(*cell1460).reqs = NULL;
(*cell1460).home = NULL;
(*cell1460).capn = NULL;
F->z_1459 = cell1460;
}
(*(P825)rt_nil_check(F->z_1459)).kind = rt_r_ichk((*(P825)rt_nil_check(F->y_387)).kind);
(*(P825)rt_nil_check(F->z_1459)).name = (*(P825)rt_nil_check(F->y_387)).name;
(*(P825)rt_nil_check(F->z_1459)).t = (*(P825)rt_nil_check(F->y_387)).t;
(*(P825)rt_nil_check(F->z_1459)).c = (*(P825)rt_nil_check(F->y_387)).c;
(*(P825)rt_nil_check(F->z_1459)).access = (*(P825)rt_nil_check(F->y_387)).access;
(*(P825)rt_nil_check(F->z_1459)).cname = (*(P825)rt_nil_check(F->y_387)).cname;
(*(P825)rt_nil_check(F->z_1459)).ro_flag = rt_r_echk((*(P825)rt_nil_check(F->y_387)).ro_flag);
(*(P825)rt_nil_check(F->z_1459)).mvalue = rt_r_ichk((*(P825)rt_nil_check(F->y_387)).mvalue);
(*(P825)rt_nil_check(F->z_1459)).hasmv = rt_r_echk((*(P825)rt_nil_check(F->y_387)).hasmv);
(*(P825)rt_nil_check(F->z_1459)).st = (*(P825)rt_nil_check(F->y_387)).st;
(*(P825)rt_nil_check(F->z_1459)).decl = (*(P825)rt_nil_check(F->y_387)).decl;
(*(P825)rt_nil_check(F->z_1459)).params = (*(P825)rt_nil_check(F->y_387)).params;
(*(P825)rt_nil_check(F->z_1459)).result = (*(P825)rt_nil_check(F->y_387)).result;
(*(P825)rt_nil_check(F->z_1459)).level = rt_r_ichk((*(P825)rt_nil_check(F->y_387)).level);
(*(P825)rt_nil_check(F->z_1459)).byref = rt_r_echk((*(P825)rt_nil_check(F->y_387)).byref);
(*(P825)rt_nil_check(F->z_1459)).members = (*(P825)rt_nil_check(F->y_387)).members;
(*(P825)rt_nil_check(F->z_1459)).env = (*(P825)rt_nil_check(F->y_387)).env;
F->result_ = F->z_1459;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_390(P815 d_389) {
  struct f_gen_capsule_390fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_389 = d_389;
F->y_1461 = NULL;
F->y_1461 = f_new_sym_172((((rt_int)8LL)), (*(P815)rt_nil_check(F->d_389)).name);
F->saved_1462 = NULL;
F->saved_1462 = g_suppress_885;
(*(P825)rt_nil_check(F->y_1461)).decl = F->d_389;
if (((*(P815)rt_nil_check(F->d_389)).b == NULL)) {
g_suppress_885 = f_suppressing_441((*(P815)rt_nil_check(F->d_389)).prags);
f_elaborate_capsule_399(F->d_389, F->y_1461, NULL, F->d_389);
g_suppress_885 = F->saved_1462;
}
f_define_159(F->y_1461, rt_r_ichk((*(P815)rt_nil_check(F->d_389)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_394(P815 d_391, P815 args_392, rt_int line_393) {
  struct f_capsule_params_394fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_391 = d_391;
F->args_392 = args_392;
F->line_393 = line_393;
F->p_1463 = NULL;
F->p_1463 = (*(P815)rt_nil_check(F->d_391)).b;
F->a_1464 = NULL;
F->a_1464 = F->args_392;
F->t_1465 = NULL;
F->vt_1466 = NULL;
F->c_1467 = NULL;
while (((F->p_1463 != NULL) && (F->a_1464 != NULL))) {
F->t_1465 = f_resolve_subtype_256((*(P815)rt_nil_check(F->p_1463)).a, &F->c_1467);
if ((rt_r_ichk((*(P815)rt_nil_check(F->p_1463)).ival) == (((rt_int)3LL)))) {
f_fail_23(F->line_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if (((rt_r_ichk((*(P815)rt_nil_check(F->p_1463)).ival) == (((rt_int)2LL))) || (rt_r_ichk((*(P815)rt_nil_check(F->p_1463)).ival) == (((rt_int)4LL))))) {
F->lv_1468 = NULL;
F->lc_1469 = NULL;
F->ro_1470 = RT_R_EUNDEF;
F->y_1471 = NULL;
F->y_1471 = f_new_sym_172((((rt_int)1LL)), (*(P815)rt_nil_check(F->p_1463)).name);
f_lvalue_618(F->a_1464, &F->lv_1468, &F->vt_1466, &F->lc_1469, &F->ro_1470);
f_check_type_223(F->vt_1466, F->t_1465, F->line_393);
if ((rt_r_echk(F->ro_1470) && (rt_r_ichk((*(P815)rt_nil_check(F->p_1463)).ival) == (((rt_int)2LL))))) {
f_fail_23(F->line_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1463)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (rt_r_echk(g_in_func_867)) {
F->f_1472 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1463)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_225(F->t_1465)), rt_str(" *", 2)), F->f_1472), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1472), rt_str(" = &", 4)), (((P808)rt_nil_check(F->lv_1468))->all)), rt_str(";", 1)); b_; }));
(*(P825)rt_nil_check(F->y_1471)).level = rt_r_ichk(g_cur_level_868);
(*(P825)rt_nil_check(F->y_1471)).access = f_mk_3(&F->f_1472);
(*(P825)rt_nil_check(F->y_1471)).byref = 1;
} else {
F->g_1473 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1463)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_861, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_225(F->t_1465)), rt_str(" *", 2)), F->g_1473), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1473), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1473, rt_str(" = &", 4)), (((P808)rt_nil_check(F->lv_1468))->all)), rt_str(";", 1)); b_; }));
(*(P825)rt_nil_check(F->y_1471)).level = ((rt_int)0LL);
(*(P825)rt_nil_check(F->y_1471)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1473), rt_str(")", 1)); b_; }));
}
(*(P825)rt_nil_check(F->y_1471)).t = F->t_1465;
(*(P825)rt_nil_check(F->y_1471)).c = F->lc_1469;
(*(P825)rt_nil_check(F->y_1471)).ro_flag = (rt_r_ichk((*(P815)rt_nil_check(F->p_1463)).ival) == (((rt_int)4LL)));
f_define_159(F->y_1471, F->line_393);
} else {
F->y_1474 = NULL;
F->y_1474 = f_new_sym_172((((rt_int)2LL)), (*(P815)rt_nil_check(F->p_1463)).name);
F->v_1475 = rt_str_copy(f_gexpr_649(F->a_1464, F->t_1465, &F->vt_1466));
f_check_type_223(F->vt_1466, F->t_1465, F->line_393);
{
F->access_1476 = rt_str_copy(f_storage_450(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1463)).name))->all), F->t_1465));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1476, rt_str(" = ", 3)), f_copy_code_364(F->t_1465, &F->v_1475)), rt_str(";", 1)); b_; }));
f_bind_453(F->y_1474, &F->access_1476);
}
(*(P825)rt_nil_check(F->y_1474)).t = F->t_1465;
(*(P825)rt_nil_check(F->y_1474)).c = F->c_1467;
(*(P825)rt_nil_check(F->y_1474)).ro_flag = 1;
f_define_159(F->y_1474, F->line_393);
}
F->p_1463 = (*(P815)rt_nil_check(F->p_1463)).next;
F->a_1464 = (*(P815)rt_nil_check(F->a_1464)).next;
}
if (((F->p_1463 != NULL) || (F->a_1464 != NULL))) {
f_fail_23(F->line_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P808)rt_nil_check((*(P815)rt_nil_check(F->d_391)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_399(P815 d_395, P825 y_396, P815 args_397, P815 owner_398) {
  struct f_elaborate_capsule_399fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_395 = d_395;
F->y_396 = y_396;
F->args_397 = args_397;
F->owner_398 = owner_398;
F->cr_1477 = NULL;
F->ctx_1478 = NULL;
F->saved_gotos_1479 = NULL;
F->m_1480 = NULL;
F->p_1481 = NULL;
F->p_1481 = (*(P815)rt_nil_check(F->d_395)).a;
F->ro_1482 = RT_R_EUNDEF;
{ R843 *cell1483 = rt_alloc(sizeof(R843));
(*cell1483).d = NULL;
(*cell1483).next = NULL;
F->cr_1477 = cell1483;
}
(*(P842)rt_nil_check(F->cr_1477)).d = F->d_395;
(*(P842)rt_nil_check(F->cr_1477)).next = g_caps_870;
g_caps_870 = F->cr_1477;
f_open_scope_168();
(*(P842)rt_nil_check(F->cr_1477)).depth = rt_r_ichk(g_depth_854);
if (((*(P815)rt_nil_check(F->d_395)).b != NULL)) {
f_capsule_params_394(F->d_395, F->args_397, rt_r_ichk((*(P815)rt_nil_check(F->owner_398)).line));
}
{ R833 *cell1484 = rt_alloc(sizeof(R833));
(*cell1484).imps = NULL;
(*cell1484).next = NULL;
F->ctx_1478 = cell1484;
}
(*(P832)rt_nil_check(F->ctx_1478)).depth = rt_r_ichk(g_depth_854);
(*(P832)rt_nil_check(F->ctx_1478)).imps = (*(P815)rt_nil_check(F->d_395)).d;
(*(P832)rt_nil_check(F->ctx_1478)).all_imp = (rt_r_ichk((*(P815)rt_nil_check(F->d_395)).flag) >= ((rt_int)2LL));
(*(P832)rt_nil_check(F->ctx_1478)).next = g_fctx_869;
g_fctx_869 = F->ctx_1478;
F->saved_gotos_1479 = g_gotos_889;
g_gotos_889 = NULL;
f_declare_labels_476((*(P815)rt_nil_check(F->d_395)).c);
f_declare_body_380((*(P815)rt_nil_check(F->d_395)).c);
f_capsule_body_483((*(P815)rt_nil_check(F->d_395)).c);
{
F->w_1485 = NULL;
{ R845 *cell1486 = rt_alloc(sizeof(R845));
(*cell1486).d = NULL;
(*cell1486).w = NULL;
(*cell1486).next = NULL;
F->w_1485 = cell1486;
}
(*(P844)rt_nil_check(F->w_1485)).d = F->owner_398;
(*(P844)rt_nil_check(F->w_1485)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_470((*(P815)rt_nil_check(F->d_395)).c); b_; }));
(*(P844)rt_nil_check(F->w_1485)).next = g_cap_waits_871;
g_cap_waits_871 = F->w_1485;
}
g_fctx_869 = (*(P832)rt_nil_check(g_fctx_869)).next;
F->m_1480 = g_scope_stack_855;
while (((F->m_1480 != NULL) && (rt_r_ichk((*(P825)rt_nil_check(F->m_1480)).depth) == rt_r_ichk(g_depth_854)))) {
if (((((rt_r_ichk((*(P825)rt_nil_check(F->m_1480)).kind) == (((rt_int)5LL))) && ((*(P825)rt_nil_check(F->m_1480)).t == NULL)) && ((*(P825)rt_nil_check(F->m_1480)).decl != NULL)) && (rt_r_ichk((*(P815)rt_nil_check((*(P825)rt_nil_check(F->m_1480)).decl)).kind) == (((rt_int)43LL))))) {
(*(P825)rt_nil_check(F->m_1480)).t = f_new_type_306(F->m_1480, f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P815)rt_nil_check(F->d_395)).line)), &(*(P825)rt_nil_check(F->m_1480)).c);
} else if ((((rt_r_ichk((*(P825)rt_nil_check(F->m_1480)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P825)rt_nil_check(F->m_1480)).kind) == (((rt_int)6LL)))) && ((*(P825)rt_nil_check(F->m_1480)).t == NULL))) {
(*(P825)rt_nil_check(F->m_1480)).t = f_resolve_subtype_256((*(P825)rt_nil_check(F->m_1480)).st, &(*(P825)rt_nil_check(F->m_1480)).c);
} else if (((rt_r_ichk((*(P825)rt_nil_check(F->m_1480)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P821)rt_nil_check((*(P825)rt_nil_check(F->m_1480)).t)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_409((*(P825)rt_nil_check(F->m_1480)).t);
}
F->m_1480 = (*(P825)rt_nil_check(F->m_1480)).stack;
}
F->m_1480 = g_scope_stack_855;
while (((F->m_1480 != NULL) && (rt_r_ichk((*(P825)rt_nil_check(F->m_1480)).depth) == rt_r_ichk(g_depth_854)))) {
if (f_exported_386(F->d_395, &(((P808)rt_nil_check((*(P825)rt_nil_check(F->m_1480)).name))->all), &F->ro_1482)) {
F->z_1487 = NULL;
F->z_1487 = f_copy_sym_388(F->m_1480);
if (rt_r_echk(F->ro_1482)) {
(*(P825)rt_nil_check(F->z_1487)).ro_flag = 1;
}
(*(P825)rt_nil_check(F->z_1487)).mnext = (*(P825)rt_nil_check(F->y_396)).members;
(*(P825)rt_nil_check(F->y_396)).members = F->z_1487;
}
F->m_1480 = (*(P825)rt_nil_check(F->m_1480)).stack;
}
while ((F->p_1481 != NULL)) {
if ((((!rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1481)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1481)).name))->all), rt_str("=", 1)))) && ((f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1481)).name))->all)) == NULL) || ((*(P825)rt_nil_check(f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1481)).name))->all)))).depth != rt_r_ichk(g_depth_854))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->d_395)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1481)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P808)rt_nil_check((*(P815)rt_nil_check(F->d_395)).name))->all)); b_; }));
}
F->p_1481 = (*(P815)rt_nil_check(F->p_1481)).next;
}
f_close_scope_169();
g_caps_870 = (*(P842)rt_nil_check(g_caps_870)).next;
g_gotos_889 = F->saved_gotos_1479;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_402(P815 d_400, rstr *op_401) {
  struct f_exports_op_402fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_400 = d_400;
F->op_401 = op_401;
F->p_1488 = NULL;
if ((F->d_400 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1488 = (*(P815)rt_nil_check(F->d_400)).a;
while ((F->p_1488 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1488)).name))->all), (*F->op_401))) {
F->result_ = 1;
goto ret_;
}
F->p_1488 = (*(P815)rt_nil_check(F->p_1488)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P808 f_renamed_405(P815 d_403, P825 z_404) {
  struct f_renamed_405fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_403 = d_403;
F->z_404 = z_404;
F->r_1489 = NULL;
F->r_1489 = (*(P815)rt_nil_check(F->d_403)).c;
while ((F->r_1489 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->r_1489)).name))->all), (((P808)rt_nil_check((*(P825)rt_nil_check(F->z_404)).name))->all))) {
F->result_ = (*(P815)rt_nil_check((*(P815)rt_nil_check(F->r_1489)).a)).name;
goto ret_;
}
F->r_1489 = (*(P815)rt_nil_check(F->r_1489)).next;
}
F->result_ = (*(P825)rt_nil_check(F->z_404)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_expose_407(P815 d_406) {
  struct f_gen_expose_407fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_406 = d_406;
F->y_1490 = NULL;
F->y_1490 = f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->d_406)).name))->all));
F->m_1491 = NULL;
F->p_1492 = NULL;
F->p_1492 = (*(P815)rt_nil_check(F->d_406)).a;
F->r_1493 = NULL;
F->r_1493 = (*(P815)rt_nil_check(F->d_406)).c;
if (((F->y_1490 == NULL) || (rt_r_ichk((*(P825)rt_nil_check(F->y_1490)).kind) != (((rt_int)8LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->d_406)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->d_406)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
if (((rt_r_ichk((*(P815)rt_nil_check(F->d_406)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P815)rt_nil_check(F->d_406)).flag) == ((rt_int)3LL)))) {
F->inst_1494 = NULL;
F->inst_1494 = f_new_sym_172((((rt_int)8LL)), (*(P825)rt_nil_check(F->y_1490)).name);
(*(P825)rt_nil_check(F->inst_1494)).decl = (*(P825)rt_nil_check(F->y_1490)).decl;
f_elaborate_capsule_399((*(P825)rt_nil_check(F->y_1490)).decl, F->inst_1494, (*(P815)rt_nil_check(F->d_406)).b, F->d_406);
F->y_1490 = F->inst_1494;
} else if ((((*(P825)rt_nil_check(F->y_1490)).decl != NULL) && ((*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_1490)).decl)).b != NULL))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->d_406)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P808)rt_nil_check((*(P815)rt_nil_check(F->d_406)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P815)rt_nil_check(F->d_406)).b != NULL)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->d_406)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1493 != NULL)) {
F->found_1495 = RT_R_EUNDEF;
F->found_1495 = 0;
F->m_1491 = (*(P825)rt_nil_check(F->y_1490)).members;
while ((F->m_1491 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P825)rt_nil_check(F->m_1491)).name))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->r_1493)).name))->all))) {
F->found_1495 = 1;
}
F->m_1491 = (*(P825)rt_nil_check(F->m_1491)).mnext;
}
if ((!rt_r_echk(F->found_1495))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->d_406)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->r_1493)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P808)rt_nil_check((*(P815)rt_nil_check(F->d_406)).name))->all)); b_; }));
}
F->r_1493 = (*(P815)rt_nil_check(F->r_1493)).next;
}
if ((rt_r_ichk((*(P815)rt_nil_check(F->d_406)).ival) == ((rt_int)1LL))) {
F->m_1491 = (*(P825)rt_nil_check(F->y_1490)).members;
while ((F->m_1491 != NULL)) {
F->z_1496 = NULL;
F->z_1496 = f_copy_sym_388(F->m_1491);
(*(P825)rt_nil_check(F->z_1496)).name = f_renamed_405(F->d_406, F->m_1491);
f_define_159(F->z_1496, rt_r_ichk((*(P815)rt_nil_check(F->d_406)).line));
F->m_1491 = (*(P825)rt_nil_check(F->m_1491)).mnext;
}
goto ret_;
}
while ((F->p_1492 != NULL)) {
F->found_1497 = RT_R_EUNDEF;
F->found_1497 = 0;
F->m_1491 = (*(P825)rt_nil_check(F->y_1490)).members;
while ((F->m_1491 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P825)rt_nil_check(F->m_1491)).name))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1492)).name))->all))) {
F->z_1498 = NULL;
F->z_1498 = f_copy_sym_388(F->m_1491);
if ((rt_r_ichk((*(P815)rt_nil_check(F->p_1492)).ival) == ((rt_int)1LL))) {
(*(P825)rt_nil_check(F->z_1498)).ro_flag = 1;
}
(*(P825)rt_nil_check(F->z_1498)).name = f_renamed_405(F->d_406, F->m_1491);
f_define_159(F->z_1498, rt_r_ichk((*(P815)rt_nil_check(F->d_406)).line));
F->found_1497 = 1;
}
F->m_1491 = (*(P825)rt_nil_check(F->m_1491)).mnext;
}
if ((!rt_r_echk(F->found_1497))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->d_406)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1492)).name))->all), rt_str(" is not exported by ", 20)), (((P808)rt_nil_check((*(P815)rt_nil_check(F->d_406)).name))->all)); b_; }));
}
F->p_1492 = (*(P815)rt_nil_check(F->p_1492)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_409(P821 t_408) {
  struct f_finish_ptr_409fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_408 = t_408;
F->d_1499 = NULL;
F->d_1499 = (*(P821)rt_nil_check(F->t_408)).decl;
F->p_1500 = NULL;
F->c_1501 = NULL;
F->dummy_1502 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1502, rt_str(" ", 1));
if (((*(P821)rt_nil_check(F->t_408)).target != NULL)) {
goto ret_;
}
f_open_scope_168();
{ rt_int lo1504 = ((rt_int)1LL), hi1505 = ((rt_int)2LL);
for (rt_int it1506 = lo1504; it1506 <= hi1505; it1506++) {
F->pass_1503 = it1506;
if ((F->pass_1503 == ((rt_int)1LL))) {
F->p_1500 = (*(P815)rt_nil_check(F->d_1499)).d;
} else {
F->p_1500 = (*(P815)rt_nil_check(F->d_1499)).b;
}
while ((F->p_1500 != NULL)) {
F->y_1507 = NULL;
F->y_1507 = f_new_sym_172((((rt_int)2LL)), (*(P815)rt_nil_check(F->p_1500)).name);
F->pc_1508 = NULL;
(*(P825)rt_nil_check(F->y_1507)).t = f_resolve_subtype_256((*(P815)rt_nil_check(F->p_1500)).a, &F->pc_1508);
(*(P825)rt_nil_check(F->y_1507)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_159(F->y_1507, rt_r_ichk((*(P815)rt_nil_check(F->d_1499)).line));
F->p_1500 = (*(P815)rt_nil_check(F->p_1500)).next;
}
}
}
(*(P821)rt_nil_check(F->t_408)).target = f_resolve_subtype_256((*(P815)rt_nil_check(F->d_1499)).a, &F->c_1501);
f_close_scope_169();
(*rt_str_at(&F->dummy_1502, ((rt_int)1LL))) = rt_str_get(f_ctype_225(F->t_408), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1502, ((rt_int)1LL))) = rt_str_get(f_ctype_225((*(P821)rt_nil_check(F->t_408)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P815 f_ptr_args_411(P817 c_410) {
  struct f_ptr_args_411fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_410 = c_410;
if ((F->c_410 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P817)rt_nil_check(F->c_410)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_416(P815 formals_412, P815 actuals_413, rstr *cell_414, rt_int line_415) {
  struct f_bind_ptr_params_416fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_412 = formals_412;
F->actuals_413 = actuals_413;
F->cell_414 = cell_414;
F->line_415 = line_415;
F->p_1509 = NULL;
F->p_1509 = F->formals_412;
F->a_1510 = NULL;
F->a_1510 = F->actuals_413;
F->vt_1511 = NULL;
if ((f_list_len_67(F->formals_412) != f_list_len_67(F->actuals_413))) {
f_fail_23(F->line_415, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_67(F->formals_412))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1509 != NULL)) {
F->pc_1512 = NULL;
F->y_1513 = NULL;
F->y_1513 = f_new_sym_172((((rt_int)2LL)), (*(P815)rt_nil_check(F->p_1509)).name);
(*(P825)rt_nil_check(F->y_1513)).t = f_resolve_subtype_256((*(P815)rt_nil_check(F->p_1509)).a, &F->pc_1512);
{
F->v_1514 = rt_str_copy(f_gexpr_649(F->a_1510, (*(P825)rt_nil_check(F->y_1513)).t, &F->vt_1511));
F->pv_1515 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_223(F->vt_1511, (*(P825)rt_nil_check(F->y_1513)).t, F->line_415);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_225((*(P825)rt_nil_check(F->y_1513)).t), rt_str(" ", 1)), F->pv_1515), rt_str(" = ", 3)), f_checked_204((*(P825)rt_nil_check(F->y_1513)).t, F->pc_1512, &F->v_1514)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_414), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_414), rt_str("->p_", 4)), f_lower_s_15(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1509)).name))->all))), rt_str(" = ", 3)), F->pv_1515), rt_str(";", 1)); b_; }));
}
(*(P825)rt_nil_check(F->y_1513)).access = f_mk_3(&F->pv_1515);
}
f_define_159(F->y_1513, F->line_415);
F->p_1509 = (*(P815)rt_nil_check(F->p_1509)).next;
F->a_1510 = (*(P815)rt_nil_check(F->a_1510)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_421(P815 s_417, rstr *lv_418, P821 t_419, P817 c_420) {
  struct f_alloc_cell_421fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_417 = s_417;
F->lv_418 = lv_418;
F->t_419 = t_419;
F->c_420 = c_420;
F->d_1516 = NULL;
F->d_1516 = (*(P821)rt_nil_check(F->t_419)).decl;
F->tc_1517 = NULL;
F->vt_1518 = NULL;
F->pt_1519 = rt_str_copy(f_ctype_225(F->t_419));
F->cell_1520 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_315((*(P821)rt_nil_check(F->t_419)).target)) {
F->fn_1521 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_876 = 1;
g_uses_findyn_878 = 1;
f_put_27(g_out_protos_860, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1521), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1521), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_867)) {
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P808)rt_nil_check((*(P825)rt_nil_check(g_func_sym_879)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1519), rt_str(")cell_)->all)", 13)); b_; }), (*(P821)rt_nil_check(F->t_419)).target)); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_867)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1519), rt_str(" ", 1)), F->cell_1520), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1520), rt_str(", ", 2)), F->fn_1521), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1519), rt_str(" ", 1)), F->cell_1520), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1520), rt_str(", ", 2)), F->fn_1521), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1519), rt_str(" ", 1)), F->cell_1520), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1520), rt_str(");", 2)); b_; }));
}
f_open_scope_168();
f_bind_ptr_params_416((*(P815)rt_nil_check(F->d_1516)).d, f_ptr_args_411(F->c_420), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P815)rt_nil_check(F->s_417)).line));
f_bind_ptr_params_416((*(P815)rt_nil_check(F->d_1516)).b, (*(P815)rt_nil_check(F->s_417)).b, &F->cell_1520, rt_r_ichk((*(P815)rt_nil_check(F->s_417)).line));
F->vt_1518 = f_resolve_subtype_256((*(P815)rt_nil_check(F->d_1516)).a, &F->tc_1517);
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1520, rt_str("->all", 5)); b_; }), (*(P821)rt_nil_check(F->t_419)).target, F->tc_1517);
f_close_scope_169();
if (((*(P815)rt_nil_check(F->s_417)).c != NULL)) {
F->v_1522 = rt_str_copy(f_gexpr_in_657((*(P815)rt_nil_check(F->s_417)).c, (*(P821)rt_nil_check(F->t_419)).target, F->tc_1517, &F->vt_1518));
f_check_type_223(F->vt_1518, (*(P821)rt_nil_check(F->t_419)).target, rt_r_ichk((*(P815)rt_nil_check(F->s_417)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1520, rt_str("->all", 5)); b_; }), (*(P821)rt_nil_check(F->t_419)).target, &F->v_1522, F->tc_1517); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_418), rt_str(" = ", 3)), F->cell_1520), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P817 f_freeze_args_425(P817 c_422, P821 t_423, rt_int line_424) {
  struct f_freeze_args_425fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_422 = c_422;
F->t_423 = t_423;
F->line_424 = line_424;
F->r_1523 = NULL;
F->r_1523 = f_copy_cons_197(F->c_422);
F->p_1524 = NULL;
F->p_1524 = (*(P815)rt_nil_check((*(P821)rt_nil_check(F->t_423)).decl)).d;
F->a_1525 = NULL;
F->a_1525 = (*(P817)rt_nil_check(F->c_422)).args;
F->head_1526 = NULL;
F->tail_1527 = NULL;
F->saved_1528 = NULL;
F->saved_1528 = g_st_field_873;
if ((f_list_len_67(F->p_1524) != f_list_len_67(F->a_1525))) {
f_fail_23(F->line_424, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check((*(P821)rt_nil_check(F->t_423)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1524))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1525 != NULL)) {
F->pc_1529 = NULL;
F->vt_1530 = NULL;
F->pt_1531 = NULL;
F->pt_1531 = f_resolve_subtype_256((*(P815)rt_nil_check(F->p_1524)).a, &F->pc_1529);
F->nm_1532 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1533 = NULL;
F->y_1533 = f_new_sym_172((((rt_int)2LL)), f_mk_3(&F->nm_1532));
F->n_1534 = NULL;
F->n_1534 = f_nn_61((((rt_int)7LL)), F->line_424);
F->v_1535 = rt_str_copy(f_gexpr_649(F->a_1525, F->pt_1531, &F->vt_1530));
F->access_1536 = rt_str_copy(f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_225(F->pt_1531); b_; })));
f_check_type_223(F->vt_1530, F->pt_1531, F->line_424);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1536, rt_str(" = ", 3)), f_checked_204(F->pt_1531, F->pc_1529, &F->v_1535)), rt_str(";", 1)); b_; }));
(*(P825)rt_nil_check(F->y_1533)).t = F->pt_1531;
(*(P825)rt_nil_check(F->y_1533)).ro_flag = 1;
f_bind_453(F->y_1533, &F->access_1536);
f_define_159(F->y_1533, F->line_424);
(*(P815)rt_nil_check(F->n_1534)).name = f_mk_3(&F->nm_1532);
f_append_65(&F->head_1526, &F->tail_1527, F->n_1534);
F->a_1525 = (*(P815)rt_nil_check(F->a_1525)).next;
F->p_1524 = (*(P815)rt_nil_check(F->p_1524)).next;
}
(*(P817)rt_nil_check(F->r_1523)).args = F->head_1526;
g_st_field_873 = F->saved_1528;
F->result_ = F->r_1523;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_429(P821 t_426, P817 c_427, P815 src_428) {
  struct f_ptr_subtype_check_429fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_426 = t_426;
F->c_427 = c_427;
F->src_428 = src_428;
F->lv_1537 = NULL;
F->st_1538 = NULL;
F->sc_1539 = NULL;
F->ro_1540 = RT_R_EUNDEF;
F->cond_1541 = NULL;
F->cond_1541 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1542 = NULL;
F->b_1543 = NULL;
F->at_1544 = NULL;
F->bt_1545 = NULL;
if ((((((rt_r_ichk((*(P821)rt_nil_check(F->t_426)).kind) != (((rt_int)8LL))) || (F->c_427 == NULL)) || ((*(P817)rt_nil_check(F->c_427)).args == NULL)) || (F->src_428 == NULL)) || (!f_is_lvalue_612(F->src_428)))) {
goto ret_;
}
f_lvalue_618(F->src_428, &F->lv_1537, &F->st_1538, &F->sc_1539, &F->ro_1540);
if (((F->sc_1539 == NULL) || ((*(P817)rt_nil_check(F->sc_1539)).args == NULL))) {
goto ret_;
}
F->a_1542 = (*(P817)rt_nil_check(F->c_427)).args;
F->b_1543 = (*(P817)rt_nil_check(F->sc_1539)).args;
while (((F->a_1542 != NULL) && (F->b_1543 != NULL))) {
F->x_1546 = rt_str_copy(f_gexpr_649(F->a_1542, NULL, &F->at_1544));
F->y_1547 = rt_str_copy(f_gexpr_649(F->b_1543, F->at_1544, &F->bt_1545));
F->cond_1541 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->cond_1541))->all), rt_str(" || !", 5)), f_eq_code_368(F->at_1544, &F->x_1546, &F->y_1547)); b_; }));
F->a_1542 = (*(P815)rt_nil_check(F->a_1542)).next;
F->b_1543 = (*(P815)rt_nil_check(F->b_1543)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P808)rt_nil_check(F->cond_1541))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_normal_function_432(P815 d_430, P825 y_431) {
  struct f_normal_function_432fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_430 = d_430;
F->y_431 = y_431;
F->p_1548 = NULL;
F->p_1548 = (*(P825)rt_nil_check(F->y_431)).params;
F->imp_1549 = NULL;
F->imp_1549 = (*(P815)rt_nil_check(F->d_430)).d;
if (((rt_r_ichk((*(P815)rt_nil_check(F->d_430)).kind) != (((rt_int)46LL))) || (rt_mod(rt_r_ichk((*(P815)rt_nil_check(F->d_430)).flag), ((rt_int)2LL)) == ((rt_int)1LL)))) {
goto ret_;
}
while ((F->p_1548 != NULL)) {
if (((rt_r_ichk((*(P827)rt_nil_check(F->p_1548)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P827)rt_nil_check(F->p_1548)).mode) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->d_430)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may have only CONST and READONLY formal parameters: ", 70), (((P808)rt_nil_check((*(P815)rt_nil_check(F->d_430)).name))->all)); b_; }));
}
F->p_1548 = (*(P827)rt_nil_check(F->p_1548)).next;
}
if ((((*(P815)rt_nil_check(F->d_430)).d == NULL) && (rt_r_ichk((*(P815)rt_nil_check(F->d_430)).flag) < ((rt_int)2LL)))) {
goto ret_;
}
if (((g_caps_870 == NULL) || (rt_r_ichk(g_depth_854) != rt_r_ichk((*(P842)rt_nil_check(g_caps_870)).depth)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->d_430)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function with an imports list must be local to a capsule body: ", 72), (((P808)rt_nil_check((*(P815)rt_nil_check(F->d_430)).name))->all)); b_; }));
}
while ((F->imp_1549 != NULL)) {
F->ro_1550 = RT_R_EUNDEF;
F->z_1551 = NULL;
F->z_1551 = f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->imp_1549)).name))->all));
if ((((F->z_1551 != NULL) && (rt_r_ichk((*(P825)rt_nil_check(F->z_1551)).kind) == (((rt_int)1LL)))) && (rt_r_ichk((*(P825)rt_nil_check(F->z_1551)).depth) != rt_r_ichk((*(P842)rt_nil_check(g_caps_870)).depth)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->d_430)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function imports only variables of its capsule body: ", 62), (((P808)rt_nil_check((*(P815)rt_nil_check(F->imp_1549)).name))->all)); b_; }));
}
if ((f_exported_386((*(P842)rt_nil_check(g_caps_870)).d, &(((P808)rt_nil_check((*(P815)rt_nil_check(F->imp_1549)).name))->all), &F->ro_1550) && (rt_r_ichk((*(P815)rt_nil_check((*(P842)rt_nil_check(g_caps_870)).d)).ival) != ((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->d_430)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may not import an exported variable: ", 55), (((P808)rt_nil_check((*(P815)rt_nil_check(F->imp_1549)).name))->all)); b_; }));
}
F->imp_1549 = (*(P815)rt_nil_check(F->imp_1549)).next;
}
(*(P825)rt_nil_check(F->y_431)).capn = (*(P842)rt_nil_check(g_caps_870)).d;
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_434(P815 d_433) {
  struct f_declare_subprogram_434fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_433 = d_433;
f_define_159(f_build_subprogram_436(F->d_433), rt_r_ichk((*(P815)rt_nil_check(F->d_433)).line));
ret_:
  RT_FPOP();
  return;
}

static P825 f_build_subprogram_436(P815 d_435) {
  struct f_build_subprogram_436fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_435 = d_435;
F->y_1552 = NULL;
F->p_1553 = NULL;
F->p_1553 = (*(P815)rt_nil_check(F->d_435)).a;
F->tail_1554 = NULL;
if ((rt_r_ichk((*(P815)rt_nil_check(F->d_435)).kind) == (((rt_int)46LL)))) {
F->y_1552 = f_new_sym_172((((rt_int)3LL)), (*(P815)rt_nil_check(F->d_435)).name);
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->d_435)).kind) == (((rt_int)50LL)))) {
F->y_1552 = f_new_sym_172((((rt_int)9LL)), (*(P815)rt_nil_check(F->d_435)).name);
} else {
F->y_1552 = f_new_sym_172((((rt_int)4LL)), (*(P815)rt_nil_check(F->d_435)).name);
}
while ((F->p_1553 != NULL)) {
F->pm_1555 = NULL;
{ R828 *cell1556 = rt_alloc(sizeof(R828));
(*cell1556).name = NULL;
(*cell1556).t = NULL;
(*cell1556).c = NULL;
(*cell1556).cfield = NULL;
(*cell1556).next = NULL;
F->pm_1555 = cell1556;
}
(*(P827)rt_nil_check(F->pm_1555)).name = (*(P815)rt_nil_check(F->p_1553)).name;
(*(P827)rt_nil_check(F->pm_1555)).mode = rt_r_ichk((*(P815)rt_nil_check(F->p_1553)).ival);
(*(P827)rt_nil_check(F->pm_1555)).t = f_resolve_subtype_256((*(P815)rt_nil_check(F->p_1553)).a, &(*(P827)rt_nil_check(F->pm_1555)).c);
(*(P827)rt_nil_check(F->pm_1555)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1553)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1554 == NULL)) {
(*(P825)rt_nil_check(F->y_1552)).params = F->pm_1555;
} else {
(*(P827)rt_nil_check(F->tail_1554)).next = F->pm_1555;
}
F->tail_1554 = F->pm_1555;
F->p_1553 = (*(P815)rt_nil_check(F->p_1553)).next;
}
(*(P825)rt_nil_check(F->y_1552)).result = g_ty_void_900;
if (((*(P815)rt_nil_check(F->d_435)).b != NULL)) {
F->rc_1557 = NULL;
F->pm_1558 = NULL;
F->pm_1558 = (*(P825)rt_nil_check(F->y_1552)).params;
F->saved_1559 = NULL;
F->saved_1559 = g_code_865;
g_code_865 = f_new_buffer_24();
f_open_scope_168();
while ((F->pm_1558 != NULL)) {
F->z_1560 = NULL;
F->z_1560 = f_new_sym_172((((rt_int)2LL)), (*(P827)rt_nil_check(F->pm_1558)).name);
(*(P825)rt_nil_check(F->z_1560)).t = (*(P827)rt_nil_check(F->pm_1558)).t;
(*(P825)rt_nil_check(F->z_1560)).c = (*(P827)rt_nil_check(F->pm_1558)).c;
(*(P825)rt_nil_check(F->z_1560)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_159(F->z_1560, rt_r_ichk((*(P815)rt_nil_check(F->d_435)).line));
F->pm_1558 = (*(P827)rt_nil_check(F->pm_1558)).next;
}
(*(P825)rt_nil_check(F->y_1552)).result = f_resolve_subtype_256((*(P815)rt_nil_check(F->d_435)).b, &F->rc_1557);
f_close_scope_169();
g_code_865 = F->saved_1559;
}
(*(P825)rt_nil_check(F->y_1552)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_604(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->d_435)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P825)rt_nil_check(F->y_1552)).decl = F->d_435;
(*(P825)rt_nil_check(F->y_1552)).level = rt_r_ichk(g_cur_level_868);
if ((rt_r_ichk((*(P815)rt_nil_check(F->d_435)).kind) == (((rt_int)50LL)))) {
f_put_27(g_out_globals_861, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P808)rt_nil_check((*(P825)rt_nil_check(F->y_1552)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1552;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_439(P808 pr_437, rstr *p_438) {
  struct f_has_pragmat_439fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_437 = pr_437;
F->p_438 = p_438;
if ((F->pr_437 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1562 = ((rt_int)1LL), hi1563 = rt_sub(((rt_int)(((((P808)rt_nil_check(F->pr_437))->all)).len)), ((rt_int)(((*F->p_438)).len)));
for (rt_int it1564 = lo1562; it1564 <= hi1563; it1564++) {
F->i_1561 = it1564;
if (((rt_str_eq(rt_str_slice((((P808)rt_nil_check(F->pr_437))->all), F->i_1561, rt_sub(rt_add(F->i_1561, ((rt_int)(((*F->p_438)).len))), ((rt_int)1LL))), (*F->p_438)) && (rt_r_echk(rt_str_get((((P808)rt_nil_check(F->pr_437))->all), rt_add(F->i_1561, ((rt_int)(((*F->p_438)).len))))) == 59)) && ((F->i_1561 == ((rt_int)1LL)) || (rt_r_echk(rt_str_get((((P808)rt_nil_check(F->pr_437))->all), rt_sub(F->i_1561, ((rt_int)1LL)))) == 59)))) {
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

static P808 f_suppressing_441(P808 pr_440) {
  struct f_suppressing_441fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_440 = pr_440;
F->r_1565 = NULL;
F->r_1565 = g_suppress_885;
F->i_1566 = RT_R_IUNDEF;
F->i_1566 = ((rt_int)1LL);
if ((F->pr_440 == NULL)) {
F->result_ = F->r_1565;
goto ret_;
}
if ((F->r_1565 == NULL)) {
F->r_1565 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(rt_r_ichk(F->i_1566), ((rt_int)9LL)) <= ((rt_int)(((((P808)rt_nil_check(F->pr_440))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P808)rt_nil_check(F->pr_440))->all), rt_r_ichk(F->i_1566), rt_add(rt_r_ichk(F->i_1566), ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1567 = RT_R_IUNDEF;
F->j_1567 = rt_add(rt_r_ichk(F->i_1566), ((rt_int)9LL));
F->k_1568 = RT_R_IUNDEF;
F->k_1568 = rt_r_ichk(F->j_1567);
while ((rt_r_echk(rt_str_get((((P808)rt_nil_check(F->pr_440))->all), rt_r_ichk(F->k_1568))) != 41)) {
if ((rt_r_echk(rt_str_get((((P808)rt_nil_check(F->pr_440))->all), rt_r_ichk(F->k_1568))) == 44)) {
F->r_1565 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_1565))->all), rt_str_slice((((P808)rt_nil_check(F->pr_440))->all), rt_r_ichk(F->j_1567), rt_sub(rt_r_ichk(F->k_1568), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1567 = rt_add(rt_r_ichk(F->k_1568), ((rt_int)1LL));
}
F->k_1568 = rt_add(rt_r_ichk(F->k_1568), ((rt_int)1LL));
}
F->r_1565 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_1565))->all), rt_str_slice((((P808)rt_nil_check(F->pr_440))->all), rt_r_ichk(F->j_1567), rt_sub(rt_r_ichk(F->k_1568), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1566 = rt_r_ichk(F->k_1568);
}
F->i_1566 = rt_add(rt_r_ichk(F->i_1566), ((rt_int)1LL));
}
F->result_ = F->r_1565;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_443(rstr *x_442) {
  struct f_suppressed_443fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_442 = x_442;
F->w_1569 = rt_str_new(rt_add(((rt_int)(((*F->x_442)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1569, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_442)), rt_str(" ", 1)));
if ((g_suppress_885 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1571 = ((rt_int)1LL), hi1572 = rt_add(rt_sub(((rt_int)(((((P808)rt_nil_check(g_suppress_885))->all)).len)), ((rt_int)((F->w_1569).len))), ((rt_int)1LL));
for (rt_int it1573 = lo1571; it1573 <= hi1572; it1573++) {
F->i_1570 = it1573;
if (rt_str_eq(rt_str_slice((((P808)rt_nil_check(g_suppress_885))->all), F->i_1570, rt_sub(rt_add(F->i_1570, ((rt_int)((F->w_1569).len))), ((rt_int)1LL))), F->w_1569)) {
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

static void f_element_445(P815 e_444) {
  struct f_element_445fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_444 = e_444;
F->saved_1574 = NULL;
F->saved_1574 = g_suppress_885;
g_suppress_885 = f_suppressing_441((*(P815)rt_nil_check(F->e_444)).prags);
f_element1_447(F->e_444);
g_suppress_885 = F->saved_1574;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_447(P815 e_446) {
  struct f_element1_447fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_446 = e_446;
F->k_1575 = RT_R_IUNDEF;
F->k_1575 = rt_r_ichk((*(P815)rt_nil_check(F->e_446)).kind);
if (((rt_r_ichk(F->k_1575) == (((rt_int)48LL))) && ((rt_r_ichk((*(P815)rt_nil_check(F->e_446)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P815)rt_nil_check(F->e_446)).flag) == ((rt_int)3LL))))) {
f_gen_expose_407(F->e_446);
} else if ((((rt_r_ichk(F->k_1575) == (((rt_int)45LL))) || (rt_r_ichk(F->k_1575) == (((rt_int)46LL)))) || (rt_r_ichk(F->k_1575) == (((rt_int)50LL))))) {
f_subprogram_463(F->e_446);
} else if ((rt_r_ichk(F->k_1575) == (((rt_int)51LL)))) {
F->g_1576 = NULL;
F->g_1576 = f_lookup_decl_156(F->e_446);
if ((F->g_1576 != NULL)) {
{ P829 cell1577 = rt_alloc(sizeof *cell1577);
rt_int pv1578 = (((rt_int)4093LL));
cell1577->p_n = pv1578;
cell1577->all.lo = ((rt_int)0LL); cell1577->all.hi = pv1578;
cell1577->all.lo2 = cell1577->all.hi2 = 1;
cell1577->all.p = rt_alloc(sizeof(P825) * (size_t)(RT_CNT(cell1577->all)) + 1);
for (rt_int i1579 = 0; i1579 < (RT_CNT(cell1577->all)); i1579++) {
cell1577->all.p[i1579] = NULL;
}
(*(P825)rt_nil_check(F->g_1576)).env = cell1577;
}
{ rt_int lo1581 = ((rt_int)0LL), hi1582 = (((rt_int)4093LL));
for (rt_int it1583 = lo1581; it1583 <= hi1582; it1583++) {
F->i_1580 = it1583;
(((P829)rt_nil_check((*(P825)rt_nil_check(F->g_1576)).env))->all).p[(rt_index(F->i_1580, (((P829)rt_nil_check((*(P825)rt_nil_check(F->g_1576)).env))->all).lo, (((P829)rt_nil_check((*(P825)rt_nil_check(F->g_1576)).env))->all).hi) - (((P829)rt_nil_check((*(P825)rt_nil_check(F->g_1576)).env))->all).lo)] = ({ A831 b_ = (((P829)rt_nil_check(g_table_851))->all); b_.p[(rt_index(F->i_1580, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((((rt_r_ichk(F->k_1575) == (((rt_int)49LL))) || (rt_r_ichk(F->k_1575) == (((rt_int)42LL)))) || (rt_r_ichk(F->k_1575) == (((rt_int)43LL)))) || (rt_r_ichk(F->k_1575) == (((rt_int)47LL)))) || (rt_r_ichk(F->k_1575) == (((rt_int)48LL))))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1575) == (((rt_int)44LL)))) {
f_finish_ptr_409((*(P825)rt_nil_check(f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_446)).name))->all)))).t);
} else if ((rt_r_ichk(F->k_1575) == (((rt_int)40LL)))) {
f_var_decl_455(F->e_446);
} else if (((rt_r_ichk(F->k_1575) == (((rt_int)41LL))) && (rt_r_ichk((*(P815)rt_nil_check(F->e_446)).flag) == ((rt_int)0LL)))) {
f_const_decl_461(F->e_446);
} else if ((rt_r_ichk(F->k_1575) == (((rt_int)41LL)))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1575) == (((rt_int)33LL)))) {
F->t_1584 = NULL;
F->c_1585 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_446)).a, g_ty_bool_896, &F->t_1584));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1585), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_494(F->e_446);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_450(rstr *name_448, P821 t_449) {
  struct f_storage_450fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_448 = name_448;
F->t_449 = t_449;
if ((!rt_r_echk(g_in_func_867))) {
F->g_1586 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_448))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_861, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_225(F->t_449)), rt_str(" ", 1)), F->g_1586), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1586), rt_str(");", 2)); b_; }));
g_st_field_873 = f_mk_3(&F->g_1586);
F->result_ = F->g_1586;
goto ret_;
}
{
F->f_1587 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_448)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_225(F->t_449)), rt_str(" ", 1)), F->f_1587), rt_str(";", 1)); b_; }));
g_st_field_873 = f_mk_3(&F->f_1587);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1587);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_453(P825 y_451, rstr *access_452) {
  struct f_bind_453fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_451 = y_451;
F->access_452 = access_452;
if (rt_r_echk(g_in_func_867)) {
(*(P825)rt_nil_check(F->y_451)).level = rt_r_ichk(g_cur_level_868);
(*(P825)rt_nil_check(F->y_451)).access = g_st_field_873;
} else {
(*(P825)rt_nil_check(F->y_451)).level = ((rt_int)0LL);
(*(P825)rt_nil_check(F->y_451)).access = f_mk_3(&(*F->access_452));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_455(P815 d_454) {
  struct f_var_decl_455fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_454 = d_454;
F->c_1588 = NULL;
F->t_1589 = NULL;
F->t_1589 = f_resolve_subtype_256((*(P815)rt_nil_check(F->d_454)).a, &F->c_1588);
F->y_1590 = NULL;
F->y_1590 = f_new_sym_172((((rt_int)1LL)), (*(P815)rt_nil_check(F->d_454)).name);
F->access_1591 = rt_str_copy(f_storage_450(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->d_454)).name))->all), F->t_1589));
F->c_1588 = f_freeze_200(F->c_1588, F->t_1589);
if ((((rt_r_ichk((*(P821)rt_nil_check(F->t_1589)).kind) == (((rt_int)8LL))) && (F->c_1588 != NULL)) && ((*(P817)rt_nil_check(F->c_1588)).args != NULL))) {
F->c_1588 = f_freeze_args_425(F->c_1588, F->t_1589, rt_r_ichk((*(P815)rt_nil_check(F->d_454)).line));
}
g_mark_uninit_887 = 1;
f_init_storage_310(&F->access_1591, F->t_1589, F->c_1588);
g_mark_uninit_887 = 0;
if ((rt_r_ichk((*(P815)rt_nil_check(F->d_454)).ival) == ((rt_int)1LL))) {
F->it_1592 = NULL;
F->n_1593 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->d_454)).c, g_ty_int_895, &F->it_1592));
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_1589)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->d_454)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_212((*(P821)rt_nil_check(F->t_1589)).elem, g_ty_ascii_898)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1591), rt_str(", ", 2)), F->n_1593), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1591), rt_str(", ", 2)), F->n_1593), rt_str(", 0);", 5)); b_; }));
}
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->d_454)).ival) == ((rt_int)2LL))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->d_454)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P815)rt_nil_check(F->d_454)).b != NULL)) {
F->vt_1594 = NULL;
F->v_1595 = rt_str_copy(f_gexpr_in_657((*(P815)rt_nil_check(F->d_454)).b, F->t_1589, F->c_1588, &F->vt_1594));
f_check_type_223(F->vt_1594, F->t_1589, rt_r_ichk((*(P815)rt_nil_check(F->d_454)).line));
f_ptr_subtype_check_429(F->t_1589, F->c_1588, (*(P815)rt_nil_check(F->d_454)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(&F->access_1591, F->t_1589, &F->v_1595, F->c_1588); b_; }));
}
(*(P825)rt_nil_check(F->y_1590)).t = F->t_1589;
(*(P825)rt_nil_check(F->y_1590)).c = F->c_1588;
f_bind_453(F->y_1590, &F->access_1591);
f_define_159(F->y_1590, rt_r_ichk((*(P815)rt_nil_check(F->d_454)).line));
if (f_needs_fin_315(F->t_1589)) {
f_open_fin_457(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_318(&F->access_1591, F->t_1589); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_457(rstr *fc_456) {
  struct f_open_fin_457fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_456 = fc_456;
F->f_1596 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1597 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1596), rt_str("; if (RT_TRY(", 13)), F->f_1596), rt_str(")) {", 4)); b_; }));
f_push_cleanup_491(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1596), rt_str("); ", 3)), (*F->fc_456)); b_; }));
{ R820 *cell1598 = rt_alloc(sizeof(R820));
(*cell1598).s = NULL;
(*cell1598).next = NULL;
F->l_1597 = cell1598;
}
(*(P819)rt_nil_check(F->l_1597)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1596), rt_str("); ", 3)), (*F->fc_456)), rt_str(" } else { RT_POP(", 17)), F->f_1596), rt_str("); ", 3)), (*F->fc_456)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P819)rt_nil_check(F->l_1597)).next = g_fins_877;
g_fins_877 = F->l_1597;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_459(P819 saved_458) {
  struct f_close_fins_459fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_458 = saved_458;
while (((g_fins_877 != F->saved_458) && (g_fins_877 != NULL))) {
f_emit_29(&(((P808)rt_nil_check((*(P819)rt_nil_check(g_fins_877)).s))->all));
f_pop_cleanup_492();
g_fins_877 = (*(P819)rt_nil_check(g_fins_877)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_461(P815 d_460) {
  struct f_const_decl_461fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_460 = d_460;
F->c_1599 = NULL;
F->c_1599 = f_new_cons_175();
F->t_1600 = NULL;
F->vt_1601 = NULL;
F->y_1602 = NULL;
F->y_1602 = f_new_sym_172((((rt_int)2LL)), (*(P815)rt_nil_check(F->d_460)).name);
F->ok_1603 = RT_R_EUNDEF;
if (((*(P815)rt_nil_check(F->d_460)).a != NULL)) {
F->t_1600 = f_resolve_subtype_256((*(P815)rt_nil_check(F->d_460)).a, &F->c_1599);
}
{
F->v_1604 = rt_str_copy(f_gexpr_in_657((*(P815)rt_nil_check(F->d_460)).b, F->t_1600, F->c_1599, &F->vt_1601));
if ((F->t_1600 != NULL)) {
f_check_type_223(F->vt_1601, F->t_1600, rt_r_ichk((*(P815)rt_nil_check(F->d_460)).line));
} else {
F->t_1600 = F->vt_1601;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_1600)).kind) == (((rt_int)1LL)))) {
(*(P825)rt_nil_check(F->y_1602)).mvalue = f_manifest_333((*(P815)rt_nil_check(F->d_460)).b, &F->ok_1603);
(*(P825)rt_nil_check(F->y_1602)).hasmv = rt_r_echk(F->ok_1603);
}
{
F->access_1605 = rt_str_copy(f_storage_450(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->d_460)).name))->all), F->t_1600));
if (((*(P821)rt_nil_check(F->t_1600)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P821)rt_nil_check(F->t_1600)).initp, &F->access_1605); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1605, rt_str(" = ", 3)), f_checked_204(F->t_1600, F->c_1599, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364(F->t_1600, &F->v_1604); b_; }))), rt_str(";", 1)); b_; }));
f_bind_453(F->y_1602, &F->access_1605);
if (f_needs_fin_315(F->t_1600)) {
f_open_fin_457(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_318(&F->access_1605, F->t_1600); b_; }));
}
}
}
(*(P825)rt_nil_check(F->y_1602)).t = F->t_1600;
(*(P825)rt_nil_check(F->y_1602)).c = F->c_1599;
(*(P825)rt_nil_check(F->y_1602)).ro_flag = 1;
f_define_159(F->y_1602, rt_r_ichk((*(P815)rt_nil_check(F->d_460)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_463(P815 d_462) {
  struct f_subprogram_463fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_462 = d_462;
f_gen_subprogram_466(F->d_462, f_lookup_decl_156(F->d_462));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_466(P815 d_464, P825 y_465) {
  struct f_gen_subprogram_466fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_464 = d_464;
F->y_465 = y_465;
F->saved_code_1606 = NULL;
F->saved_code_1606 = g_code_865;
F->saved_fields_1607 = NULL;
F->saved_fields_1607 = g_fields_buf_866;
F->saved_in_1608 = RT_R_EUNDEF;
F->saved_in_1608 = rt_r_echk(g_in_func_867);
F->saved_sym_1609 = NULL;
F->saved_sym_1609 = g_func_sym_879;
F->saved_exits_1610 = NULL;
F->saved_exits_1610 = g_exits_888;
F->saved_gotos_1611 = NULL;
F->saved_gotos_1611 = g_gotos_889;
F->saved_frames_1612 = RT_R_IUNDEF;
F->saved_frames_1612 = rt_r_ichk(g_frames_890);
F->args_1613 = NULL;
F->args_1613 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1614 = NULL;
F->pm_1614 = (*(P825)rt_nil_check(F->y_465)).params;
F->saved_handlers_1615 = NULL;
F->saved_handlers_1615 = g_handlers_891;
F->saved_cleanups_1616 = NULL;
F->saved_cleanups_1616 = g_cleanups_892;
F->ctx_1617 = NULL;
F->head_1618 = NULL;
F->frame_1619 = NULL;
F->frame_1619 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P825)rt_nil_check(F->y_465)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_1620 = NULL;
F->copy_back_1621 = NULL;
F->copy_back_1621 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1622 = NULL;
F->pfin_1622 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1623 = NULL;
F->saved_fins_1623 = g_fins_877;
F->saved_rc_1624 = NULL;
F->saved_rc_1624 = g_func_rc_880;
F->saved_ret_1625 = NULL;
F->saved_ret_1625 = g_cap_ret_881;
F->saved_rflag_1626 = NULL;
F->saved_rflag_1626 = g_cap_rflag_882;
F->pn_1627 = NULL;
F->pn_1627 = (*(P815)rt_nil_check(F->d_464)).a;
F->nonrec_end_1628 = NULL;
F->has_pfin_1629 = RT_R_EUNDEF;
if (rt_r_echk(g_in_func_867)) {
F->parent_1620 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P825)rt_nil_check(g_func_sym_879)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_877 = NULL;
g_func_rc_880 = NULL;
g_cap_ret_881 = NULL;
g_cap_rflag_882 = NULL;
g_code_865 = f_new_buffer_24();
g_fields_buf_866 = f_new_buffer_24();
g_in_func_867 = 1;
g_func_sym_879 = F->y_465;
g_exits_888 = NULL;
g_gotos_889 = NULL;
g_frames_890 = ((rt_int)0LL);
g_handlers_891 = NULL;
g_cleanups_892 = NULL;
g_cur_level_868 = rt_add(rt_r_ichk(g_cur_level_868), ((rt_int)1LL));
f_open_scope_168();
{ R833 *cell1630 = rt_alloc(sizeof(R833));
(*cell1630).imps = NULL;
(*cell1630).next = NULL;
F->ctx_1617 = cell1630;
}
(*(P832)rt_nil_check(F->ctx_1617)).depth = rt_r_ichk(g_depth_854);
(*(P832)rt_nil_check(F->ctx_1617)).imps = (*(P815)rt_nil_check(F->d_464)).d;
(*(P832)rt_nil_check(F->ctx_1617)).all_imp = (rt_r_ichk((*(P815)rt_nil_check(F->d_464)).flag) >= ((rt_int)2LL));
(*(P832)rt_nil_check(F->ctx_1617)).next = g_fctx_869;
g_fctx_869 = F->ctx_1617;
if ((F->parent_1620 != NULL)) {
f_put_27(g_fields_buf_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P808)rt_nil_check(F->parent_1620))->all)), rt_str(" *up;", 5)); b_; }));
if ((rt_r_ichk((*(P825)rt_nil_check(F->y_465)).kind) != (((rt_int)9LL)))) {
F->args_1613 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P808)rt_nil_check(F->parent_1620))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1614 != NULL)) {
F->ct_1631 = rt_str_copy(f_ctype_225((*(P827)rt_nil_check(F->pm_1614)).t));
F->f_1632 = rt_str_copy((((P808)rt_nil_check((*(P827)rt_nil_check(F->pm_1614)).cfield))->all));
F->p_1633 = NULL;
F->pc_1634 = NULL;
F->pc_1634 = (*(P827)rt_nil_check(F->pm_1614)).c;
F->ac_1635 = NULL;
if ((((rt_int)(((((P808)rt_nil_check(F->args_1613))->all)).len)) > ((rt_int)0LL))) {
F->args_1613 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->args_1613))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_177((*(P827)rt_nil_check(F->pm_1614)).t)) {
F->fc_1636 = NULL;
F->ft_1637 = NULL;
F->ft_1637 = f_resolve_subtype_256((*(P815)rt_nil_check(F->pn_1627)).a, &F->fc_1636);
F->pc_1634 = f_freeze_200(F->fc_1636, (*(P827)rt_nil_check(F->pm_1614)).t);
}
if ((rt_r_ichk((*(P827)rt_nil_check(F->pm_1614)).mode) == (((rt_int)1LL)))) {
F->p_1633 = f_new_sym_172((((rt_int)2LL)), (*(P827)rt_nil_check(F->pm_1614)).name);
f_put_27(g_fields_buf_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1631), rt_str(" ", 1)), F->f_1632), rt_str(";", 1)); b_; }));
F->args_1613 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->args_1613))->all), F->ct_1631), rt_str(" ", 1)), F->f_1632); b_; }));
(*(P825)rt_nil_check(F->p_1633)).access = f_mk_3(&F->f_1632);
if ((rt_r_ichk((*(P825)rt_nil_check(F->y_465)).kind) != (((rt_int)9LL)))) {
if (((*(P821)rt_nil_check((*(P827)rt_nil_check(F->pm_1614)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P821)rt_nil_check((*(P827)rt_nil_check(F->pm_1614)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1632); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1632), rt_str(" = ", 3)), f_checked_204((*(P827)rt_nil_check(F->pm_1614)).t, F->pc_1634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364((*(P827)rt_nil_check(F->pm_1614)).t, &F->f_1632); b_; }))), rt_str(";", 1)); b_; }));
if (f_needs_fin_315((*(P827)rt_nil_check(F->pm_1614)).t)) {
F->pfin_1622 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->pfin_1622))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1632); b_; }), (*(P827)rt_nil_check(F->pm_1614)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1633 = f_new_sym_172((((rt_int)1LL)), (*(P827)rt_nil_check(F->pm_1614)).name);
f_put_27(g_fields_buf_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1631), rt_str(" *", 2)), F->f_1632), rt_str(";", 1)); b_; }));
F->args_1613 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->args_1613))->all), F->ct_1631), rt_str(" *", 2)), F->f_1632); b_; }));
(*(P825)rt_nil_check(F->p_1633)).access = f_mk_3(&F->f_1632);
(*(P825)rt_nil_check(F->p_1633)).byref = 1;
if ((rt_r_ichk((*(P825)rt_nil_check(F->y_465)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1632), rt_str(" = ", 3)), F->f_1632), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_177((*(P827)rt_nil_check(F->pm_1614)).t)) {
F->bt_1638 = rt_str_copy(f_bound_ctype_179((*(P827)rt_nil_check(F->pm_1614)).t));
f_put_27(g_fields_buf_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_1638), rt_str(" ", 1)), F->f_1632), rt_str("lo, ", 4)), F->f_1632), rt_str("hi;", 3)); b_; }));
F->args_1613 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->args_1613))->all), rt_str(", ", 2)), F->bt_1638), rt_str(" ", 1)), F->f_1632), rt_str("lo, ", 4)), F->bt_1638), rt_str(" ", 1)), F->f_1632), rt_str("hi", 2)); b_; }));
if ((rt_r_ichk((*(P825)rt_nil_check(F->y_465)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1632), rt_str("lo = ", 5)), F->f_1632), rt_str("lo; F->", 7)), F->f_1632), rt_str("hi = ", 5)), F->f_1632), rt_str("hi;", 3)); b_; }));
}
F->ac_1635 = f_new_cons_175();
(*(P817)rt_nil_check(F->ac_1635)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1632, rt_str("lo", 2)); b_; }));
(*(P817)rt_nil_check(F->ac_1635)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1632, rt_str("hi", 2)); b_; }));
(*(P817)rt_nil_check(F->ac_1635)).dyn = 1;
(*(P817)rt_nil_check(F->ac_1635)).lvl = rt_r_ichk(g_cur_level_868);
if (((F->pc_1634 == NULL) || ((*(P817)rt_nil_check(F->pc_1634)).lo == NULL))) {
F->pc_1634 = F->ac_1635;
} else if ((rt_r_ichk((*(P827)rt_nil_check(F->pm_1614)).mode) != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_1632), rt_str("lo <= F->", 9)), F->f_1632), rt_str("hi && (F->", 10)), F->f_1632), rt_str("lo != ", 6)), f_sub_lo_189((*(P827)rt_nil_check(F->pm_1614)).t, F->pc_1634)), rt_str(" || F->", 7)), F->f_1632), rt_str("hi != ", 6)), f_sub_hi_192((*(P827)rt_nil_check(F->pm_1614)).t, F->pc_1634)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if (((rt_r_ichk((*(P827)rt_nil_check(F->pm_1614)).mode) == (((rt_int)3LL))) && (rt_r_ichk((*(P825)rt_nil_check(F->y_465)).kind) != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1631), rt_str(" ", 1)), F->f_1632), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1632), rt_str("v = ", 4)), f_copy_code_364((*(P827)rt_nil_check(F->pm_1614)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1632); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P821)rt_nil_check((*(P827)rt_nil_check(F->pm_1614)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P821)rt_nil_check((*(P827)rt_nil_check(F->pm_1614)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1632), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_1635 == NULL)) {
F->ac_1635 = (*(P827)rt_nil_check(F->pm_1614)).c;
}
if ((!rt_str_eq(f_uninit_value_327(f_base_of_214((*(P827)rt_nil_check(F->pm_1614)).t)), rt_str("", 0)))) {
F->copy_back_1621 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->copy_back_1621))->all), rt_str("  if (!rt_r_undef_", 18)), f_kind_name_219(f_base_of_214((*(P827)rt_nil_check(F->pm_1614)).t))), rt_str("(F->", 4)), F->f_1632), rt_str("v)) ", 4)), f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1632), rt_str(")", 1)); b_; }), (*(P827)rt_nil_check(F->pm_1614)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1632), rt_str("v", 1)); b_; }), F->ac_1635)); b_; }));
} else {
F->copy_back_1621 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->copy_back_1621))->all), rt_str("  ", 2)), f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1632), rt_str(")", 1)); b_; }), (*(P827)rt_nil_check(F->pm_1614)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1632), rt_str("v", 1)); b_; }), F->ac_1635)); b_; }));
}
if (f_needs_fin_315((*(P827)rt_nil_check(F->pm_1614)).t)) {
F->pfin_1622 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->pfin_1622))->all), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1632), rt_str("v", 1)); b_; }), (*(P827)rt_nil_check(F->pm_1614)).t)), rt_str(" ", 1)); b_; }));
}
(*(P825)rt_nil_check(F->p_1633)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1632, rt_str("v", 1)); b_; }));
(*(P825)rt_nil_check(F->p_1633)).byref = 0;
}
}
(*(P825)rt_nil_check(F->p_1633)).t = (*(P827)rt_nil_check(F->pm_1614)).t;
(*(P825)rt_nil_check(F->p_1633)).c = F->pc_1634;
(*(P825)rt_nil_check(F->p_1633)).level = rt_r_ichk(g_cur_level_868);
(*(P825)rt_nil_check(F->p_1633)).ro_flag = ((rt_r_ichk((*(P827)rt_nil_check(F->pm_1614)).mode) == (((rt_int)1LL))) || (rt_r_ichk((*(P827)rt_nil_check(F->pm_1614)).mode) == (((rt_int)4LL))));
f_define_159(F->p_1633, rt_r_ichk((*(P815)rt_nil_check(F->d_464)).line));
F->pm_1614 = (*(P827)rt_nil_check(F->pm_1614)).next;
F->pn_1627 = (*(P815)rt_nil_check(F->pn_1627)).next;
}
if ((rt_r_ichk((*(P821)rt_nil_check((*(P825)rt_nil_check(F->y_465)).result)).kind) != (((rt_int)9LL)))) {
if (((*(P815)rt_nil_check(F->d_464)).b != NULL)) {
F->rc_1639 = NULL;
F->rt_1640 = NULL;
F->rt_1640 = f_resolve_subtype_256((*(P815)rt_nil_check(F->d_464)).b, &F->rc_1639);
g_func_rc_880 = f_freeze_200(F->rc_1639, (*(P825)rt_nil_check(F->y_465)).result);
}
f_put_27(g_fields_buf_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_225((*(P825)rt_nil_check(F->y_465)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P821)rt_nil_check((*(P825)rt_nil_check(F->y_465)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_313((*(P821)rt_nil_check((*(P825)rt_nil_check(F->y_465)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_1629 = (((rt_int)(((((P808)rt_nil_check(F->pfin_1622))->all)).len)) > ((rt_int)0LL));
if (rt_r_echk(F->has_pfin_1629)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_491(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_439((*(P815)rt_nil_check(F->d_464)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_439((*(P815)rt_nil_check(F->d_464)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_1641 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_1642 = NULL;
F->leave_1642 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_1641), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_861, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_1641), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_1641), rt_str(", ", 2)), f_bool_text_344(f_has_pragmat_439((*(P815)rt_nil_check(F->d_464)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_344(f_has_pragmat_439((*(P815)rt_nil_check(F->d_464)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P808)rt_nil_check((*(P815)rt_nil_check(F->d_464)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_491(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_1621 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->copy_back_1621))->all), rt_str("  ", 2)), (((P808)rt_nil_check(F->leave_1642))->all)); b_; }));
F->nonrec_end_1628 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P808)rt_nil_check(F->leave_1642))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
f_declare_labels_476((*(P815)rt_nil_check(F->d_464)).c);
f_declare_body_380((*(P815)rt_nil_check(F->d_464)).c);
f_body_elements_485((*(P815)rt_nil_check(F->d_464)).c);
f_close_fins_459(NULL);
if ((F->nonrec_end_1628 != NULL)) {
f_emit_29(&(((P808)rt_nil_check(F->nonrec_end_1628))->all));
f_pop_cleanup_492();
}
if (rt_r_echk(F->has_pfin_1629)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P808)rt_nil_check(F->pfin_1622))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_492();
F->copy_back_1621 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->copy_back_1621))->all), rt_str("  ", 2)), (((P808)rt_nil_check(F->pfin_1622))->all)); b_; }));
}
f_close_scope_169();
g_fctx_869 = (*(P832)rt_nil_check(g_fctx_869)).next;
g_cur_level_868 = rt_sub(rt_r_ichk(g_cur_level_868), ((rt_int)1LL));
if (((((rt_int)(((((P808)rt_nil_check(F->args_1613))->all)).len)) == ((rt_int)0LL)) || (rt_r_ichk((*(P825)rt_nil_check(F->y_465)).kind) == (((rt_int)9LL))))) {
F->args_1613 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if ((rt_r_ichk((*(P825)rt_nil_check(F->y_465)).kind) == (((rt_int)9LL)))) {
F->args_1613 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1618 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_225((*(P825)rt_nil_check(F->y_465)).result)), rt_str(" ", 1)), (((P808)rt_nil_check((*(P825)rt_nil_check(F->y_465)).cname))->all)), rt_str("(", 1)), (((P808)rt_nil_check(F->args_1613))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_860, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->head_1618))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->head_1618))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_874, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P808)rt_nil_check(F->frame_1619))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_874, g_fields_buf_866);
f_put_27(g_out_frames_874, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if ((rt_r_ichk((*(P825)rt_nil_check(F->y_465)).kind) == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P808)rt_nil_check(F->frame_1619))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P808)rt_nil_check(F->frame_1619))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_862, g_code_865);
if ((rt_r_ichk((*(P821)rt_nil_check((*(P825)rt_nil_check(F->y_465)).result)).kind) != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P808)rt_nil_check(F->copy_back_1621))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_862, &(((P808)rt_nil_check(F->copy_back_1621))->all));
}
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P808)rt_nil_check(F->copy_back_1621))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_862, &(((P808)rt_nil_check(F->copy_back_1621))->all));
}
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_865 = F->saved_code_1606;
g_fields_buf_866 = F->saved_fields_1607;
g_in_func_867 = rt_r_echk(F->saved_in_1608);
g_func_sym_879 = F->saved_sym_1609;
g_exits_888 = F->saved_exits_1610;
g_gotos_889 = F->saved_gotos_1611;
g_frames_890 = rt_r_ichk(F->saved_frames_1612);
g_handlers_891 = F->saved_handlers_1615;
g_cleanups_892 = F->saved_cleanups_1616;
g_fins_877 = F->saved_fins_1623;
g_func_rc_880 = F->saved_rc_1624;
g_cap_ret_881 = F->saved_ret_1625;
g_cap_rflag_882 = F->saved_rflag_1626;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_468(P815 d_467) {
  struct f_waits_of_468fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_467 = d_467;
F->w_1643 = NULL;
F->w_1643 = g_cap_waits_871;
while ((F->w_1643 != NULL)) {
if (((*(P844)rt_nil_check(F->w_1643)).d == F->d_467)) {
F->result_ = (((P808)rt_nil_check((*(P844)rt_nil_check(F->w_1643)).w))->all);
goto ret_;
}
F->w_1643 = (*(P844)rt_nil_check(F->w_1643)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_470(P815 elems_469) {
  struct f_task_waits_470fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_469 = elems_469;
F->e_1644 = NULL;
F->e_1644 = F->elems_469;
F->r_1645 = NULL;
F->r_1645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1644 != NULL)) {
if ((rt_r_ichk((*(P815)rt_nil_check(F->e_1644)).kind) == (((rt_int)50LL)))) {
F->r_1645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_1645))->all), rt_str(" rt_await_decl(&", 16)), (((P808)rt_nil_check((*(P825)rt_nil_check(f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_1644)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if (((rt_r_ichk((*(P815)rt_nil_check(F->e_1644)).kind) == (((rt_int)47LL))) || ((rt_r_ichk((*(P815)rt_nil_check(F->e_1644)).kind) == (((rt_int)48LL))) && ((rt_r_ichk((*(P815)rt_nil_check(F->e_1644)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P815)rt_nil_check(F->e_1644)).flag) == ((rt_int)3LL)))))) {
F->r_1645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->r_1645))->all), f_waits_of_468(F->e_1644)); b_; }));
}
F->e_1644 = (*(P815)rt_nil_check(F->e_1644)).next;
}
F->result_ = (((P808)rt_nil_check(F->r_1645))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_472(P815 elems_471) {
  struct f_await_tasks_472fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_471 = elems_471;
F->w_1646 = rt_str_copy(f_task_waits_470(F->elems_471));
if ((((rt_int)((F->w_1646).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_1646);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_474(P815 elems_473) {
  struct f_capsule_elements_474fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_473 = elems_473;
F->e_1647 = NULL;
F->e_1647 = F->elems_473;
while ((F->e_1647 != NULL)) {
if (((rt_r_ichk((*(P815)rt_nil_check(F->e_1647)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P815)rt_nil_check(F->e_1647)).kind) <= (((rt_int)36LL))))) {
f_start_labels_477();
}
f_element_445(F->e_1647);
F->e_1647 = (*(P815)rt_nil_check(F->e_1647)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_476(P815 elems_475) {
  struct f_declare_labels_476fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_475 = elems_475;
F->e_1648 = NULL;
F->e_1648 = F->elems_475;
while ((F->e_1648 != NULL)) {
F->l_1649 = NULL;
F->l_1649 = (*(P815)rt_nil_check(F->e_1648)).labels;
while ((F->l_1649 != NULL)) {
F->x_1650 = NULL;
F->x_1650 = g_gotos_889;
while (((F->x_1650 != NULL) && (rt_r_ichk((*(P840)rt_nil_check(F->x_1650)).depth) == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P808)rt_nil_check((*(P840)rt_nil_check(F->x_1650)).match))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->l_1649)).name))->all))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->l_1649)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P808)rt_nil_check((*(P815)rt_nil_check(F->l_1649)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_1650 = (*(P840)rt_nil_check(F->x_1650)).next;
}
{ R841 *cell1651 = rt_alloc(sizeof(R841));
(*cell1651).match = NULL;
(*cell1651).label = NULL;
(*cell1651).next = NULL;
F->x_1650 = cell1651;
}
(*(P840)rt_nil_check(F->x_1650)).match = (*(P815)rt_nil_check(F->l_1649)).name;
(*(P840)rt_nil_check(F->x_1650)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P840)rt_nil_check(F->x_1650)).depth = rt_neg(((rt_int)1LL));
(*(P840)rt_nil_check(F->x_1650)).next = g_gotos_889;
g_gotos_889 = F->x_1650;
F->l_1649 = (*(P815)rt_nil_check(F->l_1649)).next;
}
F->e_1648 = (*(P815)rt_nil_check(F->e_1648)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_477(void) {
  struct f_start_labels_477fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1652 = NULL;
F->x_1652 = g_gotos_889;
while (((F->x_1652 != NULL) && (rt_r_ichk((*(P840)rt_nil_check(F->x_1652)).depth) == rt_neg(((rt_int)1LL))))) {
(*(P840)rt_nil_check(F->x_1652)).depth = rt_r_ichk(g_frames_890);
F->x_1652 = (*(P840)rt_nil_check(F->x_1652)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P840 f_goto_label_479(rstr *name_478) {
  struct f_goto_label_479fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_478 = name_478;
F->x_1653 = NULL;
F->x_1653 = g_gotos_889;
while ((F->x_1653 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P840)rt_nil_check(F->x_1653)).match))->all), (*F->name_478))) {
F->result_ = F->x_1653;
goto ret_;
}
F->x_1653 = (*(P840)rt_nil_check(F->x_1653)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_481(P815 e_480) {
  struct f_has_return_481fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_480 = e_480;
F->x_1654 = NULL;
F->x_1654 = F->e_480;
while ((F->x_1654 != NULL)) {
if ((rt_r_ichk((*(P815)rt_nil_check(F->x_1654)).kind) == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if ((((((rt_r_ichk((*(P815)rt_nil_check(F->x_1654)).kind) != (((rt_int)45LL))) && (rt_r_ichk((*(P815)rt_nil_check(F->x_1654)).kind) != (((rt_int)46LL)))) && (rt_r_ichk((*(P815)rt_nil_check(F->x_1654)).kind) != (((rt_int)50LL)))) && (rt_r_ichk((*(P815)rt_nil_check(F->x_1654)).kind) != (((rt_int)47LL)))) && (rt_r_ichk((*(P815)rt_nil_check(F->x_1654)).kind) != (((rt_int)51LL))))) {
if ((((((*(P815)rt_nil_check(F->x_1654)).a != NULL) && f_has_return_481((*(P815)rt_nil_check(F->x_1654)).a)) || (((*(P815)rt_nil_check(F->x_1654)).b != NULL) && f_has_return_481((*(P815)rt_nil_check(F->x_1654)).b))) || (((*(P815)rt_nil_check(F->x_1654)).c != NULL) && f_has_return_481((*(P815)rt_nil_check(F->x_1654)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_1654 = (*(P815)rt_nil_check(F->x_1654)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_483(P815 elems_482) {
  struct f_capsule_body_483fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_482 = elems_482;
F->saved_ret_1655 = NULL;
F->saved_ret_1655 = g_cap_ret_881;
F->saved_flag_1656 = NULL;
F->saved_flag_1656 = g_cap_rflag_882;
F->saved_frames_1657 = RT_R_IUNDEF;
F->saved_frames_1657 = rt_r_ichk(g_ret_frames_883);
F->e_1658 = NULL;
F->e_1658 = F->elems_482;
if ((!f_has_return_481(F->elems_482))) {
g_cap_ret_881 = NULL;
g_cap_rflag_882 = NULL;
f_capsule_elements_474(F->elems_482);
} else {
g_cap_rflag_882 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_195(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(g_cap_rflag_882))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_1658 != NULL)) {
F->stmt_1659 = RT_R_EUNDEF;
F->stmt_1659 = ((rt_r_ichk((*(P815)rt_nil_check(F->e_1658)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P815)rt_nil_check(F->e_1658)).kind) <= (((rt_int)36LL))));
g_cap_ret_881 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_883 = rt_r_ichk(g_frames_890);
if (rt_r_echk(F->stmt_1659)) {
f_start_labels_477();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P808)rt_nil_check(g_cap_rflag_882))->all)), rt_str(") {", 3)); b_; }));
}
f_element_445(F->e_1658);
if (rt_r_echk(F->stmt_1659)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(g_cap_ret_881))->all), rt_str(": ;", 3)); b_; }));
F->e_1658 = (*(P815)rt_nil_check(F->e_1658)).next;
}
}
g_cap_ret_881 = F->saved_ret_1655;
g_cap_rflag_882 = F->saved_flag_1656;
g_ret_frames_883 = rt_r_ichk(F->saved_frames_1657);
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_485(P815 elems_484) {
  struct f_body_elements_485fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_484 = elems_484;
f_capsule_elements_474(F->elems_484);
f_await_tasks_472(F->elems_484);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_487(P815 elems_486) {
  struct f_gen_body_487fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_486 = elems_486;
F->saved_1660 = NULL;
F->saved_1660 = g_fins_877;
F->saved_gotos_1661 = NULL;
F->saved_gotos_1661 = g_gotos_889;
f_open_scope_168();
f_declare_labels_476(F->elems_486);
f_declare_body_380(F->elems_486);
f_body_elements_485(F->elems_486);
f_close_fins_459(F->saved_1660);
f_close_scope_169();
g_gotos_889 = F->saved_gotos_1661;
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_489(rt_int upto_488) {
  struct f_pop_frames_489fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_488 = upto_488;
F->i_1662 = RT_R_IUNDEF;
F->i_1662 = rt_r_ichk(g_frames_890);
F->c_1663 = NULL;
F->c_1663 = g_cleanups_892;
while ((rt_r_ichk(F->i_1662) > F->upto_488)) {
f_emit_29(&(((P808)rt_nil_check((*(P819)rt_nil_check(F->c_1663)).s))->all));
F->c_1663 = (*(P819)rt_nil_check(F->c_1663)).next;
F->i_1662 = rt_sub(rt_r_ichk(F->i_1662), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_491(rstr *s_490) {
  struct f_push_cleanup_491fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_490 = s_490;
F->c_1664 = NULL;
{ R820 *cell1665 = rt_alloc(sizeof(R820));
(*cell1665).s = NULL;
(*cell1665).next = NULL;
F->c_1664 = cell1665;
}
(*(P819)rt_nil_check(F->c_1664)).s = f_mk_3(&(*F->s_490));
(*(P819)rt_nil_check(F->c_1664)).next = g_cleanups_892;
g_cleanups_892 = F->c_1664;
g_frames_890 = rt_add(rt_r_ichk(g_frames_890), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_492(void) {
  struct f_pop_cleanup_492fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_892 = (*(P819)rt_nil_check(g_cleanups_892)).next;
g_frames_890 = rt_sub(rt_r_ichk(g_frames_890), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_494(P815 s_493) {
  struct f_gen_statement_494fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_493 = s_493;
F->label_1666 = NULL;
F->gl_1667 = NULL;
F->gl_1667 = (*(P815)rt_nil_check(F->s_493)).labels;
while ((F->gl_1667 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P840)rt_nil_check(f_goto_label_479(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->gl_1667)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_1667 = (*(P815)rt_nil_check(F->gl_1667)).next;
}
if (((*(P815)rt_nil_check(F->s_493)).tag != NULL)) {
F->x_1668 = NULL;
{ R841 *cell1669 = rt_alloc(sizeof(R841));
(*cell1669).match = NULL;
(*cell1669).label = NULL;
(*cell1669).next = NULL;
F->x_1668 = cell1669;
}
F->label_1666 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P840)rt_nil_check(F->x_1668)).match = (*(P815)rt_nil_check(F->s_493)).tag;
(*(P840)rt_nil_check(F->x_1668)).label = F->label_1666;
(*(P840)rt_nil_check(F->x_1668)).depth = rt_r_ichk(g_frames_890);
(*(P840)rt_nil_check(F->x_1668)).next = g_exits_888;
g_exits_888 = F->x_1668;
}
{ rt_int sel1670 = rt_r_ichk((*(P815)rt_nil_check(F->s_493)).kind);
if (0 || (sel1670 == (((rt_int)20LL)))) {
f_st_assign_496(F->s_493);
} else if (0 || (sel1670 == (((rt_int)21LL)))) {
f_st_call_498(F->s_493);
} else if (0 || (sel1670 == (((rt_int)22LL)))) {
f_st_if_500(F->s_493);
} else if (0 || (sel1670 == (((rt_int)23LL)))) {
f_st_case_502(F->s_493);
} else if (0 || (sel1670 == (((rt_int)24LL)))) {
f_st_repeat_504(F->s_493);
} else if (0 || (sel1670 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_487((*(P815)rt_nil_check(F->s_493)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1670 == (((rt_int)27LL)))) {
f_st_exit_506(F->s_493);
} else if (0 || (sel1670 == (((rt_int)29LL)))) {
{
F->x_1671 = NULL;
F->x_1671 = f_goto_label_479(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->s_493)).name))->all));
if ((F->x_1671 == NULL)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_493)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->s_493)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_489(rt_r_ichk((*(P840)rt_nil_check(F->x_1671)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P808)rt_nil_check((*(P840)rt_nil_check(F->x_1671)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel1670 == (((rt_int)28LL)))) {
f_st_return_508(F->s_493);
} else if (0 || (sel1670 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_515(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->s_493)).name))->all), rt_r_ichk((*(P815)rt_nil_check(F->s_493)).line))), rt_str(");", 2)); b_; }));
} else if (0 || (sel1670 == (((rt_int)31LL)))) {
if ((g_handlers_891 == NULL)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_493)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P808)rt_nil_check((*(P819)rt_nil_check(g_handlers_891)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1670 == (((rt_int)26LL)))) {
f_st_guard_517(F->s_493);
} else if (0 || (sel1670 == (((rt_int)32LL)))) {
f_st_alloc_519(F->s_493);
} else if (0 || (sel1670 == (((rt_int)34LL)))) {
f_st_create_523(F->s_493);
} else if (0 || (sel1670 == (((rt_int)35LL)))) {
f_st_wait_552(F->s_493);
} else if (0 || (sel1670 == (((rt_int)36LL)))) {
f_st_region_560(F->s_493);
} else {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_493)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P815)rt_nil_check(F->s_493)).tag != NULL)) {
g_exits_888 = (*(P840)rt_nil_check(g_exits_888)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->label_1666))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_496(P815 s_495) {
  struct f_st_assign_496fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_495 = s_495;
F->lv_1672 = NULL;
F->t_1673 = NULL;
F->vt_1674 = NULL;
F->c_1675 = NULL;
F->ro_1676 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->s_495)).a)).kind) == (((rt_int)10LL))) && ((*(P815)rt_nil_check((*(P815)rt_nil_check(F->s_495)).a)).b != NULL)) && (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->s_495)).a)).b)).kind) == (((rt_int)16LL))))) {
f_lvalue_618((*(P815)rt_nil_check((*(P815)rt_nil_check(F->s_495)).a)).a, &F->lv_1672, &F->t_1673, &F->c_1675, &F->ro_1676);
while ((rt_r_ichk((*(P821)rt_nil_check(F->t_1673)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_409(F->t_1673);
F->lv_1672 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_610(&(((P808)rt_nil_check(F->lv_1672))->all), F->t_1673); b_; }));
F->t_1673 = (*(P821)rt_nil_check(F->t_1673)).target;
}
if (((rt_r_ichk((*(P821)rt_nil_check(F->t_1673)).kind) == (((rt_int)15LL))) && ((*(P821)rt_nil_check(F->t_1673)).tparams == NULL))) {
F->t_1673 = (*(P821)rt_nil_check(F->t_1673)).under;
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_1673)).kind) == (((rt_int)15LL)))) {
F->lv_1672 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->lv_1672))->all), rt_str(".all", 4)); b_; }));
F->t_1673 = (*(P821)rt_nil_check(F->t_1673)).under;
}
if ((((!rt_r_echk(F->ro_1676)) && (rt_r_ichk((*(P821)rt_nil_check(F->t_1673)).kind) == (((rt_int)6LL)))) && (rt_r_ichk((*(P821)rt_nil_check(F->t_1673)).ndim) == ((rt_int)1LL)))) {
F->lo_1677 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->s_495)).a)).b)).a, (*(P821)rt_nil_check(F->t_1673)).idx, &F->vt_1674));
F->hi_1678 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->s_495)).a)).b)).b, (*(P821)rt_nil_check(F->t_1673)).idx, &F->vt_1674));
F->v_1679 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->s_495)).b, F->t_1673, &F->vt_1674));
f_need_slice_630(F->t_1673);
f_check_type_223(F->vt_1674, F->t_1673, rt_r_ichk((*(P815)rt_nil_check(F->s_495)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_225(F->t_1673)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_225(F->t_1673)), rt_str("(", 1)), (((P808)rt_nil_check(F->lv_1672))->all)), rt_str(", ", 2)), F->lo_1677), rt_str(", ", 2)), F->hi_1678), rt_str("); as_", 6)), f_ctype_225(F->t_1673)), rt_str("(&sl_, ", 7)), F->v_1679), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((rt_r_echk(F->ro_1676) || (rt_r_ichk((*(P821)rt_nil_check(F->t_1673)).kind) != (((rt_int)5LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_495)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_1680 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->s_495)).a)).b)).a, g_ty_int_895, &F->vt_1674));
F->hi_1681 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->s_495)).a)).b)).b, g_ty_int_895, &F->vt_1674));
F->v_1682 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->s_495)).b, g_ty_string_899, &F->vt_1674));
f_check_type_223(F->vt_1674, g_ty_string_899, rt_r_ichk((*(P815)rt_nil_check(F->s_495)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P808)rt_nil_check(F->lv_1672))->all)), rt_str(", ", 2)), F->lo_1680), rt_str(", ", 2)), F->hi_1681), rt_str(", ", 2)), F->v_1682), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_618((*(P815)rt_nil_check(F->s_495)).a, &F->lv_1672, &F->t_1673, &F->c_1675, &F->ro_1676);
if (rt_r_echk(F->ro_1676)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_495)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_296(F->t_1673)) && (!f_exports_op_402((*(P821)rt_nil_check(F->t_1673)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_495)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_1673)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1683 = rt_str_copy(f_gexpr_in_657((*(P815)rt_nil_check(F->s_495)).b, F->t_1673, F->c_1675, &F->vt_1674));
f_check_type_223(F->vt_1674, F->t_1673, rt_r_ichk((*(P815)rt_nil_check(F->s_495)).line));
f_ptr_subtype_check_429(F->t_1673, F->c_1675, (*(P815)rt_nil_check(F->s_495)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(&(((P808)rt_nil_check(F->lv_1672))->all), F->t_1673, &F->v_1683, F->c_1675); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_498(P815 s_497) {
  struct f_st_call_498fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_497 = s_497;
F->c_1684 = NULL;
F->c_1684 = (*(P815)rt_nil_check(F->s_497)).a;
F->t_1685 = NULL;
if (((rt_r_ichk((*(P815)rt_nil_check(F->c_1684)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P815)rt_nil_check(F->c_1684)).kind) == (((rt_int)12LL))))) {
F->x_1686 = NULL;
F->x_1686 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P815)rt_nil_check(F->c_1684)).line));
(*(P815)rt_nil_check(F->x_1686)).a = F->c_1684;
F->c_1684 = F->x_1686;
}
if ((rt_r_ichk((*(P815)rt_nil_check(F->c_1684)).kind) != (((rt_int)10LL)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_497)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_779(F->c_1684, 1, &F->t_1685), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_500(P815 s_499) {
  struct f_st_if_500fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_499 = s_499;
F->a_1687 = NULL;
F->a_1687 = (*(P815)rt_nil_check(F->s_499)).a;
F->first_1688 = RT_R_EUNDEF;
F->first_1688 = 1;
F->t_1689 = NULL;
F->taken_1690 = RT_R_EUNDEF;
F->taken_1690 = 0;
F->ok_1691 = RT_R_EUNDEF;
F->mv_1692 = NULL;
while (((F->a_1687 != NULL) && (!rt_r_echk(F->taken_1690)))) {
F->mv_1692 = f_meval_342((*(P815)rt_nil_check(F->a_1687)).a, &F->ok_1691);
if (((rt_r_echk(F->ok_1691) && (rt_r_ichk((*(P834)rt_nil_check(F->mv_1692)).kind) == (((rt_int)2LL)))) && (rt_r_ichk((*(P834)rt_nil_check(F->mv_1692)).i) == ((rt_int)0LL)))) {
F->a_1687 = (*(P815)rt_nil_check(F->a_1687)).next;
} else {
if ((rt_r_echk(F->ok_1691) && (rt_r_ichk((*(P834)rt_nil_check(F->mv_1692)).kind) == (((rt_int)2LL))))) {
F->taken_1690 = 1;
if (rt_r_echk(F->first_1688)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_1693 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->a_1687)).a, g_ty_bool_896, &F->t_1689));
f_check_type_223(F->t_1689, g_ty_bool_896, rt_r_ichk((*(P815)rt_nil_check(F->s_499)).line));
if (rt_r_echk(F->first_1688)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1693), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1693), rt_str(") {", 3)); b_; }));
}
}
F->first_1688 = 0;
f_gen_body_487((*(P815)rt_nil_check(F->a_1687)).b);
F->a_1687 = (*(P815)rt_nil_check(F->a_1687)).next;
}
}
if (((rt_r_ichk((*(P815)rt_nil_check(F->s_499)).flag) == ((rt_int)1LL)) && (!rt_r_echk(F->taken_1690)))) {
if (rt_r_echk(F->first_1688)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_1688 = 0;
f_gen_body_487((*(P815)rt_nil_check(F->s_499)).b);
}
if ((!rt_r_echk(F->first_1688))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_case_502(P815 s_501) {
  struct f_st_case_502fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_501 = s_501;
F->st_1694 = NULL;
F->vt_1695 = NULL;
F->first_1696 = RT_R_EUNDEF;
F->first_1696 = 1;
F->a_1697 = NULL;
F->a_1697 = (*(P815)rt_nil_check(F->s_501)).b;
F->sel_1698 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->s_501)).a, NULL, &F->st_1694));
F->tmp_1699 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_225(F->st_1694)), rt_str(" ", 1)), F->tmp_1699), rt_str(" = ", 3)), F->sel_1698), rt_str(";", 1)); b_; }));
while ((F->a_1697 != NULL)) {
F->lab_1700 = NULL;
F->lab_1700 = (*(P815)rt_nil_check(F->a_1697)).a;
F->conds_1701 = NULL;
F->conds_1701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1700 != NULL)) {
if (((*(P815)rt_nil_check(F->lab_1700)).b == NULL)) {
F->v_1702 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->lab_1700)).a, F->st_1694, &F->vt_1695));
f_check_type_223(F->vt_1695, F->st_1694, rt_r_ichk((*(P815)rt_nil_check(F->s_501)).line));
F->conds_1701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->conds_1701))->all), rt_str(" || ", 4)), f_eq_code_368(F->st_1694, &F->tmp_1699, &F->v_1702)); b_; }));
} else {
F->lo_1703 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->lab_1700)).a, F->st_1694, &F->vt_1695));
F->hi_1704 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->lab_1700)).b, F->st_1694, &F->vt_1695));
F->conds_1701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->conds_1701))->all), rt_str(" || (", 5)), F->tmp_1699), rt_str(" >= ", 4)), F->lo_1703), rt_str(" && ", 4)), F->tmp_1699), rt_str(" <= ", 4)), F->hi_1704), rt_str(")", 1)); b_; }));
}
F->lab_1700 = (*(P815)rt_nil_check(F->lab_1700)).next;
}
if (rt_r_echk(F->first_1696)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P808)rt_nil_check(F->conds_1701))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P808)rt_nil_check(F->conds_1701))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1696 = 0;
f_gen_body_487((*(P815)rt_nil_check(F->a_1697)).b);
F->a_1697 = (*(P815)rt_nil_check(F->a_1697)).next;
}
if (rt_r_echk(F->first_1696)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P815)rt_nil_check(F->s_501)).flag) == ((rt_int)1LL))) {
f_gen_body_487((*(P815)rt_nil_check(F->s_501)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_504(P815 s_503) {
  struct f_st_repeat_504fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_503 = s_503;
F->t_1705 = NULL;
F->c_1706 = NULL;
if ((rt_r_ichk((*(P815)rt_nil_check(F->s_503)).flag) == ((rt_int)0LL))) {
F->cond_1707 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->s_503)).a, g_ty_bool_896, &F->t_1705));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1707), rt_str(") {", 3)); b_; }));
f_gen_body_487((*(P815)rt_nil_check(F->s_503)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1705 = f_resolve_subtype_256((*(P815)rt_nil_check(F->s_503)).a, &F->c_1706);
F->c_1706 = f_base_cons_217(F->t_1705, F->c_1706);
if ((((*(P821)rt_nil_check(f_base_of_214(F->t_1705))).kind == (((rt_int)4LL))) && ((*(P817)rt_nil_check(F->c_1706)).lo == NULL))) {
F->c_1706 = f_new_cons_175();
(*(P817)rt_nil_check(F->c_1706)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P817)rt_nil_check(F->c_1706)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P821)rt_nil_check(f_base_of_214(F->t_1705))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P817)rt_nil_check(F->c_1706)).lo == NULL)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_503)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1708 = rt_str_copy(f_storage_450(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->s_503)).name))->all), F->t_1705));
F->lov_1709 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1710 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1711 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1712 = NULL;
F->y_1712 = f_new_sym_172((((rt_int)2LL)), (*(P815)rt_nil_check(F->s_503)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1709), rt_str(" = ", 3)), (((P808)rt_nil_check((*(P817)rt_nil_check(F->c_1706)).lo))->all)), rt_str(", ", 2)), F->hiv_1710), rt_str(" = ", 3)), (((P808)rt_nil_check((*(P817)rt_nil_check(F->c_1706)).hi))->all)), rt_str(";", 1)); b_; }));
if ((rt_r_ichk((*(P815)rt_nil_check(F->s_503)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1711), rt_str(" = ", 3)), F->hiv_1710), rt_str("; ", 2)), F->it_1711), rt_str(" >= ", 4)), F->lov_1709), rt_str("; ", 2)), F->it_1711), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1711), rt_str(" = ", 3)), F->lov_1709), rt_str("; ", 2)), F->it_1711), rt_str(" <= ", 4)), F->hiv_1710), rt_str("; ", 2)), F->it_1711), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1708, rt_str(" = ", 3)), F->it_1711), rt_str(";", 1)); b_; }));
f_open_scope_168();
(*(P825)rt_nil_check(F->y_1712)).t = F->t_1705;
(*(P825)rt_nil_check(F->y_1712)).c = F->c_1706;
f_bind_453(F->y_1712, &F->access_1708);
(*(P825)rt_nil_check(F->y_1712)).ro_flag = 1;
f_define_159(F->y_1712, rt_r_ichk((*(P815)rt_nil_check(F->s_503)).line));
f_gen_body_487((*(P815)rt_nil_check(F->s_503)).b);
f_close_scope_169();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_506(P815 s_505) {
  struct f_st_exit_506fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_505 = s_505;
F->x_1713 = NULL;
F->x_1713 = g_exits_888;
while ((F->x_1713 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P840)rt_nil_check(F->x_1713)).match))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->s_505)).name))->all))) {
f_pop_frames_489(rt_r_ichk((*(P840)rt_nil_check(F->x_1713)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P808)rt_nil_check((*(P840)rt_nil_check(F->x_1713)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1713 = (*(P840)rt_nil_check(F->x_1713)).next;
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_505)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P808)rt_nil_check((*(P815)rt_nil_check(F->s_505)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_508(P815 s_507) {
  struct f_st_return_508fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_507 = s_507;
F->vt_1714 = NULL;
if ((g_cap_ret_881 != NULL)) {
if (((*(P815)rt_nil_check(F->s_507)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_507)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_489(rt_r_ichk(g_ret_frames_883));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(g_cap_rflag_882))->all), rt_str(" = 1; goto ", 11)), (((P808)rt_nil_check(g_cap_ret_881))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!rt_r_echk(g_in_func_867))) {
f_pop_frames_489(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check((*(P825)rt_nil_check(g_func_sym_879)).result)).kind) == (((rt_int)9LL)))) {
if (((*(P815)rt_nil_check(F->s_507)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_507)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_489(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P815)rt_nil_check(F->s_507)).a == NULL)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_507)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1715 = rt_str_copy(f_gexpr_in_657((*(P815)rt_nil_check(F->s_507)).a, (*(P825)rt_nil_check(g_func_sym_879)).result, g_func_rc_880, &F->vt_1714));
f_check_type_223(F->vt_1714, (*(P825)rt_nil_check(g_func_sym_879)).result, rt_r_ichk((*(P815)rt_nil_check(F->s_507)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_512((*(P825)rt_nil_check(g_func_sym_879)).result, g_func_rc_880, &F->v_1715)), rt_str(";", 1)); b_; }));
f_pop_frames_489(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_512(P821 t_509, P817 c_510, rstr *v_511) {
  struct f_result_checked_512fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_509 = t_509;
F->c_510 = c_510;
F->v_511 = v_511;
if ((F->c_510 == NULL)) {
F->result_ = (*F->v_511);
goto ret_;
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->t_509)).kind) == (((rt_int)5LL))) && ((*(P817)rt_nil_check(F->c_510)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_511)), rt_str(", ", 2)), (((P808)rt_nil_check((*(P817)rt_nil_check(F->c_510)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->t_509)).kind) == (((rt_int)6LL))) && ((*(P817)rt_nil_check(F->c_510)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->t_509)), rt_str(" r_ = ", 6)), (*F->v_511)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P808)rt_nil_check((*(P817)rt_nil_check(F->c_510)).lo))->all)), rt_str(", ", 2)), (((P808)rt_nil_check((*(P817)rt_nil_check(F->c_510)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_204(F->t_509, F->c_510, &(*F->v_511));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_515(rstr *name_513, rt_int line_514) {
  struct f_exc_id_515fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_513 = name_513;
F->line_514 = line_514;
F->y_1716 = NULL;
F->y_1716 = f_lookup_154(&(*F->name_513));
if (((F->y_1716 != NULL) && (rt_r_ichk((*(P825)rt_nil_check(F->y_1716)).kind) == (((rt_int)7LL))))) {
F->result_ = (((P808)rt_nil_check((*(P825)rt_nil_check(F->y_1716)).cname))->all);
goto ret_;
}
if (((((rt_int)(((*F->name_513)).len)) > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_513), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_513)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_514, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_513), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_517(P815 s_516) {
  struct f_st_guard_517fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_516 = s_516;
F->h_1717 = NULL;
F->h_1717 = (*(P815)rt_nil_check(F->s_516)).b;
F->first_1718 = RT_R_EUNDEF;
F->first_1718 = 1;
F->hv_1719 = NULL;
{
F->f_1720 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1721 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_491(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1720), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1720), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1720), rt_str(")) {", 4)); b_; }));
f_gen_body_487((*(P815)rt_nil_check(F->s_516)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1720), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_492();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1720), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1721), rt_str(" = rt_xcur;", 11)); b_; }));
{ R820 *cell1722 = rt_alloc(sizeof(R820));
(*cell1722).s = NULL;
(*cell1722).next = NULL;
F->hv_1719 = cell1722;
}
(*(P819)rt_nil_check(F->hv_1719)).s = f_mk_3(&F->x_1721);
(*(P819)rt_nil_check(F->hv_1719)).next = g_handlers_891;
g_handlers_891 = F->hv_1719;
while ((F->h_1717 != NULL)) {
F->n_1723 = NULL;
F->n_1723 = (*(P815)rt_nil_check(F->h_1717)).a;
F->conds_1724 = NULL;
F->conds_1724 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1723 != NULL)) {
F->conds_1724 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->conds_1724))->all), rt_str(" || ", 4)), F->x_1721), rt_str(" == ", 4)), f_exc_id_515(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->n_1723)).name))->all), rt_r_ichk((*(P815)rt_nil_check(F->s_516)).line))); b_; }));
F->n_1723 = (*(P815)rt_nil_check(F->n_1723)).next;
}
if (rt_r_echk(F->first_1718)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P808)rt_nil_check(F->conds_1724))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P808)rt_nil_check(F->conds_1724))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1718 = 0;
f_gen_body_487((*(P815)rt_nil_check(F->h_1717)).b);
F->h_1717 = (*(P815)rt_nil_check(F->h_1717)).next;
}
if (rt_r_echk(F->first_1718)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P815)rt_nil_check(F->s_516)).flag) == ((rt_int)1LL))) {
f_gen_body_487((*(P815)rt_nil_check(F->s_516)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1721), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_891 = (*(P819)rt_nil_check(g_handlers_891)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_519(P815 s_518) {
  struct f_st_alloc_519fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_518 = s_518;
F->lv_1725 = NULL;
F->t_1726 = NULL;
F->target_1727 = NULL;
F->vt_1728 = NULL;
F->c_1729 = NULL;
F->tc_1730 = NULL;
F->ro_1731 = RT_R_EUNDEF;
F->d_1732 = NULL;
F->p_1733 = NULL;
F->a_1734 = NULL;
f_lvalue_618((*(P815)rt_nil_check(F->s_518)).a, &F->lv_1725, &F->t_1726, &F->c_1729, &F->ro_1731);
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_1726)).kind) != (((rt_int)8LL)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_518)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_409(F->t_1726);
F->d_1732 = (*(P821)rt_nil_check(F->t_1726)).decl;
F->target_1727 = (*(P821)rt_nil_check(F->t_1726)).target;
if ((f_list_len_67((*(P815)rt_nil_check(F->s_518)).b) != f_list_len_67((*(P815)rt_nil_check(F->d_1732)).b))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_518)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_67((*(P815)rt_nil_check(F->d_1732)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P815)rt_nil_check(F->d_1732)).b != NULL)) {
f_alloc_cell_421(F->s_518, &(((P808)rt_nil_check(F->lv_1725))->all), F->t_1726, F->c_1729);
goto ret_;
}
{
F->tcn_1735 = rt_str_copy(f_ctype_225(F->target_1727));
F->cell_1736 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_315(F->target_1727)) {
F->fn_1737 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_876 = 1;
g_uses_findyn_878 = 1;
f_put_27(g_out_protos_860, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1737), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1737), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_867)) {
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P808)rt_nil_check((*(P825)rt_nil_check(g_func_sym_879)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_1735), rt_str(" *)cell_)", 9)); b_; }), F->target_1727)); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_867)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1735), rt_str(" *", 2)), F->cell_1736), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1735), rt_str("), ", 3)), F->fn_1737), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1735), rt_str(" *", 2)), F->cell_1736), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1735), rt_str("), ", 3)), F->fn_1737), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1735), rt_str(" *", 2)), F->cell_1736), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1735), rt_str("));", 3)); b_; }));
}
f_open_scope_168();
f_bind_ptr_params_416((*(P815)rt_nil_check(F->d_1732)).d, f_ptr_args_411(F->c_1729), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P815)rt_nil_check(F->s_518)).line));
F->vt_1728 = f_resolve_subtype_256((*(P815)rt_nil_check(F->d_1732)).a, &F->tc_1730);
f_init_storage_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1736), rt_str(")", 1)); b_; }), F->target_1727, F->tc_1730);
f_close_scope_169();
if (((*(P815)rt_nil_check(F->s_518)).c != NULL)) {
F->v_1738 = rt_str_copy(f_gexpr_in_657((*(P815)rt_nil_check(F->s_518)).c, F->target_1727, F->tc_1730, &F->vt_1728));
f_check_type_223(F->vt_1728, F->target_1727, rt_r_ichk((*(P815)rt_nil_check(F->s_518)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_361(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1736), rt_str(")", 1)); b_; }), F->target_1727, &F->v_1738, F->tc_1730); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->lv_1725))->all), rt_str(" = ", 3)), F->cell_1736), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_521(P815 e_520) {
  struct f_act_ref_521fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_520 = e_520;
F->lv_1739 = NULL;
F->t_1740 = NULL;
F->c_1741 = NULL;
F->ro_1742 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P815)rt_nil_check(F->e_520)).kind) == (((rt_int)7LL))) && rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_520)).name))->all), rt_str("ME", 2))) && (f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_612(F->e_520))) {
F->v_1743 = rt_str_copy(f_gexpr_649(F->e_520, g_ty_act_905, &F->t_1740));
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_1740)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_520)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1743;
goto ret_;
}
f_lvalue_618(F->e_520, &F->lv_1739, &F->t_1740, &F->c_1741, &F->ro_1742);
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_1740)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_520)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P808)rt_nil_check(F->lv_1739))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_523(P815 s_522) {
  struct f_st_create_523fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_522 = s_522;
F->y_1744 = NULL;
F->y_1744 = f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->s_522)).name))->all));
F->pm_1745 = NULL;
F->a_1746 = NULL;
F->a_1746 = (*(P815)rt_nil_check(F->s_522)).b;
F->lv_1747 = NULL;
F->lt_1748 = NULL;
F->vt_1749 = NULL;
F->lc_1750 = NULL;
F->ro_1751 = RT_R_EUNDEF;
if (((F->y_1744 != NULL) && (rt_r_ichk((*(P825)rt_nil_check(F->y_1744)).kind) == (((rt_int)10LL))))) {
F->y_1744 = f_instantiate_594(F->y_1744, (*(P815)rt_nil_check(F->s_522)).e, (*(P815)rt_nil_check(F->s_522)).b, rt_r_ichk((*(P815)rt_nil_check(F->s_522)).line));
}
if (((F->y_1744 == NULL) || (rt_r_ichk((*(P825)rt_nil_check(F->y_1744)).kind) != (((rt_int)9LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_522)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->s_522)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1745 = (*(P825)rt_nil_check(F->y_1744)).params;
{
F->at_1752 = NULL;
F->ac_1753 = NULL;
F->aro_1754 = RT_R_EUNDEF;
F->act_1755 = NULL;
F->nf_1756 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_618((*(P815)rt_nil_check(F->s_522)).a, &F->lv_1747, &F->at_1752, &F->ac_1753, &F->aro_1754);
if ((rt_r_ichk((*(P821)rt_nil_check(F->at_1752)).kind) == (((rt_int)14LL)))) {
F->act_1755 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_521((*(P815)rt_nil_check(F->s_522)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P808)rt_nil_check((*(P825)rt_nil_check(F->y_1744)).cname))->all)), rt_str("fr *", 4)), F->nf_1756), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1756), rt_str(");", 2)); b_; }));
if ((rt_r_ichk((*(P825)rt_nil_check(F->y_1744)).level) > ((rt_int)0LL))) {
F->link_1757 = NULL;
F->link_1757 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1759 = ((rt_int)1LL), hi1760 = rt_sub(rt_r_ichk(g_cur_level_868), rt_r_ichk((*(P825)rt_nil_check(F->y_1744)).level));
for (rt_int it1761 = lo1759; it1761 <= hi1760; it1761++) {
F->i_1758 = it1761;
F->link_1757 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->link_1757))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1756, rt_str("->up = ", 7)), (((P808)rt_nil_check(F->link_1757))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_1746 != NULL) && (F->pm_1745 != NULL))) {
if ((rt_r_ichk((*(P827)rt_nil_check(F->pm_1745)).mode) == (((rt_int)1LL)))) {
F->v_1762 = rt_str_copy(f_gexpr_in_657(F->a_1746, (*(P827)rt_nil_check(F->pm_1745)).t, (*(P827)rt_nil_check(F->pm_1745)).c, &F->vt_1749));
f_check_type_223(F->vt_1749, (*(P827)rt_nil_check(F->pm_1745)).t, rt_r_ichk((*(P815)rt_nil_check(F->s_522)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1756, rt_str("->", 2)), (((P808)rt_nil_check((*(P827)rt_nil_check(F->pm_1745)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_364((*(P827)rt_nil_check(F->pm_1745)).t, &F->v_1762)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_618(F->a_1746, &F->lv_1747, &F->lt_1748, &F->lc_1750, &F->ro_1751);
f_check_type_223(F->lt_1748, (*(P827)rt_nil_check(F->pm_1745)).t, rt_r_ichk((*(P815)rt_nil_check(F->s_522)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1756, rt_str("->", 2)), (((P808)rt_nil_check((*(P827)rt_nil_check(F->pm_1745)).cfield))->all)), rt_str(" = &", 4)), (((P808)rt_nil_check(F->lv_1747))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_177((*(P827)rt_nil_check(F->pm_1745)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1756, rt_str("->", 2)), (((P808)rt_nil_check((*(P827)rt_nil_check(F->pm_1745)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_189(F->lt_1748, F->lc_1750)), rt_str("; ", 2)), F->nf_1756), rt_str("->", 2)), (((P808)rt_nil_check((*(P827)rt_nil_check(F->pm_1745)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_192(F->lt_1748, F->lc_1750)), rt_str(";", 1)); b_; }));
}
}
F->a_1746 = (*(P815)rt_nil_check(F->a_1746)).next;
F->pm_1745 = (*(P827)rt_nil_check(F->pm_1745)).next;
}
if (((F->a_1746 != NULL) || (F->pm_1745 != NULL))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->s_522)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P808)rt_nil_check((*(P815)rt_nil_check(F->s_522)).name))->all)); b_; }));
}
if ((F->act_1755 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P808)rt_nil_check(F->act_1755))->all)), rt_str(", &", 3)), (((P808)rt_nil_check((*(P825)rt_nil_check(F->y_1744)).cname))->all)), rt_str("decl, ", 6)), (((P808)rt_nil_check((*(P825)rt_nil_check(F->y_1744)).cname))->all)), rt_str(", ", 2)), F->nf_1756), rt_str("); }", 4)); b_; }));
} else {
f_user_create_533(F->s_522, F->y_1744, &(((P808)rt_nil_check(F->lv_1747))->all), F->at_1752, &F->nf_1756);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_527(rstr *name_524, P821 t_525, rstr *place_526) {
  struct f_hidden_var_527fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_524 = name_524;
F->t_525 = t_525;
F->place_526 = place_526;
F->y_1763 = NULL;
F->y_1763 = f_new_sym_172((((rt_int)1LL)), f_mk_3(&(*F->name_524)));
(*(P825)rt_nil_check(F->y_1763)).t = F->t_525;
(*(P825)rt_nil_check(F->y_1763)).level = ((rt_int)0LL);
(*(P825)rt_nil_check(F->y_1763)).access = f_mk_3(&(*F->place_526));
f_define_159(F->y_1763, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_533(P815 s_528, P825 y_529, rstr *uv_530, P821 ut_531, rstr *nf_532) {
  struct f_user_create_533fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_528 = s_528;
F->y_529 = y_529;
F->uv_530 = uv_530;
F->ut_531 = ut_531;
F->nf_532 = nf_532;
F->t_1764 = NULL;
F->saved_1765 = NULL;
F->saved_1765 = g_code_865;
F->hook_1766 = NULL;
F->hook_1766 = f_new_buffer_24();
F->un_1767 = NULL;
F->un_1767 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P815)rt_nil_check(F->s_528)).line));
F->hn_1768 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1769 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1770 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1771 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_168();
f_hidden_var_527(&F->uname_1770, F->ut_531, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->ut_531)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P815)rt_nil_check(F->un_1767)).name = f_mk_3(&F->uname_1770);
g_code_865 = F->hook_1766;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_779(f_call_node_556(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1767, rt_r_ichk((*(P815)rt_nil_check(F->s_528)).line)), 1, &F->t_1764)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_779(f_call_node_556(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1767, rt_r_ichk((*(P815)rt_nil_check(F->s_528)).line)), 1, &F->t_1764)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_779(f_call_node_556(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1767, rt_r_ichk((*(P815)rt_nil_check(F->s_528)).line)), 1, &F->t_1764)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_779(f_call_node_556(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1767, rt_r_ichk((*(P815)rt_nil_check(F->s_528)).line)), 1, &F->t_1764)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_865 = F->saved_1765;
f_put_27(g_out_protos_860, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1768), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1768), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (rt_r_echk(g_in_func_867)) {
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P808)rt_nil_check((*(P825)rt_nil_check(g_func_sym_879)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_862, F->hook_1766);
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1769), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1769, rt_str("->hook = ", 9)), F->hn_1768), rt_str("; ", 2)), F->aa_1769), rt_str("->ua = &", 8)), (*F->uv_530)), rt_str("; ", 2)), F->aa_1769), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_769(F->ut_531)), f_q_18()), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_867)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1769, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1769), rt_str(", &", 3)), (((P808)rt_nil_check((*(P825)rt_nil_check(F->y_529)).cname))->all)), rt_str("decl, ", 6)), (((P808)rt_nil_check((*(P825)rt_nil_check(F->y_529)).cname))->all)), rt_str(", ", 2)), (*F->nf_532)), rt_str(");", 2)); b_; }));
f_hidden_var_527(&F->aname_1771, g_ty_act_905, &F->aa_1769);
{
F->start_1772 = NULL;
F->start_1772 = f_call_node_556(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P815)rt_nil_check(F->s_528)).a, rt_r_ichk((*(P815)rt_nil_check(F->s_528)).line));
F->an_1773 = NULL;
F->an_1773 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P815)rt_nil_check(F->s_528)).line));
(*(P815)rt_nil_check(F->an_1773)).name = f_mk_3(&F->aname_1771);
(*(P815)rt_nil_check((*(P815)rt_nil_check(F->start_1772)).b)).next = F->an_1773;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_779(F->start_1772, 1, &F->t_1764), rt_str(";", 1)); b_; }));
}
f_close_scope_169();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_538(P815 inv_534, rstr *arr_535, rt_int i_536, int mixed_537) {
  struct f_wait_alt_538fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_534 = inv_534;
F->arr_535 = arr_535;
F->i_536 = i_536;
F->mixed_537 = mixed_537;
F->lv_1774 = NULL;
F->t_1775 = NULL;
F->vt_1776 = NULL;
F->c_1777 = NULL;
F->ro_1778 = RT_R_EUNDEF;
F->fn_1779 = NULL;
F->args_1780 = NULL;
F->slot_1781 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_535), rt_str("[", 1)), f_itos_7(F->i_536)), rt_str("]", 1)));
if (((rt_r_ichk((*(P815)rt_nil_check(F->inv_534)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->inv_534)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->inv_534)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1779 = (*(P815)rt_nil_check(F->inv_534)).a;
F->args_1780 = (*(P815)rt_nil_check(F->inv_534)).b;
if ((rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_1779)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_1779)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_618(F->args_1780, &F->lv_1774, &F->t_1775, &F->c_1777, &F->ro_1778);
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_1775)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->inv_534)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_1779)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_1782 = NULL;
F->dt_1783 = NULL;
f_lvalue_618((*(P815)rt_nil_check(F->args_1780)).next, &F->dv_1782, &F->dt_1783, &F->c_1777, &F->ro_1778);
f_check_type_223(F->dt_1783, (*(P821)rt_nil_check(F->t_1775)).elem, rt_r_ichk((*(P815)rt_nil_check(F->inv_534)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1781, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P808)rt_nil_check(F->lv_1774))->all)), rt_str(", &", 3)), (((P808)rt_nil_check(F->dv_1782))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1784 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1785 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->args_1780)).next, (*(P821)rt_nil_check(F->t_1775)).elem, &F->vt_1776));
f_check_type_223(F->vt_1776, (*(P821)rt_nil_check(F->t_1775)).elem, rt_r_ichk((*(P815)rt_nil_check(F->inv_534)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_225((*(P821)rt_nil_check(F->t_1775)).elem), rt_str(" ", 1)), F->tmp_1784), rt_str(" = ", 3)), F->v_1785), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1781, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P808)rt_nil_check(F->lv_1774))->all)), rt_str(", &", 3)), F->tmp_1784), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_1779)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_1779)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_1786 = rt_str_copy(f_gexpr_649(F->args_1780, g_ty_int_895, &F->vt_1776));
if ((rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_1779)).name))->all), rt_str("DELAY", 5)) && F->mixed_537)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1781, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1786), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_1779)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1781, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1786), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1781, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1786), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_1779)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1781, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_521(F->args_1780)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->inv_534)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_1779)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_540(P815 inv_539) {
  struct f_builtin_wait_540fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_539 = inv_539;
F->lv_1787 = NULL;
F->t_1788 = NULL;
F->c_1789 = NULL;
F->ro_1790 = RT_R_EUNDEF;
F->saved_1791 = NULL;
F->saved_1791 = g_code_865;
F->ok_1792 = RT_R_EUNDEF;
F->ok_1792 = 0;
if (((rt_r_ichk((*(P815)rt_nil_check(F->inv_539)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->inv_539)).a)).kind) != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->inv_539)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->inv_539)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->inv_539)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->inv_539)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->inv_539)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_893 = rt_add(rt_r_ichk(g_trial_893), ((rt_int)1LL));
g_code_865 = f_new_buffer_24();
{ rt_frame xf1793;
if (RT_TRY(xf1793)) {
f_lvalue_618((*(P815)rt_nil_check(F->inv_539)).b, &F->lv_1787, &F->t_1788, &F->c_1789, &F->ro_1790);
F->ok_1792 = (rt_r_ichk((*(P821)rt_nil_check(F->t_1788)).kind) == (((rt_int)12LL)));
RT_POP(xf1793);
} else {
RT_POP(xf1793);
int x1794 = rt_xcur;
if (0 || x1794 == ex_compile_error_1) {
F->ok_1792 = 0;
} else {
rt_raise(x1794);
}
}
}
g_trial_893 = rt_sub(rt_r_ichk(g_trial_893), ((rt_int)1LL));
g_code_865 = F->saved_1791;
F->result_ = rt_r_echk(F->ok_1792);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_545(P815 inv_541, rstr *op_542, rstr *q_543, int is_stmt_544) {
  struct f_wait_op_545fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_541 = inv_541;
F->op_542 = op_542;
F->q_543 = q_543;
F->is_stmt_544 = is_stmt_544;
F->x_1795 = NULL;
F->x_1795 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P815)rt_nil_check(F->inv_541)).line));
F->f_1796 = NULL;
F->f_1796 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P815)rt_nil_check(F->inv_541)).line));
F->qn_1797 = NULL;
F->qn_1797 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P815)rt_nil_check(F->inv_541)).line));
F->t_1798 = NULL;
(*(P815)rt_nil_check(F->f_1796)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->inv_541)).a)).name))->all), rt_str("_", 1)), (*F->op_542)); b_; }));
(*(P815)rt_nil_check(F->qn_1797)).name = f_mk_3(&(*F->q_543));
(*(P815)rt_nil_check(F->qn_1797)).next = (*(P815)rt_nil_check(F->inv_541)).b;
(*(P815)rt_nil_check(F->x_1795)).a = F->f_1796;
(*(P815)rt_nil_check(F->x_1795)).b = F->qn_1797;
{
F->r_1799 = rt_str_copy(f_gcall_779(F->x_1795, F->is_stmt_544, &F->t_1798));
if ((!F->is_stmt_544)) {
f_check_type_223(F->t_1798, g_ty_bool_896, rt_r_ichk((*(P815)rt_nil_check(F->inv_541)).line));
}
F->result_ = F->r_1799;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_550(P815 s_546, rstr *arr_547, rstr *w_548, rt_int n_549) {
  struct f_user_wait_550fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_546 = s_546;
F->arr_547 = arr_547;
F->w_548 = w_548;
F->n_549 = n_549;
F->a_1800 = NULL;
F->a_1800 = (*(P815)rt_nil_check(F->s_546)).a;
F->i_1801 = RT_R_IUNDEF;
F->i_1801 = ((rt_int)0LL);
F->tests_1802 = NULL;
F->tests_1802 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1803 = NULL;
F->revokes_1803 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_168();
while ((F->a_1800 != NULL)) {
F->inv_1804 = NULL;
F->inv_1804 = (*(P815)rt_nil_check(F->a_1800)).a;
while ((F->inv_1804 != NULL)) {
if (f_builtin_wait_540(F->inv_1804)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_538(F->inv_1804, &(*F->arr_547), rt_r_ichk(F->i_1801), 1); b_; }));
} else {
F->st_1805 = NULL;
F->st_1805 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P815)rt_nil_check(F->inv_1804)).line));
F->c_1806 = NULL;
F->qt_1807 = NULL;
F->qname_1808 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1809 = NULL;
F->y_1809 = f_new_sym_172((((rt_int)1LL)), f_mk_3(&F->qname_1808));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_547), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->i_1801))), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P815)rt_nil_check(F->st_1805)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->inv_1804)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_1807 = f_resolve_subtype_256(F->st_1805, &F->c_1806);
{
F->access_1810 = rt_str_copy(f_storage_450(&F->qname_1808, F->qt_1807));
f_init_storage_310(&F->access_1810, F->qt_1807, F->c_1806);
(*(P825)rt_nil_check(F->y_1809)).t = F->qt_1807;
(*(P825)rt_nil_check(F->y_1809)).c = F->c_1806;
f_bind_453(F->y_1809, &F->access_1810);
f_define_159(F->y_1809, rt_r_ichk((*(P815)rt_nil_check(F->inv_1804)).line));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_545(F->inv_1804, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1808, 1), rt_str(";", 1)); b_; }));
F->tests_1802 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->tests_1802))->all), rt_str("if (", 4)), f_wait_op_545(F->inv_1804, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1808, 0)), rt_str(") { ", 4)), f_wait_op_545(F->inv_1804, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1808, 1)), rt_str("; ", 2)), (*F->w_548)), rt_str(" = ", 3)), f_itos_7(rt_r_ichk(F->i_1801))), rt_str("; break; } ", 11)); b_; }));
F->revokes_1803 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->revokes_1803))->all), f_wait_op_545(F->inv_1804, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1808, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1801 = rt_add(rt_r_ichk(F->i_1801), ((rt_int)1LL));
F->inv_1804 = (*(P815)rt_nil_check(F->inv_1804)).next;
}
F->a_1800 = (*(P815)rt_nil_check(F->a_1800)).next;
}
f_close_scope_169();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_548)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P808)rt_nil_check(F->tests_1802))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_548), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_549)), rt_str(", ", 2)), (*F->arr_547)), rt_str("); if (", 7)), (*F->w_548)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_549)), rt_str(", ", 2)), (*F->arr_547)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_548)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_548)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P808)rt_nil_check(F->revokes_1803))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_552(P815 s_551) {
  struct f_st_wait_552fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_551 = s_551;
F->a_1811 = NULL;
F->a_1811 = (*(P815)rt_nil_check(F->s_551)).a;
F->n_1812 = RT_R_IUNDEF;
F->n_1812 = ((rt_int)0LL);
F->first_1813 = RT_R_EUNDEF;
F->first_1813 = 1;
F->inits_1814 = NULL;
F->inits_1814 = f_new_buffer_24();
F->user_1815 = RT_R_EUNDEF;
F->user_1815 = 0;
F->arr_1816 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1817 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1811 != NULL)) {
F->inv_1818 = NULL;
F->inv_1818 = (*(P815)rt_nil_check(F->a_1811)).a;
F->n_1812 = rt_add(rt_r_ichk(F->n_1812), f_list_len_67((*(P815)rt_nil_check(F->a_1811)).a));
while ((F->inv_1818 != NULL)) {
if ((!f_builtin_wait_540(F->inv_1818))) {
F->user_1815 = 1;
}
F->inv_1818 = (*(P815)rt_nil_check(F->inv_1818)).next;
}
F->a_1811 = (*(P815)rt_nil_check(F->a_1811)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1816), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->n_1812))), rt_str("];", 2)); b_; }));
if (rt_r_echk(F->user_1815)) {
f_user_wait_550(F->s_551, &F->arr_1816, &F->w_1817, rt_r_ichk(F->n_1812));
} else {
F->a_1811 = (*(P815)rt_nil_check(F->s_551)).a;
F->n_1812 = ((rt_int)0LL);
while ((F->a_1811 != NULL)) {
F->inv_1819 = NULL;
F->inv_1819 = (*(P815)rt_nil_check(F->a_1811)).a;
while ((F->inv_1819 != NULL)) {
f_put_27(F->inits_1814, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_538(F->inv_1819, &F->arr_1816, rt_r_ichk(F->n_1812), 0); b_; }));
F->n_1812 = rt_add(rt_r_ichk(F->n_1812), ((rt_int)1LL));
F->inv_1819 = (*(P815)rt_nil_check(F->inv_1819)).next;
}
F->a_1811 = (*(P815)rt_nil_check(F->a_1811)).next;
}
f_splice_34(g_code_865, F->inits_1814);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1817), rt_str(" = rt_wait(", 11)), f_itos_7(rt_r_ichk(F->n_1812))), rt_str(", ", 2)), F->arr_1816), rt_str(");", 2)); b_; }));
}
F->a_1811 = (*(P815)rt_nil_check(F->s_551)).a;
F->n_1812 = ((rt_int)0LL);
while ((F->a_1811 != NULL)) {
F->conds_1820 = NULL;
F->conds_1820 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1822 = ((rt_int)1LL), hi1823 = f_list_len_67((*(P815)rt_nil_check(F->a_1811)).a);
for (rt_int it1824 = lo1822; it1824 <= hi1823; it1824++) {
F->i_1821 = it1824;
F->conds_1820 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->conds_1820))->all), rt_str(" || ", 4)), F->w_1817), rt_str(" == ", 4)), f_itos_7(rt_r_ichk(F->n_1812))); b_; }));
F->n_1812 = rt_add(rt_r_ichk(F->n_1812), ((rt_int)1LL));
}
}
if (rt_r_echk(F->first_1813)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P808)rt_nil_check(F->conds_1820))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P808)rt_nil_check(F->conds_1820))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1813 = 0;
f_gen_body_487((*(P815)rt_nil_check(F->a_1811)).b);
F->a_1811 = (*(P815)rt_nil_check(F->a_1811)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P815 f_call_node_556(rstr *name_553, P815 arg_554, rt_int line_555) {
  struct f_call_node_556fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_553 = name_553;
F->arg_554 = arg_554;
F->line_555 = line_555;
F->x_1825 = NULL;
F->x_1825 = f_nn_61((((rt_int)10LL)), F->line_555);
F->f_1826 = NULL;
F->f_1826 = f_nn_61((((rt_int)7LL)), F->line_555);
(*(P815)rt_nil_check(F->f_1826)).name = f_mk_3(&(*F->name_553));
(*(P815)rt_nil_check(F->x_1825)).a = F->f_1826;
(*(P815)rt_nil_check(F->x_1825)).b = f_copy_node_670(F->arg_554);
(*(P815)rt_nil_check((*(P815)rt_nil_check(F->x_1825)).b)).next = NULL;
F->result_ = F->x_1825;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_558(P815 s_557) {
  struct f_user_region_558fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_557 = s_557;
F->t_1827 = NULL;
F->f_1828 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1829 = rt_str_copy(f_gcall_779(f_call_node_556(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P815)rt_nil_check(F->s_557)).a, rt_r_ichk((*(P815)rt_nil_check(F->s_557)).line)), 1, &F->t_1827));
F->unlock_1830 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_779(f_call_node_556(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P815)rt_nil_check(F->s_557)).a, rt_r_ichk((*(P815)rt_nil_check(F->s_557)).line)), 1, &F->t_1827)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1829), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1828), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1828), rt_str(")) {", 4)); b_; }));
f_push_cleanup_491(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1828), rt_str("); ", 3)), F->unlock_1830); b_; }));
f_gen_body_487((*(P815)rt_nil_check(F->s_557)).b);
f_pop_cleanup_492();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1828), rt_str("); ", 3)), F->unlock_1830); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1828), rt_str("); ", 3)), F->unlock_1830), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_560(P815 s_559) {
  struct f_st_region_560fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_559 = s_559;
F->lv_1831 = NULL;
F->t_1832 = NULL;
F->c_1833 = NULL;
F->ro_1834 = RT_R_EUNDEF;
F->lk_1835 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1836 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_618((*(P815)rt_nil_check(F->s_559)).a, &F->lv_1831, &F->t_1832, &F->c_1833, &F->ro_1834);
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_1832)).kind) != (((rt_int)13LL)))) {
f_user_region_558(F->s_559);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1835), rt_str(" = &", 4)), (((P808)rt_nil_check(F->lv_1831))->all)), rt_str("; rt_region_enter(", 18)), F->lk_1835), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1836), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1836), rt_str(")) {", 4)); b_; }));
f_push_cleanup_491(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1836), rt_str("); rt_region_leave(", 19)), F->lk_1835), rt_str(");", 2)); b_; }));
f_gen_body_487((*(P815)rt_nil_check(F->s_559)).b);
f_pop_cleanup_492();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1836), rt_str("); rt_region_leave(", 19)), F->lk_1835), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1836), rt_str("); rt_region_leave(", 19)), F->lk_1835), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P815 f_gparam_563(P815 g_561, rstr *name_562) {
  struct f_gparam_563fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_561 = g_561;
F->name_562 = name_562;
F->p_1837 = NULL;
F->p_1837 = (*(P815)rt_nil_check(F->g_561)).a;
while ((F->p_1837 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1837)).name))->all), (*F->name_562))) {
F->result_ = F->p_1837;
goto ret_;
}
F->p_1837 = (*(P815)rt_nil_check(F->p_1837)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P825 f_bind_sym_565(P815 p_564) {
  struct f_bind_sym_565fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_564 = p_564;
F->y_1838 = NULL;
if ((rt_r_ichk((*(P815)rt_nil_check(F->p_564)).ival) <= ((rt_int)2LL))) {
F->y_1838 = f_new_sym_172((((rt_int)5LL)), (*(P815)rt_nil_check(F->p_564)).name);
} else {
F->y_1838 = f_new_sym_172((((rt_int)2LL)), (*(P815)rt_nil_check(F->p_564)).name);
}
F->result_ = F->y_1838;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_568(P825 a_566, P825 b_567) {
  struct f_same_binds_568fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_566 = a_566;
F->b_567 = b_567;
F->x_1839 = NULL;
F->x_1839 = F->a_566;
F->y_1840 = NULL;
F->y_1840 = F->b_567;
while (((F->x_1839 != NULL) && (F->y_1840 != NULL))) {
if (((!rt_str_eq((((P808)rt_nil_check((*(P825)rt_nil_check(F->x_1839)).name))->all), (((P808)rt_nil_check((*(P825)rt_nil_check(F->y_1840)).name))->all))) || (!f_same_binding_571(F->x_1839, F->y_1840)))) {
F->result_ = 0;
goto ret_;
}
F->x_1839 = (*(P825)rt_nil_check(F->x_1839)).mnext;
F->y_1840 = (*(P825)rt_nil_check(F->y_1840)).mnext;
}
F->result_ = ((F->x_1839 == NULL) && (F->y_1840 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_571(P825 a_569, P825 b_570) {
  struct f_same_binding_571fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_569 = a_569;
F->b_570 = b_570;
if ((rt_r_ichk((*(P825)rt_nil_check(F->a_569)).kind) == (((rt_int)5LL)))) {
F->result_ = ((rt_r_ichk((*(P825)rt_nil_check(F->b_570)).kind) == (((rt_int)5LL))) && f_same_212((*(P825)rt_nil_check(F->a_569)).t, (*(P825)rt_nil_check(F->b_570)).t));
goto ret_;
}
if (((rt_r_ichk((*(P825)rt_nil_check(F->a_569)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P825)rt_nil_check(F->a_569)).hasmv))) {
F->result_ = (rt_r_echk((*(P825)rt_nil_check(F->b_570)).hasmv) && (rt_r_ichk((*(P825)rt_nil_check(F->a_569)).mvalue) == rt_r_ichk((*(P825)rt_nil_check(F->b_570)).mvalue)));
goto ret_;
}
F->result_ = ((((*(P825)rt_nil_check(F->a_569)).cname != NULL) && ((*(P825)rt_nil_check(F->b_570)).cname != NULL)) && rt_str_eq((((P808)rt_nil_check((*(P825)rt_nil_check(F->a_569)).cname))->all), (((P808)rt_nil_check((*(P825)rt_nil_check(F->b_570)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P825 f_tt_binds_576(P815 gd_572, P815 formals_573, P815 actuals_574, rt_int line_575) {
  struct f_tt_binds_576fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_572 = gd_572;
F->formals_573 = formals_573;
F->actuals_574 = actuals_574;
F->line_575 = line_575;
F->f_1841 = NULL;
F->f_1841 = F->formals_573;
F->a_1842 = NULL;
F->a_1842 = F->actuals_574;
F->binds_1843 = NULL;
F->c_1844 = NULL;
F->at_1845 = NULL;
while (((F->f_1841 != NULL) && (F->a_1842 != NULL))) {
F->p_1846 = NULL;
F->p_1846 = f_gparam_563(F->gd_572, &(((P808)rt_nil_check((*(P815)rt_nil_check(F->f_1841)).name))->all));
F->b_1847 = NULL;
if ((F->p_1846 == NULL)) {
f_fail_23(F->line_575, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->f_1841)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1847 = f_bind_sym_565(F->p_1846);
if ((rt_r_ichk((*(P815)rt_nil_check(F->p_1846)).ival) <= ((rt_int)2LL))) {
if ((rt_r_ichk((*(P815)rt_nil_check(F->a_1842)).kind) >= (((rt_int)70LL)))) {
(*(P825)rt_nil_check(F->b_1847)).t = f_resolve_subtype_256(F->a_1842, &F->c_1844);
} else {
F->st_1848 = NULL;
F->st_1848 = f_nn_61((((rt_int)80LL)), F->line_575);
(*(P815)rt_nil_check(F->st_1848)).name = (*(P815)rt_nil_check(F->a_1842)).name;
(*(P825)rt_nil_check(F->b_1847)).t = f_resolve_subtype_256(F->st_1848, &F->c_1844);
}
(*(P825)rt_nil_check(F->b_1847)).c = F->c_1844;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->p_1846)).ival) <= ((rt_int)5LL))) {
if (((rt_r_ichk((*(P815)rt_nil_check(F->a_1842)).kind) != (((rt_int)7LL))) || (f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->a_1842)).name))->all)) == NULL))) {
f_fail_23(F->line_575, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1846)).name))->all)); b_; }));
}
F->b_1847 = f_copy_sym_388(f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->a_1842)).name))->all)));
(*(P825)rt_nil_check(F->b_1847)).name = (*(P815)rt_nil_check(F->p_1846)).name;
} else {
F->ok_1849 = RT_R_EUNDEF;
(*(P825)rt_nil_check(F->b_1847)).t = f_resolve_subtype_256((*(P815)rt_nil_check(F->p_1846)).a, &F->c_1844);
(*(P825)rt_nil_check(F->b_1847)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_649(F->a_1842, (*(P825)rt_nil_check(F->b_1847)).t, &F->at_1845); b_; }));
(*(P825)rt_nil_check(F->b_1847)).mvalue = f_manifest_333(F->a_1842, &F->ok_1849);
(*(P825)rt_nil_check(F->b_1847)).hasmv = rt_r_echk(F->ok_1849);
}
(*(P825)rt_nil_check(F->b_1847)).mnext = F->binds_1843;
F->binds_1843 = F->b_1847;
F->f_1841 = (*(P815)rt_nil_check(F->f_1841)).next;
F->a_1842 = (*(P815)rt_nil_check(F->a_1842)).next;
}
F->result_ = F->binds_1843;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_578(P815 st_577) {
  struct f_generic_use_578fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_577 = st_577;
if ((rt_r_ichk((*(P815)rt_nil_check(F->st_577)).kind) == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P825)rt_nil_check(f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P815)rt_nil_check(F->st_577)).kind) == (((rt_int)80LL))) && ((*(P815)rt_nil_check(F->st_577)).a != NULL)) && (f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->st_577)).name))->all)) != NULL)) && ((*(P825)rt_nil_check(f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->st_577)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P825 f_infer_from_583(P815 gd_579, P815 pat_580, P821 t_581, P825 known_582) {
  struct f_infer_from_583fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_579 = gd_579;
F->pat_580 = pat_580;
F->t_581 = t_581;
F->known_582 = known_582;
F->binds_1850 = NULL;
F->binds_1850 = F->known_582;
F->e_1851 = NULL;
F->e_1851 = (*(P815)rt_nil_check(F->pat_580)).a;
F->tp_1852 = NULL;
if (((F->t_581 == NULL) || ((*(P821)rt_nil_check(F->t_581)).gen == NULL))) {
F->result_ = F->binds_1850;
goto ret_;
}
F->tp_1852 = (*(P815)rt_nil_check((*(P825)rt_nil_check((*(P821)rt_nil_check(F->t_581)).gen)).decl)).a;
if ((rt_r_ichk((*(P815)rt_nil_check(F->pat_580)).kind) == (((rt_int)78LL)))) {
F->e_1851 = f_copy_node_670((*(P815)rt_nil_check(F->pat_580)).a);
(*(P815)rt_nil_check(F->e_1851)).next = NULL;
}
while (((F->e_1851 != NULL) && (F->tp_1852 != NULL))) {
F->nm_1853 = NULL;
if (((rt_r_ichk((*(P815)rt_nil_check(F->e_1851)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P815)rt_nil_check(F->e_1851)).kind) == (((rt_int)80LL))))) {
F->nm_1853 = (*(P815)rt_nil_check(F->e_1851)).name;
}
if ((((F->nm_1853 != NULL) && (f_gparam_563(F->gd_579, &(((P808)rt_nil_check(F->nm_1853))->all)) != NULL)) && ((*(P815)rt_nil_check(f_gparam_563(F->gd_579, &(((P808)rt_nil_check(F->nm_1853))->all)))).ival <= ((rt_int)2LL)))) {
F->q_1854 = NULL;
F->q_1854 = F->binds_1850;
F->have_1855 = RT_R_EUNDEF;
F->have_1855 = 0;
while ((F->q_1854 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P825)rt_nil_check(F->q_1854)).name))->all), (((P808)rt_nil_check(F->nm_1853))->all))) {
F->have_1855 = 1;
}
F->q_1854 = (*(P825)rt_nil_check(F->q_1854)).mnext;
}
if ((!rt_r_echk(F->have_1855))) {
F->g_1856 = NULL;
F->g_1856 = (*(P821)rt_nil_check(F->t_581)).gbinds;
while ((F->g_1856 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P825)rt_nil_check(F->g_1856)).name))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->tp_1852)).name))->all))) {
F->b_1857 = NULL;
F->b_1857 = f_bind_sym_565(f_gparam_563(F->gd_579, &(((P808)rt_nil_check(F->nm_1853))->all)));
(*(P825)rt_nil_check(F->b_1857)).t = (*(P825)rt_nil_check(F->g_1856)).t;
(*(P825)rt_nil_check(F->b_1857)).c = (*(P825)rt_nil_check(F->g_1856)).c;
(*(P825)rt_nil_check(F->b_1857)).mnext = F->binds_1850;
F->binds_1850 = F->b_1857;
}
F->g_1856 = (*(P825)rt_nil_check(F->g_1856)).mnext;
}
}
}
F->e_1851 = (*(P815)rt_nil_check(F->e_1851)).next;
F->tp_1852 = (*(P815)rt_nil_check(F->tp_1852)).next;
}
F->result_ = F->binds_1850;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P821 f_instantiate_type_589(P825 g_584, P815 tt_585, P815 args_586, P817 *c_587, rt_int line_588) {
  struct f_instantiate_type_589fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_584 = g_584;
F->tt_585 = tt_585;
F->args_586 = args_586;
F->c_587 = c_587;
F->c_587v = *F->c_587;
F->line_588 = line_588;
F->gd_1858 = NULL;
F->gd_1858 = (*(P825)rt_nil_check(F->g_584)).decl;
F->pat_1859 = NULL;
F->pat_1859 = (*(P815)rt_nil_check(F->gd_1858)).b;
F->binds_1860 = NULL;
F->binds_1860 = f_tt_binds_576(F->gd_1858, (*(P815)rt_nil_check(F->pat_1859)).e, F->tt_585, F->line_588);
F->inst_1861 = NULL;
F->inst_1861 = g_all_insts_853;
F->t_1862 = NULL;
F->saved_caps_1863 = NULL;
F->saved_caps_1863 = g_caps_870;
F->saved_env_1864 = NULL;
F->saved_env_1864 = g_genv_852;
F->saved_gdepth_1865 = RT_R_IUNDEF;
F->saved_gdepth_1865 = rt_r_ichk(g_gdepth_884);
F->c_587v = f_new_cons_175();
(*(P817)rt_nil_check(F->c_587v)).args = F->args_586;
while ((F->inst_1861 != NULL)) {
if ((((*(P825)rt_nil_check(F->inst_1861)).decl == F->pat_1859) && f_same_binds_568((*(P825)rt_nil_check(F->inst_1861)).members, F->binds_1860))) {
F->result_ = (*(P825)rt_nil_check(F->inst_1861)).t;
goto ret_;
}
F->inst_1861 = (*(P825)rt_nil_check(F->inst_1861)).insts;
}
f_open_scope_168();
{
F->b_1866 = NULL;
F->b_1866 = F->binds_1860;
while ((F->b_1866 != NULL)) {
f_define_159(F->b_1866, F->line_588);
F->b_1866 = (*(P825)rt_nil_check(F->b_1866)).mnext;
}
}
g_caps_870 = NULL;
g_genv_852 = (*(P825)rt_nil_check(F->g_584)).env;
g_gdepth_884 = rt_r_ichk(g_depth_854);
{
F->y_1867 = NULL;
F->y_1867 = f_new_sym_172((((rt_int)5LL)), (*(P815)rt_nil_check(F->pat_1859)).name);
F->yc_1868 = NULL;
(*(P825)rt_nil_check(F->y_1867)).decl = F->pat_1859;
if ((rt_r_ichk((*(P815)rt_nil_check(F->pat_1859)).kind) == (((rt_int)44LL)))) {
F->t_1862 = f_new_typ_174((((rt_int)8LL)));
(*(P821)rt_nil_check(F->t_1862)).name = (*(P815)rt_nil_check(F->pat_1859)).name;
(*(P821)rt_nil_check(F->t_1862)).decl = F->pat_1859;
(*(P825)rt_nil_check(F->y_1867)).t = F->t_1862;
f_define_159(F->y_1867, F->line_588);
f_finish_ptr_409(F->t_1862);
} else {
f_define_159(F->y_1867, F->line_588);
F->t_1862 = f_new_type_306(F->y_1867, f_nn_61((((rt_int)80LL)), F->line_588), &F->yc_1868);
}
}
g_caps_870 = F->saved_caps_1863;
g_genv_852 = F->saved_env_1864;
g_gdepth_884 = rt_r_ichk(F->saved_gdepth_1865);
(*(P821)rt_nil_check(F->t_1862)).gen = F->g_584;
(*(P821)rt_nil_check(F->t_1862)).gbinds = F->binds_1860;
f_close_scope_169();
{ R826 *cell1869 = rt_alloc(sizeof(R826));
(*cell1869).name = NULL;
(*cell1869).t = NULL;
(*cell1869).c = NULL;
(*cell1869).access = NULL;
(*cell1869).cname = NULL;
(*cell1869).st = NULL;
(*cell1869).decl = NULL;
(*cell1869).params = NULL;
(*cell1869).result = NULL;
(*cell1869).members = NULL;
(*cell1869).mnext = NULL;
(*cell1869).binds = NULL;
(*cell1869).insts = NULL;
(*cell1869).env = NULL;
(*cell1869).chain = NULL;
(*cell1869).stack = NULL;
(*cell1869).owner = NULL;
(*cell1869).gctx = NULL;
(*cell1869).mv = NULL;
(*cell1869).reqs = NULL;
(*cell1869).home = NULL;
(*cell1869).capn = NULL;
F->inst_1861 = cell1869;
}
(*(P825)rt_nil_check(F->inst_1861)).kind = (((rt_int)5LL));
(*(P825)rt_nil_check(F->inst_1861)).name = (*(P825)rt_nil_check(F->g_584)).name;
(*(P825)rt_nil_check(F->inst_1861)).decl = F->pat_1859;
(*(P825)rt_nil_check(F->inst_1861)).t = F->t_1862;
(*(P825)rt_nil_check(F->inst_1861)).members = F->binds_1860;
(*(P825)rt_nil_check(F->inst_1861)).insts = g_all_insts_853;
g_all_insts_853 = F->inst_1861;
F->result_ = F->t_1862;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_587) = F->c_587v;
  RT_FPOP();
  return F->result_;
}

static P825 f_instantiate_594(P825 g_590, P815 tt_591, P815 args_592, rt_int line_593) {
  struct f_instantiate_594fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_590 = g_590;
F->tt_591 = tt_591;
F->args_592 = args_592;
F->line_593 = line_593;
F->gd_1870 = NULL;
F->gd_1870 = (*(P825)rt_nil_check(F->g_590)).decl;
F->pat_1871 = NULL;
F->pat_1871 = (*(P815)rt_nil_check(F->gd_1870)).b;
F->binds_1872 = NULL;
F->f_1873 = NULL;
F->f_1873 = (*(P815)rt_nil_check(F->pat_1871)).e;
F->a_1874 = NULL;
F->a_1874 = F->tt_591;
F->fp_1875 = NULL;
F->fp_1875 = (*(P815)rt_nil_check(F->pat_1871)).a;
F->inst_1876 = NULL;
F->at_1877 = NULL;
F->c_1878 = NULL;
F->saved_fctx_1879 = NULL;
F->saved_fctx_1879 = g_fctx_869;
F->saved_in_1880 = RT_R_EUNDEF;
F->saved_in_1880 = rt_r_echk(g_in_func_867);
F->saved_level_1881 = RT_R_IUNDEF;
F->saved_level_1881 = rt_r_ichk(g_cur_level_868);
F->saved_sym_1882 = NULL;
F->saved_sym_1882 = g_func_sym_879;
F->saved_code_1883 = NULL;
F->saved_code_1883 = g_code_865;
F->saved_env_1884 = NULL;
F->saved_env_1884 = g_genv_852;
F->saved_gdepth_1885 = RT_R_IUNDEF;
F->saved_gdepth_1885 = rt_r_ichk(g_gdepth_884);
F->binds_1872 = f_tt_binds_576(F->gd_1870, F->f_1873, F->a_1874, F->line_593);
F->a_1874 = F->args_592;
while (((F->fp_1875 != NULL) && (F->a_1874 != NULL))) {
if (f_generic_use_578((*(P815)rt_nil_check(F->fp_1875)).a)) {
F->v_1886 = rt_str_copy(f_gexpr_649(F->a_1874, NULL, &F->at_1877));
F->binds_1872 = f_infer_from_583(F->gd_1870, (*(P815)rt_nil_check(F->fp_1875)).a, F->at_1877, F->binds_1872);
} else if ((((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->fp_1875)).a)).kind) == (((rt_int)80LL))) && (f_gparam_563(F->gd_1870, &(((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->fp_1875)).a)).name))->all)) != NULL)) && ((*(P815)rt_nil_check(f_gparam_563(F->gd_1870, &(((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->fp_1875)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_1887 = RT_R_EUNDEF;
F->known_1887 = 0;
F->q_1888 = NULL;
F->q_1888 = F->binds_1872;
while ((F->q_1888 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P825)rt_nil_check(F->q_1888)).name))->all), (((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->fp_1875)).a)).name))->all))) {
F->known_1887 = 1;
}
F->q_1888 = (*(P825)rt_nil_check(F->q_1888)).mnext;
}
if ((!rt_r_echk(F->known_1887))) {
F->b_1889 = NULL;
F->b_1889 = f_bind_sym_565(f_gparam_563(F->gd_1870, &(((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->fp_1875)).a)).name))->all)));
F->v_1890 = rt_str_copy(f_gexpr_649(F->a_1874, NULL, &F->at_1877));
(*(P825)rt_nil_check(F->b_1889)).t = F->at_1877;
(*(P825)rt_nil_check(F->b_1889)).c = g_no_cons_907;
(*(P825)rt_nil_check(F->b_1889)).mnext = F->binds_1872;
F->binds_1872 = F->b_1889;
}
}
F->fp_1875 = (*(P815)rt_nil_check(F->fp_1875)).next;
F->a_1874 = (*(P815)rt_nil_check(F->a_1874)).next;
}
F->inst_1876 = g_all_insts_853;
while ((F->inst_1876 != NULL)) {
if ((((*(P825)rt_nil_check(F->inst_1876)).decl == F->pat_1871) && f_same_binds_568((*(P825)rt_nil_check(F->inst_1876)).members, F->binds_1872))) {
F->result_ = F->inst_1876;
goto ret_;
}
F->inst_1876 = (*(P825)rt_nil_check(F->inst_1876)).insts;
}
g_fctx_869 = (*(P825)rt_nil_check(F->g_590)).gctx;
g_in_func_867 = (rt_r_ichk((*(P825)rt_nil_check(F->g_590)).level) > ((rt_int)0LL));
g_cur_level_868 = rt_r_ichk((*(P825)rt_nil_check(F->g_590)).level);
g_func_sym_879 = (*(P825)rt_nil_check(F->g_590)).owner;
g_code_865 = f_new_buffer_24();
f_open_scope_168();
g_gdepth_884 = rt_r_ichk(g_depth_854);
{
F->b_1891 = NULL;
F->b_1891 = F->binds_1872;
while ((F->b_1891 != NULL)) {
f_define_159(F->b_1891, F->line_593);
F->b_1891 = (*(P825)rt_nil_check(F->b_1891)).mnext;
}
}
g_genv_852 = (*(P825)rt_nil_check(F->g_590)).env;
F->inst_1876 = f_build_subprogram_436(F->pat_1871);
(*(P825)rt_nil_check(F->inst_1876)).members = F->binds_1872;
(*(P825)rt_nil_check(F->inst_1876)).insts = g_all_insts_853;
g_all_insts_853 = F->inst_1876;
f_define_159(F->inst_1876, F->line_593);
f_gen_subprogram_466(F->pat_1871, F->inst_1876);
f_close_scope_169();
g_fctx_869 = F->saved_fctx_1879;
g_in_func_867 = rt_r_echk(F->saved_in_1880);
g_cur_level_868 = rt_r_ichk(F->saved_level_1881);
g_func_sym_879 = F->saved_sym_1882;
g_code_865 = F->saved_code_1883;
g_genv_852 = F->saved_env_1884;
g_gdepth_884 = rt_r_ichk(F->saved_gdepth_1885);
F->result_ = F->inst_1876;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_596(P825 y_595) {
  struct f_access_of_596fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_595 = y_595;
F->p_1892 = NULL;
F->p_1892 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if ((rt_r_ichk((*(P825)rt_nil_check(F->y_595)).level) <= ((rt_int)0LL))) {
F->result_ = (((P808)rt_nil_check((*(P825)rt_nil_check(F->y_595)).access))->all);
goto ret_;
}
{ rt_int lo1894 = ((rt_int)1LL), hi1895 = rt_sub(rt_r_ichk(g_cur_level_868), rt_r_ichk((*(P825)rt_nil_check(F->y_595)).level));
for (rt_int it1896 = lo1894; it1896 <= hi1895; it1896++) {
F->i_1893 = it1896;
F->p_1892 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->p_1892))->all), rt_str("->up", 4)); b_; }));
}
}
if (rt_r_echk((*(P825)rt_nil_check(F->y_595)).byref)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P808)rt_nil_check(F->p_1892))->all)), rt_str("->", 2)), (((P808)rt_nil_check((*(P825)rt_nil_check(F->y_595)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->p_1892))->all), rt_str("->", 2)), (((P808)rt_nil_check((*(P825)rt_nil_check(F->y_595)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_import_of_599(P815 l_597, rstr *name_598) {
  struct f_import_of_599fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_597 = l_597;
F->name_598 = name_598;
F->p_1897 = NULL;
F->p_1897 = F->l_597;
while ((F->p_1897 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1897)).name))->all), (*F->name_598))) {
F->result_ = F->p_1897;
goto ret_;
}
F->p_1897 = (*(P815)rt_nil_check(F->p_1897)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_602(P825 y_600, rt_int line_601) {
  struct f_check_import_602fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_600 = y_600;
F->line_601 = line_601;
F->c_1898 = NULL;
F->c_1898 = g_fctx_869;
F->ro_1899 = RT_R_EUNDEF;
F->ro_1899 = 0;
while (((F->c_1898 != NULL) && (rt_r_ichk((*(P825)rt_nil_check(F->y_600)).depth) < rt_r_ichk((*(P832)rt_nil_check(F->c_1898)).depth)))) {
if ((!rt_r_echk((*(P832)rt_nil_check(F->c_1898)).all_imp))) {
F->imp_1900 = NULL;
F->imp_1900 = f_import_of_599((*(P832)rt_nil_check(F->c_1898)).imps, &(((P808)rt_nil_check((*(P825)rt_nil_check(F->y_600)).name))->all));
if ((F->imp_1900 == NULL)) {
f_fail_23(F->line_601, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P825)rt_nil_check(F->y_600)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if ((rt_r_ichk((*(P815)rt_nil_check(F->imp_1900)).ival) == ((rt_int)1LL))) {
F->ro_1899 = 1;
}
}
F->c_1898 = (*(P832)rt_nil_check(F->c_1898)).next;
}
F->result_ = rt_r_echk(F->ro_1899);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_604(rstr *s_603) {
  struct f_c_ident_604fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_603 = s_603;
if (rt_str_eq((*F->s_603), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_603), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_603), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_603), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_603), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_603), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_603), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_603), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_603), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_603), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_603), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_603), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_603), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_603), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_603));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cell_deref_607(P821 t_605, rstr *p_606) {
  struct f_cell_deref_607fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_605 = t_605;
F->p_606 = p_606;
if ((((*(P821)rt_nil_check(F->t_605)).decl != NULL) && ((*(P815)rt_nil_check((*(P821)rt_nil_check(F->t_605)).decl)).b != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->p_606)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*F->p_606)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_610(rstr *base_608, P821 t_609) {
  struct f_deref_610fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_608 = base_608;
F->t_609 = t_609;
if ((((*(P821)rt_nil_check(F->t_609)).decl != NULL) && ((*(P815)rt_nil_check((*(P821)rt_nil_check(F->t_609)).decl)).b != NULL))) {
if (f_suppressed_443(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->base_608)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_225(F->t_609)), rt_str(")rt_nil_check(", 14)), (*F->base_608)), rt_str("))->all)", 8));
goto ret_;
}
if (f_suppressed_443(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->t_609)), rt_str(")(", 2)), (*F->base_608)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->t_609)), rt_str(")rt_nil_check(", 14)), (*F->base_608)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_612(P815 e_611) {
  struct f_is_lvalue_612fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_611 = e_611;
if ((rt_r_ichk((*(P815)rt_nil_check(F->e_611)).kind) == (((rt_int)7LL)))) {
F->y_1901 = NULL;
F->y_1901 = f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_611)).name))->all));
F->result_ = ((F->y_1901 != NULL) && ((rt_r_ichk((*(P825)rt_nil_check(F->y_1901)).kind) == (((rt_int)1LL))) || (((rt_r_ichk((*(P825)rt_nil_check(F->y_1901)).kind) == (((rt_int)2LL))) && ((*(P825)rt_nil_check(F->y_1901)).mv == NULL)) && (!rt_r_echk((*(P825)rt_nil_check(F->y_1901)).hasmv)))));
goto ret_;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_611)).kind) == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_612((*(P815)rt_nil_check(F->e_611)).a);
goto ret_;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_611)).kind) == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_611)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_612((*(P815)rt_nil_check(F->e_611)).a));
goto ret_;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_611)).kind) == (((rt_int)10LL)))) {
if ((((*(P815)rt_nil_check(F->e_611)).b != NULL) && (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_611)).b)).kind) == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_612((*(P815)rt_nil_check(F->e_611)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_618(P815 e_613, P808 *code_614, P821 *t_615, P817 *c_616, int *ro_617) {
  struct f_lvalue_618fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_613 = e_613;
F->code_614 = code_614;
F->code_614v = *F->code_614;
F->t_615 = t_615;
F->t_615v = *F->t_615;
F->c_616 = c_616;
F->c_616v = *F->c_616;
F->ro_617 = ro_617;
F->ro_617v = *F->ro_617;
F->base_1902 = NULL;
F->bt_1903 = NULL;
F->bc_1904 = NULL;
if ((rt_r_ichk((*(P815)rt_nil_check(F->e_613)).kind) == (((rt_int)7LL)))) {
F->y_1905 = NULL;
F->y_1905 = f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_613)).name))->all));
if ((F->y_1905 == NULL)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_613)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_613)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P825)rt_nil_check(F->y_1905)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P825)rt_nil_check(F->y_1905)).kind) != (((rt_int)2LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_613)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_613)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_614v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_596(F->y_1905); b_; }));
F->t_615v = (*(P825)rt_nil_check(F->y_1905)).t;
F->c_616v = (*(P825)rt_nil_check(F->y_1905)).c;
F->ro_617v = rt_r_echk((*(P825)rt_nil_check(F->y_1905)).ro_flag);
if (((rt_r_ichk((*(P825)rt_nil_check(F->y_1905)).kind) == (((rt_int)1LL))) && f_check_import_602(F->y_1905, rt_r_ichk((*(P815)rt_nil_check(F->e_613)).line)))) {
F->ro_617v = 1;
}
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_613)).kind) == (((rt_int)17LL)))) {
f_lvalue_618((*(P815)rt_nil_check(F->e_613)).a, &F->code_614v, &F->t_615v, &F->c_616v, &F->ro_617v);
} else if (((((rt_r_ichk((*(P815)rt_nil_check(F->e_613)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_613)).a)).kind) == (((rt_int)7LL)))) && rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_613)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_614v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_767((*(P815)rt_nil_check(F->e_613)).b, rt_r_ichk((*(P815)rt_nil_check(F->e_613)).line), &F->t_615v); b_; }));
F->c_616v = g_no_cons_907;
F->ro_617v = 0;
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_613)).kind) == (((rt_int)11LL)))) {
f_lvalue_618((*(P815)rt_nil_check(F->e_613)).a, &F->base_1902, &F->bt_1903, &F->bc_1904, &F->ro_617v);
f_select_on_626(&(((P808)rt_nil_check(F->base_1902))->all), F->bt_1903, F->e_613, &F->ro_617v, &F->code_614v, &F->t_615v, &F->c_616v);
} else if ((rt_r_ichk((*(P815)rt_nil_check(F->e_613)).kind) == (((rt_int)10LL)))) {
f_lvalue_618((*(P815)rt_nil_check(F->e_613)).a, &F->base_1902, &F->bt_1903, &F->bc_1904, &F->ro_617v);
f_index_on_643(&(((P808)rt_nil_check(F->base_1902))->all), F->bt_1903, F->e_613, &F->ro_617v, 1, &F->code_614v, &F->t_615v, &F->c_616v);
} else {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_613)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_614) = F->code_614v;  (*F->t_615) = F->t_615v;  (*F->c_616) = F->c_616v;  if (!rt_r_undef_BOOL(F->ro_617v)) (*F->ro_617) = F->ro_617v;
  RT_FPOP();
  return;
}

static void f_select_on_626(rstr *base_619, P821 bt_620, P815 e_621, int *ro_622, P808 *code_623, P821 *t_624, P817 *c_625) {
  struct f_select_on_626fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_619 = base_619;
F->bt_620 = bt_620;
F->e_621 = e_621;
F->ro_622 = ro_622;
F->code_623 = code_623;
F->code_623v = *F->code_623;
F->t_624 = t_624;
F->t_624v = *F->t_624;
F->c_625 = c_625;
F->c_625v = *F->c_625;
F->c_625v = g_no_cons_907;
if ((rt_r_ichk((*(P821)rt_nil_check(F->bt_620)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_409(F->bt_620);
(*F->ro_622) = 0;
if (((*(P821)rt_nil_check(F->bt_620)).decl != NULL)) {
F->p_1906 = NULL;
F->p_1906 = (*(P815)rt_nil_check((*(P821)rt_nil_check(F->bt_620)).decl)).b;
while ((F->p_1906 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1906)).name))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->e_621)).name))->all))) {
F->pc_1907 = NULL;
F->code_623v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_225(F->bt_620)), rt_str(")rt_nil_check(", 14)), (*F->base_619)), rt_str("))->p_", 6)), f_lower_s_15(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1906)).name))->all))), rt_str(")", 1)); b_; }));
F->t_624v = f_resolve_subtype_256((*(P815)rt_nil_check(F->p_1906)).a, &F->pc_1907);
(*F->ro_622) = 1;
goto ret_;
}
F->p_1906 = (*(P815)rt_nil_check(F->p_1906)).next;
}
}
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_621)).name))->all), rt_str("ALL", 3))) {
F->code_623v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_610(&(*F->base_619), F->bt_620); b_; }));
F->t_624v = (*(P821)rt_nil_check(F->bt_620)).target;
goto ret_;
}
f_select_on_626(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_610(&(*F->base_619), F->bt_620); b_; }), (*(P821)rt_nil_check(F->bt_620)).target, F->e_621, &(*F->ro_622), &F->code_623v, &F->t_624v, &F->c_625v);
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->bt_620)).kind) == (((rt_int)15LL)))) {
F->p_1908 = NULL;
F->p_1908 = (*(P821)rt_nil_check(F->bt_620)).tparams;
if ((!f_opened_296(F->bt_620))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_621)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P808)rt_nil_check((*(P821)rt_nil_check(F->bt_620)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P821)rt_nil_check(F->bt_620)).tparams == NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_621)).name))->all), rt_str("ALL", 3))) {
F->code_623v = f_mk_3(&(*F->base_619));
F->t_624v = (*(P821)rt_nil_check(F->bt_620)).under;
goto ret_;
}
f_select_on_626(&(*F->base_619), (*(P821)rt_nil_check(F->bt_620)).under, F->e_621, &(*F->ro_622), &F->code_623v, &F->t_624v, &F->c_625v);
goto ret_;
}
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_621)).name))->all), rt_str("ALL", 3))) {
F->code_623v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_619), rt_str(".all", 4)); b_; }));
F->t_624v = (*(P821)rt_nil_check(F->bt_620)).under;
goto ret_;
}
while ((F->p_1908 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1908)).name))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->e_621)).name))->all))) {
F->code_623v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_619), rt_str(".p_", 3)), f_lower_s_15(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1908)).name))->all))); b_; }));
F->t_624v = f_tparam_type_321(F->bt_620, &(((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1908)).name))->all));
(*F->ro_622) = 1;
goto ret_;
}
F->p_1908 = (*(P815)rt_nil_check(F->p_1908)).next;
}
f_select_on_626(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_619), rt_str(".all", 4)); b_; }), (*(P821)rt_nil_check(F->bt_620)).under, F->e_621, &(*F->ro_622), &F->code_623v, &F->t_624v, &F->c_625v);
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->bt_620)).kind) == (((rt_int)17LL)))) {
F->f_1909 = NULL;
F->f_1909 = (*(P821)rt_nil_check(F->bt_620)).fields;
F->i_1910 = RT_R_IUNDEF;
F->i_1910 = ((rt_int)0LL);
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_621)).name))->all), rt_str("TAG", 3))) {
F->code_623v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_619)), rt_str(").tag)", 6)); b_; }));
F->t_624v = (*(P821)rt_nil_check(F->bt_620)).elem;
(*F->ro_622) = 1;
goto ret_;
}
while ((F->f_1909 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P823)rt_nil_check(F->f_1909)).name))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->e_621)).name))->all))) {
F->fn_1911 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_619)), rt_str(").u.", 4)), f_field_c_17(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_621)).name))->all))));
F->c_625v = (*(P823)rt_nil_check(F->f_1909)).c;
F->code_623v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_619)), rt_str(").tag == ", 9)), f_itos_7(rt_r_ichk(F->i_1910))), rt_str(" \? &", 4)), F->fn_1911), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_1911), rt_str(")))", 3)); b_; }));
F->t_624v = (*(P823)rt_nil_check(F->f_1909)).t;
goto ret_;
}
F->i_1910 = rt_add(rt_r_ichk(F->i_1910), ((rt_int)1LL));
F->f_1909 = (*(P823)rt_nil_check(F->f_1909)).next;
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_621)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P808)rt_nil_check((*(P815)rt_nil_check(F->e_621)).name))->all)); b_; }));
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->bt_620)).kind) == (((rt_int)7LL)))) {
F->f_1912 = NULL;
F->f_1912 = (*(P821)rt_nil_check(F->bt_620)).fields;
while ((F->f_1912 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P823)rt_nil_check(F->f_1912)).name))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->e_621)).name))->all))) {
F->c_625v = (*(P823)rt_nil_check(F->f_1912)).c;
F->code_623v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_619), rt_str(".", 1)), f_field_c_17(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_621)).name))->all))); b_; }));
F->t_624v = (*(P823)rt_nil_check(F->f_1912)).t;
goto ret_;
}
F->f_1912 = (*(P823)rt_nil_check(F->f_1912)).next;
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_621)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P808)rt_nil_check((*(P815)rt_nil_check(F->e_621)).name))->all)); b_; }));
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_621)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P808)rt_nil_check((*(P815)rt_nil_check(F->e_621)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_623) = F->code_623v;  (*F->t_624) = F->t_624v;  (*F->c_625) = F->c_625v;
  RT_FPOP();
  return;
}

static int f_has_call_628(rstr *s_627) {
  struct f_has_call_628fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_627 = s_627;
{ rt_int lo1914 = ((rt_int)1LL), hi1915 = ((rt_int)(((*F->s_627)).len));
for (rt_int it1916 = lo1914; it1916 <= hi1915; it1916++) {
F->i_1913 = it1916;
if ((rt_r_echk(rt_str_get((*F->s_627), F->i_1913)) == 40)) {
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

static void f_need_slice_630(P821 t_629) {
  struct f_need_slice_630fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_629 = t_629;
F->c_1917 = rt_str_copy(f_ctype_225(F->t_629));
F->n_1918 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_1917));
F->l_1919 = NULL;
if (f_seen_name_375(g_mcopies_894, &F->n_1918)) {
goto ret_;
}
{ R820 *cell1920 = rt_alloc(sizeof(R820));
(*cell1920).s = NULL;
(*cell1920).next = NULL;
F->l_1919 = cell1920;
}
(*(P819)rt_nil_check(F->l_1919)).s = f_mk_3(&F->n_1918);
(*(P819)rt_nil_check(F->l_1919)).next = g_mcopies_894;
g_mcopies_894 = F->l_1919;
f_put_27(g_out_protos_860, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1917), rt_str(" ", 1)), F->n_1918), rt_str("(", 1)), F->c_1917), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1917), rt_str(" ", 1)), F->n_1918), rt_str("(", 1)), F->c_1917), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_860, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1917), rt_str(" rt_r_acat_", 11)), F->c_1917), rt_str("(", 1)), F->c_1917), rt_str(" a, ", 4)), F->c_1917), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1917), rt_str(" rt_r_acat_", 11)), F->c_1917), rt_str("(", 1)), F->c_1917), rt_str(" a, ", 4)), F->c_1917), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_1917), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_364((*(P821)rt_nil_check(F->t_629)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_364((*(P821)rt_nil_check(F->t_629)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_862, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_634(rstr *i_631, rstr *lo_632, rstr *hi_633) {
  struct f_ix_634fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_631 = i_631;
F->lo_632 = lo_632;
F->hi_633 = hi_633;
if (f_suppressed_443(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_631)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_631)), rt_str(", ", 2)), (*F->lo_632)), rt_str(", ", 2)), (*F->hi_633)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_643(rstr *base_635, P821 bt_636, P815 e_637, int *ro_638, int lv_639, P808 *code_640, P821 *t_641, P817 *c_642) {
  struct f_index_on_643fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_635 = base_635;
F->bt_636 = bt_636;
F->e_637 = e_637;
F->ro_638 = ro_638;
F->lv_639 = lv_639;
F->code_640 = code_640;
F->code_640v = *F->code_640;
F->t_641 = t_641;
F->t_641v = *F->t_641;
F->c_642 = c_642;
F->c_642v = *F->c_642;
F->a_1921 = NULL;
F->a_1921 = (*(P815)rt_nil_check(F->e_637)).b;
F->it_1922 = NULL;
F->c_642v = g_no_cons_907;
if ((rt_r_ichk((*(P821)rt_nil_check(F->bt_636)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_409(F->bt_636);
(*F->ro_638) = 0;
f_index_on_643(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_610(&(*F->base_635), F->bt_636); b_; }), (*(P821)rt_nil_check(F->bt_636)).target, F->e_637, &(*F->ro_638), F->lv_639, &F->code_640v, &F->t_641v, &F->c_642v);
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->bt_636)).kind) == (((rt_int)15LL)))) {
if ((!f_opened_296(F->bt_636))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_637)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P808)rt_nil_check((*(P821)rt_nil_check(F->bt_636)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P821)rt_nil_check(F->bt_636)).tparams == NULL)) {
f_index_on_643(&(*F->base_635), (*(P821)rt_nil_check(F->bt_636)).under, F->e_637, &(*F->ro_638), F->lv_639, &F->code_640v, &F->t_641v, &F->c_642v);
} else {
f_index_on_643(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_635), rt_str(".all", 4)); b_; }), (*(P821)rt_nil_check(F->bt_636)).under, F->e_637, &(*F->ro_638), F->lv_639, &F->code_640v, &F->t_641v, &F->c_642v);
}
goto ret_;
}
if ((((rt_r_ichk((*(P821)rt_nil_check(F->bt_636)).kind) == (((rt_int)6LL))) && (F->a_1921 != NULL)) && (rt_r_ichk((*(P815)rt_nil_check(F->a_1921)).kind) == (((rt_int)16LL))))) {
if (((rt_r_ichk((*(P821)rt_nil_check(F->bt_636)).ndim) != ((rt_int)1LL)) || ((*(P815)rt_nil_check(F->a_1921)).next != NULL))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_637)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_1923 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->a_1921)).a, (*(P821)rt_nil_check(F->bt_636)).idx, &F->it_1922));
F->hi_1924 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->a_1921)).b, (*(P821)rt_nil_check(F->bt_636)).idx, &F->it_1922));
F->code_640v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_225(F->bt_636)), rt_str("(", 1)), (*F->base_635)), rt_str(", ", 2)), F->lo_1923), rt_str(", ", 2)), F->hi_1924), rt_str(")", 1)); b_; }));
f_need_slice_630(F->bt_636);
F->t_641v = F->bt_636;
(*F->ro_638) = 1;
}
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->bt_636)).kind) == (((rt_int)6LL)))) {
F->off_1925 = NULL;
F->k_1926 = RT_R_IUNDEF;
F->k_1926 = ((rt_int)0LL);
F->b_1927 = NULL;
F->b_1927 = f_mk_3(&(*F->base_635));
F->pre_1928 = NULL;
F->pre_1928 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_67(F->a_1921) != rt_r_ichk((*(P821)rt_nil_check(F->bt_636)).ndim))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_637)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7(rt_r_ichk((*(P821)rt_nil_check(F->bt_636)).ndim)), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_639) && f_has_call_628(&(*F->base_635)))) {
F->pre_1928 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->bt_636)), rt_str(" b_ = ", 6)), (*F->base_635)), rt_str("; ", 2)); b_; }));
F->b_1927 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_1921 != NULL)) {
F->k_1926 = rt_add(rt_r_ichk(F->k_1926), ((rt_int)1LL));
{
F->i_1929 = rt_str_copy(f_gexpr_649(F->a_1921, f_idx_type_249(F->bt_636, rt_r_ichk(F->k_1926)), &F->it_1922));
F->l_1930 = rt_str_copy(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->b_1927))->all), rt_str(".", 1)), f_dim_lo_233(rt_r_ichk(F->k_1926))));
F->h_1931 = rt_str_copy(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->b_1927))->all), rt_str(".", 1)), f_dim_hi_235(rt_r_ichk(F->k_1926))));
f_check_type_223(F->it_1922, f_idx_type_249(F->bt_636, rt_r_ichk(F->k_1926)), rt_r_ichk((*(P815)rt_nil_check(F->e_637)).line));
if ((F->off_1925 == NULL)) {
F->off_1925 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_634(&F->i_1929, &F->l_1930, &F->h_1931)), rt_str(" - ", 3)), F->l_1930), rt_str(")", 1)); b_; }));
} else {
F->off_1925 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P808)rt_nil_check(F->off_1925))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_1930), rt_str(", ", 2)), F->h_1931), rt_str(") + ", 4)), f_ix_634(&F->i_1929, &F->l_1930, &F->h_1931)), rt_str(" - ", 3)), F->l_1930), rt_str(")", 1)); b_; }));
}
}
F->a_1921 = (*(P815)rt_nil_check(F->a_1921)).next;
}
if ((((rt_int)(((((P808)rt_nil_check(F->pre_1928))->all)).len)) > ((rt_int)0LL))) {
F->code_640v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->pre_1928))->all), (((P808)rt_nil_check(F->b_1927))->all)), rt_str(".p[", 3)), (((P808)rt_nil_check(F->off_1925))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_640v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->b_1927))->all), rt_str(".p[", 3)), (((P808)rt_nil_check(F->off_1925))->all)), rt_str("]", 1)); b_; }));
}
F->t_641v = (*(P821)rt_nil_check(F->bt_636)).elem;
F->c_642v = (*(P821)rt_nil_check(F->bt_636)).elemcons;
goto ret_;
}
if ((f_list_len_67(F->a_1921) != ((rt_int)1LL))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_637)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->bt_636)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P815)rt_nil_check(F->a_1921)).kind) == (((rt_int)16LL)))) {
F->lo_1932 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->a_1921)).a, g_ty_int_895, &F->it_1922));
F->hi_1933 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->a_1921)).b, g_ty_int_895, &F->it_1922));
F->code_640v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_635)), rt_str(", ", 2)), F->lo_1932), rt_str(", ", 2)), F->hi_1933), rt_str(")", 1)); b_; }));
F->t_641v = F->bt_636;
(*F->ro_638) = 1;
goto ret_;
}
{
F->i_1934 = rt_str_copy(f_gexpr_649(F->a_1921, g_ty_int_895, &F->it_1922));
F->t_641v = f_str_elem_209(F->bt_636);
F->c_642v = (*(P821)rt_nil_check(F->bt_636)).elemcons;
if (F->lv_639) {
F->code_640v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_635)), rt_str(", ", 2)), F->i_1934), rt_str("))", 2)); b_; }));
} else {
F->code_640v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_635)), rt_str(", ", 2)), F->i_1934), rt_str(")", 1)); b_; }));
(*F->ro_638) = 1;
}
}
goto ret_;
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_637)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_640) = F->code_640v;  (*F->t_641) = F->t_641v;  (*F->c_642) = F->c_642v;
  RT_FPOP();
  return;
}

static int f_own_attribute_645(P815 e_644) {
  struct f_own_attribute_645fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_644 = e_644;
F->saved_1935 = NULL;
F->saved_1935 = g_code_865;
F->bt_1936 = NULL;
F->ok_1937 = RT_R_EUNDEF;
F->ok_1937 = 0;
g_trial_893 = rt_add(rt_r_ichk(g_trial_893), ((rt_int)1LL));
g_code_865 = f_new_buffer_24();
{ rt_frame xf1938;
if (RT_TRY(xf1938)) {
F->base_1940 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_644)).a, NULL, &F->bt_1936));
while (((F->bt_1936 != NULL) && (rt_r_ichk((*(P821)rt_nil_check(F->bt_1936)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_409(F->bt_1936);
F->bt_1936 = (*(P821)rt_nil_check(F->bt_1936)).target;
}
while ((((F->bt_1936 != NULL) && (rt_r_ichk((*(P821)rt_nil_check(F->bt_1936)).kind) == (((rt_int)15LL)))) && ((*(P821)rt_nil_check(F->bt_1936)).tparams == NULL))) {
F->bt_1936 = (*(P821)rt_nil_check(F->bt_1936)).under;
}
if (((F->bt_1936 != NULL) && (rt_r_ichk((*(P821)rt_nil_check(F->bt_1936)).kind) == (((rt_int)15LL))))) {
F->p_1941 = NULL;
F->p_1941 = (*(P821)rt_nil_check(F->bt_1936)).tparams;
while ((F->p_1941 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->p_1941)).name))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->e_644)).name))->all))) {
F->ok_1937 = 1;
}
F->p_1941 = (*(P815)rt_nil_check(F->p_1941)).next;
}
F->bt_1936 = (*(P821)rt_nil_check(F->bt_1936)).under;
}
if (((F->bt_1936 != NULL) && ((rt_r_ichk((*(P821)rt_nil_check(F->bt_1936)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->bt_1936)).kind) == (((rt_int)17LL)))))) {
F->f_1942 = NULL;
F->f_1942 = (*(P821)rt_nil_check(F->bt_1936)).fields;
while ((F->f_1942 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P823)rt_nil_check(F->f_1942)).name))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->e_644)).name))->all))) {
F->ok_1937 = 1;
}
F->f_1942 = (*(P823)rt_nil_check(F->f_1942)).next;
}
}
RT_POP(xf1938);
} else {
RT_POP(xf1938);
int x1939 = rt_xcur;
if (0 || x1939 == ex_compile_error_1) {
F->ok_1937 = 0;
} else {
rt_raise(x1939);
}
}
}
g_trial_893 = rt_sub(rt_r_ichk(g_trial_893), ((rt_int)1LL));
g_code_865 = F->saved_1935;
F->result_ = rt_r_echk(F->ok_1937);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_649(P815 e_646, P821 want_647, P821 *t_648) {
  struct f_gexpr_649fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_646 = e_646;
F->want_647 = want_647;
F->t_648 = t_648;
F->t_648v = *F->t_648;
F->k_1943 = RT_R_IUNDEF;
F->k_1943 = rt_r_ichk((*(P815)rt_nil_check(F->e_646)).kind);
F->code_1944 = NULL;
F->c_1945 = NULL;
F->ro_1946 = RT_R_EUNDEF;
F->bt_1947 = NULL;
F->ctx_1948 = NULL;
F->ctx_1948 = g_cons_ctx_886;
g_cons_ctx_886 = NULL;
F->t_648v = g_ty_int_895;
if ((rt_r_ichk(F->k_1943) == (((rt_int)1LL)))) {
if (((F->want_647 != NULL) && (rt_r_ichk((*(P821)rt_nil_check(F->want_647)).kind) == (((rt_int)3LL))))) {
F->t_648v = g_ty_float_897;
F->result_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((rt_r_ichk(F->k_1943) == (((rt_int)2LL)))) {
F->t_648v = g_ty_float_897;
F->result_ = (((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all);
goto ret_;
} else if ((rt_r_ichk(F->k_1943) == (((rt_int)5LL)))) {
F->t_648v = g_ty_bool_896;
F->result_ = f_itos_7(rt_r_ichk((*(P815)rt_nil_check(F->e_646)).ival));
goto ret_;
} else if (((((rt_r_ichk(F->k_1943) == (((rt_int)3LL))) && (F->want_647 != NULL)) && (rt_r_ichk((*(P821)rt_nil_check(F->want_647)).kind) == (((rt_int)5LL)))) && (!f_same_212(f_str_elem_209(F->want_647), g_ty_ascii_898)))) {
F->r_1949 = NULL;
F->r_1949 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_648v = F->want_647;
{ rt_int lo1951 = ((rt_int)1LL), hi1952 = ((rt_int)(((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all)).len));
for (rt_int it1953 = lo1951; it1953 <= hi1952; it1953++) {
F->i_1950 = it1953;
F->pos_1954 = RT_R_IUNDEF;
F->pos_1954 = f_lit_index_253((*(P821)rt_nil_check(f_base_of_214(f_str_elem_209(F->want_647)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_659(rt_r_echk(rt_str_get((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), F->i_1950))); b_; }));
if ((rt_r_ichk(F->pos_1954) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_646)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_659(rt_r_echk(rt_str_get((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), F->i_1950)))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_1949 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_1949))->all), rt_str("\\", 1)), f_octal_661(rt_r_ichk(F->pos_1954))); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P808)rt_nil_check(F->r_1949))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_1943) == (((rt_int)3LL)))) {
F->t_648v = g_ty_string_899;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_674(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_1943) == (((rt_int)6LL)))) {
F->t_648v = g_ty_nil_902;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((rt_r_ichk(F->k_1943) == (((rt_int)4LL)))) {
if (((F->want_647 != NULL) && ((*(P821)rt_nil_check(f_base_of_214(F->want_647))).kind == (((rt_int)4LL))))) {
F->t_648v = F->want_647;
} else {
F->t_648v = f_enum_type_of_677(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_r_ichk((*(P815)rt_nil_check(F->e_646)).line));
}
{
F->i_1955 = RT_R_IUNDEF;
F->i_1955 = f_lit_index_253((*(P821)rt_nil_check(f_base_of_214(F->t_648v))).lits, &(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all));
if ((rt_r_ichk(F->i_1955) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_646)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(rt_r_ichk(F->i_1955));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1943) == (((rt_int)17LL)))) {
g_cons_ctx_886 = F->ctx_1948;
F->result_ = f_gexpr_649((*(P815)rt_nil_check(F->e_646)).a, F->want_647, &F->t_648v);
goto ret_;
} else if ((rt_r_ichk(F->k_1943) == (((rt_int)7LL)))) {
F->y_1956 = NULL;
F->y_1956 = f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all));
if ((F->y_1956 == NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("ME", 2))) {
F->t_648v = g_ty_act_905;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_648v = g_ty_act_905;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_779(f_wrap_apply_672(F->e_646), 0, &F->t_648v);
goto ret_;
}
if (((((((((rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_779(f_wrap_apply_672(F->e_646), 0, &F->t_648v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_646)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P825)rt_nil_check(F->y_1956)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P825)rt_nil_check(F->y_1956)).kind) == (((rt_int)2LL))))) {
F->ro_1957 = RT_R_EUNDEF;
F->t_648v = (*(P825)rt_nil_check(F->y_1956)).t;
if ((rt_r_ichk((*(P825)rt_nil_check(F->y_1956)).kind) == (((rt_int)1LL)))) {
F->ro_1957 = f_check_import_602(F->y_1956, rt_r_ichk((*(P815)rt_nil_check(F->e_646)).line));
F->result_ = f_init_chk_330((*(P825)rt_nil_check(F->y_1956)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_596(F->y_1956); b_; }));
goto ret_;
}
F->result_ = f_access_of_596(F->y_1956);
goto ret_;
}
if ((rt_r_ichk((*(P825)rt_nil_check(F->y_1956)).kind) == (((rt_int)3LL)))) {
F->result_ = f_gcall_779(f_wrap_apply_672(F->e_646), 0, &F->t_648v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_646)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((rt_r_ichk(F->k_1943) == (((rt_int)8LL))) && (f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all)) != NULL)) && (f_user_op_775(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), f_copy_node_670((*(P815)rt_nil_check(F->e_646)).a)) != NULL))) {
F->call_1958 = NULL;
F->call_1958 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P815)rt_nil_check(F->e_646)).line));
F->fname_1959 = NULL;
F->fname_1959 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P815)rt_nil_check(F->e_646)).line));
(*(P815)rt_nil_check(F->fname_1959)).name = (*(P815)rt_nil_check(F->e_646)).name;
(*(P815)rt_nil_check(F->call_1958)).a = F->fname_1959;
(*(P815)rt_nil_check(F->call_1958)).b = f_copy_node_670((*(P815)rt_nil_check(F->e_646)).a);
F->result_ = f_gcall_779(F->call_1958, 0, &F->t_648v);
goto ret_;
} else if (((((rt_r_ichk(F->k_1943) == (((rt_int)8LL))) && rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("NOT", 3))) && (F->want_647 != NULL)) && (rt_r_ichk((*(P821)rt_nil_check(F->want_647)).kind) == (((rt_int)16LL))))) {
F->a_1960 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_646)).a, F->want_647, &F->t_648v));
F->result_ = rt_str_cat(rt_str_cat(rt_str("y_set_compl(", 12), F->a_1960), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_1943) == (((rt_int)8LL)))) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("NOT", 3))) {
F->a_1961 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_646)).a, g_ty_bool_896, &F->t_648v));
f_check_type_223(F->t_648v, g_ty_bool_896, rt_r_ichk((*(P815)rt_nil_check(F->e_646)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1961), rt_str(")", 1));
goto ret_;
}
{
F->a_1962 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_646)).a, F->want_647, &F->t_648v));
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_1962;
goto ret_;
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->t_648v)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1962), rt_str(")", 1));
goto ret_;
}
f_check_type_223(F->t_648v, g_ty_int_895, rt_r_ichk((*(P815)rt_nil_check(F->e_646)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1962), rt_str(")", 1));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1943) == (((rt_int)9LL)))) {
F->result_ = f_gbinop_699(F->e_646, F->want_647, &F->t_648v);
goto ret_;
} else if ((rt_r_ichk(F->k_1943) == (((rt_int)10LL)))) {
if (((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_646)).a)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_646)).a)).kind) == (((rt_int)12LL))))) {
F->nm_1963 = NULL;
F->nm_1963 = (*(P815)rt_nil_check(F->e_646)).a;
F->y_1964 = NULL;
if ((rt_r_ichk((*(P815)rt_nil_check(F->nm_1963)).kind) == (((rt_int)12LL)))) {
F->nm_1963 = (*(P815)rt_nil_check(F->nm_1963)).a;
}
F->y_1964 = f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->nm_1963)).name))->all));
if (((((F->y_1964 == NULL) || (rt_r_ichk((*(P825)rt_nil_check(F->y_1964)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P825)rt_nil_check(F->y_1964)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P825)rt_nil_check(F->y_1964)).kind) == (((rt_int)10LL))))) {
F->result_ = f_gcall_779(F->e_646, 0, &F->t_648v);
goto ret_;
}
}
{
F->base_1965 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_646)).a, NULL, &F->bt_1947));
F->ro_1946 = 1;
f_index_on_643(&F->base_1965, F->bt_1947, F->e_646, &F->ro_1946, 0, &F->code_1944, &F->t_648v, &F->c_1945);
if ((((!f_is_lvalue_612(F->e_646)) || (rt_r_ichk((*(P821)rt_nil_check(F->t_648v)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P821)rt_nil_check(F->t_648v)).kind) == (((rt_int)5LL))))) {
F->result_ = (((P808)rt_nil_check(F->code_1944))->all);
goto ret_;
}
F->result_ = f_init_chk_330(F->t_648v, &(((P808)rt_nil_check(F->code_1944))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1943) == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_645(F->e_646)))) {
F->result_ = f_attribute_682(F->e_646, &F->t_648v);
goto ret_;
} else if (((f_as_subtype_285((*(P815)rt_nil_check(F->e_646)).a) != NULL) || f_ptr_attribute_679(F->e_646))) {
F->result_ = f_attribute_682(F->e_646, &F->t_648v);
goto ret_;
}
{
F->base_1966 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_646)).a, NULL, &F->bt_1947));
F->ro_1946 = 1;
f_select_on_626(&F->base_1966, F->bt_1947, F->e_646, &F->ro_1946, &F->code_1944, &F->t_648v, &F->c_1945);
if ((rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_646)).name))->all), rt_str("TAG", 3)) || (!f_is_lvalue_612(F->e_646)))) {
F->result_ = (((P808)rt_nil_check(F->code_1944))->all);
goto ret_;
}
F->result_ = f_init_chk_330(F->t_648v, &(((P808)rt_nil_check(F->code_1944))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_1943) == (((rt_int)12LL)))) {
F->result_ = f_gcall_779(f_wrap_apply_672(F->e_646), 0, &F->t_648v);
goto ret_;
} else if ((rt_r_ichk(F->k_1943) == (((rt_int)14LL)))) {
F->result_ = f_constructor_704(F->e_646, F->want_647, F->ctx_1948, &F->t_648v);
goto ret_;
} else if ((rt_r_ichk(F->k_1943) == (((rt_int)13LL)))) {
F->result_ = f_resolved_652(F->e_646, &F->t_648v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_646)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_648) = F->t_648v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_652(P815 e_650, P821 *t_651) {
  struct f_resolved_652fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_650 = e_650;
F->t_651 = t_651;
F->t_651v = *F->t_651;
F->c_1967 = NULL;
F->vt_1968 = NULL;
F->y_1969 = NULL;
F->y_1969 = f_lookup_154(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_1970 = NULL;
F->tt_1970 = f_copy_node_670((*(P815)rt_nil_check(F->e_650)).b);
(*(P815)rt_nil_check(F->tt_1970)).next = NULL;
if (((F->y_1969 != NULL) && ((rt_r_ichk((*(P825)rt_nil_check(F->y_1969)).kind) == (((rt_int)10LL))) || (f_resolve_overload_753(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_1970, f_copy_node_670((*(P815)rt_nil_check(F->e_650)).a), 0, rt_r_ichk((*(P815)rt_nil_check(F->e_650)).line)) != NULL)))) {
F->call_1971 = NULL;
F->call_1971 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P815)rt_nil_check(F->e_650)).line));
F->f_1972 = NULL;
F->f_1972 = f_nn_61((((rt_int)12LL)), rt_r_ichk((*(P815)rt_nil_check(F->e_650)).line));
F->fname_1973 = NULL;
F->fname_1973 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P815)rt_nil_check(F->e_650)).line));
(*(P815)rt_nil_check(F->fname_1973)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P815)rt_nil_check(F->f_1972)).a = F->fname_1973;
(*(P815)rt_nil_check(F->f_1972)).b = F->tt_1970;
(*(P815)rt_nil_check(F->call_1971)).a = F->f_1972;
(*(P815)rt_nil_check(F->call_1971)).b = f_copy_node_670((*(P815)rt_nil_check(F->e_650)).a);
(*(P815)rt_nil_check((*(P815)rt_nil_check(F->call_1971)).b)).next = NULL;
F->result_ = f_gcall_779(F->call_1971, 0, &F->t_651v);
goto ret_;
}
F->t_651v = f_resolve_subtype_256((*(P815)rt_nil_check(F->e_650)).b, &F->c_1967);
{
F->v_1974 = rt_str_copy(f_gexpr_in_657((*(P815)rt_nil_check(F->e_650)).a, F->t_651v, F->c_1967, &F->vt_1968));
f_check_type_223(F->vt_1968, F->t_651v, rt_r_ichk((*(P815)rt_nil_check(F->e_650)).line));
F->result_ = f_checked_204(F->t_651v, F->c_1967, &F->v_1974);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_651) = F->t_651v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_657(P815 e_653, P821 want_654, P817 c_655, P821 *t_656) {
  struct f_gexpr_in_657fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_653 = e_653;
F->want_654 = want_654;
F->c_655 = c_655;
F->t_656 = t_656;
F->t_656v = *F->t_656;
g_cons_ctx_886 = F->c_655;
F->result_ = f_gexpr_649(F->e_653, F->want_654, &F->t_656v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_656) = F->t_656v;
  RT_FPOP();
  return F->result_;
}

static rstr f_ascii_lit_659(int ch_658) {
  struct f_ascii_lit_659fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ch_658 = ch_658;
F->l_1975 = NULL;
F->l_1975 = (*(P821)rt_nil_check(g_ty_ascii_898)).lits;
{ rt_int lo1977 = ((rt_int)1LL), hi1978 = rt_sub(((rt_int)(F->ch_658) + 1), ((rt_int)1LL));
for (rt_int it1979 = lo1977; it1979 <= hi1978; it1979++) {
F->i_1976 = it1979;
F->l_1975 = (*(P815)rt_nil_check(F->l_1975)).next;
}
}
F->result_ = (((P808)rt_nil_check((*(P815)rt_nil_check(F->l_1975)).name))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_octal_661(rt_int n_660) {
  struct f_octal_661fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_660 = n_660;
F->r_1980 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_1980, rt_str("000", 3));
(*rt_str_at(&F->r_1980, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_660, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_1980, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_660, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_1980, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_660, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_1980;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P821 f_str_cat_part_663(P821 t_662) {
  struct f_str_cat_part_663fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_662 = t_662;
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_662)).kind) == (((rt_int)5LL)))) {
F->result_ = f_str_elem_209(F->t_662);
goto ret_;
}
F->result_ = F->t_662;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P821 f_peek_type_665(P815 e_664) {
  struct f_peek_type_665fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_664 = e_664;
F->saved_1981 = NULL;
F->saved_1981 = g_code_865;
F->t_1982 = NULL;
g_trial_893 = rt_add(rt_r_ichk(g_trial_893), ((rt_int)1LL));
g_code_865 = f_new_buffer_24();
{ rt_frame xf1983;
if (RT_TRY(xf1983)) {
F->v_1985 = rt_str_copy(f_gexpr_649(F->e_664, NULL, &F->t_1982));
RT_POP(xf1983);
} else {
RT_POP(xf1983);
int x1984 = rt_xcur;
if (0 || x1984 == ex_compile_error_1) {
F->t_1982 = NULL;
} else {
rt_raise(x1984);
}
}
}
g_trial_893 = rt_sub(rt_r_ichk(g_trial_893), ((rt_int)1LL));
g_code_865 = F->saved_1981;
F->result_ = F->t_1982;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P821 f_set_operands_668(P815 e_666, P821 want_667) {
  struct f_set_operands_668fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_666 = e_666;
F->want_667 = want_667;
F->t_1986 = NULL;
if (((F->want_667 != NULL) && (rt_r_ichk((*(P821)rt_nil_check(F->want_667)).kind) == (((rt_int)16LL))))) {
F->result_ = F->want_667;
goto ret_;
} else if ((F->want_667 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_666)).a)).kind) != (((rt_int)14LL)))) {
F->t_1986 = f_peek_type_665((*(P815)rt_nil_check(F->e_666)).a);
} else if ((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_666)).b)).kind) != (((rt_int)14LL)))) {
F->t_1986 = f_peek_type_665((*(P815)rt_nil_check(F->e_666)).b);
}
if (((F->t_1986 != NULL) && (rt_r_ichk((*(P821)rt_nil_check(F->t_1986)).kind) == (((rt_int)16LL))))) {
F->result_ = F->t_1986;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_copy_node_670(P815 e_669) {
  struct f_copy_node_670fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_669 = e_669;
F->x_1987 = NULL;
{ R816 *cell1988 = rt_alloc(sizeof(R816));
(*cell1988).name = NULL;
(*cell1988).tag = NULL;
(*cell1988).prags = NULL;
(*cell1988).labels = NULL;
(*cell1988).a = NULL;
(*cell1988).b = NULL;
(*cell1988).c = NULL;
(*cell1988).d = NULL;
(*cell1988).e = NULL;
(*cell1988).next = NULL;
F->x_1987 = cell1988;
}
(*(P815)rt_nil_check(F->x_1987)).kind = rt_r_ichk((*(P815)rt_nil_check(F->e_669)).kind);
(*(P815)rt_nil_check(F->x_1987)).line = rt_r_ichk((*(P815)rt_nil_check(F->e_669)).line);
(*(P815)rt_nil_check(F->x_1987)).ival = rt_r_ichk((*(P815)rt_nil_check(F->e_669)).ival);
(*(P815)rt_nil_check(F->x_1987)).flag = rt_r_ichk((*(P815)rt_nil_check(F->e_669)).flag);
(*(P815)rt_nil_check(F->x_1987)).name = (*(P815)rt_nil_check(F->e_669)).name;
(*(P815)rt_nil_check(F->x_1987)).tag = (*(P815)rt_nil_check(F->e_669)).tag;
(*(P815)rt_nil_check(F->x_1987)).a = (*(P815)rt_nil_check(F->e_669)).a;
(*(P815)rt_nil_check(F->x_1987)).b = (*(P815)rt_nil_check(F->e_669)).b;
(*(P815)rt_nil_check(F->x_1987)).c = (*(P815)rt_nil_check(F->e_669)).c;
(*(P815)rt_nil_check(F->x_1987)).d = (*(P815)rt_nil_check(F->e_669)).d;
F->result_ = F->x_1987;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P815 f_wrap_apply_672(P815 e_671) {
  struct f_wrap_apply_672fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_671 = e_671;
F->x_1989 = NULL;
F->x_1989 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P815)rt_nil_check(F->e_671)).line));
(*(P815)rt_nil_check(F->x_1989)).a = F->e_671;
F->result_ = F->x_1989;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_674(rstr *s_673) {
  struct f_c_string_674fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_673 = s_673;
F->n_1990 = RT_R_IUNDEF;
F->n_1990 = ((rt_int)0LL);
{ rt_int lo1992 = ((rt_int)1LL), hi1993 = ((rt_int)(((*F->s_673)).len));
for (rt_int it1994 = lo1992; it1994 <= hi1993; it1994++) {
F->i_1991 = it1994;
if (((rt_r_echk(rt_str_get((*F->s_673), F->i_1991)) == 92) || (rt_r_echk(rt_str_get((*F->s_673), F->i_1991)) == 63))) {
F->n_1990 = rt_add(rt_r_ichk(F->n_1990), ((rt_int)1LL));
}
}
}
{
F->r_1995 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_673)).len)), rt_r_ichk(F->n_1990)), ((rt_int)2LL)));
F->j_1996 = RT_R_IUNDEF;
F->j_1996 = ((rt_int)1LL);
(*rt_str_at(&F->r_1995, ((rt_int)1LL))) = 34;
{ rt_int lo1998 = ((rt_int)1LL), hi1999 = ((rt_int)(((*F->s_673)).len));
for (rt_int it2000 = lo1998; it2000 <= hi1999; it2000++) {
F->i_1997 = it2000;
F->j_1996 = rt_add(rt_r_ichk(F->j_1996), ((rt_int)1LL));
if (((rt_r_echk(rt_str_get((*F->s_673), F->i_1997)) == 92) || (rt_r_echk(rt_str_get((*F->s_673), F->i_1997)) == 63))) {
(*rt_str_at(&F->r_1995, rt_r_ichk(F->j_1996))) = 92;
F->j_1996 = rt_add(rt_r_ichk(F->j_1996), ((rt_int)1LL));
}
(*rt_str_at(&F->r_1995, rt_r_ichk(F->j_1996))) = rt_r_echk(rt_str_get((*F->s_673), F->i_1997));
}
}
(*rt_str_at(&F->r_1995, rt_add(rt_r_ichk(F->j_1996), ((rt_int)1LL)))) = 34;
F->result_ = F->r_1995;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P821 f_enum_type_of_677(rstr *lit_675, rt_int line_676) {
  struct f_enum_type_of_677fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_675 = lit_675;
F->line_676 = line_676;
F->y_2001 = NULL;
F->y_2001 = g_scope_stack_855;
F->c_2002 = NULL;
if ((f_lit_index_253((*(P821)rt_nil_check(g_ty_ascii_898)).lits, &(*F->lit_675)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_898;
goto ret_;
}
while ((F->y_2001 != NULL)) {
if (((((rt_r_ichk((*(P825)rt_nil_check(F->y_2001)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P825)rt_nil_check(F->y_2001)).kind) == (((rt_int)5LL)))) && ((*(P825)rt_nil_check(F->y_2001)).st != NULL)) && (rt_r_ichk((*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_2001)).st)).kind) == (((rt_int)72LL))))) {
if ((f_lit_index_253((*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_2001)).st)).a, &(*F->lit_675)) >= ((rt_int)0LL))) {
if ((rt_r_ichk((*(P825)rt_nil_check(F->y_2001)).kind) == (((rt_int)5LL)))) {
F->st_2003 = NULL;
F->st_2003 = f_nn_61((((rt_int)80LL)), F->line_676);
(*(P815)rt_nil_check(F->st_2003)).name = (*(P825)rt_nil_check(F->y_2001)).name;
F->result_ = f_resolve_subtype_256(F->st_2003, &F->c_2002);
goto ret_;
}
F->result_ = f_resolve_subtype_256((*(P825)rt_nil_check(F->y_2001)).st, &F->c_2002);
goto ret_;
}
}
F->y_2001 = (*(P825)rt_nil_check(F->y_2001)).stack;
}
f_fail_23(F->line_676, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_675)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_679(P815 e_678) {
  struct f_ptr_attribute_679fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_678 = e_678;
F->lv_2004 = NULL;
F->t_2005 = NULL;
F->c_2006 = NULL;
F->ro_2007 = RT_R_EUNDEF;
F->p_2008 = NULL;
F->saved_2009 = NULL;
F->saved_2009 = g_code_865;
if ((!f_is_lvalue_612((*(P815)rt_nil_check(F->e_678)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_865 = f_new_buffer_24();
f_lvalue_618((*(P815)rt_nil_check(F->e_678)).a, &F->lv_2004, &F->t_2005, &F->c_2006, &F->ro_2007);
g_code_865 = F->saved_2009;
if (((rt_r_ichk((*(P821)rt_nil_check(F->t_2005)).kind) != (((rt_int)8LL))) || ((*(P821)rt_nil_check(F->t_2005)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_2008 = (*(P815)rt_nil_check((*(P821)rt_nil_check(F->t_2005)).decl)).d;
while ((F->p_2008 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->p_2008)).name))->all), (((P808)rt_nil_check((*(P815)rt_nil_check(F->e_678)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_2008 = (*(P815)rt_nil_check(F->p_2008)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_682(P815 e_680, P821 *t_681) {
  struct f_attribute_682fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_680 = e_680;
F->t_681 = t_681;
F->t_681v = *F->t_681;
F->bt_2010 = NULL;
F->c_2011 = NULL;
F->base_2012 = NULL;
F->sub_2013 = NULL;
F->sub_2013 = f_as_subtype_285((*(P815)rt_nil_check(F->e_680)).a);
F->name_2014 = rt_str_copy((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_680)).name))->all));
if ((F->sub_2013 != NULL)) {
F->bt_2010 = f_resolve_subtype_256(F->sub_2013, &F->c_2011);
} else {
F->bt_2010 = f_value_subtype_278((*(P815)rt_nil_check(F->e_680)).a, &F->c_2011, &F->base_2012);
}
if (((((rt_r_ichk((*(P821)rt_nil_check(F->bt_2010)).kind) == (((rt_int)8LL))) && (F->c_2011 != NULL)) && ((*(P817)rt_nil_check(F->c_2011)).args != NULL)) && ((*(P821)rt_nil_check(F->bt_2010)).decl != NULL))) {
F->p_2015 = NULL;
F->p_2015 = (*(P815)rt_nil_check((*(P821)rt_nil_check(F->bt_2010)).decl)).d;
F->a_2016 = NULL;
F->a_2016 = (*(P817)rt_nil_check(F->c_2011)).args;
while (((F->p_2015 != NULL) && (F->a_2016 != NULL))) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->p_2015)).name))->all), F->name_2014)) {
F->pc_2017 = NULL;
F->v_2018 = rt_str_copy(f_gexpr_649(F->a_2016, f_resolve_subtype_256((*(P815)rt_nil_check(F->p_2015)).a, &F->pc_2017), &F->t_681v));
F->result_ = F->v_2018;
goto ret_;
}
F->p_2015 = (*(P815)rt_nil_check(F->p_2015)).next;
F->a_2016 = (*(P815)rt_nil_check(F->a_2016)).next;
}
}
while (((rt_r_ichk((*(P821)rt_nil_check(F->bt_2010)).kind) == (((rt_int)8LL))) && (F->base_2012 != NULL))) {
f_finish_ptr_409(F->bt_2010);
F->base_2012 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_610(&(((P808)rt_nil_check(F->base_2012))->all), F->bt_2010); b_; }));
F->bt_2010 = (*(P821)rt_nil_check(F->bt_2010)).target;
F->c_2011 = NULL;
if ((rt_r_ichk((*(P821)rt_nil_check(F->bt_2010)).kind) == (((rt_int)5LL)))) {
F->c_2011 = f_new_cons_175();
(*(P817)rt_nil_check(F->c_2011)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P808)rt_nil_check(F->base_2012))->all)), rt_str(").len", 5)); b_; }));
}
}
if (((((rt_r_ichk((*(P821)rt_nil_check(F->bt_2010)).kind) == (((rt_int)15LL))) && ((*(P821)rt_nil_check(F->bt_2010)).tparams != NULL)) && (F->c_2011 != NULL)) && ((*(P817)rt_nil_check(F->c_2011)).args != NULL))) {
F->p_2019 = NULL;
F->p_2019 = (*(P821)rt_nil_check(F->bt_2010)).tparams;
F->a_2020 = NULL;
F->a_2020 = (*(P817)rt_nil_check(F->c_2011)).args;
while (((F->p_2019 != NULL) && (F->a_2020 != NULL))) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->p_2019)).name))->all), F->name_2014)) {
F->pt_2021 = f_tparam_type_321(F->bt_2010, &F->name_2014);
F->v_2022 = rt_str_copy(f_gexpr_649(F->a_2020, F->pt_2021, &F->t_681v));
F->result_ = F->v_2022;
goto ret_;
}
F->p_2019 = (*(P815)rt_nil_check(F->p_2019)).next;
F->a_2020 = (*(P815)rt_nil_check(F->a_2020)).next;
}
}
if (((rt_r_ichk((*(P821)rt_nil_check(F->bt_2010)).kind) == (((rt_int)15LL))) && ((*(P821)rt_nil_check(F->bt_2010)).tparams == NULL))) {
F->c_2011 = f_base_cons_217(F->bt_2010, F->c_2011);
F->bt_2010 = f_base_of_214(F->bt_2010);
}
F->t_681v = g_ty_int_895;
if ((rt_str_eq(F->name_2014, rt_str("LEN", 3)) && (rt_r_ichk((*(P821)rt_nil_check(F->bt_2010)).kind) == (((rt_int)5LL))))) {
if (((F->c_2011 != NULL) && ((*(P817)rt_nil_check(F->c_2011)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P808)rt_nil_check((*(P817)rt_nil_check(F->c_2011)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_680)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2014, rt_str("LEN", 3)) && (rt_r_ichk((*(P821)rt_nil_check(F->bt_2010)).kind) == (((rt_int)12LL))))) {
if (((F->c_2011 != NULL) && ((*(P817)rt_nil_check(F->c_2011)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P808)rt_nil_check((*(P817)rt_nil_check(F->c_2011)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_680)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2014, rt_str("MIN", 3)) || rt_str_eq(F->name_2014, rt_str("MAX", 3))) && f_scalar_kind_177(F->bt_2010))) {
F->t_681v = F->bt_2010;
if (rt_str_eq(F->name_2014, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_189(F->bt_2010, F->c_2011);
goto ret_;
}
F->result_ = f_sub_hi_192(F->bt_2010, F->c_2011);
goto ret_;
} else if ((rt_str_eq(F->name_2014, rt_str("PREC", 4)) && (rt_r_ichk((*(P821)rt_nil_check(F->bt_2010)).kind) == (((rt_int)3LL))))) {
if (((F->c_2011 != NULL) && ((*(P817)rt_nil_check(F->c_2011)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P808)rt_nil_check((*(P817)rt_nil_check(F->c_2011)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2014, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2014, rt_str("USE", 3))) && (rt_r_ichk((*(P821)rt_nil_check(F->bt_2010)).kind) == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_695(F->e_680, F->bt_2010, F->c_2011, F->base_2012, &F->t_681v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_680)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2014, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_681) = F->t_681v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_687(P815 sa_683, P815 sb_684, rstr *op_685, rt_int line_686) {
  struct f_subtype_compare_687fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_683 = sa_683;
F->sb_684 = sb_684;
F->op_685 = op_685;
F->line_686 = line_686;
F->ca_2023 = NULL;
F->cb_2024 = NULL;
F->ta_2025 = NULL;
F->ta_2025 = f_resolve_subtype_256(F->sa_683, &F->ca_2023);
F->tb_2026 = NULL;
F->tb_2026 = f_resolve_subtype_256(F->sb_684, &F->cb_2024);
F->r_2027 = NULL;
F->r_2027 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2028 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2028, rt_str("1", 1));
F->no_2029 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2029, rt_str("0", 1));
if (rt_str_eq((*F->op_685), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2028, rt_str("0", 1));
rt_str_assign(&F->no_2029, rt_str("1", 1));
}
if ((!f_same_212(F->ta_2025, F->tb_2026))) {
F->result_ = F->no_2029;
goto ret_;
} else if ((((rt_r_ichk((*(P815)rt_nil_check(F->sa_683)).kind) == (((rt_int)80LL))) && rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->sa_683)).name))->all), rt_str("TYPEOF", 6))) || ((rt_r_ichk((*(P815)rt_nil_check(F->sb_684)).kind) == (((rt_int)80LL))) && rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->sb_684)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2028;
goto ret_;
}
if (f_scalar_kind_177(F->ta_2025)) {
F->r_2027 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_189(F->ta_2025, F->ca_2023)), rt_str(") == (", 6)), f_sub_lo_189(F->tb_2026, F->cb_2024)), rt_str(") && (", 6)), f_sub_hi_192(F->ta_2025, F->ca_2023)), rt_str(") == (", 6)), f_sub_hi_192(F->tb_2026, F->cb_2024)), rt_str(")", 1)); b_; }));
if ((rt_r_ichk((*(P821)rt_nil_check(F->ta_2025)).kind) == (((rt_int)3LL)))) {
F->r_2027 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_2027))->all), rt_str(" && ", 4)), f_float_prec_689(F->ca_2023)), rt_str(" == ", 4)), f_float_prec_689(F->cb_2024)); b_; }));
}
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->ta_2025)).kind) == (((rt_int)5LL)))) {
if (((((F->ca_2023 != NULL) && (F->cb_2024 != NULL)) && ((*(P817)rt_nil_check(F->ca_2023)).slen != NULL)) && ((*(P817)rt_nil_check(F->cb_2024)).slen != NULL))) {
F->r_2027 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P808)rt_nil_check((*(P817)rt_nil_check(F->ca_2023)).slen))->all)), rt_str(") == (", 6)), (((P808)rt_nil_check((*(P817)rt_nil_check(F->cb_2024)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2023 == NULL) || ((*(P817)rt_nil_check(F->ca_2023)).slen == NULL)) && ((F->cb_2024 == NULL) || ((*(P817)rt_nil_check(F->cb_2024)).slen == NULL))))) {
F->r_2027 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->ta_2025)).kind) == (((rt_int)6LL)))) {
{ rt_int lo2031 = ((rt_int)1LL), hi2032 = rt_r_ichk((*(P821)rt_nil_check(F->ta_2025)).ndim);
for (rt_int it2033 = lo2031; it2033 <= hi2032; it2033++) {
F->k_2030 = it2033;
if (((((F->ca_2023 != NULL) && (F->cb_2024 != NULL)) && (f_cons_lo_243(F->ca_2023, F->k_2030) != NULL)) && (f_cons_lo_243(F->cb_2024, F->k_2030) != NULL))) {
F->r_2027 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_2027))->all), rt_str(" && (", 5)), (((P808)rt_nil_check(f_cons_lo_243(F->ca_2023, F->k_2030)))->all)), rt_str(") == (", 6)), (((P808)rt_nil_check(f_cons_lo_243(F->cb_2024, F->k_2030)))->all)), rt_str(") && (", 6)), (((P808)rt_nil_check(f_cons_hi_246(F->ca_2023, F->k_2030)))->all)), rt_str(") == (", 6)), (((P808)rt_nil_check(f_cons_hi_246(F->cb_2024, F->k_2030)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if (((((rt_r_ichk((*(P821)rt_nil_check(F->ta_2025)).kind) == (((rt_int)15LL))) && ((*(P821)rt_nil_check(F->ta_2025)).tparams != NULL)) && (F->ca_2023 != NULL)) && (F->cb_2024 != NULL))) {
F->a_2034 = NULL;
F->a_2034 = (*(P817)rt_nil_check(F->ca_2023)).args;
F->b_2035 = NULL;
F->b_2035 = (*(P817)rt_nil_check(F->cb_2024)).args;
F->at_2036 = NULL;
F->bt2_2037 = NULL;
while (((F->a_2034 != NULL) && (F->b_2035 != NULL))) {
F->x_2038 = rt_str_copy(f_gexpr_649(F->a_2034, NULL, &F->at_2036));
F->y_2039 = rt_str_copy(f_gexpr_649(F->b_2035, F->at_2036, &F->bt2_2037));
F->r_2027 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_2027))->all), rt_str(" && ", 4)), f_eq_code_368(F->at_2036, &F->x_2038, &F->y_2039)); b_; }));
F->a_2034 = (*(P815)rt_nil_check(F->a_2034)).next;
F->b_2035 = (*(P815)rt_nil_check(F->b_2035)).next;
}
} else if ((((rt_r_ichk((*(P821)rt_nil_check(F->ta_2025)).kind) == (((rt_int)17LL))) && (F->ca_2023 != NULL)) && (F->cb_2024 != NULL))) {
if ((((*(P817)rt_nil_check(F->ca_2023)).lo != NULL) && ((*(P817)rt_nil_check(F->cb_2024)).lo != NULL))) {
F->r_2027 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P808)rt_nil_check((*(P817)rt_nil_check(F->ca_2023)).lo))->all)), rt_str(") == (", 6)), (((P808)rt_nil_check((*(P817)rt_nil_check(F->cb_2024)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P817)rt_nil_check(F->ca_2023)).lo != NULL) || ((*(P817)rt_nil_check(F->cb_2024)).lo != NULL))) {
F->r_2027 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_685), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P808)rt_nil_check(F->r_2027))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P808)rt_nil_check(F->r_2027))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_689(P817 c_688) {
  struct f_float_prec_689fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_688 = c_688;
if (((F->c_688 != NULL) && ((*(P817)rt_nil_check(F->c_688)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P808)rt_nil_check((*(P817)rt_nil_check(F->c_688)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_695(P815 e_690, P821 bt_691, P817 c_692, P808 base_693, P821 *t_694) {
  struct f_file_attribute_695fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_690 = e_690;
F->bt_691 = bt_691;
F->c_692 = c_692;
F->base_693 = base_693;
F->t_694 = t_694;
F->t_694v = *F->t_694;
F->t_694v = g_file_mode_type_906;
if ((F->base_693 != NULL)) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_690)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P808)rt_nil_check(F->base_693))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P808)rt_nil_check(F->base_693))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_692 != NULL) && ((*(P817)rt_nil_check(F->c_692)).args != NULL))) {
if (rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_690)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_649((*(P817)rt_nil_check(F->c_692)).args, F->t_694v, &F->t_694v);
goto ret_;
} else if (((*(P815)rt_nil_check((*(P817)rt_nil_check(F->c_692)).args)).next != NULL)) {
F->result_ = f_gexpr_649((*(P815)rt_nil_check((*(P817)rt_nil_check(F->c_692)).args)).next, F->t_694v, &F->t_694v);
goto ret_;
}
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_690)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P808)rt_nil_check((*(P815)rt_nil_check(F->e_690)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_694) = F->t_694v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_699(P815 e_696, P821 want_697, P821 *t_698) {
  struct f_gbinop_699fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_696 = e_696;
F->want_697 = want_697;
F->t_698 = t_698;
F->t_698v = *F->t_698;
F->op_2040 = NULL;
F->op_2040 = (*(P815)rt_nil_check(F->e_696)).name;
F->ta_2041 = NULL;
F->tb_2042 = NULL;
F->hint_2043 = NULL;
F->uy_2044 = NULL;
F->t_698v = g_ty_bool_896;
if ((f_lookup_154(&(((P808)rt_nil_check(F->op_2040))->all)) != NULL)) {
F->l_2045 = NULL;
F->r_2046 = NULL;
F->l_2045 = f_copy_node_670((*(P815)rt_nil_check(F->e_696)).a);
F->r_2046 = f_copy_node_670((*(P815)rt_nil_check(F->e_696)).b);
(*(P815)rt_nil_check(F->l_2045)).next = F->r_2046;
F->uy_2044 = f_user_op_775(&(((P808)rt_nil_check(F->op_2040))->all), F->l_2045);
if ((F->uy_2044 != NULL)) {
F->call_2047 = NULL;
F->call_2047 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
F->fname_2048 = NULL;
F->fname_2048 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
(*(P815)rt_nil_check(F->fname_2048)).name = F->op_2040;
(*(P815)rt_nil_check(F->call_2047)).a = F->fname_2048;
(*(P815)rt_nil_check(F->call_2047)).b = F->l_2045;
F->result_ = f_gcall_779(F->call_2047, 0, &F->t_698v);
goto ret_;
}
}
if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("IN", 2))) {
F->s_2049 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_696)).b, NULL, &F->tb_2042));
if ((rt_r_ichk((*(P821)rt_nil_check(F->tb_2042)).kind) != (((rt_int)16LL)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2050 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_696)).a, (*(P821)rt_nil_check(F->tb_2042)).elem, &F->ta_2041));
f_check_type_223(F->ta_2041, (*(P821)rt_nil_check(F->tb_2042)).elem, rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
F->t_698v = g_ty_bool_896;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_in(", 9), F->a_2050), rt_str(", ", 2)), F->s_2049), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("AND", 3)) || rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("OR", 2))) || rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("XOR", 3))) && (f_set_operands_668(F->e_696, F->want_697) != NULL))) {
F->a_2051 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_696)).a, f_set_operands_668(F->e_696, F->want_697), &F->ta_2041));
F->b_2052 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_696)).b, F->ta_2041, &F->tb_2042));
f_check_type_223(F->tb_2042, F->ta_2041, rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
F->t_698v = F->ta_2041;
if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_inter(", 12), F->a_2051), rt_str(", ", 2)), F->b_2052), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_union(", 12), F->a_2051), rt_str(", ", 2)), F->b_2052), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_xor(", 10), F->a_2051), rt_str(", ", 2)), F->b_2052), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("AND", 3)) || rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("OR", 2))) || rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("XOR", 3)))) {
F->a_2053 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_696)).a, g_ty_bool_896, &F->ta_2041));
F->b_2054 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_696)).b, g_ty_bool_896, &F->tb_2042));
f_check_type_223(F->ta_2041, g_ty_bool_896, rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
f_check_type_223(F->tb_2042, g_ty_bool_896, rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2053), rt_str(" && ", 4)), F->b_2054), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2053), rt_str(" || ", 4)), F->b_2054), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2053), rt_str(" != ", 4)), F->b_2054), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("&", 1)) && (F->want_697 != NULL)) && ((*(P821)rt_nil_check(f_base_of_214(F->want_697))).kind == (((rt_int)6LL))))) {
F->at_2055 = NULL;
F->at_2055 = f_base_of_214(F->want_697);
F->a_2056 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_696)).a, F->at_2055, &F->ta_2041));
F->b_2057 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_696)).b, F->at_2055, &F->tb_2042));
f_check_type_223(F->ta_2041, F->at_2055, rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
f_check_type_223(F->tb_2042, F->at_2055, rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
if (((rt_r_ichk((*(P821)rt_nil_check(F->at_2055)).ndim) != ((rt_int)1LL)) || ((*(P821)rt_nil_check(f_base_of_214((*(P821)rt_nil_check(F->at_2055)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_630(F->at_2055);
F->t_698v = F->at_2055;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_225(F->at_2055)), rt_str("(", 1)), F->a_2056), rt_str(", ", 2)), F->b_2057), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("&", 1))) {
F->wa_2058 = NULL;
F->wb_2059 = NULL;
F->ws_2060 = NULL;
F->ce_2061 = NULL;
F->ce_2061 = g_ty_ascii_898;
if (((F->want_697 != NULL) && (rt_r_ichk((*(P821)rt_nil_check(F->want_697)).kind) == (((rt_int)5LL))))) {
F->ws_2060 = F->want_697;
F->ce_2061 = f_str_elem_209(F->want_697);
}
if ((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_696)).a)).kind) == (((rt_int)4LL)))) {
F->wa_2058 = F->ce_2061;
} else {
F->wa_2058 = F->ws_2060;
}
if ((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_696)).b)).kind) == (((rt_int)4LL)))) {
F->wb_2059 = F->ce_2061;
} else {
F->wb_2059 = F->ws_2060;
}
{
F->a_2062 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_696)).a, F->wa_2058, &F->ta_2041));
F->b_2063 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_696)).b, F->wb_2059, &F->tb_2042));
F->t_698v = g_ty_string_899;
if ((rt_r_ichk((*(P821)rt_nil_check(F->ta_2041)).kind) == (((rt_int)5LL)))) {
F->t_698v = F->ta_2041;
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->tb_2042)).kind) == (((rt_int)5LL)))) {
F->t_698v = F->tb_2042;
} else if ((!f_same_212(F->ta_2041, g_ty_ascii_898))) {
F->t_698v = f_new_typ_174((((rt_int)5LL)));
(*(P821)rt_nil_check(F->t_698v)).elem = F->ta_2041;
}
if (((rt_r_ichk((*(P821)rt_nil_check(F->ta_2041)).kind) == (((rt_int)6LL))) && (rt_r_ichk((*(P821)rt_nil_check(F->tb_2042)).kind) == (((rt_int)6LL))))) {
f_need_slice_630(F->ta_2041);
f_check_type_223(F->tb_2042, F->ta_2041, rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
F->t_698v = F->ta_2041;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_225(F->ta_2041)), rt_str("(", 1)), F->a_2062), rt_str(", ", 2)), F->b_2063), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->ta_2041)).kind) == (((rt_int)5LL)))) {
f_check_type_223(f_str_cat_part_663(F->tb_2042), f_str_elem_209(F->ta_2041), rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->tb_2042)).kind) == (((rt_int)5LL)))) {
f_check_type_223(F->ta_2041, f_str_elem_209(F->tb_2042), rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
} else {
f_check_type_223(F->tb_2042, F->ta_2041, rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
}
if (((rt_r_ichk((*(P821)rt_nil_check(F->ta_2041)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P821)rt_nil_check(F->tb_2042)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2062), rt_str(", ", 2)), F->b_2063), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->ta_2041)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P821)rt_nil_check(F->tb_2042)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2062), rt_str(", ", 2)), F->b_2063), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->ta_2041)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P821)rt_nil_check(F->tb_2042)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2062), rt_str(", ", 2)), F->b_2063), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->ta_2041)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P821)rt_nil_check(F->tb_2042)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2062), rt_str(", ", 2)), F->b_2063), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("=", 1)) || rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("/=", 2))) && (f_as_subtype_285((*(P815)rt_nil_check(F->e_696)).a) != NULL)) && (f_as_subtype_285((*(P815)rt_nil_check(F->e_696)).b) != NULL))) {
F->t_698v = g_ty_bool_896;
F->result_ = f_subtype_compare_687(f_as_subtype_285((*(P815)rt_nil_check(F->e_696)).a), f_as_subtype_285((*(P815)rt_nil_check(F->e_696)).b), &(((P808)rt_nil_check(F->op_2040))->all), rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
goto ret_;
}
if ((f_is_rel_107(&(((P808)rt_nil_check(F->op_2040))->all)) && (!rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("IN", 2))))) {
if ((((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_696)).a)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_696)).a)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_696)).a)).kind) == (((rt_int)1LL))))) {
F->dummy_2064 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_696)).b, NULL, &F->hint_2043));
} else if ((rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->e_696)).a)).kind) == (((rt_int)14LL)))) {
F->hint_2043 = f_peek_type_665((*(P815)rt_nil_check(F->e_696)).b);
}
{
F->a_2065 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_696)).a, F->hint_2043, &F->ta_2041));
F->b_2066 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_696)).b, F->ta_2041, &F->tb_2042));
F->ct_2067 = NULL;
F->ct_2067 = f_base_of_214(F->ta_2041);
F->t_698v = g_ty_bool_896;
if (((rt_r_ichk((*(P821)rt_nil_check(F->ta_2041)).kind) != (((rt_int)11LL))) && (rt_r_ichk((*(P821)rt_nil_check(F->tb_2042)).kind) != (((rt_int)11LL))))) {
f_check_type_223(F->tb_2042, F->ta_2041, rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->ta_2041)).kind) == (((rt_int)11LL)))) {
F->ct_2067 = f_base_of_214(F->tb_2042);
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->ct_2067)).kind) == (((rt_int)5LL)))) {
if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2065), rt_str(", ", 2)), F->b_2066), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2065), rt_str(", ", 2)), F->b_2066), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2065), rt_str(", ", 2)), F->b_2066), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2065), rt_str(", ", 2)), F->b_2066), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2066), rt_str(", ", 2)), F->a_2065), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2066), rt_str(", ", 2)), F->a_2065), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->ct_2067)).kind) == (((rt_int)16LL)))) {
if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), F->a_2065), rt_str(", ", 2)), F->b_2066), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!y_set_eq(", 11), F->a_2065), rt_str(", ", 2)), F->b_2066), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->a_2065), rt_str(", ", 2)), F->b_2066), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->b_2066), rt_str(", ", 2)), F->a_2065), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->a_2065), rt_str(", ", 2)), F->b_2066), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->b_2066), rt_str(", ", 2)), F->a_2065), rt_str(")", 1));
goto ret_;
}
if ((((((((rt_r_ichk((*(P821)rt_nil_check(F->ct_2067)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->ct_2067)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P821)rt_nil_check(F->ct_2067)).kind) == (((rt_int)11LL)))) || (rt_r_ichk((*(P821)rt_nil_check(F->ct_2067)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P821)rt_nil_check(F->ct_2067)).kind) == (((rt_int)12LL)))) && (!rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("=", 1)))) && (!rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("/=", 2))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_356(F->ct_2067)) {
if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_368(F->ct_2067, &F->a_2065, &F->b_2066);
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_368(F->ct_2067, &F->a_2065, &F->b_2066)), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2065), rt_str(" == ", 4)), F->b_2066), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2065), rt_str(" != ", 4)), F->b_2066), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2065), rt_str(" ", 1)), (((P808)rt_nil_check(F->op_2040))->all)), rt_str(" ", 1)), F->b_2066), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2068 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_696)).a, F->want_697, &F->ta_2041));
F->b_2069 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->e_696)).b, F->ta_2041, &F->tb_2042));
if (((rt_r_ichk((*(P821)rt_nil_check(F->ta_2041)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P821)rt_nil_check(F->tb_2042)).kind) == (((rt_int)3LL))))) {
F->t_698v = g_ty_float_897;
if (((rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("+", 1)) || rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("-", 1))) || rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2068), rt_str(" ", 1)), (((P808)rt_nil_check(F->op_2040))->all)), rt_str(" ", 1)), F->b_2069), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_2068), rt_str(", ", 2)), F->b_2069), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_2068), rt_str(", ", 2)), F->b_2069), rt_str(")", 1));
goto ret_;
}
}
f_check_type_223(F->ta_2041, g_ty_int_895, rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
f_check_type_223(F->tb_2042, g_ty_int_895, rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line));
F->t_698v = g_ty_int_895;
if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2068), rt_str(", ", 2)), F->b_2069), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2068), rt_str(", ", 2)), F->b_2069), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2068), rt_str(", ", 2)), F->b_2069), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2068), rt_str(", ", 2)), F->b_2069), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2068), rt_str(", ", 2)), F->b_2069), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P808)rt_nil_check(F->op_2040))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2068), rt_str(", ", 2)), F->b_2069), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_696)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P808)rt_nil_check(F->op_2040))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_698) = F->t_698v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_704(P815 e_700, P821 want_701, P817 ctx_702, P821 *t_703) {
  struct f_constructor_704fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_700 = e_700;
F->want_701 = want_701;
F->ctx_702 = ctx_702;
F->t_703 = t_703;
F->t_703v = *F->t_703;
F->it_2070 = NULL;
F->it_2070 = (*(P815)rt_nil_check(F->e_700)).a;
F->f_2071 = NULL;
F->vt_2072 = NULL;
if (((F->want_701 != NULL) && (rt_r_ichk((*(P821)rt_nil_check(F->want_701)).kind) == (((rt_int)16LL))))) {
F->s_2073 = NULL;
F->s_2073 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_294(F->want_701); b_; }));
F->t_703v = F->want_701;
while ((F->it_2070 != NULL)) {
F->v_2074 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->it_2070)).b, (*(P821)rt_nil_check(F->want_701)).elem, &F->vt_2072));
f_check_type_223(F->vt_2072, (*(P821)rt_nil_check(F->want_701)).elem, rt_r_ichk((*(P815)rt_nil_check(F->e_700)).line));
F->s_2073 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_add(", 10), (((P808)rt_nil_check(F->s_2073))->all)), rt_str(", ", 2)), F->v_2074), rt_str(")", 1)); b_; }));
F->it_2070 = (*(P815)rt_nil_check(F->it_2070)).next;
}
F->result_ = (((P808)rt_nil_check(F->s_2073))->all);
goto ret_;
}
if (((F->want_701 != NULL) && (rt_r_ichk((*(P821)rt_nil_check(F->want_701)).kind) == (((rt_int)15LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_700)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P808)rt_nil_check((*(P821)rt_nil_check(F->want_701)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_701 != NULL) && (rt_r_ichk((*(P821)rt_nil_check(F->want_701)).kind) == (((rt_int)6LL))))) {
F->result_ = f_array_cons_718(F->e_700, F->want_701, F->ctx_702, &F->t_703v);
goto ret_;
}
if (((F->want_701 != NULL) && (rt_r_ichk((*(P821)rt_nil_check(F->want_701)).kind) == (((rt_int)17LL))))) {
if ((((((F->it_2070 == NULL) || ((*(P815)rt_nil_check(F->it_2070)).next != NULL)) || ((*(P815)rt_nil_check(F->it_2070)).a == NULL)) || ((*(P815)rt_nil_check((*(P815)rt_nil_check(F->it_2070)).a)).next != NULL)) || (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->it_2070)).a)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_700)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2071 = (*(P821)rt_nil_check(F->want_701)).fields;
{
F->i_2075 = RT_R_IUNDEF;
F->i_2075 = ((rt_int)0LL);
F->tmp_2076 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2071 != NULL) && (!rt_str_eq((((P808)rt_nil_check((*(P823)rt_nil_check(F->f_2071)).name))->all), (((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->it_2070)).a)).a)).name))->all))))) {
F->i_2075 = rt_add(rt_r_ichk(F->i_2075), ((rt_int)1LL));
F->f_2071 = (*(P823)rt_nil_check(F->f_2071)).next;
}
if ((F->f_2071 == NULL)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_700)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->it_2070)).a)).a)).name))->all)); b_; }));
}
F->t_703v = F->want_701;
g_cons_ctx_886 = (*(P823)rt_nil_check(F->f_2071)).c;
{
F->v_2077 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->it_2070)).b, (*(P823)rt_nil_check(F->f_2071)).t, &F->vt_2072));
f_check_type_223(F->vt_2072, (*(P823)rt_nil_check(F->f_2071)).t, rt_r_ichk((*(P815)rt_nil_check(F->e_700)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->want_701)), rt_str(" ", 1)), F->tmp_2076), rt_str("; ", 2)), F->tmp_2076), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk(F->i_2075))), rt_str("; ", 2)), F->tmp_2076), rt_str(".u.", 3)), f_field_c_17(&(((P808)rt_nil_check((*(P823)rt_nil_check(F->f_2071)).name))->all))), rt_str(" = ", 3)), f_comp_value_708((*(P823)rt_nil_check(F->f_2071)).t, (*(P823)rt_nil_check(F->f_2071)).c, &F->v_2077)), rt_str("; ", 2)), F->tmp_2076), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_701 == NULL) || (rt_r_ichk((*(P821)rt_nil_check(F->want_701)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_700)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_703v = F->want_701;
F->f_2071 = (*(P821)rt_nil_check(F->want_701)).fields;
{
F->tmp_2078 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2079 = NULL;
F->parts_2079 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->want_701)), rt_str(" ", 1)), F->tmp_2078), rt_str(";", 1)); b_; }));
while ((F->it_2070 != NULL)) {
F->k_2080 = NULL;
F->k_2080 = (*(P815)rt_nil_check(F->it_2070)).a;
F->shared_2081 = NULL;
if ((F->k_2080 == NULL)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_700)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2080 != NULL)) {
if (((((F->f_2071 == NULL) || (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->k_2080)).a)).kind) != (((rt_int)7LL)))) || ((*(P815)rt_nil_check(F->k_2080)).b != NULL)) || (!rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check((*(P815)rt_nil_check(F->k_2080)).a)).name))->all), (((P808)rt_nil_check((*(P823)rt_nil_check(F->f_2071)).name))->all))))) {
if ((F->f_2071 == NULL)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_700)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_700)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P808)rt_nil_check((*(P823)rt_nil_check(F->f_2071)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P815)rt_nil_check((*(P815)rt_nil_check(F->it_2070)).a)).next == NULL)) {
g_cons_ctx_886 = (*(P823)rt_nil_check(F->f_2071)).c;
{
F->v_2082 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->it_2070)).b, (*(P823)rt_nil_check(F->f_2071)).t, &F->vt_2072));
f_check_type_223(F->vt_2072, (*(P823)rt_nil_check(F->f_2071)).t, rt_r_ichk((*(P815)rt_nil_check(F->e_700)).line));
F->parts_2079 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->parts_2079))->all), rt_str(" ", 1)), F->tmp_2078), rt_str(".", 1)), f_field_c_17(&(((P808)rt_nil_check((*(P823)rt_nil_check(F->f_2071)).name))->all))), rt_str(" = ", 3)), f_comp_value_708((*(P823)rt_nil_check(F->f_2071)).t, (*(P823)rt_nil_check(F->f_2071)).c, &F->v_2082)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2081 == NULL)) {
F->v_2083 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->it_2070)).b, (*(P823)rt_nil_check(F->f_2071)).t, &F->vt_2072));
F->shared_2081 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_223(F->vt_2072, (*(P823)rt_nil_check(F->f_2071)).t, rt_r_ichk((*(P815)rt_nil_check(F->e_700)).line));
F->parts_2079 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->parts_2079))->all), rt_str(" ", 1)), f_ctype_225((*(P823)rt_nil_check(F->f_2071)).t)), rt_str(" ", 1)), (((P808)rt_nil_check(F->shared_2081))->all)), rt_str(" = ", 3)), F->v_2083), rt_str(";", 1)); b_; }));
}
f_check_type_223(F->vt_2072, (*(P823)rt_nil_check(F->f_2071)).t, rt_r_ichk((*(P815)rt_nil_check(F->e_700)).line));
F->parts_2079 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->parts_2079))->all), rt_str(" ", 1)), F->tmp_2078), rt_str(".", 1)), f_field_c_17(&(((P808)rt_nil_check((*(P823)rt_nil_check(F->f_2071)).name))->all))), rt_str(" = ", 3)), f_comp_value_708((*(P823)rt_nil_check(F->f_2071)).t, (*(P823)rt_nil_check(F->f_2071)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364((*(P823)rt_nil_check(F->f_2071)).t, &(((P808)rt_nil_check(F->shared_2081))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2071 = (*(P823)rt_nil_check(F->f_2071)).next;
F->k_2080 = (*(P815)rt_nil_check(F->k_2080)).next;
}
F->it_2070 = (*(P815)rt_nil_check(F->it_2070)).next;
}
if ((F->f_2071 != NULL)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_700)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->parts_2079))->all), rt_str(" ", 1)), F->tmp_2078), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_703) = F->t_703v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_708(P821 t_705, P817 c_706, rstr *v_707) {
  struct f_comp_value_708fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_705 = t_705;
F->c_706 = c_706;
F->v_707 = v_707;
if (((F->c_706 == NULL) || (((*(P817)rt_nil_check(F->c_706)).lo != NULL) && f_has_at_710(&(((P808)rt_nil_check((*(P817)rt_nil_check(F->c_706)).lo))->all))))) {
F->result_ = f_copy_code_364(F->t_705, &(*F->v_707));
goto ret_;
} else if ((((rt_r_ichk((*(P821)rt_nil_check(F->t_705)).kind) == (((rt_int)5LL))) && ((*(P817)rt_nil_check(F->c_706)).slen != NULL)) && (!f_has_at_710(&(((P808)rt_nil_check((*(P817)rt_nil_check(F->c_706)).slen))->all))))) {
F->result_ = f_copy_code_364(F->t_705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_707)), rt_str(", ", 2)), (((P808)rt_nil_check((*(P817)rt_nil_check(F->c_706)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_204(F->t_705, F->c_706, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_364(F->t_705, &(*F->v_707)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_710(rstr *s_709) {
  struct f_has_at_710fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_709 = s_709;
{ rt_int lo2085 = ((rt_int)1LL), hi2086 = ((rt_int)(((*F->s_709)).len));
for (rt_int it2087 = lo2085; it2087 <= hi2086; it2087++) {
F->i_2084 = it2087;
if ((rt_r_echk(rt_str_get((*F->s_709), F->i_2084)) == 64)) {
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

static rstr f_set_elem_713(P821 st_711, rstr *v_712) {
  struct f_set_elem_713fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_711 = st_711;
F->v_712 = v_712;
F->result_ = (*F->v_712);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_718(P815 e_714, P821 at_715, P817 ctx_716, P821 *t_717) {
  struct f_array_cons_718fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_714 = e_714;
F->at_715 = at_715;
F->ctx_716 = ctx_716;
F->t_717 = t_717;
F->t_717v = *F->t_717;
F->tmp_2088 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2089 = NULL;
F->parts_2089 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225(F->at_715)), rt_str(" ", 1)), F->tmp_2088), rt_str(";", 1)); b_; }));
F->it_2090 = NULL;
F->it_2090 = (*(P815)rt_nil_check(F->e_714)).a;
F->positional_2091 = RT_R_EUNDEF;
F->positional_2091 = 1;
F->t_717v = F->at_715;
while ((F->it_2090 != NULL)) {
if (((*(P815)rt_nil_check(F->it_2090)).a != NULL)) {
F->positional_2091 = 0;
}
F->it_2090 = (*(P815)rt_nil_check(F->it_2090)).next;
}
{ rt_int lo2093 = ((rt_int)1LL), hi2094 = rt_r_ichk((*(P821)rt_nil_check(F->at_715)).ndim);
for (rt_int it2095 = lo2093; it2095 <= hi2094; it2095++) {
F->k_2092 = it2095;
F->lo_2096 = NULL;
F->hi_2097 = NULL;
if ((((F->ctx_716 != NULL) && (f_cons_lo_243(F->ctx_716, F->k_2092) != NULL)) && (!f_has_at_710(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P808)rt_nil_check(f_cons_lo_243(F->ctx_716, F->k_2092)))->all); b_; }))))) {
F->lo_2096 = f_cons_lo_243(F->ctx_716, F->k_2092);
F->hi_2097 = f_cons_hi_246(F->ctx_716, F->k_2092);
} else if (((rt_r_ichk((*(P821)rt_nil_check(F->at_715)).ndim) == ((rt_int)1LL)) && rt_r_echk(F->positional_2091))) {
if (((*(P821)rt_nil_check(f_base_of_214((*(P821)rt_nil_check(F->at_715)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2096 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2096 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2097 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P808)rt_nil_check(F->lo_2096))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_67((*(P815)rt_nil_check(F->e_714)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_714)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2089 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->parts_2089))->all), rt_str(" ", 1)), F->tmp_2088), rt_str(".", 1)), f_dim_lo_233(F->k_2092)), rt_str(" = ", 3)), (((P808)rt_nil_check(F->lo_2096))->all)), rt_str("; ", 2)), F->tmp_2088), rt_str(".", 1)), f_dim_hi_235(F->k_2092)), rt_str(" = ", 3)), (((P808)rt_nil_check(F->hi_2097))->all)), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P821)rt_nil_check(F->at_715)).ndim) == ((rt_int)1LL))) {
F->parts_2089 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->parts_2089))->all), rt_str(" ", 1)), F->tmp_2088), rt_str(".lo2 = ", 7)), F->tmp_2088), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2089 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->parts_2089))->all), rt_str(" rt_int n_", 10)), F->tmp_2088), rt_str(" = ", 3)), f_acnt_240(F->at_715, &F->tmp_2088)), rt_str("; ", 2)), F->tmp_2088), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_225((*(P821)rt_nil_check(F->at_715)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2088), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2088), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2088), rt_str(" + 1);", 6)); b_; }));
F->parts_2089 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->parts_2089))->all), f_fill_items_724((*(P815)rt_nil_check(F->e_714)).a, F->at_715, &F->tmp_2088, NULL, ((rt_int)1LL))); b_; }));
F->parts_2089 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->parts_2089))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2088), rt_str("; i_++) if (seen_", 17)), F->tmp_2088), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2088), rt_str("; })", 4)); b_; }));
F->result_ = (((P808)rt_nil_check(F->parts_2089))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_717) = F->t_717v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_724(P815 items_719, P821 at_720, rstr *tmp_721, P819 prefix_722, rt_int dim_723) {
  struct f_fill_items_724fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_719 = items_719;
F->at_720 = at_720;
F->tmp_721 = tmp_721;
F->prefix_722 = prefix_722;
F->dim_723 = dim_723;
F->it_2098 = NULL;
F->it_2098 = F->items_719;
F->pos_2099 = RT_R_IUNDEF;
F->pos_2099 = ((rt_int)0LL);
F->r_2100 = NULL;
F->r_2100 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2101 = NULL;
while ((F->it_2098 != NULL)) {
if (((*(P815)rt_nil_check(F->it_2098)).a == NULL)) {
if (((F->dim_723 < rt_r_ichk((*(P821)rt_nil_check(F->at_720)).ndim)) && (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->it_2098)).b)).kind) == (((rt_int)14LL))))) {
F->r_2100 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_2100))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_723)), rt_str(" = ", 3)), (*F->tmp_721)), rt_str(".", 1)), f_dim_lo_233(F->dim_723)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2099))), rt_str("; ", 2)), f_fill_items_724((*(P815)rt_nil_check((*(P815)rt_nil_check(F->it_2098)).b)).a, F->at_720, &(*F->tmp_721), f_add_line_729(F->prefix_722, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_723)); b_; })), rt_add(F->dim_723, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2102 = rt_str_copy(f_item_value_734((*(P815)rt_nil_check(F->it_2098)).b, F->at_720, f_e_line_726(F->it_2098), &F->vt_2101));
if (((F->dim_723 == ((rt_int)1LL)) && (rt_r_ichk((*(P821)rt_nil_check(F->at_720)).ndim) > ((rt_int)1LL)))) {
F->r_2100 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_2100))->all), rt_str(" { ", 3)), F->v_2102), rt_str(" if (", 5)), f_itos_7(rt_r_ichk(F->pos_2099))), rt_str(" >= n_", 6)), (*F->tmp_721)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_721)), rt_str(".p[", 3)), f_itos_7(rt_r_ichk(F->pos_2099))), rt_str("] = ", 4)), f_copy_code_364((*(P821)rt_nil_check(F->at_720)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_721)), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->pos_2099))), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2100 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_2100))->all), rt_str(" { ", 3)), F->v_2102), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_723)), rt_str(" = ", 3)), (*F->tmp_721)), rt_str(".", 1)), f_dim_lo_233(F->dim_723)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2099))), rt_str("; ", 2)), f_store_at_744(F->at_720, &(*F->tmp_721), f_add_line_729(F->prefix_722, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_723)); b_; })), F->dim_723)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2099 = rt_add(rt_r_ichk(F->pos_2099), ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_723, f_list_len_67((*(P815)rt_nil_check(F->it_2098)).a)), ((rt_int)1LL)) == rt_r_ichk((*(P821)rt_nil_check(F->at_720)).ndim))) {
F->k_2103 = NULL;
F->k_2103 = (*(P815)rt_nil_check(F->it_2098)).a;
F->d_2104 = RT_R_IUNDEF;
F->d_2104 = F->dim_723;
F->pre_2105 = NULL;
F->pre_2105 = F->prefix_722;
F->loops_2106 = NULL;
F->loops_2106 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2107 = NULL;
F->ends_2107 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2108 = rt_str_copy(f_item_value_734((*(P815)rt_nil_check(F->it_2098)).b, F->at_720, rt_r_ichk((*(P815)rt_nil_check(F->it_2098)).line), &F->vt_2101));
while ((F->k_2103 != NULL)) {
F->xv_2109 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(rt_r_ichk(F->d_2104))));
F->loops_2106 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->loops_2106))->all), f_key_loop_739(F->k_2103, F->at_720, rt_r_ichk(F->d_2104), &F->xv_2109)); b_; }));
F->ends_2107 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->ends_2107))->all), rt_str(" }", 2)); b_; }));
F->pre_2105 = f_add_line_729(F->pre_2105, &F->xv_2109);
F->d_2104 = rt_add(rt_r_ichk(F->d_2104), ((rt_int)1LL));
F->k_2103 = (*(P815)rt_nil_check(F->k_2103)).next;
}
F->r_2100 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_2100))->all), rt_str(" { ", 3)), F->v_2108), (((P808)rt_nil_check(F->loops_2106))->all)), rt_str(" ", 1)), f_store_at_744(F->at_720, &(*F->tmp_721), F->pre_2105, rt_r_ichk((*(P821)rt_nil_check(F->at_720)).ndim))), (((P808)rt_nil_check(F->ends_2107))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_723 == rt_r_ichk((*(P821)rt_nil_check(F->at_720)).ndim)) || (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->it_2098)).b)).kind) == (((rt_int)14LL))))) {
F->k_2110 = NULL;
F->k_2110 = (*(P815)rt_nil_check(F->it_2098)).a;
while ((F->k_2110 != NULL)) {
F->xv_2111 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_723)));
if ((F->dim_723 < rt_r_ichk((*(P821)rt_nil_check(F->at_720)).ndim))) {
F->r_2100 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_2100))->all), rt_str(" {", 2)), f_key_loop_739(F->k_2110, F->at_720, F->dim_723, &F->xv_2111)), rt_str(" ", 1)), f_fill_items_724((*(P815)rt_nil_check((*(P815)rt_nil_check(F->it_2098)).b)).a, F->at_720, &(*F->tmp_721), f_add_line_729(F->prefix_722, &F->xv_2111), rt_add(F->dim_723, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2112 = rt_str_copy(f_item_value_734((*(P815)rt_nil_check(F->it_2098)).b, F->at_720, rt_r_ichk((*(P815)rt_nil_check(F->it_2098)).line), &F->vt_2101));
F->r_2100 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->r_2100))->all), rt_str(" { ", 3)), F->v_2112), f_key_loop_739(F->k_2110, F->at_720, F->dim_723, &F->xv_2111)), rt_str(" ", 1)), f_store_at_744(F->at_720, &(*F->tmp_721), f_add_line_729(F->prefix_722, &F->xv_2111), F->dim_723)), rt_str(" } }", 4)); b_; }));
}
F->k_2110 = (*(P815)rt_nil_check(F->k_2110)).next;
}
} else {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->it_2098)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub(rt_r_ichk((*(P821)rt_nil_check(F->at_720)).ndim), F->dim_723), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2098 = (*(P815)rt_nil_check(F->it_2098)).next;
}
F->result_ = (((P808)rt_nil_check(F->r_2100))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_726(P815 e_725) {
  struct f_e_line_726fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_725 = e_725;
F->result_ = rt_r_ichk((*(P815)rt_nil_check(F->e_725)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P819 f_add_line_729(P819 l_727, rstr *s_728) {
  struct f_add_line_729fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_727 = l_727;
F->s_728 = s_728;
F->r_2113 = NULL;
F->tail_2114 = NULL;
F->x_2115 = NULL;
F->p_2116 = NULL;
F->p_2116 = F->l_727;
while ((F->p_2116 != NULL)) {
{ R820 *cell2117 = rt_alloc(sizeof(R820));
(*cell2117).s = NULL;
(*cell2117).next = NULL;
F->x_2115 = cell2117;
}
(*(P819)rt_nil_check(F->x_2115)).s = (*(P819)rt_nil_check(F->p_2116)).s;
if ((F->tail_2114 == NULL)) {
F->r_2113 = F->x_2115;
} else {
(*(P819)rt_nil_check(F->tail_2114)).next = F->x_2115;
}
F->tail_2114 = F->x_2115;
F->p_2116 = (*(P819)rt_nil_check(F->p_2116)).next;
}
{ R820 *cell2118 = rt_alloc(sizeof(R820));
(*cell2118).s = NULL;
(*cell2118).next = NULL;
F->x_2115 = cell2118;
}
(*(P819)rt_nil_check(F->x_2115)).s = f_mk_3(&(*F->s_728));
if ((F->tail_2114 == NULL)) {
F->r_2113 = F->x_2115;
} else {
(*(P819)rt_nil_check(F->tail_2114)).next = F->x_2115;
}
F->result_ = F->r_2113;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_734(P815 e_730, P821 at_731, rt_int line_732, P821 *vt_733) {
  struct f_item_value_734fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_730 = e_730;
F->at_731 = at_731;
F->line_732 = line_732;
F->vt_733 = vt_733;
F->vt_733v = *F->vt_733;
g_cons_ctx_886 = (*(P821)rt_nil_check(F->at_731)).elemcons;
{
F->v_2119 = rt_str_copy(f_gexpr_649(F->e_730, (*(P821)rt_nil_check(F->at_731)).elem, &F->vt_733v));
f_check_type_223(F->vt_733v, (*(P821)rt_nil_check(F->at_731)).elem, F->line_732);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_225((*(P821)rt_nil_check(F->at_731)).elem), rt_str(" v_ = ", 6)), f_comp_value_708((*(P821)rt_nil_check(F->at_731)).elem, (*(P821)rt_nil_check(F->at_731)).elemcons, &F->v_2119)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_733) = F->vt_733v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_739(P815 k_735, P821 at_736, rt_int d_737, rstr *xv_738) {
  struct f_key_loop_739fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_735 = k_735;
F->at_736 = at_736;
F->d_737 = d_737;
F->xv_738 = xv_738;
F->it_2120 = NULL;
F->lo_2121 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->k_735)).a, f_idx_type_249(F->at_736, F->d_737), &F->it_2120));
f_check_type_223(F->it_2120, f_idx_type_249(F->at_736, F->d_737), rt_r_ichk((*(P815)rt_nil_check(F->k_735)).line));
if (((*(P815)rt_nil_check(F->k_735)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_738)), rt_str(" = ", 3)), F->lo_2121), rt_str(";", 1));
goto ret_;
}
{
F->hi_2122 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->k_735)).b, f_idx_type_249(F->at_736, F->d_737), &F->it_2120));
f_check_type_223(F->it_2120, f_idx_type_249(F->at_736, F->d_737), rt_r_ichk((*(P815)rt_nil_check(F->k_735)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_738)), rt_str(" = ", 3)), F->lo_2121), rt_str(", h", 3)), (*F->xv_738)), rt_str(" = ", 3)), F->hi_2122), rt_str("; ", 2)), (*F->xv_738)), rt_str(" <= h", 5)), (*F->xv_738)), rt_str("; ", 2)), (*F->xv_738)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_744(P821 at_740, rstr *tmp_741, P819 xs_742, rt_int n_743) {
  struct f_store_at_744fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_740 = at_740;
F->tmp_741 = tmp_741;
F->xs_742 = xs_742;
F->n_743 = n_743;
F->off_2123 = NULL;
F->x_2124 = NULL;
F->x_2124 = F->xs_742;
F->k_2125 = RT_R_IUNDEF;
F->k_2125 = ((rt_int)0LL);
while ((F->x_2124 != NULL)) {
F->k_2125 = rt_add(rt_r_ichk(F->k_2125), ((rt_int)1LL));
{
F->l_2126 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_741), rt_str(".", 1)), f_dim_lo_233(rt_r_ichk(F->k_2125))));
F->h_2127 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_741), rt_str(".", 1)), f_dim_hi_235(rt_r_ichk(F->k_2125))));
if ((F->off_2123 == NULL)) {
F->off_2123 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P808)rt_nil_check((*(P819)rt_nil_check(F->x_2124)).s))->all)), rt_str(", ", 2)), F->l_2126), rt_str(", ", 2)), F->h_2127), rt_str(") - ", 4)), F->l_2126), rt_str(")", 1)); b_; }));
} else {
F->off_2123 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P808)rt_nil_check(F->off_2123))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2126), rt_str(", ", 2)), F->h_2127), rt_str(") + rt_index(", 13)), (((P808)rt_nil_check((*(P819)rt_nil_check(F->x_2124)).s))->all)), rt_str(", ", 2)), F->l_2126), rt_str(", ", 2)), F->h_2127), rt_str(") - ", 4)), F->l_2126), rt_str(")", 1)); b_; }));
}
}
F->x_2124 = (*(P819)rt_nil_check(F->x_2124)).next;
}
if ((rt_r_ichk(F->k_2125) != rt_r_ichk((*(P821)rt_nil_check(F->at_740)).ndim))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7(rt_r_ichk((*(P821)rt_nil_check(F->at_740)).ndim))), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P808)rt_nil_check(F->off_2123))->all)), rt_str("; ", 2)), (*F->tmp_741)), rt_str(".p[o_] = ", 9)), f_copy_code_364((*(P821)rt_nil_check(F->at_740)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_741)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_747(P825 y_745, P815 args_746) {
  struct f_fits_747fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_745 = y_745;
F->args_746 = args_746;
F->a_2128 = NULL;
F->a_2128 = F->args_746;
F->pm_2129 = NULL;
F->pm_2129 = (*(P825)rt_nil_check(F->y_745)).params;
F->t_2130 = NULL;
F->saved_2131 = NULL;
F->saved_2131 = g_code_865;
F->ok_2132 = RT_R_EUNDEF;
F->ok_2132 = 1;
F->lv_2133 = NULL;
F->lc_2134 = NULL;
F->ro_2135 = RT_R_EUNDEF;
g_trial_893 = rt_add(rt_r_ichk(g_trial_893), ((rt_int)1LL));
g_code_865 = f_new_buffer_24();
{ rt_frame xf2136;
if (RT_TRY(xf2136)) {
while (((rt_r_echk(F->ok_2132) && (F->a_2128 != NULL)) && (F->pm_2129 != NULL))) {
if (((rt_r_ichk((*(P827)rt_nil_check(F->pm_2129)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P827)rt_nil_check(F->pm_2129)).mode) == (((rt_int)3LL))))) {
f_lvalue_618(F->a_2128, &F->lv_2133, &F->t_2130, &F->lc_2134, &F->ro_2135);
} else {
F->v_2138 = rt_str_copy(f_gexpr_649(F->a_2128, (*(P827)rt_nil_check(F->pm_2129)).t, &F->t_2130));
}
if ((!(f_same_212(F->t_2130, (*(P827)rt_nil_check(F->pm_2129)).t) || ((rt_r_ichk((*(P821)rt_nil_check(F->t_2130)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P821)rt_nil_check((*(P827)rt_nil_check(F->pm_2129)).t)).kind) == (((rt_int)8LL))))))) {
F->ok_2132 = 0;
}
F->a_2128 = (*(P815)rt_nil_check(F->a_2128)).next;
F->pm_2129 = (*(P827)rt_nil_check(F->pm_2129)).next;
}
if (((F->a_2128 != NULL) || (F->pm_2129 != NULL))) {
F->ok_2132 = 0;
}
RT_POP(xf2136);
} else {
RT_POP(xf2136);
int x2137 = rt_xcur;
if (0 || x2137 == ex_compile_error_1) {
F->ok_2132 = 0;
} else {
rt_raise(x2137);
}
}
}
g_trial_893 = rt_sub(rt_r_ichk(g_trial_893), ((rt_int)1LL));
g_code_865 = F->saved_2131;
F->result_ = rt_r_echk(F->ok_2132);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P825 f_resolve_overload_753(rstr *name_748, P815 tt_749, P815 args_750, int is_stmt_751, rt_int line_752) {
  struct f_resolve_overload_753fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_748 = name_748;
F->tt_749 = tt_749;
F->args_750 = args_750;
F->is_stmt_751 = is_stmt_751;
F->line_752 = line_752;
F->y_2139 = NULL;
F->first_2140 = NULL;
F->n_2141 = RT_R_IUNDEF;
F->n_2141 = ((rt_int)0LL);
{ rt_int lo2143 = ((rt_int)1LL), hi2144 = ((rt_int)3LL);
for (rt_int it2145 = lo2143; it2145 <= hi2144; it2145++) {
F->pass_2142 = it2145;
F->y_2139 = f_overload_chain_759(&(*F->name_748), F->pass_2142);
while ((F->y_2139 != NULL)) {
if (((rt_str_eq((((P808)rt_nil_check((*(P825)rt_nil_check(F->y_2139)).name))->all), (*F->name_748)) && ((rt_r_ichk((*(P825)rt_nil_check(F->y_2139)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P825)rt_nil_check(F->y_2139)).kind) == (((rt_int)4LL))))) && ((F->pass_2142 != ((rt_int)1LL)) || (rt_r_ichk((*(P825)rt_nil_check(F->y_2139)).depth) >= rt_r_ichk(g_gdepth_884))))) {
F->n_2141 = rt_add(rt_r_ichk(F->n_2141), ((rt_int)1LL));
if ((F->first_2140 == NULL)) {
F->first_2140 = F->y_2139;
}
if (((((rt_r_ichk((*(P825)rt_nil_check(F->y_2139)).kind) == (((rt_int)4LL))) == F->is_stmt_751) && f_tt_fits_756(F->y_2139, F->tt_749)) && f_fits_747(F->y_2139, F->args_750))) {
F->result_ = F->y_2139;
goto ret_;
}
}
F->y_2139 = (*(P825)rt_nil_check(F->y_2139)).chain;
}
}
}
if (f_is_builtin_761(&(*F->name_748))) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk(F->n_2141) > ((rt_int)1LL))) {
f_fail_23(F->line_752, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_748)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2140;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_756(P825 y_754, P815 tt_755) {
  struct f_tt_fits_756fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_754 = y_754;
F->tt_755 = tt_755;
F->f_2146 = NULL;
F->a_2147 = NULL;
F->saved_2148 = NULL;
F->saved_2148 = g_code_865;
F->ok_2149 = RT_R_EUNDEF;
F->ok_2149 = 1;
if ((((*(P825)rt_nil_check(F->y_754)).decl == NULL) || ((*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_754)).decl)).e == NULL))) {
F->result_ = (F->tt_755 == NULL);
goto ret_;
} else if ((F->tt_755 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2146 = (*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_754)).decl)).e;
F->a_2147 = F->tt_755;
g_trial_893 = rt_add(rt_r_ichk(g_trial_893), ((rt_int)1LL));
g_code_865 = f_new_buffer_24();
{ rt_frame xf2150;
if (RT_TRY(xf2150)) {
while (((rt_r_echk(F->ok_2149) && (F->f_2146 != NULL)) && (F->a_2147 != NULL))) {
F->fc_2152 = NULL;
F->ac_2153 = NULL;
F->fst_2154 = NULL;
F->fst_2154 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P815)rt_nil_check(F->f_2146)).line));
F->ft_2155 = NULL;
F->at_2156 = NULL;
(*(P815)rt_nil_check(F->fst_2154)).name = (*(P815)rt_nil_check(F->f_2146)).name;
F->ft_2155 = f_resolve_subtype_256(F->fst_2154, &F->fc_2152);
if ((rt_r_ichk((*(P815)rt_nil_check(F->a_2147)).kind) >= (((rt_int)70LL)))) {
F->at_2156 = f_resolve_subtype_256(F->a_2147, &F->ac_2153);
} else {
F->ast_2157 = NULL;
F->ast_2157 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P815)rt_nil_check(F->a_2147)).line));
(*(P815)rt_nil_check(F->ast_2157)).name = (*(P815)rt_nil_check(F->a_2147)).name;
F->at_2156 = f_resolve_subtype_256(F->ast_2157, &F->ac_2153);
}
F->ok_2149 = f_same_212(F->ft_2155, F->at_2156);
F->f_2146 = (*(P815)rt_nil_check(F->f_2146)).next;
F->a_2147 = (*(P815)rt_nil_check(F->a_2147)).next;
}
F->ok_2149 = ((rt_r_echk(F->ok_2149) && (F->f_2146 == NULL)) && (F->a_2147 == NULL));
RT_POP(xf2150);
} else {
RT_POP(xf2150);
int x2151 = rt_xcur;
if (0 || x2151 == ex_compile_error_1) {
F->ok_2149 = 0;
} else {
rt_raise(x2151);
}
}
}
g_trial_893 = rt_sub(rt_r_ichk(g_trial_893), ((rt_int)1LL));
g_code_865 = F->saved_2148;
F->result_ = rt_r_echk(F->ok_2149);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P825 f_overload_chain_759(rstr *name_757, rt_int pass_758) {
  struct f_overload_chain_759fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_757 = name_757;
F->pass_758 = pass_758;
if (((g_genv_852 == NULL) && (F->pass_758 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_758 == ((rt_int)2LL))) {
F->result_ = ({ A831 b_ = (((P829)rt_nil_check(g_genv_852))->all); b_.p[(rt_index(f_hash_152(&(*F->name_757)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A831 b_ = (((P829)rt_nil_check(g_table_851))->all); b_.p[(rt_index(f_hash_152(&(*F->name_757)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_761(rstr *n_760) {
  struct f_is_builtin_761fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_760 = n_760;
F->result_ = (((((((((((((((rt_str_eq((*F->n_760), rt_str("ABS", 3)) || rt_str_eq((*F->n_760), rt_str("POS", 3))) || rt_str_eq((*F->n_760), rt_str("SUCC", 4))) || rt_str_eq((*F->n_760), rt_str("PRED", 4))) || rt_str_eq((*F->n_760), rt_str("SQRT", 4))) || rt_str_eq((*F->n_760), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_760), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_760), rt_str("WRITE", 5))) || rt_str_eq((*F->n_760), rt_str("READLN", 6))) || rt_str_eq((*F->n_760), rt_str("SEND", 4))) || rt_str_eq((*F->n_760), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_760), rt_str("DELAY", 5))) || rt_str_eq((*F->n_760), rt_str("TIME", 4))) || rt_str_eq((*F->n_760), rt_str("CNVT", 4))) || rt_str_eq((*F->n_760), rt_str("FORMAT", 6))) || f_is_low_level_763(&(*F->n_760)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_763(rstr *n_762) {
  struct f_is_low_level_763fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_762 = n_762;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_762), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_762), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_762), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_762), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_762), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_762), rt_str("LOCK", 4))) || rt_str_eq((*F->n_762), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_762), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_762), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_762), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_762), rt_str("WAITING", 7))) || rt_str_eq((*F->n_762), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_762), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_762), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_762), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_762), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_762), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_762), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_762), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_767(P815 tt_764, rt_int line_765, P821 *t_766) {
  struct f_me_high_767fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_764 = tt_764;
F->line_765 = line_765;
F->t_766 = t_766;
F->t_766v = *F->t_766;
F->c_2158 = NULL;
if ((F->tt_764 == NULL)) {
f_fail_23(F->line_765, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_766v = f_resolve_subtype_256(F->tt_764, &F->c_2158);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_225(F->t_766v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_769(F->t_766v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_766) = F->t_766v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_769(P821 t_768) {
  struct f_type_tag_769fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_768 = t_768;
if (((*(P821)rt_nil_check(F->t_768)).name != NULL)) {
F->result_ = (((P808)rt_nil_check((*(P821)rt_nil_check(F->t_768)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_772(P815 e_770, rstr *name_771) {
  struct f_lock_ref_772fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_770 = e_770;
F->name_771 = name_771;
F->lv_2159 = NULL;
F->t_2160 = NULL;
F->c_2161 = NULL;
F->ro_2162 = RT_R_EUNDEF;
f_lvalue_618(F->e_770, &F->lv_2159, &F->t_2160, &F->c_2161, &F->ro_2162);
if ((rt_r_ichk((*(P821)rt_nil_check(F->t_2160)).kind) != (((rt_int)13LL)))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_770)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_771), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P808)rt_nil_check(F->lv_2159))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P825 f_user_op_775(rstr *op_773, P815 args_774) {
  struct f_user_op_775fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_773 = op_773;
F->args_774 = args_774;
F->y_2163 = NULL;
{ rt_int lo2165 = ((rt_int)1LL), hi2166 = ((rt_int)3LL);
for (rt_int it2167 = lo2165; it2167 <= hi2166; it2167++) {
F->pass_2164 = it2167;
F->y_2163 = f_overload_chain_759(&(*F->op_773), F->pass_2164);
while ((F->y_2163 != NULL)) {
if ((((rt_str_eq((((P808)rt_nil_check((*(P825)rt_nil_check(F->y_2163)).name))->all), (*F->op_773)) && (rt_r_ichk((*(P825)rt_nil_check(F->y_2163)).kind) == (((rt_int)3LL)))) && ((F->pass_2164 != ((rt_int)1LL)) || (rt_r_ichk((*(P825)rt_nil_check(F->y_2163)).depth) >= rt_r_ichk(g_gdepth_884)))) && f_fits_747(F->y_2163, F->args_774))) {
F->result_ = F->y_2163;
goto ret_;
}
F->y_2163 = (*(P825)rt_nil_check(F->y_2163)).chain;
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

static rstr f_gcall_779(P815 e_776, int is_stmt_777, P821 *t_778) {
  struct f_gcall_779fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_776 = e_776;
F->is_stmt_777 = is_stmt_777;
F->t_778 = t_778;
F->t_778v = *F->t_778;
F->fn_2168 = NULL;
F->fn_2168 = (*(P815)rt_nil_check(F->e_776)).a;
F->tt_2169 = NULL;
F->y_2170 = NULL;
F->args_2171 = NULL;
F->args_2171 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2172 = NULL;
F->a_2172 = (*(P815)rt_nil_check(F->e_776)).b;
F->pm_2173 = NULL;
F->lt_2174 = NULL;
F->vt_2175 = NULL;
F->lv_2176 = NULL;
F->lc_2177 = NULL;
F->ro_2178 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P815)rt_nil_check(F->fn_2168)).kind) == (((rt_int)12LL)))) {
F->tt_2169 = (*(P815)rt_nil_check(F->fn_2168)).b;
F->fn_2168 = (*(P815)rt_nil_check(F->fn_2168)).a;
}
F->y_2170 = f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_2168)).name))->all));
if ((F->y_2170 == NULL)) {
F->result_ = f_builtin_804(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_2168)).name))->all), F->tt_2169, (*(P815)rt_nil_check(F->e_776)).b, rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line), F->is_stmt_777, &F->t_778v);
goto ret_;
}
if ((((rt_r_ichk((*(P825)rt_nil_check(F->y_2170)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P825)rt_nil_check(F->y_2170)).kind) != (((rt_int)4LL)))) && (rt_r_ichk((*(P825)rt_nil_check(F->y_2170)).kind) != (((rt_int)10LL))))) {
F->alt_2179 = NULL;
F->alt_2179 = f_resolve_overload_753(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_2168)).name))->all), F->tt_2169, (*(P815)rt_nil_check(F->e_776)).b, F->is_stmt_777, rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line));
if ((F->alt_2179 != NULL)) {
F->y_2170 = F->alt_2179;
} else if (f_is_builtin_761(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_2168)).name))->all))) {
F->result_ = f_builtin_804(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_2168)).name))->all), F->tt_2169, (*(P815)rt_nil_check(F->e_776)).b, rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line), F->is_stmt_777, &F->t_778v);
goto ret_;
}
}
if ((rt_r_ichk((*(P825)rt_nil_check(F->y_2170)).kind) == (((rt_int)10LL)))) {
F->y_2170 = f_instantiate_594(F->y_2170, F->tt_2169, (*(P815)rt_nil_check(F->e_776)).b, rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line));
} else if (((rt_r_ichk((*(P825)rt_nil_check(F->y_2170)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P825)rt_nil_check(F->y_2170)).kind) == (((rt_int)4LL))))) {
F->y_2170 = f_resolve_overload_753(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_2168)).name))->all), F->tt_2169, (*(P815)rt_nil_check(F->e_776)).b, F->is_stmt_777, rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line));
if ((F->y_2170 == NULL)) {
F->result_ = f_builtin_804(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_2168)).name))->all), F->tt_2169, (*(P815)rt_nil_check(F->e_776)).b, rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line), F->is_stmt_777, &F->t_778v);
goto ret_;
}
}
if (((rt_r_ichk((*(P825)rt_nil_check(F->y_2170)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P825)rt_nil_check(F->y_2170)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_2168)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_793(F->y_2170, rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line));
if (((*(P825)rt_nil_check(F->y_2170)).capn != NULL)) {
F->cr_2180 = NULL;
F->cr_2180 = g_caps_870;
while ((F->cr_2180 != NULL)) {
if (((*(P842)rt_nil_check(F->cr_2180)).d == (*(P825)rt_nil_check(F->y_2170)).capn)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P825)rt_nil_check(F->y_2170)).name))->all), rt_str(" is a normal function with an imports list: it may not be invoked inside its capsule", 84)); b_; }));
}
F->cr_2180 = (*(P842)rt_nil_check(F->cr_2180)).next;
}
}
if ((F->is_stmt_777 && (rt_r_ichk((*(P825)rt_nil_check(F->y_2170)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_2168)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_777) && (rt_r_ichk((*(P825)rt_nil_check(F->y_2170)).kind) != (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_2168)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2173 = (*(P825)rt_nil_check(F->y_2170)).params;
if ((rt_r_ichk((*(P825)rt_nil_check(F->y_2170)).level) > ((rt_int)0LL))) {
F->args_2171 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2182 = ((rt_int)1LL), hi2183 = rt_sub(rt_r_ichk(g_cur_level_868), rt_r_ichk((*(P825)rt_nil_check(F->y_2170)).level));
for (rt_int it2184 = lo2182; it2184 <= hi2183; it2184++) {
F->i_2181 = it2184;
F->args_2171 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->args_2171))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2172 != NULL) && (F->pm_2173 != NULL))) {
if ((((rt_int)(((((P808)rt_nil_check(F->args_2171))->all)).len)) > ((rt_int)0LL))) {
F->args_2171 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->args_2171))->all), rt_str(", ", 2)); b_; }));
}
if (((rt_r_ichk((*(P827)rt_nil_check(F->pm_2173)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P827)rt_nil_check(F->pm_2173)).mode) == (((rt_int)3LL))))) {
f_lvalue_618(F->a_2172, &F->lv_2176, &F->lt_2174, &F->lc_2177, &F->ro_2178);
if (rt_r_echk(F->ro_2178)) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check((*(P827)rt_nil_check(F->pm_2173)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_223(F->lt_2174, (*(P827)rt_nil_check(F->pm_2173)).t, rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line));
F->args_2171 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->args_2171))->all), rt_str("&", 1)), (((P808)rt_nil_check(F->lv_2176))->all)), f_actual_bounds_797((*(P827)rt_nil_check(F->pm_2173)).t, F->lt_2174, F->lc_2177)); b_; }));
} else if (((rt_r_ichk((*(P827)rt_nil_check(F->pm_2173)).mode) == (((rt_int)4LL))) && f_is_lvalue_612(F->a_2172))) {
f_lvalue_618(F->a_2172, &F->lv_2176, &F->lt_2174, &F->lc_2177, &F->ro_2178);
f_check_type_223(F->lt_2174, (*(P827)rt_nil_check(F->pm_2173)).t, rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line));
F->args_2171 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->args_2171))->all), rt_str("&", 1)), (((P808)rt_nil_check(F->lv_2176))->all)), f_actual_bounds_797((*(P827)rt_nil_check(F->pm_2173)).t, F->lt_2174, F->lc_2177)); b_; }));
} else if ((rt_r_ichk((*(P827)rt_nil_check(F->pm_2173)).mode) == (((rt_int)4LL)))) {
F->v_2185 = rt_str_copy(f_gexpr_in_657(F->a_2172, (*(P827)rt_nil_check(F->pm_2173)).t, (*(P827)rt_nil_check(F->pm_2173)).c, &F->vt_2175));
F->ct_2186 = rt_str_copy(f_ctype_225((*(P827)rt_nil_check(F->pm_2173)).t));
f_check_type_223(F->vt_2175, (*(P827)rt_nil_check(F->pm_2173)).t, rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line));
F->args_2171 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->args_2171))->all), rt_str("({ ", 3)), F->ct_2186), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2186), rt_str(")); *b_ = ", 10)), F->v_2185), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_177((*(P827)rt_nil_check(F->pm_2173)).t)) {
F->args_2171 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->args_2171))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2187 = rt_str_copy(f_gexpr_in_657(F->a_2172, (*(P827)rt_nil_check(F->pm_2173)).t, (*(P827)rt_nil_check(F->pm_2173)).c, &F->vt_2175));
f_check_type_223(F->vt_2175, (*(P827)rt_nil_check(F->pm_2173)).t, rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line));
F->args_2171 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P808)rt_nil_check(F->args_2171))->all), F->v_2187); b_; }));
}
F->a_2172 = (*(P815)rt_nil_check(F->a_2172)).next;
F->pm_2173 = (*(P827)rt_nil_check(F->pm_2173)).next;
}
if (((F->a_2172 != NULL) || (F->pm_2173 != NULL))) {
f_fail_23(rt_r_ichk((*(P815)rt_nil_check(F->e_776)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check((*(P815)rt_nil_check(F->fn_2168)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_67((*(P815)rt_nil_check(F->e_776)).b), f_list_len_67(F->a_2172)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_778v = (*(P825)rt_nil_check(F->y_2170)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check((*(P825)rt_nil_check(F->y_2170)).cname))->all), rt_str("(", 1)), (((P808)rt_nil_check(F->args_2171))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_778) = F->t_778v;
  RT_FPOP();
  return F->result_;
}

static P819 f_requires_781(P825 y_780) {
  struct f_requires_781fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_780 = y_780;
if (rt_r_echk((*(P825)rt_nil_check(F->y_780)).reqdone)) {
F->result_ = (*(P825)rt_nil_check(F->y_780)).reqs;
goto ret_;
}
(*(P825)rt_nil_check(F->y_780)).reqdone = 1;
if ((((*(P825)rt_nil_check(F->y_780)).decl != NULL) && (((rt_r_ichk((*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_780)).decl)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_780)).decl)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_780)).decl)).kind) == (((rt_int)50LL)))))) {
F->imp_2188 = NULL;
F->imp_2188 = (*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_780)).decl)).d;
while ((F->imp_2188 != NULL)) {
f_add_req_784(F->y_780, &(((P808)rt_nil_check((*(P815)rt_nil_check(F->imp_2188)).name))->all));
F->imp_2188 = (*(P815)rt_nil_check(F->imp_2188)).next;
}
f_require_calls_787(F->y_780, (*(P815)rt_nil_check((*(P825)rt_nil_check(F->y_780)).decl)).c);
}
F->result_ = (*(P825)rt_nil_check(F->y_780)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_784(P825 y_782, rstr *name_783) {
  struct f_add_req_784fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_782 = y_782;
F->name_783 = name_783;
F->l_2189 = NULL;
if ((!f_seen_name_375((*(P825)rt_nil_check(F->y_782)).reqs, &(*F->name_783)))) {
{ R820 *cell2190 = rt_alloc(sizeof(R820));
(*cell2190).s = NULL;
(*cell2190).next = NULL;
F->l_2189 = cell2190;
}
(*(P819)rt_nil_check(F->l_2189)).s = f_mk_3(&(*F->name_783));
(*(P819)rt_nil_check(F->l_2189)).next = (*(P825)rt_nil_check(F->y_782)).reqs;
(*(P825)rt_nil_check(F->y_782)).reqs = F->l_2189;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_787(P825 y_785, P815 e_786) {
  struct f_require_calls_787fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_785 = y_785;
F->e_786 = e_786;
F->x_2191 = NULL;
F->x_2191 = F->e_786;
while ((F->x_2191 != NULL)) {
if ((((((rt_r_ichk((*(P815)rt_nil_check(F->x_2191)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P815)rt_nil_check(F->x_2191)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P815)rt_nil_check(F->x_2191)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P815)rt_nil_check(F->x_2191)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P815)rt_nil_check(F->x_2191)).kind) == (((rt_int)51LL))))) {
F->x_2191 = (*(P815)rt_nil_check(F->x_2191)).next;
} else {
F->callee_2192 = NULL;
if (((((rt_r_ichk((*(P815)rt_nil_check(F->x_2191)).kind) == (((rt_int)10LL))) || (rt_r_ichk((*(P815)rt_nil_check(F->x_2191)).kind) == (((rt_int)21LL)))) && ((*(P815)rt_nil_check(F->x_2191)).a != NULL)) && (rt_r_ichk((*(P815)rt_nil_check((*(P815)rt_nil_check(F->x_2191)).a)).kind) == (((rt_int)7LL))))) {
F->callee_2192 = (*(P815)rt_nil_check(F->x_2191)).a;
}
if ((F->callee_2192 != NULL)) {
F->z_2193 = NULL;
F->z_2193 = f_lookup_154(&(((P808)rt_nil_check((*(P815)rt_nil_check(F->callee_2192)).name))->all));
if ((((F->z_2193 != NULL) && (F->z_2193 != F->y_785)) && ((rt_r_ichk((*(P825)rt_nil_check(F->z_2193)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P825)rt_nil_check(F->z_2193)).kind) == (((rt_int)3LL)))))) {
F->l_2194 = NULL;
F->l_2194 = f_requires_781(F->z_2193);
while ((F->l_2194 != NULL)) {
f_add_req_784(F->y_785, &(((P808)rt_nil_check((*(P819)rt_nil_check(F->l_2194)).s))->all));
F->l_2194 = (*(P819)rt_nil_check(F->l_2194)).next;
}
}
}
if (((*(P815)rt_nil_check(F->x_2191)).a != NULL)) {
f_require_calls_787(F->y_785, (*(P815)rt_nil_check(F->x_2191)).a);
}
if (((*(P815)rt_nil_check(F->x_2191)).b != NULL)) {
f_require_calls_787(F->y_785, (*(P815)rt_nil_check(F->x_2191)).b);
}
if (((*(P815)rt_nil_check(F->x_2191)).c != NULL)) {
f_require_calls_787(F->y_785, (*(P815)rt_nil_check(F->x_2191)).c);
}
F->x_2191 = (*(P815)rt_nil_check(F->x_2191)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_790(P815 elems_788, rstr *name_789) {
  struct f_declared_in_790fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_788 = elems_788;
F->name_789 = name_789;
F->e_2195 = NULL;
F->e_2195 = F->elems_788;
while ((F->e_2195 != NULL)) {
if ((((rt_r_ichk((*(P815)rt_nil_check(F->e_2195)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P815)rt_nil_check(F->e_2195)).kind) == (((rt_int)41LL)))) && rt_str_eq((((P808)rt_nil_check((*(P815)rt_nil_check(F->e_2195)).name))->all), (*F->name_789)))) {
F->result_ = 1;
goto ret_;
}
F->e_2195 = (*(P815)rt_nil_check(F->e_2195)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_793(P825 y_791, rt_int line_792) {
  struct f_check_requires_793fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_791 = y_791;
F->line_792 = line_792;
F->l_2196 = NULL;
F->l_2196 = f_requires_781(F->y_791);
if ((((*(P825)rt_nil_check(F->y_791)).home == NULL) || (rt_r_ichk((*(P825)rt_nil_check(F->y_791)).level) != rt_r_ichk(g_cur_level_868)))) {
goto ret_;
}
while ((F->l_2196 != NULL)) {
F->z_2197 = NULL;
F->z_2197 = f_lookup_154(&(((P808)rt_nil_check((*(P819)rt_nil_check(F->l_2196)).s))->all));
if ((f_declared_in_790((*(P825)rt_nil_check(F->y_791)).home, &(((P808)rt_nil_check((*(P819)rt_nil_check(F->l_2196)).s))->all)) && ((F->z_2197 == NULL) || (rt_r_ichk((*(P825)rt_nil_check(F->z_2197)).depth) < rt_r_ichk((*(P825)rt_nil_check(F->y_791)).depth))))) {
f_fail_23(F->line_792, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check((*(P825)rt_nil_check(F->y_791)).name))->all), rt_str(" requires ", 10)), (((P808)rt_nil_check((*(P819)rt_nil_check(F->l_2196)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2196 = (*(P819)rt_nil_check(F->l_2196)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_actual_bounds_797(P821 ft_794, P821 t_795, P817 c_796) {
  struct f_actual_bounds_797fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_794 = ft_794;
F->t_795 = t_795;
F->c_796 = c_796;
if ((!f_scalar_kind_177(F->ft_794))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_189(F->t_795, F->c_796)), rt_str(", ", 2)), f_sub_hi_192(F->t_795, F->c_796));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_804(rstr *name_798, P815 tt_799, P815 args_800, rt_int line_801, int is_stmt_802, P821 *t_803) {
  struct f_builtin_804fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_798 = name_798;
F->tt_799 = tt_799;
F->args_800 = args_800;
F->line_801 = line_801;
F->is_stmt_802 = is_stmt_802;
F->t_803 = t_803;
F->t_803v = *F->t_803;
F->at_2198 = NULL;
F->n_2199 = RT_R_IUNDEF;
F->n_2199 = f_list_len_67(F->args_800);
F->t_803v = g_ty_void_900;
if (((rt_str_eq((*F->name_798), rt_str("POS", 3)) || rt_str_eq((*F->name_798), rt_str("SUCC", 4))) || rt_str_eq((*F->name_798), rt_str("PRED", 4)))) {
F->a_2200 = rt_str_copy(f_gexpr_649(F->args_800, NULL, &F->at_2198));
if (rt_str_eq((*F->name_798), rt_str("POS", 3))) {
if (((*(P821)rt_nil_check(f_base_of_214(F->at_2198))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_801, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_803v = g_ty_int_895;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2200), rt_str(") + 1)", 6));
goto ret_;
}
F->t_803v = F->at_2198;
if ((rt_r_ichk((*(P821)rt_nil_check(F->at_2198)).kind) == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_798), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2200), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2200), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_798), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2200), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P821)rt_nil_check(f_base_of_214(F->at_2198))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2200), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P821)rt_nil_check(f_base_of_214(F->at_2198))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_798), rt_str("SQRT", 4)) || rt_str_eq((*F->name_798), rt_str("SIN", 3))) || rt_str_eq((*F->name_798), rt_str("COS", 3))) || rt_str_eq((*F->name_798), rt_str("EXP", 3))) || rt_str_eq((*F->name_798), rt_str("LN", 2))) || rt_str_eq((*F->name_798), rt_str("FLOOR", 5)))) {
F->a_2201 = rt_str_copy(f_gexpr_649(F->args_800, g_ty_float_897, &F->at_2198));
F->t_803v = g_ty_float_897;
if (rt_str_eq((*F->name_798), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2201), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_798)), rt_str("(", 1)), F->a_2201), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("IFLOAT", 6))) {
F->a_2202 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->args_800)).next, g_ty_int_895, &F->at_2198));
F->t_803v = g_ty_float_897;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2202), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("IFIX", 4))) {
F->a_2203 = rt_str_copy(f_gexpr_649(F->args_800, g_ty_float_897, &F->at_2198));
F->t_803v = g_ty_int_895;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2203), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("FORMAT", 6))) {
F->a_2204 = rt_str_copy(f_gexpr_649(F->args_800, g_ty_float_897, &F->at_2198));
F->n1_2205 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->args_800)).next, g_ty_int_895, &F->at_2198));
F->m1_2206 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check((*(P815)rt_nil_check(F->args_800)).next)).next, g_ty_int_895, &F->at_2198));
F->t_803v = g_ty_string_899;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_2204), rt_str(", ", 2)), F->n1_2205), rt_str(", ", 2)), F->m1_2206), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("ABS", 3))) {
F->a_2207 = rt_str_copy(f_gexpr_649(F->args_800, NULL, &F->at_2198));
F->t_803v = F->at_2198;
if ((rt_r_ichk((*(P821)rt_nil_check(F->at_2198)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2207), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2207), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("CNVT", 4))) {
if ((F->tt_799 == NULL)) {
f_fail_23(F->line_801, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_2208 = rt_str_copy(f_gexpr_649(F->args_800, NULL, &F->at_2198));
if (((rt_r_ichk((*(P815)rt_nil_check(F->tt_799)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P821)rt_nil_check(F->at_2198)).kind) == (((rt_int)1LL))))) {
F->t_803v = g_ty_string_899;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2208), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P815)rt_nil_check(F->tt_799)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P821)rt_nil_check(F->at_2198)).kind) == (((rt_int)3LL))))) {
F->t_803v = g_ty_string_899;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_2208), rt_str(", 6)", 4));
goto ret_;
} else if (((rt_r_ichk((*(P815)rt_nil_check(F->tt_799)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P821)rt_nil_check(F->at_2198)).kind) == (((rt_int)2LL))))) {
F->t_803v = g_ty_string_899;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2208), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if (((rt_r_ichk((*(P815)rt_nil_check(F->tt_799)).kind) == (((rt_int)70LL))) && (rt_r_ichk((*(P821)rt_nil_check(F->at_2198)).kind) == (((rt_int)5LL))))) {
F->t_803v = g_ty_int_895;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2208), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_801, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_798), rt_str("WRITELN", 7))) {
if ((rt_r_ichk(F->n_2199) == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_2209 = NULL;
F->last_2209 = F->args_800;
while (((*(P815)rt_nil_check(F->last_2209)).next != NULL)) {
F->last_2209 = (*(P815)rt_nil_check(F->last_2209)).next;
}
{
F->a_2210 = rt_str_copy(f_gexpr_649(F->last_2209, g_ty_string_899, &F->at_2198));
f_check_type_223(F->at_2198, g_ty_string_899, F->line_801);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2210), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_798), rt_str("WRITE", 5))) {
F->a_2211 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->args_800)).next, NULL, &F->at_2198));
if ((rt_r_ichk((*(P821)rt_nil_check(F->at_2198)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_2211), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P821)rt_nil_check(F->at_2198)).kind) == (((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_2211), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_801, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_798), rt_str("READLN", 6))) {
F->lv_2212 = NULL;
F->lc_2213 = NULL;
F->ro_2214 = RT_R_EUNDEF;
F->last_2215 = NULL;
F->last_2215 = F->args_800;
while (((*(P815)rt_nil_check(F->last_2215)).next != NULL)) {
F->last_2215 = (*(P815)rt_nil_check(F->last_2215)).next;
}
f_lvalue_618(F->last_2215, &F->lv_2212, &F->at_2198, &F->lc_2213, &F->ro_2214);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (((P808)rt_nil_check(F->lv_2212))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("SIZELN", 6))) {
F->t_803v = g_ty_int_895;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("EOF", 3))) {
F->t_803v = g_ty_bool_896;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_798), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_798), rt_str("SYS_OUT", 7)))) {
F->t_803v = g_ty_file_901;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_798), rt_str("OPEN", 4)) || rt_str_eq((*F->name_798), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_798), rt_str("SEND", 4)) || rt_str_eq((*F->name_798), rt_str("RECEIVE", 7)))) {
F->lv_2216 = NULL;
F->dv_2217 = NULL;
F->lc_2218 = NULL;
F->ro_2219 = RT_R_EUNDEF;
F->mt_2220 = NULL;
F->dt_2221 = NULL;
f_lvalue_618(F->args_800, &F->lv_2216, &F->mt_2220, &F->lc_2218, &F->ro_2219);
if ((rt_r_ichk((*(P821)rt_nil_check(F->mt_2220)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_801, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_798), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_798), rt_str("RECEIVE", 7))) {
f_lvalue_618((*(P815)rt_nil_check(F->args_800)).next, &F->dv_2217, &F->dt_2221, &F->lc_2218, &F->ro_2219);
f_check_type_223(F->dt_2221, (*(P821)rt_nil_check(F->mt_2220)).elem, F->line_801);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P808)rt_nil_check(F->lv_2216))->all)), rt_str(", &", 3)), (((P808)rt_nil_check(F->dv_2217))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2222 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->args_800)).next, (*(P821)rt_nil_check(F->mt_2220)).elem, &F->at_2198));
f_check_type_223(F->at_2198, (*(P821)rt_nil_check(F->mt_2220)).elem, F->line_801);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225((*(P821)rt_nil_check(F->mt_2220)).elem)), rt_str(" m_ = ", 6)), F->v_2222), rt_str("; rt_send(", 10)), (((P808)rt_nil_check(F->lv_2216))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_798), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_798), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2223 = NULL;
F->lc_2224 = NULL;
F->ro_2225 = RT_R_EUNDEF;
F->mt_2226 = NULL;
f_lvalue_618(F->args_800, &F->lv_2223, &F->mt_2226, &F->lc_2224, &F->ro_2225);
if ((rt_r_ichk((*(P821)rt_nil_check(F->mt_2226)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_801, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_798), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_803v = g_ty_int_895;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_798))), rt_str("(", 1)), (((P808)rt_nil_check(F->lv_2223))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_798), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_798), rt_str("COND_RECEIVE", 12)))) {
F->lv_2227 = NULL;
F->dv_2228 = NULL;
F->bv_2229 = NULL;
F->lc_2230 = NULL;
F->ro_2231 = RT_R_EUNDEF;
F->mt_2232 = NULL;
F->dt_2233 = NULL;
F->bt_2234 = NULL;
f_lvalue_618(F->args_800, &F->lv_2227, &F->mt_2232, &F->lc_2230, &F->ro_2231);
if ((rt_r_ichk((*(P821)rt_nil_check(F->mt_2232)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_801, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_798), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_618((*(P815)rt_nil_check((*(P815)rt_nil_check(F->args_800)).next)).next, &F->bv_2229, &F->bt_2234, &F->lc_2230, &F->ro_2231);
f_check_type_223(F->bt_2234, g_ty_bool_896, F->line_801);
if (rt_str_eq((*F->name_798), rt_str("COND_RECEIVE", 12))) {
f_lvalue_618((*(P815)rt_nil_check(F->args_800)).next, &F->dv_2228, &F->dt_2233, &F->lc_2230, &F->ro_2231);
f_check_type_223(F->dt_2233, (*(P821)rt_nil_check(F->mt_2232)).elem, F->line_801);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->bv_2229))->all), rt_str(" = rt_cond_receive(", 19)), (((P808)rt_nil_check(F->lv_2227))->all)), rt_str(", &", 3)), (((P808)rt_nil_check(F->dv_2228))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2235 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->args_800)).next, (*(P821)rt_nil_check(F->mt_2232)).elem, &F->at_2198));
f_check_type_223(F->at_2198, (*(P821)rt_nil_check(F->mt_2232)).elem, F->line_801);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_225((*(P821)rt_nil_check(F->mt_2232)).elem)), rt_str(" m_ = ", 6)), F->v_2235), rt_str("; ", 2)), (((P808)rt_nil_check(F->bv_2229))->all)), rt_str(" = rt_cond_send(", 16)), (((P808)rt_nil_check(F->lv_2227))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_798), rt_str("PRIORITY", 8))) {
F->t_803v = g_ty_int_895;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_521(F->args_800)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("SET_PRIORITY", 12))) {
F->v_2236 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->args_800)).next, g_ty_int_895, &F->at_2198));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_521(F->args_800)), rt_str(", ", 2)), F->v_2236), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_521(F->args_800)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("ACTIVE", 6))) {
F->t_803v = g_ty_bool_896;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_521(F->args_800)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("DELAY", 5))) {
F->v_2237 = rt_str_copy(f_gexpr_649(F->args_800, g_ty_int_895, &F->at_2198));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2237), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("DELAY_UNTIL", 11))) {
F->v_2238 = rt_str_copy(f_gexpr_649(F->args_800, g_ty_int_895, &F->at_2198));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2238), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_521(F->args_800)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("TIME", 4))) {
F->t_803v = g_ty_int_895;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_798), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_798), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_798), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_798), rt_str("HOURS", 5)))) {
F->t_803v = g_ty_int_895;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_798));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("HALT", 4))) {
F->a_2239 = rt_str_copy(f_gexpr_649(F->args_800, g_ty_int_895, &F->at_2198));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2239), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_798), rt_str("ME", 2)) && (F->tt_799 != NULL))) {
F->result_ = f_me_high_767(F->tt_799, F->line_801, &F->t_803v);
goto ret_;
} else if ((rt_str_eq((*F->name_798), rt_str("WAITING", 7)) || rt_str_eq((*F->name_798), rt_str("SUSPENDED", 9)))) {
F->t_803v = g_ty_bool_896;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_798))), rt_str("(", 1)), f_act_ref_521(F->args_800)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_798), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_798), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_798), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_798), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_798), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_798), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_798))), rt_str("(", 1)), f_act_ref_521(F->args_800)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("TASK_START", 10))) {
if ((rt_r_ichk(F->n_2199) != ((rt_int)2LL))) {
f_fail_23(F->line_801, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_521(F->args_800)), rt_str(", ", 2)), f_act_ref_521((*(P815)rt_nil_check(F->args_800)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_798), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_798), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_798), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_798), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_798), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_798), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((rt_r_ichk(F->n_2199) != ((rt_int)0LL))) {
f_fail_23(F->line_801, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_798), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_798))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_772(F->args_800, &(*F->name_798))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_772(F->args_800, &(*F->name_798))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("COND_LOCK", 9))) {
F->bv_2240 = NULL;
F->bc_2241 = NULL;
F->ro_2242 = RT_R_EUNDEF;
F->bt_2243 = NULL;
F->l_2244 = rt_str_copy(f_lock_ref_772(F->args_800, &(*F->name_798)));
f_lvalue_618((*(P815)rt_nil_check(F->args_800)).next, &F->bv_2240, &F->bt_2243, &F->bc_2241, &F->ro_2242);
f_check_type_223(F->bt_2243, g_ty_bool_896, F->line_801);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P808)rt_nil_check(F->bv_2240))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2244), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("EXCESS_LOCKS", 12))) {
F->t_803v = g_ty_int_895;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_772(F->args_800, &(*F->name_798))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("OWNER", 5))) {
F->t_803v = g_ty_act_905;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_772(F->args_800, &(*F->name_798))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("FREE", 4))) {
F->pv_2245 = NULL;
F->pc_2246 = NULL;
F->ro_2247 = RT_R_EUNDEF;
F->pt_2248 = NULL;
f_lvalue_618(F->args_800, &F->pv_2245, &F->pt_2248, &F->pc_2246, &F->ro_2247);
if (((rt_r_ichk((*(P821)rt_nil_check(F->pt_2248)).kind) != (((rt_int)8LL))) || rt_r_echk(F->ro_2247))) {
f_fail_23(F->line_801, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_876 = 1;
f_finish_ptr_409(F->pt_2248);
if (f_suppressed_443(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; }))) {
if (f_needs_fin_315((*(P821)rt_nil_check(F->pt_2248)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P808)rt_nil_check(F->pv_2245))->all)), rt_str(") { ", 4)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_607(F->pt_2248, &(((P808)rt_nil_check(F->pv_2245))->all)); b_; }), (*(P821)rt_nil_check(F->pt_2248)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P808)rt_nil_check(F->pv_2245))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P808)rt_nil_check(F->pv_2245))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_315((*(P821)rt_nil_check(F->pt_2248)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P808)rt_nil_check(F->pv_2245))->all)), rt_str("); if (", 7)), (((P808)rt_nil_check(F->pv_2245))->all)), rt_str(") { ", 4)), f_fin_code_318(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_607(F->pt_2248, &(((P808)rt_nil_check(F->pv_2245))->all)); b_; }), (*(P821)rt_nil_check(F->pt_2248)).target)), rt_str(" } rt_free((void **)&", 21)), (((P808)rt_nil_check(F->pv_2245))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P808)rt_nil_check(F->pv_2245))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_798), rt_str("LOW_IO", 6))) {
F->dev_2249 = rt_str_copy(f_gexpr_649(F->args_800, g_ty_int_895, &F->at_2198));
F->cmd_2250 = rt_str_copy(f_gexpr_649((*(P815)rt_nil_check(F->args_800)).next, g_ty_int_895, &F->at_2198));
if ((rt_r_ichk(F->n_2199) == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_2249), rt_str(", ", 2)), F->cmd_2250), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2251 = NULL;
F->dc_2252 = NULL;
F->ro_2253 = RT_R_EUNDEF;
F->dt_2254 = NULL;
f_lvalue_618((*(P815)rt_nil_check((*(P815)rt_nil_check(F->args_800)).next)).next, &F->dv_2251, &F->dt_2254, &F->dc_2252, &F->ro_2253);
f_check_type_223(F->dt_2254, g_ty_int_895, F->line_801);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_2249), rt_str(", ", 2)), F->cmd_2250), rt_str(", &", 3)), (((P808)rt_nil_check(F->dv_2251))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_801, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_798), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_803) = F->t_803v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_806(P815 units_805) {
  struct f_translate_806fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_805 = units_805;
F->u_2255 = NULL;
F->u_2255 = F->units_805;
while ((F->u_2255 != NULL)) {
if (((*(P815)rt_nil_check(F->u_2255)).next == NULL)) {
{ R843 *cell2256 = rt_alloc(sizeof(R843));
(*cell2256).d = NULL;
(*cell2256).next = NULL;
g_caps_870 = cell2256;
}
(*(P842)rt_nil_check(g_caps_870)).d = F->u_2255;
(*(P842)rt_nil_check(g_caps_870)).depth = rt_r_ichk(g_depth_854);
f_declare_labels_476((*(P815)rt_nil_check(F->u_2255)).c);
f_declare_body_380((*(P815)rt_nil_check(F->u_2255)).c);
f_capsule_body_483((*(P815)rt_nil_check(F->u_2255)).c);
f_await_tasks_472((*(P815)rt_nil_check(F->u_2255)).c);
{
F->l_2257 = NULL;
F->l_2257 = F->units_805;
while ((F->l_2257 != F->u_2255)) {
{
F->w_2258 = rt_str_copy(f_waits_of_468(F->l_2257));
if ((((rt_int)((F->w_2258).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2258);
}
}
F->l_2257 = (*(P815)rt_nil_check(F->l_2257)).next;
}
}
f_close_fins_459(NULL);
if (rt_r_echk(g_uses_findyn_878)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_390(F->u_2255);
}
F->u_2255 = (*(P815)rt_nil_check(F->u_2255)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_807(void) {
  struct f_print_program_807fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_376();
if (rt_r_echk(g_uses_free_876)) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_858);
f_print_buffer_31(g_out_frames_874);
f_print_buffer_31(g_out_helpers_859);
f_print_buffer_31(g_out_protos_860);
f_print_buffer_31(g_out_globals_861);
f_print_buffer_31(g_out_funcs_862);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_875);
f_print_buffer_31(g_out_excs_864);
f_print_buffer_31(g_out_init_863);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R845(R845 *d, R845 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R845 cp_R845(R845 s) {
  R845 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R845(R845 a, R845 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R843(R843 *d, R843 s) {
  d->d = s.d;
  d->next = s.next;
  d->depth = s.depth;
}
static R843 cp_R843(R843 s) {
  R843 d = s;
  d.d = s.d;
  d.next = s.next;
  d.depth = s.depth;
  return d;
}
static int eq_R843(R843 a, R843 b) {
  return 1 && (a.d == b.d) && (a.next == b.next) && (a.depth == b.depth);
}
static void as_R841(R841 *d, R841 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R841 cp_R841(R841 s) {
  R841 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R841(R841 a, R841 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R839(R839 *d, R839 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R839 cp_R839(R839 s) {
  R839 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R839(R839 a, R839 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R837(R837 *d, R837 s) {
  d->t = s.t;
  d->next = s.next;
}
static R837 cp_R837(R837 s) {
  R837 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R837(R837 a, R837 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R835(R835 *d, R835 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
}
static R835 cp_R835(R835 s) {
  R835 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  return d;
}
static int eq_R835(R835 a, R835 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t);
}
static void as_R833(R833 *d, R833 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R833 cp_R833(R833 s) {
  R833 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R833(R833 a, R833 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A831(A831 *d, A831 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A831 cp_A831(A831 s) {
  A831 d = s; d.p = rt_alloc(sizeof(P825) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A831(A831 a, A831 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R828(R828 *d, R828 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R828 cp_R828(R828 s) {
  R828 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R828(R828 a, R828 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R826(R826 *d, R826 s) {
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
  d->capn = s.capn;
}
static R826 cp_R826(R826 s) {
  R826 d = s;
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
  d.capn = s.capn;
  return d;
}
static int eq_R826(R826 a, R826 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home) && (a.capn == b.capn);
}
static void as_R824(R824 *d, R824 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R824 cp_R824(R824 s) {
  R824 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R824(R824 a, R824 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R822(R822 *d, R822 s) {
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
static R822 cp_R822(R822 s) {
  R822 d = s;
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
static int eq_R822(R822 a, R822 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs);
}
static void as_R820(R820 *d, R820 s) {
  d->s = s.s;
  d->next = s.next;
}
static R820 cp_R820(R820 s) {
  R820 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R820(R820 a, R820 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R818(R818 *d, R818 s) {
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
static R818 cp_R818(R818 s) {
  R818 d = s;
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
static int eq_R818(R818 a, R818 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R816(R816 *d, R816 s) {
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
static R816 cp_R816(R816 s) {
  R816 d = s;
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
static int eq_R816(R816 a, R816 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A814(A814 *d, A814 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A814 cp_A814(A814 s) {
  A814 d = s; d.p = rt_alloc(sizeof(P810) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A814(A814 a, A814 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R811(R811 *d, R811 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R811 cp_R811(R811 s) {
  R811 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R811(R811 a, R811 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_846);
  RT_ROOT(g_ntoks_847);
  RT_ROOT(g_tpos_848);
  RT_ROOT(g_src_line_849);
  RT_ROOT(g_pending_prag_850);
  RT_ROOT(g_table_851);
  RT_ROOT(g_genv_852);
  RT_ROOT(g_all_insts_853);
  RT_ROOT(g_depth_854);
  RT_ROOT(g_scope_stack_855);
  RT_ROOT(g_all_types_856);
  RT_ROOT(g_serial_857);
  RT_ROOT(g_out_types_858);
  RT_ROOT(g_out_helpers_859);
  RT_ROOT(g_out_protos_860);
  RT_ROOT(g_out_globals_861);
  RT_ROOT(g_out_funcs_862);
  RT_ROOT(g_out_init_863);
  RT_ROOT(g_out_excs_864);
  RT_ROOT(g_code_865);
  RT_ROOT(g_fields_buf_866);
  RT_ROOT(g_in_func_867);
  RT_ROOT(g_cur_level_868);
  RT_ROOT(g_fctx_869);
  RT_ROOT(g_caps_870);
  RT_ROOT(g_cap_waits_871);
  RT_ROOT(g_psub_872);
  RT_ROOT(g_st_field_873);
  RT_ROOT(g_out_frames_874);
  RT_ROOT(g_out_roots_875);
  RT_ROOT(g_uses_free_876);
  RT_ROOT(g_fins_877);
  RT_ROOT(g_uses_findyn_878);
  RT_ROOT(g_func_sym_879);
  RT_ROOT(g_func_rc_880);
  RT_ROOT(g_cap_ret_881);
  RT_ROOT(g_cap_rflag_882);
  RT_ROOT(g_ret_frames_883);
  RT_ROOT(g_gdepth_884);
  RT_ROOT(g_suppress_885);
  RT_ROOT(g_cons_ctx_886);
  RT_ROOT(g_mark_uninit_887);
  RT_ROOT(g_exits_888);
  RT_ROOT(g_gotos_889);
  RT_ROOT(g_frames_890);
  RT_ROOT(g_handlers_891);
  RT_ROOT(g_cleanups_892);
  RT_ROOT(g_trial_893);
  RT_ROOT(g_mcopies_894);
  RT_ROOT(g_ty_int_895);
  RT_ROOT(g_ty_bool_896);
  RT_ROOT(g_ty_float_897);
  RT_ROOT(g_ty_ascii_898);
  RT_ROOT(g_ty_string_899);
  RT_ROOT(g_ty_void_900);
  RT_ROOT(g_ty_file_901);
  RT_ROOT(g_ty_nil_902);
  RT_ROOT(g_ty_lock_903);
  RT_ROOT(g_ty_latch_904);
  RT_ROOT(g_ty_act_905);
  RT_ROOT(g_file_mode_type_906);
  RT_ROOT(g_no_cons_907);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_846 = NULL;
g_ntoks_847 = RT_R_IUNDEF;
g_ntoks_847 = ((rt_int)0LL);
g_tpos_848 = RT_R_IUNDEF;
g_tpos_848 = ((rt_int)1LL);
g_src_line_849 = RT_R_IUNDEF;
g_src_line_849 = ((rt_int)0LL);
g_pending_prag_850 = NULL;
g_table_851 = NULL;
g_genv_852 = NULL;
g_all_insts_853 = NULL;
g_depth_854 = RT_R_IUNDEF;
g_depth_854 = ((rt_int)0LL);
g_scope_stack_855 = NULL;
g_all_types_856 = NULL;
g_serial_857 = RT_R_IUNDEF;
g_serial_857 = ((rt_int)0LL);
g_out_types_858 = NULL;
g_out_helpers_859 = NULL;
g_out_protos_860 = NULL;
g_out_globals_861 = NULL;
g_out_funcs_862 = NULL;
g_out_init_863 = NULL;
g_out_excs_864 = NULL;
g_code_865 = NULL;
g_fields_buf_866 = NULL;
g_in_func_867 = RT_R_EUNDEF;
g_in_func_867 = 0;
g_cur_level_868 = RT_R_IUNDEF;
g_cur_level_868 = ((rt_int)0LL);
g_fctx_869 = NULL;
g_caps_870 = NULL;
g_cap_waits_871 = NULL;
g_psub_872 = NULL;
g_st_field_873 = NULL;
g_out_frames_874 = NULL;
g_out_roots_875 = NULL;
g_uses_free_876 = RT_R_EUNDEF;
g_uses_free_876 = 0;
g_fins_877 = NULL;
g_uses_findyn_878 = RT_R_EUNDEF;
g_uses_findyn_878 = 0;
g_func_sym_879 = NULL;
g_func_rc_880 = NULL;
g_cap_ret_881 = NULL;
g_cap_rflag_882 = NULL;
g_ret_frames_883 = RT_R_IUNDEF;
g_ret_frames_883 = ((rt_int)0LL);
g_gdepth_884 = RT_R_IUNDEF;
g_gdepth_884 = ((rt_int)0LL);
g_suppress_885 = NULL;
g_cons_ctx_886 = NULL;
g_mark_uninit_887 = RT_R_EUNDEF;
g_mark_uninit_887 = 0;
g_exits_888 = NULL;
g_gotos_889 = NULL;
g_frames_890 = RT_R_IUNDEF;
g_frames_890 = ((rt_int)0LL);
g_handlers_891 = NULL;
g_cleanups_892 = NULL;
g_trial_893 = RT_R_IUNDEF;
g_trial_893 = ((rt_int)0LL);
g_mcopies_894 = NULL;
g_ty_int_895 = NULL;
g_ty_bool_896 = NULL;
g_ty_float_897 = NULL;
g_ty_ascii_898 = NULL;
g_ty_string_899 = NULL;
g_ty_void_900 = NULL;
g_ty_file_901 = NULL;
g_ty_nil_902 = NULL;
g_ty_lock_903 = NULL;
g_ty_latch_904 = NULL;
g_ty_act_905 = NULL;
g_file_mode_type_906 = NULL;
g_no_cons_907 = NULL;
{ P812 cell2259 = rt_alloc(sizeof *cell2259);
rt_int pv2260 = ((rt_int)1000000LL);
cell2259->p_n = pv2260;
cell2259->all.lo = ((rt_int)1LL); cell2259->all.hi = pv2260;
cell2259->all.lo2 = cell2259->all.hi2 = 1;
cell2259->all.p = rt_alloc(sizeof(P810) * (size_t)(RT_CNT(cell2259->all)) + 1);
for (rt_int i2261 = 0; i2261 < (RT_CNT(cell2259->all)); i2261++) {
cell2259->all.p[i2261] = NULL;
}
g_toks_846 = cell2259;
}
{ P829 cell2262 = rt_alloc(sizeof *cell2262);
rt_int pv2263 = (((rt_int)4093LL));
cell2262->p_n = pv2263;
cell2262->all.lo = ((rt_int)0LL); cell2262->all.hi = pv2263;
cell2262->all.lo2 = cell2262->all.hi2 = 1;
cell2262->all.p = rt_alloc(sizeof(P825) * (size_t)(RT_CNT(cell2262->all)) + 1);
for (rt_int i2264 = 0; i2264 < (RT_CNT(cell2262->all)); i2264++) {
cell2262->all.p[i2264] = NULL;
}
g_table_851 = cell2262;
}
g_out_types_858 = f_new_buffer_24();
g_out_helpers_859 = f_new_buffer_24();
g_out_protos_860 = f_new_buffer_24();
g_out_globals_861 = f_new_buffer_24();
g_out_funcs_862 = f_new_buffer_24();
g_out_init_863 = f_new_buffer_24();
g_out_excs_864 = f_new_buffer_24();
g_out_frames_874 = f_new_buffer_24();
g_out_roots_875 = f_new_buffer_24();
g_code_865 = g_out_init_863;
g_no_cons_907 = f_new_cons_175();
g_ty_int_895 = f_new_typ_174((((rt_int)1LL)));
g_ty_bool_896 = f_new_typ_174((((rt_int)2LL)));
g_ty_float_897 = f_new_typ_174((((rt_int)3LL)));
g_ty_string_899 = f_new_typ_174((((rt_int)5LL)));
g_ty_void_900 = f_new_typ_174((((rt_int)9LL)));
g_ty_file_901 = f_new_typ_174((((rt_int)10LL)));
g_ty_nil_902 = f_new_typ_174((((rt_int)11LL)));
g_ty_lock_903 = f_new_typ_174((((rt_int)13LL)));
g_ty_latch_904 = f_new_typ_174((((rt_int)13LL)));
g_ty_act_905 = f_new_typ_174((((rt_int)14LL)));
{ rt_frame xf2265;
if (RT_TRY(xf2265)) {
f_init_ascii_250();
f_read_source_58();
f_translate_806(f_program_150());
f_print_program_807();
RT_POP(xf2265);
} else {
RT_POP(xf2265);
int x2266 = rt_xcur;
if (0 || x2266 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2266);
}
}
}
  rt_main_done();
  return 0;
}
