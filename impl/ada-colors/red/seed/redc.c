#include "paleo.h"
#include <math.h>
typedef struct Pc845 *P844;
typedef struct R847 R847;
typedef struct R847 *P846;
struct R847 {  rt_int kind; rt_int line; rt_int ival; P844 s; P844 prags;  };
typedef struct Pc849 *P848;
typedef struct A850 A850;
struct A850 { rt_int lo, hi, lo2, hi2; P846 *p; };
typedef struct R852 R852;
typedef struct R852 *P851;
struct R852 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P844 name; P844 tag; P844 prags; P851 labels; P851 a; P851 b; P851 c; P851 d; P851 e; P851 next;  };
typedef struct R854 R854;
typedef struct R854 *P853;
typedef struct R856 R856;
typedef struct R856 *P855;
struct R856 {  P844 s; P855 next;  };
struct R854 {  P844 lo; P844 hi; P844 lo2; P844 hi2; P844 slen; rt_int mlo; rt_int mhi; int hasm; P851 args; int dyn; rt_int lvl; P844 prec; P855 bnds;  };
typedef struct R858 R858;
typedef struct R858 *P857;
typedef struct R860 R860;
typedef struct R860 *P859;
struct R860 {  P844 name; P857 t; P853 c; P851 st; P859 next;  };
typedef struct R862 R862;
typedef struct R862 *P861;
typedef struct R864 R864;
typedef struct R864 *P863;
struct R864 {  P844 name; rt_int mode; P857 t; P853 c; P844 cfield; P863 next;  };
typedef struct Pc866 *P865;
typedef struct A867 A867;
struct A867 { rt_int lo, hi, lo2, hi2; P861 *p; };
typedef struct R869 R869;
typedef struct R869 *P868;
struct R869 {  rt_int depth; P851 imps; int all_imp; P868 next;  };
typedef struct R871 R871;
typedef struct R871 *P870;
struct R871 {  rt_int kind; rt_int i; P844 s; P857 t;  };
struct R862 {  rt_int kind; P844 name; P857 t; P853 c; P844 access; P844 cname; int ro_flag; rt_int mvalue; int hasmv; P851 st; P851 decl; P863 params; P857 result; rt_int depth; rt_int level; int byref; P861 members; P861 mnext; P851 binds; P861 insts; P865 env; P861 chain; P861 stack; P861 owner; P868 gctx; P870 mv; P855 reqs; int reqdone; P851 home; P851 capn; P861 tbinds;  };
typedef struct R873 R873;
typedef struct R873 *P872;
struct R873 {  P857 t; P872 next;  };
struct R858 {  rt_int kind; P844 name; P851 lits; P857 elem; P857 idx; P857 idx2; P853 elemcons; P851 elemst; P857 under; P851 tparams; P851 ocap; P859 fields; P857 target; P851 decl; P844 cname; int forward; int defined; int helpers; P861 initp; P861 finalp; P861 tpsyms; P861 gen; P861 gbinds; P857 next; rt_int ndim; P872 idxs;  };
typedef struct R875 R875;
typedef struct R875 *P874;
struct R875 {  P855 head; P855 tail;  };
typedef struct R877 R877;
typedef struct R877 *P876;
struct R877 {  P844 match; P844 label; rt_int depth; P876 next;  };
typedef struct R879 R879;
typedef struct R879 *P878;
struct R879 {  P851 d; P878 next; rt_int depth;  };
typedef struct R881 R881;
typedef struct R881 *P880;
struct R881 {  P851 d; P844 w; P880 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P844 result_;
 P844 t_944;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_947;
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
 rstr r_948;
 rt_int i_949;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_953;
 rstr w_954;
 rt_int i_955;
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
 P874 result_;
 P874 b_959;
};
struct f_put_27fr { int dummy;
 P874 b_25;
 rstr *s_26;
 P855 l_961;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P874 b_30;
 P855 l_963;
};
struct f_splice_34fr { int dummy;
 P874 a_32;
 P874 b_33;
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
 P846 t_965;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_967;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_968;
 rt_int k_969;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_973;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_974;
 P844 r_975;
 int more_976;
 rt_int k_977;
 int go_978;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_979;
 rt_int k_980;
 rstr p_981;
 int ok_982;
 int known_983;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_984;
 rt_int j_985;
 rt_int n_986;
 int c_987;
 rstr w_988;
 rt_int k_989;
 rstr w_993;
 rt_int k_994;
 rstr two_998;
};
struct f_read_source_58fr { int dummy;
 rstr line_999;
};
struct f_nn_61fr { int dummy;
 rt_int kind_59;
 rt_int line_60;
 P851 result_;
 P851 x_1000;
};
struct f_append_65fr { int dummy;
 P851 *head_62;
 P851 *tail_63;
 P851 x_64;
};
struct f_list_len_67fr { int dummy;
 P851 l_66;
 rt_int result_;
 rt_int n_1002;
 P851 p_1003;
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
 P844 result_;
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
 P844 result_;
};
struct f_name_node_90fr { int dummy;
 P851 result_;
 P851 x_1004;
};
struct f_id_list_91fr { int dummy;
 P851 result_;
 P851 head_1005;
 P851 tail_1006;
};
struct f_p_subtype_92fr { int dummy;
 P851 result_;
 rt_int line_1007;
 P851 x_1008;
 rstr w_1009;
 P851 head_1010;
 P851 tail_1011;
 P851 head_1012;
 P851 tail_1013;
 int more_1014;
 P851 names_1015;
 P851 st_1016;
 P851 cmp_1017;
 P851 head_1018;
 P851 tail_1019;
 int more_1020;
 P851 lit_1021;
};
struct f_constraint_list_93fr { int dummy;
 P851 result_;
 P851 head_1022;
 P851 tail_1023;
 int more_1024;
 rt_int line_1025;
 P851 lo_1026;
 P851 r_1027;
};
struct f_actual_params_94fr { int dummy;
 P851 result_;
 P851 head_1028;
 P851 tail_1029;
};
struct f_is_type_word_96fr { int dummy;
 rstr *w_95;
 int result_;
};
struct f_actual_tt_97fr { int dummy;
 P851 result_;
 P851 head_1030;
 P851 tail_1031;
 int more_1032;
};
struct f_binop_102fr { int dummy;
 P844 op_98;
 P851 l_99;
 P851 r_100;
 rt_int line_101;
 P851 result_;
 P851 x_1033;
};
struct f_expr_103fr { int dummy;
 P851 result_;
 P851 l_1034;
 P844 op_1035;
 rt_int line_1036;
};
struct f_expr_and_104fr { int dummy;
 P851 result_;
 P851 l_1037;
 rt_int line_1038;
};
struct f_expr_not_105fr { int dummy;
 P851 result_;
 P851 x_1039;
};
struct f_is_rel_107fr { int dummy;
 rstr *s_106;
 int result_;
};
struct f_expr_rel_108fr { int dummy;
 P851 result_;
 P851 l_1040;
 P844 op_1041;
 rt_int line_1042;
};
struct f_expr_add_109fr { int dummy;
 P851 result_;
 P851 l_1043;
 P844 op_1044;
 rt_int line_1045;
};
struct f_expr_mul_110fr { int dummy;
 P851 result_;
 P851 l_1046;
 P844 op_1047;
 rt_int line_1048;
};
struct f_expr_pow_111fr { int dummy;
 P851 result_;
 P851 l_1049;
 rt_int line_1050;
};
struct f_expr_prefix_112fr { int dummy;
 P851 result_;
 P851 x_1051;
};
struct f_postfix_113fr { int dummy;
 P851 result_;
 P851 p_1052;
 rt_int line_1053;
 P851 x_1054;
 P851 head_1055;
 P851 tail_1056;
 int more_1057;
 P851 lo_1058;
 P851 r_1059;
 P851 x_1060;
 P851 x_1061;
 P851 x_1062;
};
struct f_primary_114fr { int dummy;
 P851 result_;
 rt_int line_1063;
 P851 x_1064;
 rt_int k_1065;
 rstr w_1066;
 P851 head_1067;
 P851 tail_1068;
 int more_1069;
};
struct f_constructor_item_115fr { int dummy;
 P851 result_;
 rt_int line_1070;
 P851 it_1071;
 P851 first_1072;
 P851 keys_1073;
 P851 ktail_1074;
 P851 lab_1075;
 rt_int save_1076;
 P851 more_1077;
 P851 tail2_1078;
 int ok_1079;
 int go_1080;
 P851 l2_1081;
};
struct f_at_body_end_116fr { int dummy;
 int result_;
};
struct f_body_117fr { int dummy;
 P851 result_;
 P851 head_1082;
 P851 tail_1083;
 int stmts_1084;
 P851 after_1085;
 P851 x_1086;
};
struct f_body_element_118fr { int dummy;
 P851 result_;
 P851 x_1087;
 P844 pr_1088;
 P851 p_1089;
};
struct f_declaration_119fr { int dummy;
 P851 result_;
 rt_int line_1090;
 P851 head_1091;
 P851 tail_1092;
 P851 names_1093;
 P851 x_1094;
};
struct f_object_decl_120fr { int dummy;
 P851 result_;
 rt_int line_1095;
 int is_var_1096;
 P851 names_1097;
 P851 st_1098;
 P851 init_1099;
 P851 loc_1100;
 rt_int loc_kind_1101;
 P851 head_1102;
 P851 tail_1103;
 P851 x_1104;
};
struct f_abbrev_decl_121fr { int dummy;
 P851 result_;
 P851 x_1105;
};
struct f_skip_rep_122fr { int dummy;
 rt_int depth_1106;
};
struct f_type_decl_123fr { int dummy;
 P851 result_;
 rt_int line_1107;
 P844 name_1108;
 P851 params_1109;
 P851 x_1110;
 P851 tts_1111;
};
struct f_mode_of_125fr { int dummy;
 rstr *w_124;
 rt_int result_;
};
struct f_formal_params_126fr { int dummy;
 P851 result_;
 P851 head_1112;
 P851 tail_1113;
 int more_1114;
 rt_int mode_1115;
 P851 names_1116;
 P851 ntail_1117;
 P851 st_1118;
 P851 p_1119;
};
struct f_imports_list_128fr { int dummy;
 P851 owner_127;
 int result_;
 P851 head_1120;
 P851 tail_1121;
 int more_1122;
 int ro_1123;
 P851 x_1124;
};
struct f_is_definable_130fr { int dummy;
 rstr *w_129;
 int result_;
};
struct f_definable_name_131fr { int dummy;
 P844 result_;
};
struct f_subprogram_decl_132fr { int dummy;
 P851 result_;
 rt_int line_1125;
 P851 x_1126;
 int is_abn_1127;
 int is_func_1128;
 int dummy_1129;
};
struct f_capsule_decl_133fr { int dummy;
 P851 result_;
 P851 x_1130;
 int dummy_1131;
 P851 head_1132;
 P851 tail_1133;
 int more_1134;
 P851 n_1135;
};
struct f_formal_tt_134fr { int dummy;
 P851 result_;
 P851 head_1136;
 P851 tail_1137;
 int more_1138;
};
struct f_generic_decl_135fr { int dummy;
 P851 result_;
 P851 x_1139;
 P851 head_1140;
 P851 tail_1141;
 int more_1142;
 P851 names_1143;
 rt_int kind_1144;
 P851 st_1145;
 P851 items_1146;
 P851 p_1147;
 P851 nhead_1148;
 P851 ntail_1149;
 P851 it_1150;
};
struct f_type_list_136fr { int dummy;
 P851 result_;
 P851 head_1151;
 P851 tail_1152;
 int more_1153;
 P851 n_1154;
};
struct f_task_decl_137fr { int dummy;
 P851 result_;
 P851 x_1155;
 int dummy_1156;
};
struct f_expose_decl_138fr { int dummy;
 P851 result_;
 P851 x_1157;
 P851 head_1158;
 P851 tail_1159;
 int more_1160;
 P851 n_1161;
 P851 head_1162;
 P851 tail_1163;
 int more_1164;
 P851 n_1165;
 P851 tgt_1166;
};
struct f_is_compound_kw_140fr { int dummy;
 rstr *w_139;
 int result_;
};
struct f_statement_141fr { int dummy;
 P851 result_;
 P851 labels_1167;
 P851 ltail_1168;
 P844 match_1169;
 P851 s_1170;
};
struct f_unlabeled_statement_142fr { int dummy;
 P851 result_;
 rt_int line_1171;
 P851 x_1172;
 P851 head_1173;
 P851 tail_1174;
 P851 invs_1175;
 P851 itail_1176;
 int more_1177;
 P851 target_1178;
};
struct f_arm_146fr { int dummy;
 P851 cond_143;
 P851 b_144;
 rt_int line_145;
 P851 result_;
 P851 x_1179;
};
struct f_if_stmt_147fr { int dummy;
 P851 result_;
 P851 x_1180;
 P851 head_1181;
 P851 tail_1182;
 P851 cond_1183;
 int go_1184;
};
struct f_case_stmt_148fr { int dummy;
 P851 result_;
 P851 x_1185;
 P851 head_1186;
 P851 tail_1187;
 P851 labs_1188;
 P851 ltail_1189;
 int more_1190;
 P851 l_1191;
};
struct f_repeat_stmt_149fr { int dummy;
 P851 result_;
 P851 x_1192;
};
struct f_guard_stmt_150fr { int dummy;
 P851 result_;
 P851 x_1193;
 P851 head_1194;
 P851 tail_1195;
 P851 h_1196;
};
struct f_program_151fr { int dummy;
 P851 result_;
 P851 head_1197;
 P851 tail_1198;
 P844 pr_1199;
 P851 u_1200;
};
struct f_hash_153fr { int dummy;
 rstr *s_152;
 rt_int result_;
 rt_int h_1201;
 rt_int i_1202;
};
struct f_lookup_155fr { int dummy;
 rstr *name_154;
 P861 result_;
 P861 y_1206;
};
struct f_lookup_decl_157fr { int dummy;
 P851 d_156;
 P861 result_;
 P861 y_1207;
};
struct f_define_160fr { int dummy;
 P861 y_158;
 rt_int line_159;
 rt_int h_1208;
 P861 z_1209;
};
struct f_overloadable_162fr { int dummy;
 P861 y_161;
 int result_;
};
struct f_same_tt_165fr { int dummy;
 P851 a_163;
 P851 b_164;
 int result_;
 P851 x_1210;
 P851 y_1211;
};
struct f_same_signature_168fr { int dummy;
 P863 a_166;
 P863 b_167;
 int result_;
 P863 x_1212;
 P863 y_1213;
};
struct f_open_scope_169fr { int dummy;
};
struct f_close_scope_170fr { int dummy;
};
struct f_new_sym_173fr { int dummy;
 rt_int kind_171;
 P844 name_172;
 P861 result_;
 P861 y_1214;
};
struct f_new_typ_175fr { int dummy;
 rt_int kind_174;
 P857 result_;
 P857 t_1216;
};
struct f_new_cons_176fr { int dummy;
 P853 result_;
 P853 c_1218;
};
struct f_scalar_kind_178fr { int dummy;
 P857 t_177;
 int result_;
};
struct f_bound_ctype_180fr { int dummy;
 P857 t_179;
 rstr result_;
};
struct f_cbound_183fr { int dummy;
 P853 c_181;
 rstr *b_182;
 rstr result_;
 P844 p_1220;
 rt_int i_1221;
};
struct f_clo_185fr { int dummy;
 P853 c_184;
 rstr result_;
};
struct f_chi_187fr { int dummy;
 P853 c_186;
 rstr result_;
};
struct f_sub_lo_190fr { int dummy;
 P857 t_188;
 P853 c_189;
 rstr result_;
};
struct f_sub_hi_193fr { int dummy;
 P857 t_191;
 P853 c_192;
 rstr result_;
};
struct f_raw_storage_196fr { int dummy;
 rstr *name_194;
 rstr *ct_195;
 rstr result_;
 rstr g_1225;
 rstr f_1226;
};
struct f_copy_cons_198fr { int dummy;
 P853 c_197;
 P853 result_;
 P853 r_1227;
};
struct f_freeze_201fr { int dummy;
 P853 c_199;
 P857 t_200;
 P853 result_;
 P853 r_1229;
 P844 saved_field_1230;
 rstr ct_1231;
 rstr la_1232;
 rstr lf_1233;
 rstr ha_1234;
 rstr hf_1235;
};
struct f_checked_205fr { int dummy;
 P857 t_202;
 P853 c_203;
 rstr *v_204;
 rstr result_;
};
struct f_same_lits_208fr { int dummy;
 P851 a_206;
 P851 b_207;
 int result_;
 P851 x_1236;
 P851 y_1237;
};
struct f_str_elem_210fr { int dummy;
 P857 t_209;
 P857 result_;
};
struct f_same_213fr { int dummy;
 P857 a_211;
 P857 b_212;
 int result_;
 P872 x_1238;
 P872 y_1239;
 P859 f_1240;
 P859 g_1241;
};
struct f_base_of_215fr { int dummy;
 P857 t_214;
 P857 result_;
};
struct f_base_cons_218fr { int dummy;
 P857 t_216;
 P853 c_217;
 P853 result_;
};
struct f_kind_name_220fr { int dummy;
 P857 t_219;
 rstr result_;
};
struct f_check_type_224fr { int dummy;
 P857 got_221;
 P857 want_222;
 rt_int line_223;
};
struct f_ctype_226fr { int dummy;
 P857 t_225;
 rstr result_;
};
struct f_struct_body_228fr { int dummy;
 P857 t_227;
 rstr result_;
};
struct f_field_decls_230fr { int dummy;
 P857 t_229;
 rstr result_;
 P859 f_1244;
 P844 s_1245;
};
struct f_declare_ctype_232fr { int dummy;
 P857 t_231;
 P857 u_1246;
 P851 p_1247;
 P844 fs_1248;
 rstr sn_1249;
 P853 pc_1250;
 P857 target_1251;
 P851 p_1252;
 P844 fs_1253;
};
struct f_dim_lo_234fr { int dummy;
 rt_int k_233;
 rstr result_;
};
struct f_dim_hi_236fr { int dummy;
 rt_int k_235;
 rstr result_;
};
struct f_more_dims_238fr { int dummy;
 P857 t_237;
 rstr result_;
 P844 r_1254;
 rt_int k_1255;
};
struct f_acnt_241fr { int dummy;
 P857 t_239;
 rstr *base_240;
 rstr result_;
 P844 r_1259;
 rt_int k_1260;
};
struct f_cons_lo_244fr { int dummy;
 P853 c_242;
 rt_int k_243;
 P844 result_;
 P855 l_1264;
 rt_int i_1265;
};
struct f_cons_hi_247fr { int dummy;
 P853 c_245;
 rt_int k_246;
 P844 result_;
 P855 l_1269;
 rt_int i_1270;
};
struct f_idx_type_250fr { int dummy;
 P857 t_248;
 rt_int k_249;
 P857 result_;
 P872 l_1274;
 rt_int i_1275;
};
struct f_init_ascii_251fr { int dummy;
 P851 head_1279;
 P851 tail_1280;
 rt_int start_1281;
 rt_int i_1282;
 P851 lit_1286;
 P851 h2_1287;
 P851 t2_1288;
 P851 l1_1289;
 P851 l2_1290;
 P851 l3_1291;
};
struct f_lit_index_254fr { int dummy;
 P851 lits_252;
 rstr *name_253;
 rt_int result_;
 rt_int i_1292;
 P851 l_1293;
};
struct f_resolve_subtype_257fr { int dummy;
 P851 st_255;
 P853 *c_256;
 P853 c_256v;
 P857 result_;
 P857 t_1294;
 int ok_1295;
 P857 dummy_1296;
 P857 et_1298;
 P853 ec_1299;
 P857 et_1300;
 P851 ix_1301;
 rt_int k_1302;
 P872 tail_1303;
 P855 btail_1304;
 P853 ic_1305;
 P857 it_1306;
 P844 lo_1307;
 P844 hi_1308;
 P872 tl_1309;
 P855 l1_1311;
 P855 l2_1312;
 P853 ec_1315;
 P851 comp_1316;
 P859 tail_1317;
 P853 cc_1318;
 P859 f_1319;
 P851 lits_1321;
 P851 ltail_1322;
 P859 f_1323;
 P851 l_1324;
 P851 gt_1325;
 P853 ec_1326;
 P844 base_1327;
};
struct f_float_lit_259fr { int dummy;
 P851 e_258;
 int result_;
};
struct f_tag_constraint_263fr { int dummy;
 P857 t_260;
 P851 e_261;
 P853 c_262;
 P857 dummy_1328;
};
struct f_named_subtype_266fr { int dummy;
 P851 st_264;
 P853 *c_265;
 P853 c_265v;
 P857 result_;
 P857 t_1329;
 P861 y_1330;
 rstr name_1331;
 P861 binds_1332;
 P865 saved_env_1333;
 rt_int saved_gdepth_1334;
 P861 nb_1335;
};
struct f_invoke_abbrev_270fr { int dummy;
 P861 y_267;
 P851 st_268;
 P853 *c_269;
 P853 c_269v;
 P857 result_;
 P851 p_1336;
 P851 a_1337;
 P857 t_1338;
 P861 z_1339;
 P853 pc_1340;
 P857 at_1341;
 int ok_1342;
};
struct f_apply_constraint_275fr { int dummy;
 P857 t_271;
 P851 args_272;
 P853 c_273;
 rt_int line_274;
 P857 dummy_1343;
 int ok_1344;
};
struct f_value_subtype_279fr { int dummy;
 P851 e_276;
 P853 *c_277;
 P853 c_277v;
 P844 *base_278;
 P844 base_278v;
 P857 result_;
 P857 t_1345;
 P853 c0_1346;
 int ro_1347;
 rt_int k_1348;
 rstr lo_1352;
 rstr hi_1353;
 P855 l1_1354;
 P855 l2_1355;
 P851 p_1358;
 P851 head_1359;
 P851 tail_1360;
 P851 sel_1361;
};
struct f_reverse_pairs_281fr { int dummy;
 P855 l_280;
 P855 result_;
 P855 r_1362;
 P855 p_1363;
 P855 a_1364;
 P855 b_1365;
};
struct f_inquiry_284fr { int dummy;
 P851 st_282;
 P853 *c_283;
 P853 c_283v;
 P857 result_;
 P844 base_1366;
 P857 t_1367;
 rstr name_1368;
 P851 sub_1369;
 P853 c2_1370;
 rt_int k_1371;
 int ok_1372;
 P853 ac_1373;
};
struct f_as_subtype_286fr { int dummy;
 P851 e_285;
 P851 result_;
 P851 st_1374;
 rstr name_1375;
 P861 y_1376;
};
struct f_tt_subtype_291fr { int dummy;
 P844 name_287;
 P851 tt_288;
 P851 args_289;
 rt_int line_290;
 P851 result_;
 P851 st_1377;
};
struct f_type_name_293fr { int dummy;
 rstr *name_292;
 int result_;
 P861 y_1378;
};
struct f_empty_set_295fr { int dummy;
 P857 t_294;
 rstr result_;
};
struct f_opened_297fr { int dummy;
 P857 t_296;
 int result_;
 P878 c_1379;
};
struct f_replace_all_301fr { int dummy;
 rstr *s_298;
 rstr *pat_299;
 rstr *r_300;
 rstr result_;
 rt_int i_1380;
};
struct f_subst_303fr { int dummy;
 rstr *s_302;
 rstr result_;
 P855 l_1381;
 P844 r_1382;
};
struct f_new_type_307fr { int dummy;
 P861 y_304;
 P851 st_305;
 P853 *c_306;
 P853 c_306v;
 P857 result_;
 P851 d_1383;
 P851 p_1384;
 P853 uc_1385;
 P861 z_1386;
 P853 zc_1387;
};
struct f_init_storage_311fr { int dummy;
 rstr *lval_308;
 P857 t_309;
 P853 c_310;
};
struct f_init_call_314fr { int dummy;
 P861 y_312;
 rstr *lval_313;
 rstr result_;
 P844 link_1388;
 rt_int i_1389;
};
struct f_needs_fin_316fr { int dummy;
 P857 t_315;
 int result_;
 P859 f_1393;
};
struct f_fin_code_319fr { int dummy;
 rstr *lval_317;
 P857 t_318;
 rstr result_;
 P844 r_1394;
 rstr i_1395;
 P859 f_1396;
 P859 f_1397;
 rt_int i_1398;
};
struct f_tparam_type_322fr { int dummy;
 P857 t_320;
 rstr *name_321;
 P857 result_;
 P861 z_1399;
};
struct f_make_storage_326fr { int dummy;
 rstr *lval_323;
 P857 t_324;
 P853 c_325;
 P851 p_1400;
 P851 a_1401;
 P853 uc_1402;
 P857 ut_1403;
 P857 at_1404;
 P857 pt_1405;
 rstr v_1406;
 P855 saved_1407;
 P855 l1_1408;
 P855 l2_1409;
 rt_int k_1412;
 rstr i_1416;
 P859 f_1417;
 P859 f_1418;
 rt_int i_1419;
};
struct f_uninit_value_328fr { int dummy;
 P857 t_327;
 rstr result_;
};
struct f_init_chk_331fr { int dummy;
 P857 t_329;
 rstr *v_330;
 rstr result_;
 P857 b_1423;
};
struct f_manifest_334fr { int dummy;
 P851 e_332;
 int *ok_333;
 int ok_333v;
 rt_int result_;
 P870 v_1424;
};
struct f_mk_mval_337fr { int dummy;
 rt_int kind_335;
 rt_int i_336;
 P870 result_;
 P870 v_1425;
};
struct f_ipow_340fr { int dummy;
 rt_int a_338;
 rt_int b_339;
 rt_int result_;
 rt_int r_1427;
 rt_int i_1428;
};
struct f_meval_343fr { int dummy;
 P851 e_341;
 int *ok_342;
 int ok_342v;
 P870 result_;
 P870 a_1432;
 P870 b_1433;
 int ok2_1434;
 P844 op_1435;
 P861 y_1436;
 P870 r_1437;
};
struct f_bool_text_345fr { int dummy;
 int b_344;
 rstr result_;
};
struct f_bool_i_347fr { int dummy;
 int b_346;
 rt_int result_;
};
struct f_mstr_349fr { int dummy;
 P870 v_348;
 rstr result_;
};
struct f_ascii_char_351fr { int dummy;
 rt_int i_350;
 int result_;
 rstr printable_1438;
};
struct f_user_defined_353fr { int dummy;
 rstr *op_352;
 int result_;
 P861 y_1439;
};
struct f_mcopy_355fr { int dummy;
 P857 t_354;
 rstr result_;
 rstr ct_1440;
 rstr name_1441;
 P855 l_1442;
};
struct f_composite_357fr { int dummy;
 P857 t_356;
 int result_;
};
struct f_assign_code_362fr { int dummy;
 rstr *lval_358;
 P857 t_359;
 rstr *v_360;
 P853 c_361;
 rstr result_;
};
struct f_copy_code_365fr { int dummy;
 P857 t_363;
 rstr *v_364;
 rstr result_;
};
struct f_eq_code_369fr { int dummy;
 P857 t_366;
 rstr *a_367;
 rstr *b_368;
 rstr result_;
};
struct f_elem_assign_373fr { int dummy;
 rstr *lval_370;
 P857 t_371;
 rstr *v_372;
 rstr result_;
};
struct f_seen_name_376fr { int dummy;
 P855 l_374;
 rstr *s_375;
 int result_;
 P855 p_1444;
};
struct f_emit_helpers_377fr { int dummy;
 P857 order_1445;
 P857 t_1446;
 P855 done_1447;
 P855 l_1448;
 rstr c_1449;
};
struct f_helper_bodies_379fr { int dummy;
 P857 t_378;
 rstr c_1451;
 P874 b_1452;
 P857 e_1453;
 P844 sizes_1454;
 P844 bounds_1455;
 rt_int k_1456;
 rstr l_1460;
 rstr h_1461;
 P855 saved_1462;
 P851 p_1463;
 P855 l1_1464;
 P855 l2_1465;
 P859 f_1468;
 rt_int i_1469;
 P844 cases_as_1470;
 P844 cases_cp_1471;
 P844 cases_eq_1472;
 rstr fn_1473;
 P859 f_1474;
 P844 conds_1475;
 rstr fn_1476;
 rstr fn_1477;
};
struct f_declare_body_381fr { int dummy;
 P851 elems_380;
 P851 e_1478;
 P861 g_1479;
 P861 y_1480;
 P861 y_1481;
 P861 y_1482;
 P857 t_1483;
 P861 y_1484;
 P861 y_1485;
 P865 snap_1486;
 rt_int i_1490;
 P861 g_1494;
 P861 y_1495;
};
struct f_manifest_const_383fr { int dummy;
 P851 d_382;
 int ok_1496;
 P870 v_1497;
 P861 y_1498;
 P857 t_1499;
 P844 ctext_1500;
 P874 saved_1501;
};
struct f_exported_387fr { int dummy;
 P851 d_384;
 rstr *name_385;
 int *ro_386;
 int ro_386v;
 int result_;
 P851 p_1504;
};
struct f_copy_sym_389fr { int dummy;
 P861 y_388;
 P861 result_;
 P861 z_1505;
};
struct f_gen_capsule_391fr { int dummy;
 P851 d_390;
 P861 y_1507;
 P844 saved_1508;
 P851 p_1509;
 P863 tail_1510;
 P863 pm_1511;
};
struct f_capsule_params_395fr { int dummy;
 P851 d_392;
 P851 args_393;
 rt_int line_394;
 P851 p_1513;
 P851 a_1514;
 P857 t_1515;
 P857 vt_1516;
 P853 c_1517;
 P844 lv_1518;
 P853 lc_1519;
 int ro_1520;
 P861 y_1521;
 rstr f_1522;
 rstr g_1523;
 P861 y_1524;
 rstr v_1525;
 rstr access_1526;
};
struct f_elaborate_capsule_400fr { int dummy;
 P851 d_396;
 P861 y_397;
 P851 args_398;
 P851 owner_399;
 P878 cr_1527;
 P868 ctx_1528;
 P876 saved_gotos_1529;
 P861 m_1530;
 P851 p_1531;
 int ro_1532;
 P880 w_1535;
 P861 z_1537;
};
struct f_exports_op_403fr { int dummy;
 P851 d_401;
 rstr *op_402;
 int result_;
 P851 p_1538;
};
struct f_renamed_406fr { int dummy;
 P851 d_404;
 P861 z_405;
 P844 result_;
 P851 r_1539;
};
struct f_pick_capsule_408fr { int dummy;
 P851 d_407;
 P861 result_;
 P861 y_1540;
 P861 first_1541;
 P861 fit_1542;
 rt_int n_1543;
};
struct f_capsule_instance_411fr { int dummy;
 P861 g_409;
 P851 d_410;
 P861 result_;
 P851 gd_1544;
 P851 pat_1545;
 P861 binds_1546;
 P861 inst_1547;
 P865 saved_env_1548;
 rt_int saved_gdepth_1549;
 P861 b_1550;
};
struct f_gen_expose_413fr { int dummy;
 P851 d_412;
 P861 y_1551;
 P861 m_1552;
 P851 p_1553;
 P851 r_1554;
 P861 inst_1555;
 int found_1556;
 P861 z_1557;
 int found_1558;
 P861 z_1559;
};
struct f_finish_ptr_415fr { int dummy;
 P857 t_414;
 P851 d_1560;
 P851 p_1561;
 P853 c_1562;
 rstr dummy_1563;
 rt_int pass_1564;
 P861 y_1568;
 P853 pc_1569;
};
struct f_ptr_args_417fr { int dummy;
 P853 c_416;
 P851 result_;
};
struct f_bind_ptr_params_422fr { int dummy;
 P851 formals_418;
 P851 actuals_419;
 rstr *cell_420;
 rt_int line_421;
 P851 p_1570;
 P851 a_1571;
 P857 vt_1572;
 P853 pc_1573;
 P861 y_1574;
 rstr v_1575;
 rstr pv_1576;
};
struct f_alloc_cell_427fr { int dummy;
 P851 s_423;
 rstr *lv_424;
 P857 t_425;
 P853 c_426;
 P851 d_1577;
 P853 tc_1578;
 P857 vt_1579;
 rstr pt_1580;
 rstr cell_1581;
 rstr fn_1582;
 rstr v_1583;
};
struct f_freeze_args_431fr { int dummy;
 P853 c_428;
 P857 t_429;
 rt_int line_430;
 P853 result_;
 P853 r_1584;
 P851 p_1585;
 P851 a_1586;
 P851 head_1587;
 P851 tail_1588;
 P844 saved_1589;
 P853 pc_1590;
 P857 vt_1591;
 P857 pt_1592;
 rstr nm_1593;
 P861 y_1594;
 P851 n_1595;
 rstr v_1596;
 rstr access_1597;
};
struct f_ptr_subtype_check_435fr { int dummy;
 P857 t_432;
 P853 c_433;
 P851 src_434;
 P844 lv_1598;
 P857 st_1599;
 P853 sc_1600;
 int ro_1601;
 P844 cond_1602;
 P851 a_1603;
 P851 b_1604;
 P857 at_1605;
 P857 bt_1606;
 rstr x_1607;
 rstr y_1608;
};
struct f_normal_function_438fr { int dummy;
 P851 d_436;
 P861 y_437;
 P863 p_1609;
 P851 imp_1610;
 int ro_1611;
 P861 z_1612;
};
struct f_declare_subprogram_440fr { int dummy;
 P851 d_439;
};
struct f_build_subprogram_442fr { int dummy;
 P851 d_441;
 P861 result_;
 P861 y_1613;
 P851 p_1614;
 P863 tail_1615;
 P863 pm_1616;
 P853 rc_1618;
 P863 pm_1619;
 P874 saved_1620;
 P861 z_1621;
};
struct f_has_pragmat_445fr { int dummy;
 P844 pr_443;
 rstr *p_444;
 int result_;
 rt_int i_1622;
};
struct f_suppressing_447fr { int dummy;
 P844 pr_446;
 P844 result_;
 P844 r_1626;
 rt_int i_1627;
 rt_int j_1628;
 rt_int k_1629;
};
struct f_suppressed_449fr { int dummy;
 rstr *x_448;
 int result_;
 rstr w_1630;
 rt_int i_1631;
};
struct f_element_451fr { int dummy;
 P851 e_450;
 P844 saved_1635;
};
struct f_element1_453fr { int dummy;
 P851 e_452;
 rt_int k_1636;
 P861 g_1637;
 rt_int i_1641;
 P857 t_1645;
 rstr c_1646;
};
struct f_storage_456fr { int dummy;
 rstr *name_454;
 P857 t_455;
 rstr result_;
 rstr g_1647;
 rstr f_1648;
};
struct f_bind_459fr { int dummy;
 P861 y_457;
 rstr *access_458;
};
struct f_var_decl_461fr { int dummy;
 P851 d_460;
 P853 c_1649;
 P857 t_1650;
 P861 y_1651;
 rstr access_1652;
 P857 it_1653;
 rstr n_1654;
 P857 vt_1655;
 rstr v_1656;
};
struct f_open_fin_463fr { int dummy;
 rstr *fc_462;
 rstr f_1657;
 P855 l_1658;
};
struct f_close_fins_465fr { int dummy;
 P855 saved_464;
};
struct f_const_decl_467fr { int dummy;
 P851 d_466;
 P853 c_1660;
 P857 t_1661;
 P857 vt_1662;
 P861 y_1663;
 int ok_1664;
 rstr v_1665;
 rstr access_1666;
};
struct f_subprogram_469fr { int dummy;
 P851 d_468;
};
struct f_gen_subprogram_472fr { int dummy;
 P851 d_470;
 P861 y_471;
 P874 saved_code_1667;
 P874 saved_fields_1668;
 int saved_in_1669;
 P861 saved_sym_1670;
 P876 saved_exits_1671;
 P876 saved_gotos_1672;
 rt_int saved_frames_1673;
 P844 args_1674;
 P863 pm_1675;
 P855 saved_handlers_1676;
 P855 saved_cleanups_1677;
 P868 ctx_1678;
 P844 head_1679;
 P844 frame_1680;
 P844 parent_1681;
 P844 copy_back_1682;
 P844 pfin_1683;
 P855 saved_fins_1684;
 P853 saved_rc_1685;
 P844 saved_ret_1686;
 P844 saved_rflag_1687;
 P851 pn_1688;
 P844 nonrec_end_1689;
 int has_pfin_1690;
 rstr ct_1692;
 rstr f_1693;
 P861 p_1694;
 P853 pc_1695;
 P853 ac_1696;
 P853 fc_1697;
 P857 ft_1698;
 rstr bt_1699;
 P853 rc_1700;
 P857 rt_1701;
 rstr g_1702;
 P844 leave_1703;
 rstr xu_1704;
};
struct f_waits_of_474fr { int dummy;
 P851 d_473;
 rstr result_;
 P880 w_1705;
};
struct f_task_waits_476fr { int dummy;
 P851 elems_475;
 rstr result_;
 P851 e_1706;
 P844 r_1707;
};
struct f_await_tasks_478fr { int dummy;
 P851 elems_477;
 rstr w_1708;
};
struct f_capsule_elements_480fr { int dummy;
 P851 elems_479;
 P851 e_1709;
};
struct f_declare_labels_482fr { int dummy;
 P851 elems_481;
 P851 e_1710;
 P851 l_1711;
 P876 x_1712;
};
struct f_start_labels_483fr { int dummy;
 P876 x_1714;
};
struct f_goto_label_485fr { int dummy;
 rstr *name_484;
 P876 result_;
 P876 x_1715;
};
struct f_has_return_487fr { int dummy;
 P851 e_486;
 int result_;
 P851 x_1716;
};
struct f_capsule_body_489fr { int dummy;
 P851 elems_488;
 P844 saved_ret_1717;
 P844 saved_flag_1718;
 rt_int saved_frames_1719;
 P851 e_1720;
 int stmt_1721;
};
struct f_body_elements_491fr { int dummy;
 P851 elems_490;
};
struct f_gen_body_493fr { int dummy;
 P851 elems_492;
 P855 saved_1722;
 P876 saved_gotos_1723;
 rstr xu_1724;
};
struct f_open_unhandled_495fr { int dummy;
 P851 elems_494;
 rstr result_;
 P851 e_1725;
 P844 conds_1726;
 rstr f_1727;
};
struct f_close_unhandled_497fr { int dummy;
 rstr *xu_496;
 rt_int i_1728;
 rstr f_1729;
};
struct f_pop_frames_499fr { int dummy;
 rt_int upto_498;
 rt_int i_1730;
 P855 c_1731;
};
struct f_push_cleanup_501fr { int dummy;
 rstr *s_500;
 P855 c_1732;
};
struct f_pop_cleanup_502fr { int dummy;
};
struct f_gen_statement_504fr { int dummy;
 P851 s_503;
 P844 label_1734;
 P851 gl_1735;
 P876 x_1736;
 P876 x_1739;
};
struct f_st_assign_506fr { int dummy;
 P851 s_505;
 P844 lv_1740;
 P857 t_1741;
 P857 vt_1742;
 P853 c_1743;
 int ro_1744;
 rstr lo_1745;
 rstr hi_1746;
 rstr v_1747;
 rstr lo_1748;
 rstr hi_1749;
 rstr v_1750;
 rstr v_1751;
};
struct f_st_call_508fr { int dummy;
 P851 s_507;
 P851 c_1752;
 P857 t_1753;
 P851 x_1754;
};
struct f_st_if_510fr { int dummy;
 P851 s_509;
 P851 a_1755;
 int first_1756;
 P857 t_1757;
 int taken_1758;
 int ok_1759;
 P870 mv_1760;
 rstr c_1761;
};
struct f_st_case_512fr { int dummy;
 P851 s_511;
 P857 st_1762;
 P857 vt_1763;
 int first_1764;
 P851 a_1765;
 rstr sel_1766;
 rstr tmp_1767;
 P851 lab_1768;
 P844 conds_1769;
 rstr v_1770;
 rstr lo_1771;
 rstr hi_1772;
};
struct f_st_repeat_514fr { int dummy;
 P851 s_513;
 P857 t_1773;
 P853 c_1774;
 rstr cond_1775;
 rstr access_1776;
 rstr lov_1777;
 rstr hiv_1778;
 rstr it_1779;
 P861 y_1780;
};
struct f_st_exit_516fr { int dummy;
 P851 s_515;
 P876 x_1781;
};
struct f_st_return_518fr { int dummy;
 P851 s_517;
 P857 vt_1782;
 rstr v_1783;
};
struct f_result_checked_522fr { int dummy;
 P857 t_519;
 P853 c_520;
 rstr *v_521;
 rstr result_;
};
struct f_exc_id_525fr { int dummy;
 rstr *name_523;
 rt_int line_524;
 rstr result_;
 P861 y_1784;
};
struct f_st_guard_527fr { int dummy;
 P851 s_526;
 P851 h_1785;
 int first_1786;
 P855 hv_1787;
 rstr f_1788;
 rstr x_1789;
 P851 h1_1791;
 P855 seen_1792;
 P851 n1_1793;
 P851 n_1794;
 P844 conds_1795;
};
struct f_st_alloc_529fr { int dummy;
 P851 s_528;
 P844 lv_1796;
 P857 t_1797;
 P857 target_1798;
 P857 vt_1799;
 P853 c_1800;
 P853 tc_1801;
 int ro_1802;
 P851 d_1803;
 P851 p_1804;
 P851 a_1805;
 rstr tcn_1806;
 rstr cell_1807;
 rstr fn_1808;
 rstr v_1809;
};
struct f_act_ref_531fr { int dummy;
 P851 e_530;
 rstr result_;
 P844 lv_1810;
 P857 t_1811;
 P853 c_1812;
 int ro_1813;
 rstr v_1814;
};
struct f_st_create_533fr { int dummy;
 P851 s_532;
 P861 y_1815;
 P863 pm_1816;
 P851 a_1817;
 P844 lv_1818;
 P857 lt_1819;
 P857 vt_1820;
 P853 lc_1821;
 int ro_1822;
 P857 at_1823;
 P853 ac_1824;
 int aro_1825;
 P844 act_1826;
 rstr nf_1827;
 P844 link_1828;
 rt_int i_1829;
 rstr v_1833;
};
struct f_hidden_var_537fr { int dummy;
 rstr *name_534;
 P857 t_535;
 rstr *place_536;
 P861 y_1834;
};
struct f_user_create_543fr { int dummy;
 P851 s_538;
 P861 y_539;
 rstr *uv_540;
 P857 ut_541;
 rstr *nf_542;
 P857 t_1835;
 P874 saved_1836;
 P874 hook_1837;
 P851 un_1838;
 rstr hn_1839;
 rstr aa_1840;
 rstr uname_1841;
 rstr aname_1842;
 P851 start_1843;
 P851 an_1844;
};
struct f_wait_alt_548fr { int dummy;
 P851 inv_544;
 rstr *arr_545;
 rt_int i_546;
 int mixed_547;
 rstr result_;
 P844 lv_1845;
 P857 t_1846;
 P857 vt_1847;
 P853 c_1848;
 int ro_1849;
 P851 fn_1850;
 P851 args_1851;
 rstr slot_1852;
 P844 dv_1853;
 P857 dt_1854;
 rstr tmp_1855;
 rstr v_1856;
 rstr v_1857;
};
struct f_builtin_wait_550fr { int dummy;
 P851 inv_549;
 int result_;
 P844 lv_1858;
 P857 t_1859;
 P853 c_1860;
 int ro_1861;
 P874 saved_1862;
 int ok_1863;
};
struct f_wait_op_555fr { int dummy;
 P851 inv_551;
 rstr *op_552;
 rstr *q_553;
 int is_stmt_554;
 rstr result_;
 P851 x_1866;
 P851 f_1867;
 P851 qn_1868;
 P857 t_1869;
 rstr r_1870;
};
struct f_user_wait_560fr { int dummy;
 P851 s_556;
 rstr *arr_557;
 rstr *w_558;
 rt_int n_559;
 P851 a_1871;
 rt_int i_1872;
 P844 tests_1873;
 P844 revokes_1874;
 P851 inv_1875;
 P851 st_1876;
 P853 c_1877;
 P857 qt_1878;
 rstr qname_1879;
 P861 y_1880;
 rstr access_1881;
};
struct f_st_wait_562fr { int dummy;
 P851 s_561;
 P851 a_1882;
 rt_int n_1883;
 int first_1884;
 P874 inits_1885;
 int user_1886;
 rstr arr_1887;
 rstr w_1888;
 P851 inv_1889;
 P851 inv_1890;
 P844 conds_1891;
 rt_int i_1892;
};
struct f_call_node_566fr { int dummy;
 rstr *name_563;
 P851 arg_564;
 rt_int line_565;
 P851 result_;
 P851 x_1896;
 P851 f_1897;
};
struct f_user_region_568fr { int dummy;
 P851 s_567;
 P857 t_1898;
 rstr f_1899;
 rstr lock_1900;
 rstr unlock_1901;
};
struct f_st_region_570fr { int dummy;
 P851 s_569;
 P844 lv_1902;
 P857 t_1903;
 P853 c_1904;
 int ro_1905;
 rstr lk_1906;
 rstr f_1907;
};
struct f_gparam_573fr { int dummy;
 P851 g_571;
 rstr *name_572;
 P851 result_;
 P851 p_1908;
};
struct f_bind_sym_575fr { int dummy;
 P851 p_574;
 P861 result_;
 P861 y_1909;
};
struct f_same_binds_578fr { int dummy;
 P861 a_576;
 P861 b_577;
 int result_;
 P861 x_1910;
 P861 y_1911;
};
struct f_same_binding_581fr { int dummy;
 P861 a_579;
 P861 b_580;
 int result_;
};
struct f_tt_binds_586fr { int dummy;
 P851 gd_582;
 P851 formals_583;
 P851 actuals_584;
 rt_int line_585;
 P861 result_;
 P851 f_1912;
 P851 a_1913;
 P861 binds_1914;
 P853 c_1915;
 P857 at_1916;
 P851 p_1917;
 P861 b_1918;
 P851 st_1919;
 int ok_1920;
 int ok_1921;
};
struct f_type_allowed_590fr { int dummy;
 P857 t_587;
 P851 items_588;
 P861 binds_589;
 int result_;
 P851 it_1922;
 P857 b_1923;
 rstr w_1924;
 P853 c_1925;
};
struct f_resolve_in_binds_594fr { int dummy;
 P851 st_591;
 P861 binds_592;
 P853 *c_593;
 P853 c_593v;
 P857 result_;
 P861 b_1926;
 P857 t_1927;
 P861 z_1928;
};
struct f_pick_operation_601fr { int dummy;
 rt_int kind_595;
 rstr *name_596;
 P851 sig_597;
 P851 res_598;
 P861 binds_599;
 rt_int line_600;
 P861 result_;
 P861 y_1929;
 P853 c_1930;
 rt_int want_1931;
 rt_int pass_1932;
 int ok_1936;
 P851 s_1937;
 P863 pm_1938;
};
struct f_kind_word_603fr { int dummy;
 rt_int kind_602;
 rstr result_;
};
struct f_need_binds_607fr { int dummy;
 P851 gd_604;
 P861 binds_605;
 rt_int line_606;
 P861 result_;
 P851 it_1939;
 P861 r_1940;
 int found_1941;
 P861 y_1942;
 P861 z_1943;
};
struct f_generic_use_609fr { int dummy;
 P851 st_608;
 int result_;
};
struct f_infer_from_614fr { int dummy;
 P851 gd_610;
 P851 pat_611;
 P857 t_612;
 P861 known_613;
 P861 result_;
 P861 binds_1944;
 P851 e_1945;
 P851 tp_1946;
 P844 nm_1947;
 P861 q_1948;
 int have_1949;
 P861 g_1950;
 P861 b_1951;
};
struct f_instantiate_type_620fr { int dummy;
 P861 g_615;
 P851 tt_616;
 P851 args_617;
 P853 *c_618;
 P853 c_618v;
 rt_int line_619;
 P857 result_;
 P851 gd_1952;
 P851 pat_1953;
 P861 binds_1954;
 P861 inst_1955;
 P857 t_1956;
 P878 saved_caps_1957;
 P865 saved_env_1958;
 rt_int saved_gdepth_1959;
 P861 b_1960;
 P861 y_1961;
 P853 yc_1962;
};
struct f_instantiate_625fr { int dummy;
 P861 g_621;
 P851 tt_622;
 P851 args_623;
 rt_int line_624;
 P861 result_;
 P851 gd_1964;
 P851 pat_1965;
 P861 binds_1966;
 P851 f_1967;
 P851 a_1968;
 P851 fp_1969;
 P861 inst_1970;
 P857 at_1971;
 P853 c_1972;
 P868 saved_fctx_1973;
 int saved_in_1974;
 rt_int saved_level_1975;
 P861 saved_sym_1976;
 P874 saved_code_1977;
 P865 saved_env_1978;
 rt_int saved_gdepth_1979;
 rstr v_1980;
 int known_1981;
 P861 q_1982;
 P861 b_1983;
 rstr v_1984;
 P861 b_1985;
};
struct f_access_of_627fr { int dummy;
 P861 y_626;
 rstr result_;
 P844 p_1986;
 rt_int i_1987;
};
struct f_import_of_630fr { int dummy;
 P851 l_628;
 rstr *name_629;
 P851 result_;
 P851 p_1991;
};
struct f_check_import_633fr { int dummy;
 P861 y_631;
 rt_int line_632;
 int result_;
 P868 c_1992;
 int ro_1993;
 P851 imp_1994;
};
struct f_c_ident_635fr { int dummy;
 rstr *s_634;
 rstr result_;
};
struct f_cell_deref_638fr { int dummy;
 P857 t_636;
 rstr *p_637;
 rstr result_;
};
struct f_deref_641fr { int dummy;
 rstr *base_639;
 P857 t_640;
 rstr result_;
};
struct f_is_lvalue_643fr { int dummy;
 P851 e_642;
 int result_;
 P861 y_1995;
};
struct f_lvalue_649fr { int dummy;
 P851 e_644;
 P844 *code_645;
 P844 code_645v;
 P857 *t_646;
 P857 t_646v;
 P853 *c_647;
 P853 c_647v;
 int *ro_648;
 int ro_648v;
 P844 base_1996;
 P857 bt_1997;
 P853 bc_1998;
 P861 y_1999;
};
struct f_select_on_657fr { int dummy;
 rstr *base_650;
 P857 bt_651;
 P851 e_652;
 int *ro_653;
 P844 *code_654;
 P844 code_654v;
 P857 *t_655;
 P857 t_655v;
 P853 *c_656;
 P853 c_656v;
 P851 p_2000;
 P853 pc_2001;
 P851 p_2002;
 P859 f_2003;
 rt_int i_2004;
 rstr fn_2005;
 P859 f_2006;
};
struct f_has_call_659fr { int dummy;
 rstr *s_658;
 int result_;
 rt_int i_2007;
};
struct f_need_slice_661fr { int dummy;
 P857 t_660;
 rstr c_2011;
 rstr n_2012;
 P855 l_2013;
};
struct f_ix_665fr { int dummy;
 rstr *i_662;
 rstr *lo_663;
 rstr *hi_664;
 rstr result_;
};
struct f_index_on_674fr { int dummy;
 rstr *base_666;
 P857 bt_667;
 P851 e_668;
 int *ro_669;
 int lv_670;
 P844 *code_671;
 P844 code_671v;
 P857 *t_672;
 P857 t_672v;
 P853 *c_673;
 P853 c_673v;
 P851 a_2015;
 P857 it_2016;
 rstr lo_2017;
 rstr hi_2018;
 P844 off_2019;
 rt_int k_2020;
 P844 b_2021;
 P844 pre_2022;
 rstr i_2023;
 rstr l_2024;
 rstr h_2025;
 rstr lo_2026;
 rstr hi_2027;
 rstr i_2028;
};
struct f_own_attribute_676fr { int dummy;
 P851 e_675;
 int result_;
 P874 saved_2029;
 P857 bt_2030;
 int ok_2031;
 rstr base_2034;
 P851 p_2035;
 P859 f_2036;
};
struct f_gexpr_680fr { int dummy;
 P851 e_677;
 P857 want_678;
 P857 *t_679;
 P857 t_679v;
 rstr result_;
 rt_int k_2037;
 P844 code_2038;
 P853 c_2039;
 int ro_2040;
 P857 bt_2041;
 P853 ctx_2042;
 P844 r_2043;
 rt_int i_2044;
 rt_int pos_2048;
 rt_int i_2049;
 P861 y_2050;
 int ro_2051;
 P851 call_2052;
 P851 fname_2053;
 rstr a_2054;
 rstr a_2055;
 rstr a_2056;
 P851 nm_2057;
 P861 y_2058;
 rstr base_2059;
 rstr base_2060;
};
struct f_resolved_683fr { int dummy;
 P851 e_681;
 P857 *t_682;
 P857 t_682v;
 rstr result_;
 P853 c_2061;
 P857 vt_2062;
 P861 y_2063;
 P851 tt_2064;
 P851 call_2065;
 P851 f_2066;
 P851 fname_2067;
 rstr v_2068;
};
struct f_gexpr_in_688fr { int dummy;
 P851 e_684;
 P857 want_685;
 P853 c_686;
 P857 *t_687;
 P857 t_687v;
 rstr result_;
};
struct f_ascii_lit_690fr { int dummy;
 int ch_689;
 rstr result_;
 P851 l_2069;
 rt_int i_2070;
};
struct f_octal_692fr { int dummy;
 rt_int n_691;
 rstr result_;
 rstr r_2074;
};
struct f_str_cat_part_694fr { int dummy;
 P857 t_693;
 P857 result_;
};
struct f_peek_type_696fr { int dummy;
 P851 e_695;
 P857 result_;
 P874 saved_2075;
 P857 t_2076;
 rstr v_2079;
};
struct f_set_operands_699fr { int dummy;
 P851 e_697;
 P857 want_698;
 P857 result_;
 P857 t_2080;
};
struct f_copy_node_701fr { int dummy;
 P851 e_700;
 P851 result_;
 P851 x_2081;
};
struct f_wrap_apply_703fr { int dummy;
 P851 e_702;
 P851 result_;
 P851 x_2083;
};
struct f_c_string_705fr { int dummy;
 rstr *s_704;
 rstr result_;
 rt_int n_2084;
 rt_int i_2085;
 rstr r_2089;
 rt_int j_2090;
 rt_int i_2091;
};
struct f_enum_type_of_708fr { int dummy;
 rstr *lit_706;
 rt_int line_707;
 P857 result_;
 P861 y_2095;
 P853 c_2096;
 P851 st_2097;
};
struct f_ptr_attribute_710fr { int dummy;
 P851 e_709;
 int result_;
 P844 lv_2098;
 P857 t_2099;
 P853 c_2100;
 int ro_2101;
 P851 p_2102;
 P874 saved_2103;
};
struct f_attribute_713fr { int dummy;
 P851 e_711;
 P857 *t_712;
 P857 t_712v;
 rstr result_;
 P857 bt_2104;
 P853 c_2105;
 P844 base_2106;
 P851 sub_2107;
 rstr name_2108;
 P851 p_2109;
 P851 a_2110;
 P853 pc_2111;
 rstr v_2112;
 P851 p_2113;
 P851 a_2114;
 P857 pt_2115;
 rstr v_2116;
};
struct f_subtype_compare_718fr { int dummy;
 P851 sa_714;
 P851 sb_715;
 rstr *op_716;
 rt_int line_717;
 rstr result_;
 P853 ca_2117;
 P853 cb_2118;
 P857 ta_2119;
 P857 tb_2120;
 P844 r_2121;
 rstr yes_2122;
 rstr no_2123;
 rt_int k_2124;
 P851 a_2128;
 P851 b_2129;
 P857 at_2130;
 P857 bt2_2131;
 rstr x_2132;
 rstr y_2133;
};
struct f_float_prec_720fr { int dummy;
 P853 c_719;
 rstr result_;
};
struct f_file_attribute_726fr { int dummy;
 P851 e_721;
 P857 bt_722;
 P853 c_723;
 P844 base_724;
 P857 *t_725;
 P857 t_725v;
 rstr result_;
};
struct f_gbinop_730fr { int dummy;
 P851 e_727;
 P857 want_728;
 P857 *t_729;
 P857 t_729v;
 rstr result_;
 P844 op_2134;
 P857 ta_2135;
 P857 tb_2136;
 P857 hint_2137;
 P861 uy_2138;
 P851 l_2139;
 P851 r_2140;
 P851 call_2141;
 P851 fname_2142;
 rstr s_2143;
 rstr a_2144;
 rstr a_2145;
 rstr b_2146;
 rstr a_2147;
 rstr b_2148;
 P857 at_2149;
 rstr a_2150;
 rstr b_2151;
 P857 wa_2152;
 P857 wb_2153;
 P857 ws_2154;
 P857 ce_2155;
 rstr a_2156;
 rstr b_2157;
 rstr dummy_2158;
 rstr a_2159;
 rstr b_2160;
 P857 ct_2161;
 rstr a_2162;
 rstr b_2163;
};
struct f_constructor_735fr { int dummy;
 P851 e_731;
 P857 want_732;
 P853 ctx_733;
 P857 *t_734;
 P857 t_734v;
 rstr result_;
 P851 it_2164;
 P859 f_2165;
 P857 vt_2166;
 P844 s_2167;
 rstr v_2168;
 rt_int i_2169;
 rstr tmp_2170;
 rstr v_2171;
 rstr tmp_2172;
 P844 parts_2173;
 P851 k_2174;
 P844 shared_2175;
 rstr v_2176;
 rstr v_2177;
};
struct f_comp_value_739fr { int dummy;
 P857 t_736;
 P853 c_737;
 rstr *v_738;
 rstr result_;
};
struct f_has_at_741fr { int dummy;
 rstr *s_740;
 int result_;
 rt_int i_2178;
};
struct f_set_elem_744fr { int dummy;
 P857 st_742;
 rstr *v_743;
 rstr result_;
};
struct f_array_cons_749fr { int dummy;
 P851 e_745;
 P857 at_746;
 P853 ctx_747;
 P857 *t_748;
 P857 t_748v;
 rstr result_;
 rstr tmp_2182;
 P844 parts_2183;
 P851 it_2184;
 int positional_2185;
 rt_int k_2186;
 P844 lo_2190;
 P844 hi_2191;
};
struct f_fill_items_755fr { int dummy;
 P851 items_750;
 P857 at_751;
 rstr *tmp_752;
 P855 prefix_753;
 rt_int dim_754;
 rstr result_;
 P851 it_2192;
 rt_int pos_2193;
 P844 r_2194;
 P857 vt_2195;
 rstr v_2196;
 P851 k_2197;
 rt_int d_2198;
 P855 pre_2199;
 P844 loops_2200;
 P844 ends_2201;
 rstr v_2202;
 rstr xv_2203;
 P851 k_2204;
 rstr xv_2205;
 rstr v_2206;
};
struct f_e_line_757fr { int dummy;
 P851 e_756;
 rt_int result_;
};
struct f_add_line_760fr { int dummy;
 P855 l_758;
 rstr *s_759;
 P855 result_;
 P855 r_2207;
 P855 tail_2208;
 P855 x_2209;
 P855 p_2210;
};
struct f_item_value_765fr { int dummy;
 P851 e_761;
 P857 at_762;
 rt_int line_763;
 P857 *vt_764;
 P857 vt_764v;
 rstr result_;
 rstr v_2213;
};
struct f_key_loop_770fr { int dummy;
 P851 k_766;
 P857 at_767;
 rt_int d_768;
 rstr *xv_769;
 rstr result_;
 P857 it_2214;
 rstr lo_2215;
 rstr hi_2216;
};
struct f_store_at_775fr { int dummy;
 P857 at_771;
 rstr *tmp_772;
 P855 xs_773;
 rt_int n_774;
 rstr result_;
 P844 off_2217;
 P855 x_2218;
 rt_int k_2219;
 rstr l_2220;
 rstr h_2221;
};
struct f_fits_778fr { int dummy;
 P861 y_776;
 P851 args_777;
 int result_;
 P851 a_2222;
 P863 pm_2223;
 P857 t_2224;
 P874 saved_2225;
 int ok_2226;
 P844 lv_2227;
 P853 lc_2228;
 int ro_2229;
 rstr v_2232;
};
struct f_resolve_overload_784fr { int dummy;
 rstr *name_779;
 P851 tt_780;
 P851 args_781;
 int is_stmt_782;
 rt_int line_783;
 P861 result_;
 P861 y_2233;
 P861 first_2234;
 rt_int n_2235;
 rt_int pass_2236;
};
struct f_tt_fits_787fr { int dummy;
 P861 y_785;
 P851 tt_786;
 int result_;
 P851 f_2240;
 P851 a_2241;
 P874 saved_2242;
 int ok_2243;
 P853 fc_2246;
 P853 ac_2247;
 P851 fst_2248;
 P857 ft_2249;
 P857 at_2250;
 P851 ast_2251;
};
struct f_overload_chain_790fr { int dummy;
 rstr *name_788;
 rt_int pass_789;
 P861 result_;
};
struct f_is_builtin_792fr { int dummy;
 rstr *n_791;
 int result_;
};
struct f_is_low_level_794fr { int dummy;
 rstr *n_793;
 int result_;
};
struct f_me_high_798fr { int dummy;
 P851 tt_795;
 rt_int line_796;
 P857 *t_797;
 P857 t_797v;
 rstr result_;
 P853 c_2252;
};
struct f_type_tag_800fr { int dummy;
 P857 t_799;
 rstr result_;
};
struct f_lock_ref_803fr { int dummy;
 P851 e_801;
 rstr *name_802;
 rstr result_;
 P844 lv_2253;
 P857 t_2254;
 P853 c_2255;
 int ro_2256;
};
struct f_user_op_806fr { int dummy;
 rstr *op_804;
 P851 args_805;
 P861 result_;
 P861 y_2257;
 rt_int pass_2258;
};
struct f_gcall_810fr { int dummy;
 P851 e_807;
 int is_stmt_808;
 P857 *t_809;
 P857 t_809v;
 rstr result_;
 P851 gd_2262;
 P851 fn_2263;
 P851 tt_2264;
 P861 y_2265;
 P844 args_2266;
 P851 a_2267;
 P863 pm_2268;
 P857 lt_2269;
 P857 vt_2270;
 P844 lv_2271;
 P853 lc_2272;
 int ro_2273;
 P861 alt_2274;
 P878 cr_2275;
 rt_int i_2276;
 rstr v_2280;
 rstr ct_2281;
 rstr v_2282;
 rstr chk_2283;
};
struct f_requires_812fr { int dummy;
 P861 y_811;
 P855 result_;
 P851 imp_2284;
};
struct f_add_req_815fr { int dummy;
 P861 y_813;
 rstr *name_814;
 P855 l_2285;
};
struct f_require_calls_818fr { int dummy;
 P861 y_816;
 P851 e_817;
 P851 x_2287;
 P851 callee_2288;
 P861 z_2289;
 P855 l_2290;
};
struct f_declared_in_821fr { int dummy;
 P851 elems_819;
 rstr *name_820;
 int result_;
 P851 e_2291;
};
struct f_check_requires_824fr { int dummy;
 P861 y_822;
 rt_int line_823;
 P855 l_2292;
 P861 z_2293;
};
struct f_act_delay_args_826fr { int dummy;
 P851 args_825;
 rstr result_;
 P857 at_2294;
 P857 t1_2295;
 rstr a_2296;
 rstr v_2297;
 rstr v_2298;
};
struct f_same_subtypes_829fr { int dummy;
 P851 gd_827;
 P851 args_828;
 rstr result_;
 P851 p_2299;
 P844 r_2300;
 P851 fp_2301;
 P851 a_2302;
 P844 flo_2303;
 P844 fhi_2304;
 P857 st_2305;
 P853 c_2306;
 P844 base_2307;
 P844 lo_2308;
 P844 hi_2309;
};
struct f_actual_bounds_833fr { int dummy;
 P857 ft_830;
 P857 t_831;
 P853 c_832;
 rstr result_;
};
struct f_builtin_840fr { int dummy;
 rstr *name_834;
 P851 tt_835;
 P851 args_836;
 rt_int line_837;
 int is_stmt_838;
 P857 *t_839;
 P857 t_839v;
 rstr result_;
 P857 at_2310;
 rt_int n_2311;
 rstr a_2312;
 rstr a_2313;
 rstr a_2314;
 rstr a_2315;
 rstr a_2316;
 rstr n1_2317;
 rstr m1_2318;
 rstr a_2319;
 rstr a_2320;
 P851 last_2321;
 rstr a_2322;
 rstr a_2323;
 P844 lv_2324;
 P853 lc_2325;
 int ro_2326;
 P851 last_2327;
 P844 lv_2328;
 P844 dv_2329;
 P853 lc_2330;
 int ro_2331;
 P857 mt_2332;
 P857 dt_2333;
 rstr v_2334;
 P844 lv_2335;
 P853 lc_2336;
 int ro_2337;
 P857 mt_2338;
 P844 lv_2339;
 P844 dv_2340;
 P844 bv_2341;
 P853 lc_2342;
 int ro_2343;
 P857 mt_2344;
 P857 dt_2345;
 P857 bt_2346;
 rstr v_2347;
 rstr v_2348;
 rstr v_2349;
 rstr v_2350;
 rstr a_2351;
 P844 bv_2352;
 P853 bc_2353;
 int ro_2354;
 P857 bt_2355;
 rstr l_2356;
 P844 pv_2357;
 P853 pc_2358;
 int ro_2359;
 P857 pt_2360;
 rstr dev_2361;
 rstr cmd_2362;
 P844 dv_2363;
 P853 dc_2364;
 int ro_2365;
 P857 dt_2366;
};
struct f_translate_842fr { int dummy;
 P851 units_841;
 P851 u_2367;
 P851 l_2369;
 rstr w_2370;
};
struct f_print_program_843fr { int dummy;
};
struct Pc845 { rt_int p_n; rstr all; };
struct Pc849 { rt_int p_n; A850 all; };
struct Pc866 { rt_int p_n; A867 all; };
static void as_R881(R881 *d, R881 s);
static R881 cp_R881(R881 s);
static int eq_R881(R881 a, R881 b);
static void as_R879(R879 *d, R879 s);
static R879 cp_R879(R879 s);
static int eq_R879(R879 a, R879 b);
static void as_R877(R877 *d, R877 s);
static R877 cp_R877(R877 s);
static int eq_R877(R877 a, R877 b);
static void as_R875(R875 *d, R875 s);
static R875 cp_R875(R875 s);
static int eq_R875(R875 a, R875 b);
static void as_R873(R873 *d, R873 s);
static R873 cp_R873(R873 s);
static int eq_R873(R873 a, R873 b);
static void as_R871(R871 *d, R871 s);
static R871 cp_R871(R871 s);
static int eq_R871(R871 a, R871 b);
static void as_R869(R869 *d, R869 s);
static R869 cp_R869(R869 s);
static int eq_R869(R869 a, R869 b);
static void as_A867(A867 *d, A867 s);
static A867 cp_A867(A867 s);
static int eq_A867(A867 a, A867 b);
static void as_R864(R864 *d, R864 s);
static R864 cp_R864(R864 s);
static int eq_R864(R864 a, R864 b);
static void as_R862(R862 *d, R862 s);
static R862 cp_R862(R862 s);
static int eq_R862(R862 a, R862 b);
static void as_R860(R860 *d, R860 s);
static R860 cp_R860(R860 s);
static int eq_R860(R860 a, R860 b);
static void as_R858(R858 *d, R858 s);
static R858 cp_R858(R858 s);
static int eq_R858(R858 a, R858 b);
static void as_R856(R856 *d, R856 s);
static R856 cp_R856(R856 s);
static int eq_R856(R856 a, R856 b);
static void as_R854(R854 *d, R854 s);
static R854 cp_R854(R854 s);
static int eq_R854(R854 a, R854 b);
static void as_R852(R852 *d, R852 s);
static R852 cp_R852(R852 s);
static int eq_R852(R852 a, R852 b);
static void as_A850(A850 *d, A850 s);
static A850 cp_A850(A850 s);
static int eq_A850(A850 a, A850 b);
static void as_R847(R847 *d, R847 s);
static R847 cp_R847(R847 s);
static int eq_R847(R847 a, R847 b);
static P844 f_mk_3(rstr *s_2);
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
static P874 f_new_buffer_24(void);
static void f_put_27(P874 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P874 b_30);
static void f_splice_34(P874 a_32, P874 b_33);
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
static P851 f_nn_61(rt_int kind_59, rt_int line_60);
static void f_append_65(P851 *head_62, P851 *tail_63, P851 x_64);
static rt_int f_list_len_67(P851 l_66);
static rt_int f_cur_line_68(void);
static int f_at_kw_70(rstr *w_69);
static int f_at_op_72(rstr *w_71);
static int f_at_kind_74(rt_int k_73);
static rt_int f_kind_at_76(rt_int k_75);
static P844 f_text_at_78(rt_int k_77);
static void f_perror_80(rstr *msg_79);
static int f_accept_kw_82(rstr *w_81);
static int f_accept_op_84(rstr *w_83);
static void f_expect_kw_86(rstr *w_85);
static void f_expect_op_88(rstr *w_87);
static P844 f_expect_id_89(void);
static P851 f_name_node_90(void);
static P851 f_id_list_91(void);
static P851 f_p_subtype_92(void);
static P851 f_constraint_list_93(void);
static P851 f_actual_params_94(void);
static int f_is_type_word_96(rstr *w_95);
static P851 f_actual_tt_97(void);
static P851 f_binop_102(P844 op_98, P851 l_99, P851 r_100, rt_int line_101);
static P851 f_expr_103(void);
static P851 f_expr_and_104(void);
static P851 f_expr_not_105(void);
static int f_is_rel_107(rstr *s_106);
static P851 f_expr_rel_108(void);
static P851 f_expr_add_109(void);
static P851 f_expr_mul_110(void);
static P851 f_expr_pow_111(void);
static P851 f_expr_prefix_112(void);
static P851 f_postfix_113(void);
static P851 f_primary_114(void);
static P851 f_constructor_item_115(void);
static int f_at_body_end_116(void);
static P851 f_body_117(void);
static P851 f_body_element_118(void);
static P851 f_declaration_119(void);
static P851 f_object_decl_120(void);
static P851 f_abbrev_decl_121(void);
static void f_skip_rep_122(void);
static P851 f_type_decl_123(void);
static rt_int f_mode_of_125(rstr *w_124);
static P851 f_formal_params_126(void);
static int f_imports_list_128(P851 owner_127);
static int f_is_definable_130(rstr *w_129);
static P844 f_definable_name_131(void);
static P851 f_subprogram_decl_132(void);
static P851 f_capsule_decl_133(void);
static P851 f_formal_tt_134(void);
static P851 f_generic_decl_135(void);
static P851 f_type_list_136(void);
static P851 f_task_decl_137(void);
static P851 f_expose_decl_138(void);
static int f_is_compound_kw_140(rstr *w_139);
static P851 f_statement_141(void);
static P851 f_unlabeled_statement_142(void);
static P851 f_arm_146(P851 cond_143, P851 b_144, rt_int line_145);
static P851 f_if_stmt_147(void);
static P851 f_case_stmt_148(void);
static P851 f_repeat_stmt_149(void);
static P851 f_guard_stmt_150(void);
static P851 f_program_151(void);
static rt_int f_hash_153(rstr *s_152);
static P861 f_lookup_155(rstr *name_154);
static P861 f_lookup_decl_157(P851 d_156);
static void f_define_160(P861 y_158, rt_int line_159);
static int f_overloadable_162(P861 y_161);
static int f_same_tt_165(P851 a_163, P851 b_164);
static int f_same_signature_168(P863 a_166, P863 b_167);
static void f_open_scope_169(void);
static void f_close_scope_170(void);
static P861 f_new_sym_173(rt_int kind_171, P844 name_172);
static P857 f_new_typ_175(rt_int kind_174);
static P853 f_new_cons_176(void);
static int f_scalar_kind_178(P857 t_177);
static rstr f_bound_ctype_180(P857 t_179);
static rstr f_cbound_183(P853 c_181, rstr *b_182);
static rstr f_clo_185(P853 c_184);
static rstr f_chi_187(P853 c_186);
static rstr f_sub_lo_190(P857 t_188, P853 c_189);
static rstr f_sub_hi_193(P857 t_191, P853 c_192);
static rstr f_raw_storage_196(rstr *name_194, rstr *ct_195);
static P853 f_copy_cons_198(P853 c_197);
static P853 f_freeze_201(P853 c_199, P857 t_200);
static rstr f_checked_205(P857 t_202, P853 c_203, rstr *v_204);
static int f_same_lits_208(P851 a_206, P851 b_207);
static P857 f_str_elem_210(P857 t_209);
static int f_same_213(P857 a_211, P857 b_212);
static P857 f_base_of_215(P857 t_214);
static P853 f_base_cons_218(P857 t_216, P853 c_217);
static rstr f_kind_name_220(P857 t_219);
static void f_check_type_224(P857 got_221, P857 want_222, rt_int line_223);
static rstr f_ctype_226(P857 t_225);
static rstr f_struct_body_228(P857 t_227);
static rstr f_field_decls_230(P857 t_229);
static void f_declare_ctype_232(P857 t_231);
static rstr f_dim_lo_234(rt_int k_233);
static rstr f_dim_hi_236(rt_int k_235);
static rstr f_more_dims_238(P857 t_237);
static rstr f_acnt_241(P857 t_239, rstr *base_240);
static P844 f_cons_lo_244(P853 c_242, rt_int k_243);
static P844 f_cons_hi_247(P853 c_245, rt_int k_246);
static P857 f_idx_type_250(P857 t_248, rt_int k_249);
static void f_init_ascii_251(void);
static rt_int f_lit_index_254(P851 lits_252, rstr *name_253);
static P857 f_resolve_subtype_257(P851 st_255, P853 *c_256);
static int f_float_lit_259(P851 e_258);
static void f_tag_constraint_263(P857 t_260, P851 e_261, P853 c_262);
static P857 f_named_subtype_266(P851 st_264, P853 *c_265);
static P857 f_invoke_abbrev_270(P861 y_267, P851 st_268, P853 *c_269);
static void f_apply_constraint_275(P857 t_271, P851 args_272, P853 c_273, rt_int line_274);
static P857 f_value_subtype_279(P851 e_276, P853 *c_277, P844 *base_278);
static P855 f_reverse_pairs_281(P855 l_280);
static P857 f_inquiry_284(P851 st_282, P853 *c_283);
static P851 f_as_subtype_286(P851 e_285);
static P851 f_tt_subtype_291(P844 name_287, P851 tt_288, P851 args_289, rt_int line_290);
static int f_type_name_293(rstr *name_292);
static rstr f_empty_set_295(P857 t_294);
static int f_opened_297(P857 t_296);
static rstr f_replace_all_301(rstr *s_298, rstr *pat_299, rstr *r_300);
static rstr f_subst_303(rstr *s_302);
static P857 f_new_type_307(P861 y_304, P851 st_305, P853 *c_306);
static void f_init_storage_311(rstr *lval_308, P857 t_309, P853 c_310);
static rstr f_init_call_314(P861 y_312, rstr *lval_313);
static int f_needs_fin_316(P857 t_315);
static rstr f_fin_code_319(rstr *lval_317, P857 t_318);
static P857 f_tparam_type_322(P857 t_320, rstr *name_321);
static void f_make_storage_326(rstr *lval_323, P857 t_324, P853 c_325);
static rstr f_uninit_value_328(P857 t_327);
static rstr f_init_chk_331(P857 t_329, rstr *v_330);
static rt_int f_manifest_334(P851 e_332, int *ok_333);
static P870 f_mk_mval_337(rt_int kind_335, rt_int i_336);
static rt_int f_ipow_340(rt_int a_338, rt_int b_339);
static P870 f_meval_343(P851 e_341, int *ok_342);
static rstr f_bool_text_345(int b_344);
static rt_int f_bool_i_347(int b_346);
static rstr f_mstr_349(P870 v_348);
static int f_ascii_char_351(rt_int i_350);
static int f_user_defined_353(rstr *op_352);
static rstr f_mcopy_355(P857 t_354);
static int f_composite_357(P857 t_356);
static rstr f_assign_code_362(rstr *lval_358, P857 t_359, rstr *v_360, P853 c_361);
static rstr f_copy_code_365(P857 t_363, rstr *v_364);
static rstr f_eq_code_369(P857 t_366, rstr *a_367, rstr *b_368);
static rstr f_elem_assign_373(rstr *lval_370, P857 t_371, rstr *v_372);
static int f_seen_name_376(P855 l_374, rstr *s_375);
static void f_emit_helpers_377(void);
static void f_helper_bodies_379(P857 t_378);
static void f_declare_body_381(P851 elems_380);
static void f_manifest_const_383(P851 d_382);
static int f_exported_387(P851 d_384, rstr *name_385, int *ro_386);
static P861 f_copy_sym_389(P861 y_388);
static void f_gen_capsule_391(P851 d_390);
static void f_capsule_params_395(P851 d_392, P851 args_393, rt_int line_394);
static void f_elaborate_capsule_400(P851 d_396, P861 y_397, P851 args_398, P851 owner_399);
static int f_exports_op_403(P851 d_401, rstr *op_402);
static P844 f_renamed_406(P851 d_404, P861 z_405);
static P861 f_pick_capsule_408(P851 d_407);
static P861 f_capsule_instance_411(P861 g_409, P851 d_410);
static void f_gen_expose_413(P851 d_412);
static void f_finish_ptr_415(P857 t_414);
static P851 f_ptr_args_417(P853 c_416);
static void f_bind_ptr_params_422(P851 formals_418, P851 actuals_419, rstr *cell_420, rt_int line_421);
static void f_alloc_cell_427(P851 s_423, rstr *lv_424, P857 t_425, P853 c_426);
static P853 f_freeze_args_431(P853 c_428, P857 t_429, rt_int line_430);
static void f_ptr_subtype_check_435(P857 t_432, P853 c_433, P851 src_434);
static void f_normal_function_438(P851 d_436, P861 y_437);
static void f_declare_subprogram_440(P851 d_439);
static P861 f_build_subprogram_442(P851 d_441);
static int f_has_pragmat_445(P844 pr_443, rstr *p_444);
static P844 f_suppressing_447(P844 pr_446);
static int f_suppressed_449(rstr *x_448);
static void f_element_451(P851 e_450);
static void f_element1_453(P851 e_452);
static rstr f_storage_456(rstr *name_454, P857 t_455);
static void f_bind_459(P861 y_457, rstr *access_458);
static void f_var_decl_461(P851 d_460);
static void f_open_fin_463(rstr *fc_462);
static void f_close_fins_465(P855 saved_464);
static void f_const_decl_467(P851 d_466);
static void f_subprogram_469(P851 d_468);
static void f_gen_subprogram_472(P851 d_470, P861 y_471);
static rstr f_waits_of_474(P851 d_473);
static rstr f_task_waits_476(P851 elems_475);
static void f_await_tasks_478(P851 elems_477);
static void f_capsule_elements_480(P851 elems_479);
static void f_declare_labels_482(P851 elems_481);
static void f_start_labels_483(void);
static P876 f_goto_label_485(rstr *name_484);
static int f_has_return_487(P851 e_486);
static void f_capsule_body_489(P851 elems_488);
static void f_body_elements_491(P851 elems_490);
static void f_gen_body_493(P851 elems_492);
static rstr f_open_unhandled_495(P851 elems_494);
static void f_close_unhandled_497(rstr *xu_496);
static void f_pop_frames_499(rt_int upto_498);
static void f_push_cleanup_501(rstr *s_500);
static void f_pop_cleanup_502(void);
static void f_gen_statement_504(P851 s_503);
static void f_st_assign_506(P851 s_505);
static void f_st_call_508(P851 s_507);
static void f_st_if_510(P851 s_509);
static void f_st_case_512(P851 s_511);
static void f_st_repeat_514(P851 s_513);
static void f_st_exit_516(P851 s_515);
static void f_st_return_518(P851 s_517);
static rstr f_result_checked_522(P857 t_519, P853 c_520, rstr *v_521);
static rstr f_exc_id_525(rstr *name_523, rt_int line_524);
static void f_st_guard_527(P851 s_526);
static void f_st_alloc_529(P851 s_528);
static rstr f_act_ref_531(P851 e_530);
static void f_st_create_533(P851 s_532);
static void f_hidden_var_537(rstr *name_534, P857 t_535, rstr *place_536);
static void f_user_create_543(P851 s_538, P861 y_539, rstr *uv_540, P857 ut_541, rstr *nf_542);
static rstr f_wait_alt_548(P851 inv_544, rstr *arr_545, rt_int i_546, int mixed_547);
static int f_builtin_wait_550(P851 inv_549);
static rstr f_wait_op_555(P851 inv_551, rstr *op_552, rstr *q_553, int is_stmt_554);
static void f_user_wait_560(P851 s_556, rstr *arr_557, rstr *w_558, rt_int n_559);
static void f_st_wait_562(P851 s_561);
static P851 f_call_node_566(rstr *name_563, P851 arg_564, rt_int line_565);
static void f_user_region_568(P851 s_567);
static void f_st_region_570(P851 s_569);
static P851 f_gparam_573(P851 g_571, rstr *name_572);
static P861 f_bind_sym_575(P851 p_574);
static int f_same_binds_578(P861 a_576, P861 b_577);
static int f_same_binding_581(P861 a_579, P861 b_580);
static P861 f_tt_binds_586(P851 gd_582, P851 formals_583, P851 actuals_584, rt_int line_585);
static int f_type_allowed_590(P857 t_587, P851 items_588, P861 binds_589);
static P857 f_resolve_in_binds_594(P851 st_591, P861 binds_592, P853 *c_593);
static P861 f_pick_operation_601(rt_int kind_595, rstr *name_596, P851 sig_597, P851 res_598, P861 binds_599, rt_int line_600);
static rstr f_kind_word_603(rt_int kind_602);
static P861 f_need_binds_607(P851 gd_604, P861 binds_605, rt_int line_606);
static int f_generic_use_609(P851 st_608);
static P861 f_infer_from_614(P851 gd_610, P851 pat_611, P857 t_612, P861 known_613);
static P857 f_instantiate_type_620(P861 g_615, P851 tt_616, P851 args_617, P853 *c_618, rt_int line_619);
static P861 f_instantiate_625(P861 g_621, P851 tt_622, P851 args_623, rt_int line_624);
static rstr f_access_of_627(P861 y_626);
static P851 f_import_of_630(P851 l_628, rstr *name_629);
static int f_check_import_633(P861 y_631, rt_int line_632);
static rstr f_c_ident_635(rstr *s_634);
static rstr f_cell_deref_638(P857 t_636, rstr *p_637);
static rstr f_deref_641(rstr *base_639, P857 t_640);
static int f_is_lvalue_643(P851 e_642);
static void f_lvalue_649(P851 e_644, P844 *code_645, P857 *t_646, P853 *c_647, int *ro_648);
static void f_select_on_657(rstr *base_650, P857 bt_651, P851 e_652, int *ro_653, P844 *code_654, P857 *t_655, P853 *c_656);
static int f_has_call_659(rstr *s_658);
static void f_need_slice_661(P857 t_660);
static rstr f_ix_665(rstr *i_662, rstr *lo_663, rstr *hi_664);
static void f_index_on_674(rstr *base_666, P857 bt_667, P851 e_668, int *ro_669, int lv_670, P844 *code_671, P857 *t_672, P853 *c_673);
static int f_own_attribute_676(P851 e_675);
static rstr f_gexpr_680(P851 e_677, P857 want_678, P857 *t_679);
static rstr f_resolved_683(P851 e_681, P857 *t_682);
static rstr f_gexpr_in_688(P851 e_684, P857 want_685, P853 c_686, P857 *t_687);
static rstr f_ascii_lit_690(int ch_689);
static rstr f_octal_692(rt_int n_691);
static P857 f_str_cat_part_694(P857 t_693);
static P857 f_peek_type_696(P851 e_695);
static P857 f_set_operands_699(P851 e_697, P857 want_698);
static P851 f_copy_node_701(P851 e_700);
static P851 f_wrap_apply_703(P851 e_702);
static rstr f_c_string_705(rstr *s_704);
static P857 f_enum_type_of_708(rstr *lit_706, rt_int line_707);
static int f_ptr_attribute_710(P851 e_709);
static rstr f_attribute_713(P851 e_711, P857 *t_712);
static rstr f_subtype_compare_718(P851 sa_714, P851 sb_715, rstr *op_716, rt_int line_717);
static rstr f_float_prec_720(P853 c_719);
static rstr f_file_attribute_726(P851 e_721, P857 bt_722, P853 c_723, P844 base_724, P857 *t_725);
static rstr f_gbinop_730(P851 e_727, P857 want_728, P857 *t_729);
static rstr f_constructor_735(P851 e_731, P857 want_732, P853 ctx_733, P857 *t_734);
static rstr f_comp_value_739(P857 t_736, P853 c_737, rstr *v_738);
static int f_has_at_741(rstr *s_740);
static rstr f_set_elem_744(P857 st_742, rstr *v_743);
static rstr f_array_cons_749(P851 e_745, P857 at_746, P853 ctx_747, P857 *t_748);
static rstr f_fill_items_755(P851 items_750, P857 at_751, rstr *tmp_752, P855 prefix_753, rt_int dim_754);
static rt_int f_e_line_757(P851 e_756);
static P855 f_add_line_760(P855 l_758, rstr *s_759);
static rstr f_item_value_765(P851 e_761, P857 at_762, rt_int line_763, P857 *vt_764);
static rstr f_key_loop_770(P851 k_766, P857 at_767, rt_int d_768, rstr *xv_769);
static rstr f_store_at_775(P857 at_771, rstr *tmp_772, P855 xs_773, rt_int n_774);
static int f_fits_778(P861 y_776, P851 args_777);
static P861 f_resolve_overload_784(rstr *name_779, P851 tt_780, P851 args_781, int is_stmt_782, rt_int line_783);
static int f_tt_fits_787(P861 y_785, P851 tt_786);
static P861 f_overload_chain_790(rstr *name_788, rt_int pass_789);
static int f_is_builtin_792(rstr *n_791);
static int f_is_low_level_794(rstr *n_793);
static rstr f_me_high_798(P851 tt_795, rt_int line_796, P857 *t_797);
static rstr f_type_tag_800(P857 t_799);
static rstr f_lock_ref_803(P851 e_801, rstr *name_802);
static P861 f_user_op_806(rstr *op_804, P851 args_805);
static rstr f_gcall_810(P851 e_807, int is_stmt_808, P857 *t_809);
static P855 f_requires_812(P861 y_811);
static void f_add_req_815(P861 y_813, rstr *name_814);
static void f_require_calls_818(P861 y_816, P851 e_817);
static int f_declared_in_821(P851 elems_819, rstr *name_820);
static void f_check_requires_824(P861 y_822, rt_int line_823);
static rstr f_act_delay_args_826(P851 args_825);
static rstr f_same_subtypes_829(P851 gd_827, P851 args_828);
static rstr f_actual_bounds_833(P857 ft_830, P857 t_831, P853 c_832);
static rstr f_builtin_840(rstr *name_834, P851 tt_835, P851 args_836, rt_int line_837, int is_stmt_838, P857 *t_839);
static void f_translate_842(P851 units_841);
static void f_print_program_843(void);
static int ex_compile_error_1;
static P848 g_toks_882;
static rt_int g_ntoks_883;
static rt_int g_tpos_884;
static rt_int g_src_line_885;
static P844 g_pending_prag_886;
static P865 g_table_887;
static P865 g_genv_888;
static P861 g_all_insts_889;
static rt_int g_depth_890;
static P861 g_scope_stack_891;
static P857 g_all_types_892;
static rt_int g_serial_893;
static P874 g_out_types_894;
static P874 g_out_helpers_895;
static P874 g_out_protos_896;
static P874 g_out_globals_897;
static P874 g_out_funcs_898;
static P874 g_out_init_899;
static P874 g_out_excs_900;
static P874 g_code_901;
static P874 g_fields_buf_902;
static int g_in_func_903;
static rt_int g_cur_level_904;
static P868 g_fctx_905;
static P878 g_caps_906;
static P880 g_cap_waits_907;
static P855 g_psub_908;
static P844 g_st_field_909;
static P874 g_out_frames_910;
static P874 g_out_roots_911;
static int g_uses_free_912;
static P855 g_fins_913;
static int g_uses_findyn_914;
static P861 g_func_sym_915;
static P853 g_func_rc_916;
static P844 g_cap_ret_917;
static P844 g_cap_rflag_918;
static rt_int g_ret_frames_919;
static rt_int g_gdepth_920;
static P844 g_suppress_921;
static P853 g_cons_ctx_922;
static int g_mark_uninit_923;
static P876 g_exits_924;
static P876 g_gotos_925;
static rt_int g_frames_926;
static P855 g_handlers_927;
static P855 g_cleanups_928;
static rt_int g_trial_929;
static P855 g_mcopies_930;
static P857 g_ty_int_931;
static P857 g_ty_bool_932;
static P857 g_ty_float_933;
static P857 g_ty_ascii_934;
static P857 g_ty_string_935;
static P857 g_ty_void_936;
static P857 g_ty_file_937;
static P857 g_ty_nil_938;
static P857 g_ty_lock_939;
static P857 g_ty_latch_940;
static P857 g_ty_act_941;
static P857 g_file_mode_type_942;
static P853 g_no_cons_943;
static P844 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_944 = NULL;
{ P844 cell945 = rt_alloc(sizeof *cell945);
rt_int pv946 = ((rt_int)(((*F->s_2)).len));
cell945->p_n = pv946;
cell945->all = rt_str_new(pv946);
rt_str_assign(&cell945->all, (*F->s_2));
F->t_944 = cell945;
}
F->result_ = F->t_944;
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
F->r_947 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_947, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_947;
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
F->r_948 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_948, (*F->s_14));
{ rt_int lo950 = ((rt_int)1LL), hi951 = ((rt_int)(((*F->s_14)).len));
for (rt_int it952 = lo950; it952 <= hi951; it952++) {
F->i_949 = it952;
if (((65 <= rt_r_echk(rt_str_get(F->r_948, F->i_949))) && (rt_r_echk(rt_str_get(F->r_948, F->i_949)) <= 90))) {
(*rt_str_at(&F->r_948, F->i_949)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_r_echk(rt_str_get(F->r_948, F->i_949))) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_948;
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
F->l_953 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_954 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_953), rt_str(" ", 1)));
{ rt_int lo956 = ((rt_int)1LL), hi957 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_954).len))), ((rt_int)1LL));
for (rt_int it958 = lo956; it958 <= hi957; it958++) {
F->i_955 = it958;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_955, rt_sub(rt_add(F->i_955, ((rt_int)((F->w_954).len))), ((rt_int)1LL))), F->w_954)) {
F->result_ = rt_str_cat(F->l_953, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_953;
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
g_serial_893 = rt_add(rt_r_ichk(g_serial_893), ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(rt_r_ichk(g_serial_893)));
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
if ((rt_r_ichk(g_trial_929) == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P874 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_959 = NULL;
{ R875 *cell960 = rt_alloc(sizeof(R875));
(*cell960).head = NULL;
(*cell960).tail = NULL;
F->b_959 = cell960;
}
F->result_ = F->b_959;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P874 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_961 = NULL;
{ R856 *cell962 = rt_alloc(sizeof(R856));
(*cell962).s = NULL;
(*cell962).next = NULL;
F->l_961 = cell962;
}
(*(P855)rt_nil_check(F->l_961)).s = f_mk_3(&(*F->s_26));
if (((*(P874)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P874)rt_nil_check(F->b_25)).head = F->l_961;
} else {
(*(P855)rt_nil_check((*(P874)rt_nil_check(F->b_25)).tail)).next = F->l_961;
}
(*(P874)rt_nil_check(F->b_25)).tail = F->l_961;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_901, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P874 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_963 = NULL;
F->l_963 = (*(P874)rt_nil_check(F->b_30)).head;
while ((F->l_963 != NULL)) {
rt_putln((((P844)rt_nil_check((*(P855)rt_nil_check(F->l_963)).s))->all));
F->l_963 = (*(P855)rt_nil_check(F->l_963)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P874 a_32, P874 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P874)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P874)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P874)rt_nil_check(F->a_32)).head = (*(P874)rt_nil_check(F->b_33)).head;
} else {
(*(P855)rt_nil_check((*(P874)rt_nil_check(F->a_32)).tail)).next = (*(P874)rt_nil_check(F->b_33)).head;
}
(*(P874)rt_nil_check(F->a_32)).tail = (*(P874)rt_nil_check(F->b_33)).tail;
(*(P874)rt_nil_check(F->b_33)).head = NULL;
(*(P874)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel964 = (*F->w_35);
if (0 || rt_str_eq(sel964, rt_str("ABBREV", 6)) || rt_str_eq(sel964, rt_str("ABNORMAL", 8)) || rt_str_eq(sel964, rt_str("ALL", 3)) || rt_str_eq(sel964, rt_str("ALLOC", 5)) || rt_str_eq(sel964, rt_str("ASSERT", 6)) || rt_str_eq(sel964, rt_str("BEGIN", 5)) || rt_str_eq(sel964, rt_str("BY", 2)) || rt_str_eq(sel964, rt_str("CAPSULE", 7)) || rt_str_eq(sel964, rt_str("CASE", 4)) || rt_str_eq(sel964, rt_str("CONST", 5)) || rt_str_eq(sel964, rt_str("CREATE", 6)) || rt_str_eq(sel964, rt_str("DO", 2)) || rt_str_eq(sel964, rt_str("ELSE", 4)) || rt_str_eq(sel964, rt_str("ELSEIF", 6)) || rt_str_eq(sel964, rt_str("END", 3)) || rt_str_eq(sel964, rt_str("EXCEPTION", 9)) || rt_str_eq(sel964, rt_str("EXIT", 4)) || rt_str_eq(sel964, rt_str("EXPORTS", 7)) || rt_str_eq(sel964, rt_str("EXPOSE", 6)) || rt_str_eq(sel964, rt_str("EXTERNAL", 8)) || rt_str_eq(sel964, rt_str("FOR", 3)) || rt_str_eq(sel964, rt_str("FROM", 4)) || rt_str_eq(sel964, rt_str("FUNC", 4)) || rt_str_eq(sel964, rt_str("GENERIC", 7)) || rt_str_eq(sel964, rt_str("GOTO", 4)) || rt_str_eq(sel964, rt_str("GUARD", 5)) || rt_str_eq(sel964, rt_str("IF", 2)) || rt_str_eq(sel964, rt_str("IMPORTS", 7)) || rt_str_eq(sel964, rt_str("LOCATION", 8)) || rt_str_eq(sel964, rt_str("NAMED", 5)) || rt_str_eq(sel964, rt_str("NEEDS", 5)) || rt_str_eq(sel964, rt_str("NEW", 3)) || rt_str_eq(sel964, rt_str("NONE", 4)) || rt_str_eq(sel964, rt_str("OUT", 3)) || rt_str_eq(sel964, rt_str("OF", 2)) || rt_str_eq(sel964, rt_str("PRAG", 4)) || rt_str_eq(sel964, rt_str("PROC", 4)) || rt_str_eq(sel964, rt_str("RAISE", 5)) || rt_str_eq(sel964, rt_str("READONLY", 8)) || rt_str_eq(sel964, rt_str("REVERSE", 7)) || rt_str_eq(sel964, rt_str("REGION", 6)) || rt_str_eq(sel964, rt_str("RENAMING", 8)) || rt_str_eq(sel964, rt_str("REP", 3)) || rt_str_eq(sel964, rt_str("REPEAT", 6)) || rt_str_eq(sel964, rt_str("RERAISE", 7)) || rt_str_eq(sel964, rt_str("RETURN", 6)) || rt_str_eq(sel964, rt_str("SUBTYPE", 7)) || rt_str_eq(sel964, rt_str("TASK", 4)) || rt_str_eq(sel964, rt_str("THEN", 4)) || rt_str_eq(sel964, rt_str("TO", 2)) || rt_str_eq(sel964, rt_str("TYPE", 4)) || rt_str_eq(sel964, rt_str("VAR", 3)) || rt_str_eq(sel964, rt_str("WAIT", 4)) || rt_str_eq(sel964, rt_str("WHEN", 4)) || rt_str_eq(sel964, rt_str("WHILE", 5))) {
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
F->t_965 = NULL;
{ R847 *cell966 = rt_alloc(sizeof(R847));
(*cell966).s = NULL;
(*cell966).prags = NULL;
F->t_965 = cell966;
}
(*(P846)rt_nil_check(F->t_965)).kind = F->kind_39;
(*(P846)rt_nil_check(F->t_965)).line = rt_r_ichk(g_src_line_885);
(*(P846)rt_nil_check(F->t_965)).ival = F->ival_41;
(*(P846)rt_nil_check(F->t_965)).s = f_mk_3(&(*F->s_40));
(*(P846)rt_nil_check(F->t_965)).prags = g_pending_prag_886;
g_pending_prag_886 = NULL;
g_ntoks_883 = rt_add(rt_r_ichk(g_ntoks_883), ((rt_int)1LL));
(((P848)rt_nil_check(g_toks_882))->all).p[(rt_index(rt_r_ichk(g_ntoks_883), (((P848)rt_nil_check(g_toks_882))->all).lo, (((P848)rt_nil_check(g_toks_882))->all).hi) - (((P848)rt_nil_check(g_toks_882))->all).lo)] = F->t_965;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_967 = RT_R_IUNDEF;
F->j_967 = rt_add(F->i_44, ((rt_int)1LL));
while (((rt_r_ichk(F->j_967) <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_967)))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_967))))) || (rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_967))) == 95)))) {
if (((rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_967))) == 95) && ((rt_r_ichk(F->j_967) == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_967), ((rt_int)1LL))))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_967), ((rt_int)1LL)))))))))) {
f_fail_23(rt_r_ichk(g_src_line_885), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_967 = rt_add(rt_r_ichk(F->j_967), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_967);
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
F->w_968 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_968, (*F->s_46));
{ rt_int lo970 = ((rt_int)1LL), hi971 = ((rt_int)((F->w_968).len));
for (rt_int it972 = lo970; it972 <= hi971; it972++) {
F->k_969 = it972;
(*rt_str_at(&F->w_968, F->k_969)) = f_upper_13(rt_r_echk(rt_str_get(F->w_968, F->k_969)));
}
}
F->result_ = F->w_968;
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
F->j_973 = RT_R_IUNDEF;
F->j_973 = F->i_49;
while (((rt_r_ichk(F->j_973) <= ((rt_int)(((*F->line_48)).len))) && ((rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_973))) == 32) || (rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_973))) == 9)))) {
F->j_973 = rt_add(rt_r_ichk(F->j_973), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_973);
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
F->j_974 = RT_R_IUNDEF;
F->j_974 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_975 = NULL;
F->r_975 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_976 = RT_R_EUNDEF;
F->more_976 = 1;
if (((rt_r_ichk(F->j_974) > ((rt_int)(((*F->line_51)).len))) || (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_974))) != 40))) {
f_fail_23(rt_r_ichk(g_src_line_885), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_974 = rt_add(rt_r_ichk(F->j_974), ((rt_int)1LL));
while (rt_r_echk(F->more_976)) {
F->k_977 = RT_R_IUNDEF;
F->j_974 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_974));
if (((rt_r_ichk(F->j_974) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_974))))))) {
f_fail_23(rt_r_ichk(g_src_line_885), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_977 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_974));
F->r_975 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->r_975))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_974), rt_sub(rt_r_ichk(F->k_977), ((rt_int)1LL))); b_; }))); b_; }));
F->j_974 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_977));
if (((rt_r_ichk(F->j_974) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_974))) == 40))) {
F->go_978 = RT_R_EUNDEF;
F->go_978 = 1;
F->r_975 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->r_975))->all), rt_str("(", 1)); b_; }));
F->j_974 = rt_add(rt_r_ichk(F->j_974), ((rt_int)1LL));
while (rt_r_echk(F->go_978)) {
F->j_974 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_974));
if (((rt_r_ichk(F->j_974) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_974))))))) {
f_fail_23(rt_r_ichk(g_src_line_885), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_977 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_974));
F->r_975 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->r_975))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_974), rt_sub(rt_r_ichk(F->k_977), ((rt_int)1LL))); b_; }))); b_; }));
F->j_974 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_977));
if (((rt_r_ichk(F->j_974) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_974))) == 44))) {
F->r_975 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->r_975))->all), rt_str(",", 1)); b_; }));
F->j_974 = rt_add(rt_r_ichk(F->j_974), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_974) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_974))) == 41))) {
F->j_974 = rt_add(rt_r_ichk(F->j_974), ((rt_int)1LL));
F->go_978 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_885), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_975 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->r_975))->all), rt_str(")", 1)); b_; }));
}
F->r_975 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->r_975))->all), rt_str(";", 1)); b_; }));
F->j_974 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_974));
if (((rt_r_ichk(F->j_974) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_974))) == 44))) {
F->j_974 = rt_add(rt_r_ichk(F->j_974), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_974) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_974))) == 41))) {
F->j_974 = rt_add(rt_r_ichk(F->j_974), ((rt_int)1LL));
F->more_976 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_885), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P844)rt_nil_check(F->r_975))->all));
if ((g_pending_prag_886 == NULL)) {
g_pending_prag_886 = F->r_975;
} else {
g_pending_prag_886 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(g_pending_prag_886))->all), (((P844)rt_nil_check(F->r_975))->all)); b_; }));
}
F->result_ = rt_r_ichk(F->j_974);
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
F->i_979 = RT_R_IUNDEF;
F->i_979 = ((rt_int)1LL);
F->k_980 = RT_R_IUNDEF;
while ((rt_r_ichk(F->i_979) <= ((rt_int)(((*F->r_54)).len)))) {
F->k_980 = rt_r_ichk(F->i_979);
while ((rt_r_echk(rt_str_get((*F->r_54), rt_r_ichk(F->k_980))) != 59)) {
F->k_980 = rt_add(rt_r_ichk(F->k_980), ((rt_int)1LL));
}
{
F->p_981 = rt_str_copy(rt_str_slice((*F->r_54), rt_r_ichk(F->i_979), rt_sub(rt_r_ichk(F->k_980), ((rt_int)1LL))));
F->ok_982 = ((((((((((rt_str_eq(F->p_981, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_981, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_981, rt_str("OPEN", 4))) || rt_str_eq(F->p_981, rt_str("CLOSED", 6))) || rt_str_eq(F->p_981, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_981, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_981, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_981, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_981, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_981, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_981).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_981, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_983 = ((((((((((rt_int)((F->p_981).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_981, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_981, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_981, rt_str("OPEN", 4))) || rt_str_eq(F->p_981, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_981).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_981, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_981, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_981, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_981).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_981, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_983 && (!F->ok_982))) {
f_fail_23(rt_r_ichk(g_src_line_885), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_981); b_; }));
}
}
F->i_979 = rt_add(rt_r_ichk(F->k_980), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_984 = RT_R_IUNDEF;
F->i_984 = ((rt_int)1LL);
F->j_985 = RT_R_IUNDEF;
F->j_985 = ((rt_int)0LL);
F->n_986 = RT_R_IUNDEF;
F->n_986 = ((rt_int)(((*F->line_56)).len));
F->c_987 = RT_R_EUNDEF;
while ((rt_r_ichk(F->i_984) <= rt_r_ichk(F->n_986))) {
F->c_987 = rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->i_984)));
if (((((rt_r_echk(F->c_987) == 32) || (rt_r_echk(F->c_987) == 9)) || (rt_r_echk(F->c_987) == 13)) || (rt_r_echk(F->c_987) == 12))) {
F->i_984 = rt_add(rt_r_ichk(F->i_984), ((rt_int)1LL));
} else if ((rt_r_echk(F->c_987) == 37)) {
F->i_984 = rt_add(rt_r_ichk(F->n_986), ((rt_int)1LL));
} else if (f_is_letter_9(rt_r_echk(F->c_987))) {
F->j_985 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->i_984));
{
F->w_988 = rt_str_new(rt_sub(rt_r_ichk(F->j_985), rt_r_ichk(F->i_984)));
rt_str_assign(&F->w_988, rt_str_slice((*F->line_56), rt_r_ichk(F->i_984), rt_sub(rt_r_ichk(F->j_985), ((rt_int)1LL))));
{ rt_int lo990 = ((rt_int)1LL), hi991 = ((rt_int)((F->w_988).len));
for (rt_int it992 = lo990; it992 <= hi991; it992++) {
F->k_989 = it992;
(*rt_str_at(&F->w_988, F->k_989)) = f_upper_13(rt_r_echk(rt_str_get(F->w_988, F->k_989)));
}
}
if (rt_str_eq(F->w_988, rt_str("PRAGMAT", 7))) {
while (((rt_r_ichk(F->j_985) <= rt_r_ichk(F->n_986)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_985))) != 59))) {
F->j_985 = rt_add(rt_r_ichk(F->j_985), ((rt_int)1LL));
}
F->j_985 = rt_add(rt_r_ichk(F->j_985), ((rt_int)1LL));
} else if (rt_str_eq(F->w_988, rt_str("PRAG", 4))) {
F->j_985 = f_lex_prag_53(&(*F->line_56), rt_r_ichk(F->j_985));
} else if (f_is_reserved_36(&F->w_988)) {
f_add_token_42((((rt_int)2LL)), &F->w_988, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_988)) {
f_add_token_42((((rt_int)3LL)), &F->w_988, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_988, ((rt_int)0LL));
}
}
F->i_984 = rt_r_ichk(F->j_985);
} else if (f_is_digit_11(rt_r_echk(F->c_987))) {
F->j_985 = rt_r_ichk(F->i_984);
while (((rt_r_ichk(F->j_985) <= rt_r_ichk(F->n_986)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_985)))))) {
F->j_985 = rt_add(rt_r_ichk(F->j_985), ((rt_int)1LL));
}
if ((((rt_r_ichk(F->j_985) < rt_r_ichk(F->n_986)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_985))) == 46)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_985), ((rt_int)1LL))))))) {
F->j_985 = rt_add(rt_r_ichk(F->j_985), ((rt_int)1LL));
while (((rt_r_ichk(F->j_985) <= rt_r_ichk(F->n_986)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_985)))))) {
F->j_985 = rt_add(rt_r_ichk(F->j_985), ((rt_int)1LL));
}
if (((rt_r_ichk(F->j_985) <= rt_r_ichk(F->n_986)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_985))) == 69) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_985))) == 101)))) {
F->j_985 = rt_add(rt_r_ichk(F->j_985), ((rt_int)1LL));
if (((rt_r_ichk(F->j_985) <= rt_r_ichk(F->n_986)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_985))) == 43) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_985))) == 45)))) {
F->j_985 = rt_add(rt_r_ichk(F->j_985), ((rt_int)1LL));
}
while (((rt_r_ichk(F->j_985) <= rt_r_ichk(F->n_986)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_985)))))) {
F->j_985 = rt_add(rt_r_ichk(F->j_985), ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_984), rt_sub(rt_r_ichk(F->j_985), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_984), rt_sub(rt_r_ichk(F->j_985), ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), rt_r_ichk(F->i_984), rt_sub(rt_r_ichk(F->j_985), ((rt_int)1LL)))));
}
F->i_984 = rt_r_ichk(F->j_985);
} else if ((((rt_r_echk(F->c_987) == 39) && (rt_r_ichk(F->i_984) < rt_r_ichk(F->n_986))) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_984), ((rt_int)1LL)))) == 39))) {
F->j_985 = rt_add(rt_r_ichk(F->i_984), ((rt_int)2LL));
while (((rt_r_ichk(F->j_985) < rt_r_ichk(F->n_986)) && (!((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_985))) == 39) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_985), ((rt_int)1LL)))) == 39))))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_985))) == 34)) {
f_fail_23(rt_r_ichk(g_src_line_885), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_985 = rt_add(rt_r_ichk(F->j_985), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_985) >= rt_r_ichk(F->n_986))) {
f_fail_23(rt_r_ichk(g_src_line_885), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_984), ((rt_int)2LL)), rt_sub(rt_r_ichk(F->j_985), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_984 = rt_add(rt_r_ichk(F->j_985), ((rt_int)2LL));
} else if ((rt_r_echk(F->c_987) == 39)) {
F->j_985 = rt_add(rt_r_ichk(F->i_984), ((rt_int)1LL));
if (((rt_r_ichk(F->j_985) > rt_r_ichk(F->n_986)) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_985))))))) {
f_fail_23(rt_r_ichk(g_src_line_885), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_985 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->j_985));
{
F->w_993 = rt_str_new(rt_sub(rt_sub(rt_r_ichk(F->j_985), rt_r_ichk(F->i_984)), ((rt_int)1LL)));
rt_str_assign(&F->w_993, rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_984), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_985), ((rt_int)1LL))));
{ rt_int lo995 = ((rt_int)1LL), hi996 = ((rt_int)((F->w_993).len));
for (rt_int it997 = lo995; it997 <= hi996; it997++) {
F->k_994 = it997;
(*rt_str_at(&F->w_993, F->k_994)) = f_upper_13(rt_r_echk(rt_str_get(F->w_993, F->k_994)));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_993, ((rt_int)0LL));
}
F->i_984 = rt_r_ichk(F->j_985);
} else if ((rt_r_echk(F->c_987) == 34)) {
F->j_985 = rt_add(rt_r_ichk(F->i_984), ((rt_int)1LL));
while (((rt_r_ichk(F->j_985) <= rt_r_ichk(F->n_986)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_985))) != 34))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_985))) == 39)) {
f_fail_23(rt_r_ichk(g_src_line_885), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_985 = rt_add(rt_r_ichk(F->j_985), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_985) > rt_r_ichk(F->n_986))) {
f_fail_23(rt_r_ichk(g_src_line_885), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_984), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_985), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_984 = rt_add(rt_r_ichk(F->j_985), ((rt_int)1LL));
} else {
{
F->two_998 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_998, rt_str("  ", 2));
(*rt_str_at(&F->two_998, ((rt_int)1LL))) = rt_r_echk(F->c_987);
if ((rt_r_ichk(F->i_984) < rt_r_ichk(F->n_986))) {
(*rt_str_at(&F->two_998, ((rt_int)2LL))) = rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_984), ((rt_int)1LL))));
}
if (((((((rt_str_eq(F->two_998, rt_str(":=", 2)) || rt_str_eq(F->two_998, rt_str("=>", 2))) || rt_str_eq(F->two_998, rt_str("..", 2))) || rt_str_eq(F->two_998, rt_str("**", 2))) || rt_str_eq(F->two_998, rt_str("/=", 2))) || rt_str_eq(F->two_998, rt_str("<=", 2))) || rt_str_eq(F->two_998, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_998, ((rt_int)0LL));
F->i_984 = rt_add(rt_r_ichk(F->i_984), ((rt_int)2LL));
} else if (((rt_str_eq(F->two_998, rt_str("<<", 2)) || rt_str_eq(F->two_998, rt_str(">>", 2))) || rt_str_eq(F->two_998, rt_str("::", 2)))) {
if (rt_str_eq(F->two_998, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_998, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_984 = rt_add(rt_r_ichk(F->i_984), ((rt_int)2LL));
} else if ((((((((((((((((((rt_r_echk(F->c_987) == 40) || (rt_r_echk(F->c_987) == 41)) || (rt_r_echk(F->c_987) == 91)) || (rt_r_echk(F->c_987) == 93)) || (rt_r_echk(F->c_987) == 44)) || (rt_r_echk(F->c_987) == 58)) || (rt_r_echk(F->c_987) == 59)) || (rt_r_echk(F->c_987) == 46)) || (rt_r_echk(F->c_987) == 35)) || (rt_r_echk(F->c_987) == 43)) || (rt_r_echk(F->c_987) == 45)) || (rt_r_echk(F->c_987) == 42)) || (rt_r_echk(F->c_987) == 47)) || (rt_r_echk(F->c_987) == 38)) || (rt_r_echk(F->c_987) == 61)) || (rt_r_echk(F->c_987) == 60)) || (rt_r_echk(F->c_987) == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(rt_r_echk(F->c_987)); b_; }), ((rt_int)0LL));
F->i_984 = rt_add(rt_r_ichk(F->i_984), ((rt_int)1LL));
} else {
f_fail_23(rt_r_ichk(g_src_line_885), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_999 = rt_str_new(rt_sizeln());
rt_readln(&F->line_999);
g_src_line_885 = rt_add(rt_r_ichk(g_src_line_885), ((rt_int)1LL));
f_lex_line_57(&F->line_999);
}
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P851 f_nn_61(rt_int kind_59, rt_int line_60) {
  struct f_nn_61fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_59 = kind_59;
F->line_60 = line_60;
F->x_1000 = NULL;
{ R852 *cell1001 = rt_alloc(sizeof(R852));
(*cell1001).name = NULL;
(*cell1001).tag = NULL;
(*cell1001).prags = NULL;
(*cell1001).labels = NULL;
(*cell1001).a = NULL;
(*cell1001).b = NULL;
(*cell1001).c = NULL;
(*cell1001).d = NULL;
(*cell1001).e = NULL;
(*cell1001).next = NULL;
F->x_1000 = cell1001;
}
(*(P851)rt_nil_check(F->x_1000)).kind = F->kind_59;
(*(P851)rt_nil_check(F->x_1000)).line = F->line_60;
F->result_ = F->x_1000;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_65(P851 *head_62, P851 *tail_63, P851 x_64) {
  struct f_append_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_62 = head_62;
F->tail_63 = tail_63;
F->x_64 = x_64;
if (((*F->head_62) == NULL)) {
(*F->head_62) = F->x_64;
} else {
(*(P851)rt_nil_check((*F->tail_63))).next = F->x_64;
}
(*F->tail_63) = F->x_64;
while (((*(P851)rt_nil_check((*F->tail_63))).next != NULL)) {
(*F->tail_63) = (*(P851)rt_nil_check((*F->tail_63))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_67(P851 l_66) {
  struct f_list_len_67fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_66 = l_66;
F->n_1002 = RT_R_IUNDEF;
F->n_1002 = ((rt_int)0LL);
F->p_1003 = NULL;
F->p_1003 = F->l_66;
while ((F->p_1003 != NULL)) {
F->n_1002 = rt_add(rt_r_ichk(F->n_1002), ((rt_int)1LL));
F->p_1003 = (*(P851)rt_nil_check(F->p_1003)).next;
}
F->result_ = rt_r_ichk(F->n_1002);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_68(void) {
  struct f_cur_line_68fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = rt_r_ichk((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).line);
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
F->result_ = ((rt_r_ichk((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)2LL))) && rt_str_eq((((P844)rt_nil_check((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_69)));
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
F->result_ = ((rt_r_ichk((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)3LL))) && rt_str_eq((((P844)rt_nil_check((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_71)));
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
F->result_ = (rt_r_ichk((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).kind) == F->k_73);
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
if ((rt_add(rt_r_ichk(g_tpos_884), F->k_75) > rt_r_ichk(g_ntoks_883))) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = rt_r_ichk((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_884), F->k_75), b_.lo, b_.hi) - b_.lo)]; }))).kind);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P844 f_text_at_78(rt_int k_77) {
  struct f_text_at_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_77 = k_77;
if ((rt_add(rt_r_ichk(g_tpos_884), F->k_77) > rt_r_ichk(g_ntoks_883))) {
F->result_ = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_ntoks_883), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_884), F->k_77), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23(rt_r_ichk((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_79), rt_str(" (at ", 5)), (((P844)rt_nil_check((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_82(rstr *w_81) {
  struct f_accept_kw_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_81 = w_81;
if (f_at_kw_70(&(*F->w_81))) {
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
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
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
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
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
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
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P844 f_expect_id_89(void) {
  struct f_expect_id_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->result_ = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_884), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_name_node_90(void) {
  struct f_name_node_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1004 = NULL;
F->x_1004 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P851)rt_nil_check(F->x_1004)).name = f_expect_id_89();
F->result_ = F->x_1004;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_id_list_91(void) {
  struct f_id_list_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1005 = NULL;
F->tail_1006 = NULL;
f_append_65(&F->head_1005, &F->tail_1006, f_name_node_90());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1005, &F->tail_1006, f_name_node_90());
}
F->result_ = F->head_1005;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_p_subtype_92(void) {
  struct f_p_subtype_92fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1007 = RT_R_IUNDEF;
F->line_1007 = f_cur_line_68();
F->x_1008 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->x_1008 = f_nn_61((((rt_int)81LL)), rt_r_ichk(F->line_1007));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P851)rt_nil_check(F->x_1008)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1008;
goto ret_;
}
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_1009 = rt_str_copy((((P844)rt_nil_check((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
if (rt_str_eq(F->w_1009, rt_str("ARRAY", 5))) {
F->x_1008 = f_nn_61((((rt_int)74LL)), rt_r_ichk(F->line_1007));
{
F->head_1010 = NULL;
F->tail_1011 = NULL;
f_append_65(&F->head_1010, &F->tail_1011, f_p_subtype_92());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1010, &F->tail_1011, f_p_subtype_92());
}
(*(P851)rt_nil_check(F->x_1008)).a = F->head_1010;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P851)rt_nil_check(F->x_1008)).b = f_p_subtype_92();
} else if ((rt_str_eq(F->w_1009, rt_str("RECORD", 6)) || rt_str_eq(F->w_1009, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_1009, rt_str("RECORD", 6))) {
F->x_1008 = f_nn_61((((rt_int)75LL)), rt_r_ichk(F->line_1007));
} else {
F->x_1008 = f_nn_61((((rt_int)76LL)), rt_r_ichk(F->line_1007));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1012 = NULL;
F->tail_1013 = NULL;
F->more_1014 = RT_R_EUNDEF;
F->more_1014 = 1;
while (rt_r_echk(F->more_1014)) {
F->names_1015 = NULL;
F->names_1015 = f_id_list_91();
F->st_1016 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1016 = f_p_subtype_92();
while ((F->names_1015 != NULL)) {
F->cmp_1017 = NULL;
F->cmp_1017 = f_nn_61((((rt_int)63LL)), rt_r_ichk((*(P851)rt_nil_check(F->names_1015)).line));
(*(P851)rt_nil_check(F->cmp_1017)).name = (*(P851)rt_nil_check(F->names_1015)).name;
(*(P851)rt_nil_check(F->cmp_1017)).a = F->st_1016;
f_append_65(&F->head_1012, &F->tail_1013, F->cmp_1017);
F->names_1015 = (*(P851)rt_nil_check(F->names_1015)).next;
}
F->more_1014 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P851)rt_nil_check(F->x_1008)).a = F->head_1012;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_1009, rt_str("UNION", 5)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1008)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1009, rt_str("ENUM", 4))) {
F->x_1008 = f_nn_61((((rt_int)72LL)), rt_r_ichk(F->line_1007));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1018 = NULL;
F->tail_1019 = NULL;
F->more_1020 = RT_R_EUNDEF;
F->more_1020 = 1;
while (rt_r_echk(F->more_1020)) {
F->lit_1021 = NULL;
F->lit_1021 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_1007));
if ((!f_at_kind_74((((rt_int)6LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P851)rt_nil_check(F->lit_1021)).name = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
f_append_65(&F->head_1018, &F->tail_1019, F->lit_1021);
F->more_1020 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P851)rt_nil_check(F->x_1008)).a = F->head_1018;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1008)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P851)rt_nil_check(F->x_1008)).c = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_1009, rt_str("STRING", 6)) || rt_str_eq(F->w_1009, rt_str("SET", 3))) || rt_str_eq(F->w_1009, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_1009, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_1009, rt_str("STRING", 6))) {
F->x_1008 = f_nn_61((((rt_int)73LL)), rt_r_ichk(F->line_1007));
} else if (rt_str_eq(F->w_1009, rt_str("SET", 3))) {
F->x_1008 = f_nn_61((((rt_int)77LL)), rt_r_ichk(F->line_1007));
} else if (rt_str_eq(F->w_1009, rt_str("MAILBOX", 7))) {
F->x_1008 = f_nn_61((((rt_int)78LL)), rt_r_ichk(F->line_1007));
} else {
F->x_1008 = f_nn_61((((rt_int)79LL)), rt_r_ichk(F->line_1007));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P851)rt_nil_check(F->x_1008)).a = f_p_subtype_92();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1008)).b = f_actual_params_94();
}
} else if (rt_str_eq(F->w_1009, rt_str("INT", 3))) {
F->x_1008 = f_nn_61((((rt_int)70LL)), rt_r_ichk(F->line_1007));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1008)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P851)rt_nil_check(F->x_1008)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1009, rt_str("FLOAT", 5))) {
F->x_1008 = f_nn_61((((rt_int)71LL)), rt_r_ichk(F->line_1007));
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1008)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1008)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P851)rt_nil_check(F->x_1008)).c = f_expr_103();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_1008 = f_nn_61((((rt_int)80LL)), rt_r_ichk(F->line_1007));
(*(P851)rt_nil_check(F->x_1008)).name = f_mk_3(&F->w_1009);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1008)).a = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1008)).b = f_constraint_list_93();
(*(P851)rt_nil_check(F->x_1008)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_1008;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_constraint_list_93(void) {
  struct f_constraint_list_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1022 = NULL;
F->tail_1023 = NULL;
F->more_1024 = RT_R_EUNDEF;
F->more_1024 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1024)) {
F->line_1025 = RT_R_IUNDEF;
F->line_1025 = f_cur_line_68();
F->lo_1026 = NULL;
F->lo_1026 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1027 = NULL;
F->r_1027 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_1025));
(*(P851)rt_nil_check(F->r_1027)).a = F->lo_1026;
(*(P851)rt_nil_check(F->r_1027)).b = f_expr_103();
f_append_65(&F->head_1022, &F->tail_1023, F->r_1027);
} else {
f_append_65(&F->head_1022, &F->tail_1023, F->lo_1026);
}
F->more_1024 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1022;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_actual_params_94(void) {
  struct f_actual_params_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1028 = NULL;
F->tail_1029 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_65(&F->head_1028, &F->tail_1029, f_expr_103());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1028, &F->tail_1029, f_expr_103());
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1028;
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

static P851 f_actual_tt_97(void) {
  struct f_actual_tt_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1030 = NULL;
F->tail_1031 = NULL;
F->more_1032 = RT_R_EUNDEF;
F->more_1032 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1032)) {
if ((f_at_kind_74((((rt_int)1LL))) && f_is_type_word_96(&(((P844)rt_nil_check((*(P846)rt_nil_check((((P848)rt_nil_check(g_toks_882))->all).p[(rt_index(rt_r_ichk(g_tpos_884), (((P848)rt_nil_check(g_toks_882))->all).lo, (((P848)rt_nil_check(g_toks_882))->all).hi) - (((P848)rt_nil_check(g_toks_882))->all).lo)])).s))->all)))) {
f_append_65(&F->head_1030, &F->tail_1031, f_p_subtype_92());
} else {
f_append_65(&F->head_1030, &F->tail_1031, f_expr_103());
}
F->more_1032 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1030;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_binop_102(P844 op_98, P851 l_99, P851 r_100, rt_int line_101) {
  struct f_binop_102fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_98 = op_98;
F->l_99 = l_99;
F->r_100 = r_100;
F->line_101 = line_101;
F->x_1033 = NULL;
F->x_1033 = f_nn_61((((rt_int)9LL)), F->line_101);
(*(P851)rt_nil_check(F->x_1033)).name = F->op_98;
(*(P851)rt_nil_check(F->x_1033)).a = F->l_99;
(*(P851)rt_nil_check(F->x_1033)).b = F->r_100;
F->result_ = F->x_1033;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_expr_103(void) {
  struct f_expr_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1034 = NULL;
F->l_1034 = f_expr_and_104();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_1035 = NULL;
F->op_1035 = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1036 = RT_R_IUNDEF;
F->line_1036 = f_cur_line_68();
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->l_1034 = f_binop_102(F->op_1035, F->l_1034, f_expr_and_104(), rt_r_ichk(F->line_1036));
}
F->result_ = F->l_1034;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_expr_and_104(void) {
  struct f_expr_and_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1037 = NULL;
F->l_1037 = f_expr_not_105();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_1038 = RT_R_IUNDEF;
F->line_1038 = f_cur_line_68();
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->l_1037 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_1037, f_expr_not_105(), rt_r_ichk(F->line_1038));
}
F->result_ = F->l_1037;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_expr_not_105(void) {
  struct f_expr_not_105fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_1039 = NULL;
F->x_1039 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1039)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P851)rt_nil_check(F->x_1039)).a = f_expr_not_105();
F->result_ = F->x_1039;
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

static P851 f_expr_rel_108(void) {
  struct f_expr_rel_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1040 = NULL;
F->l_1040 = f_expr_add_109();
while ((f_at_kind_74((((rt_int)3LL))) && f_is_rel_107(&(((P844)rt_nil_check((*(P846)rt_nil_check((((P848)rt_nil_check(g_toks_882))->all).p[(rt_index(rt_r_ichk(g_tpos_884), (((P848)rt_nil_check(g_toks_882))->all).lo, (((P848)rt_nil_check(g_toks_882))->all).hi) - (((P848)rt_nil_check(g_toks_882))->all).lo)])).s))->all)))) {
F->op_1041 = NULL;
F->op_1041 = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1042 = RT_R_IUNDEF;
F->line_1042 = f_cur_line_68();
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->l_1040 = f_binop_102(F->op_1041, F->l_1040, f_expr_add_109(), rt_r_ichk(F->line_1042));
}
F->result_ = F->l_1040;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_expr_add_109(void) {
  struct f_expr_add_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1043 = NULL;
F->l_1043 = f_expr_mul_110();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_1044 = NULL;
F->op_1044 = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1045 = RT_R_IUNDEF;
F->line_1045 = f_cur_line_68();
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->l_1043 = f_binop_102(F->op_1044, F->l_1043, f_expr_mul_110(), rt_r_ichk(F->line_1045));
}
F->result_ = F->l_1043;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_expr_mul_110(void) {
  struct f_expr_mul_110fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1046 = NULL;
F->l_1046 = f_expr_pow_111();
while (((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1047 = NULL;
F->op_1047 = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1048 = RT_R_IUNDEF;
F->line_1048 = f_cur_line_68();
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->l_1046 = f_binop_102(F->op_1047, F->l_1046, f_expr_pow_111(), rt_r_ichk(F->line_1048));
}
F->result_ = F->l_1046;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_expr_pow_111(void) {
  struct f_expr_pow_111fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1049 = NULL;
F->l_1049 = f_expr_prefix_112();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1050 = RT_R_IUNDEF;
F->line_1050 = f_cur_line_68();
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->l_1049 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1049, f_expr_prefix_112(), rt_r_ichk(F->line_1050));
}
F->result_ = F->l_1049;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_expr_prefix_112(void) {
  struct f_expr_prefix_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1051 = NULL;
F->x_1051 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
(*(P851)rt_nil_check(F->x_1051)).name = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1051)).a = f_expr_prefix_112();
F->result_ = F->x_1051;
goto ret_;
}
F->result_ = f_postfix_113();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_postfix_113(void) {
  struct f_postfix_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1052 = NULL;
F->p_1052 = f_primary_114();
while (1) {
F->line_1053 = RT_R_IUNDEF;
F->line_1053 = f_cur_line_68();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1054 = NULL;
F->x_1054 = f_nn_61((((rt_int)10LL)), rt_r_ichk(F->line_1053));
F->head_1055 = NULL;
F->tail_1056 = NULL;
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1057 = RT_R_EUNDEF;
F->more_1057 = 1;
while (rt_r_echk(F->more_1057)) {
F->lo_1058 = NULL;
F->lo_1058 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1059 = NULL;
F->r_1059 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_1053));
(*(P851)rt_nil_check(F->r_1059)).a = F->lo_1058;
(*(P851)rt_nil_check(F->r_1059)).b = f_expr_103();
f_append_65(&F->head_1055, &F->tail_1056, F->r_1059);
} else {
f_append_65(&F->head_1055, &F->tail_1056, F->lo_1058);
}
F->more_1057 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P851)rt_nil_check(F->x_1054)).a = F->p_1052;
(*(P851)rt_nil_check(F->x_1054)).b = F->head_1055;
F->p_1052 = F->x_1054;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1060 = NULL;
F->x_1060 = f_nn_61((((rt_int)11LL)), rt_r_ichk(F->line_1053));
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1060)).a = F->p_1052;
(*(P851)rt_nil_check(F->x_1060)).name = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->p_1052 = F->x_1060;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && (rt_r_ichk((*(P851)rt_nil_check(F->p_1052)).kind) == (((rt_int)7LL))))) {
F->x_1061 = NULL;
F->x_1061 = f_nn_61((((rt_int)12LL)), rt_r_ichk(F->line_1053));
(*(P851)rt_nil_check(F->x_1061)).a = F->p_1052;
(*(P851)rt_nil_check(F->x_1061)).b = f_actual_tt_97();
F->p_1052 = F->x_1061;
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1062 = NULL;
F->x_1062 = f_nn_61((((rt_int)13LL)), rt_r_ichk(F->line_1053));
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1062)).a = F->p_1052;
(*(P851)rt_nil_check(F->x_1062)).b = f_p_subtype_92();
F->p_1052 = F->x_1062;
} else {
F->result_ = F->p_1052;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_primary_114(void) {
  struct f_primary_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1063 = RT_R_IUNDEF;
F->line_1063 = f_cur_line_68();
F->x_1064 = NULL;
F->k_1065 = RT_R_IUNDEF;
F->k_1065 = rt_r_ichk((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).kind);
if ((rt_r_ichk(F->k_1065) == (((rt_int)4LL)))) {
F->x_1064 = f_nn_61((((rt_int)1LL)), rt_r_ichk(F->line_1063));
(*(P851)rt_nil_check(F->x_1064)).ival = rt_r_ichk((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).ival);
(*(P851)rt_nil_check(F->x_1064)).name = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->result_ = F->x_1064;
goto ret_;
}
if ((((rt_r_ichk(F->k_1065) == (((rt_int)5LL))) || (rt_r_ichk(F->k_1065) == (((rt_int)7LL)))) || (rt_r_ichk(F->k_1065) == (((rt_int)6LL))))) {
if ((rt_r_ichk(F->k_1065) == (((rt_int)5LL)))) {
F->x_1064 = f_nn_61((((rt_int)2LL)), rt_r_ichk(F->line_1063));
} else if ((rt_r_ichk(F->k_1065) == (((rt_int)7LL)))) {
F->x_1064 = f_nn_61((((rt_int)3LL)), rt_r_ichk(F->line_1063));
} else {
F->x_1064 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_1063));
}
(*(P851)rt_nil_check(F->x_1064)).name = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->result_ = F->x_1064;
goto ret_;
}
if ((rt_r_ichk(F->k_1065) == (((rt_int)1LL)))) {
F->w_1066 = rt_str_copy((((P844)rt_nil_check((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1066, rt_str("TRUE", 4)) || rt_str_eq(F->w_1066, rt_str("FALSE", 5)))) {
F->x_1064 = f_nn_61((((rt_int)5LL)), rt_r_ichk(F->line_1063));
if (rt_str_eq(F->w_1066, rt_str("TRUE", 4))) {
(*(P851)rt_nil_check(F->x_1064)).ival = ((rt_int)1LL);
}
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->result_ = F->x_1064;
goto ret_;
}
if (rt_str_eq(F->w_1066, rt_str("NIL", 3))) {
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)6LL)), rt_r_ichk(F->line_1063));
goto ret_;
}
F->result_ = f_name_node_90();
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1064 = f_nn_61((((rt_int)17LL)), rt_r_ichk(F->line_1063));
(*(P851)rt_nil_check(F->x_1064)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1064;
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1067 = NULL;
F->tail_1068 = NULL;
F->x_1064 = f_nn_61((((rt_int)14LL)), rt_r_ichk(F->line_1063));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1069 = RT_R_EUNDEF;
F->more_1069 = 1;
while (rt_r_echk(F->more_1069)) {
f_append_65(&F->head_1067, &F->tail_1068, f_constructor_item_115());
F->more_1069 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P851)rt_nil_check(F->x_1064)).a = F->head_1067;
F->result_ = F->x_1064;
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

static P851 f_constructor_item_115(void) {
  struct f_constructor_item_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1070 = RT_R_IUNDEF;
F->line_1070 = f_cur_line_68();
F->it_1071 = NULL;
F->it_1071 = f_nn_61((((rt_int)15LL)), rt_r_ichk(F->line_1070));
F->first_1072 = NULL;
F->first_1072 = f_expr_103();
F->keys_1073 = NULL;
F->ktail_1074 = NULL;
F->lab_1075 = NULL;
F->lab_1075 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1070));
(*(P851)rt_nil_check(F->lab_1075)).a = F->first_1072;
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P851)rt_nil_check(F->lab_1075)).b = f_expr_103();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_65(&F->keys_1073, &F->ktail_1074, F->lab_1075);
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1076 = RT_R_IUNDEF;
F->save_1076 = rt_r_ichk(g_tpos_884);
F->more_1077 = NULL;
F->tail2_1078 = NULL;
F->ok_1079 = RT_R_EUNDEF;
F->ok_1079 = 0;
F->go_1080 = RT_R_EUNDEF;
F->go_1080 = 1;
while ((rt_r_echk(F->go_1080) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1081 = NULL;
F->l2_1081 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1070));
(*(P851)rt_nil_check(F->l2_1081)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P851)rt_nil_check(F->l2_1081)).b = f_expr_103();
}
f_append_65(&F->more_1077, &F->tail2_1078, F->l2_1081);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1079 = 1;
F->go_1080 = 0;
} else if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1080 = 0;
}
}
if (rt_r_echk(F->ok_1079)) {
f_append_65(&F->keys_1073, &F->ktail_1074, F->lab_1075);
f_append_65(&F->keys_1073, &F->ktail_1074, F->more_1077);
} else {
g_tpos_884 = rt_r_ichk(F->save_1076);
}
}
if (((F->keys_1073 == NULL) && ((*(P851)rt_nil_check(F->lab_1075)).b != NULL))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1073 != NULL)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P851)rt_nil_check(F->it_1071)).a = F->keys_1073;
(*(P851)rt_nil_check(F->it_1071)).b = f_expr_103();
} else {
(*(P851)rt_nil_check(F->it_1071)).b = F->first_1072;
}
F->result_ = F->it_1071;
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

static P851 f_body_117(void) {
  struct f_body_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1082 = NULL;
F->tail_1083 = NULL;
F->stmts_1084 = RT_R_EUNDEF;
F->stmts_1084 = 0;
F->after_1085 = NULL;
while ((!f_at_body_end_116())) {
F->x_1086 = NULL;
F->x_1086 = f_body_element_118();
if (((F->x_1086 != NULL) && ((((rt_r_ichk((*(P851)rt_nil_check(F->x_1086)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P851)rt_nil_check(F->x_1086)).kind) == (((rt_int)41LL)))) || (rt_r_ichk((*(P851)rt_nil_check(F->x_1086)).kind) == (((rt_int)49LL)))) || (rt_r_ichk((*(P851)rt_nil_check(F->x_1086)).kind) == (((rt_int)48LL)))))) {
if (rt_r_echk(F->stmts_1084)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->x_1086)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1086 != NULL) && (rt_r_ichk((*(P851)rt_nil_check(F->x_1086)).kind) >= (((rt_int)42LL)))) && (rt_r_ichk((*(P851)rt_nil_check(F->x_1086)).kind) <= (((rt_int)51LL))))) {
if ((rt_r_echk(F->stmts_1084) && (F->after_1085 == NULL))) {
F->after_1085 = F->x_1086;
}
} else if (((F->x_1086 != NULL) && (rt_r_ichk((*(P851)rt_nil_check(F->x_1086)).kind) != (((rt_int)33LL))))) {
if ((F->after_1085 != NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->after_1085)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1084 = 1;
}
f_append_65(&F->head_1082, &F->tail_1083, F->x_1086);
}
F->result_ = F->head_1082;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_body_element_118(void) {
  struct f_body_element_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1087 = NULL;
F->pr_1088 = NULL;
F->pr_1088 = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1087 = f_declaration_119();
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1087 = f_nn_61((((rt_int)33LL)), f_cur_line_68());
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1087)).a = f_expr_103();
} else {
F->x_1087 = f_statement_141();
}
if ((F->pr_1088 != NULL)) {
F->p_1089 = NULL;
F->p_1089 = F->x_1087;
while ((F->p_1089 != NULL)) {
if (((*(P851)rt_nil_check(F->p_1089)).prags == NULL)) {
(*(P851)rt_nil_check(F->p_1089)).prags = F->pr_1088;
} else {
(*(P851)rt_nil_check(F->p_1089)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->pr_1088))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1089)).prags))->all)); b_; }));
}
F->p_1089 = (*(P851)rt_nil_check(F->p_1089)).next;
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1087;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_declaration_119(void) {
  struct f_declaration_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1090 = RT_R_IUNDEF;
F->line_1090 = f_cur_line_68();
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
F->result_ = f_expose_decl_138();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->result_ = f_task_decl_137();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; }))) {
F->result_ = f_generic_decl_135();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) {
F->head_1091 = NULL;
F->tail_1092 = NULL;
F->names_1093 = NULL;
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->names_1093 = f_id_list_91();
while ((F->names_1093 != NULL)) {
F->x_1094 = NULL;
F->x_1094 = f_nn_61((((rt_int)49LL)), rt_r_ichk(F->line_1090));
(*(P851)rt_nil_check(F->x_1094)).name = (*(P851)rt_nil_check(F->names_1093)).name;
f_append_65(&F->head_1091, &F->tail_1092, F->x_1094);
F->names_1093 = (*(P851)rt_nil_check(F->names_1093)).next;
}
F->result_ = F->head_1091;
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

static P851 f_object_decl_120(void) {
  struct f_object_decl_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1095 = RT_R_IUNDEF;
F->line_1095 = f_cur_line_68();
F->is_var_1096 = RT_R_EUNDEF;
F->is_var_1096 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1097 = NULL;
F->st_1098 = NULL;
F->init_1099 = NULL;
F->loc_1100 = NULL;
F->loc_kind_1101 = RT_R_IUNDEF;
F->loc_kind_1101 = ((rt_int)0LL);
F->head_1102 = NULL;
F->tail_1103 = NULL;
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->names_1097 = f_id_list_91();
if (rt_r_echk(F->is_var_1096)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1098 = f_p_subtype_92();
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P844)rt_nil_check((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->loc_kind_1101 = ((rt_int)1LL);
} else {
F->loc_kind_1101 = ((rt_int)2LL);
}
F->loc_1100 = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1099 = f_expr_103();
}
} else {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1098 = f_p_subtype_92();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1099 = f_expr_103();
}
while ((F->names_1097 != NULL)) {
F->x_1104 = NULL;
if (rt_r_echk(F->is_var_1096)) {
F->x_1104 = f_nn_61((((rt_int)40LL)), rt_r_ichk(F->line_1095));
} else {
F->x_1104 = f_nn_61((((rt_int)41LL)), rt_r_ichk(F->line_1095));
}
(*(P851)rt_nil_check(F->x_1104)).name = (*(P851)rt_nil_check(F->names_1097)).name;
(*(P851)rt_nil_check(F->x_1104)).a = F->st_1098;
(*(P851)rt_nil_check(F->x_1104)).b = F->init_1099;
(*(P851)rt_nil_check(F->x_1104)).c = F->loc_1100;
(*(P851)rt_nil_check(F->x_1104)).ival = rt_r_ichk(F->loc_kind_1101);
f_append_65(&F->head_1102, &F->tail_1103, F->x_1104);
F->names_1097 = (*(P851)rt_nil_check(F->names_1097)).next;
}
F->result_ = F->head_1102;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_abbrev_decl_121(void) {
  struct f_abbrev_decl_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1105 = NULL;
F->x_1105 = f_nn_61((((rt_int)42LL)), f_cur_line_68());
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1105)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1105)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1105)).b = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P851)rt_nil_check(F->x_1105)).a = f_p_subtype_92();
F->result_ = F->x_1105;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_skip_rep_122(void) {
  struct f_skip_rep_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->depth_1106 = RT_R_IUNDEF;
F->depth_1106 = ((rt_int)0LL);
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((rt_r_ichk(F->depth_1106) == ((rt_int)0LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_74((((rt_int)0LL)))))) {
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_1106 = rt_add(rt_r_ichk(F->depth_1106), ((rt_int)1LL));
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_1106 = rt_sub(rt_r_ichk(F->depth_1106), ((rt_int)1LL));
}
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
}
}
ret_:
  RT_FPOP();
  return;
}

static P851 f_type_decl_123(void) {
  struct f_type_decl_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1107 = RT_R_IUNDEF;
F->line_1107 = f_cur_line_68();
F->name_1108 = NULL;
F->params_1109 = NULL;
F->x_1110 = NULL;
F->tts_1111 = NULL;
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->name_1108 = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1111 = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1109 = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P844)rt_nil_check((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->x_1110 = f_nn_61((((rt_int)44LL)), rt_r_ichk(F->line_1107));
(*(P851)rt_nil_check(F->x_1110)).d = F->params_1109;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1110)).b = f_formal_params_126();
}
} else {
F->x_1110 = f_nn_61((((rt_int)43LL)), rt_r_ichk(F->line_1107));
(*(P851)rt_nil_check(F->x_1110)).b = F->params_1109;
}
(*(P851)rt_nil_check(F->x_1110)).name = F->name_1108;
(*(P851)rt_nil_check(F->x_1110)).e = F->tts_1111;
(*(P851)rt_nil_check(F->x_1110)).a = f_p_subtype_92();
f_skip_rep_122();
F->result_ = F->x_1110;
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

static P851 f_formal_params_126(void) {
  struct f_formal_params_126fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1112 = NULL;
F->tail_1113 = NULL;
F->more_1114 = RT_R_EUNDEF;
F->more_1114 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1114)) {
F->mode_1115 = RT_R_IUNDEF;
F->mode_1115 = (((rt_int)1LL));
F->names_1116 = NULL;
F->ntail_1117 = NULL;
F->st_1118 = NULL;
if ((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1115 = f_mode_of_125(&(((P844)rt_nil_check((*(P846)rt_nil_check((((P848)rt_nil_check(g_toks_882))->all).p[(rt_index(rt_r_ichk(g_tpos_884), (((P848)rt_nil_check(g_toks_882))->all).lo, (((P848)rt_nil_check(g_toks_882))->all).hi) - (((P848)rt_nil_check(g_toks_882))->all).lo)])).s))->all));
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
}
f_append_65(&F->names_1116, &F->ntail_1117, f_name_node_90());
while ((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_76(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P844)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P844)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
f_append_65(&F->names_1116, &F->ntail_1117, f_name_node_90());
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1118 = f_p_subtype_92();
while ((F->names_1116 != NULL)) {
F->p_1119 = NULL;
F->p_1119 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P851)rt_nil_check(F->names_1116)).line));
(*(P851)rt_nil_check(F->p_1119)).name = (*(P851)rt_nil_check(F->names_1116)).name;
(*(P851)rt_nil_check(F->p_1119)).ival = rt_r_ichk(F->mode_1115);
(*(P851)rt_nil_check(F->p_1119)).a = F->st_1118;
f_append_65(&F->head_1112, &F->tail_1113, F->p_1119);
F->names_1116 = (*(P851)rt_nil_check(F->names_1116)).next;
}
F->more_1114 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1112;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_128(P851 owner_127) {
  struct f_imports_list_128fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_127 = owner_127;
F->head_1120 = NULL;
F->tail_1121 = NULL;
F->more_1122 = RT_R_EUNDEF;
F->more_1122 = 1;
if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P851)rt_nil_check(F->owner_127)).flag = rt_add(rt_r_ichk((*(P851)rt_nil_check(F->owner_127)).flag), ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (rt_r_echk(F->more_1122)) {
F->ro_1123 = RT_R_EUNDEF;
F->ro_1123 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1124 = NULL;
F->x_1124 = f_name_node_90();
if (rt_r_echk(F->ro_1123)) {
(*(P851)rt_nil_check(F->x_1124)).ival = ((rt_int)1LL);
}
f_append_65(&F->head_1120, &F->tail_1121, F->x_1124);
F->more_1122 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P851)rt_nil_check(F->owner_127)).d = F->head_1120;
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

static P844 f_definable_name_131(void) {
  struct f_definable_name_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_kind_74((((rt_int)1LL))) || (f_at_kind_74((((rt_int)3LL))) && f_is_definable_130(&(((P844)rt_nil_check((*(P846)rt_nil_check((((P848)rt_nil_check(g_toks_882))->all).p[(rt_index(rt_r_ichk(g_tpos_884), (((P848)rt_nil_check(g_toks_882))->all).lo, (((P848)rt_nil_check(g_toks_882))->all).hi) - (((P848)rt_nil_check(g_toks_882))->all).lo)])).s))->all))))) {
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->result_ = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_884), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P851 f_subprogram_decl_132(void) {
  struct f_subprogram_decl_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1125 = RT_R_IUNDEF;
F->line_1125 = f_cur_line_68();
F->x_1126 = NULL;
F->is_abn_1127 = RT_R_EUNDEF;
F->is_abn_1127 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1128 = RT_R_EUNDEF;
F->is_func_1128 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
F->dummy_1129 = RT_R_EUNDEF;
if (rt_r_echk(F->is_func_1128)) {
F->x_1126 = f_nn_61((((rt_int)46LL)), rt_r_ichk(F->line_1125));
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1126 = f_nn_61((((rt_int)45LL)), rt_r_ichk(F->line_1125));
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
if (rt_r_echk(F->is_abn_1127)) {
(*(P851)rt_nil_check(F->x_1126)).flag = ((rt_int)1LL);
}
(*(P851)rt_nil_check(F->x_1126)).name = f_definable_name_131();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1126)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1126)).a = f_formal_params_126();
}
if (rt_r_echk(F->is_func_1128)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P851)rt_nil_check(F->x_1126)).b = f_p_subtype_92();
}
F->dummy_1129 = f_imports_list_128(F->x_1126);
if (((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P851)rt_nil_check(F->x_1126)).prags == NULL)) {
(*(P851)rt_nil_check(F->x_1126)).prags = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P851)rt_nil_check(F->x_1126)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->x_1126)).prags))->all), (((P844)rt_nil_check((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P851)rt_nil_check(F->x_1126)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (rt_r_echk(F->is_func_1128)) {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P844)rt_nil_check(f_definable_name_131()))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->x_1126)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P844)rt_nil_check((*(P851)rt_nil_check(F->x_1126)).name))->all)); b_; }));
}
F->result_ = F->x_1126;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_capsule_decl_133(void) {
  struct f_capsule_decl_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1130 = NULL;
F->x_1130 = f_nn_61((((rt_int)47LL)), f_cur_line_68());
F->dummy_1131 = RT_R_EUNDEF;
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1130)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1130)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1130)).b = f_formal_params_126();
}
F->dummy_1131 = f_imports_list_128(F->x_1130);
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P851)rt_nil_check(F->x_1130)).ival = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P851)rt_nil_check(F->x_1130)).ival = ((rt_int)0LL);
} else {
F->head_1132 = NULL;
F->tail_1133 = NULL;
F->more_1134 = RT_R_EUNDEF;
F->more_1134 = 1;
while (rt_r_echk(F->more_1134)) {
F->n_1135 = NULL;
F->n_1135 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P851)rt_nil_check(F->n_1135)).ival = ((rt_int)1LL);
}
(*(P851)rt_nil_check(F->n_1135)).name = f_definable_name_131();
f_append_65(&F->head_1132, &F->tail_1133, F->n_1135);
F->more_1134 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P851)rt_nil_check(F->x_1130)).a = F->head_1132;
(*(P851)rt_nil_check(F->x_1130)).ival = ((rt_int)2LL);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P851)rt_nil_check(F->x_1130)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((((P844)rt_nil_check(f_expect_id_89()))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->x_1130)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1130;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_formal_tt_134(void) {
  struct f_formal_tt_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1136 = NULL;
F->tail_1137 = NULL;
F->more_1138 = RT_R_EUNDEF;
F->more_1138 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1138)) {
f_append_65(&F->head_1136, &F->tail_1137, f_name_node_90());
F->more_1138 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1136;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_generic_decl_135(void) {
  struct f_generic_decl_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1139 = NULL;
F->x_1139 = f_nn_61((((rt_int)51LL)), f_cur_line_68());
F->head_1140 = NULL;
F->tail_1141 = NULL;
F->more_1142 = RT_R_EUNDEF;
F->more_1142 = 1;
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
while (rt_r_echk(F->more_1142)) {
F->names_1143 = NULL;
F->names_1143 = f_id_list_91();
F->kind_1144 = RT_R_IUNDEF;
F->kind_1144 = ((rt_int)6LL);
F->st_1145 = NULL;
F->items_1146 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1144 = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1144 = ((rt_int)2LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1144 = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1144 = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1144 = ((rt_int)5LL);
} else if (((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P844)rt_nil_check((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("STRING", 6))) && (!((f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P844)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->kind_1144 = ((rt_int)7LL);
} else if (((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P844)rt_nil_check((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("ENUM", 4))) && (!((f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P844)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->kind_1144 = ((rt_int)8LL);
} else {
F->st_1145 = f_p_subtype_92();
}
if (((rt_r_ichk(F->kind_1144) <= ((rt_int)5LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
F->items_1146 = f_type_list_136();
}
if (((rt_r_ichk(F->kind_1144) == ((rt_int)4LL)) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1145 = f_p_subtype_92();
}
while ((F->names_1143 != NULL)) {
F->p_1147 = NULL;
F->p_1147 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P851)rt_nil_check(F->names_1143)).line));
(*(P851)rt_nil_check(F->p_1147)).name = (*(P851)rt_nil_check(F->names_1143)).name;
(*(P851)rt_nil_check(F->p_1147)).ival = rt_r_ichk(F->kind_1144);
(*(P851)rt_nil_check(F->p_1147)).a = F->st_1145;
(*(P851)rt_nil_check(F->p_1147)).b = F->items_1146;
f_append_65(&F->head_1140, &F->tail_1141, F->p_1147);
F->names_1143 = (*(P851)rt_nil_check(F->names_1143)).next;
}
F->more_1142 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->nhead_1148 = NULL;
F->ntail_1149 = NULL;
F->more_1142 = 1;
while (rt_r_echk(F->more_1142)) {
F->it_1150 = NULL;
F->it_1150 = f_nn_61((((rt_int)52LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
(*(P851)rt_nil_check(F->it_1150)).ival = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
(*(P851)rt_nil_check(F->it_1150)).ival = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
(*(P851)rt_nil_check(F->it_1150)).ival = ((rt_int)5LL);
}
(*(P851)rt_nil_check(F->it_1150)).name = f_definable_name_131();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P851)rt_nil_check(F->it_1150)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P851)rt_nil_check(F->it_1150)).b = f_type_list_136();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
(*(P851)rt_nil_check(F->it_1150)).a = f_p_subtype_92();
}
f_append_65(&F->nhead_1148, &F->ntail_1149, F->it_1150);
F->more_1142 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P851)rt_nil_check(F->x_1139)).d = F->nhead_1148;
}
(*(P851)rt_nil_check(F->x_1139)).a = F->head_1140;
(*(P851)rt_nil_check(F->x_1139)).b = f_declaration_119();
(*(P851)rt_nil_check(F->x_1139)).name = (*(P851)rt_nil_check((*(P851)rt_nil_check(F->x_1139)).b)).name;
F->result_ = F->x_1139;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_type_list_136(void) {
  struct f_type_list_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1151 = NULL;
F->tail_1152 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1153 = RT_R_EUNDEF;
F->more_1153 = 1;
while (rt_r_echk(F->more_1153)) {
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P844)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(",", 1)) || rt_str_eq((((P844)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(")", 1))))) {
F->n_1154 = NULL;
F->n_1154 = f_nn_61((((rt_int)80LL)), f_cur_line_68());
(*(P851)rt_nil_check(F->n_1154)).name = f_expect_id_89();
f_append_65(&F->head_1151, &F->tail_1152, F->n_1154);
} else {
f_append_65(&F->head_1151, &F->tail_1152, f_p_subtype_92());
}
F->more_1153 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1151;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_task_decl_137(void) {
  struct f_task_decl_137fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1155 = NULL;
F->x_1155 = f_nn_61((((rt_int)50LL)), f_cur_line_68());
F->dummy_1156 = RT_R_EUNDEF;
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1155)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1155)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1155)).a = f_formal_params_126();
}
F->dummy_1156 = f_imports_list_128(F->x_1155);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P851)rt_nil_check(F->x_1155)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P844)rt_nil_check(f_expect_id_89()))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->x_1155)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P844)rt_nil_check((*(P851)rt_nil_check(F->x_1155)).name))->all)); b_; }));
}
F->result_ = F->x_1155;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_expose_decl_138(void) {
  struct f_expose_decl_138fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1157 = NULL;
F->x_1157 = f_nn_61((((rt_int)48LL)), f_cur_line_68());
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P851)rt_nil_check(F->x_1157)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1158 = NULL;
F->tail_1159 = NULL;
F->more_1160 = RT_R_EUNDEF;
F->more_1160 = 1;
while (rt_r_echk(F->more_1160)) {
F->n_1161 = NULL;
F->n_1161 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P851)rt_nil_check(F->n_1161)).ival = ((rt_int)1LL);
}
(*(P851)rt_nil_check(F->n_1161)).name = f_definable_name_131();
f_append_65(&F->head_1158, &F->tail_1159, F->n_1161);
F->more_1160 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P851)rt_nil_check(F->x_1157)).a = F->head_1158;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P851)rt_nil_check(F->x_1157)).flag = ((rt_int)1LL);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P851)rt_nil_check(F->x_1157)).flag = rt_add(rt_r_ichk((*(P851)rt_nil_check(F->x_1157)).flag), ((rt_int)2LL));
}
(*(P851)rt_nil_check(F->x_1157)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1157)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1157)).b = f_actual_params_94();
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1162 = NULL;
F->tail_1163 = NULL;
F->more_1164 = RT_R_EUNDEF;
F->more_1164 = 1;
while (rt_r_echk(F->more_1164)) {
F->n_1165 = NULL;
F->n_1165 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
F->tgt_1166 = NULL;
F->tgt_1166 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P851)rt_nil_check(F->n_1165)).name = f_definable_name_131();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P851)rt_nil_check(F->tgt_1166)).name = f_definable_name_131();
(*(P851)rt_nil_check(F->n_1165)).a = F->tgt_1166;
f_append_65(&F->head_1162, &F->tail_1163, F->n_1165);
F->more_1164 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P851)rt_nil_check(F->x_1157)).c = F->head_1162;
}
F->result_ = F->x_1157;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_compound_kw_140(rstr *w_139) {
  struct f_is_compound_kw_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_139 = w_139;
F->result_ = (((((((rt_str_eq((*F->w_139), rt_str("IF", 2)) || rt_str_eq((*F->w_139), rt_str("CASE", 4))) || rt_str_eq((*F->w_139), rt_str("FOR", 3))) || rt_str_eq((*F->w_139), rt_str("WHILE", 5))) || rt_str_eq((*F->w_139), rt_str("BEGIN", 5))) || rt_str_eq((*F->w_139), rt_str("GUARD", 5))) || rt_str_eq((*F->w_139), rt_str("WAIT", 4))) || rt_str_eq((*F->w_139), rt_str("REGION", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_statement_141(void) {
  struct f_statement_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1167 = NULL;
F->ltail_1168 = NULL;
F->match_1169 = NULL;
F->s_1170 = NULL;
while (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P844)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_65(&F->labels_1167, &F->ltail_1168, f_name_node_90());
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
}
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P844)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all); b_; })))) {
F->match_1169 = f_expect_id_89();
}
F->s_1170 = f_unlabeled_statement_142();
if ((F->match_1169 != NULL)) {
if ((((((((rt_r_ichk((*(P851)rt_nil_check(F->s_1170)).kind) != (((rt_int)22LL))) && (rt_r_ichk((*(P851)rt_nil_check(F->s_1170)).kind) != (((rt_int)23LL)))) && (rt_r_ichk((*(P851)rt_nil_check(F->s_1170)).kind) != (((rt_int)24LL)))) && (rt_r_ichk((*(P851)rt_nil_check(F->s_1170)).kind) != (((rt_int)25LL)))) && (rt_r_ichk((*(P851)rt_nil_check(F->s_1170)).kind) != (((rt_int)26LL)))) && (rt_r_ichk((*(P851)rt_nil_check(F->s_1170)).kind) != (((rt_int)35LL)))) && (rt_r_ichk((*(P851)rt_nil_check(F->s_1170)).kind) != (((rt_int)36LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_1170)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P844)rt_nil_check(f_expect_id_89()))->all), (((P844)rt_nil_check(F->match_1169))->all)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_1170)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P844)rt_nil_check(F->match_1169))->all)); b_; }));
}
(*(P851)rt_nil_check(F->s_1170)).tag = F->match_1169;
}
(*(P851)rt_nil_check(F->s_1170)).labels = F->labels_1167;
F->result_ = F->s_1170;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_unlabeled_statement_142(void) {
  struct f_unlabeled_statement_142fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1171 = RT_R_IUNDEF;
F->line_1171 = f_cur_line_68();
F->x_1172 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }))) {
F->result_ = f_if_stmt_147();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }))) {
F->result_ = f_case_stmt_148();
goto ret_;
} else if ((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; })))) {
F->result_ = f_repeat_stmt_149();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BEGIN", 5); b_; }))) {
F->x_1172 = f_nn_61((((rt_int)25LL)), rt_r_ichk(F->line_1171));
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1172)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1172;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_150();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1172 = f_nn_61((((rt_int)27LL)), rt_r_ichk(F->line_1171));
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1172)).name = f_expect_id_89();
F->result_ = F->x_1172;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1172 = f_nn_61((((rt_int)28LL)), rt_r_ichk(F->line_1171));
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P851)rt_nil_check(F->x_1172)).a = f_expr_103();
}
F->result_ = F->x_1172;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1172 = f_nn_61((((rt_int)29LL)), rt_r_ichk(F->line_1171));
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1172)).name = f_expect_id_89();
F->result_ = F->x_1172;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1172 = f_nn_61((((rt_int)30LL)), rt_r_ichk(F->line_1171));
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1172)).name = f_expect_id_89();
F->result_ = F->x_1172;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)31LL)), rt_r_ichk(F->line_1171));
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1172 = f_nn_61((((rt_int)34LL)), rt_r_ichk(F->line_1171));
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1172)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1172)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1172)).b = f_actual_params_94();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P851)rt_nil_check(F->x_1172)).a = f_postfix_113();
F->result_ = F->x_1172;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1173 = NULL;
F->tail_1174 = NULL;
F->x_1172 = f_nn_61((((rt_int)35LL)), rt_r_ichk(F->line_1171));
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1175 = NULL;
F->itail_1176 = NULL;
F->more_1177 = RT_R_EUNDEF;
F->more_1177 = 1;
while (rt_r_echk(F->more_1177)) {
f_append_65(&F->invs_1175, &F->itail_1176, f_postfix_113());
F->more_1177 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1173, &F->tail_1174, f_arm_146(F->invs_1175, f_body_117(), rt_r_ichk(F->line_1171)));
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P851)rt_nil_check(F->x_1172)).a = F->head_1173;
F->result_ = F->x_1172;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1172 = f_nn_61((((rt_int)36LL)), rt_r_ichk(F->line_1171));
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1172)).a = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P851)rt_nil_check(F->x_1172)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1172;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1172 = f_nn_61((((rt_int)32LL)), rt_r_ichk(F->line_1171));
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1172)).a = f_postfix_113();
if ((!(f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P844)rt_nil_check((*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P851)rt_nil_check(F->x_1172)).b = f_actual_params_94();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P851)rt_nil_check(F->x_1172)).c = f_expr_103();
}
F->result_ = F->x_1172;
goto ret_;
}
{
F->target_1178 = NULL;
F->target_1178 = f_postfix_113();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1172 = f_nn_61((((rt_int)20LL)), rt_r_ichk(F->line_1171));
(*(P851)rt_nil_check(F->x_1172)).a = F->target_1178;
(*(P851)rt_nil_check(F->x_1172)).b = f_expr_103();
} else {
F->x_1172 = f_nn_61((((rt_int)21LL)), rt_r_ichk(F->line_1171));
(*(P851)rt_nil_check(F->x_1172)).a = F->target_1178;
}
}
F->result_ = F->x_1172;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_arm_146(P851 cond_143, P851 b_144, rt_int line_145) {
  struct f_arm_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_143 = cond_143;
F->b_144 = b_144;
F->line_145 = line_145;
F->x_1179 = NULL;
F->x_1179 = f_nn_61((((rt_int)60LL)), F->line_145);
(*(P851)rt_nil_check(F->x_1179)).a = F->cond_143;
(*(P851)rt_nil_check(F->x_1179)).b = F->b_144;
F->result_ = F->x_1179;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_if_stmt_147(void) {
  struct f_if_stmt_147fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1180 = NULL;
F->x_1180 = f_nn_61((((rt_int)22LL)), f_cur_line_68());
F->head_1181 = NULL;
F->tail_1182 = NULL;
F->cond_1183 = NULL;
F->go_1184 = RT_R_EUNDEF;
F->go_1184 = 1;
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
F->cond_1183 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1181, &F->tail_1182, f_arm_146(F->cond_1183, f_body_117(), rt_r_ichk((*(P851)rt_nil_check(F->x_1180)).line)));
while (rt_r_echk(F->go_1184)) {
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1183 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1181, &F->tail_1182, f_arm_146(F->cond_1183, f_body_117(), rt_r_ichk((*(P851)rt_nil_check(F->x_1180)).line)));
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P851)rt_nil_check(F->x_1180)).flag = ((rt_int)1LL);
(*(P851)rt_nil_check(F->x_1180)).b = f_body_117();
} else {
F->go_1184 = 0;
}
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P851)rt_nil_check(F->x_1180)).a = F->head_1181;
F->result_ = F->x_1180;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_case_stmt_148(void) {
  struct f_case_stmt_148fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1185 = NULL;
F->x_1185 = f_nn_61((((rt_int)23LL)), f_cur_line_68());
F->head_1186 = NULL;
F->tail_1187 = NULL;
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1185)).a = f_expr_103();
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1188 = NULL;
F->ltail_1189 = NULL;
F->more_1190 = RT_R_EUNDEF;
F->more_1190 = 1;
while (rt_r_echk(F->more_1190)) {
F->l_1191 = NULL;
F->l_1191 = f_nn_61((((rt_int)61LL)), f_cur_line_68());
(*(P851)rt_nil_check(F->l_1191)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P851)rt_nil_check(F->l_1191)).b = f_expr_103();
}
f_append_65(&F->labs_1188, &F->ltail_1189, F->l_1191);
F->more_1190 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1186, &F->tail_1187, f_arm_146(F->labs_1188, f_body_117(), rt_r_ichk((*(P851)rt_nil_check(F->x_1185)).line)));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P851)rt_nil_check(F->x_1185)).flag = ((rt_int)1LL);
(*(P851)rt_nil_check(F->x_1185)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P851)rt_nil_check(F->x_1185)).b = F->head_1186;
F->result_ = F->x_1185;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_repeat_stmt_149(void) {
  struct f_repeat_stmt_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1192 = NULL;
F->x_1192 = f_nn_61((((rt_int)24LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P851)rt_nil_check(F->x_1192)).flag = ((rt_int)1LL);
(*(P851)rt_nil_check(F->x_1192)).name = f_expect_id_89();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P851)rt_nil_check(F->x_1192)).ival = ((rt_int)1LL);
}
(*(P851)rt_nil_check(F->x_1192)).a = f_p_subtype_92();
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P851)rt_nil_check(F->x_1192)).a = f_expr_103();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P851)rt_nil_check(F->x_1192)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1192;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_guard_stmt_150(void) {
  struct f_guard_stmt_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1193 = NULL;
F->x_1193 = f_nn_61((((rt_int)26LL)), f_cur_line_68());
F->head_1194 = NULL;
F->tail_1195 = NULL;
g_tpos_884 = rt_add(rt_r_ichk(g_tpos_884), ((rt_int)1LL));
(*(P851)rt_nil_check(F->x_1193)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1196 = NULL;
F->h_1196 = f_nn_61((((rt_int)62LL)), f_cur_line_68());
(*(P851)rt_nil_check(F->h_1196)).a = f_id_list_91();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P851)rt_nil_check(F->h_1196)).b = f_body_117();
f_append_65(&F->head_1194, &F->tail_1195, F->h_1196);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P851)rt_nil_check(F->x_1193)).flag = ((rt_int)1LL);
(*(P851)rt_nil_check(F->x_1193)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P851)rt_nil_check(F->x_1193)).b = F->head_1194;
F->result_ = F->x_1193;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_program_151(void) {
  struct f_program_151fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1197 = NULL;
F->tail_1198 = NULL;
while ((!f_at_kind_74((((rt_int)0LL))))) {
if ((!f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1199 = NULL;
F->pr_1199 = (*(P846)rt_nil_check(({ A850 b_ = (((P848)rt_nil_check(g_toks_882))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_884), b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1200 = NULL;
F->u_1200 = f_capsule_decl_133();
(*(P851)rt_nil_check(F->u_1200)).prags = F->pr_1199;
f_append_65(&F->head_1197, &F->tail_1198, F->u_1200);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1197;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_hash_153(rstr *s_152) {
  struct f_hash_153fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_152 = s_152;
F->h_1201 = RT_R_IUNDEF;
F->h_1201 = ((rt_int)0LL);
{ rt_int lo1203 = ((rt_int)1LL), hi1204 = ((rt_int)(((*F->s_152)).len));
for (rt_int it1205 = lo1203; it1205 <= hi1204; it1205++) {
F->i_1202 = it1205;
F->h_1201 = rt_mod(rt_add(rt_mul(rt_r_ichk(F->h_1201), ((rt_int)31LL)), ((rt_int)(rt_r_echk(rt_str_get((*F->s_152), F->i_1202))) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = rt_r_ichk(F->h_1201);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P861 f_lookup_155(rstr *name_154) {
  struct f_lookup_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_154 = name_154;
F->y_1206 = NULL;
F->y_1206 = ({ A867 b_ = (((P865)rt_nil_check(g_table_887))->all); b_.p[(rt_index(f_hash_153(&(*F->name_154)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_888 != NULL)) {
while ((F->y_1206 != NULL)) {
if (((rt_r_ichk((*(P861)rt_nil_check(F->y_1206)).depth) >= rt_r_ichk(g_gdepth_920)) && rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_1206)).name))->all), (*F->name_154)))) {
F->result_ = F->y_1206;
goto ret_;
}
F->y_1206 = (*(P861)rt_nil_check(F->y_1206)).chain;
}
F->y_1206 = ({ A867 b_ = (((P865)rt_nil_check(g_genv_888))->all); b_.p[(rt_index(f_hash_153(&(*F->name_154)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1206 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_1206)).name))->all), (*F->name_154))) {
F->result_ = F->y_1206;
goto ret_;
}
F->y_1206 = (*(P861)rt_nil_check(F->y_1206)).chain;
}
F->y_1206 = ({ A867 b_ = (((P865)rt_nil_check(g_table_887))->all); b_.p[(rt_index(f_hash_153(&(*F->name_154)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1206 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_1206)).name))->all), (*F->name_154))) {
F->result_ = F->y_1206;
goto ret_;
}
F->y_1206 = (*(P861)rt_nil_check(F->y_1206)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P861 f_lookup_decl_157(P851 d_156) {
  struct f_lookup_decl_157fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_156 = d_156;
F->y_1207 = NULL;
F->y_1207 = ({ A867 b_ = (((P865)rt_nil_check(g_table_887))->all); b_.p[(rt_index(f_hash_153(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->d_156)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1207 != NULL)) {
if (((*(P861)rt_nil_check(F->y_1207)).decl == F->d_156)) {
F->result_ = F->y_1207;
goto ret_;
}
F->y_1207 = (*(P861)rt_nil_check(F->y_1207)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_160(P861 y_158, rt_int line_159) {
  struct f_define_160fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_158 = y_158;
F->line_159 = line_159;
F->h_1208 = RT_R_IUNDEF;
F->h_1208 = f_hash_153(&(((P844)rt_nil_check((*(P861)rt_nil_check(F->y_158)).name))->all));
F->z_1209 = NULL;
F->z_1209 = ({ A867 b_ = (((P865)rt_nil_check(g_table_887))->all); b_.p[(rt_index(rt_r_ichk(F->h_1208), b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1209 != NULL)) {
if ((((rt_r_ichk((*(P861)rt_nil_check(F->z_1209)).depth) == rt_r_ichk(g_depth_890)) && rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->z_1209)).name))->all), (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_158)).name))->all))) && (!(((f_overloadable_162(F->y_158) && f_overloadable_162(F->z_1209)) && (rt_r_ichk((*(P861)rt_nil_check(F->z_1209)).kind) == rt_r_ichk((*(P861)rt_nil_check(F->y_158)).kind))) && (!(f_same_signature_168((*(P861)rt_nil_check(F->y_158)).params, (*(P861)rt_nil_check(F->z_1209)).params) && f_same_tt_165((*(P861)rt_nil_check(F->y_158)).decl, (*(P861)rt_nil_check(F->z_1209)).decl))))))) {
f_fail_23(F->line_159, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_158)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1209 = (*(P861)rt_nil_check(F->z_1209)).chain;
}
(*(P861)rt_nil_check(F->y_158)).depth = rt_r_ichk(g_depth_890);
(*(P861)rt_nil_check(F->y_158)).chain = ({ A867 b_ = (((P865)rt_nil_check(g_table_887))->all); b_.p[(rt_index(rt_r_ichk(F->h_1208), b_.lo, b_.hi) - b_.lo)]; });
(((P865)rt_nil_check(g_table_887))->all).p[(rt_index(rt_r_ichk(F->h_1208), (((P865)rt_nil_check(g_table_887))->all).lo, (((P865)rt_nil_check(g_table_887))->all).hi) - (((P865)rt_nil_check(g_table_887))->all).lo)] = F->y_158;
(*(P861)rt_nil_check(F->y_158)).stack = g_scope_stack_891;
g_scope_stack_891 = F->y_158;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_162(P861 y_161) {
  struct f_overloadable_162fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_161 = y_161;
F->result_ = ((((rt_r_ichk((*(P861)rt_nil_check(F->y_161)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_161)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_161)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_161)).kind) == (((rt_int)8LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_165(P851 a_163, P851 b_164) {
  struct f_same_tt_165fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_163 = a_163;
F->b_164 = b_164;
F->x_1210 = NULL;
F->y_1211 = NULL;
if (((F->a_163 == NULL) || (F->b_164 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1210 = (*(P851)rt_nil_check(F->a_163)).e;
F->y_1211 = (*(P851)rt_nil_check(F->b_164)).e;
while (((F->x_1210 != NULL) && (F->y_1211 != NULL))) {
if ((!rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->x_1210)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->y_1211)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1210 = (*(P851)rt_nil_check(F->x_1210)).next;
F->y_1211 = (*(P851)rt_nil_check(F->y_1211)).next;
}
F->result_ = ((F->x_1210 == NULL) && (F->y_1211 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_168(P863 a_166, P863 b_167) {
  struct f_same_signature_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_166 = a_166;
F->b_167 = b_167;
F->x_1212 = NULL;
F->x_1212 = F->a_166;
F->y_1213 = NULL;
F->y_1213 = F->b_167;
while (((F->x_1212 != NULL) && (F->y_1213 != NULL))) {
if ((!f_same_213((*(P863)rt_nil_check(F->x_1212)).t, (*(P863)rt_nil_check(F->y_1213)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1212 = (*(P863)rt_nil_check(F->x_1212)).next;
F->y_1213 = (*(P863)rt_nil_check(F->y_1213)).next;
}
F->result_ = ((F->x_1212 == NULL) && (F->y_1213 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_169(void) {
  struct f_open_scope_169fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_890 = rt_add(rt_r_ichk(g_depth_890), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_170(void) {
  struct f_close_scope_170fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_891 != NULL) && (rt_r_ichk((*(P861)rt_nil_check(g_scope_stack_891)).depth) == rt_r_ichk(g_depth_890)))) {
(((P865)rt_nil_check(g_table_887))->all).p[(rt_index(f_hash_153(&(((P844)rt_nil_check((*(P861)rt_nil_check(g_scope_stack_891)).name))->all)), (((P865)rt_nil_check(g_table_887))->all).lo, (((P865)rt_nil_check(g_table_887))->all).hi) - (((P865)rt_nil_check(g_table_887))->all).lo)] = (*(P861)rt_nil_check(g_scope_stack_891)).chain;
g_scope_stack_891 = (*(P861)rt_nil_check(g_scope_stack_891)).stack;
}
g_depth_890 = rt_sub(rt_r_ichk(g_depth_890), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P861 f_new_sym_173(rt_int kind_171, P844 name_172) {
  struct f_new_sym_173fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_171 = kind_171;
F->name_172 = name_172;
F->y_1214 = NULL;
{ R862 *cell1215 = rt_alloc(sizeof(R862));
(*cell1215).name = NULL;
(*cell1215).t = NULL;
(*cell1215).c = NULL;
(*cell1215).access = NULL;
(*cell1215).cname = NULL;
(*cell1215).st = NULL;
(*cell1215).decl = NULL;
(*cell1215).params = NULL;
(*cell1215).result = NULL;
(*cell1215).members = NULL;
(*cell1215).mnext = NULL;
(*cell1215).binds = NULL;
(*cell1215).insts = NULL;
(*cell1215).env = NULL;
(*cell1215).chain = NULL;
(*cell1215).stack = NULL;
(*cell1215).owner = NULL;
(*cell1215).gctx = NULL;
(*cell1215).mv = NULL;
(*cell1215).reqs = NULL;
(*cell1215).home = NULL;
(*cell1215).capn = NULL;
(*cell1215).tbinds = NULL;
F->y_1214 = cell1215;
}
(*(P861)rt_nil_check(F->y_1214)).kind = F->kind_171;
(*(P861)rt_nil_check(F->y_1214)).name = F->name_172;
F->result_ = F->y_1214;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P857 f_new_typ_175(rt_int kind_174) {
  struct f_new_typ_175fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_174 = kind_174;
F->t_1216 = NULL;
{ R858 *cell1217 = rt_alloc(sizeof(R858));
(*cell1217).name = NULL;
(*cell1217).lits = NULL;
(*cell1217).elem = NULL;
(*cell1217).idx = NULL;
(*cell1217).idx2 = NULL;
(*cell1217).elemcons = NULL;
(*cell1217).elemst = NULL;
(*cell1217).under = NULL;
(*cell1217).tparams = NULL;
(*cell1217).ocap = NULL;
(*cell1217).fields = NULL;
(*cell1217).target = NULL;
(*cell1217).decl = NULL;
(*cell1217).cname = NULL;
(*cell1217).initp = NULL;
(*cell1217).finalp = NULL;
(*cell1217).tpsyms = NULL;
(*cell1217).gen = NULL;
(*cell1217).gbinds = NULL;
(*cell1217).next = NULL;
(*cell1217).idxs = NULL;
F->t_1216 = cell1217;
}
(*(P857)rt_nil_check(F->t_1216)).kind = F->kind_174;
F->result_ = F->t_1216;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P853 f_new_cons_176(void) {
  struct f_new_cons_176fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1218 = NULL;
{ R854 *cell1219 = rt_alloc(sizeof(R854));
(*cell1219).lo = NULL;
(*cell1219).hi = NULL;
(*cell1219).lo2 = NULL;
(*cell1219).hi2 = NULL;
(*cell1219).slen = NULL;
(*cell1219).args = NULL;
(*cell1219).prec = NULL;
(*cell1219).bnds = NULL;
F->c_1218 = cell1219;
}
F->result_ = F->c_1218;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_178(P857 t_177) {
  struct f_scalar_kind_178fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_177 = t_177;
F->result_ = ((F->t_177 != NULL) && (((rt_r_ichk((*(P857)rt_nil_check(F->t_177)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->t_177)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P857)rt_nil_check(F->t_177)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_180(P857 t_179) {
  struct f_bound_ctype_180fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_179 = t_179;
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_179)).kind) == (((rt_int)3LL)))) {
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

static rstr f_cbound_183(P853 c_181, rstr *b_182) {
  struct f_cbound_183fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_181 = c_181;
F->b_182 = b_182;
F->p_1220 = NULL;
F->p_1220 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!rt_r_echk((*(P853)rt_nil_check(F->c_181)).dyn)) || (rt_r_ichk((*(P853)rt_nil_check(F->c_181)).lvl) <= ((rt_int)0LL)))) {
F->result_ = (*F->b_182);
goto ret_;
}
{ rt_int lo1222 = ((rt_int)1LL), hi1223 = rt_sub(rt_r_ichk(g_cur_level_904), rt_r_ichk((*(P853)rt_nil_check(F->c_181)).lvl));
for (rt_int it1224 = lo1222; it1224 <= hi1223; it1224++) {
F->i_1221 = it1224;
F->p_1220 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->p_1220))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->p_1220))->all), rt_str("->", 2)), (*F->b_182));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_185(P853 c_184) {
  struct f_clo_185fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_184 = c_184;
F->result_ = f_cbound_183(F->c_184, &(((P844)rt_nil_check((*(P853)rt_nil_check(F->c_184)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_187(P853 c_186) {
  struct f_chi_187fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_186 = c_186;
F->result_ = f_cbound_183(F->c_186, &(((P844)rt_nil_check((*(P853)rt_nil_check(F->c_186)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_190(P857 t_188, P853 c_189) {
  struct f_sub_lo_190fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_188 = t_188;
F->c_189 = c_189;
if (((F->c_189 != NULL) && ((*(P853)rt_nil_check(F->c_189)).lo != NULL))) {
F->result_ = f_clo_185(F->c_189);
goto ret_;
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_188)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_188)).kind) == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_193(P857 t_191, P853 c_192) {
  struct f_sub_hi_193fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_191 = t_191;
F->c_192 = c_192;
if (((F->c_192 != NULL) && ((*(P853)rt_nil_check(F->c_192)).lo != NULL))) {
F->result_ = f_chi_187(F->c_192);
goto ret_;
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_191)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_191)).kind) == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_67((*(P857)rt_nil_check(F->t_191)).lits), ((rt_int)1LL)));
goto ret_;
}
F->result_ = rt_str("RT_IMAX", 7);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_raw_storage_196(rstr *name_194, rstr *ct_195) {
  struct f_raw_storage_196fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_194 = name_194;
F->ct_195 = ct_195;
if ((!rt_r_echk(g_in_func_903))) {
F->g_1225 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_194)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_897, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_195)), rt_str(" ", 1)), F->g_1225), rt_str(";", 1)); b_; }));
g_st_field_909 = f_mk_3(&F->g_1225);
F->result_ = F->g_1225;
goto ret_;
}
{
F->f_1226 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_194), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_902, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_195)), rt_str(" ", 1)), F->f_1226), rt_str(";", 1)); b_; }));
g_st_field_909 = f_mk_3(&F->f_1226);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1226);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P853 f_copy_cons_198(P853 c_197) {
  struct f_copy_cons_198fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_197 = c_197;
F->r_1227 = NULL;
{ R854 *cell1228 = rt_alloc(sizeof(R854));
(*cell1228).lo = NULL;
(*cell1228).hi = NULL;
(*cell1228).lo2 = NULL;
(*cell1228).hi2 = NULL;
(*cell1228).slen = NULL;
(*cell1228).args = NULL;
(*cell1228).prec = NULL;
(*cell1228).bnds = NULL;
F->r_1227 = cell1228;
}
(*(P853)rt_nil_check(F->r_1227)).lo = (*(P853)rt_nil_check(F->c_197)).lo;
(*(P853)rt_nil_check(F->r_1227)).hi = (*(P853)rt_nil_check(F->c_197)).hi;
(*(P853)rt_nil_check(F->r_1227)).lo2 = (*(P853)rt_nil_check(F->c_197)).lo2;
(*(P853)rt_nil_check(F->r_1227)).hi2 = (*(P853)rt_nil_check(F->c_197)).hi2;
(*(P853)rt_nil_check(F->r_1227)).slen = (*(P853)rt_nil_check(F->c_197)).slen;
(*(P853)rt_nil_check(F->r_1227)).mlo = rt_r_ichk((*(P853)rt_nil_check(F->c_197)).mlo);
(*(P853)rt_nil_check(F->r_1227)).mhi = rt_r_ichk((*(P853)rt_nil_check(F->c_197)).mhi);
(*(P853)rt_nil_check(F->r_1227)).hasm = rt_r_echk((*(P853)rt_nil_check(F->c_197)).hasm);
(*(P853)rt_nil_check(F->r_1227)).args = (*(P853)rt_nil_check(F->c_197)).args;
(*(P853)rt_nil_check(F->r_1227)).dyn = rt_r_echk((*(P853)rt_nil_check(F->c_197)).dyn);
(*(P853)rt_nil_check(F->r_1227)).lvl = rt_r_ichk((*(P853)rt_nil_check(F->c_197)).lvl);
(*(P853)rt_nil_check(F->r_1227)).prec = (*(P853)rt_nil_check(F->c_197)).prec;
F->result_ = F->r_1227;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P853 f_freeze_201(P853 c_199, P857 t_200) {
  struct f_freeze_201fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_199 = c_199;
F->t_200 = t_200;
F->r_1229 = NULL;
F->saved_field_1230 = NULL;
F->saved_field_1230 = g_st_field_909;
if ((((((F->c_199 == NULL) || ((*(P853)rt_nil_check(F->c_199)).lo == NULL)) || rt_r_echk((*(P853)rt_nil_check(F->c_199)).hasm)) || rt_r_echk((*(P853)rt_nil_check(F->c_199)).dyn)) || (!f_scalar_kind_178(F->t_200)))) {
F->result_ = F->c_199;
goto ret_;
}
F->r_1229 = f_copy_cons_198(F->c_199);
{
F->ct_1231 = rt_str_copy(f_bound_ctype_180(F->t_200));
F->la_1232 = rt_str_copy(f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1231));
F->lf_1233 = rt_str_copy((((P844)rt_nil_check(g_st_field_909))->all));
F->ha_1234 = rt_str_copy(f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1231));
F->hf_1235 = rt_str_copy((((P844)rt_nil_check(g_st_field_909))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1232, rt_str(" = ", 3)), f_clo_185(F->c_199)), rt_str("; ", 2)), F->ha_1234), rt_str(" = ", 3)), f_chi_187(F->c_199)), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_903)) {
(*(P853)rt_nil_check(F->r_1229)).lo = f_mk_3(&F->lf_1233);
(*(P853)rt_nil_check(F->r_1229)).hi = f_mk_3(&F->hf_1235);
(*(P853)rt_nil_check(F->r_1229)).dyn = 1;
(*(P853)rt_nil_check(F->r_1229)).lvl = rt_r_ichk(g_cur_level_904);
} else {
(*(P853)rt_nil_check(F->r_1229)).lo = f_mk_3(&F->la_1232);
(*(P853)rt_nil_check(F->r_1229)).hi = f_mk_3(&F->ha_1234);
(*(P853)rt_nil_check(F->r_1229)).dyn = 0;
}
}
g_st_field_909 = F->saved_field_1230;
F->result_ = F->r_1229;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_205(P857 t_202, P853 c_203, rstr *v_204) {
  struct f_checked_205fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_202 = t_202;
F->c_203 = c_203;
F->v_204 = v_204;
if ((((F->c_203 == NULL) || (!f_scalar_kind_178(F->t_202))) || f_suppressed_449(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_204);
goto ret_;
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->t_202)).kind) != (((rt_int)3LL))) && rt_r_echk((*(P853)rt_nil_check(F->c_203)).hasm))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_204)), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P853)rt_nil_check(F->c_203)).mlo))), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P853)rt_nil_check(F->c_203)).mhi))), rt_str(")", 1));
goto ret_;
} else if (((*(P853)rt_nil_check(F->c_203)).lo == NULL)) {
F->result_ = (*F->v_204);
goto ret_;
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_202)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frange(", 10), (*F->v_204)), rt_str(", ", 2)), f_clo_185(F->c_203)), rt_str(", ", 2)), f_chi_187(F->c_203)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_204)), rt_str(", ", 2)), f_clo_185(F->c_203)), rt_str(", ", 2)), f_chi_187(F->c_203)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_lits_208(P851 a_206, P851 b_207) {
  struct f_same_lits_208fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_206 = a_206;
F->b_207 = b_207;
F->x_1236 = NULL;
F->x_1236 = F->a_206;
F->y_1237 = NULL;
F->y_1237 = F->b_207;
while (((F->x_1236 != NULL) && (F->y_1237 != NULL))) {
if ((!rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->x_1236)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->y_1237)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1236 = (*(P851)rt_nil_check(F->x_1236)).next;
F->y_1237 = (*(P851)rt_nil_check(F->y_1237)).next;
}
F->result_ = ((F->x_1236 == NULL) && (F->y_1237 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P857 f_str_elem_210(P857 t_209) {
  struct f_str_elem_210fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_209 = t_209;
if (((*(P857)rt_nil_check(F->t_209)).elem == NULL)) {
F->result_ = g_ty_ascii_934;
goto ret_;
}
F->result_ = (*(P857)rt_nil_check(F->t_209)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_213(P857 a_211, P857 b_212) {
  struct f_same_213fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_211 = a_211;
F->b_212 = b_212;
if ((F->a_211 == F->b_212)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_211 == NULL) || (F->b_212 == NULL)) || (rt_r_ichk((*(P857)rt_nil_check(F->a_211)).kind) != rt_r_ichk((*(P857)rt_nil_check(F->b_212)).kind)))) {
F->result_ = 0;
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->a_211)).kind) == (((rt_int)5LL)))) {
F->result_ = f_same_213(f_str_elem_210(F->a_211), f_str_elem_210(F->b_212));
goto ret_;
}
if ((((((rt_r_ichk((*(P857)rt_nil_check(F->a_211)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->a_211)).kind) == (((rt_int)2LL)))) || (rt_r_ichk((*(P857)rt_nil_check(F->a_211)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P857)rt_nil_check(F->a_211)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P857)rt_nil_check(F->a_211)).kind) == (((rt_int)10LL))))) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->a_211)).kind) == (((rt_int)4LL)))) {
F->result_ = f_same_lits_208((*(P857)rt_nil_check(F->a_211)).lits, (*(P857)rt_nil_check(F->b_212)).lits);
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->a_211)).kind) == (((rt_int)6LL)))) {
F->x_1238 = NULL;
F->x_1238 = (*(P857)rt_nil_check(F->a_211)).idxs;
F->y_1239 = NULL;
F->y_1239 = (*(P857)rt_nil_check(F->b_212)).idxs;
while (((F->x_1238 != NULL) && (F->y_1239 != NULL))) {
if ((!f_same_213((*(P872)rt_nil_check(F->x_1238)).t, (*(P872)rt_nil_check(F->y_1239)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1238 = (*(P872)rt_nil_check(F->x_1238)).next;
F->y_1239 = (*(P872)rt_nil_check(F->y_1239)).next;
}
F->result_ = (((F->x_1238 == NULL) && (F->y_1239 == NULL)) && f_same_213((*(P857)rt_nil_check(F->a_211)).elem, (*(P857)rt_nil_check(F->b_212)).elem));
goto ret_;
}
if (((rt_r_ichk((*(P857)rt_nil_check(F->a_211)).kind) == (((rt_int)16LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->a_211)).kind) == (((rt_int)12LL))))) {
F->result_ = f_same_213((*(P857)rt_nil_check(F->a_211)).elem, (*(P857)rt_nil_check(F->b_212)).elem);
goto ret_;
}
if (((rt_r_ichk((*(P857)rt_nil_check(F->a_211)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->a_211)).kind) == (((rt_int)17LL))))) {
F->f_1240 = NULL;
F->f_1240 = (*(P857)rt_nil_check(F->a_211)).fields;
F->g_1241 = NULL;
F->g_1241 = (*(P857)rt_nil_check(F->b_212)).fields;
while (((F->f_1240 != NULL) && (F->g_1241 != NULL))) {
if (((!rt_str_eq((((P844)rt_nil_check((*(P859)rt_nil_check(F->f_1240)).name))->all), (((P844)rt_nil_check((*(P859)rt_nil_check(F->g_1241)).name))->all))) || (!f_same_213((*(P859)rt_nil_check(F->f_1240)).t, (*(P859)rt_nil_check(F->g_1241)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1240 = (*(P859)rt_nil_check(F->f_1240)).next;
F->g_1241 = (*(P859)rt_nil_check(F->g_1241)).next;
}
F->result_ = ((F->f_1240 == NULL) && (F->g_1241 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P857 f_base_of_215(P857 t_214) {
  struct f_base_of_215fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_214 = t_214;
if ((((F->t_214 != NULL) && (rt_r_ichk((*(P857)rt_nil_check(F->t_214)).kind) == (((rt_int)15LL)))) && ((*(P857)rt_nil_check(F->t_214)).tparams == NULL))) {
F->result_ = f_base_of_215((*(P857)rt_nil_check(F->t_214)).under);
goto ret_;
}
F->result_ = F->t_214;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P853 f_base_cons_218(P857 t_216, P853 c_217) {
  struct f_base_cons_218fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_216 = t_216;
F->c_217 = c_217;
if (((((F->t_216 != NULL) && (rt_r_ichk((*(P857)rt_nil_check(F->t_216)).kind) == (((rt_int)15LL)))) && ((*(P857)rt_nil_check(F->t_216)).tparams == NULL)) && ((*(P857)rt_nil_check(F->t_216)).elemcons != NULL))) {
F->result_ = f_base_cons_218((*(P857)rt_nil_check(F->t_216)).under, (*(P857)rt_nil_check(F->t_216)).elemcons);
goto ret_;
}
F->result_ = F->c_217;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_220(P857 t_219) {
  struct f_kind_name_220fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_219 = t_219;
{ rt_int sel1242 = rt_r_ichk((*(P857)rt_nil_check(F->t_219)).kind);
if (0 || (sel1242 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1242 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1242 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1242 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1242 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1242 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1242 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1242 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1242 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_219)).name))->all));
goto ret_;
} else if (0 || (sel1242 == (((rt_int)11LL)))) {
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

static void f_check_type_224(P857 got_221, P857 want_222, rt_int line_223) {
  struct f_check_type_224fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_221 = got_221;
F->want_222 = want_222;
F->line_223 = line_223;
if ((F->want_222 == NULL)) {
goto ret_;
}
if (((rt_r_ichk((*(P857)rt_nil_check(F->got_221)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P857)rt_nil_check(F->want_222)).kind) == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_213(F->got_221, F->want_222))) {
f_fail_23(F->line_223, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_220(F->got_221)), rt_str(" where ", 7)), f_kind_name_220(F->want_222)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_226(P857 t_225) {
  struct f_ctype_226fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_225 = t_225;
{ rt_int sel1243 = rt_r_ichk((*(P857)rt_nil_check(F->t_225)).kind);
if (0 || (sel1243 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1243 == (((rt_int)2LL))) || (sel1243 == (((rt_int)4LL))) || (sel1243 == (((rt_int)10LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1243 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1243 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1243 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1243 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1243 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1243 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1243 == (((rt_int)16LL)))) {
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P857)rt_nil_check(F->t_225)).cname == NULL)) {
f_declare_ctype_232(F->t_225);
} else if (((((rt_r_ichk((*(P857)rt_nil_check(F->t_225)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->t_225)).kind) == (((rt_int)17LL)))) && rt_r_echk((*(P857)rt_nil_check(F->t_225)).forward)) && (!rt_r_echk((*(P857)rt_nil_check(F->t_225)).defined)))) {
(*(P857)rt_nil_check(F->t_225)).defined = 1;
f_put_27(g_out_types_894, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_225)).cname))->all)), rt_str(" ", 1)), f_struct_body_228(F->t_225)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_225)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_228(P857 t_227) {
  struct f_struct_body_228fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_227 = t_227;
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_227)).kind) == (((rt_int)17LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ int tag; union { ", 19), f_field_decls_230(F->t_227)), rt_str(" } u; }", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_field_decls_230(F->t_227)), rt_str(" }", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_field_decls_230(P857 t_229) {
  struct f_field_decls_230fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_229 = t_229;
F->f_1244 = NULL;
F->f_1244 = (*(P857)rt_nil_check(F->t_229)).fields;
F->s_1245 = NULL;
F->s_1245 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1244 != NULL)) {
F->s_1245 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->s_1245))->all), f_ctype_226((*(P859)rt_nil_check(F->f_1244)).t)), rt_str(" ", 1)), f_field_c_17(&(((P844)rt_nil_check((*(P859)rt_nil_check(F->f_1244)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1244 = (*(P859)rt_nil_check(F->f_1244)).next;
}
F->result_ = (((P844)rt_nil_check(F->s_1245))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_232(P857 t_231) {
  struct f_declare_ctype_232fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_231 = t_231;
F->u_1246 = NULL;
F->u_1246 = g_all_types_892;
if (((rt_r_ichk((*(P857)rt_nil_check(F->t_231)).kind) == (((rt_int)8LL))) && ((*(P857)rt_nil_check(F->t_231)).target == NULL))) {
f_finish_ptr_415(F->t_231);
if (((*(P857)rt_nil_check(F->t_231)).cname != NULL)) {
goto ret_;
}
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_231)).kind) != (((rt_int)8LL)))) {
while ((F->u_1246 != NULL)) {
if (((rt_r_ichk((*(P857)rt_nil_check(F->u_1246)).kind) == rt_r_ichk((*(P857)rt_nil_check(F->t_231)).kind)) && f_same_213(F->u_1246, F->t_231))) {
(*(P857)rt_nil_check(F->t_231)).cname = (*(P857)rt_nil_check(F->u_1246)).cname;
goto ret_;
}
F->u_1246 = (*(P857)rt_nil_check(F->u_1246)).next;
}
}
if (((rt_r_ichk((*(P857)rt_nil_check(F->t_231)).kind) == (((rt_int)15LL))) && ((*(P857)rt_nil_check(F->t_231)).tparams == NULL))) {
(*(P857)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_226((*(P857)rt_nil_check(F->t_231)).under); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_231)).kind) == (((rt_int)6LL)))) {
(*(P857)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_231)).kind) == (((rt_int)15LL)))) {
(*(P857)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->t_231)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->t_231)).kind) == (((rt_int)17LL))))) {
(*(P857)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P857)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P857)rt_nil_check(F->t_231)).next = g_all_types_892;
g_all_types_892 = F->t_231;
if ((((rt_r_ichk((*(P857)rt_nil_check(F->t_231)).kind) == (((rt_int)8LL))) && ((*(P857)rt_nil_check(F->t_231)).decl != NULL)) && ((*(P851)rt_nil_check((*(P857)rt_nil_check(F->t_231)).decl)).b != NULL))) {
F->p_1247 = NULL;
F->p_1247 = (*(P851)rt_nil_check((*(P857)rt_nil_check(F->t_231)).decl)).b;
F->fs_1248 = NULL;
F->fs_1248 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1249 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1247 != NULL)) {
F->pc_1250 = NULL;
F->fs_1248 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->fs_1248))->all), rt_str(" ", 1)), f_ctype_226(f_resolve_subtype_257((*(P851)rt_nil_check(F->p_1247)).a, &F->pc_1250))), rt_str(" p_", 3)), f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1247)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1247 = (*(P851)rt_nil_check(F->p_1247)).next;
}
f_put_27(g_out_types_894, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1249), rt_str(" *", 2)), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_895, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1249), rt_str(" {", 2)), (((P844)rt_nil_check(F->fs_1248))->all)), rt_str(" ", 1)), f_ctype_226((*(P857)rt_nil_check(F->t_231)).target)), rt_str(" all; };", 8)); b_; }));
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_231)).kind) == (((rt_int)8LL)))) {
F->target_1251 = NULL;
F->target_1251 = (*(P857)rt_nil_check(F->t_231)).target;
if (((rt_r_ichk((*(P857)rt_nil_check(F->target_1251)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->target_1251)).kind) == (((rt_int)17LL))))) {
if (((*(P857)rt_nil_check(F->target_1251)).cname == NULL)) {
(*(P857)rt_nil_check(F->target_1251)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P857)rt_nil_check(F->target_1251)).next = g_all_types_892;
g_all_types_892 = F->target_1251;
f_put_27(g_out_types_894, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P844)rt_nil_check((*(P857)rt_nil_check(F->target_1251)).cname))->all)), rt_str(" ", 1)), (((P844)rt_nil_check((*(P857)rt_nil_check(F->target_1251)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P857)rt_nil_check(F->target_1251)).forward = 1;
}
f_put_27(g_out_types_894, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P844)rt_nil_check((*(P857)rt_nil_check(F->target_1251)).cname))->all)), rt_str(" *", 2)), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_894, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_226(F->target_1251)), rt_str(" *", 2)), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_231)).kind) == (((rt_int)6LL)))) {
f_put_27(g_out_types_894, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_894, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_231)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_226((*(P857)rt_nil_check(F->t_231)).elem)), rt_str(" *p;", 4)), f_more_dims_238(F->t_231)), rt_str(" };", 3)); b_; }));
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_231)).kind) == (((rt_int)15LL)))) {
F->p_1252 = NULL;
F->p_1252 = (*(P857)rt_nil_check(F->t_231)).tparams;
F->fs_1253 = NULL;
F->fs_1253 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1252 != NULL)) {
F->fs_1253 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->fs_1253))->all), f_ctype_226(f_tparam_type_322(F->t_231, &(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1252)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1252)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1252 = (*(P851)rt_nil_check(F->p_1252)).next;
}
f_put_27(g_out_types_894, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_894, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_231)).cname))->all)), rt_str(" {", 2)), (((P844)rt_nil_check(F->fs_1253))->all)), f_ctype_226((*(P857)rt_nil_check(F->t_231)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_894, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P857)rt_nil_check(F->t_231)).defined = 1;
f_put_27(g_out_types_894, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), f_struct_body_228(F->t_231)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_dim_lo_234(rt_int k_233) {
  struct f_dim_lo_234fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_233 = k_233;
if ((F->k_233 == ((rt_int)1LL))) {
F->result_ = rt_str("lo", 2);
goto ret_;
}
F->result_ = rt_str_cat(rt_str("lo", 2), f_itos_7(F->k_233));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_dim_hi_236(rt_int k_235) {
  struct f_dim_hi_236fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_235 = k_235;
if ((F->k_235 == ((rt_int)1LL))) {
F->result_ = rt_str("hi", 2);
goto ret_;
}
F->result_ = rt_str_cat(rt_str("hi", 2), f_itos_7(F->k_235));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_more_dims_238(P857 t_237) {
  struct f_more_dims_238fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_237 = t_237;
F->r_1254 = NULL;
F->r_1254 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1256 = ((rt_int)3LL), hi1257 = rt_r_ichk((*(P857)rt_nil_check(F->t_237)).ndim);
for (rt_int it1258 = lo1256; it1258 <= hi1257; it1258++) {
F->k_1255 = it1258;
F->r_1254 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_1254))->all), rt_str(" rt_int ", 8)), f_dim_lo_234(F->k_1255)), rt_str(", ", 2)), f_dim_hi_236(F->k_1255)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P844)rt_nil_check(F->r_1254))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_241(P857 t_239, rstr *base_240) {
  struct f_acnt_241fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_239 = t_239;
F->base_240 = base_240;
F->r_1259 = NULL;
F->r_1259 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_240)), rt_str(")", 1)); b_; }));
{ rt_int lo1261 = ((rt_int)3LL), hi1262 = rt_r_ichk((*(P857)rt_nil_check(F->t_239)).ndim);
for (rt_int it1263 = lo1261; it1263 <= hi1262; it1263++) {
F->k_1260 = it1263;
F->r_1259 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_1259))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_240)), rt_str(".", 1)), f_dim_lo_234(F->k_1260)), rt_str(", ", 2)), (*F->base_240)), rt_str(".", 1)), f_dim_hi_236(F->k_1260)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P844)rt_nil_check(F->r_1259))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P844 f_cons_lo_244(P853 c_242, rt_int k_243) {
  struct f_cons_lo_244fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_242 = c_242;
F->k_243 = k_243;
F->l_1264 = NULL;
if ((F->k_243 == ((rt_int)1LL))) {
F->result_ = (*(P853)rt_nil_check(F->c_242)).lo;
goto ret_;
} else if ((F->k_243 == ((rt_int)2LL))) {
F->result_ = (*(P853)rt_nil_check(F->c_242)).lo2;
goto ret_;
}
F->l_1264 = (*(P853)rt_nil_check(F->c_242)).bnds;
{ rt_int lo1266 = ((rt_int)1LL), hi1267 = rt_sub(rt_add(F->k_243, F->k_243), ((rt_int)6LL));
for (rt_int it1268 = lo1266; it1268 <= hi1267; it1268++) {
F->i_1265 = it1268;
if ((F->l_1264 != NULL)) {
F->l_1264 = (*(P855)rt_nil_check(F->l_1264)).next;
}
}
}
if ((F->l_1264 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P855)rt_nil_check(F->l_1264)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P844 f_cons_hi_247(P853 c_245, rt_int k_246) {
  struct f_cons_hi_247fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_245 = c_245;
F->k_246 = k_246;
F->l_1269 = NULL;
if ((F->k_246 == ((rt_int)1LL))) {
F->result_ = (*(P853)rt_nil_check(F->c_245)).hi;
goto ret_;
} else if ((F->k_246 == ((rt_int)2LL))) {
F->result_ = (*(P853)rt_nil_check(F->c_245)).hi2;
goto ret_;
}
F->l_1269 = (*(P853)rt_nil_check(F->c_245)).bnds;
{ rt_int lo1271 = ((rt_int)1LL), hi1272 = rt_sub(rt_add(F->k_246, F->k_246), ((rt_int)5LL));
for (rt_int it1273 = lo1271; it1273 <= hi1272; it1273++) {
F->i_1270 = it1273;
if ((F->l_1269 != NULL)) {
F->l_1269 = (*(P855)rt_nil_check(F->l_1269)).next;
}
}
}
if ((F->l_1269 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P855)rt_nil_check(F->l_1269)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P857 f_idx_type_250(P857 t_248, rt_int k_249) {
  struct f_idx_type_250fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_248 = t_248;
F->k_249 = k_249;
F->l_1274 = NULL;
F->l_1274 = (*(P857)rt_nil_check(F->t_248)).idxs;
{ rt_int lo1276 = ((rt_int)2LL), hi1277 = F->k_249;
for (rt_int it1278 = lo1276; it1278 <= hi1277; it1278++) {
F->i_1275 = it1278;
F->l_1274 = (*(P872)rt_nil_check(F->l_1274)).next;
}
}
F->result_ = (*(P872)rt_nil_check(F->l_1274)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_251(void) {
  struct f_init_ascii_251fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1279 = NULL;
F->tail_1280 = NULL;
F->start_1281 = RT_R_IUNDEF;
F->start_1281 = ((rt_int)1LL);
{ rt_int lo1283 = ((rt_int)1LL), hi1284 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1285 = lo1283; it1285 <= hi1284; it1285++) {
F->i_1282 = it1285;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1282) == 32)) {
F->lit_1286 = NULL;
F->lit_1286 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P851)rt_nil_check(F->lit_1286)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), rt_r_ichk(F->start_1281), rt_sub(F->i_1282, ((rt_int)1LL))); b_; }));
f_append_65(&F->head_1279, &F->tail_1280, F->lit_1286);
F->start_1281 = rt_add(F->i_1282, ((rt_int)1LL));
}
}
}
g_ty_ascii_934 = f_new_typ_175((((rt_int)4LL)));
(*(P857)rt_nil_check(g_ty_ascii_934)).lits = F->head_1279;
(*(P857)rt_nil_check(g_ty_ascii_934)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1287 = NULL;
F->t2_1288 = NULL;
F->l1_1289 = NULL;
F->l1_1289 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1290 = NULL;
F->l2_1290 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1291 = NULL;
F->l3_1291 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P851)rt_nil_check(F->l1_1289)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P851)rt_nil_check(F->l2_1290)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P851)rt_nil_check(F->l3_1291)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_65(&F->h2_1287, &F->t2_1288, F->l1_1289);
f_append_65(&F->h2_1287, &F->t2_1288, F->l2_1290);
f_append_65(&F->h2_1287, &F->t2_1288, F->l3_1291);
g_file_mode_type_942 = f_new_typ_175((((rt_int)4LL)));
(*(P857)rt_nil_check(g_file_mode_type_942)).lits = F->h2_1287;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_lit_index_254(P851 lits_252, rstr *name_253) {
  struct f_lit_index_254fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_252 = lits_252;
F->name_253 = name_253;
F->i_1292 = RT_R_IUNDEF;
F->i_1292 = ((rt_int)0LL);
F->l_1293 = NULL;
F->l_1293 = F->lits_252;
while ((F->l_1293 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->l_1293)).name))->all), (*F->name_253))) {
F->result_ = rt_r_ichk(F->i_1292);
goto ret_;
}
F->i_1292 = rt_add(rt_r_ichk(F->i_1292), ((rt_int)1LL));
F->l_1293 = (*(P851)rt_nil_check(F->l_1293)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P857 f_resolve_subtype_257(P851 st_255, P853 *c_256) {
  struct f_resolve_subtype_257fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_255 = st_255;
F->c_256 = c_256;
F->c_256v = *F->c_256;
F->t_1294 = NULL;
F->ok_1295 = RT_R_EUNDEF;
F->dummy_1296 = NULL;
F->c_256v = f_new_cons_176();
{ rt_int sel1297 = rt_r_ichk((*(P851)rt_nil_check(F->st_255)).kind);
if (0 || (sel1297 == (((rt_int)70LL)))) {
if (((*(P851)rt_nil_check(F->st_255)).a != NULL)) {
(*(P853)rt_nil_check(F->c_256v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680((*(P851)rt_nil_check(F->st_255)).a, g_ty_int_931, &F->dummy_1296); b_; }));
(*(P853)rt_nil_check(F->c_256v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680((*(P851)rt_nil_check(F->st_255)).b, g_ty_int_931, &F->dummy_1296); b_; }));
(*(P853)rt_nil_check(F->c_256v)).mlo = f_manifest_334((*(P851)rt_nil_check(F->st_255)).a, &F->ok_1295);
(*(P853)rt_nil_check(F->c_256v)).hasm = rt_r_echk(F->ok_1295);
(*(P853)rt_nil_check(F->c_256v)).mhi = f_manifest_334((*(P851)rt_nil_check(F->st_255)).b, &F->ok_1295);
(*(P853)rt_nil_check(F->c_256v)).hasm = (rt_r_echk((*(P853)rt_nil_check(F->c_256v)).hasm) && rt_r_echk(F->ok_1295));
}
F->result_ = g_ty_int_931;
goto ret_;
} else if (0 || (sel1297 == (((rt_int)71LL)))) {
if (((*(P851)rt_nil_check(F->st_255)).a != NULL)) {
(*(P853)rt_nil_check(F->c_256v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680((*(P851)rt_nil_check(F->st_255)).a, g_ty_int_931, &F->dummy_1296); b_; }));
}
if (((*(P851)rt_nil_check(F->st_255)).b != NULL)) {
(*(P853)rt_nil_check(F->c_256v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680((*(P851)rt_nil_check(F->st_255)).b, g_ty_float_933, &F->dummy_1296); b_; }));
(*(P853)rt_nil_check(F->c_256v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680((*(P851)rt_nil_check(F->st_255)).c, g_ty_float_933, &F->dummy_1296); b_; }));
(*(P853)rt_nil_check(F->c_256v)).hasm = (f_float_lit_259((*(P851)rt_nil_check(F->st_255)).b) && f_float_lit_259((*(P851)rt_nil_check(F->st_255)).c));
}
F->result_ = g_ty_float_933;
goto ret_;
} else if (0 || (sel1297 == (((rt_int)72LL)))) {
F->t_1294 = f_new_typ_175((((rt_int)4LL)));
(*(P857)rt_nil_check(F->t_1294)).lits = (*(P851)rt_nil_check(F->st_255)).a;
if (((*(P851)rt_nil_check(F->st_255)).b != NULL)) {
(*(P853)rt_nil_check(F->c_256v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680((*(P851)rt_nil_check(F->st_255)).b, F->t_1294, &F->dummy_1296); b_; }));
(*(P853)rt_nil_check(F->c_256v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680((*(P851)rt_nil_check(F->st_255)).c, F->t_1294, &F->dummy_1296); b_; }));
if (((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->st_255)).b)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->st_255)).c)).kind) == (((rt_int)4LL))))) {
(*(P853)rt_nil_check(F->c_256v)).mlo = f_lit_index_254((*(P857)rt_nil_check(F->t_1294)).lits, &(((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->st_255)).b)).name))->all));
(*(P853)rt_nil_check(F->c_256v)).mhi = f_lit_index_254((*(P857)rt_nil_check(F->t_1294)).lits, &(((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->st_255)).c)).name))->all));
(*(P853)rt_nil_check(F->c_256v)).hasm = 1;
}
}
F->result_ = F->t_1294;
goto ret_;
} else if (0 || (sel1297 == (((rt_int)73LL)))) {
F->t_1294 = f_resolve_subtype_257((*(P851)rt_nil_check(F->st_255)).a, &F->c_256v);
if (((*(P857)rt_nil_check(f_base_of_215(F->t_1294))).kind != (((rt_int)4LL)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_213(F->t_1294, g_ty_ascii_934) && ((F->c_256v == NULL) || ((*(P853)rt_nil_check(F->c_256v)).lo == NULL)))) {
F->t_1294 = g_ty_string_935;
} else {
F->et_1298 = NULL;
F->et_1298 = F->t_1294;
F->t_1294 = f_new_typ_175((((rt_int)5LL)));
(*(P857)rt_nil_check(F->t_1294)).elem = F->et_1298;
(*(P857)rt_nil_check(F->t_1294)).elemcons = F->c_256v;
}
F->c_256v = f_new_cons_176();
if (((*(P851)rt_nil_check(F->st_255)).b != NULL)) {
(*(P853)rt_nil_check(F->c_256v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680((*(P851)rt_nil_check(F->st_255)).b, g_ty_int_931, &F->dummy_1296); b_; }));
}
F->result_ = F->t_1294;
goto ret_;
} else if (0 || (sel1297 == (((rt_int)74LL)))) {
{
F->ec_1299 = NULL;
F->et_1300 = NULL;
F->et_1300 = f_resolve_subtype_257((*(P851)rt_nil_check(F->st_255)).b, &F->ec_1299);
F->ix_1301 = NULL;
F->ix_1301 = (*(P851)rt_nil_check(F->st_255)).a;
F->k_1302 = RT_R_IUNDEF;
F->k_1302 = ((rt_int)0LL);
F->tail_1303 = NULL;
F->btail_1304 = NULL;
F->t_1294 = f_new_typ_175((((rt_int)6LL)));
(*(P857)rt_nil_check(F->t_1294)).elem = F->et_1300;
(*(P857)rt_nil_check(F->t_1294)).elemcons = F->ec_1299;
(*(P857)rt_nil_check(F->t_1294)).elemst = (*(P851)rt_nil_check(F->st_255)).b;
(*(P853)rt_nil_check(F->c_256v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P853)rt_nil_check(F->c_256v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1301 != NULL)) {
F->ic_1305 = NULL;
F->it_1306 = NULL;
F->it_1306 = f_resolve_subtype_257(F->ix_1301, &F->ic_1305);
F->lo_1307 = NULL;
F->hi_1308 = NULL;
F->tl_1309 = NULL;
if ((((*(P857)rt_nil_check(f_base_of_215(F->it_1306))).kind != (((rt_int)1LL))) && ((*(P857)rt_nil_check(f_base_of_215(F->it_1306))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1305 = f_base_cons_218(F->it_1306, F->ic_1305);
F->k_1302 = rt_add(rt_r_ichk(F->k_1302), ((rt_int)1LL));
{ R873 *cell1310 = rt_alloc(sizeof(R873));
(*cell1310).t = NULL;
(*cell1310).next = NULL;
F->tl_1309 = cell1310;
}
(*(P872)rt_nil_check(F->tl_1309)).t = F->it_1306;
if ((F->tail_1303 == NULL)) {
(*(P857)rt_nil_check(F->t_1294)).idxs = F->tl_1309;
} else {
(*(P872)rt_nil_check(F->tail_1303)).next = F->tl_1309;
}
F->tail_1303 = F->tl_1309;
if (((F->ic_1305 != NULL) && ((*(P853)rt_nil_check(F->ic_1305)).lo != NULL))) {
F->lo_1307 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_185(F->ic_1305); b_; }));
F->hi_1308 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_187(F->ic_1305); b_; }));
} else if (((*(P857)rt_nil_check(f_base_of_215(F->it_1306))).kind == (((rt_int)4LL)))) {
F->lo_1307 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1308 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P857)rt_nil_check(f_base_of_215(F->it_1306))).lits), ((rt_int)1LL))); b_; }));
}
if ((rt_r_ichk(F->k_1302) == ((rt_int)1LL))) {
(*(P857)rt_nil_check(F->t_1294)).idx = F->it_1306;
(*(P853)rt_nil_check(F->c_256v)).lo = F->lo_1307;
(*(P853)rt_nil_check(F->c_256v)).hi = F->hi_1308;
} else if ((rt_r_ichk(F->k_1302) == ((rt_int)2LL))) {
(*(P857)rt_nil_check(F->t_1294)).idx2 = F->it_1306;
(*(P853)rt_nil_check(F->c_256v)).lo2 = F->lo_1307;
(*(P853)rt_nil_check(F->c_256v)).hi2 = F->hi_1308;
} else if ((F->lo_1307 != NULL)) {
F->l1_1311 = NULL;
F->l2_1312 = NULL;
{ R856 *cell1313 = rt_alloc(sizeof(R856));
(*cell1313).s = NULL;
(*cell1313).next = NULL;
F->l1_1311 = cell1313;
}
{ R856 *cell1314 = rt_alloc(sizeof(R856));
(*cell1314).s = NULL;
(*cell1314).next = NULL;
F->l2_1312 = cell1314;
}
(*(P855)rt_nil_check(F->l1_1311)).s = F->lo_1307;
(*(P855)rt_nil_check(F->l2_1312)).s = F->hi_1308;
(*(P855)rt_nil_check(F->l1_1311)).next = F->l2_1312;
if ((F->btail_1304 == NULL)) {
(*(P853)rt_nil_check(F->c_256v)).bnds = F->l1_1311;
} else {
(*(P855)rt_nil_check(F->btail_1304)).next = F->l1_1311;
}
F->btail_1304 = F->l2_1312;
}
F->ix_1301 = (*(P851)rt_nil_check(F->ix_1301)).next;
}
(*(P857)rt_nil_check(F->t_1294)).ndim = rt_r_ichk(F->k_1302);
}
F->result_ = F->t_1294;
goto ret_;
} else if (0 || (sel1297 == (((rt_int)77LL)))) {
F->t_1294 = f_new_typ_175((((rt_int)16LL)));
{
F->ec_1315 = NULL;
(*(P857)rt_nil_check(F->t_1294)).elem = f_resolve_subtype_257((*(P851)rt_nil_check(F->st_255)).a, &F->ec_1315);
(*(P857)rt_nil_check(F->t_1294)).elemcons = F->ec_1315;
if ((((*(P857)rt_nil_check(f_base_of_215((*(P857)rt_nil_check(F->t_1294)).elem))).kind != (((rt_int)1LL))) && ((*(P857)rt_nil_check(f_base_of_215((*(P857)rt_nil_check(F->t_1294)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
if ((((*(P857)rt_nil_check(f_base_of_215((*(P857)rt_nil_check(F->t_1294)).elem))).kind == (((rt_int)1LL))) && ((F->ec_1315 == NULL) || ((*(P853)rt_nil_check(F->ec_1315)).lo == NULL)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SET[INT] needs a range here: a set of every INT cannot be represented", 69); b_; }));
}
}
F->result_ = F->t_1294;
goto ret_;
} else if (0 || (sel1297 == (((rt_int)75LL))) || (sel1297 == (((rt_int)76LL)))) {
if ((rt_r_ichk((*(P851)rt_nil_check(F->st_255)).kind) == (((rt_int)76LL)))) {
F->t_1294 = f_new_typ_175((((rt_int)17LL)));
} else {
F->t_1294 = f_new_typ_175((((rt_int)7LL)));
}
{
F->comp_1316 = NULL;
F->comp_1316 = (*(P851)rt_nil_check(F->st_255)).a;
F->tail_1317 = NULL;
while ((F->comp_1316 != NULL)) {
F->cc_1318 = NULL;
F->f_1319 = NULL;
{ R860 *cell1320 = rt_alloc(sizeof(R860));
(*cell1320).name = NULL;
(*cell1320).t = NULL;
(*cell1320).c = NULL;
(*cell1320).st = NULL;
(*cell1320).next = NULL;
F->f_1319 = cell1320;
}
(*(P859)rt_nil_check(F->f_1319)).name = (*(P851)rt_nil_check(F->comp_1316)).name;
(*(P859)rt_nil_check(F->f_1319)).t = f_resolve_subtype_257((*(P851)rt_nil_check(F->comp_1316)).a, &F->cc_1318);
(*(P859)rt_nil_check(F->f_1319)).c = F->cc_1318;
(*(P859)rt_nil_check(F->f_1319)).st = (*(P851)rt_nil_check(F->comp_1316)).a;
if ((F->tail_1317 == NULL)) {
(*(P857)rt_nil_check(F->t_1294)).fields = F->f_1319;
} else {
(*(P859)rt_nil_check(F->tail_1317)).next = F->f_1319;
}
F->tail_1317 = F->f_1319;
F->comp_1316 = (*(P851)rt_nil_check(F->comp_1316)).next;
}
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_1294)).kind) == (((rt_int)17LL)))) {
F->lits_1321 = NULL;
F->ltail_1322 = NULL;
F->f_1323 = NULL;
F->f_1323 = (*(P857)rt_nil_check(F->t_1294)).fields;
while ((F->f_1323 != NULL)) {
F->l_1324 = NULL;
F->l_1324 = f_nn_61((((rt_int)4LL)), rt_r_ichk((*(P851)rt_nil_check(F->st_255)).line));
if (rt_str_eq((((P844)rt_nil_check((*(P859)rt_nil_check(F->f_1323)).name))->all), rt_str("TAG", 3))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P851)rt_nil_check(F->l_1324)).name = (*(P859)rt_nil_check(F->f_1323)).name;
f_append_65(&F->lits_1321, &F->ltail_1322, F->l_1324);
F->f_1323 = (*(P859)rt_nil_check(F->f_1323)).next;
}
(*(P857)rt_nil_check(F->t_1294)).elem = f_new_typ_175((((rt_int)4LL)));
(*(P857)rt_nil_check((*(P857)rt_nil_check(F->t_1294)).elem)).lits = F->lits_1321;
if (((*(P851)rt_nil_check(F->st_255)).b != NULL)) {
f_tag_constraint_263(F->t_1294, (*(P851)rt_nil_check(F->st_255)).b, F->c_256v);
}
}
F->result_ = F->t_1294;
goto ret_;
} else if (0 || (sel1297 == (((rt_int)79LL)))) {
F->result_ = g_ty_file_937;
goto ret_;
} else if (0 || (sel1297 == (((rt_int)78LL)))) {
if (((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P861)rt_nil_check(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1325 = NULL;
F->gt_1325 = f_copy_node_701((*(P851)rt_nil_check(F->st_255)).a);
(*(P851)rt_nil_check(F->gt_1325)).next = NULL;
F->result_ = f_instantiate_type_620(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1325, (*(P851)rt_nil_check(F->st_255)).b, &F->c_256v, rt_r_ichk((*(P851)rt_nil_check(F->st_255)).line));
goto ret_;
}
{
F->ec_1326 = NULL;
F->t_1294 = f_new_typ_175((((rt_int)12LL)));
(*(P857)rt_nil_check(F->t_1294)).elem = f_resolve_subtype_257((*(P851)rt_nil_check(F->st_255)).a, &F->ec_1326);
(*(P857)rt_nil_check(F->t_1294)).elemcons = F->ec_1326;
if (((*(P851)rt_nil_check(F->st_255)).b != NULL)) {
(*(P853)rt_nil_check(F->c_256v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680((*(P851)rt_nil_check(F->st_255)).b, g_ty_int_931, &F->dummy_1296); b_; }));
}
}
F->result_ = F->t_1294;
goto ret_;
} else if (0 || (sel1297 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_266(F->st_255, &F->c_256v);
goto ret_;
} else if (0 || (sel1297 == (((rt_int)81LL)))) {
{
F->base_1327 = NULL;
F->result_ = f_value_subtype_279((*(P851)rt_nil_check(F->st_255)).a, &F->c_256v, &F->base_1327);
goto ret_;
}
} else {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_256) = F->c_256v;
  RT_FPOP();
  return F->result_;
}

static int f_float_lit_259(P851 e_258) {
  struct f_float_lit_259fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_258 = e_258;
if (((rt_r_ichk((*(P851)rt_nil_check(F->e_258)).kind) == (((rt_int)8LL))) && (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_258)).name))->all), rt_str("-", 1)) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_258)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_259((*(P851)rt_nil_check(F->e_258)).a);
goto ret_;
}
F->result_ = ((rt_r_ichk((*(P851)rt_nil_check(F->e_258)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P851)rt_nil_check(F->e_258)).kind) == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_263(P857 t_260, P851 e_261, P853 c_262) {
  struct f_tag_constraint_263fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_260 = t_260;
F->e_261 = e_261;
F->c_262 = c_262;
F->dummy_1328 = NULL;
(*(P853)rt_nil_check(F->c_262)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680(F->e_261, (*(P857)rt_nil_check(F->t_260)).elem, &F->dummy_1328); b_; }));
f_check_type_224(F->dummy_1328, (*(P857)rt_nil_check(F->t_260)).elem, rt_r_ichk((*(P851)rt_nil_check(F->e_261)).line));
(*(P853)rt_nil_check(F->c_262)).hi = (*(P853)rt_nil_check(F->c_262)).lo;
if ((rt_r_ichk((*(P851)rt_nil_check(F->e_261)).kind) == (((rt_int)4LL)))) {
(*(P853)rt_nil_check(F->c_262)).mlo = f_lit_index_254((*(P857)rt_nil_check((*(P857)rt_nil_check(F->t_260)).elem)).lits, &(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_261)).name))->all));
(*(P853)rt_nil_check(F->c_262)).mhi = rt_r_ichk((*(P853)rt_nil_check(F->c_262)).mlo);
(*(P853)rt_nil_check(F->c_262)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P857 f_named_subtype_266(P851 st_264, P853 *c_265) {
  struct f_named_subtype_266fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_264 = st_264;
F->c_265 = c_265;
F->c_265v = *F->c_265;
F->t_1329 = NULL;
F->y_1330 = NULL;
F->y_1330 = f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->st_264)).name))->all));
F->name_1331 = rt_str_copy((((P844)rt_nil_check((*(P851)rt_nil_check(F->st_264)).name))->all));
F->c_265v = f_new_cons_176();
if (((F->y_1330 == NULL) && ((rt_str_eq(F->name_1331, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1331, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1331, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_284(F->st_264, &F->c_265v);
goto ret_;
}
if ((F->y_1330 == NULL)) {
if (rt_str_eq(F->name_1331, rt_str("BOOL", 4))) {
F->t_1329 = g_ty_bool_932;
} else if (rt_str_eq(F->name_1331, rt_str("ASCII", 5))) {
F->t_1329 = g_ty_ascii_934;
} else if (rt_str_eq(F->name_1331, rt_str("DATA_LOCK", 9))) {
F->t_1329 = g_ty_lock_939;
} else if (rt_str_eq(F->name_1331, rt_str("LATCH", 5))) {
F->t_1329 = g_ty_latch_940;
} else if (rt_str_eq(F->name_1331, rt_str("ACT", 3))) {
F->t_1329 = g_ty_act_941;
} else if (rt_str_eq(F->name_1331, rt_str("INT", 3))) {
F->t_1329 = g_ty_int_931;
} else if (rt_str_eq(F->name_1331, rt_str("FLOAT", 5))) {
F->t_1329 = g_ty_float_933;
} else {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->st_264)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1331); b_; }));
}
if (((*(P851)rt_nil_check(F->st_264)).b != NULL)) {
f_apply_constraint_275(F->t_1329, (*(P851)rt_nil_check(F->st_264)).b, F->c_265v, rt_r_ichk((*(P851)rt_nil_check(F->st_264)).line));
}
F->result_ = F->t_1329;
goto ret_;
}
if (((rt_r_ichk((*(P861)rt_nil_check(F->y_1330)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_1330)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_1330)).decl)).b)).kind) == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_620(F->y_1330, (*(P851)rt_nil_check(F->st_264)).a, (*(P851)rt_nil_check(F->st_264)).b, &F->c_265v, rt_r_ichk((*(P851)rt_nil_check(F->st_264)).line));
goto ret_;
}
if (((rt_r_ichk((*(P861)rt_nil_check(F->y_1330)).kind) == (((rt_int)10LL))) && (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_1330)).decl)).b)).kind) == (((rt_int)42LL))))) {
F->binds_1332 = NULL;
F->binds_1332 = f_tt_binds_586((*(P861)rt_nil_check(F->y_1330)).decl, (*(P851)rt_nil_check((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_1330)).decl)).b)).e, (*(P851)rt_nil_check(F->st_264)).a, rt_r_ichk((*(P851)rt_nil_check(F->st_264)).line));
F->saved_env_1333 = NULL;
F->saved_env_1333 = g_genv_888;
F->saved_gdepth_1334 = RT_R_IUNDEF;
F->saved_gdepth_1334 = rt_r_ichk(g_gdepth_920);
f_open_scope_169();
while ((F->binds_1332 != NULL)) {
F->nb_1335 = NULL;
F->nb_1335 = (*(P861)rt_nil_check(F->binds_1332)).mnext;
f_define_160(F->binds_1332, rt_r_ichk((*(P851)rt_nil_check(F->st_264)).line));
F->binds_1332 = F->nb_1335;
}
g_genv_888 = (*(P861)rt_nil_check(F->y_1330)).env;
g_gdepth_920 = rt_r_ichk(g_depth_890);
F->t_1329 = f_resolve_subtype_257((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_1330)).decl)).b)).a, &F->c_265v);
g_genv_888 = F->saved_env_1333;
g_gdepth_920 = rt_r_ichk(F->saved_gdepth_1334);
f_close_scope_170();
if (((*(P851)rt_nil_check(F->st_264)).b != NULL)) {
F->c_265v = f_copy_cons_198(F->c_265v);
f_apply_constraint_275(F->t_1329, (*(P851)rt_nil_check(F->st_264)).b, F->c_265v, rt_r_ichk((*(P851)rt_nil_check(F->st_264)).line));
}
F->result_ = F->t_1329;
goto ret_;
}
if ((((rt_r_ichk((*(P861)rt_nil_check(F->y_1330)).kind) == (((rt_int)5LL))) && ((*(P861)rt_nil_check(F->y_1330)).t != NULL)) && (rt_r_ichk((*(P857)rt_nil_check((*(P861)rt_nil_check(F->y_1330)).t)).kind) == (((rt_int)15LL))))) {
F->result_ = f_new_type_307(F->y_1330, F->st_264, &F->c_265v);
goto ret_;
}
if ((((rt_r_ichk((*(P861)rt_nil_check(F->y_1330)).kind) == (((rt_int)5LL))) && ((*(P861)rt_nil_check(F->y_1330)).t != NULL)) && (rt_r_ichk((*(P857)rt_nil_check((*(P861)rt_nil_check(F->y_1330)).t)).kind) == (((rt_int)8LL))))) {
(*(P853)rt_nil_check(F->c_265v)).args = (*(P851)rt_nil_check(F->st_264)).b;
F->result_ = (*(P861)rt_nil_check(F->y_1330)).t;
goto ret_;
}
if ((((rt_r_ichk((*(P861)rt_nil_check(F->y_1330)).kind) == (((rt_int)6LL))) && ((*(P861)rt_nil_check(F->y_1330)).decl != NULL)) && ((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_1330)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_270(F->y_1330, F->st_264, &F->c_265v);
goto ret_;
}
if ((((rt_r_ichk((*(P861)rt_nil_check(F->y_1330)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_1330)).kind) == (((rt_int)5LL)))) && ((*(P861)rt_nil_check(F->y_1330)).t != NULL))) {
if (((*(P861)rt_nil_check(F->y_1330)).c != NULL)) {
F->c_265v = (*(P861)rt_nil_check(F->y_1330)).c;
}
F->t_1329 = (*(P861)rt_nil_check(F->y_1330)).t;
} else if ((((rt_r_ichk((*(P861)rt_nil_check(F->y_1330)).kind) == (((rt_int)5LL))) && ((*(P861)rt_nil_check(F->y_1330)).decl != NULL)) && (rt_r_ichk((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_1330)).decl)).kind) == (((rt_int)43LL))))) {
F->result_ = f_new_type_307(F->y_1330, F->st_264, &F->c_265v);
goto ret_;
} else if (((rt_r_ichk((*(P861)rt_nil_check(F->y_1330)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_1330)).kind) == (((rt_int)5LL))))) {
F->t_1329 = f_resolve_subtype_257((*(P861)rt_nil_check(F->y_1330)).st, &F->c_265v);
} else {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->st_264)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1331, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P851)rt_nil_check(F->st_264)).b != NULL)) {
F->c_265v = f_copy_cons_198(F->c_265v);
f_apply_constraint_275(F->t_1329, (*(P851)rt_nil_check(F->st_264)).b, F->c_265v, rt_r_ichk((*(P851)rt_nil_check(F->st_264)).line));
}
F->result_ = F->t_1329;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_265) = F->c_265v;
  RT_FPOP();
  return F->result_;
}

static P857 f_invoke_abbrev_270(P861 y_267, P851 st_268, P853 *c_269) {
  struct f_invoke_abbrev_270fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_267 = y_267;
F->st_268 = st_268;
F->c_269 = c_269;
F->c_269v = *F->c_269;
F->p_1336 = NULL;
F->p_1336 = (*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_267)).decl)).b;
F->a_1337 = NULL;
F->a_1337 = (*(P851)rt_nil_check(F->st_268)).b;
F->t_1338 = NULL;
if ((f_list_len_67(F->p_1336) != f_list_len_67(F->a_1337))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->st_268)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_267)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1336))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_169();
while ((F->p_1336 != NULL)) {
F->z_1339 = NULL;
F->z_1339 = f_new_sym_173((((rt_int)2LL)), (*(P851)rt_nil_check(F->p_1336)).name);
F->pc_1340 = NULL;
F->at_1341 = NULL;
F->ok_1342 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P851)rt_nil_check(F->p_1336)).ival) != (((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->st_268)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P861)rt_nil_check(F->z_1339)).t = f_resolve_subtype_257((*(P851)rt_nil_check(F->p_1336)).a, &F->pc_1340);
(*(P861)rt_nil_check(F->z_1339)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_680(F->a_1337, (*(P861)rt_nil_check(F->z_1339)).t, &F->at_1341)), rt_str(")", 1)); b_; }));
f_check_type_224(F->at_1341, (*(P861)rt_nil_check(F->z_1339)).t, rt_r_ichk((*(P851)rt_nil_check(F->st_268)).line));
(*(P861)rt_nil_check(F->z_1339)).mvalue = f_manifest_334(F->a_1337, &F->ok_1342);
(*(P861)rt_nil_check(F->z_1339)).hasmv = rt_r_echk(F->ok_1342);
(*(P861)rt_nil_check(F->z_1339)).mv = f_meval_343(F->a_1337, &F->ok_1342);
if ((!rt_r_echk(F->ok_1342))) {
(*(P861)rt_nil_check(F->z_1339)).mv = NULL;
}
(*(P861)rt_nil_check(F->z_1339)).ro_flag = 1;
f_define_160(F->z_1339, rt_r_ichk((*(P851)rt_nil_check(F->st_268)).line));
F->p_1336 = (*(P851)rt_nil_check(F->p_1336)).next;
F->a_1337 = (*(P851)rt_nil_check(F->a_1337)).next;
}
F->t_1338 = f_resolve_subtype_257((*(P861)rt_nil_check(F->y_267)).st, &F->c_269v);
f_close_scope_170();
F->result_ = F->t_1338;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_269) = F->c_269v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_275(P857 t_271, P851 args_272, P853 c_273, rt_int line_274) {
  struct f_apply_constraint_275fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_271 = t_271;
F->args_272 = args_272;
F->c_273 = c_273;
F->line_274 = line_274;
F->dummy_1343 = NULL;
F->ok_1344 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P857)rt_nil_check(F->t_271)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->t_271)).kind) == (((rt_int)4LL))))) {
if (((rt_r_ichk((*(P851)rt_nil_check(F->args_272)).kind) != (((rt_int)16LL))) || ((*(P851)rt_nil_check(F->args_272)).next != NULL))) {
f_fail_23(F->line_274, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P853)rt_nil_check(F->c_273)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680((*(P851)rt_nil_check(F->args_272)).a, F->t_271, &F->dummy_1343); b_; }));
f_check_type_224(F->dummy_1343, F->t_271, F->line_274);
(*(P853)rt_nil_check(F->c_273)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680((*(P851)rt_nil_check(F->args_272)).b, F->t_271, &F->dummy_1343); b_; }));
f_check_type_224(F->dummy_1343, F->t_271, F->line_274);
(*(P853)rt_nil_check(F->c_273)).hasm = 0;
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_271)).kind) == (((rt_int)1LL)))) {
(*(P853)rt_nil_check(F->c_273)).mlo = f_manifest_334((*(P851)rt_nil_check(F->args_272)).a, &F->ok_1344);
(*(P853)rt_nil_check(F->c_273)).hasm = rt_r_echk(F->ok_1344);
(*(P853)rt_nil_check(F->c_273)).mhi = f_manifest_334((*(P851)rt_nil_check(F->args_272)).b, &F->ok_1344);
(*(P853)rt_nil_check(F->c_273)).hasm = (rt_r_echk((*(P853)rt_nil_check(F->c_273)).hasm) && rt_r_echk(F->ok_1344));
} else if (((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->args_272)).a)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->args_272)).b)).kind) == (((rt_int)4LL))))) {
(*(P853)rt_nil_check(F->c_273)).mlo = f_lit_index_254((*(P857)rt_nil_check(f_base_of_215(F->t_271))).lits, &(((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->args_272)).a)).name))->all));
(*(P853)rt_nil_check(F->c_273)).mhi = f_lit_index_254((*(P857)rt_nil_check(f_base_of_215(F->t_271))).lits, &(((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->args_272)).b)).name))->all));
(*(P853)rt_nil_check(F->c_273)).hasm = 1;
}
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_271)).kind) == (((rt_int)3LL)))) {
(*(P853)rt_nil_check(F->c_273)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680(F->args_272, g_ty_int_931, &F->dummy_1343); b_; }));
if (((*(P851)rt_nil_check(F->args_272)).next != NULL)) {
if ((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->args_272)).next)).kind) != (((rt_int)16LL)))) {
f_fail_23(F->line_274, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P853)rt_nil_check(F->c_273)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680((*(P851)rt_nil_check((*(P851)rt_nil_check(F->args_272)).next)).a, g_ty_float_933, &F->dummy_1343); b_; }));
(*(P853)rt_nil_check(F->c_273)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680((*(P851)rt_nil_check((*(P851)rt_nil_check(F->args_272)).next)).b, g_ty_float_933, &F->dummy_1343); b_; }));
(*(P853)rt_nil_check(F->c_273)).hasm = (f_float_lit_259((*(P851)rt_nil_check((*(P851)rt_nil_check(F->args_272)).next)).a) && f_float_lit_259((*(P851)rt_nil_check((*(P851)rt_nil_check(F->args_272)).next)).b));
}
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_271)).kind) == (((rt_int)5LL)))) {
(*(P853)rt_nil_check(F->c_273)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680(F->args_272, g_ty_int_931, &F->dummy_1343); b_; }));
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_271)).kind) == (((rt_int)12LL)))) {
(*(P853)rt_nil_check(F->c_273)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680(F->args_272, g_ty_int_931, &F->dummy_1343); b_; }));
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_271)).kind) == (((rt_int)17LL)))) {
f_tag_constraint_263(F->t_271, F->args_272, F->c_273);
} else {
f_fail_23(F->line_274, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P857 f_value_subtype_279(P851 e_276, P853 *c_277, P844 *base_278) {
  struct f_value_subtype_279fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_276 = e_276;
F->c_277 = c_277;
F->c_277v = *F->c_277;
F->base_278 = base_278;
F->base_278v = *F->base_278;
F->t_1345 = NULL;
F->c0_1346 = NULL;
F->ro_1347 = RT_R_EUNDEF;
if (f_is_lvalue_643(F->e_276)) {
f_lvalue_649(F->e_276, &F->base_278v, &F->t_1345, &F->c0_1346, &F->ro_1347);
} else {
F->base_278v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680(F->e_276, NULL, &F->t_1345); b_; }));
}
if ((F->c0_1346 == NULL)) {
F->c_277v = f_new_cons_176();
} else {
F->c_277v = f_copy_cons_198(F->c0_1346);
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_1345)).kind) == (((rt_int)5LL)))) {
(*(P853)rt_nil_check(F->c_277v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P844)rt_nil_check(F->base_278v))->all)), rt_str(").len", 5)); b_; }));
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_1345)).kind) == (((rt_int)6LL)))) {
(*(P853)rt_nil_check(F->c_277v)).bnds = NULL;
{ rt_int lo1349 = ((rt_int)1LL), hi1350 = rt_r_ichk((*(P857)rt_nil_check(F->t_1345)).ndim);
for (rt_int it1351 = lo1349; it1351 <= hi1350; it1351++) {
F->k_1348 = it1351;
F->lo_1352 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P844)rt_nil_check(F->base_278v))->all)), rt_str(").", 2)), f_dim_lo_234(F->k_1348)));
F->hi_1353 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P844)rt_nil_check(F->base_278v))->all)), rt_str(").", 2)), f_dim_hi_236(F->k_1348)));
if ((F->k_1348 == ((rt_int)1LL))) {
(*(P853)rt_nil_check(F->c_277v)).lo = f_mk_3(&F->lo_1352);
(*(P853)rt_nil_check(F->c_277v)).hi = f_mk_3(&F->hi_1353);
} else if ((F->k_1348 == ((rt_int)2LL))) {
(*(P853)rt_nil_check(F->c_277v)).lo2 = f_mk_3(&F->lo_1352);
(*(P853)rt_nil_check(F->c_277v)).hi2 = f_mk_3(&F->hi_1353);
} else {
F->l1_1354 = NULL;
F->l2_1355 = NULL;
{ R856 *cell1356 = rt_alloc(sizeof(R856));
(*cell1356).s = NULL;
(*cell1356).next = NULL;
F->l1_1354 = cell1356;
}
{ R856 *cell1357 = rt_alloc(sizeof(R856));
(*cell1357).s = NULL;
(*cell1357).next = NULL;
F->l2_1355 = cell1357;
}
(*(P855)rt_nil_check(F->l1_1354)).s = f_mk_3(&F->lo_1352);
(*(P855)rt_nil_check(F->l2_1355)).s = f_mk_3(&F->hi_1353);
(*(P855)rt_nil_check(F->l1_1354)).next = F->l2_1355;
(*(P855)rt_nil_check(F->l2_1355)).next = (*(P853)rt_nil_check(F->c_277v)).bnds;
(*(P853)rt_nil_check(F->c_277v)).bnds = F->l1_1354;
}
}
}
(*(P853)rt_nil_check(F->c_277v)).bnds = f_reverse_pairs_281((*(P853)rt_nil_check(F->c_277v)).bnds);
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_1345)).kind) == (((rt_int)12LL)))) {
(*(P853)rt_nil_check(F->c_277v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P844)rt_nil_check(F->base_278v))->all)), rt_str(")->cap", 6)); b_; }));
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->t_1345)).kind) == (((rt_int)15LL))) && ((*(P857)rt_nil_check(F->t_1345)).tparams != NULL))) {
F->p_1358 = NULL;
F->p_1358 = (*(P857)rt_nil_check(F->t_1345)).tparams;
F->head_1359 = NULL;
F->tail_1360 = NULL;
while ((F->p_1358 != NULL)) {
F->sel_1361 = NULL;
F->sel_1361 = f_nn_61((((rt_int)11LL)), rt_r_ichk((*(P851)rt_nil_check(F->e_276)).line));
(*(P851)rt_nil_check(F->sel_1361)).a = F->e_276;
(*(P851)rt_nil_check(F->sel_1361)).name = (*(P851)rt_nil_check(F->p_1358)).name;
f_append_65(&F->head_1359, &F->tail_1360, F->sel_1361);
F->p_1358 = (*(P851)rt_nil_check(F->p_1358)).next;
}
(*(P853)rt_nil_check(F->c_277v)).args = F->head_1359;
}
F->result_ = F->t_1345;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_277) = F->c_277v;  (*F->base_278) = F->base_278v;
  RT_FPOP();
  return F->result_;
}

static P855 f_reverse_pairs_281(P855 l_280) {
  struct f_reverse_pairs_281fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_280 = l_280;
F->r_1362 = NULL;
F->p_1363 = NULL;
F->p_1363 = F->l_280;
while ((F->p_1363 != NULL)) {
F->a_1364 = NULL;
F->a_1364 = F->p_1363;
F->b_1365 = NULL;
F->b_1365 = (*(P855)rt_nil_check(F->p_1363)).next;
F->p_1363 = (*(P855)rt_nil_check(F->b_1365)).next;
(*(P855)rt_nil_check(F->b_1365)).next = F->r_1362;
F->r_1362 = F->a_1364;
}
F->result_ = F->r_1362;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P857 f_inquiry_284(P851 st_282, P853 *c_283) {
  struct f_inquiry_284fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_282 = st_282;
F->c_283 = c_283;
F->c_283v = *F->c_283;
F->base_1366 = NULL;
F->t_1367 = NULL;
F->name_1368 = rt_str_copy((((P844)rt_nil_check((*(P851)rt_nil_check(F->st_282)).name))->all));
if (((*(P851)rt_nil_check(F->st_282)).b == NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->st_282)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1368, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1368, rt_str("TYPEOF", 6))) {
F->sub_1369 = NULL;
F->sub_1369 = f_as_subtype_286((*(P851)rt_nil_check(F->st_282)).b);
F->c2_1370 = NULL;
if ((F->sub_1369 != NULL)) {
F->t_1367 = f_resolve_subtype_257(F->sub_1369, &F->c2_1370);
} else {
F->t_1367 = f_value_subtype_279((*(P851)rt_nil_check(F->st_282)).b, &F->c2_1370, &F->base_1366);
}
F->c_283v = f_new_cons_176();
F->result_ = F->t_1367;
goto ret_;
}
F->t_1367 = f_value_subtype_279((*(P851)rt_nil_check(F->st_282)).b, &F->c_283v, &F->base_1366);
if (rt_str_eq(F->name_1368, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1367;
goto ret_;
}
{
F->k_1371 = RT_R_IUNDEF;
F->k_1371 = ((rt_int)1LL);
F->ok_1372 = RT_R_EUNDEF;
F->ok_1372 = 1;
F->ac_1373 = NULL;
F->ac_1373 = F->c_283v;
if (((*(P851)rt_nil_check((*(P851)rt_nil_check(F->st_282)).b)).next != NULL)) {
F->k_1371 = f_manifest_334((*(P851)rt_nil_check((*(P851)rt_nil_check(F->st_282)).b)).next, &F->ok_1372);
}
while (((rt_r_ichk((*(P857)rt_nil_check(F->t_1367)).kind) == (((rt_int)15LL))) && ((*(P857)rt_nil_check(F->t_1367)).tparams == NULL))) {
F->t_1367 = (*(P857)rt_nil_check(F->t_1367)).under;
}
if (((((rt_r_ichk((*(P857)rt_nil_check(F->t_1367)).kind) != (((rt_int)6LL))) || (!rt_r_echk(F->ok_1372))) || (rt_r_ichk(F->k_1371) < ((rt_int)1LL))) || (rt_r_ichk(F->k_1371) > rt_r_ichk((*(P857)rt_nil_check(F->t_1367)).ndim)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->st_282)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_283v = f_new_cons_176();
(*(P853)rt_nil_check(F->c_283v)).lo = f_cons_lo_244(F->ac_1373, rt_r_ichk(F->k_1371));
(*(P853)rt_nil_check(F->c_283v)).hi = f_cons_hi_247(F->ac_1373, rt_r_ichk(F->k_1371));
F->result_ = f_idx_type_250(F->t_1367, rt_r_ichk(F->k_1371));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_283) = F->c_283v;
  RT_FPOP();
  return F->result_;
}

static P851 f_as_subtype_286(P851 e_285) {
  struct f_as_subtype_286fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_285 = e_285;
F->st_1374 = NULL;
if ((F->e_285 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_285)).kind) == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_286((*(P851)rt_nil_check(F->e_285)).a);
goto ret_;
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_285)).kind) == (((rt_int)7LL)))) {
if ((!f_type_name_293(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_285)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1374 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P851)rt_nil_check(F->e_285)).line));
(*(P851)rt_nil_check(F->st_1374)).name = (*(P851)rt_nil_check(F->e_285)).name;
F->result_ = F->st_1374;
goto ret_;
} else if (((rt_r_ichk((*(P851)rt_nil_check(F->e_285)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_291((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).a)).name, (*(P851)rt_nil_check(F->e_285)).b, NULL, rt_r_ichk((*(P851)rt_nil_check(F->e_285)).line));
goto ret_;
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_285)).kind) != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).a)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).a)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_291((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).a)).a)).name, (*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).a)).b, (*(P851)rt_nil_check(F->e_285)).b, rt_r_ichk((*(P851)rt_nil_check(F->e_285)).line));
goto ret_;
} else if ((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).a)).kind) != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1375 = rt_str_copy((((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).a)).name))->all));
F->y_1376 = NULL;
F->y_1376 = f_lookup_155(&F->name_1375);
if ((rt_str_eq(F->name_1375, rt_str("INT", 3)) && (F->y_1376 == NULL))) {
if (((((*(P851)rt_nil_check(F->e_285)).b == NULL) || (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).b)).kind) != (((rt_int)16LL)))) || ((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1374 = f_nn_61((((rt_int)70LL)), rt_r_ichk((*(P851)rt_nil_check(F->e_285)).line));
(*(P851)rt_nil_check(F->st_1374)).a = (*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).b)).a;
(*(P851)rt_nil_check(F->st_1374)).b = (*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).b)).b;
F->result_ = F->st_1374;
goto ret_;
} else if ((rt_str_eq(F->name_1375, rt_str("FLOAT", 5)) && (F->y_1376 == NULL))) {
F->st_1374 = f_nn_61((((rt_int)71LL)), rt_r_ichk((*(P851)rt_nil_check(F->e_285)).line));
(*(P851)rt_nil_check(F->st_1374)).a = (*(P851)rt_nil_check(F->e_285)).b;
if ((((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).b)).next != NULL) && (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).b)).next)).kind) == (((rt_int)16LL))))) {
(*(P851)rt_nil_check(F->st_1374)).b = (*(P851)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).b)).next)).a;
(*(P851)rt_nil_check(F->st_1374)).c = (*(P851)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).b)).next)).b;
}
F->result_ = F->st_1374;
goto ret_;
} else if (((!f_type_name_293(&F->name_1375)) && (!((F->y_1376 == NULL) && ((rt_str_eq(F->name_1375, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1375, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1375, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1374 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P851)rt_nil_check(F->e_285)).line));
(*(P851)rt_nil_check(F->st_1374)).name = (*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_285)).a)).name;
(*(P851)rt_nil_check(F->st_1374)).b = (*(P851)rt_nil_check(F->e_285)).b;
(*(P851)rt_nil_check(F->st_1374)).flag = ((rt_int)1LL);
F->result_ = F->st_1374;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_tt_subtype_291(P844 name_287, P851 tt_288, P851 args_289, rt_int line_290) {
  struct f_tt_subtype_291fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_287 = name_287;
F->tt_288 = tt_288;
F->args_289 = args_289;
F->line_290 = line_290;
F->st_1377 = NULL;
if (rt_str_eq((((P844)rt_nil_check(F->name_287))->all), rt_str("STRING", 6))) {
F->st_1377 = f_nn_61((((rt_int)73LL)), F->line_290);
} else if (rt_str_eq((((P844)rt_nil_check(F->name_287))->all), rt_str("SET", 3))) {
F->st_1377 = f_nn_61((((rt_int)77LL)), F->line_290);
} else if ((rt_str_eq((((P844)rt_nil_check(F->name_287))->all), rt_str("MAILBOX", 7)) && ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P861)rt_nil_check(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1377 = f_nn_61((((rt_int)78LL)), F->line_290);
} else if (rt_str_eq((((P844)rt_nil_check(F->name_287))->all), rt_str("FILE", 4))) {
F->st_1377 = f_nn_61((((rt_int)79LL)), F->line_290);
} else if (f_type_name_293(&(((P844)rt_nil_check(F->name_287))->all))) {
F->st_1377 = f_nn_61((((rt_int)80LL)), F->line_290);
(*(P851)rt_nil_check(F->st_1377)).name = F->name_287;
(*(P851)rt_nil_check(F->st_1377)).a = F->tt_288;
(*(P851)rt_nil_check(F->st_1377)).b = F->args_289;
F->result_ = F->st_1377;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P851)rt_nil_check(F->st_1377)).a = F->tt_288;
(*(P851)rt_nil_check(F->st_1377)).b = F->args_289;
F->result_ = F->st_1377;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_name_293(rstr *name_292) {
  struct f_type_name_293fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_292 = name_292;
F->y_1378 = NULL;
F->y_1378 = f_lookup_155(&(*F->name_292));
if ((F->y_1378 == NULL)) {
F->result_ = ((((((rt_str_eq((*F->name_292), rt_str("INT", 3)) || rt_str_eq((*F->name_292), rt_str("BOOL", 4))) || rt_str_eq((*F->name_292), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_292), rt_str("ASCII", 5))) || rt_str_eq((*F->name_292), rt_str("ACT", 3))) || rt_str_eq((*F->name_292), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_292), rt_str("LATCH", 5)));
goto ret_;
}
F->result_ = (((rt_r_ichk((*(P861)rt_nil_check(F->y_1378)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_1378)).kind) == (((rt_int)6LL)))) || ((rt_r_ichk((*(P861)rt_nil_check(F->y_1378)).kind) == (((rt_int)10LL))) && (((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_1378)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_1378)).decl)).b)).kind) == (((rt_int)44LL)))) || (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_1378)).decl)).b)).kind) == (((rt_int)42LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_295(P857 t_294) {
  struct f_empty_set_295fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_294 = t_294;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_190(f_base_of_215((*(P857)rt_nil_check(F->t_294)).elem), f_base_cons_218((*(P857)rt_nil_check(F->t_294)).elem, (*(P857)rt_nil_check(F->t_294)).elemcons))), rt_str(", ", 2)), f_sub_hi_193(f_base_of_215((*(P857)rt_nil_check(F->t_294)).elem), f_base_cons_218((*(P857)rt_nil_check(F->t_294)).elem, (*(P857)rt_nil_check(F->t_294)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_297(P857 t_296) {
  struct f_opened_297fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_296 = t_296;
F->c_1379 = NULL;
F->c_1379 = g_caps_906;
if ((((rt_r_ichk((*(P857)rt_nil_check(F->t_296)).kind) != (((rt_int)15LL))) || ((*(P857)rt_nil_check(F->t_296)).ocap == NULL)) || (rt_r_ichk((*(P851)rt_nil_check((*(P857)rt_nil_check(F->t_296)).ocap)).ival) == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1379 != NULL)) {
if (((*(P878)rt_nil_check(F->c_1379)).d == (*(P857)rt_nil_check(F->t_296)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1379 = (*(P878)rt_nil_check(F->c_1379)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_replace_all_301(rstr *s_298, rstr *pat_299, rstr *r_300) {
  struct f_replace_all_301fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_298 = s_298;
F->pat_299 = pat_299;
F->r_300 = r_300;
F->i_1380 = RT_R_IUNDEF;
F->i_1380 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_299)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_298)).len)) < ((rt_int)(((*F->pat_299)).len))))) {
F->result_ = (*F->s_298);
goto ret_;
}
while ((rt_sub(rt_add(rt_r_ichk(F->i_1380), ((rt_int)(((*F->pat_299)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_298)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_298), rt_r_ichk(F->i_1380), rt_sub(rt_add(rt_r_ichk(F->i_1380), ((rt_int)(((*F->pat_299)).len))), ((rt_int)1LL))), (*F->pat_299))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_298), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1380), ((rt_int)1LL))), (*F->r_300)), f_replace_all_301(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_298), rt_add(rt_r_ichk(F->i_1380), ((rt_int)(((*F->pat_299)).len))), ((rt_int)(((*F->s_298)).len))); b_; }), &(*F->pat_299), &(*F->r_300)));
goto ret_;
}
F->i_1380 = rt_add(rt_r_ichk(F->i_1380), ((rt_int)1LL));
}
F->result_ = (*F->s_298);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_subst_303(rstr *s_302) {
  struct f_subst_303fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_302 = s_302;
F->l_1381 = NULL;
F->l_1381 = g_psub_908;
F->r_1382 = NULL;
F->r_1382 = f_mk_3(&(*F->s_302));
while ((F->l_1381 != NULL)) {
F->r_1382 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_301(&(((P844)rt_nil_check(F->r_1382))->all), &(((P844)rt_nil_check((*(P855)rt_nil_check(F->l_1381)).s))->all), &(((P844)rt_nil_check((*(P855)rt_nil_check((*(P855)rt_nil_check(F->l_1381)).next)).s))->all)); b_; }));
F->l_1381 = (*(P855)rt_nil_check((*(P855)rt_nil_check(F->l_1381)).next)).next;
}
F->result_ = (((P844)rt_nil_check(F->r_1382))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P857 f_new_type_307(P861 y_304, P851 st_305, P853 *c_306) {
  struct f_new_type_307fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_304 = y_304;
F->st_305 = st_305;
F->c_306 = c_306;
F->c_306v = *F->c_306;
F->d_1383 = NULL;
F->d_1383 = (*(P861)rt_nil_check(F->y_304)).decl;
F->p_1384 = NULL;
F->uc_1385 = NULL;
F->c_306v = f_new_cons_176();
if (((*(P861)rt_nil_check(F->y_304)).t == NULL)) {
(*(P861)rt_nil_check(F->y_304)).t = f_new_typ_175((((rt_int)15LL)));
(*(P857)rt_nil_check((*(P861)rt_nil_check(F->y_304)).t)).name = (*(P861)rt_nil_check(F->y_304)).name;
(*(P857)rt_nil_check((*(P861)rt_nil_check(F->y_304)).t)).decl = F->d_1383;
(*(P857)rt_nil_check((*(P861)rt_nil_check(F->y_304)).t)).tparams = (*(P851)rt_nil_check(F->d_1383)).b;
if ((g_caps_906 != NULL)) {
(*(P857)rt_nil_check((*(P861)rt_nil_check(F->y_304)).t)).ocap = (*(P878)rt_nil_check(g_caps_906)).d;
}
f_open_scope_169();
F->p_1384 = (*(P851)rt_nil_check(F->d_1383)).b;
while ((F->p_1384 != NULL)) {
F->z_1386 = NULL;
F->z_1386 = f_new_sym_173((((rt_int)2LL)), (*(P851)rt_nil_check(F->p_1384)).name);
F->zc_1387 = NULL;
(*(P861)rt_nil_check(F->z_1386)).t = f_resolve_subtype_257((*(P851)rt_nil_check(F->p_1384)).a, &F->zc_1387);
(*(P861)rt_nil_check(F->z_1386)).mnext = (*(P857)rt_nil_check((*(P861)rt_nil_check(F->y_304)).t)).tpsyms;
(*(P857)rt_nil_check((*(P861)rt_nil_check(F->y_304)).t)).tpsyms = F->z_1386;
(*(P861)rt_nil_check(F->z_1386)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1384)).name))->all))), rt_str("@", 1)); b_; }));
f_define_160(F->z_1386, rt_r_ichk((*(P851)rt_nil_check(F->d_1383)).line));
F->p_1384 = (*(P851)rt_nil_check(F->p_1384)).next;
}
(*(P857)rt_nil_check((*(P861)rt_nil_check(F->y_304)).t)).under = f_resolve_subtype_257((*(P851)rt_nil_check(F->d_1383)).a, &F->uc_1385);
(*(P857)rt_nil_check((*(P861)rt_nil_check(F->y_304)).t)).elemcons = F->uc_1385;
f_close_scope_170();
}
(*(P853)rt_nil_check(F->c_306v)).args = (*(P851)rt_nil_check(F->st_305)).b;
F->result_ = (*(P861)rt_nil_check(F->y_304)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_306) = F->c_306v;
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_311(rstr *lval_308, P857 t_309, P853 c_310) {
  struct f_init_storage_311fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_308 = lval_308;
F->t_309 = t_309;
F->c_310 = c_310;
f_make_storage_326(&(*F->lval_308), F->t_309, F->c_310);
if (((*(P857)rt_nil_check(F->t_309)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_314((*(P857)rt_nil_check(F->t_309)).initp, &(*F->lval_308)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_314(P861 y_312, rstr *lval_313) {
  struct f_init_call_314fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_312 = y_312;
F->lval_313 = lval_313;
F->link_1388 = NULL;
F->link_1388 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P861)rt_nil_check(F->y_312)).level) > ((rt_int)0LL))) {
F->link_1388 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1390 = ((rt_int)1LL), hi1391 = rt_sub(rt_r_ichk(g_cur_level_904), rt_r_ichk((*(P861)rt_nil_check(F->y_312)).level));
for (rt_int it1392 = lo1390; it1392 <= hi1391; it1392++) {
F->i_1389 = it1392;
F->link_1388 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->link_1388))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1388 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->link_1388))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_312)).cname))->all), rt_str("(", 1)), (((P844)rt_nil_check(F->link_1388))->all)), rt_str("&", 1)), (*F->lval_313)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_316(P857 t_315) {
  struct f_needs_fin_316fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_315 = t_315;
if ((F->t_315 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P857)rt_nil_check(F->t_315)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_315)).kind) == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_316((*(P857)rt_nil_check(F->t_315)).under);
goto ret_;
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_315)).kind) == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_316((*(P857)rt_nil_check(F->t_315)).elem);
goto ret_;
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->t_315)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->t_315)).kind) == (((rt_int)17LL))))) {
F->f_1393 = NULL;
F->f_1393 = (*(P857)rt_nil_check(F->t_315)).fields;
while ((F->f_1393 != NULL)) {
if (f_needs_fin_316((*(P859)rt_nil_check(F->f_1393)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1393 = (*(P859)rt_nil_check(F->f_1393)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_319(rstr *lval_317, P857 t_318) {
  struct f_fin_code_319fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_317 = lval_317;
F->t_318 = t_318;
F->r_1394 = NULL;
F->r_1394 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P857)rt_nil_check(F->t_318)).finalp != NULL)) {
F->r_1394 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_314((*(P857)rt_nil_check(F->t_318)).finalp, &(*F->lval_317)), rt_str(" ", 1)); b_; }));
}
if (((rt_r_ichk((*(P857)rt_nil_check(F->t_318)).kind) == (((rt_int)15LL))) && ((*(P857)rt_nil_check(F->t_318)).tparams == NULL))) {
F->result_ = rt_str_cat((((P844)rt_nil_check(F->r_1394))->all), f_fin_code_319(&(*F->lval_317), (*(P857)rt_nil_check(F->t_318)).under));
goto ret_;
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_318)).kind) == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P844)rt_nil_check(F->r_1394))->all), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_317), rt_str(".all", 4)); b_; }), (*(P857)rt_nil_check(F->t_318)).under));
goto ret_;
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->t_318)).kind) == (((rt_int)6LL))) && f_needs_fin_316((*(P857)rt_nil_check(F->t_318)).elem))) {
F->i_1395 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_1394))->all), rt_str("for (rt_int ", 12)), F->i_1395), rt_str(" = 0; ", 6)), F->i_1395), rt_str(" < ", 3)), f_acnt_241(F->t_318, &(*F->lval_317))), rt_str("; ", 2)), F->i_1395), rt_str("++) { ", 6)), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_317), rt_str(".p[", 3)), F->i_1395), rt_str("]", 1)); b_; }), (*(P857)rt_nil_check(F->t_318)).elem)), rt_str(" }", 2));
goto ret_;
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_318)).kind) == (((rt_int)7LL)))) {
F->f_1396 = NULL;
F->f_1396 = (*(P857)rt_nil_check(F->t_318)).fields;
while ((F->f_1396 != NULL)) {
if (f_needs_fin_316((*(P859)rt_nil_check(F->f_1396)).t)) {
F->r_1394 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_1394))->all), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_317), rt_str(".", 1)), f_field_c_17(&(((P844)rt_nil_check((*(P859)rt_nil_check(F->f_1396)).name))->all))); b_; }), (*(P859)rt_nil_check(F->f_1396)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1396 = (*(P859)rt_nil_check(F->f_1396)).next;
}
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_318)).kind) == (((rt_int)17LL)))) {
F->f_1397 = NULL;
F->f_1397 = (*(P857)rt_nil_check(F->t_318)).fields;
F->i_1398 = RT_R_IUNDEF;
F->i_1398 = ((rt_int)0LL);
F->r_1394 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_1394))->all), rt_str("switch (", 8)), (*F->lval_317)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1397 != NULL)) {
if (f_needs_fin_316((*(P859)rt_nil_check(F->f_1397)).t)) {
F->r_1394 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_1394))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1398))), rt_str(": ", 2)), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_317), rt_str(".u.", 3)), f_field_c_17(&(((P844)rt_nil_check((*(P859)rt_nil_check(F->f_1397)).name))->all))); b_; }), (*(P859)rt_nil_check(F->f_1397)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1398 = rt_add(rt_r_ichk(F->i_1398), ((rt_int)1LL));
F->f_1397 = (*(P859)rt_nil_check(F->f_1397)).next;
}
F->r_1394 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->r_1394))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P844)rt_nil_check(F->r_1394))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P857 f_tparam_type_322(P857 t_320, rstr *name_321) {
  struct f_tparam_type_322fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_320 = t_320;
F->name_321 = name_321;
F->z_1399 = NULL;
F->z_1399 = (*(P857)rt_nil_check(F->t_320)).tpsyms;
while ((F->z_1399 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->z_1399)).name))->all), (*F->name_321))) {
F->result_ = (*(P861)rt_nil_check(F->z_1399)).t;
goto ret_;
}
F->z_1399 = (*(P861)rt_nil_check(F->z_1399)).mnext;
}
F->result_ = g_ty_int_931;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_326(rstr *lval_323, P857 t_324, P853 c_325) {
  struct f_make_storage_326fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_323 = lval_323;
F->t_324 = t_324;
F->c_325 = c_325;
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_324)).kind) == (((rt_int)15LL)))) {
F->p_1400 = NULL;
F->p_1400 = (*(P857)rt_nil_check(F->t_324)).tparams;
F->a_1401 = NULL;
F->a_1401 = (*(P853)rt_nil_check(F->c_325)).args;
F->uc_1402 = NULL;
F->ut_1403 = NULL;
F->at_1404 = NULL;
if ((f_list_len_67(F->a_1401) != f_list_len_67(F->p_1400))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_324)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1400))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1400 != NULL)) {
F->pt_1405 = f_tparam_type_322(F->t_324, &(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1400)).name))->all));
F->v_1406 = rt_str_copy(f_gexpr_680(F->a_1401, F->pt_1405, &F->at_1404));
f_check_type_224(F->at_1404, F->pt_1405, rt_r_ichk((*(P851)rt_nil_check(F->a_1401)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".p_", 3)), f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1400)).name))->all))), rt_str(" = ", 3)), F->v_1406), rt_str(";", 1)); b_; }));
F->p_1400 = (*(P851)rt_nil_check(F->p_1400)).next;
F->a_1401 = (*(P851)rt_nil_check(F->a_1401)).next;
}
{
F->saved_1407 = NULL;
F->saved_1407 = g_psub_908;
F->p_1400 = (*(P857)rt_nil_check(F->t_324)).tparams;
while ((F->p_1400 != NULL)) {
F->l1_1408 = NULL;
F->l2_1409 = NULL;
{ R856 *cell1410 = rt_alloc(sizeof(R856));
(*cell1410).s = NULL;
(*cell1410).next = NULL;
F->l1_1408 = cell1410;
}
{ R856 *cell1411 = rt_alloc(sizeof(R856));
(*cell1411).s = NULL;
(*cell1411).next = NULL;
F->l2_1409 = cell1411;
}
(*(P855)rt_nil_check(F->l1_1408)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1400)).name))->all))), rt_str("@", 1)); b_; }));
(*(P855)rt_nil_check(F->l2_1409)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".p_", 3)), f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1400)).name))->all))); b_; }));
(*(P855)rt_nil_check(F->l1_1408)).next = F->l2_1409;
(*(P855)rt_nil_check(F->l2_1409)).next = g_psub_908;
g_psub_908 = F->l1_1408;
F->p_1400 = (*(P851)rt_nil_check(F->p_1400)).next;
}
if (((*(P857)rt_nil_check(F->t_324)).tparams == NULL)) {
f_init_storage_311(&(*F->lval_323), (*(P857)rt_nil_check(F->t_324)).under, (*(P857)rt_nil_check(F->t_324)).elemcons);
} else {
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_323), rt_str(".all", 4)); b_; }), (*(P857)rt_nil_check(F->t_324)).under, (*(P857)rt_nil_check(F->t_324)).elemcons);
}
g_psub_908 = F->saved_1407;
}
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_324)).kind) == (((rt_int)12LL)))) {
if (((*(P853)rt_nil_check(F->c_325)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_323), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_323)), rt_str(", ", 2)), f_subst_303(&(((P844)rt_nil_check((*(P853)rt_nil_check(F->c_325)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_226((*(P857)rt_nil_check(F->t_324)).elem)), rt_str("), ", 3)), f_mcopy_355((*(P857)rt_nil_check(F->t_324)).elem)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_324)).kind) == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_323)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_324)).kind) == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(" = ", 3)), f_empty_set_295(F->t_324)), rt_str(";", 1)); b_; }));
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_324)).kind) == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_323), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_324)).kind) == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_323), rt_str(" = NULL;", 8)); b_; }));
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_324)).kind) == (((rt_int)5LL)))) {
if (((*(P853)rt_nil_check(F->c_325)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(" = rt_str_new(", 14)), f_subst_303(&(((P844)rt_nil_check((*(P853)rt_nil_check(F->c_325)).slen))->all))), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_324)).kind) == (((rt_int)6LL)))) {
if (((*(P853)rt_nil_check(F->c_325)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1413 = ((rt_int)1LL), hi1414 = rt_r_ichk((*(P857)rt_nil_check(F->t_324)).ndim);
for (rt_int it1415 = lo1413; it1415 <= hi1414; it1415++) {
F->k_1412 = it1415;
if ((f_cons_lo_244(F->c_325, F->k_1412) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".", 1)), f_dim_lo_234(F->k_1412)), rt_str(" = ", 3)), f_subst_303(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P844)rt_nil_check(f_cons_lo_244(F->c_325, F->k_1412)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_323)), rt_str(".", 1)), f_dim_hi_236(F->k_1412)), rt_str(" = ", 3)), f_subst_303(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P844)rt_nil_check(f_cons_hi_247(F->c_325, F->k_1412)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_324)).ndim) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".lo2 = ", 7)), (*F->lval_323)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_226((*(P857)rt_nil_check(F->t_324)).elem)), rt_str(") * (size_t)", 12)), f_acnt_241(F->t_324, &(*F->lval_323))), rt_str(" + 1);", 6)); b_; }));
if (((((((((((rt_r_ichk((*(P857)rt_nil_check((*(P857)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P857)rt_nil_check((*(P857)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P857)rt_nil_check((*(P857)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P857)rt_nil_check((*(P857)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)15LL)))) || (rt_r_ichk((*(P857)rt_nil_check((*(P857)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P857)rt_nil_check((*(P857)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)12LL)))) || (rt_r_ichk((*(P857)rt_nil_check((*(P857)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)13LL)))) || (rt_r_ichk((*(P857)rt_nil_check((*(P857)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P857)rt_nil_check((*(P857)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)17LL)))) || (rt_r_echk(g_mark_uninit_923) && (!rt_str_eq(f_uninit_value_328((*(P857)rt_nil_check(F->t_324)).elem), rt_str("", 0)))))) {
F->i_1416 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1416), rt_str(" = 0; ", 6)), F->i_1416), rt_str(" < ", 3)), f_acnt_241(F->t_324, &(*F->lval_323))), rt_str("; ", 2)), F->i_1416), rt_str("++) {", 5)); b_; }));
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".p[", 3)), F->i_1416), rt_str("]", 1)); b_; }), (*(P857)rt_nil_check(F->t_324)).elem, (*(P857)rt_nil_check(F->t_324)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_324)).kind) == (((rt_int)7LL)))) {
F->f_1417 = NULL;
F->f_1417 = (*(P857)rt_nil_check(F->t_324)).fields;
while ((F->f_1417 != NULL)) {
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".", 1)), f_field_c_17(&(((P844)rt_nil_check((*(P859)rt_nil_check(F->f_1417)).name))->all))); b_; }), (*(P859)rt_nil_check(F->f_1417)).t, (*(P859)rt_nil_check(F->f_1417)).c);
F->f_1417 = (*(P859)rt_nil_check(F->f_1417)).next;
}
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_324)).kind) == (((rt_int)17LL)))) {
if (((F->c_325 != NULL) && rt_r_echk((*(P853)rt_nil_check(F->c_325)).hasm))) {
F->f_1418 = NULL;
F->f_1418 = (*(P857)rt_nil_check(F->t_324)).fields;
{ rt_int lo1420 = ((rt_int)1LL), hi1421 = rt_r_ichk((*(P853)rt_nil_check(F->c_325)).mlo);
for (rt_int it1422 = lo1420; it1422 <= hi1421; it1422++) {
F->i_1419 = it1422;
F->f_1418 = (*(P859)rt_nil_check(F->f_1418)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk((*(P853)rt_nil_check(F->c_325)).mlo))), rt_str(";", 1)); b_; }));
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".u.", 3)), f_field_c_17(&(((P844)rt_nil_check((*(P859)rt_nil_check(F->f_1418)).name))->all))); b_; }), (*(P859)rt_nil_check(F->f_1418)).t, (*(P859)rt_nil_check(F->f_1418)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_323), rt_str(".tag = -1;", 10)); b_; }));
}
} else if ((rt_r_echk(g_mark_uninit_923) && (!rt_str_eq(f_uninit_value_328(F->t_324), rt_str("", 0))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(" = ", 3)), f_uninit_value_328(F->t_324)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_uninit_value_328(P857 t_327) {
  struct f_uninit_value_328fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_327 = t_327;
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_327)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str("RT_R_IUNDEF", 11);
goto ret_;
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->t_327)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->t_327)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str("RT_R_EUNDEF", 11);
goto ret_;
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_327)).kind) == (((rt_int)3LL)))) {
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

static rstr f_init_chk_331(P857 t_329, rstr *v_330) {
  struct f_init_chk_331fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_329 = t_329;
F->v_330 = v_330;
F->b_1423 = NULL;
F->b_1423 = f_base_of_215(F->t_329);
if (f_suppressed_449(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))) {
F->result_ = (*F->v_330);
goto ret_;
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->b_1423)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_ichk(", 10), (*F->v_330)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->b_1423)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->b_1423)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_echk(", 10), (*F->v_330)), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->b_1423)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fchk(", 10), (*F->v_330)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_330);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_manifest_334(P851 e_332, int *ok_333) {
  struct f_manifest_334fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_332 = e_332;
F->ok_333 = ok_333;
F->ok_333v = *F->ok_333;
F->v_1424 = NULL;
F->v_1424 = f_meval_343(F->e_332, &F->ok_333v);
if ((rt_r_echk(F->ok_333v) && (rt_r_ichk((*(P870)rt_nil_check(F->v_1424)).kind) == (((rt_int)1LL))))) {
F->result_ = rt_r_ichk((*(P870)rt_nil_check(F->v_1424)).i);
goto ret_;
}
F->ok_333v = 0;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_333v)) (*F->ok_333) = F->ok_333v;
  RT_FPOP();
  return F->result_;
}

static P870 f_mk_mval_337(rt_int kind_335, rt_int i_336) {
  struct f_mk_mval_337fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_335 = kind_335;
F->i_336 = i_336;
F->v_1425 = NULL;
{ R871 *cell1426 = rt_alloc(sizeof(R871));
(*cell1426).s = NULL;
(*cell1426).t = NULL;
F->v_1425 = cell1426;
}
(*(P870)rt_nil_check(F->v_1425)).kind = F->kind_335;
(*(P870)rt_nil_check(F->v_1425)).i = F->i_336;
F->result_ = F->v_1425;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_ipow_340(rt_int a_338, rt_int b_339) {
  struct f_ipow_340fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_338 = a_338;
F->b_339 = b_339;
F->r_1427 = RT_R_IUNDEF;
F->r_1427 = ((rt_int)1LL);
{ rt_int lo1429 = ((rt_int)1LL), hi1430 = F->b_339;
for (rt_int it1431 = lo1429; it1431 <= hi1430; it1431++) {
F->i_1428 = it1431;
F->r_1427 = rt_mul(rt_r_ichk(F->r_1427), F->a_338);
}
}
F->result_ = rt_r_ichk(F->r_1427);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P870 f_meval_343(P851 e_341, int *ok_342) {
  struct f_meval_343fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_341 = e_341;
F->ok_342 = ok_342;
F->ok_342v = *F->ok_342;
F->a_1432 = NULL;
F->b_1433 = NULL;
F->ok2_1434 = RT_R_EUNDEF;
F->op_1435 = NULL;
F->ok_342v = 0;
if ((F->e_341 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_341)).kind) == (((rt_int)1LL)))) {
F->ok_342v = 1;
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_r_ichk((*(P851)rt_nil_check(F->e_341)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_341)).kind) == (((rt_int)5LL)))) {
F->ok_342v = 1;
F->result_ = f_mk_mval_337((((rt_int)2LL)), rt_r_ichk((*(P851)rt_nil_check(F->e_341)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_341)).kind) == (((rt_int)2LL)))) {
F->ok_342v = 1;
F->result_ = f_mk_mval_337((((rt_int)3LL)), ((rt_int)0LL));
goto ret_;
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_341)).kind) == (((rt_int)3LL)))) {
F->ok_342v = 1;
F->a_1432 = f_mk_mval_337((((rt_int)5LL)), ((rt_int)0LL));
(*(P870)rt_nil_check(F->a_1432)).s = (*(P851)rt_nil_check(F->e_341)).name;
F->result_ = F->a_1432;
goto ret_;
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_341)).kind) == (((rt_int)4LL)))) {
if ((f_lit_index_254((*(P857)rt_nil_check(g_ty_ascii_934)).lits, &(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_341)).name))->all)) >= ((rt_int)0LL))) {
F->ok_342v = 1;
F->a_1432 = f_mk_mval_337((((rt_int)4LL)), f_lit_index_254((*(P857)rt_nil_check(g_ty_ascii_934)).lits, &(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_341)).name))->all)));
(*(P870)rt_nil_check(F->a_1432)).t = g_ty_ascii_934;
(*(P870)rt_nil_check(F->a_1432)).s = (*(P851)rt_nil_check(F->e_341)).name;
F->result_ = F->a_1432;
goto ret_;
}
F->a_1432 = f_mk_mval_337((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P870)rt_nil_check(F->a_1432)).s = (*(P851)rt_nil_check(F->e_341)).name;
F->ok_342v = 1;
F->result_ = F->a_1432;
goto ret_;
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_341)).kind) == (((rt_int)17LL)))) {
F->result_ = f_meval_343((*(P851)rt_nil_check(F->e_341)).a, &F->ok_342v);
goto ret_;
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_341)).kind) == (((rt_int)7LL)))) {
F->y_1436 = NULL;
F->y_1436 = f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_341)).name))->all));
if ((((F->y_1436 != NULL) && (rt_r_ichk((*(P861)rt_nil_check(F->y_1436)).kind) == (((rt_int)2LL)))) && ((*(P861)rt_nil_check(F->y_1436)).mv != NULL))) {
F->ok_342v = 1;
F->result_ = (*(P861)rt_nil_check(F->y_1436)).mv;
goto ret_;
} else if ((((F->y_1436 != NULL) && (rt_r_ichk((*(P861)rt_nil_check(F->y_1436)).kind) == (((rt_int)2LL)))) && rt_r_echk((*(P861)rt_nil_check(F->y_1436)).hasmv))) {
F->ok_342v = 1;
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_r_ichk((*(P861)rt_nil_check(F->y_1436)).mvalue));
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_341)).kind) == (((rt_int)8LL)))) {
F->a_1432 = f_meval_343((*(P851)rt_nil_check(F->e_341)).a, &F->ok_342v);
if ((!rt_r_echk(F->ok_342v))) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_341)).name))->all), rt_str("NOT", 3)) && (rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).kind) == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), rt_sub(((rt_int)1LL), rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i)));
goto ret_;
} else if ((rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_341)).name))->all), rt_str("-", 1)) && (rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).kind) == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_neg(rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i)));
goto ret_;
} else if (((rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_341)).name))->all), rt_str("+", 1)) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_341)).name))->all), rt_str("-", 1))) && ((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).kind) == (((rt_int)3LL)))))) {
F->result_ = F->a_1432;
goto ret_;
}
F->ok_342v = 0;
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P851)rt_nil_check(F->e_341)).kind) != (((rt_int)9LL))) || f_user_defined_353(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_341)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1435 = (*(P851)rt_nil_check(F->e_341)).name;
F->a_1432 = f_meval_343((*(P851)rt_nil_check(F->e_341)).a, &F->ok_342v);
F->b_1433 = f_meval_343((*(P851)rt_nil_check(F->e_341)).b, &F->ok2_1434);
F->ok_342v = (rt_r_echk(F->ok_342v) && rt_r_echk(F->ok2_1434));
if ((!rt_r_echk(F->ok_342v))) {
F->result_ = NULL;
goto ret_;
}
F->ok_342v = 0;
if (((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).kind) == (((rt_int)1LL))) && (rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).kind) == (((rt_int)1LL))))) {
F->ok_342v = 1;
if (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_add(rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i), rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i)));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_sub(rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i), rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i)));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_mul(rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i), rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i)));
goto ret_;
} else if ((rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("DIV", 3)) && (rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_div(rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i), rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i)));
goto ret_;
} else if ((rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("MOD", 3)) && (rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_mod(rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i), rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i)));
goto ret_;
} else if ((rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("**", 2)) && (rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i) >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), f_ipow_340(rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i), rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i)));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i) == rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i))));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i) != rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i))));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i) < rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i))));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i) <= rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i))));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i) > rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i))));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i) >= rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).kind) == (((rt_int)3LL)))) && (((rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("+", 1)) || rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("-", 1))) || rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("*", 1))) || rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("/", 1))))) {
F->ok_342v = 1;
F->result_ = F->a_1432;
goto ret_;
} else if ((((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).kind) == (((rt_int)1LL)))) && rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("**", 2)))) {
F->ok_342v = 1;
F->result_ = F->a_1432;
goto ret_;
} else if (((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).kind) == (((rt_int)2LL))) && (rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).kind) == (((rt_int)2LL))))) {
F->ok_342v = 1;
if (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), rt_mul(rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i), rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i)));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_add(rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i), rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i)) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("XOR", 3)) || rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i) != rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i))));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).i) == rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).kind) == (((rt_int)4LL)))) && (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("=", 1)) || rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("/=", 2))))) {
F->ok_342v = 1;
if (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347(rt_str_eq((((P844)rt_nil_check((*(P870)rt_nil_check(F->a_1432)).s))->all), (((P844)rt_nil_check((*(P870)rt_nil_check(F->b_1433)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((!rt_str_eq((((P844)rt_nil_check((*(P870)rt_nil_check(F->a_1432)).s))->all), (((P844)rt_nil_check((*(P870)rt_nil_check(F->b_1433)).s))->all)))));
goto ret_;
} else if ((((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).kind) == (((rt_int)5LL)))) && (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("=", 1)) || rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("/=", 2))))) {
F->ok_342v = 1;
if (rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347(rt_str_eq((((P844)rt_nil_check((*(P870)rt_nil_check(F->a_1432)).s))->all), (((P844)rt_nil_check((*(P870)rt_nil_check(F->b_1433)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((!rt_str_eq((((P844)rt_nil_check((*(P870)rt_nil_check(F->a_1432)).s))->all), (((P844)rt_nil_check((*(P870)rt_nil_check(F->b_1433)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P844)rt_nil_check(F->op_1435))->all), rt_str("&", 1)) && ((rt_r_ichk((*(P870)rt_nil_check(F->a_1432)).kind) == (((rt_int)5LL))) || ((*(P870)rt_nil_check(F->a_1432)).t == g_ty_ascii_934))) && ((rt_r_ichk((*(P870)rt_nil_check(F->b_1433)).kind) == (((rt_int)5LL))) || ((*(P870)rt_nil_check(F->b_1433)).t == g_ty_ascii_934)))) {
F->r_1437 = NULL;
F->r_1437 = f_mk_mval_337((((rt_int)5LL)), ((rt_int)0LL));
F->ok_342v = 1;
(*(P870)rt_nil_check(F->r_1437)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_349(F->a_1432), f_mstr_349(F->b_1433)); b_; }));
F->result_ = F->r_1437;
goto ret_;
}
F->ok_342v = 0;
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_342v)) (*F->ok_342) = F->ok_342v;
  RT_FPOP();
  return F->result_;
}

static rstr f_bool_text_345(int b_344) {
  struct f_bool_text_345fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_344 = b_344;
if (F->b_344) {
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

static rt_int f_bool_i_347(int b_346) {
  struct f_bool_i_347fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_346 = b_346;
if (F->b_346) {
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

static rstr f_mstr_349(P870 v_348) {
  struct f_mstr_349fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_348 = v_348;
if ((rt_r_ichk((*(P870)rt_nil_check(F->v_348)).kind) == (((rt_int)5LL)))) {
F->result_ = (((P844)rt_nil_check((*(P870)rt_nil_check(F->v_348)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_351(rt_r_ichk((*(P870)rt_nil_check(F->v_348)).i)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ascii_char_351(rt_int i_350) {
  struct f_ascii_char_351fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_350 = i_350;
F->printable_1438 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_350 >= ((rt_int)32LL)) && (F->i_350 <= ((rt_int)126LL)))) {
F->result_ = rt_r_echk(rt_str_get(F->printable_1438, rt_sub(F->i_350, ((rt_int)31LL))));
goto ret_;
}
F->result_ = 32;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_user_defined_353(rstr *op_352) {
  struct f_user_defined_353fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_352 = op_352;
F->y_1439 = NULL;
F->y_1439 = f_lookup_155(&(*F->op_352));
F->result_ = ((F->y_1439 != NULL) && ((rt_r_ichk((*(P861)rt_nil_check(F->y_1439)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_1439)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_355(P857 t_354) {
  struct f_mcopy_355fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_354 = t_354;
F->ct_1440 = rt_str_copy(f_ctype_226(F->t_354));
F->name_1441 = rt_str_new(rt_add(((rt_int)((F->ct_1440).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1441, rt_str_cat(rt_str("mc_", 3), F->ct_1440));
F->l_1442 = NULL;
if ((!f_seen_name_376(g_mcopies_930, &F->name_1441))) {
{ R856 *cell1443 = rt_alloc(sizeof(R856));
(*cell1443).s = NULL;
(*cell1443).next = NULL;
F->l_1442 = cell1443;
}
(*(P855)rt_nil_check(F->l_1442)).s = f_mk_3(&F->name_1441);
(*(P855)rt_nil_check(F->l_1442)).next = g_mcopies_930;
g_mcopies_930 = F->l_1442;
f_put_27(g_out_protos_896, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1441), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1441), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1440), rt_str(" *)d = ", 7)), f_copy_code_365(F->t_354, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1440), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_1441;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_357(P857 t_356) {
  struct f_composite_357fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_356 = t_356;
F->result_ = ((((rt_r_ichk((*(P857)rt_nil_check(F->t_356)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->t_356)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P857)rt_nil_check(F->t_356)).kind) == (((rt_int)17LL)))) || ((rt_r_ichk((*(P857)rt_nil_check(F->t_356)).kind) == (((rt_int)15LL))) && ((*(P857)rt_nil_check(F->t_356)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_362(rstr *lval_358, P857 t_359, rstr *v_360, P853 c_361) {
  struct f_assign_code_362fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_358 = lval_358;
F->t_359 = t_359;
F->v_360 = v_360;
F->c_361 = c_361;
if (((rt_r_ichk((*(P857)rt_nil_check(F->t_359)).kind) == (((rt_int)15LL))) && ((*(P857)rt_nil_check(F->t_359)).tparams == NULL))) {
F->result_ = f_assign_code_362(&(*F->lval_358), (*(P857)rt_nil_check(F->t_359)).under, &(*F->v_360), F->c_361);
goto ret_;
}
if ((((rt_r_ichk((*(P857)rt_nil_check(F->t_359)).kind) == (((rt_int)17LL))) && (F->c_361 != NULL)) && ((*(P853)rt_nil_check(F->c_361)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_226(F->t_359)), rt_str(" u_ = ", 6)), (*F->v_360)), rt_str("; if (u_.tag != (", 17)), (((P844)rt_nil_check((*(P853)rt_nil_check(F->c_361)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_226(F->t_359)), rt_str("(&", 2)), (*F->lval_358)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_357(F->t_359)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_226(F->t_359)), rt_str("(&", 2)), (*F->lval_358)), rt_str(", ", 2)), (*F->v_360)), rt_str(");", 2));
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_359)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_358)), rt_str(", ", 2)), (*F->v_360)), rt_str(");", 2));
goto ret_;
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->t_359)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->t_359)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_226(F->t_359)), rt_str("(&", 2)), (*F->lval_358)), rt_str(", ", 2)), (*F->v_360)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(" = ", 3)), f_checked_205(F->t_359, F->c_361, &(*F->v_360))), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_365(P857 t_363, rstr *v_364) {
  struct f_copy_code_365fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_363 = t_363;
F->v_364 = v_364;
if (((rt_r_ichk((*(P857)rt_nil_check(F->t_363)).kind) == (((rt_int)15LL))) && ((*(P857)rt_nil_check(F->t_363)).tparams == NULL))) {
F->result_ = f_copy_code_365((*(P857)rt_nil_check(F->t_363)).under, &(*F->v_364));
goto ret_;
}
if (f_composite_357(F->t_363)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_226(F->t_363)), rt_str("(", 1)), (*F->v_364)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_363)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_364)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->t_363)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->t_363)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_226(F->t_363)), rt_str("(", 1)), (*F->v_364)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_364);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_369(P857 t_366, rstr *a_367, rstr *b_368) {
  struct f_eq_code_369fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_366 = t_366;
F->a_367 = a_367;
F->b_368 = b_368;
if (((rt_r_ichk((*(P857)rt_nil_check(F->t_366)).kind) == (((rt_int)15LL))) && ((*(P857)rt_nil_check(F->t_366)).tparams == NULL))) {
F->result_ = f_eq_code_369((*(P857)rt_nil_check(F->t_366)).under, &(*F->a_367), &(*F->b_368));
goto ret_;
}
if (f_composite_357(F->t_366)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_226(F->t_366)), rt_str("(", 1)), (*F->a_367)), rt_str(", ", 2)), (*F->b_368)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_366)).kind) == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), (*F->a_367)), rt_str(", ", 2)), (*F->b_368)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_366)).kind) == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_367)), rt_str(" == ", 4)), (*F->b_368)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_366)).kind) == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_367)), rt_str(" == ", 4)), (*F->b_368)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_366)).kind) == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_366)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_367)), rt_str(", ", 2)), (*F->b_368)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->t_366)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->t_366)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_226(F->t_366)), rt_str("(", 1)), (*F->a_367)), rt_str(", ", 2)), (*F->b_368)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_367)), rt_str(" == ", 4)), (*F->b_368)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_373(rstr *lval_370, P857 t_371, rstr *v_372) {
  struct f_elem_assign_373fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_370 = lval_370;
F->t_371 = t_371;
F->v_372 = v_372;
F->result_ = f_assign_code_362(&(*F->lval_370), F->t_371, &(*F->v_372), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_376(P855 l_374, rstr *s_375) {
  struct f_seen_name_376fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_374 = l_374;
F->s_375 = s_375;
F->p_1444 = NULL;
F->p_1444 = F->l_374;
while ((F->p_1444 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P855)rt_nil_check(F->p_1444)).s))->all), (*F->s_375))) {
F->result_ = 1;
goto ret_;
}
F->p_1444 = (*(P855)rt_nil_check(F->p_1444)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_377(void) {
  struct f_emit_helpers_377fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_1445 = NULL;
F->t_1446 = NULL;
F->t_1446 = g_all_types_892;
F->done_1447 = NULL;
while ((F->t_1446 != NULL)) {
if ((f_composite_357(F->t_1446) && (!f_seen_name_376(F->done_1447, &(((P844)rt_nil_check((*(P857)rt_nil_check(F->t_1446)).cname))->all))))) {
F->l_1448 = NULL;
F->c_1449 = rt_str_new(((rt_int)(((((P844)rt_nil_check((*(P857)rt_nil_check(F->t_1446)).cname))->all)).len)));
rt_str_assign(&F->c_1449, (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_1446)).cname))->all));
{ R856 *cell1450 = rt_alloc(sizeof(R856));
(*cell1450).s = NULL;
(*cell1450).next = NULL;
F->l_1448 = cell1450;
}
(*(P855)rt_nil_check(F->l_1448)).s = (*(P857)rt_nil_check(F->t_1446)).cname;
(*(P855)rt_nil_check(F->l_1448)).next = F->done_1447;
F->done_1447 = F->l_1448;
f_put_27(g_out_helpers_895, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1449), rt_str("(", 1)), F->c_1449), rt_str(" *d, ", 5)), F->c_1449), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_895, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1449), rt_str(" cp_", 4)), F->c_1449), rt_str("(", 1)), F->c_1449), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_895, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1449), rt_str("(", 1)), F->c_1449), rt_str(" a, ", 4)), F->c_1449), rt_str(" b);", 4)); b_; }));
f_helper_bodies_379(F->t_1446);
}
F->t_1446 = (*(P857)rt_nil_check(F->t_1446)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_379(P857 t_378) {
  struct f_helper_bodies_379fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_378 = t_378;
F->c_1451 = rt_str_new(((rt_int)(((((P844)rt_nil_check((*(P857)rt_nil_check(F->t_378)).cname))->all)).len)));
rt_str_assign(&F->c_1451, (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_378)).cname))->all));
F->b_1452 = NULL;
F->b_1452 = g_out_funcs_898;
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_378)).kind) == (((rt_int)6LL)))) {
F->e_1453 = NULL;
F->e_1453 = (*(P857)rt_nil_check(F->t_378)).elem;
F->sizes_1454 = NULL;
F->sizes_1454 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1455 = NULL;
F->bounds_1455 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1457 = ((rt_int)1LL), hi1458 = rt_r_ichk((*(P857)rt_nil_check(F->t_378)).ndim);
for (rt_int it1459 = lo1457; it1459 <= hi1458; it1459++) {
F->k_1456 = it1459;
F->l_1460 = rt_str_copy(f_dim_lo_234(F->k_1456));
F->h_1461 = rt_str_copy(f_dim_hi_236(F->k_1456));
F->sizes_1454 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->sizes_1454))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1460), rt_str(", d->", 5)), F->h_1461), rt_str(") != RT_R_EXT(s.", 16)), F->l_1460), rt_str(", s.", 4)), F->h_1461), rt_str(")", 1)); b_; }));
F->bounds_1455 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->bounds_1455))->all), rt_str(" || a.", 6)), F->l_1460), rt_str(" != b.", 6)), F->l_1460), rt_str(" || a.", 6)), F->h_1461), rt_str(" != b.", 6)), F->h_1461); b_; }));
}
}
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1451), rt_str("(", 1)), F->c_1451), rt_str(" *d, ", 5)), F->c_1451), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P844)rt_nil_check(F->sizes_1454))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_241(F->t_378, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_373(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1453, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_373(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1453, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1451), rt_str(" cp_", 4)), F->c_1451), rt_str("(", 1)), F->c_1451), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1451), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_226(F->e_1453)), rt_str(") * (size_t)", 12)), f_acnt_241(F->t_378, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_241(F->t_378, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_365(F->e_1453, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1451), rt_str("(", 1)), F->c_1451), rt_str(" a, ", 4)), F->c_1451), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P844)rt_nil_check(F->bounds_1455))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_241(F->t_378, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_369(F->e_1453, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_378)).kind) == (((rt_int)15LL)))) {
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1451), rt_str("(", 1)), F->c_1451), rt_str(" *d, ", 5)), F->c_1451), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_178((*(P857)rt_nil_check(F->t_378)).under) && ((*(P857)rt_nil_check(F->t_378)).elemcons != NULL)) && ((*(P853)rt_nil_check((*(P857)rt_nil_check(F->t_378)).elemcons)).lo != NULL))) {
F->saved_1462 = NULL;
F->saved_1462 = g_psub_908;
F->p_1463 = NULL;
F->p_1463 = (*(P857)rt_nil_check(F->t_378)).tparams;
while ((F->p_1463 != NULL)) {
F->l1_1464 = NULL;
F->l2_1465 = NULL;
{ R856 *cell1466 = rt_alloc(sizeof(R856));
(*cell1466).s = NULL;
(*cell1466).next = NULL;
F->l1_1464 = cell1466;
}
{ R856 *cell1467 = rt_alloc(sizeof(R856));
(*cell1467).s = NULL;
(*cell1467).next = NULL;
F->l2_1465 = cell1467;
}
(*(P855)rt_nil_check(F->l1_1464)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1463)).name))->all))), rt_str("@", 1)); b_; }));
(*(P855)rt_nil_check(F->l2_1465)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1463)).name))->all))); b_; }));
(*(P855)rt_nil_check(F->l1_1464)).next = F->l2_1465;
(*(P855)rt_nil_check(F->l2_1465)).next = g_psub_908;
g_psub_908 = F->l1_1464;
F->p_1463 = (*(P851)rt_nil_check(F->p_1463)).next;
}
if ((rt_r_ichk((*(P857)rt_nil_check((*(P857)rt_nil_check(F->t_378)).under)).kind) == (((rt_int)3LL)))) {
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_303(&(((P844)rt_nil_check((*(P853)rt_nil_check((*(P857)rt_nil_check(F->t_378)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_303(&(((P844)rt_nil_check((*(P853)rt_nil_check((*(P857)rt_nil_check(F->t_378)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_303(&(((P844)rt_nil_check((*(P853)rt_nil_check((*(P857)rt_nil_check(F->t_378)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_303(&(((P844)rt_nil_check((*(P853)rt_nil_check((*(P857)rt_nil_check(F->t_378)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_908 = F->saved_1462;
} else {
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_373(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P857)rt_nil_check(F->t_378)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1451), rt_str(" cp_", 4)), F->c_1451), rt_str("(", 1)), F->c_1451), rt_str(" s) { s.all = ", 14)), f_copy_code_365((*(P857)rt_nil_check(F->t_378)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1451), rt_str("(", 1)), F->c_1451), rt_str(" a, ", 4)), F->c_1451), rt_str(" b) { return ", 13)), f_eq_code_369((*(P857)rt_nil_check(F->t_378)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_378)).kind) == (((rt_int)17LL)))) {
F->f_1468 = NULL;
F->f_1468 = (*(P857)rt_nil_check(F->t_378)).fields;
F->i_1469 = RT_R_IUNDEF;
F->i_1469 = ((rt_int)0LL);
F->cases_as_1470 = NULL;
F->cases_as_1470 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1471 = NULL;
F->cases_cp_1471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1472 = NULL;
F->cases_eq_1472 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1468 != NULL)) {
F->fn_1473 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P844)rt_nil_check((*(P859)rt_nil_check(F->f_1468)).name))->all))));
F->cases_as_1470 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->cases_as_1470))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1469))), rt_str(": d->", 5)), F->fn_1473), rt_str(" = ", 3)), f_copy_code_365((*(P859)rt_nil_check(F->f_1468)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1473); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->cases_cp_1471))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1469))), rt_str(": d.", 4)), F->fn_1473), rt_str(" = ", 3)), f_copy_code_365((*(P859)rt_nil_check(F->f_1468)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1473); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1472 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->cases_eq_1472))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1469))), rt_str(": return ", 9)), f_eq_code_369((*(P859)rt_nil_check(F->f_1468)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1473); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1473); b_; }))), rt_str(";", 1)); b_; }));
F->i_1469 = rt_add(rt_r_ichk(F->i_1469), ((rt_int)1LL));
F->f_1468 = (*(P859)rt_nil_check(F->f_1468)).next;
}
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1451), rt_str("(", 1)), F->c_1451), rt_str(" *d, ", 5)), F->c_1451), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P844)rt_nil_check(F->cases_as_1470))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1451), rt_str(" cp_", 4)), F->c_1451), rt_str("(", 1)), F->c_1451), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1451), rt_str(" d = s; switch (s.tag) {", 24)), (((P844)rt_nil_check(F->cases_cp_1471))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1451), rt_str("(", 1)), F->c_1451), rt_str(" a, ", 4)), F->c_1451), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P844)rt_nil_check(F->cases_eq_1472))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1474 = NULL;
F->f_1474 = (*(P857)rt_nil_check(F->t_378)).fields;
F->conds_1475 = NULL;
F->conds_1475 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1451), rt_str("(", 1)), F->c_1451), rt_str(" *d, ", 5)), F->c_1451), rt_str(" s) {", 5)); b_; }));
while ((F->f_1474 != NULL)) {
F->fn_1476 = rt_str_copy(f_field_c_17(&(((P844)rt_nil_check((*(P859)rt_nil_check(F->f_1474)).name))->all)));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_373(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1476); b_; }), (*(P859)rt_nil_check(F->f_1474)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1476); b_; }))); b_; }));
F->f_1474 = (*(P859)rt_nil_check(F->f_1474)).next;
}
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1451), rt_str(" cp_", 4)), F->c_1451), rt_str("(", 1)), F->c_1451), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1451), rt_str(" d = s;", 7)); b_; }));
F->f_1474 = (*(P857)rt_nil_check(F->t_378)).fields;
while ((F->f_1474 != NULL)) {
F->fn_1477 = rt_str_copy(f_field_c_17(&(((P844)rt_nil_check((*(P859)rt_nil_check(F->f_1474)).name))->all)));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1477), rt_str(" = ", 3)), f_copy_code_365((*(P859)rt_nil_check(F->f_1474)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1477); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1475 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->conds_1475))->all), rt_str(" && ", 4)), f_eq_code_369((*(P859)rt_nil_check(F->f_1474)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1477); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1477); b_; }))); b_; }));
F->f_1474 = (*(P859)rt_nil_check(F->f_1474)).next;
}
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1451), rt_str("(", 1)), F->c_1451), rt_str(" a, ", 4)), F->c_1451), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P844)rt_nil_check(F->conds_1475))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_381(P851 elems_380) {
  struct f_declare_body_381fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_380 = elems_380;
F->e_1478 = NULL;
F->e_1478 = F->elems_380;
while ((F->e_1478 != NULL)) {
if ((rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).kind) == (((rt_int)51LL)))) {
F->g_1479 = NULL;
F->g_1479 = f_new_sym_173((((rt_int)10LL)), (*(P851)rt_nil_check(F->e_1478)).name);
(*(P861)rt_nil_check(F->g_1479)).decl = F->e_1478;
(*(P861)rt_nil_check(F->g_1479)).level = rt_r_ichk(g_cur_level_904);
(*(P861)rt_nil_check(F->g_1479)).owner = g_func_sym_915;
(*(P861)rt_nil_check(F->g_1479)).gctx = g_fctx_905;
f_define_160(F->g_1479, rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).line));
}
F->e_1478 = (*(P851)rt_nil_check(F->e_1478)).next;
}
F->e_1478 = F->elems_380;
while ((F->e_1478 != NULL)) {
if (((rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).kind) == (((rt_int)41LL))) && (rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).flag) == ((rt_int)0LL)))) {
f_manifest_const_383(F->e_1478);
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).kind) == (((rt_int)47LL)))) {
f_gen_capsule_391(F->e_1478);
} else if ((((rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).kind) == (((rt_int)48LL))) && (rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).flag) != ((rt_int)1LL))) && (rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).flag) != ((rt_int)3LL)))) {
f_gen_expose_413(F->e_1478);
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).kind) == (((rt_int)49LL)))) {
F->y_1480 = NULL;
F->y_1480 = f_new_sym_173((((rt_int)7LL)), (*(P851)rt_nil_check(F->e_1478)).name);
(*(P861)rt_nil_check(F->y_1480)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_1478)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_160(F->y_1480, rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).line));
f_put_27(g_out_globals_897, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_1480)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_900, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_1480)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_1478)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).kind) == (((rt_int)42LL)))) {
F->y_1481 = NULL;
F->y_1481 = f_new_sym_173((((rt_int)6LL)), (*(P851)rt_nil_check(F->e_1478)).name);
(*(P861)rt_nil_check(F->y_1481)).st = (*(P851)rt_nil_check(F->e_1478)).a;
(*(P861)rt_nil_check(F->y_1481)).decl = F->e_1478;
f_define_160(F->y_1481, rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).line));
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).kind) == (((rt_int)44LL)))) {
F->y_1482 = NULL;
F->y_1482 = f_new_sym_173((((rt_int)5LL)), (*(P851)rt_nil_check(F->e_1478)).name);
F->t_1483 = NULL;
F->t_1483 = f_new_typ_175((((rt_int)8LL)));
(*(P857)rt_nil_check(F->t_1483)).name = (*(P851)rt_nil_check(F->e_1478)).name;
(*(P857)rt_nil_check(F->t_1483)).decl = F->e_1478;
(*(P861)rt_nil_check(F->y_1482)).t = F->t_1483;
f_define_160(F->y_1482, rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).line));
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).kind) == (((rt_int)43LL)))) {
F->y_1484 = NULL;
F->y_1484 = f_new_sym_173((((rt_int)5LL)), (*(P851)rt_nil_check(F->e_1478)).name);
(*(P861)rt_nil_check(F->y_1484)).st = (*(P851)rt_nil_check(F->e_1478)).a;
(*(P861)rt_nil_check(F->y_1484)).decl = F->e_1478;
f_define_160(F->y_1484, rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).line));
}
F->e_1478 = (*(P851)rt_nil_check(F->e_1478)).next;
}
F->e_1478 = F->elems_380;
while ((F->e_1478 != NULL)) {
if ((((rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).kind) == (((rt_int)50LL))))) {
F->y_1485 = NULL;
f_declare_subprogram_440(F->e_1478);
F->y_1485 = f_lookup_decl_157(F->e_1478);
(*(P861)rt_nil_check(F->y_1485)).home = F->elems_380;
f_normal_function_438(F->e_1478, F->y_1485);
}
F->e_1478 = (*(P851)rt_nil_check(F->e_1478)).next;
}
F->e_1478 = F->elems_380;
{
F->snap_1486 = NULL;
while ((F->e_1478 != NULL)) {
if ((rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).kind) == (((rt_int)51LL)))) {
if ((F->snap_1486 == NULL)) {
{ P865 cell1487 = rt_alloc(sizeof *cell1487);
rt_int pv1488 = (((rt_int)4093LL));
cell1487->p_n = pv1488;
cell1487->all.lo = ((rt_int)0LL); cell1487->all.hi = pv1488;
cell1487->all.lo2 = cell1487->all.hi2 = 1;
cell1487->all.p = rt_alloc(sizeof(P861) * (size_t)(RT_CNT(cell1487->all)) + 1);
for (rt_int i1489 = 0; i1489 < (RT_CNT(cell1487->all)); i1489++) {
cell1487->all.p[i1489] = NULL;
}
F->snap_1486 = cell1487;
}
{ rt_int lo1491 = ((rt_int)0LL), hi1492 = (((rt_int)4093LL));
for (rt_int it1493 = lo1491; it1493 <= hi1492; it1493++) {
F->i_1490 = it1493;
(((P865)rt_nil_check(F->snap_1486))->all).p[(rt_index(F->i_1490, (((P865)rt_nil_check(F->snap_1486))->all).lo, (((P865)rt_nil_check(F->snap_1486))->all).hi) - (((P865)rt_nil_check(F->snap_1486))->all).lo)] = ({ A867 b_ = (((P865)rt_nil_check(g_table_887))->all); b_.p[(rt_index(F->i_1490, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1494 = NULL;
F->g_1494 = f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_1478)).name))->all));
(*(P861)rt_nil_check(F->g_1494)).env = F->snap_1486;
}
}
F->e_1478 = (*(P851)rt_nil_check(F->e_1478)).next;
}
}
F->e_1478 = F->elems_380;
while ((F->e_1478 != NULL)) {
if (((rt_r_ichk((*(P851)rt_nil_check(F->e_1478)).kind) == (((rt_int)45LL))) && (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_1478)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_1478)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1495 = NULL;
F->y_1495 = f_lookup_decl_157(F->e_1478);
if (((((F->y_1495 != NULL) && ((*(P861)rt_nil_check(F->y_1495)).params != NULL)) && ((*(P863)rt_nil_check((*(P861)rt_nil_check(F->y_1495)).params)).next == NULL)) && ((rt_r_ichk((*(P857)rt_nil_check((*(P863)rt_nil_check((*(P861)rt_nil_check(F->y_1495)).params)).t)).kind) == (((rt_int)15LL))) || (rt_r_ichk((*(P857)rt_nil_check((*(P863)rt_nil_check((*(P861)rt_nil_check(F->y_1495)).params)).t)).kind) == (((rt_int)8LL)))))) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_1478)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P857)rt_nil_check((*(P863)rt_nil_check((*(P861)rt_nil_check(F->y_1495)).params)).t)).initp = F->y_1495;
} else {
(*(P857)rt_nil_check((*(P863)rt_nil_check((*(P861)rt_nil_check(F->y_1495)).params)).t)).finalp = F->y_1495;
}
}
}
F->e_1478 = (*(P851)rt_nil_check(F->e_1478)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_383(P851 d_382) {
  struct f_manifest_const_383fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_382 = d_382;
F->ok_1496 = RT_R_EUNDEF;
F->v_1497 = NULL;
F->y_1498 = NULL;
F->t_1499 = NULL;
F->ctext_1500 = NULL;
if (((*(P851)rt_nil_check(F->d_382)).a != NULL)) {
if (((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->d_382)).a)).kind) != (((rt_int)70LL))) || ((*(P851)rt_nil_check((*(P851)rt_nil_check(F->d_382)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1497 = f_meval_343((*(P851)rt_nil_check(F->d_382)).b, &F->ok_1496);
if ((!rt_r_echk(F->ok_1496))) {
goto ret_;
}
{
F->saved_1501 = NULL;
F->saved_1501 = g_code_901;
g_code_901 = f_new_buffer_24();
g_trial_929 = rt_add(rt_r_ichk(g_trial_929), ((rt_int)1LL));
{ rt_frame xf1502;
if (RT_TRY(xf1502)) {
F->ctext_1500 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_680((*(P851)rt_nil_check(F->d_382)).b, NULL, &F->t_1499)), rt_str(")", 1)); b_; }));
RT_POP(xf1502);
} else {
RT_POP(xf1502);
int x1503 = rt_xcur;
if (0 || x1503 == ex_compile_error_1) {
F->ok_1496 = 0;
} else {
rt_raise(x1503);
}
}
}
g_trial_929 = rt_sub(rt_r_ichk(g_trial_929), ((rt_int)1LL));
F->ok_1496 = (rt_r_echk(F->ok_1496) && ((*(P874)rt_nil_check(g_code_901)).head == NULL));
g_code_901 = F->saved_1501;
}
if (((!rt_r_echk(F->ok_1496)) || (((*(P851)rt_nil_check(F->d_382)).a != NULL) && (rt_r_ichk((*(P857)rt_nil_check(F->t_1499)).kind) != (((rt_int)1LL)))))) {
goto ret_;
}
if ((rt_r_ichk((*(P870)rt_nil_check(F->v_1497)).kind) == (((rt_int)4LL)))) {
(*(P870)rt_nil_check(F->v_1497)).t = F->t_1499;
(*(P870)rt_nil_check(F->v_1497)).i = f_lit_index_254((*(P857)rt_nil_check(f_base_of_215(F->t_1499))).lits, &(((P844)rt_nil_check((*(P870)rt_nil_check(F->v_1497)).s))->all));
}
(*(P851)rt_nil_check(F->d_382)).flag = ((rt_int)1LL);
F->y_1498 = f_new_sym_173((((rt_int)2LL)), (*(P851)rt_nil_check(F->d_382)).name);
(*(P861)rt_nil_check(F->y_1498)).t = F->t_1499;
(*(P861)rt_nil_check(F->y_1498)).c = f_new_cons_176();
(*(P861)rt_nil_check(F->y_1498)).mv = F->v_1497;
if ((rt_r_ichk((*(P870)rt_nil_check(F->v_1497)).kind) == (((rt_int)1LL)))) {
(*(P861)rt_nil_check(F->y_1498)).mvalue = rt_r_ichk((*(P870)rt_nil_check(F->v_1497)).i);
(*(P861)rt_nil_check(F->y_1498)).hasmv = 1;
}
(*(P861)rt_nil_check(F->y_1498)).ro_flag = 1;
(*(P861)rt_nil_check(F->y_1498)).access = F->ctext_1500;
f_define_160(F->y_1498, rt_r_ichk((*(P851)rt_nil_check(F->d_382)).line));
ret_:
  RT_FPOP();
  return;
}

static int f_exported_387(P851 d_384, rstr *name_385, int *ro_386) {
  struct f_exported_387fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_384 = d_384;
F->name_385 = name_385;
F->ro_386 = ro_386;
F->ro_386v = *F->ro_386;
F->p_1504 = NULL;
F->p_1504 = (*(P851)rt_nil_check(F->d_384)).a;
F->ro_386v = 0;
if ((rt_r_ichk((*(P851)rt_nil_check(F->d_384)).ival) == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1504 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1504)).name))->all), (*F->name_385))) {
F->ro_386v = (rt_r_ichk((*(P851)rt_nil_check(F->p_1504)).ival) == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1504 = (*(P851)rt_nil_check(F->p_1504)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ro_386v)) (*F->ro_386) = F->ro_386v;
  RT_FPOP();
  return F->result_;
}

static P861 f_copy_sym_389(P861 y_388) {
  struct f_copy_sym_389fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_388 = y_388;
F->z_1505 = NULL;
{ R862 *cell1506 = rt_alloc(sizeof(R862));
(*cell1506).name = NULL;
(*cell1506).t = NULL;
(*cell1506).c = NULL;
(*cell1506).access = NULL;
(*cell1506).cname = NULL;
(*cell1506).st = NULL;
(*cell1506).decl = NULL;
(*cell1506).params = NULL;
(*cell1506).result = NULL;
(*cell1506).members = NULL;
(*cell1506).mnext = NULL;
(*cell1506).binds = NULL;
(*cell1506).insts = NULL;
(*cell1506).env = NULL;
(*cell1506).chain = NULL;
(*cell1506).stack = NULL;
(*cell1506).owner = NULL;
(*cell1506).gctx = NULL;
(*cell1506).mv = NULL;
(*cell1506).reqs = NULL;
(*cell1506).home = NULL;
(*cell1506).capn = NULL;
(*cell1506).tbinds = NULL;
F->z_1505 = cell1506;
}
(*(P861)rt_nil_check(F->z_1505)).kind = rt_r_ichk((*(P861)rt_nil_check(F->y_388)).kind);
(*(P861)rt_nil_check(F->z_1505)).name = (*(P861)rt_nil_check(F->y_388)).name;
(*(P861)rt_nil_check(F->z_1505)).t = (*(P861)rt_nil_check(F->y_388)).t;
(*(P861)rt_nil_check(F->z_1505)).c = (*(P861)rt_nil_check(F->y_388)).c;
(*(P861)rt_nil_check(F->z_1505)).access = (*(P861)rt_nil_check(F->y_388)).access;
(*(P861)rt_nil_check(F->z_1505)).cname = (*(P861)rt_nil_check(F->y_388)).cname;
(*(P861)rt_nil_check(F->z_1505)).ro_flag = rt_r_echk((*(P861)rt_nil_check(F->y_388)).ro_flag);
(*(P861)rt_nil_check(F->z_1505)).mvalue = rt_r_ichk((*(P861)rt_nil_check(F->y_388)).mvalue);
(*(P861)rt_nil_check(F->z_1505)).hasmv = rt_r_echk((*(P861)rt_nil_check(F->y_388)).hasmv);
(*(P861)rt_nil_check(F->z_1505)).st = (*(P861)rt_nil_check(F->y_388)).st;
(*(P861)rt_nil_check(F->z_1505)).decl = (*(P861)rt_nil_check(F->y_388)).decl;
(*(P861)rt_nil_check(F->z_1505)).params = (*(P861)rt_nil_check(F->y_388)).params;
(*(P861)rt_nil_check(F->z_1505)).result = (*(P861)rt_nil_check(F->y_388)).result;
(*(P861)rt_nil_check(F->z_1505)).level = rt_r_ichk((*(P861)rt_nil_check(F->y_388)).level);
(*(P861)rt_nil_check(F->z_1505)).byref = rt_r_echk((*(P861)rt_nil_check(F->y_388)).byref);
(*(P861)rt_nil_check(F->z_1505)).members = (*(P861)rt_nil_check(F->y_388)).members;
(*(P861)rt_nil_check(F->z_1505)).env = (*(P861)rt_nil_check(F->y_388)).env;
F->result_ = F->z_1505;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_391(P851 d_390) {
  struct f_gen_capsule_391fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_390 = d_390;
F->y_1507 = NULL;
F->y_1507 = f_new_sym_173((((rt_int)8LL)), (*(P851)rt_nil_check(F->d_390)).name);
F->saved_1508 = NULL;
F->saved_1508 = g_suppress_921;
F->p_1509 = NULL;
F->p_1509 = (*(P851)rt_nil_check(F->d_390)).b;
F->tail_1510 = NULL;
(*(P861)rt_nil_check(F->y_1507)).decl = F->d_390;
while ((F->p_1509 != NULL)) {
F->pm_1511 = NULL;
{ R864 *cell1512 = rt_alloc(sizeof(R864));
(*cell1512).name = NULL;
(*cell1512).t = NULL;
(*cell1512).c = NULL;
(*cell1512).cfield = NULL;
(*cell1512).next = NULL;
F->pm_1511 = cell1512;
}
(*(P863)rt_nil_check(F->pm_1511)).name = (*(P851)rt_nil_check(F->p_1509)).name;
(*(P863)rt_nil_check(F->pm_1511)).mode = rt_r_ichk((*(P851)rt_nil_check(F->p_1509)).ival);
(*(P863)rt_nil_check(F->pm_1511)).t = f_resolve_subtype_257((*(P851)rt_nil_check(F->p_1509)).a, &(*(P863)rt_nil_check(F->pm_1511)).c);
if ((F->tail_1510 == NULL)) {
(*(P861)rt_nil_check(F->y_1507)).params = F->pm_1511;
} else {
(*(P863)rt_nil_check(F->tail_1510)).next = F->pm_1511;
}
F->tail_1510 = F->pm_1511;
F->p_1509 = (*(P851)rt_nil_check(F->p_1509)).next;
}
if (((*(P851)rt_nil_check(F->d_390)).b == NULL)) {
g_suppress_921 = f_suppressing_447((*(P851)rt_nil_check(F->d_390)).prags);
f_elaborate_capsule_400(F->d_390, F->y_1507, NULL, F->d_390);
g_suppress_921 = F->saved_1508;
}
f_define_160(F->y_1507, rt_r_ichk((*(P851)rt_nil_check(F->d_390)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_395(P851 d_392, P851 args_393, rt_int line_394) {
  struct f_capsule_params_395fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_392 = d_392;
F->args_393 = args_393;
F->line_394 = line_394;
F->p_1513 = NULL;
F->p_1513 = (*(P851)rt_nil_check(F->d_392)).b;
F->a_1514 = NULL;
F->a_1514 = F->args_393;
F->t_1515 = NULL;
F->vt_1516 = NULL;
F->c_1517 = NULL;
while (((F->p_1513 != NULL) && (F->a_1514 != NULL))) {
F->t_1515 = f_resolve_subtype_257((*(P851)rt_nil_check(F->p_1513)).a, &F->c_1517);
if ((rt_r_ichk((*(P851)rt_nil_check(F->p_1513)).ival) == (((rt_int)3LL)))) {
f_fail_23(F->line_394, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if (((rt_r_ichk((*(P851)rt_nil_check(F->p_1513)).ival) == (((rt_int)2LL))) || (rt_r_ichk((*(P851)rt_nil_check(F->p_1513)).ival) == (((rt_int)4LL))))) {
F->lv_1518 = NULL;
F->lc_1519 = NULL;
F->ro_1520 = RT_R_EUNDEF;
F->y_1521 = NULL;
F->y_1521 = f_new_sym_173((((rt_int)1LL)), (*(P851)rt_nil_check(F->p_1513)).name);
f_lvalue_649(F->a_1514, &F->lv_1518, &F->vt_1516, &F->lc_1519, &F->ro_1520);
f_check_type_224(F->vt_1516, F->t_1515, F->line_394);
if ((rt_r_echk(F->ro_1520) && (rt_r_ichk((*(P851)rt_nil_check(F->p_1513)).ival) == (((rt_int)2LL))))) {
f_fail_23(F->line_394, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1513)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (rt_r_echk(g_in_func_903)) {
F->f_1522 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1513)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_902, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_226(F->t_1515)), rt_str(" *", 2)), F->f_1522), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1522), rt_str(" = &", 4)), (((P844)rt_nil_check(F->lv_1518))->all)), rt_str(";", 1)); b_; }));
(*(P861)rt_nil_check(F->y_1521)).level = rt_r_ichk(g_cur_level_904);
(*(P861)rt_nil_check(F->y_1521)).access = f_mk_3(&F->f_1522);
(*(P861)rt_nil_check(F->y_1521)).byref = 1;
} else {
F->g_1523 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1513)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_897, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_226(F->t_1515)), rt_str(" *", 2)), F->g_1523), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_911, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1523), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1523, rt_str(" = &", 4)), (((P844)rt_nil_check(F->lv_1518))->all)), rt_str(";", 1)); b_; }));
(*(P861)rt_nil_check(F->y_1521)).level = ((rt_int)0LL);
(*(P861)rt_nil_check(F->y_1521)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1523), rt_str(")", 1)); b_; }));
}
(*(P861)rt_nil_check(F->y_1521)).t = F->t_1515;
(*(P861)rt_nil_check(F->y_1521)).c = F->lc_1519;
(*(P861)rt_nil_check(F->y_1521)).ro_flag = (rt_r_ichk((*(P851)rt_nil_check(F->p_1513)).ival) == (((rt_int)4LL)));
f_define_160(F->y_1521, F->line_394);
} else {
F->y_1524 = NULL;
F->y_1524 = f_new_sym_173((((rt_int)2LL)), (*(P851)rt_nil_check(F->p_1513)).name);
F->v_1525 = rt_str_copy(f_gexpr_680(F->a_1514, F->t_1515, &F->vt_1516));
f_check_type_224(F->vt_1516, F->t_1515, F->line_394);
{
F->access_1526 = rt_str_copy(f_storage_456(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1513)).name))->all), F->t_1515));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1526, rt_str(" = ", 3)), f_copy_code_365(F->t_1515, &F->v_1525)), rt_str(";", 1)); b_; }));
f_bind_459(F->y_1524, &F->access_1526);
}
(*(P861)rt_nil_check(F->y_1524)).t = F->t_1515;
(*(P861)rt_nil_check(F->y_1524)).c = F->c_1517;
(*(P861)rt_nil_check(F->y_1524)).ro_flag = 1;
f_define_160(F->y_1524, F->line_394);
}
F->p_1513 = (*(P851)rt_nil_check(F->p_1513)).next;
F->a_1514 = (*(P851)rt_nil_check(F->a_1514)).next;
}
if (((F->p_1513 != NULL) || (F->a_1514 != NULL))) {
f_fail_23(F->line_394, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P844)rt_nil_check((*(P851)rt_nil_check(F->d_392)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_400(P851 d_396, P861 y_397, P851 args_398, P851 owner_399) {
  struct f_elaborate_capsule_400fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_396 = d_396;
F->y_397 = y_397;
F->args_398 = args_398;
F->owner_399 = owner_399;
F->cr_1527 = NULL;
F->ctx_1528 = NULL;
F->saved_gotos_1529 = NULL;
F->m_1530 = NULL;
F->p_1531 = NULL;
F->p_1531 = (*(P851)rt_nil_check(F->d_396)).a;
F->ro_1532 = RT_R_EUNDEF;
{ R879 *cell1533 = rt_alloc(sizeof(R879));
(*cell1533).d = NULL;
(*cell1533).next = NULL;
F->cr_1527 = cell1533;
}
(*(P878)rt_nil_check(F->cr_1527)).d = F->d_396;
(*(P878)rt_nil_check(F->cr_1527)).next = g_caps_906;
g_caps_906 = F->cr_1527;
f_open_scope_169();
(*(P878)rt_nil_check(F->cr_1527)).depth = rt_r_ichk(g_depth_890);
if (((*(P851)rt_nil_check(F->d_396)).b != NULL)) {
f_capsule_params_395(F->d_396, F->args_398, rt_r_ichk((*(P851)rt_nil_check(F->owner_399)).line));
}
{ R869 *cell1534 = rt_alloc(sizeof(R869));
(*cell1534).imps = NULL;
(*cell1534).next = NULL;
F->ctx_1528 = cell1534;
}
(*(P868)rt_nil_check(F->ctx_1528)).depth = rt_r_ichk(g_depth_890);
(*(P868)rt_nil_check(F->ctx_1528)).imps = (*(P851)rt_nil_check(F->d_396)).d;
(*(P868)rt_nil_check(F->ctx_1528)).all_imp = (rt_r_ichk((*(P851)rt_nil_check(F->d_396)).flag) >= ((rt_int)2LL));
(*(P868)rt_nil_check(F->ctx_1528)).next = g_fctx_905;
g_fctx_905 = F->ctx_1528;
F->saved_gotos_1529 = g_gotos_925;
g_gotos_925 = NULL;
f_declare_labels_482((*(P851)rt_nil_check(F->d_396)).c);
f_declare_body_381((*(P851)rt_nil_check(F->d_396)).c);
f_capsule_body_489((*(P851)rt_nil_check(F->d_396)).c);
{
F->w_1535 = NULL;
{ R881 *cell1536 = rt_alloc(sizeof(R881));
(*cell1536).d = NULL;
(*cell1536).w = NULL;
(*cell1536).next = NULL;
F->w_1535 = cell1536;
}
(*(P880)rt_nil_check(F->w_1535)).d = F->owner_399;
(*(P880)rt_nil_check(F->w_1535)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_476((*(P851)rt_nil_check(F->d_396)).c); b_; }));
(*(P880)rt_nil_check(F->w_1535)).next = g_cap_waits_907;
g_cap_waits_907 = F->w_1535;
}
g_fctx_905 = (*(P868)rt_nil_check(g_fctx_905)).next;
F->m_1530 = g_scope_stack_891;
while (((F->m_1530 != NULL) && (rt_r_ichk((*(P861)rt_nil_check(F->m_1530)).depth) == rt_r_ichk(g_depth_890)))) {
if (((((rt_r_ichk((*(P861)rt_nil_check(F->m_1530)).kind) == (((rt_int)5LL))) && ((*(P861)rt_nil_check(F->m_1530)).t == NULL)) && ((*(P861)rt_nil_check(F->m_1530)).decl != NULL)) && (rt_r_ichk((*(P851)rt_nil_check((*(P861)rt_nil_check(F->m_1530)).decl)).kind) == (((rt_int)43LL))))) {
(*(P861)rt_nil_check(F->m_1530)).t = f_new_type_307(F->m_1530, f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P851)rt_nil_check(F->d_396)).line)), &(*(P861)rt_nil_check(F->m_1530)).c);
} else if ((((rt_r_ichk((*(P861)rt_nil_check(F->m_1530)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P861)rt_nil_check(F->m_1530)).kind) == (((rt_int)6LL)))) && ((*(P861)rt_nil_check(F->m_1530)).t == NULL))) {
(*(P861)rt_nil_check(F->m_1530)).t = f_resolve_subtype_257((*(P861)rt_nil_check(F->m_1530)).st, &(*(P861)rt_nil_check(F->m_1530)).c);
} else if (((rt_r_ichk((*(P861)rt_nil_check(F->m_1530)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P857)rt_nil_check((*(P861)rt_nil_check(F->m_1530)).t)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_415((*(P861)rt_nil_check(F->m_1530)).t);
}
F->m_1530 = (*(P861)rt_nil_check(F->m_1530)).stack;
}
F->m_1530 = g_scope_stack_891;
while (((F->m_1530 != NULL) && (rt_r_ichk((*(P861)rt_nil_check(F->m_1530)).depth) == rt_r_ichk(g_depth_890)))) {
if (f_exported_387(F->d_396, &(((P844)rt_nil_check((*(P861)rt_nil_check(F->m_1530)).name))->all), &F->ro_1532)) {
F->z_1537 = NULL;
F->z_1537 = f_copy_sym_389(F->m_1530);
if (rt_r_echk(F->ro_1532)) {
(*(P861)rt_nil_check(F->z_1537)).ro_flag = 1;
}
(*(P861)rt_nil_check(F->z_1537)).mnext = (*(P861)rt_nil_check(F->y_397)).members;
(*(P861)rt_nil_check(F->y_397)).members = F->z_1537;
}
F->m_1530 = (*(P861)rt_nil_check(F->m_1530)).stack;
}
while ((F->p_1531 != NULL)) {
if ((((!rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1531)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1531)).name))->all), rt_str("=", 1)))) && ((f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1531)).name))->all)) == NULL) || ((*(P861)rt_nil_check(f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1531)).name))->all)))).depth != rt_r_ichk(g_depth_890))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->d_396)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1531)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P844)rt_nil_check((*(P851)rt_nil_check(F->d_396)).name))->all)); b_; }));
}
F->p_1531 = (*(P851)rt_nil_check(F->p_1531)).next;
}
f_close_scope_170();
g_caps_906 = (*(P878)rt_nil_check(g_caps_906)).next;
g_gotos_925 = F->saved_gotos_1529;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_403(P851 d_401, rstr *op_402) {
  struct f_exports_op_403fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_401 = d_401;
F->op_402 = op_402;
F->p_1538 = NULL;
if ((F->d_401 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1538 = (*(P851)rt_nil_check(F->d_401)).a;
while ((F->p_1538 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1538)).name))->all), (*F->op_402))) {
F->result_ = 1;
goto ret_;
}
F->p_1538 = (*(P851)rt_nil_check(F->p_1538)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P844 f_renamed_406(P851 d_404, P861 z_405) {
  struct f_renamed_406fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_404 = d_404;
F->z_405 = z_405;
F->r_1539 = NULL;
F->r_1539 = (*(P851)rt_nil_check(F->d_404)).c;
while ((F->r_1539 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->r_1539)).name))->all), (((P844)rt_nil_check((*(P861)rt_nil_check(F->z_405)).name))->all))) {
F->result_ = (*(P851)rt_nil_check((*(P851)rt_nil_check(F->r_1539)).a)).name;
goto ret_;
}
F->r_1539 = (*(P851)rt_nil_check(F->r_1539)).next;
}
F->result_ = (*(P861)rt_nil_check(F->z_405)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P861 f_pick_capsule_408(P851 d_407) {
  struct f_pick_capsule_408fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_407 = d_407;
F->y_1540 = NULL;
F->y_1540 = ({ A867 b_ = (((P865)rt_nil_check(g_table_887))->all); b_.p[(rt_index(f_hash_153(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->d_407)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
F->first_1541 = NULL;
F->fit_1542 = NULL;
F->n_1543 = RT_R_IUNDEF;
F->n_1543 = ((rt_int)0LL);
while ((F->y_1540 != NULL)) {
if ((rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_1540)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->d_407)).name))->all)) && (rt_r_ichk((*(P861)rt_nil_check(F->y_1540)).kind) == (((rt_int)8LL))))) {
F->n_1543 = rt_add(rt_r_ichk(F->n_1543), ((rt_int)1LL));
if ((F->first_1541 == NULL)) {
F->first_1541 = F->y_1540;
}
if (((F->fit_1542 == NULL) && f_fits_778(F->y_1540, (*(P851)rt_nil_check(F->d_407)).b))) {
F->fit_1542 = F->y_1540;
}
}
F->y_1540 = (*(P861)rt_nil_check(F->y_1540)).chain;
}
if ((rt_r_ichk(F->n_1543) > ((rt_int)1LL))) {
if ((F->fit_1542 == NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->d_407)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no capsule ", 11), (((P844)rt_nil_check((*(P851)rt_nil_check(F->d_407)).name))->all)), rt_str(" has formals that fit these actual parameters", 45)); b_; }));
}
F->result_ = F->fit_1542;
goto ret_;
}
if ((F->first_1541 == NULL)) {
F->result_ = f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->d_407)).name))->all));
goto ret_;
}
F->result_ = F->first_1541;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P861 f_capsule_instance_411(P861 g_409, P851 d_410) {
  struct f_capsule_instance_411fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_409 = g_409;
F->d_410 = d_410;
F->gd_1544 = NULL;
F->gd_1544 = (*(P861)rt_nil_check(F->g_409)).decl;
F->pat_1545 = NULL;
F->pat_1545 = (*(P851)rt_nil_check(F->gd_1544)).b;
F->binds_1546 = NULL;
F->binds_1546 = f_need_binds_607(F->gd_1544, f_tt_binds_586(F->gd_1544, (*(P851)rt_nil_check(F->pat_1545)).e, (*(P851)rt_nil_check(F->d_410)).e, rt_r_ichk((*(P851)rt_nil_check(F->d_410)).line)), rt_r_ichk((*(P851)rt_nil_check(F->d_410)).line));
F->inst_1547 = NULL;
F->inst_1547 = (*(P861)rt_nil_check(F->g_409)).insts;
F->saved_env_1548 = NULL;
F->saved_env_1548 = g_genv_888;
F->saved_gdepth_1549 = RT_R_IUNDEF;
F->saved_gdepth_1549 = rt_r_ichk(g_gdepth_920);
if (((rt_r_ichk((*(P851)rt_nil_check(F->d_410)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P851)rt_nil_check(F->d_410)).flag) != ((rt_int)3LL)))) {
while ((F->inst_1547 != NULL)) {
if (f_same_binds_578((*(P861)rt_nil_check(F->inst_1547)).tbinds, F->binds_1546)) {
F->result_ = F->inst_1547;
goto ret_;
}
F->inst_1547 = (*(P861)rt_nil_check(F->inst_1547)).insts;
}
}
F->inst_1547 = f_new_sym_173((((rt_int)8LL)), (*(P851)rt_nil_check(F->pat_1545)).name);
(*(P861)rt_nil_check(F->inst_1547)).decl = F->pat_1545;
(*(P861)rt_nil_check(F->inst_1547)).tbinds = F->binds_1546;
f_open_scope_169();
{
F->b_1550 = NULL;
F->b_1550 = F->binds_1546;
while ((F->b_1550 != NULL)) {
f_define_160(F->b_1550, rt_r_ichk((*(P851)rt_nil_check(F->d_410)).line));
F->b_1550 = (*(P861)rt_nil_check(F->b_1550)).mnext;
}
}
g_genv_888 = (*(P861)rt_nil_check(F->g_409)).env;
g_gdepth_920 = rt_r_ichk(g_depth_890);
f_elaborate_capsule_400(F->pat_1545, F->inst_1547, (*(P851)rt_nil_check(F->d_410)).b, F->d_410);
g_genv_888 = F->saved_env_1548;
g_gdepth_920 = rt_r_ichk(F->saved_gdepth_1549);
f_close_scope_170();
if (((rt_r_ichk((*(P851)rt_nil_check(F->d_410)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P851)rt_nil_check(F->d_410)).flag) != ((rt_int)3LL)))) {
(*(P861)rt_nil_check(F->inst_1547)).insts = (*(P861)rt_nil_check(F->g_409)).insts;
(*(P861)rt_nil_check(F->g_409)).insts = F->inst_1547;
}
F->result_ = F->inst_1547;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_expose_413(P851 d_412) {
  struct f_gen_expose_413fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_412 = d_412;
F->y_1551 = NULL;
F->y_1551 = f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->d_412)).name))->all));
F->m_1552 = NULL;
F->p_1553 = NULL;
F->p_1553 = (*(P851)rt_nil_check(F->d_412)).a;
F->r_1554 = NULL;
F->r_1554 = (*(P851)rt_nil_check(F->d_412)).c;
if ((((F->y_1551 != NULL) && (rt_r_ichk((*(P861)rt_nil_check(F->y_1551)).kind) == (((rt_int)10LL)))) && (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_1551)).decl)).b)).kind) == (((rt_int)47LL))))) {
F->y_1551 = f_capsule_instance_411(F->y_1551, F->d_412);
} else {
F->y_1551 = f_pick_capsule_408(F->d_412);
if (((F->y_1551 == NULL) || (rt_r_ichk((*(P861)rt_nil_check(F->y_1551)).kind) != (((rt_int)8LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->d_412)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->d_412)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
if (((*(P851)rt_nil_check(F->d_412)).e != NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->d_412)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->d_412)).name))->all), rt_str(" is not a generic capsule", 25)); b_; }));
}
}
if ((((*(P861)rt_nil_check(F->y_1551)).tbinds != NULL) || (((*(P861)rt_nil_check(F->y_1551)).decl != NULL) && ((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_1551)).decl)).e != NULL)))) {
} else if (((rt_r_ichk((*(P851)rt_nil_check(F->d_412)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P851)rt_nil_check(F->d_412)).flag) == ((rt_int)3LL)))) {
F->inst_1555 = NULL;
F->inst_1555 = f_new_sym_173((((rt_int)8LL)), (*(P861)rt_nil_check(F->y_1551)).name);
(*(P861)rt_nil_check(F->inst_1555)).decl = (*(P861)rt_nil_check(F->y_1551)).decl;
f_elaborate_capsule_400((*(P861)rt_nil_check(F->y_1551)).decl, F->inst_1555, (*(P851)rt_nil_check(F->d_412)).b, F->d_412);
F->y_1551 = F->inst_1555;
} else if ((((*(P861)rt_nil_check(F->y_1551)).decl != NULL) && ((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_1551)).decl)).b != NULL))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->d_412)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P844)rt_nil_check((*(P851)rt_nil_check(F->d_412)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P851)rt_nil_check(F->d_412)).b != NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->d_412)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1554 != NULL)) {
F->found_1556 = RT_R_EUNDEF;
F->found_1556 = 0;
F->m_1552 = (*(P861)rt_nil_check(F->y_1551)).members;
while ((F->m_1552 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->m_1552)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->r_1554)).name))->all))) {
F->found_1556 = 1;
}
F->m_1552 = (*(P861)rt_nil_check(F->m_1552)).mnext;
}
if ((!rt_r_echk(F->found_1556))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->d_412)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->r_1554)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P844)rt_nil_check((*(P851)rt_nil_check(F->d_412)).name))->all)); b_; }));
}
F->r_1554 = (*(P851)rt_nil_check(F->r_1554)).next;
}
if ((rt_r_ichk((*(P851)rt_nil_check(F->d_412)).ival) == ((rt_int)1LL))) {
F->m_1552 = (*(P861)rt_nil_check(F->y_1551)).members;
while ((F->m_1552 != NULL)) {
F->z_1557 = NULL;
F->z_1557 = f_copy_sym_389(F->m_1552);
(*(P861)rt_nil_check(F->z_1557)).name = f_renamed_406(F->d_412, F->m_1552);
f_define_160(F->z_1557, rt_r_ichk((*(P851)rt_nil_check(F->d_412)).line));
F->m_1552 = (*(P861)rt_nil_check(F->m_1552)).mnext;
}
goto ret_;
}
while ((F->p_1553 != NULL)) {
F->found_1558 = RT_R_EUNDEF;
F->found_1558 = 0;
F->m_1552 = (*(P861)rt_nil_check(F->y_1551)).members;
while ((F->m_1552 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->m_1552)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1553)).name))->all))) {
F->z_1559 = NULL;
F->z_1559 = f_copy_sym_389(F->m_1552);
if ((rt_r_ichk((*(P851)rt_nil_check(F->p_1553)).ival) == ((rt_int)1LL))) {
(*(P861)rt_nil_check(F->z_1559)).ro_flag = 1;
}
(*(P861)rt_nil_check(F->z_1559)).name = f_renamed_406(F->d_412, F->m_1552);
f_define_160(F->z_1559, rt_r_ichk((*(P851)rt_nil_check(F->d_412)).line));
F->found_1558 = 1;
}
F->m_1552 = (*(P861)rt_nil_check(F->m_1552)).mnext;
}
if ((!rt_r_echk(F->found_1558))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->d_412)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1553)).name))->all), rt_str(" is not exported by ", 20)), (((P844)rt_nil_check((*(P851)rt_nil_check(F->d_412)).name))->all)); b_; }));
}
F->p_1553 = (*(P851)rt_nil_check(F->p_1553)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_415(P857 t_414) {
  struct f_finish_ptr_415fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_414 = t_414;
F->d_1560 = NULL;
F->d_1560 = (*(P857)rt_nil_check(F->t_414)).decl;
F->p_1561 = NULL;
F->c_1562 = NULL;
F->dummy_1563 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1563, rt_str(" ", 1));
if (((*(P857)rt_nil_check(F->t_414)).target != NULL)) {
goto ret_;
}
f_open_scope_169();
{ rt_int lo1565 = ((rt_int)1LL), hi1566 = ((rt_int)2LL);
for (rt_int it1567 = lo1565; it1567 <= hi1566; it1567++) {
F->pass_1564 = it1567;
if ((F->pass_1564 == ((rt_int)1LL))) {
F->p_1561 = (*(P851)rt_nil_check(F->d_1560)).d;
} else {
F->p_1561 = (*(P851)rt_nil_check(F->d_1560)).b;
}
while ((F->p_1561 != NULL)) {
F->y_1568 = NULL;
F->y_1568 = f_new_sym_173((((rt_int)2LL)), (*(P851)rt_nil_check(F->p_1561)).name);
F->pc_1569 = NULL;
(*(P861)rt_nil_check(F->y_1568)).t = f_resolve_subtype_257((*(P851)rt_nil_check(F->p_1561)).a, &F->pc_1569);
(*(P861)rt_nil_check(F->y_1568)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_160(F->y_1568, rt_r_ichk((*(P851)rt_nil_check(F->d_1560)).line));
F->p_1561 = (*(P851)rt_nil_check(F->p_1561)).next;
}
}
}
(*(P857)rt_nil_check(F->t_414)).target = f_resolve_subtype_257((*(P851)rt_nil_check(F->d_1560)).a, &F->c_1562);
f_close_scope_170();
(*rt_str_at(&F->dummy_1563, ((rt_int)1LL))) = rt_str_get(f_ctype_226(F->t_414), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1563, ((rt_int)1LL))) = rt_str_get(f_ctype_226((*(P857)rt_nil_check(F->t_414)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P851 f_ptr_args_417(P853 c_416) {
  struct f_ptr_args_417fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_416 = c_416;
if ((F->c_416 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P853)rt_nil_check(F->c_416)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_422(P851 formals_418, P851 actuals_419, rstr *cell_420, rt_int line_421) {
  struct f_bind_ptr_params_422fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_418 = formals_418;
F->actuals_419 = actuals_419;
F->cell_420 = cell_420;
F->line_421 = line_421;
F->p_1570 = NULL;
F->p_1570 = F->formals_418;
F->a_1571 = NULL;
F->a_1571 = F->actuals_419;
F->vt_1572 = NULL;
if ((f_list_len_67(F->formals_418) != f_list_len_67(F->actuals_419))) {
f_fail_23(F->line_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_67(F->formals_418))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1570 != NULL)) {
F->pc_1573 = NULL;
F->y_1574 = NULL;
F->y_1574 = f_new_sym_173((((rt_int)2LL)), (*(P851)rt_nil_check(F->p_1570)).name);
(*(P861)rt_nil_check(F->y_1574)).t = f_resolve_subtype_257((*(P851)rt_nil_check(F->p_1570)).a, &F->pc_1573);
{
F->v_1575 = rt_str_copy(f_gexpr_680(F->a_1571, (*(P861)rt_nil_check(F->y_1574)).t, &F->vt_1572));
F->pv_1576 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_224(F->vt_1572, (*(P861)rt_nil_check(F->y_1574)).t, F->line_421);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_226((*(P861)rt_nil_check(F->y_1574)).t), rt_str(" ", 1)), F->pv_1576), rt_str(" = ", 3)), f_checked_205((*(P861)rt_nil_check(F->y_1574)).t, F->pc_1573, &F->v_1575)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_420), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_420), rt_str("->p_", 4)), f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1570)).name))->all))), rt_str(" = ", 3)), F->pv_1576), rt_str(";", 1)); b_; }));
}
(*(P861)rt_nil_check(F->y_1574)).access = f_mk_3(&F->pv_1576);
}
f_define_160(F->y_1574, F->line_421);
F->p_1570 = (*(P851)rt_nil_check(F->p_1570)).next;
F->a_1571 = (*(P851)rt_nil_check(F->a_1571)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_427(P851 s_423, rstr *lv_424, P857 t_425, P853 c_426) {
  struct f_alloc_cell_427fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_423 = s_423;
F->lv_424 = lv_424;
F->t_425 = t_425;
F->c_426 = c_426;
F->d_1577 = NULL;
F->d_1577 = (*(P857)rt_nil_check(F->t_425)).decl;
F->tc_1578 = NULL;
F->vt_1579 = NULL;
F->pt_1580 = rt_str_copy(f_ctype_226(F->t_425));
F->cell_1581 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_316((*(P857)rt_nil_check(F->t_425)).target)) {
F->fn_1582 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_912 = 1;
g_uses_findyn_914 = 1;
f_put_27(g_out_protos_896, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1582), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1582), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_903)) {
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P844)rt_nil_check((*(P861)rt_nil_check(g_func_sym_915)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1580), rt_str(")cell_)->all)", 13)); b_; }), (*(P857)rt_nil_check(F->t_425)).target)); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_903)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1580), rt_str(" ", 1)), F->cell_1581), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1581), rt_str(", ", 2)), F->fn_1582), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1580), rt_str(" ", 1)), F->cell_1581), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1581), rt_str(", ", 2)), F->fn_1582), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1580), rt_str(" ", 1)), F->cell_1581), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1581), rt_str(");", 2)); b_; }));
}
f_open_scope_169();
f_bind_ptr_params_422((*(P851)rt_nil_check(F->d_1577)).d, f_ptr_args_417(F->c_426), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P851)rt_nil_check(F->s_423)).line));
f_bind_ptr_params_422((*(P851)rt_nil_check(F->d_1577)).b, (*(P851)rt_nil_check(F->s_423)).b, &F->cell_1581, rt_r_ichk((*(P851)rt_nil_check(F->s_423)).line));
F->vt_1579 = f_resolve_subtype_257((*(P851)rt_nil_check(F->d_1577)).a, &F->tc_1578);
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1581, rt_str("->all", 5)); b_; }), (*(P857)rt_nil_check(F->t_425)).target, F->tc_1578);
f_close_scope_170();
if (((*(P851)rt_nil_check(F->s_423)).c != NULL)) {
F->v_1583 = rt_str_copy(f_gexpr_in_688((*(P851)rt_nil_check(F->s_423)).c, (*(P857)rt_nil_check(F->t_425)).target, F->tc_1578, &F->vt_1579));
f_check_type_224(F->vt_1579, (*(P857)rt_nil_check(F->t_425)).target, rt_r_ichk((*(P851)rt_nil_check(F->s_423)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_362(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1581, rt_str("->all", 5)); b_; }), (*(P857)rt_nil_check(F->t_425)).target, &F->v_1583, F->tc_1578); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_424), rt_str(" = ", 3)), F->cell_1581), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P853 f_freeze_args_431(P853 c_428, P857 t_429, rt_int line_430) {
  struct f_freeze_args_431fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_428 = c_428;
F->t_429 = t_429;
F->line_430 = line_430;
F->r_1584 = NULL;
F->r_1584 = f_copy_cons_198(F->c_428);
F->p_1585 = NULL;
F->p_1585 = (*(P851)rt_nil_check((*(P857)rt_nil_check(F->t_429)).decl)).d;
F->a_1586 = NULL;
F->a_1586 = (*(P853)rt_nil_check(F->c_428)).args;
F->head_1587 = NULL;
F->tail_1588 = NULL;
F->saved_1589 = NULL;
F->saved_1589 = g_st_field_909;
if ((f_list_len_67(F->p_1585) != f_list_len_67(F->a_1586))) {
f_fail_23(F->line_430, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check((*(P857)rt_nil_check(F->t_429)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1585))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1586 != NULL)) {
F->pc_1590 = NULL;
F->vt_1591 = NULL;
F->pt_1592 = NULL;
F->pt_1592 = f_resolve_subtype_257((*(P851)rt_nil_check(F->p_1585)).a, &F->pc_1590);
F->nm_1593 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1594 = NULL;
F->y_1594 = f_new_sym_173((((rt_int)2LL)), f_mk_3(&F->nm_1593));
F->n_1595 = NULL;
F->n_1595 = f_nn_61((((rt_int)7LL)), F->line_430);
F->v_1596 = rt_str_copy(f_gexpr_680(F->a_1586, F->pt_1592, &F->vt_1591));
F->access_1597 = rt_str_copy(f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_226(F->pt_1592); b_; })));
f_check_type_224(F->vt_1591, F->pt_1592, F->line_430);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1597, rt_str(" = ", 3)), f_checked_205(F->pt_1592, F->pc_1590, &F->v_1596)), rt_str(";", 1)); b_; }));
(*(P861)rt_nil_check(F->y_1594)).t = F->pt_1592;
(*(P861)rt_nil_check(F->y_1594)).ro_flag = 1;
f_bind_459(F->y_1594, &F->access_1597);
f_define_160(F->y_1594, F->line_430);
(*(P851)rt_nil_check(F->n_1595)).name = f_mk_3(&F->nm_1593);
f_append_65(&F->head_1587, &F->tail_1588, F->n_1595);
F->a_1586 = (*(P851)rt_nil_check(F->a_1586)).next;
F->p_1585 = (*(P851)rt_nil_check(F->p_1585)).next;
}
(*(P853)rt_nil_check(F->r_1584)).args = F->head_1587;
g_st_field_909 = F->saved_1589;
F->result_ = F->r_1584;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_435(P857 t_432, P853 c_433, P851 src_434) {
  struct f_ptr_subtype_check_435fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_432 = t_432;
F->c_433 = c_433;
F->src_434 = src_434;
F->lv_1598 = NULL;
F->st_1599 = NULL;
F->sc_1600 = NULL;
F->ro_1601 = RT_R_EUNDEF;
F->cond_1602 = NULL;
F->cond_1602 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1603 = NULL;
F->b_1604 = NULL;
F->at_1605 = NULL;
F->bt_1606 = NULL;
if ((((((rt_r_ichk((*(P857)rt_nil_check(F->t_432)).kind) != (((rt_int)8LL))) || (F->c_433 == NULL)) || ((*(P853)rt_nil_check(F->c_433)).args == NULL)) || (F->src_434 == NULL)) || (!f_is_lvalue_643(F->src_434)))) {
goto ret_;
}
f_lvalue_649(F->src_434, &F->lv_1598, &F->st_1599, &F->sc_1600, &F->ro_1601);
if (((F->sc_1600 == NULL) || ((*(P853)rt_nil_check(F->sc_1600)).args == NULL))) {
goto ret_;
}
F->a_1603 = (*(P853)rt_nil_check(F->c_433)).args;
F->b_1604 = (*(P853)rt_nil_check(F->sc_1600)).args;
while (((F->a_1603 != NULL) && (F->b_1604 != NULL))) {
F->x_1607 = rt_str_copy(f_gexpr_680(F->a_1603, NULL, &F->at_1605));
F->y_1608 = rt_str_copy(f_gexpr_680(F->b_1604, F->at_1605, &F->bt_1606));
F->cond_1602 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->cond_1602))->all), rt_str(" || !", 5)), f_eq_code_369(F->at_1605, &F->x_1607, &F->y_1608)); b_; }));
F->a_1603 = (*(P851)rt_nil_check(F->a_1603)).next;
F->b_1604 = (*(P851)rt_nil_check(F->b_1604)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P844)rt_nil_check(F->cond_1602))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_normal_function_438(P851 d_436, P861 y_437) {
  struct f_normal_function_438fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_436 = d_436;
F->y_437 = y_437;
F->p_1609 = NULL;
F->p_1609 = (*(P861)rt_nil_check(F->y_437)).params;
F->imp_1610 = NULL;
F->imp_1610 = (*(P851)rt_nil_check(F->d_436)).d;
if (((rt_r_ichk((*(P851)rt_nil_check(F->d_436)).kind) != (((rt_int)46LL))) || (rt_mod(rt_r_ichk((*(P851)rt_nil_check(F->d_436)).flag), ((rt_int)2LL)) == ((rt_int)1LL)))) {
goto ret_;
}
while ((F->p_1609 != NULL)) {
if (((rt_r_ichk((*(P863)rt_nil_check(F->p_1609)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P863)rt_nil_check(F->p_1609)).mode) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->d_436)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may have only CONST and READONLY formal parameters: ", 70), (((P844)rt_nil_check((*(P851)rt_nil_check(F->d_436)).name))->all)); b_; }));
}
F->p_1609 = (*(P863)rt_nil_check(F->p_1609)).next;
}
if ((((*(P851)rt_nil_check(F->d_436)).d == NULL) && (rt_r_ichk((*(P851)rt_nil_check(F->d_436)).flag) < ((rt_int)2LL)))) {
goto ret_;
}
if (((g_caps_906 == NULL) || (rt_r_ichk(g_depth_890) != rt_r_ichk((*(P878)rt_nil_check(g_caps_906)).depth)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->d_436)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function with an imports list must be local to a capsule body: ", 72), (((P844)rt_nil_check((*(P851)rt_nil_check(F->d_436)).name))->all)); b_; }));
}
while ((F->imp_1610 != NULL)) {
F->ro_1611 = RT_R_EUNDEF;
F->z_1612 = NULL;
F->z_1612 = f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->imp_1610)).name))->all));
if ((((F->z_1612 != NULL) && (rt_r_ichk((*(P861)rt_nil_check(F->z_1612)).kind) == (((rt_int)1LL)))) && (rt_r_ichk((*(P861)rt_nil_check(F->z_1612)).depth) != rt_r_ichk((*(P878)rt_nil_check(g_caps_906)).depth)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->d_436)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function imports only variables of its capsule body: ", 62), (((P844)rt_nil_check((*(P851)rt_nil_check(F->imp_1610)).name))->all)); b_; }));
}
if ((f_exported_387((*(P878)rt_nil_check(g_caps_906)).d, &(((P844)rt_nil_check((*(P851)rt_nil_check(F->imp_1610)).name))->all), &F->ro_1611) && (rt_r_ichk((*(P851)rt_nil_check((*(P878)rt_nil_check(g_caps_906)).d)).ival) != ((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->d_436)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may not import an exported variable: ", 55), (((P844)rt_nil_check((*(P851)rt_nil_check(F->imp_1610)).name))->all)); b_; }));
}
F->imp_1610 = (*(P851)rt_nil_check(F->imp_1610)).next;
}
(*(P861)rt_nil_check(F->y_437)).capn = (*(P878)rt_nil_check(g_caps_906)).d;
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_440(P851 d_439) {
  struct f_declare_subprogram_440fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_439 = d_439;
f_define_160(f_build_subprogram_442(F->d_439), rt_r_ichk((*(P851)rt_nil_check(F->d_439)).line));
ret_:
  RT_FPOP();
  return;
}

static P861 f_build_subprogram_442(P851 d_441) {
  struct f_build_subprogram_442fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_441 = d_441;
F->y_1613 = NULL;
F->p_1614 = NULL;
F->p_1614 = (*(P851)rt_nil_check(F->d_441)).a;
F->tail_1615 = NULL;
if ((rt_r_ichk((*(P851)rt_nil_check(F->d_441)).kind) == (((rt_int)46LL)))) {
F->y_1613 = f_new_sym_173((((rt_int)3LL)), (*(P851)rt_nil_check(F->d_441)).name);
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->d_441)).kind) == (((rt_int)50LL)))) {
F->y_1613 = f_new_sym_173((((rt_int)9LL)), (*(P851)rt_nil_check(F->d_441)).name);
} else {
F->y_1613 = f_new_sym_173((((rt_int)4LL)), (*(P851)rt_nil_check(F->d_441)).name);
}
while ((F->p_1614 != NULL)) {
F->pm_1616 = NULL;
if (((rt_r_ichk((*(P851)rt_nil_check(F->d_441)).kind) == (((rt_int)50LL))) && (rt_r_ichk((*(P851)rt_nil_check(F->p_1614)).ival) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->d_441)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a task may not have OUT formal parameters", 41); b_; }));
}
{ R864 *cell1617 = rt_alloc(sizeof(R864));
(*cell1617).name = NULL;
(*cell1617).t = NULL;
(*cell1617).c = NULL;
(*cell1617).cfield = NULL;
(*cell1617).next = NULL;
F->pm_1616 = cell1617;
}
(*(P863)rt_nil_check(F->pm_1616)).name = (*(P851)rt_nil_check(F->p_1614)).name;
(*(P863)rt_nil_check(F->pm_1616)).mode = rt_r_ichk((*(P851)rt_nil_check(F->p_1614)).ival);
(*(P863)rt_nil_check(F->pm_1616)).t = f_resolve_subtype_257((*(P851)rt_nil_check(F->p_1614)).a, &(*(P863)rt_nil_check(F->pm_1616)).c);
(*(P863)rt_nil_check(F->pm_1616)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1614)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1615 == NULL)) {
(*(P861)rt_nil_check(F->y_1613)).params = F->pm_1616;
} else {
(*(P863)rt_nil_check(F->tail_1615)).next = F->pm_1616;
}
F->tail_1615 = F->pm_1616;
F->p_1614 = (*(P851)rt_nil_check(F->p_1614)).next;
}
(*(P861)rt_nil_check(F->y_1613)).result = g_ty_void_936;
if (((*(P851)rt_nil_check(F->d_441)).b != NULL)) {
F->rc_1618 = NULL;
F->pm_1619 = NULL;
F->pm_1619 = (*(P861)rt_nil_check(F->y_1613)).params;
F->saved_1620 = NULL;
F->saved_1620 = g_code_901;
g_code_901 = f_new_buffer_24();
f_open_scope_169();
while ((F->pm_1619 != NULL)) {
F->z_1621 = NULL;
F->z_1621 = f_new_sym_173((((rt_int)2LL)), (*(P863)rt_nil_check(F->pm_1619)).name);
(*(P861)rt_nil_check(F->z_1621)).t = (*(P863)rt_nil_check(F->pm_1619)).t;
(*(P861)rt_nil_check(F->z_1621)).c = (*(P863)rt_nil_check(F->pm_1619)).c;
(*(P861)rt_nil_check(F->z_1621)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_160(F->z_1621, rt_r_ichk((*(P851)rt_nil_check(F->d_441)).line));
F->pm_1619 = (*(P863)rt_nil_check(F->pm_1619)).next;
}
(*(P861)rt_nil_check(F->y_1613)).result = f_resolve_subtype_257((*(P851)rt_nil_check(F->d_441)).b, &F->rc_1618);
f_close_scope_170();
g_code_901 = F->saved_1620;
}
(*(P861)rt_nil_check(F->y_1613)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_635(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->d_441)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P861)rt_nil_check(F->y_1613)).decl = F->d_441;
(*(P861)rt_nil_check(F->y_1613)).level = rt_r_ichk(g_cur_level_904);
if ((rt_r_ichk((*(P851)rt_nil_check(F->d_441)).kind) == (((rt_int)50LL)))) {
f_put_27(g_out_globals_897, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_1613)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1613;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_445(P844 pr_443, rstr *p_444) {
  struct f_has_pragmat_445fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_443 = pr_443;
F->p_444 = p_444;
if ((F->pr_443 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1623 = ((rt_int)1LL), hi1624 = rt_sub(((rt_int)(((((P844)rt_nil_check(F->pr_443))->all)).len)), ((rt_int)(((*F->p_444)).len)));
for (rt_int it1625 = lo1623; it1625 <= hi1624; it1625++) {
F->i_1622 = it1625;
if (((rt_str_eq(rt_str_slice((((P844)rt_nil_check(F->pr_443))->all), F->i_1622, rt_sub(rt_add(F->i_1622, ((rt_int)(((*F->p_444)).len))), ((rt_int)1LL))), (*F->p_444)) && (rt_r_echk(rt_str_get((((P844)rt_nil_check(F->pr_443))->all), rt_add(F->i_1622, ((rt_int)(((*F->p_444)).len))))) == 59)) && ((F->i_1622 == ((rt_int)1LL)) || (rt_r_echk(rt_str_get((((P844)rt_nil_check(F->pr_443))->all), rt_sub(F->i_1622, ((rt_int)1LL)))) == 59)))) {
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

static P844 f_suppressing_447(P844 pr_446) {
  struct f_suppressing_447fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_446 = pr_446;
F->r_1626 = NULL;
F->r_1626 = g_suppress_921;
F->i_1627 = RT_R_IUNDEF;
F->i_1627 = ((rt_int)1LL);
if ((F->pr_446 == NULL)) {
F->result_ = F->r_1626;
goto ret_;
}
if ((F->r_1626 == NULL)) {
F->r_1626 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(rt_r_ichk(F->i_1627), ((rt_int)9LL)) <= ((rt_int)(((((P844)rt_nil_check(F->pr_446))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P844)rt_nil_check(F->pr_446))->all), rt_r_ichk(F->i_1627), rt_add(rt_r_ichk(F->i_1627), ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1628 = RT_R_IUNDEF;
F->j_1628 = rt_add(rt_r_ichk(F->i_1627), ((rt_int)9LL));
F->k_1629 = RT_R_IUNDEF;
F->k_1629 = rt_r_ichk(F->j_1628);
while ((rt_r_echk(rt_str_get((((P844)rt_nil_check(F->pr_446))->all), rt_r_ichk(F->k_1629))) != 41)) {
if ((rt_r_echk(rt_str_get((((P844)rt_nil_check(F->pr_446))->all), rt_r_ichk(F->k_1629))) == 44)) {
F->r_1626 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_1626))->all), rt_str_slice((((P844)rt_nil_check(F->pr_446))->all), rt_r_ichk(F->j_1628), rt_sub(rt_r_ichk(F->k_1629), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1628 = rt_add(rt_r_ichk(F->k_1629), ((rt_int)1LL));
}
F->k_1629 = rt_add(rt_r_ichk(F->k_1629), ((rt_int)1LL));
}
F->r_1626 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_1626))->all), rt_str_slice((((P844)rt_nil_check(F->pr_446))->all), rt_r_ichk(F->j_1628), rt_sub(rt_r_ichk(F->k_1629), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1627 = rt_r_ichk(F->k_1629);
}
F->i_1627 = rt_add(rt_r_ichk(F->i_1627), ((rt_int)1LL));
}
F->result_ = F->r_1626;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_449(rstr *x_448) {
  struct f_suppressed_449fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_448 = x_448;
F->w_1630 = rt_str_new(rt_add(((rt_int)(((*F->x_448)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1630, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_448)), rt_str(" ", 1)));
if ((g_suppress_921 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1632 = ((rt_int)1LL), hi1633 = rt_add(rt_sub(((rt_int)(((((P844)rt_nil_check(g_suppress_921))->all)).len)), ((rt_int)((F->w_1630).len))), ((rt_int)1LL));
for (rt_int it1634 = lo1632; it1634 <= hi1633; it1634++) {
F->i_1631 = it1634;
if (rt_str_eq(rt_str_slice((((P844)rt_nil_check(g_suppress_921))->all), F->i_1631, rt_sub(rt_add(F->i_1631, ((rt_int)((F->w_1630).len))), ((rt_int)1LL))), F->w_1630)) {
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

static void f_element_451(P851 e_450) {
  struct f_element_451fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_450 = e_450;
F->saved_1635 = NULL;
F->saved_1635 = g_suppress_921;
g_suppress_921 = f_suppressing_447((*(P851)rt_nil_check(F->e_450)).prags);
f_element1_453(F->e_450);
g_suppress_921 = F->saved_1635;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_453(P851 e_452) {
  struct f_element1_453fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_452 = e_452;
F->k_1636 = RT_R_IUNDEF;
F->k_1636 = rt_r_ichk((*(P851)rt_nil_check(F->e_452)).kind);
if (((rt_r_ichk(F->k_1636) == (((rt_int)48LL))) && ((rt_r_ichk((*(P851)rt_nil_check(F->e_452)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P851)rt_nil_check(F->e_452)).flag) == ((rt_int)3LL))))) {
f_gen_expose_413(F->e_452);
} else if ((((rt_r_ichk(F->k_1636) == (((rt_int)45LL))) || (rt_r_ichk(F->k_1636) == (((rt_int)46LL)))) || (rt_r_ichk(F->k_1636) == (((rt_int)50LL))))) {
f_subprogram_469(F->e_452);
} else if ((rt_r_ichk(F->k_1636) == (((rt_int)51LL)))) {
F->g_1637 = NULL;
F->g_1637 = f_lookup_decl_157(F->e_452);
if ((F->g_1637 != NULL)) {
{ P865 cell1638 = rt_alloc(sizeof *cell1638);
rt_int pv1639 = (((rt_int)4093LL));
cell1638->p_n = pv1639;
cell1638->all.lo = ((rt_int)0LL); cell1638->all.hi = pv1639;
cell1638->all.lo2 = cell1638->all.hi2 = 1;
cell1638->all.p = rt_alloc(sizeof(P861) * (size_t)(RT_CNT(cell1638->all)) + 1);
for (rt_int i1640 = 0; i1640 < (RT_CNT(cell1638->all)); i1640++) {
cell1638->all.p[i1640] = NULL;
}
(*(P861)rt_nil_check(F->g_1637)).env = cell1638;
}
{ rt_int lo1642 = ((rt_int)0LL), hi1643 = (((rt_int)4093LL));
for (rt_int it1644 = lo1642; it1644 <= hi1643; it1644++) {
F->i_1641 = it1644;
(((P865)rt_nil_check((*(P861)rt_nil_check(F->g_1637)).env))->all).p[(rt_index(F->i_1641, (((P865)rt_nil_check((*(P861)rt_nil_check(F->g_1637)).env))->all).lo, (((P865)rt_nil_check((*(P861)rt_nil_check(F->g_1637)).env))->all).hi) - (((P865)rt_nil_check((*(P861)rt_nil_check(F->g_1637)).env))->all).lo)] = ({ A867 b_ = (((P865)rt_nil_check(g_table_887))->all); b_.p[(rt_index(F->i_1641, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((((rt_r_ichk(F->k_1636) == (((rt_int)49LL))) || (rt_r_ichk(F->k_1636) == (((rt_int)42LL)))) || (rt_r_ichk(F->k_1636) == (((rt_int)43LL)))) || (rt_r_ichk(F->k_1636) == (((rt_int)47LL)))) || (rt_r_ichk(F->k_1636) == (((rt_int)48LL))))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1636) == (((rt_int)44LL)))) {
f_finish_ptr_415((*(P861)rt_nil_check(f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_452)).name))->all)))).t);
} else if ((rt_r_ichk(F->k_1636) == (((rt_int)40LL)))) {
f_var_decl_461(F->e_452);
} else if (((rt_r_ichk(F->k_1636) == (((rt_int)41LL))) && (rt_r_ichk((*(P851)rt_nil_check(F->e_452)).flag) == ((rt_int)0LL)))) {
f_const_decl_467(F->e_452);
} else if ((rt_r_ichk(F->k_1636) == (((rt_int)41LL)))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1636) == (((rt_int)33LL)))) {
F->t_1645 = NULL;
F->c_1646 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_452)).a, g_ty_bool_932, &F->t_1645));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1646), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_504(F->e_452);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_456(rstr *name_454, P857 t_455) {
  struct f_storage_456fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_454 = name_454;
F->t_455 = t_455;
if ((!rt_r_echk(g_in_func_903))) {
F->g_1647 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_454))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_897, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_226(F->t_455)), rt_str(" ", 1)), F->g_1647), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_911, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1647), rt_str(");", 2)); b_; }));
g_st_field_909 = f_mk_3(&F->g_1647);
F->result_ = F->g_1647;
goto ret_;
}
{
F->f_1648 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_454)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_902, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_226(F->t_455)), rt_str(" ", 1)), F->f_1648), rt_str(";", 1)); b_; }));
g_st_field_909 = f_mk_3(&F->f_1648);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1648);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_459(P861 y_457, rstr *access_458) {
  struct f_bind_459fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_457 = y_457;
F->access_458 = access_458;
if (rt_r_echk(g_in_func_903)) {
(*(P861)rt_nil_check(F->y_457)).level = rt_r_ichk(g_cur_level_904);
(*(P861)rt_nil_check(F->y_457)).access = g_st_field_909;
} else {
(*(P861)rt_nil_check(F->y_457)).level = ((rt_int)0LL);
(*(P861)rt_nil_check(F->y_457)).access = f_mk_3(&(*F->access_458));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_461(P851 d_460) {
  struct f_var_decl_461fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_460 = d_460;
F->c_1649 = NULL;
F->t_1650 = NULL;
F->t_1650 = f_resolve_subtype_257((*(P851)rt_nil_check(F->d_460)).a, &F->c_1649);
F->y_1651 = NULL;
F->y_1651 = f_new_sym_173((((rt_int)1LL)), (*(P851)rt_nil_check(F->d_460)).name);
F->access_1652 = rt_str_copy(f_storage_456(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->d_460)).name))->all), F->t_1650));
F->c_1649 = f_freeze_201(F->c_1649, F->t_1650);
if ((((rt_r_ichk((*(P857)rt_nil_check(F->t_1650)).kind) == (((rt_int)8LL))) && (F->c_1649 != NULL)) && ((*(P853)rt_nil_check(F->c_1649)).args != NULL))) {
F->c_1649 = f_freeze_args_431(F->c_1649, F->t_1650, rt_r_ichk((*(P851)rt_nil_check(F->d_460)).line));
}
g_mark_uninit_923 = 1;
f_init_storage_311(&F->access_1652, F->t_1650, F->c_1649);
g_mark_uninit_923 = 0;
if ((rt_r_ichk((*(P851)rt_nil_check(F->d_460)).ival) == ((rt_int)1LL))) {
F->it_1653 = NULL;
F->n_1654 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->d_460)).c, g_ty_int_931, &F->it_1653));
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_1650)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->d_460)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_213((*(P857)rt_nil_check(F->t_1650)).elem, g_ty_ascii_934)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1652), rt_str(", ", 2)), F->n_1654), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1652), rt_str(", ", 2)), F->n_1654), rt_str(", 0);", 5)); b_; }));
}
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->d_460)).ival) == ((rt_int)2LL))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->d_460)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P851)rt_nil_check(F->d_460)).b != NULL)) {
F->vt_1655 = NULL;
F->v_1656 = rt_str_copy(f_gexpr_in_688((*(P851)rt_nil_check(F->d_460)).b, F->t_1650, F->c_1649, &F->vt_1655));
f_check_type_224(F->vt_1655, F->t_1650, rt_r_ichk((*(P851)rt_nil_check(F->d_460)).line));
f_ptr_subtype_check_435(F->t_1650, F->c_1649, (*(P851)rt_nil_check(F->d_460)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_362(&F->access_1652, F->t_1650, &F->v_1656, F->c_1649); b_; }));
}
(*(P861)rt_nil_check(F->y_1651)).t = F->t_1650;
(*(P861)rt_nil_check(F->y_1651)).c = F->c_1649;
f_bind_459(F->y_1651, &F->access_1652);
f_define_160(F->y_1651, rt_r_ichk((*(P851)rt_nil_check(F->d_460)).line));
if (f_needs_fin_316(F->t_1650)) {
f_open_fin_463(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_319(&F->access_1652, F->t_1650); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_463(rstr *fc_462) {
  struct f_open_fin_463fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_462 = fc_462;
F->f_1657 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1658 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1657), rt_str("; if (RT_TRY(", 13)), F->f_1657), rt_str(")) {", 4)); b_; }));
f_push_cleanup_501(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1657), rt_str("); ", 3)), (*F->fc_462)); b_; }));
{ R856 *cell1659 = rt_alloc(sizeof(R856));
(*cell1659).s = NULL;
(*cell1659).next = NULL;
F->l_1658 = cell1659;
}
(*(P855)rt_nil_check(F->l_1658)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1657), rt_str("); ", 3)), (*F->fc_462)), rt_str(" } else { RT_POP(", 17)), F->f_1657), rt_str("); ", 3)), (*F->fc_462)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P855)rt_nil_check(F->l_1658)).next = g_fins_913;
g_fins_913 = F->l_1658;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_465(P855 saved_464) {
  struct f_close_fins_465fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_464 = saved_464;
while (((g_fins_913 != F->saved_464) && (g_fins_913 != NULL))) {
f_emit_29(&(((P844)rt_nil_check((*(P855)rt_nil_check(g_fins_913)).s))->all));
f_pop_cleanup_502();
g_fins_913 = (*(P855)rt_nil_check(g_fins_913)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_467(P851 d_466) {
  struct f_const_decl_467fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_466 = d_466;
F->c_1660 = NULL;
F->c_1660 = f_new_cons_176();
F->t_1661 = NULL;
F->vt_1662 = NULL;
F->y_1663 = NULL;
F->y_1663 = f_new_sym_173((((rt_int)2LL)), (*(P851)rt_nil_check(F->d_466)).name);
F->ok_1664 = RT_R_EUNDEF;
if (((*(P851)rt_nil_check(F->d_466)).a != NULL)) {
F->t_1661 = f_resolve_subtype_257((*(P851)rt_nil_check(F->d_466)).a, &F->c_1660);
}
{
F->v_1665 = rt_str_copy(f_gexpr_in_688((*(P851)rt_nil_check(F->d_466)).b, F->t_1661, F->c_1660, &F->vt_1662));
if ((F->t_1661 != NULL)) {
f_check_type_224(F->vt_1662, F->t_1661, rt_r_ichk((*(P851)rt_nil_check(F->d_466)).line));
} else {
F->t_1661 = F->vt_1662;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_1661)).kind) == (((rt_int)1LL)))) {
(*(P861)rt_nil_check(F->y_1663)).mvalue = f_manifest_334((*(P851)rt_nil_check(F->d_466)).b, &F->ok_1664);
(*(P861)rt_nil_check(F->y_1663)).hasmv = rt_r_echk(F->ok_1664);
}
{
F->access_1666 = rt_str_copy(f_storage_456(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->d_466)).name))->all), F->t_1661));
if (((*(P857)rt_nil_check(F->t_1661)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_314((*(P857)rt_nil_check(F->t_1661)).initp, &F->access_1666); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1666, rt_str(" = ", 3)), f_checked_205(F->t_1661, F->c_1660, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_365(F->t_1661, &F->v_1665); b_; }))), rt_str(";", 1)); b_; }));
f_bind_459(F->y_1663, &F->access_1666);
if (f_needs_fin_316(F->t_1661)) {
f_open_fin_463(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_319(&F->access_1666, F->t_1661); b_; }));
}
}
}
(*(P861)rt_nil_check(F->y_1663)).t = F->t_1661;
(*(P861)rt_nil_check(F->y_1663)).c = F->c_1660;
(*(P861)rt_nil_check(F->y_1663)).ro_flag = 1;
f_define_160(F->y_1663, rt_r_ichk((*(P851)rt_nil_check(F->d_466)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_469(P851 d_468) {
  struct f_subprogram_469fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_468 = d_468;
f_gen_subprogram_472(F->d_468, f_lookup_decl_157(F->d_468));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_472(P851 d_470, P861 y_471) {
  struct f_gen_subprogram_472fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_470 = d_470;
F->y_471 = y_471;
F->saved_code_1667 = NULL;
F->saved_code_1667 = g_code_901;
F->saved_fields_1668 = NULL;
F->saved_fields_1668 = g_fields_buf_902;
F->saved_in_1669 = RT_R_EUNDEF;
F->saved_in_1669 = rt_r_echk(g_in_func_903);
F->saved_sym_1670 = NULL;
F->saved_sym_1670 = g_func_sym_915;
F->saved_exits_1671 = NULL;
F->saved_exits_1671 = g_exits_924;
F->saved_gotos_1672 = NULL;
F->saved_gotos_1672 = g_gotos_925;
F->saved_frames_1673 = RT_R_IUNDEF;
F->saved_frames_1673 = rt_r_ichk(g_frames_926);
F->args_1674 = NULL;
F->args_1674 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1675 = NULL;
F->pm_1675 = (*(P861)rt_nil_check(F->y_471)).params;
F->saved_handlers_1676 = NULL;
F->saved_handlers_1676 = g_handlers_927;
F->saved_cleanups_1677 = NULL;
F->saved_cleanups_1677 = g_cleanups_928;
F->ctx_1678 = NULL;
F->head_1679 = NULL;
F->frame_1680 = NULL;
F->frame_1680 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_471)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_1681 = NULL;
F->copy_back_1682 = NULL;
F->copy_back_1682 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1683 = NULL;
F->pfin_1683 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1684 = NULL;
F->saved_fins_1684 = g_fins_913;
F->saved_rc_1685 = NULL;
F->saved_rc_1685 = g_func_rc_916;
F->saved_ret_1686 = NULL;
F->saved_ret_1686 = g_cap_ret_917;
F->saved_rflag_1687 = NULL;
F->saved_rflag_1687 = g_cap_rflag_918;
F->pn_1688 = NULL;
F->pn_1688 = (*(P851)rt_nil_check(F->d_470)).a;
F->nonrec_end_1689 = NULL;
F->has_pfin_1690 = RT_R_EUNDEF;
if (rt_r_echk(g_in_func_903)) {
F->parent_1681 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P861)rt_nil_check(g_func_sym_915)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_913 = NULL;
g_func_rc_916 = NULL;
g_cap_ret_917 = NULL;
g_cap_rflag_918 = NULL;
g_code_901 = f_new_buffer_24();
g_fields_buf_902 = f_new_buffer_24();
g_in_func_903 = 1;
g_func_sym_915 = F->y_471;
g_exits_924 = NULL;
g_gotos_925 = NULL;
g_frames_926 = ((rt_int)0LL);
g_handlers_927 = NULL;
g_cleanups_928 = NULL;
g_cur_level_904 = rt_add(rt_r_ichk(g_cur_level_904), ((rt_int)1LL));
f_open_scope_169();
{ R869 *cell1691 = rt_alloc(sizeof(R869));
(*cell1691).imps = NULL;
(*cell1691).next = NULL;
F->ctx_1678 = cell1691;
}
(*(P868)rt_nil_check(F->ctx_1678)).depth = rt_r_ichk(g_depth_890);
(*(P868)rt_nil_check(F->ctx_1678)).imps = (*(P851)rt_nil_check(F->d_470)).d;
(*(P868)rt_nil_check(F->ctx_1678)).all_imp = (rt_r_ichk((*(P851)rt_nil_check(F->d_470)).flag) >= ((rt_int)2LL));
(*(P868)rt_nil_check(F->ctx_1678)).next = g_fctx_905;
g_fctx_905 = F->ctx_1678;
if ((F->parent_1681 != NULL)) {
f_put_27(g_fields_buf_902, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P844)rt_nil_check(F->parent_1681))->all)), rt_str(" *up;", 5)); b_; }));
if ((rt_r_ichk((*(P861)rt_nil_check(F->y_471)).kind) != (((rt_int)9LL)))) {
F->args_1674 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P844)rt_nil_check(F->parent_1681))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1675 != NULL)) {
F->ct_1692 = rt_str_copy(f_ctype_226((*(P863)rt_nil_check(F->pm_1675)).t));
F->f_1693 = rt_str_copy((((P844)rt_nil_check((*(P863)rt_nil_check(F->pm_1675)).cfield))->all));
F->p_1694 = NULL;
F->pc_1695 = NULL;
F->pc_1695 = (*(P863)rt_nil_check(F->pm_1675)).c;
F->ac_1696 = NULL;
if ((((rt_int)(((((P844)rt_nil_check(F->args_1674))->all)).len)) > ((rt_int)0LL))) {
F->args_1674 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->args_1674))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_178((*(P863)rt_nil_check(F->pm_1675)).t)) {
F->fc_1697 = NULL;
F->ft_1698 = NULL;
F->ft_1698 = f_resolve_subtype_257((*(P851)rt_nil_check(F->pn_1688)).a, &F->fc_1697);
F->pc_1695 = f_freeze_201(F->fc_1697, (*(P863)rt_nil_check(F->pm_1675)).t);
}
if ((rt_r_ichk((*(P863)rt_nil_check(F->pm_1675)).mode) == (((rt_int)1LL)))) {
F->p_1694 = f_new_sym_173((((rt_int)2LL)), (*(P863)rt_nil_check(F->pm_1675)).name);
f_put_27(g_fields_buf_902, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1692), rt_str(" ", 1)), F->f_1693), rt_str(";", 1)); b_; }));
F->args_1674 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->args_1674))->all), F->ct_1692), rt_str(" ", 1)), F->f_1693); b_; }));
(*(P861)rt_nil_check(F->p_1694)).access = f_mk_3(&F->f_1693);
if ((rt_r_ichk((*(P861)rt_nil_check(F->y_471)).kind) != (((rt_int)9LL)))) {
if (((*(P857)rt_nil_check((*(P863)rt_nil_check(F->pm_1675)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_314((*(P857)rt_nil_check((*(P863)rt_nil_check(F->pm_1675)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1693); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1693), rt_str(" = ", 3)), f_checked_205((*(P863)rt_nil_check(F->pm_1675)).t, F->pc_1695, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_365((*(P863)rt_nil_check(F->pm_1675)).t, &F->f_1693); b_; }))), rt_str(";", 1)); b_; }));
if (f_needs_fin_316((*(P863)rt_nil_check(F->pm_1675)).t)) {
F->pfin_1683 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->pfin_1683))->all), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1693); b_; }), (*(P863)rt_nil_check(F->pm_1675)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1694 = f_new_sym_173((((rt_int)1LL)), (*(P863)rt_nil_check(F->pm_1675)).name);
f_put_27(g_fields_buf_902, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1692), rt_str(" *", 2)), F->f_1693), rt_str(";", 1)); b_; }));
F->args_1674 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->args_1674))->all), F->ct_1692), rt_str(" *", 2)), F->f_1693); b_; }));
(*(P861)rt_nil_check(F->p_1694)).access = f_mk_3(&F->f_1693);
(*(P861)rt_nil_check(F->p_1694)).byref = 1;
if ((rt_r_ichk((*(P861)rt_nil_check(F->y_471)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1693), rt_str(" = ", 3)), F->f_1693), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_178((*(P863)rt_nil_check(F->pm_1675)).t)) {
F->bt_1699 = rt_str_copy(f_bound_ctype_180((*(P863)rt_nil_check(F->pm_1675)).t));
f_put_27(g_fields_buf_902, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_1699), rt_str(" ", 1)), F->f_1693), rt_str("lo, ", 4)), F->f_1693), rt_str("hi;", 3)); b_; }));
F->args_1674 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->args_1674))->all), rt_str(", ", 2)), F->bt_1699), rt_str(" ", 1)), F->f_1693), rt_str("lo, ", 4)), F->bt_1699), rt_str(" ", 1)), F->f_1693), rt_str("hi", 2)); b_; }));
if ((rt_r_ichk((*(P861)rt_nil_check(F->y_471)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1693), rt_str("lo = ", 5)), F->f_1693), rt_str("lo; F->", 7)), F->f_1693), rt_str("hi = ", 5)), F->f_1693), rt_str("hi;", 3)); b_; }));
}
F->ac_1696 = f_new_cons_176();
(*(P853)rt_nil_check(F->ac_1696)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1693, rt_str("lo", 2)); b_; }));
(*(P853)rt_nil_check(F->ac_1696)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1693, rt_str("hi", 2)); b_; }));
(*(P853)rt_nil_check(F->ac_1696)).dyn = 1;
(*(P853)rt_nil_check(F->ac_1696)).lvl = rt_r_ichk(g_cur_level_904);
if (((F->pc_1695 == NULL) || ((*(P853)rt_nil_check(F->pc_1695)).lo == NULL))) {
F->pc_1695 = F->ac_1696;
} else if ((rt_r_ichk((*(P863)rt_nil_check(F->pm_1675)).mode) != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_1693), rt_str("lo <= F->", 9)), F->f_1693), rt_str("hi && (F->", 10)), F->f_1693), rt_str("lo != ", 6)), f_sub_lo_190((*(P863)rt_nil_check(F->pm_1675)).t, F->pc_1695)), rt_str(" || F->", 7)), F->f_1693), rt_str("hi != ", 6)), f_sub_hi_193((*(P863)rt_nil_check(F->pm_1675)).t, F->pc_1695)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if (((rt_r_ichk((*(P863)rt_nil_check(F->pm_1675)).mode) == (((rt_int)3LL))) && (rt_r_ichk((*(P861)rt_nil_check(F->y_471)).kind) != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_902, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1692), rt_str(" ", 1)), F->f_1693), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1693), rt_str("v = ", 4)), f_copy_code_365((*(P863)rt_nil_check(F->pm_1675)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1693); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P857)rt_nil_check((*(P863)rt_nil_check(F->pm_1675)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_314((*(P857)rt_nil_check((*(P863)rt_nil_check(F->pm_1675)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1693), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_1696 == NULL)) {
F->ac_1696 = (*(P863)rt_nil_check(F->pm_1675)).c;
}
if ((!rt_str_eq(f_uninit_value_328(f_base_of_215((*(P863)rt_nil_check(F->pm_1675)).t)), rt_str("", 0)))) {
F->copy_back_1682 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->copy_back_1682))->all), rt_str("  if (!rt_r_undef_", 18)), f_kind_name_220(f_base_of_215((*(P863)rt_nil_check(F->pm_1675)).t))), rt_str("(F->", 4)), F->f_1693), rt_str("v)) ", 4)), f_assign_code_362(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1693), rt_str(")", 1)); b_; }), (*(P863)rt_nil_check(F->pm_1675)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1693), rt_str("v", 1)); b_; }), F->ac_1696)); b_; }));
} else {
F->copy_back_1682 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->copy_back_1682))->all), rt_str("  ", 2)), f_assign_code_362(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1693), rt_str(")", 1)); b_; }), (*(P863)rt_nil_check(F->pm_1675)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1693), rt_str("v", 1)); b_; }), F->ac_1696)); b_; }));
}
if (f_needs_fin_316((*(P863)rt_nil_check(F->pm_1675)).t)) {
F->pfin_1683 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->pfin_1683))->all), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1693), rt_str("v", 1)); b_; }), (*(P863)rt_nil_check(F->pm_1675)).t)), rt_str(" ", 1)); b_; }));
}
(*(P861)rt_nil_check(F->p_1694)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1693, rt_str("v", 1)); b_; }));
(*(P861)rt_nil_check(F->p_1694)).byref = 0;
}
}
(*(P861)rt_nil_check(F->p_1694)).t = (*(P863)rt_nil_check(F->pm_1675)).t;
(*(P861)rt_nil_check(F->p_1694)).c = F->pc_1695;
(*(P861)rt_nil_check(F->p_1694)).level = rt_r_ichk(g_cur_level_904);
(*(P861)rt_nil_check(F->p_1694)).ro_flag = ((rt_r_ichk((*(P863)rt_nil_check(F->pm_1675)).mode) == (((rt_int)1LL))) || (rt_r_ichk((*(P863)rt_nil_check(F->pm_1675)).mode) == (((rt_int)4LL))));
f_define_160(F->p_1694, rt_r_ichk((*(P851)rt_nil_check(F->d_470)).line));
F->pm_1675 = (*(P863)rt_nil_check(F->pm_1675)).next;
F->pn_1688 = (*(P851)rt_nil_check(F->pn_1688)).next;
}
if ((rt_r_ichk((*(P857)rt_nil_check((*(P861)rt_nil_check(F->y_471)).result)).kind) != (((rt_int)9LL)))) {
if (((*(P851)rt_nil_check(F->d_470)).b != NULL)) {
F->rc_1700 = NULL;
F->rt_1701 = NULL;
F->rt_1701 = f_resolve_subtype_257((*(P851)rt_nil_check(F->d_470)).b, &F->rc_1700);
g_func_rc_916 = f_freeze_201(F->rc_1700, (*(P861)rt_nil_check(F->y_471)).result);
}
f_put_27(g_fields_buf_902, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_226((*(P861)rt_nil_check(F->y_471)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P857)rt_nil_check((*(P861)rt_nil_check(F->y_471)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_314((*(P857)rt_nil_check((*(P861)rt_nil_check(F->y_471)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_1690 = (((rt_int)(((((P844)rt_nil_check(F->pfin_1683))->all)).len)) > ((rt_int)0LL));
if (rt_r_echk(F->has_pfin_1690)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_501(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_445((*(P851)rt_nil_check(F->d_470)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_445((*(P851)rt_nil_check(F->d_470)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_1702 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_1703 = NULL;
F->leave_1703 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_1702), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_897, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_1702), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_1702), rt_str(", ", 2)), f_bool_text_345(f_has_pragmat_445((*(P851)rt_nil_check(F->d_470)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_345(f_has_pragmat_445((*(P851)rt_nil_check(F->d_470)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P844)rt_nil_check((*(P851)rt_nil_check(F->d_470)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_501(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_1682 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->copy_back_1682))->all), rt_str("  ", 2)), (((P844)rt_nil_check(F->leave_1703))->all)); b_; }));
F->nonrec_end_1689 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P844)rt_nil_check(F->leave_1703))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
f_declare_labels_482((*(P851)rt_nil_check(F->d_470)).c);
f_declare_body_381((*(P851)rt_nil_check(F->d_470)).c);
{
F->xu_1704 = rt_str_copy(f_open_unhandled_495((*(P851)rt_nil_check(F->d_470)).c));
f_body_elements_491((*(P851)rt_nil_check(F->d_470)).c);
f_close_fins_465(NULL);
f_close_unhandled_497(&F->xu_1704);
}
if ((F->nonrec_end_1689 != NULL)) {
f_emit_29(&(((P844)rt_nil_check(F->nonrec_end_1689))->all));
f_pop_cleanup_502();
}
if (rt_r_echk(F->has_pfin_1690)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P844)rt_nil_check(F->pfin_1683))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_502();
F->copy_back_1682 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->copy_back_1682))->all), rt_str("  ", 2)), (((P844)rt_nil_check(F->pfin_1683))->all)); b_; }));
}
f_close_scope_170();
g_fctx_905 = (*(P868)rt_nil_check(g_fctx_905)).next;
g_cur_level_904 = rt_sub(rt_r_ichk(g_cur_level_904), ((rt_int)1LL));
if (((((rt_int)(((((P844)rt_nil_check(F->args_1674))->all)).len)) == ((rt_int)0LL)) || (rt_r_ichk((*(P861)rt_nil_check(F->y_471)).kind) == (((rt_int)9LL))))) {
F->args_1674 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if ((rt_r_ichk((*(P861)rt_nil_check(F->y_471)).kind) == (((rt_int)9LL)))) {
F->args_1674 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1679 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_226((*(P861)rt_nil_check(F->y_471)).result)), rt_str(" ", 1)), (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_471)).cname))->all)), rt_str("(", 1)), (((P844)rt_nil_check(F->args_1674))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_896, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->head_1679))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->head_1679))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_910, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P844)rt_nil_check(F->frame_1680))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_910, g_fields_buf_902);
f_put_27(g_out_frames_910, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if ((rt_r_ichk((*(P861)rt_nil_check(F->y_471)).kind) == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P844)rt_nil_check(F->frame_1680))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P844)rt_nil_check(F->frame_1680))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_898, g_code_901);
if ((rt_r_ichk((*(P857)rt_nil_check((*(P861)rt_nil_check(F->y_471)).result)).kind) != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P844)rt_nil_check(F->copy_back_1682))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_898, &(((P844)rt_nil_check(F->copy_back_1682))->all));
}
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P844)rt_nil_check(F->copy_back_1682))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_898, &(((P844)rt_nil_check(F->copy_back_1682))->all));
}
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_901 = F->saved_code_1667;
g_fields_buf_902 = F->saved_fields_1668;
g_in_func_903 = rt_r_echk(F->saved_in_1669);
g_func_sym_915 = F->saved_sym_1670;
g_exits_924 = F->saved_exits_1671;
g_gotos_925 = F->saved_gotos_1672;
g_frames_926 = rt_r_ichk(F->saved_frames_1673);
g_handlers_927 = F->saved_handlers_1676;
g_cleanups_928 = F->saved_cleanups_1677;
g_fins_913 = F->saved_fins_1684;
g_func_rc_916 = F->saved_rc_1685;
g_cap_ret_917 = F->saved_ret_1686;
g_cap_rflag_918 = F->saved_rflag_1687;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_474(P851 d_473) {
  struct f_waits_of_474fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_473 = d_473;
F->w_1705 = NULL;
F->w_1705 = g_cap_waits_907;
while ((F->w_1705 != NULL)) {
if (((*(P880)rt_nil_check(F->w_1705)).d == F->d_473)) {
F->result_ = (((P844)rt_nil_check((*(P880)rt_nil_check(F->w_1705)).w))->all);
goto ret_;
}
F->w_1705 = (*(P880)rt_nil_check(F->w_1705)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_476(P851 elems_475) {
  struct f_task_waits_476fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_475 = elems_475;
F->e_1706 = NULL;
F->e_1706 = F->elems_475;
F->r_1707 = NULL;
F->r_1707 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1706 != NULL)) {
if ((rt_r_ichk((*(P851)rt_nil_check(F->e_1706)).kind) == (((rt_int)50LL)))) {
F->r_1707 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_1707))->all), rt_str(" rt_await_decl(&", 16)), (((P844)rt_nil_check((*(P861)rt_nil_check(f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_1706)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if (((rt_r_ichk((*(P851)rt_nil_check(F->e_1706)).kind) == (((rt_int)47LL))) || ((rt_r_ichk((*(P851)rt_nil_check(F->e_1706)).kind) == (((rt_int)48LL))) && ((rt_r_ichk((*(P851)rt_nil_check(F->e_1706)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P851)rt_nil_check(F->e_1706)).flag) == ((rt_int)3LL)))))) {
F->r_1707 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->r_1707))->all), f_waits_of_474(F->e_1706)); b_; }));
}
F->e_1706 = (*(P851)rt_nil_check(F->e_1706)).next;
}
F->result_ = (((P844)rt_nil_check(F->r_1707))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_478(P851 elems_477) {
  struct f_await_tasks_478fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_477 = elems_477;
F->w_1708 = rt_str_copy(f_task_waits_476(F->elems_477));
if ((((rt_int)((F->w_1708).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_1708);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_480(P851 elems_479) {
  struct f_capsule_elements_480fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_479 = elems_479;
F->e_1709 = NULL;
F->e_1709 = F->elems_479;
while ((F->e_1709 != NULL)) {
if (((rt_r_ichk((*(P851)rt_nil_check(F->e_1709)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P851)rt_nil_check(F->e_1709)).kind) <= (((rt_int)36LL))))) {
f_start_labels_483();
}
f_element_451(F->e_1709);
F->e_1709 = (*(P851)rt_nil_check(F->e_1709)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_482(P851 elems_481) {
  struct f_declare_labels_482fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_481 = elems_481;
F->e_1710 = NULL;
F->e_1710 = F->elems_481;
while ((F->e_1710 != NULL)) {
F->l_1711 = NULL;
F->l_1711 = (*(P851)rt_nil_check(F->e_1710)).labels;
while ((F->l_1711 != NULL)) {
F->x_1712 = NULL;
F->x_1712 = g_gotos_925;
while (((F->x_1712 != NULL) && (rt_r_ichk((*(P876)rt_nil_check(F->x_1712)).depth) == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P844)rt_nil_check((*(P876)rt_nil_check(F->x_1712)).match))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->l_1711)).name))->all))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->l_1711)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P844)rt_nil_check((*(P851)rt_nil_check(F->l_1711)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_1712 = (*(P876)rt_nil_check(F->x_1712)).next;
}
{ R877 *cell1713 = rt_alloc(sizeof(R877));
(*cell1713).match = NULL;
(*cell1713).label = NULL;
(*cell1713).next = NULL;
F->x_1712 = cell1713;
}
(*(P876)rt_nil_check(F->x_1712)).match = (*(P851)rt_nil_check(F->l_1711)).name;
(*(P876)rt_nil_check(F->x_1712)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P876)rt_nil_check(F->x_1712)).depth = rt_neg(((rt_int)1LL));
(*(P876)rt_nil_check(F->x_1712)).next = g_gotos_925;
g_gotos_925 = F->x_1712;
F->l_1711 = (*(P851)rt_nil_check(F->l_1711)).next;
}
F->e_1710 = (*(P851)rt_nil_check(F->e_1710)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_483(void) {
  struct f_start_labels_483fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1714 = NULL;
F->x_1714 = g_gotos_925;
while (((F->x_1714 != NULL) && (rt_r_ichk((*(P876)rt_nil_check(F->x_1714)).depth) == rt_neg(((rt_int)1LL))))) {
(*(P876)rt_nil_check(F->x_1714)).depth = rt_r_ichk(g_frames_926);
F->x_1714 = (*(P876)rt_nil_check(F->x_1714)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P876 f_goto_label_485(rstr *name_484) {
  struct f_goto_label_485fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_484 = name_484;
F->x_1715 = NULL;
F->x_1715 = g_gotos_925;
while ((F->x_1715 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P876)rt_nil_check(F->x_1715)).match))->all), (*F->name_484))) {
F->result_ = F->x_1715;
goto ret_;
}
F->x_1715 = (*(P876)rt_nil_check(F->x_1715)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_487(P851 e_486) {
  struct f_has_return_487fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_486 = e_486;
F->x_1716 = NULL;
F->x_1716 = F->e_486;
while ((F->x_1716 != NULL)) {
if ((rt_r_ichk((*(P851)rt_nil_check(F->x_1716)).kind) == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if ((((((rt_r_ichk((*(P851)rt_nil_check(F->x_1716)).kind) != (((rt_int)45LL))) && (rt_r_ichk((*(P851)rt_nil_check(F->x_1716)).kind) != (((rt_int)46LL)))) && (rt_r_ichk((*(P851)rt_nil_check(F->x_1716)).kind) != (((rt_int)50LL)))) && (rt_r_ichk((*(P851)rt_nil_check(F->x_1716)).kind) != (((rt_int)47LL)))) && (rt_r_ichk((*(P851)rt_nil_check(F->x_1716)).kind) != (((rt_int)51LL))))) {
if ((((((*(P851)rt_nil_check(F->x_1716)).a != NULL) && f_has_return_487((*(P851)rt_nil_check(F->x_1716)).a)) || (((*(P851)rt_nil_check(F->x_1716)).b != NULL) && f_has_return_487((*(P851)rt_nil_check(F->x_1716)).b))) || (((*(P851)rt_nil_check(F->x_1716)).c != NULL) && f_has_return_487((*(P851)rt_nil_check(F->x_1716)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_1716 = (*(P851)rt_nil_check(F->x_1716)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_489(P851 elems_488) {
  struct f_capsule_body_489fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_488 = elems_488;
F->saved_ret_1717 = NULL;
F->saved_ret_1717 = g_cap_ret_917;
F->saved_flag_1718 = NULL;
F->saved_flag_1718 = g_cap_rflag_918;
F->saved_frames_1719 = RT_R_IUNDEF;
F->saved_frames_1719 = rt_r_ichk(g_ret_frames_919);
F->e_1720 = NULL;
F->e_1720 = F->elems_488;
if ((!f_has_return_487(F->elems_488))) {
g_cap_ret_917 = NULL;
g_cap_rflag_918 = NULL;
f_capsule_elements_480(F->elems_488);
} else {
g_cap_rflag_918 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(g_cap_rflag_918))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_1720 != NULL)) {
F->stmt_1721 = RT_R_EUNDEF;
F->stmt_1721 = ((rt_r_ichk((*(P851)rt_nil_check(F->e_1720)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P851)rt_nil_check(F->e_1720)).kind) <= (((rt_int)36LL))));
g_cap_ret_917 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_919 = rt_r_ichk(g_frames_926);
if (rt_r_echk(F->stmt_1721)) {
f_start_labels_483();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P844)rt_nil_check(g_cap_rflag_918))->all)), rt_str(") {", 3)); b_; }));
}
f_element_451(F->e_1720);
if (rt_r_echk(F->stmt_1721)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(g_cap_ret_917))->all), rt_str(": ;", 3)); b_; }));
F->e_1720 = (*(P851)rt_nil_check(F->e_1720)).next;
}
}
g_cap_ret_917 = F->saved_ret_1717;
g_cap_rflag_918 = F->saved_flag_1718;
g_ret_frames_919 = rt_r_ichk(F->saved_frames_1719);
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_491(P851 elems_490) {
  struct f_body_elements_491fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_490 = elems_490;
f_capsule_elements_480(F->elems_490);
f_await_tasks_478(F->elems_490);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_493(P851 elems_492) {
  struct f_gen_body_493fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_492 = elems_492;
F->saved_1722 = NULL;
F->saved_1722 = g_fins_913;
F->saved_gotos_1723 = NULL;
F->saved_gotos_1723 = g_gotos_925;
f_open_scope_169();
f_declare_labels_482(F->elems_492);
f_declare_body_381(F->elems_492);
{
F->xu_1724 = rt_str_copy(f_open_unhandled_495(F->elems_492));
f_body_elements_491(F->elems_492);
f_close_fins_465(F->saved_1722);
f_close_unhandled_497(&F->xu_1724);
}
f_close_scope_170();
g_gotos_925 = F->saved_gotos_1723;
ret_:
  RT_FPOP();
  return;
}

static rstr f_open_unhandled_495(P851 elems_494) {
  struct f_open_unhandled_495fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_494 = elems_494;
F->e_1725 = NULL;
F->e_1725 = F->elems_494;
F->conds_1726 = NULL;
F->conds_1726 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->e_1725 != NULL)) {
if ((rt_r_ichk((*(P851)rt_nil_check(F->e_1725)).kind) == (((rt_int)49LL)))) {
F->conds_1726 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->conds_1726))->all), rt_str(" || rt_xcur == ", 15)), (((P844)rt_nil_check((*(P861)rt_nil_check(f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_1725)).name))->all)))).cname))->all)); b_; }));
}
F->e_1725 = (*(P851)rt_nil_check(F->e_1725)).next;
}
if ((((rt_int)(((((P844)rt_nil_check(F->conds_1726))->all)).len)) == ((rt_int)1LL))) {
F->result_ = rt_str("", 0);
goto ret_;
}
{
F->f_1727 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xu", 2); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1727), rt_str("; if (RT_TRY(", 13)), F->f_1727), rt_str(")) {", 4)); b_; }));
f_push_cleanup_501(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1727), rt_str(");", 2)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(F->f_1727, rt_str(":", 1)), (((P844)rt_nil_check(F->conds_1726))->all));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_close_unhandled_497(rstr *xu_496) {
  struct f_close_unhandled_497fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->xu_496 = xu_496;
F->i_1728 = RT_R_IUNDEF;
F->i_1728 = ((rt_int)1LL);
if (rt_str_eq((*F->xu_496), rt_str("", 0))) {
goto ret_;
}
while ((rt_r_echk(rt_str_get((*F->xu_496), rt_r_ichk(F->i_1728))) != 58)) {
F->i_1728 = rt_add(rt_r_ichk(F->i_1728), ((rt_int)1LL));
}
{
F->f_1729 = rt_str_copy(rt_str_slice((*F->xu_496), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1728), ((rt_int)1LL))));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1729), rt_str("); } else { RT_POP(", 19)), F->f_1729), rt_str("); if (", 7)), rt_str_slice((*F->xu_496), rt_add(rt_r_ichk(F->i_1728), ((rt_int)1LL)), ((rt_int)(((*F->xu_496)).len)))), rt_str(") rt_raise(rt_exc(", 18)), f_q_18()), rt_str("X_UNHANDLED", 11)), f_q_18()), rt_str(")); rt_raise(rt_xcur); }", 24)); b_; }));
f_pop_cleanup_502();
}
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_499(rt_int upto_498) {
  struct f_pop_frames_499fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_498 = upto_498;
F->i_1730 = RT_R_IUNDEF;
F->i_1730 = rt_r_ichk(g_frames_926);
F->c_1731 = NULL;
F->c_1731 = g_cleanups_928;
while ((rt_r_ichk(F->i_1730) > F->upto_498)) {
f_emit_29(&(((P844)rt_nil_check((*(P855)rt_nil_check(F->c_1731)).s))->all));
F->c_1731 = (*(P855)rt_nil_check(F->c_1731)).next;
F->i_1730 = rt_sub(rt_r_ichk(F->i_1730), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_501(rstr *s_500) {
  struct f_push_cleanup_501fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_500 = s_500;
F->c_1732 = NULL;
{ R856 *cell1733 = rt_alloc(sizeof(R856));
(*cell1733).s = NULL;
(*cell1733).next = NULL;
F->c_1732 = cell1733;
}
(*(P855)rt_nil_check(F->c_1732)).s = f_mk_3(&(*F->s_500));
(*(P855)rt_nil_check(F->c_1732)).next = g_cleanups_928;
g_cleanups_928 = F->c_1732;
g_frames_926 = rt_add(rt_r_ichk(g_frames_926), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_502(void) {
  struct f_pop_cleanup_502fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_928 = (*(P855)rt_nil_check(g_cleanups_928)).next;
g_frames_926 = rt_sub(rt_r_ichk(g_frames_926), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_504(P851 s_503) {
  struct f_gen_statement_504fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_503 = s_503;
F->label_1734 = NULL;
F->gl_1735 = NULL;
F->gl_1735 = (*(P851)rt_nil_check(F->s_503)).labels;
while ((F->gl_1735 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P876)rt_nil_check(f_goto_label_485(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->gl_1735)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_1735 = (*(P851)rt_nil_check(F->gl_1735)).next;
}
if (((*(P851)rt_nil_check(F->s_503)).tag != NULL)) {
F->x_1736 = NULL;
{ R877 *cell1737 = rt_alloc(sizeof(R877));
(*cell1737).match = NULL;
(*cell1737).label = NULL;
(*cell1737).next = NULL;
F->x_1736 = cell1737;
}
F->label_1734 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P876)rt_nil_check(F->x_1736)).match = (*(P851)rt_nil_check(F->s_503)).tag;
(*(P876)rt_nil_check(F->x_1736)).label = F->label_1734;
(*(P876)rt_nil_check(F->x_1736)).depth = rt_r_ichk(g_frames_926);
(*(P876)rt_nil_check(F->x_1736)).next = g_exits_924;
g_exits_924 = F->x_1736;
}
{ rt_int sel1738 = rt_r_ichk((*(P851)rt_nil_check(F->s_503)).kind);
if (0 || (sel1738 == (((rt_int)20LL)))) {
f_st_assign_506(F->s_503);
} else if (0 || (sel1738 == (((rt_int)21LL)))) {
f_st_call_508(F->s_503);
} else if (0 || (sel1738 == (((rt_int)22LL)))) {
f_st_if_510(F->s_503);
} else if (0 || (sel1738 == (((rt_int)23LL)))) {
f_st_case_512(F->s_503);
} else if (0 || (sel1738 == (((rt_int)24LL)))) {
f_st_repeat_514(F->s_503);
} else if (0 || (sel1738 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_493((*(P851)rt_nil_check(F->s_503)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1738 == (((rt_int)27LL)))) {
f_st_exit_516(F->s_503);
} else if (0 || (sel1738 == (((rt_int)29LL)))) {
{
F->x_1739 = NULL;
F->x_1739 = f_goto_label_485(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->s_503)).name))->all));
if ((F->x_1739 == NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_503)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->s_503)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_499(rt_r_ichk((*(P876)rt_nil_check(F->x_1739)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P844)rt_nil_check((*(P876)rt_nil_check(F->x_1739)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel1738 == (((rt_int)28LL)))) {
f_st_return_518(F->s_503);
} else if (0 || (sel1738 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_525(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->s_503)).name))->all), rt_r_ichk((*(P851)rt_nil_check(F->s_503)).line))), rt_str(");", 2)); b_; }));
} else if (0 || (sel1738 == (((rt_int)31LL)))) {
if ((g_handlers_927 == NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_503)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P844)rt_nil_check((*(P855)rt_nil_check(g_handlers_927)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1738 == (((rt_int)26LL)))) {
f_st_guard_527(F->s_503);
} else if (0 || (sel1738 == (((rt_int)32LL)))) {
f_st_alloc_529(F->s_503);
} else if (0 || (sel1738 == (((rt_int)34LL)))) {
f_st_create_533(F->s_503);
} else if (0 || (sel1738 == (((rt_int)35LL)))) {
f_st_wait_562(F->s_503);
} else if (0 || (sel1738 == (((rt_int)36LL)))) {
f_st_region_570(F->s_503);
} else {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_503)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P851)rt_nil_check(F->s_503)).tag != NULL)) {
g_exits_924 = (*(P876)rt_nil_check(g_exits_924)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->label_1734))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_506(P851 s_505) {
  struct f_st_assign_506fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_505 = s_505;
F->lv_1740 = NULL;
F->t_1741 = NULL;
F->vt_1742 = NULL;
F->c_1743 = NULL;
F->ro_1744 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->s_505)).a)).kind) == (((rt_int)10LL))) && ((*(P851)rt_nil_check((*(P851)rt_nil_check(F->s_505)).a)).b != NULL)) && (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->s_505)).a)).b)).kind) == (((rt_int)16LL))))) {
f_lvalue_649((*(P851)rt_nil_check((*(P851)rt_nil_check(F->s_505)).a)).a, &F->lv_1740, &F->t_1741, &F->c_1743, &F->ro_1744);
while ((rt_r_ichk((*(P857)rt_nil_check(F->t_1741)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_415(F->t_1741);
F->lv_1740 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_641(&(((P844)rt_nil_check(F->lv_1740))->all), F->t_1741); b_; }));
F->t_1741 = (*(P857)rt_nil_check(F->t_1741)).target;
}
if (((rt_r_ichk((*(P857)rt_nil_check(F->t_1741)).kind) == (((rt_int)15LL))) && ((*(P857)rt_nil_check(F->t_1741)).tparams == NULL))) {
F->t_1741 = (*(P857)rt_nil_check(F->t_1741)).under;
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_1741)).kind) == (((rt_int)15LL)))) {
F->lv_1740 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->lv_1740))->all), rt_str(".all", 4)); b_; }));
F->t_1741 = (*(P857)rt_nil_check(F->t_1741)).under;
}
if ((((!rt_r_echk(F->ro_1744)) && (rt_r_ichk((*(P857)rt_nil_check(F->t_1741)).kind) == (((rt_int)6LL)))) && (rt_r_ichk((*(P857)rt_nil_check(F->t_1741)).ndim) == ((rt_int)1LL)))) {
F->lo_1745 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->s_505)).a)).b)).a, (*(P857)rt_nil_check(F->t_1741)).idx, &F->vt_1742));
F->hi_1746 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->s_505)).a)).b)).b, (*(P857)rt_nil_check(F->t_1741)).idx, &F->vt_1742));
F->v_1747 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->s_505)).b, F->t_1741, &F->vt_1742));
f_need_slice_661(F->t_1741);
f_check_type_224(F->vt_1742, F->t_1741, rt_r_ichk((*(P851)rt_nil_check(F->s_505)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_226(F->t_1741)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_226(F->t_1741)), rt_str("(", 1)), (((P844)rt_nil_check(F->lv_1740))->all)), rt_str(", ", 2)), F->lo_1745), rt_str(", ", 2)), F->hi_1746), rt_str("); as_", 6)), f_ctype_226(F->t_1741)), rt_str("(&sl_, ", 7)), F->v_1747), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((rt_r_echk(F->ro_1744) || (rt_r_ichk((*(P857)rt_nil_check(F->t_1741)).kind) != (((rt_int)5LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_505)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_1748 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->s_505)).a)).b)).a, g_ty_int_931, &F->vt_1742));
F->hi_1749 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->s_505)).a)).b)).b, g_ty_int_931, &F->vt_1742));
F->v_1750 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->s_505)).b, g_ty_string_935, &F->vt_1742));
f_check_type_224(F->vt_1742, g_ty_string_935, rt_r_ichk((*(P851)rt_nil_check(F->s_505)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P844)rt_nil_check(F->lv_1740))->all)), rt_str(", ", 2)), F->lo_1748), rt_str(", ", 2)), F->hi_1749), rt_str(", ", 2)), F->v_1750), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_649((*(P851)rt_nil_check(F->s_505)).a, &F->lv_1740, &F->t_1741, &F->c_1743, &F->ro_1744);
if (rt_r_echk(F->ro_1744)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_505)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_297(F->t_1741)) && (!f_exports_op_403((*(P857)rt_nil_check(F->t_1741)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_505)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_1741)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1751 = rt_str_copy(f_gexpr_in_688((*(P851)rt_nil_check(F->s_505)).b, F->t_1741, F->c_1743, &F->vt_1742));
f_check_type_224(F->vt_1742, F->t_1741, rt_r_ichk((*(P851)rt_nil_check(F->s_505)).line));
f_ptr_subtype_check_435(F->t_1741, F->c_1743, (*(P851)rt_nil_check(F->s_505)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_362(&(((P844)rt_nil_check(F->lv_1740))->all), F->t_1741, &F->v_1751, F->c_1743); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_508(P851 s_507) {
  struct f_st_call_508fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_507 = s_507;
F->c_1752 = NULL;
F->c_1752 = (*(P851)rt_nil_check(F->s_507)).a;
F->t_1753 = NULL;
if (((rt_r_ichk((*(P851)rt_nil_check(F->c_1752)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P851)rt_nil_check(F->c_1752)).kind) == (((rt_int)12LL))))) {
F->x_1754 = NULL;
F->x_1754 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P851)rt_nil_check(F->c_1752)).line));
(*(P851)rt_nil_check(F->x_1754)).a = F->c_1752;
F->c_1752 = F->x_1754;
}
if ((rt_r_ichk((*(P851)rt_nil_check(F->c_1752)).kind) != (((rt_int)10LL)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_507)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_810(F->c_1752, 1, &F->t_1753), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_510(P851 s_509) {
  struct f_st_if_510fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_509 = s_509;
F->a_1755 = NULL;
F->a_1755 = (*(P851)rt_nil_check(F->s_509)).a;
F->first_1756 = RT_R_EUNDEF;
F->first_1756 = 1;
F->t_1757 = NULL;
F->taken_1758 = RT_R_EUNDEF;
F->taken_1758 = 0;
F->ok_1759 = RT_R_EUNDEF;
F->mv_1760 = NULL;
while (((F->a_1755 != NULL) && (!rt_r_echk(F->taken_1758)))) {
F->mv_1760 = f_meval_343((*(P851)rt_nil_check(F->a_1755)).a, &F->ok_1759);
if (((rt_r_echk(F->ok_1759) && (rt_r_ichk((*(P870)rt_nil_check(F->mv_1760)).kind) == (((rt_int)2LL)))) && (rt_r_ichk((*(P870)rt_nil_check(F->mv_1760)).i) == ((rt_int)0LL)))) {
F->a_1755 = (*(P851)rt_nil_check(F->a_1755)).next;
} else {
if ((rt_r_echk(F->ok_1759) && (rt_r_ichk((*(P870)rt_nil_check(F->mv_1760)).kind) == (((rt_int)2LL))))) {
F->taken_1758 = 1;
if (rt_r_echk(F->first_1756)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_1761 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->a_1755)).a, g_ty_bool_932, &F->t_1757));
f_check_type_224(F->t_1757, g_ty_bool_932, rt_r_ichk((*(P851)rt_nil_check(F->s_509)).line));
if (rt_r_echk(F->first_1756)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1761), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1761), rt_str(") {", 3)); b_; }));
}
}
F->first_1756 = 0;
f_gen_body_493((*(P851)rt_nil_check(F->a_1755)).b);
F->a_1755 = (*(P851)rt_nil_check(F->a_1755)).next;
}
}
if (((rt_r_ichk((*(P851)rt_nil_check(F->s_509)).flag) == ((rt_int)1LL)) && (!rt_r_echk(F->taken_1758)))) {
if (rt_r_echk(F->first_1756)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_1756 = 0;
f_gen_body_493((*(P851)rt_nil_check(F->s_509)).b);
}
if ((!rt_r_echk(F->first_1756))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_case_512(P851 s_511) {
  struct f_st_case_512fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_511 = s_511;
F->st_1762 = NULL;
F->vt_1763 = NULL;
F->first_1764 = RT_R_EUNDEF;
F->first_1764 = 1;
F->a_1765 = NULL;
F->a_1765 = (*(P851)rt_nil_check(F->s_511)).b;
F->sel_1766 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->s_511)).a, NULL, &F->st_1762));
F->tmp_1767 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_226(F->st_1762)), rt_str(" ", 1)), F->tmp_1767), rt_str(" = ", 3)), F->sel_1766), rt_str(";", 1)); b_; }));
while ((F->a_1765 != NULL)) {
F->lab_1768 = NULL;
F->lab_1768 = (*(P851)rt_nil_check(F->a_1765)).a;
F->conds_1769 = NULL;
F->conds_1769 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1768 != NULL)) {
if (((*(P851)rt_nil_check(F->lab_1768)).b == NULL)) {
F->v_1770 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->lab_1768)).a, F->st_1762, &F->vt_1763));
f_check_type_224(F->vt_1763, F->st_1762, rt_r_ichk((*(P851)rt_nil_check(F->s_511)).line));
F->conds_1769 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->conds_1769))->all), rt_str(" || ", 4)), f_eq_code_369(F->st_1762, &F->tmp_1767, &F->v_1770)); b_; }));
} else {
F->lo_1771 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->lab_1768)).a, F->st_1762, &F->vt_1763));
F->hi_1772 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->lab_1768)).b, F->st_1762, &F->vt_1763));
F->conds_1769 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->conds_1769))->all), rt_str(" || (", 5)), F->tmp_1767), rt_str(" >= ", 4)), F->lo_1771), rt_str(" && ", 4)), F->tmp_1767), rt_str(" <= ", 4)), F->hi_1772), rt_str(")", 1)); b_; }));
}
F->lab_1768 = (*(P851)rt_nil_check(F->lab_1768)).next;
}
if (rt_r_echk(F->first_1764)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P844)rt_nil_check(F->conds_1769))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P844)rt_nil_check(F->conds_1769))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1764 = 0;
f_gen_body_493((*(P851)rt_nil_check(F->a_1765)).b);
F->a_1765 = (*(P851)rt_nil_check(F->a_1765)).next;
}
if (rt_r_echk(F->first_1764)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P851)rt_nil_check(F->s_511)).flag) == ((rt_int)1LL))) {
f_gen_body_493((*(P851)rt_nil_check(F->s_511)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_514(P851 s_513) {
  struct f_st_repeat_514fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_513 = s_513;
F->t_1773 = NULL;
F->c_1774 = NULL;
if ((rt_r_ichk((*(P851)rt_nil_check(F->s_513)).flag) == ((rt_int)0LL))) {
F->cond_1775 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->s_513)).a, g_ty_bool_932, &F->t_1773));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1775), rt_str(") {", 3)); b_; }));
f_gen_body_493((*(P851)rt_nil_check(F->s_513)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1773 = f_resolve_subtype_257((*(P851)rt_nil_check(F->s_513)).a, &F->c_1774);
F->c_1774 = f_base_cons_218(F->t_1773, F->c_1774);
if ((((*(P857)rt_nil_check(f_base_of_215(F->t_1773))).kind == (((rt_int)4LL))) && ((*(P853)rt_nil_check(F->c_1774)).lo == NULL))) {
F->c_1774 = f_new_cons_176();
(*(P853)rt_nil_check(F->c_1774)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P853)rt_nil_check(F->c_1774)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P857)rt_nil_check(f_base_of_215(F->t_1773))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P853)rt_nil_check(F->c_1774)).lo == NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_513)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1776 = rt_str_copy(f_storage_456(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->s_513)).name))->all), F->t_1773));
F->lov_1777 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1778 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1779 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1780 = NULL;
F->y_1780 = f_new_sym_173((((rt_int)2LL)), (*(P851)rt_nil_check(F->s_513)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1777), rt_str(" = ", 3)), (((P844)rt_nil_check((*(P853)rt_nil_check(F->c_1774)).lo))->all)), rt_str(", ", 2)), F->hiv_1778), rt_str(" = ", 3)), (((P844)rt_nil_check((*(P853)rt_nil_check(F->c_1774)).hi))->all)), rt_str(";", 1)); b_; }));
if ((rt_r_ichk((*(P851)rt_nil_check(F->s_513)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1779), rt_str(" = ", 3)), F->hiv_1778), rt_str("; ", 2)), F->it_1779), rt_str(" >= ", 4)), F->lov_1777), rt_str("; ", 2)), F->it_1779), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1779), rt_str(" = ", 3)), F->lov_1777), rt_str("; ", 2)), F->it_1779), rt_str(" <= ", 4)), F->hiv_1778), rt_str("; ", 2)), F->it_1779), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1776, rt_str(" = ", 3)), F->it_1779), rt_str(";", 1)); b_; }));
f_open_scope_169();
(*(P861)rt_nil_check(F->y_1780)).t = F->t_1773;
(*(P861)rt_nil_check(F->y_1780)).c = F->c_1774;
f_bind_459(F->y_1780, &F->access_1776);
(*(P861)rt_nil_check(F->y_1780)).ro_flag = 1;
f_define_160(F->y_1780, rt_r_ichk((*(P851)rt_nil_check(F->s_513)).line));
f_gen_body_493((*(P851)rt_nil_check(F->s_513)).b);
f_close_scope_170();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_516(P851 s_515) {
  struct f_st_exit_516fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_515 = s_515;
F->x_1781 = NULL;
F->x_1781 = g_exits_924;
while ((F->x_1781 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P876)rt_nil_check(F->x_1781)).match))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->s_515)).name))->all))) {
f_pop_frames_499(rt_r_ichk((*(P876)rt_nil_check(F->x_1781)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P844)rt_nil_check((*(P876)rt_nil_check(F->x_1781)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1781 = (*(P876)rt_nil_check(F->x_1781)).next;
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_515)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P844)rt_nil_check((*(P851)rt_nil_check(F->s_515)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_518(P851 s_517) {
  struct f_st_return_518fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_517 = s_517;
F->vt_1782 = NULL;
if ((g_cap_ret_917 != NULL)) {
if (((*(P851)rt_nil_check(F->s_517)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_517)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_499(rt_r_ichk(g_ret_frames_919));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(g_cap_rflag_918))->all), rt_str(" = 1; goto ", 11)), (((P844)rt_nil_check(g_cap_ret_917))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!rt_r_echk(g_in_func_903))) {
f_pop_frames_499(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check((*(P861)rt_nil_check(g_func_sym_915)).result)).kind) == (((rt_int)9LL)))) {
if (((*(P851)rt_nil_check(F->s_517)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_517)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_499(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P851)rt_nil_check(F->s_517)).a == NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_517)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1783 = rt_str_copy(f_gexpr_in_688((*(P851)rt_nil_check(F->s_517)).a, (*(P861)rt_nil_check(g_func_sym_915)).result, g_func_rc_916, &F->vt_1782));
f_check_type_224(F->vt_1782, (*(P861)rt_nil_check(g_func_sym_915)).result, rt_r_ichk((*(P851)rt_nil_check(F->s_517)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_522((*(P861)rt_nil_check(g_func_sym_915)).result, g_func_rc_916, &F->v_1783)), rt_str(";", 1)); b_; }));
f_pop_frames_499(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_522(P857 t_519, P853 c_520, rstr *v_521) {
  struct f_result_checked_522fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_519 = t_519;
F->c_520 = c_520;
F->v_521 = v_521;
if ((F->c_520 == NULL)) {
F->result_ = (*F->v_521);
goto ret_;
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->t_519)).kind) == (((rt_int)5LL))) && ((*(P853)rt_nil_check(F->c_520)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_521)), rt_str(", ", 2)), (((P844)rt_nil_check((*(P853)rt_nil_check(F->c_520)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->t_519)).kind) == (((rt_int)6LL))) && ((*(P853)rt_nil_check(F->c_520)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->t_519)), rt_str(" r_ = ", 6)), (*F->v_521)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P844)rt_nil_check((*(P853)rt_nil_check(F->c_520)).lo))->all)), rt_str(", ", 2)), (((P844)rt_nil_check((*(P853)rt_nil_check(F->c_520)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_205(F->t_519, F->c_520, &(*F->v_521));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_525(rstr *name_523, rt_int line_524) {
  struct f_exc_id_525fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_523 = name_523;
F->line_524 = line_524;
F->y_1784 = NULL;
F->y_1784 = f_lookup_155(&(*F->name_523));
if (((F->y_1784 != NULL) && (rt_r_ichk((*(P861)rt_nil_check(F->y_1784)).kind) == (((rt_int)7LL))))) {
F->result_ = (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_1784)).cname))->all);
goto ret_;
}
if (((((rt_int)(((*F->name_523)).len)) > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_523), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_523)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_524, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_523), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_527(P851 s_526) {
  struct f_st_guard_527fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_526 = s_526;
F->h_1785 = NULL;
F->h_1785 = (*(P851)rt_nil_check(F->s_526)).b;
F->first_1786 = RT_R_EUNDEF;
F->first_1786 = 1;
F->hv_1787 = NULL;
{
F->f_1788 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1789 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_501(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1788), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1788), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1788), rt_str(")) {", 4)); b_; }));
f_gen_body_493((*(P851)rt_nil_check(F->s_526)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1788), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_502();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1788), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1789), rt_str(" = rt_xcur;", 11)); b_; }));
{ R856 *cell1790 = rt_alloc(sizeof(R856));
(*cell1790).s = NULL;
(*cell1790).next = NULL;
F->hv_1787 = cell1790;
}
(*(P855)rt_nil_check(F->hv_1787)).s = f_mk_3(&F->x_1789);
(*(P855)rt_nil_check(F->hv_1787)).next = g_handlers_927;
g_handlers_927 = F->hv_1787;
{
F->h1_1791 = NULL;
F->h1_1791 = (*(P851)rt_nil_check(F->s_526)).b;
F->seen_1792 = NULL;
while ((F->h1_1791 != NULL)) {
F->n1_1793 = NULL;
F->n1_1793 = (*(P851)rt_nil_check(F->h1_1791)).a;
while ((F->n1_1793 != NULL)) {
if (f_seen_name_376(F->seen_1792, &(((P844)rt_nil_check((*(P851)rt_nil_check(F->n1_1793)).name))->all))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->n1_1793)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->n1_1793)).name))->all), rt_str(" has two handlers in one guard statement", 40)); b_; }));
}
F->seen_1792 = f_add_line_760(F->seen_1792, &(((P844)rt_nil_check((*(P851)rt_nil_check(F->n1_1793)).name))->all));
F->n1_1793 = (*(P851)rt_nil_check(F->n1_1793)).next;
}
F->h1_1791 = (*(P851)rt_nil_check(F->h1_1791)).next;
}
}
while ((F->h_1785 != NULL)) {
F->n_1794 = NULL;
F->n_1794 = (*(P851)rt_nil_check(F->h_1785)).a;
F->conds_1795 = NULL;
F->conds_1795 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1794 != NULL)) {
F->conds_1795 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->conds_1795))->all), rt_str(" || ", 4)), F->x_1789), rt_str(" == ", 4)), f_exc_id_525(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->n_1794)).name))->all), rt_r_ichk((*(P851)rt_nil_check(F->s_526)).line))); b_; }));
F->n_1794 = (*(P851)rt_nil_check(F->n_1794)).next;
}
if (rt_r_echk(F->first_1786)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P844)rt_nil_check(F->conds_1795))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P844)rt_nil_check(F->conds_1795))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1786 = 0;
f_gen_body_493((*(P851)rt_nil_check(F->h_1785)).b);
F->h_1785 = (*(P851)rt_nil_check(F->h_1785)).next;
}
if (rt_r_echk(F->first_1786)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P851)rt_nil_check(F->s_526)).flag) == ((rt_int)1LL))) {
f_gen_body_493((*(P851)rt_nil_check(F->s_526)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1789), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_927 = (*(P855)rt_nil_check(g_handlers_927)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_529(P851 s_528) {
  struct f_st_alloc_529fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_528 = s_528;
F->lv_1796 = NULL;
F->t_1797 = NULL;
F->target_1798 = NULL;
F->vt_1799 = NULL;
F->c_1800 = NULL;
F->tc_1801 = NULL;
F->ro_1802 = RT_R_EUNDEF;
F->d_1803 = NULL;
F->p_1804 = NULL;
F->a_1805 = NULL;
f_lvalue_649((*(P851)rt_nil_check(F->s_528)).a, &F->lv_1796, &F->t_1797, &F->c_1800, &F->ro_1802);
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_1797)).kind) != (((rt_int)8LL)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_528)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_415(F->t_1797);
F->d_1803 = (*(P857)rt_nil_check(F->t_1797)).decl;
F->target_1798 = (*(P857)rt_nil_check(F->t_1797)).target;
if ((f_list_len_67((*(P851)rt_nil_check(F->s_528)).b) != f_list_len_67((*(P851)rt_nil_check(F->d_1803)).b))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_528)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_67((*(P851)rt_nil_check(F->d_1803)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P851)rt_nil_check(F->d_1803)).b != NULL)) {
f_alloc_cell_427(F->s_528, &(((P844)rt_nil_check(F->lv_1796))->all), F->t_1797, F->c_1800);
goto ret_;
}
{
F->tcn_1806 = rt_str_copy(f_ctype_226(F->target_1798));
F->cell_1807 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_316(F->target_1798)) {
F->fn_1808 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_912 = 1;
g_uses_findyn_914 = 1;
f_put_27(g_out_protos_896, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1808), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1808), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_903)) {
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P844)rt_nil_check((*(P861)rt_nil_check(g_func_sym_915)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_1806), rt_str(" *)cell_)", 9)); b_; }), F->target_1798)); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_903)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1806), rt_str(" *", 2)), F->cell_1807), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1806), rt_str("), ", 3)), F->fn_1808), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1806), rt_str(" *", 2)), F->cell_1807), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1806), rt_str("), ", 3)), F->fn_1808), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1806), rt_str(" *", 2)), F->cell_1807), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1806), rt_str("));", 3)); b_; }));
}
f_open_scope_169();
f_bind_ptr_params_422((*(P851)rt_nil_check(F->d_1803)).d, f_ptr_args_417(F->c_1800), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P851)rt_nil_check(F->s_528)).line));
F->vt_1799 = f_resolve_subtype_257((*(P851)rt_nil_check(F->d_1803)).a, &F->tc_1801);
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1807), rt_str(")", 1)); b_; }), F->target_1798, F->tc_1801);
f_close_scope_170();
if (((*(P851)rt_nil_check(F->s_528)).c != NULL)) {
F->v_1809 = rt_str_copy(f_gexpr_in_688((*(P851)rt_nil_check(F->s_528)).c, F->target_1798, F->tc_1801, &F->vt_1799));
f_check_type_224(F->vt_1799, F->target_1798, rt_r_ichk((*(P851)rt_nil_check(F->s_528)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_362(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1807), rt_str(")", 1)); b_; }), F->target_1798, &F->v_1809, F->tc_1801); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->lv_1796))->all), rt_str(" = ", 3)), F->cell_1807), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_531(P851 e_530) {
  struct f_act_ref_531fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_530 = e_530;
F->lv_1810 = NULL;
F->t_1811 = NULL;
F->c_1812 = NULL;
F->ro_1813 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P851)rt_nil_check(F->e_530)).kind) == (((rt_int)7LL))) && rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_530)).name))->all), rt_str("ME", 2))) && (f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_643(F->e_530))) {
F->v_1814 = rt_str_copy(f_gexpr_680(F->e_530, g_ty_act_941, &F->t_1811));
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_1811)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_530)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1814;
goto ret_;
}
f_lvalue_649(F->e_530, &F->lv_1810, &F->t_1811, &F->c_1812, &F->ro_1813);
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_1811)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_530)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P844)rt_nil_check(F->lv_1810))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_533(P851 s_532) {
  struct f_st_create_533fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_532 = s_532;
F->y_1815 = NULL;
F->y_1815 = f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->s_532)).name))->all));
F->pm_1816 = NULL;
F->a_1817 = NULL;
F->a_1817 = (*(P851)rt_nil_check(F->s_532)).b;
F->lv_1818 = NULL;
F->lt_1819 = NULL;
F->vt_1820 = NULL;
F->lc_1821 = NULL;
F->ro_1822 = RT_R_EUNDEF;
if (((F->y_1815 != NULL) && (rt_r_ichk((*(P861)rt_nil_check(F->y_1815)).kind) == (((rt_int)10LL))))) {
F->y_1815 = f_instantiate_625(F->y_1815, (*(P851)rt_nil_check(F->s_532)).e, (*(P851)rt_nil_check(F->s_532)).b, rt_r_ichk((*(P851)rt_nil_check(F->s_532)).line));
}
if (((F->y_1815 == NULL) || (rt_r_ichk((*(P861)rt_nil_check(F->y_1815)).kind) != (((rt_int)9LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_532)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->s_532)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1816 = (*(P861)rt_nil_check(F->y_1815)).params;
{
F->at_1823 = NULL;
F->ac_1824 = NULL;
F->aro_1825 = RT_R_EUNDEF;
F->act_1826 = NULL;
F->nf_1827 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_649((*(P851)rt_nil_check(F->s_532)).a, &F->lv_1818, &F->at_1823, &F->ac_1824, &F->aro_1825);
if ((rt_r_ichk((*(P857)rt_nil_check(F->at_1823)).kind) == (((rt_int)14LL)))) {
F->act_1826 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_531((*(P851)rt_nil_check(F->s_532)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_1815)).cname))->all)), rt_str("fr *", 4)), F->nf_1827), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1827), rt_str(");", 2)); b_; }));
if ((rt_r_ichk((*(P861)rt_nil_check(F->y_1815)).level) > ((rt_int)0LL))) {
F->link_1828 = NULL;
F->link_1828 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1830 = ((rt_int)1LL), hi1831 = rt_sub(rt_r_ichk(g_cur_level_904), rt_r_ichk((*(P861)rt_nil_check(F->y_1815)).level));
for (rt_int it1832 = lo1830; it1832 <= hi1831; it1832++) {
F->i_1829 = it1832;
F->link_1828 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->link_1828))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1827, rt_str("->up = ", 7)), (((P844)rt_nil_check(F->link_1828))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_1817 != NULL) && (F->pm_1816 != NULL))) {
if ((rt_r_ichk((*(P863)rt_nil_check(F->pm_1816)).mode) == (((rt_int)1LL)))) {
F->v_1833 = rt_str_copy(f_gexpr_in_688(F->a_1817, (*(P863)rt_nil_check(F->pm_1816)).t, (*(P863)rt_nil_check(F->pm_1816)).c, &F->vt_1820));
f_check_type_224(F->vt_1820, (*(P863)rt_nil_check(F->pm_1816)).t, rt_r_ichk((*(P851)rt_nil_check(F->s_532)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1827, rt_str("->", 2)), (((P844)rt_nil_check((*(P863)rt_nil_check(F->pm_1816)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_365((*(P863)rt_nil_check(F->pm_1816)).t, &F->v_1833)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_649(F->a_1817, &F->lv_1818, &F->lt_1819, &F->lc_1821, &F->ro_1822);
f_check_type_224(F->lt_1819, (*(P863)rt_nil_check(F->pm_1816)).t, rt_r_ichk((*(P851)rt_nil_check(F->s_532)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1827, rt_str("->", 2)), (((P844)rt_nil_check((*(P863)rt_nil_check(F->pm_1816)).cfield))->all)), rt_str(" = &", 4)), (((P844)rt_nil_check(F->lv_1818))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_178((*(P863)rt_nil_check(F->pm_1816)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1827, rt_str("->", 2)), (((P844)rt_nil_check((*(P863)rt_nil_check(F->pm_1816)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_190(F->lt_1819, F->lc_1821)), rt_str("; ", 2)), F->nf_1827), rt_str("->", 2)), (((P844)rt_nil_check((*(P863)rt_nil_check(F->pm_1816)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_193(F->lt_1819, F->lc_1821)), rt_str(";", 1)); b_; }));
}
}
F->a_1817 = (*(P851)rt_nil_check(F->a_1817)).next;
F->pm_1816 = (*(P863)rt_nil_check(F->pm_1816)).next;
}
if (((F->a_1817 != NULL) || (F->pm_1816 != NULL))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->s_532)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P844)rt_nil_check((*(P851)rt_nil_check(F->s_532)).name))->all)); b_; }));
}
if ((F->act_1826 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P844)rt_nil_check(F->act_1826))->all)), rt_str(", &", 3)), (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_1815)).cname))->all)), rt_str("decl, ", 6)), (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_1815)).cname))->all)), rt_str(", ", 2)), F->nf_1827), rt_str("); }", 4)); b_; }));
} else {
f_user_create_543(F->s_532, F->y_1815, &(((P844)rt_nil_check(F->lv_1818))->all), F->at_1823, &F->nf_1827);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_537(rstr *name_534, P857 t_535, rstr *place_536) {
  struct f_hidden_var_537fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_534 = name_534;
F->t_535 = t_535;
F->place_536 = place_536;
F->y_1834 = NULL;
F->y_1834 = f_new_sym_173((((rt_int)1LL)), f_mk_3(&(*F->name_534)));
(*(P861)rt_nil_check(F->y_1834)).t = F->t_535;
(*(P861)rt_nil_check(F->y_1834)).level = ((rt_int)0LL);
(*(P861)rt_nil_check(F->y_1834)).access = f_mk_3(&(*F->place_536));
f_define_160(F->y_1834, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_543(P851 s_538, P861 y_539, rstr *uv_540, P857 ut_541, rstr *nf_542) {
  struct f_user_create_543fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_538 = s_538;
F->y_539 = y_539;
F->uv_540 = uv_540;
F->ut_541 = ut_541;
F->nf_542 = nf_542;
F->t_1835 = NULL;
F->saved_1836 = NULL;
F->saved_1836 = g_code_901;
F->hook_1837 = NULL;
F->hook_1837 = f_new_buffer_24();
F->un_1838 = NULL;
F->un_1838 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P851)rt_nil_check(F->s_538)).line));
F->hn_1839 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1840 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1841 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1842 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_169();
f_hidden_var_537(&F->uname_1841, F->ut_541, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_226(F->ut_541)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P851)rt_nil_check(F->un_1838)).name = f_mk_3(&F->uname_1841);
g_code_901 = F->hook_1837;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_810(f_call_node_566(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1838, rt_r_ichk((*(P851)rt_nil_check(F->s_538)).line)), 1, &F->t_1835)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_810(f_call_node_566(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1838, rt_r_ichk((*(P851)rt_nil_check(F->s_538)).line)), 1, &F->t_1835)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_810(f_call_node_566(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1838, rt_r_ichk((*(P851)rt_nil_check(F->s_538)).line)), 1, &F->t_1835)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_810(f_call_node_566(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1838, rt_r_ichk((*(P851)rt_nil_check(F->s_538)).line)), 1, &F->t_1835)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_901 = F->saved_1836;
f_put_27(g_out_protos_896, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1839), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1839), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (rt_r_echk(g_in_func_903)) {
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P844)rt_nil_check((*(P861)rt_nil_check(g_func_sym_915)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_898, F->hook_1837);
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1840), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1840, rt_str("->hook = ", 9)), F->hn_1839), rt_str("; ", 2)), F->aa_1840), rt_str("->ua = &", 8)), (*F->uv_540)), rt_str("; ", 2)), F->aa_1840), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_800(F->ut_541)), f_q_18()), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_903)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1840, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1840), rt_str(", &", 3)), (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_539)).cname))->all)), rt_str("decl, ", 6)), (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_539)).cname))->all)), rt_str(", ", 2)), (*F->nf_542)), rt_str(");", 2)); b_; }));
f_hidden_var_537(&F->aname_1842, g_ty_act_941, &F->aa_1840);
{
F->start_1843 = NULL;
F->start_1843 = f_call_node_566(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P851)rt_nil_check(F->s_538)).a, rt_r_ichk((*(P851)rt_nil_check(F->s_538)).line));
F->an_1844 = NULL;
F->an_1844 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P851)rt_nil_check(F->s_538)).line));
(*(P851)rt_nil_check(F->an_1844)).name = f_mk_3(&F->aname_1842);
(*(P851)rt_nil_check((*(P851)rt_nil_check(F->start_1843)).b)).next = F->an_1844;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_810(F->start_1843, 1, &F->t_1835), rt_str(";", 1)); b_; }));
}
f_close_scope_170();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_548(P851 inv_544, rstr *arr_545, rt_int i_546, int mixed_547) {
  struct f_wait_alt_548fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_544 = inv_544;
F->arr_545 = arr_545;
F->i_546 = i_546;
F->mixed_547 = mixed_547;
F->lv_1845 = NULL;
F->t_1846 = NULL;
F->vt_1847 = NULL;
F->c_1848 = NULL;
F->ro_1849 = RT_R_EUNDEF;
F->fn_1850 = NULL;
F->args_1851 = NULL;
F->slot_1852 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_545), rt_str("[", 1)), f_itos_7(F->i_546)), rt_str("]", 1)));
if (((rt_r_ichk((*(P851)rt_nil_check(F->inv_544)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->inv_544)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->inv_544)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1850 = (*(P851)rt_nil_check(F->inv_544)).a;
F->args_1851 = (*(P851)rt_nil_check(F->inv_544)).b;
if ((rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_1850)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_1850)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_649(F->args_1851, &F->lv_1845, &F->t_1846, &F->c_1848, &F->ro_1849);
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_1846)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->inv_544)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_1850)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_1853 = NULL;
F->dt_1854 = NULL;
f_lvalue_649((*(P851)rt_nil_check(F->args_1851)).next, &F->dv_1853, &F->dt_1854, &F->c_1848, &F->ro_1849);
f_check_type_224(F->dt_1854, (*(P857)rt_nil_check(F->t_1846)).elem, rt_r_ichk((*(P851)rt_nil_check(F->inv_544)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1852, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P844)rt_nil_check(F->lv_1845))->all)), rt_str(", &", 3)), (((P844)rt_nil_check(F->dv_1853))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1855 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1856 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->args_1851)).next, (*(P857)rt_nil_check(F->t_1846)).elem, &F->vt_1847));
f_check_type_224(F->vt_1847, (*(P857)rt_nil_check(F->t_1846)).elem, rt_r_ichk((*(P851)rt_nil_check(F->inv_544)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_226((*(P857)rt_nil_check(F->t_1846)).elem), rt_str(" ", 1)), F->tmp_1855), rt_str(" = ", 3)), F->v_1856), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1852, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P844)rt_nil_check(F->lv_1845))->all)), rt_str(", &", 3)), F->tmp_1855), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_1850)).name))->all), rt_str("DELAY_UNTIL", 11)) && (f_list_len_67(F->args_1851) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1852, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_r_act_deadline(", 65)), f_act_delay_args_826(F->args_1851)), rt_str(")};", 3));
goto ret_;
} else if ((rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_1850)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_1850)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_1857 = rt_str_copy(f_gexpr_680(F->args_1851, g_ty_int_931, &F->vt_1847));
if ((rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_1850)).name))->all), rt_str("DELAY", 5)) && F->mixed_547)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1852, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1857), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_1850)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1852, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1857), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1852, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1857), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_1850)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1852, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_531(F->args_1851)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->inv_544)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_1850)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_550(P851 inv_549) {
  struct f_builtin_wait_550fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_549 = inv_549;
F->lv_1858 = NULL;
F->t_1859 = NULL;
F->c_1860 = NULL;
F->ro_1861 = RT_R_EUNDEF;
F->saved_1862 = NULL;
F->saved_1862 = g_code_901;
F->ok_1863 = RT_R_EUNDEF;
F->ok_1863 = 0;
if (((rt_r_ichk((*(P851)rt_nil_check(F->inv_549)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->inv_549)).a)).kind) != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->inv_549)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->inv_549)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->inv_549)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->inv_549)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->inv_549)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_929 = rt_add(rt_r_ichk(g_trial_929), ((rt_int)1LL));
g_code_901 = f_new_buffer_24();
{ rt_frame xf1864;
if (RT_TRY(xf1864)) {
f_lvalue_649((*(P851)rt_nil_check(F->inv_549)).b, &F->lv_1858, &F->t_1859, &F->c_1860, &F->ro_1861);
F->ok_1863 = (rt_r_ichk((*(P857)rt_nil_check(F->t_1859)).kind) == (((rt_int)12LL)));
RT_POP(xf1864);
} else {
RT_POP(xf1864);
int x1865 = rt_xcur;
if (0 || x1865 == ex_compile_error_1) {
F->ok_1863 = 0;
} else {
rt_raise(x1865);
}
}
}
g_trial_929 = rt_sub(rt_r_ichk(g_trial_929), ((rt_int)1LL));
g_code_901 = F->saved_1862;
F->result_ = rt_r_echk(F->ok_1863);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_555(P851 inv_551, rstr *op_552, rstr *q_553, int is_stmt_554) {
  struct f_wait_op_555fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_551 = inv_551;
F->op_552 = op_552;
F->q_553 = q_553;
F->is_stmt_554 = is_stmt_554;
F->x_1866 = NULL;
F->x_1866 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P851)rt_nil_check(F->inv_551)).line));
F->f_1867 = NULL;
F->f_1867 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P851)rt_nil_check(F->inv_551)).line));
F->qn_1868 = NULL;
F->qn_1868 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P851)rt_nil_check(F->inv_551)).line));
F->t_1869 = NULL;
(*(P851)rt_nil_check(F->f_1867)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->inv_551)).a)).name))->all), rt_str("_", 1)), (*F->op_552)); b_; }));
(*(P851)rt_nil_check(F->qn_1868)).name = f_mk_3(&(*F->q_553));
(*(P851)rt_nil_check(F->qn_1868)).next = (*(P851)rt_nil_check(F->inv_551)).b;
(*(P851)rt_nil_check(F->x_1866)).a = F->f_1867;
(*(P851)rt_nil_check(F->x_1866)).b = F->qn_1868;
{
F->r_1870 = rt_str_copy(f_gcall_810(F->x_1866, F->is_stmt_554, &F->t_1869));
if ((!F->is_stmt_554)) {
f_check_type_224(F->t_1869, g_ty_bool_932, rt_r_ichk((*(P851)rt_nil_check(F->inv_551)).line));
}
F->result_ = F->r_1870;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_560(P851 s_556, rstr *arr_557, rstr *w_558, rt_int n_559) {
  struct f_user_wait_560fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_556 = s_556;
F->arr_557 = arr_557;
F->w_558 = w_558;
F->n_559 = n_559;
F->a_1871 = NULL;
F->a_1871 = (*(P851)rt_nil_check(F->s_556)).a;
F->i_1872 = RT_R_IUNDEF;
F->i_1872 = ((rt_int)0LL);
F->tests_1873 = NULL;
F->tests_1873 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1874 = NULL;
F->revokes_1874 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_169();
while ((F->a_1871 != NULL)) {
F->inv_1875 = NULL;
F->inv_1875 = (*(P851)rt_nil_check(F->a_1871)).a;
while ((F->inv_1875 != NULL)) {
if (f_builtin_wait_550(F->inv_1875)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_548(F->inv_1875, &(*F->arr_557), rt_r_ichk(F->i_1872), 1); b_; }));
} else {
F->st_1876 = NULL;
F->st_1876 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P851)rt_nil_check(F->inv_1875)).line));
F->c_1877 = NULL;
F->qt_1878 = NULL;
F->qname_1879 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1880 = NULL;
F->y_1880 = f_new_sym_173((((rt_int)1LL)), f_mk_3(&F->qname_1879));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_557), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->i_1872))), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P851)rt_nil_check(F->st_1876)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->inv_1875)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_1878 = f_resolve_subtype_257(F->st_1876, &F->c_1877);
{
F->access_1881 = rt_str_copy(f_storage_456(&F->qname_1879, F->qt_1878));
f_init_storage_311(&F->access_1881, F->qt_1878, F->c_1877);
(*(P861)rt_nil_check(F->y_1880)).t = F->qt_1878;
(*(P861)rt_nil_check(F->y_1880)).c = F->c_1877;
f_bind_459(F->y_1880, &F->access_1881);
f_define_160(F->y_1880, rt_r_ichk((*(P851)rt_nil_check(F->inv_1875)).line));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_555(F->inv_1875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1879, 1), rt_str(";", 1)); b_; }));
F->tests_1873 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->tests_1873))->all), rt_str("if (", 4)), f_wait_op_555(F->inv_1875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1879, 0)), rt_str(") { ", 4)), f_wait_op_555(F->inv_1875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1879, 1)), rt_str("; ", 2)), (*F->w_558)), rt_str(" = ", 3)), f_itos_7(rt_r_ichk(F->i_1872))), rt_str("; break; } ", 11)); b_; }));
F->revokes_1874 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->revokes_1874))->all), f_wait_op_555(F->inv_1875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1879, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1872 = rt_add(rt_r_ichk(F->i_1872), ((rt_int)1LL));
F->inv_1875 = (*(P851)rt_nil_check(F->inv_1875)).next;
}
F->a_1871 = (*(P851)rt_nil_check(F->a_1871)).next;
}
f_close_scope_170();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_558)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P844)rt_nil_check(F->tests_1873))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_558), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_559)), rt_str(", ", 2)), (*F->arr_557)), rt_str("); if (", 7)), (*F->w_558)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_559)), rt_str(", ", 2)), (*F->arr_557)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_558)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_558)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P844)rt_nil_check(F->revokes_1874))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_562(P851 s_561) {
  struct f_st_wait_562fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_561 = s_561;
F->a_1882 = NULL;
F->a_1882 = (*(P851)rt_nil_check(F->s_561)).a;
F->n_1883 = RT_R_IUNDEF;
F->n_1883 = ((rt_int)0LL);
F->first_1884 = RT_R_EUNDEF;
F->first_1884 = 1;
F->inits_1885 = NULL;
F->inits_1885 = f_new_buffer_24();
F->user_1886 = RT_R_EUNDEF;
F->user_1886 = 0;
F->arr_1887 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1888 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1882 != NULL)) {
F->inv_1889 = NULL;
F->inv_1889 = (*(P851)rt_nil_check(F->a_1882)).a;
F->n_1883 = rt_add(rt_r_ichk(F->n_1883), f_list_len_67((*(P851)rt_nil_check(F->a_1882)).a));
while ((F->inv_1889 != NULL)) {
if ((!f_builtin_wait_550(F->inv_1889))) {
F->user_1886 = 1;
}
F->inv_1889 = (*(P851)rt_nil_check(F->inv_1889)).next;
}
F->a_1882 = (*(P851)rt_nil_check(F->a_1882)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1887), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->n_1883))), rt_str("];", 2)); b_; }));
if (rt_r_echk(F->user_1886)) {
f_user_wait_560(F->s_561, &F->arr_1887, &F->w_1888, rt_r_ichk(F->n_1883));
} else {
F->a_1882 = (*(P851)rt_nil_check(F->s_561)).a;
F->n_1883 = ((rt_int)0LL);
while ((F->a_1882 != NULL)) {
F->inv_1890 = NULL;
F->inv_1890 = (*(P851)rt_nil_check(F->a_1882)).a;
while ((F->inv_1890 != NULL)) {
f_put_27(F->inits_1885, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_548(F->inv_1890, &F->arr_1887, rt_r_ichk(F->n_1883), 0); b_; }));
F->n_1883 = rt_add(rt_r_ichk(F->n_1883), ((rt_int)1LL));
F->inv_1890 = (*(P851)rt_nil_check(F->inv_1890)).next;
}
F->a_1882 = (*(P851)rt_nil_check(F->a_1882)).next;
}
f_splice_34(g_code_901, F->inits_1885);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1888), rt_str(" = rt_wait(", 11)), f_itos_7(rt_r_ichk(F->n_1883))), rt_str(", ", 2)), F->arr_1887), rt_str(");", 2)); b_; }));
}
F->a_1882 = (*(P851)rt_nil_check(F->s_561)).a;
F->n_1883 = ((rt_int)0LL);
while ((F->a_1882 != NULL)) {
F->conds_1891 = NULL;
F->conds_1891 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1893 = ((rt_int)1LL), hi1894 = f_list_len_67((*(P851)rt_nil_check(F->a_1882)).a);
for (rt_int it1895 = lo1893; it1895 <= hi1894; it1895++) {
F->i_1892 = it1895;
F->conds_1891 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->conds_1891))->all), rt_str(" || ", 4)), F->w_1888), rt_str(" == ", 4)), f_itos_7(rt_r_ichk(F->n_1883))); b_; }));
F->n_1883 = rt_add(rt_r_ichk(F->n_1883), ((rt_int)1LL));
}
}
if (rt_r_echk(F->first_1884)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P844)rt_nil_check(F->conds_1891))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P844)rt_nil_check(F->conds_1891))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1884 = 0;
f_gen_body_493((*(P851)rt_nil_check(F->a_1882)).b);
F->a_1882 = (*(P851)rt_nil_check(F->a_1882)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P851 f_call_node_566(rstr *name_563, P851 arg_564, rt_int line_565) {
  struct f_call_node_566fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_563 = name_563;
F->arg_564 = arg_564;
F->line_565 = line_565;
F->x_1896 = NULL;
F->x_1896 = f_nn_61((((rt_int)10LL)), F->line_565);
F->f_1897 = NULL;
F->f_1897 = f_nn_61((((rt_int)7LL)), F->line_565);
(*(P851)rt_nil_check(F->f_1897)).name = f_mk_3(&(*F->name_563));
(*(P851)rt_nil_check(F->x_1896)).a = F->f_1897;
(*(P851)rt_nil_check(F->x_1896)).b = f_copy_node_701(F->arg_564);
(*(P851)rt_nil_check((*(P851)rt_nil_check(F->x_1896)).b)).next = NULL;
F->result_ = F->x_1896;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_568(P851 s_567) {
  struct f_user_region_568fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_567 = s_567;
F->t_1898 = NULL;
F->f_1899 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1900 = rt_str_copy(f_gcall_810(f_call_node_566(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P851)rt_nil_check(F->s_567)).a, rt_r_ichk((*(P851)rt_nil_check(F->s_567)).line)), 1, &F->t_1898));
F->unlock_1901 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_810(f_call_node_566(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P851)rt_nil_check(F->s_567)).a, rt_r_ichk((*(P851)rt_nil_check(F->s_567)).line)), 1, &F->t_1898)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1900), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1899), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1899), rt_str(")) {", 4)); b_; }));
f_push_cleanup_501(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1899), rt_str("); ", 3)), F->unlock_1901); b_; }));
f_gen_body_493((*(P851)rt_nil_check(F->s_567)).b);
f_pop_cleanup_502();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1899), rt_str("); ", 3)), F->unlock_1901); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1899), rt_str("); ", 3)), F->unlock_1901), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_570(P851 s_569) {
  struct f_st_region_570fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_569 = s_569;
F->lv_1902 = NULL;
F->t_1903 = NULL;
F->c_1904 = NULL;
F->ro_1905 = RT_R_EUNDEF;
F->lk_1906 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1907 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_649((*(P851)rt_nil_check(F->s_569)).a, &F->lv_1902, &F->t_1903, &F->c_1904, &F->ro_1905);
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_1903)).kind) != (((rt_int)13LL)))) {
f_user_region_568(F->s_569);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1906), rt_str(" = &", 4)), (((P844)rt_nil_check(F->lv_1902))->all)), rt_str("; rt_region_enter(", 18)), F->lk_1906), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1907), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1907), rt_str(")) {", 4)); b_; }));
f_push_cleanup_501(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1907), rt_str("); rt_region_leave(", 19)), F->lk_1906), rt_str(");", 2)); b_; }));
f_gen_body_493((*(P851)rt_nil_check(F->s_569)).b);
f_pop_cleanup_502();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1907), rt_str("); rt_region_leave(", 19)), F->lk_1906), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1907), rt_str("); rt_region_leave(", 19)), F->lk_1906), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P851 f_gparam_573(P851 g_571, rstr *name_572) {
  struct f_gparam_573fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_571 = g_571;
F->name_572 = name_572;
F->p_1908 = NULL;
F->p_1908 = (*(P851)rt_nil_check(F->g_571)).a;
while ((F->p_1908 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1908)).name))->all), (*F->name_572))) {
F->result_ = F->p_1908;
goto ret_;
}
F->p_1908 = (*(P851)rt_nil_check(F->p_1908)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P861 f_bind_sym_575(P851 p_574) {
  struct f_bind_sym_575fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_574 = p_574;
F->y_1909 = NULL;
if ((rt_r_ichk((*(P851)rt_nil_check(F->p_574)).ival) <= ((rt_int)2LL))) {
F->y_1909 = f_new_sym_173((((rt_int)5LL)), (*(P851)rt_nil_check(F->p_574)).name);
} else {
F->y_1909 = f_new_sym_173((((rt_int)2LL)), (*(P851)rt_nil_check(F->p_574)).name);
}
F->result_ = F->y_1909;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_578(P861 a_576, P861 b_577) {
  struct f_same_binds_578fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_576 = a_576;
F->b_577 = b_577;
F->x_1910 = NULL;
F->x_1910 = F->a_576;
F->y_1911 = NULL;
F->y_1911 = F->b_577;
while (((F->x_1910 != NULL) && (F->y_1911 != NULL))) {
if (((!rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->x_1910)).name))->all), (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_1911)).name))->all))) || (!f_same_binding_581(F->x_1910, F->y_1911)))) {
F->result_ = 0;
goto ret_;
}
F->x_1910 = (*(P861)rt_nil_check(F->x_1910)).mnext;
F->y_1911 = (*(P861)rt_nil_check(F->y_1911)).mnext;
}
F->result_ = ((F->x_1910 == NULL) && (F->y_1911 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_581(P861 a_579, P861 b_580) {
  struct f_same_binding_581fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_579 = a_579;
F->b_580 = b_580;
if ((rt_r_ichk((*(P861)rt_nil_check(F->a_579)).kind) == (((rt_int)5LL)))) {
F->result_ = ((rt_r_ichk((*(P861)rt_nil_check(F->b_580)).kind) == (((rt_int)5LL))) && f_same_213((*(P861)rt_nil_check(F->a_579)).t, (*(P861)rt_nil_check(F->b_580)).t));
goto ret_;
}
if (((rt_r_ichk((*(P861)rt_nil_check(F->a_579)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P861)rt_nil_check(F->a_579)).hasmv))) {
F->result_ = (rt_r_echk((*(P861)rt_nil_check(F->b_580)).hasmv) && (rt_r_ichk((*(P861)rt_nil_check(F->a_579)).mvalue) == rt_r_ichk((*(P861)rt_nil_check(F->b_580)).mvalue)));
goto ret_;
}
if (((rt_r_ichk((*(P861)rt_nil_check(F->a_579)).kind) == (((rt_int)2LL))) && ((*(P861)rt_nil_check(F->a_579)).mv != NULL))) {
if (((((*(P861)rt_nil_check(F->b_580)).mv == NULL) || (rt_r_ichk((*(P870)rt_nil_check((*(P861)rt_nil_check(F->a_579)).mv)).kind) != rt_r_ichk((*(P870)rt_nil_check((*(P861)rt_nil_check(F->b_580)).mv)).kind))) || (!f_same_213((*(P861)rt_nil_check(F->a_579)).t, (*(P861)rt_nil_check(F->b_580)).t)))) {
F->result_ = 0;
goto ret_;
} else if ((rt_r_ichk((*(P870)rt_nil_check((*(P861)rt_nil_check(F->a_579)).mv)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_eq((((P844)rt_nil_check((*(P870)rt_nil_check((*(P861)rt_nil_check(F->a_579)).mv)).s))->all), (((P844)rt_nil_check((*(P870)rt_nil_check((*(P861)rt_nil_check(F->b_580)).mv)).s))->all));
goto ret_;
}
F->result_ = (rt_r_ichk((*(P870)rt_nil_check((*(P861)rt_nil_check(F->a_579)).mv)).i) == rt_r_ichk((*(P870)rt_nil_check((*(P861)rt_nil_check(F->b_580)).mv)).i));
goto ret_;
}
F->result_ = ((((*(P861)rt_nil_check(F->a_579)).cname != NULL) && ((*(P861)rt_nil_check(F->b_580)).cname != NULL)) && rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->a_579)).cname))->all), (((P844)rt_nil_check((*(P861)rt_nil_check(F->b_580)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P861 f_tt_binds_586(P851 gd_582, P851 formals_583, P851 actuals_584, rt_int line_585) {
  struct f_tt_binds_586fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_582 = gd_582;
F->formals_583 = formals_583;
F->actuals_584 = actuals_584;
F->line_585 = line_585;
F->f_1912 = NULL;
F->f_1912 = F->formals_583;
F->a_1913 = NULL;
F->a_1913 = F->actuals_584;
F->binds_1914 = NULL;
F->c_1915 = NULL;
F->at_1916 = NULL;
while (((F->f_1912 != NULL) && (F->a_1913 != NULL))) {
F->p_1917 = NULL;
F->p_1917 = f_gparam_573(F->gd_582, &(((P844)rt_nil_check((*(P851)rt_nil_check(F->f_1912)).name))->all));
F->b_1918 = NULL;
if ((F->p_1917 == NULL)) {
f_fail_23(F->line_585, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->f_1912)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1918 = f_bind_sym_575(F->p_1917);
if ((rt_r_ichk((*(P851)rt_nil_check(F->p_1917)).ival) <= ((rt_int)2LL))) {
if ((rt_r_ichk((*(P851)rt_nil_check(F->a_1913)).kind) >= (((rt_int)70LL)))) {
(*(P861)rt_nil_check(F->b_1918)).t = f_resolve_subtype_257(F->a_1913, &F->c_1915);
} else {
F->st_1919 = NULL;
F->st_1919 = f_nn_61((((rt_int)80LL)), F->line_585);
(*(P851)rt_nil_check(F->st_1919)).name = (*(P851)rt_nil_check(F->a_1913)).name;
(*(P861)rt_nil_check(F->b_1918)).t = f_resolve_subtype_257(F->st_1919, &F->c_1915);
}
(*(P861)rt_nil_check(F->b_1918)).c = F->c_1915;
if ((((*(P851)rt_nil_check(F->p_1917)).b != NULL) && (!f_type_allowed_590((*(P861)rt_nil_check(F->b_1918)).t, (*(P851)rt_nil_check(F->p_1917)).b, F->binds_1914)))) {
f_fail_23(F->line_585, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1917)).name))->all)); b_; }));
}
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->p_1917)).ival) <= ((rt_int)5LL))) {
if ((rt_r_ichk((*(P851)rt_nil_check(F->a_1913)).kind) != (((rt_int)7LL)))) {
f_fail_23(F->line_585, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1917)).name))->all)); b_; }));
}
F->b_1918 = f_copy_sym_389(f_pick_operation_601(rt_r_ichk((*(P851)rt_nil_check(F->p_1917)).ival), &(((P844)rt_nil_check((*(P851)rt_nil_check(F->a_1913)).name))->all), (*(P851)rt_nil_check(F->p_1917)).b, (*(P851)rt_nil_check(F->p_1917)).a, F->binds_1914, F->line_585));
(*(P861)rt_nil_check(F->b_1918)).name = (*(P851)rt_nil_check(F->p_1917)).name;
} else if (((rt_r_ichk((*(P851)rt_nil_check(F->p_1917)).ival) == ((rt_int)7LL)) || (rt_r_ichk((*(P851)rt_nil_check(F->p_1917)).ival) == ((rt_int)8LL)))) {
F->ok_1920 = RT_R_EUNDEF;
(*(P861)rt_nil_check(F->b_1918)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_680(F->a_1913, NULL, &F->at_1916)), rt_str(")", 1)); b_; }));
(*(P861)rt_nil_check(F->b_1918)).t = F->at_1916;
if ((((rt_r_ichk((*(P851)rt_nil_check(F->p_1917)).ival) == ((rt_int)7LL)) && (rt_r_ichk((*(P857)rt_nil_check(F->at_1916)).kind) != (((rt_int)5LL)))) || ((rt_r_ichk((*(P851)rt_nil_check(F->p_1917)).ival) == ((rt_int)8LL)) && ((*(P857)rt_nil_check(f_base_of_215(F->at_1916))).kind != (((rt_int)4LL)))))) {
f_fail_23(F->line_585, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1917)).name))->all)), rt_str(" is not of the kind its constraint requires", 43)); b_; }));
}
(*(P861)rt_nil_check(F->b_1918)).mv = f_meval_343(F->a_1913, &F->ok_1920);
if ((!rt_r_echk(F->ok_1920))) {
f_fail_23(F->line_585, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1917)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
if ((rt_r_ichk((*(P870)rt_nil_check((*(P861)rt_nil_check(F->b_1918)).mv)).kind) == (((rt_int)4LL)))) {
(*(P870)rt_nil_check((*(P861)rt_nil_check(F->b_1918)).mv)).i = f_lit_index_254((*(P857)rt_nil_check(f_base_of_215(F->at_1916))).lits, &(((P844)rt_nil_check((*(P870)rt_nil_check((*(P861)rt_nil_check(F->b_1918)).mv)).s))->all));
}
} else {
F->ok_1921 = RT_R_EUNDEF;
(*(P861)rt_nil_check(F->b_1918)).t = f_resolve_subtype_257((*(P851)rt_nil_check(F->p_1917)).a, &F->c_1915);
(*(P861)rt_nil_check(F->b_1918)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_checked_205((*(P861)rt_nil_check(F->b_1918)).t, F->c_1915, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_680(F->a_1913, (*(P861)rt_nil_check(F->b_1918)).t, &F->at_1916); b_; }))), rt_str(")", 1)); b_; }));
f_check_type_224(F->at_1916, (*(P861)rt_nil_check(F->b_1918)).t, F->line_585);
(*(P861)rt_nil_check(F->b_1918)).mvalue = f_manifest_334(F->a_1913, &F->ok_1921);
(*(P861)rt_nil_check(F->b_1918)).hasmv = rt_r_echk(F->ok_1921);
(*(P861)rt_nil_check(F->b_1918)).mv = f_meval_343(F->a_1913, &F->ok_1921);
if ((!rt_r_echk(F->ok_1921))) {
f_fail_23(F->line_585, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1917)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
}
(*(P861)rt_nil_check(F->b_1918)).mnext = F->binds_1914;
F->binds_1914 = F->b_1918;
F->f_1912 = (*(P851)rt_nil_check(F->f_1912)).next;
F->a_1913 = (*(P851)rt_nil_check(F->a_1913)).next;
}
F->result_ = F->binds_1914;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_allowed_590(P857 t_587, P851 items_588, P861 binds_589) {
  struct f_type_allowed_590fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_587 = t_587;
F->items_588 = items_588;
F->binds_589 = binds_589;
F->it_1922 = NULL;
F->it_1922 = F->items_588;
F->b_1923 = NULL;
F->b_1923 = f_base_of_215(F->t_587);
while ((F->it_1922 != NULL)) {
if ((((rt_r_ichk((*(P851)rt_nil_check(F->it_1922)).kind) == (((rt_int)80LL))) && ((*(P851)rt_nil_check(F->it_1922)).b == NULL)) && (f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->it_1922)).name))->all)) == NULL))) {
F->w_1924 = rt_str_copy((((P844)rt_nil_check((*(P851)rt_nil_check(F->it_1922)).name))->all));
if (((((((((((rt_str_eq(F->w_1924, rt_str("INT", 3)) && (rt_r_ichk((*(P857)rt_nil_check(F->b_1923)).kind) == (((rt_int)1LL)))) || (rt_str_eq(F->w_1924, rt_str("FLOAT", 5)) && (rt_r_ichk((*(P857)rt_nil_check(F->b_1923)).kind) == (((rt_int)3LL))))) || (rt_str_eq(F->w_1924, rt_str("BOOL", 4)) && (rt_r_ichk((*(P857)rt_nil_check(F->b_1923)).kind) == (((rt_int)2LL))))) || (rt_str_eq(F->w_1924, rt_str("ENUM", 4)) && (rt_r_ichk((*(P857)rt_nil_check(F->b_1923)).kind) == (((rt_int)4LL))))) || (rt_str_eq(F->w_1924, rt_str("STRING", 6)) && (rt_r_ichk((*(P857)rt_nil_check(F->b_1923)).kind) == (((rt_int)5LL))))) || (rt_str_eq(F->w_1924, rt_str("ARRAY", 5)) && (rt_r_ichk((*(P857)rt_nil_check(F->b_1923)).kind) == (((rt_int)6LL))))) || (rt_str_eq(F->w_1924, rt_str("RECORD", 6)) && (rt_r_ichk((*(P857)rt_nil_check(F->b_1923)).kind) == (((rt_int)7LL))))) || (rt_str_eq(F->w_1924, rt_str("UNION", 5)) && (rt_r_ichk((*(P857)rt_nil_check(F->b_1923)).kind) == (((rt_int)17LL))))) || (rt_str_eq(F->w_1924, rt_str("SET", 3)) && (rt_r_ichk((*(P857)rt_nil_check(F->b_1923)).kind) == (((rt_int)16LL))))) || (rt_str_eq(F->w_1924, rt_str("ASCII", 5)) && f_same_213(F->t_587, g_ty_ascii_934)))) {
F->result_ = 1;
goto ret_;
}
} else {
F->c_1925 = NULL;
if (f_same_213(f_resolve_in_binds_594(F->it_1922, F->binds_589, &F->c_1925), F->t_587)) {
F->result_ = 1;
goto ret_;
}
}
F->it_1922 = (*(P851)rt_nil_check(F->it_1922)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P857 f_resolve_in_binds_594(P851 st_591, P861 binds_592, P853 *c_593) {
  struct f_resolve_in_binds_594fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_591 = st_591;
F->binds_592 = binds_592;
F->c_593 = c_593;
F->c_593v = *F->c_593;
F->b_1926 = NULL;
F->b_1926 = F->binds_592;
F->t_1927 = NULL;
f_open_scope_169();
while ((F->b_1926 != NULL)) {
F->z_1928 = NULL;
F->z_1928 = f_copy_sym_389(F->b_1926);
f_define_160(F->z_1928, rt_r_ichk((*(P851)rt_nil_check(F->st_591)).line));
F->b_1926 = (*(P861)rt_nil_check(F->b_1926)).mnext;
}
F->t_1927 = f_resolve_subtype_257(F->st_591, &F->c_593v);
f_close_scope_170();
F->result_ = F->t_1927;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_593) = F->c_593v;
  RT_FPOP();
  return F->result_;
}

static P861 f_pick_operation_601(rt_int kind_595, rstr *name_596, P851 sig_597, P851 res_598, P861 binds_599, rt_int line_600) {
  struct f_pick_operation_601fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_595 = kind_595;
F->name_596 = name_596;
F->sig_597 = sig_597;
F->res_598 = res_598;
F->binds_599 = binds_599;
F->line_600 = line_600;
F->y_1929 = NULL;
F->c_1930 = NULL;
F->want_1931 = RT_R_IUNDEF;
F->want_1931 = (((rt_int)4LL));
if ((F->kind_595 == ((rt_int)4LL))) {
F->want_1931 = (((rt_int)3LL));
} else if ((F->kind_595 == ((rt_int)5LL))) {
F->want_1931 = (((rt_int)9LL));
}
{ rt_int lo1933 = ((rt_int)1LL), hi1934 = ((rt_int)3LL);
for (rt_int it1935 = lo1933; it1935 <= hi1934; it1935++) {
F->pass_1932 = it1935;
F->y_1929 = f_overload_chain_790(&(*F->name_596), F->pass_1932);
while ((F->y_1929 != NULL)) {
if (((rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_1929)).name))->all), (*F->name_596)) && ((rt_r_ichk((*(P861)rt_nil_check(F->y_1929)).kind) == rt_r_ichk(F->want_1931)) || ((F->kind_595 == ((rt_int)0LL)) && ((rt_r_ichk((*(P861)rt_nil_check(F->y_1929)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_1929)).kind) == (((rt_int)3LL))))))) && ((F->pass_1932 != ((rt_int)1LL)) || (rt_r_ichk((*(P861)rt_nil_check(F->y_1929)).depth) >= rt_r_ichk(g_gdepth_920))))) {
F->ok_1936 = RT_R_EUNDEF;
F->ok_1936 = 1;
if (((F->sig_597 != NULL) || (F->kind_595 == ((rt_int)0LL)))) {
F->s_1937 = NULL;
F->s_1937 = F->sig_597;
F->pm_1938 = NULL;
F->pm_1938 = (*(P861)rt_nil_check(F->y_1929)).params;
while (((rt_r_echk(F->ok_1936) && (F->s_1937 != NULL)) && (F->pm_1938 != NULL))) {
F->ok_1936 = f_same_213(f_resolve_in_binds_594(F->s_1937, F->binds_599, &F->c_1930), (*(P863)rt_nil_check(F->pm_1938)).t);
F->s_1937 = (*(P851)rt_nil_check(F->s_1937)).next;
F->pm_1938 = (*(P863)rt_nil_check(F->pm_1938)).next;
}
F->ok_1936 = ((rt_r_echk(F->ok_1936) && (F->s_1937 == NULL)) && (F->pm_1938 == NULL));
}
if ((rt_r_echk(F->ok_1936) && (F->res_598 != NULL))) {
F->ok_1936 = ((rt_r_ichk((*(P861)rt_nil_check(F->y_1929)).kind) == (((rt_int)3LL))) && f_same_213(f_resolve_in_binds_594(F->res_598, F->binds_599, &F->c_1930), (*(P861)rt_nil_check(F->y_1929)).result));
}
if (rt_r_echk(F->ok_1936)) {
F->result_ = F->y_1929;
goto ret_;
}
}
F->y_1929 = (*(P861)rt_nil_check(F->y_1929)).chain;
}
}
}
f_fail_23(F->line_600, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no ", 3), f_kind_word_603(F->kind_595)), (*F->name_596)), rt_str(" has the interface the generic requires", 39)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_word_603(rt_int kind_602) {
  struct f_kind_word_603fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_602 = kind_602;
if ((F->kind_602 == ((rt_int)3LL))) {
F->result_ = rt_str("procedure ", 10);
goto ret_;
} else if ((F->kind_602 == ((rt_int)4LL))) {
F->result_ = rt_str("function ", 9);
goto ret_;
} else if ((F->kind_602 == ((rt_int)5LL))) {
F->result_ = rt_str("task ", 5);
goto ret_;
}
F->result_ = rt_str("definition of ", 14);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P861 f_need_binds_607(P851 gd_604, P861 binds_605, rt_int line_606) {
  struct f_need_binds_607fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_604 = gd_604;
F->binds_605 = binds_605;
F->line_606 = line_606;
F->it_1939 = NULL;
F->it_1939 = (*(P851)rt_nil_check(F->gd_604)).d;
F->r_1940 = NULL;
F->r_1940 = F->binds_605;
while ((F->it_1939 != NULL)) {
F->found_1941 = RT_R_EUNDEF;
F->found_1941 = 0;
F->y_1942 = NULL;
F->y_1942 = ({ A867 b_ = (((P865)rt_nil_check(g_table_887))->all); b_.p[(rt_index(f_hash_153(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->it_1939)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while (((F->y_1942 != NULL) && (!rt_r_echk(F->found_1941)))) {
if ((rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_1942)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->it_1939)).name))->all)) && (((rt_r_ichk((*(P861)rt_nil_check(F->y_1942)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_1942)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_1942)).kind) == (((rt_int)9LL)))))) {
F->found_1941 = 1;
}
F->y_1942 = (*(P861)rt_nil_check(F->y_1942)).chain;
}
if (rt_r_echk(F->found_1941)) {
F->z_1943 = NULL;
F->z_1943 = f_copy_sym_389(f_pick_operation_601(rt_r_ichk((*(P851)rt_nil_check(F->it_1939)).ival), &(((P844)rt_nil_check((*(P851)rt_nil_check(F->it_1939)).name))->all), (*(P851)rt_nil_check(F->it_1939)).b, (*(P851)rt_nil_check(F->it_1939)).a, F->r_1940, F->line_606));
(*(P861)rt_nil_check(F->z_1943)).mnext = F->r_1940;
F->r_1940 = F->z_1943;
} else if ((!f_is_definable_130(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->it_1939)).name))->all)))) {
f_fail_23(F->line_606, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the generic needs ", 18), (((P844)rt_nil_check((*(P851)rt_nil_check(F->it_1939)).name))->all)), rt_str(", which is not known where it is invoked", 40)); b_; }));
}
F->it_1939 = (*(P851)rt_nil_check(F->it_1939)).next;
}
F->result_ = F->r_1940;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_609(P851 st_608) {
  struct f_generic_use_609fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_608 = st_608;
if ((rt_r_ichk((*(P851)rt_nil_check(F->st_608)).kind) == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P861)rt_nil_check(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P851)rt_nil_check(F->st_608)).kind) == (((rt_int)80LL))) && ((*(P851)rt_nil_check(F->st_608)).a != NULL)) && (f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->st_608)).name))->all)) != NULL)) && ((*(P861)rt_nil_check(f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->st_608)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P861 f_infer_from_614(P851 gd_610, P851 pat_611, P857 t_612, P861 known_613) {
  struct f_infer_from_614fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_610 = gd_610;
F->pat_611 = pat_611;
F->t_612 = t_612;
F->known_613 = known_613;
F->binds_1944 = NULL;
F->binds_1944 = F->known_613;
F->e_1945 = NULL;
F->e_1945 = (*(P851)rt_nil_check(F->pat_611)).a;
F->tp_1946 = NULL;
if (((F->t_612 == NULL) || ((*(P857)rt_nil_check(F->t_612)).gen == NULL))) {
F->result_ = F->binds_1944;
goto ret_;
}
F->tp_1946 = (*(P851)rt_nil_check((*(P861)rt_nil_check((*(P857)rt_nil_check(F->t_612)).gen)).decl)).a;
if ((rt_r_ichk((*(P851)rt_nil_check(F->pat_611)).kind) == (((rt_int)78LL)))) {
F->e_1945 = f_copy_node_701((*(P851)rt_nil_check(F->pat_611)).a);
(*(P851)rt_nil_check(F->e_1945)).next = NULL;
}
while (((F->e_1945 != NULL) && (F->tp_1946 != NULL))) {
F->nm_1947 = NULL;
if (((rt_r_ichk((*(P851)rt_nil_check(F->e_1945)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P851)rt_nil_check(F->e_1945)).kind) == (((rt_int)80LL))))) {
F->nm_1947 = (*(P851)rt_nil_check(F->e_1945)).name;
}
if ((((F->nm_1947 != NULL) && (f_gparam_573(F->gd_610, &(((P844)rt_nil_check(F->nm_1947))->all)) != NULL)) && ((*(P851)rt_nil_check(f_gparam_573(F->gd_610, &(((P844)rt_nil_check(F->nm_1947))->all)))).ival <= ((rt_int)2LL)))) {
F->q_1948 = NULL;
F->q_1948 = F->binds_1944;
F->have_1949 = RT_R_EUNDEF;
F->have_1949 = 0;
while ((F->q_1948 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->q_1948)).name))->all), (((P844)rt_nil_check(F->nm_1947))->all))) {
F->have_1949 = 1;
}
F->q_1948 = (*(P861)rt_nil_check(F->q_1948)).mnext;
}
if ((!rt_r_echk(F->have_1949))) {
F->g_1950 = NULL;
F->g_1950 = (*(P857)rt_nil_check(F->t_612)).gbinds;
while ((F->g_1950 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->g_1950)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->tp_1946)).name))->all))) {
F->b_1951 = NULL;
F->b_1951 = f_bind_sym_575(f_gparam_573(F->gd_610, &(((P844)rt_nil_check(F->nm_1947))->all)));
(*(P861)rt_nil_check(F->b_1951)).t = (*(P861)rt_nil_check(F->g_1950)).t;
(*(P861)rt_nil_check(F->b_1951)).c = (*(P861)rt_nil_check(F->g_1950)).c;
(*(P861)rt_nil_check(F->b_1951)).mnext = F->binds_1944;
F->binds_1944 = F->b_1951;
}
F->g_1950 = (*(P861)rt_nil_check(F->g_1950)).mnext;
}
}
}
F->e_1945 = (*(P851)rt_nil_check(F->e_1945)).next;
F->tp_1946 = (*(P851)rt_nil_check(F->tp_1946)).next;
}
F->result_ = F->binds_1944;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P857 f_instantiate_type_620(P861 g_615, P851 tt_616, P851 args_617, P853 *c_618, rt_int line_619) {
  struct f_instantiate_type_620fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_615 = g_615;
F->tt_616 = tt_616;
F->args_617 = args_617;
F->c_618 = c_618;
F->c_618v = *F->c_618;
F->line_619 = line_619;
F->gd_1952 = NULL;
F->gd_1952 = (*(P861)rt_nil_check(F->g_615)).decl;
F->pat_1953 = NULL;
F->pat_1953 = (*(P851)rt_nil_check(F->gd_1952)).b;
F->binds_1954 = NULL;
F->binds_1954 = f_tt_binds_586(F->gd_1952, (*(P851)rt_nil_check(F->pat_1953)).e, F->tt_616, F->line_619);
F->inst_1955 = NULL;
F->inst_1955 = g_all_insts_889;
F->t_1956 = NULL;
F->saved_caps_1957 = NULL;
F->saved_caps_1957 = g_caps_906;
F->saved_env_1958 = NULL;
F->saved_env_1958 = g_genv_888;
F->saved_gdepth_1959 = RT_R_IUNDEF;
F->saved_gdepth_1959 = rt_r_ichk(g_gdepth_920);
F->c_618v = f_new_cons_176();
(*(P853)rt_nil_check(F->c_618v)).args = F->args_617;
while ((F->inst_1955 != NULL)) {
if ((((*(P861)rt_nil_check(F->inst_1955)).decl == F->pat_1953) && f_same_binds_578((*(P861)rt_nil_check(F->inst_1955)).members, F->binds_1954))) {
F->result_ = (*(P861)rt_nil_check(F->inst_1955)).t;
goto ret_;
}
F->inst_1955 = (*(P861)rt_nil_check(F->inst_1955)).insts;
}
f_open_scope_169();
{
F->b_1960 = NULL;
F->b_1960 = F->binds_1954;
while ((F->b_1960 != NULL)) {
f_define_160(F->b_1960, F->line_619);
F->b_1960 = (*(P861)rt_nil_check(F->b_1960)).mnext;
}
}
g_caps_906 = NULL;
g_genv_888 = (*(P861)rt_nil_check(F->g_615)).env;
g_gdepth_920 = rt_r_ichk(g_depth_890);
{
F->y_1961 = NULL;
F->y_1961 = f_new_sym_173((((rt_int)5LL)), (*(P851)rt_nil_check(F->pat_1953)).name);
F->yc_1962 = NULL;
(*(P861)rt_nil_check(F->y_1961)).decl = F->pat_1953;
if ((rt_r_ichk((*(P851)rt_nil_check(F->pat_1953)).kind) == (((rt_int)44LL)))) {
F->t_1956 = f_new_typ_175((((rt_int)8LL)));
(*(P857)rt_nil_check(F->t_1956)).name = (*(P851)rt_nil_check(F->pat_1953)).name;
(*(P857)rt_nil_check(F->t_1956)).decl = F->pat_1953;
(*(P861)rt_nil_check(F->y_1961)).t = F->t_1956;
f_define_160(F->y_1961, F->line_619);
f_finish_ptr_415(F->t_1956);
} else {
f_define_160(F->y_1961, F->line_619);
F->t_1956 = f_new_type_307(F->y_1961, f_nn_61((((rt_int)80LL)), F->line_619), &F->yc_1962);
}
}
g_caps_906 = F->saved_caps_1957;
g_genv_888 = F->saved_env_1958;
g_gdepth_920 = rt_r_ichk(F->saved_gdepth_1959);
(*(P857)rt_nil_check(F->t_1956)).gen = F->g_615;
(*(P857)rt_nil_check(F->t_1956)).gbinds = F->binds_1954;
f_close_scope_170();
{ R862 *cell1963 = rt_alloc(sizeof(R862));
(*cell1963).name = NULL;
(*cell1963).t = NULL;
(*cell1963).c = NULL;
(*cell1963).access = NULL;
(*cell1963).cname = NULL;
(*cell1963).st = NULL;
(*cell1963).decl = NULL;
(*cell1963).params = NULL;
(*cell1963).result = NULL;
(*cell1963).members = NULL;
(*cell1963).mnext = NULL;
(*cell1963).binds = NULL;
(*cell1963).insts = NULL;
(*cell1963).env = NULL;
(*cell1963).chain = NULL;
(*cell1963).stack = NULL;
(*cell1963).owner = NULL;
(*cell1963).gctx = NULL;
(*cell1963).mv = NULL;
(*cell1963).reqs = NULL;
(*cell1963).home = NULL;
(*cell1963).capn = NULL;
(*cell1963).tbinds = NULL;
F->inst_1955 = cell1963;
}
(*(P861)rt_nil_check(F->inst_1955)).kind = (((rt_int)5LL));
(*(P861)rt_nil_check(F->inst_1955)).name = (*(P861)rt_nil_check(F->g_615)).name;
(*(P861)rt_nil_check(F->inst_1955)).decl = F->pat_1953;
(*(P861)rt_nil_check(F->inst_1955)).t = F->t_1956;
(*(P861)rt_nil_check(F->inst_1955)).members = F->binds_1954;
(*(P861)rt_nil_check(F->inst_1955)).insts = g_all_insts_889;
g_all_insts_889 = F->inst_1955;
F->result_ = F->t_1956;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_618) = F->c_618v;
  RT_FPOP();
  return F->result_;
}

static P861 f_instantiate_625(P861 g_621, P851 tt_622, P851 args_623, rt_int line_624) {
  struct f_instantiate_625fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_621 = g_621;
F->tt_622 = tt_622;
F->args_623 = args_623;
F->line_624 = line_624;
F->gd_1964 = NULL;
F->gd_1964 = (*(P861)rt_nil_check(F->g_621)).decl;
F->pat_1965 = NULL;
F->pat_1965 = (*(P851)rt_nil_check(F->gd_1964)).b;
F->binds_1966 = NULL;
F->f_1967 = NULL;
F->f_1967 = (*(P851)rt_nil_check(F->pat_1965)).e;
F->a_1968 = NULL;
F->a_1968 = F->tt_622;
F->fp_1969 = NULL;
F->fp_1969 = (*(P851)rt_nil_check(F->pat_1965)).a;
F->inst_1970 = NULL;
F->at_1971 = NULL;
F->c_1972 = NULL;
F->saved_fctx_1973 = NULL;
F->saved_fctx_1973 = g_fctx_905;
F->saved_in_1974 = RT_R_EUNDEF;
F->saved_in_1974 = rt_r_echk(g_in_func_903);
F->saved_level_1975 = RT_R_IUNDEF;
F->saved_level_1975 = rt_r_ichk(g_cur_level_904);
F->saved_sym_1976 = NULL;
F->saved_sym_1976 = g_func_sym_915;
F->saved_code_1977 = NULL;
F->saved_code_1977 = g_code_901;
F->saved_env_1978 = NULL;
F->saved_env_1978 = g_genv_888;
F->saved_gdepth_1979 = RT_R_IUNDEF;
F->saved_gdepth_1979 = rt_r_ichk(g_gdepth_920);
F->binds_1966 = f_tt_binds_586(F->gd_1964, F->f_1967, F->a_1968, F->line_624);
F->a_1968 = F->args_623;
while (((F->fp_1969 != NULL) && (F->a_1968 != NULL))) {
if (f_generic_use_609((*(P851)rt_nil_check(F->fp_1969)).a)) {
F->v_1980 = rt_str_copy(f_gexpr_680(F->a_1968, NULL, &F->at_1971));
F->binds_1966 = f_infer_from_614(F->gd_1964, (*(P851)rt_nil_check(F->fp_1969)).a, F->at_1971, F->binds_1966);
} else if ((((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->fp_1969)).a)).kind) == (((rt_int)80LL))) && (f_gparam_573(F->gd_1964, &(((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->fp_1969)).a)).name))->all)) != NULL)) && ((*(P851)rt_nil_check(f_gparam_573(F->gd_1964, &(((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->fp_1969)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_1981 = RT_R_EUNDEF;
F->known_1981 = 0;
F->q_1982 = NULL;
F->q_1982 = F->binds_1966;
while ((F->q_1982 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->q_1982)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->fp_1969)).a)).name))->all))) {
F->known_1981 = 1;
}
F->q_1982 = (*(P861)rt_nil_check(F->q_1982)).mnext;
}
if ((!rt_r_echk(F->known_1981))) {
F->b_1983 = NULL;
F->b_1983 = f_bind_sym_575(f_gparam_573(F->gd_1964, &(((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->fp_1969)).a)).name))->all)));
F->v_1984 = rt_str_copy(f_gexpr_680(F->a_1968, NULL, &F->at_1971));
(*(P861)rt_nil_check(F->b_1983)).t = F->at_1971;
(*(P861)rt_nil_check(F->b_1983)).c = g_no_cons_943;
if ((((*(P851)rt_nil_check(f_gparam_573(F->gd_1964, &(((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->fp_1969)).a)).name))->all)))).b != NULL) && (!f_type_allowed_590(F->at_1971, (*(P851)rt_nil_check(f_gparam_573(F->gd_1964, &(((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->fp_1969)).a)).name))->all)))).b, F->binds_1966)))) {
f_fail_23(F->line_624, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->fp_1969)).a)).name))->all)); b_; }));
}
(*(P861)rt_nil_check(F->b_1983)).mnext = F->binds_1966;
F->binds_1966 = F->b_1983;
}
}
F->fp_1969 = (*(P851)rt_nil_check(F->fp_1969)).next;
F->a_1968 = (*(P851)rt_nil_check(F->a_1968)).next;
}
F->binds_1966 = f_need_binds_607(F->gd_1964, F->binds_1966, F->line_624);
F->inst_1970 = g_all_insts_889;
while ((F->inst_1970 != NULL)) {
if ((((*(P861)rt_nil_check(F->inst_1970)).decl == F->pat_1965) && f_same_binds_578((*(P861)rt_nil_check(F->inst_1970)).members, F->binds_1966))) {
F->result_ = F->inst_1970;
goto ret_;
}
F->inst_1970 = (*(P861)rt_nil_check(F->inst_1970)).insts;
}
g_fctx_905 = (*(P861)rt_nil_check(F->g_621)).gctx;
g_in_func_903 = (rt_r_ichk((*(P861)rt_nil_check(F->g_621)).level) > ((rt_int)0LL));
g_cur_level_904 = rt_r_ichk((*(P861)rt_nil_check(F->g_621)).level);
g_func_sym_915 = (*(P861)rt_nil_check(F->g_621)).owner;
g_code_901 = f_new_buffer_24();
f_open_scope_169();
g_gdepth_920 = rt_r_ichk(g_depth_890);
{
F->b_1985 = NULL;
F->b_1985 = F->binds_1966;
while ((F->b_1985 != NULL)) {
f_define_160(F->b_1985, F->line_624);
F->b_1985 = (*(P861)rt_nil_check(F->b_1985)).mnext;
}
}
g_genv_888 = (*(P861)rt_nil_check(F->g_621)).env;
F->inst_1970 = f_build_subprogram_442(F->pat_1965);
(*(P861)rt_nil_check(F->inst_1970)).members = F->binds_1966;
(*(P861)rt_nil_check(F->inst_1970)).insts = g_all_insts_889;
g_all_insts_889 = F->inst_1970;
f_define_160(F->inst_1970, F->line_624);
f_gen_subprogram_472(F->pat_1965, F->inst_1970);
f_close_scope_170();
g_fctx_905 = F->saved_fctx_1973;
g_in_func_903 = rt_r_echk(F->saved_in_1974);
g_cur_level_904 = rt_r_ichk(F->saved_level_1975);
g_func_sym_915 = F->saved_sym_1976;
g_code_901 = F->saved_code_1977;
g_genv_888 = F->saved_env_1978;
g_gdepth_920 = rt_r_ichk(F->saved_gdepth_1979);
F->result_ = F->inst_1970;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_627(P861 y_626) {
  struct f_access_of_627fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_626 = y_626;
F->p_1986 = NULL;
F->p_1986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if ((rt_r_ichk((*(P861)rt_nil_check(F->y_626)).level) <= ((rt_int)0LL))) {
F->result_ = (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_626)).access))->all);
goto ret_;
}
{ rt_int lo1988 = ((rt_int)1LL), hi1989 = rt_sub(rt_r_ichk(g_cur_level_904), rt_r_ichk((*(P861)rt_nil_check(F->y_626)).level));
for (rt_int it1990 = lo1988; it1990 <= hi1989; it1990++) {
F->i_1987 = it1990;
F->p_1986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->p_1986))->all), rt_str("->up", 4)); b_; }));
}
}
if (rt_r_echk((*(P861)rt_nil_check(F->y_626)).byref)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P844)rt_nil_check(F->p_1986))->all)), rt_str("->", 2)), (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_626)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->p_1986))->all), rt_str("->", 2)), (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_626)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_import_of_630(P851 l_628, rstr *name_629) {
  struct f_import_of_630fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_628 = l_628;
F->name_629 = name_629;
F->p_1991 = NULL;
F->p_1991 = F->l_628;
while ((F->p_1991 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_1991)).name))->all), (*F->name_629))) {
F->result_ = F->p_1991;
goto ret_;
}
F->p_1991 = (*(P851)rt_nil_check(F->p_1991)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_633(P861 y_631, rt_int line_632) {
  struct f_check_import_633fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_631 = y_631;
F->line_632 = line_632;
F->c_1992 = NULL;
F->c_1992 = g_fctx_905;
F->ro_1993 = RT_R_EUNDEF;
F->ro_1993 = 0;
while (((F->c_1992 != NULL) && (rt_r_ichk((*(P861)rt_nil_check(F->y_631)).depth) < rt_r_ichk((*(P868)rt_nil_check(F->c_1992)).depth)))) {
if ((!rt_r_echk((*(P868)rt_nil_check(F->c_1992)).all_imp))) {
F->imp_1994 = NULL;
F->imp_1994 = f_import_of_630((*(P868)rt_nil_check(F->c_1992)).imps, &(((P844)rt_nil_check((*(P861)rt_nil_check(F->y_631)).name))->all));
if ((F->imp_1994 == NULL)) {
f_fail_23(F->line_632, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_631)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if ((rt_r_ichk((*(P851)rt_nil_check(F->imp_1994)).ival) == ((rt_int)1LL))) {
F->ro_1993 = 1;
}
}
F->c_1992 = (*(P868)rt_nil_check(F->c_1992)).next;
}
F->result_ = rt_r_echk(F->ro_1993);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_635(rstr *s_634) {
  struct f_c_ident_635fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_634 = s_634;
if (rt_str_eq((*F->s_634), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_634), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_634), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_634), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_634), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_634), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_634), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_634), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_634), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_634), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_634), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_634), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_634), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_634), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_634));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cell_deref_638(P857 t_636, rstr *p_637) {
  struct f_cell_deref_638fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_636 = t_636;
F->p_637 = p_637;
if ((((*(P857)rt_nil_check(F->t_636)).decl != NULL) && ((*(P851)rt_nil_check((*(P857)rt_nil_check(F->t_636)).decl)).b != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->p_637)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*F->p_637)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_641(rstr *base_639, P857 t_640) {
  struct f_deref_641fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_639 = base_639;
F->t_640 = t_640;
if ((((*(P857)rt_nil_check(F->t_640)).decl != NULL) && ((*(P851)rt_nil_check((*(P857)rt_nil_check(F->t_640)).decl)).b != NULL))) {
if (f_suppressed_449(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->base_639)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_226(F->t_640)), rt_str(")rt_nil_check(", 14)), (*F->base_639)), rt_str("))->all)", 8));
goto ret_;
}
if (f_suppressed_449(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_226(F->t_640)), rt_str(")(", 2)), (*F->base_639)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_226(F->t_640)), rt_str(")rt_nil_check(", 14)), (*F->base_639)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_643(P851 e_642) {
  struct f_is_lvalue_643fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_642 = e_642;
if ((rt_r_ichk((*(P851)rt_nil_check(F->e_642)).kind) == (((rt_int)7LL)))) {
F->y_1995 = NULL;
F->y_1995 = f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_642)).name))->all));
F->result_ = ((F->y_1995 != NULL) && ((rt_r_ichk((*(P861)rt_nil_check(F->y_1995)).kind) == (((rt_int)1LL))) || (((rt_r_ichk((*(P861)rt_nil_check(F->y_1995)).kind) == (((rt_int)2LL))) && ((*(P861)rt_nil_check(F->y_1995)).mv == NULL)) && (!rt_r_echk((*(P861)rt_nil_check(F->y_1995)).hasmv)))));
goto ret_;
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_642)).kind) == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_643((*(P851)rt_nil_check(F->e_642)).a);
goto ret_;
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_642)).kind) == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_642)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_643((*(P851)rt_nil_check(F->e_642)).a));
goto ret_;
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_642)).kind) == (((rt_int)10LL)))) {
if ((((*(P851)rt_nil_check(F->e_642)).b != NULL) && (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_642)).b)).kind) == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_643((*(P851)rt_nil_check(F->e_642)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_649(P851 e_644, P844 *code_645, P857 *t_646, P853 *c_647, int *ro_648) {
  struct f_lvalue_649fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_644 = e_644;
F->code_645 = code_645;
F->code_645v = *F->code_645;
F->t_646 = t_646;
F->t_646v = *F->t_646;
F->c_647 = c_647;
F->c_647v = *F->c_647;
F->ro_648 = ro_648;
F->ro_648v = *F->ro_648;
F->base_1996 = NULL;
F->bt_1997 = NULL;
F->bc_1998 = NULL;
if ((rt_r_ichk((*(P851)rt_nil_check(F->e_644)).kind) == (((rt_int)7LL)))) {
F->y_1999 = NULL;
F->y_1999 = f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_644)).name))->all));
if ((F->y_1999 == NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_644)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_644)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P861)rt_nil_check(F->y_1999)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P861)rt_nil_check(F->y_1999)).kind) != (((rt_int)2LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_644)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_644)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_645v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_627(F->y_1999); b_; }));
F->t_646v = (*(P861)rt_nil_check(F->y_1999)).t;
F->c_647v = (*(P861)rt_nil_check(F->y_1999)).c;
F->ro_648v = rt_r_echk((*(P861)rt_nil_check(F->y_1999)).ro_flag);
if (((rt_r_ichk((*(P861)rt_nil_check(F->y_1999)).kind) == (((rt_int)1LL))) && f_check_import_633(F->y_1999, rt_r_ichk((*(P851)rt_nil_check(F->e_644)).line)))) {
F->ro_648v = 1;
}
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_644)).kind) == (((rt_int)17LL)))) {
f_lvalue_649((*(P851)rt_nil_check(F->e_644)).a, &F->code_645v, &F->t_646v, &F->c_647v, &F->ro_648v);
} else if (((((rt_r_ichk((*(P851)rt_nil_check(F->e_644)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_644)).a)).kind) == (((rt_int)7LL)))) && rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_644)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_645v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_798((*(P851)rt_nil_check(F->e_644)).b, rt_r_ichk((*(P851)rt_nil_check(F->e_644)).line), &F->t_646v); b_; }));
F->c_647v = g_no_cons_943;
F->ro_648v = 0;
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_644)).kind) == (((rt_int)11LL)))) {
f_lvalue_649((*(P851)rt_nil_check(F->e_644)).a, &F->base_1996, &F->bt_1997, &F->bc_1998, &F->ro_648v);
f_select_on_657(&(((P844)rt_nil_check(F->base_1996))->all), F->bt_1997, F->e_644, &F->ro_648v, &F->code_645v, &F->t_646v, &F->c_647v);
} else if ((rt_r_ichk((*(P851)rt_nil_check(F->e_644)).kind) == (((rt_int)10LL)))) {
f_lvalue_649((*(P851)rt_nil_check(F->e_644)).a, &F->base_1996, &F->bt_1997, &F->bc_1998, &F->ro_648v);
f_index_on_674(&(((P844)rt_nil_check(F->base_1996))->all), F->bt_1997, F->e_644, &F->ro_648v, 1, &F->code_645v, &F->t_646v, &F->c_647v);
} else {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_644)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_645) = F->code_645v;  (*F->t_646) = F->t_646v;  (*F->c_647) = F->c_647v;  if (!rt_r_undef_BOOL(F->ro_648v)) (*F->ro_648) = F->ro_648v;
  RT_FPOP();
  return;
}

static void f_select_on_657(rstr *base_650, P857 bt_651, P851 e_652, int *ro_653, P844 *code_654, P857 *t_655, P853 *c_656) {
  struct f_select_on_657fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_650 = base_650;
F->bt_651 = bt_651;
F->e_652 = e_652;
F->ro_653 = ro_653;
F->code_654 = code_654;
F->code_654v = *F->code_654;
F->t_655 = t_655;
F->t_655v = *F->t_655;
F->c_656 = c_656;
F->c_656v = *F->c_656;
F->c_656v = g_no_cons_943;
if ((rt_r_ichk((*(P857)rt_nil_check(F->bt_651)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_415(F->bt_651);
(*F->ro_653) = 0;
if (((*(P857)rt_nil_check(F->bt_651)).decl != NULL)) {
F->p_2000 = NULL;
F->p_2000 = (*(P851)rt_nil_check((*(P857)rt_nil_check(F->bt_651)).decl)).b;
while ((F->p_2000 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_2000)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_652)).name))->all))) {
F->pc_2001 = NULL;
F->code_654v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_226(F->bt_651)), rt_str(")rt_nil_check(", 14)), (*F->base_650)), rt_str("))->p_", 6)), f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_2000)).name))->all))), rt_str(")", 1)); b_; }));
F->t_655v = f_resolve_subtype_257((*(P851)rt_nil_check(F->p_2000)).a, &F->pc_2001);
(*F->ro_653) = 1;
goto ret_;
}
F->p_2000 = (*(P851)rt_nil_check(F->p_2000)).next;
}
}
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_652)).name))->all), rt_str("ALL", 3))) {
F->code_654v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_641(&(*F->base_650), F->bt_651); b_; }));
F->t_655v = (*(P857)rt_nil_check(F->bt_651)).target;
goto ret_;
}
f_select_on_657(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_641(&(*F->base_650), F->bt_651); b_; }), (*(P857)rt_nil_check(F->bt_651)).target, F->e_652, &(*F->ro_653), &F->code_654v, &F->t_655v, &F->c_656v);
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->bt_651)).kind) == (((rt_int)15LL)))) {
F->p_2002 = NULL;
F->p_2002 = (*(P857)rt_nil_check(F->bt_651)).tparams;
while ((F->p_2002 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_2002)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_652)).name))->all))) {
F->code_654v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_650), rt_str(".p_", 3)), f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_2002)).name))->all))); b_; }));
F->t_655v = f_tparam_type_322(F->bt_651, &(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_2002)).name))->all));
(*F->ro_653) = 1;
goto ret_;
}
F->p_2002 = (*(P851)rt_nil_check(F->p_2002)).next;
}
F->p_2002 = (*(P857)rt_nil_check(F->bt_651)).tparams;
if ((!f_opened_297(F->bt_651))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_652)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P844)rt_nil_check((*(P857)rt_nil_check(F->bt_651)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P857)rt_nil_check(F->bt_651)).tparams == NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_652)).name))->all), rt_str("ALL", 3))) {
F->code_654v = f_mk_3(&(*F->base_650));
F->t_655v = (*(P857)rt_nil_check(F->bt_651)).under;
goto ret_;
}
f_select_on_657(&(*F->base_650), (*(P857)rt_nil_check(F->bt_651)).under, F->e_652, &(*F->ro_653), &F->code_654v, &F->t_655v, &F->c_656v);
goto ret_;
}
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_652)).name))->all), rt_str("ALL", 3))) {
F->code_654v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_650), rt_str(".all", 4)); b_; }));
F->t_655v = (*(P857)rt_nil_check(F->bt_651)).under;
goto ret_;
}
while ((F->p_2002 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_2002)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_652)).name))->all))) {
F->code_654v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_650), rt_str(".p_", 3)), f_lower_s_15(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_2002)).name))->all))); b_; }));
F->t_655v = f_tparam_type_322(F->bt_651, &(((P844)rt_nil_check((*(P851)rt_nil_check(F->p_2002)).name))->all));
(*F->ro_653) = 1;
goto ret_;
}
F->p_2002 = (*(P851)rt_nil_check(F->p_2002)).next;
}
f_select_on_657(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_650), rt_str(".all", 4)); b_; }), (*(P857)rt_nil_check(F->bt_651)).under, F->e_652, &(*F->ro_653), &F->code_654v, &F->t_655v, &F->c_656v);
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->bt_651)).kind) == (((rt_int)17LL)))) {
F->f_2003 = NULL;
F->f_2003 = (*(P857)rt_nil_check(F->bt_651)).fields;
F->i_2004 = RT_R_IUNDEF;
F->i_2004 = ((rt_int)0LL);
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_652)).name))->all), rt_str("TAG", 3))) {
F->code_654v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_650)), rt_str(").tag)", 6)); b_; }));
F->t_655v = (*(P857)rt_nil_check(F->bt_651)).elem;
(*F->ro_653) = 1;
goto ret_;
}
while ((F->f_2003 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P859)rt_nil_check(F->f_2003)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_652)).name))->all))) {
F->fn_2005 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_650)), rt_str(").u.", 4)), f_field_c_17(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_652)).name))->all))));
F->c_656v = (*(P859)rt_nil_check(F->f_2003)).c;
F->code_654v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_650)), rt_str(").tag == ", 9)), f_itos_7(rt_r_ichk(F->i_2004))), rt_str(" \? &", 4)), F->fn_2005), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_2005), rt_str(")))", 3)); b_; }));
F->t_655v = (*(P859)rt_nil_check(F->f_2003)).t;
goto ret_;
}
F->i_2004 = rt_add(rt_r_ichk(F->i_2004), ((rt_int)1LL));
F->f_2003 = (*(P859)rt_nil_check(F->f_2003)).next;
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_652)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_652)).name))->all)); b_; }));
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->bt_651)).kind) == (((rt_int)7LL)))) {
F->f_2006 = NULL;
F->f_2006 = (*(P857)rt_nil_check(F->bt_651)).fields;
while ((F->f_2006 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P859)rt_nil_check(F->f_2006)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_652)).name))->all))) {
F->c_656v = (*(P859)rt_nil_check(F->f_2006)).c;
F->code_654v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_650), rt_str(".", 1)), f_field_c_17(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_652)).name))->all))); b_; }));
F->t_655v = (*(P859)rt_nil_check(F->f_2006)).t;
goto ret_;
}
F->f_2006 = (*(P859)rt_nil_check(F->f_2006)).next;
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_652)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_652)).name))->all)); b_; }));
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_652)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_652)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_654) = F->code_654v;  (*F->t_655) = F->t_655v;  (*F->c_656) = F->c_656v;
  RT_FPOP();
  return;
}

static int f_has_call_659(rstr *s_658) {
  struct f_has_call_659fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_658 = s_658;
{ rt_int lo2008 = ((rt_int)1LL), hi2009 = ((rt_int)(((*F->s_658)).len));
for (rt_int it2010 = lo2008; it2010 <= hi2009; it2010++) {
F->i_2007 = it2010;
if ((rt_r_echk(rt_str_get((*F->s_658), F->i_2007)) == 40)) {
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

static void f_need_slice_661(P857 t_660) {
  struct f_need_slice_661fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_660 = t_660;
F->c_2011 = rt_str_copy(f_ctype_226(F->t_660));
F->n_2012 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_2011));
F->l_2013 = NULL;
if (f_seen_name_376(g_mcopies_930, &F->n_2012)) {
goto ret_;
}
{ R856 *cell2014 = rt_alloc(sizeof(R856));
(*cell2014).s = NULL;
(*cell2014).next = NULL;
F->l_2013 = cell2014;
}
(*(P855)rt_nil_check(F->l_2013)).s = f_mk_3(&F->n_2012);
(*(P855)rt_nil_check(F->l_2013)).next = g_mcopies_930;
g_mcopies_930 = F->l_2013;
f_put_27(g_out_protos_896, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2011), rt_str(" ", 1)), F->n_2012), rt_str("(", 1)), F->c_2011), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2011), rt_str(" ", 1)), F->n_2012), rt_str("(", 1)), F->c_2011), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_896, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2011), rt_str(" rt_r_acat_", 11)), F->c_2011), rt_str("(", 1)), F->c_2011), rt_str(" a, ", 4)), F->c_2011), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2011), rt_str(" rt_r_acat_", 11)), F->c_2011), rt_str("(", 1)), F->c_2011), rt_str(" a, ", 4)), F->c_2011), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_2011), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_365((*(P857)rt_nil_check(F->t_660)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_365((*(P857)rt_nil_check(F->t_660)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_898, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_665(rstr *i_662, rstr *lo_663, rstr *hi_664) {
  struct f_ix_665fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_662 = i_662;
F->lo_663 = lo_663;
F->hi_664 = hi_664;
if (f_suppressed_449(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_662)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_662)), rt_str(", ", 2)), (*F->lo_663)), rt_str(", ", 2)), (*F->hi_664)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_674(rstr *base_666, P857 bt_667, P851 e_668, int *ro_669, int lv_670, P844 *code_671, P857 *t_672, P853 *c_673) {
  struct f_index_on_674fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_666 = base_666;
F->bt_667 = bt_667;
F->e_668 = e_668;
F->ro_669 = ro_669;
F->lv_670 = lv_670;
F->code_671 = code_671;
F->code_671v = *F->code_671;
F->t_672 = t_672;
F->t_672v = *F->t_672;
F->c_673 = c_673;
F->c_673v = *F->c_673;
F->a_2015 = NULL;
F->a_2015 = (*(P851)rt_nil_check(F->e_668)).b;
F->it_2016 = NULL;
F->c_673v = g_no_cons_943;
if ((rt_r_ichk((*(P857)rt_nil_check(F->bt_667)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_415(F->bt_667);
(*F->ro_669) = 0;
f_index_on_674(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_641(&(*F->base_666), F->bt_667); b_; }), (*(P857)rt_nil_check(F->bt_667)).target, F->e_668, &(*F->ro_669), F->lv_670, &F->code_671v, &F->t_672v, &F->c_673v);
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->bt_667)).kind) == (((rt_int)15LL)))) {
if ((!f_opened_297(F->bt_667))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_668)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P844)rt_nil_check((*(P857)rt_nil_check(F->bt_667)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P857)rt_nil_check(F->bt_667)).tparams == NULL)) {
f_index_on_674(&(*F->base_666), (*(P857)rt_nil_check(F->bt_667)).under, F->e_668, &(*F->ro_669), F->lv_670, &F->code_671v, &F->t_672v, &F->c_673v);
} else {
f_index_on_674(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_666), rt_str(".all", 4)); b_; }), (*(P857)rt_nil_check(F->bt_667)).under, F->e_668, &(*F->ro_669), F->lv_670, &F->code_671v, &F->t_672v, &F->c_673v);
}
goto ret_;
}
if ((((rt_r_ichk((*(P857)rt_nil_check(F->bt_667)).kind) == (((rt_int)6LL))) && (F->a_2015 != NULL)) && (rt_r_ichk((*(P851)rt_nil_check(F->a_2015)).kind) == (((rt_int)16LL))))) {
if (((rt_r_ichk((*(P857)rt_nil_check(F->bt_667)).ndim) != ((rt_int)1LL)) || ((*(P851)rt_nil_check(F->a_2015)).next != NULL))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_668)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_2017 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->a_2015)).a, (*(P857)rt_nil_check(F->bt_667)).idx, &F->it_2016));
F->hi_2018 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->a_2015)).b, (*(P857)rt_nil_check(F->bt_667)).idx, &F->it_2016));
F->code_671v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_226(F->bt_667)), rt_str("(", 1)), (*F->base_666)), rt_str(", ", 2)), F->lo_2017), rt_str(", ", 2)), F->hi_2018), rt_str(")", 1)); b_; }));
f_need_slice_661(F->bt_667);
F->t_672v = F->bt_667;
(*F->ro_669) = 1;
}
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->bt_667)).kind) == (((rt_int)6LL)))) {
F->off_2019 = NULL;
F->k_2020 = RT_R_IUNDEF;
F->k_2020 = ((rt_int)0LL);
F->b_2021 = NULL;
F->b_2021 = f_mk_3(&(*F->base_666));
F->pre_2022 = NULL;
F->pre_2022 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_67(F->a_2015) != rt_r_ichk((*(P857)rt_nil_check(F->bt_667)).ndim))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_668)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7(rt_r_ichk((*(P857)rt_nil_check(F->bt_667)).ndim)), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_670) && f_has_call_659(&(*F->base_666)))) {
F->pre_2022 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->bt_667)), rt_str(" b_ = ", 6)), (*F->base_666)), rt_str("; ", 2)); b_; }));
F->b_2021 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_2015 != NULL)) {
F->k_2020 = rt_add(rt_r_ichk(F->k_2020), ((rt_int)1LL));
{
F->i_2023 = rt_str_copy(f_gexpr_680(F->a_2015, f_idx_type_250(F->bt_667, rt_r_ichk(F->k_2020)), &F->it_2016));
F->l_2024 = rt_str_copy(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->b_2021))->all), rt_str(".", 1)), f_dim_lo_234(rt_r_ichk(F->k_2020))));
F->h_2025 = rt_str_copy(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->b_2021))->all), rt_str(".", 1)), f_dim_hi_236(rt_r_ichk(F->k_2020))));
f_check_type_224(F->it_2016, f_idx_type_250(F->bt_667, rt_r_ichk(F->k_2020)), rt_r_ichk((*(P851)rt_nil_check(F->e_668)).line));
if ((F->off_2019 == NULL)) {
F->off_2019 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_665(&F->i_2023, &F->l_2024, &F->h_2025)), rt_str(" - ", 3)), F->l_2024), rt_str(")", 1)); b_; }));
} else {
F->off_2019 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P844)rt_nil_check(F->off_2019))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2024), rt_str(", ", 2)), F->h_2025), rt_str(") + ", 4)), f_ix_665(&F->i_2023, &F->l_2024, &F->h_2025)), rt_str(" - ", 3)), F->l_2024), rt_str(")", 1)); b_; }));
}
}
F->a_2015 = (*(P851)rt_nil_check(F->a_2015)).next;
}
if ((((rt_int)(((((P844)rt_nil_check(F->pre_2022))->all)).len)) > ((rt_int)0LL))) {
F->code_671v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->pre_2022))->all), (((P844)rt_nil_check(F->b_2021))->all)), rt_str(".p[", 3)), (((P844)rt_nil_check(F->off_2019))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_671v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->b_2021))->all), rt_str(".p[", 3)), (((P844)rt_nil_check(F->off_2019))->all)), rt_str("]", 1)); b_; }));
}
F->t_672v = (*(P857)rt_nil_check(F->bt_667)).elem;
F->c_673v = (*(P857)rt_nil_check(F->bt_667)).elemcons;
goto ret_;
}
if ((f_list_len_67(F->a_2015) != ((rt_int)1LL))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_668)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->bt_667)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P851)rt_nil_check(F->a_2015)).kind) == (((rt_int)16LL)))) {
F->lo_2026 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->a_2015)).a, g_ty_int_931, &F->it_2016));
F->hi_2027 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->a_2015)).b, g_ty_int_931, &F->it_2016));
F->code_671v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_666)), rt_str(", ", 2)), F->lo_2026), rt_str(", ", 2)), F->hi_2027), rt_str(")", 1)); b_; }));
F->t_672v = F->bt_667;
(*F->ro_669) = 1;
goto ret_;
}
{
F->i_2028 = rt_str_copy(f_gexpr_680(F->a_2015, g_ty_int_931, &F->it_2016));
F->t_672v = f_str_elem_210(F->bt_667);
F->c_673v = (*(P857)rt_nil_check(F->bt_667)).elemcons;
if (F->lv_670) {
F->code_671v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_666)), rt_str(", ", 2)), F->i_2028), rt_str("))", 2)); b_; }));
} else {
F->code_671v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_666)), rt_str(", ", 2)), F->i_2028), rt_str(")", 1)); b_; }));
(*F->ro_669) = 1;
}
}
goto ret_;
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_668)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_671) = F->code_671v;  (*F->t_672) = F->t_672v;  (*F->c_673) = F->c_673v;
  RT_FPOP();
  return;
}

static int f_own_attribute_676(P851 e_675) {
  struct f_own_attribute_676fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_675 = e_675;
F->saved_2029 = NULL;
F->saved_2029 = g_code_901;
F->bt_2030 = NULL;
F->ok_2031 = RT_R_EUNDEF;
F->ok_2031 = 0;
g_trial_929 = rt_add(rt_r_ichk(g_trial_929), ((rt_int)1LL));
g_code_901 = f_new_buffer_24();
{ rt_frame xf2032;
if (RT_TRY(xf2032)) {
F->base_2034 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_675)).a, NULL, &F->bt_2030));
while (((F->bt_2030 != NULL) && (rt_r_ichk((*(P857)rt_nil_check(F->bt_2030)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_415(F->bt_2030);
F->bt_2030 = (*(P857)rt_nil_check(F->bt_2030)).target;
}
while ((((F->bt_2030 != NULL) && (rt_r_ichk((*(P857)rt_nil_check(F->bt_2030)).kind) == (((rt_int)15LL)))) && ((*(P857)rt_nil_check(F->bt_2030)).tparams == NULL))) {
F->bt_2030 = (*(P857)rt_nil_check(F->bt_2030)).under;
}
if (((F->bt_2030 != NULL) && (rt_r_ichk((*(P857)rt_nil_check(F->bt_2030)).kind) == (((rt_int)15LL))))) {
F->p_2035 = NULL;
F->p_2035 = (*(P857)rt_nil_check(F->bt_2030)).tparams;
while ((F->p_2035 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_2035)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_675)).name))->all))) {
F->ok_2031 = 1;
}
F->p_2035 = (*(P851)rt_nil_check(F->p_2035)).next;
}
F->bt_2030 = (*(P857)rt_nil_check(F->bt_2030)).under;
}
if (((F->bt_2030 != NULL) && ((rt_r_ichk((*(P857)rt_nil_check(F->bt_2030)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->bt_2030)).kind) == (((rt_int)17LL)))))) {
F->f_2036 = NULL;
F->f_2036 = (*(P857)rt_nil_check(F->bt_2030)).fields;
while ((F->f_2036 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P859)rt_nil_check(F->f_2036)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_675)).name))->all))) {
F->ok_2031 = 1;
}
F->f_2036 = (*(P859)rt_nil_check(F->f_2036)).next;
}
}
RT_POP(xf2032);
} else {
RT_POP(xf2032);
int x2033 = rt_xcur;
if (0 || x2033 == ex_compile_error_1) {
F->ok_2031 = 0;
} else {
rt_raise(x2033);
}
}
}
g_trial_929 = rt_sub(rt_r_ichk(g_trial_929), ((rt_int)1LL));
g_code_901 = F->saved_2029;
F->result_ = rt_r_echk(F->ok_2031);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_680(P851 e_677, P857 want_678, P857 *t_679) {
  struct f_gexpr_680fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_677 = e_677;
F->want_678 = want_678;
F->t_679 = t_679;
F->t_679v = *F->t_679;
F->k_2037 = RT_R_IUNDEF;
F->k_2037 = rt_r_ichk((*(P851)rt_nil_check(F->e_677)).kind);
F->code_2038 = NULL;
F->c_2039 = NULL;
F->ro_2040 = RT_R_EUNDEF;
F->bt_2041 = NULL;
F->ctx_2042 = NULL;
F->ctx_2042 = g_cons_ctx_922;
g_cons_ctx_922 = NULL;
F->t_679v = g_ty_int_931;
if ((rt_r_ichk(F->k_2037) == (((rt_int)1LL)))) {
if (((F->want_678 != NULL) && (rt_r_ichk((*(P857)rt_nil_check(F->want_678)).kind) == (((rt_int)3LL))))) {
F->t_679v = g_ty_float_933;
F->result_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((rt_r_ichk(F->k_2037) == (((rt_int)2LL)))) {
F->t_679v = g_ty_float_933;
F->result_ = (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all);
goto ret_;
} else if ((rt_r_ichk(F->k_2037) == (((rt_int)5LL)))) {
F->t_679v = g_ty_bool_932;
F->result_ = f_itos_7(rt_r_ichk((*(P851)rt_nil_check(F->e_677)).ival));
goto ret_;
} else if (((((rt_r_ichk(F->k_2037) == (((rt_int)3LL))) && (F->want_678 != NULL)) && (rt_r_ichk((*(P857)rt_nil_check(F->want_678)).kind) == (((rt_int)5LL)))) && (!f_same_213(f_str_elem_210(F->want_678), g_ty_ascii_934)))) {
F->r_2043 = NULL;
F->r_2043 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_679v = F->want_678;
{ rt_int lo2045 = ((rt_int)1LL), hi2046 = ((rt_int)(((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all)).len));
for (rt_int it2047 = lo2045; it2047 <= hi2046; it2047++) {
F->i_2044 = it2047;
F->pos_2048 = RT_R_IUNDEF;
F->pos_2048 = f_lit_index_254((*(P857)rt_nil_check(f_base_of_215(f_str_elem_210(F->want_678)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_690(rt_r_echk(rt_str_get((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), F->i_2044))); b_; }));
if ((rt_r_ichk(F->pos_2048) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_677)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_690(rt_r_echk(rt_str_get((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), F->i_2044)))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_2043 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_2043))->all), rt_str("\\", 1)), f_octal_692(rt_r_ichk(F->pos_2048))); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P844)rt_nil_check(F->r_2043))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2037) == (((rt_int)3LL)))) {
F->t_679v = g_ty_string_935;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_705(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2037) == (((rt_int)6LL)))) {
F->t_679v = g_ty_nil_938;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((rt_r_ichk(F->k_2037) == (((rt_int)4LL)))) {
if (((F->want_678 != NULL) && ((*(P857)rt_nil_check(f_base_of_215(F->want_678))).kind == (((rt_int)4LL))))) {
F->t_679v = F->want_678;
} else {
F->t_679v = f_enum_type_of_708(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_r_ichk((*(P851)rt_nil_check(F->e_677)).line));
}
{
F->i_2049 = RT_R_IUNDEF;
F->i_2049 = f_lit_index_254((*(P857)rt_nil_check(f_base_of_215(F->t_679v))).lits, &(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all));
if ((rt_r_ichk(F->i_2049) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_677)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(rt_r_ichk(F->i_2049));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2037) == (((rt_int)17LL)))) {
g_cons_ctx_922 = F->ctx_2042;
F->result_ = f_gexpr_680((*(P851)rt_nil_check(F->e_677)).a, F->want_678, &F->t_679v);
goto ret_;
} else if ((rt_r_ichk(F->k_2037) == (((rt_int)7LL)))) {
F->y_2050 = NULL;
F->y_2050 = f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all));
if ((F->y_2050 == NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("ME", 2))) {
F->t_679v = g_ty_act_941;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_679v = g_ty_act_941;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_810(f_wrap_apply_703(F->e_677), 0, &F->t_679v);
goto ret_;
}
if (((((((((rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_810(f_wrap_apply_703(F->e_677), 0, &F->t_679v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_677)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P861)rt_nil_check(F->y_2050)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_2050)).kind) == (((rt_int)2LL))))) {
F->ro_2051 = RT_R_EUNDEF;
F->t_679v = (*(P861)rt_nil_check(F->y_2050)).t;
if ((rt_r_ichk((*(P861)rt_nil_check(F->y_2050)).kind) == (((rt_int)1LL)))) {
F->ro_2051 = f_check_import_633(F->y_2050, rt_r_ichk((*(P851)rt_nil_check(F->e_677)).line));
F->result_ = f_init_chk_331((*(P861)rt_nil_check(F->y_2050)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_627(F->y_2050); b_; }));
goto ret_;
}
F->result_ = f_access_of_627(F->y_2050);
goto ret_;
}
if ((rt_r_ichk((*(P861)rt_nil_check(F->y_2050)).kind) == (((rt_int)3LL)))) {
F->result_ = f_gcall_810(f_wrap_apply_703(F->e_677), 0, &F->t_679v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_677)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((rt_r_ichk(F->k_2037) == (((rt_int)8LL))) && (f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all)) != NULL)) && (f_user_op_806(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), f_copy_node_701((*(P851)rt_nil_check(F->e_677)).a)) != NULL))) {
F->call_2052 = NULL;
F->call_2052 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P851)rt_nil_check(F->e_677)).line));
F->fname_2053 = NULL;
F->fname_2053 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P851)rt_nil_check(F->e_677)).line));
(*(P851)rt_nil_check(F->fname_2053)).name = (*(P851)rt_nil_check(F->e_677)).name;
(*(P851)rt_nil_check(F->call_2052)).a = F->fname_2053;
(*(P851)rt_nil_check(F->call_2052)).b = f_copy_node_701((*(P851)rt_nil_check(F->e_677)).a);
F->result_ = f_gcall_810(F->call_2052, 0, &F->t_679v);
goto ret_;
} else if (((((rt_r_ichk(F->k_2037) == (((rt_int)8LL))) && rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("NOT", 3))) && (F->want_678 != NULL)) && (rt_r_ichk((*(P857)rt_nil_check(F->want_678)).kind) == (((rt_int)16LL))))) {
F->a_2054 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_677)).a, F->want_678, &F->t_679v));
F->result_ = rt_str_cat(rt_str_cat(rt_str("y_set_compl(", 12), F->a_2054), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2037) == (((rt_int)8LL)))) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("NOT", 3))) {
F->a_2055 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_677)).a, g_ty_bool_932, &F->t_679v));
f_check_type_224(F->t_679v, g_ty_bool_932, rt_r_ichk((*(P851)rt_nil_check(F->e_677)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_2055), rt_str(")", 1));
goto ret_;
}
{
F->a_2056 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_677)).a, F->want_678, &F->t_679v));
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_2056;
goto ret_;
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->t_679v)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_2056), rt_str(")", 1));
goto ret_;
}
f_check_type_224(F->t_679v, g_ty_int_931, rt_r_ichk((*(P851)rt_nil_check(F->e_677)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_2056), rt_str(")", 1));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2037) == (((rt_int)9LL)))) {
F->result_ = f_gbinop_730(F->e_677, F->want_678, &F->t_679v);
goto ret_;
} else if ((rt_r_ichk(F->k_2037) == (((rt_int)10LL)))) {
if (((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_677)).a)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_677)).a)).kind) == (((rt_int)12LL))))) {
F->nm_2057 = NULL;
F->nm_2057 = (*(P851)rt_nil_check(F->e_677)).a;
F->y_2058 = NULL;
if ((rt_r_ichk((*(P851)rt_nil_check(F->nm_2057)).kind) == (((rt_int)12LL)))) {
F->nm_2057 = (*(P851)rt_nil_check(F->nm_2057)).a;
}
F->y_2058 = f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->nm_2057)).name))->all));
if (((((F->y_2058 == NULL) || (rt_r_ichk((*(P861)rt_nil_check(F->y_2058)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_2058)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_2058)).kind) == (((rt_int)10LL))))) {
F->result_ = f_gcall_810(F->e_677, 0, &F->t_679v);
goto ret_;
}
}
{
F->base_2059 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_677)).a, NULL, &F->bt_2041));
F->ro_2040 = 1;
f_index_on_674(&F->base_2059, F->bt_2041, F->e_677, &F->ro_2040, 0, &F->code_2038, &F->t_679v, &F->c_2039);
if ((((!f_is_lvalue_643(F->e_677)) || (rt_r_ichk((*(P857)rt_nil_check(F->t_679v)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P857)rt_nil_check(F->t_679v)).kind) == (((rt_int)5LL))))) {
F->result_ = (((P844)rt_nil_check(F->code_2038))->all);
goto ret_;
}
F->result_ = f_init_chk_331(F->t_679v, &(((P844)rt_nil_check(F->code_2038))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2037) == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_676(F->e_677)))) {
F->result_ = f_attribute_713(F->e_677, &F->t_679v);
goto ret_;
} else if (((f_as_subtype_286((*(P851)rt_nil_check(F->e_677)).a) != NULL) || f_ptr_attribute_710(F->e_677))) {
F->result_ = f_attribute_713(F->e_677, &F->t_679v);
goto ret_;
}
{
F->base_2060 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_677)).a, NULL, &F->bt_2041));
F->ro_2040 = 1;
f_select_on_657(&F->base_2060, F->bt_2041, F->e_677, &F->ro_2040, &F->code_2038, &F->t_679v, &F->c_2039);
if ((rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_677)).name))->all), rt_str("TAG", 3)) || (!f_is_lvalue_643(F->e_677)))) {
F->result_ = (((P844)rt_nil_check(F->code_2038))->all);
goto ret_;
}
F->result_ = f_init_chk_331(F->t_679v, &(((P844)rt_nil_check(F->code_2038))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2037) == (((rt_int)12LL)))) {
F->result_ = f_gcall_810(f_wrap_apply_703(F->e_677), 0, &F->t_679v);
goto ret_;
} else if ((rt_r_ichk(F->k_2037) == (((rt_int)14LL)))) {
F->result_ = f_constructor_735(F->e_677, F->want_678, F->ctx_2042, &F->t_679v);
goto ret_;
} else if ((rt_r_ichk(F->k_2037) == (((rt_int)13LL)))) {
F->result_ = f_resolved_683(F->e_677, &F->t_679v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_677)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_679) = F->t_679v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_683(P851 e_681, P857 *t_682) {
  struct f_resolved_683fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_681 = e_681;
F->t_682 = t_682;
F->t_682v = *F->t_682;
F->c_2061 = NULL;
F->vt_2062 = NULL;
F->y_2063 = NULL;
F->y_2063 = f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_2064 = NULL;
F->tt_2064 = f_copy_node_701((*(P851)rt_nil_check(F->e_681)).b);
(*(P851)rt_nil_check(F->tt_2064)).next = NULL;
if (((F->y_2063 != NULL) && ((rt_r_ichk((*(P861)rt_nil_check(F->y_2063)).kind) == (((rt_int)10LL))) || (f_resolve_overload_784(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_2064, f_copy_node_701((*(P851)rt_nil_check(F->e_681)).a), 0, rt_r_ichk((*(P851)rt_nil_check(F->e_681)).line)) != NULL)))) {
F->call_2065 = NULL;
F->call_2065 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P851)rt_nil_check(F->e_681)).line));
F->f_2066 = NULL;
F->f_2066 = f_nn_61((((rt_int)12LL)), rt_r_ichk((*(P851)rt_nil_check(F->e_681)).line));
F->fname_2067 = NULL;
F->fname_2067 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P851)rt_nil_check(F->e_681)).line));
(*(P851)rt_nil_check(F->fname_2067)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P851)rt_nil_check(F->f_2066)).a = F->fname_2067;
(*(P851)rt_nil_check(F->f_2066)).b = F->tt_2064;
(*(P851)rt_nil_check(F->call_2065)).a = F->f_2066;
(*(P851)rt_nil_check(F->call_2065)).b = f_copy_node_701((*(P851)rt_nil_check(F->e_681)).a);
(*(P851)rt_nil_check((*(P851)rt_nil_check(F->call_2065)).b)).next = NULL;
F->result_ = f_gcall_810(F->call_2065, 0, &F->t_682v);
goto ret_;
}
F->t_682v = f_resolve_subtype_257((*(P851)rt_nil_check(F->e_681)).b, &F->c_2061);
{
F->v_2068 = rt_str_copy(f_gexpr_in_688((*(P851)rt_nil_check(F->e_681)).a, F->t_682v, F->c_2061, &F->vt_2062));
f_check_type_224(F->vt_2062, F->t_682v, rt_r_ichk((*(P851)rt_nil_check(F->e_681)).line));
F->result_ = f_checked_205(F->t_682v, F->c_2061, &F->v_2068);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_682) = F->t_682v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_688(P851 e_684, P857 want_685, P853 c_686, P857 *t_687) {
  struct f_gexpr_in_688fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_684 = e_684;
F->want_685 = want_685;
F->c_686 = c_686;
F->t_687 = t_687;
F->t_687v = *F->t_687;
g_cons_ctx_922 = F->c_686;
F->result_ = f_gexpr_680(F->e_684, F->want_685, &F->t_687v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_687) = F->t_687v;
  RT_FPOP();
  return F->result_;
}

static rstr f_ascii_lit_690(int ch_689) {
  struct f_ascii_lit_690fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ch_689 = ch_689;
F->l_2069 = NULL;
F->l_2069 = (*(P857)rt_nil_check(g_ty_ascii_934)).lits;
{ rt_int lo2071 = ((rt_int)1LL), hi2072 = rt_sub(((rt_int)(F->ch_689) + 1), ((rt_int)1LL));
for (rt_int it2073 = lo2071; it2073 <= hi2072; it2073++) {
F->i_2070 = it2073;
F->l_2069 = (*(P851)rt_nil_check(F->l_2069)).next;
}
}
F->result_ = (((P844)rt_nil_check((*(P851)rt_nil_check(F->l_2069)).name))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_octal_692(rt_int n_691) {
  struct f_octal_692fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_691 = n_691;
F->r_2074 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_2074, rt_str("000", 3));
(*rt_str_at(&F->r_2074, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_691, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2074, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_691, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2074, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_691, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_2074;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P857 f_str_cat_part_694(P857 t_693) {
  struct f_str_cat_part_694fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_693 = t_693;
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_693)).kind) == (((rt_int)5LL)))) {
F->result_ = f_str_elem_210(F->t_693);
goto ret_;
}
F->result_ = F->t_693;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P857 f_peek_type_696(P851 e_695) {
  struct f_peek_type_696fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_695 = e_695;
F->saved_2075 = NULL;
F->saved_2075 = g_code_901;
F->t_2076 = NULL;
g_trial_929 = rt_add(rt_r_ichk(g_trial_929), ((rt_int)1LL));
g_code_901 = f_new_buffer_24();
{ rt_frame xf2077;
if (RT_TRY(xf2077)) {
F->v_2079 = rt_str_copy(f_gexpr_680(F->e_695, NULL, &F->t_2076));
RT_POP(xf2077);
} else {
RT_POP(xf2077);
int x2078 = rt_xcur;
if (0 || x2078 == ex_compile_error_1) {
F->t_2076 = NULL;
} else {
rt_raise(x2078);
}
}
}
g_trial_929 = rt_sub(rt_r_ichk(g_trial_929), ((rt_int)1LL));
g_code_901 = F->saved_2075;
F->result_ = F->t_2076;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P857 f_set_operands_699(P851 e_697, P857 want_698) {
  struct f_set_operands_699fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_697 = e_697;
F->want_698 = want_698;
F->t_2080 = NULL;
if (((F->want_698 != NULL) && (rt_r_ichk((*(P857)rt_nil_check(F->want_698)).kind) == (((rt_int)16LL))))) {
F->result_ = F->want_698;
goto ret_;
} else if ((F->want_698 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_697)).a)).kind) != (((rt_int)14LL)))) {
F->t_2080 = f_peek_type_696((*(P851)rt_nil_check(F->e_697)).a);
} else if ((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_697)).b)).kind) != (((rt_int)14LL)))) {
F->t_2080 = f_peek_type_696((*(P851)rt_nil_check(F->e_697)).b);
}
if (((F->t_2080 != NULL) && (rt_r_ichk((*(P857)rt_nil_check(F->t_2080)).kind) == (((rt_int)16LL))))) {
F->result_ = F->t_2080;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_copy_node_701(P851 e_700) {
  struct f_copy_node_701fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_700 = e_700;
F->x_2081 = NULL;
{ R852 *cell2082 = rt_alloc(sizeof(R852));
(*cell2082).name = NULL;
(*cell2082).tag = NULL;
(*cell2082).prags = NULL;
(*cell2082).labels = NULL;
(*cell2082).a = NULL;
(*cell2082).b = NULL;
(*cell2082).c = NULL;
(*cell2082).d = NULL;
(*cell2082).e = NULL;
(*cell2082).next = NULL;
F->x_2081 = cell2082;
}
(*(P851)rt_nil_check(F->x_2081)).kind = rt_r_ichk((*(P851)rt_nil_check(F->e_700)).kind);
(*(P851)rt_nil_check(F->x_2081)).line = rt_r_ichk((*(P851)rt_nil_check(F->e_700)).line);
(*(P851)rt_nil_check(F->x_2081)).ival = rt_r_ichk((*(P851)rt_nil_check(F->e_700)).ival);
(*(P851)rt_nil_check(F->x_2081)).flag = rt_r_ichk((*(P851)rt_nil_check(F->e_700)).flag);
(*(P851)rt_nil_check(F->x_2081)).name = (*(P851)rt_nil_check(F->e_700)).name;
(*(P851)rt_nil_check(F->x_2081)).tag = (*(P851)rt_nil_check(F->e_700)).tag;
(*(P851)rt_nil_check(F->x_2081)).a = (*(P851)rt_nil_check(F->e_700)).a;
(*(P851)rt_nil_check(F->x_2081)).b = (*(P851)rt_nil_check(F->e_700)).b;
(*(P851)rt_nil_check(F->x_2081)).c = (*(P851)rt_nil_check(F->e_700)).c;
(*(P851)rt_nil_check(F->x_2081)).d = (*(P851)rt_nil_check(F->e_700)).d;
F->result_ = F->x_2081;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P851 f_wrap_apply_703(P851 e_702) {
  struct f_wrap_apply_703fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_702 = e_702;
F->x_2083 = NULL;
F->x_2083 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P851)rt_nil_check(F->e_702)).line));
(*(P851)rt_nil_check(F->x_2083)).a = F->e_702;
F->result_ = F->x_2083;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_705(rstr *s_704) {
  struct f_c_string_705fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_704 = s_704;
F->n_2084 = RT_R_IUNDEF;
F->n_2084 = ((rt_int)0LL);
{ rt_int lo2086 = ((rt_int)1LL), hi2087 = ((rt_int)(((*F->s_704)).len));
for (rt_int it2088 = lo2086; it2088 <= hi2087; it2088++) {
F->i_2085 = it2088;
if (((rt_r_echk(rt_str_get((*F->s_704), F->i_2085)) == 92) || (rt_r_echk(rt_str_get((*F->s_704), F->i_2085)) == 63))) {
F->n_2084 = rt_add(rt_r_ichk(F->n_2084), ((rt_int)1LL));
}
}
}
{
F->r_2089 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_704)).len)), rt_r_ichk(F->n_2084)), ((rt_int)2LL)));
F->j_2090 = RT_R_IUNDEF;
F->j_2090 = ((rt_int)1LL);
(*rt_str_at(&F->r_2089, ((rt_int)1LL))) = 34;
{ rt_int lo2092 = ((rt_int)1LL), hi2093 = ((rt_int)(((*F->s_704)).len));
for (rt_int it2094 = lo2092; it2094 <= hi2093; it2094++) {
F->i_2091 = it2094;
F->j_2090 = rt_add(rt_r_ichk(F->j_2090), ((rt_int)1LL));
if (((rt_r_echk(rt_str_get((*F->s_704), F->i_2091)) == 92) || (rt_r_echk(rt_str_get((*F->s_704), F->i_2091)) == 63))) {
(*rt_str_at(&F->r_2089, rt_r_ichk(F->j_2090))) = 92;
F->j_2090 = rt_add(rt_r_ichk(F->j_2090), ((rt_int)1LL));
}
(*rt_str_at(&F->r_2089, rt_r_ichk(F->j_2090))) = rt_r_echk(rt_str_get((*F->s_704), F->i_2091));
}
}
(*rt_str_at(&F->r_2089, rt_add(rt_r_ichk(F->j_2090), ((rt_int)1LL)))) = 34;
F->result_ = F->r_2089;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P857 f_enum_type_of_708(rstr *lit_706, rt_int line_707) {
  struct f_enum_type_of_708fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_706 = lit_706;
F->line_707 = line_707;
F->y_2095 = NULL;
F->y_2095 = g_scope_stack_891;
F->c_2096 = NULL;
if ((f_lit_index_254((*(P857)rt_nil_check(g_ty_ascii_934)).lits, &(*F->lit_706)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_934;
goto ret_;
}
while ((F->y_2095 != NULL)) {
if (((((rt_r_ichk((*(P861)rt_nil_check(F->y_2095)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_2095)).kind) == (((rt_int)5LL)))) && ((*(P861)rt_nil_check(F->y_2095)).st != NULL)) && (rt_r_ichk((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_2095)).st)).kind) == (((rt_int)72LL))))) {
if ((f_lit_index_254((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_2095)).st)).a, &(*F->lit_706)) >= ((rt_int)0LL))) {
if ((rt_r_ichk((*(P861)rt_nil_check(F->y_2095)).kind) == (((rt_int)5LL)))) {
F->st_2097 = NULL;
F->st_2097 = f_nn_61((((rt_int)80LL)), F->line_707);
(*(P851)rt_nil_check(F->st_2097)).name = (*(P861)rt_nil_check(F->y_2095)).name;
F->result_ = f_resolve_subtype_257(F->st_2097, &F->c_2096);
goto ret_;
}
F->result_ = f_resolve_subtype_257((*(P861)rt_nil_check(F->y_2095)).st, &F->c_2096);
goto ret_;
}
}
F->y_2095 = (*(P861)rt_nil_check(F->y_2095)).stack;
}
f_fail_23(F->line_707, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_706)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_710(P851 e_709) {
  struct f_ptr_attribute_710fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_709 = e_709;
F->lv_2098 = NULL;
F->t_2099 = NULL;
F->c_2100 = NULL;
F->ro_2101 = RT_R_EUNDEF;
F->p_2102 = NULL;
F->saved_2103 = NULL;
F->saved_2103 = g_code_901;
if ((!f_is_lvalue_643((*(P851)rt_nil_check(F->e_709)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_901 = f_new_buffer_24();
f_lvalue_649((*(P851)rt_nil_check(F->e_709)).a, &F->lv_2098, &F->t_2099, &F->c_2100, &F->ro_2101);
g_code_901 = F->saved_2103;
if (((rt_r_ichk((*(P857)rt_nil_check(F->t_2099)).kind) != (((rt_int)8LL))) || ((*(P857)rt_nil_check(F->t_2099)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_2102 = (*(P851)rt_nil_check((*(P857)rt_nil_check(F->t_2099)).decl)).d;
while ((F->p_2102 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_2102)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_709)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_2102 = (*(P851)rt_nil_check(F->p_2102)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_713(P851 e_711, P857 *t_712) {
  struct f_attribute_713fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_711 = e_711;
F->t_712 = t_712;
F->t_712v = *F->t_712;
F->bt_2104 = NULL;
F->c_2105 = NULL;
F->base_2106 = NULL;
F->sub_2107 = NULL;
F->sub_2107 = f_as_subtype_286((*(P851)rt_nil_check(F->e_711)).a);
F->name_2108 = rt_str_copy((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_711)).name))->all));
if ((F->sub_2107 != NULL)) {
F->bt_2104 = f_resolve_subtype_257(F->sub_2107, &F->c_2105);
} else {
F->bt_2104 = f_value_subtype_279((*(P851)rt_nil_check(F->e_711)).a, &F->c_2105, &F->base_2106);
}
if (((((rt_r_ichk((*(P857)rt_nil_check(F->bt_2104)).kind) == (((rt_int)8LL))) && (F->c_2105 != NULL)) && ((*(P853)rt_nil_check(F->c_2105)).args != NULL)) && ((*(P857)rt_nil_check(F->bt_2104)).decl != NULL))) {
F->p_2109 = NULL;
F->p_2109 = (*(P851)rt_nil_check((*(P857)rt_nil_check(F->bt_2104)).decl)).d;
F->a_2110 = NULL;
F->a_2110 = (*(P853)rt_nil_check(F->c_2105)).args;
while (((F->p_2109 != NULL) && (F->a_2110 != NULL))) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_2109)).name))->all), F->name_2108)) {
F->pc_2111 = NULL;
F->v_2112 = rt_str_copy(f_gexpr_680(F->a_2110, f_resolve_subtype_257((*(P851)rt_nil_check(F->p_2109)).a, &F->pc_2111), &F->t_712v));
F->result_ = F->v_2112;
goto ret_;
}
F->p_2109 = (*(P851)rt_nil_check(F->p_2109)).next;
F->a_2110 = (*(P851)rt_nil_check(F->a_2110)).next;
}
}
while (((rt_r_ichk((*(P857)rt_nil_check(F->bt_2104)).kind) == (((rt_int)8LL))) && (F->base_2106 != NULL))) {
f_finish_ptr_415(F->bt_2104);
F->base_2106 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_641(&(((P844)rt_nil_check(F->base_2106))->all), F->bt_2104); b_; }));
F->bt_2104 = (*(P857)rt_nil_check(F->bt_2104)).target;
F->c_2105 = NULL;
if ((rt_r_ichk((*(P857)rt_nil_check(F->bt_2104)).kind) == (((rt_int)5LL)))) {
F->c_2105 = f_new_cons_176();
(*(P853)rt_nil_check(F->c_2105)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P844)rt_nil_check(F->base_2106))->all)), rt_str(").len", 5)); b_; }));
}
}
if (((((rt_r_ichk((*(P857)rt_nil_check(F->bt_2104)).kind) == (((rt_int)15LL))) && ((*(P857)rt_nil_check(F->bt_2104)).tparams != NULL)) && (F->c_2105 != NULL)) && ((*(P853)rt_nil_check(F->c_2105)).args != NULL))) {
F->p_2113 = NULL;
F->p_2113 = (*(P857)rt_nil_check(F->bt_2104)).tparams;
F->a_2114 = NULL;
F->a_2114 = (*(P853)rt_nil_check(F->c_2105)).args;
while (((F->p_2113 != NULL) && (F->a_2114 != NULL))) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->p_2113)).name))->all), F->name_2108)) {
F->pt_2115 = f_tparam_type_322(F->bt_2104, &F->name_2108);
F->v_2116 = rt_str_copy(f_gexpr_680(F->a_2114, F->pt_2115, &F->t_712v));
F->result_ = F->v_2116;
goto ret_;
}
F->p_2113 = (*(P851)rt_nil_check(F->p_2113)).next;
F->a_2114 = (*(P851)rt_nil_check(F->a_2114)).next;
}
}
if (((rt_r_ichk((*(P857)rt_nil_check(F->bt_2104)).kind) == (((rt_int)15LL))) && ((*(P857)rt_nil_check(F->bt_2104)).tparams == NULL))) {
F->c_2105 = f_base_cons_218(F->bt_2104, F->c_2105);
F->bt_2104 = f_base_of_215(F->bt_2104);
}
F->t_712v = g_ty_int_931;
if ((rt_str_eq(F->name_2108, rt_str("LEN", 3)) && (rt_r_ichk((*(P857)rt_nil_check(F->bt_2104)).kind) == (((rt_int)5LL))))) {
if (((F->c_2105 != NULL) && ((*(P853)rt_nil_check(F->c_2105)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P844)rt_nil_check((*(P853)rt_nil_check(F->c_2105)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_711)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2108, rt_str("LEN", 3)) && (rt_r_ichk((*(P857)rt_nil_check(F->bt_2104)).kind) == (((rt_int)12LL))))) {
if (((F->c_2105 != NULL) && ((*(P853)rt_nil_check(F->c_2105)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P844)rt_nil_check((*(P853)rt_nil_check(F->c_2105)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_711)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2108, rt_str("MIN", 3)) || rt_str_eq(F->name_2108, rt_str("MAX", 3))) && f_scalar_kind_178(F->bt_2104))) {
F->t_712v = F->bt_2104;
if (rt_str_eq(F->name_2108, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_190(F->bt_2104, F->c_2105);
goto ret_;
}
F->result_ = f_sub_hi_193(F->bt_2104, F->c_2105);
goto ret_;
} else if ((rt_str_eq(F->name_2108, rt_str("PREC", 4)) && (rt_r_ichk((*(P857)rt_nil_check(F->bt_2104)).kind) == (((rt_int)3LL))))) {
if (((F->c_2105 != NULL) && ((*(P853)rt_nil_check(F->c_2105)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P844)rt_nil_check((*(P853)rt_nil_check(F->c_2105)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2108, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2108, rt_str("USE", 3))) && (rt_r_ichk((*(P857)rt_nil_check(F->bt_2104)).kind) == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_726(F->e_711, F->bt_2104, F->c_2105, F->base_2106, &F->t_712v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_711)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2108, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_712) = F->t_712v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_718(P851 sa_714, P851 sb_715, rstr *op_716, rt_int line_717) {
  struct f_subtype_compare_718fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_714 = sa_714;
F->sb_715 = sb_715;
F->op_716 = op_716;
F->line_717 = line_717;
F->ca_2117 = NULL;
F->cb_2118 = NULL;
F->ta_2119 = NULL;
F->ta_2119 = f_resolve_subtype_257(F->sa_714, &F->ca_2117);
F->tb_2120 = NULL;
F->tb_2120 = f_resolve_subtype_257(F->sb_715, &F->cb_2118);
F->r_2121 = NULL;
F->r_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2122 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2122, rt_str("1", 1));
F->no_2123 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2123, rt_str("0", 1));
if (rt_str_eq((*F->op_716), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2122, rt_str("0", 1));
rt_str_assign(&F->no_2123, rt_str("1", 1));
}
if ((!f_same_213(F->ta_2119, F->tb_2120))) {
F->result_ = F->no_2123;
goto ret_;
} else if ((((rt_r_ichk((*(P851)rt_nil_check(F->sa_714)).kind) == (((rt_int)80LL))) && rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->sa_714)).name))->all), rt_str("TYPEOF", 6))) || ((rt_r_ichk((*(P851)rt_nil_check(F->sb_715)).kind) == (((rt_int)80LL))) && rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->sb_715)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2122;
goto ret_;
}
if (f_scalar_kind_178(F->ta_2119)) {
F->r_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_190(F->ta_2119, F->ca_2117)), rt_str(") == (", 6)), f_sub_lo_190(F->tb_2120, F->cb_2118)), rt_str(") && (", 6)), f_sub_hi_193(F->ta_2119, F->ca_2117)), rt_str(") == (", 6)), f_sub_hi_193(F->tb_2120, F->cb_2118)), rt_str(")", 1)); b_; }));
if ((rt_r_ichk((*(P857)rt_nil_check(F->ta_2119)).kind) == (((rt_int)3LL)))) {
F->r_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_2121))->all), rt_str(" && ", 4)), f_float_prec_720(F->ca_2117)), rt_str(" == ", 4)), f_float_prec_720(F->cb_2118)); b_; }));
}
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->ta_2119)).kind) == (((rt_int)5LL)))) {
if (((((F->ca_2117 != NULL) && (F->cb_2118 != NULL)) && ((*(P853)rt_nil_check(F->ca_2117)).slen != NULL)) && ((*(P853)rt_nil_check(F->cb_2118)).slen != NULL))) {
F->r_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P844)rt_nil_check((*(P853)rt_nil_check(F->ca_2117)).slen))->all)), rt_str(") == (", 6)), (((P844)rt_nil_check((*(P853)rt_nil_check(F->cb_2118)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2117 == NULL) || ((*(P853)rt_nil_check(F->ca_2117)).slen == NULL)) && ((F->cb_2118 == NULL) || ((*(P853)rt_nil_check(F->cb_2118)).slen == NULL))))) {
F->r_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->ta_2119)).kind) == (((rt_int)6LL)))) {
{ rt_int lo2125 = ((rt_int)1LL), hi2126 = rt_r_ichk((*(P857)rt_nil_check(F->ta_2119)).ndim);
for (rt_int it2127 = lo2125; it2127 <= hi2126; it2127++) {
F->k_2124 = it2127;
if (((((F->ca_2117 != NULL) && (F->cb_2118 != NULL)) && (f_cons_lo_244(F->ca_2117, F->k_2124) != NULL)) && (f_cons_lo_244(F->cb_2118, F->k_2124) != NULL))) {
F->r_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_2121))->all), rt_str(" && (", 5)), (((P844)rt_nil_check(f_cons_lo_244(F->ca_2117, F->k_2124)))->all)), rt_str(") == (", 6)), (((P844)rt_nil_check(f_cons_lo_244(F->cb_2118, F->k_2124)))->all)), rt_str(") && (", 6)), (((P844)rt_nil_check(f_cons_hi_247(F->ca_2117, F->k_2124)))->all)), rt_str(") == (", 6)), (((P844)rt_nil_check(f_cons_hi_247(F->cb_2118, F->k_2124)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if (((((rt_r_ichk((*(P857)rt_nil_check(F->ta_2119)).kind) == (((rt_int)15LL))) && ((*(P857)rt_nil_check(F->ta_2119)).tparams != NULL)) && (F->ca_2117 != NULL)) && (F->cb_2118 != NULL))) {
F->a_2128 = NULL;
F->a_2128 = (*(P853)rt_nil_check(F->ca_2117)).args;
F->b_2129 = NULL;
F->b_2129 = (*(P853)rt_nil_check(F->cb_2118)).args;
F->at_2130 = NULL;
F->bt2_2131 = NULL;
while (((F->a_2128 != NULL) && (F->b_2129 != NULL))) {
F->x_2132 = rt_str_copy(f_gexpr_680(F->a_2128, NULL, &F->at_2130));
F->y_2133 = rt_str_copy(f_gexpr_680(F->b_2129, F->at_2130, &F->bt2_2131));
F->r_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_2121))->all), rt_str(" && ", 4)), f_eq_code_369(F->at_2130, &F->x_2132, &F->y_2133)); b_; }));
F->a_2128 = (*(P851)rt_nil_check(F->a_2128)).next;
F->b_2129 = (*(P851)rt_nil_check(F->b_2129)).next;
}
} else if ((((rt_r_ichk((*(P857)rt_nil_check(F->ta_2119)).kind) == (((rt_int)17LL))) && (F->ca_2117 != NULL)) && (F->cb_2118 != NULL))) {
if ((((*(P853)rt_nil_check(F->ca_2117)).lo != NULL) && ((*(P853)rt_nil_check(F->cb_2118)).lo != NULL))) {
F->r_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P844)rt_nil_check((*(P853)rt_nil_check(F->ca_2117)).lo))->all)), rt_str(") == (", 6)), (((P844)rt_nil_check((*(P853)rt_nil_check(F->cb_2118)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P853)rt_nil_check(F->ca_2117)).lo != NULL) || ((*(P853)rt_nil_check(F->cb_2118)).lo != NULL))) {
F->r_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_716), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P844)rt_nil_check(F->r_2121))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P844)rt_nil_check(F->r_2121))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_720(P853 c_719) {
  struct f_float_prec_720fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_719 = c_719;
if (((F->c_719 != NULL) && ((*(P853)rt_nil_check(F->c_719)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P844)rt_nil_check((*(P853)rt_nil_check(F->c_719)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_726(P851 e_721, P857 bt_722, P853 c_723, P844 base_724, P857 *t_725) {
  struct f_file_attribute_726fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_721 = e_721;
F->bt_722 = bt_722;
F->c_723 = c_723;
F->base_724 = base_724;
F->t_725 = t_725;
F->t_725v = *F->t_725;
F->t_725v = g_file_mode_type_942;
if ((F->base_724 != NULL)) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_721)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P844)rt_nil_check(F->base_724))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P844)rt_nil_check(F->base_724))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_723 != NULL) && ((*(P853)rt_nil_check(F->c_723)).args != NULL))) {
if (rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_721)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_680((*(P853)rt_nil_check(F->c_723)).args, F->t_725v, &F->t_725v);
goto ret_;
} else if (((*(P851)rt_nil_check((*(P853)rt_nil_check(F->c_723)).args)).next != NULL)) {
F->result_ = f_gexpr_680((*(P851)rt_nil_check((*(P853)rt_nil_check(F->c_723)).args)).next, F->t_725v, &F->t_725v);
goto ret_;
}
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_721)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P844)rt_nil_check((*(P851)rt_nil_check(F->e_721)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_725) = F->t_725v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_730(P851 e_727, P857 want_728, P857 *t_729) {
  struct f_gbinop_730fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_727 = e_727;
F->want_728 = want_728;
F->t_729 = t_729;
F->t_729v = *F->t_729;
F->op_2134 = NULL;
F->op_2134 = (*(P851)rt_nil_check(F->e_727)).name;
F->ta_2135 = NULL;
F->tb_2136 = NULL;
F->hint_2137 = NULL;
F->uy_2138 = NULL;
F->t_729v = g_ty_bool_932;
if ((f_lookup_155(&(((P844)rt_nil_check(F->op_2134))->all)) != NULL)) {
F->l_2139 = NULL;
F->r_2140 = NULL;
F->l_2139 = f_copy_node_701((*(P851)rt_nil_check(F->e_727)).a);
F->r_2140 = f_copy_node_701((*(P851)rt_nil_check(F->e_727)).b);
(*(P851)rt_nil_check(F->l_2139)).next = F->r_2140;
F->uy_2138 = f_user_op_806(&(((P844)rt_nil_check(F->op_2134))->all), F->l_2139);
if ((F->uy_2138 != NULL)) {
F->call_2141 = NULL;
F->call_2141 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
F->fname_2142 = NULL;
F->fname_2142 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
(*(P851)rt_nil_check(F->fname_2142)).name = F->op_2134;
(*(P851)rt_nil_check(F->call_2141)).a = F->fname_2142;
(*(P851)rt_nil_check(F->call_2141)).b = F->l_2139;
F->result_ = f_gcall_810(F->call_2141, 0, &F->t_729v);
goto ret_;
}
}
if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("IN", 2))) {
F->s_2143 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_727)).b, NULL, &F->tb_2136));
if ((rt_r_ichk((*(P857)rt_nil_check(F->tb_2136)).kind) != (((rt_int)16LL)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2144 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_727)).a, (*(P857)rt_nil_check(F->tb_2136)).elem, &F->ta_2135));
f_check_type_224(F->ta_2135, (*(P857)rt_nil_check(F->tb_2136)).elem, rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
F->t_729v = g_ty_bool_932;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_in(", 9), F->a_2144), rt_str(", ", 2)), F->s_2143), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("AND", 3)) || rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("OR", 2))) || rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("XOR", 3))) && (f_set_operands_699(F->e_727, F->want_728) != NULL))) {
F->a_2145 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_727)).a, f_set_operands_699(F->e_727, F->want_728), &F->ta_2135));
F->b_2146 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_727)).b, F->ta_2135, &F->tb_2136));
f_check_type_224(F->tb_2136, F->ta_2135, rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
F->t_729v = F->ta_2135;
if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_inter(", 12), F->a_2145), rt_str(", ", 2)), F->b_2146), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_union(", 12), F->a_2145), rt_str(", ", 2)), F->b_2146), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_xor(", 10), F->a_2145), rt_str(", ", 2)), F->b_2146), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("AND", 3)) || rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("OR", 2))) || rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("XOR", 3)))) {
F->a_2147 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_727)).a, g_ty_bool_932, &F->ta_2135));
F->b_2148 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_727)).b, g_ty_bool_932, &F->tb_2136));
f_check_type_224(F->ta_2135, g_ty_bool_932, rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
f_check_type_224(F->tb_2136, g_ty_bool_932, rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2147), rt_str(" && ", 4)), F->b_2148), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2147), rt_str(" || ", 4)), F->b_2148), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2147), rt_str(" != ", 4)), F->b_2148), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("&", 1)) && (F->want_728 != NULL)) && ((*(P857)rt_nil_check(f_base_of_215(F->want_728))).kind == (((rt_int)6LL))))) {
F->at_2149 = NULL;
F->at_2149 = f_base_of_215(F->want_728);
F->a_2150 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_727)).a, F->at_2149, &F->ta_2135));
F->b_2151 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_727)).b, F->at_2149, &F->tb_2136));
f_check_type_224(F->ta_2135, F->at_2149, rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
f_check_type_224(F->tb_2136, F->at_2149, rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
if (((rt_r_ichk((*(P857)rt_nil_check(F->at_2149)).ndim) != ((rt_int)1LL)) || ((*(P857)rt_nil_check(f_base_of_215((*(P857)rt_nil_check(F->at_2149)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_661(F->at_2149);
F->t_729v = F->at_2149;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_226(F->at_2149)), rt_str("(", 1)), F->a_2150), rt_str(", ", 2)), F->b_2151), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("&", 1))) {
F->wa_2152 = NULL;
F->wb_2153 = NULL;
F->ws_2154 = NULL;
F->ce_2155 = NULL;
F->ce_2155 = g_ty_ascii_934;
if (((F->want_728 != NULL) && (rt_r_ichk((*(P857)rt_nil_check(F->want_728)).kind) == (((rt_int)5LL))))) {
F->ws_2154 = F->want_728;
F->ce_2155 = f_str_elem_210(F->want_728);
}
if ((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_727)).a)).kind) == (((rt_int)4LL)))) {
F->wa_2152 = F->ce_2155;
} else {
F->wa_2152 = F->ws_2154;
}
if ((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_727)).b)).kind) == (((rt_int)4LL)))) {
F->wb_2153 = F->ce_2155;
} else {
F->wb_2153 = F->ws_2154;
}
{
F->a_2156 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_727)).a, F->wa_2152, &F->ta_2135));
F->b_2157 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_727)).b, F->wb_2153, &F->tb_2136));
F->t_729v = g_ty_string_935;
if ((rt_r_ichk((*(P857)rt_nil_check(F->ta_2135)).kind) == (((rt_int)5LL)))) {
F->t_729v = F->ta_2135;
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->tb_2136)).kind) == (((rt_int)5LL)))) {
F->t_729v = F->tb_2136;
} else if ((!f_same_213(F->ta_2135, g_ty_ascii_934))) {
F->t_729v = f_new_typ_175((((rt_int)5LL)));
(*(P857)rt_nil_check(F->t_729v)).elem = F->ta_2135;
}
if (((rt_r_ichk((*(P857)rt_nil_check(F->ta_2135)).kind) == (((rt_int)6LL))) && (rt_r_ichk((*(P857)rt_nil_check(F->tb_2136)).kind) == (((rt_int)6LL))))) {
f_need_slice_661(F->ta_2135);
f_check_type_224(F->tb_2136, F->ta_2135, rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
F->t_729v = F->ta_2135;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_226(F->ta_2135)), rt_str("(", 1)), F->a_2156), rt_str(", ", 2)), F->b_2157), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->ta_2135)).kind) == (((rt_int)5LL)))) {
f_check_type_224(f_str_cat_part_694(F->tb_2136), f_str_elem_210(F->ta_2135), rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->tb_2136)).kind) == (((rt_int)5LL)))) {
f_check_type_224(F->ta_2135, f_str_elem_210(F->tb_2136), rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
} else {
f_check_type_224(F->tb_2136, F->ta_2135, rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
}
if (((rt_r_ichk((*(P857)rt_nil_check(F->ta_2135)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P857)rt_nil_check(F->tb_2136)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2156), rt_str(", ", 2)), F->b_2157), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->ta_2135)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P857)rt_nil_check(F->tb_2136)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2156), rt_str(", ", 2)), F->b_2157), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->ta_2135)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P857)rt_nil_check(F->tb_2136)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2156), rt_str(", ", 2)), F->b_2157), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->ta_2135)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P857)rt_nil_check(F->tb_2136)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2156), rt_str(", ", 2)), F->b_2157), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("=", 1)) || rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("/=", 2))) && (f_as_subtype_286((*(P851)rt_nil_check(F->e_727)).a) != NULL)) && (f_as_subtype_286((*(P851)rt_nil_check(F->e_727)).b) != NULL))) {
F->t_729v = g_ty_bool_932;
F->result_ = f_subtype_compare_718(f_as_subtype_286((*(P851)rt_nil_check(F->e_727)).a), f_as_subtype_286((*(P851)rt_nil_check(F->e_727)).b), &(((P844)rt_nil_check(F->op_2134))->all), rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
goto ret_;
}
if ((f_is_rel_107(&(((P844)rt_nil_check(F->op_2134))->all)) && (!rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("IN", 2))))) {
if ((((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_727)).a)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_727)).a)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_727)).a)).kind) == (((rt_int)1LL))))) {
F->dummy_2158 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_727)).b, NULL, &F->hint_2137));
} else if ((rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->e_727)).a)).kind) == (((rt_int)14LL)))) {
F->hint_2137 = f_peek_type_696((*(P851)rt_nil_check(F->e_727)).b);
}
{
F->a_2159 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_727)).a, F->hint_2137, &F->ta_2135));
F->b_2160 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_727)).b, F->ta_2135, &F->tb_2136));
F->ct_2161 = NULL;
F->ct_2161 = f_base_of_215(F->ta_2135);
F->t_729v = g_ty_bool_932;
if (((rt_r_ichk((*(P857)rt_nil_check(F->ta_2135)).kind) != (((rt_int)11LL))) && (rt_r_ichk((*(P857)rt_nil_check(F->tb_2136)).kind) != (((rt_int)11LL))))) {
f_check_type_224(F->tb_2136, F->ta_2135, rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->ta_2135)).kind) == (((rt_int)11LL)))) {
F->ct_2161 = f_base_of_215(F->tb_2136);
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->ct_2161)).kind) == (((rt_int)5LL)))) {
if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2159), rt_str(", ", 2)), F->b_2160), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2159), rt_str(", ", 2)), F->b_2160), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2159), rt_str(", ", 2)), F->b_2160), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2159), rt_str(", ", 2)), F->b_2160), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2160), rt_str(", ", 2)), F->a_2159), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2160), rt_str(", ", 2)), F->a_2159), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->ct_2161)).kind) == (((rt_int)16LL)))) {
if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), F->a_2159), rt_str(", ", 2)), F->b_2160), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!y_set_eq(", 11), F->a_2159), rt_str(", ", 2)), F->b_2160), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->a_2159), rt_str(", ", 2)), F->b_2160), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->b_2160), rt_str(", ", 2)), F->a_2159), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->a_2159), rt_str(", ", 2)), F->b_2160), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->b_2160), rt_str(", ", 2)), F->a_2159), rt_str(")", 1));
goto ret_;
}
if ((((((((rt_r_ichk((*(P857)rt_nil_check(F->ct_2161)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->ct_2161)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P857)rt_nil_check(F->ct_2161)).kind) == (((rt_int)11LL)))) || (rt_r_ichk((*(P857)rt_nil_check(F->ct_2161)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P857)rt_nil_check(F->ct_2161)).kind) == (((rt_int)12LL)))) && (!rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("=", 1)))) && (!rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("/=", 2))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_357(F->ct_2161)) {
if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_369(F->ct_2161, &F->a_2159, &F->b_2160);
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_369(F->ct_2161, &F->a_2159, &F->b_2160)), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2159), rt_str(" == ", 4)), F->b_2160), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2159), rt_str(" != ", 4)), F->b_2160), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2159), rt_str(" ", 1)), (((P844)rt_nil_check(F->op_2134))->all)), rt_str(" ", 1)), F->b_2160), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2162 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_727)).a, F->want_728, &F->ta_2135));
F->b_2163 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->e_727)).b, F->ta_2135, &F->tb_2136));
if (((rt_r_ichk((*(P857)rt_nil_check(F->ta_2135)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P857)rt_nil_check(F->tb_2136)).kind) == (((rt_int)3LL))))) {
F->t_729v = g_ty_float_933;
if (((rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("+", 1)) || rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("-", 1))) || rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2162), rt_str(" ", 1)), (((P844)rt_nil_check(F->op_2134))->all)), rt_str(" ", 1)), F->b_2163), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_2162), rt_str(", ", 2)), F->b_2163), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_2162), rt_str(", ", 2)), F->b_2163), rt_str(")", 1));
goto ret_;
}
}
f_check_type_224(F->ta_2135, g_ty_int_931, rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
f_check_type_224(F->tb_2136, g_ty_int_931, rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line));
F->t_729v = g_ty_int_931;
if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2162), rt_str(", ", 2)), F->b_2163), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2162), rt_str(", ", 2)), F->b_2163), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2162), rt_str(", ", 2)), F->b_2163), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2162), rt_str(", ", 2)), F->b_2163), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2162), rt_str(", ", 2)), F->b_2163), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P844)rt_nil_check(F->op_2134))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2162), rt_str(", ", 2)), F->b_2163), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_727)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P844)rt_nil_check(F->op_2134))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_729) = F->t_729v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_735(P851 e_731, P857 want_732, P853 ctx_733, P857 *t_734) {
  struct f_constructor_735fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_731 = e_731;
F->want_732 = want_732;
F->ctx_733 = ctx_733;
F->t_734 = t_734;
F->t_734v = *F->t_734;
F->it_2164 = NULL;
F->it_2164 = (*(P851)rt_nil_check(F->e_731)).a;
F->f_2165 = NULL;
F->vt_2166 = NULL;
if (((F->want_732 != NULL) && (rt_r_ichk((*(P857)rt_nil_check(F->want_732)).kind) == (((rt_int)16LL))))) {
F->s_2167 = NULL;
F->s_2167 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_295(F->want_732); b_; }));
F->t_734v = F->want_732;
while ((F->it_2164 != NULL)) {
F->v_2168 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->it_2164)).b, (*(P857)rt_nil_check(F->want_732)).elem, &F->vt_2166));
f_check_type_224(F->vt_2166, (*(P857)rt_nil_check(F->want_732)).elem, rt_r_ichk((*(P851)rt_nil_check(F->e_731)).line));
F->s_2167 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_add(", 10), (((P844)rt_nil_check(F->s_2167))->all)), rt_str(", ", 2)), F->v_2168), rt_str(")", 1)); b_; }));
F->it_2164 = (*(P851)rt_nil_check(F->it_2164)).next;
}
F->result_ = (((P844)rt_nil_check(F->s_2167))->all);
goto ret_;
}
if (((F->want_732 != NULL) && (rt_r_ichk((*(P857)rt_nil_check(F->want_732)).kind) == (((rt_int)15LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_731)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P844)rt_nil_check((*(P857)rt_nil_check(F->want_732)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_732 != NULL) && (rt_r_ichk((*(P857)rt_nil_check(F->want_732)).kind) == (((rt_int)6LL))))) {
F->result_ = f_array_cons_749(F->e_731, F->want_732, F->ctx_733, &F->t_734v);
goto ret_;
}
if (((F->want_732 != NULL) && (rt_r_ichk((*(P857)rt_nil_check(F->want_732)).kind) == (((rt_int)17LL))))) {
if ((((((F->it_2164 == NULL) || ((*(P851)rt_nil_check(F->it_2164)).next != NULL)) || ((*(P851)rt_nil_check(F->it_2164)).a == NULL)) || ((*(P851)rt_nil_check((*(P851)rt_nil_check(F->it_2164)).a)).next != NULL)) || (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->it_2164)).a)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_731)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2165 = (*(P857)rt_nil_check(F->want_732)).fields;
{
F->i_2169 = RT_R_IUNDEF;
F->i_2169 = ((rt_int)0LL);
F->tmp_2170 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2165 != NULL) && (!rt_str_eq((((P844)rt_nil_check((*(P859)rt_nil_check(F->f_2165)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->it_2164)).a)).a)).name))->all))))) {
F->i_2169 = rt_add(rt_r_ichk(F->i_2169), ((rt_int)1LL));
F->f_2165 = (*(P859)rt_nil_check(F->f_2165)).next;
}
if ((F->f_2165 == NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_731)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->it_2164)).a)).a)).name))->all)); b_; }));
}
F->t_734v = F->want_732;
g_cons_ctx_922 = (*(P859)rt_nil_check(F->f_2165)).c;
{
F->v_2171 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->it_2164)).b, (*(P859)rt_nil_check(F->f_2165)).t, &F->vt_2166));
f_check_type_224(F->vt_2166, (*(P859)rt_nil_check(F->f_2165)).t, rt_r_ichk((*(P851)rt_nil_check(F->e_731)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->want_732)), rt_str(" ", 1)), F->tmp_2170), rt_str("; ", 2)), F->tmp_2170), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk(F->i_2169))), rt_str("; ", 2)), F->tmp_2170), rt_str(".u.", 3)), f_field_c_17(&(((P844)rt_nil_check((*(P859)rt_nil_check(F->f_2165)).name))->all))), rt_str(" = ", 3)), f_comp_value_739((*(P859)rt_nil_check(F->f_2165)).t, (*(P859)rt_nil_check(F->f_2165)).c, &F->v_2171)), rt_str("; ", 2)), F->tmp_2170), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_732 == NULL) || (rt_r_ichk((*(P857)rt_nil_check(F->want_732)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_731)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_734v = F->want_732;
F->f_2165 = (*(P857)rt_nil_check(F->want_732)).fields;
{
F->tmp_2172 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2173 = NULL;
F->parts_2173 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->want_732)), rt_str(" ", 1)), F->tmp_2172), rt_str(";", 1)); b_; }));
while ((F->it_2164 != NULL)) {
F->k_2174 = NULL;
F->k_2174 = (*(P851)rt_nil_check(F->it_2164)).a;
F->shared_2175 = NULL;
if ((F->k_2174 == NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_731)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2174 != NULL)) {
if (((((F->f_2165 == NULL) || (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->k_2174)).a)).kind) != (((rt_int)7LL)))) || ((*(P851)rt_nil_check(F->k_2174)).b != NULL)) || (!rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->k_2174)).a)).name))->all), (((P844)rt_nil_check((*(P859)rt_nil_check(F->f_2165)).name))->all))))) {
if ((F->f_2165 == NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_731)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_731)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P844)rt_nil_check((*(P859)rt_nil_check(F->f_2165)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P851)rt_nil_check((*(P851)rt_nil_check(F->it_2164)).a)).next == NULL)) {
g_cons_ctx_922 = (*(P859)rt_nil_check(F->f_2165)).c;
{
F->v_2176 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->it_2164)).b, (*(P859)rt_nil_check(F->f_2165)).t, &F->vt_2166));
f_check_type_224(F->vt_2166, (*(P859)rt_nil_check(F->f_2165)).t, rt_r_ichk((*(P851)rt_nil_check(F->e_731)).line));
F->parts_2173 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->parts_2173))->all), rt_str(" ", 1)), F->tmp_2172), rt_str(".", 1)), f_field_c_17(&(((P844)rt_nil_check((*(P859)rt_nil_check(F->f_2165)).name))->all))), rt_str(" = ", 3)), f_comp_value_739((*(P859)rt_nil_check(F->f_2165)).t, (*(P859)rt_nil_check(F->f_2165)).c, &F->v_2176)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2175 == NULL)) {
F->v_2177 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->it_2164)).b, (*(P859)rt_nil_check(F->f_2165)).t, &F->vt_2166));
F->shared_2175 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_224(F->vt_2166, (*(P859)rt_nil_check(F->f_2165)).t, rt_r_ichk((*(P851)rt_nil_check(F->e_731)).line));
F->parts_2173 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->parts_2173))->all), rt_str(" ", 1)), f_ctype_226((*(P859)rt_nil_check(F->f_2165)).t)), rt_str(" ", 1)), (((P844)rt_nil_check(F->shared_2175))->all)), rt_str(" = ", 3)), F->v_2177), rt_str(";", 1)); b_; }));
}
f_check_type_224(F->vt_2166, (*(P859)rt_nil_check(F->f_2165)).t, rt_r_ichk((*(P851)rt_nil_check(F->e_731)).line));
F->parts_2173 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->parts_2173))->all), rt_str(" ", 1)), F->tmp_2172), rt_str(".", 1)), f_field_c_17(&(((P844)rt_nil_check((*(P859)rt_nil_check(F->f_2165)).name))->all))), rt_str(" = ", 3)), f_comp_value_739((*(P859)rt_nil_check(F->f_2165)).t, (*(P859)rt_nil_check(F->f_2165)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_365((*(P859)rt_nil_check(F->f_2165)).t, &(((P844)rt_nil_check(F->shared_2175))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2165 = (*(P859)rt_nil_check(F->f_2165)).next;
F->k_2174 = (*(P851)rt_nil_check(F->k_2174)).next;
}
F->it_2164 = (*(P851)rt_nil_check(F->it_2164)).next;
}
if ((F->f_2165 != NULL)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_731)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->parts_2173))->all), rt_str(" ", 1)), F->tmp_2172), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_734) = F->t_734v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_739(P857 t_736, P853 c_737, rstr *v_738) {
  struct f_comp_value_739fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_736 = t_736;
F->c_737 = c_737;
F->v_738 = v_738;
if (((F->c_737 == NULL) || (((*(P853)rt_nil_check(F->c_737)).lo != NULL) && f_has_at_741(&(((P844)rt_nil_check((*(P853)rt_nil_check(F->c_737)).lo))->all))))) {
F->result_ = f_copy_code_365(F->t_736, &(*F->v_738));
goto ret_;
} else if ((((rt_r_ichk((*(P857)rt_nil_check(F->t_736)).kind) == (((rt_int)5LL))) && ((*(P853)rt_nil_check(F->c_737)).slen != NULL)) && (!f_has_at_741(&(((P844)rt_nil_check((*(P853)rt_nil_check(F->c_737)).slen))->all))))) {
F->result_ = f_copy_code_365(F->t_736, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_738)), rt_str(", ", 2)), (((P844)rt_nil_check((*(P853)rt_nil_check(F->c_737)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_205(F->t_736, F->c_737, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_365(F->t_736, &(*F->v_738)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_741(rstr *s_740) {
  struct f_has_at_741fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_740 = s_740;
{ rt_int lo2179 = ((rt_int)1LL), hi2180 = ((rt_int)(((*F->s_740)).len));
for (rt_int it2181 = lo2179; it2181 <= hi2180; it2181++) {
F->i_2178 = it2181;
if ((rt_r_echk(rt_str_get((*F->s_740), F->i_2178)) == 64)) {
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

static rstr f_set_elem_744(P857 st_742, rstr *v_743) {
  struct f_set_elem_744fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_742 = st_742;
F->v_743 = v_743;
F->result_ = (*F->v_743);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_749(P851 e_745, P857 at_746, P853 ctx_747, P857 *t_748) {
  struct f_array_cons_749fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_745 = e_745;
F->at_746 = at_746;
F->ctx_747 = ctx_747;
F->t_748 = t_748;
F->t_748v = *F->t_748;
F->tmp_2182 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2183 = NULL;
F->parts_2183 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->at_746)), rt_str(" ", 1)), F->tmp_2182), rt_str(";", 1)); b_; }));
F->it_2184 = NULL;
F->it_2184 = (*(P851)rt_nil_check(F->e_745)).a;
F->positional_2185 = RT_R_EUNDEF;
F->positional_2185 = 1;
F->t_748v = F->at_746;
while ((F->it_2184 != NULL)) {
if (((*(P851)rt_nil_check(F->it_2184)).a != NULL)) {
F->positional_2185 = 0;
}
F->it_2184 = (*(P851)rt_nil_check(F->it_2184)).next;
}
{ rt_int lo2187 = ((rt_int)1LL), hi2188 = rt_r_ichk((*(P857)rt_nil_check(F->at_746)).ndim);
for (rt_int it2189 = lo2187; it2189 <= hi2188; it2189++) {
F->k_2186 = it2189;
F->lo_2190 = NULL;
F->hi_2191 = NULL;
if ((((F->ctx_747 != NULL) && (f_cons_lo_244(F->ctx_747, F->k_2186) != NULL)) && (!f_has_at_741(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P844)rt_nil_check(f_cons_lo_244(F->ctx_747, F->k_2186)))->all); b_; }))))) {
F->lo_2190 = f_cons_lo_244(F->ctx_747, F->k_2186);
F->hi_2191 = f_cons_hi_247(F->ctx_747, F->k_2186);
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->at_746)).ndim) == ((rt_int)1LL)) && rt_r_echk(F->positional_2185))) {
if (((*(P857)rt_nil_check(f_base_of_215((*(P857)rt_nil_check(F->at_746)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2190 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2190 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2191 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P844)rt_nil_check(F->lo_2190))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_67((*(P851)rt_nil_check(F->e_745)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_745)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2183 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->parts_2183))->all), rt_str(" ", 1)), F->tmp_2182), rt_str(".", 1)), f_dim_lo_234(F->k_2186)), rt_str(" = ", 3)), (((P844)rt_nil_check(F->lo_2190))->all)), rt_str("; ", 2)), F->tmp_2182), rt_str(".", 1)), f_dim_hi_236(F->k_2186)), rt_str(" = ", 3)), (((P844)rt_nil_check(F->hi_2191))->all)), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P857)rt_nil_check(F->at_746)).ndim) == ((rt_int)1LL))) {
F->parts_2183 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->parts_2183))->all), rt_str(" ", 1)), F->tmp_2182), rt_str(".lo2 = ", 7)), F->tmp_2182), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2183 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->parts_2183))->all), rt_str(" rt_int n_", 10)), F->tmp_2182), rt_str(" = ", 3)), f_acnt_241(F->at_746, &F->tmp_2182)), rt_str("; ", 2)), F->tmp_2182), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_226((*(P857)rt_nil_check(F->at_746)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2182), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2182), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2182), rt_str(" + 1);", 6)); b_; }));
F->parts_2183 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->parts_2183))->all), f_fill_items_755((*(P851)rt_nil_check(F->e_745)).a, F->at_746, &F->tmp_2182, NULL, ((rt_int)1LL))); b_; }));
F->parts_2183 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->parts_2183))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2182), rt_str("; i_++) if (seen_", 17)), F->tmp_2182), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2182), rt_str("; })", 4)); b_; }));
F->result_ = (((P844)rt_nil_check(F->parts_2183))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_748) = F->t_748v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_755(P851 items_750, P857 at_751, rstr *tmp_752, P855 prefix_753, rt_int dim_754) {
  struct f_fill_items_755fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_750 = items_750;
F->at_751 = at_751;
F->tmp_752 = tmp_752;
F->prefix_753 = prefix_753;
F->dim_754 = dim_754;
F->it_2192 = NULL;
F->it_2192 = F->items_750;
F->pos_2193 = RT_R_IUNDEF;
F->pos_2193 = ((rt_int)0LL);
F->r_2194 = NULL;
F->r_2194 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2195 = NULL;
while ((F->it_2192 != NULL)) {
if (((*(P851)rt_nil_check(F->it_2192)).a == NULL)) {
if (((F->dim_754 < rt_r_ichk((*(P857)rt_nil_check(F->at_751)).ndim)) && (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->it_2192)).b)).kind) == (((rt_int)14LL))))) {
F->r_2194 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_2194))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_754)), rt_str(" = ", 3)), (*F->tmp_752)), rt_str(".", 1)), f_dim_lo_234(F->dim_754)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2193))), rt_str("; ", 2)), f_fill_items_755((*(P851)rt_nil_check((*(P851)rt_nil_check(F->it_2192)).b)).a, F->at_751, &(*F->tmp_752), f_add_line_760(F->prefix_753, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_754)); b_; })), rt_add(F->dim_754, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2196 = rt_str_copy(f_item_value_765((*(P851)rt_nil_check(F->it_2192)).b, F->at_751, f_e_line_757(F->it_2192), &F->vt_2195));
if (((F->dim_754 == ((rt_int)1LL)) && (rt_r_ichk((*(P857)rt_nil_check(F->at_751)).ndim) > ((rt_int)1LL)))) {
F->r_2194 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_2194))->all), rt_str(" { ", 3)), F->v_2196), rt_str(" if (", 5)), f_itos_7(rt_r_ichk(F->pos_2193))), rt_str(" >= n_", 6)), (*F->tmp_752)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_752)), rt_str(".p[", 3)), f_itos_7(rt_r_ichk(F->pos_2193))), rt_str("] = ", 4)), f_copy_code_365((*(P857)rt_nil_check(F->at_751)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_752)), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->pos_2193))), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2194 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_2194))->all), rt_str(" { ", 3)), F->v_2196), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_754)), rt_str(" = ", 3)), (*F->tmp_752)), rt_str(".", 1)), f_dim_lo_234(F->dim_754)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2193))), rt_str("; ", 2)), f_store_at_775(F->at_751, &(*F->tmp_752), f_add_line_760(F->prefix_753, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_754)); b_; })), F->dim_754)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2193 = rt_add(rt_r_ichk(F->pos_2193), ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_754, f_list_len_67((*(P851)rt_nil_check(F->it_2192)).a)), ((rt_int)1LL)) == rt_r_ichk((*(P857)rt_nil_check(F->at_751)).ndim))) {
F->k_2197 = NULL;
F->k_2197 = (*(P851)rt_nil_check(F->it_2192)).a;
F->d_2198 = RT_R_IUNDEF;
F->d_2198 = F->dim_754;
F->pre_2199 = NULL;
F->pre_2199 = F->prefix_753;
F->loops_2200 = NULL;
F->loops_2200 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2201 = NULL;
F->ends_2201 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2202 = rt_str_copy(f_item_value_765((*(P851)rt_nil_check(F->it_2192)).b, F->at_751, rt_r_ichk((*(P851)rt_nil_check(F->it_2192)).line), &F->vt_2195));
while ((F->k_2197 != NULL)) {
F->xv_2203 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(rt_r_ichk(F->d_2198))));
F->loops_2200 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->loops_2200))->all), f_key_loop_770(F->k_2197, F->at_751, rt_r_ichk(F->d_2198), &F->xv_2203)); b_; }));
F->ends_2201 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->ends_2201))->all), rt_str(" }", 2)); b_; }));
F->pre_2199 = f_add_line_760(F->pre_2199, &F->xv_2203);
F->d_2198 = rt_add(rt_r_ichk(F->d_2198), ((rt_int)1LL));
F->k_2197 = (*(P851)rt_nil_check(F->k_2197)).next;
}
F->r_2194 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_2194))->all), rt_str(" { ", 3)), F->v_2202), (((P844)rt_nil_check(F->loops_2200))->all)), rt_str(" ", 1)), f_store_at_775(F->at_751, &(*F->tmp_752), F->pre_2199, rt_r_ichk((*(P857)rt_nil_check(F->at_751)).ndim))), (((P844)rt_nil_check(F->ends_2201))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_754 == rt_r_ichk((*(P857)rt_nil_check(F->at_751)).ndim)) || (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->it_2192)).b)).kind) == (((rt_int)14LL))))) {
F->k_2204 = NULL;
F->k_2204 = (*(P851)rt_nil_check(F->it_2192)).a;
while ((F->k_2204 != NULL)) {
F->xv_2205 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_754)));
if ((F->dim_754 < rt_r_ichk((*(P857)rt_nil_check(F->at_751)).ndim))) {
F->r_2194 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_2194))->all), rt_str(" {", 2)), f_key_loop_770(F->k_2204, F->at_751, F->dim_754, &F->xv_2205)), rt_str(" ", 1)), f_fill_items_755((*(P851)rt_nil_check((*(P851)rt_nil_check(F->it_2192)).b)).a, F->at_751, &(*F->tmp_752), f_add_line_760(F->prefix_753, &F->xv_2205), rt_add(F->dim_754, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2206 = rt_str_copy(f_item_value_765((*(P851)rt_nil_check(F->it_2192)).b, F->at_751, rt_r_ichk((*(P851)rt_nil_check(F->it_2192)).line), &F->vt_2195));
F->r_2194 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_2194))->all), rt_str(" { ", 3)), F->v_2206), f_key_loop_770(F->k_2204, F->at_751, F->dim_754, &F->xv_2205)), rt_str(" ", 1)), f_store_at_775(F->at_751, &(*F->tmp_752), f_add_line_760(F->prefix_753, &F->xv_2205), F->dim_754)), rt_str(" } }", 4)); b_; }));
}
F->k_2204 = (*(P851)rt_nil_check(F->k_2204)).next;
}
} else {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->it_2192)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub(rt_r_ichk((*(P857)rt_nil_check(F->at_751)).ndim), F->dim_754), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2192 = (*(P851)rt_nil_check(F->it_2192)).next;
}
F->result_ = (((P844)rt_nil_check(F->r_2194))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_757(P851 e_756) {
  struct f_e_line_757fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_756 = e_756;
F->result_ = rt_r_ichk((*(P851)rt_nil_check(F->e_756)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P855 f_add_line_760(P855 l_758, rstr *s_759) {
  struct f_add_line_760fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_758 = l_758;
F->s_759 = s_759;
F->r_2207 = NULL;
F->tail_2208 = NULL;
F->x_2209 = NULL;
F->p_2210 = NULL;
F->p_2210 = F->l_758;
while ((F->p_2210 != NULL)) {
{ R856 *cell2211 = rt_alloc(sizeof(R856));
(*cell2211).s = NULL;
(*cell2211).next = NULL;
F->x_2209 = cell2211;
}
(*(P855)rt_nil_check(F->x_2209)).s = (*(P855)rt_nil_check(F->p_2210)).s;
if ((F->tail_2208 == NULL)) {
F->r_2207 = F->x_2209;
} else {
(*(P855)rt_nil_check(F->tail_2208)).next = F->x_2209;
}
F->tail_2208 = F->x_2209;
F->p_2210 = (*(P855)rt_nil_check(F->p_2210)).next;
}
{ R856 *cell2212 = rt_alloc(sizeof(R856));
(*cell2212).s = NULL;
(*cell2212).next = NULL;
F->x_2209 = cell2212;
}
(*(P855)rt_nil_check(F->x_2209)).s = f_mk_3(&(*F->s_759));
if ((F->tail_2208 == NULL)) {
F->r_2207 = F->x_2209;
} else {
(*(P855)rt_nil_check(F->tail_2208)).next = F->x_2209;
}
F->result_ = F->r_2207;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_765(P851 e_761, P857 at_762, rt_int line_763, P857 *vt_764) {
  struct f_item_value_765fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_761 = e_761;
F->at_762 = at_762;
F->line_763 = line_763;
F->vt_764 = vt_764;
F->vt_764v = *F->vt_764;
g_cons_ctx_922 = (*(P857)rt_nil_check(F->at_762)).elemcons;
{
F->v_2213 = rt_str_copy(f_gexpr_680(F->e_761, (*(P857)rt_nil_check(F->at_762)).elem, &F->vt_764v));
f_check_type_224(F->vt_764v, (*(P857)rt_nil_check(F->at_762)).elem, F->line_763);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_226((*(P857)rt_nil_check(F->at_762)).elem), rt_str(" v_ = ", 6)), f_comp_value_739((*(P857)rt_nil_check(F->at_762)).elem, (*(P857)rt_nil_check(F->at_762)).elemcons, &F->v_2213)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_764) = F->vt_764v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_770(P851 k_766, P857 at_767, rt_int d_768, rstr *xv_769) {
  struct f_key_loop_770fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_766 = k_766;
F->at_767 = at_767;
F->d_768 = d_768;
F->xv_769 = xv_769;
F->it_2214 = NULL;
F->lo_2215 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->k_766)).a, f_idx_type_250(F->at_767, F->d_768), &F->it_2214));
f_check_type_224(F->it_2214, f_idx_type_250(F->at_767, F->d_768), rt_r_ichk((*(P851)rt_nil_check(F->k_766)).line));
if (((*(P851)rt_nil_check(F->k_766)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_769)), rt_str(" = ", 3)), F->lo_2215), rt_str(";", 1));
goto ret_;
}
{
F->hi_2216 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->k_766)).b, f_idx_type_250(F->at_767, F->d_768), &F->it_2214));
f_check_type_224(F->it_2214, f_idx_type_250(F->at_767, F->d_768), rt_r_ichk((*(P851)rt_nil_check(F->k_766)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_769)), rt_str(" = ", 3)), F->lo_2215), rt_str(", h", 3)), (*F->xv_769)), rt_str(" = ", 3)), F->hi_2216), rt_str("; ", 2)), (*F->xv_769)), rt_str(" <= h", 5)), (*F->xv_769)), rt_str("; ", 2)), (*F->xv_769)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_775(P857 at_771, rstr *tmp_772, P855 xs_773, rt_int n_774) {
  struct f_store_at_775fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_771 = at_771;
F->tmp_772 = tmp_772;
F->xs_773 = xs_773;
F->n_774 = n_774;
F->off_2217 = NULL;
F->x_2218 = NULL;
F->x_2218 = F->xs_773;
F->k_2219 = RT_R_IUNDEF;
F->k_2219 = ((rt_int)0LL);
while ((F->x_2218 != NULL)) {
F->k_2219 = rt_add(rt_r_ichk(F->k_2219), ((rt_int)1LL));
{
F->l_2220 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_772), rt_str(".", 1)), f_dim_lo_234(rt_r_ichk(F->k_2219))));
F->h_2221 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_772), rt_str(".", 1)), f_dim_hi_236(rt_r_ichk(F->k_2219))));
if ((F->off_2217 == NULL)) {
F->off_2217 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P844)rt_nil_check((*(P855)rt_nil_check(F->x_2218)).s))->all)), rt_str(", ", 2)), F->l_2220), rt_str(", ", 2)), F->h_2221), rt_str(") - ", 4)), F->l_2220), rt_str(")", 1)); b_; }));
} else {
F->off_2217 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P844)rt_nil_check(F->off_2217))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2220), rt_str(", ", 2)), F->h_2221), rt_str(") + rt_index(", 13)), (((P844)rt_nil_check((*(P855)rt_nil_check(F->x_2218)).s))->all)), rt_str(", ", 2)), F->l_2220), rt_str(", ", 2)), F->h_2221), rt_str(") - ", 4)), F->l_2220), rt_str(")", 1)); b_; }));
}
}
F->x_2218 = (*(P855)rt_nil_check(F->x_2218)).next;
}
if ((rt_r_ichk(F->k_2219) != rt_r_ichk((*(P857)rt_nil_check(F->at_771)).ndim))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7(rt_r_ichk((*(P857)rt_nil_check(F->at_771)).ndim))), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P844)rt_nil_check(F->off_2217))->all)), rt_str("; ", 2)), (*F->tmp_772)), rt_str(".p[o_] = ", 9)), f_copy_code_365((*(P857)rt_nil_check(F->at_771)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_772)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_778(P861 y_776, P851 args_777) {
  struct f_fits_778fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_776 = y_776;
F->args_777 = args_777;
F->a_2222 = NULL;
F->a_2222 = F->args_777;
F->pm_2223 = NULL;
F->pm_2223 = (*(P861)rt_nil_check(F->y_776)).params;
F->t_2224 = NULL;
F->saved_2225 = NULL;
F->saved_2225 = g_code_901;
F->ok_2226 = RT_R_EUNDEF;
F->ok_2226 = 1;
F->lv_2227 = NULL;
F->lc_2228 = NULL;
F->ro_2229 = RT_R_EUNDEF;
g_trial_929 = rt_add(rt_r_ichk(g_trial_929), ((rt_int)1LL));
g_code_901 = f_new_buffer_24();
{ rt_frame xf2230;
if (RT_TRY(xf2230)) {
while (((rt_r_echk(F->ok_2226) && (F->a_2222 != NULL)) && (F->pm_2223 != NULL))) {
if (((rt_r_ichk((*(P863)rt_nil_check(F->pm_2223)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P863)rt_nil_check(F->pm_2223)).mode) == (((rt_int)3LL))))) {
f_lvalue_649(F->a_2222, &F->lv_2227, &F->t_2224, &F->lc_2228, &F->ro_2229);
} else {
F->v_2232 = rt_str_copy(f_gexpr_680(F->a_2222, (*(P863)rt_nil_check(F->pm_2223)).t, &F->t_2224));
}
if ((!(f_same_213(F->t_2224, (*(P863)rt_nil_check(F->pm_2223)).t) || ((rt_r_ichk((*(P857)rt_nil_check(F->t_2224)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P857)rt_nil_check((*(P863)rt_nil_check(F->pm_2223)).t)).kind) == (((rt_int)8LL))))))) {
F->ok_2226 = 0;
}
F->a_2222 = (*(P851)rt_nil_check(F->a_2222)).next;
F->pm_2223 = (*(P863)rt_nil_check(F->pm_2223)).next;
}
if (((F->a_2222 != NULL) || (F->pm_2223 != NULL))) {
F->ok_2226 = 0;
}
RT_POP(xf2230);
} else {
RT_POP(xf2230);
int x2231 = rt_xcur;
if (0 || x2231 == ex_compile_error_1) {
F->ok_2226 = 0;
} else {
rt_raise(x2231);
}
}
}
g_trial_929 = rt_sub(rt_r_ichk(g_trial_929), ((rt_int)1LL));
g_code_901 = F->saved_2225;
F->result_ = rt_r_echk(F->ok_2226);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P861 f_resolve_overload_784(rstr *name_779, P851 tt_780, P851 args_781, int is_stmt_782, rt_int line_783) {
  struct f_resolve_overload_784fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_779 = name_779;
F->tt_780 = tt_780;
F->args_781 = args_781;
F->is_stmt_782 = is_stmt_782;
F->line_783 = line_783;
F->y_2233 = NULL;
F->first_2234 = NULL;
F->n_2235 = RT_R_IUNDEF;
F->n_2235 = ((rt_int)0LL);
{ rt_int lo2237 = ((rt_int)1LL), hi2238 = ((rt_int)3LL);
for (rt_int it2239 = lo2237; it2239 <= hi2238; it2239++) {
F->pass_2236 = it2239;
F->y_2233 = f_overload_chain_790(&(*F->name_779), F->pass_2236);
while ((F->y_2233 != NULL)) {
if (((rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_2233)).name))->all), (*F->name_779)) && ((rt_r_ichk((*(P861)rt_nil_check(F->y_2233)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_2233)).kind) == (((rt_int)4LL))))) && ((F->pass_2236 != ((rt_int)1LL)) || (rt_r_ichk((*(P861)rt_nil_check(F->y_2233)).depth) >= rt_r_ichk(g_gdepth_920))))) {
F->n_2235 = rt_add(rt_r_ichk(F->n_2235), ((rt_int)1LL));
if ((F->first_2234 == NULL)) {
F->first_2234 = F->y_2233;
}
if (((((rt_r_ichk((*(P861)rt_nil_check(F->y_2233)).kind) == (((rt_int)4LL))) == F->is_stmt_782) && f_tt_fits_787(F->y_2233, F->tt_780)) && f_fits_778(F->y_2233, F->args_781))) {
F->result_ = F->y_2233;
goto ret_;
}
}
F->y_2233 = (*(P861)rt_nil_check(F->y_2233)).chain;
}
}
}
if (f_is_builtin_792(&(*F->name_779))) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk(F->n_2235) > ((rt_int)1LL))) {
f_fail_23(F->line_783, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_779)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2234;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_787(P861 y_785, P851 tt_786) {
  struct f_tt_fits_787fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_785 = y_785;
F->tt_786 = tt_786;
F->f_2240 = NULL;
F->a_2241 = NULL;
F->saved_2242 = NULL;
F->saved_2242 = g_code_901;
F->ok_2243 = RT_R_EUNDEF;
F->ok_2243 = 1;
if ((((*(P861)rt_nil_check(F->y_785)).decl == NULL) || ((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_785)).decl)).e == NULL))) {
F->result_ = (F->tt_786 == NULL);
goto ret_;
} else if ((F->tt_786 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2240 = (*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_785)).decl)).e;
F->a_2241 = F->tt_786;
g_trial_929 = rt_add(rt_r_ichk(g_trial_929), ((rt_int)1LL));
g_code_901 = f_new_buffer_24();
{ rt_frame xf2244;
if (RT_TRY(xf2244)) {
while (((rt_r_echk(F->ok_2243) && (F->f_2240 != NULL)) && (F->a_2241 != NULL))) {
F->fc_2246 = NULL;
F->ac_2247 = NULL;
F->fst_2248 = NULL;
F->fst_2248 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P851)rt_nil_check(F->f_2240)).line));
F->ft_2249 = NULL;
F->at_2250 = NULL;
(*(P851)rt_nil_check(F->fst_2248)).name = (*(P851)rt_nil_check(F->f_2240)).name;
F->ft_2249 = f_resolve_subtype_257(F->fst_2248, &F->fc_2246);
if ((rt_r_ichk((*(P851)rt_nil_check(F->a_2241)).kind) >= (((rt_int)70LL)))) {
F->at_2250 = f_resolve_subtype_257(F->a_2241, &F->ac_2247);
} else {
F->ast_2251 = NULL;
F->ast_2251 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P851)rt_nil_check(F->a_2241)).line));
(*(P851)rt_nil_check(F->ast_2251)).name = (*(P851)rt_nil_check(F->a_2241)).name;
F->at_2250 = f_resolve_subtype_257(F->ast_2251, &F->ac_2247);
}
F->ok_2243 = f_same_213(F->ft_2249, F->at_2250);
F->f_2240 = (*(P851)rt_nil_check(F->f_2240)).next;
F->a_2241 = (*(P851)rt_nil_check(F->a_2241)).next;
}
F->ok_2243 = ((rt_r_echk(F->ok_2243) && (F->f_2240 == NULL)) && (F->a_2241 == NULL));
RT_POP(xf2244);
} else {
RT_POP(xf2244);
int x2245 = rt_xcur;
if (0 || x2245 == ex_compile_error_1) {
F->ok_2243 = 0;
} else {
rt_raise(x2245);
}
}
}
g_trial_929 = rt_sub(rt_r_ichk(g_trial_929), ((rt_int)1LL));
g_code_901 = F->saved_2242;
F->result_ = rt_r_echk(F->ok_2243);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P861 f_overload_chain_790(rstr *name_788, rt_int pass_789) {
  struct f_overload_chain_790fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_788 = name_788;
F->pass_789 = pass_789;
if (((g_genv_888 == NULL) && (F->pass_789 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_789 == ((rt_int)2LL))) {
F->result_ = ({ A867 b_ = (((P865)rt_nil_check(g_genv_888))->all); b_.p[(rt_index(f_hash_153(&(*F->name_788)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A867 b_ = (((P865)rt_nil_check(g_table_887))->all); b_.p[(rt_index(f_hash_153(&(*F->name_788)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_792(rstr *n_791) {
  struct f_is_builtin_792fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_791 = n_791;
F->result_ = (((((((((((((((rt_str_eq((*F->n_791), rt_str("ABS", 3)) || rt_str_eq((*F->n_791), rt_str("POS", 3))) || rt_str_eq((*F->n_791), rt_str("SUCC", 4))) || rt_str_eq((*F->n_791), rt_str("PRED", 4))) || rt_str_eq((*F->n_791), rt_str("SQRT", 4))) || rt_str_eq((*F->n_791), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_791), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_791), rt_str("WRITE", 5))) || rt_str_eq((*F->n_791), rt_str("READLN", 6))) || rt_str_eq((*F->n_791), rt_str("SEND", 4))) || rt_str_eq((*F->n_791), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_791), rt_str("DELAY", 5))) || rt_str_eq((*F->n_791), rt_str("TIME", 4))) || rt_str_eq((*F->n_791), rt_str("CNVT", 4))) || rt_str_eq((*F->n_791), rt_str("FORMAT", 6))) || f_is_low_level_794(&(*F->n_791)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_794(rstr *n_793) {
  struct f_is_low_level_794fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_793 = n_793;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_793), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_793), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_793), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_793), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_793), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_793), rt_str("LOCK", 4))) || rt_str_eq((*F->n_793), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_793), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_793), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_793), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_793), rt_str("WAITING", 7))) || rt_str_eq((*F->n_793), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_793), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_793), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_793), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_793), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_793), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_793), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_793), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_798(P851 tt_795, rt_int line_796, P857 *t_797) {
  struct f_me_high_798fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_795 = tt_795;
F->line_796 = line_796;
F->t_797 = t_797;
F->t_797v = *F->t_797;
F->c_2252 = NULL;
if ((F->tt_795 == NULL)) {
f_fail_23(F->line_796, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_797v = f_resolve_subtype_257(F->tt_795, &F->c_2252);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_226(F->t_797v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_800(F->t_797v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_797) = F->t_797v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_800(P857 t_799) {
  struct f_type_tag_800fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_799 = t_799;
if (((*(P857)rt_nil_check(F->t_799)).name != NULL)) {
F->result_ = (((P844)rt_nil_check((*(P857)rt_nil_check(F->t_799)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_803(P851 e_801, rstr *name_802) {
  struct f_lock_ref_803fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_801 = e_801;
F->name_802 = name_802;
F->lv_2253 = NULL;
F->t_2254 = NULL;
F->c_2255 = NULL;
F->ro_2256 = RT_R_EUNDEF;
f_lvalue_649(F->e_801, &F->lv_2253, &F->t_2254, &F->c_2255, &F->ro_2256);
if ((rt_r_ichk((*(P857)rt_nil_check(F->t_2254)).kind) != (((rt_int)13LL)))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_801)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_802), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P844)rt_nil_check(F->lv_2253))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P861 f_user_op_806(rstr *op_804, P851 args_805) {
  struct f_user_op_806fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_804 = op_804;
F->args_805 = args_805;
F->y_2257 = NULL;
{ rt_int lo2259 = ((rt_int)1LL), hi2260 = ((rt_int)3LL);
for (rt_int it2261 = lo2259; it2261 <= hi2260; it2261++) {
F->pass_2258 = it2261;
F->y_2257 = f_overload_chain_790(&(*F->op_804), F->pass_2258);
while ((F->y_2257 != NULL)) {
if ((((rt_str_eq((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_2257)).name))->all), (*F->op_804)) && (rt_r_ichk((*(P861)rt_nil_check(F->y_2257)).kind) == (((rt_int)3LL)))) && ((F->pass_2258 != ((rt_int)1LL)) || (rt_r_ichk((*(P861)rt_nil_check(F->y_2257)).depth) >= rt_r_ichk(g_gdepth_920)))) && f_fits_778(F->y_2257, F->args_805))) {
F->result_ = F->y_2257;
goto ret_;
}
F->y_2257 = (*(P861)rt_nil_check(F->y_2257)).chain;
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

static rstr f_gcall_810(P851 e_807, int is_stmt_808, P857 *t_809) {
  struct f_gcall_810fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_807 = e_807;
F->is_stmt_808 = is_stmt_808;
F->t_809 = t_809;
F->t_809v = *F->t_809;
F->gd_2262 = NULL;
F->fn_2263 = NULL;
F->fn_2263 = (*(P851)rt_nil_check(F->e_807)).a;
F->tt_2264 = NULL;
F->y_2265 = NULL;
F->args_2266 = NULL;
F->args_2266 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2267 = NULL;
F->a_2267 = (*(P851)rt_nil_check(F->e_807)).b;
F->pm_2268 = NULL;
F->lt_2269 = NULL;
F->vt_2270 = NULL;
F->lv_2271 = NULL;
F->lc_2272 = NULL;
F->ro_2273 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P851)rt_nil_check(F->fn_2263)).kind) == (((rt_int)12LL)))) {
F->tt_2264 = (*(P851)rt_nil_check(F->fn_2263)).b;
F->fn_2263 = (*(P851)rt_nil_check(F->fn_2263)).a;
}
F->y_2265 = f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_2263)).name))->all));
if ((F->y_2265 == NULL)) {
F->result_ = f_builtin_840(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_2263)).name))->all), F->tt_2264, (*(P851)rt_nil_check(F->e_807)).b, rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line), F->is_stmt_808, &F->t_809v);
goto ret_;
}
if ((((rt_r_ichk((*(P861)rt_nil_check(F->y_2265)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P861)rt_nil_check(F->y_2265)).kind) != (((rt_int)4LL)))) && (rt_r_ichk((*(P861)rt_nil_check(F->y_2265)).kind) != (((rt_int)10LL))))) {
F->alt_2274 = NULL;
F->alt_2274 = f_resolve_overload_784(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_2263)).name))->all), F->tt_2264, (*(P851)rt_nil_check(F->e_807)).b, F->is_stmt_808, rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line));
if ((F->alt_2274 != NULL)) {
F->y_2265 = F->alt_2274;
} else if (f_is_builtin_792(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_2263)).name))->all))) {
F->result_ = f_builtin_840(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_2263)).name))->all), F->tt_2264, (*(P851)rt_nil_check(F->e_807)).b, rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line), F->is_stmt_808, &F->t_809v);
goto ret_;
}
}
if ((rt_r_ichk((*(P861)rt_nil_check(F->y_2265)).kind) == (((rt_int)10LL)))) {
F->gd_2262 = (*(P861)rt_nil_check(F->y_2265)).decl;
F->y_2265 = f_instantiate_625(F->y_2265, F->tt_2264, (*(P851)rt_nil_check(F->e_807)).b, rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line));
} else if (((rt_r_ichk((*(P861)rt_nil_check(F->y_2265)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P861)rt_nil_check(F->y_2265)).kind) == (((rt_int)4LL))))) {
F->y_2265 = f_resolve_overload_784(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_2263)).name))->all), F->tt_2264, (*(P851)rt_nil_check(F->e_807)).b, F->is_stmt_808, rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line));
if ((F->y_2265 == NULL)) {
F->result_ = f_builtin_840(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_2263)).name))->all), F->tt_2264, (*(P851)rt_nil_check(F->e_807)).b, rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line), F->is_stmt_808, &F->t_809v);
goto ret_;
}
}
if (((rt_r_ichk((*(P861)rt_nil_check(F->y_2265)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P861)rt_nil_check(F->y_2265)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_2263)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_824(F->y_2265, rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line));
if (((*(P861)rt_nil_check(F->y_2265)).capn != NULL)) {
F->cr_2275 = NULL;
F->cr_2275 = g_caps_906;
while ((F->cr_2275 != NULL)) {
if (((*(P878)rt_nil_check(F->cr_2275)).d == (*(P861)rt_nil_check(F->y_2265)).capn)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_2265)).name))->all), rt_str(" is a normal function with an imports list: it may not be invoked inside its capsule", 84)); b_; }));
}
F->cr_2275 = (*(P878)rt_nil_check(F->cr_2275)).next;
}
}
if ((F->is_stmt_808 && (rt_r_ichk((*(P861)rt_nil_check(F->y_2265)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_2263)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_808) && (rt_r_ichk((*(P861)rt_nil_check(F->y_2265)).kind) != (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_2263)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2268 = (*(P861)rt_nil_check(F->y_2265)).params;
if ((rt_r_ichk((*(P861)rt_nil_check(F->y_2265)).level) > ((rt_int)0LL))) {
F->args_2266 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2277 = ((rt_int)1LL), hi2278 = rt_sub(rt_r_ichk(g_cur_level_904), rt_r_ichk((*(P861)rt_nil_check(F->y_2265)).level));
for (rt_int it2279 = lo2277; it2279 <= hi2278; it2279++) {
F->i_2276 = it2279;
F->args_2266 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->args_2266))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2267 != NULL) && (F->pm_2268 != NULL))) {
if ((((rt_int)(((((P844)rt_nil_check(F->args_2266))->all)).len)) > ((rt_int)0LL))) {
F->args_2266 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->args_2266))->all), rt_str(", ", 2)); b_; }));
}
if (((rt_r_ichk((*(P863)rt_nil_check(F->pm_2268)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P863)rt_nil_check(F->pm_2268)).mode) == (((rt_int)3LL))))) {
f_lvalue_649(F->a_2267, &F->lv_2271, &F->lt_2269, &F->lc_2272, &F->ro_2273);
if (rt_r_echk(F->ro_2273)) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check((*(P863)rt_nil_check(F->pm_2268)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_224(F->lt_2269, (*(P863)rt_nil_check(F->pm_2268)).t, rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line));
F->args_2266 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->args_2266))->all), rt_str("&", 1)), (((P844)rt_nil_check(F->lv_2271))->all)), f_actual_bounds_833((*(P863)rt_nil_check(F->pm_2268)).t, F->lt_2269, F->lc_2272)); b_; }));
} else if (((rt_r_ichk((*(P863)rt_nil_check(F->pm_2268)).mode) == (((rt_int)4LL))) && f_is_lvalue_643(F->a_2267))) {
f_lvalue_649(F->a_2267, &F->lv_2271, &F->lt_2269, &F->lc_2272, &F->ro_2273);
f_check_type_224(F->lt_2269, (*(P863)rt_nil_check(F->pm_2268)).t, rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line));
F->args_2266 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->args_2266))->all), rt_str("&", 1)), (((P844)rt_nil_check(F->lv_2271))->all)), f_actual_bounds_833((*(P863)rt_nil_check(F->pm_2268)).t, F->lt_2269, F->lc_2272)); b_; }));
} else if ((rt_r_ichk((*(P863)rt_nil_check(F->pm_2268)).mode) == (((rt_int)4LL)))) {
F->v_2280 = rt_str_copy(f_gexpr_in_688(F->a_2267, (*(P863)rt_nil_check(F->pm_2268)).t, (*(P863)rt_nil_check(F->pm_2268)).c, &F->vt_2270));
F->ct_2281 = rt_str_copy(f_ctype_226((*(P863)rt_nil_check(F->pm_2268)).t));
f_check_type_224(F->vt_2270, (*(P863)rt_nil_check(F->pm_2268)).t, rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line));
F->args_2266 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->args_2266))->all), rt_str("({ ", 3)), F->ct_2281), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2281), rt_str(")); *b_ = ", 10)), F->v_2280), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_178((*(P863)rt_nil_check(F->pm_2268)).t)) {
F->args_2266 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->args_2266))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2282 = rt_str_copy(f_gexpr_in_688(F->a_2267, (*(P863)rt_nil_check(F->pm_2268)).t, (*(P863)rt_nil_check(F->pm_2268)).c, &F->vt_2270));
f_check_type_224(F->vt_2270, (*(P863)rt_nil_check(F->pm_2268)).t, rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line));
F->args_2266 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->args_2266))->all), F->v_2282); b_; }));
}
F->a_2267 = (*(P851)rt_nil_check(F->a_2267)).next;
F->pm_2268 = (*(P863)rt_nil_check(F->pm_2268)).next;
}
if (((F->a_2267 != NULL) || (F->pm_2268 != NULL))) {
f_fail_23(rt_r_ichk((*(P851)rt_nil_check(F->e_807)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check((*(P851)rt_nil_check(F->fn_2263)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_67((*(P851)rt_nil_check(F->e_807)).b), f_list_len_67(F->a_2267)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_809v = (*(P861)rt_nil_check(F->y_2265)).result;
if ((F->gd_2262 != NULL)) {
F->chk_2283 = rt_str_copy(f_same_subtypes_829(F->gd_2262, (*(P851)rt_nil_check(F->e_807)).b));
if ((!rt_str_eq(F->chk_2283, rt_str("", 0)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), F->chk_2283), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("generic subtype", 15)), f_q_18()), rt_str("); ", 3)), (((P844)rt_nil_check((*(P861)rt_nil_check(F->y_2265)).cname))->all)), rt_str("(", 1)), (((P844)rt_nil_check(F->args_2266))->all)), rt_str("); })", 5));
goto ret_;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_2265)).cname))->all), rt_str("(", 1)), (((P844)rt_nil_check(F->args_2266))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_809) = F->t_809v;
  RT_FPOP();
  return F->result_;
}

static P855 f_requires_812(P861 y_811) {
  struct f_requires_812fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_811 = y_811;
if (rt_r_echk((*(P861)rt_nil_check(F->y_811)).reqdone)) {
F->result_ = (*(P861)rt_nil_check(F->y_811)).reqs;
goto ret_;
}
(*(P861)rt_nil_check(F->y_811)).reqdone = 1;
if ((((*(P861)rt_nil_check(F->y_811)).decl != NULL) && (((rt_r_ichk((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_811)).decl)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_811)).decl)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_811)).decl)).kind) == (((rt_int)50LL)))))) {
F->imp_2284 = NULL;
F->imp_2284 = (*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_811)).decl)).d;
while ((F->imp_2284 != NULL)) {
f_add_req_815(F->y_811, &(((P844)rt_nil_check((*(P851)rt_nil_check(F->imp_2284)).name))->all));
F->imp_2284 = (*(P851)rt_nil_check(F->imp_2284)).next;
}
f_require_calls_818(F->y_811, (*(P851)rt_nil_check((*(P861)rt_nil_check(F->y_811)).decl)).c);
}
F->result_ = (*(P861)rt_nil_check(F->y_811)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_815(P861 y_813, rstr *name_814) {
  struct f_add_req_815fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_813 = y_813;
F->name_814 = name_814;
F->l_2285 = NULL;
if ((!f_seen_name_376((*(P861)rt_nil_check(F->y_813)).reqs, &(*F->name_814)))) {
{ R856 *cell2286 = rt_alloc(sizeof(R856));
(*cell2286).s = NULL;
(*cell2286).next = NULL;
F->l_2285 = cell2286;
}
(*(P855)rt_nil_check(F->l_2285)).s = f_mk_3(&(*F->name_814));
(*(P855)rt_nil_check(F->l_2285)).next = (*(P861)rt_nil_check(F->y_813)).reqs;
(*(P861)rt_nil_check(F->y_813)).reqs = F->l_2285;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_818(P861 y_816, P851 e_817) {
  struct f_require_calls_818fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_816 = y_816;
F->e_817 = e_817;
F->x_2287 = NULL;
F->x_2287 = F->e_817;
while ((F->x_2287 != NULL)) {
if ((((((rt_r_ichk((*(P851)rt_nil_check(F->x_2287)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P851)rt_nil_check(F->x_2287)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P851)rt_nil_check(F->x_2287)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P851)rt_nil_check(F->x_2287)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P851)rt_nil_check(F->x_2287)).kind) == (((rt_int)51LL))))) {
F->x_2287 = (*(P851)rt_nil_check(F->x_2287)).next;
} else {
F->callee_2288 = NULL;
if (((((rt_r_ichk((*(P851)rt_nil_check(F->x_2287)).kind) == (((rt_int)10LL))) || (rt_r_ichk((*(P851)rt_nil_check(F->x_2287)).kind) == (((rt_int)21LL)))) && ((*(P851)rt_nil_check(F->x_2287)).a != NULL)) && (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->x_2287)).a)).kind) == (((rt_int)7LL))))) {
F->callee_2288 = (*(P851)rt_nil_check(F->x_2287)).a;
}
if ((F->callee_2288 != NULL)) {
F->z_2289 = NULL;
F->z_2289 = f_lookup_155(&(((P844)rt_nil_check((*(P851)rt_nil_check(F->callee_2288)).name))->all));
if ((((F->z_2289 != NULL) && (F->z_2289 != F->y_816)) && ((rt_r_ichk((*(P861)rt_nil_check(F->z_2289)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P861)rt_nil_check(F->z_2289)).kind) == (((rt_int)3LL)))))) {
F->l_2290 = NULL;
F->l_2290 = f_requires_812(F->z_2289);
while ((F->l_2290 != NULL)) {
f_add_req_815(F->y_816, &(((P844)rt_nil_check((*(P855)rt_nil_check(F->l_2290)).s))->all));
F->l_2290 = (*(P855)rt_nil_check(F->l_2290)).next;
}
}
}
if (((*(P851)rt_nil_check(F->x_2287)).a != NULL)) {
f_require_calls_818(F->y_816, (*(P851)rt_nil_check(F->x_2287)).a);
}
if (((*(P851)rt_nil_check(F->x_2287)).b != NULL)) {
f_require_calls_818(F->y_816, (*(P851)rt_nil_check(F->x_2287)).b);
}
if (((*(P851)rt_nil_check(F->x_2287)).c != NULL)) {
f_require_calls_818(F->y_816, (*(P851)rt_nil_check(F->x_2287)).c);
}
F->x_2287 = (*(P851)rt_nil_check(F->x_2287)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_821(P851 elems_819, rstr *name_820) {
  struct f_declared_in_821fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_819 = elems_819;
F->name_820 = name_820;
F->e_2291 = NULL;
F->e_2291 = F->elems_819;
while ((F->e_2291 != NULL)) {
if ((((rt_r_ichk((*(P851)rt_nil_check(F->e_2291)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P851)rt_nil_check(F->e_2291)).kind) == (((rt_int)41LL)))) && rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check(F->e_2291)).name))->all), (*F->name_820)))) {
F->result_ = 1;
goto ret_;
}
F->e_2291 = (*(P851)rt_nil_check(F->e_2291)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_824(P861 y_822, rt_int line_823) {
  struct f_check_requires_824fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_822 = y_822;
F->line_823 = line_823;
F->l_2292 = NULL;
F->l_2292 = f_requires_812(F->y_822);
if ((((*(P861)rt_nil_check(F->y_822)).home == NULL) || (rt_r_ichk((*(P861)rt_nil_check(F->y_822)).level) != rt_r_ichk(g_cur_level_904)))) {
goto ret_;
}
while ((F->l_2292 != NULL)) {
F->z_2293 = NULL;
F->z_2293 = f_lookup_155(&(((P844)rt_nil_check((*(P855)rt_nil_check(F->l_2292)).s))->all));
if ((f_declared_in_821((*(P861)rt_nil_check(F->y_822)).home, &(((P844)rt_nil_check((*(P855)rt_nil_check(F->l_2292)).s))->all)) && ((F->z_2293 == NULL) || (rt_r_ichk((*(P861)rt_nil_check(F->z_2293)).depth) < rt_r_ichk((*(P861)rt_nil_check(F->y_822)).depth))))) {
f_fail_23(F->line_823, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check((*(P861)rt_nil_check(F->y_822)).name))->all), rt_str(" requires ", 10)), (((P844)rt_nil_check((*(P855)rt_nil_check(F->l_2292)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2292 = (*(P855)rt_nil_check(F->l_2292)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_delay_args_826(P851 args_825) {
  struct f_act_delay_args_826fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->args_825 = args_825;
F->at_2294 = NULL;
F->t1_2295 = NULL;
F->t1_2295 = f_peek_type_696(F->args_825);
if (((F->t1_2295 != NULL) && (rt_r_ichk((*(P857)rt_nil_check(F->t1_2295)).kind) == (((rt_int)14LL))))) {
F->a_2296 = rt_str_copy(f_act_ref_531(F->args_825));
F->v_2297 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->args_825)).next, g_ty_int_931, &F->at_2294));
f_check_type_224(F->at_2294, g_ty_int_931, rt_r_ichk((*(P851)rt_nil_check(F->args_825)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2297, rt_str(", ", 2)), F->a_2296);
goto ret_;
}
{
F->v_2298 = rt_str_copy(f_gexpr_680(F->args_825, g_ty_int_931, &F->at_2294));
f_check_type_224(F->at_2294, g_ty_int_931, rt_r_ichk((*(P851)rt_nil_check(F->args_825)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2298, rt_str(", ", 2)), f_act_ref_531((*(P851)rt_nil_check(F->args_825)).next));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_same_subtypes_829(P851 gd_827, P851 args_828) {
  struct f_same_subtypes_829fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_827 = gd_827;
F->args_828 = args_828;
F->p_2299 = NULL;
F->p_2299 = (*(P851)rt_nil_check(F->gd_827)).a;
F->r_2300 = NULL;
F->r_2300 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->p_2299 != NULL)) {
if ((rt_r_ichk((*(P851)rt_nil_check(F->p_2299)).ival) == ((rt_int)2LL))) {
F->fp_2301 = NULL;
F->fp_2301 = (*(P851)rt_nil_check((*(P851)rt_nil_check(F->gd_827)).b)).a;
F->a_2302 = NULL;
F->a_2302 = F->args_828;
F->flo_2303 = NULL;
F->fhi_2304 = NULL;
while (((F->fp_2301 != NULL) && (F->a_2302 != NULL))) {
if ((((((*(P851)rt_nil_check(F->fp_2301)).a != NULL) && (rt_r_ichk((*(P851)rt_nil_check((*(P851)rt_nil_check(F->fp_2301)).a)).kind) == (((rt_int)80LL)))) && rt_str_eq((((P844)rt_nil_check((*(P851)rt_nil_check((*(P851)rt_nil_check(F->fp_2301)).a)).name))->all), (((P844)rt_nil_check((*(P851)rt_nil_check(F->p_2299)).name))->all))) && ((*(P851)rt_nil_check((*(P851)rt_nil_check(F->fp_2301)).a)).b == NULL))) {
F->st_2305 = NULL;
F->c_2306 = NULL;
F->base_2307 = NULL;
F->lo_2308 = NULL;
F->hi_2309 = NULL;
F->st_2305 = f_value_subtype_279(F->a_2302, &F->c_2306, &F->base_2307);
if (f_scalar_kind_178(F->st_2305)) {
F->lo_2308 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_lo_190(F->st_2305, F->c_2306); b_; }));
F->hi_2309 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_hi_193(F->st_2305, F->c_2306); b_; }));
} else if (((rt_r_ichk((*(P857)rt_nil_check(F->st_2305)).kind) == (((rt_int)5LL))) && ((*(P853)rt_nil_check(F->c_2306)).slen != NULL))) {
F->lo_2308 = (*(P853)rt_nil_check(F->c_2306)).slen;
F->hi_2309 = (*(P853)rt_nil_check(F->c_2306)).slen;
}
if (((F->lo_2308 != NULL) && (F->flo_2303 != NULL))) {
if ((((rt_int)(((((P844)rt_nil_check(F->r_2300))->all)).len)) > ((rt_int)0LL))) {
F->r_2300 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P844)rt_nil_check(F->r_2300))->all), rt_str(" || ", 4)); b_; }));
}
F->r_2300 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->r_2300))->all), rt_str("(", 1)), (((P844)rt_nil_check(F->flo_2303))->all)), rt_str(") != (", 6)), (((P844)rt_nil_check(F->lo_2308))->all)), rt_str(") || (", 6)), (((P844)rt_nil_check(F->fhi_2304))->all)), rt_str(") != (", 6)), (((P844)rt_nil_check(F->hi_2309))->all)), rt_str(")", 1)); b_; }));
} else if ((F->lo_2308 != NULL)) {
F->flo_2303 = F->lo_2308;
F->fhi_2304 = F->hi_2309;
}
}
F->fp_2301 = (*(P851)rt_nil_check(F->fp_2301)).next;
F->a_2302 = (*(P851)rt_nil_check(F->a_2302)).next;
}
}
F->p_2299 = (*(P851)rt_nil_check(F->p_2299)).next;
}
F->result_ = (((P844)rt_nil_check(F->r_2300))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_actual_bounds_833(P857 ft_830, P857 t_831, P853 c_832) {
  struct f_actual_bounds_833fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_830 = ft_830;
F->t_831 = t_831;
F->c_832 = c_832;
if ((!f_scalar_kind_178(F->ft_830))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_190(F->t_831, F->c_832)), rt_str(", ", 2)), f_sub_hi_193(F->t_831, F->c_832));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_840(rstr *name_834, P851 tt_835, P851 args_836, rt_int line_837, int is_stmt_838, P857 *t_839) {
  struct f_builtin_840fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_834 = name_834;
F->tt_835 = tt_835;
F->args_836 = args_836;
F->line_837 = line_837;
F->is_stmt_838 = is_stmt_838;
F->t_839 = t_839;
F->t_839v = *F->t_839;
F->at_2310 = NULL;
F->n_2311 = RT_R_IUNDEF;
F->n_2311 = f_list_len_67(F->args_836);
F->t_839v = g_ty_void_936;
if (((rt_str_eq((*F->name_834), rt_str("POS", 3)) || rt_str_eq((*F->name_834), rt_str("SUCC", 4))) || rt_str_eq((*F->name_834), rt_str("PRED", 4)))) {
F->a_2312 = rt_str_copy(f_gexpr_680(F->args_836, NULL, &F->at_2310));
if (rt_str_eq((*F->name_834), rt_str("POS", 3))) {
if (((*(P857)rt_nil_check(f_base_of_215(F->at_2310))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_839v = g_ty_int_931;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2312), rt_str(") + 1)", 6));
goto ret_;
}
F->t_839v = F->at_2310;
if ((rt_r_ichk((*(P857)rt_nil_check(F->at_2310)).kind) == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_834), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2312), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2312), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_834), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2312), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P857)rt_nil_check(f_base_of_215(F->at_2310))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2312), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P857)rt_nil_check(f_base_of_215(F->at_2310))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_834), rt_str("SQRT", 4)) || rt_str_eq((*F->name_834), rt_str("SIN", 3))) || rt_str_eq((*F->name_834), rt_str("COS", 3))) || rt_str_eq((*F->name_834), rt_str("EXP", 3))) || rt_str_eq((*F->name_834), rt_str("LN", 2))) || rt_str_eq((*F->name_834), rt_str("FLOOR", 5)))) {
F->a_2313 = rt_str_copy(f_gexpr_680(F->args_836, g_ty_float_933, &F->at_2310));
F->t_839v = g_ty_float_933;
if (rt_str_eq((*F->name_834), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2313), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_834)), rt_str("(", 1)), F->a_2313), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("IFLOAT", 6))) {
F->a_2314 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->args_836)).next, g_ty_int_931, &F->at_2310));
F->t_839v = g_ty_float_933;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2314), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("IFIX", 4))) {
F->a_2315 = rt_str_copy(f_gexpr_680(F->args_836, g_ty_float_933, &F->at_2310));
F->t_839v = g_ty_int_931;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2315), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("FORMAT", 6))) {
F->a_2316 = rt_str_copy(f_gexpr_680(F->args_836, g_ty_float_933, &F->at_2310));
F->n1_2317 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->args_836)).next, g_ty_int_931, &F->at_2310));
F->m1_2318 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check((*(P851)rt_nil_check(F->args_836)).next)).next, g_ty_int_931, &F->at_2310));
F->t_839v = g_ty_string_935;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_2316), rt_str(", ", 2)), F->n1_2317), rt_str(", ", 2)), F->m1_2318), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("ABS", 3))) {
F->a_2319 = rt_str_copy(f_gexpr_680(F->args_836, NULL, &F->at_2310));
F->t_839v = F->at_2310;
if ((rt_r_ichk((*(P857)rt_nil_check(F->at_2310)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2319), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2319), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("CNVT", 4))) {
if ((F->tt_835 == NULL)) {
f_fail_23(F->line_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_2320 = rt_str_copy(f_gexpr_680(F->args_836, NULL, &F->at_2310));
if (((rt_r_ichk((*(P851)rt_nil_check(F->tt_835)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P857)rt_nil_check(F->at_2310)).kind) == (((rt_int)1LL))))) {
F->t_839v = g_ty_string_935;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2320), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P851)rt_nil_check(F->tt_835)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P857)rt_nil_check(F->at_2310)).kind) == (((rt_int)3LL))))) {
F->t_839v = g_ty_string_935;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_2320), rt_str(", 6)", 4));
goto ret_;
} else if (((rt_r_ichk((*(P851)rt_nil_check(F->tt_835)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P857)rt_nil_check(F->at_2310)).kind) == (((rt_int)2LL))))) {
F->t_839v = g_ty_string_935;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2320), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if (((rt_r_ichk((*(P851)rt_nil_check(F->tt_835)).kind) == (((rt_int)70LL))) && (rt_r_ichk((*(P857)rt_nil_check(F->at_2310)).kind) == (((rt_int)5LL))))) {
F->t_839v = g_ty_int_931;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2320), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_834), rt_str("WRITELN", 7))) {
if ((rt_r_ichk(F->n_2311) == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_2321 = NULL;
F->last_2321 = F->args_836;
while (((*(P851)rt_nil_check(F->last_2321)).next != NULL)) {
F->last_2321 = (*(P851)rt_nil_check(F->last_2321)).next;
}
{
F->a_2322 = rt_str_copy(f_gexpr_680(F->last_2321, g_ty_string_935, &F->at_2310));
f_check_type_224(F->at_2310, g_ty_string_935, F->line_837);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2322), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_834), rt_str("WRITE", 5))) {
F->a_2323 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->args_836)).next, NULL, &F->at_2310));
if ((rt_r_ichk((*(P857)rt_nil_check(F->at_2310)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_2323), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P857)rt_nil_check(F->at_2310)).kind) == (((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_2323), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_834), rt_str("READLN", 6))) {
F->lv_2324 = NULL;
F->lc_2325 = NULL;
F->ro_2326 = RT_R_EUNDEF;
F->last_2327 = NULL;
F->last_2327 = F->args_836;
while (((*(P851)rt_nil_check(F->last_2327)).next != NULL)) {
F->last_2327 = (*(P851)rt_nil_check(F->last_2327)).next;
}
f_lvalue_649(F->last_2327, &F->lv_2324, &F->at_2310, &F->lc_2325, &F->ro_2326);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (((P844)rt_nil_check(F->lv_2324))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("SIZELN", 6))) {
F->t_839v = g_ty_int_931;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("EOF", 3))) {
F->t_839v = g_ty_bool_932;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_834), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_834), rt_str("SYS_OUT", 7)))) {
F->t_839v = g_ty_file_937;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_834), rt_str("OPEN", 4)) || rt_str_eq((*F->name_834), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_834), rt_str("SEND", 4)) || rt_str_eq((*F->name_834), rt_str("RECEIVE", 7)))) {
F->lv_2328 = NULL;
F->dv_2329 = NULL;
F->lc_2330 = NULL;
F->ro_2331 = RT_R_EUNDEF;
F->mt_2332 = NULL;
F->dt_2333 = NULL;
f_lvalue_649(F->args_836, &F->lv_2328, &F->mt_2332, &F->lc_2330, &F->ro_2331);
if ((rt_r_ichk((*(P857)rt_nil_check(F->mt_2332)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_834), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_834), rt_str("RECEIVE", 7))) {
f_lvalue_649((*(P851)rt_nil_check(F->args_836)).next, &F->dv_2329, &F->dt_2333, &F->lc_2330, &F->ro_2331);
f_check_type_224(F->dt_2333, (*(P857)rt_nil_check(F->mt_2332)).elem, F->line_837);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P844)rt_nil_check(F->lv_2328))->all)), rt_str(", &", 3)), (((P844)rt_nil_check(F->dv_2329))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2334 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->args_836)).next, (*(P857)rt_nil_check(F->mt_2332)).elem, &F->at_2310));
f_check_type_224(F->at_2310, (*(P857)rt_nil_check(F->mt_2332)).elem, F->line_837);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226((*(P857)rt_nil_check(F->mt_2332)).elem)), rt_str(" m_ = ", 6)), F->v_2334), rt_str("; rt_send(", 10)), (((P844)rt_nil_check(F->lv_2328))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_834), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_834), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2335 = NULL;
F->lc_2336 = NULL;
F->ro_2337 = RT_R_EUNDEF;
F->mt_2338 = NULL;
f_lvalue_649(F->args_836, &F->lv_2335, &F->mt_2338, &F->lc_2336, &F->ro_2337);
if ((rt_r_ichk((*(P857)rt_nil_check(F->mt_2338)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_834), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_839v = g_ty_int_931;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_834))), rt_str("(", 1)), (((P844)rt_nil_check(F->lv_2335))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_834), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_834), rt_str("COND_RECEIVE", 12)))) {
F->lv_2339 = NULL;
F->dv_2340 = NULL;
F->bv_2341 = NULL;
F->lc_2342 = NULL;
F->ro_2343 = RT_R_EUNDEF;
F->mt_2344 = NULL;
F->dt_2345 = NULL;
F->bt_2346 = NULL;
f_lvalue_649(F->args_836, &F->lv_2339, &F->mt_2344, &F->lc_2342, &F->ro_2343);
if ((rt_r_ichk((*(P857)rt_nil_check(F->mt_2344)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_834), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_649((*(P851)rt_nil_check((*(P851)rt_nil_check(F->args_836)).next)).next, &F->bv_2341, &F->bt_2346, &F->lc_2342, &F->ro_2343);
f_check_type_224(F->bt_2346, g_ty_bool_932, F->line_837);
if (rt_str_eq((*F->name_834), rt_str("COND_RECEIVE", 12))) {
f_lvalue_649((*(P851)rt_nil_check(F->args_836)).next, &F->dv_2340, &F->dt_2345, &F->lc_2342, &F->ro_2343);
f_check_type_224(F->dt_2345, (*(P857)rt_nil_check(F->mt_2344)).elem, F->line_837);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->bv_2341))->all), rt_str(" = rt_cond_receive(", 19)), (((P844)rt_nil_check(F->lv_2339))->all)), rt_str(", &", 3)), (((P844)rt_nil_check(F->dv_2340))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2347 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->args_836)).next, (*(P857)rt_nil_check(F->mt_2344)).elem, &F->at_2310));
f_check_type_224(F->at_2310, (*(P857)rt_nil_check(F->mt_2344)).elem, F->line_837);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226((*(P857)rt_nil_check(F->mt_2344)).elem)), rt_str(" m_ = ", 6)), F->v_2347), rt_str("; ", 2)), (((P844)rt_nil_check(F->bv_2341))->all)), rt_str(" = rt_cond_send(", 16)), (((P844)rt_nil_check(F->lv_2339))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_834), rt_str("PRIORITY", 8))) {
F->t_839v = g_ty_int_931;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_531(F->args_836)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("SET_PRIORITY", 12))) {
F->v_2348 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->args_836)).next, g_ty_int_931, &F->at_2310));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_531(F->args_836)), rt_str(", ", 2)), F->v_2348), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_531(F->args_836)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("ACTIVE", 6))) {
F->t_839v = g_ty_bool_932;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_531(F->args_836)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("DELAY", 5))) {
F->v_2349 = rt_str_copy(f_gexpr_680(F->args_836, g_ty_int_931, &F->at_2310));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2349), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_834), rt_str("DELAY_UNTIL", 11)) && (rt_r_ichk(F->n_2311) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_delay_act(", 15), f_act_delay_args_826(F->args_836)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("DELAY_UNTIL", 11))) {
F->v_2350 = rt_str_copy(f_gexpr_680(F->args_836, g_ty_int_931, &F->at_2310));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2350), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_531(F->args_836)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_834), rt_str("TIME", 4)) && (rt_r_ichk(F->n_2311) == ((rt_int)1LL)))) {
F->t_839v = g_ty_int_931;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_act_time(", 14), f_act_ref_531(F->args_836)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("TIME", 4))) {
F->t_839v = g_ty_int_931;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_834), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_834), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_834), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_834), rt_str("HOURS", 5)))) {
F->t_839v = g_ty_int_931;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_834));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("HALT", 4))) {
F->a_2351 = rt_str_copy(f_gexpr_680(F->args_836, g_ty_int_931, &F->at_2310));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2351), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_834), rt_str("ME", 2)) && (F->tt_835 != NULL))) {
F->result_ = f_me_high_798(F->tt_835, F->line_837, &F->t_839v);
goto ret_;
} else if ((rt_str_eq((*F->name_834), rt_str("WAITING", 7)) || rt_str_eq((*F->name_834), rt_str("SUSPENDED", 9)))) {
F->t_839v = g_ty_bool_932;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_834))), rt_str("(", 1)), f_act_ref_531(F->args_836)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_834), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_834), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_834), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_834), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_834), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_834), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_834))), rt_str("(", 1)), f_act_ref_531(F->args_836)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("TASK_START", 10))) {
if ((rt_r_ichk(F->n_2311) != ((rt_int)2LL))) {
f_fail_23(F->line_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_531(F->args_836)), rt_str(", ", 2)), f_act_ref_531((*(P851)rt_nil_check(F->args_836)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_834), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_834), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_834), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_834), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_834), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_834), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((rt_r_ichk(F->n_2311) != ((rt_int)0LL))) {
f_fail_23(F->line_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_834), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_834))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_803(F->args_836, &(*F->name_834))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_803(F->args_836, &(*F->name_834))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("COND_LOCK", 9))) {
F->bv_2352 = NULL;
F->bc_2353 = NULL;
F->ro_2354 = RT_R_EUNDEF;
F->bt_2355 = NULL;
F->l_2356 = rt_str_copy(f_lock_ref_803(F->args_836, &(*F->name_834)));
f_lvalue_649((*(P851)rt_nil_check(F->args_836)).next, &F->bv_2352, &F->bt_2355, &F->bc_2353, &F->ro_2354);
f_check_type_224(F->bt_2355, g_ty_bool_932, F->line_837);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P844)rt_nil_check(F->bv_2352))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2356), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("EXCESS_LOCKS", 12))) {
F->t_839v = g_ty_int_931;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_803(F->args_836, &(*F->name_834))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("OWNER", 5))) {
F->t_839v = g_ty_act_941;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_803(F->args_836, &(*F->name_834))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("FREE", 4))) {
F->pv_2357 = NULL;
F->pc_2358 = NULL;
F->ro_2359 = RT_R_EUNDEF;
F->pt_2360 = NULL;
f_lvalue_649(F->args_836, &F->pv_2357, &F->pt_2360, &F->pc_2358, &F->ro_2359);
if (((rt_r_ichk((*(P857)rt_nil_check(F->pt_2360)).kind) != (((rt_int)8LL))) || rt_r_echk(F->ro_2359))) {
f_fail_23(F->line_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_912 = 1;
f_finish_ptr_415(F->pt_2360);
if (f_suppressed_449(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; }))) {
if (f_needs_fin_316((*(P857)rt_nil_check(F->pt_2360)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P844)rt_nil_check(F->pv_2357))->all)), rt_str(") { ", 4)), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_638(F->pt_2360, &(((P844)rt_nil_check(F->pv_2357))->all)); b_; }), (*(P857)rt_nil_check(F->pt_2360)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P844)rt_nil_check(F->pv_2357))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P844)rt_nil_check(F->pv_2357))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_316((*(P857)rt_nil_check(F->pt_2360)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P844)rt_nil_check(F->pv_2357))->all)), rt_str("); if (", 7)), (((P844)rt_nil_check(F->pv_2357))->all)), rt_str(") { ", 4)), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_638(F->pt_2360, &(((P844)rt_nil_check(F->pv_2357))->all)); b_; }), (*(P857)rt_nil_check(F->pt_2360)).target)), rt_str(" } rt_free((void **)&", 21)), (((P844)rt_nil_check(F->pv_2357))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P844)rt_nil_check(F->pv_2357))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_834), rt_str("LOW_IO", 6))) {
F->dev_2361 = rt_str_copy(f_gexpr_680(F->args_836, g_ty_int_931, &F->at_2310));
F->cmd_2362 = rt_str_copy(f_gexpr_680((*(P851)rt_nil_check(F->args_836)).next, g_ty_int_931, &F->at_2310));
if ((rt_r_ichk(F->n_2311) == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_2361), rt_str(", ", 2)), F->cmd_2362), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2363 = NULL;
F->dc_2364 = NULL;
F->ro_2365 = RT_R_EUNDEF;
F->dt_2366 = NULL;
f_lvalue_649((*(P851)rt_nil_check((*(P851)rt_nil_check(F->args_836)).next)).next, &F->dv_2363, &F->dt_2366, &F->dc_2364, &F->ro_2365);
f_check_type_224(F->dt_2366, g_ty_int_931, F->line_837);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_2361), rt_str(", ", 2)), F->cmd_2362), rt_str(", &", 3)), (((P844)rt_nil_check(F->dv_2363))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_837, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_834), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_839) = F->t_839v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_842(P851 units_841) {
  struct f_translate_842fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_841 = units_841;
F->u_2367 = NULL;
F->u_2367 = F->units_841;
while ((F->u_2367 != NULL)) {
if (((*(P851)rt_nil_check(F->u_2367)).next == NULL)) {
{ R879 *cell2368 = rt_alloc(sizeof(R879));
(*cell2368).d = NULL;
(*cell2368).next = NULL;
g_caps_906 = cell2368;
}
(*(P878)rt_nil_check(g_caps_906)).d = F->u_2367;
(*(P878)rt_nil_check(g_caps_906)).depth = rt_r_ichk(g_depth_890);
f_declare_labels_482((*(P851)rt_nil_check(F->u_2367)).c);
f_declare_body_381((*(P851)rt_nil_check(F->u_2367)).c);
f_capsule_body_489((*(P851)rt_nil_check(F->u_2367)).c);
f_await_tasks_478((*(P851)rt_nil_check(F->u_2367)).c);
{
F->l_2369 = NULL;
F->l_2369 = F->units_841;
while ((F->l_2369 != F->u_2367)) {
{
F->w_2370 = rt_str_copy(f_waits_of_474(F->l_2369));
if ((((rt_int)((F->w_2370).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2370);
}
}
F->l_2369 = (*(P851)rt_nil_check(F->l_2369)).next;
}
}
f_close_fins_465(NULL);
if (rt_r_echk(g_uses_findyn_914)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_391(F->u_2367);
}
F->u_2367 = (*(P851)rt_nil_check(F->u_2367)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_843(void) {
  struct f_print_program_843fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_377();
if (rt_r_echk(g_uses_free_912)) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_894);
f_print_buffer_31(g_out_frames_910);
f_print_buffer_31(g_out_helpers_895);
f_print_buffer_31(g_out_protos_896);
f_print_buffer_31(g_out_globals_897);
f_print_buffer_31(g_out_funcs_898);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_911);
f_print_buffer_31(g_out_excs_900);
f_print_buffer_31(g_out_init_899);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R881(R881 *d, R881 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R881 cp_R881(R881 s) {
  R881 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R881(R881 a, R881 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R879(R879 *d, R879 s) {
  d->d = s.d;
  d->next = s.next;
  d->depth = s.depth;
}
static R879 cp_R879(R879 s) {
  R879 d = s;
  d.d = s.d;
  d.next = s.next;
  d.depth = s.depth;
  return d;
}
static int eq_R879(R879 a, R879 b) {
  return 1 && (a.d == b.d) && (a.next == b.next) && (a.depth == b.depth);
}
static void as_R877(R877 *d, R877 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R877 cp_R877(R877 s) {
  R877 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R877(R877 a, R877 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R875(R875 *d, R875 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R875 cp_R875(R875 s) {
  R875 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R875(R875 a, R875 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R873(R873 *d, R873 s) {
  d->t = s.t;
  d->next = s.next;
}
static R873 cp_R873(R873 s) {
  R873 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R873(R873 a, R873 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R871(R871 *d, R871 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
}
static R871 cp_R871(R871 s) {
  R871 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  return d;
}
static int eq_R871(R871 a, R871 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t);
}
static void as_R869(R869 *d, R869 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R869 cp_R869(R869 s) {
  R869 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R869(R869 a, R869 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A867(A867 *d, A867 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A867 cp_A867(A867 s) {
  A867 d = s; d.p = rt_alloc(sizeof(P861) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A867(A867 a, A867 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R864(R864 *d, R864 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R864 cp_R864(R864 s) {
  R864 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R864(R864 a, R864 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R862(R862 *d, R862 s) {
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
  d->tbinds = s.tbinds;
}
static R862 cp_R862(R862 s) {
  R862 d = s;
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
  d.tbinds = s.tbinds;
  return d;
}
static int eq_R862(R862 a, R862 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home) && (a.capn == b.capn) && (a.tbinds == b.tbinds);
}
static void as_R860(R860 *d, R860 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R860 cp_R860(R860 s) {
  R860 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R860(R860 a, R860 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R858(R858 *d, R858 s) {
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
static R858 cp_R858(R858 s) {
  R858 d = s;
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
static int eq_R858(R858 a, R858 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs);
}
static void as_R856(R856 *d, R856 s) {
  d->s = s.s;
  d->next = s.next;
}
static R856 cp_R856(R856 s) {
  R856 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R856(R856 a, R856 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R854(R854 *d, R854 s) {
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
static R854 cp_R854(R854 s) {
  R854 d = s;
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
static int eq_R854(R854 a, R854 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R852(R852 *d, R852 s) {
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
static R852 cp_R852(R852 s) {
  R852 d = s;
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
static int eq_R852(R852 a, R852 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A850(A850 *d, A850 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A850 cp_A850(A850 s) {
  A850 d = s; d.p = rt_alloc(sizeof(P846) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A850(A850 a, A850 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R847(R847 *d, R847 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R847 cp_R847(R847 s) {
  R847 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R847(R847 a, R847 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_882);
  RT_ROOT(g_ntoks_883);
  RT_ROOT(g_tpos_884);
  RT_ROOT(g_src_line_885);
  RT_ROOT(g_pending_prag_886);
  RT_ROOT(g_table_887);
  RT_ROOT(g_genv_888);
  RT_ROOT(g_all_insts_889);
  RT_ROOT(g_depth_890);
  RT_ROOT(g_scope_stack_891);
  RT_ROOT(g_all_types_892);
  RT_ROOT(g_serial_893);
  RT_ROOT(g_out_types_894);
  RT_ROOT(g_out_helpers_895);
  RT_ROOT(g_out_protos_896);
  RT_ROOT(g_out_globals_897);
  RT_ROOT(g_out_funcs_898);
  RT_ROOT(g_out_init_899);
  RT_ROOT(g_out_excs_900);
  RT_ROOT(g_code_901);
  RT_ROOT(g_fields_buf_902);
  RT_ROOT(g_in_func_903);
  RT_ROOT(g_cur_level_904);
  RT_ROOT(g_fctx_905);
  RT_ROOT(g_caps_906);
  RT_ROOT(g_cap_waits_907);
  RT_ROOT(g_psub_908);
  RT_ROOT(g_st_field_909);
  RT_ROOT(g_out_frames_910);
  RT_ROOT(g_out_roots_911);
  RT_ROOT(g_uses_free_912);
  RT_ROOT(g_fins_913);
  RT_ROOT(g_uses_findyn_914);
  RT_ROOT(g_func_sym_915);
  RT_ROOT(g_func_rc_916);
  RT_ROOT(g_cap_ret_917);
  RT_ROOT(g_cap_rflag_918);
  RT_ROOT(g_ret_frames_919);
  RT_ROOT(g_gdepth_920);
  RT_ROOT(g_suppress_921);
  RT_ROOT(g_cons_ctx_922);
  RT_ROOT(g_mark_uninit_923);
  RT_ROOT(g_exits_924);
  RT_ROOT(g_gotos_925);
  RT_ROOT(g_frames_926);
  RT_ROOT(g_handlers_927);
  RT_ROOT(g_cleanups_928);
  RT_ROOT(g_trial_929);
  RT_ROOT(g_mcopies_930);
  RT_ROOT(g_ty_int_931);
  RT_ROOT(g_ty_bool_932);
  RT_ROOT(g_ty_float_933);
  RT_ROOT(g_ty_ascii_934);
  RT_ROOT(g_ty_string_935);
  RT_ROOT(g_ty_void_936);
  RT_ROOT(g_ty_file_937);
  RT_ROOT(g_ty_nil_938);
  RT_ROOT(g_ty_lock_939);
  RT_ROOT(g_ty_latch_940);
  RT_ROOT(g_ty_act_941);
  RT_ROOT(g_file_mode_type_942);
  RT_ROOT(g_no_cons_943);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_882 = NULL;
g_ntoks_883 = RT_R_IUNDEF;
g_ntoks_883 = ((rt_int)0LL);
g_tpos_884 = RT_R_IUNDEF;
g_tpos_884 = ((rt_int)1LL);
g_src_line_885 = RT_R_IUNDEF;
g_src_line_885 = ((rt_int)0LL);
g_pending_prag_886 = NULL;
g_table_887 = NULL;
g_genv_888 = NULL;
g_all_insts_889 = NULL;
g_depth_890 = RT_R_IUNDEF;
g_depth_890 = ((rt_int)0LL);
g_scope_stack_891 = NULL;
g_all_types_892 = NULL;
g_serial_893 = RT_R_IUNDEF;
g_serial_893 = ((rt_int)0LL);
g_out_types_894 = NULL;
g_out_helpers_895 = NULL;
g_out_protos_896 = NULL;
g_out_globals_897 = NULL;
g_out_funcs_898 = NULL;
g_out_init_899 = NULL;
g_out_excs_900 = NULL;
g_code_901 = NULL;
g_fields_buf_902 = NULL;
g_in_func_903 = RT_R_EUNDEF;
g_in_func_903 = 0;
g_cur_level_904 = RT_R_IUNDEF;
g_cur_level_904 = ((rt_int)0LL);
g_fctx_905 = NULL;
g_caps_906 = NULL;
g_cap_waits_907 = NULL;
g_psub_908 = NULL;
g_st_field_909 = NULL;
g_out_frames_910 = NULL;
g_out_roots_911 = NULL;
g_uses_free_912 = RT_R_EUNDEF;
g_uses_free_912 = 0;
g_fins_913 = NULL;
g_uses_findyn_914 = RT_R_EUNDEF;
g_uses_findyn_914 = 0;
g_func_sym_915 = NULL;
g_func_rc_916 = NULL;
g_cap_ret_917 = NULL;
g_cap_rflag_918 = NULL;
g_ret_frames_919 = RT_R_IUNDEF;
g_ret_frames_919 = ((rt_int)0LL);
g_gdepth_920 = RT_R_IUNDEF;
g_gdepth_920 = ((rt_int)0LL);
g_suppress_921 = NULL;
g_cons_ctx_922 = NULL;
g_mark_uninit_923 = RT_R_EUNDEF;
g_mark_uninit_923 = 0;
g_exits_924 = NULL;
g_gotos_925 = NULL;
g_frames_926 = RT_R_IUNDEF;
g_frames_926 = ((rt_int)0LL);
g_handlers_927 = NULL;
g_cleanups_928 = NULL;
g_trial_929 = RT_R_IUNDEF;
g_trial_929 = ((rt_int)0LL);
g_mcopies_930 = NULL;
g_ty_int_931 = NULL;
g_ty_bool_932 = NULL;
g_ty_float_933 = NULL;
g_ty_ascii_934 = NULL;
g_ty_string_935 = NULL;
g_ty_void_936 = NULL;
g_ty_file_937 = NULL;
g_ty_nil_938 = NULL;
g_ty_lock_939 = NULL;
g_ty_latch_940 = NULL;
g_ty_act_941 = NULL;
g_file_mode_type_942 = NULL;
g_no_cons_943 = NULL;
{ P848 cell2371 = rt_alloc(sizeof *cell2371);
rt_int pv2372 = ((rt_int)1000000LL);
cell2371->p_n = pv2372;
cell2371->all.lo = ((rt_int)1LL); cell2371->all.hi = pv2372;
cell2371->all.lo2 = cell2371->all.hi2 = 1;
cell2371->all.p = rt_alloc(sizeof(P846) * (size_t)(RT_CNT(cell2371->all)) + 1);
for (rt_int i2373 = 0; i2373 < (RT_CNT(cell2371->all)); i2373++) {
cell2371->all.p[i2373] = NULL;
}
g_toks_882 = cell2371;
}
{ P865 cell2374 = rt_alloc(sizeof *cell2374);
rt_int pv2375 = (((rt_int)4093LL));
cell2374->p_n = pv2375;
cell2374->all.lo = ((rt_int)0LL); cell2374->all.hi = pv2375;
cell2374->all.lo2 = cell2374->all.hi2 = 1;
cell2374->all.p = rt_alloc(sizeof(P861) * (size_t)(RT_CNT(cell2374->all)) + 1);
for (rt_int i2376 = 0; i2376 < (RT_CNT(cell2374->all)); i2376++) {
cell2374->all.p[i2376] = NULL;
}
g_table_887 = cell2374;
}
g_out_types_894 = f_new_buffer_24();
g_out_helpers_895 = f_new_buffer_24();
g_out_protos_896 = f_new_buffer_24();
g_out_globals_897 = f_new_buffer_24();
g_out_funcs_898 = f_new_buffer_24();
g_out_init_899 = f_new_buffer_24();
g_out_excs_900 = f_new_buffer_24();
g_out_frames_910 = f_new_buffer_24();
g_out_roots_911 = f_new_buffer_24();
g_code_901 = g_out_init_899;
g_no_cons_943 = f_new_cons_176();
g_ty_int_931 = f_new_typ_175((((rt_int)1LL)));
g_ty_bool_932 = f_new_typ_175((((rt_int)2LL)));
g_ty_float_933 = f_new_typ_175((((rt_int)3LL)));
g_ty_string_935 = f_new_typ_175((((rt_int)5LL)));
g_ty_void_936 = f_new_typ_175((((rt_int)9LL)));
g_ty_file_937 = f_new_typ_175((((rt_int)10LL)));
g_ty_nil_938 = f_new_typ_175((((rt_int)11LL)));
g_ty_lock_939 = f_new_typ_175((((rt_int)13LL)));
g_ty_latch_940 = f_new_typ_175((((rt_int)13LL)));
g_ty_act_941 = f_new_typ_175((((rt_int)14LL)));
{ rt_frame xf2377;
if (RT_TRY(xf2377)) {
f_init_ascii_251();
f_read_source_58();
f_translate_842(f_program_151());
f_print_program_843();
RT_POP(xf2377);
} else {
RT_POP(xf2377);
int x2378 = rt_xcur;
if (0 || x2378 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2378);
}
}
}
  rt_main_done();
  return 0;
}
