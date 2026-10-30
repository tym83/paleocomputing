#include "paleo.h"
#include <math.h>
typedef struct Pc883 *P882;
typedef struct R885 R885;
typedef struct R885 *P884;
struct R885 {  rt_int kind; rt_int line; rt_int ival; P882 s; P882 prags;  };
typedef struct Pc887 *P886;
typedef struct A888 A888;
struct A888 { rt_int lo, hi, lo2, hi2; P884 *p; };
typedef struct R890 R890;
typedef struct R890 *P889;
struct R890 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P882 name; P882 tag; P882 prags; P889 labels; P889 a; P889 b; P889 c; P889 d; P889 e; P889 next;  };
typedef struct R892 R892;
typedef struct R892 *P891;
typedef struct R894 R894;
typedef struct R894 *P893;
struct R894 {  P882 s; P893 next;  };
struct R892 {  P882 lo; P882 hi; P882 lo2; P882 hi2; P882 slen; rt_int mlo; rt_int mhi; int hasm; P889 args; int dyn; rt_int lvl; P882 prec; P893 bnds;  };
typedef struct R896 R896;
typedef struct R896 *P895;
typedef struct R898 R898;
typedef struct R898 *P897;
struct R898 {  P882 name; P895 t; P891 c; P889 st; P897 next;  };
typedef struct R900 R900;
typedef struct R900 *P899;
typedef struct R902 R902;
typedef struct R902 *P901;
struct R902 {  P882 name; rt_int mode; P895 t; P891 c; P882 cfield; P901 next;  };
typedef struct Pc904 *P903;
typedef struct A905 A905;
struct A905 { rt_int lo, hi, lo2, hi2; P899 *p; };
typedef struct R907 R907;
typedef struct R907 *P906;
struct R907 {  rt_int depth; P889 imps; int all_imp; P906 next;  };
typedef struct R909 R909;
typedef struct R909 *P908;
struct R909 {  rt_int kind; rt_int i; P882 s; P895 t;  };
struct R900 {  rt_int kind; P882 name; P895 t; P891 c; P882 access; P882 cname; int ro_flag; rt_int mvalue; int hasmv; P889 st; P889 decl; P901 params; P895 result; rt_int depth; rt_int level; int byref; P899 members; P899 mnext; P889 binds; P899 insts; P903 env; P899 chain; P899 stack; P899 owner; P906 gctx; P908 mv; P893 reqs; int reqdone; P889 home; P889 capn; P899 tbinds;  };
typedef struct R911 R911;
typedef struct R911 *P910;
struct R911 {  P895 t; P910 next;  };
struct R896 {  rt_int kind; P882 name; P889 lits; P895 elem; P895 idx; P895 idx2; P891 elemcons; P889 elemst; P895 under; P889 tparams; P889 ocap; P897 fields; P895 target; P889 decl; P882 cname; int forward; int defined; int helpers; P899 initp; P899 finalp; P899 tpsyms; P899 gen; P899 gbinds; P895 next; rt_int ndim; P910 idxs; P899 assignp; P899 eqp; P899 ltp;  };
typedef struct R913 R913;
typedef struct R913 *P912;
struct R913 {  P893 head; P893 tail;  };
typedef struct R915 R915;
typedef struct R915 *P914;
struct R915 {  P882 match; P882 label; rt_int depth; P914 next;  };
typedef struct R917 R917;
typedef struct R917 *P916;
struct R917 {  P889 d; P916 next; rt_int depth;  };
typedef struct R919 R919;
typedef struct R919 *P918;
struct R919 {  P889 d; P882 w; P918 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P882 result_;
 P882 t_982;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_985;
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
 rstr r_986;
 rt_int i_987;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_991;
 rstr w_992;
 rt_int i_993;
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
 P912 result_;
 P912 b_997;
};
struct f_put_27fr { int dummy;
 P912 b_25;
 rstr *s_26;
 P893 l_999;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P912 b_30;
 P893 l_1001;
};
struct f_splice_34fr { int dummy;
 P912 a_32;
 P912 b_33;
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
 P884 t_1003;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_1005;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_1006;
 rt_int k_1007;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_1011;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_1012;
 P882 r_1013;
 int more_1014;
 rt_int k_1015;
 int go_1016;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_1017;
 rt_int k_1018;
 rstr p_1019;
 int ok_1020;
 int known_1021;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_1022;
 rt_int j_1023;
 rt_int n_1024;
 int c_1025;
 rstr w_1026;
 rt_int k_1027;
 rstr w_1031;
 rt_int k_1032;
 rstr two_1036;
};
struct f_read_source_58fr { int dummy;
 rstr line_1037;
};
struct f_nn_61fr { int dummy;
 rt_int kind_59;
 rt_int line_60;
 P889 result_;
 P889 x_1038;
};
struct f_append_65fr { int dummy;
 P889 *head_62;
 P889 *tail_63;
 P889 x_64;
};
struct f_list_len_67fr { int dummy;
 P889 l_66;
 rt_int result_;
 rt_int n_1040;
 P889 p_1041;
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
 P882 result_;
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
 P882 result_;
};
struct f_name_node_90fr { int dummy;
 P889 result_;
 P889 x_1042;
};
struct f_id_list_91fr { int dummy;
 P889 result_;
 P889 head_1043;
 P889 tail_1044;
};
struct f_p_subtype_92fr { int dummy;
 P889 result_;
 rt_int line_1045;
 P889 x_1046;
 rstr w_1047;
 P889 head_1048;
 P889 tail_1049;
 P889 head_1050;
 P889 tail_1051;
 int more_1052;
 P889 names_1053;
 P889 st_1054;
 P889 cmp_1055;
 P889 head_1056;
 P889 tail_1057;
 int more_1058;
 P889 lit_1059;
};
struct f_constraint_list_93fr { int dummy;
 P889 result_;
 P889 head_1060;
 P889 tail_1061;
 int more_1062;
 rt_int line_1063;
 P889 lo_1064;
 P889 r_1065;
};
struct f_actual_params_94fr { int dummy;
 P889 result_;
 P889 head_1066;
 P889 tail_1067;
};
struct f_is_type_word_96fr { int dummy;
 rstr *w_95;
 int result_;
};
struct f_actual_tt_97fr { int dummy;
 P889 result_;
 P889 head_1068;
 P889 tail_1069;
 int more_1070;
};
struct f_binop_102fr { int dummy;
 P882 op_98;
 P889 l_99;
 P889 r_100;
 rt_int line_101;
 P889 result_;
 P889 x_1071;
};
struct f_expr_103fr { int dummy;
 P889 result_;
 P889 l_1072;
 P882 op_1073;
 rt_int line_1074;
};
struct f_expr_and_104fr { int dummy;
 P889 result_;
 P889 l_1075;
 rt_int line_1076;
};
struct f_expr_not_105fr { int dummy;
 P889 result_;
 P889 x_1077;
};
struct f_is_rel_107fr { int dummy;
 rstr *s_106;
 int result_;
};
struct f_expr_rel_108fr { int dummy;
 P889 result_;
 P889 l_1078;
 P882 op_1079;
 rt_int line_1080;
};
struct f_expr_add_109fr { int dummy;
 P889 result_;
 P889 l_1081;
 P882 op_1082;
 rt_int line_1083;
};
struct f_expr_mul_110fr { int dummy;
 P889 result_;
 P889 l_1084;
 P882 op_1085;
 rt_int line_1086;
};
struct f_expr_pow_111fr { int dummy;
 P889 result_;
 P889 l_1087;
 rt_int line_1088;
};
struct f_expr_prefix_112fr { int dummy;
 P889 result_;
 P889 x_1089;
};
struct f_postfix_113fr { int dummy;
 P889 result_;
 P889 p_1090;
 rt_int line_1091;
 P889 x_1092;
 P889 head_1093;
 P889 tail_1094;
 int more_1095;
 P889 lo_1096;
 P889 r_1097;
 P889 x_1098;
 P889 x_1099;
 P889 x_1100;
};
struct f_primary_114fr { int dummy;
 P889 result_;
 rt_int line_1101;
 P889 x_1102;
 rt_int k_1103;
 rstr w_1104;
 P889 head_1105;
 P889 tail_1106;
 int more_1107;
};
struct f_constructor_item_115fr { int dummy;
 P889 result_;
 rt_int line_1108;
 P889 it_1109;
 P889 first_1110;
 P889 keys_1111;
 P889 ktail_1112;
 P889 lab_1113;
 rt_int save_1114;
 P889 more_1115;
 P889 tail2_1116;
 int ok_1117;
 int go_1118;
 P889 l2_1119;
};
struct f_at_body_end_116fr { int dummy;
 int result_;
};
struct f_body_117fr { int dummy;
 P889 result_;
 P889 head_1120;
 P889 tail_1121;
 int stmts_1122;
 P889 after_1123;
 P889 x_1124;
};
struct f_body_element_118fr { int dummy;
 P889 result_;
 P889 x_1125;
 P882 pr_1126;
 P889 p_1127;
};
struct f_declaration_119fr { int dummy;
 P889 result_;
 rt_int line_1128;
 P889 head_1129;
 P889 tail_1130;
 P889 names_1131;
 P889 x_1132;
};
struct f_object_decl_120fr { int dummy;
 P889 result_;
 rt_int line_1133;
 int is_var_1134;
 P889 names_1135;
 P889 st_1136;
 P889 init_1137;
 P889 loc_1138;
 rt_int loc_kind_1139;
 P889 head_1140;
 P889 tail_1141;
 P889 x_1142;
};
struct f_abbrev_decl_121fr { int dummy;
 P889 result_;
 P889 x_1143;
};
struct f_skip_rep_122fr { int dummy;
 rt_int depth_1144;
};
struct f_type_decl_123fr { int dummy;
 P889 result_;
 rt_int line_1145;
 P882 name_1146;
 P889 params_1147;
 P889 x_1148;
 P889 tts_1149;
};
struct f_mode_of_125fr { int dummy;
 rstr *w_124;
 rt_int result_;
};
struct f_formal_params_126fr { int dummy;
 P889 result_;
 P889 head_1150;
 P889 tail_1151;
 int more_1152;
 rt_int mode_1153;
 P889 names_1154;
 P889 ntail_1155;
 P889 st_1156;
 P889 p_1157;
};
struct f_imports_list_128fr { int dummy;
 P889 owner_127;
 int result_;
 P889 head_1158;
 P889 tail_1159;
 int more_1160;
 int ro_1161;
 P889 x_1162;
};
struct f_is_definable_130fr { int dummy;
 rstr *w_129;
 int result_;
};
struct f_definable_name_131fr { int dummy;
 P882 result_;
 P882 r_1163;
};
struct f_subprogram_decl_132fr { int dummy;
 P889 result_;
 rt_int line_1164;
 P889 x_1165;
 int is_abn_1166;
 int is_func_1167;
 int dummy_1168;
};
struct f_capsule_decl_133fr { int dummy;
 P889 result_;
 P889 x_1169;
 int dummy_1170;
 P889 head_1171;
 P889 tail_1172;
 int more_1173;
 P889 n_1174;
};
struct f_formal_tt_134fr { int dummy;
 P889 result_;
 P889 head_1175;
 P889 tail_1176;
 int more_1177;
};
struct f_generic_decl_135fr { int dummy;
 P889 result_;
 P889 x_1178;
 P889 head_1179;
 P889 tail_1180;
 int more_1181;
 P889 names_1182;
 rt_int kind_1183;
 P889 st_1184;
 P889 items_1185;
 P889 p_1186;
 P889 nhead_1187;
 P889 ntail_1188;
 P889 it_1189;
};
struct f_type_list_136fr { int dummy;
 P889 result_;
 P889 head_1190;
 P889 tail_1191;
 int more_1192;
 P889 n_1193;
};
struct f_task_decl_137fr { int dummy;
 P889 result_;
 P889 x_1194;
 int dummy_1195;
};
struct f_expose_decl_138fr { int dummy;
 P889 result_;
 P889 x_1196;
 P889 head_1197;
 P889 tail_1198;
 int more_1199;
 P889 n_1200;
 P889 head_1201;
 P889 tail_1202;
 int more_1203;
 P889 n_1204;
 P889 tgt_1205;
};
struct f_is_compound_kw_140fr { int dummy;
 rstr *w_139;
 int result_;
};
struct f_statement_141fr { int dummy;
 P889 result_;
 P889 labels_1206;
 P889 ltail_1207;
 P882 match_1208;
 P889 s_1209;
};
struct f_unlabeled_statement_142fr { int dummy;
 P889 result_;
 rt_int line_1210;
 P889 x_1211;
 P889 head_1212;
 P889 tail_1213;
 P889 invs_1214;
 P889 itail_1215;
 int more_1216;
 P889 target_1217;
};
struct f_arm_146fr { int dummy;
 P889 cond_143;
 P889 b_144;
 rt_int line_145;
 P889 result_;
 P889 x_1218;
};
struct f_if_stmt_147fr { int dummy;
 P889 result_;
 P889 x_1219;
 P889 head_1220;
 P889 tail_1221;
 P889 cond_1222;
 int go_1223;
};
struct f_case_stmt_148fr { int dummy;
 P889 result_;
 P889 x_1224;
 P889 head_1225;
 P889 tail_1226;
 P889 labs_1227;
 P889 ltail_1228;
 int more_1229;
 P889 l_1230;
};
struct f_repeat_stmt_149fr { int dummy;
 P889 result_;
 P889 x_1231;
};
struct f_guard_stmt_150fr { int dummy;
 P889 result_;
 P889 x_1232;
 P889 head_1233;
 P889 tail_1234;
 P889 h_1235;
};
struct f_program_151fr { int dummy;
 P889 result_;
 P889 head_1236;
 P889 tail_1237;
 P882 pr_1238;
 P889 u_1239;
};
struct f_hash_153fr { int dummy;
 rstr *s_152;
 rt_int result_;
 rt_int h_1240;
 rt_int i_1241;
};
struct f_lookup_155fr { int dummy;
 rstr *name_154;
 P899 result_;
 P899 y_1245;
};
struct f_lookup_decl_157fr { int dummy;
 P889 d_156;
 P899 result_;
 P899 y_1246;
};
struct f_define_160fr { int dummy;
 P899 y_158;
 rt_int line_159;
 rt_int h_1247;
 P899 z_1248;
};
struct f_overloadable_162fr { int dummy;
 P899 y_161;
 int result_;
};
struct f_same_tt_165fr { int dummy;
 P889 a_163;
 P889 b_164;
 int result_;
 P889 x_1249;
 P889 y_1250;
};
struct f_same_signature_168fr { int dummy;
 P901 a_166;
 P901 b_167;
 int result_;
 P901 x_1251;
 P901 y_1252;
};
struct f_open_scope_169fr { int dummy;
};
struct f_close_scope_170fr { int dummy;
};
struct f_new_sym_173fr { int dummy;
 rt_int kind_171;
 P882 name_172;
 P899 result_;
 P899 y_1253;
};
struct f_new_typ_175fr { int dummy;
 rt_int kind_174;
 P895 result_;
 P895 t_1255;
};
struct f_new_cons_176fr { int dummy;
 P891 result_;
 P891 c_1257;
};
struct f_scalar_kind_178fr { int dummy;
 P895 t_177;
 int result_;
};
struct f_bound_ctype_180fr { int dummy;
 P895 t_179;
 rstr result_;
};
struct f_cbound_183fr { int dummy;
 P891 c_181;
 rstr *b_182;
 rstr result_;
 P882 p_1259;
 rt_int i_1260;
};
struct f_clo_185fr { int dummy;
 P891 c_184;
 rstr result_;
};
struct f_chi_187fr { int dummy;
 P891 c_186;
 rstr result_;
};
struct f_sub_lo_190fr { int dummy;
 P895 t_188;
 P891 c_189;
 rstr result_;
};
struct f_sub_hi_193fr { int dummy;
 P895 t_191;
 P891 c_192;
 rstr result_;
};
struct f_raw_storage_196fr { int dummy;
 rstr *name_194;
 rstr *ct_195;
 rstr result_;
 rstr g_1264;
 rstr f_1265;
};
struct f_copy_cons_198fr { int dummy;
 P891 c_197;
 P891 result_;
 P891 r_1266;
};
struct f_freeze_201fr { int dummy;
 P891 c_199;
 P895 t_200;
 P891 result_;
 P891 r_1268;
 P882 saved_field_1269;
 rstr ct_1270;
 rstr la_1271;
 rstr lf_1272;
 rstr ha_1273;
 rstr hf_1274;
};
struct f_checked_205fr { int dummy;
 P895 t_202;
 P891 c_203;
 rstr *v_204;
 rstr result_;
};
struct f_same_lits_208fr { int dummy;
 P889 a_206;
 P889 b_207;
 int result_;
 P889 x_1275;
 P889 y_1276;
};
struct f_str_elem_210fr { int dummy;
 P895 t_209;
 P895 result_;
};
struct f_same_213fr { int dummy;
 P895 a_211;
 P895 b_212;
 int result_;
 P910 x_1277;
 P910 y_1278;
 P897 f_1279;
 P897 g_1280;
};
struct f_base_of_215fr { int dummy;
 P895 t_214;
 P895 result_;
};
struct f_base_cons_218fr { int dummy;
 P895 t_216;
 P891 c_217;
 P891 result_;
};
struct f_kind_name_220fr { int dummy;
 P895 t_219;
 rstr result_;
};
struct f_check_type_224fr { int dummy;
 P895 got_221;
 P895 want_222;
 rt_int line_223;
};
struct f_ctype_226fr { int dummy;
 P895 t_225;
 rstr result_;
};
struct f_struct_body_228fr { int dummy;
 P895 t_227;
 rstr result_;
};
struct f_field_decls_230fr { int dummy;
 P895 t_229;
 rstr result_;
 P897 f_1283;
 P882 s_1284;
};
struct f_declare_ctype_232fr { int dummy;
 P895 t_231;
 P895 u_1285;
 P889 p_1286;
 P882 fs_1287;
 rstr sn_1288;
 P891 pc_1289;
 P895 target_1290;
 P889 p_1291;
 P882 fs_1292;
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
 P895 t_237;
 rstr result_;
 P882 r_1293;
 rt_int k_1294;
};
struct f_acnt_241fr { int dummy;
 P895 t_239;
 rstr *base_240;
 rstr result_;
 P882 r_1298;
 rt_int k_1299;
};
struct f_cons_lo_244fr { int dummy;
 P891 c_242;
 rt_int k_243;
 P882 result_;
 P893 l_1303;
 rt_int i_1304;
};
struct f_cons_hi_247fr { int dummy;
 P891 c_245;
 rt_int k_246;
 P882 result_;
 P893 l_1308;
 rt_int i_1309;
};
struct f_idx_type_250fr { int dummy;
 P895 t_248;
 rt_int k_249;
 P895 result_;
 P910 l_1313;
 rt_int i_1314;
};
struct f_init_ascii_251fr { int dummy;
 P889 head_1318;
 P889 tail_1319;
 rt_int start_1320;
 rt_int i_1321;
 P889 lit_1325;
 P889 h2_1326;
 P889 t2_1327;
 P889 l1_1328;
 P889 l2_1329;
 P889 l3_1330;
};
struct f_lit_index_254fr { int dummy;
 P889 lits_252;
 rstr *name_253;
 rt_int result_;
 rt_int i_1331;
 P889 l_1332;
};
struct f_resolve_subtype_257fr { int dummy;
 P889 st_255;
 P891 *c_256;
 P891 c_256v;
 P895 result_;
 P895 t_1333;
 int ok_1334;
 P895 dummy_1335;
 P895 et_1337;
 P891 ec_1338;
 P895 et_1339;
 P889 ix_1340;
 rt_int k_1341;
 P910 tail_1342;
 P893 btail_1343;
 P891 ic_1344;
 P895 it_1345;
 P882 lo_1346;
 P882 hi_1347;
 P910 tl_1348;
 P893 l1_1350;
 P893 l2_1351;
 P891 ec_1354;
 P889 comp_1355;
 P897 tail_1356;
 P891 cc_1357;
 P897 f_1358;
 P889 lits_1360;
 P889 ltail_1361;
 P897 f_1362;
 P889 l_1363;
 P889 gt_1364;
 P891 ec_1365;
 P882 base_1366;
};
struct f_float_lit_259fr { int dummy;
 P889 e_258;
 int result_;
};
struct f_tag_constraint_263fr { int dummy;
 P895 t_260;
 P889 e_261;
 P891 c_262;
 P895 dummy_1367;
};
struct f_named_subtype_266fr { int dummy;
 P889 st_264;
 P891 *c_265;
 P891 c_265v;
 P895 result_;
 P895 t_1368;
 P899 y_1369;
 rstr name_1370;
 P899 binds_1371;
 P903 saved_env_1372;
 rt_int saved_gdepth_1373;
 P899 nb_1374;
};
struct f_invoke_abbrev_270fr { int dummy;
 P899 y_267;
 P889 st_268;
 P891 *c_269;
 P891 c_269v;
 P895 result_;
 P889 p_1375;
 P889 a_1376;
 P895 t_1377;
 P899 z_1378;
 P891 pc_1379;
 P895 at_1380;
 int ok_1381;
};
struct f_apply_constraint_275fr { int dummy;
 P895 t_271;
 P889 args_272;
 P891 c_273;
 rt_int line_274;
 P895 dummy_1382;
 int ok_1383;
};
struct f_value_subtype_279fr { int dummy;
 P889 e_276;
 P891 *c_277;
 P891 c_277v;
 P882 *base_278;
 P882 base_278v;
 P895 result_;
 P895 t_1384;
 P891 c0_1385;
 int ro_1386;
 rt_int k_1387;
 rstr lo_1391;
 rstr hi_1392;
 P893 l1_1393;
 P893 l2_1394;
 P889 p_1397;
 P889 head_1398;
 P889 tail_1399;
 P889 sel_1400;
};
struct f_reverse_pairs_281fr { int dummy;
 P893 l_280;
 P893 result_;
 P893 r_1401;
 P893 p_1402;
 P893 a_1403;
 P893 b_1404;
};
struct f_inquiry_284fr { int dummy;
 P889 st_282;
 P891 *c_283;
 P891 c_283v;
 P895 result_;
 P882 base_1405;
 P895 t_1406;
 rstr name_1407;
 P889 sub_1408;
 P891 c2_1409;
 rt_int k_1410;
 int ok_1411;
 P891 ac_1412;
};
struct f_as_subtype_286fr { int dummy;
 P889 e_285;
 P889 result_;
 P889 st_1413;
 rstr name_1414;
 P899 y_1415;
};
struct f_tt_subtype_291fr { int dummy;
 P882 name_287;
 P889 tt_288;
 P889 args_289;
 rt_int line_290;
 P889 result_;
 P889 st_1416;
};
struct f_type_name_293fr { int dummy;
 rstr *name_292;
 int result_;
 P899 y_1417;
};
struct f_empty_set_295fr { int dummy;
 P895 t_294;
 rstr result_;
};
struct f_opened_297fr { int dummy;
 P895 t_296;
 int result_;
 P916 c_1418;
};
struct f_replace_all_301fr { int dummy;
 rstr *s_298;
 rstr *pat_299;
 rstr *r_300;
 rstr result_;
 rt_int i_1419;
};
struct f_subst_303fr { int dummy;
 rstr *s_302;
 rstr result_;
 P893 l_1420;
 P882 r_1421;
};
struct f_new_type_307fr { int dummy;
 P899 y_304;
 P889 st_305;
 P891 *c_306;
 P891 c_306v;
 P895 result_;
 P889 d_1422;
 P889 p_1423;
 P891 uc_1424;
 P899 z_1425;
 P891 zc_1426;
};
struct f_init_storage_311fr { int dummy;
 rstr *lval_308;
 P895 t_309;
 P891 c_310;
};
struct f_init_call_314fr { int dummy;
 P899 y_312;
 rstr *lval_313;
 rstr result_;
 P882 link_1427;
 rt_int i_1428;
};
struct f_needs_fin_316fr { int dummy;
 P895 t_315;
 int result_;
 P897 f_1432;
};
struct f_fin_code_319fr { int dummy;
 rstr *lval_317;
 P895 t_318;
 rstr result_;
 P882 r_1433;
 rstr i_1434;
 P897 f_1435;
 P897 f_1436;
 rt_int i_1437;
};
struct f_tparam_type_322fr { int dummy;
 P895 t_320;
 rstr *name_321;
 P895 result_;
 P899 z_1438;
};
struct f_make_storage_326fr { int dummy;
 rstr *lval_323;
 P895 t_324;
 P891 c_325;
 P889 p_1439;
 P889 a_1440;
 P891 uc_1441;
 P895 ut_1442;
 P895 at_1443;
 P895 pt_1444;
 rstr v_1445;
 P893 saved_1446;
 P893 l1_1447;
 P893 l2_1448;
 rt_int k_1451;
 rstr i_1455;
 P897 f_1456;
 P897 f_1457;
 rt_int i_1458;
};
struct f_uninit_value_328fr { int dummy;
 P895 t_327;
 rstr result_;
};
struct f_init_chk_331fr { int dummy;
 P895 t_329;
 rstr *v_330;
 rstr result_;
 P895 b_1462;
};
struct f_manifest_334fr { int dummy;
 P889 e_332;
 int *ok_333;
 int ok_333v;
 rt_int result_;
 P908 v_1463;
};
struct f_mk_mval_337fr { int dummy;
 rt_int kind_335;
 rt_int i_336;
 P908 result_;
 P908 v_1464;
};
struct f_ipow_340fr { int dummy;
 rt_int a_338;
 rt_int b_339;
 rt_int result_;
 rt_int r_1466;
 rt_int i_1467;
};
struct f_meval_343fr { int dummy;
 P889 e_341;
 int *ok_342;
 int ok_342v;
 P908 result_;
 P908 a_1471;
 P908 b_1472;
 int ok2_1473;
 P882 op_1474;
 P899 y_1475;
 P908 r_1476;
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
 P908 v_348;
 rstr result_;
};
struct f_ascii_char_351fr { int dummy;
 rt_int i_350;
 int result_;
 rstr printable_1477;
};
struct f_user_defined_353fr { int dummy;
 rstr *op_352;
 int result_;
 P899 y_1478;
};
struct f_mcopy_355fr { int dummy;
 P895 t_354;
 rstr result_;
 rstr ct_1479;
 rstr name_1480;
 P893 l_1481;
};
struct f_composite_357fr { int dummy;
 P895 t_356;
 int result_;
};
struct f_user_call2_363fr { int dummy;
 P899 y_358;
 rstr *a_359;
 int lv_a_360;
 rstr *b_361;
 int lv_b_362;
 rstr result_;
 P882 args_1483;
 rt_int i_1484;
};
struct f_user_arg_367fr { int dummy;
 P901 pm_364;
 rstr *v_365;
 int lv_366;
 rstr result_;
 rstr ct_1488;
};
struct f_top_level_369fr { int dummy;
 P899 y_368;
 int result_;
};
struct f_assign_code_374fr { int dummy;
 rstr *lval_370;
 P895 t_371;
 rstr *v_372;
 P891 c_373;
 rstr result_;
};
struct f_copy_code_377fr { int dummy;
 P895 t_375;
 rstr *v_376;
 rstr result_;
};
struct f_eq_code_381fr { int dummy;
 P895 t_378;
 rstr *a_379;
 rstr *b_380;
 rstr result_;
};
struct f_elem_assign_385fr { int dummy;
 rstr *lval_382;
 P895 t_383;
 rstr *v_384;
 rstr result_;
};
struct f_seen_name_388fr { int dummy;
 P893 l_386;
 rstr *s_387;
 int result_;
 P893 p_1489;
};
struct f_emit_helpers_389fr { int dummy;
 P895 order_1490;
 P895 t_1491;
 P893 done_1492;
 P893 l_1493;
 rstr c_1494;
};
struct f_helper_bodies_391fr { int dummy;
 P895 t_390;
 rstr c_1496;
 P912 b_1497;
 P895 e_1498;
 P882 sizes_1499;
 P882 bounds_1500;
 rt_int k_1501;
 rstr l_1505;
 rstr h_1506;
 P893 saved_1507;
 P889 p_1508;
 P893 l1_1509;
 P893 l2_1510;
 P897 f_1513;
 rt_int i_1514;
 P882 cases_as_1515;
 P882 cases_cp_1516;
 P882 cases_eq_1517;
 rstr fn_1518;
 P897 f_1519;
 P882 conds_1520;
 rstr fn_1521;
 rstr fn_1522;
};
struct f_declare_body_393fr { int dummy;
 P889 elems_392;
 P889 e_1523;
 P899 g_1524;
 P899 y_1525;
 P899 y_1526;
 P899 y_1527;
 P895 t_1528;
 P899 y_1529;
 P899 y_1530;
 P903 snap_1531;
 rt_int i_1535;
 P899 g_1539;
 P899 y_1540;
 P899 y_1541;
};
struct f_manifest_const_395fr { int dummy;
 P889 d_394;
 int ok_1542;
 P908 v_1543;
 P899 y_1544;
 P895 t_1545;
 P882 ctext_1546;
 P912 saved_1547;
};
struct f_exported_399fr { int dummy;
 P889 d_396;
 rstr *name_397;
 int *ro_398;
 int ro_398v;
 int result_;
 P889 p_1550;
};
struct f_copy_sym_401fr { int dummy;
 P899 y_400;
 P899 result_;
 P899 z_1551;
};
struct f_gen_capsule_403fr { int dummy;
 P889 d_402;
 P899 y_1553;
 P882 saved_1554;
 P889 p_1555;
 P901 tail_1556;
 P901 pm_1557;
};
struct f_capsule_params_407fr { int dummy;
 P889 d_404;
 P889 args_405;
 rt_int line_406;
 P889 p_1559;
 P889 a_1560;
 P895 t_1561;
 P895 vt_1562;
 P891 c_1563;
 P882 lv_1564;
 P891 lc_1565;
 int ro_1566;
 P899 y_1567;
 rstr f_1568;
 rstr g_1569;
 P899 y_1570;
 rstr v_1571;
 rstr access_1572;
};
struct f_elaborate_capsule_412fr { int dummy;
 P889 d_408;
 P899 y_409;
 P889 args_410;
 P889 owner_411;
 P916 cr_1573;
 P906 ctx_1574;
 P914 saved_gotos_1575;
 P899 m_1576;
 P889 p_1577;
 int ro_1578;
 P918 w_1581;
 P899 z_1583;
};
struct f_exports_op_415fr { int dummy;
 P889 d_413;
 rstr *op_414;
 int result_;
 P889 p_1584;
};
struct f_renamed_418fr { int dummy;
 P889 d_416;
 P899 z_417;
 P882 result_;
 P889 r_1585;
};
struct f_pick_capsule_420fr { int dummy;
 P889 d_419;
 P899 result_;
 P899 y_1586;
 P899 first_1587;
 P899 fit_1588;
 rt_int n_1589;
};
struct f_capsule_instance_423fr { int dummy;
 P899 g_421;
 P889 d_422;
 P899 result_;
 P889 gd_1590;
 P889 pat_1591;
 P899 binds_1592;
 P899 inst_1593;
 P903 saved_env_1594;
 rt_int saved_gdepth_1595;
 P899 b_1596;
};
struct f_gen_expose_425fr { int dummy;
 P889 d_424;
 P899 y_1597;
 P899 m_1598;
 P889 p_1599;
 P889 r_1600;
 P899 inst_1601;
 int found_1602;
 P899 z_1603;
 int found_1604;
 P899 z_1605;
};
struct f_finish_ptr_427fr { int dummy;
 P895 t_426;
 P889 d_1606;
 P889 p_1607;
 P891 c_1608;
 rstr dummy_1609;
 rt_int pass_1610;
 P899 y_1614;
 P891 pc_1615;
};
struct f_ptr_args_429fr { int dummy;
 P891 c_428;
 P889 result_;
};
struct f_bind_ptr_params_434fr { int dummy;
 P889 formals_430;
 P889 actuals_431;
 rstr *cell_432;
 rt_int line_433;
 P889 p_1616;
 P889 a_1617;
 P895 vt_1618;
 P891 pc_1619;
 P899 y_1620;
 rstr v_1621;
 rstr pv_1622;
};
struct f_alloc_cell_439fr { int dummy;
 P889 s_435;
 rstr *lv_436;
 P895 t_437;
 P891 c_438;
 P889 d_1623;
 P891 tc_1624;
 P895 vt_1625;
 rstr pt_1626;
 rstr cell_1627;
 rstr fn_1628;
 rstr v_1629;
};
struct f_freeze_args_443fr { int dummy;
 P891 c_440;
 P895 t_441;
 rt_int line_442;
 P891 result_;
 P891 r_1630;
 P889 p_1631;
 P889 a_1632;
 P889 head_1633;
 P889 tail_1634;
 P882 saved_1635;
 P891 pc_1636;
 P895 vt_1637;
 P895 pt_1638;
 rstr nm_1639;
 P899 y_1640;
 P889 n_1641;
 rstr v_1642;
 rstr access_1643;
};
struct f_ptr_subtype_check_447fr { int dummy;
 P895 t_444;
 P891 c_445;
 P889 src_446;
 P882 lv_1644;
 P895 st_1645;
 P891 sc_1646;
 int ro_1647;
 P882 cond_1648;
 P889 a_1649;
 P889 b_1650;
 P895 at_1651;
 P895 bt_1652;
 rstr x_1653;
 rstr y_1654;
};
struct f_normal_function_450fr { int dummy;
 P889 d_448;
 P899 y_449;
 P901 p_1655;
 P889 imp_1656;
 int ro_1657;
 P899 z_1658;
};
struct f_declare_subprogram_452fr { int dummy;
 P889 d_451;
};
struct f_build_subprogram_454fr { int dummy;
 P889 d_453;
 P899 result_;
 P899 y_1659;
 P889 p_1660;
 P901 tail_1661;
 P901 pm_1662;
 P891 rc_1664;
 P901 pm_1665;
 P912 saved_1666;
 P899 z_1667;
};
struct f_has_pragmat_457fr { int dummy;
 P882 pr_455;
 rstr *p_456;
 int result_;
 rt_int i_1668;
};
struct f_suppressing_459fr { int dummy;
 P882 pr_458;
 P882 result_;
 P882 r_1672;
 rt_int i_1673;
 rt_int j_1674;
 rt_int k_1675;
};
struct f_suppressed_461fr { int dummy;
 rstr *x_460;
 int result_;
 rstr w_1676;
 rt_int i_1677;
};
struct f_element_463fr { int dummy;
 P889 e_462;
 P882 saved_1681;
};
struct f_element1_465fr { int dummy;
 P889 e_464;
 rt_int k_1682;
 P899 g_1683;
 rt_int i_1687;
 P895 t_1691;
 rstr c_1692;
};
struct f_storage_468fr { int dummy;
 rstr *name_466;
 P895 t_467;
 rstr result_;
 rstr g_1693;
 rstr f_1694;
};
struct f_bind_471fr { int dummy;
 P899 y_469;
 rstr *access_470;
};
struct f_var_decl_473fr { int dummy;
 P889 d_472;
 P891 c_1695;
 P895 t_1696;
 P899 y_1697;
 rstr access_1698;
 P895 it_1699;
 rstr n_1700;
 P895 vt_1701;
 rstr v_1702;
};
struct f_open_fin_475fr { int dummy;
 rstr *fc_474;
 rstr f_1703;
 P893 l_1704;
};
struct f_close_fins_477fr { int dummy;
 P893 saved_476;
};
struct f_const_decl_479fr { int dummy;
 P889 d_478;
 P891 c_1706;
 P895 t_1707;
 P895 vt_1708;
 P899 y_1709;
 int ok_1710;
 rstr v_1711;
 rstr access_1712;
};
struct f_subprogram_481fr { int dummy;
 P889 d_480;
};
struct f_gen_subprogram_484fr { int dummy;
 P889 d_482;
 P899 y_483;
 P912 saved_code_1713;
 P912 saved_fields_1714;
 int saved_in_1715;
 P899 saved_sym_1716;
 P914 saved_exits_1717;
 P914 saved_gotos_1718;
 rt_int saved_frames_1719;
 P882 args_1720;
 P901 pm_1721;
 P893 saved_handlers_1722;
 P893 saved_cleanups_1723;
 P906 ctx_1724;
 P882 head_1725;
 P882 frame_1726;
 P882 parent_1727;
 P882 copy_back_1728;
 P882 pfin_1729;
 P893 saved_fins_1730;
 P891 saved_rc_1731;
 P882 saved_ret_1732;
 P882 saved_rflag_1733;
 P889 pn_1734;
 P882 nonrec_end_1735;
 int has_pfin_1736;
 rstr ct_1738;
 rstr f_1739;
 P899 p_1740;
 P891 pc_1741;
 P891 ac_1742;
 P891 fc_1743;
 P895 ft_1744;
 rstr bt_1745;
 P891 rc_1746;
 P895 rt_1747;
 rstr g_1748;
 P882 leave_1749;
 rstr xu_1750;
};
struct f_waits_of_486fr { int dummy;
 P889 d_485;
 rstr result_;
 P918 w_1751;
};
struct f_task_waits_488fr { int dummy;
 P889 elems_487;
 rstr result_;
 P889 e_1752;
 P882 r_1753;
};
struct f_await_tasks_490fr { int dummy;
 P889 elems_489;
 rstr w_1754;
};
struct f_capsule_elements_492fr { int dummy;
 P889 elems_491;
 P889 e_1755;
};
struct f_declare_labels_494fr { int dummy;
 P889 elems_493;
 P889 e_1756;
 P889 l_1757;
 P914 x_1758;
};
struct f_start_labels_495fr { int dummy;
 P914 x_1760;
};
struct f_goto_label_497fr { int dummy;
 rstr *name_496;
 P914 result_;
 P914 x_1761;
};
struct f_has_return_499fr { int dummy;
 P889 e_498;
 int result_;
 P889 x_1762;
};
struct f_capsule_body_501fr { int dummy;
 P889 elems_500;
 P882 saved_ret_1763;
 P882 saved_flag_1764;
 rt_int saved_frames_1765;
 P889 e_1766;
 int stmt_1767;
};
struct f_body_elements_503fr { int dummy;
 P889 elems_502;
};
struct f_gen_body_505fr { int dummy;
 P889 elems_504;
 P893 saved_1768;
 P914 saved_gotos_1769;
 rstr xu_1770;
};
struct f_open_unhandled_507fr { int dummy;
 P889 elems_506;
 rstr result_;
 P889 e_1771;
 P882 conds_1772;
 rstr f_1773;
};
struct f_close_unhandled_509fr { int dummy;
 rstr *xu_508;
 rt_int i_1774;
 rstr f_1775;
};
struct f_pop_frames_511fr { int dummy;
 rt_int upto_510;
 rt_int i_1776;
 P893 c_1777;
};
struct f_push_cleanup_513fr { int dummy;
 rstr *s_512;
 P893 c_1778;
};
struct f_pop_cleanup_514fr { int dummy;
};
struct f_gen_statement_516fr { int dummy;
 P889 s_515;
 P882 label_1780;
 P889 gl_1781;
 P914 x_1782;
 P914 x_1785;
};
struct f_st_assign_518fr { int dummy;
 P889 s_517;
 P882 lv_1786;
 P895 t_1787;
 P895 vt_1788;
 P891 c_1789;
 int ro_1790;
 rstr lo_1791;
 rstr hi_1792;
 rstr v_1793;
 rstr lo_1794;
 rstr hi_1795;
 rstr v_1796;
 rstr v_1797;
};
struct f_st_call_520fr { int dummy;
 P889 s_519;
 P889 c_1798;
 P895 t_1799;
 P889 x_1800;
};
struct f_st_if_522fr { int dummy;
 P889 s_521;
 P889 a_1801;
 int first_1802;
 P895 t_1803;
 int taken_1804;
 int ok_1805;
 P908 mv_1806;
 rstr c_1807;
};
struct f_manifest_case_524fr { int dummy;
 P889 s_523;
 int result_;
 int ok_1808;
 P908 sv_1809;
 P889 a_1810;
 P889 lab_1811;
 P908 lo_1812;
 P908 hi_1813;
};
struct f_st_case_526fr { int dummy;
 P889 s_525;
 P895 st_1814;
 P895 vt_1815;
 int first_1816;
 P889 a_1817;
};
struct f_st_case2_528fr { int dummy;
 P889 s_527;
 P895 st_1818;
 P895 vt_1819;
 int first_1820;
 P889 a_1821;
 rstr sel_1822;
 rstr tmp_1823;
 P889 lab_1824;
 P882 conds_1825;
 rstr v_1826;
 rstr lo_1827;
 rstr hi_1828;
 rstr lo_1829;
 rstr hi_1830;
};
struct f_user_for_532fr { int dummy;
 P889 s_529;
 P895 t_530;
 P891 c_531;
 P899 y_1831;
 P893 saved_1832;
 P889 p_1833;
 P889 iv_1834;
 P895 st_1835;
 rstr access_1836;
 P882 uv_1837;
 P893 l1_1838;
 P893 l2_1839;
 rstr lo_1842;
 rstr hi_1843;
};
struct f_st_repeat_534fr { int dummy;
 P889 s_533;
 P895 t_1844;
 P891 c_1845;
 rstr cond_1846;
 rstr access_1847;
 rstr lov_1848;
 rstr hiv_1849;
 rstr it_1850;
 P899 y_1851;
};
struct f_st_exit_536fr { int dummy;
 P889 s_535;
 P914 x_1852;
};
struct f_st_return_538fr { int dummy;
 P889 s_537;
 P895 vt_1853;
 rstr v_1854;
};
struct f_result_checked_542fr { int dummy;
 P895 t_539;
 P891 c_540;
 rstr *v_541;
 rstr result_;
};
struct f_exc_id_545fr { int dummy;
 rstr *name_543;
 rt_int line_544;
 rstr result_;
 P899 y_1855;
};
struct f_st_guard_547fr { int dummy;
 P889 s_546;
 P889 h_1856;
 int first_1857;
 P893 hv_1858;
 rstr f_1859;
 rstr x_1860;
 P889 h1_1862;
 P893 seen_1863;
 P889 n1_1864;
 P889 n_1865;
 P882 conds_1866;
};
struct f_st_alloc_549fr { int dummy;
 P889 s_548;
 P882 lv_1867;
 P895 t_1868;
 P895 target_1869;
 P895 vt_1870;
 P891 c_1871;
 P891 tc_1872;
 int ro_1873;
 P889 d_1874;
 P889 p_1875;
 P889 a_1876;
 rstr tcn_1877;
 rstr cell_1878;
 rstr fn_1879;
 rstr v_1880;
};
struct f_act_ref_551fr { int dummy;
 P889 e_550;
 rstr result_;
 P882 lv_1881;
 P895 t_1882;
 P891 c_1883;
 int ro_1884;
 rstr v_1885;
};
struct f_st_create_553fr { int dummy;
 P889 s_552;
 P899 y_1886;
 P901 pm_1887;
 P889 a_1888;
 P882 lv_1889;
 P895 lt_1890;
 P895 vt_1891;
 P891 lc_1892;
 int ro_1893;
 P895 at_1894;
 P891 ac_1895;
 int aro_1896;
 P882 act_1897;
 rstr nf_1898;
 P882 link_1899;
 rt_int i_1900;
 rstr v_1904;
};
struct f_hidden_var_557fr { int dummy;
 rstr *name_554;
 P895 t_555;
 rstr *place_556;
 P899 y_1905;
};
struct f_user_create_563fr { int dummy;
 P889 s_558;
 P899 y_559;
 rstr *uv_560;
 P895 ut_561;
 rstr *nf_562;
 P895 t_1906;
 P912 saved_1907;
 P912 hook_1908;
 P889 un_1909;
 rstr hn_1910;
 rstr aa_1911;
 rstr uname_1912;
 rstr aname_1913;
 P889 start_1914;
 P889 an_1915;
};
struct f_wait_alt_568fr { int dummy;
 P889 inv_564;
 rstr *arr_565;
 rt_int i_566;
 int mixed_567;
 rstr result_;
 P882 lv_1916;
 P895 t_1917;
 P895 vt_1918;
 P891 c_1919;
 int ro_1920;
 P889 fn_1921;
 P889 args_1922;
 rstr slot_1923;
 P882 dv_1924;
 P895 dt_1925;
 rstr tmp_1926;
 rstr v_1927;
 rstr v_1928;
};
struct f_builtin_wait_570fr { int dummy;
 P889 inv_569;
 int result_;
 P882 lv_1929;
 P895 t_1930;
 P891 c_1931;
 int ro_1932;
 P912 saved_1933;
 int ok_1934;
};
struct f_wait_op_575fr { int dummy;
 P889 inv_571;
 rstr *op_572;
 rstr *q_573;
 int is_stmt_574;
 rstr result_;
 P889 x_1937;
 P889 f_1938;
 P889 qn_1939;
 P895 t_1940;
 rstr r_1941;
};
struct f_user_wait_580fr { int dummy;
 P889 s_576;
 rstr *arr_577;
 rstr *w_578;
 rt_int n_579;
 P889 a_1942;
 rt_int i_1943;
 P882 tests_1944;
 P882 revokes_1945;
 P889 inv_1946;
 P889 st_1947;
 P891 c_1948;
 P895 qt_1949;
 rstr qname_1950;
 P899 y_1951;
 rstr access_1952;
};
struct f_st_wait_582fr { int dummy;
 P889 s_581;
 P889 a_1953;
 rt_int n_1954;
 int first_1955;
 P912 inits_1956;
 int user_1957;
 rstr arr_1958;
 rstr w_1959;
 P889 inv_1960;
 P889 inv_1961;
 P882 conds_1962;
 rt_int i_1963;
};
struct f_call_node_586fr { int dummy;
 rstr *name_583;
 P889 arg_584;
 rt_int line_585;
 P889 result_;
 P889 x_1967;
 P889 f_1968;
};
struct f_user_region_588fr { int dummy;
 P889 s_587;
 P895 t_1969;
 rstr f_1970;
 rstr lock_1971;
 rstr unlock_1972;
};
struct f_st_region_590fr { int dummy;
 P889 s_589;
 P882 lv_1973;
 P895 t_1974;
 P891 c_1975;
 int ro_1976;
 rstr lk_1977;
 rstr f_1978;
};
struct f_gparam_593fr { int dummy;
 P889 g_591;
 rstr *name_592;
 P889 result_;
 P889 p_1979;
};
struct f_bind_sym_595fr { int dummy;
 P889 p_594;
 P899 result_;
 P899 y_1980;
};
struct f_same_binds_598fr { int dummy;
 P899 a_596;
 P899 b_597;
 int result_;
 P899 x_1981;
 P899 y_1982;
};
struct f_same_binding_601fr { int dummy;
 P899 a_599;
 P899 b_600;
 int result_;
};
struct f_tt_binds_606fr { int dummy;
 P889 gd_602;
 P889 formals_603;
 P889 actuals_604;
 rt_int line_605;
 P899 result_;
 P889 f_1983;
 P889 a_1984;
 P899 binds_1985;
 P891 c_1986;
 P895 at_1987;
 P889 p_1988;
 P899 b_1989;
 P889 st_1990;
 int ok_1991;
 int ok_1992;
};
struct f_type_allowed_610fr { int dummy;
 P895 t_607;
 P889 items_608;
 P899 binds_609;
 int result_;
 P889 it_1993;
 P895 b_1994;
 rstr w_1995;
 P891 c_1996;
};
struct f_resolve_in_binds_614fr { int dummy;
 P889 st_611;
 P899 binds_612;
 P891 *c_613;
 P891 c_613v;
 P895 result_;
 P899 b_1997;
 P895 t_1998;
 P899 z_1999;
};
struct f_pick_operation_621fr { int dummy;
 rt_int kind_615;
 rstr *name_616;
 P889 sig_617;
 P889 res_618;
 P899 binds_619;
 rt_int line_620;
 P899 result_;
 P899 y_2000;
 P891 c_2001;
 rt_int want_2002;
 rt_int pass_2003;
 int ok_2007;
 P889 s_2008;
 P901 pm_2009;
};
struct f_kind_word_623fr { int dummy;
 rt_int kind_622;
 rstr result_;
};
struct f_need_binds_627fr { int dummy;
 P889 gd_624;
 P899 binds_625;
 rt_int line_626;
 P899 result_;
 P889 it_2010;
 P899 r_2011;
 int found_2012;
 P899 y_2013;
 P899 z_2014;
};
struct f_generic_use_629fr { int dummy;
 P889 st_628;
 int result_;
};
struct f_infer_from_634fr { int dummy;
 P889 gd_630;
 P889 pat_631;
 P895 t_632;
 P899 known_633;
 P899 result_;
 P899 binds_2015;
 P889 e_2016;
 P889 tp_2017;
 P882 nm_2018;
 P899 q_2019;
 int have_2020;
 P899 g_2021;
 P899 b_2022;
};
struct f_instantiate_type_640fr { int dummy;
 P899 g_635;
 P889 tt_636;
 P889 args_637;
 P891 *c_638;
 P891 c_638v;
 rt_int line_639;
 P895 result_;
 P889 gd_2023;
 P889 pat_2024;
 P899 binds_2025;
 P899 inst_2026;
 P895 t_2027;
 P916 saved_caps_2028;
 P903 saved_env_2029;
 rt_int saved_gdepth_2030;
 P899 b_2031;
 P899 y_2032;
 P891 yc_2033;
};
struct f_instantiate_645fr { int dummy;
 P899 g_641;
 P889 tt_642;
 P889 args_643;
 rt_int line_644;
 P899 result_;
 P889 gd_2035;
 P889 pat_2036;
 P899 binds_2037;
 P889 f_2038;
 P889 a_2039;
 P889 fp_2040;
 P899 inst_2041;
 P895 at_2042;
 P891 c_2043;
 P906 saved_fctx_2044;
 int saved_in_2045;
 rt_int saved_level_2046;
 P899 saved_sym_2047;
 P912 saved_code_2048;
 P903 saved_env_2049;
 rt_int saved_gdepth_2050;
 rstr v_2051;
 int known_2052;
 P899 q_2053;
 P899 b_2054;
 rstr v_2055;
 P899 b_2056;
};
struct f_access_of_647fr { int dummy;
 P899 y_646;
 rstr result_;
 P882 p_2057;
 rt_int i_2058;
};
struct f_import_of_650fr { int dummy;
 P889 l_648;
 rstr *name_649;
 P889 result_;
 P889 p_2062;
};
struct f_check_import_653fr { int dummy;
 P899 y_651;
 rt_int line_652;
 int result_;
 P906 c_2063;
 int ro_2064;
 P889 imp_2065;
};
struct f_c_ident_655fr { int dummy;
 rstr *s_654;
 rstr result_;
 P882 r_2066;
 rt_int i_2067;
};
struct f_cell_deref_658fr { int dummy;
 P895 t_656;
 rstr *p_657;
 rstr result_;
};
struct f_deref_661fr { int dummy;
 rstr *base_659;
 P895 t_660;
 rstr result_;
};
struct f_is_lvalue_663fr { int dummy;
 P889 e_662;
 int result_;
 P899 y_2071;
};
struct f_lvalue_669fr { int dummy;
 P889 e_664;
 P882 *code_665;
 P882 code_665v;
 P895 *t_666;
 P895 t_666v;
 P891 *c_667;
 P891 c_667v;
 int *ro_668;
 int ro_668v;
 P882 base_2072;
 P895 bt_2073;
 P891 bc_2074;
 P899 y_2075;
};
struct f_select_on_677fr { int dummy;
 rstr *base_670;
 P895 bt_671;
 P889 e_672;
 int *ro_673;
 P882 *code_674;
 P882 code_674v;
 P895 *t_675;
 P895 t_675v;
 P891 *c_676;
 P891 c_676v;
 P889 p_2076;
 P891 pc_2077;
 P889 p_2078;
 P897 f_2079;
 rt_int i_2080;
 rstr fn_2081;
 P897 f_2082;
};
struct f_has_call_679fr { int dummy;
 rstr *s_678;
 int result_;
 rt_int i_2083;
};
struct f_need_slice_681fr { int dummy;
 P895 t_680;
 rstr c_2087;
 rstr n_2088;
 P893 l_2089;
};
struct f_ix_685fr { int dummy;
 rstr *i_682;
 rstr *lo_683;
 rstr *hi_684;
 rstr result_;
};
struct f_index_on_694fr { int dummy;
 rstr *base_686;
 P895 bt_687;
 P889 e_688;
 int *ro_689;
 int lv_690;
 P882 *code_691;
 P882 code_691v;
 P895 *t_692;
 P895 t_692v;
 P891 *c_693;
 P891 c_693v;
 P889 a_2091;
 P895 it_2092;
 rstr lo_2093;
 rstr hi_2094;
 P882 off_2095;
 rt_int k_2096;
 P882 b_2097;
 P882 pre_2098;
 rstr i_2099;
 rstr l_2100;
 rstr h_2101;
 rstr lo_2102;
 rstr hi_2103;
 rstr i_2104;
};
struct f_own_attribute_696fr { int dummy;
 P889 e_695;
 int result_;
 P912 saved_2105;
 P895 bt_2106;
 int ok_2107;
 rstr base_2110;
 P889 p_2111;
 P897 f_2112;
};
struct f_gexpr_700fr { int dummy;
 P889 e_697;
 P895 want_698;
 P895 *t_699;
 P895 t_699v;
 rstr result_;
 rt_int k_2113;
 P882 code_2114;
 P891 c_2115;
 int ro_2116;
 P895 bt_2117;
 P891 ctx_2118;
 P882 r_2119;
 rt_int i_2120;
 rt_int pos_2124;
 rt_int i_2125;
 P899 y_2126;
 int ro_2127;
 P889 call_2128;
 P889 fname_2129;
 rstr a_2130;
 rstr a_2131;
 rstr a_2132;
 P889 nm_2133;
 P899 y_2134;
 rstr base_2135;
 rstr base_2136;
};
struct f_resolved_703fr { int dummy;
 P889 e_701;
 P895 *t_702;
 P895 t_702v;
 rstr result_;
 P891 c_2137;
 P895 vt_2138;
 P899 y_2139;
 P889 tt_2140;
 P889 call_2141;
 P889 f_2142;
 P889 fname_2143;
 rstr v_2144;
};
struct f_gexpr_in_708fr { int dummy;
 P889 e_704;
 P895 want_705;
 P891 c_706;
 P895 *t_707;
 P895 t_707v;
 rstr result_;
};
struct f_ascii_lit_710fr { int dummy;
 int ch_709;
 rstr result_;
 P889 l_2145;
 rt_int i_2146;
};
struct f_octal_712fr { int dummy;
 rt_int n_711;
 rstr result_;
 rstr r_2150;
};
struct f_str_cat_part_714fr { int dummy;
 P895 t_713;
 P895 result_;
};
struct f_peek_type_716fr { int dummy;
 P889 e_715;
 P895 result_;
 P912 saved_2151;
 P895 t_2152;
 rstr v_2155;
};
struct f_set_operands_719fr { int dummy;
 P889 e_717;
 P895 want_718;
 P895 result_;
 P895 t_2156;
};
struct f_user_dot_721fr { int dummy;
 P889 e_720;
 P889 result_;
 P889 arg_2157;
};
struct f_user_subscript_723fr { int dummy;
 P889 e_722;
 P889 result_;
 P882 name_2158;
 P889 args_2159;
 P889 tail_2160;
 P889 a_2161;
};
struct f_op_call_727fr { int dummy;
 rstr *name_724;
 P889 args_725;
 rt_int line_726;
 P889 result_;
 P889 call_2162;
 P889 f_2163;
};
struct f_derived_relation_729fr { int dummy;
 P889 e_728;
 P889 result_;
 P889 l_2164;
 P889 r_2165;
 int has_eq_2166;
 int has_lt_2167;
};
struct f_rel_node_734fr { int dummy;
 rstr *op_730;
 P889 a_731;
 P889 b_732;
 rt_int line_733;
 P889 result_;
};
struct f_rel_not_737fr { int dummy;
 P889 x_735;
 rt_int line_736;
 P889 result_;
 P889 n_2168;
};
struct f_copy_node_739fr { int dummy;
 P889 e_738;
 P889 result_;
 P889 x_2169;
};
struct f_wrap_apply_741fr { int dummy;
 P889 e_740;
 P889 result_;
 P889 x_2171;
};
struct f_c_string_743fr { int dummy;
 rstr *s_742;
 rstr result_;
 rt_int n_2172;
 rt_int i_2173;
 rstr r_2177;
 rt_int j_2178;
 rt_int i_2179;
};
struct f_enum_type_of_746fr { int dummy;
 rstr *lit_744;
 rt_int line_745;
 P895 result_;
 P899 y_2183;
 P891 c_2184;
 P889 st_2185;
};
struct f_ptr_attribute_748fr { int dummy;
 P889 e_747;
 int result_;
 P882 lv_2186;
 P895 t_2187;
 P891 c_2188;
 int ro_2189;
 P889 p_2190;
 P912 saved_2191;
};
struct f_attribute_751fr { int dummy;
 P889 e_749;
 P895 *t_750;
 P895 t_750v;
 rstr result_;
 P895 bt_2192;
 P891 c_2193;
 P882 base_2194;
 P889 sub_2195;
 rstr name_2196;
 P889 p_2197;
 P889 a_2198;
 P891 pc_2199;
 rstr v_2200;
 P889 p_2201;
 P889 a_2202;
 P895 pt_2203;
 rstr v_2204;
};
struct f_subtype_compare_756fr { int dummy;
 P889 sa_752;
 P889 sb_753;
 rstr *op_754;
 rt_int line_755;
 rstr result_;
 P891 ca_2205;
 P891 cb_2206;
 P895 ta_2207;
 P895 tb_2208;
 P882 r_2209;
 rstr yes_2210;
 rstr no_2211;
 rt_int k_2212;
 P889 a_2216;
 P889 b_2217;
 P895 at_2218;
 P895 bt2_2219;
 rstr x_2220;
 rstr y_2221;
};
struct f_float_prec_758fr { int dummy;
 P891 c_757;
 rstr result_;
};
struct f_file_attribute_764fr { int dummy;
 P889 e_759;
 P895 bt_760;
 P891 c_761;
 P882 base_762;
 P895 *t_763;
 P895 t_763v;
 rstr result_;
};
struct f_gbinop_768fr { int dummy;
 P889 e_765;
 P895 want_766;
 P895 *t_767;
 P895 t_767v;
 rstr result_;
 P882 op_2222;
 P895 ta_2223;
 P895 tb_2224;
 P895 hint_2225;
 P899 uy_2226;
 P889 l_2227;
 P889 r_2228;
 P889 call_2229;
 P889 fname_2230;
 rstr s_2231;
 rstr a_2232;
 rstr a_2233;
 rstr b_2234;
 rstr a_2235;
 rstr b_2236;
 P895 at_2237;
 rstr a_2238;
 rstr b_2239;
 P895 wa_2240;
 P895 wb_2241;
 P895 ws_2242;
 P895 ce_2243;
 rstr a_2244;
 rstr b_2245;
 rstr dummy_2246;
 rstr a_2247;
 rstr b_2248;
 P895 ct_2249;
 rstr a_2250;
 rstr b_2251;
};
struct f_constructor_773fr { int dummy;
 P889 e_769;
 P895 want_770;
 P891 ctx_771;
 P895 *t_772;
 P895 t_772v;
 rstr result_;
 P889 it_2252;
 P897 f_2253;
 P895 vt_2254;
 P882 s_2255;
 rstr v_2256;
 rt_int i_2257;
 rstr tmp_2258;
 rstr v_2259;
 rstr tmp_2260;
 P882 parts_2261;
 P889 k_2262;
 P882 shared_2263;
 rstr v_2264;
 rstr v_2265;
};
struct f_comp_value_777fr { int dummy;
 P895 t_774;
 P891 c_775;
 rstr *v_776;
 rstr result_;
};
struct f_has_at_779fr { int dummy;
 rstr *s_778;
 int result_;
 rt_int i_2266;
};
struct f_set_elem_782fr { int dummy;
 P895 st_780;
 rstr *v_781;
 rstr result_;
};
struct f_array_cons_787fr { int dummy;
 P889 e_783;
 P895 at_784;
 P891 ctx_785;
 P895 *t_786;
 P895 t_786v;
 rstr result_;
 rstr tmp_2270;
 P882 parts_2271;
 P889 it_2272;
 int positional_2273;
 rt_int k_2274;
 P882 lo_2278;
 P882 hi_2279;
};
struct f_fill_items_793fr { int dummy;
 P889 items_788;
 P895 at_789;
 rstr *tmp_790;
 P893 prefix_791;
 rt_int dim_792;
 rstr result_;
 P889 it_2280;
 rt_int pos_2281;
 P882 r_2282;
 P895 vt_2283;
 rstr v_2284;
 P889 k_2285;
 rt_int d_2286;
 P893 pre_2287;
 P882 loops_2288;
 P882 ends_2289;
 rstr v_2290;
 rstr xv_2291;
 P889 k_2292;
 rstr xv_2293;
 rstr v_2294;
};
struct f_e_line_795fr { int dummy;
 P889 e_794;
 rt_int result_;
};
struct f_add_line_798fr { int dummy;
 P893 l_796;
 rstr *s_797;
 P893 result_;
 P893 r_2295;
 P893 tail_2296;
 P893 x_2297;
 P893 p_2298;
};
struct f_item_value_803fr { int dummy;
 P889 e_799;
 P895 at_800;
 rt_int line_801;
 P895 *vt_802;
 P895 vt_802v;
 rstr result_;
 rstr v_2301;
};
struct f_key_loop_808fr { int dummy;
 P889 k_804;
 P895 at_805;
 rt_int d_806;
 rstr *xv_807;
 rstr result_;
 P895 it_2302;
 rstr lo_2303;
 rstr hi_2304;
};
struct f_store_at_813fr { int dummy;
 P895 at_809;
 rstr *tmp_810;
 P893 xs_811;
 rt_int n_812;
 rstr result_;
 P882 off_2305;
 P893 x_2306;
 rt_int k_2307;
 rstr l_2308;
 rstr h_2309;
};
struct f_fits_816fr { int dummy;
 P899 y_814;
 P889 args_815;
 int result_;
 P889 a_2310;
 P901 pm_2311;
 P895 t_2312;
 P912 saved_2313;
 int ok_2314;
 P882 lv_2315;
 P891 lc_2316;
 int ro_2317;
 rstr v_2320;
};
struct f_resolve_overload_822fr { int dummy;
 rstr *name_817;
 P889 tt_818;
 P889 args_819;
 int is_stmt_820;
 rt_int line_821;
 P899 result_;
 P899 y_2321;
 P899 first_2322;
 rt_int n_2323;
 rt_int pass_2324;
};
struct f_tt_fits_825fr { int dummy;
 P899 y_823;
 P889 tt_824;
 int result_;
 P889 f_2328;
 P889 a_2329;
 P912 saved_2330;
 int ok_2331;
 P891 fc_2334;
 P891 ac_2335;
 P889 fst_2336;
 P895 ft_2337;
 P895 at_2338;
 P889 ast_2339;
};
struct f_overload_chain_828fr { int dummy;
 rstr *name_826;
 rt_int pass_827;
 P899 result_;
};
struct f_is_builtin_830fr { int dummy;
 rstr *n_829;
 int result_;
};
struct f_is_low_level_832fr { int dummy;
 rstr *n_831;
 int result_;
};
struct f_me_high_836fr { int dummy;
 P889 tt_833;
 rt_int line_834;
 P895 *t_835;
 P895 t_835v;
 rstr result_;
 P891 c_2340;
};
struct f_type_tag_838fr { int dummy;
 P895 t_837;
 rstr result_;
};
struct f_lock_ref_841fr { int dummy;
 P889 e_839;
 rstr *name_840;
 rstr result_;
 P882 lv_2341;
 P895 t_2342;
 P891 c_2343;
 int ro_2344;
};
struct f_user_op_844fr { int dummy;
 rstr *op_842;
 P889 args_843;
 P899 result_;
 P899 y_2345;
 rt_int pass_2346;
};
struct f_gcall_848fr { int dummy;
 P889 e_845;
 int is_stmt_846;
 P895 *t_847;
 P895 t_847v;
 rstr result_;
 P889 gd_2350;
 P889 fn_2351;
 P889 tt_2352;
 P899 y_2353;
 P882 args_2354;
 P889 a_2355;
 P901 pm_2356;
 P895 lt_2357;
 P895 vt_2358;
 P882 lv_2359;
 P891 lc_2360;
 int ro_2361;
 P899 alt_2362;
 P916 cr_2363;
 rt_int i_2364;
 rstr v_2368;
 rstr ct_2369;
 rstr v_2370;
 rstr chk_2371;
};
struct f_requires_850fr { int dummy;
 P899 y_849;
 P893 result_;
 P889 imp_2372;
};
struct f_add_req_853fr { int dummy;
 P899 y_851;
 rstr *name_852;
 P893 l_2373;
};
struct f_require_calls_856fr { int dummy;
 P899 y_854;
 P889 e_855;
 P889 x_2375;
 P889 callee_2376;
 P899 z_2377;
 P893 l_2378;
};
struct f_declared_in_859fr { int dummy;
 P889 elems_857;
 rstr *name_858;
 int result_;
 P889 e_2379;
};
struct f_check_requires_862fr { int dummy;
 P899 y_860;
 rt_int line_861;
 P893 l_2380;
 P899 z_2381;
};
struct f_act_delay_args_864fr { int dummy;
 P889 args_863;
 rstr result_;
 P895 at_2382;
 P895 t1_2383;
 rstr a_2384;
 rstr v_2385;
 rstr v_2386;
};
struct f_same_subtypes_867fr { int dummy;
 P889 gd_865;
 P889 args_866;
 rstr result_;
 P889 p_2387;
 P882 r_2388;
 P889 fp_2389;
 P889 a_2390;
 P882 flo_2391;
 P882 fhi_2392;
 P895 st_2393;
 P891 c_2394;
 P882 base_2395;
 P882 lo_2396;
 P882 hi_2397;
};
struct f_actual_bounds_871fr { int dummy;
 P895 ft_868;
 P895 t_869;
 P891 c_870;
 rstr result_;
};
struct f_builtin_878fr { int dummy;
 rstr *name_872;
 P889 tt_873;
 P889 args_874;
 rt_int line_875;
 int is_stmt_876;
 P895 *t_877;
 P895 t_877v;
 rstr result_;
 P895 at_2398;
 rt_int n_2399;
 rstr a_2400;
 rstr a_2401;
 rstr a_2402;
 rstr a_2403;
 rstr a_2404;
 rstr n1_2405;
 rstr m1_2406;
 rstr a_2407;
 rstr a_2408;
 P889 last_2409;
 rstr a_2410;
 rstr a_2411;
 P882 lv_2412;
 P891 lc_2413;
 int ro_2414;
 P889 last_2415;
 P882 lv_2416;
 P882 dv_2417;
 P891 lc_2418;
 int ro_2419;
 P895 mt_2420;
 P895 dt_2421;
 rstr v_2422;
 P882 lv_2423;
 P891 lc_2424;
 int ro_2425;
 P895 mt_2426;
 P882 lv_2427;
 P882 dv_2428;
 P882 bv_2429;
 P891 lc_2430;
 int ro_2431;
 P895 mt_2432;
 P895 dt_2433;
 P895 bt_2434;
 rstr v_2435;
 rstr v_2436;
 rstr v_2437;
 rstr v_2438;
 rstr a_2439;
 P882 bv_2440;
 P891 bc_2441;
 int ro_2442;
 P895 bt_2443;
 rstr l_2444;
 P882 pv_2445;
 P891 pc_2446;
 int ro_2447;
 P895 pt_2448;
 rstr dev_2449;
 rstr cmd_2450;
 P882 dv_2451;
 P891 dc_2452;
 int ro_2453;
 P895 dt_2454;
};
struct f_translate_880fr { int dummy;
 P889 units_879;
 P889 u_2455;
 P889 l_2457;
 rstr w_2458;
};
struct f_print_program_881fr { int dummy;
};
struct Pc883 { rt_int p_n; rstr all; };
struct Pc887 { rt_int p_n; A888 all; };
struct Pc904 { rt_int p_n; A905 all; };
static void as_R919(R919 *d, R919 s);
static R919 cp_R919(R919 s);
static int eq_R919(R919 a, R919 b);
static void as_R917(R917 *d, R917 s);
static R917 cp_R917(R917 s);
static int eq_R917(R917 a, R917 b);
static void as_R915(R915 *d, R915 s);
static R915 cp_R915(R915 s);
static int eq_R915(R915 a, R915 b);
static void as_R913(R913 *d, R913 s);
static R913 cp_R913(R913 s);
static int eq_R913(R913 a, R913 b);
static void as_R911(R911 *d, R911 s);
static R911 cp_R911(R911 s);
static int eq_R911(R911 a, R911 b);
static void as_R909(R909 *d, R909 s);
static R909 cp_R909(R909 s);
static int eq_R909(R909 a, R909 b);
static void as_R907(R907 *d, R907 s);
static R907 cp_R907(R907 s);
static int eq_R907(R907 a, R907 b);
static void as_A905(A905 *d, A905 s);
static A905 cp_A905(A905 s);
static int eq_A905(A905 a, A905 b);
static void as_R902(R902 *d, R902 s);
static R902 cp_R902(R902 s);
static int eq_R902(R902 a, R902 b);
static void as_R900(R900 *d, R900 s);
static R900 cp_R900(R900 s);
static int eq_R900(R900 a, R900 b);
static void as_R898(R898 *d, R898 s);
static R898 cp_R898(R898 s);
static int eq_R898(R898 a, R898 b);
static void as_R896(R896 *d, R896 s);
static R896 cp_R896(R896 s);
static int eq_R896(R896 a, R896 b);
static void as_R894(R894 *d, R894 s);
static R894 cp_R894(R894 s);
static int eq_R894(R894 a, R894 b);
static void as_R892(R892 *d, R892 s);
static R892 cp_R892(R892 s);
static int eq_R892(R892 a, R892 b);
static void as_R890(R890 *d, R890 s);
static R890 cp_R890(R890 s);
static int eq_R890(R890 a, R890 b);
static void as_A888(A888 *d, A888 s);
static A888 cp_A888(A888 s);
static int eq_A888(A888 a, A888 b);
static void as_R885(R885 *d, R885 s);
static R885 cp_R885(R885 s);
static int eq_R885(R885 a, R885 b);
static P882 f_mk_3(rstr *s_2);
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
static P912 f_new_buffer_24(void);
static void f_put_27(P912 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P912 b_30);
static void f_splice_34(P912 a_32, P912 b_33);
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
static P889 f_nn_61(rt_int kind_59, rt_int line_60);
static void f_append_65(P889 *head_62, P889 *tail_63, P889 x_64);
static rt_int f_list_len_67(P889 l_66);
static rt_int f_cur_line_68(void);
static int f_at_kw_70(rstr *w_69);
static int f_at_op_72(rstr *w_71);
static int f_at_kind_74(rt_int k_73);
static rt_int f_kind_at_76(rt_int k_75);
static P882 f_text_at_78(rt_int k_77);
static void f_perror_80(rstr *msg_79);
static int f_accept_kw_82(rstr *w_81);
static int f_accept_op_84(rstr *w_83);
static void f_expect_kw_86(rstr *w_85);
static void f_expect_op_88(rstr *w_87);
static P882 f_expect_id_89(void);
static P889 f_name_node_90(void);
static P889 f_id_list_91(void);
static P889 f_p_subtype_92(void);
static P889 f_constraint_list_93(void);
static P889 f_actual_params_94(void);
static int f_is_type_word_96(rstr *w_95);
static P889 f_actual_tt_97(void);
static P889 f_binop_102(P882 op_98, P889 l_99, P889 r_100, rt_int line_101);
static P889 f_expr_103(void);
static P889 f_expr_and_104(void);
static P889 f_expr_not_105(void);
static int f_is_rel_107(rstr *s_106);
static P889 f_expr_rel_108(void);
static P889 f_expr_add_109(void);
static P889 f_expr_mul_110(void);
static P889 f_expr_pow_111(void);
static P889 f_expr_prefix_112(void);
static P889 f_postfix_113(void);
static P889 f_primary_114(void);
static P889 f_constructor_item_115(void);
static int f_at_body_end_116(void);
static P889 f_body_117(void);
static P889 f_body_element_118(void);
static P889 f_declaration_119(void);
static P889 f_object_decl_120(void);
static P889 f_abbrev_decl_121(void);
static void f_skip_rep_122(void);
static P889 f_type_decl_123(void);
static rt_int f_mode_of_125(rstr *w_124);
static P889 f_formal_params_126(void);
static int f_imports_list_128(P889 owner_127);
static int f_is_definable_130(rstr *w_129);
static P882 f_definable_name_131(void);
static P889 f_subprogram_decl_132(void);
static P889 f_capsule_decl_133(void);
static P889 f_formal_tt_134(void);
static P889 f_generic_decl_135(void);
static P889 f_type_list_136(void);
static P889 f_task_decl_137(void);
static P889 f_expose_decl_138(void);
static int f_is_compound_kw_140(rstr *w_139);
static P889 f_statement_141(void);
static P889 f_unlabeled_statement_142(void);
static P889 f_arm_146(P889 cond_143, P889 b_144, rt_int line_145);
static P889 f_if_stmt_147(void);
static P889 f_case_stmt_148(void);
static P889 f_repeat_stmt_149(void);
static P889 f_guard_stmt_150(void);
static P889 f_program_151(void);
static rt_int f_hash_153(rstr *s_152);
static P899 f_lookup_155(rstr *name_154);
static P899 f_lookup_decl_157(P889 d_156);
static void f_define_160(P899 y_158, rt_int line_159);
static int f_overloadable_162(P899 y_161);
static int f_same_tt_165(P889 a_163, P889 b_164);
static int f_same_signature_168(P901 a_166, P901 b_167);
static void f_open_scope_169(void);
static void f_close_scope_170(void);
static P899 f_new_sym_173(rt_int kind_171, P882 name_172);
static P895 f_new_typ_175(rt_int kind_174);
static P891 f_new_cons_176(void);
static int f_scalar_kind_178(P895 t_177);
static rstr f_bound_ctype_180(P895 t_179);
static rstr f_cbound_183(P891 c_181, rstr *b_182);
static rstr f_clo_185(P891 c_184);
static rstr f_chi_187(P891 c_186);
static rstr f_sub_lo_190(P895 t_188, P891 c_189);
static rstr f_sub_hi_193(P895 t_191, P891 c_192);
static rstr f_raw_storage_196(rstr *name_194, rstr *ct_195);
static P891 f_copy_cons_198(P891 c_197);
static P891 f_freeze_201(P891 c_199, P895 t_200);
static rstr f_checked_205(P895 t_202, P891 c_203, rstr *v_204);
static int f_same_lits_208(P889 a_206, P889 b_207);
static P895 f_str_elem_210(P895 t_209);
static int f_same_213(P895 a_211, P895 b_212);
static P895 f_base_of_215(P895 t_214);
static P891 f_base_cons_218(P895 t_216, P891 c_217);
static rstr f_kind_name_220(P895 t_219);
static void f_check_type_224(P895 got_221, P895 want_222, rt_int line_223);
static rstr f_ctype_226(P895 t_225);
static rstr f_struct_body_228(P895 t_227);
static rstr f_field_decls_230(P895 t_229);
static void f_declare_ctype_232(P895 t_231);
static rstr f_dim_lo_234(rt_int k_233);
static rstr f_dim_hi_236(rt_int k_235);
static rstr f_more_dims_238(P895 t_237);
static rstr f_acnt_241(P895 t_239, rstr *base_240);
static P882 f_cons_lo_244(P891 c_242, rt_int k_243);
static P882 f_cons_hi_247(P891 c_245, rt_int k_246);
static P895 f_idx_type_250(P895 t_248, rt_int k_249);
static void f_init_ascii_251(void);
static rt_int f_lit_index_254(P889 lits_252, rstr *name_253);
static P895 f_resolve_subtype_257(P889 st_255, P891 *c_256);
static int f_float_lit_259(P889 e_258);
static void f_tag_constraint_263(P895 t_260, P889 e_261, P891 c_262);
static P895 f_named_subtype_266(P889 st_264, P891 *c_265);
static P895 f_invoke_abbrev_270(P899 y_267, P889 st_268, P891 *c_269);
static void f_apply_constraint_275(P895 t_271, P889 args_272, P891 c_273, rt_int line_274);
static P895 f_value_subtype_279(P889 e_276, P891 *c_277, P882 *base_278);
static P893 f_reverse_pairs_281(P893 l_280);
static P895 f_inquiry_284(P889 st_282, P891 *c_283);
static P889 f_as_subtype_286(P889 e_285);
static P889 f_tt_subtype_291(P882 name_287, P889 tt_288, P889 args_289, rt_int line_290);
static int f_type_name_293(rstr *name_292);
static rstr f_empty_set_295(P895 t_294);
static int f_opened_297(P895 t_296);
static rstr f_replace_all_301(rstr *s_298, rstr *pat_299, rstr *r_300);
static rstr f_subst_303(rstr *s_302);
static P895 f_new_type_307(P899 y_304, P889 st_305, P891 *c_306);
static void f_init_storage_311(rstr *lval_308, P895 t_309, P891 c_310);
static rstr f_init_call_314(P899 y_312, rstr *lval_313);
static int f_needs_fin_316(P895 t_315);
static rstr f_fin_code_319(rstr *lval_317, P895 t_318);
static P895 f_tparam_type_322(P895 t_320, rstr *name_321);
static void f_make_storage_326(rstr *lval_323, P895 t_324, P891 c_325);
static rstr f_uninit_value_328(P895 t_327);
static rstr f_init_chk_331(P895 t_329, rstr *v_330);
static rt_int f_manifest_334(P889 e_332, int *ok_333);
static P908 f_mk_mval_337(rt_int kind_335, rt_int i_336);
static rt_int f_ipow_340(rt_int a_338, rt_int b_339);
static P908 f_meval_343(P889 e_341, int *ok_342);
static rstr f_bool_text_345(int b_344);
static rt_int f_bool_i_347(int b_346);
static rstr f_mstr_349(P908 v_348);
static int f_ascii_char_351(rt_int i_350);
static int f_user_defined_353(rstr *op_352);
static rstr f_mcopy_355(P895 t_354);
static int f_composite_357(P895 t_356);
static rstr f_user_call2_363(P899 y_358, rstr *a_359, int lv_a_360, rstr *b_361, int lv_b_362);
static rstr f_user_arg_367(P901 pm_364, rstr *v_365, int lv_366);
static int f_top_level_369(P899 y_368);
static rstr f_assign_code_374(rstr *lval_370, P895 t_371, rstr *v_372, P891 c_373);
static rstr f_copy_code_377(P895 t_375, rstr *v_376);
static rstr f_eq_code_381(P895 t_378, rstr *a_379, rstr *b_380);
static rstr f_elem_assign_385(rstr *lval_382, P895 t_383, rstr *v_384);
static int f_seen_name_388(P893 l_386, rstr *s_387);
static void f_emit_helpers_389(void);
static void f_helper_bodies_391(P895 t_390);
static void f_declare_body_393(P889 elems_392);
static void f_manifest_const_395(P889 d_394);
static int f_exported_399(P889 d_396, rstr *name_397, int *ro_398);
static P899 f_copy_sym_401(P899 y_400);
static void f_gen_capsule_403(P889 d_402);
static void f_capsule_params_407(P889 d_404, P889 args_405, rt_int line_406);
static void f_elaborate_capsule_412(P889 d_408, P899 y_409, P889 args_410, P889 owner_411);
static int f_exports_op_415(P889 d_413, rstr *op_414);
static P882 f_renamed_418(P889 d_416, P899 z_417);
static P899 f_pick_capsule_420(P889 d_419);
static P899 f_capsule_instance_423(P899 g_421, P889 d_422);
static void f_gen_expose_425(P889 d_424);
static void f_finish_ptr_427(P895 t_426);
static P889 f_ptr_args_429(P891 c_428);
static void f_bind_ptr_params_434(P889 formals_430, P889 actuals_431, rstr *cell_432, rt_int line_433);
static void f_alloc_cell_439(P889 s_435, rstr *lv_436, P895 t_437, P891 c_438);
static P891 f_freeze_args_443(P891 c_440, P895 t_441, rt_int line_442);
static void f_ptr_subtype_check_447(P895 t_444, P891 c_445, P889 src_446);
static void f_normal_function_450(P889 d_448, P899 y_449);
static void f_declare_subprogram_452(P889 d_451);
static P899 f_build_subprogram_454(P889 d_453);
static int f_has_pragmat_457(P882 pr_455, rstr *p_456);
static P882 f_suppressing_459(P882 pr_458);
static int f_suppressed_461(rstr *x_460);
static void f_element_463(P889 e_462);
static void f_element1_465(P889 e_464);
static rstr f_storage_468(rstr *name_466, P895 t_467);
static void f_bind_471(P899 y_469, rstr *access_470);
static void f_var_decl_473(P889 d_472);
static void f_open_fin_475(rstr *fc_474);
static void f_close_fins_477(P893 saved_476);
static void f_const_decl_479(P889 d_478);
static void f_subprogram_481(P889 d_480);
static void f_gen_subprogram_484(P889 d_482, P899 y_483);
static rstr f_waits_of_486(P889 d_485);
static rstr f_task_waits_488(P889 elems_487);
static void f_await_tasks_490(P889 elems_489);
static void f_capsule_elements_492(P889 elems_491);
static void f_declare_labels_494(P889 elems_493);
static void f_start_labels_495(void);
static P914 f_goto_label_497(rstr *name_496);
static int f_has_return_499(P889 e_498);
static void f_capsule_body_501(P889 elems_500);
static void f_body_elements_503(P889 elems_502);
static void f_gen_body_505(P889 elems_504);
static rstr f_open_unhandled_507(P889 elems_506);
static void f_close_unhandled_509(rstr *xu_508);
static void f_pop_frames_511(rt_int upto_510);
static void f_push_cleanup_513(rstr *s_512);
static void f_pop_cleanup_514(void);
static void f_gen_statement_516(P889 s_515);
static void f_st_assign_518(P889 s_517);
static void f_st_call_520(P889 s_519);
static void f_st_if_522(P889 s_521);
static int f_manifest_case_524(P889 s_523);
static void f_st_case_526(P889 s_525);
static void f_st_case2_528(P889 s_527);
static void f_user_for_532(P889 s_529, P895 t_530, P891 c_531);
static void f_st_repeat_534(P889 s_533);
static void f_st_exit_536(P889 s_535);
static void f_st_return_538(P889 s_537);
static rstr f_result_checked_542(P895 t_539, P891 c_540, rstr *v_541);
static rstr f_exc_id_545(rstr *name_543, rt_int line_544);
static void f_st_guard_547(P889 s_546);
static void f_st_alloc_549(P889 s_548);
static rstr f_act_ref_551(P889 e_550);
static void f_st_create_553(P889 s_552);
static void f_hidden_var_557(rstr *name_554, P895 t_555, rstr *place_556);
static void f_user_create_563(P889 s_558, P899 y_559, rstr *uv_560, P895 ut_561, rstr *nf_562);
static rstr f_wait_alt_568(P889 inv_564, rstr *arr_565, rt_int i_566, int mixed_567);
static int f_builtin_wait_570(P889 inv_569);
static rstr f_wait_op_575(P889 inv_571, rstr *op_572, rstr *q_573, int is_stmt_574);
static void f_user_wait_580(P889 s_576, rstr *arr_577, rstr *w_578, rt_int n_579);
static void f_st_wait_582(P889 s_581);
static P889 f_call_node_586(rstr *name_583, P889 arg_584, rt_int line_585);
static void f_user_region_588(P889 s_587);
static void f_st_region_590(P889 s_589);
static P889 f_gparam_593(P889 g_591, rstr *name_592);
static P899 f_bind_sym_595(P889 p_594);
static int f_same_binds_598(P899 a_596, P899 b_597);
static int f_same_binding_601(P899 a_599, P899 b_600);
static P899 f_tt_binds_606(P889 gd_602, P889 formals_603, P889 actuals_604, rt_int line_605);
static int f_type_allowed_610(P895 t_607, P889 items_608, P899 binds_609);
static P895 f_resolve_in_binds_614(P889 st_611, P899 binds_612, P891 *c_613);
static P899 f_pick_operation_621(rt_int kind_615, rstr *name_616, P889 sig_617, P889 res_618, P899 binds_619, rt_int line_620);
static rstr f_kind_word_623(rt_int kind_622);
static P899 f_need_binds_627(P889 gd_624, P899 binds_625, rt_int line_626);
static int f_generic_use_629(P889 st_628);
static P899 f_infer_from_634(P889 gd_630, P889 pat_631, P895 t_632, P899 known_633);
static P895 f_instantiate_type_640(P899 g_635, P889 tt_636, P889 args_637, P891 *c_638, rt_int line_639);
static P899 f_instantiate_645(P899 g_641, P889 tt_642, P889 args_643, rt_int line_644);
static rstr f_access_of_647(P899 y_646);
static P889 f_import_of_650(P889 l_648, rstr *name_649);
static int f_check_import_653(P899 y_651, rt_int line_652);
static rstr f_c_ident_655(rstr *s_654);
static rstr f_cell_deref_658(P895 t_656, rstr *p_657);
static rstr f_deref_661(rstr *base_659, P895 t_660);
static int f_is_lvalue_663(P889 e_662);
static void f_lvalue_669(P889 e_664, P882 *code_665, P895 *t_666, P891 *c_667, int *ro_668);
static void f_select_on_677(rstr *base_670, P895 bt_671, P889 e_672, int *ro_673, P882 *code_674, P895 *t_675, P891 *c_676);
static int f_has_call_679(rstr *s_678);
static void f_need_slice_681(P895 t_680);
static rstr f_ix_685(rstr *i_682, rstr *lo_683, rstr *hi_684);
static void f_index_on_694(rstr *base_686, P895 bt_687, P889 e_688, int *ro_689, int lv_690, P882 *code_691, P895 *t_692, P891 *c_693);
static int f_own_attribute_696(P889 e_695);
static rstr f_gexpr_700(P889 e_697, P895 want_698, P895 *t_699);
static rstr f_resolved_703(P889 e_701, P895 *t_702);
static rstr f_gexpr_in_708(P889 e_704, P895 want_705, P891 c_706, P895 *t_707);
static rstr f_ascii_lit_710(int ch_709);
static rstr f_octal_712(rt_int n_711);
static P895 f_str_cat_part_714(P895 t_713);
static P895 f_peek_type_716(P889 e_715);
static P895 f_set_operands_719(P889 e_717, P895 want_718);
static P889 f_user_dot_721(P889 e_720);
static P889 f_user_subscript_723(P889 e_722);
static P889 f_op_call_727(rstr *name_724, P889 args_725, rt_int line_726);
static P889 f_derived_relation_729(P889 e_728);
static P889 f_rel_node_734(rstr *op_730, P889 a_731, P889 b_732, rt_int line_733);
static P889 f_rel_not_737(P889 x_735, rt_int line_736);
static P889 f_copy_node_739(P889 e_738);
static P889 f_wrap_apply_741(P889 e_740);
static rstr f_c_string_743(rstr *s_742);
static P895 f_enum_type_of_746(rstr *lit_744, rt_int line_745);
static int f_ptr_attribute_748(P889 e_747);
static rstr f_attribute_751(P889 e_749, P895 *t_750);
static rstr f_subtype_compare_756(P889 sa_752, P889 sb_753, rstr *op_754, rt_int line_755);
static rstr f_float_prec_758(P891 c_757);
static rstr f_file_attribute_764(P889 e_759, P895 bt_760, P891 c_761, P882 base_762, P895 *t_763);
static rstr f_gbinop_768(P889 e_765, P895 want_766, P895 *t_767);
static rstr f_constructor_773(P889 e_769, P895 want_770, P891 ctx_771, P895 *t_772);
static rstr f_comp_value_777(P895 t_774, P891 c_775, rstr *v_776);
static int f_has_at_779(rstr *s_778);
static rstr f_set_elem_782(P895 st_780, rstr *v_781);
static rstr f_array_cons_787(P889 e_783, P895 at_784, P891 ctx_785, P895 *t_786);
static rstr f_fill_items_793(P889 items_788, P895 at_789, rstr *tmp_790, P893 prefix_791, rt_int dim_792);
static rt_int f_e_line_795(P889 e_794);
static P893 f_add_line_798(P893 l_796, rstr *s_797);
static rstr f_item_value_803(P889 e_799, P895 at_800, rt_int line_801, P895 *vt_802);
static rstr f_key_loop_808(P889 k_804, P895 at_805, rt_int d_806, rstr *xv_807);
static rstr f_store_at_813(P895 at_809, rstr *tmp_810, P893 xs_811, rt_int n_812);
static int f_fits_816(P899 y_814, P889 args_815);
static P899 f_resolve_overload_822(rstr *name_817, P889 tt_818, P889 args_819, int is_stmt_820, rt_int line_821);
static int f_tt_fits_825(P899 y_823, P889 tt_824);
static P899 f_overload_chain_828(rstr *name_826, rt_int pass_827);
static int f_is_builtin_830(rstr *n_829);
static int f_is_low_level_832(rstr *n_831);
static rstr f_me_high_836(P889 tt_833, rt_int line_834, P895 *t_835);
static rstr f_type_tag_838(P895 t_837);
static rstr f_lock_ref_841(P889 e_839, rstr *name_840);
static P899 f_user_op_844(rstr *op_842, P889 args_843);
static rstr f_gcall_848(P889 e_845, int is_stmt_846, P895 *t_847);
static P893 f_requires_850(P899 y_849);
static void f_add_req_853(P899 y_851, rstr *name_852);
static void f_require_calls_856(P899 y_854, P889 e_855);
static int f_declared_in_859(P889 elems_857, rstr *name_858);
static void f_check_requires_862(P899 y_860, rt_int line_861);
static rstr f_act_delay_args_864(P889 args_863);
static rstr f_same_subtypes_867(P889 gd_865, P889 args_866);
static rstr f_actual_bounds_871(P895 ft_868, P895 t_869, P891 c_870);
static rstr f_builtin_878(rstr *name_872, P889 tt_873, P889 args_874, rt_int line_875, int is_stmt_876, P895 *t_877);
static void f_translate_880(P889 units_879);
static void f_print_program_881(void);
static int ex_compile_error_1;
static P886 g_toks_920;
static rt_int g_ntoks_921;
static rt_int g_tpos_922;
static rt_int g_src_line_923;
static P882 g_pending_prag_924;
static P903 g_table_925;
static P903 g_genv_926;
static P899 g_all_insts_927;
static rt_int g_depth_928;
static P899 g_scope_stack_929;
static P895 g_all_types_930;
static rt_int g_serial_931;
static P912 g_out_types_932;
static P912 g_out_helpers_933;
static P912 g_out_protos_934;
static P912 g_out_globals_935;
static P912 g_out_funcs_936;
static P912 g_out_init_937;
static P912 g_out_excs_938;
static P912 g_code_939;
static P912 g_fields_buf_940;
static int g_in_func_941;
static rt_int g_cur_level_942;
static P906 g_fctx_943;
static P916 g_caps_944;
static P918 g_cap_waits_945;
static P893 g_psub_946;
static P882 g_st_field_947;
static P912 g_out_frames_948;
static P912 g_out_roots_949;
static int g_uses_free_950;
static P893 g_fins_951;
static int g_uses_findyn_952;
static P899 g_func_sym_953;
static P891 g_func_rc_954;
static P882 g_cap_ret_955;
static P882 g_cap_rflag_956;
static rt_int g_ret_frames_957;
static rt_int g_gdepth_958;
static P882 g_suppress_959;
static P891 g_cons_ctx_960;
static int g_mark_uninit_961;
static P914 g_exits_962;
static P914 g_gotos_963;
static rt_int g_frames_964;
static P893 g_handlers_965;
static P893 g_cleanups_966;
static rt_int g_trial_967;
static P893 g_mcopies_968;
static P895 g_ty_int_969;
static P895 g_ty_bool_970;
static P895 g_ty_float_971;
static P895 g_ty_ascii_972;
static P895 g_ty_string_973;
static P895 g_ty_void_974;
static P895 g_ty_file_975;
static P895 g_ty_nil_976;
static P895 g_ty_lock_977;
static P895 g_ty_latch_978;
static P895 g_ty_act_979;
static P895 g_file_mode_type_980;
static P891 g_no_cons_981;
static P882 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_982 = NULL;
{ P882 cell983 = rt_alloc(sizeof *cell983);
rt_int pv984 = ((rt_int)(((*F->s_2)).len));
cell983->p_n = pv984;
cell983->all = rt_str_new(pv984);
rt_str_assign(&cell983->all, (*F->s_2));
F->t_982 = cell983;
}
F->result_ = F->t_982;
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
F->r_985 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_985, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_985;
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
F->r_986 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_986, (*F->s_14));
{ rt_int lo988 = ((rt_int)1LL), hi989 = ((rt_int)(((*F->s_14)).len));
for (rt_int it990 = lo988; it990 <= hi989; it990++) {
F->i_987 = it990;
if (((65 <= rt_r_echk(rt_str_get(F->r_986, F->i_987))) && (rt_r_echk(rt_str_get(F->r_986, F->i_987)) <= 90))) {
(*rt_str_at(&F->r_986, F->i_987)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_r_echk(rt_str_get(F->r_986, F->i_987))) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_986;
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
F->l_991 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_992 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_991), rt_str(" ", 1)));
{ rt_int lo994 = ((rt_int)1LL), hi995 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_992).len))), ((rt_int)1LL));
for (rt_int it996 = lo994; it996 <= hi995; it996++) {
F->i_993 = it996;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_993, rt_sub(rt_add(F->i_993, ((rt_int)((F->w_992).len))), ((rt_int)1LL))), F->w_992)) {
F->result_ = rt_str_cat(F->l_991, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_991;
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
g_serial_931 = rt_add(rt_r_ichk(g_serial_931), ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(rt_r_ichk(g_serial_931)));
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
if ((rt_r_ichk(g_trial_967) == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P912 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_997 = NULL;
{ R913 *cell998 = rt_alloc(sizeof(R913));
(*cell998).head = NULL;
(*cell998).tail = NULL;
F->b_997 = cell998;
}
F->result_ = F->b_997;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P912 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_999 = NULL;
{ R894 *cell1000 = rt_alloc(sizeof(R894));
(*cell1000).s = NULL;
(*cell1000).next = NULL;
F->l_999 = cell1000;
}
(*(P893)rt_nil_check(F->l_999)).s = f_mk_3(&(*F->s_26));
if (((*(P912)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P912)rt_nil_check(F->b_25)).head = F->l_999;
} else {
(*(P893)rt_nil_check((*(P912)rt_nil_check(F->b_25)).tail)).next = F->l_999;
}
(*(P912)rt_nil_check(F->b_25)).tail = F->l_999;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_939, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P912 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_1001 = NULL;
F->l_1001 = (*(P912)rt_nil_check(F->b_30)).head;
while ((F->l_1001 != NULL)) {
rt_putln((((P882)rt_nil_check((*(P893)rt_nil_check(F->l_1001)).s))->all));
F->l_1001 = (*(P893)rt_nil_check(F->l_1001)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P912 a_32, P912 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P912)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P912)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P912)rt_nil_check(F->a_32)).head = (*(P912)rt_nil_check(F->b_33)).head;
} else {
(*(P893)rt_nil_check((*(P912)rt_nil_check(F->a_32)).tail)).next = (*(P912)rt_nil_check(F->b_33)).head;
}
(*(P912)rt_nil_check(F->a_32)).tail = (*(P912)rt_nil_check(F->b_33)).tail;
(*(P912)rt_nil_check(F->b_33)).head = NULL;
(*(P912)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel1002 = (*F->w_35);
if (0 || rt_str_eq(sel1002, rt_str("ABBREV", 6)) || rt_str_eq(sel1002, rt_str("ABNORMAL", 8)) || rt_str_eq(sel1002, rt_str("ALL", 3)) || rt_str_eq(sel1002, rt_str("ALLOC", 5)) || rt_str_eq(sel1002, rt_str("ASSERT", 6)) || rt_str_eq(sel1002, rt_str("BEGIN", 5)) || rt_str_eq(sel1002, rt_str("BY", 2)) || rt_str_eq(sel1002, rt_str("CAPSULE", 7)) || rt_str_eq(sel1002, rt_str("CASE", 4)) || rt_str_eq(sel1002, rt_str("CONST", 5)) || rt_str_eq(sel1002, rt_str("CREATE", 6)) || rt_str_eq(sel1002, rt_str("DO", 2)) || rt_str_eq(sel1002, rt_str("ELSE", 4)) || rt_str_eq(sel1002, rt_str("ELSEIF", 6)) || rt_str_eq(sel1002, rt_str("END", 3)) || rt_str_eq(sel1002, rt_str("EXCEPTION", 9)) || rt_str_eq(sel1002, rt_str("EXIT", 4)) || rt_str_eq(sel1002, rt_str("EXPORTS", 7)) || rt_str_eq(sel1002, rt_str("EXPOSE", 6)) || rt_str_eq(sel1002, rt_str("EXTERNAL", 8)) || rt_str_eq(sel1002, rt_str("FOR", 3)) || rt_str_eq(sel1002, rt_str("FROM", 4)) || rt_str_eq(sel1002, rt_str("FUNC", 4)) || rt_str_eq(sel1002, rt_str("GENERIC", 7)) || rt_str_eq(sel1002, rt_str("GOTO", 4)) || rt_str_eq(sel1002, rt_str("GUARD", 5)) || rt_str_eq(sel1002, rt_str("IF", 2)) || rt_str_eq(sel1002, rt_str("IMPORTS", 7)) || rt_str_eq(sel1002, rt_str("LOCATION", 8)) || rt_str_eq(sel1002, rt_str("NAMED", 5)) || rt_str_eq(sel1002, rt_str("NEEDS", 5)) || rt_str_eq(sel1002, rt_str("NEW", 3)) || rt_str_eq(sel1002, rt_str("NONE", 4)) || rt_str_eq(sel1002, rt_str("OUT", 3)) || rt_str_eq(sel1002, rt_str("OF", 2)) || rt_str_eq(sel1002, rt_str("PRAG", 4)) || rt_str_eq(sel1002, rt_str("PROC", 4)) || rt_str_eq(sel1002, rt_str("RAISE", 5)) || rt_str_eq(sel1002, rt_str("READONLY", 8)) || rt_str_eq(sel1002, rt_str("REVERSE", 7)) || rt_str_eq(sel1002, rt_str("REGION", 6)) || rt_str_eq(sel1002, rt_str("RENAMING", 8)) || rt_str_eq(sel1002, rt_str("REP", 3)) || rt_str_eq(sel1002, rt_str("REPEAT", 6)) || rt_str_eq(sel1002, rt_str("RERAISE", 7)) || rt_str_eq(sel1002, rt_str("RETURN", 6)) || rt_str_eq(sel1002, rt_str("SUBTYPE", 7)) || rt_str_eq(sel1002, rt_str("TASK", 4)) || rt_str_eq(sel1002, rt_str("THEN", 4)) || rt_str_eq(sel1002, rt_str("TO", 2)) || rt_str_eq(sel1002, rt_str("TYPE", 4)) || rt_str_eq(sel1002, rt_str("VAR", 3)) || rt_str_eq(sel1002, rt_str("WAIT", 4)) || rt_str_eq(sel1002, rt_str("WHEN", 4)) || rt_str_eq(sel1002, rt_str("WHILE", 5))) {
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
F->t_1003 = NULL;
{ R885 *cell1004 = rt_alloc(sizeof(R885));
(*cell1004).s = NULL;
(*cell1004).prags = NULL;
F->t_1003 = cell1004;
}
(*(P884)rt_nil_check(F->t_1003)).kind = F->kind_39;
(*(P884)rt_nil_check(F->t_1003)).line = rt_r_ichk(g_src_line_923);
(*(P884)rt_nil_check(F->t_1003)).ival = F->ival_41;
(*(P884)rt_nil_check(F->t_1003)).s = f_mk_3(&(*F->s_40));
(*(P884)rt_nil_check(F->t_1003)).prags = g_pending_prag_924;
g_pending_prag_924 = NULL;
g_ntoks_921 = rt_add(rt_r_ichk(g_ntoks_921), ((rt_int)1LL));
(((P886)rt_nil_check(g_toks_920))->all).p[(rt_index(rt_r_ichk(g_ntoks_921), (((P886)rt_nil_check(g_toks_920))->all).lo, (((P886)rt_nil_check(g_toks_920))->all).hi) - (((P886)rt_nil_check(g_toks_920))->all).lo)] = F->t_1003;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_1005 = RT_R_IUNDEF;
F->j_1005 = rt_add(F->i_44, ((rt_int)1LL));
while (((rt_r_ichk(F->j_1005) <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1005)))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1005))))) || (rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1005))) == 95)))) {
if (((rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1005))) == 95) && ((rt_r_ichk(F->j_1005) == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_1005), ((rt_int)1LL))))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_1005), ((rt_int)1LL)))))))))) {
f_fail_23(rt_r_ichk(g_src_line_923), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_1005 = rt_add(rt_r_ichk(F->j_1005), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_1005);
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
F->w_1006 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_1006, (*F->s_46));
{ rt_int lo1008 = ((rt_int)1LL), hi1009 = ((rt_int)((F->w_1006).len));
for (rt_int it1010 = lo1008; it1010 <= hi1009; it1010++) {
F->k_1007 = it1010;
(*rt_str_at(&F->w_1006, F->k_1007)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1006, F->k_1007)));
}
}
F->result_ = F->w_1006;
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
F->j_1011 = RT_R_IUNDEF;
F->j_1011 = F->i_49;
while (((rt_r_ichk(F->j_1011) <= ((rt_int)(((*F->line_48)).len))) && ((rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_1011))) == 32) || (rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_1011))) == 9)))) {
F->j_1011 = rt_add(rt_r_ichk(F->j_1011), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_1011);
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
F->j_1012 = RT_R_IUNDEF;
F->j_1012 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_1013 = NULL;
F->r_1013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_1014 = RT_R_EUNDEF;
F->more_1014 = 1;
if (((rt_r_ichk(F->j_1012) > ((rt_int)(((*F->line_51)).len))) || (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1012))) != 40))) {
f_fail_23(rt_r_ichk(g_src_line_923), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_1012 = rt_add(rt_r_ichk(F->j_1012), ((rt_int)1LL));
while (rt_r_echk(F->more_1014)) {
F->k_1015 = RT_R_IUNDEF;
F->j_1012 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1012));
if (((rt_r_ichk(F->j_1012) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1012))))))) {
f_fail_23(rt_r_ichk(g_src_line_923), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_1015 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_1012));
F->r_1013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_1013))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_1012), rt_sub(rt_r_ichk(F->k_1015), ((rt_int)1LL))); b_; }))); b_; }));
F->j_1012 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_1015));
if (((rt_r_ichk(F->j_1012) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1012))) == 40))) {
F->go_1016 = RT_R_EUNDEF;
F->go_1016 = 1;
F->r_1013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_1013))->all), rt_str("(", 1)); b_; }));
F->j_1012 = rt_add(rt_r_ichk(F->j_1012), ((rt_int)1LL));
while (rt_r_echk(F->go_1016)) {
F->j_1012 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1012));
if (((rt_r_ichk(F->j_1012) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1012))))))) {
f_fail_23(rt_r_ichk(g_src_line_923), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_1015 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_1012));
F->r_1013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_1013))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_1012), rt_sub(rt_r_ichk(F->k_1015), ((rt_int)1LL))); b_; }))); b_; }));
F->j_1012 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_1015));
if (((rt_r_ichk(F->j_1012) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1012))) == 44))) {
F->r_1013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_1013))->all), rt_str(",", 1)); b_; }));
F->j_1012 = rt_add(rt_r_ichk(F->j_1012), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_1012) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1012))) == 41))) {
F->j_1012 = rt_add(rt_r_ichk(F->j_1012), ((rt_int)1LL));
F->go_1016 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_923), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_1013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_1013))->all), rt_str(")", 1)); b_; }));
}
F->r_1013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_1013))->all), rt_str(";", 1)); b_; }));
F->j_1012 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1012));
if (((rt_r_ichk(F->j_1012) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1012))) == 44))) {
F->j_1012 = rt_add(rt_r_ichk(F->j_1012), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_1012) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1012))) == 41))) {
F->j_1012 = rt_add(rt_r_ichk(F->j_1012), ((rt_int)1LL));
F->more_1014 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_923), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P882)rt_nil_check(F->r_1013))->all));
if ((g_pending_prag_924 == NULL)) {
g_pending_prag_924 = F->r_1013;
} else {
g_pending_prag_924 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(g_pending_prag_924))->all), (((P882)rt_nil_check(F->r_1013))->all)); b_; }));
}
F->result_ = rt_r_ichk(F->j_1012);
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
F->i_1017 = RT_R_IUNDEF;
F->i_1017 = ((rt_int)1LL);
F->k_1018 = RT_R_IUNDEF;
while ((rt_r_ichk(F->i_1017) <= ((rt_int)(((*F->r_54)).len)))) {
F->k_1018 = rt_r_ichk(F->i_1017);
while ((rt_r_echk(rt_str_get((*F->r_54), rt_r_ichk(F->k_1018))) != 59)) {
F->k_1018 = rt_add(rt_r_ichk(F->k_1018), ((rt_int)1LL));
}
{
F->p_1019 = rt_str_copy(rt_str_slice((*F->r_54), rt_r_ichk(F->i_1017), rt_sub(rt_r_ichk(F->k_1018), ((rt_int)1LL))));
F->ok_1020 = ((((((((((rt_str_eq(F->p_1019, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_1019, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_1019, rt_str("OPEN", 4))) || rt_str_eq(F->p_1019, rt_str("CLOSED", 6))) || rt_str_eq(F->p_1019, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_1019, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_1019, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1019, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_1019, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_1019, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_1019).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_1019, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_1021 = ((((((((((rt_int)((F->p_1019).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_1019, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_1019, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_1019, rt_str("OPEN", 4))) || rt_str_eq(F->p_1019, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_1019).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_1019, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_1019, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1019, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_1019).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_1019, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_1021 && (!F->ok_1020))) {
f_fail_23(rt_r_ichk(g_src_line_923), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_1019); b_; }));
}
}
F->i_1017 = rt_add(rt_r_ichk(F->k_1018), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_1022 = RT_R_IUNDEF;
F->i_1022 = ((rt_int)1LL);
F->j_1023 = RT_R_IUNDEF;
F->j_1023 = ((rt_int)0LL);
F->n_1024 = RT_R_IUNDEF;
F->n_1024 = ((rt_int)(((*F->line_56)).len));
F->c_1025 = RT_R_EUNDEF;
while ((rt_r_ichk(F->i_1022) <= rt_r_ichk(F->n_1024))) {
F->c_1025 = rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->i_1022)));
if (((((rt_r_echk(F->c_1025) == 32) || (rt_r_echk(F->c_1025) == 9)) || (rt_r_echk(F->c_1025) == 13)) || (rt_r_echk(F->c_1025) == 12))) {
F->i_1022 = rt_add(rt_r_ichk(F->i_1022), ((rt_int)1LL));
} else if ((rt_r_echk(F->c_1025) == 37)) {
F->i_1022 = rt_add(rt_r_ichk(F->n_1024), ((rt_int)1LL));
} else if (f_is_letter_9(rt_r_echk(F->c_1025))) {
F->j_1023 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->i_1022));
{
F->w_1026 = rt_str_new(rt_sub(rt_r_ichk(F->j_1023), rt_r_ichk(F->i_1022)));
rt_str_assign(&F->w_1026, rt_str_slice((*F->line_56), rt_r_ichk(F->i_1022), rt_sub(rt_r_ichk(F->j_1023), ((rt_int)1LL))));
{ rt_int lo1028 = ((rt_int)1LL), hi1029 = ((rt_int)((F->w_1026).len));
for (rt_int it1030 = lo1028; it1030 <= hi1029; it1030++) {
F->k_1027 = it1030;
(*rt_str_at(&F->w_1026, F->k_1027)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1026, F->k_1027)));
}
}
if (rt_str_eq(F->w_1026, rt_str("PRAGMAT", 7))) {
while (((rt_r_ichk(F->j_1023) <= rt_r_ichk(F->n_1024)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1023))) != 59))) {
F->j_1023 = rt_add(rt_r_ichk(F->j_1023), ((rt_int)1LL));
}
F->j_1023 = rt_add(rt_r_ichk(F->j_1023), ((rt_int)1LL));
} else if (rt_str_eq(F->w_1026, rt_str("PRAG", 4))) {
F->j_1023 = f_lex_prag_53(&(*F->line_56), rt_r_ichk(F->j_1023));
} else if (f_is_reserved_36(&F->w_1026)) {
f_add_token_42((((rt_int)2LL)), &F->w_1026, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_1026)) {
f_add_token_42((((rt_int)3LL)), &F->w_1026, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_1026, ((rt_int)0LL));
}
}
F->i_1022 = rt_r_ichk(F->j_1023);
} else if (f_is_digit_11(rt_r_echk(F->c_1025))) {
F->j_1023 = rt_r_ichk(F->i_1022);
while (((rt_r_ichk(F->j_1023) <= rt_r_ichk(F->n_1024)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1023)))))) {
F->j_1023 = rt_add(rt_r_ichk(F->j_1023), ((rt_int)1LL));
}
if ((((rt_r_ichk(F->j_1023) < rt_r_ichk(F->n_1024)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1023))) == 46)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_1023), ((rt_int)1LL))))))) {
F->j_1023 = rt_add(rt_r_ichk(F->j_1023), ((rt_int)1LL));
while (((rt_r_ichk(F->j_1023) <= rt_r_ichk(F->n_1024)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1023)))))) {
F->j_1023 = rt_add(rt_r_ichk(F->j_1023), ((rt_int)1LL));
}
if (((rt_r_ichk(F->j_1023) <= rt_r_ichk(F->n_1024)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1023))) == 69) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1023))) == 101)))) {
F->j_1023 = rt_add(rt_r_ichk(F->j_1023), ((rt_int)1LL));
if (((rt_r_ichk(F->j_1023) <= rt_r_ichk(F->n_1024)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1023))) == 43) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1023))) == 45)))) {
F->j_1023 = rt_add(rt_r_ichk(F->j_1023), ((rt_int)1LL));
}
while (((rt_r_ichk(F->j_1023) <= rt_r_ichk(F->n_1024)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1023)))))) {
F->j_1023 = rt_add(rt_r_ichk(F->j_1023), ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_1022), rt_sub(rt_r_ichk(F->j_1023), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_1022), rt_sub(rt_r_ichk(F->j_1023), ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), rt_r_ichk(F->i_1022), rt_sub(rt_r_ichk(F->j_1023), ((rt_int)1LL)))));
}
F->i_1022 = rt_r_ichk(F->j_1023);
} else if ((((rt_r_echk(F->c_1025) == 39) && (rt_r_ichk(F->i_1022) < rt_r_ichk(F->n_1024))) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_1022), ((rt_int)1LL)))) == 39))) {
F->j_1023 = rt_add(rt_r_ichk(F->i_1022), ((rt_int)2LL));
while (((rt_r_ichk(F->j_1023) < rt_r_ichk(F->n_1024)) && (!((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1023))) == 39) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_1023), ((rt_int)1LL)))) == 39))))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1023))) == 34)) {
f_fail_23(rt_r_ichk(g_src_line_923), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_1023 = rt_add(rt_r_ichk(F->j_1023), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_1023) >= rt_r_ichk(F->n_1024))) {
f_fail_23(rt_r_ichk(g_src_line_923), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1022), ((rt_int)2LL)), rt_sub(rt_r_ichk(F->j_1023), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1022 = rt_add(rt_r_ichk(F->j_1023), ((rt_int)2LL));
} else if ((rt_r_echk(F->c_1025) == 39)) {
F->j_1023 = rt_add(rt_r_ichk(F->i_1022), ((rt_int)1LL));
if (((rt_r_ichk(F->j_1023) > rt_r_ichk(F->n_1024)) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1023))))))) {
f_fail_23(rt_r_ichk(g_src_line_923), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_1023 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->j_1023));
{
F->w_1031 = rt_str_new(rt_sub(rt_sub(rt_r_ichk(F->j_1023), rt_r_ichk(F->i_1022)), ((rt_int)1LL)));
rt_str_assign(&F->w_1031, rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1022), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_1023), ((rt_int)1LL))));
{ rt_int lo1033 = ((rt_int)1LL), hi1034 = ((rt_int)((F->w_1031).len));
for (rt_int it1035 = lo1033; it1035 <= hi1034; it1035++) {
F->k_1032 = it1035;
(*rt_str_at(&F->w_1031, F->k_1032)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1031, F->k_1032)));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_1031, ((rt_int)0LL));
}
F->i_1022 = rt_r_ichk(F->j_1023);
} else if ((rt_r_echk(F->c_1025) == 34)) {
F->j_1023 = rt_add(rt_r_ichk(F->i_1022), ((rt_int)1LL));
while (((rt_r_ichk(F->j_1023) <= rt_r_ichk(F->n_1024)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1023))) != 34))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1023))) == 39)) {
f_fail_23(rt_r_ichk(g_src_line_923), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_1023 = rt_add(rt_r_ichk(F->j_1023), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_1023) > rt_r_ichk(F->n_1024))) {
f_fail_23(rt_r_ichk(g_src_line_923), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1022), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_1023), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1022 = rt_add(rt_r_ichk(F->j_1023), ((rt_int)1LL));
} else {
{
F->two_1036 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_1036, rt_str("  ", 2));
(*rt_str_at(&F->two_1036, ((rt_int)1LL))) = rt_r_echk(F->c_1025);
if ((rt_r_ichk(F->i_1022) < rt_r_ichk(F->n_1024))) {
(*rt_str_at(&F->two_1036, ((rt_int)2LL))) = rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_1022), ((rt_int)1LL))));
}
if (((((((rt_str_eq(F->two_1036, rt_str(":=", 2)) || rt_str_eq(F->two_1036, rt_str("=>", 2))) || rt_str_eq(F->two_1036, rt_str("..", 2))) || rt_str_eq(F->two_1036, rt_str("**", 2))) || rt_str_eq(F->two_1036, rt_str("/=", 2))) || rt_str_eq(F->two_1036, rt_str("<=", 2))) || rt_str_eq(F->two_1036, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_1036, ((rt_int)0LL));
F->i_1022 = rt_add(rt_r_ichk(F->i_1022), ((rt_int)2LL));
} else if (((rt_str_eq(F->two_1036, rt_str("<<", 2)) || rt_str_eq(F->two_1036, rt_str(">>", 2))) || rt_str_eq(F->two_1036, rt_str("::", 2)))) {
if (rt_str_eq(F->two_1036, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_1036, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_1022 = rt_add(rt_r_ichk(F->i_1022), ((rt_int)2LL));
} else if ((((((((((((((((((rt_r_echk(F->c_1025) == 40) || (rt_r_echk(F->c_1025) == 41)) || (rt_r_echk(F->c_1025) == 91)) || (rt_r_echk(F->c_1025) == 93)) || (rt_r_echk(F->c_1025) == 44)) || (rt_r_echk(F->c_1025) == 58)) || (rt_r_echk(F->c_1025) == 59)) || (rt_r_echk(F->c_1025) == 46)) || (rt_r_echk(F->c_1025) == 35)) || (rt_r_echk(F->c_1025) == 43)) || (rt_r_echk(F->c_1025) == 45)) || (rt_r_echk(F->c_1025) == 42)) || (rt_r_echk(F->c_1025) == 47)) || (rt_r_echk(F->c_1025) == 38)) || (rt_r_echk(F->c_1025) == 61)) || (rt_r_echk(F->c_1025) == 60)) || (rt_r_echk(F->c_1025) == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(rt_r_echk(F->c_1025)); b_; }), ((rt_int)0LL));
F->i_1022 = rt_add(rt_r_ichk(F->i_1022), ((rt_int)1LL));
} else {
f_fail_23(rt_r_ichk(g_src_line_923), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_1037 = rt_str_new(rt_sizeln());
rt_readln(&F->line_1037);
g_src_line_923 = rt_add(rt_r_ichk(g_src_line_923), ((rt_int)1LL));
f_lex_line_57(&F->line_1037);
}
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P889 f_nn_61(rt_int kind_59, rt_int line_60) {
  struct f_nn_61fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_59 = kind_59;
F->line_60 = line_60;
F->x_1038 = NULL;
{ R890 *cell1039 = rt_alloc(sizeof(R890));
(*cell1039).name = NULL;
(*cell1039).tag = NULL;
(*cell1039).prags = NULL;
(*cell1039).labels = NULL;
(*cell1039).a = NULL;
(*cell1039).b = NULL;
(*cell1039).c = NULL;
(*cell1039).d = NULL;
(*cell1039).e = NULL;
(*cell1039).next = NULL;
F->x_1038 = cell1039;
}
(*(P889)rt_nil_check(F->x_1038)).kind = F->kind_59;
(*(P889)rt_nil_check(F->x_1038)).line = F->line_60;
F->result_ = F->x_1038;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_65(P889 *head_62, P889 *tail_63, P889 x_64) {
  struct f_append_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_62 = head_62;
F->tail_63 = tail_63;
F->x_64 = x_64;
if (((*F->head_62) == NULL)) {
(*F->head_62) = F->x_64;
} else {
(*(P889)rt_nil_check((*F->tail_63))).next = F->x_64;
}
(*F->tail_63) = F->x_64;
while (((*(P889)rt_nil_check((*F->tail_63))).next != NULL)) {
(*F->tail_63) = (*(P889)rt_nil_check((*F->tail_63))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_67(P889 l_66) {
  struct f_list_len_67fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_66 = l_66;
F->n_1040 = RT_R_IUNDEF;
F->n_1040 = ((rt_int)0LL);
F->p_1041 = NULL;
F->p_1041 = F->l_66;
while ((F->p_1041 != NULL)) {
F->n_1040 = rt_add(rt_r_ichk(F->n_1040), ((rt_int)1LL));
F->p_1041 = (*(P889)rt_nil_check(F->p_1041)).next;
}
F->result_ = rt_r_ichk(F->n_1040);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_68(void) {
  struct f_cur_line_68fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = rt_r_ichk((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).line);
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
F->result_ = ((rt_r_ichk((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)2LL))) && rt_str_eq((((P882)rt_nil_check((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_69)));
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
F->result_ = ((rt_r_ichk((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)3LL))) && rt_str_eq((((P882)rt_nil_check((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_71)));
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
F->result_ = (rt_r_ichk((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).kind) == F->k_73);
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
if ((rt_add(rt_r_ichk(g_tpos_922), F->k_75) > rt_r_ichk(g_ntoks_921))) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = rt_r_ichk((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_922), F->k_75), b_.lo, b_.hi) - b_.lo)]; }))).kind);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P882 f_text_at_78(rt_int k_77) {
  struct f_text_at_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_77 = k_77;
if ((rt_add(rt_r_ichk(g_tpos_922), F->k_77) > rt_r_ichk(g_ntoks_921))) {
F->result_ = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_ntoks_921), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_922), F->k_77), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23(rt_r_ichk((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_79), rt_str(" (at ", 5)), (((P882)rt_nil_check((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_82(rstr *w_81) {
  struct f_accept_kw_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_81 = w_81;
if (f_at_kw_70(&(*F->w_81))) {
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
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
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
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
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
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
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P882 f_expect_id_89(void) {
  struct f_expect_id_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->result_ = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_922), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_name_node_90(void) {
  struct f_name_node_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1042 = NULL;
F->x_1042 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P889)rt_nil_check(F->x_1042)).name = f_expect_id_89();
F->result_ = F->x_1042;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_id_list_91(void) {
  struct f_id_list_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1043 = NULL;
F->tail_1044 = NULL;
f_append_65(&F->head_1043, &F->tail_1044, f_name_node_90());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1043, &F->tail_1044, f_name_node_90());
}
F->result_ = F->head_1043;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_p_subtype_92(void) {
  struct f_p_subtype_92fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1045 = RT_R_IUNDEF;
F->line_1045 = f_cur_line_68();
F->x_1046 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->x_1046 = f_nn_61((((rt_int)81LL)), rt_r_ichk(F->line_1045));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P889)rt_nil_check(F->x_1046)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1046;
goto ret_;
}
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_1047 = rt_str_copy((((P882)rt_nil_check((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
if (rt_str_eq(F->w_1047, rt_str("ARRAY", 5))) {
F->x_1046 = f_nn_61((((rt_int)74LL)), rt_r_ichk(F->line_1045));
{
F->head_1048 = NULL;
F->tail_1049 = NULL;
f_append_65(&F->head_1048, &F->tail_1049, f_p_subtype_92());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1048, &F->tail_1049, f_p_subtype_92());
}
(*(P889)rt_nil_check(F->x_1046)).a = F->head_1048;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P889)rt_nil_check(F->x_1046)).b = f_p_subtype_92();
} else if ((rt_str_eq(F->w_1047, rt_str("RECORD", 6)) || rt_str_eq(F->w_1047, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_1047, rt_str("RECORD", 6))) {
F->x_1046 = f_nn_61((((rt_int)75LL)), rt_r_ichk(F->line_1045));
} else {
F->x_1046 = f_nn_61((((rt_int)76LL)), rt_r_ichk(F->line_1045));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1050 = NULL;
F->tail_1051 = NULL;
F->more_1052 = RT_R_EUNDEF;
F->more_1052 = 1;
while (rt_r_echk(F->more_1052)) {
F->names_1053 = NULL;
F->names_1053 = f_id_list_91();
F->st_1054 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1054 = f_p_subtype_92();
while ((F->names_1053 != NULL)) {
F->cmp_1055 = NULL;
F->cmp_1055 = f_nn_61((((rt_int)63LL)), rt_r_ichk((*(P889)rt_nil_check(F->names_1053)).line));
(*(P889)rt_nil_check(F->cmp_1055)).name = (*(P889)rt_nil_check(F->names_1053)).name;
(*(P889)rt_nil_check(F->cmp_1055)).a = F->st_1054;
f_append_65(&F->head_1050, &F->tail_1051, F->cmp_1055);
F->names_1053 = (*(P889)rt_nil_check(F->names_1053)).next;
}
F->more_1052 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P889)rt_nil_check(F->x_1046)).a = F->head_1050;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_1047, rt_str("UNION", 5)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1046)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1047, rt_str("ENUM", 4))) {
F->x_1046 = f_nn_61((((rt_int)72LL)), rt_r_ichk(F->line_1045));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1056 = NULL;
F->tail_1057 = NULL;
F->more_1058 = RT_R_EUNDEF;
F->more_1058 = 1;
while (rt_r_echk(F->more_1058)) {
F->lit_1059 = NULL;
F->lit_1059 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_1045));
if ((!f_at_kind_74((((rt_int)6LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P889)rt_nil_check(F->lit_1059)).name = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
f_append_65(&F->head_1056, &F->tail_1057, F->lit_1059);
F->more_1058 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P889)rt_nil_check(F->x_1046)).a = F->head_1056;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1046)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P889)rt_nil_check(F->x_1046)).c = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_1047, rt_str("STRING", 6)) || rt_str_eq(F->w_1047, rt_str("SET", 3))) || rt_str_eq(F->w_1047, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_1047, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_1047, rt_str("STRING", 6))) {
F->x_1046 = f_nn_61((((rt_int)73LL)), rt_r_ichk(F->line_1045));
} else if (rt_str_eq(F->w_1047, rt_str("SET", 3))) {
F->x_1046 = f_nn_61((((rt_int)77LL)), rt_r_ichk(F->line_1045));
} else if (rt_str_eq(F->w_1047, rt_str("MAILBOX", 7))) {
F->x_1046 = f_nn_61((((rt_int)78LL)), rt_r_ichk(F->line_1045));
} else {
F->x_1046 = f_nn_61((((rt_int)79LL)), rt_r_ichk(F->line_1045));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P889)rt_nil_check(F->x_1046)).a = f_p_subtype_92();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1046)).b = f_actual_params_94();
}
} else if (rt_str_eq(F->w_1047, rt_str("INT", 3))) {
F->x_1046 = f_nn_61((((rt_int)70LL)), rt_r_ichk(F->line_1045));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1046)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P889)rt_nil_check(F->x_1046)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1047, rt_str("FLOAT", 5))) {
F->x_1046 = f_nn_61((((rt_int)71LL)), rt_r_ichk(F->line_1045));
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1046)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1046)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P889)rt_nil_check(F->x_1046)).c = f_expr_103();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_1046 = f_nn_61((((rt_int)80LL)), rt_r_ichk(F->line_1045));
(*(P889)rt_nil_check(F->x_1046)).name = f_mk_3(&F->w_1047);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1046)).a = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1046)).b = f_constraint_list_93();
(*(P889)rt_nil_check(F->x_1046)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_1046;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_constraint_list_93(void) {
  struct f_constraint_list_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1060 = NULL;
F->tail_1061 = NULL;
F->more_1062 = RT_R_EUNDEF;
F->more_1062 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1062)) {
F->line_1063 = RT_R_IUNDEF;
F->line_1063 = f_cur_line_68();
F->lo_1064 = NULL;
F->lo_1064 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1065 = NULL;
F->r_1065 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_1063));
(*(P889)rt_nil_check(F->r_1065)).a = F->lo_1064;
(*(P889)rt_nil_check(F->r_1065)).b = f_expr_103();
f_append_65(&F->head_1060, &F->tail_1061, F->r_1065);
} else {
f_append_65(&F->head_1060, &F->tail_1061, F->lo_1064);
}
F->more_1062 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1060;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_actual_params_94(void) {
  struct f_actual_params_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1066 = NULL;
F->tail_1067 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_65(&F->head_1066, &F->tail_1067, f_expr_103());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1066, &F->tail_1067, f_expr_103());
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1066;
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

static P889 f_actual_tt_97(void) {
  struct f_actual_tt_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1068 = NULL;
F->tail_1069 = NULL;
F->more_1070 = RT_R_EUNDEF;
F->more_1070 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1070)) {
if ((f_at_kind_74((((rt_int)1LL))) && f_is_type_word_96(&(((P882)rt_nil_check((*(P884)rt_nil_check((((P886)rt_nil_check(g_toks_920))->all).p[(rt_index(rt_r_ichk(g_tpos_922), (((P886)rt_nil_check(g_toks_920))->all).lo, (((P886)rt_nil_check(g_toks_920))->all).hi) - (((P886)rt_nil_check(g_toks_920))->all).lo)])).s))->all)))) {
f_append_65(&F->head_1068, &F->tail_1069, f_p_subtype_92());
} else {
f_append_65(&F->head_1068, &F->tail_1069, f_expr_103());
}
F->more_1070 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1068;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_binop_102(P882 op_98, P889 l_99, P889 r_100, rt_int line_101) {
  struct f_binop_102fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_98 = op_98;
F->l_99 = l_99;
F->r_100 = r_100;
F->line_101 = line_101;
F->x_1071 = NULL;
F->x_1071 = f_nn_61((((rt_int)9LL)), F->line_101);
(*(P889)rt_nil_check(F->x_1071)).name = F->op_98;
(*(P889)rt_nil_check(F->x_1071)).a = F->l_99;
(*(P889)rt_nil_check(F->x_1071)).b = F->r_100;
F->result_ = F->x_1071;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_expr_103(void) {
  struct f_expr_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1072 = NULL;
F->l_1072 = f_expr_and_104();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_1073 = NULL;
F->op_1073 = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1074 = RT_R_IUNDEF;
F->line_1074 = f_cur_line_68();
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->l_1072 = f_binop_102(F->op_1073, F->l_1072, f_expr_and_104(), rt_r_ichk(F->line_1074));
}
F->result_ = F->l_1072;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_expr_and_104(void) {
  struct f_expr_and_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1075 = NULL;
F->l_1075 = f_expr_not_105();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_1076 = RT_R_IUNDEF;
F->line_1076 = f_cur_line_68();
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->l_1075 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_1075, f_expr_not_105(), rt_r_ichk(F->line_1076));
}
F->result_ = F->l_1075;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_expr_not_105(void) {
  struct f_expr_not_105fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_1077 = NULL;
F->x_1077 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1077)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P889)rt_nil_check(F->x_1077)).a = f_expr_not_105();
F->result_ = F->x_1077;
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

static P889 f_expr_rel_108(void) {
  struct f_expr_rel_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1078 = NULL;
F->l_1078 = f_expr_add_109();
while ((f_at_kind_74((((rt_int)3LL))) && f_is_rel_107(&(((P882)rt_nil_check((*(P884)rt_nil_check((((P886)rt_nil_check(g_toks_920))->all).p[(rt_index(rt_r_ichk(g_tpos_922), (((P886)rt_nil_check(g_toks_920))->all).lo, (((P886)rt_nil_check(g_toks_920))->all).hi) - (((P886)rt_nil_check(g_toks_920))->all).lo)])).s))->all)))) {
F->op_1079 = NULL;
F->op_1079 = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1080 = RT_R_IUNDEF;
F->line_1080 = f_cur_line_68();
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->l_1078 = f_binop_102(F->op_1079, F->l_1078, f_expr_add_109(), rt_r_ichk(F->line_1080));
}
F->result_ = F->l_1078;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_expr_add_109(void) {
  struct f_expr_add_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1081 = NULL;
F->l_1081 = f_expr_mul_110();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_1082 = NULL;
F->op_1082 = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1083 = RT_R_IUNDEF;
F->line_1083 = f_cur_line_68();
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->l_1081 = f_binop_102(F->op_1082, F->l_1081, f_expr_mul_110(), rt_r_ichk(F->line_1083));
}
F->result_ = F->l_1081;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_expr_mul_110(void) {
  struct f_expr_mul_110fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1084 = NULL;
F->l_1084 = f_expr_pow_111();
while (((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1085 = NULL;
F->op_1085 = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1086 = RT_R_IUNDEF;
F->line_1086 = f_cur_line_68();
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->l_1084 = f_binop_102(F->op_1085, F->l_1084, f_expr_pow_111(), rt_r_ichk(F->line_1086));
}
F->result_ = F->l_1084;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_expr_pow_111(void) {
  struct f_expr_pow_111fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1087 = NULL;
F->l_1087 = f_expr_prefix_112();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1088 = RT_R_IUNDEF;
F->line_1088 = f_cur_line_68();
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->l_1087 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1087, f_expr_prefix_112(), rt_r_ichk(F->line_1088));
}
F->result_ = F->l_1087;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_expr_prefix_112(void) {
  struct f_expr_prefix_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1089 = NULL;
F->x_1089 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
(*(P889)rt_nil_check(F->x_1089)).name = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1089)).a = f_expr_prefix_112();
F->result_ = F->x_1089;
goto ret_;
}
F->result_ = f_postfix_113();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_postfix_113(void) {
  struct f_postfix_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1090 = NULL;
F->p_1090 = f_primary_114();
while (1) {
F->line_1091 = RT_R_IUNDEF;
F->line_1091 = f_cur_line_68();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1092 = NULL;
F->x_1092 = f_nn_61((((rt_int)10LL)), rt_r_ichk(F->line_1091));
F->head_1093 = NULL;
F->tail_1094 = NULL;
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1095 = RT_R_EUNDEF;
F->more_1095 = 1;
while (rt_r_echk(F->more_1095)) {
F->lo_1096 = NULL;
F->lo_1096 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1097 = NULL;
F->r_1097 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_1091));
(*(P889)rt_nil_check(F->r_1097)).a = F->lo_1096;
(*(P889)rt_nil_check(F->r_1097)).b = f_expr_103();
f_append_65(&F->head_1093, &F->tail_1094, F->r_1097);
} else {
f_append_65(&F->head_1093, &F->tail_1094, F->lo_1096);
}
F->more_1095 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P889)rt_nil_check(F->x_1092)).a = F->p_1090;
(*(P889)rt_nil_check(F->x_1092)).b = F->head_1093;
F->p_1090 = F->x_1092;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1098 = NULL;
F->x_1098 = f_nn_61((((rt_int)11LL)), rt_r_ichk(F->line_1091));
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1098)).a = F->p_1090;
(*(P889)rt_nil_check(F->x_1098)).name = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->p_1090 = F->x_1098;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && (rt_r_ichk((*(P889)rt_nil_check(F->p_1090)).kind) == (((rt_int)7LL))))) {
F->x_1099 = NULL;
F->x_1099 = f_nn_61((((rt_int)12LL)), rt_r_ichk(F->line_1091));
(*(P889)rt_nil_check(F->x_1099)).a = F->p_1090;
(*(P889)rt_nil_check(F->x_1099)).b = f_actual_tt_97();
F->p_1090 = F->x_1099;
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1100 = NULL;
F->x_1100 = f_nn_61((((rt_int)13LL)), rt_r_ichk(F->line_1091));
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1100)).a = F->p_1090;
(*(P889)rt_nil_check(F->x_1100)).b = f_p_subtype_92();
F->p_1090 = F->x_1100;
} else {
F->result_ = F->p_1090;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_primary_114(void) {
  struct f_primary_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1101 = RT_R_IUNDEF;
F->line_1101 = f_cur_line_68();
F->x_1102 = NULL;
F->k_1103 = RT_R_IUNDEF;
F->k_1103 = rt_r_ichk((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).kind);
if ((rt_r_ichk(F->k_1103) == (((rt_int)4LL)))) {
F->x_1102 = f_nn_61((((rt_int)1LL)), rt_r_ichk(F->line_1101));
(*(P889)rt_nil_check(F->x_1102)).ival = rt_r_ichk((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).ival);
(*(P889)rt_nil_check(F->x_1102)).name = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->result_ = F->x_1102;
goto ret_;
}
if ((((rt_r_ichk(F->k_1103) == (((rt_int)5LL))) || (rt_r_ichk(F->k_1103) == (((rt_int)7LL)))) || (rt_r_ichk(F->k_1103) == (((rt_int)6LL))))) {
if ((rt_r_ichk(F->k_1103) == (((rt_int)5LL)))) {
F->x_1102 = f_nn_61((((rt_int)2LL)), rt_r_ichk(F->line_1101));
} else if ((rt_r_ichk(F->k_1103) == (((rt_int)7LL)))) {
F->x_1102 = f_nn_61((((rt_int)3LL)), rt_r_ichk(F->line_1101));
} else {
F->x_1102 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_1101));
}
(*(P889)rt_nil_check(F->x_1102)).name = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->result_ = F->x_1102;
goto ret_;
}
if ((rt_r_ichk(F->k_1103) == (((rt_int)1LL)))) {
F->w_1104 = rt_str_copy((((P882)rt_nil_check((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1104, rt_str("TRUE", 4)) || rt_str_eq(F->w_1104, rt_str("FALSE", 5)))) {
F->x_1102 = f_nn_61((((rt_int)5LL)), rt_r_ichk(F->line_1101));
if (rt_str_eq(F->w_1104, rt_str("TRUE", 4))) {
(*(P889)rt_nil_check(F->x_1102)).ival = ((rt_int)1LL);
}
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->result_ = F->x_1102;
goto ret_;
}
if (rt_str_eq(F->w_1104, rt_str("NIL", 3))) {
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)6LL)), rt_r_ichk(F->line_1101));
goto ret_;
}
F->result_ = f_name_node_90();
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1102 = f_nn_61((((rt_int)17LL)), rt_r_ichk(F->line_1101));
(*(P889)rt_nil_check(F->x_1102)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1102;
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1105 = NULL;
F->tail_1106 = NULL;
F->x_1102 = f_nn_61((((rt_int)14LL)), rt_r_ichk(F->line_1101));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1107 = RT_R_EUNDEF;
F->more_1107 = 1;
while (rt_r_echk(F->more_1107)) {
f_append_65(&F->head_1105, &F->tail_1106, f_constructor_item_115());
F->more_1107 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P889)rt_nil_check(F->x_1102)).a = F->head_1105;
F->result_ = F->x_1102;
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

static P889 f_constructor_item_115(void) {
  struct f_constructor_item_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1108 = RT_R_IUNDEF;
F->line_1108 = f_cur_line_68();
F->it_1109 = NULL;
F->it_1109 = f_nn_61((((rt_int)15LL)), rt_r_ichk(F->line_1108));
F->first_1110 = NULL;
F->first_1110 = f_expr_103();
F->keys_1111 = NULL;
F->ktail_1112 = NULL;
F->lab_1113 = NULL;
F->lab_1113 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1108));
(*(P889)rt_nil_check(F->lab_1113)).a = F->first_1110;
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P889)rt_nil_check(F->lab_1113)).b = f_expr_103();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_65(&F->keys_1111, &F->ktail_1112, F->lab_1113);
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1114 = RT_R_IUNDEF;
F->save_1114 = rt_r_ichk(g_tpos_922);
F->more_1115 = NULL;
F->tail2_1116 = NULL;
F->ok_1117 = RT_R_EUNDEF;
F->ok_1117 = 0;
F->go_1118 = RT_R_EUNDEF;
F->go_1118 = 1;
while ((rt_r_echk(F->go_1118) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1119 = NULL;
F->l2_1119 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1108));
(*(P889)rt_nil_check(F->l2_1119)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P889)rt_nil_check(F->l2_1119)).b = f_expr_103();
}
f_append_65(&F->more_1115, &F->tail2_1116, F->l2_1119);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1117 = 1;
F->go_1118 = 0;
} else if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1118 = 0;
}
}
if (rt_r_echk(F->ok_1117)) {
f_append_65(&F->keys_1111, &F->ktail_1112, F->lab_1113);
f_append_65(&F->keys_1111, &F->ktail_1112, F->more_1115);
} else {
g_tpos_922 = rt_r_ichk(F->save_1114);
}
}
if (((F->keys_1111 == NULL) && ((*(P889)rt_nil_check(F->lab_1113)).b != NULL))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1111 != NULL)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P889)rt_nil_check(F->it_1109)).a = F->keys_1111;
(*(P889)rt_nil_check(F->it_1109)).b = f_expr_103();
} else {
(*(P889)rt_nil_check(F->it_1109)).b = F->first_1110;
}
F->result_ = F->it_1109;
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

static P889 f_body_117(void) {
  struct f_body_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1120 = NULL;
F->tail_1121 = NULL;
F->stmts_1122 = RT_R_EUNDEF;
F->stmts_1122 = 0;
F->after_1123 = NULL;
while ((!f_at_body_end_116())) {
F->x_1124 = NULL;
F->x_1124 = f_body_element_118();
if (((F->x_1124 != NULL) && ((((rt_r_ichk((*(P889)rt_nil_check(F->x_1124)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P889)rt_nil_check(F->x_1124)).kind) == (((rt_int)41LL)))) || (rt_r_ichk((*(P889)rt_nil_check(F->x_1124)).kind) == (((rt_int)49LL)))) || (rt_r_ichk((*(P889)rt_nil_check(F->x_1124)).kind) == (((rt_int)48LL)))))) {
if (rt_r_echk(F->stmts_1122)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->x_1124)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1124 != NULL) && (rt_r_ichk((*(P889)rt_nil_check(F->x_1124)).kind) >= (((rt_int)42LL)))) && (rt_r_ichk((*(P889)rt_nil_check(F->x_1124)).kind) <= (((rt_int)51LL))))) {
if ((rt_r_echk(F->stmts_1122) && (F->after_1123 == NULL))) {
F->after_1123 = F->x_1124;
}
} else if (((F->x_1124 != NULL) && (rt_r_ichk((*(P889)rt_nil_check(F->x_1124)).kind) != (((rt_int)33LL))))) {
if ((F->after_1123 != NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->after_1123)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1122 = 1;
}
f_append_65(&F->head_1120, &F->tail_1121, F->x_1124);
}
F->result_ = F->head_1120;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_body_element_118(void) {
  struct f_body_element_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1125 = NULL;
F->pr_1126 = NULL;
F->pr_1126 = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1125 = f_declaration_119();
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1125 = f_nn_61((((rt_int)33LL)), f_cur_line_68());
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1125)).a = f_expr_103();
} else {
F->x_1125 = f_statement_141();
}
if ((F->pr_1126 != NULL)) {
F->p_1127 = NULL;
F->p_1127 = F->x_1125;
while ((F->p_1127 != NULL)) {
if (((*(P889)rt_nil_check(F->p_1127)).prags == NULL)) {
(*(P889)rt_nil_check(F->p_1127)).prags = F->pr_1126;
} else {
(*(P889)rt_nil_check(F->p_1127)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->pr_1126))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1127)).prags))->all)); b_; }));
}
F->p_1127 = (*(P889)rt_nil_check(F->p_1127)).next;
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1125;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_declaration_119(void) {
  struct f_declaration_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1128 = RT_R_IUNDEF;
F->line_1128 = f_cur_line_68();
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
F->head_1129 = NULL;
F->tail_1130 = NULL;
F->names_1131 = NULL;
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->names_1131 = f_id_list_91();
while ((F->names_1131 != NULL)) {
F->x_1132 = NULL;
F->x_1132 = f_nn_61((((rt_int)49LL)), rt_r_ichk(F->line_1128));
(*(P889)rt_nil_check(F->x_1132)).name = (*(P889)rt_nil_check(F->names_1131)).name;
f_append_65(&F->head_1129, &F->tail_1130, F->x_1132);
F->names_1131 = (*(P889)rt_nil_check(F->names_1131)).next;
}
F->result_ = F->head_1129;
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

static P889 f_object_decl_120(void) {
  struct f_object_decl_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1133 = RT_R_IUNDEF;
F->line_1133 = f_cur_line_68();
F->is_var_1134 = RT_R_EUNDEF;
F->is_var_1134 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1135 = NULL;
F->st_1136 = NULL;
F->init_1137 = NULL;
F->loc_1138 = NULL;
F->loc_kind_1139 = RT_R_IUNDEF;
F->loc_kind_1139 = ((rt_int)0LL);
F->head_1140 = NULL;
F->tail_1141 = NULL;
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->names_1135 = f_id_list_91();
if (rt_r_echk(F->is_var_1134)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1136 = f_p_subtype_92();
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P882)rt_nil_check((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->loc_kind_1139 = ((rt_int)1LL);
} else {
F->loc_kind_1139 = ((rt_int)2LL);
}
F->loc_1138 = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1137 = f_expr_103();
}
} else {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1136 = f_p_subtype_92();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1137 = f_expr_103();
}
while ((F->names_1135 != NULL)) {
F->x_1142 = NULL;
if (rt_r_echk(F->is_var_1134)) {
F->x_1142 = f_nn_61((((rt_int)40LL)), rt_r_ichk(F->line_1133));
} else {
F->x_1142 = f_nn_61((((rt_int)41LL)), rt_r_ichk(F->line_1133));
}
(*(P889)rt_nil_check(F->x_1142)).name = (*(P889)rt_nil_check(F->names_1135)).name;
(*(P889)rt_nil_check(F->x_1142)).a = F->st_1136;
(*(P889)rt_nil_check(F->x_1142)).b = F->init_1137;
(*(P889)rt_nil_check(F->x_1142)).c = F->loc_1138;
(*(P889)rt_nil_check(F->x_1142)).ival = rt_r_ichk(F->loc_kind_1139);
f_append_65(&F->head_1140, &F->tail_1141, F->x_1142);
F->names_1135 = (*(P889)rt_nil_check(F->names_1135)).next;
}
F->result_ = F->head_1140;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_abbrev_decl_121(void) {
  struct f_abbrev_decl_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1143 = NULL;
F->x_1143 = f_nn_61((((rt_int)42LL)), f_cur_line_68());
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1143)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1143)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1143)).b = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P889)rt_nil_check(F->x_1143)).a = f_p_subtype_92();
F->result_ = F->x_1143;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_skip_rep_122(void) {
  struct f_skip_rep_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->depth_1144 = RT_R_IUNDEF;
F->depth_1144 = ((rt_int)0LL);
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((rt_r_ichk(F->depth_1144) == ((rt_int)0LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_74((((rt_int)0LL)))))) {
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_1144 = rt_add(rt_r_ichk(F->depth_1144), ((rt_int)1LL));
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_1144 = rt_sub(rt_r_ichk(F->depth_1144), ((rt_int)1LL));
}
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
}
}
ret_:
  RT_FPOP();
  return;
}

static P889 f_type_decl_123(void) {
  struct f_type_decl_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1145 = RT_R_IUNDEF;
F->line_1145 = f_cur_line_68();
F->name_1146 = NULL;
F->params_1147 = NULL;
F->x_1148 = NULL;
F->tts_1149 = NULL;
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->name_1146 = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1149 = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1147 = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P882)rt_nil_check((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->x_1148 = f_nn_61((((rt_int)44LL)), rt_r_ichk(F->line_1145));
(*(P889)rt_nil_check(F->x_1148)).d = F->params_1147;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1148)).b = f_formal_params_126();
}
} else {
F->x_1148 = f_nn_61((((rt_int)43LL)), rt_r_ichk(F->line_1145));
(*(P889)rt_nil_check(F->x_1148)).b = F->params_1147;
}
(*(P889)rt_nil_check(F->x_1148)).name = F->name_1146;
(*(P889)rt_nil_check(F->x_1148)).e = F->tts_1149;
(*(P889)rt_nil_check(F->x_1148)).a = f_p_subtype_92();
f_skip_rep_122();
F->result_ = F->x_1148;
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

static P889 f_formal_params_126(void) {
  struct f_formal_params_126fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1150 = NULL;
F->tail_1151 = NULL;
F->more_1152 = RT_R_EUNDEF;
F->more_1152 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1152)) {
F->mode_1153 = RT_R_IUNDEF;
F->mode_1153 = (((rt_int)1LL));
F->names_1154 = NULL;
F->ntail_1155 = NULL;
F->st_1156 = NULL;
if ((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1153 = f_mode_of_125(&(((P882)rt_nil_check((*(P884)rt_nil_check((((P886)rt_nil_check(g_toks_920))->all).p[(rt_index(rt_r_ichk(g_tpos_922), (((P886)rt_nil_check(g_toks_920))->all).lo, (((P886)rt_nil_check(g_toks_920))->all).hi) - (((P886)rt_nil_check(g_toks_920))->all).lo)])).s))->all));
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
}
f_append_65(&F->names_1154, &F->ntail_1155, f_name_node_90());
while ((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_76(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P882)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P882)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
f_append_65(&F->names_1154, &F->ntail_1155, f_name_node_90());
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1156 = f_p_subtype_92();
while ((F->names_1154 != NULL)) {
F->p_1157 = NULL;
F->p_1157 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P889)rt_nil_check(F->names_1154)).line));
(*(P889)rt_nil_check(F->p_1157)).name = (*(P889)rt_nil_check(F->names_1154)).name;
(*(P889)rt_nil_check(F->p_1157)).ival = rt_r_ichk(F->mode_1153);
(*(P889)rt_nil_check(F->p_1157)).a = F->st_1156;
f_append_65(&F->head_1150, &F->tail_1151, F->p_1157);
F->names_1154 = (*(P889)rt_nil_check(F->names_1154)).next;
}
F->more_1152 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1150;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_128(P889 owner_127) {
  struct f_imports_list_128fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_127 = owner_127;
F->head_1158 = NULL;
F->tail_1159 = NULL;
F->more_1160 = RT_R_EUNDEF;
F->more_1160 = 1;
if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P889)rt_nil_check(F->owner_127)).flag = rt_add(rt_r_ichk((*(P889)rt_nil_check(F->owner_127)).flag), ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (rt_r_echk(F->more_1160)) {
F->ro_1161 = RT_R_EUNDEF;
F->ro_1161 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1162 = NULL;
F->x_1162 = f_name_node_90();
if (rt_r_echk(F->ro_1161)) {
(*(P889)rt_nil_check(F->x_1162)).ival = ((rt_int)1LL);
}
f_append_65(&F->head_1158, &F->tail_1159, F->x_1162);
F->more_1160 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P889)rt_nil_check(F->owner_127)).d = F->head_1158;
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

static P882 f_definable_name_131(void) {
  struct f_definable_name_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))))) {
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)2LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P882)rt_nil_check((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_922), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)); b_; }));
goto ret_;
} else if (((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P882)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str("*", 1)))) {
F->r_1163 = NULL;
F->r_1163 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; }))) {
F->r_1163 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_1163))->all), rt_str("*", 1)); b_; }));
} else if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1163 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_1163))->all), rt_str("..", 2)); b_; }));
} else if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->r_1163 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_1163))->all), rt_str(",", 1)); b_; }));
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a subscripting selector is made of *, .. and ,", 46); b_; }));
}
}
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_1163))->all), rt_str(")", 1)); b_; }));
goto ret_;
}
if ((f_at_kind_74((((rt_int)1LL))) || (f_at_kind_74((((rt_int)3LL))) && f_is_definable_130(&(((P882)rt_nil_check((*(P884)rt_nil_check((((P886)rt_nil_check(g_toks_920))->all).p[(rt_index(rt_r_ichk(g_tpos_922), (((P886)rt_nil_check(g_toks_920))->all).lo, (((P886)rt_nil_check(g_toks_920))->all).hi) - (((P886)rt_nil_check(g_toks_920))->all).lo)])).s))->all))))) {
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->result_ = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_922), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P889 f_subprogram_decl_132(void) {
  struct f_subprogram_decl_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1164 = RT_R_IUNDEF;
F->line_1164 = f_cur_line_68();
F->x_1165 = NULL;
F->is_abn_1166 = RT_R_EUNDEF;
F->is_abn_1166 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1167 = RT_R_EUNDEF;
F->is_func_1167 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
F->dummy_1168 = RT_R_EUNDEF;
if (rt_r_echk(F->is_func_1167)) {
F->x_1165 = f_nn_61((((rt_int)46LL)), rt_r_ichk(F->line_1164));
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1165 = f_nn_61((((rt_int)45LL)), rt_r_ichk(F->line_1164));
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
if (rt_r_echk(F->is_abn_1166)) {
(*(P889)rt_nil_check(F->x_1165)).flag = ((rt_int)1LL);
}
(*(P889)rt_nil_check(F->x_1165)).name = f_definable_name_131();
if ((((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->x_1165)).name))->all), rt_str(">", 1)) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->x_1165)).name))->all), rt_str("<=", 2))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->x_1165)).name))->all), rt_str(">=", 2))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->x_1165)).name))->all), rt_str("/=", 2)))) {
f_fail_23(rt_r_ichk(F->line_1164), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->x_1165)).name))->all), rt_str(" is not a definable symbol", 26)); b_; }));
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1165)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1165)).a = f_formal_params_126();
}
if (rt_r_echk(F->is_func_1167)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P889)rt_nil_check(F->x_1165)).b = f_p_subtype_92();
}
F->dummy_1168 = f_imports_list_128(F->x_1165);
if (((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P889)rt_nil_check(F->x_1165)).prags == NULL)) {
(*(P889)rt_nil_check(F->x_1165)).prags = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P889)rt_nil_check(F->x_1165)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->x_1165)).prags))->all), (((P882)rt_nil_check((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P889)rt_nil_check(F->x_1165)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (rt_r_echk(F->is_func_1167)) {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P882)rt_nil_check(f_definable_name_131()))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->x_1165)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P882)rt_nil_check((*(P889)rt_nil_check(F->x_1165)).name))->all)); b_; }));
}
F->result_ = F->x_1165;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_capsule_decl_133(void) {
  struct f_capsule_decl_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1169 = NULL;
F->x_1169 = f_nn_61((((rt_int)47LL)), f_cur_line_68());
F->dummy_1170 = RT_R_EUNDEF;
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1169)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1169)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1169)).b = f_formal_params_126();
}
F->dummy_1170 = f_imports_list_128(F->x_1169);
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P889)rt_nil_check(F->x_1169)).ival = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P889)rt_nil_check(F->x_1169)).ival = ((rt_int)0LL);
} else {
F->head_1171 = NULL;
F->tail_1172 = NULL;
F->more_1173 = RT_R_EUNDEF;
F->more_1173 = 1;
while (rt_r_echk(F->more_1173)) {
F->n_1174 = NULL;
F->n_1174 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P889)rt_nil_check(F->n_1174)).ival = ((rt_int)1LL);
}
(*(P889)rt_nil_check(F->n_1174)).name = f_definable_name_131();
f_append_65(&F->head_1171, &F->tail_1172, F->n_1174);
F->more_1173 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P889)rt_nil_check(F->x_1169)).a = F->head_1171;
(*(P889)rt_nil_check(F->x_1169)).ival = ((rt_int)2LL);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P889)rt_nil_check(F->x_1169)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((((P882)rt_nil_check(f_expect_id_89()))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->x_1169)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1169;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_formal_tt_134(void) {
  struct f_formal_tt_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1175 = NULL;
F->tail_1176 = NULL;
F->more_1177 = RT_R_EUNDEF;
F->more_1177 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1177)) {
f_append_65(&F->head_1175, &F->tail_1176, f_name_node_90());
F->more_1177 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1175;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_generic_decl_135(void) {
  struct f_generic_decl_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1178 = NULL;
F->x_1178 = f_nn_61((((rt_int)51LL)), f_cur_line_68());
F->head_1179 = NULL;
F->tail_1180 = NULL;
F->more_1181 = RT_R_EUNDEF;
F->more_1181 = 1;
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
while (rt_r_echk(F->more_1181)) {
F->names_1182 = NULL;
F->names_1182 = f_id_list_91();
F->kind_1183 = RT_R_IUNDEF;
F->kind_1183 = ((rt_int)6LL);
F->st_1184 = NULL;
F->items_1185 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1183 = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1183 = ((rt_int)2LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1183 = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1183 = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1183 = ((rt_int)5LL);
} else if (((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P882)rt_nil_check((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("STRING", 6))) && (!((f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P882)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->kind_1183 = ((rt_int)7LL);
} else if (((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P882)rt_nil_check((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("ENUM", 4))) && (!((f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P882)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->kind_1183 = ((rt_int)8LL);
} else {
F->st_1184 = f_p_subtype_92();
}
if (((rt_r_ichk(F->kind_1183) <= ((rt_int)5LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
F->items_1185 = f_type_list_136();
}
if (((rt_r_ichk(F->kind_1183) == ((rt_int)4LL)) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1184 = f_p_subtype_92();
}
while ((F->names_1182 != NULL)) {
F->p_1186 = NULL;
F->p_1186 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P889)rt_nil_check(F->names_1182)).line));
(*(P889)rt_nil_check(F->p_1186)).name = (*(P889)rt_nil_check(F->names_1182)).name;
(*(P889)rt_nil_check(F->p_1186)).ival = rt_r_ichk(F->kind_1183);
(*(P889)rt_nil_check(F->p_1186)).a = F->st_1184;
(*(P889)rt_nil_check(F->p_1186)).b = F->items_1185;
f_append_65(&F->head_1179, &F->tail_1180, F->p_1186);
F->names_1182 = (*(P889)rt_nil_check(F->names_1182)).next;
}
F->more_1181 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->nhead_1187 = NULL;
F->ntail_1188 = NULL;
F->more_1181 = 1;
while (rt_r_echk(F->more_1181)) {
F->it_1189 = NULL;
F->it_1189 = f_nn_61((((rt_int)52LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
(*(P889)rt_nil_check(F->it_1189)).ival = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
(*(P889)rt_nil_check(F->it_1189)).ival = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
(*(P889)rt_nil_check(F->it_1189)).ival = ((rt_int)5LL);
}
(*(P889)rt_nil_check(F->it_1189)).name = f_definable_name_131();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P889)rt_nil_check(F->it_1189)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P889)rt_nil_check(F->it_1189)).b = f_type_list_136();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
(*(P889)rt_nil_check(F->it_1189)).a = f_p_subtype_92();
}
f_append_65(&F->nhead_1187, &F->ntail_1188, F->it_1189);
F->more_1181 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P889)rt_nil_check(F->x_1178)).d = F->nhead_1187;
}
(*(P889)rt_nil_check(F->x_1178)).a = F->head_1179;
(*(P889)rt_nil_check(F->x_1178)).b = f_declaration_119();
(*(P889)rt_nil_check(F->x_1178)).name = (*(P889)rt_nil_check((*(P889)rt_nil_check(F->x_1178)).b)).name;
F->result_ = F->x_1178;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_type_list_136(void) {
  struct f_type_list_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1190 = NULL;
F->tail_1191 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1192 = RT_R_EUNDEF;
F->more_1192 = 1;
while (rt_r_echk(F->more_1192)) {
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P882)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(",", 1)) || rt_str_eq((((P882)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(")", 1))))) {
F->n_1193 = NULL;
F->n_1193 = f_nn_61((((rt_int)80LL)), f_cur_line_68());
(*(P889)rt_nil_check(F->n_1193)).name = f_expect_id_89();
f_append_65(&F->head_1190, &F->tail_1191, F->n_1193);
} else {
f_append_65(&F->head_1190, &F->tail_1191, f_p_subtype_92());
}
F->more_1192 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1190;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_task_decl_137(void) {
  struct f_task_decl_137fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1194 = NULL;
F->x_1194 = f_nn_61((((rt_int)50LL)), f_cur_line_68());
F->dummy_1195 = RT_R_EUNDEF;
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1194)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1194)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1194)).a = f_formal_params_126();
}
F->dummy_1195 = f_imports_list_128(F->x_1194);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P889)rt_nil_check(F->x_1194)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P882)rt_nil_check(f_expect_id_89()))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->x_1194)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P882)rt_nil_check((*(P889)rt_nil_check(F->x_1194)).name))->all)); b_; }));
}
F->result_ = F->x_1194;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_expose_decl_138(void) {
  struct f_expose_decl_138fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1196 = NULL;
F->x_1196 = f_nn_61((((rt_int)48LL)), f_cur_line_68());
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P889)rt_nil_check(F->x_1196)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1197 = NULL;
F->tail_1198 = NULL;
F->more_1199 = RT_R_EUNDEF;
F->more_1199 = 1;
while (rt_r_echk(F->more_1199)) {
F->n_1200 = NULL;
F->n_1200 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P889)rt_nil_check(F->n_1200)).ival = ((rt_int)1LL);
}
(*(P889)rt_nil_check(F->n_1200)).name = f_definable_name_131();
f_append_65(&F->head_1197, &F->tail_1198, F->n_1200);
F->more_1199 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P889)rt_nil_check(F->x_1196)).a = F->head_1197;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P889)rt_nil_check(F->x_1196)).flag = ((rt_int)1LL);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P889)rt_nil_check(F->x_1196)).flag = rt_add(rt_r_ichk((*(P889)rt_nil_check(F->x_1196)).flag), ((rt_int)2LL));
}
(*(P889)rt_nil_check(F->x_1196)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1196)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1196)).b = f_actual_params_94();
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1201 = NULL;
F->tail_1202 = NULL;
F->more_1203 = RT_R_EUNDEF;
F->more_1203 = 1;
while (rt_r_echk(F->more_1203)) {
F->n_1204 = NULL;
F->n_1204 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
F->tgt_1205 = NULL;
F->tgt_1205 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P889)rt_nil_check(F->n_1204)).name = f_definable_name_131();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P889)rt_nil_check(F->tgt_1205)).name = f_definable_name_131();
(*(P889)rt_nil_check(F->n_1204)).a = F->tgt_1205;
f_append_65(&F->head_1201, &F->tail_1202, F->n_1204);
F->more_1203 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P889)rt_nil_check(F->x_1196)).c = F->head_1201;
}
F->result_ = F->x_1196;
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

static P889 f_statement_141(void) {
  struct f_statement_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1206 = NULL;
F->ltail_1207 = NULL;
F->match_1208 = NULL;
F->s_1209 = NULL;
while (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P882)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_65(&F->labels_1206, &F->ltail_1207, f_name_node_90());
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
}
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P882)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all); b_; })))) {
F->match_1208 = f_expect_id_89();
}
F->s_1209 = f_unlabeled_statement_142();
if ((F->match_1208 != NULL)) {
if ((((((((rt_r_ichk((*(P889)rt_nil_check(F->s_1209)).kind) != (((rt_int)22LL))) && (rt_r_ichk((*(P889)rt_nil_check(F->s_1209)).kind) != (((rt_int)23LL)))) && (rt_r_ichk((*(P889)rt_nil_check(F->s_1209)).kind) != (((rt_int)24LL)))) && (rt_r_ichk((*(P889)rt_nil_check(F->s_1209)).kind) != (((rt_int)25LL)))) && (rt_r_ichk((*(P889)rt_nil_check(F->s_1209)).kind) != (((rt_int)26LL)))) && (rt_r_ichk((*(P889)rt_nil_check(F->s_1209)).kind) != (((rt_int)35LL)))) && (rt_r_ichk((*(P889)rt_nil_check(F->s_1209)).kind) != (((rt_int)36LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_1209)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P882)rt_nil_check(f_expect_id_89()))->all), (((P882)rt_nil_check(F->match_1208))->all)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_1209)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P882)rt_nil_check(F->match_1208))->all)); b_; }));
}
(*(P889)rt_nil_check(F->s_1209)).tag = F->match_1208;
}
(*(P889)rt_nil_check(F->s_1209)).labels = F->labels_1206;
F->result_ = F->s_1209;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_unlabeled_statement_142(void) {
  struct f_unlabeled_statement_142fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1210 = RT_R_IUNDEF;
F->line_1210 = f_cur_line_68();
F->x_1211 = NULL;
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
F->x_1211 = f_nn_61((((rt_int)25LL)), rt_r_ichk(F->line_1210));
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1211)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1211;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_150();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1211 = f_nn_61((((rt_int)27LL)), rt_r_ichk(F->line_1210));
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1211)).name = f_expect_id_89();
F->result_ = F->x_1211;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1211 = f_nn_61((((rt_int)28LL)), rt_r_ichk(F->line_1210));
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P889)rt_nil_check(F->x_1211)).a = f_expr_103();
}
F->result_ = F->x_1211;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1211 = f_nn_61((((rt_int)29LL)), rt_r_ichk(F->line_1210));
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1211)).name = f_expect_id_89();
F->result_ = F->x_1211;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1211 = f_nn_61((((rt_int)30LL)), rt_r_ichk(F->line_1210));
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1211)).name = f_expect_id_89();
F->result_ = F->x_1211;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)31LL)), rt_r_ichk(F->line_1210));
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1211 = f_nn_61((((rt_int)34LL)), rt_r_ichk(F->line_1210));
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1211)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1211)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1211)).b = f_actual_params_94();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P889)rt_nil_check(F->x_1211)).a = f_postfix_113();
F->result_ = F->x_1211;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1212 = NULL;
F->tail_1213 = NULL;
F->x_1211 = f_nn_61((((rt_int)35LL)), rt_r_ichk(F->line_1210));
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1214 = NULL;
F->itail_1215 = NULL;
F->more_1216 = RT_R_EUNDEF;
F->more_1216 = 1;
while (rt_r_echk(F->more_1216)) {
f_append_65(&F->invs_1214, &F->itail_1215, f_postfix_113());
F->more_1216 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1212, &F->tail_1213, f_arm_146(F->invs_1214, f_body_117(), rt_r_ichk(F->line_1210)));
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P889)rt_nil_check(F->x_1211)).a = F->head_1212;
F->result_ = F->x_1211;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1211 = f_nn_61((((rt_int)36LL)), rt_r_ichk(F->line_1210));
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1211)).a = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P889)rt_nil_check(F->x_1211)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1211;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1211 = f_nn_61((((rt_int)32LL)), rt_r_ichk(F->line_1210));
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1211)).a = f_postfix_113();
if ((!(f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P882)rt_nil_check((*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P889)rt_nil_check(F->x_1211)).b = f_actual_params_94();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P889)rt_nil_check(F->x_1211)).c = f_expr_103();
}
F->result_ = F->x_1211;
goto ret_;
}
{
F->target_1217 = NULL;
F->target_1217 = f_postfix_113();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1211 = f_nn_61((((rt_int)20LL)), rt_r_ichk(F->line_1210));
(*(P889)rt_nil_check(F->x_1211)).a = F->target_1217;
(*(P889)rt_nil_check(F->x_1211)).b = f_expr_103();
} else {
F->x_1211 = f_nn_61((((rt_int)21LL)), rt_r_ichk(F->line_1210));
(*(P889)rt_nil_check(F->x_1211)).a = F->target_1217;
}
}
F->result_ = F->x_1211;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_arm_146(P889 cond_143, P889 b_144, rt_int line_145) {
  struct f_arm_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_143 = cond_143;
F->b_144 = b_144;
F->line_145 = line_145;
F->x_1218 = NULL;
F->x_1218 = f_nn_61((((rt_int)60LL)), F->line_145);
(*(P889)rt_nil_check(F->x_1218)).a = F->cond_143;
(*(P889)rt_nil_check(F->x_1218)).b = F->b_144;
F->result_ = F->x_1218;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_if_stmt_147(void) {
  struct f_if_stmt_147fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1219 = NULL;
F->x_1219 = f_nn_61((((rt_int)22LL)), f_cur_line_68());
F->head_1220 = NULL;
F->tail_1221 = NULL;
F->cond_1222 = NULL;
F->go_1223 = RT_R_EUNDEF;
F->go_1223 = 1;
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
F->cond_1222 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1220, &F->tail_1221, f_arm_146(F->cond_1222, f_body_117(), rt_r_ichk((*(P889)rt_nil_check(F->x_1219)).line)));
while (rt_r_echk(F->go_1223)) {
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1222 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1220, &F->tail_1221, f_arm_146(F->cond_1222, f_body_117(), rt_r_ichk((*(P889)rt_nil_check(F->x_1219)).line)));
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P889)rt_nil_check(F->x_1219)).flag = ((rt_int)1LL);
(*(P889)rt_nil_check(F->x_1219)).b = f_body_117();
} else {
F->go_1223 = 0;
}
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P889)rt_nil_check(F->x_1219)).a = F->head_1220;
F->result_ = F->x_1219;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_case_stmt_148(void) {
  struct f_case_stmt_148fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1224 = NULL;
F->x_1224 = f_nn_61((((rt_int)23LL)), f_cur_line_68());
F->head_1225 = NULL;
F->tail_1226 = NULL;
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1224)).a = f_expr_103();
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1227 = NULL;
F->ltail_1228 = NULL;
F->more_1229 = RT_R_EUNDEF;
F->more_1229 = 1;
while (rt_r_echk(F->more_1229)) {
F->l_1230 = NULL;
F->l_1230 = f_nn_61((((rt_int)61LL)), f_cur_line_68());
(*(P889)rt_nil_check(F->l_1230)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P889)rt_nil_check(F->l_1230)).b = f_expr_103();
}
f_append_65(&F->labs_1227, &F->ltail_1228, F->l_1230);
F->more_1229 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1225, &F->tail_1226, f_arm_146(F->labs_1227, f_body_117(), rt_r_ichk((*(P889)rt_nil_check(F->x_1224)).line)));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P889)rt_nil_check(F->x_1224)).flag = ((rt_int)1LL);
(*(P889)rt_nil_check(F->x_1224)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P889)rt_nil_check(F->x_1224)).b = F->head_1225;
F->result_ = F->x_1224;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_repeat_stmt_149(void) {
  struct f_repeat_stmt_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1231 = NULL;
F->x_1231 = f_nn_61((((rt_int)24LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P889)rt_nil_check(F->x_1231)).flag = ((rt_int)1LL);
(*(P889)rt_nil_check(F->x_1231)).name = f_expect_id_89();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P889)rt_nil_check(F->x_1231)).ival = ((rt_int)1LL);
}
(*(P889)rt_nil_check(F->x_1231)).a = f_p_subtype_92();
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P889)rt_nil_check(F->x_1231)).a = f_expr_103();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P889)rt_nil_check(F->x_1231)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1231;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_guard_stmt_150(void) {
  struct f_guard_stmt_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1232 = NULL;
F->x_1232 = f_nn_61((((rt_int)26LL)), f_cur_line_68());
F->head_1233 = NULL;
F->tail_1234 = NULL;
g_tpos_922 = rt_add(rt_r_ichk(g_tpos_922), ((rt_int)1LL));
(*(P889)rt_nil_check(F->x_1232)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1235 = NULL;
F->h_1235 = f_nn_61((((rt_int)62LL)), f_cur_line_68());
(*(P889)rt_nil_check(F->h_1235)).a = f_id_list_91();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P889)rt_nil_check(F->h_1235)).b = f_body_117();
f_append_65(&F->head_1233, &F->tail_1234, F->h_1235);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P889)rt_nil_check(F->x_1232)).flag = ((rt_int)1LL);
(*(P889)rt_nil_check(F->x_1232)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P889)rt_nil_check(F->x_1232)).b = F->head_1233;
F->result_ = F->x_1232;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_program_151(void) {
  struct f_program_151fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1236 = NULL;
F->tail_1237 = NULL;
while ((!f_at_kind_74((((rt_int)0LL))))) {
if ((!f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1238 = NULL;
F->pr_1238 = (*(P884)rt_nil_check(({ A888 b_ = (((P886)rt_nil_check(g_toks_920))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_922), b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1239 = NULL;
F->u_1239 = f_capsule_decl_133();
(*(P889)rt_nil_check(F->u_1239)).prags = F->pr_1238;
f_append_65(&F->head_1236, &F->tail_1237, F->u_1239);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1236;
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
F->h_1240 = RT_R_IUNDEF;
F->h_1240 = ((rt_int)0LL);
{ rt_int lo1242 = ((rt_int)1LL), hi1243 = ((rt_int)(((*F->s_152)).len));
for (rt_int it1244 = lo1242; it1244 <= hi1243; it1244++) {
F->i_1241 = it1244;
F->h_1240 = rt_mod(rt_add(rt_mul(rt_r_ichk(F->h_1240), ((rt_int)31LL)), ((rt_int)(rt_r_echk(rt_str_get((*F->s_152), F->i_1241))) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = rt_r_ichk(F->h_1240);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P899 f_lookup_155(rstr *name_154) {
  struct f_lookup_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_154 = name_154;
F->y_1245 = NULL;
F->y_1245 = ({ A905 b_ = (((P903)rt_nil_check(g_table_925))->all); b_.p[(rt_index(f_hash_153(&(*F->name_154)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_926 != NULL)) {
while ((F->y_1245 != NULL)) {
if (((rt_r_ichk((*(P899)rt_nil_check(F->y_1245)).depth) >= rt_r_ichk(g_gdepth_958)) && rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_1245)).name))->all), (*F->name_154)))) {
F->result_ = F->y_1245;
goto ret_;
}
F->y_1245 = (*(P899)rt_nil_check(F->y_1245)).chain;
}
F->y_1245 = ({ A905 b_ = (((P903)rt_nil_check(g_genv_926))->all); b_.p[(rt_index(f_hash_153(&(*F->name_154)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1245 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_1245)).name))->all), (*F->name_154))) {
F->result_ = F->y_1245;
goto ret_;
}
F->y_1245 = (*(P899)rt_nil_check(F->y_1245)).chain;
}
F->y_1245 = ({ A905 b_ = (((P903)rt_nil_check(g_table_925))->all); b_.p[(rt_index(f_hash_153(&(*F->name_154)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1245 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_1245)).name))->all), (*F->name_154))) {
F->result_ = F->y_1245;
goto ret_;
}
F->y_1245 = (*(P899)rt_nil_check(F->y_1245)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P899 f_lookup_decl_157(P889 d_156) {
  struct f_lookup_decl_157fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_156 = d_156;
F->y_1246 = NULL;
F->y_1246 = ({ A905 b_ = (((P903)rt_nil_check(g_table_925))->all); b_.p[(rt_index(f_hash_153(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->d_156)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1246 != NULL)) {
if (((*(P899)rt_nil_check(F->y_1246)).decl == F->d_156)) {
F->result_ = F->y_1246;
goto ret_;
}
F->y_1246 = (*(P899)rt_nil_check(F->y_1246)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_160(P899 y_158, rt_int line_159) {
  struct f_define_160fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_158 = y_158;
F->line_159 = line_159;
F->h_1247 = RT_R_IUNDEF;
F->h_1247 = f_hash_153(&(((P882)rt_nil_check((*(P899)rt_nil_check(F->y_158)).name))->all));
F->z_1248 = NULL;
F->z_1248 = ({ A905 b_ = (((P903)rt_nil_check(g_table_925))->all); b_.p[(rt_index(rt_r_ichk(F->h_1247), b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1248 != NULL)) {
if ((((rt_r_ichk((*(P899)rt_nil_check(F->z_1248)).depth) == rt_r_ichk(g_depth_928)) && rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->z_1248)).name))->all), (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_158)).name))->all))) && (!(((f_overloadable_162(F->y_158) && f_overloadable_162(F->z_1248)) && (rt_r_ichk((*(P899)rt_nil_check(F->z_1248)).kind) == rt_r_ichk((*(P899)rt_nil_check(F->y_158)).kind))) && (!(f_same_signature_168((*(P899)rt_nil_check(F->y_158)).params, (*(P899)rt_nil_check(F->z_1248)).params) && f_same_tt_165((*(P899)rt_nil_check(F->y_158)).decl, (*(P899)rt_nil_check(F->z_1248)).decl))))))) {
f_fail_23(F->line_159, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_158)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1248 = (*(P899)rt_nil_check(F->z_1248)).chain;
}
(*(P899)rt_nil_check(F->y_158)).depth = rt_r_ichk(g_depth_928);
(*(P899)rt_nil_check(F->y_158)).chain = ({ A905 b_ = (((P903)rt_nil_check(g_table_925))->all); b_.p[(rt_index(rt_r_ichk(F->h_1247), b_.lo, b_.hi) - b_.lo)]; });
(((P903)rt_nil_check(g_table_925))->all).p[(rt_index(rt_r_ichk(F->h_1247), (((P903)rt_nil_check(g_table_925))->all).lo, (((P903)rt_nil_check(g_table_925))->all).hi) - (((P903)rt_nil_check(g_table_925))->all).lo)] = F->y_158;
(*(P899)rt_nil_check(F->y_158)).stack = g_scope_stack_929;
g_scope_stack_929 = F->y_158;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_162(P899 y_161) {
  struct f_overloadable_162fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_161 = y_161;
F->result_ = ((((rt_r_ichk((*(P899)rt_nil_check(F->y_161)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_161)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_161)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_161)).kind) == (((rt_int)8LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_165(P889 a_163, P889 b_164) {
  struct f_same_tt_165fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_163 = a_163;
F->b_164 = b_164;
F->x_1249 = NULL;
F->y_1250 = NULL;
if (((F->a_163 == NULL) || (F->b_164 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1249 = (*(P889)rt_nil_check(F->a_163)).e;
F->y_1250 = (*(P889)rt_nil_check(F->b_164)).e;
while (((F->x_1249 != NULL) && (F->y_1250 != NULL))) {
if ((!rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->x_1249)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->y_1250)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1249 = (*(P889)rt_nil_check(F->x_1249)).next;
F->y_1250 = (*(P889)rt_nil_check(F->y_1250)).next;
}
F->result_ = ((F->x_1249 == NULL) && (F->y_1250 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_168(P901 a_166, P901 b_167) {
  struct f_same_signature_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_166 = a_166;
F->b_167 = b_167;
F->x_1251 = NULL;
F->x_1251 = F->a_166;
F->y_1252 = NULL;
F->y_1252 = F->b_167;
while (((F->x_1251 != NULL) && (F->y_1252 != NULL))) {
if ((!f_same_213((*(P901)rt_nil_check(F->x_1251)).t, (*(P901)rt_nil_check(F->y_1252)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1251 = (*(P901)rt_nil_check(F->x_1251)).next;
F->y_1252 = (*(P901)rt_nil_check(F->y_1252)).next;
}
F->result_ = ((F->x_1251 == NULL) && (F->y_1252 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_169(void) {
  struct f_open_scope_169fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_928 = rt_add(rt_r_ichk(g_depth_928), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_170(void) {
  struct f_close_scope_170fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_929 != NULL) && (rt_r_ichk((*(P899)rt_nil_check(g_scope_stack_929)).depth) == rt_r_ichk(g_depth_928)))) {
(((P903)rt_nil_check(g_table_925))->all).p[(rt_index(f_hash_153(&(((P882)rt_nil_check((*(P899)rt_nil_check(g_scope_stack_929)).name))->all)), (((P903)rt_nil_check(g_table_925))->all).lo, (((P903)rt_nil_check(g_table_925))->all).hi) - (((P903)rt_nil_check(g_table_925))->all).lo)] = (*(P899)rt_nil_check(g_scope_stack_929)).chain;
g_scope_stack_929 = (*(P899)rt_nil_check(g_scope_stack_929)).stack;
}
g_depth_928 = rt_sub(rt_r_ichk(g_depth_928), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P899 f_new_sym_173(rt_int kind_171, P882 name_172) {
  struct f_new_sym_173fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_171 = kind_171;
F->name_172 = name_172;
F->y_1253 = NULL;
{ R900 *cell1254 = rt_alloc(sizeof(R900));
(*cell1254).name = NULL;
(*cell1254).t = NULL;
(*cell1254).c = NULL;
(*cell1254).access = NULL;
(*cell1254).cname = NULL;
(*cell1254).st = NULL;
(*cell1254).decl = NULL;
(*cell1254).params = NULL;
(*cell1254).result = NULL;
(*cell1254).members = NULL;
(*cell1254).mnext = NULL;
(*cell1254).binds = NULL;
(*cell1254).insts = NULL;
(*cell1254).env = NULL;
(*cell1254).chain = NULL;
(*cell1254).stack = NULL;
(*cell1254).owner = NULL;
(*cell1254).gctx = NULL;
(*cell1254).mv = NULL;
(*cell1254).reqs = NULL;
(*cell1254).home = NULL;
(*cell1254).capn = NULL;
(*cell1254).tbinds = NULL;
F->y_1253 = cell1254;
}
(*(P899)rt_nil_check(F->y_1253)).kind = F->kind_171;
(*(P899)rt_nil_check(F->y_1253)).name = F->name_172;
F->result_ = F->y_1253;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P895 f_new_typ_175(rt_int kind_174) {
  struct f_new_typ_175fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_174 = kind_174;
F->t_1255 = NULL;
{ R896 *cell1256 = rt_alloc(sizeof(R896));
(*cell1256).name = NULL;
(*cell1256).lits = NULL;
(*cell1256).elem = NULL;
(*cell1256).idx = NULL;
(*cell1256).idx2 = NULL;
(*cell1256).elemcons = NULL;
(*cell1256).elemst = NULL;
(*cell1256).under = NULL;
(*cell1256).tparams = NULL;
(*cell1256).ocap = NULL;
(*cell1256).fields = NULL;
(*cell1256).target = NULL;
(*cell1256).decl = NULL;
(*cell1256).cname = NULL;
(*cell1256).initp = NULL;
(*cell1256).finalp = NULL;
(*cell1256).tpsyms = NULL;
(*cell1256).gen = NULL;
(*cell1256).gbinds = NULL;
(*cell1256).next = NULL;
(*cell1256).idxs = NULL;
(*cell1256).assignp = NULL;
(*cell1256).eqp = NULL;
(*cell1256).ltp = NULL;
F->t_1255 = cell1256;
}
(*(P895)rt_nil_check(F->t_1255)).kind = F->kind_174;
F->result_ = F->t_1255;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P891 f_new_cons_176(void) {
  struct f_new_cons_176fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1257 = NULL;
{ R892 *cell1258 = rt_alloc(sizeof(R892));
(*cell1258).lo = NULL;
(*cell1258).hi = NULL;
(*cell1258).lo2 = NULL;
(*cell1258).hi2 = NULL;
(*cell1258).slen = NULL;
(*cell1258).args = NULL;
(*cell1258).prec = NULL;
(*cell1258).bnds = NULL;
F->c_1257 = cell1258;
}
F->result_ = F->c_1257;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_178(P895 t_177) {
  struct f_scalar_kind_178fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_177 = t_177;
F->result_ = ((F->t_177 != NULL) && (((rt_r_ichk((*(P895)rt_nil_check(F->t_177)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->t_177)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P895)rt_nil_check(F->t_177)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_180(P895 t_179) {
  struct f_bound_ctype_180fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_179 = t_179;
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_179)).kind) == (((rt_int)3LL)))) {
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

static rstr f_cbound_183(P891 c_181, rstr *b_182) {
  struct f_cbound_183fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_181 = c_181;
F->b_182 = b_182;
F->p_1259 = NULL;
F->p_1259 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!rt_r_echk((*(P891)rt_nil_check(F->c_181)).dyn)) || (rt_r_ichk((*(P891)rt_nil_check(F->c_181)).lvl) <= ((rt_int)0LL)))) {
F->result_ = (*F->b_182);
goto ret_;
}
{ rt_int lo1261 = ((rt_int)1LL), hi1262 = rt_sub(rt_r_ichk(g_cur_level_942), rt_r_ichk((*(P891)rt_nil_check(F->c_181)).lvl));
for (rt_int it1263 = lo1261; it1263 <= hi1262; it1263++) {
F->i_1260 = it1263;
F->p_1259 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->p_1259))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->p_1259))->all), rt_str("->", 2)), (*F->b_182));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_185(P891 c_184) {
  struct f_clo_185fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_184 = c_184;
F->result_ = f_cbound_183(F->c_184, &(((P882)rt_nil_check((*(P891)rt_nil_check(F->c_184)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_187(P891 c_186) {
  struct f_chi_187fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_186 = c_186;
F->result_ = f_cbound_183(F->c_186, &(((P882)rt_nil_check((*(P891)rt_nil_check(F->c_186)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_190(P895 t_188, P891 c_189) {
  struct f_sub_lo_190fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_188 = t_188;
F->c_189 = c_189;
if (((F->c_189 != NULL) && ((*(P891)rt_nil_check(F->c_189)).lo != NULL))) {
F->result_ = f_clo_185(F->c_189);
goto ret_;
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_188)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_188)).kind) == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_193(P895 t_191, P891 c_192) {
  struct f_sub_hi_193fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_191 = t_191;
F->c_192 = c_192;
if (((F->c_192 != NULL) && ((*(P891)rt_nil_check(F->c_192)).lo != NULL))) {
F->result_ = f_chi_187(F->c_192);
goto ret_;
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_191)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_191)).kind) == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_67((*(P895)rt_nil_check(F->t_191)).lits), ((rt_int)1LL)));
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
if ((!rt_r_echk(g_in_func_941))) {
F->g_1264 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_194)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_195)), rt_str(" ", 1)), F->g_1264), rt_str(";", 1)); b_; }));
g_st_field_947 = f_mk_3(&F->g_1264);
F->result_ = F->g_1264;
goto ret_;
}
{
F->f_1265 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_194), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_195)), rt_str(" ", 1)), F->f_1265), rt_str(";", 1)); b_; }));
g_st_field_947 = f_mk_3(&F->f_1265);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1265);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P891 f_copy_cons_198(P891 c_197) {
  struct f_copy_cons_198fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_197 = c_197;
F->r_1266 = NULL;
{ R892 *cell1267 = rt_alloc(sizeof(R892));
(*cell1267).lo = NULL;
(*cell1267).hi = NULL;
(*cell1267).lo2 = NULL;
(*cell1267).hi2 = NULL;
(*cell1267).slen = NULL;
(*cell1267).args = NULL;
(*cell1267).prec = NULL;
(*cell1267).bnds = NULL;
F->r_1266 = cell1267;
}
(*(P891)rt_nil_check(F->r_1266)).lo = (*(P891)rt_nil_check(F->c_197)).lo;
(*(P891)rt_nil_check(F->r_1266)).hi = (*(P891)rt_nil_check(F->c_197)).hi;
(*(P891)rt_nil_check(F->r_1266)).lo2 = (*(P891)rt_nil_check(F->c_197)).lo2;
(*(P891)rt_nil_check(F->r_1266)).hi2 = (*(P891)rt_nil_check(F->c_197)).hi2;
(*(P891)rt_nil_check(F->r_1266)).slen = (*(P891)rt_nil_check(F->c_197)).slen;
(*(P891)rt_nil_check(F->r_1266)).mlo = rt_r_ichk((*(P891)rt_nil_check(F->c_197)).mlo);
(*(P891)rt_nil_check(F->r_1266)).mhi = rt_r_ichk((*(P891)rt_nil_check(F->c_197)).mhi);
(*(P891)rt_nil_check(F->r_1266)).hasm = rt_r_echk((*(P891)rt_nil_check(F->c_197)).hasm);
(*(P891)rt_nil_check(F->r_1266)).args = (*(P891)rt_nil_check(F->c_197)).args;
(*(P891)rt_nil_check(F->r_1266)).dyn = rt_r_echk((*(P891)rt_nil_check(F->c_197)).dyn);
(*(P891)rt_nil_check(F->r_1266)).lvl = rt_r_ichk((*(P891)rt_nil_check(F->c_197)).lvl);
(*(P891)rt_nil_check(F->r_1266)).prec = (*(P891)rt_nil_check(F->c_197)).prec;
F->result_ = F->r_1266;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P891 f_freeze_201(P891 c_199, P895 t_200) {
  struct f_freeze_201fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_199 = c_199;
F->t_200 = t_200;
F->r_1268 = NULL;
F->saved_field_1269 = NULL;
F->saved_field_1269 = g_st_field_947;
if ((((((F->c_199 == NULL) || ((*(P891)rt_nil_check(F->c_199)).lo == NULL)) || rt_r_echk((*(P891)rt_nil_check(F->c_199)).hasm)) || rt_r_echk((*(P891)rt_nil_check(F->c_199)).dyn)) || (!f_scalar_kind_178(F->t_200)))) {
F->result_ = F->c_199;
goto ret_;
}
F->r_1268 = f_copy_cons_198(F->c_199);
{
F->ct_1270 = rt_str_copy(f_bound_ctype_180(F->t_200));
F->la_1271 = rt_str_copy(f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1270));
F->lf_1272 = rt_str_copy((((P882)rt_nil_check(g_st_field_947))->all));
F->ha_1273 = rt_str_copy(f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1270));
F->hf_1274 = rt_str_copy((((P882)rt_nil_check(g_st_field_947))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1271, rt_str(" = ", 3)), f_clo_185(F->c_199)), rt_str("; ", 2)), F->ha_1273), rt_str(" = ", 3)), f_chi_187(F->c_199)), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_941)) {
(*(P891)rt_nil_check(F->r_1268)).lo = f_mk_3(&F->lf_1272);
(*(P891)rt_nil_check(F->r_1268)).hi = f_mk_3(&F->hf_1274);
(*(P891)rt_nil_check(F->r_1268)).dyn = 1;
(*(P891)rt_nil_check(F->r_1268)).lvl = rt_r_ichk(g_cur_level_942);
} else {
(*(P891)rt_nil_check(F->r_1268)).lo = f_mk_3(&F->la_1271);
(*(P891)rt_nil_check(F->r_1268)).hi = f_mk_3(&F->ha_1273);
(*(P891)rt_nil_check(F->r_1268)).dyn = 0;
}
}
g_st_field_947 = F->saved_field_1269;
F->result_ = F->r_1268;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_205(P895 t_202, P891 c_203, rstr *v_204) {
  struct f_checked_205fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_202 = t_202;
F->c_203 = c_203;
F->v_204 = v_204;
if ((((F->c_203 == NULL) || (!f_scalar_kind_178(F->t_202))) || f_suppressed_461(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_204);
goto ret_;
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->t_202)).kind) != (((rt_int)3LL))) && rt_r_echk((*(P891)rt_nil_check(F->c_203)).hasm))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_204)), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P891)rt_nil_check(F->c_203)).mlo))), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P891)rt_nil_check(F->c_203)).mhi))), rt_str(")", 1));
goto ret_;
} else if (((*(P891)rt_nil_check(F->c_203)).lo == NULL)) {
F->result_ = (*F->v_204);
goto ret_;
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_202)).kind) == (((rt_int)3LL)))) {
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

static int f_same_lits_208(P889 a_206, P889 b_207) {
  struct f_same_lits_208fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_206 = a_206;
F->b_207 = b_207;
F->x_1275 = NULL;
F->x_1275 = F->a_206;
F->y_1276 = NULL;
F->y_1276 = F->b_207;
while (((F->x_1275 != NULL) && (F->y_1276 != NULL))) {
if ((!rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->x_1275)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->y_1276)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1275 = (*(P889)rt_nil_check(F->x_1275)).next;
F->y_1276 = (*(P889)rt_nil_check(F->y_1276)).next;
}
F->result_ = ((F->x_1275 == NULL) && (F->y_1276 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P895 f_str_elem_210(P895 t_209) {
  struct f_str_elem_210fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_209 = t_209;
if (((*(P895)rt_nil_check(F->t_209)).elem == NULL)) {
F->result_ = g_ty_ascii_972;
goto ret_;
}
F->result_ = (*(P895)rt_nil_check(F->t_209)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_213(P895 a_211, P895 b_212) {
  struct f_same_213fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_211 = a_211;
F->b_212 = b_212;
if ((F->a_211 == F->b_212)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_211 == NULL) || (F->b_212 == NULL)) || (rt_r_ichk((*(P895)rt_nil_check(F->a_211)).kind) != rt_r_ichk((*(P895)rt_nil_check(F->b_212)).kind)))) {
F->result_ = 0;
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->a_211)).kind) == (((rt_int)5LL)))) {
F->result_ = f_same_213(f_str_elem_210(F->a_211), f_str_elem_210(F->b_212));
goto ret_;
}
if ((((((rt_r_ichk((*(P895)rt_nil_check(F->a_211)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->a_211)).kind) == (((rt_int)2LL)))) || (rt_r_ichk((*(P895)rt_nil_check(F->a_211)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P895)rt_nil_check(F->a_211)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P895)rt_nil_check(F->a_211)).kind) == (((rt_int)10LL))))) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->a_211)).kind) == (((rt_int)4LL)))) {
F->result_ = f_same_lits_208((*(P895)rt_nil_check(F->a_211)).lits, (*(P895)rt_nil_check(F->b_212)).lits);
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->a_211)).kind) == (((rt_int)6LL)))) {
F->x_1277 = NULL;
F->x_1277 = (*(P895)rt_nil_check(F->a_211)).idxs;
F->y_1278 = NULL;
F->y_1278 = (*(P895)rt_nil_check(F->b_212)).idxs;
while (((F->x_1277 != NULL) && (F->y_1278 != NULL))) {
if ((!f_same_213((*(P910)rt_nil_check(F->x_1277)).t, (*(P910)rt_nil_check(F->y_1278)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1277 = (*(P910)rt_nil_check(F->x_1277)).next;
F->y_1278 = (*(P910)rt_nil_check(F->y_1278)).next;
}
F->result_ = (((F->x_1277 == NULL) && (F->y_1278 == NULL)) && f_same_213((*(P895)rt_nil_check(F->a_211)).elem, (*(P895)rt_nil_check(F->b_212)).elem));
goto ret_;
}
if (((rt_r_ichk((*(P895)rt_nil_check(F->a_211)).kind) == (((rt_int)16LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->a_211)).kind) == (((rt_int)12LL))))) {
F->result_ = f_same_213((*(P895)rt_nil_check(F->a_211)).elem, (*(P895)rt_nil_check(F->b_212)).elem);
goto ret_;
}
if (((rt_r_ichk((*(P895)rt_nil_check(F->a_211)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->a_211)).kind) == (((rt_int)17LL))))) {
F->f_1279 = NULL;
F->f_1279 = (*(P895)rt_nil_check(F->a_211)).fields;
F->g_1280 = NULL;
F->g_1280 = (*(P895)rt_nil_check(F->b_212)).fields;
while (((F->f_1279 != NULL) && (F->g_1280 != NULL))) {
if (((!rt_str_eq((((P882)rt_nil_check((*(P897)rt_nil_check(F->f_1279)).name))->all), (((P882)rt_nil_check((*(P897)rt_nil_check(F->g_1280)).name))->all))) || (!f_same_213((*(P897)rt_nil_check(F->f_1279)).t, (*(P897)rt_nil_check(F->g_1280)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1279 = (*(P897)rt_nil_check(F->f_1279)).next;
F->g_1280 = (*(P897)rt_nil_check(F->g_1280)).next;
}
F->result_ = ((F->f_1279 == NULL) && (F->g_1280 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P895 f_base_of_215(P895 t_214) {
  struct f_base_of_215fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_214 = t_214;
if ((((F->t_214 != NULL) && (rt_r_ichk((*(P895)rt_nil_check(F->t_214)).kind) == (((rt_int)15LL)))) && ((*(P895)rt_nil_check(F->t_214)).tparams == NULL))) {
F->result_ = f_base_of_215((*(P895)rt_nil_check(F->t_214)).under);
goto ret_;
}
F->result_ = F->t_214;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P891 f_base_cons_218(P895 t_216, P891 c_217) {
  struct f_base_cons_218fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_216 = t_216;
F->c_217 = c_217;
if (((((F->t_216 != NULL) && (rt_r_ichk((*(P895)rt_nil_check(F->t_216)).kind) == (((rt_int)15LL)))) && ((*(P895)rt_nil_check(F->t_216)).tparams == NULL)) && ((*(P895)rt_nil_check(F->t_216)).elemcons != NULL))) {
F->result_ = f_base_cons_218((*(P895)rt_nil_check(F->t_216)).under, (*(P895)rt_nil_check(F->t_216)).elemcons);
goto ret_;
}
F->result_ = F->c_217;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_220(P895 t_219) {
  struct f_kind_name_220fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_219 = t_219;
{ rt_int sel1281 = rt_r_ichk((*(P895)rt_nil_check(F->t_219)).kind);
if (0 || (sel1281 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1281 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1281 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1281 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1281 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1281 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1281 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1281 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1281 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_219)).name))->all));
goto ret_;
} else if (0 || (sel1281 == (((rt_int)11LL)))) {
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

static void f_check_type_224(P895 got_221, P895 want_222, rt_int line_223) {
  struct f_check_type_224fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_221 = got_221;
F->want_222 = want_222;
F->line_223 = line_223;
if ((F->want_222 == NULL)) {
goto ret_;
}
if (((rt_r_ichk((*(P895)rt_nil_check(F->got_221)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P895)rt_nil_check(F->want_222)).kind) == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_213(F->got_221, F->want_222))) {
f_fail_23(F->line_223, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_220(F->got_221)), rt_str(" where ", 7)), f_kind_name_220(F->want_222)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_226(P895 t_225) {
  struct f_ctype_226fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_225 = t_225;
{ rt_int sel1282 = rt_r_ichk((*(P895)rt_nil_check(F->t_225)).kind);
if (0 || (sel1282 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1282 == (((rt_int)2LL))) || (sel1282 == (((rt_int)4LL))) || (sel1282 == (((rt_int)10LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1282 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1282 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1282 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1282 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1282 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1282 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1282 == (((rt_int)16LL)))) {
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P895)rt_nil_check(F->t_225)).cname == NULL)) {
f_declare_ctype_232(F->t_225);
} else if (((((rt_r_ichk((*(P895)rt_nil_check(F->t_225)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->t_225)).kind) == (((rt_int)17LL)))) && rt_r_echk((*(P895)rt_nil_check(F->t_225)).forward)) && (!rt_r_echk((*(P895)rt_nil_check(F->t_225)).defined)))) {
(*(P895)rt_nil_check(F->t_225)).defined = 1;
f_put_27(g_out_types_932, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_225)).cname))->all)), rt_str(" ", 1)), f_struct_body_228(F->t_225)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_225)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_228(P895 t_227) {
  struct f_struct_body_228fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_227 = t_227;
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_227)).kind) == (((rt_int)17LL)))) {
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

static rstr f_field_decls_230(P895 t_229) {
  struct f_field_decls_230fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_229 = t_229;
F->f_1283 = NULL;
F->f_1283 = (*(P895)rt_nil_check(F->t_229)).fields;
F->s_1284 = NULL;
F->s_1284 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1283 != NULL)) {
F->s_1284 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->s_1284))->all), f_ctype_226((*(P897)rt_nil_check(F->f_1283)).t)), rt_str(" ", 1)), f_field_c_17(&(((P882)rt_nil_check((*(P897)rt_nil_check(F->f_1283)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1283 = (*(P897)rt_nil_check(F->f_1283)).next;
}
F->result_ = (((P882)rt_nil_check(F->s_1284))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_232(P895 t_231) {
  struct f_declare_ctype_232fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_231 = t_231;
F->u_1285 = NULL;
F->u_1285 = g_all_types_930;
if (((rt_r_ichk((*(P895)rt_nil_check(F->t_231)).kind) == (((rt_int)8LL))) && ((*(P895)rt_nil_check(F->t_231)).target == NULL))) {
f_finish_ptr_427(F->t_231);
if (((*(P895)rt_nil_check(F->t_231)).cname != NULL)) {
goto ret_;
}
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_231)).kind) != (((rt_int)8LL)))) {
while ((F->u_1285 != NULL)) {
if (((rt_r_ichk((*(P895)rt_nil_check(F->u_1285)).kind) == rt_r_ichk((*(P895)rt_nil_check(F->t_231)).kind)) && f_same_213(F->u_1285, F->t_231))) {
(*(P895)rt_nil_check(F->t_231)).cname = (*(P895)rt_nil_check(F->u_1285)).cname;
goto ret_;
}
F->u_1285 = (*(P895)rt_nil_check(F->u_1285)).next;
}
}
if (((rt_r_ichk((*(P895)rt_nil_check(F->t_231)).kind) == (((rt_int)15LL))) && ((*(P895)rt_nil_check(F->t_231)).tparams == NULL))) {
(*(P895)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_226((*(P895)rt_nil_check(F->t_231)).under); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_231)).kind) == (((rt_int)6LL)))) {
(*(P895)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_231)).kind) == (((rt_int)15LL)))) {
(*(P895)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->t_231)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->t_231)).kind) == (((rt_int)17LL))))) {
(*(P895)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P895)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P895)rt_nil_check(F->t_231)).next = g_all_types_930;
g_all_types_930 = F->t_231;
if ((((rt_r_ichk((*(P895)rt_nil_check(F->t_231)).kind) == (((rt_int)8LL))) && ((*(P895)rt_nil_check(F->t_231)).decl != NULL)) && ((*(P889)rt_nil_check((*(P895)rt_nil_check(F->t_231)).decl)).b != NULL))) {
F->p_1286 = NULL;
F->p_1286 = (*(P889)rt_nil_check((*(P895)rt_nil_check(F->t_231)).decl)).b;
F->fs_1287 = NULL;
F->fs_1287 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1288 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1286 != NULL)) {
F->pc_1289 = NULL;
F->fs_1287 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->fs_1287))->all), rt_str(" ", 1)), f_ctype_226(f_resolve_subtype_257((*(P889)rt_nil_check(F->p_1286)).a, &F->pc_1289))), rt_str(" p_", 3)), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1286)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1286 = (*(P889)rt_nil_check(F->p_1286)).next;
}
f_put_27(g_out_types_932, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1288), rt_str(" *", 2)), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_933, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1288), rt_str(" {", 2)), (((P882)rt_nil_check(F->fs_1287))->all)), rt_str(" ", 1)), f_ctype_226((*(P895)rt_nil_check(F->t_231)).target)), rt_str(" all; };", 8)); b_; }));
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_231)).kind) == (((rt_int)8LL)))) {
F->target_1290 = NULL;
F->target_1290 = (*(P895)rt_nil_check(F->t_231)).target;
if (((rt_r_ichk((*(P895)rt_nil_check(F->target_1290)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->target_1290)).kind) == (((rt_int)17LL))))) {
if (((*(P895)rt_nil_check(F->target_1290)).cname == NULL)) {
(*(P895)rt_nil_check(F->target_1290)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P895)rt_nil_check(F->target_1290)).next = g_all_types_930;
g_all_types_930 = F->target_1290;
f_put_27(g_out_types_932, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P882)rt_nil_check((*(P895)rt_nil_check(F->target_1290)).cname))->all)), rt_str(" ", 1)), (((P882)rt_nil_check((*(P895)rt_nil_check(F->target_1290)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P895)rt_nil_check(F->target_1290)).forward = 1;
}
f_put_27(g_out_types_932, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P882)rt_nil_check((*(P895)rt_nil_check(F->target_1290)).cname))->all)), rt_str(" *", 2)), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_932, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_226(F->target_1290)), rt_str(" *", 2)), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_231)).kind) == (((rt_int)6LL)))) {
f_put_27(g_out_types_932, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_932, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_231)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_226((*(P895)rt_nil_check(F->t_231)).elem)), rt_str(" *p;", 4)), f_more_dims_238(F->t_231)), rt_str(" };", 3)); b_; }));
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_231)).kind) == (((rt_int)15LL)))) {
F->p_1291 = NULL;
F->p_1291 = (*(P895)rt_nil_check(F->t_231)).tparams;
F->fs_1292 = NULL;
F->fs_1292 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1291 != NULL)) {
F->fs_1292 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->fs_1292))->all), f_ctype_226(f_tparam_type_322(F->t_231, &(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1291)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1291)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1291 = (*(P889)rt_nil_check(F->p_1291)).next;
}
f_put_27(g_out_types_932, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_932, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_231)).cname))->all)), rt_str(" {", 2)), (((P882)rt_nil_check(F->fs_1292))->all)), f_ctype_226((*(P895)rt_nil_check(F->t_231)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_932, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P895)rt_nil_check(F->t_231)).defined = 1;
f_put_27(g_out_types_932, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), f_struct_body_228(F->t_231)), rt_str(";", 1)); b_; }));
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

static rstr f_more_dims_238(P895 t_237) {
  struct f_more_dims_238fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_237 = t_237;
F->r_1293 = NULL;
F->r_1293 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1295 = ((rt_int)3LL), hi1296 = rt_r_ichk((*(P895)rt_nil_check(F->t_237)).ndim);
for (rt_int it1297 = lo1295; it1297 <= hi1296; it1297++) {
F->k_1294 = it1297;
F->r_1293 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_1293))->all), rt_str(" rt_int ", 8)), f_dim_lo_234(F->k_1294)), rt_str(", ", 2)), f_dim_hi_236(F->k_1294)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P882)rt_nil_check(F->r_1293))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_241(P895 t_239, rstr *base_240) {
  struct f_acnt_241fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_239 = t_239;
F->base_240 = base_240;
F->r_1298 = NULL;
F->r_1298 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_240)), rt_str(")", 1)); b_; }));
{ rt_int lo1300 = ((rt_int)3LL), hi1301 = rt_r_ichk((*(P895)rt_nil_check(F->t_239)).ndim);
for (rt_int it1302 = lo1300; it1302 <= hi1301; it1302++) {
F->k_1299 = it1302;
F->r_1298 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_1298))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_240)), rt_str(".", 1)), f_dim_lo_234(F->k_1299)), rt_str(", ", 2)), (*F->base_240)), rt_str(".", 1)), f_dim_hi_236(F->k_1299)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P882)rt_nil_check(F->r_1298))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P882 f_cons_lo_244(P891 c_242, rt_int k_243) {
  struct f_cons_lo_244fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_242 = c_242;
F->k_243 = k_243;
F->l_1303 = NULL;
if ((F->k_243 == ((rt_int)1LL))) {
F->result_ = (*(P891)rt_nil_check(F->c_242)).lo;
goto ret_;
} else if ((F->k_243 == ((rt_int)2LL))) {
F->result_ = (*(P891)rt_nil_check(F->c_242)).lo2;
goto ret_;
}
F->l_1303 = (*(P891)rt_nil_check(F->c_242)).bnds;
{ rt_int lo1305 = ((rt_int)1LL), hi1306 = rt_sub(rt_add(F->k_243, F->k_243), ((rt_int)6LL));
for (rt_int it1307 = lo1305; it1307 <= hi1306; it1307++) {
F->i_1304 = it1307;
if ((F->l_1303 != NULL)) {
F->l_1303 = (*(P893)rt_nil_check(F->l_1303)).next;
}
}
}
if ((F->l_1303 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P893)rt_nil_check(F->l_1303)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P882 f_cons_hi_247(P891 c_245, rt_int k_246) {
  struct f_cons_hi_247fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_245 = c_245;
F->k_246 = k_246;
F->l_1308 = NULL;
if ((F->k_246 == ((rt_int)1LL))) {
F->result_ = (*(P891)rt_nil_check(F->c_245)).hi;
goto ret_;
} else if ((F->k_246 == ((rt_int)2LL))) {
F->result_ = (*(P891)rt_nil_check(F->c_245)).hi2;
goto ret_;
}
F->l_1308 = (*(P891)rt_nil_check(F->c_245)).bnds;
{ rt_int lo1310 = ((rt_int)1LL), hi1311 = rt_sub(rt_add(F->k_246, F->k_246), ((rt_int)5LL));
for (rt_int it1312 = lo1310; it1312 <= hi1311; it1312++) {
F->i_1309 = it1312;
if ((F->l_1308 != NULL)) {
F->l_1308 = (*(P893)rt_nil_check(F->l_1308)).next;
}
}
}
if ((F->l_1308 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P893)rt_nil_check(F->l_1308)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P895 f_idx_type_250(P895 t_248, rt_int k_249) {
  struct f_idx_type_250fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_248 = t_248;
F->k_249 = k_249;
F->l_1313 = NULL;
F->l_1313 = (*(P895)rt_nil_check(F->t_248)).idxs;
{ rt_int lo1315 = ((rt_int)2LL), hi1316 = F->k_249;
for (rt_int it1317 = lo1315; it1317 <= hi1316; it1317++) {
F->i_1314 = it1317;
F->l_1313 = (*(P910)rt_nil_check(F->l_1313)).next;
}
}
F->result_ = (*(P910)rt_nil_check(F->l_1313)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_251(void) {
  struct f_init_ascii_251fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1318 = NULL;
F->tail_1319 = NULL;
F->start_1320 = RT_R_IUNDEF;
F->start_1320 = ((rt_int)1LL);
{ rt_int lo1322 = ((rt_int)1LL), hi1323 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1324 = lo1322; it1324 <= hi1323; it1324++) {
F->i_1321 = it1324;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1321) == 32)) {
F->lit_1325 = NULL;
F->lit_1325 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P889)rt_nil_check(F->lit_1325)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), rt_r_ichk(F->start_1320), rt_sub(F->i_1321, ((rt_int)1LL))); b_; }));
f_append_65(&F->head_1318, &F->tail_1319, F->lit_1325);
F->start_1320 = rt_add(F->i_1321, ((rt_int)1LL));
}
}
}
g_ty_ascii_972 = f_new_typ_175((((rt_int)4LL)));
(*(P895)rt_nil_check(g_ty_ascii_972)).lits = F->head_1318;
(*(P895)rt_nil_check(g_ty_ascii_972)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1326 = NULL;
F->t2_1327 = NULL;
F->l1_1328 = NULL;
F->l1_1328 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1329 = NULL;
F->l2_1329 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1330 = NULL;
F->l3_1330 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P889)rt_nil_check(F->l1_1328)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P889)rt_nil_check(F->l2_1329)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P889)rt_nil_check(F->l3_1330)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_65(&F->h2_1326, &F->t2_1327, F->l1_1328);
f_append_65(&F->h2_1326, &F->t2_1327, F->l2_1329);
f_append_65(&F->h2_1326, &F->t2_1327, F->l3_1330);
g_file_mode_type_980 = f_new_typ_175((((rt_int)4LL)));
(*(P895)rt_nil_check(g_file_mode_type_980)).lits = F->h2_1326;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_lit_index_254(P889 lits_252, rstr *name_253) {
  struct f_lit_index_254fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_252 = lits_252;
F->name_253 = name_253;
F->i_1331 = RT_R_IUNDEF;
F->i_1331 = ((rt_int)0LL);
F->l_1332 = NULL;
F->l_1332 = F->lits_252;
while ((F->l_1332 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->l_1332)).name))->all), (*F->name_253))) {
F->result_ = rt_r_ichk(F->i_1331);
goto ret_;
}
F->i_1331 = rt_add(rt_r_ichk(F->i_1331), ((rt_int)1LL));
F->l_1332 = (*(P889)rt_nil_check(F->l_1332)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P895 f_resolve_subtype_257(P889 st_255, P891 *c_256) {
  struct f_resolve_subtype_257fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_255 = st_255;
F->c_256 = c_256;
F->c_256v = *F->c_256;
F->t_1333 = NULL;
F->ok_1334 = RT_R_EUNDEF;
F->dummy_1335 = NULL;
F->c_256v = f_new_cons_176();
{ rt_int sel1336 = rt_r_ichk((*(P889)rt_nil_check(F->st_255)).kind);
if (0 || (sel1336 == (((rt_int)70LL)))) {
if (((*(P889)rt_nil_check(F->st_255)).a != NULL)) {
(*(P891)rt_nil_check(F->c_256v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P889)rt_nil_check(F->st_255)).a, g_ty_int_969, &F->dummy_1335); b_; }));
(*(P891)rt_nil_check(F->c_256v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P889)rt_nil_check(F->st_255)).b, g_ty_int_969, &F->dummy_1335); b_; }));
(*(P891)rt_nil_check(F->c_256v)).mlo = f_manifest_334((*(P889)rt_nil_check(F->st_255)).a, &F->ok_1334);
(*(P891)rt_nil_check(F->c_256v)).hasm = rt_r_echk(F->ok_1334);
(*(P891)rt_nil_check(F->c_256v)).mhi = f_manifest_334((*(P889)rt_nil_check(F->st_255)).b, &F->ok_1334);
(*(P891)rt_nil_check(F->c_256v)).hasm = (rt_r_echk((*(P891)rt_nil_check(F->c_256v)).hasm) && rt_r_echk(F->ok_1334));
}
F->result_ = g_ty_int_969;
goto ret_;
} else if (0 || (sel1336 == (((rt_int)71LL)))) {
if (((*(P889)rt_nil_check(F->st_255)).a != NULL)) {
(*(P891)rt_nil_check(F->c_256v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P889)rt_nil_check(F->st_255)).a, g_ty_int_969, &F->dummy_1335); b_; }));
}
if (((*(P889)rt_nil_check(F->st_255)).b != NULL)) {
(*(P891)rt_nil_check(F->c_256v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P889)rt_nil_check(F->st_255)).b, g_ty_float_971, &F->dummy_1335); b_; }));
(*(P891)rt_nil_check(F->c_256v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P889)rt_nil_check(F->st_255)).c, g_ty_float_971, &F->dummy_1335); b_; }));
(*(P891)rt_nil_check(F->c_256v)).hasm = (f_float_lit_259((*(P889)rt_nil_check(F->st_255)).b) && f_float_lit_259((*(P889)rt_nil_check(F->st_255)).c));
}
F->result_ = g_ty_float_971;
goto ret_;
} else if (0 || (sel1336 == (((rt_int)72LL)))) {
F->t_1333 = f_new_typ_175((((rt_int)4LL)));
(*(P895)rt_nil_check(F->t_1333)).lits = (*(P889)rt_nil_check(F->st_255)).a;
if (((*(P889)rt_nil_check(F->st_255)).b != NULL)) {
(*(P891)rt_nil_check(F->c_256v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P889)rt_nil_check(F->st_255)).b, F->t_1333, &F->dummy_1335); b_; }));
(*(P891)rt_nil_check(F->c_256v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P889)rt_nil_check(F->st_255)).c, F->t_1333, &F->dummy_1335); b_; }));
if (((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->st_255)).b)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->st_255)).c)).kind) == (((rt_int)4LL))))) {
(*(P891)rt_nil_check(F->c_256v)).mlo = f_lit_index_254((*(P895)rt_nil_check(F->t_1333)).lits, &(((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->st_255)).b)).name))->all));
(*(P891)rt_nil_check(F->c_256v)).mhi = f_lit_index_254((*(P895)rt_nil_check(F->t_1333)).lits, &(((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->st_255)).c)).name))->all));
(*(P891)rt_nil_check(F->c_256v)).hasm = 1;
}
}
F->result_ = F->t_1333;
goto ret_;
} else if (0 || (sel1336 == (((rt_int)73LL)))) {
F->t_1333 = f_resolve_subtype_257((*(P889)rt_nil_check(F->st_255)).a, &F->c_256v);
if (((*(P895)rt_nil_check(f_base_of_215(F->t_1333))).kind != (((rt_int)4LL)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_213(F->t_1333, g_ty_ascii_972) && ((F->c_256v == NULL) || ((*(P891)rt_nil_check(F->c_256v)).lo == NULL)))) {
F->t_1333 = g_ty_string_973;
} else {
F->et_1337 = NULL;
F->et_1337 = F->t_1333;
F->t_1333 = f_new_typ_175((((rt_int)5LL)));
(*(P895)rt_nil_check(F->t_1333)).elem = F->et_1337;
(*(P895)rt_nil_check(F->t_1333)).elemcons = F->c_256v;
}
F->c_256v = f_new_cons_176();
if (((*(P889)rt_nil_check(F->st_255)).b != NULL)) {
(*(P891)rt_nil_check(F->c_256v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P889)rt_nil_check(F->st_255)).b, g_ty_int_969, &F->dummy_1335); b_; }));
}
F->result_ = F->t_1333;
goto ret_;
} else if (0 || (sel1336 == (((rt_int)74LL)))) {
{
F->ec_1338 = NULL;
F->et_1339 = NULL;
F->et_1339 = f_resolve_subtype_257((*(P889)rt_nil_check(F->st_255)).b, &F->ec_1338);
F->ix_1340 = NULL;
F->ix_1340 = (*(P889)rt_nil_check(F->st_255)).a;
F->k_1341 = RT_R_IUNDEF;
F->k_1341 = ((rt_int)0LL);
F->tail_1342 = NULL;
F->btail_1343 = NULL;
F->t_1333 = f_new_typ_175((((rt_int)6LL)));
(*(P895)rt_nil_check(F->t_1333)).elem = F->et_1339;
(*(P895)rt_nil_check(F->t_1333)).elemcons = F->ec_1338;
(*(P895)rt_nil_check(F->t_1333)).elemst = (*(P889)rt_nil_check(F->st_255)).b;
(*(P891)rt_nil_check(F->c_256v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P891)rt_nil_check(F->c_256v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1340 != NULL)) {
F->ic_1344 = NULL;
F->it_1345 = NULL;
F->it_1345 = f_resolve_subtype_257(F->ix_1340, &F->ic_1344);
F->lo_1346 = NULL;
F->hi_1347 = NULL;
F->tl_1348 = NULL;
if ((((*(P895)rt_nil_check(f_base_of_215(F->it_1345))).kind != (((rt_int)1LL))) && ((*(P895)rt_nil_check(f_base_of_215(F->it_1345))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1344 = f_base_cons_218(F->it_1345, F->ic_1344);
F->k_1341 = rt_add(rt_r_ichk(F->k_1341), ((rt_int)1LL));
{ R911 *cell1349 = rt_alloc(sizeof(R911));
(*cell1349).t = NULL;
(*cell1349).next = NULL;
F->tl_1348 = cell1349;
}
(*(P910)rt_nil_check(F->tl_1348)).t = F->it_1345;
if ((F->tail_1342 == NULL)) {
(*(P895)rt_nil_check(F->t_1333)).idxs = F->tl_1348;
} else {
(*(P910)rt_nil_check(F->tail_1342)).next = F->tl_1348;
}
F->tail_1342 = F->tl_1348;
if (((F->ic_1344 != NULL) && ((*(P891)rt_nil_check(F->ic_1344)).lo != NULL))) {
F->lo_1346 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_185(F->ic_1344); b_; }));
F->hi_1347 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_187(F->ic_1344); b_; }));
} else if (((*(P895)rt_nil_check(f_base_of_215(F->it_1345))).kind == (((rt_int)4LL)))) {
F->lo_1346 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1347 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P895)rt_nil_check(f_base_of_215(F->it_1345))).lits), ((rt_int)1LL))); b_; }));
}
if ((rt_r_ichk(F->k_1341) == ((rt_int)1LL))) {
(*(P895)rt_nil_check(F->t_1333)).idx = F->it_1345;
(*(P891)rt_nil_check(F->c_256v)).lo = F->lo_1346;
(*(P891)rt_nil_check(F->c_256v)).hi = F->hi_1347;
} else if ((rt_r_ichk(F->k_1341) == ((rt_int)2LL))) {
(*(P895)rt_nil_check(F->t_1333)).idx2 = F->it_1345;
(*(P891)rt_nil_check(F->c_256v)).lo2 = F->lo_1346;
(*(P891)rt_nil_check(F->c_256v)).hi2 = F->hi_1347;
} else if ((F->lo_1346 != NULL)) {
F->l1_1350 = NULL;
F->l2_1351 = NULL;
{ R894 *cell1352 = rt_alloc(sizeof(R894));
(*cell1352).s = NULL;
(*cell1352).next = NULL;
F->l1_1350 = cell1352;
}
{ R894 *cell1353 = rt_alloc(sizeof(R894));
(*cell1353).s = NULL;
(*cell1353).next = NULL;
F->l2_1351 = cell1353;
}
(*(P893)rt_nil_check(F->l1_1350)).s = F->lo_1346;
(*(P893)rt_nil_check(F->l2_1351)).s = F->hi_1347;
(*(P893)rt_nil_check(F->l1_1350)).next = F->l2_1351;
if ((F->btail_1343 == NULL)) {
(*(P891)rt_nil_check(F->c_256v)).bnds = F->l1_1350;
} else {
(*(P893)rt_nil_check(F->btail_1343)).next = F->l1_1350;
}
F->btail_1343 = F->l2_1351;
}
F->ix_1340 = (*(P889)rt_nil_check(F->ix_1340)).next;
}
(*(P895)rt_nil_check(F->t_1333)).ndim = rt_r_ichk(F->k_1341);
}
F->result_ = F->t_1333;
goto ret_;
} else if (0 || (sel1336 == (((rt_int)77LL)))) {
F->t_1333 = f_new_typ_175((((rt_int)16LL)));
{
F->ec_1354 = NULL;
(*(P895)rt_nil_check(F->t_1333)).elem = f_resolve_subtype_257((*(P889)rt_nil_check(F->st_255)).a, &F->ec_1354);
(*(P895)rt_nil_check(F->t_1333)).elemcons = F->ec_1354;
if ((((*(P895)rt_nil_check(f_base_of_215((*(P895)rt_nil_check(F->t_1333)).elem))).kind != (((rt_int)1LL))) && ((*(P895)rt_nil_check(f_base_of_215((*(P895)rt_nil_check(F->t_1333)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
if ((((*(P895)rt_nil_check(f_base_of_215((*(P895)rt_nil_check(F->t_1333)).elem))).kind == (((rt_int)1LL))) && ((F->ec_1354 == NULL) || ((*(P891)rt_nil_check(F->ec_1354)).lo == NULL)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SET[INT] needs a range here: a set of every INT cannot be represented", 69); b_; }));
}
}
F->result_ = F->t_1333;
goto ret_;
} else if (0 || (sel1336 == (((rt_int)75LL))) || (sel1336 == (((rt_int)76LL)))) {
if ((rt_r_ichk((*(P889)rt_nil_check(F->st_255)).kind) == (((rt_int)76LL)))) {
F->t_1333 = f_new_typ_175((((rt_int)17LL)));
} else {
F->t_1333 = f_new_typ_175((((rt_int)7LL)));
}
{
F->comp_1355 = NULL;
F->comp_1355 = (*(P889)rt_nil_check(F->st_255)).a;
F->tail_1356 = NULL;
while ((F->comp_1355 != NULL)) {
F->cc_1357 = NULL;
F->f_1358 = NULL;
{ R898 *cell1359 = rt_alloc(sizeof(R898));
(*cell1359).name = NULL;
(*cell1359).t = NULL;
(*cell1359).c = NULL;
(*cell1359).st = NULL;
(*cell1359).next = NULL;
F->f_1358 = cell1359;
}
(*(P897)rt_nil_check(F->f_1358)).name = (*(P889)rt_nil_check(F->comp_1355)).name;
(*(P897)rt_nil_check(F->f_1358)).t = f_resolve_subtype_257((*(P889)rt_nil_check(F->comp_1355)).a, &F->cc_1357);
(*(P897)rt_nil_check(F->f_1358)).c = F->cc_1357;
(*(P897)rt_nil_check(F->f_1358)).st = (*(P889)rt_nil_check(F->comp_1355)).a;
if ((F->tail_1356 == NULL)) {
(*(P895)rt_nil_check(F->t_1333)).fields = F->f_1358;
} else {
(*(P897)rt_nil_check(F->tail_1356)).next = F->f_1358;
}
F->tail_1356 = F->f_1358;
F->comp_1355 = (*(P889)rt_nil_check(F->comp_1355)).next;
}
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_1333)).kind) == (((rt_int)17LL)))) {
F->lits_1360 = NULL;
F->ltail_1361 = NULL;
F->f_1362 = NULL;
F->f_1362 = (*(P895)rt_nil_check(F->t_1333)).fields;
while ((F->f_1362 != NULL)) {
F->l_1363 = NULL;
F->l_1363 = f_nn_61((((rt_int)4LL)), rt_r_ichk((*(P889)rt_nil_check(F->st_255)).line));
if (rt_str_eq((((P882)rt_nil_check((*(P897)rt_nil_check(F->f_1362)).name))->all), rt_str("TAG", 3))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P889)rt_nil_check(F->l_1363)).name = (*(P897)rt_nil_check(F->f_1362)).name;
f_append_65(&F->lits_1360, &F->ltail_1361, F->l_1363);
F->f_1362 = (*(P897)rt_nil_check(F->f_1362)).next;
}
(*(P895)rt_nil_check(F->t_1333)).elem = f_new_typ_175((((rt_int)4LL)));
(*(P895)rt_nil_check((*(P895)rt_nil_check(F->t_1333)).elem)).lits = F->lits_1360;
if (((*(P889)rt_nil_check(F->st_255)).b != NULL)) {
f_tag_constraint_263(F->t_1333, (*(P889)rt_nil_check(F->st_255)).b, F->c_256v);
}
}
F->result_ = F->t_1333;
goto ret_;
} else if (0 || (sel1336 == (((rt_int)79LL)))) {
F->result_ = g_ty_file_975;
goto ret_;
} else if (0 || (sel1336 == (((rt_int)78LL)))) {
if (((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P899)rt_nil_check(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1364 = NULL;
F->gt_1364 = f_copy_node_739((*(P889)rt_nil_check(F->st_255)).a);
(*(P889)rt_nil_check(F->gt_1364)).next = NULL;
F->result_ = f_instantiate_type_640(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1364, (*(P889)rt_nil_check(F->st_255)).b, &F->c_256v, rt_r_ichk((*(P889)rt_nil_check(F->st_255)).line));
goto ret_;
}
{
F->ec_1365 = NULL;
F->t_1333 = f_new_typ_175((((rt_int)12LL)));
(*(P895)rt_nil_check(F->t_1333)).elem = f_resolve_subtype_257((*(P889)rt_nil_check(F->st_255)).a, &F->ec_1365);
(*(P895)rt_nil_check(F->t_1333)).elemcons = F->ec_1365;
if (((*(P889)rt_nil_check(F->st_255)).b != NULL)) {
(*(P891)rt_nil_check(F->c_256v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P889)rt_nil_check(F->st_255)).b, g_ty_int_969, &F->dummy_1335); b_; }));
}
}
F->result_ = F->t_1333;
goto ret_;
} else if (0 || (sel1336 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_266(F->st_255, &F->c_256v);
goto ret_;
} else if (0 || (sel1336 == (((rt_int)81LL)))) {
{
F->base_1366 = NULL;
F->result_ = f_value_subtype_279((*(P889)rt_nil_check(F->st_255)).a, &F->c_256v, &F->base_1366);
goto ret_;
}
} else {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->st_255)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
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

static int f_float_lit_259(P889 e_258) {
  struct f_float_lit_259fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_258 = e_258;
if (((rt_r_ichk((*(P889)rt_nil_check(F->e_258)).kind) == (((rt_int)8LL))) && (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_258)).name))->all), rt_str("-", 1)) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_258)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_259((*(P889)rt_nil_check(F->e_258)).a);
goto ret_;
}
F->result_ = ((rt_r_ichk((*(P889)rt_nil_check(F->e_258)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P889)rt_nil_check(F->e_258)).kind) == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_263(P895 t_260, P889 e_261, P891 c_262) {
  struct f_tag_constraint_263fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_260 = t_260;
F->e_261 = e_261;
F->c_262 = c_262;
F->dummy_1367 = NULL;
(*(P891)rt_nil_check(F->c_262)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700(F->e_261, (*(P895)rt_nil_check(F->t_260)).elem, &F->dummy_1367); b_; }));
f_check_type_224(F->dummy_1367, (*(P895)rt_nil_check(F->t_260)).elem, rt_r_ichk((*(P889)rt_nil_check(F->e_261)).line));
(*(P891)rt_nil_check(F->c_262)).hi = (*(P891)rt_nil_check(F->c_262)).lo;
if ((rt_r_ichk((*(P889)rt_nil_check(F->e_261)).kind) == (((rt_int)4LL)))) {
(*(P891)rt_nil_check(F->c_262)).mlo = f_lit_index_254((*(P895)rt_nil_check((*(P895)rt_nil_check(F->t_260)).elem)).lits, &(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_261)).name))->all));
(*(P891)rt_nil_check(F->c_262)).mhi = rt_r_ichk((*(P891)rt_nil_check(F->c_262)).mlo);
(*(P891)rt_nil_check(F->c_262)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P895 f_named_subtype_266(P889 st_264, P891 *c_265) {
  struct f_named_subtype_266fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_264 = st_264;
F->c_265 = c_265;
F->c_265v = *F->c_265;
F->t_1368 = NULL;
F->y_1369 = NULL;
F->y_1369 = f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->st_264)).name))->all));
F->name_1370 = rt_str_copy((((P882)rt_nil_check((*(P889)rt_nil_check(F->st_264)).name))->all));
F->c_265v = f_new_cons_176();
if (((F->y_1369 == NULL) && ((rt_str_eq(F->name_1370, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1370, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1370, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_284(F->st_264, &F->c_265v);
goto ret_;
}
if ((F->y_1369 == NULL)) {
if (rt_str_eq(F->name_1370, rt_str("BOOL", 4))) {
F->t_1368 = g_ty_bool_970;
} else if (rt_str_eq(F->name_1370, rt_str("ASCII", 5))) {
F->t_1368 = g_ty_ascii_972;
} else if (rt_str_eq(F->name_1370, rt_str("DATA_LOCK", 9))) {
F->t_1368 = g_ty_lock_977;
} else if (rt_str_eq(F->name_1370, rt_str("LATCH", 5))) {
F->t_1368 = g_ty_latch_978;
} else if (rt_str_eq(F->name_1370, rt_str("ACT", 3))) {
F->t_1368 = g_ty_act_979;
} else if (rt_str_eq(F->name_1370, rt_str("INT", 3))) {
F->t_1368 = g_ty_int_969;
} else if (rt_str_eq(F->name_1370, rt_str("FLOAT", 5))) {
F->t_1368 = g_ty_float_971;
} else {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->st_264)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1370); b_; }));
}
if (((*(P889)rt_nil_check(F->st_264)).b != NULL)) {
f_apply_constraint_275(F->t_1368, (*(P889)rt_nil_check(F->st_264)).b, F->c_265v, rt_r_ichk((*(P889)rt_nil_check(F->st_264)).line));
}
F->result_ = F->t_1368;
goto ret_;
}
if (((rt_r_ichk((*(P899)rt_nil_check(F->y_1369)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_1369)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_1369)).decl)).b)).kind) == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_640(F->y_1369, (*(P889)rt_nil_check(F->st_264)).a, (*(P889)rt_nil_check(F->st_264)).b, &F->c_265v, rt_r_ichk((*(P889)rt_nil_check(F->st_264)).line));
goto ret_;
}
if (((rt_r_ichk((*(P899)rt_nil_check(F->y_1369)).kind) == (((rt_int)10LL))) && (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_1369)).decl)).b)).kind) == (((rt_int)42LL))))) {
F->binds_1371 = NULL;
F->binds_1371 = f_tt_binds_606((*(P899)rt_nil_check(F->y_1369)).decl, (*(P889)rt_nil_check((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_1369)).decl)).b)).e, (*(P889)rt_nil_check(F->st_264)).a, rt_r_ichk((*(P889)rt_nil_check(F->st_264)).line));
F->saved_env_1372 = NULL;
F->saved_env_1372 = g_genv_926;
F->saved_gdepth_1373 = RT_R_IUNDEF;
F->saved_gdepth_1373 = rt_r_ichk(g_gdepth_958);
f_open_scope_169();
while ((F->binds_1371 != NULL)) {
F->nb_1374 = NULL;
F->nb_1374 = (*(P899)rt_nil_check(F->binds_1371)).mnext;
f_define_160(F->binds_1371, rt_r_ichk((*(P889)rt_nil_check(F->st_264)).line));
F->binds_1371 = F->nb_1374;
}
g_genv_926 = (*(P899)rt_nil_check(F->y_1369)).env;
g_gdepth_958 = rt_r_ichk(g_depth_928);
F->t_1368 = f_resolve_subtype_257((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_1369)).decl)).b)).a, &F->c_265v);
g_genv_926 = F->saved_env_1372;
g_gdepth_958 = rt_r_ichk(F->saved_gdepth_1373);
f_close_scope_170();
if (((*(P889)rt_nil_check(F->st_264)).b != NULL)) {
F->c_265v = f_copy_cons_198(F->c_265v);
f_apply_constraint_275(F->t_1368, (*(P889)rt_nil_check(F->st_264)).b, F->c_265v, rt_r_ichk((*(P889)rt_nil_check(F->st_264)).line));
}
F->result_ = F->t_1368;
goto ret_;
}
if ((((rt_r_ichk((*(P899)rt_nil_check(F->y_1369)).kind) == (((rt_int)5LL))) && ((*(P899)rt_nil_check(F->y_1369)).t != NULL)) && (rt_r_ichk((*(P895)rt_nil_check((*(P899)rt_nil_check(F->y_1369)).t)).kind) == (((rt_int)15LL))))) {
F->result_ = f_new_type_307(F->y_1369, F->st_264, &F->c_265v);
goto ret_;
}
if ((((rt_r_ichk((*(P899)rt_nil_check(F->y_1369)).kind) == (((rt_int)5LL))) && ((*(P899)rt_nil_check(F->y_1369)).t != NULL)) && (rt_r_ichk((*(P895)rt_nil_check((*(P899)rt_nil_check(F->y_1369)).t)).kind) == (((rt_int)8LL))))) {
(*(P891)rt_nil_check(F->c_265v)).args = (*(P889)rt_nil_check(F->st_264)).b;
F->result_ = (*(P899)rt_nil_check(F->y_1369)).t;
goto ret_;
}
if ((((rt_r_ichk((*(P899)rt_nil_check(F->y_1369)).kind) == (((rt_int)6LL))) && ((*(P899)rt_nil_check(F->y_1369)).decl != NULL)) && ((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_1369)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_270(F->y_1369, F->st_264, &F->c_265v);
goto ret_;
}
if ((((rt_r_ichk((*(P899)rt_nil_check(F->y_1369)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_1369)).kind) == (((rt_int)5LL)))) && ((*(P899)rt_nil_check(F->y_1369)).t != NULL))) {
if (((*(P899)rt_nil_check(F->y_1369)).c != NULL)) {
F->c_265v = (*(P899)rt_nil_check(F->y_1369)).c;
}
F->t_1368 = (*(P899)rt_nil_check(F->y_1369)).t;
} else if ((((rt_r_ichk((*(P899)rt_nil_check(F->y_1369)).kind) == (((rt_int)5LL))) && ((*(P899)rt_nil_check(F->y_1369)).decl != NULL)) && (rt_r_ichk((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_1369)).decl)).kind) == (((rt_int)43LL))))) {
F->result_ = f_new_type_307(F->y_1369, F->st_264, &F->c_265v);
goto ret_;
} else if (((rt_r_ichk((*(P899)rt_nil_check(F->y_1369)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_1369)).kind) == (((rt_int)5LL))))) {
F->t_1368 = f_resolve_subtype_257((*(P899)rt_nil_check(F->y_1369)).st, &F->c_265v);
} else {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->st_264)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1370, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P889)rt_nil_check(F->st_264)).b != NULL)) {
F->c_265v = f_copy_cons_198(F->c_265v);
f_apply_constraint_275(F->t_1368, (*(P889)rt_nil_check(F->st_264)).b, F->c_265v, rt_r_ichk((*(P889)rt_nil_check(F->st_264)).line));
}
F->result_ = F->t_1368;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_265) = F->c_265v;
  RT_FPOP();
  return F->result_;
}

static P895 f_invoke_abbrev_270(P899 y_267, P889 st_268, P891 *c_269) {
  struct f_invoke_abbrev_270fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_267 = y_267;
F->st_268 = st_268;
F->c_269 = c_269;
F->c_269v = *F->c_269;
F->p_1375 = NULL;
F->p_1375 = (*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_267)).decl)).b;
F->a_1376 = NULL;
F->a_1376 = (*(P889)rt_nil_check(F->st_268)).b;
F->t_1377 = NULL;
if ((f_list_len_67(F->p_1375) != f_list_len_67(F->a_1376))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->st_268)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_267)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1375))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_169();
while ((F->p_1375 != NULL)) {
F->z_1378 = NULL;
F->z_1378 = f_new_sym_173((((rt_int)2LL)), (*(P889)rt_nil_check(F->p_1375)).name);
F->pc_1379 = NULL;
F->at_1380 = NULL;
F->ok_1381 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P889)rt_nil_check(F->p_1375)).ival) != (((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->st_268)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P899)rt_nil_check(F->z_1378)).t = f_resolve_subtype_257((*(P889)rt_nil_check(F->p_1375)).a, &F->pc_1379);
(*(P899)rt_nil_check(F->z_1378)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_700(F->a_1376, (*(P899)rt_nil_check(F->z_1378)).t, &F->at_1380)), rt_str(")", 1)); b_; }));
f_check_type_224(F->at_1380, (*(P899)rt_nil_check(F->z_1378)).t, rt_r_ichk((*(P889)rt_nil_check(F->st_268)).line));
(*(P899)rt_nil_check(F->z_1378)).mvalue = f_manifest_334(F->a_1376, &F->ok_1381);
(*(P899)rt_nil_check(F->z_1378)).hasmv = rt_r_echk(F->ok_1381);
(*(P899)rt_nil_check(F->z_1378)).mv = f_meval_343(F->a_1376, &F->ok_1381);
if ((!rt_r_echk(F->ok_1381))) {
(*(P899)rt_nil_check(F->z_1378)).mv = NULL;
}
(*(P899)rt_nil_check(F->z_1378)).ro_flag = 1;
f_define_160(F->z_1378, rt_r_ichk((*(P889)rt_nil_check(F->st_268)).line));
F->p_1375 = (*(P889)rt_nil_check(F->p_1375)).next;
F->a_1376 = (*(P889)rt_nil_check(F->a_1376)).next;
}
F->t_1377 = f_resolve_subtype_257((*(P899)rt_nil_check(F->y_267)).st, &F->c_269v);
f_close_scope_170();
F->result_ = F->t_1377;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_269) = F->c_269v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_275(P895 t_271, P889 args_272, P891 c_273, rt_int line_274) {
  struct f_apply_constraint_275fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_271 = t_271;
F->args_272 = args_272;
F->c_273 = c_273;
F->line_274 = line_274;
F->dummy_1382 = NULL;
F->ok_1383 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P895)rt_nil_check(F->t_271)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->t_271)).kind) == (((rt_int)4LL))))) {
if (((rt_r_ichk((*(P889)rt_nil_check(F->args_272)).kind) != (((rt_int)16LL))) || ((*(P889)rt_nil_check(F->args_272)).next != NULL))) {
f_fail_23(F->line_274, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P891)rt_nil_check(F->c_273)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P889)rt_nil_check(F->args_272)).a, F->t_271, &F->dummy_1382); b_; }));
f_check_type_224(F->dummy_1382, F->t_271, F->line_274);
(*(P891)rt_nil_check(F->c_273)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P889)rt_nil_check(F->args_272)).b, F->t_271, &F->dummy_1382); b_; }));
f_check_type_224(F->dummy_1382, F->t_271, F->line_274);
(*(P891)rt_nil_check(F->c_273)).hasm = 0;
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_271)).kind) == (((rt_int)1LL)))) {
(*(P891)rt_nil_check(F->c_273)).mlo = f_manifest_334((*(P889)rt_nil_check(F->args_272)).a, &F->ok_1383);
(*(P891)rt_nil_check(F->c_273)).hasm = rt_r_echk(F->ok_1383);
(*(P891)rt_nil_check(F->c_273)).mhi = f_manifest_334((*(P889)rt_nil_check(F->args_272)).b, &F->ok_1383);
(*(P891)rt_nil_check(F->c_273)).hasm = (rt_r_echk((*(P891)rt_nil_check(F->c_273)).hasm) && rt_r_echk(F->ok_1383));
} else if (((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->args_272)).a)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->args_272)).b)).kind) == (((rt_int)4LL))))) {
(*(P891)rt_nil_check(F->c_273)).mlo = f_lit_index_254((*(P895)rt_nil_check(f_base_of_215(F->t_271))).lits, &(((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->args_272)).a)).name))->all));
(*(P891)rt_nil_check(F->c_273)).mhi = f_lit_index_254((*(P895)rt_nil_check(f_base_of_215(F->t_271))).lits, &(((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->args_272)).b)).name))->all));
(*(P891)rt_nil_check(F->c_273)).hasm = 1;
}
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_271)).kind) == (((rt_int)3LL)))) {
(*(P891)rt_nil_check(F->c_273)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700(F->args_272, g_ty_int_969, &F->dummy_1382); b_; }));
if (((*(P889)rt_nil_check(F->args_272)).next != NULL)) {
if ((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->args_272)).next)).kind) != (((rt_int)16LL)))) {
f_fail_23(F->line_274, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P891)rt_nil_check(F->c_273)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P889)rt_nil_check((*(P889)rt_nil_check(F->args_272)).next)).a, g_ty_float_971, &F->dummy_1382); b_; }));
(*(P891)rt_nil_check(F->c_273)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700((*(P889)rt_nil_check((*(P889)rt_nil_check(F->args_272)).next)).b, g_ty_float_971, &F->dummy_1382); b_; }));
(*(P891)rt_nil_check(F->c_273)).hasm = (f_float_lit_259((*(P889)rt_nil_check((*(P889)rt_nil_check(F->args_272)).next)).a) && f_float_lit_259((*(P889)rt_nil_check((*(P889)rt_nil_check(F->args_272)).next)).b));
}
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_271)).kind) == (((rt_int)5LL)))) {
(*(P891)rt_nil_check(F->c_273)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700(F->args_272, g_ty_int_969, &F->dummy_1382); b_; }));
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_271)).kind) == (((rt_int)12LL)))) {
(*(P891)rt_nil_check(F->c_273)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700(F->args_272, g_ty_int_969, &F->dummy_1382); b_; }));
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_271)).kind) == (((rt_int)17LL)))) {
f_tag_constraint_263(F->t_271, F->args_272, F->c_273);
} else {
f_fail_23(F->line_274, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P895 f_value_subtype_279(P889 e_276, P891 *c_277, P882 *base_278) {
  struct f_value_subtype_279fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_276 = e_276;
F->c_277 = c_277;
F->c_277v = *F->c_277;
F->base_278 = base_278;
F->base_278v = *F->base_278;
F->t_1384 = NULL;
F->c0_1385 = NULL;
F->ro_1386 = RT_R_EUNDEF;
if (f_is_lvalue_663(F->e_276)) {
f_lvalue_669(F->e_276, &F->base_278v, &F->t_1384, &F->c0_1385, &F->ro_1386);
} else {
F->base_278v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700(F->e_276, NULL, &F->t_1384); b_; }));
}
if ((F->c0_1385 == NULL)) {
F->c_277v = f_new_cons_176();
} else {
F->c_277v = f_copy_cons_198(F->c0_1385);
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_1384)).kind) == (((rt_int)5LL)))) {
(*(P891)rt_nil_check(F->c_277v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P882)rt_nil_check(F->base_278v))->all)), rt_str(").len", 5)); b_; }));
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_1384)).kind) == (((rt_int)6LL)))) {
(*(P891)rt_nil_check(F->c_277v)).bnds = NULL;
{ rt_int lo1388 = ((rt_int)1LL), hi1389 = rt_r_ichk((*(P895)rt_nil_check(F->t_1384)).ndim);
for (rt_int it1390 = lo1388; it1390 <= hi1389; it1390++) {
F->k_1387 = it1390;
F->lo_1391 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P882)rt_nil_check(F->base_278v))->all)), rt_str(").", 2)), f_dim_lo_234(F->k_1387)));
F->hi_1392 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P882)rt_nil_check(F->base_278v))->all)), rt_str(").", 2)), f_dim_hi_236(F->k_1387)));
if ((F->k_1387 == ((rt_int)1LL))) {
(*(P891)rt_nil_check(F->c_277v)).lo = f_mk_3(&F->lo_1391);
(*(P891)rt_nil_check(F->c_277v)).hi = f_mk_3(&F->hi_1392);
} else if ((F->k_1387 == ((rt_int)2LL))) {
(*(P891)rt_nil_check(F->c_277v)).lo2 = f_mk_3(&F->lo_1391);
(*(P891)rt_nil_check(F->c_277v)).hi2 = f_mk_3(&F->hi_1392);
} else {
F->l1_1393 = NULL;
F->l2_1394 = NULL;
{ R894 *cell1395 = rt_alloc(sizeof(R894));
(*cell1395).s = NULL;
(*cell1395).next = NULL;
F->l1_1393 = cell1395;
}
{ R894 *cell1396 = rt_alloc(sizeof(R894));
(*cell1396).s = NULL;
(*cell1396).next = NULL;
F->l2_1394 = cell1396;
}
(*(P893)rt_nil_check(F->l1_1393)).s = f_mk_3(&F->lo_1391);
(*(P893)rt_nil_check(F->l2_1394)).s = f_mk_3(&F->hi_1392);
(*(P893)rt_nil_check(F->l1_1393)).next = F->l2_1394;
(*(P893)rt_nil_check(F->l2_1394)).next = (*(P891)rt_nil_check(F->c_277v)).bnds;
(*(P891)rt_nil_check(F->c_277v)).bnds = F->l1_1393;
}
}
}
(*(P891)rt_nil_check(F->c_277v)).bnds = f_reverse_pairs_281((*(P891)rt_nil_check(F->c_277v)).bnds);
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_1384)).kind) == (((rt_int)12LL)))) {
(*(P891)rt_nil_check(F->c_277v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P882)rt_nil_check(F->base_278v))->all)), rt_str(")->cap", 6)); b_; }));
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->t_1384)).kind) == (((rt_int)15LL))) && ((*(P895)rt_nil_check(F->t_1384)).tparams != NULL))) {
F->p_1397 = NULL;
F->p_1397 = (*(P895)rt_nil_check(F->t_1384)).tparams;
F->head_1398 = NULL;
F->tail_1399 = NULL;
while ((F->p_1397 != NULL)) {
F->sel_1400 = NULL;
F->sel_1400 = f_nn_61((((rt_int)11LL)), rt_r_ichk((*(P889)rt_nil_check(F->e_276)).line));
(*(P889)rt_nil_check(F->sel_1400)).a = F->e_276;
(*(P889)rt_nil_check(F->sel_1400)).name = (*(P889)rt_nil_check(F->p_1397)).name;
f_append_65(&F->head_1398, &F->tail_1399, F->sel_1400);
F->p_1397 = (*(P889)rt_nil_check(F->p_1397)).next;
}
(*(P891)rt_nil_check(F->c_277v)).args = F->head_1398;
}
F->result_ = F->t_1384;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_277) = F->c_277v;  (*F->base_278) = F->base_278v;
  RT_FPOP();
  return F->result_;
}

static P893 f_reverse_pairs_281(P893 l_280) {
  struct f_reverse_pairs_281fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_280 = l_280;
F->r_1401 = NULL;
F->p_1402 = NULL;
F->p_1402 = F->l_280;
while ((F->p_1402 != NULL)) {
F->a_1403 = NULL;
F->a_1403 = F->p_1402;
F->b_1404 = NULL;
F->b_1404 = (*(P893)rt_nil_check(F->p_1402)).next;
F->p_1402 = (*(P893)rt_nil_check(F->b_1404)).next;
(*(P893)rt_nil_check(F->b_1404)).next = F->r_1401;
F->r_1401 = F->a_1403;
}
F->result_ = F->r_1401;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P895 f_inquiry_284(P889 st_282, P891 *c_283) {
  struct f_inquiry_284fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_282 = st_282;
F->c_283 = c_283;
F->c_283v = *F->c_283;
F->base_1405 = NULL;
F->t_1406 = NULL;
F->name_1407 = rt_str_copy((((P882)rt_nil_check((*(P889)rt_nil_check(F->st_282)).name))->all));
if (((*(P889)rt_nil_check(F->st_282)).b == NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->st_282)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1407, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1407, rt_str("TYPEOF", 6))) {
F->sub_1408 = NULL;
F->sub_1408 = f_as_subtype_286((*(P889)rt_nil_check(F->st_282)).b);
F->c2_1409 = NULL;
if ((F->sub_1408 != NULL)) {
F->t_1406 = f_resolve_subtype_257(F->sub_1408, &F->c2_1409);
} else {
F->t_1406 = f_value_subtype_279((*(P889)rt_nil_check(F->st_282)).b, &F->c2_1409, &F->base_1405);
}
F->c_283v = f_new_cons_176();
F->result_ = F->t_1406;
goto ret_;
}
F->t_1406 = f_value_subtype_279((*(P889)rt_nil_check(F->st_282)).b, &F->c_283v, &F->base_1405);
if (rt_str_eq(F->name_1407, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1406;
goto ret_;
}
{
F->k_1410 = RT_R_IUNDEF;
F->k_1410 = ((rt_int)1LL);
F->ok_1411 = RT_R_EUNDEF;
F->ok_1411 = 1;
F->ac_1412 = NULL;
F->ac_1412 = F->c_283v;
if (((*(P889)rt_nil_check((*(P889)rt_nil_check(F->st_282)).b)).next != NULL)) {
F->k_1410 = f_manifest_334((*(P889)rt_nil_check((*(P889)rt_nil_check(F->st_282)).b)).next, &F->ok_1411);
}
while (((rt_r_ichk((*(P895)rt_nil_check(F->t_1406)).kind) == (((rt_int)15LL))) && ((*(P895)rt_nil_check(F->t_1406)).tparams == NULL))) {
F->t_1406 = (*(P895)rt_nil_check(F->t_1406)).under;
}
if (((((rt_r_ichk((*(P895)rt_nil_check(F->t_1406)).kind) != (((rt_int)6LL))) || (!rt_r_echk(F->ok_1411))) || (rt_r_ichk(F->k_1410) < ((rt_int)1LL))) || (rt_r_ichk(F->k_1410) > rt_r_ichk((*(P895)rt_nil_check(F->t_1406)).ndim)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->st_282)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_283v = f_new_cons_176();
(*(P891)rt_nil_check(F->c_283v)).lo = f_cons_lo_244(F->ac_1412, rt_r_ichk(F->k_1410));
(*(P891)rt_nil_check(F->c_283v)).hi = f_cons_hi_247(F->ac_1412, rt_r_ichk(F->k_1410));
F->result_ = f_idx_type_250(F->t_1406, rt_r_ichk(F->k_1410));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_283) = F->c_283v;
  RT_FPOP();
  return F->result_;
}

static P889 f_as_subtype_286(P889 e_285) {
  struct f_as_subtype_286fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_285 = e_285;
F->st_1413 = NULL;
if ((F->e_285 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_285)).kind) == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_286((*(P889)rt_nil_check(F->e_285)).a);
goto ret_;
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_285)).kind) == (((rt_int)7LL)))) {
if ((!f_type_name_293(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_285)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1413 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P889)rt_nil_check(F->e_285)).line));
(*(P889)rt_nil_check(F->st_1413)).name = (*(P889)rt_nil_check(F->e_285)).name;
F->result_ = F->st_1413;
goto ret_;
} else if (((rt_r_ichk((*(P889)rt_nil_check(F->e_285)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_291((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).a)).name, (*(P889)rt_nil_check(F->e_285)).b, NULL, rt_r_ichk((*(P889)rt_nil_check(F->e_285)).line));
goto ret_;
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_285)).kind) != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).a)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).a)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_291((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).a)).a)).name, (*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).a)).b, (*(P889)rt_nil_check(F->e_285)).b, rt_r_ichk((*(P889)rt_nil_check(F->e_285)).line));
goto ret_;
} else if ((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).a)).kind) != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1414 = rt_str_copy((((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).a)).name))->all));
F->y_1415 = NULL;
F->y_1415 = f_lookup_155(&F->name_1414);
if ((rt_str_eq(F->name_1414, rt_str("INT", 3)) && (F->y_1415 == NULL))) {
if (((((*(P889)rt_nil_check(F->e_285)).b == NULL) || (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).b)).kind) != (((rt_int)16LL)))) || ((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1413 = f_nn_61((((rt_int)70LL)), rt_r_ichk((*(P889)rt_nil_check(F->e_285)).line));
(*(P889)rt_nil_check(F->st_1413)).a = (*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).b)).a;
(*(P889)rt_nil_check(F->st_1413)).b = (*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).b)).b;
F->result_ = F->st_1413;
goto ret_;
} else if ((rt_str_eq(F->name_1414, rt_str("FLOAT", 5)) && (F->y_1415 == NULL))) {
F->st_1413 = f_nn_61((((rt_int)71LL)), rt_r_ichk((*(P889)rt_nil_check(F->e_285)).line));
(*(P889)rt_nil_check(F->st_1413)).a = (*(P889)rt_nil_check(F->e_285)).b;
if ((((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).b)).next != NULL) && (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).b)).next)).kind) == (((rt_int)16LL))))) {
(*(P889)rt_nil_check(F->st_1413)).b = (*(P889)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).b)).next)).a;
(*(P889)rt_nil_check(F->st_1413)).c = (*(P889)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).b)).next)).b;
}
F->result_ = F->st_1413;
goto ret_;
} else if (((!f_type_name_293(&F->name_1414)) && (!((F->y_1415 == NULL) && ((rt_str_eq(F->name_1414, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1414, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1414, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1413 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P889)rt_nil_check(F->e_285)).line));
(*(P889)rt_nil_check(F->st_1413)).name = (*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_285)).a)).name;
(*(P889)rt_nil_check(F->st_1413)).b = (*(P889)rt_nil_check(F->e_285)).b;
(*(P889)rt_nil_check(F->st_1413)).flag = ((rt_int)1LL);
F->result_ = F->st_1413;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_tt_subtype_291(P882 name_287, P889 tt_288, P889 args_289, rt_int line_290) {
  struct f_tt_subtype_291fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_287 = name_287;
F->tt_288 = tt_288;
F->args_289 = args_289;
F->line_290 = line_290;
F->st_1416 = NULL;
if (rt_str_eq((((P882)rt_nil_check(F->name_287))->all), rt_str("STRING", 6))) {
F->st_1416 = f_nn_61((((rt_int)73LL)), F->line_290);
} else if (rt_str_eq((((P882)rt_nil_check(F->name_287))->all), rt_str("SET", 3))) {
F->st_1416 = f_nn_61((((rt_int)77LL)), F->line_290);
} else if ((rt_str_eq((((P882)rt_nil_check(F->name_287))->all), rt_str("MAILBOX", 7)) && ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P899)rt_nil_check(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1416 = f_nn_61((((rt_int)78LL)), F->line_290);
} else if (rt_str_eq((((P882)rt_nil_check(F->name_287))->all), rt_str("FILE", 4))) {
F->st_1416 = f_nn_61((((rt_int)79LL)), F->line_290);
} else if (f_type_name_293(&(((P882)rt_nil_check(F->name_287))->all))) {
F->st_1416 = f_nn_61((((rt_int)80LL)), F->line_290);
(*(P889)rt_nil_check(F->st_1416)).name = F->name_287;
(*(P889)rt_nil_check(F->st_1416)).a = F->tt_288;
(*(P889)rt_nil_check(F->st_1416)).b = F->args_289;
F->result_ = F->st_1416;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P889)rt_nil_check(F->st_1416)).a = F->tt_288;
(*(P889)rt_nil_check(F->st_1416)).b = F->args_289;
F->result_ = F->st_1416;
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
F->y_1417 = NULL;
F->y_1417 = f_lookup_155(&(*F->name_292));
if ((F->y_1417 == NULL)) {
F->result_ = ((((((rt_str_eq((*F->name_292), rt_str("INT", 3)) || rt_str_eq((*F->name_292), rt_str("BOOL", 4))) || rt_str_eq((*F->name_292), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_292), rt_str("ASCII", 5))) || rt_str_eq((*F->name_292), rt_str("ACT", 3))) || rt_str_eq((*F->name_292), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_292), rt_str("LATCH", 5)));
goto ret_;
}
F->result_ = (((rt_r_ichk((*(P899)rt_nil_check(F->y_1417)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_1417)).kind) == (((rt_int)6LL)))) || ((rt_r_ichk((*(P899)rt_nil_check(F->y_1417)).kind) == (((rt_int)10LL))) && (((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_1417)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_1417)).decl)).b)).kind) == (((rt_int)44LL)))) || (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_1417)).decl)).b)).kind) == (((rt_int)42LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_295(P895 t_294) {
  struct f_empty_set_295fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_294 = t_294;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_190(f_base_of_215((*(P895)rt_nil_check(F->t_294)).elem), f_base_cons_218((*(P895)rt_nil_check(F->t_294)).elem, (*(P895)rt_nil_check(F->t_294)).elemcons))), rt_str(", ", 2)), f_sub_hi_193(f_base_of_215((*(P895)rt_nil_check(F->t_294)).elem), f_base_cons_218((*(P895)rt_nil_check(F->t_294)).elem, (*(P895)rt_nil_check(F->t_294)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_297(P895 t_296) {
  struct f_opened_297fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_296 = t_296;
F->c_1418 = NULL;
F->c_1418 = g_caps_944;
if ((((rt_r_ichk((*(P895)rt_nil_check(F->t_296)).kind) != (((rt_int)15LL))) || ((*(P895)rt_nil_check(F->t_296)).ocap == NULL)) || (rt_r_ichk((*(P889)rt_nil_check((*(P895)rt_nil_check(F->t_296)).ocap)).ival) == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1418 != NULL)) {
if (((*(P916)rt_nil_check(F->c_1418)).d == (*(P895)rt_nil_check(F->t_296)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1418 = (*(P916)rt_nil_check(F->c_1418)).next;
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
F->i_1419 = RT_R_IUNDEF;
F->i_1419 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_299)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_298)).len)) < ((rt_int)(((*F->pat_299)).len))))) {
F->result_ = (*F->s_298);
goto ret_;
}
while ((rt_sub(rt_add(rt_r_ichk(F->i_1419), ((rt_int)(((*F->pat_299)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_298)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_298), rt_r_ichk(F->i_1419), rt_sub(rt_add(rt_r_ichk(F->i_1419), ((rt_int)(((*F->pat_299)).len))), ((rt_int)1LL))), (*F->pat_299))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_298), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1419), ((rt_int)1LL))), (*F->r_300)), f_replace_all_301(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_298), rt_add(rt_r_ichk(F->i_1419), ((rt_int)(((*F->pat_299)).len))), ((rt_int)(((*F->s_298)).len))); b_; }), &(*F->pat_299), &(*F->r_300)));
goto ret_;
}
F->i_1419 = rt_add(rt_r_ichk(F->i_1419), ((rt_int)1LL));
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
F->l_1420 = NULL;
F->l_1420 = g_psub_946;
F->r_1421 = NULL;
F->r_1421 = f_mk_3(&(*F->s_302));
while ((F->l_1420 != NULL)) {
F->r_1421 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_301(&(((P882)rt_nil_check(F->r_1421))->all), &(((P882)rt_nil_check((*(P893)rt_nil_check(F->l_1420)).s))->all), &(((P882)rt_nil_check((*(P893)rt_nil_check((*(P893)rt_nil_check(F->l_1420)).next)).s))->all)); b_; }));
F->l_1420 = (*(P893)rt_nil_check((*(P893)rt_nil_check(F->l_1420)).next)).next;
}
F->result_ = (((P882)rt_nil_check(F->r_1421))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P895 f_new_type_307(P899 y_304, P889 st_305, P891 *c_306) {
  struct f_new_type_307fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_304 = y_304;
F->st_305 = st_305;
F->c_306 = c_306;
F->c_306v = *F->c_306;
F->d_1422 = NULL;
F->d_1422 = (*(P899)rt_nil_check(F->y_304)).decl;
F->p_1423 = NULL;
F->uc_1424 = NULL;
F->c_306v = f_new_cons_176();
if (((*(P899)rt_nil_check(F->y_304)).t == NULL)) {
(*(P899)rt_nil_check(F->y_304)).t = f_new_typ_175((((rt_int)15LL)));
(*(P895)rt_nil_check((*(P899)rt_nil_check(F->y_304)).t)).name = (*(P899)rt_nil_check(F->y_304)).name;
(*(P895)rt_nil_check((*(P899)rt_nil_check(F->y_304)).t)).decl = F->d_1422;
(*(P895)rt_nil_check((*(P899)rt_nil_check(F->y_304)).t)).tparams = (*(P889)rt_nil_check(F->d_1422)).b;
if ((g_caps_944 != NULL)) {
(*(P895)rt_nil_check((*(P899)rt_nil_check(F->y_304)).t)).ocap = (*(P916)rt_nil_check(g_caps_944)).d;
}
f_open_scope_169();
F->p_1423 = (*(P889)rt_nil_check(F->d_1422)).b;
while ((F->p_1423 != NULL)) {
F->z_1425 = NULL;
F->z_1425 = f_new_sym_173((((rt_int)2LL)), (*(P889)rt_nil_check(F->p_1423)).name);
F->zc_1426 = NULL;
(*(P899)rt_nil_check(F->z_1425)).t = f_resolve_subtype_257((*(P889)rt_nil_check(F->p_1423)).a, &F->zc_1426);
(*(P899)rt_nil_check(F->z_1425)).mnext = (*(P895)rt_nil_check((*(P899)rt_nil_check(F->y_304)).t)).tpsyms;
(*(P895)rt_nil_check((*(P899)rt_nil_check(F->y_304)).t)).tpsyms = F->z_1425;
(*(P899)rt_nil_check(F->z_1425)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1423)).name))->all))), rt_str("@", 1)); b_; }));
f_define_160(F->z_1425, rt_r_ichk((*(P889)rt_nil_check(F->d_1422)).line));
F->p_1423 = (*(P889)rt_nil_check(F->p_1423)).next;
}
(*(P895)rt_nil_check((*(P899)rt_nil_check(F->y_304)).t)).under = f_resolve_subtype_257((*(P889)rt_nil_check(F->d_1422)).a, &F->uc_1424);
(*(P895)rt_nil_check((*(P899)rt_nil_check(F->y_304)).t)).elemcons = F->uc_1424;
f_close_scope_170();
}
(*(P891)rt_nil_check(F->c_306v)).args = (*(P889)rt_nil_check(F->st_305)).b;
F->result_ = (*(P899)rt_nil_check(F->y_304)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_306) = F->c_306v;
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_311(rstr *lval_308, P895 t_309, P891 c_310) {
  struct f_init_storage_311fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_308 = lval_308;
F->t_309 = t_309;
F->c_310 = c_310;
f_make_storage_326(&(*F->lval_308), F->t_309, F->c_310);
if (((*(P895)rt_nil_check(F->t_309)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_314((*(P895)rt_nil_check(F->t_309)).initp, &(*F->lval_308)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_314(P899 y_312, rstr *lval_313) {
  struct f_init_call_314fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_312 = y_312;
F->lval_313 = lval_313;
F->link_1427 = NULL;
F->link_1427 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P899)rt_nil_check(F->y_312)).level) > ((rt_int)0LL))) {
F->link_1427 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1429 = ((rt_int)1LL), hi1430 = rt_sub(rt_r_ichk(g_cur_level_942), rt_r_ichk((*(P899)rt_nil_check(F->y_312)).level));
for (rt_int it1431 = lo1429; it1431 <= hi1430; it1431++) {
F->i_1428 = it1431;
F->link_1427 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->link_1427))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1427 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->link_1427))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_312)).cname))->all), rt_str("(", 1)), (((P882)rt_nil_check(F->link_1427))->all)), rt_str("&", 1)), (*F->lval_313)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_316(P895 t_315) {
  struct f_needs_fin_316fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_315 = t_315;
if ((F->t_315 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P895)rt_nil_check(F->t_315)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_315)).kind) == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_316((*(P895)rt_nil_check(F->t_315)).under);
goto ret_;
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_315)).kind) == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_316((*(P895)rt_nil_check(F->t_315)).elem);
goto ret_;
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->t_315)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->t_315)).kind) == (((rt_int)17LL))))) {
F->f_1432 = NULL;
F->f_1432 = (*(P895)rt_nil_check(F->t_315)).fields;
while ((F->f_1432 != NULL)) {
if (f_needs_fin_316((*(P897)rt_nil_check(F->f_1432)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1432 = (*(P897)rt_nil_check(F->f_1432)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_319(rstr *lval_317, P895 t_318) {
  struct f_fin_code_319fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_317 = lval_317;
F->t_318 = t_318;
F->r_1433 = NULL;
F->r_1433 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P895)rt_nil_check(F->t_318)).finalp != NULL)) {
F->r_1433 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_314((*(P895)rt_nil_check(F->t_318)).finalp, &(*F->lval_317)), rt_str(" ", 1)); b_; }));
}
if (((rt_r_ichk((*(P895)rt_nil_check(F->t_318)).kind) == (((rt_int)15LL))) && ((*(P895)rt_nil_check(F->t_318)).tparams == NULL))) {
F->result_ = rt_str_cat((((P882)rt_nil_check(F->r_1433))->all), f_fin_code_319(&(*F->lval_317), (*(P895)rt_nil_check(F->t_318)).under));
goto ret_;
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_318)).kind) == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P882)rt_nil_check(F->r_1433))->all), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_317), rt_str(".all", 4)); b_; }), (*(P895)rt_nil_check(F->t_318)).under));
goto ret_;
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->t_318)).kind) == (((rt_int)6LL))) && f_needs_fin_316((*(P895)rt_nil_check(F->t_318)).elem))) {
F->i_1434 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_1433))->all), rt_str("for (rt_int ", 12)), F->i_1434), rt_str(" = 0; ", 6)), F->i_1434), rt_str(" < ", 3)), f_acnt_241(F->t_318, &(*F->lval_317))), rt_str("; ", 2)), F->i_1434), rt_str("++) { ", 6)), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_317), rt_str(".p[", 3)), F->i_1434), rt_str("]", 1)); b_; }), (*(P895)rt_nil_check(F->t_318)).elem)), rt_str(" }", 2));
goto ret_;
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_318)).kind) == (((rt_int)7LL)))) {
F->f_1435 = NULL;
F->f_1435 = (*(P895)rt_nil_check(F->t_318)).fields;
while ((F->f_1435 != NULL)) {
if (f_needs_fin_316((*(P897)rt_nil_check(F->f_1435)).t)) {
F->r_1433 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_1433))->all), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_317), rt_str(".", 1)), f_field_c_17(&(((P882)rt_nil_check((*(P897)rt_nil_check(F->f_1435)).name))->all))); b_; }), (*(P897)rt_nil_check(F->f_1435)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1435 = (*(P897)rt_nil_check(F->f_1435)).next;
}
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_318)).kind) == (((rt_int)17LL)))) {
F->f_1436 = NULL;
F->f_1436 = (*(P895)rt_nil_check(F->t_318)).fields;
F->i_1437 = RT_R_IUNDEF;
F->i_1437 = ((rt_int)0LL);
F->r_1433 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_1433))->all), rt_str("switch (", 8)), (*F->lval_317)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1436 != NULL)) {
if (f_needs_fin_316((*(P897)rt_nil_check(F->f_1436)).t)) {
F->r_1433 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_1433))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1437))), rt_str(": ", 2)), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_317), rt_str(".u.", 3)), f_field_c_17(&(((P882)rt_nil_check((*(P897)rt_nil_check(F->f_1436)).name))->all))); b_; }), (*(P897)rt_nil_check(F->f_1436)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1437 = rt_add(rt_r_ichk(F->i_1437), ((rt_int)1LL));
F->f_1436 = (*(P897)rt_nil_check(F->f_1436)).next;
}
F->r_1433 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_1433))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P882)rt_nil_check(F->r_1433))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P895 f_tparam_type_322(P895 t_320, rstr *name_321) {
  struct f_tparam_type_322fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_320 = t_320;
F->name_321 = name_321;
F->z_1438 = NULL;
F->z_1438 = (*(P895)rt_nil_check(F->t_320)).tpsyms;
while ((F->z_1438 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->z_1438)).name))->all), (*F->name_321))) {
F->result_ = (*(P899)rt_nil_check(F->z_1438)).t;
goto ret_;
}
F->z_1438 = (*(P899)rt_nil_check(F->z_1438)).mnext;
}
F->result_ = g_ty_int_969;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_326(rstr *lval_323, P895 t_324, P891 c_325) {
  struct f_make_storage_326fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_323 = lval_323;
F->t_324 = t_324;
F->c_325 = c_325;
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_324)).kind) == (((rt_int)15LL)))) {
F->p_1439 = NULL;
F->p_1439 = (*(P895)rt_nil_check(F->t_324)).tparams;
F->a_1440 = NULL;
F->a_1440 = (*(P891)rt_nil_check(F->c_325)).args;
F->uc_1441 = NULL;
F->ut_1442 = NULL;
F->at_1443 = NULL;
if ((f_list_len_67(F->a_1440) != f_list_len_67(F->p_1439))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_324)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1439))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1439 != NULL)) {
F->pt_1444 = f_tparam_type_322(F->t_324, &(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1439)).name))->all));
F->v_1445 = rt_str_copy(f_gexpr_700(F->a_1440, F->pt_1444, &F->at_1443));
f_check_type_224(F->at_1443, F->pt_1444, rt_r_ichk((*(P889)rt_nil_check(F->a_1440)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".p_", 3)), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1439)).name))->all))), rt_str(" = ", 3)), F->v_1445), rt_str(";", 1)); b_; }));
F->p_1439 = (*(P889)rt_nil_check(F->p_1439)).next;
F->a_1440 = (*(P889)rt_nil_check(F->a_1440)).next;
}
{
F->saved_1446 = NULL;
F->saved_1446 = g_psub_946;
F->p_1439 = (*(P895)rt_nil_check(F->t_324)).tparams;
while ((F->p_1439 != NULL)) {
F->l1_1447 = NULL;
F->l2_1448 = NULL;
{ R894 *cell1449 = rt_alloc(sizeof(R894));
(*cell1449).s = NULL;
(*cell1449).next = NULL;
F->l1_1447 = cell1449;
}
{ R894 *cell1450 = rt_alloc(sizeof(R894));
(*cell1450).s = NULL;
(*cell1450).next = NULL;
F->l2_1448 = cell1450;
}
(*(P893)rt_nil_check(F->l1_1447)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1439)).name))->all))), rt_str("@", 1)); b_; }));
(*(P893)rt_nil_check(F->l2_1448)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".p_", 3)), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1439)).name))->all))); b_; }));
(*(P893)rt_nil_check(F->l1_1447)).next = F->l2_1448;
(*(P893)rt_nil_check(F->l2_1448)).next = g_psub_946;
g_psub_946 = F->l1_1447;
F->p_1439 = (*(P889)rt_nil_check(F->p_1439)).next;
}
if (((*(P895)rt_nil_check(F->t_324)).tparams == NULL)) {
f_init_storage_311(&(*F->lval_323), (*(P895)rt_nil_check(F->t_324)).under, (*(P895)rt_nil_check(F->t_324)).elemcons);
} else {
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_323), rt_str(".all", 4)); b_; }), (*(P895)rt_nil_check(F->t_324)).under, (*(P895)rt_nil_check(F->t_324)).elemcons);
}
g_psub_946 = F->saved_1446;
}
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_324)).kind) == (((rt_int)12LL)))) {
if (((*(P891)rt_nil_check(F->c_325)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_323), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_323)), rt_str(", ", 2)), f_subst_303(&(((P882)rt_nil_check((*(P891)rt_nil_check(F->c_325)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_226((*(P895)rt_nil_check(F->t_324)).elem)), rt_str("), ", 3)), f_mcopy_355((*(P895)rt_nil_check(F->t_324)).elem)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_324)).kind) == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_323)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_324)).kind) == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(" = ", 3)), f_empty_set_295(F->t_324)), rt_str(";", 1)); b_; }));
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_324)).kind) == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_323), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_324)).kind) == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_323), rt_str(" = NULL;", 8)); b_; }));
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_324)).kind) == (((rt_int)5LL)))) {
if (((*(P891)rt_nil_check(F->c_325)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(" = rt_str_new(", 14)), f_subst_303(&(((P882)rt_nil_check((*(P891)rt_nil_check(F->c_325)).slen))->all))), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_324)).kind) == (((rt_int)6LL)))) {
if (((*(P891)rt_nil_check(F->c_325)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1452 = ((rt_int)1LL), hi1453 = rt_r_ichk((*(P895)rt_nil_check(F->t_324)).ndim);
for (rt_int it1454 = lo1452; it1454 <= hi1453; it1454++) {
F->k_1451 = it1454;
if ((f_cons_lo_244(F->c_325, F->k_1451) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".", 1)), f_dim_lo_234(F->k_1451)), rt_str(" = ", 3)), f_subst_303(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P882)rt_nil_check(f_cons_lo_244(F->c_325, F->k_1451)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_323)), rt_str(".", 1)), f_dim_hi_236(F->k_1451)), rt_str(" = ", 3)), f_subst_303(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P882)rt_nil_check(f_cons_hi_247(F->c_325, F->k_1451)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_324)).ndim) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".lo2 = ", 7)), (*F->lval_323)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_226((*(P895)rt_nil_check(F->t_324)).elem)), rt_str(") * (size_t)", 12)), f_acnt_241(F->t_324, &(*F->lval_323))), rt_str(" + 1);", 6)); b_; }));
if (((((((((((rt_r_ichk((*(P895)rt_nil_check((*(P895)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P895)rt_nil_check((*(P895)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P895)rt_nil_check((*(P895)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P895)rt_nil_check((*(P895)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)15LL)))) || (rt_r_ichk((*(P895)rt_nil_check((*(P895)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P895)rt_nil_check((*(P895)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)12LL)))) || (rt_r_ichk((*(P895)rt_nil_check((*(P895)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)13LL)))) || (rt_r_ichk((*(P895)rt_nil_check((*(P895)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P895)rt_nil_check((*(P895)rt_nil_check(F->t_324)).elem)).kind) == (((rt_int)17LL)))) || (rt_r_echk(g_mark_uninit_961) && (!rt_str_eq(f_uninit_value_328((*(P895)rt_nil_check(F->t_324)).elem), rt_str("", 0)))))) {
F->i_1455 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1455), rt_str(" = 0; ", 6)), F->i_1455), rt_str(" < ", 3)), f_acnt_241(F->t_324, &(*F->lval_323))), rt_str("; ", 2)), F->i_1455), rt_str("++) {", 5)); b_; }));
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".p[", 3)), F->i_1455), rt_str("]", 1)); b_; }), (*(P895)rt_nil_check(F->t_324)).elem, (*(P895)rt_nil_check(F->t_324)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_324)).kind) == (((rt_int)7LL)))) {
F->f_1456 = NULL;
F->f_1456 = (*(P895)rt_nil_check(F->t_324)).fields;
while ((F->f_1456 != NULL)) {
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".", 1)), f_field_c_17(&(((P882)rt_nil_check((*(P897)rt_nil_check(F->f_1456)).name))->all))); b_; }), (*(P897)rt_nil_check(F->f_1456)).t, (*(P897)rt_nil_check(F->f_1456)).c);
F->f_1456 = (*(P897)rt_nil_check(F->f_1456)).next;
}
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_324)).kind) == (((rt_int)17LL)))) {
if (((F->c_325 != NULL) && rt_r_echk((*(P891)rt_nil_check(F->c_325)).hasm))) {
F->f_1457 = NULL;
F->f_1457 = (*(P895)rt_nil_check(F->t_324)).fields;
{ rt_int lo1459 = ((rt_int)1LL), hi1460 = rt_r_ichk((*(P891)rt_nil_check(F->c_325)).mlo);
for (rt_int it1461 = lo1459; it1461 <= hi1460; it1461++) {
F->i_1458 = it1461;
F->f_1457 = (*(P897)rt_nil_check(F->f_1457)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk((*(P891)rt_nil_check(F->c_325)).mlo))), rt_str(";", 1)); b_; }));
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_323), rt_str(".u.", 3)), f_field_c_17(&(((P882)rt_nil_check((*(P897)rt_nil_check(F->f_1457)).name))->all))); b_; }), (*(P897)rt_nil_check(F->f_1457)).t, (*(P897)rt_nil_check(F->f_1457)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_323), rt_str(".tag = -1;", 10)); b_; }));
}
} else if ((rt_r_echk(g_mark_uninit_961) && (!rt_str_eq(f_uninit_value_328(F->t_324), rt_str("", 0))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_323), rt_str(" = ", 3)), f_uninit_value_328(F->t_324)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_uninit_value_328(P895 t_327) {
  struct f_uninit_value_328fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_327 = t_327;
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_327)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str("RT_R_IUNDEF", 11);
goto ret_;
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->t_327)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->t_327)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str("RT_R_EUNDEF", 11);
goto ret_;
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_327)).kind) == (((rt_int)3LL)))) {
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

static rstr f_init_chk_331(P895 t_329, rstr *v_330) {
  struct f_init_chk_331fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_329 = t_329;
F->v_330 = v_330;
F->b_1462 = NULL;
F->b_1462 = f_base_of_215(F->t_329);
if (f_suppressed_461(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))) {
F->result_ = (*F->v_330);
goto ret_;
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->b_1462)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_ichk(", 10), (*F->v_330)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->b_1462)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->b_1462)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_echk(", 10), (*F->v_330)), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->b_1462)).kind) == (((rt_int)3LL)))) {
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

static rt_int f_manifest_334(P889 e_332, int *ok_333) {
  struct f_manifest_334fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_332 = e_332;
F->ok_333 = ok_333;
F->ok_333v = *F->ok_333;
F->v_1463 = NULL;
F->v_1463 = f_meval_343(F->e_332, &F->ok_333v);
if ((rt_r_echk(F->ok_333v) && (rt_r_ichk((*(P908)rt_nil_check(F->v_1463)).kind) == (((rt_int)1LL))))) {
F->result_ = rt_r_ichk((*(P908)rt_nil_check(F->v_1463)).i);
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

static P908 f_mk_mval_337(rt_int kind_335, rt_int i_336) {
  struct f_mk_mval_337fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_335 = kind_335;
F->i_336 = i_336;
F->v_1464 = NULL;
{ R909 *cell1465 = rt_alloc(sizeof(R909));
(*cell1465).s = NULL;
(*cell1465).t = NULL;
F->v_1464 = cell1465;
}
(*(P908)rt_nil_check(F->v_1464)).kind = F->kind_335;
(*(P908)rt_nil_check(F->v_1464)).i = F->i_336;
F->result_ = F->v_1464;
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
F->r_1466 = RT_R_IUNDEF;
F->r_1466 = ((rt_int)1LL);
{ rt_int lo1468 = ((rt_int)1LL), hi1469 = F->b_339;
for (rt_int it1470 = lo1468; it1470 <= hi1469; it1470++) {
F->i_1467 = it1470;
F->r_1466 = rt_mul(rt_r_ichk(F->r_1466), F->a_338);
}
}
F->result_ = rt_r_ichk(F->r_1466);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P908 f_meval_343(P889 e_341, int *ok_342) {
  struct f_meval_343fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_341 = e_341;
F->ok_342 = ok_342;
F->ok_342v = *F->ok_342;
F->a_1471 = NULL;
F->b_1472 = NULL;
F->ok2_1473 = RT_R_EUNDEF;
F->op_1474 = NULL;
F->ok_342v = 0;
if ((F->e_341 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_341)).kind) == (((rt_int)1LL)))) {
F->ok_342v = 1;
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_r_ichk((*(P889)rt_nil_check(F->e_341)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_341)).kind) == (((rt_int)5LL)))) {
F->ok_342v = 1;
F->result_ = f_mk_mval_337((((rt_int)2LL)), rt_r_ichk((*(P889)rt_nil_check(F->e_341)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_341)).kind) == (((rt_int)2LL)))) {
F->ok_342v = 1;
F->result_ = f_mk_mval_337((((rt_int)3LL)), ((rt_int)0LL));
goto ret_;
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_341)).kind) == (((rt_int)3LL)))) {
F->ok_342v = 1;
F->a_1471 = f_mk_mval_337((((rt_int)5LL)), ((rt_int)0LL));
(*(P908)rt_nil_check(F->a_1471)).s = (*(P889)rt_nil_check(F->e_341)).name;
F->result_ = F->a_1471;
goto ret_;
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_341)).kind) == (((rt_int)4LL)))) {
if ((f_lit_index_254((*(P895)rt_nil_check(g_ty_ascii_972)).lits, &(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_341)).name))->all)) >= ((rt_int)0LL))) {
F->ok_342v = 1;
F->a_1471 = f_mk_mval_337((((rt_int)4LL)), f_lit_index_254((*(P895)rt_nil_check(g_ty_ascii_972)).lits, &(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_341)).name))->all)));
(*(P908)rt_nil_check(F->a_1471)).t = g_ty_ascii_972;
(*(P908)rt_nil_check(F->a_1471)).s = (*(P889)rt_nil_check(F->e_341)).name;
F->result_ = F->a_1471;
goto ret_;
}
F->a_1471 = f_mk_mval_337((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P908)rt_nil_check(F->a_1471)).s = (*(P889)rt_nil_check(F->e_341)).name;
F->ok_342v = 1;
F->result_ = F->a_1471;
goto ret_;
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_341)).kind) == (((rt_int)17LL)))) {
F->result_ = f_meval_343((*(P889)rt_nil_check(F->e_341)).a, &F->ok_342v);
goto ret_;
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_341)).kind) == (((rt_int)7LL)))) {
F->y_1475 = NULL;
F->y_1475 = f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_341)).name))->all));
if ((((F->y_1475 != NULL) && (rt_r_ichk((*(P899)rt_nil_check(F->y_1475)).kind) == (((rt_int)2LL)))) && ((*(P899)rt_nil_check(F->y_1475)).mv != NULL))) {
F->ok_342v = 1;
F->result_ = (*(P899)rt_nil_check(F->y_1475)).mv;
goto ret_;
} else if ((((F->y_1475 != NULL) && (rt_r_ichk((*(P899)rt_nil_check(F->y_1475)).kind) == (((rt_int)2LL)))) && rt_r_echk((*(P899)rt_nil_check(F->y_1475)).hasmv))) {
F->ok_342v = 1;
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_r_ichk((*(P899)rt_nil_check(F->y_1475)).mvalue));
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_341)).kind) == (((rt_int)8LL)))) {
F->a_1471 = f_meval_343((*(P889)rt_nil_check(F->e_341)).a, &F->ok_342v);
if ((!rt_r_echk(F->ok_342v))) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_341)).name))->all), rt_str("NOT", 3)) && (rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).kind) == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), rt_sub(((rt_int)1LL), rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i)));
goto ret_;
} else if ((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_341)).name))->all), rt_str("-", 1)) && (rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).kind) == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_neg(rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i)));
goto ret_;
} else if (((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_341)).name))->all), rt_str("+", 1)) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_341)).name))->all), rt_str("-", 1))) && ((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).kind) == (((rt_int)3LL)))))) {
F->result_ = F->a_1471;
goto ret_;
}
F->ok_342v = 0;
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P889)rt_nil_check(F->e_341)).kind) != (((rt_int)9LL))) || f_user_defined_353(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_341)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1474 = (*(P889)rt_nil_check(F->e_341)).name;
F->a_1471 = f_meval_343((*(P889)rt_nil_check(F->e_341)).a, &F->ok_342v);
F->b_1472 = f_meval_343((*(P889)rt_nil_check(F->e_341)).b, &F->ok2_1473);
F->ok_342v = (rt_r_echk(F->ok_342v) && rt_r_echk(F->ok2_1473));
if ((!rt_r_echk(F->ok_342v))) {
F->result_ = NULL;
goto ret_;
}
F->ok_342v = 0;
if (((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).kind) == (((rt_int)1LL))) && (rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).kind) == (((rt_int)1LL))))) {
F->ok_342v = 1;
if (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_add(rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i), rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i)));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_sub(rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i), rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i)));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_mul(rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i), rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i)));
goto ret_;
} else if ((rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("DIV", 3)) && (rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_div(rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i), rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i)));
goto ret_;
} else if ((rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("MOD", 3)) && (rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), rt_mod(rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i), rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i)));
goto ret_;
} else if ((rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("**", 2)) && (rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i) >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_337((((rt_int)1LL)), f_ipow_340(rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i), rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i)));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i) == rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i))));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i) != rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i))));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i) < rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i))));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i) <= rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i))));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i) > rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i))));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i) >= rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).kind) == (((rt_int)3LL)))) && (((rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("+", 1)) || rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("-", 1))) || rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("*", 1))) || rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("/", 1))))) {
F->ok_342v = 1;
F->result_ = F->a_1471;
goto ret_;
} else if ((((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).kind) == (((rt_int)1LL)))) && rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("**", 2)))) {
F->ok_342v = 1;
F->result_ = F->a_1471;
goto ret_;
} else if (((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).kind) == (((rt_int)2LL))) && (rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).kind) == (((rt_int)2LL))))) {
F->ok_342v = 1;
if (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), rt_mul(rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i), rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i)));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_add(rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i), rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i)) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("XOR", 3)) || rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i) != rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i))));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).i) == rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).kind) == (((rt_int)4LL)))) && (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("=", 1)) || rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("/=", 2))))) {
F->ok_342v = 1;
if (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347(rt_str_eq((((P882)rt_nil_check((*(P908)rt_nil_check(F->a_1471)).s))->all), (((P882)rt_nil_check((*(P908)rt_nil_check(F->b_1472)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((!rt_str_eq((((P882)rt_nil_check((*(P908)rt_nil_check(F->a_1471)).s))->all), (((P882)rt_nil_check((*(P908)rt_nil_check(F->b_1472)).s))->all)))));
goto ret_;
} else if ((((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).kind) == (((rt_int)5LL)))) && (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("=", 1)) || rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("/=", 2))))) {
F->ok_342v = 1;
if (rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347(rt_str_eq((((P882)rt_nil_check((*(P908)rt_nil_check(F->a_1471)).s))->all), (((P882)rt_nil_check((*(P908)rt_nil_check(F->b_1472)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_337((((rt_int)2LL)), f_bool_i_347((!rt_str_eq((((P882)rt_nil_check((*(P908)rt_nil_check(F->a_1471)).s))->all), (((P882)rt_nil_check((*(P908)rt_nil_check(F->b_1472)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P882)rt_nil_check(F->op_1474))->all), rt_str("&", 1)) && ((rt_r_ichk((*(P908)rt_nil_check(F->a_1471)).kind) == (((rt_int)5LL))) || ((*(P908)rt_nil_check(F->a_1471)).t == g_ty_ascii_972))) && ((rt_r_ichk((*(P908)rt_nil_check(F->b_1472)).kind) == (((rt_int)5LL))) || ((*(P908)rt_nil_check(F->b_1472)).t == g_ty_ascii_972)))) {
F->r_1476 = NULL;
F->r_1476 = f_mk_mval_337((((rt_int)5LL)), ((rt_int)0LL));
F->ok_342v = 1;
(*(P908)rt_nil_check(F->r_1476)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_349(F->a_1471), f_mstr_349(F->b_1472)); b_; }));
F->result_ = F->r_1476;
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

static rstr f_mstr_349(P908 v_348) {
  struct f_mstr_349fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_348 = v_348;
if ((rt_r_ichk((*(P908)rt_nil_check(F->v_348)).kind) == (((rt_int)5LL)))) {
F->result_ = (((P882)rt_nil_check((*(P908)rt_nil_check(F->v_348)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_351(rt_r_ichk((*(P908)rt_nil_check(F->v_348)).i)));
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
F->printable_1477 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_350 >= ((rt_int)32LL)) && (F->i_350 <= ((rt_int)126LL)))) {
F->result_ = rt_r_echk(rt_str_get(F->printable_1477, rt_sub(F->i_350, ((rt_int)31LL))));
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
F->y_1478 = NULL;
F->y_1478 = f_lookup_155(&(*F->op_352));
F->result_ = ((F->y_1478 != NULL) && ((rt_r_ichk((*(P899)rt_nil_check(F->y_1478)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_1478)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_355(P895 t_354) {
  struct f_mcopy_355fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_354 = t_354;
F->ct_1479 = rt_str_copy(f_ctype_226(F->t_354));
F->name_1480 = rt_str_new(rt_add(((rt_int)((F->ct_1479).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1480, rt_str_cat(rt_str("mc_", 3), F->ct_1479));
F->l_1481 = NULL;
if ((!f_seen_name_388(g_mcopies_968, &F->name_1480))) {
{ R894 *cell1482 = rt_alloc(sizeof(R894));
(*cell1482).s = NULL;
(*cell1482).next = NULL;
F->l_1481 = cell1482;
}
(*(P893)rt_nil_check(F->l_1481)).s = f_mk_3(&F->name_1480);
(*(P893)rt_nil_check(F->l_1481)).next = g_mcopies_968;
g_mcopies_968 = F->l_1481;
f_put_27(g_out_protos_934, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1480), rt_str("(void *d, const void *s);", 25)); b_; }));
if (((rt_r_ichk((*(P895)rt_nil_check(F->t_354)).kind) == (((rt_int)15LL))) && f_top_level_369((*(P895)rt_nil_check(F->t_354)).assignp))) {
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1480), rt_str("(void *d, const void *s) { ", 27)), f_user_call2_363((*(P895)rt_nil_check(F->t_354)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(", 2), F->ct_1479), rt_str(" *)d", 4)); b_; }), 1, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1479), rt_str(" *)s", 4)); b_; }), 0)), rt_str("; }", 3)); b_; }));
} else {
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1480), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1479), rt_str(" *)d = ", 7)), f_copy_code_377(F->t_354, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1479), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
}
F->result_ = F->name_1480;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_357(P895 t_356) {
  struct f_composite_357fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_356 = t_356;
F->result_ = ((((rt_r_ichk((*(P895)rt_nil_check(F->t_356)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->t_356)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P895)rt_nil_check(F->t_356)).kind) == (((rt_int)17LL)))) || ((rt_r_ichk((*(P895)rt_nil_check(F->t_356)).kind) == (((rt_int)15LL))) && ((*(P895)rt_nil_check(F->t_356)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_call2_363(P899 y_358, rstr *a_359, int lv_a_360, rstr *b_361, int lv_b_362) {
  struct f_user_call2_363fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_358 = y_358;
F->a_359 = a_359;
F->lv_a_360 = lv_a_360;
F->b_361 = b_361;
F->lv_b_362 = lv_b_362;
F->args_1483 = NULL;
F->args_1483 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P899)rt_nil_check(F->y_358)).level) > ((rt_int)0LL))) {
F->args_1483 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1485 = ((rt_int)1LL), hi1486 = rt_sub(rt_r_ichk(g_cur_level_942), rt_r_ichk((*(P899)rt_nil_check(F->y_358)).level));
for (rt_int it1487 = lo1485; it1487 <= hi1486; it1487++) {
F->i_1484 = it1487;
F->args_1483 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->args_1483))->all), rt_str("->up", 4)); b_; }));
}
}
F->args_1483 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->args_1483))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_358)).cname))->all), rt_str("(", 1)), (((P882)rt_nil_check(F->args_1483))->all)), f_user_arg_367((*(P899)rt_nil_check(F->y_358)).params, &(*F->a_359), F->lv_a_360)), rt_str(", ", 2)), f_user_arg_367((*(P901)rt_nil_check((*(P899)rt_nil_check(F->y_358)).params)).next, &(*F->b_361), F->lv_b_362)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_arg_367(P901 pm_364, rstr *v_365, int lv_366) {
  struct f_user_arg_367fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pm_364 = pm_364;
F->v_365 = v_365;
F->lv_366 = lv_366;
if ((rt_r_ichk((*(P901)rt_nil_check(F->pm_364)).mode) == (((rt_int)1LL)))) {
F->result_ = f_copy_code_377((*(P901)rt_nil_check(F->pm_364)).t, &(*F->v_365));
goto ret_;
} else if (F->lv_366) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("&(", 2), (*F->v_365)), rt_str(")", 1));
goto ret_;
}
{
F->ct_1488 = rt_str_copy(f_ctype_226((*(P901)rt_nil_check(F->pm_364)).t));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1488), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1488), rt_str(")); *b_ = ", 10)), (*F->v_365)), rt_str("; b_; })", 8));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_top_level_369(P899 y_368) {
  struct f_top_level_369fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_368 = y_368;
F->result_ = ((F->y_368 != NULL) && (rt_r_ichk((*(P899)rt_nil_check(F->y_368)).level) == ((rt_int)0LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_374(rstr *lval_370, P895 t_371, rstr *v_372, P891 c_373) {
  struct f_assign_code_374fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_370 = lval_370;
F->t_371 = t_371;
F->v_372 = v_372;
F->c_373 = c_373;
if ((((rt_r_ichk((*(P895)rt_nil_check(F->t_371)).kind) == (((rt_int)15LL))) && ((*(P895)rt_nil_check(F->t_371)).assignp != NULL)) && (rt_r_echk(g_in_func_941) || f_top_level_369((*(P895)rt_nil_check(F->t_371)).assignp)))) {
F->result_ = rt_str_cat(f_user_call2_363((*(P895)rt_nil_check(F->t_371)).assignp, &(*F->lval_370), 1, &(*F->v_372), 0), rt_str(";", 1));
goto ret_;
}
if (((rt_r_ichk((*(P895)rt_nil_check(F->t_371)).kind) == (((rt_int)15LL))) && ((*(P895)rt_nil_check(F->t_371)).tparams == NULL))) {
F->result_ = f_assign_code_374(&(*F->lval_370), (*(P895)rt_nil_check(F->t_371)).under, &(*F->v_372), F->c_373);
goto ret_;
}
if ((((rt_r_ichk((*(P895)rt_nil_check(F->t_371)).kind) == (((rt_int)17LL))) && (F->c_373 != NULL)) && ((*(P891)rt_nil_check(F->c_373)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_226(F->t_371)), rt_str(" u_ = ", 6)), (*F->v_372)), rt_str("; if (u_.tag != (", 17)), (((P882)rt_nil_check((*(P891)rt_nil_check(F->c_373)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_226(F->t_371)), rt_str("(&", 2)), (*F->lval_370)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_357(F->t_371)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_226(F->t_371)), rt_str("(&", 2)), (*F->lval_370)), rt_str(", ", 2)), (*F->v_372)), rt_str(");", 2));
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_371)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_370)), rt_str(", ", 2)), (*F->v_372)), rt_str(");", 2));
goto ret_;
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->t_371)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->t_371)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_226(F->t_371)), rt_str("(&", 2)), (*F->lval_370)), rt_str(", ", 2)), (*F->v_372)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_370), rt_str(" = ", 3)), f_checked_205(F->t_371, F->c_373, &(*F->v_372))), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_377(P895 t_375, rstr *v_376) {
  struct f_copy_code_377fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_375 = t_375;
F->v_376 = v_376;
if (((rt_r_ichk((*(P895)rt_nil_check(F->t_375)).kind) == (((rt_int)15LL))) && ((*(P895)rt_nil_check(F->t_375)).tparams == NULL))) {
F->result_ = f_copy_code_377((*(P895)rt_nil_check(F->t_375)).under, &(*F->v_376));
goto ret_;
}
if (f_composite_357(F->t_375)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_226(F->t_375)), rt_str("(", 1)), (*F->v_376)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_375)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_376)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->t_375)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->t_375)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_226(F->t_375)), rt_str("(", 1)), (*F->v_376)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_376);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_381(P895 t_378, rstr *a_379, rstr *b_380) {
  struct f_eq_code_381fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_378 = t_378;
F->a_379 = a_379;
F->b_380 = b_380;
if ((((rt_r_ichk((*(P895)rt_nil_check(F->t_378)).kind) == (((rt_int)15LL))) && ((*(P895)rt_nil_check(F->t_378)).eqp != NULL)) && (rt_r_echk(g_in_func_941) || f_top_level_369((*(P895)rt_nil_check(F->t_378)).eqp)))) {
F->result_ = f_user_call2_363((*(P895)rt_nil_check(F->t_378)).eqp, &(*F->a_379), 0, &(*F->b_380), 0);
goto ret_;
}
if (((rt_r_ichk((*(P895)rt_nil_check(F->t_378)).kind) == (((rt_int)15LL))) && ((*(P895)rt_nil_check(F->t_378)).tparams == NULL))) {
F->result_ = f_eq_code_381((*(P895)rt_nil_check(F->t_378)).under, &(*F->a_379), &(*F->b_380));
goto ret_;
}
if (f_composite_357(F->t_378)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_226(F->t_378)), rt_str("(", 1)), (*F->a_379)), rt_str(", ", 2)), (*F->b_380)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_378)).kind) == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), (*F->a_379)), rt_str(", ", 2)), (*F->b_380)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_378)).kind) == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_379)), rt_str(" == ", 4)), (*F->b_380)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_378)).kind) == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_379)), rt_str(" == ", 4)), (*F->b_380)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_378)).kind) == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_378)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_379)), rt_str(", ", 2)), (*F->b_380)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->t_378)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->t_378)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_226(F->t_378)), rt_str("(", 1)), (*F->a_379)), rt_str(", ", 2)), (*F->b_380)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_379)), rt_str(" == ", 4)), (*F->b_380)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_385(rstr *lval_382, P895 t_383, rstr *v_384) {
  struct f_elem_assign_385fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_382 = lval_382;
F->t_383 = t_383;
F->v_384 = v_384;
F->result_ = f_assign_code_374(&(*F->lval_382), F->t_383, &(*F->v_384), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_388(P893 l_386, rstr *s_387) {
  struct f_seen_name_388fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_386 = l_386;
F->s_387 = s_387;
F->p_1489 = NULL;
F->p_1489 = F->l_386;
while ((F->p_1489 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P893)rt_nil_check(F->p_1489)).s))->all), (*F->s_387))) {
F->result_ = 1;
goto ret_;
}
F->p_1489 = (*(P893)rt_nil_check(F->p_1489)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_389(void) {
  struct f_emit_helpers_389fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_1490 = NULL;
F->t_1491 = NULL;
F->t_1491 = g_all_types_930;
F->done_1492 = NULL;
while ((F->t_1491 != NULL)) {
if ((f_composite_357(F->t_1491) && (!f_seen_name_388(F->done_1492, &(((P882)rt_nil_check((*(P895)rt_nil_check(F->t_1491)).cname))->all))))) {
F->l_1493 = NULL;
F->c_1494 = rt_str_new(((rt_int)(((((P882)rt_nil_check((*(P895)rt_nil_check(F->t_1491)).cname))->all)).len)));
rt_str_assign(&F->c_1494, (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_1491)).cname))->all));
{ R894 *cell1495 = rt_alloc(sizeof(R894));
(*cell1495).s = NULL;
(*cell1495).next = NULL;
F->l_1493 = cell1495;
}
(*(P893)rt_nil_check(F->l_1493)).s = (*(P895)rt_nil_check(F->t_1491)).cname;
(*(P893)rt_nil_check(F->l_1493)).next = F->done_1492;
F->done_1492 = F->l_1493;
f_put_27(g_out_helpers_933, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1494), rt_str("(", 1)), F->c_1494), rt_str(" *d, ", 5)), F->c_1494), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_933, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1494), rt_str(" cp_", 4)), F->c_1494), rt_str("(", 1)), F->c_1494), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_933, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1494), rt_str("(", 1)), F->c_1494), rt_str(" a, ", 4)), F->c_1494), rt_str(" b);", 4)); b_; }));
f_helper_bodies_391(F->t_1491);
}
F->t_1491 = (*(P895)rt_nil_check(F->t_1491)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_391(P895 t_390) {
  struct f_helper_bodies_391fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_390 = t_390;
F->c_1496 = rt_str_new(((rt_int)(((((P882)rt_nil_check((*(P895)rt_nil_check(F->t_390)).cname))->all)).len)));
rt_str_assign(&F->c_1496, (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_390)).cname))->all));
F->b_1497 = NULL;
F->b_1497 = g_out_funcs_936;
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_390)).kind) == (((rt_int)6LL)))) {
F->e_1498 = NULL;
F->e_1498 = (*(P895)rt_nil_check(F->t_390)).elem;
F->sizes_1499 = NULL;
F->sizes_1499 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1500 = NULL;
F->bounds_1500 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1502 = ((rt_int)1LL), hi1503 = rt_r_ichk((*(P895)rt_nil_check(F->t_390)).ndim);
for (rt_int it1504 = lo1502; it1504 <= hi1503; it1504++) {
F->k_1501 = it1504;
F->l_1505 = rt_str_copy(f_dim_lo_234(F->k_1501));
F->h_1506 = rt_str_copy(f_dim_hi_236(F->k_1501));
F->sizes_1499 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->sizes_1499))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1505), rt_str(", d->", 5)), F->h_1506), rt_str(") != RT_R_EXT(s.", 16)), F->l_1505), rt_str(", s.", 4)), F->h_1506), rt_str(")", 1)); b_; }));
F->bounds_1500 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->bounds_1500))->all), rt_str(" || a.", 6)), F->l_1505), rt_str(" != b.", 6)), F->l_1505), rt_str(" || a.", 6)), F->h_1506), rt_str(" != b.", 6)), F->h_1506); b_; }));
}
}
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1496), rt_str("(", 1)), F->c_1496), rt_str(" *d, ", 5)), F->c_1496), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P882)rt_nil_check(F->sizes_1499))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_241(F->t_390, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_385(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1498, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_385(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1498, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1496), rt_str(" cp_", 4)), F->c_1496), rt_str("(", 1)), F->c_1496), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1496), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_226(F->e_1498)), rt_str(") * (size_t)", 12)), f_acnt_241(F->t_390, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_241(F->t_390, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_377(F->e_1498, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1496), rt_str("(", 1)), F->c_1496), rt_str(" a, ", 4)), F->c_1496), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P882)rt_nil_check(F->bounds_1500))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_241(F->t_390, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_381(F->e_1498, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_390)).kind) == (((rt_int)15LL)))) {
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1496), rt_str("(", 1)), F->c_1496), rt_str(" *d, ", 5)), F->c_1496), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_178((*(P895)rt_nil_check(F->t_390)).under) && ((*(P895)rt_nil_check(F->t_390)).elemcons != NULL)) && ((*(P891)rt_nil_check((*(P895)rt_nil_check(F->t_390)).elemcons)).lo != NULL))) {
F->saved_1507 = NULL;
F->saved_1507 = g_psub_946;
F->p_1508 = NULL;
F->p_1508 = (*(P895)rt_nil_check(F->t_390)).tparams;
while ((F->p_1508 != NULL)) {
F->l1_1509 = NULL;
F->l2_1510 = NULL;
{ R894 *cell1511 = rt_alloc(sizeof(R894));
(*cell1511).s = NULL;
(*cell1511).next = NULL;
F->l1_1509 = cell1511;
}
{ R894 *cell1512 = rt_alloc(sizeof(R894));
(*cell1512).s = NULL;
(*cell1512).next = NULL;
F->l2_1510 = cell1512;
}
(*(P893)rt_nil_check(F->l1_1509)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1508)).name))->all))), rt_str("@", 1)); b_; }));
(*(P893)rt_nil_check(F->l2_1510)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1508)).name))->all))); b_; }));
(*(P893)rt_nil_check(F->l1_1509)).next = F->l2_1510;
(*(P893)rt_nil_check(F->l2_1510)).next = g_psub_946;
g_psub_946 = F->l1_1509;
F->p_1508 = (*(P889)rt_nil_check(F->p_1508)).next;
}
if ((rt_r_ichk((*(P895)rt_nil_check((*(P895)rt_nil_check(F->t_390)).under)).kind) == (((rt_int)3LL)))) {
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_303(&(((P882)rt_nil_check((*(P891)rt_nil_check((*(P895)rt_nil_check(F->t_390)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_303(&(((P882)rt_nil_check((*(P891)rt_nil_check((*(P895)rt_nil_check(F->t_390)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_303(&(((P882)rt_nil_check((*(P891)rt_nil_check((*(P895)rt_nil_check(F->t_390)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_303(&(((P882)rt_nil_check((*(P891)rt_nil_check((*(P895)rt_nil_check(F->t_390)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_946 = F->saved_1507;
} else {
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_385(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P895)rt_nil_check(F->t_390)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1496), rt_str(" cp_", 4)), F->c_1496), rt_str("(", 1)), F->c_1496), rt_str(" s) { s.all = ", 14)), f_copy_code_377((*(P895)rt_nil_check(F->t_390)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1496), rt_str("(", 1)), F->c_1496), rt_str(" a, ", 4)), F->c_1496), rt_str(" b) { return ", 13)), f_eq_code_381((*(P895)rt_nil_check(F->t_390)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_390)).kind) == (((rt_int)17LL)))) {
F->f_1513 = NULL;
F->f_1513 = (*(P895)rt_nil_check(F->t_390)).fields;
F->i_1514 = RT_R_IUNDEF;
F->i_1514 = ((rt_int)0LL);
F->cases_as_1515 = NULL;
F->cases_as_1515 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1516 = NULL;
F->cases_cp_1516 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1517 = NULL;
F->cases_eq_1517 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1513 != NULL)) {
F->fn_1518 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P882)rt_nil_check((*(P897)rt_nil_check(F->f_1513)).name))->all))));
F->cases_as_1515 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->cases_as_1515))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1514))), rt_str(": d->", 5)), F->fn_1518), rt_str(" = ", 3)), f_copy_code_377((*(P897)rt_nil_check(F->f_1513)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1518); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1516 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->cases_cp_1516))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1514))), rt_str(": d.", 4)), F->fn_1518), rt_str(" = ", 3)), f_copy_code_377((*(P897)rt_nil_check(F->f_1513)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1518); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1517 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->cases_eq_1517))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1514))), rt_str(": return ", 9)), f_eq_code_381((*(P897)rt_nil_check(F->f_1513)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1518); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1518); b_; }))), rt_str(";", 1)); b_; }));
F->i_1514 = rt_add(rt_r_ichk(F->i_1514), ((rt_int)1LL));
F->f_1513 = (*(P897)rt_nil_check(F->f_1513)).next;
}
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1496), rt_str("(", 1)), F->c_1496), rt_str(" *d, ", 5)), F->c_1496), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P882)rt_nil_check(F->cases_as_1515))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1496), rt_str(" cp_", 4)), F->c_1496), rt_str("(", 1)), F->c_1496), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1496), rt_str(" d = s; switch (s.tag) {", 24)), (((P882)rt_nil_check(F->cases_cp_1516))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1496), rt_str("(", 1)), F->c_1496), rt_str(" a, ", 4)), F->c_1496), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P882)rt_nil_check(F->cases_eq_1517))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1519 = NULL;
F->f_1519 = (*(P895)rt_nil_check(F->t_390)).fields;
F->conds_1520 = NULL;
F->conds_1520 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1496), rt_str("(", 1)), F->c_1496), rt_str(" *d, ", 5)), F->c_1496), rt_str(" s) {", 5)); b_; }));
while ((F->f_1519 != NULL)) {
F->fn_1521 = rt_str_copy(f_field_c_17(&(((P882)rt_nil_check((*(P897)rt_nil_check(F->f_1519)).name))->all)));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_385(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1521); b_; }), (*(P897)rt_nil_check(F->f_1519)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1521); b_; }))); b_; }));
F->f_1519 = (*(P897)rt_nil_check(F->f_1519)).next;
}
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1496), rt_str(" cp_", 4)), F->c_1496), rt_str("(", 1)), F->c_1496), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1496), rt_str(" d = s;", 7)); b_; }));
F->f_1519 = (*(P895)rt_nil_check(F->t_390)).fields;
while ((F->f_1519 != NULL)) {
F->fn_1522 = rt_str_copy(f_field_c_17(&(((P882)rt_nil_check((*(P897)rt_nil_check(F->f_1519)).name))->all)));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1522), rt_str(" = ", 3)), f_copy_code_377((*(P897)rt_nil_check(F->f_1519)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1522); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1520 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->conds_1520))->all), rt_str(" && ", 4)), f_eq_code_381((*(P897)rt_nil_check(F->f_1519)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1522); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1522); b_; }))); b_; }));
F->f_1519 = (*(P897)rt_nil_check(F->f_1519)).next;
}
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1496), rt_str("(", 1)), F->c_1496), rt_str(" a, ", 4)), F->c_1496), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P882)rt_nil_check(F->conds_1520))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_393(P889 elems_392) {
  struct f_declare_body_393fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_392 = elems_392;
F->e_1523 = NULL;
F->e_1523 = F->elems_392;
while ((F->e_1523 != NULL)) {
if ((rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).kind) == (((rt_int)51LL)))) {
F->g_1524 = NULL;
F->g_1524 = f_new_sym_173((((rt_int)10LL)), (*(P889)rt_nil_check(F->e_1523)).name);
(*(P899)rt_nil_check(F->g_1524)).decl = F->e_1523;
(*(P899)rt_nil_check(F->g_1524)).level = rt_r_ichk(g_cur_level_942);
(*(P899)rt_nil_check(F->g_1524)).owner = g_func_sym_953;
(*(P899)rt_nil_check(F->g_1524)).gctx = g_fctx_943;
f_define_160(F->g_1524, rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).line));
}
F->e_1523 = (*(P889)rt_nil_check(F->e_1523)).next;
}
F->e_1523 = F->elems_392;
while ((F->e_1523 != NULL)) {
if (((rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).kind) == (((rt_int)41LL))) && (rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).flag) == ((rt_int)0LL)))) {
f_manifest_const_395(F->e_1523);
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).kind) == (((rt_int)47LL)))) {
f_gen_capsule_403(F->e_1523);
} else if ((((rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).kind) == (((rt_int)48LL))) && (rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).flag) != ((rt_int)1LL))) && (rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).flag) != ((rt_int)3LL)))) {
f_gen_expose_425(F->e_1523);
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).kind) == (((rt_int)49LL)))) {
F->y_1525 = NULL;
F->y_1525 = f_new_sym_173((((rt_int)7LL)), (*(P889)rt_nil_check(F->e_1523)).name);
(*(P899)rt_nil_check(F->y_1525)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_1523)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_160(F->y_1525, rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).line));
f_put_27(g_out_globals_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_1525)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_938, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_1525)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_1523)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).kind) == (((rt_int)42LL)))) {
F->y_1526 = NULL;
F->y_1526 = f_new_sym_173((((rt_int)6LL)), (*(P889)rt_nil_check(F->e_1523)).name);
(*(P899)rt_nil_check(F->y_1526)).st = (*(P889)rt_nil_check(F->e_1523)).a;
(*(P899)rt_nil_check(F->y_1526)).decl = F->e_1523;
f_define_160(F->y_1526, rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).line));
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).kind) == (((rt_int)44LL)))) {
F->y_1527 = NULL;
F->y_1527 = f_new_sym_173((((rt_int)5LL)), (*(P889)rt_nil_check(F->e_1523)).name);
F->t_1528 = NULL;
F->t_1528 = f_new_typ_175((((rt_int)8LL)));
(*(P895)rt_nil_check(F->t_1528)).name = (*(P889)rt_nil_check(F->e_1523)).name;
(*(P895)rt_nil_check(F->t_1528)).decl = F->e_1523;
(*(P899)rt_nil_check(F->y_1527)).t = F->t_1528;
f_define_160(F->y_1527, rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).line));
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).kind) == (((rt_int)43LL)))) {
F->y_1529 = NULL;
F->y_1529 = f_new_sym_173((((rt_int)5LL)), (*(P889)rt_nil_check(F->e_1523)).name);
(*(P899)rt_nil_check(F->y_1529)).st = (*(P889)rt_nil_check(F->e_1523)).a;
(*(P899)rt_nil_check(F->y_1529)).decl = F->e_1523;
f_define_160(F->y_1529, rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).line));
}
F->e_1523 = (*(P889)rt_nil_check(F->e_1523)).next;
}
F->e_1523 = F->elems_392;
while ((F->e_1523 != NULL)) {
if ((((rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).kind) == (((rt_int)50LL))))) {
F->y_1530 = NULL;
f_declare_subprogram_452(F->e_1523);
F->y_1530 = f_lookup_decl_157(F->e_1523);
(*(P899)rt_nil_check(F->y_1530)).home = F->elems_392;
f_normal_function_450(F->e_1523, F->y_1530);
}
F->e_1523 = (*(P889)rt_nil_check(F->e_1523)).next;
}
F->e_1523 = F->elems_392;
{
F->snap_1531 = NULL;
while ((F->e_1523 != NULL)) {
if ((rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).kind) == (((rt_int)51LL)))) {
if ((F->snap_1531 == NULL)) {
{ P903 cell1532 = rt_alloc(sizeof *cell1532);
rt_int pv1533 = (((rt_int)4093LL));
cell1532->p_n = pv1533;
cell1532->all.lo = ((rt_int)0LL); cell1532->all.hi = pv1533;
cell1532->all.lo2 = cell1532->all.hi2 = 1;
cell1532->all.p = rt_alloc(sizeof(P899) * (size_t)(RT_CNT(cell1532->all)) + 1);
for (rt_int i1534 = 0; i1534 < (RT_CNT(cell1532->all)); i1534++) {
cell1532->all.p[i1534] = NULL;
}
F->snap_1531 = cell1532;
}
{ rt_int lo1536 = ((rt_int)0LL), hi1537 = (((rt_int)4093LL));
for (rt_int it1538 = lo1536; it1538 <= hi1537; it1538++) {
F->i_1535 = it1538;
(((P903)rt_nil_check(F->snap_1531))->all).p[(rt_index(F->i_1535, (((P903)rt_nil_check(F->snap_1531))->all).lo, (((P903)rt_nil_check(F->snap_1531))->all).hi) - (((P903)rt_nil_check(F->snap_1531))->all).lo)] = ({ A905 b_ = (((P903)rt_nil_check(g_table_925))->all); b_.p[(rt_index(F->i_1535, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1539 = NULL;
F->g_1539 = f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_1523)).name))->all));
(*(P899)rt_nil_check(F->g_1539)).env = F->snap_1531;
}
}
F->e_1523 = (*(P889)rt_nil_check(F->e_1523)).next;
}
}
F->e_1523 = F->elems_392;
while ((F->e_1523 != NULL)) {
if (((rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).kind) == (((rt_int)45LL))) && (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_1523)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_1523)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1540 = NULL;
F->y_1540 = f_lookup_decl_157(F->e_1523);
if (((((F->y_1540 != NULL) && ((*(P899)rt_nil_check(F->y_1540)).params != NULL)) && ((*(P901)rt_nil_check((*(P899)rt_nil_check(F->y_1540)).params)).next == NULL)) && ((rt_r_ichk((*(P895)rt_nil_check((*(P901)rt_nil_check((*(P899)rt_nil_check(F->y_1540)).params)).t)).kind) == (((rt_int)15LL))) || (rt_r_ichk((*(P895)rt_nil_check((*(P901)rt_nil_check((*(P899)rt_nil_check(F->y_1540)).params)).t)).kind) == (((rt_int)8LL)))))) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_1523)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P895)rt_nil_check((*(P901)rt_nil_check((*(P899)rt_nil_check(F->y_1540)).params)).t)).initp = F->y_1540;
} else {
(*(P895)rt_nil_check((*(P901)rt_nil_check((*(P899)rt_nil_check(F->y_1540)).params)).t)).finalp = F->y_1540;
}
}
}
if ((((rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).kind) == (((rt_int)45LL))) && rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_1523)).name))->all), rt_str(":=", 2))) || ((rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).kind) == (((rt_int)46LL))) && (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_1523)).name))->all), rt_str("=", 1)) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_1523)).name))->all), rt_str("<", 1)))))) {
F->y_1541 = NULL;
F->y_1541 = f_lookup_decl_157(F->e_1523);
if (((((((F->y_1541 != NULL) && ((*(P899)rt_nil_check(F->y_1541)).params != NULL)) && ((*(P901)rt_nil_check((*(P899)rt_nil_check(F->y_1541)).params)).next != NULL)) && ((*(P901)rt_nil_check((*(P901)rt_nil_check((*(P899)rt_nil_check(F->y_1541)).params)).next)).next == NULL)) && (rt_r_ichk((*(P895)rt_nil_check((*(P901)rt_nil_check((*(P899)rt_nil_check(F->y_1541)).params)).t)).kind) == (((rt_int)15LL)))) && f_same_213((*(P901)rt_nil_check((*(P899)rt_nil_check(F->y_1541)).params)).t, (*(P901)rt_nil_check((*(P901)rt_nil_check((*(P899)rt_nil_check(F->y_1541)).params)).next)).t))) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_1523)).name))->all), rt_str(":=", 2))) {
if ((rt_r_ichk((*(P901)rt_nil_check((*(P899)rt_nil_check(F->y_1541)).params)).mode) != (((rt_int)2LL)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_1523)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the first formal of := is a VAR formal (13.2)", 45); b_; }));
}
(*(P895)rt_nil_check((*(P901)rt_nil_check((*(P899)rt_nil_check(F->y_1541)).params)).t)).assignp = F->y_1541;
} else if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_1523)).name))->all), rt_str("=", 1))) {
(*(P895)rt_nil_check((*(P901)rt_nil_check((*(P899)rt_nil_check(F->y_1541)).params)).t)).eqp = F->y_1541;
} else {
(*(P895)rt_nil_check((*(P901)rt_nil_check((*(P899)rt_nil_check(F->y_1541)).params)).t)).ltp = F->y_1541;
}
}
}
F->e_1523 = (*(P889)rt_nil_check(F->e_1523)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_395(P889 d_394) {
  struct f_manifest_const_395fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_394 = d_394;
F->ok_1542 = RT_R_EUNDEF;
F->v_1543 = NULL;
F->y_1544 = NULL;
F->t_1545 = NULL;
F->ctext_1546 = NULL;
if (((*(P889)rt_nil_check(F->d_394)).a != NULL)) {
if (((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->d_394)).a)).kind) != (((rt_int)70LL))) || ((*(P889)rt_nil_check((*(P889)rt_nil_check(F->d_394)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1543 = f_meval_343((*(P889)rt_nil_check(F->d_394)).b, &F->ok_1542);
if ((!rt_r_echk(F->ok_1542))) {
goto ret_;
}
{
F->saved_1547 = NULL;
F->saved_1547 = g_code_939;
g_code_939 = f_new_buffer_24();
g_trial_967 = rt_add(rt_r_ichk(g_trial_967), ((rt_int)1LL));
{ rt_frame xf1548;
if (RT_TRY(xf1548)) {
F->ctext_1546 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_700((*(P889)rt_nil_check(F->d_394)).b, NULL, &F->t_1545)), rt_str(")", 1)); b_; }));
RT_POP(xf1548);
} else {
RT_POP(xf1548);
int x1549 = rt_xcur;
if (0 || x1549 == ex_compile_error_1) {
F->ok_1542 = 0;
} else {
rt_raise(x1549);
}
}
}
g_trial_967 = rt_sub(rt_r_ichk(g_trial_967), ((rt_int)1LL));
F->ok_1542 = (rt_r_echk(F->ok_1542) && ((*(P912)rt_nil_check(g_code_939)).head == NULL));
g_code_939 = F->saved_1547;
}
if (((!rt_r_echk(F->ok_1542)) || (((*(P889)rt_nil_check(F->d_394)).a != NULL) && (rt_r_ichk((*(P895)rt_nil_check(F->t_1545)).kind) != (((rt_int)1LL)))))) {
goto ret_;
}
if ((rt_r_ichk((*(P908)rt_nil_check(F->v_1543)).kind) == (((rt_int)4LL)))) {
(*(P908)rt_nil_check(F->v_1543)).t = F->t_1545;
(*(P908)rt_nil_check(F->v_1543)).i = f_lit_index_254((*(P895)rt_nil_check(f_base_of_215(F->t_1545))).lits, &(((P882)rt_nil_check((*(P908)rt_nil_check(F->v_1543)).s))->all));
}
(*(P889)rt_nil_check(F->d_394)).flag = ((rt_int)1LL);
F->y_1544 = f_new_sym_173((((rt_int)2LL)), (*(P889)rt_nil_check(F->d_394)).name);
(*(P899)rt_nil_check(F->y_1544)).t = F->t_1545;
(*(P899)rt_nil_check(F->y_1544)).c = f_new_cons_176();
(*(P899)rt_nil_check(F->y_1544)).mv = F->v_1543;
if ((rt_r_ichk((*(P908)rt_nil_check(F->v_1543)).kind) == (((rt_int)1LL)))) {
(*(P899)rt_nil_check(F->y_1544)).mvalue = rt_r_ichk((*(P908)rt_nil_check(F->v_1543)).i);
(*(P899)rt_nil_check(F->y_1544)).hasmv = 1;
}
(*(P899)rt_nil_check(F->y_1544)).ro_flag = 1;
(*(P899)rt_nil_check(F->y_1544)).access = F->ctext_1546;
f_define_160(F->y_1544, rt_r_ichk((*(P889)rt_nil_check(F->d_394)).line));
ret_:
  RT_FPOP();
  return;
}

static int f_exported_399(P889 d_396, rstr *name_397, int *ro_398) {
  struct f_exported_399fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_396 = d_396;
F->name_397 = name_397;
F->ro_398 = ro_398;
F->ro_398v = *F->ro_398;
F->p_1550 = NULL;
F->p_1550 = (*(P889)rt_nil_check(F->d_396)).a;
F->ro_398v = 0;
if ((rt_r_ichk((*(P889)rt_nil_check(F->d_396)).ival) == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1550 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1550)).name))->all), (*F->name_397))) {
F->ro_398v = (rt_r_ichk((*(P889)rt_nil_check(F->p_1550)).ival) == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1550 = (*(P889)rt_nil_check(F->p_1550)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ro_398v)) (*F->ro_398) = F->ro_398v;
  RT_FPOP();
  return F->result_;
}

static P899 f_copy_sym_401(P899 y_400) {
  struct f_copy_sym_401fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_400 = y_400;
F->z_1551 = NULL;
{ R900 *cell1552 = rt_alloc(sizeof(R900));
(*cell1552).name = NULL;
(*cell1552).t = NULL;
(*cell1552).c = NULL;
(*cell1552).access = NULL;
(*cell1552).cname = NULL;
(*cell1552).st = NULL;
(*cell1552).decl = NULL;
(*cell1552).params = NULL;
(*cell1552).result = NULL;
(*cell1552).members = NULL;
(*cell1552).mnext = NULL;
(*cell1552).binds = NULL;
(*cell1552).insts = NULL;
(*cell1552).env = NULL;
(*cell1552).chain = NULL;
(*cell1552).stack = NULL;
(*cell1552).owner = NULL;
(*cell1552).gctx = NULL;
(*cell1552).mv = NULL;
(*cell1552).reqs = NULL;
(*cell1552).home = NULL;
(*cell1552).capn = NULL;
(*cell1552).tbinds = NULL;
F->z_1551 = cell1552;
}
(*(P899)rt_nil_check(F->z_1551)).kind = rt_r_ichk((*(P899)rt_nil_check(F->y_400)).kind);
(*(P899)rt_nil_check(F->z_1551)).name = (*(P899)rt_nil_check(F->y_400)).name;
(*(P899)rt_nil_check(F->z_1551)).t = (*(P899)rt_nil_check(F->y_400)).t;
(*(P899)rt_nil_check(F->z_1551)).c = (*(P899)rt_nil_check(F->y_400)).c;
(*(P899)rt_nil_check(F->z_1551)).access = (*(P899)rt_nil_check(F->y_400)).access;
(*(P899)rt_nil_check(F->z_1551)).cname = (*(P899)rt_nil_check(F->y_400)).cname;
(*(P899)rt_nil_check(F->z_1551)).ro_flag = rt_r_echk((*(P899)rt_nil_check(F->y_400)).ro_flag);
(*(P899)rt_nil_check(F->z_1551)).mvalue = rt_r_ichk((*(P899)rt_nil_check(F->y_400)).mvalue);
(*(P899)rt_nil_check(F->z_1551)).hasmv = rt_r_echk((*(P899)rt_nil_check(F->y_400)).hasmv);
(*(P899)rt_nil_check(F->z_1551)).st = (*(P899)rt_nil_check(F->y_400)).st;
(*(P899)rt_nil_check(F->z_1551)).decl = (*(P899)rt_nil_check(F->y_400)).decl;
(*(P899)rt_nil_check(F->z_1551)).params = (*(P899)rt_nil_check(F->y_400)).params;
(*(P899)rt_nil_check(F->z_1551)).result = (*(P899)rt_nil_check(F->y_400)).result;
(*(P899)rt_nil_check(F->z_1551)).level = rt_r_ichk((*(P899)rt_nil_check(F->y_400)).level);
(*(P899)rt_nil_check(F->z_1551)).byref = rt_r_echk((*(P899)rt_nil_check(F->y_400)).byref);
(*(P899)rt_nil_check(F->z_1551)).members = (*(P899)rt_nil_check(F->y_400)).members;
(*(P899)rt_nil_check(F->z_1551)).env = (*(P899)rt_nil_check(F->y_400)).env;
F->result_ = F->z_1551;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_403(P889 d_402) {
  struct f_gen_capsule_403fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_402 = d_402;
F->y_1553 = NULL;
F->y_1553 = f_new_sym_173((((rt_int)8LL)), (*(P889)rt_nil_check(F->d_402)).name);
F->saved_1554 = NULL;
F->saved_1554 = g_suppress_959;
F->p_1555 = NULL;
F->p_1555 = (*(P889)rt_nil_check(F->d_402)).b;
F->tail_1556 = NULL;
(*(P899)rt_nil_check(F->y_1553)).decl = F->d_402;
while ((F->p_1555 != NULL)) {
F->pm_1557 = NULL;
{ R902 *cell1558 = rt_alloc(sizeof(R902));
(*cell1558).name = NULL;
(*cell1558).t = NULL;
(*cell1558).c = NULL;
(*cell1558).cfield = NULL;
(*cell1558).next = NULL;
F->pm_1557 = cell1558;
}
(*(P901)rt_nil_check(F->pm_1557)).name = (*(P889)rt_nil_check(F->p_1555)).name;
(*(P901)rt_nil_check(F->pm_1557)).mode = rt_r_ichk((*(P889)rt_nil_check(F->p_1555)).ival);
(*(P901)rt_nil_check(F->pm_1557)).t = f_resolve_subtype_257((*(P889)rt_nil_check(F->p_1555)).a, &(*(P901)rt_nil_check(F->pm_1557)).c);
if ((F->tail_1556 == NULL)) {
(*(P899)rt_nil_check(F->y_1553)).params = F->pm_1557;
} else {
(*(P901)rt_nil_check(F->tail_1556)).next = F->pm_1557;
}
F->tail_1556 = F->pm_1557;
F->p_1555 = (*(P889)rt_nil_check(F->p_1555)).next;
}
if (((*(P889)rt_nil_check(F->d_402)).b == NULL)) {
g_suppress_959 = f_suppressing_459((*(P889)rt_nil_check(F->d_402)).prags);
f_elaborate_capsule_412(F->d_402, F->y_1553, NULL, F->d_402);
g_suppress_959 = F->saved_1554;
}
f_define_160(F->y_1553, rt_r_ichk((*(P889)rt_nil_check(F->d_402)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_407(P889 d_404, P889 args_405, rt_int line_406) {
  struct f_capsule_params_407fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_404 = d_404;
F->args_405 = args_405;
F->line_406 = line_406;
F->p_1559 = NULL;
F->p_1559 = (*(P889)rt_nil_check(F->d_404)).b;
F->a_1560 = NULL;
F->a_1560 = F->args_405;
F->t_1561 = NULL;
F->vt_1562 = NULL;
F->c_1563 = NULL;
while (((F->p_1559 != NULL) && (F->a_1560 != NULL))) {
F->t_1561 = f_resolve_subtype_257((*(P889)rt_nil_check(F->p_1559)).a, &F->c_1563);
if ((rt_r_ichk((*(P889)rt_nil_check(F->p_1559)).ival) == (((rt_int)3LL)))) {
f_fail_23(F->line_406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if (((rt_r_ichk((*(P889)rt_nil_check(F->p_1559)).ival) == (((rt_int)2LL))) || (rt_r_ichk((*(P889)rt_nil_check(F->p_1559)).ival) == (((rt_int)4LL))))) {
F->lv_1564 = NULL;
F->lc_1565 = NULL;
F->ro_1566 = RT_R_EUNDEF;
F->y_1567 = NULL;
F->y_1567 = f_new_sym_173((((rt_int)1LL)), (*(P889)rt_nil_check(F->p_1559)).name);
f_lvalue_669(F->a_1560, &F->lv_1564, &F->vt_1562, &F->lc_1565, &F->ro_1566);
f_check_type_224(F->vt_1562, F->t_1561, F->line_406);
if ((rt_r_echk(F->ro_1566) && (rt_r_ichk((*(P889)rt_nil_check(F->p_1559)).ival) == (((rt_int)2LL))))) {
f_fail_23(F->line_406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1559)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (rt_r_echk(g_in_func_941)) {
F->f_1568 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1559)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_226(F->t_1561)), rt_str(" *", 2)), F->f_1568), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1568), rt_str(" = &", 4)), (((P882)rt_nil_check(F->lv_1564))->all)), rt_str(";", 1)); b_; }));
(*(P899)rt_nil_check(F->y_1567)).level = rt_r_ichk(g_cur_level_942);
(*(P899)rt_nil_check(F->y_1567)).access = f_mk_3(&F->f_1568);
(*(P899)rt_nil_check(F->y_1567)).byref = 1;
} else {
F->g_1569 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1559)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_226(F->t_1561)), rt_str(" *", 2)), F->g_1569), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_949, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1569), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1569, rt_str(" = &", 4)), (((P882)rt_nil_check(F->lv_1564))->all)), rt_str(";", 1)); b_; }));
(*(P899)rt_nil_check(F->y_1567)).level = ((rt_int)0LL);
(*(P899)rt_nil_check(F->y_1567)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1569), rt_str(")", 1)); b_; }));
}
(*(P899)rt_nil_check(F->y_1567)).t = F->t_1561;
(*(P899)rt_nil_check(F->y_1567)).c = F->lc_1565;
(*(P899)rt_nil_check(F->y_1567)).ro_flag = (rt_r_ichk((*(P889)rt_nil_check(F->p_1559)).ival) == (((rt_int)4LL)));
f_define_160(F->y_1567, F->line_406);
} else {
F->y_1570 = NULL;
F->y_1570 = f_new_sym_173((((rt_int)2LL)), (*(P889)rt_nil_check(F->p_1559)).name);
F->v_1571 = rt_str_copy(f_gexpr_700(F->a_1560, F->t_1561, &F->vt_1562));
f_check_type_224(F->vt_1562, F->t_1561, F->line_406);
{
F->access_1572 = rt_str_copy(f_storage_468(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1559)).name))->all), F->t_1561));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1572, rt_str(" = ", 3)), f_copy_code_377(F->t_1561, &F->v_1571)), rt_str(";", 1)); b_; }));
f_bind_471(F->y_1570, &F->access_1572);
}
(*(P899)rt_nil_check(F->y_1570)).t = F->t_1561;
(*(P899)rt_nil_check(F->y_1570)).c = F->c_1563;
(*(P899)rt_nil_check(F->y_1570)).ro_flag = 1;
f_define_160(F->y_1570, F->line_406);
}
F->p_1559 = (*(P889)rt_nil_check(F->p_1559)).next;
F->a_1560 = (*(P889)rt_nil_check(F->a_1560)).next;
}
if (((F->p_1559 != NULL) || (F->a_1560 != NULL))) {
f_fail_23(F->line_406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P882)rt_nil_check((*(P889)rt_nil_check(F->d_404)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_412(P889 d_408, P899 y_409, P889 args_410, P889 owner_411) {
  struct f_elaborate_capsule_412fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_408 = d_408;
F->y_409 = y_409;
F->args_410 = args_410;
F->owner_411 = owner_411;
F->cr_1573 = NULL;
F->ctx_1574 = NULL;
F->saved_gotos_1575 = NULL;
F->m_1576 = NULL;
F->p_1577 = NULL;
F->p_1577 = (*(P889)rt_nil_check(F->d_408)).a;
F->ro_1578 = RT_R_EUNDEF;
{ R917 *cell1579 = rt_alloc(sizeof(R917));
(*cell1579).d = NULL;
(*cell1579).next = NULL;
F->cr_1573 = cell1579;
}
(*(P916)rt_nil_check(F->cr_1573)).d = F->d_408;
(*(P916)rt_nil_check(F->cr_1573)).next = g_caps_944;
g_caps_944 = F->cr_1573;
f_open_scope_169();
(*(P916)rt_nil_check(F->cr_1573)).depth = rt_r_ichk(g_depth_928);
if (((*(P889)rt_nil_check(F->d_408)).b != NULL)) {
f_capsule_params_407(F->d_408, F->args_410, rt_r_ichk((*(P889)rt_nil_check(F->owner_411)).line));
}
{ R907 *cell1580 = rt_alloc(sizeof(R907));
(*cell1580).imps = NULL;
(*cell1580).next = NULL;
F->ctx_1574 = cell1580;
}
(*(P906)rt_nil_check(F->ctx_1574)).depth = rt_r_ichk(g_depth_928);
(*(P906)rt_nil_check(F->ctx_1574)).imps = (*(P889)rt_nil_check(F->d_408)).d;
(*(P906)rt_nil_check(F->ctx_1574)).all_imp = (rt_r_ichk((*(P889)rt_nil_check(F->d_408)).flag) >= ((rt_int)2LL));
(*(P906)rt_nil_check(F->ctx_1574)).next = g_fctx_943;
g_fctx_943 = F->ctx_1574;
F->saved_gotos_1575 = g_gotos_963;
g_gotos_963 = NULL;
f_declare_labels_494((*(P889)rt_nil_check(F->d_408)).c);
f_declare_body_393((*(P889)rt_nil_check(F->d_408)).c);
f_capsule_body_501((*(P889)rt_nil_check(F->d_408)).c);
{
F->w_1581 = NULL;
{ R919 *cell1582 = rt_alloc(sizeof(R919));
(*cell1582).d = NULL;
(*cell1582).w = NULL;
(*cell1582).next = NULL;
F->w_1581 = cell1582;
}
(*(P918)rt_nil_check(F->w_1581)).d = F->owner_411;
(*(P918)rt_nil_check(F->w_1581)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_488((*(P889)rt_nil_check(F->d_408)).c); b_; }));
(*(P918)rt_nil_check(F->w_1581)).next = g_cap_waits_945;
g_cap_waits_945 = F->w_1581;
}
g_fctx_943 = (*(P906)rt_nil_check(g_fctx_943)).next;
F->m_1576 = g_scope_stack_929;
while (((F->m_1576 != NULL) && (rt_r_ichk((*(P899)rt_nil_check(F->m_1576)).depth) == rt_r_ichk(g_depth_928)))) {
if (((((rt_r_ichk((*(P899)rt_nil_check(F->m_1576)).kind) == (((rt_int)5LL))) && ((*(P899)rt_nil_check(F->m_1576)).t == NULL)) && ((*(P899)rt_nil_check(F->m_1576)).decl != NULL)) && (rt_r_ichk((*(P889)rt_nil_check((*(P899)rt_nil_check(F->m_1576)).decl)).kind) == (((rt_int)43LL))))) {
(*(P899)rt_nil_check(F->m_1576)).t = f_new_type_307(F->m_1576, f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P889)rt_nil_check(F->d_408)).line)), &(*(P899)rt_nil_check(F->m_1576)).c);
} else if ((((rt_r_ichk((*(P899)rt_nil_check(F->m_1576)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P899)rt_nil_check(F->m_1576)).kind) == (((rt_int)6LL)))) && ((*(P899)rt_nil_check(F->m_1576)).t == NULL))) {
(*(P899)rt_nil_check(F->m_1576)).t = f_resolve_subtype_257((*(P899)rt_nil_check(F->m_1576)).st, &(*(P899)rt_nil_check(F->m_1576)).c);
} else if (((rt_r_ichk((*(P899)rt_nil_check(F->m_1576)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P895)rt_nil_check((*(P899)rt_nil_check(F->m_1576)).t)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_427((*(P899)rt_nil_check(F->m_1576)).t);
}
F->m_1576 = (*(P899)rt_nil_check(F->m_1576)).stack;
}
F->m_1576 = g_scope_stack_929;
while (((F->m_1576 != NULL) && (rt_r_ichk((*(P899)rt_nil_check(F->m_1576)).depth) == rt_r_ichk(g_depth_928)))) {
if (f_exported_399(F->d_408, &(((P882)rt_nil_check((*(P899)rt_nil_check(F->m_1576)).name))->all), &F->ro_1578)) {
F->z_1583 = NULL;
F->z_1583 = f_copy_sym_401(F->m_1576);
if (rt_r_echk(F->ro_1578)) {
(*(P899)rt_nil_check(F->z_1583)).ro_flag = 1;
}
(*(P899)rt_nil_check(F->z_1583)).mnext = (*(P899)rt_nil_check(F->y_409)).members;
(*(P899)rt_nil_check(F->y_409)).members = F->z_1583;
}
F->m_1576 = (*(P899)rt_nil_check(F->m_1576)).stack;
}
while ((F->p_1577 != NULL)) {
if ((((!rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1577)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1577)).name))->all), rt_str("=", 1)))) && ((f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1577)).name))->all)) == NULL) || ((*(P899)rt_nil_check(f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1577)).name))->all)))).depth != rt_r_ichk(g_depth_928))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->d_408)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1577)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P882)rt_nil_check((*(P889)rt_nil_check(F->d_408)).name))->all)); b_; }));
}
F->p_1577 = (*(P889)rt_nil_check(F->p_1577)).next;
}
f_close_scope_170();
g_caps_944 = (*(P916)rt_nil_check(g_caps_944)).next;
g_gotos_963 = F->saved_gotos_1575;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_415(P889 d_413, rstr *op_414) {
  struct f_exports_op_415fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_413 = d_413;
F->op_414 = op_414;
F->p_1584 = NULL;
if ((F->d_413 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1584 = (*(P889)rt_nil_check(F->d_413)).a;
while ((F->p_1584 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1584)).name))->all), (*F->op_414))) {
F->result_ = 1;
goto ret_;
}
F->p_1584 = (*(P889)rt_nil_check(F->p_1584)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P882 f_renamed_418(P889 d_416, P899 z_417) {
  struct f_renamed_418fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_416 = d_416;
F->z_417 = z_417;
F->r_1585 = NULL;
F->r_1585 = (*(P889)rt_nil_check(F->d_416)).c;
while ((F->r_1585 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->r_1585)).name))->all), (((P882)rt_nil_check((*(P899)rt_nil_check(F->z_417)).name))->all))) {
F->result_ = (*(P889)rt_nil_check((*(P889)rt_nil_check(F->r_1585)).a)).name;
goto ret_;
}
F->r_1585 = (*(P889)rt_nil_check(F->r_1585)).next;
}
F->result_ = (*(P899)rt_nil_check(F->z_417)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P899 f_pick_capsule_420(P889 d_419) {
  struct f_pick_capsule_420fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_419 = d_419;
F->y_1586 = NULL;
F->y_1586 = ({ A905 b_ = (((P903)rt_nil_check(g_table_925))->all); b_.p[(rt_index(f_hash_153(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->d_419)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
F->first_1587 = NULL;
F->fit_1588 = NULL;
F->n_1589 = RT_R_IUNDEF;
F->n_1589 = ((rt_int)0LL);
while ((F->y_1586 != NULL)) {
if ((rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_1586)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->d_419)).name))->all)) && (rt_r_ichk((*(P899)rt_nil_check(F->y_1586)).kind) == (((rt_int)8LL))))) {
F->n_1589 = rt_add(rt_r_ichk(F->n_1589), ((rt_int)1LL));
if ((F->first_1587 == NULL)) {
F->first_1587 = F->y_1586;
}
if (((F->fit_1588 == NULL) && f_fits_816(F->y_1586, (*(P889)rt_nil_check(F->d_419)).b))) {
F->fit_1588 = F->y_1586;
}
}
F->y_1586 = (*(P899)rt_nil_check(F->y_1586)).chain;
}
if ((rt_r_ichk(F->n_1589) > ((rt_int)1LL))) {
if ((F->fit_1588 == NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->d_419)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no capsule ", 11), (((P882)rt_nil_check((*(P889)rt_nil_check(F->d_419)).name))->all)), rt_str(" has formals that fit these actual parameters", 45)); b_; }));
}
F->result_ = F->fit_1588;
goto ret_;
}
if ((F->first_1587 == NULL)) {
F->result_ = f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->d_419)).name))->all));
goto ret_;
}
F->result_ = F->first_1587;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P899 f_capsule_instance_423(P899 g_421, P889 d_422) {
  struct f_capsule_instance_423fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_421 = g_421;
F->d_422 = d_422;
F->gd_1590 = NULL;
F->gd_1590 = (*(P899)rt_nil_check(F->g_421)).decl;
F->pat_1591 = NULL;
F->pat_1591 = (*(P889)rt_nil_check(F->gd_1590)).b;
F->binds_1592 = NULL;
F->binds_1592 = f_need_binds_627(F->gd_1590, f_tt_binds_606(F->gd_1590, (*(P889)rt_nil_check(F->pat_1591)).e, (*(P889)rt_nil_check(F->d_422)).e, rt_r_ichk((*(P889)rt_nil_check(F->d_422)).line)), rt_r_ichk((*(P889)rt_nil_check(F->d_422)).line));
F->inst_1593 = NULL;
F->inst_1593 = (*(P899)rt_nil_check(F->g_421)).insts;
F->saved_env_1594 = NULL;
F->saved_env_1594 = g_genv_926;
F->saved_gdepth_1595 = RT_R_IUNDEF;
F->saved_gdepth_1595 = rt_r_ichk(g_gdepth_958);
if (((rt_r_ichk((*(P889)rt_nil_check(F->d_422)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P889)rt_nil_check(F->d_422)).flag) != ((rt_int)3LL)))) {
while ((F->inst_1593 != NULL)) {
if (f_same_binds_598((*(P899)rt_nil_check(F->inst_1593)).tbinds, F->binds_1592)) {
F->result_ = F->inst_1593;
goto ret_;
}
F->inst_1593 = (*(P899)rt_nil_check(F->inst_1593)).insts;
}
}
F->inst_1593 = f_new_sym_173((((rt_int)8LL)), (*(P889)rt_nil_check(F->pat_1591)).name);
(*(P899)rt_nil_check(F->inst_1593)).decl = F->pat_1591;
(*(P899)rt_nil_check(F->inst_1593)).tbinds = F->binds_1592;
f_open_scope_169();
{
F->b_1596 = NULL;
F->b_1596 = F->binds_1592;
while ((F->b_1596 != NULL)) {
f_define_160(F->b_1596, rt_r_ichk((*(P889)rt_nil_check(F->d_422)).line));
F->b_1596 = (*(P899)rt_nil_check(F->b_1596)).mnext;
}
}
g_genv_926 = (*(P899)rt_nil_check(F->g_421)).env;
g_gdepth_958 = rt_r_ichk(g_depth_928);
f_elaborate_capsule_412(F->pat_1591, F->inst_1593, (*(P889)rt_nil_check(F->d_422)).b, F->d_422);
g_genv_926 = F->saved_env_1594;
g_gdepth_958 = rt_r_ichk(F->saved_gdepth_1595);
f_close_scope_170();
if (((rt_r_ichk((*(P889)rt_nil_check(F->d_422)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P889)rt_nil_check(F->d_422)).flag) != ((rt_int)3LL)))) {
(*(P899)rt_nil_check(F->inst_1593)).insts = (*(P899)rt_nil_check(F->g_421)).insts;
(*(P899)rt_nil_check(F->g_421)).insts = F->inst_1593;
}
F->result_ = F->inst_1593;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_expose_425(P889 d_424) {
  struct f_gen_expose_425fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_424 = d_424;
F->y_1597 = NULL;
F->y_1597 = f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->d_424)).name))->all));
F->m_1598 = NULL;
F->p_1599 = NULL;
F->p_1599 = (*(P889)rt_nil_check(F->d_424)).a;
F->r_1600 = NULL;
F->r_1600 = (*(P889)rt_nil_check(F->d_424)).c;
if ((((F->y_1597 != NULL) && (rt_r_ichk((*(P899)rt_nil_check(F->y_1597)).kind) == (((rt_int)10LL)))) && (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_1597)).decl)).b)).kind) == (((rt_int)47LL))))) {
F->y_1597 = f_capsule_instance_423(F->y_1597, F->d_424);
} else {
F->y_1597 = f_pick_capsule_420(F->d_424);
if (((F->y_1597 == NULL) || (rt_r_ichk((*(P899)rt_nil_check(F->y_1597)).kind) != (((rt_int)8LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->d_424)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->d_424)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
if (((*(P889)rt_nil_check(F->d_424)).e != NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->d_424)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->d_424)).name))->all), rt_str(" is not a generic capsule", 25)); b_; }));
}
}
if ((((*(P899)rt_nil_check(F->y_1597)).tbinds != NULL) || (((*(P899)rt_nil_check(F->y_1597)).decl != NULL) && ((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_1597)).decl)).e != NULL)))) {
} else if (((rt_r_ichk((*(P889)rt_nil_check(F->d_424)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P889)rt_nil_check(F->d_424)).flag) == ((rt_int)3LL)))) {
F->inst_1601 = NULL;
F->inst_1601 = f_new_sym_173((((rt_int)8LL)), (*(P899)rt_nil_check(F->y_1597)).name);
(*(P899)rt_nil_check(F->inst_1601)).decl = (*(P899)rt_nil_check(F->y_1597)).decl;
f_elaborate_capsule_412((*(P899)rt_nil_check(F->y_1597)).decl, F->inst_1601, (*(P889)rt_nil_check(F->d_424)).b, F->d_424);
F->y_1597 = F->inst_1601;
} else if ((((*(P899)rt_nil_check(F->y_1597)).decl != NULL) && ((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_1597)).decl)).b != NULL))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->d_424)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P882)rt_nil_check((*(P889)rt_nil_check(F->d_424)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P889)rt_nil_check(F->d_424)).b != NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->d_424)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1600 != NULL)) {
F->found_1602 = RT_R_EUNDEF;
F->found_1602 = 0;
F->m_1598 = (*(P899)rt_nil_check(F->y_1597)).members;
while ((F->m_1598 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->m_1598)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->r_1600)).name))->all))) {
F->found_1602 = 1;
}
F->m_1598 = (*(P899)rt_nil_check(F->m_1598)).mnext;
}
if ((!rt_r_echk(F->found_1602))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->d_424)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->r_1600)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P882)rt_nil_check((*(P889)rt_nil_check(F->d_424)).name))->all)); b_; }));
}
F->r_1600 = (*(P889)rt_nil_check(F->r_1600)).next;
}
if ((rt_r_ichk((*(P889)rt_nil_check(F->d_424)).ival) == ((rt_int)1LL))) {
F->m_1598 = (*(P899)rt_nil_check(F->y_1597)).members;
while ((F->m_1598 != NULL)) {
F->z_1603 = NULL;
F->z_1603 = f_copy_sym_401(F->m_1598);
(*(P899)rt_nil_check(F->z_1603)).name = f_renamed_418(F->d_424, F->m_1598);
f_define_160(F->z_1603, rt_r_ichk((*(P889)rt_nil_check(F->d_424)).line));
F->m_1598 = (*(P899)rt_nil_check(F->m_1598)).mnext;
}
goto ret_;
}
while ((F->p_1599 != NULL)) {
F->found_1604 = RT_R_EUNDEF;
F->found_1604 = 0;
F->m_1598 = (*(P899)rt_nil_check(F->y_1597)).members;
while ((F->m_1598 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->m_1598)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1599)).name))->all))) {
F->z_1605 = NULL;
F->z_1605 = f_copy_sym_401(F->m_1598);
if ((rt_r_ichk((*(P889)rt_nil_check(F->p_1599)).ival) == ((rt_int)1LL))) {
(*(P899)rt_nil_check(F->z_1605)).ro_flag = 1;
}
(*(P899)rt_nil_check(F->z_1605)).name = f_renamed_418(F->d_424, F->m_1598);
f_define_160(F->z_1605, rt_r_ichk((*(P889)rt_nil_check(F->d_424)).line));
F->found_1604 = 1;
}
F->m_1598 = (*(P899)rt_nil_check(F->m_1598)).mnext;
}
if ((!rt_r_echk(F->found_1604))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->d_424)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1599)).name))->all), rt_str(" is not exported by ", 20)), (((P882)rt_nil_check((*(P889)rt_nil_check(F->d_424)).name))->all)); b_; }));
}
F->p_1599 = (*(P889)rt_nil_check(F->p_1599)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_427(P895 t_426) {
  struct f_finish_ptr_427fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_426 = t_426;
F->d_1606 = NULL;
F->d_1606 = (*(P895)rt_nil_check(F->t_426)).decl;
F->p_1607 = NULL;
F->c_1608 = NULL;
F->dummy_1609 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1609, rt_str(" ", 1));
if (((*(P895)rt_nil_check(F->t_426)).target != NULL)) {
goto ret_;
}
f_open_scope_169();
{ rt_int lo1611 = ((rt_int)1LL), hi1612 = ((rt_int)2LL);
for (rt_int it1613 = lo1611; it1613 <= hi1612; it1613++) {
F->pass_1610 = it1613;
if ((F->pass_1610 == ((rt_int)1LL))) {
F->p_1607 = (*(P889)rt_nil_check(F->d_1606)).d;
} else {
F->p_1607 = (*(P889)rt_nil_check(F->d_1606)).b;
}
while ((F->p_1607 != NULL)) {
F->y_1614 = NULL;
F->y_1614 = f_new_sym_173((((rt_int)2LL)), (*(P889)rt_nil_check(F->p_1607)).name);
F->pc_1615 = NULL;
(*(P899)rt_nil_check(F->y_1614)).t = f_resolve_subtype_257((*(P889)rt_nil_check(F->p_1607)).a, &F->pc_1615);
(*(P899)rt_nil_check(F->y_1614)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_160(F->y_1614, rt_r_ichk((*(P889)rt_nil_check(F->d_1606)).line));
F->p_1607 = (*(P889)rt_nil_check(F->p_1607)).next;
}
}
}
(*(P895)rt_nil_check(F->t_426)).target = f_resolve_subtype_257((*(P889)rt_nil_check(F->d_1606)).a, &F->c_1608);
f_close_scope_170();
(*rt_str_at(&F->dummy_1609, ((rt_int)1LL))) = rt_str_get(f_ctype_226(F->t_426), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1609, ((rt_int)1LL))) = rt_str_get(f_ctype_226((*(P895)rt_nil_check(F->t_426)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P889 f_ptr_args_429(P891 c_428) {
  struct f_ptr_args_429fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_428 = c_428;
if ((F->c_428 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P891)rt_nil_check(F->c_428)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_434(P889 formals_430, P889 actuals_431, rstr *cell_432, rt_int line_433) {
  struct f_bind_ptr_params_434fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_430 = formals_430;
F->actuals_431 = actuals_431;
F->cell_432 = cell_432;
F->line_433 = line_433;
F->p_1616 = NULL;
F->p_1616 = F->formals_430;
F->a_1617 = NULL;
F->a_1617 = F->actuals_431;
F->vt_1618 = NULL;
if ((f_list_len_67(F->formals_430) != f_list_len_67(F->actuals_431))) {
f_fail_23(F->line_433, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_67(F->formals_430))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1616 != NULL)) {
F->pc_1619 = NULL;
F->y_1620 = NULL;
F->y_1620 = f_new_sym_173((((rt_int)2LL)), (*(P889)rt_nil_check(F->p_1616)).name);
(*(P899)rt_nil_check(F->y_1620)).t = f_resolve_subtype_257((*(P889)rt_nil_check(F->p_1616)).a, &F->pc_1619);
{
F->v_1621 = rt_str_copy(f_gexpr_700(F->a_1617, (*(P899)rt_nil_check(F->y_1620)).t, &F->vt_1618));
F->pv_1622 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_224(F->vt_1618, (*(P899)rt_nil_check(F->y_1620)).t, F->line_433);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_226((*(P899)rt_nil_check(F->y_1620)).t), rt_str(" ", 1)), F->pv_1622), rt_str(" = ", 3)), f_checked_205((*(P899)rt_nil_check(F->y_1620)).t, F->pc_1619, &F->v_1621)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_432), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_432), rt_str("->p_", 4)), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1616)).name))->all))), rt_str(" = ", 3)), F->pv_1622), rt_str(";", 1)); b_; }));
}
(*(P899)rt_nil_check(F->y_1620)).access = f_mk_3(&F->pv_1622);
}
f_define_160(F->y_1620, F->line_433);
F->p_1616 = (*(P889)rt_nil_check(F->p_1616)).next;
F->a_1617 = (*(P889)rt_nil_check(F->a_1617)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_439(P889 s_435, rstr *lv_436, P895 t_437, P891 c_438) {
  struct f_alloc_cell_439fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_435 = s_435;
F->lv_436 = lv_436;
F->t_437 = t_437;
F->c_438 = c_438;
F->d_1623 = NULL;
F->d_1623 = (*(P895)rt_nil_check(F->t_437)).decl;
F->tc_1624 = NULL;
F->vt_1625 = NULL;
F->pt_1626 = rt_str_copy(f_ctype_226(F->t_437));
F->cell_1627 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_316((*(P895)rt_nil_check(F->t_437)).target)) {
F->fn_1628 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_950 = 1;
g_uses_findyn_952 = 1;
f_put_27(g_out_protos_934, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1628), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1628), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_941)) {
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P882)rt_nil_check((*(P899)rt_nil_check(g_func_sym_953)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1626), rt_str(")cell_)->all)", 13)); b_; }), (*(P895)rt_nil_check(F->t_437)).target)); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_941)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1626), rt_str(" ", 1)), F->cell_1627), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1627), rt_str(", ", 2)), F->fn_1628), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1626), rt_str(" ", 1)), F->cell_1627), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1627), rt_str(", ", 2)), F->fn_1628), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1626), rt_str(" ", 1)), F->cell_1627), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1627), rt_str(");", 2)); b_; }));
}
f_open_scope_169();
f_bind_ptr_params_434((*(P889)rt_nil_check(F->d_1623)).d, f_ptr_args_429(F->c_438), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P889)rt_nil_check(F->s_435)).line));
f_bind_ptr_params_434((*(P889)rt_nil_check(F->d_1623)).b, (*(P889)rt_nil_check(F->s_435)).b, &F->cell_1627, rt_r_ichk((*(P889)rt_nil_check(F->s_435)).line));
F->vt_1625 = f_resolve_subtype_257((*(P889)rt_nil_check(F->d_1623)).a, &F->tc_1624);
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1627, rt_str("->all", 5)); b_; }), (*(P895)rt_nil_check(F->t_437)).target, F->tc_1624);
f_close_scope_170();
if (((*(P889)rt_nil_check(F->s_435)).c != NULL)) {
F->v_1629 = rt_str_copy(f_gexpr_in_708((*(P889)rt_nil_check(F->s_435)).c, (*(P895)rt_nil_check(F->t_437)).target, F->tc_1624, &F->vt_1625));
f_check_type_224(F->vt_1625, (*(P895)rt_nil_check(F->t_437)).target, rt_r_ichk((*(P889)rt_nil_check(F->s_435)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_374(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1627, rt_str("->all", 5)); b_; }), (*(P895)rt_nil_check(F->t_437)).target, &F->v_1629, F->tc_1624); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_436), rt_str(" = ", 3)), F->cell_1627), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P891 f_freeze_args_443(P891 c_440, P895 t_441, rt_int line_442) {
  struct f_freeze_args_443fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_440 = c_440;
F->t_441 = t_441;
F->line_442 = line_442;
F->r_1630 = NULL;
F->r_1630 = f_copy_cons_198(F->c_440);
F->p_1631 = NULL;
F->p_1631 = (*(P889)rt_nil_check((*(P895)rt_nil_check(F->t_441)).decl)).d;
F->a_1632 = NULL;
F->a_1632 = (*(P891)rt_nil_check(F->c_440)).args;
F->head_1633 = NULL;
F->tail_1634 = NULL;
F->saved_1635 = NULL;
F->saved_1635 = g_st_field_947;
if ((f_list_len_67(F->p_1631) != f_list_len_67(F->a_1632))) {
f_fail_23(F->line_442, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check((*(P895)rt_nil_check(F->t_441)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1631))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1632 != NULL)) {
F->pc_1636 = NULL;
F->vt_1637 = NULL;
F->pt_1638 = NULL;
F->pt_1638 = f_resolve_subtype_257((*(P889)rt_nil_check(F->p_1631)).a, &F->pc_1636);
F->nm_1639 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1640 = NULL;
F->y_1640 = f_new_sym_173((((rt_int)2LL)), f_mk_3(&F->nm_1639));
F->n_1641 = NULL;
F->n_1641 = f_nn_61((((rt_int)7LL)), F->line_442);
F->v_1642 = rt_str_copy(f_gexpr_700(F->a_1632, F->pt_1638, &F->vt_1637));
F->access_1643 = rt_str_copy(f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_226(F->pt_1638); b_; })));
f_check_type_224(F->vt_1637, F->pt_1638, F->line_442);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1643, rt_str(" = ", 3)), f_checked_205(F->pt_1638, F->pc_1636, &F->v_1642)), rt_str(";", 1)); b_; }));
(*(P899)rt_nil_check(F->y_1640)).t = F->pt_1638;
(*(P899)rt_nil_check(F->y_1640)).ro_flag = 1;
f_bind_471(F->y_1640, &F->access_1643);
f_define_160(F->y_1640, F->line_442);
(*(P889)rt_nil_check(F->n_1641)).name = f_mk_3(&F->nm_1639);
f_append_65(&F->head_1633, &F->tail_1634, F->n_1641);
F->a_1632 = (*(P889)rt_nil_check(F->a_1632)).next;
F->p_1631 = (*(P889)rt_nil_check(F->p_1631)).next;
}
(*(P891)rt_nil_check(F->r_1630)).args = F->head_1633;
g_st_field_947 = F->saved_1635;
F->result_ = F->r_1630;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_447(P895 t_444, P891 c_445, P889 src_446) {
  struct f_ptr_subtype_check_447fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_444 = t_444;
F->c_445 = c_445;
F->src_446 = src_446;
F->lv_1644 = NULL;
F->st_1645 = NULL;
F->sc_1646 = NULL;
F->ro_1647 = RT_R_EUNDEF;
F->cond_1648 = NULL;
F->cond_1648 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1649 = NULL;
F->b_1650 = NULL;
F->at_1651 = NULL;
F->bt_1652 = NULL;
if ((((((rt_r_ichk((*(P895)rt_nil_check(F->t_444)).kind) != (((rt_int)8LL))) || (F->c_445 == NULL)) || ((*(P891)rt_nil_check(F->c_445)).args == NULL)) || (F->src_446 == NULL)) || (!f_is_lvalue_663(F->src_446)))) {
goto ret_;
}
f_lvalue_669(F->src_446, &F->lv_1644, &F->st_1645, &F->sc_1646, &F->ro_1647);
if (((F->sc_1646 == NULL) || ((*(P891)rt_nil_check(F->sc_1646)).args == NULL))) {
goto ret_;
}
F->a_1649 = (*(P891)rt_nil_check(F->c_445)).args;
F->b_1650 = (*(P891)rt_nil_check(F->sc_1646)).args;
while (((F->a_1649 != NULL) && (F->b_1650 != NULL))) {
F->x_1653 = rt_str_copy(f_gexpr_700(F->a_1649, NULL, &F->at_1651));
F->y_1654 = rt_str_copy(f_gexpr_700(F->b_1650, F->at_1651, &F->bt_1652));
F->cond_1648 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->cond_1648))->all), rt_str(" || !", 5)), f_eq_code_381(F->at_1651, &F->x_1653, &F->y_1654)); b_; }));
F->a_1649 = (*(P889)rt_nil_check(F->a_1649)).next;
F->b_1650 = (*(P889)rt_nil_check(F->b_1650)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P882)rt_nil_check(F->cond_1648))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_normal_function_450(P889 d_448, P899 y_449) {
  struct f_normal_function_450fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_448 = d_448;
F->y_449 = y_449;
F->p_1655 = NULL;
F->p_1655 = (*(P899)rt_nil_check(F->y_449)).params;
F->imp_1656 = NULL;
F->imp_1656 = (*(P889)rt_nil_check(F->d_448)).d;
if (((rt_r_ichk((*(P889)rt_nil_check(F->d_448)).kind) != (((rt_int)46LL))) || (rt_mod(rt_r_ichk((*(P889)rt_nil_check(F->d_448)).flag), ((rt_int)2LL)) == ((rt_int)1LL)))) {
goto ret_;
}
while ((F->p_1655 != NULL)) {
if (((rt_r_ichk((*(P901)rt_nil_check(F->p_1655)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P901)rt_nil_check(F->p_1655)).mode) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->d_448)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may have only CONST and READONLY formal parameters: ", 70), (((P882)rt_nil_check((*(P889)rt_nil_check(F->d_448)).name))->all)); b_; }));
}
F->p_1655 = (*(P901)rt_nil_check(F->p_1655)).next;
}
if ((((*(P889)rt_nil_check(F->d_448)).d == NULL) && (rt_r_ichk((*(P889)rt_nil_check(F->d_448)).flag) < ((rt_int)2LL)))) {
goto ret_;
}
if (((g_caps_944 == NULL) || (rt_r_ichk(g_depth_928) != rt_r_ichk((*(P916)rt_nil_check(g_caps_944)).depth)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->d_448)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function with an imports list must be local to a capsule body: ", 72), (((P882)rt_nil_check((*(P889)rt_nil_check(F->d_448)).name))->all)); b_; }));
}
while ((F->imp_1656 != NULL)) {
F->ro_1657 = RT_R_EUNDEF;
F->z_1658 = NULL;
F->z_1658 = f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->imp_1656)).name))->all));
if ((((F->z_1658 != NULL) && (rt_r_ichk((*(P899)rt_nil_check(F->z_1658)).kind) == (((rt_int)1LL)))) && (rt_r_ichk((*(P899)rt_nil_check(F->z_1658)).depth) != rt_r_ichk((*(P916)rt_nil_check(g_caps_944)).depth)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->d_448)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function imports only variables of its capsule body: ", 62), (((P882)rt_nil_check((*(P889)rt_nil_check(F->imp_1656)).name))->all)); b_; }));
}
if ((f_exported_399((*(P916)rt_nil_check(g_caps_944)).d, &(((P882)rt_nil_check((*(P889)rt_nil_check(F->imp_1656)).name))->all), &F->ro_1657) && (rt_r_ichk((*(P889)rt_nil_check((*(P916)rt_nil_check(g_caps_944)).d)).ival) != ((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->d_448)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may not import an exported variable: ", 55), (((P882)rt_nil_check((*(P889)rt_nil_check(F->imp_1656)).name))->all)); b_; }));
}
F->imp_1656 = (*(P889)rt_nil_check(F->imp_1656)).next;
}
(*(P899)rt_nil_check(F->y_449)).capn = (*(P916)rt_nil_check(g_caps_944)).d;
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_452(P889 d_451) {
  struct f_declare_subprogram_452fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_451 = d_451;
f_define_160(f_build_subprogram_454(F->d_451), rt_r_ichk((*(P889)rt_nil_check(F->d_451)).line));
ret_:
  RT_FPOP();
  return;
}

static P899 f_build_subprogram_454(P889 d_453) {
  struct f_build_subprogram_454fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_453 = d_453;
F->y_1659 = NULL;
F->p_1660 = NULL;
F->p_1660 = (*(P889)rt_nil_check(F->d_453)).a;
F->tail_1661 = NULL;
if ((rt_r_ichk((*(P889)rt_nil_check(F->d_453)).kind) == (((rt_int)46LL)))) {
F->y_1659 = f_new_sym_173((((rt_int)3LL)), (*(P889)rt_nil_check(F->d_453)).name);
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->d_453)).kind) == (((rt_int)50LL)))) {
F->y_1659 = f_new_sym_173((((rt_int)9LL)), (*(P889)rt_nil_check(F->d_453)).name);
} else {
F->y_1659 = f_new_sym_173((((rt_int)4LL)), (*(P889)rt_nil_check(F->d_453)).name);
}
while ((F->p_1660 != NULL)) {
F->pm_1662 = NULL;
if (((rt_r_ichk((*(P889)rt_nil_check(F->d_453)).kind) == (((rt_int)50LL))) && (rt_r_ichk((*(P889)rt_nil_check(F->p_1660)).ival) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->d_453)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a task may not have OUT formal parameters", 41); b_; }));
}
{ R902 *cell1663 = rt_alloc(sizeof(R902));
(*cell1663).name = NULL;
(*cell1663).t = NULL;
(*cell1663).c = NULL;
(*cell1663).cfield = NULL;
(*cell1663).next = NULL;
F->pm_1662 = cell1663;
}
(*(P901)rt_nil_check(F->pm_1662)).name = (*(P889)rt_nil_check(F->p_1660)).name;
(*(P901)rt_nil_check(F->pm_1662)).mode = rt_r_ichk((*(P889)rt_nil_check(F->p_1660)).ival);
(*(P901)rt_nil_check(F->pm_1662)).t = f_resolve_subtype_257((*(P889)rt_nil_check(F->p_1660)).a, &(*(P901)rt_nil_check(F->pm_1662)).c);
(*(P901)rt_nil_check(F->pm_1662)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1660)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1661 == NULL)) {
(*(P899)rt_nil_check(F->y_1659)).params = F->pm_1662;
} else {
(*(P901)rt_nil_check(F->tail_1661)).next = F->pm_1662;
}
F->tail_1661 = F->pm_1662;
F->p_1660 = (*(P889)rt_nil_check(F->p_1660)).next;
}
(*(P899)rt_nil_check(F->y_1659)).result = g_ty_void_974;
if (((*(P889)rt_nil_check(F->d_453)).b != NULL)) {
F->rc_1664 = NULL;
F->pm_1665 = NULL;
F->pm_1665 = (*(P899)rt_nil_check(F->y_1659)).params;
F->saved_1666 = NULL;
F->saved_1666 = g_code_939;
g_code_939 = f_new_buffer_24();
f_open_scope_169();
while ((F->pm_1665 != NULL)) {
F->z_1667 = NULL;
F->z_1667 = f_new_sym_173((((rt_int)2LL)), (*(P901)rt_nil_check(F->pm_1665)).name);
(*(P899)rt_nil_check(F->z_1667)).t = (*(P901)rt_nil_check(F->pm_1665)).t;
(*(P899)rt_nil_check(F->z_1667)).c = (*(P901)rt_nil_check(F->pm_1665)).c;
(*(P899)rt_nil_check(F->z_1667)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_160(F->z_1667, rt_r_ichk((*(P889)rt_nil_check(F->d_453)).line));
F->pm_1665 = (*(P901)rt_nil_check(F->pm_1665)).next;
}
(*(P899)rt_nil_check(F->y_1659)).result = f_resolve_subtype_257((*(P889)rt_nil_check(F->d_453)).b, &F->rc_1664);
f_close_scope_170();
g_code_939 = F->saved_1666;
}
(*(P899)rt_nil_check(F->y_1659)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_655(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->d_453)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P899)rt_nil_check(F->y_1659)).decl = F->d_453;
(*(P899)rt_nil_check(F->y_1659)).level = rt_r_ichk(g_cur_level_942);
if ((rt_r_ichk((*(P889)rt_nil_check(F->d_453)).kind) == (((rt_int)50LL)))) {
f_put_27(g_out_globals_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_1659)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1659;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_457(P882 pr_455, rstr *p_456) {
  struct f_has_pragmat_457fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_455 = pr_455;
F->p_456 = p_456;
if ((F->pr_455 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1669 = ((rt_int)1LL), hi1670 = rt_sub(((rt_int)(((((P882)rt_nil_check(F->pr_455))->all)).len)), ((rt_int)(((*F->p_456)).len)));
for (rt_int it1671 = lo1669; it1671 <= hi1670; it1671++) {
F->i_1668 = it1671;
if (((rt_str_eq(rt_str_slice((((P882)rt_nil_check(F->pr_455))->all), F->i_1668, rt_sub(rt_add(F->i_1668, ((rt_int)(((*F->p_456)).len))), ((rt_int)1LL))), (*F->p_456)) && (rt_r_echk(rt_str_get((((P882)rt_nil_check(F->pr_455))->all), rt_add(F->i_1668, ((rt_int)(((*F->p_456)).len))))) == 59)) && ((F->i_1668 == ((rt_int)1LL)) || (rt_r_echk(rt_str_get((((P882)rt_nil_check(F->pr_455))->all), rt_sub(F->i_1668, ((rt_int)1LL)))) == 59)))) {
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

static P882 f_suppressing_459(P882 pr_458) {
  struct f_suppressing_459fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_458 = pr_458;
F->r_1672 = NULL;
F->r_1672 = g_suppress_959;
F->i_1673 = RT_R_IUNDEF;
F->i_1673 = ((rt_int)1LL);
if ((F->pr_458 == NULL)) {
F->result_ = F->r_1672;
goto ret_;
}
if ((F->r_1672 == NULL)) {
F->r_1672 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(rt_r_ichk(F->i_1673), ((rt_int)9LL)) <= ((rt_int)(((((P882)rt_nil_check(F->pr_458))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P882)rt_nil_check(F->pr_458))->all), rt_r_ichk(F->i_1673), rt_add(rt_r_ichk(F->i_1673), ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1674 = RT_R_IUNDEF;
F->j_1674 = rt_add(rt_r_ichk(F->i_1673), ((rt_int)9LL));
F->k_1675 = RT_R_IUNDEF;
F->k_1675 = rt_r_ichk(F->j_1674);
while ((rt_r_echk(rt_str_get((((P882)rt_nil_check(F->pr_458))->all), rt_r_ichk(F->k_1675))) != 41)) {
if ((rt_r_echk(rt_str_get((((P882)rt_nil_check(F->pr_458))->all), rt_r_ichk(F->k_1675))) == 44)) {
F->r_1672 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_1672))->all), rt_str_slice((((P882)rt_nil_check(F->pr_458))->all), rt_r_ichk(F->j_1674), rt_sub(rt_r_ichk(F->k_1675), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1674 = rt_add(rt_r_ichk(F->k_1675), ((rt_int)1LL));
}
F->k_1675 = rt_add(rt_r_ichk(F->k_1675), ((rt_int)1LL));
}
F->r_1672 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_1672))->all), rt_str_slice((((P882)rt_nil_check(F->pr_458))->all), rt_r_ichk(F->j_1674), rt_sub(rt_r_ichk(F->k_1675), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1673 = rt_r_ichk(F->k_1675);
}
F->i_1673 = rt_add(rt_r_ichk(F->i_1673), ((rt_int)1LL));
}
F->result_ = F->r_1672;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_461(rstr *x_460) {
  struct f_suppressed_461fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_460 = x_460;
F->w_1676 = rt_str_new(rt_add(((rt_int)(((*F->x_460)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1676, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_460)), rt_str(" ", 1)));
if ((g_suppress_959 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1678 = ((rt_int)1LL), hi1679 = rt_add(rt_sub(((rt_int)(((((P882)rt_nil_check(g_suppress_959))->all)).len)), ((rt_int)((F->w_1676).len))), ((rt_int)1LL));
for (rt_int it1680 = lo1678; it1680 <= hi1679; it1680++) {
F->i_1677 = it1680;
if (rt_str_eq(rt_str_slice((((P882)rt_nil_check(g_suppress_959))->all), F->i_1677, rt_sub(rt_add(F->i_1677, ((rt_int)((F->w_1676).len))), ((rt_int)1LL))), F->w_1676)) {
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

static void f_element_463(P889 e_462) {
  struct f_element_463fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_462 = e_462;
F->saved_1681 = NULL;
F->saved_1681 = g_suppress_959;
g_suppress_959 = f_suppressing_459((*(P889)rt_nil_check(F->e_462)).prags);
f_element1_465(F->e_462);
g_suppress_959 = F->saved_1681;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_465(P889 e_464) {
  struct f_element1_465fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_464 = e_464;
F->k_1682 = RT_R_IUNDEF;
F->k_1682 = rt_r_ichk((*(P889)rt_nil_check(F->e_464)).kind);
if (((rt_r_ichk(F->k_1682) == (((rt_int)48LL))) && ((rt_r_ichk((*(P889)rt_nil_check(F->e_464)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P889)rt_nil_check(F->e_464)).flag) == ((rt_int)3LL))))) {
f_gen_expose_425(F->e_464);
} else if ((((rt_r_ichk(F->k_1682) == (((rt_int)45LL))) || (rt_r_ichk(F->k_1682) == (((rt_int)46LL)))) || (rt_r_ichk(F->k_1682) == (((rt_int)50LL))))) {
f_subprogram_481(F->e_464);
} else if ((rt_r_ichk(F->k_1682) == (((rt_int)51LL)))) {
F->g_1683 = NULL;
F->g_1683 = f_lookup_decl_157(F->e_464);
if ((F->g_1683 != NULL)) {
{ P903 cell1684 = rt_alloc(sizeof *cell1684);
rt_int pv1685 = (((rt_int)4093LL));
cell1684->p_n = pv1685;
cell1684->all.lo = ((rt_int)0LL); cell1684->all.hi = pv1685;
cell1684->all.lo2 = cell1684->all.hi2 = 1;
cell1684->all.p = rt_alloc(sizeof(P899) * (size_t)(RT_CNT(cell1684->all)) + 1);
for (rt_int i1686 = 0; i1686 < (RT_CNT(cell1684->all)); i1686++) {
cell1684->all.p[i1686] = NULL;
}
(*(P899)rt_nil_check(F->g_1683)).env = cell1684;
}
{ rt_int lo1688 = ((rt_int)0LL), hi1689 = (((rt_int)4093LL));
for (rt_int it1690 = lo1688; it1690 <= hi1689; it1690++) {
F->i_1687 = it1690;
(((P903)rt_nil_check((*(P899)rt_nil_check(F->g_1683)).env))->all).p[(rt_index(F->i_1687, (((P903)rt_nil_check((*(P899)rt_nil_check(F->g_1683)).env))->all).lo, (((P903)rt_nil_check((*(P899)rt_nil_check(F->g_1683)).env))->all).hi) - (((P903)rt_nil_check((*(P899)rt_nil_check(F->g_1683)).env))->all).lo)] = ({ A905 b_ = (((P903)rt_nil_check(g_table_925))->all); b_.p[(rt_index(F->i_1687, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((((rt_r_ichk(F->k_1682) == (((rt_int)49LL))) || (rt_r_ichk(F->k_1682) == (((rt_int)42LL)))) || (rt_r_ichk(F->k_1682) == (((rt_int)43LL)))) || (rt_r_ichk(F->k_1682) == (((rt_int)47LL)))) || (rt_r_ichk(F->k_1682) == (((rt_int)48LL))))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1682) == (((rt_int)44LL)))) {
f_finish_ptr_427((*(P899)rt_nil_check(f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_464)).name))->all)))).t);
} else if ((rt_r_ichk(F->k_1682) == (((rt_int)40LL)))) {
f_var_decl_473(F->e_464);
} else if (((rt_r_ichk(F->k_1682) == (((rt_int)41LL))) && (rt_r_ichk((*(P889)rt_nil_check(F->e_464)).flag) == ((rt_int)0LL)))) {
f_const_decl_479(F->e_464);
} else if ((rt_r_ichk(F->k_1682) == (((rt_int)41LL)))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1682) == (((rt_int)33LL)))) {
F->t_1691 = NULL;
F->c_1692 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_464)).a, g_ty_bool_970, &F->t_1691));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1692), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_516(F->e_464);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_468(rstr *name_466, P895 t_467) {
  struct f_storage_468fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_466 = name_466;
F->t_467 = t_467;
if ((!rt_r_echk(g_in_func_941))) {
F->g_1693 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_466))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_226(F->t_467)), rt_str(" ", 1)), F->g_1693), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_949, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1693), rt_str(");", 2)); b_; }));
g_st_field_947 = f_mk_3(&F->g_1693);
F->result_ = F->g_1693;
goto ret_;
}
{
F->f_1694 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_466)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_226(F->t_467)), rt_str(" ", 1)), F->f_1694), rt_str(";", 1)); b_; }));
g_st_field_947 = f_mk_3(&F->f_1694);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1694);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_471(P899 y_469, rstr *access_470) {
  struct f_bind_471fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_469 = y_469;
F->access_470 = access_470;
if (rt_r_echk(g_in_func_941)) {
(*(P899)rt_nil_check(F->y_469)).level = rt_r_ichk(g_cur_level_942);
(*(P899)rt_nil_check(F->y_469)).access = g_st_field_947;
} else {
(*(P899)rt_nil_check(F->y_469)).level = ((rt_int)0LL);
(*(P899)rt_nil_check(F->y_469)).access = f_mk_3(&(*F->access_470));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_473(P889 d_472) {
  struct f_var_decl_473fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_472 = d_472;
F->c_1695 = NULL;
F->t_1696 = NULL;
F->t_1696 = f_resolve_subtype_257((*(P889)rt_nil_check(F->d_472)).a, &F->c_1695);
F->y_1697 = NULL;
F->y_1697 = f_new_sym_173((((rt_int)1LL)), (*(P889)rt_nil_check(F->d_472)).name);
F->access_1698 = rt_str_copy(f_storage_468(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->d_472)).name))->all), F->t_1696));
F->c_1695 = f_freeze_201(F->c_1695, F->t_1696);
if ((((rt_r_ichk((*(P895)rt_nil_check(F->t_1696)).kind) == (((rt_int)8LL))) && (F->c_1695 != NULL)) && ((*(P891)rt_nil_check(F->c_1695)).args != NULL))) {
F->c_1695 = f_freeze_args_443(F->c_1695, F->t_1696, rt_r_ichk((*(P889)rt_nil_check(F->d_472)).line));
}
g_mark_uninit_961 = 1;
f_init_storage_311(&F->access_1698, F->t_1696, F->c_1695);
g_mark_uninit_961 = 0;
if ((rt_r_ichk((*(P889)rt_nil_check(F->d_472)).ival) == ((rt_int)1LL))) {
F->it_1699 = NULL;
F->n_1700 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->d_472)).c, g_ty_int_969, &F->it_1699));
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_1696)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->d_472)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_213((*(P895)rt_nil_check(F->t_1696)).elem, g_ty_ascii_972)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1698), rt_str(", ", 2)), F->n_1700), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1698), rt_str(", ", 2)), F->n_1700), rt_str(", 0);", 5)); b_; }));
}
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->d_472)).ival) == ((rt_int)2LL))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->d_472)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P889)rt_nil_check(F->d_472)).b != NULL)) {
F->vt_1701 = NULL;
F->v_1702 = rt_str_copy(f_gexpr_in_708((*(P889)rt_nil_check(F->d_472)).b, F->t_1696, F->c_1695, &F->vt_1701));
f_check_type_224(F->vt_1701, F->t_1696, rt_r_ichk((*(P889)rt_nil_check(F->d_472)).line));
f_ptr_subtype_check_447(F->t_1696, F->c_1695, (*(P889)rt_nil_check(F->d_472)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_374(&F->access_1698, F->t_1696, &F->v_1702, F->c_1695); b_; }));
}
(*(P899)rt_nil_check(F->y_1697)).t = F->t_1696;
(*(P899)rt_nil_check(F->y_1697)).c = F->c_1695;
f_bind_471(F->y_1697, &F->access_1698);
f_define_160(F->y_1697, rt_r_ichk((*(P889)rt_nil_check(F->d_472)).line));
if (f_needs_fin_316(F->t_1696)) {
f_open_fin_475(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_319(&F->access_1698, F->t_1696); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_475(rstr *fc_474) {
  struct f_open_fin_475fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_474 = fc_474;
F->f_1703 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1704 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1703), rt_str("; if (RT_TRY(", 13)), F->f_1703), rt_str(")) {", 4)); b_; }));
f_push_cleanup_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1703), rt_str("); ", 3)), (*F->fc_474)); b_; }));
{ R894 *cell1705 = rt_alloc(sizeof(R894));
(*cell1705).s = NULL;
(*cell1705).next = NULL;
F->l_1704 = cell1705;
}
(*(P893)rt_nil_check(F->l_1704)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1703), rt_str("); ", 3)), (*F->fc_474)), rt_str(" } else { RT_POP(", 17)), F->f_1703), rt_str("); ", 3)), (*F->fc_474)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P893)rt_nil_check(F->l_1704)).next = g_fins_951;
g_fins_951 = F->l_1704;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_477(P893 saved_476) {
  struct f_close_fins_477fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_476 = saved_476;
while (((g_fins_951 != F->saved_476) && (g_fins_951 != NULL))) {
f_emit_29(&(((P882)rt_nil_check((*(P893)rt_nil_check(g_fins_951)).s))->all));
f_pop_cleanup_514();
g_fins_951 = (*(P893)rt_nil_check(g_fins_951)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_479(P889 d_478) {
  struct f_const_decl_479fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_478 = d_478;
F->c_1706 = NULL;
F->c_1706 = f_new_cons_176();
F->t_1707 = NULL;
F->vt_1708 = NULL;
F->y_1709 = NULL;
F->y_1709 = f_new_sym_173((((rt_int)2LL)), (*(P889)rt_nil_check(F->d_478)).name);
F->ok_1710 = RT_R_EUNDEF;
if (((*(P889)rt_nil_check(F->d_478)).a != NULL)) {
F->t_1707 = f_resolve_subtype_257((*(P889)rt_nil_check(F->d_478)).a, &F->c_1706);
}
{
F->v_1711 = rt_str_copy(f_gexpr_in_708((*(P889)rt_nil_check(F->d_478)).b, F->t_1707, F->c_1706, &F->vt_1708));
if ((F->t_1707 != NULL)) {
f_check_type_224(F->vt_1708, F->t_1707, rt_r_ichk((*(P889)rt_nil_check(F->d_478)).line));
} else {
F->t_1707 = F->vt_1708;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_1707)).kind) == (((rt_int)1LL)))) {
(*(P899)rt_nil_check(F->y_1709)).mvalue = f_manifest_334((*(P889)rt_nil_check(F->d_478)).b, &F->ok_1710);
(*(P899)rt_nil_check(F->y_1709)).hasmv = rt_r_echk(F->ok_1710);
}
{
F->access_1712 = rt_str_copy(f_storage_468(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->d_478)).name))->all), F->t_1707));
if (((*(P895)rt_nil_check(F->t_1707)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_314((*(P895)rt_nil_check(F->t_1707)).initp, &F->access_1712); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1712, rt_str(" = ", 3)), f_checked_205(F->t_1707, F->c_1706, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_377(F->t_1707, &F->v_1711); b_; }))), rt_str(";", 1)); b_; }));
f_bind_471(F->y_1709, &F->access_1712);
if (f_needs_fin_316(F->t_1707)) {
f_open_fin_475(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_319(&F->access_1712, F->t_1707); b_; }));
}
}
}
(*(P899)rt_nil_check(F->y_1709)).t = F->t_1707;
(*(P899)rt_nil_check(F->y_1709)).c = F->c_1706;
(*(P899)rt_nil_check(F->y_1709)).ro_flag = 1;
f_define_160(F->y_1709, rt_r_ichk((*(P889)rt_nil_check(F->d_478)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_481(P889 d_480) {
  struct f_subprogram_481fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_480 = d_480;
f_gen_subprogram_484(F->d_480, f_lookup_decl_157(F->d_480));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_484(P889 d_482, P899 y_483) {
  struct f_gen_subprogram_484fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_482 = d_482;
F->y_483 = y_483;
F->saved_code_1713 = NULL;
F->saved_code_1713 = g_code_939;
F->saved_fields_1714 = NULL;
F->saved_fields_1714 = g_fields_buf_940;
F->saved_in_1715 = RT_R_EUNDEF;
F->saved_in_1715 = rt_r_echk(g_in_func_941);
F->saved_sym_1716 = NULL;
F->saved_sym_1716 = g_func_sym_953;
F->saved_exits_1717 = NULL;
F->saved_exits_1717 = g_exits_962;
F->saved_gotos_1718 = NULL;
F->saved_gotos_1718 = g_gotos_963;
F->saved_frames_1719 = RT_R_IUNDEF;
F->saved_frames_1719 = rt_r_ichk(g_frames_964);
F->args_1720 = NULL;
F->args_1720 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1721 = NULL;
F->pm_1721 = (*(P899)rt_nil_check(F->y_483)).params;
F->saved_handlers_1722 = NULL;
F->saved_handlers_1722 = g_handlers_965;
F->saved_cleanups_1723 = NULL;
F->saved_cleanups_1723 = g_cleanups_966;
F->ctx_1724 = NULL;
F->head_1725 = NULL;
F->frame_1726 = NULL;
F->frame_1726 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_483)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_1727 = NULL;
F->copy_back_1728 = NULL;
F->copy_back_1728 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1729 = NULL;
F->pfin_1729 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1730 = NULL;
F->saved_fins_1730 = g_fins_951;
F->saved_rc_1731 = NULL;
F->saved_rc_1731 = g_func_rc_954;
F->saved_ret_1732 = NULL;
F->saved_ret_1732 = g_cap_ret_955;
F->saved_rflag_1733 = NULL;
F->saved_rflag_1733 = g_cap_rflag_956;
F->pn_1734 = NULL;
F->pn_1734 = (*(P889)rt_nil_check(F->d_482)).a;
F->nonrec_end_1735 = NULL;
F->has_pfin_1736 = RT_R_EUNDEF;
if (rt_r_echk(g_in_func_941)) {
F->parent_1727 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P899)rt_nil_check(g_func_sym_953)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_951 = NULL;
g_func_rc_954 = NULL;
g_cap_ret_955 = NULL;
g_cap_rflag_956 = NULL;
g_code_939 = f_new_buffer_24();
g_fields_buf_940 = f_new_buffer_24();
g_in_func_941 = 1;
g_func_sym_953 = F->y_483;
g_exits_962 = NULL;
g_gotos_963 = NULL;
g_frames_964 = ((rt_int)0LL);
g_handlers_965 = NULL;
g_cleanups_966 = NULL;
g_cur_level_942 = rt_add(rt_r_ichk(g_cur_level_942), ((rt_int)1LL));
f_open_scope_169();
{ R907 *cell1737 = rt_alloc(sizeof(R907));
(*cell1737).imps = NULL;
(*cell1737).next = NULL;
F->ctx_1724 = cell1737;
}
(*(P906)rt_nil_check(F->ctx_1724)).depth = rt_r_ichk(g_depth_928);
(*(P906)rt_nil_check(F->ctx_1724)).imps = (*(P889)rt_nil_check(F->d_482)).d;
(*(P906)rt_nil_check(F->ctx_1724)).all_imp = (rt_r_ichk((*(P889)rt_nil_check(F->d_482)).flag) >= ((rt_int)2LL));
(*(P906)rt_nil_check(F->ctx_1724)).next = g_fctx_943;
g_fctx_943 = F->ctx_1724;
if ((F->parent_1727 != NULL)) {
f_put_27(g_fields_buf_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P882)rt_nil_check(F->parent_1727))->all)), rt_str(" *up;", 5)); b_; }));
if ((rt_r_ichk((*(P899)rt_nil_check(F->y_483)).kind) != (((rt_int)9LL)))) {
F->args_1720 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P882)rt_nil_check(F->parent_1727))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1721 != NULL)) {
F->ct_1738 = rt_str_copy(f_ctype_226((*(P901)rt_nil_check(F->pm_1721)).t));
F->f_1739 = rt_str_copy((((P882)rt_nil_check((*(P901)rt_nil_check(F->pm_1721)).cfield))->all));
F->p_1740 = NULL;
F->pc_1741 = NULL;
F->pc_1741 = (*(P901)rt_nil_check(F->pm_1721)).c;
F->ac_1742 = NULL;
if ((((rt_int)(((((P882)rt_nil_check(F->args_1720))->all)).len)) > ((rt_int)0LL))) {
F->args_1720 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->args_1720))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_178((*(P901)rt_nil_check(F->pm_1721)).t)) {
F->fc_1743 = NULL;
F->ft_1744 = NULL;
F->ft_1744 = f_resolve_subtype_257((*(P889)rt_nil_check(F->pn_1734)).a, &F->fc_1743);
F->pc_1741 = f_freeze_201(F->fc_1743, (*(P901)rt_nil_check(F->pm_1721)).t);
}
if ((rt_r_ichk((*(P901)rt_nil_check(F->pm_1721)).mode) == (((rt_int)1LL)))) {
F->p_1740 = f_new_sym_173((((rt_int)2LL)), (*(P901)rt_nil_check(F->pm_1721)).name);
f_put_27(g_fields_buf_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1738), rt_str(" ", 1)), F->f_1739), rt_str(";", 1)); b_; }));
F->args_1720 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->args_1720))->all), F->ct_1738), rt_str(" ", 1)), F->f_1739); b_; }));
(*(P899)rt_nil_check(F->p_1740)).access = f_mk_3(&F->f_1739);
if ((rt_r_ichk((*(P899)rt_nil_check(F->y_483)).kind) != (((rt_int)9LL)))) {
if (((*(P895)rt_nil_check((*(P901)rt_nil_check(F->pm_1721)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_314((*(P895)rt_nil_check((*(P901)rt_nil_check(F->pm_1721)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1739); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1739), rt_str(" = ", 3)), f_checked_205((*(P901)rt_nil_check(F->pm_1721)).t, F->pc_1741, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_377((*(P901)rt_nil_check(F->pm_1721)).t, &F->f_1739); b_; }))), rt_str(";", 1)); b_; }));
if (f_needs_fin_316((*(P901)rt_nil_check(F->pm_1721)).t)) {
F->pfin_1729 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->pfin_1729))->all), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1739); b_; }), (*(P901)rt_nil_check(F->pm_1721)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1740 = f_new_sym_173((((rt_int)1LL)), (*(P901)rt_nil_check(F->pm_1721)).name);
f_put_27(g_fields_buf_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1738), rt_str(" *", 2)), F->f_1739), rt_str(";", 1)); b_; }));
F->args_1720 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->args_1720))->all), F->ct_1738), rt_str(" *", 2)), F->f_1739); b_; }));
(*(P899)rt_nil_check(F->p_1740)).access = f_mk_3(&F->f_1739);
(*(P899)rt_nil_check(F->p_1740)).byref = 1;
if ((rt_r_ichk((*(P899)rt_nil_check(F->y_483)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1739), rt_str(" = ", 3)), F->f_1739), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_178((*(P901)rt_nil_check(F->pm_1721)).t)) {
F->bt_1745 = rt_str_copy(f_bound_ctype_180((*(P901)rt_nil_check(F->pm_1721)).t));
f_put_27(g_fields_buf_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_1745), rt_str(" ", 1)), F->f_1739), rt_str("lo, ", 4)), F->f_1739), rt_str("hi;", 3)); b_; }));
F->args_1720 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->args_1720))->all), rt_str(", ", 2)), F->bt_1745), rt_str(" ", 1)), F->f_1739), rt_str("lo, ", 4)), F->bt_1745), rt_str(" ", 1)), F->f_1739), rt_str("hi", 2)); b_; }));
if ((rt_r_ichk((*(P899)rt_nil_check(F->y_483)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1739), rt_str("lo = ", 5)), F->f_1739), rt_str("lo; F->", 7)), F->f_1739), rt_str("hi = ", 5)), F->f_1739), rt_str("hi;", 3)); b_; }));
}
F->ac_1742 = f_new_cons_176();
(*(P891)rt_nil_check(F->ac_1742)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1739, rt_str("lo", 2)); b_; }));
(*(P891)rt_nil_check(F->ac_1742)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1739, rt_str("hi", 2)); b_; }));
(*(P891)rt_nil_check(F->ac_1742)).dyn = 1;
(*(P891)rt_nil_check(F->ac_1742)).lvl = rt_r_ichk(g_cur_level_942);
if (((F->pc_1741 == NULL) || ((*(P891)rt_nil_check(F->pc_1741)).lo == NULL))) {
F->pc_1741 = F->ac_1742;
} else if ((rt_r_ichk((*(P901)rt_nil_check(F->pm_1721)).mode) != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_1739), rt_str("lo <= F->", 9)), F->f_1739), rt_str("hi && (F->", 10)), F->f_1739), rt_str("lo != ", 6)), f_sub_lo_190((*(P901)rt_nil_check(F->pm_1721)).t, F->pc_1741)), rt_str(" || F->", 7)), F->f_1739), rt_str("hi != ", 6)), f_sub_hi_193((*(P901)rt_nil_check(F->pm_1721)).t, F->pc_1741)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if (((rt_r_ichk((*(P901)rt_nil_check(F->pm_1721)).mode) == (((rt_int)3LL))) && (rt_r_ichk((*(P899)rt_nil_check(F->y_483)).kind) != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1738), rt_str(" ", 1)), F->f_1739), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1739), rt_str("v = ", 4)), f_copy_code_377((*(P901)rt_nil_check(F->pm_1721)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1739); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P895)rt_nil_check((*(P901)rt_nil_check(F->pm_1721)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_314((*(P895)rt_nil_check((*(P901)rt_nil_check(F->pm_1721)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1739), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_1742 == NULL)) {
F->ac_1742 = (*(P901)rt_nil_check(F->pm_1721)).c;
}
if ((!rt_str_eq(f_uninit_value_328(f_base_of_215((*(P901)rt_nil_check(F->pm_1721)).t)), rt_str("", 0)))) {
F->copy_back_1728 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->copy_back_1728))->all), rt_str("  if (!rt_r_undef_", 18)), f_kind_name_220(f_base_of_215((*(P901)rt_nil_check(F->pm_1721)).t))), rt_str("(F->", 4)), F->f_1739), rt_str("v)) ", 4)), f_assign_code_374(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1739), rt_str(")", 1)); b_; }), (*(P901)rt_nil_check(F->pm_1721)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1739), rt_str("v", 1)); b_; }), F->ac_1742)); b_; }));
} else {
F->copy_back_1728 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->copy_back_1728))->all), rt_str("  ", 2)), f_assign_code_374(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1739), rt_str(")", 1)); b_; }), (*(P901)rt_nil_check(F->pm_1721)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1739), rt_str("v", 1)); b_; }), F->ac_1742)); b_; }));
}
if (f_needs_fin_316((*(P901)rt_nil_check(F->pm_1721)).t)) {
F->pfin_1729 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->pfin_1729))->all), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1739), rt_str("v", 1)); b_; }), (*(P901)rt_nil_check(F->pm_1721)).t)), rt_str(" ", 1)); b_; }));
}
(*(P899)rt_nil_check(F->p_1740)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1739, rt_str("v", 1)); b_; }));
(*(P899)rt_nil_check(F->p_1740)).byref = 0;
}
}
(*(P899)rt_nil_check(F->p_1740)).t = (*(P901)rt_nil_check(F->pm_1721)).t;
(*(P899)rt_nil_check(F->p_1740)).c = F->pc_1741;
(*(P899)rt_nil_check(F->p_1740)).level = rt_r_ichk(g_cur_level_942);
(*(P899)rt_nil_check(F->p_1740)).ro_flag = ((rt_r_ichk((*(P901)rt_nil_check(F->pm_1721)).mode) == (((rt_int)1LL))) || (rt_r_ichk((*(P901)rt_nil_check(F->pm_1721)).mode) == (((rt_int)4LL))));
f_define_160(F->p_1740, rt_r_ichk((*(P889)rt_nil_check(F->d_482)).line));
F->pm_1721 = (*(P901)rt_nil_check(F->pm_1721)).next;
F->pn_1734 = (*(P889)rt_nil_check(F->pn_1734)).next;
}
if ((rt_r_ichk((*(P895)rt_nil_check((*(P899)rt_nil_check(F->y_483)).result)).kind) != (((rt_int)9LL)))) {
if (((*(P889)rt_nil_check(F->d_482)).b != NULL)) {
F->rc_1746 = NULL;
F->rt_1747 = NULL;
F->rt_1747 = f_resolve_subtype_257((*(P889)rt_nil_check(F->d_482)).b, &F->rc_1746);
g_func_rc_954 = f_freeze_201(F->rc_1746, (*(P899)rt_nil_check(F->y_483)).result);
}
f_put_27(g_fields_buf_940, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_226((*(P899)rt_nil_check(F->y_483)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P895)rt_nil_check((*(P899)rt_nil_check(F->y_483)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_314((*(P895)rt_nil_check((*(P899)rt_nil_check(F->y_483)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_1736 = (((rt_int)(((((P882)rt_nil_check(F->pfin_1729))->all)).len)) > ((rt_int)0LL));
if (rt_r_echk(F->has_pfin_1736)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_457((*(P889)rt_nil_check(F->d_482)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_457((*(P889)rt_nil_check(F->d_482)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_1748 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_1749 = NULL;
F->leave_1749 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_1748), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_1748), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_1748), rt_str(", ", 2)), f_bool_text_345(f_has_pragmat_457((*(P889)rt_nil_check(F->d_482)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_345(f_has_pragmat_457((*(P889)rt_nil_check(F->d_482)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P882)rt_nil_check((*(P889)rt_nil_check(F->d_482)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_1728 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->copy_back_1728))->all), rt_str("  ", 2)), (((P882)rt_nil_check(F->leave_1749))->all)); b_; }));
F->nonrec_end_1735 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P882)rt_nil_check(F->leave_1749))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
f_declare_labels_494((*(P889)rt_nil_check(F->d_482)).c);
f_declare_body_393((*(P889)rt_nil_check(F->d_482)).c);
{
F->xu_1750 = rt_str_copy(f_open_unhandled_507((*(P889)rt_nil_check(F->d_482)).c));
f_body_elements_503((*(P889)rt_nil_check(F->d_482)).c);
f_close_fins_477(NULL);
f_close_unhandled_509(&F->xu_1750);
}
if ((F->nonrec_end_1735 != NULL)) {
f_emit_29(&(((P882)rt_nil_check(F->nonrec_end_1735))->all));
f_pop_cleanup_514();
}
if (rt_r_echk(F->has_pfin_1736)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P882)rt_nil_check(F->pfin_1729))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_514();
F->copy_back_1728 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->copy_back_1728))->all), rt_str("  ", 2)), (((P882)rt_nil_check(F->pfin_1729))->all)); b_; }));
}
f_close_scope_170();
g_fctx_943 = (*(P906)rt_nil_check(g_fctx_943)).next;
g_cur_level_942 = rt_sub(rt_r_ichk(g_cur_level_942), ((rt_int)1LL));
if (((((rt_int)(((((P882)rt_nil_check(F->args_1720))->all)).len)) == ((rt_int)0LL)) || (rt_r_ichk((*(P899)rt_nil_check(F->y_483)).kind) == (((rt_int)9LL))))) {
F->args_1720 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if ((rt_r_ichk((*(P899)rt_nil_check(F->y_483)).kind) == (((rt_int)9LL)))) {
F->args_1720 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1725 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_226((*(P899)rt_nil_check(F->y_483)).result)), rt_str(" ", 1)), (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_483)).cname))->all)), rt_str("(", 1)), (((P882)rt_nil_check(F->args_1720))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_934, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->head_1725))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->head_1725))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_948, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P882)rt_nil_check(F->frame_1726))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_948, g_fields_buf_940);
f_put_27(g_out_frames_948, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if ((rt_r_ichk((*(P899)rt_nil_check(F->y_483)).kind) == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P882)rt_nil_check(F->frame_1726))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P882)rt_nil_check(F->frame_1726))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_936, g_code_939);
if ((rt_r_ichk((*(P895)rt_nil_check((*(P899)rt_nil_check(F->y_483)).result)).kind) != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P882)rt_nil_check(F->copy_back_1728))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_936, &(((P882)rt_nil_check(F->copy_back_1728))->all));
}
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P882)rt_nil_check(F->copy_back_1728))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_936, &(((P882)rt_nil_check(F->copy_back_1728))->all));
}
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_939 = F->saved_code_1713;
g_fields_buf_940 = F->saved_fields_1714;
g_in_func_941 = rt_r_echk(F->saved_in_1715);
g_func_sym_953 = F->saved_sym_1716;
g_exits_962 = F->saved_exits_1717;
g_gotos_963 = F->saved_gotos_1718;
g_frames_964 = rt_r_ichk(F->saved_frames_1719);
g_handlers_965 = F->saved_handlers_1722;
g_cleanups_966 = F->saved_cleanups_1723;
g_fins_951 = F->saved_fins_1730;
g_func_rc_954 = F->saved_rc_1731;
g_cap_ret_955 = F->saved_ret_1732;
g_cap_rflag_956 = F->saved_rflag_1733;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_486(P889 d_485) {
  struct f_waits_of_486fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_485 = d_485;
F->w_1751 = NULL;
F->w_1751 = g_cap_waits_945;
while ((F->w_1751 != NULL)) {
if (((*(P918)rt_nil_check(F->w_1751)).d == F->d_485)) {
F->result_ = (((P882)rt_nil_check((*(P918)rt_nil_check(F->w_1751)).w))->all);
goto ret_;
}
F->w_1751 = (*(P918)rt_nil_check(F->w_1751)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_488(P889 elems_487) {
  struct f_task_waits_488fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_487 = elems_487;
F->e_1752 = NULL;
F->e_1752 = F->elems_487;
F->r_1753 = NULL;
F->r_1753 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1752 != NULL)) {
if ((rt_r_ichk((*(P889)rt_nil_check(F->e_1752)).kind) == (((rt_int)50LL)))) {
F->r_1753 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_1753))->all), rt_str(" rt_await_decl(&", 16)), (((P882)rt_nil_check((*(P899)rt_nil_check(f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_1752)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if (((rt_r_ichk((*(P889)rt_nil_check(F->e_1752)).kind) == (((rt_int)47LL))) || ((rt_r_ichk((*(P889)rt_nil_check(F->e_1752)).kind) == (((rt_int)48LL))) && ((rt_r_ichk((*(P889)rt_nil_check(F->e_1752)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P889)rt_nil_check(F->e_1752)).flag) == ((rt_int)3LL)))))) {
F->r_1753 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_1753))->all), f_waits_of_486(F->e_1752)); b_; }));
}
F->e_1752 = (*(P889)rt_nil_check(F->e_1752)).next;
}
F->result_ = (((P882)rt_nil_check(F->r_1753))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_490(P889 elems_489) {
  struct f_await_tasks_490fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_489 = elems_489;
F->w_1754 = rt_str_copy(f_task_waits_488(F->elems_489));
if ((((rt_int)((F->w_1754).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_1754);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_492(P889 elems_491) {
  struct f_capsule_elements_492fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_491 = elems_491;
F->e_1755 = NULL;
F->e_1755 = F->elems_491;
while ((F->e_1755 != NULL)) {
if (((rt_r_ichk((*(P889)rt_nil_check(F->e_1755)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P889)rt_nil_check(F->e_1755)).kind) <= (((rt_int)36LL))))) {
f_start_labels_495();
}
f_element_463(F->e_1755);
F->e_1755 = (*(P889)rt_nil_check(F->e_1755)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_494(P889 elems_493) {
  struct f_declare_labels_494fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_493 = elems_493;
F->e_1756 = NULL;
F->e_1756 = F->elems_493;
while ((F->e_1756 != NULL)) {
F->l_1757 = NULL;
F->l_1757 = (*(P889)rt_nil_check(F->e_1756)).labels;
while ((F->l_1757 != NULL)) {
F->x_1758 = NULL;
F->x_1758 = g_gotos_963;
while (((F->x_1758 != NULL) && (rt_r_ichk((*(P914)rt_nil_check(F->x_1758)).depth) == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P882)rt_nil_check((*(P914)rt_nil_check(F->x_1758)).match))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->l_1757)).name))->all))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->l_1757)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P882)rt_nil_check((*(P889)rt_nil_check(F->l_1757)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_1758 = (*(P914)rt_nil_check(F->x_1758)).next;
}
{ R915 *cell1759 = rt_alloc(sizeof(R915));
(*cell1759).match = NULL;
(*cell1759).label = NULL;
(*cell1759).next = NULL;
F->x_1758 = cell1759;
}
(*(P914)rt_nil_check(F->x_1758)).match = (*(P889)rt_nil_check(F->l_1757)).name;
(*(P914)rt_nil_check(F->x_1758)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P914)rt_nil_check(F->x_1758)).depth = rt_neg(((rt_int)1LL));
(*(P914)rt_nil_check(F->x_1758)).next = g_gotos_963;
g_gotos_963 = F->x_1758;
F->l_1757 = (*(P889)rt_nil_check(F->l_1757)).next;
}
F->e_1756 = (*(P889)rt_nil_check(F->e_1756)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_495(void) {
  struct f_start_labels_495fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1760 = NULL;
F->x_1760 = g_gotos_963;
while (((F->x_1760 != NULL) && (rt_r_ichk((*(P914)rt_nil_check(F->x_1760)).depth) == rt_neg(((rt_int)1LL))))) {
(*(P914)rt_nil_check(F->x_1760)).depth = rt_r_ichk(g_frames_964);
F->x_1760 = (*(P914)rt_nil_check(F->x_1760)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P914 f_goto_label_497(rstr *name_496) {
  struct f_goto_label_497fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_496 = name_496;
F->x_1761 = NULL;
F->x_1761 = g_gotos_963;
while ((F->x_1761 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P914)rt_nil_check(F->x_1761)).match))->all), (*F->name_496))) {
F->result_ = F->x_1761;
goto ret_;
}
F->x_1761 = (*(P914)rt_nil_check(F->x_1761)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_499(P889 e_498) {
  struct f_has_return_499fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_498 = e_498;
F->x_1762 = NULL;
F->x_1762 = F->e_498;
while ((F->x_1762 != NULL)) {
if ((rt_r_ichk((*(P889)rt_nil_check(F->x_1762)).kind) == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if ((((((rt_r_ichk((*(P889)rt_nil_check(F->x_1762)).kind) != (((rt_int)45LL))) && (rt_r_ichk((*(P889)rt_nil_check(F->x_1762)).kind) != (((rt_int)46LL)))) && (rt_r_ichk((*(P889)rt_nil_check(F->x_1762)).kind) != (((rt_int)50LL)))) && (rt_r_ichk((*(P889)rt_nil_check(F->x_1762)).kind) != (((rt_int)47LL)))) && (rt_r_ichk((*(P889)rt_nil_check(F->x_1762)).kind) != (((rt_int)51LL))))) {
if ((((((*(P889)rt_nil_check(F->x_1762)).a != NULL) && f_has_return_499((*(P889)rt_nil_check(F->x_1762)).a)) || (((*(P889)rt_nil_check(F->x_1762)).b != NULL) && f_has_return_499((*(P889)rt_nil_check(F->x_1762)).b))) || (((*(P889)rt_nil_check(F->x_1762)).c != NULL) && f_has_return_499((*(P889)rt_nil_check(F->x_1762)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_1762 = (*(P889)rt_nil_check(F->x_1762)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_501(P889 elems_500) {
  struct f_capsule_body_501fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_500 = elems_500;
F->saved_ret_1763 = NULL;
F->saved_ret_1763 = g_cap_ret_955;
F->saved_flag_1764 = NULL;
F->saved_flag_1764 = g_cap_rflag_956;
F->saved_frames_1765 = RT_R_IUNDEF;
F->saved_frames_1765 = rt_r_ichk(g_ret_frames_957);
F->e_1766 = NULL;
F->e_1766 = F->elems_500;
if ((!f_has_return_499(F->elems_500))) {
g_cap_ret_955 = NULL;
g_cap_rflag_956 = NULL;
f_capsule_elements_492(F->elems_500);
} else {
g_cap_rflag_956 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(g_cap_rflag_956))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_1766 != NULL)) {
F->stmt_1767 = RT_R_EUNDEF;
F->stmt_1767 = ((rt_r_ichk((*(P889)rt_nil_check(F->e_1766)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P889)rt_nil_check(F->e_1766)).kind) <= (((rt_int)36LL))));
g_cap_ret_955 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_957 = rt_r_ichk(g_frames_964);
if (rt_r_echk(F->stmt_1767)) {
f_start_labels_495();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P882)rt_nil_check(g_cap_rflag_956))->all)), rt_str(") {", 3)); b_; }));
}
f_element_463(F->e_1766);
if (rt_r_echk(F->stmt_1767)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(g_cap_ret_955))->all), rt_str(": ;", 3)); b_; }));
F->e_1766 = (*(P889)rt_nil_check(F->e_1766)).next;
}
}
g_cap_ret_955 = F->saved_ret_1763;
g_cap_rflag_956 = F->saved_flag_1764;
g_ret_frames_957 = rt_r_ichk(F->saved_frames_1765);
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_503(P889 elems_502) {
  struct f_body_elements_503fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_502 = elems_502;
f_capsule_elements_492(F->elems_502);
f_await_tasks_490(F->elems_502);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_505(P889 elems_504) {
  struct f_gen_body_505fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_504 = elems_504;
F->saved_1768 = NULL;
F->saved_1768 = g_fins_951;
F->saved_gotos_1769 = NULL;
F->saved_gotos_1769 = g_gotos_963;
f_open_scope_169();
f_declare_labels_494(F->elems_504);
f_declare_body_393(F->elems_504);
{
F->xu_1770 = rt_str_copy(f_open_unhandled_507(F->elems_504));
f_body_elements_503(F->elems_504);
f_close_fins_477(F->saved_1768);
f_close_unhandled_509(&F->xu_1770);
}
f_close_scope_170();
g_gotos_963 = F->saved_gotos_1769;
ret_:
  RT_FPOP();
  return;
}

static rstr f_open_unhandled_507(P889 elems_506) {
  struct f_open_unhandled_507fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_506 = elems_506;
F->e_1771 = NULL;
F->e_1771 = F->elems_506;
F->conds_1772 = NULL;
F->conds_1772 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->e_1771 != NULL)) {
if ((rt_r_ichk((*(P889)rt_nil_check(F->e_1771)).kind) == (((rt_int)49LL)))) {
F->conds_1772 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->conds_1772))->all), rt_str(" || rt_xcur == ", 15)), (((P882)rt_nil_check((*(P899)rt_nil_check(f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_1771)).name))->all)))).cname))->all)); b_; }));
}
F->e_1771 = (*(P889)rt_nil_check(F->e_1771)).next;
}
if ((((rt_int)(((((P882)rt_nil_check(F->conds_1772))->all)).len)) == ((rt_int)1LL))) {
F->result_ = rt_str("", 0);
goto ret_;
}
{
F->f_1773 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xu", 2); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1773), rt_str("; if (RT_TRY(", 13)), F->f_1773), rt_str(")) {", 4)); b_; }));
f_push_cleanup_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1773), rt_str(");", 2)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(F->f_1773, rt_str(":", 1)), (((P882)rt_nil_check(F->conds_1772))->all));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_close_unhandled_509(rstr *xu_508) {
  struct f_close_unhandled_509fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->xu_508 = xu_508;
F->i_1774 = RT_R_IUNDEF;
F->i_1774 = ((rt_int)1LL);
if (rt_str_eq((*F->xu_508), rt_str("", 0))) {
goto ret_;
}
while ((rt_r_echk(rt_str_get((*F->xu_508), rt_r_ichk(F->i_1774))) != 58)) {
F->i_1774 = rt_add(rt_r_ichk(F->i_1774), ((rt_int)1LL));
}
{
F->f_1775 = rt_str_copy(rt_str_slice((*F->xu_508), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1774), ((rt_int)1LL))));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1775), rt_str("); } else { RT_POP(", 19)), F->f_1775), rt_str("); if (", 7)), rt_str_slice((*F->xu_508), rt_add(rt_r_ichk(F->i_1774), ((rt_int)1LL)), ((rt_int)(((*F->xu_508)).len)))), rt_str(") rt_raise(rt_exc(", 18)), f_q_18()), rt_str("X_UNHANDLED", 11)), f_q_18()), rt_str(")); rt_raise(rt_xcur); }", 24)); b_; }));
f_pop_cleanup_514();
}
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_511(rt_int upto_510) {
  struct f_pop_frames_511fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_510 = upto_510;
F->i_1776 = RT_R_IUNDEF;
F->i_1776 = rt_r_ichk(g_frames_964);
F->c_1777 = NULL;
F->c_1777 = g_cleanups_966;
while ((rt_r_ichk(F->i_1776) > F->upto_510)) {
f_emit_29(&(((P882)rt_nil_check((*(P893)rt_nil_check(F->c_1777)).s))->all));
F->c_1777 = (*(P893)rt_nil_check(F->c_1777)).next;
F->i_1776 = rt_sub(rt_r_ichk(F->i_1776), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_513(rstr *s_512) {
  struct f_push_cleanup_513fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_512 = s_512;
F->c_1778 = NULL;
{ R894 *cell1779 = rt_alloc(sizeof(R894));
(*cell1779).s = NULL;
(*cell1779).next = NULL;
F->c_1778 = cell1779;
}
(*(P893)rt_nil_check(F->c_1778)).s = f_mk_3(&(*F->s_512));
(*(P893)rt_nil_check(F->c_1778)).next = g_cleanups_966;
g_cleanups_966 = F->c_1778;
g_frames_964 = rt_add(rt_r_ichk(g_frames_964), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_514(void) {
  struct f_pop_cleanup_514fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_966 = (*(P893)rt_nil_check(g_cleanups_966)).next;
g_frames_964 = rt_sub(rt_r_ichk(g_frames_964), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_516(P889 s_515) {
  struct f_gen_statement_516fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_515 = s_515;
F->label_1780 = NULL;
F->gl_1781 = NULL;
F->gl_1781 = (*(P889)rt_nil_check(F->s_515)).labels;
while ((F->gl_1781 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P914)rt_nil_check(f_goto_label_497(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->gl_1781)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_1781 = (*(P889)rt_nil_check(F->gl_1781)).next;
}
if (((*(P889)rt_nil_check(F->s_515)).tag != NULL)) {
F->x_1782 = NULL;
{ R915 *cell1783 = rt_alloc(sizeof(R915));
(*cell1783).match = NULL;
(*cell1783).label = NULL;
(*cell1783).next = NULL;
F->x_1782 = cell1783;
}
F->label_1780 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P914)rt_nil_check(F->x_1782)).match = (*(P889)rt_nil_check(F->s_515)).tag;
(*(P914)rt_nil_check(F->x_1782)).label = F->label_1780;
(*(P914)rt_nil_check(F->x_1782)).depth = rt_r_ichk(g_frames_964);
(*(P914)rt_nil_check(F->x_1782)).next = g_exits_962;
g_exits_962 = F->x_1782;
}
{ rt_int sel1784 = rt_r_ichk((*(P889)rt_nil_check(F->s_515)).kind);
if (0 || (sel1784 == (((rt_int)20LL)))) {
f_st_assign_518(F->s_515);
} else if (0 || (sel1784 == (((rt_int)21LL)))) {
f_st_call_520(F->s_515);
} else if (0 || (sel1784 == (((rt_int)22LL)))) {
f_st_if_522(F->s_515);
} else if (0 || (sel1784 == (((rt_int)23LL)))) {
f_st_case_526(F->s_515);
} else if (0 || (sel1784 == (((rt_int)24LL)))) {
f_st_repeat_534(F->s_515);
} else if (0 || (sel1784 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_505((*(P889)rt_nil_check(F->s_515)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1784 == (((rt_int)27LL)))) {
f_st_exit_536(F->s_515);
} else if (0 || (sel1784 == (((rt_int)29LL)))) {
{
F->x_1785 = NULL;
F->x_1785 = f_goto_label_497(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->s_515)).name))->all));
if ((F->x_1785 == NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_515)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->s_515)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_511(rt_r_ichk((*(P914)rt_nil_check(F->x_1785)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P882)rt_nil_check((*(P914)rt_nil_check(F->x_1785)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel1784 == (((rt_int)28LL)))) {
f_st_return_538(F->s_515);
} else if (0 || (sel1784 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_545(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->s_515)).name))->all), rt_r_ichk((*(P889)rt_nil_check(F->s_515)).line))), rt_str(");", 2)); b_; }));
} else if (0 || (sel1784 == (((rt_int)31LL)))) {
if ((g_handlers_965 == NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_515)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P882)rt_nil_check((*(P893)rt_nil_check(g_handlers_965)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1784 == (((rt_int)26LL)))) {
f_st_guard_547(F->s_515);
} else if (0 || (sel1784 == (((rt_int)32LL)))) {
f_st_alloc_549(F->s_515);
} else if (0 || (sel1784 == (((rt_int)34LL)))) {
f_st_create_553(F->s_515);
} else if (0 || (sel1784 == (((rt_int)35LL)))) {
f_st_wait_582(F->s_515);
} else if (0 || (sel1784 == (((rt_int)36LL)))) {
f_st_region_590(F->s_515);
} else {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_515)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P889)rt_nil_check(F->s_515)).tag != NULL)) {
g_exits_962 = (*(P914)rt_nil_check(g_exits_962)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->label_1780))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_518(P889 s_517) {
  struct f_st_assign_518fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_517 = s_517;
F->lv_1786 = NULL;
F->t_1787 = NULL;
F->vt_1788 = NULL;
F->c_1789 = NULL;
F->ro_1790 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->s_517)).a)).kind) == (((rt_int)10LL))) && ((*(P889)rt_nil_check((*(P889)rt_nil_check(F->s_517)).a)).b != NULL)) && (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->s_517)).a)).b)).kind) == (((rt_int)16LL))))) {
f_lvalue_669((*(P889)rt_nil_check((*(P889)rt_nil_check(F->s_517)).a)).a, &F->lv_1786, &F->t_1787, &F->c_1789, &F->ro_1790);
while ((rt_r_ichk((*(P895)rt_nil_check(F->t_1787)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_427(F->t_1787);
F->lv_1786 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_661(&(((P882)rt_nil_check(F->lv_1786))->all), F->t_1787); b_; }));
F->t_1787 = (*(P895)rt_nil_check(F->t_1787)).target;
}
if (((rt_r_ichk((*(P895)rt_nil_check(F->t_1787)).kind) == (((rt_int)15LL))) && ((*(P895)rt_nil_check(F->t_1787)).tparams == NULL))) {
F->t_1787 = (*(P895)rt_nil_check(F->t_1787)).under;
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_1787)).kind) == (((rt_int)15LL)))) {
F->lv_1786 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->lv_1786))->all), rt_str(".all", 4)); b_; }));
F->t_1787 = (*(P895)rt_nil_check(F->t_1787)).under;
}
if ((((!rt_r_echk(F->ro_1790)) && (rt_r_ichk((*(P895)rt_nil_check(F->t_1787)).kind) == (((rt_int)6LL)))) && (rt_r_ichk((*(P895)rt_nil_check(F->t_1787)).ndim) == ((rt_int)1LL)))) {
F->lo_1791 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->s_517)).a)).b)).a, (*(P895)rt_nil_check(F->t_1787)).idx, &F->vt_1788));
F->hi_1792 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->s_517)).a)).b)).b, (*(P895)rt_nil_check(F->t_1787)).idx, &F->vt_1788));
F->v_1793 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->s_517)).b, F->t_1787, &F->vt_1788));
f_need_slice_681(F->t_1787);
f_check_type_224(F->vt_1788, F->t_1787, rt_r_ichk((*(P889)rt_nil_check(F->s_517)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_226(F->t_1787)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_226(F->t_1787)), rt_str("(", 1)), (((P882)rt_nil_check(F->lv_1786))->all)), rt_str(", ", 2)), F->lo_1791), rt_str(", ", 2)), F->hi_1792), rt_str("); as_", 6)), f_ctype_226(F->t_1787)), rt_str("(&sl_, ", 7)), F->v_1793), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((rt_r_echk(F->ro_1790) || (rt_r_ichk((*(P895)rt_nil_check(F->t_1787)).kind) != (((rt_int)5LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_517)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_1794 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->s_517)).a)).b)).a, g_ty_int_969, &F->vt_1788));
F->hi_1795 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->s_517)).a)).b)).b, g_ty_int_969, &F->vt_1788));
F->v_1796 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->s_517)).b, g_ty_string_973, &F->vt_1788));
f_check_type_224(F->vt_1788, g_ty_string_973, rt_r_ichk((*(P889)rt_nil_check(F->s_517)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P882)rt_nil_check(F->lv_1786))->all)), rt_str(", ", 2)), F->lo_1794), rt_str(", ", 2)), F->hi_1795), rt_str(", ", 2)), F->v_1796), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_669((*(P889)rt_nil_check(F->s_517)).a, &F->lv_1786, &F->t_1787, &F->c_1789, &F->ro_1790);
if (rt_r_echk(F->ro_1790)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_517)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_297(F->t_1787)) && (!f_exports_op_415((*(P895)rt_nil_check(F->t_1787)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_517)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_1787)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1797 = rt_str_copy(f_gexpr_in_708((*(P889)rt_nil_check(F->s_517)).b, F->t_1787, F->c_1789, &F->vt_1788));
f_check_type_224(F->vt_1788, F->t_1787, rt_r_ichk((*(P889)rt_nil_check(F->s_517)).line));
f_ptr_subtype_check_447(F->t_1787, F->c_1789, (*(P889)rt_nil_check(F->s_517)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_374(&(((P882)rt_nil_check(F->lv_1786))->all), F->t_1787, &F->v_1797, F->c_1789); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_520(P889 s_519) {
  struct f_st_call_520fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_519 = s_519;
F->c_1798 = NULL;
F->c_1798 = (*(P889)rt_nil_check(F->s_519)).a;
F->t_1799 = NULL;
if (((rt_r_ichk((*(P889)rt_nil_check(F->c_1798)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P889)rt_nil_check(F->c_1798)).kind) == (((rt_int)12LL))))) {
F->x_1800 = NULL;
F->x_1800 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P889)rt_nil_check(F->c_1798)).line));
(*(P889)rt_nil_check(F->x_1800)).a = F->c_1798;
F->c_1798 = F->x_1800;
}
if ((rt_r_ichk((*(P889)rt_nil_check(F->c_1798)).kind) != (((rt_int)10LL)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_519)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_848(F->c_1798, 1, &F->t_1799), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_522(P889 s_521) {
  struct f_st_if_522fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_521 = s_521;
F->a_1801 = NULL;
F->a_1801 = (*(P889)rt_nil_check(F->s_521)).a;
F->first_1802 = RT_R_EUNDEF;
F->first_1802 = 1;
F->t_1803 = NULL;
F->taken_1804 = RT_R_EUNDEF;
F->taken_1804 = 0;
F->ok_1805 = RT_R_EUNDEF;
F->mv_1806 = NULL;
while (((F->a_1801 != NULL) && (!rt_r_echk(F->taken_1804)))) {
F->mv_1806 = f_meval_343((*(P889)rt_nil_check(F->a_1801)).a, &F->ok_1805);
if (((rt_r_echk(F->ok_1805) && (rt_r_ichk((*(P908)rt_nil_check(F->mv_1806)).kind) == (((rt_int)2LL)))) && (rt_r_ichk((*(P908)rt_nil_check(F->mv_1806)).i) == ((rt_int)0LL)))) {
F->a_1801 = (*(P889)rt_nil_check(F->a_1801)).next;
} else {
if ((rt_r_echk(F->ok_1805) && (rt_r_ichk((*(P908)rt_nil_check(F->mv_1806)).kind) == (((rt_int)2LL))))) {
F->taken_1804 = 1;
if (rt_r_echk(F->first_1802)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_1807 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->a_1801)).a, g_ty_bool_970, &F->t_1803));
f_check_type_224(F->t_1803, g_ty_bool_970, rt_r_ichk((*(P889)rt_nil_check(F->s_521)).line));
if (rt_r_echk(F->first_1802)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1807), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1807), rt_str(") {", 3)); b_; }));
}
}
F->first_1802 = 0;
f_gen_body_505((*(P889)rt_nil_check(F->a_1801)).b);
F->a_1801 = (*(P889)rt_nil_check(F->a_1801)).next;
}
}
if (((rt_r_ichk((*(P889)rt_nil_check(F->s_521)).flag) == ((rt_int)1LL)) && (!rt_r_echk(F->taken_1804)))) {
if (rt_r_echk(F->first_1802)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_1802 = 0;
f_gen_body_505((*(P889)rt_nil_check(F->s_521)).b);
}
if ((!rt_r_echk(F->first_1802))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_manifest_case_524(P889 s_523) {
  struct f_manifest_case_524fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_523 = s_523;
F->ok_1808 = RT_R_EUNDEF;
F->sv_1809 = NULL;
F->sv_1809 = f_meval_343((*(P889)rt_nil_check(F->s_523)).a, &F->ok_1808);
F->a_1810 = NULL;
F->a_1810 = (*(P889)rt_nil_check(F->s_523)).b;
if (((!rt_r_echk(F->ok_1808)) || (((rt_r_ichk((*(P908)rt_nil_check(F->sv_1809)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P908)rt_nil_check(F->sv_1809)).kind) != (((rt_int)2LL)))) && (rt_r_ichk((*(P908)rt_nil_check(F->sv_1809)).kind) != (((rt_int)4LL)))))) {
F->result_ = 0;
goto ret_;
}
while ((F->a_1810 != NULL)) {
F->lab_1811 = NULL;
F->lab_1811 = (*(P889)rt_nil_check(F->a_1810)).a;
while ((F->lab_1811 != NULL)) {
F->lo_1812 = NULL;
F->lo_1812 = f_meval_343((*(P889)rt_nil_check(F->lab_1811)).a, &F->ok_1808);
F->hi_1813 = NULL;
F->hi_1813 = F->lo_1812;
if (((!rt_r_echk(F->ok_1808)) || (rt_r_ichk((*(P908)rt_nil_check(F->lo_1812)).kind) != rt_r_ichk((*(P908)rt_nil_check(F->sv_1809)).kind)))) {
F->result_ = 0;
goto ret_;
}
if (((*(P889)rt_nil_check(F->lab_1811)).b != NULL)) {
F->hi_1813 = f_meval_343((*(P889)rt_nil_check(F->lab_1811)).b, &F->ok_1808);
if ((((!rt_r_echk(F->ok_1808)) || (rt_r_ichk((*(P908)rt_nil_check(F->hi_1813)).kind) != rt_r_ichk((*(P908)rt_nil_check(F->sv_1809)).kind))) || (rt_r_ichk((*(P908)rt_nil_check(F->sv_1809)).kind) == (((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
}
if ((((rt_r_ichk((*(P908)rt_nil_check(F->sv_1809)).kind) == (((rt_int)4LL))) && rt_str_eq((((P882)rt_nil_check((*(P908)rt_nil_check(F->sv_1809)).s))->all), (((P882)rt_nil_check((*(P908)rt_nil_check(F->lo_1812)).s))->all))) || (((rt_r_ichk((*(P908)rt_nil_check(F->sv_1809)).kind) != (((rt_int)4LL))) && (rt_r_ichk((*(P908)rt_nil_check(F->lo_1812)).i) <= rt_r_ichk((*(P908)rt_nil_check(F->sv_1809)).i))) && (rt_r_ichk((*(P908)rt_nil_check(F->sv_1809)).i) <= rt_r_ichk((*(P908)rt_nil_check(F->hi_1813)).i))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_505((*(P889)rt_nil_check(F->a_1810)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
F->result_ = 1;
goto ret_;
}
F->lab_1811 = (*(P889)rt_nil_check(F->lab_1811)).next;
}
F->a_1810 = (*(P889)rt_nil_check(F->a_1810)).next;
}
if ((rt_r_ichk((*(P889)rt_nil_check(F->s_523)).flag) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_505((*(P889)rt_nil_check(F->s_523)).c);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_case_526(P889 s_525) {
  struct f_st_case_526fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_525 = s_525;
F->st_1814 = NULL;
F->vt_1815 = NULL;
F->first_1816 = RT_R_EUNDEF;
F->first_1816 = 1;
F->a_1817 = NULL;
F->a_1817 = (*(P889)rt_nil_check(F->s_525)).b;
if (f_manifest_case_524(F->s_525)) {
goto ret_;
}
f_st_case2_528(F->s_525);
ret_:
  RT_FPOP();
  return;
}

static void f_st_case2_528(P889 s_527) {
  struct f_st_case2_528fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_527 = s_527;
F->st_1818 = NULL;
F->vt_1819 = NULL;
F->first_1820 = RT_R_EUNDEF;
F->first_1820 = 1;
F->a_1821 = NULL;
F->a_1821 = (*(P889)rt_nil_check(F->s_527)).b;
F->sel_1822 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->s_527)).a, NULL, &F->st_1818));
F->tmp_1823 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_226(F->st_1818)), rt_str(" ", 1)), F->tmp_1823), rt_str(" = ", 3)), F->sel_1822), rt_str(";", 1)); b_; }));
while ((F->a_1821 != NULL)) {
F->lab_1824 = NULL;
F->lab_1824 = (*(P889)rt_nil_check(F->a_1821)).a;
F->conds_1825 = NULL;
F->conds_1825 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1824 != NULL)) {
if (((*(P889)rt_nil_check(F->lab_1824)).b == NULL)) {
F->v_1826 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->lab_1824)).a, F->st_1818, &F->vt_1819));
f_check_type_224(F->vt_1819, F->st_1818, rt_r_ichk((*(P889)rt_nil_check(F->s_527)).line));
F->conds_1825 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->conds_1825))->all), rt_str(" || ", 4)), f_eq_code_381(F->st_1818, &F->tmp_1823, &F->v_1826)); b_; }));
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->st_1818)).kind) == (((rt_int)15LL))) && ((*(P895)rt_nil_check(F->st_1818)).ltp != NULL))) {
F->lo_1827 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->lab_1824)).a, F->st_1818, &F->vt_1819));
F->hi_1828 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->lab_1824)).b, F->st_1818, &F->vt_1819));
F->conds_1825 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->conds_1825))->all), rt_str(" || (!", 6)), f_user_call2_363((*(P895)rt_nil_check(F->st_1818)).ltp, &F->tmp_1823, 1, &F->lo_1827, 0)), rt_str(" && !", 5)), f_user_call2_363((*(P895)rt_nil_check(F->st_1818)).ltp, &F->hi_1828, 0, &F->tmp_1823, 1)), rt_str(")", 1)); b_; }));
} else {
F->lo_1829 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->lab_1824)).a, F->st_1818, &F->vt_1819));
F->hi_1830 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->lab_1824)).b, F->st_1818, &F->vt_1819));
F->conds_1825 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->conds_1825))->all), rt_str(" || (", 5)), F->tmp_1823), rt_str(" >= ", 4)), F->lo_1829), rt_str(" && ", 4)), F->tmp_1823), rt_str(" <= ", 4)), F->hi_1830), rt_str(")", 1)); b_; }));
}
F->lab_1824 = (*(P889)rt_nil_check(F->lab_1824)).next;
}
if (rt_r_echk(F->first_1820)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P882)rt_nil_check(F->conds_1825))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P882)rt_nil_check(F->conds_1825))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1820 = 0;
f_gen_body_505((*(P889)rt_nil_check(F->a_1821)).b);
F->a_1821 = (*(P889)rt_nil_check(F->a_1821)).next;
}
if (rt_r_echk(F->first_1820)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P889)rt_nil_check(F->s_527)).flag) == ((rt_int)1LL))) {
f_gen_body_505((*(P889)rt_nil_check(F->s_527)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_user_for_532(P889 s_529, P895 t_530, P891 c_531) {
  struct f_user_for_532fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_529 = s_529;
F->t_530 = t_530;
F->c_531 = c_531;
F->y_1831 = NULL;
F->y_1831 = f_new_sym_173((((rt_int)2LL)), (*(P889)rt_nil_check(F->s_529)).name);
F->saved_1832 = NULL;
F->saved_1832 = g_psub_946;
F->p_1833 = NULL;
F->p_1833 = (*(P895)rt_nil_check(F->t_530)).tparams;
F->iv_1834 = NULL;
F->iv_1834 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P889)rt_nil_check(F->s_529)).line));
F->st_1835 = NULL;
F->access_1836 = rt_str_copy(f_storage_468(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->s_529)).name))->all), F->t_530));
F->uv_1837 = NULL;
F->uv_1837 = f_mk_3(&F->access_1836);
if (((*(P895)rt_nil_check(F->t_530)).tparams != NULL)) {
F->uv_1837 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->access_1836, rt_str(".all", 4)); b_; }));
}
if ((((!f_scalar_kind_178(f_base_of_215((*(P895)rt_nil_check(F->t_530)).under))) || ((*(P895)rt_nil_check(F->t_530)).elemcons == NULL)) || ((*(P891)rt_nil_check((*(P895)rt_nil_check(F->t_530)).elemcons)).lo == NULL))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_529)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a FOR over ", 11), (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_530)).name))->all)), rt_str(" needs an underlying subtype with a range", 41)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_init_storage_311(&F->access_1836, F->t_530, F->c_531);
while ((F->p_1833 != NULL)) {
F->l1_1838 = NULL;
F->l2_1839 = NULL;
{ R894 *cell1840 = rt_alloc(sizeof(R894));
(*cell1840).s = NULL;
(*cell1840).next = NULL;
F->l1_1838 = cell1840;
}
{ R894 *cell1841 = rt_alloc(sizeof(R894));
(*cell1841).s = NULL;
(*cell1841).next = NULL;
F->l2_1839 = cell1841;
}
(*(P893)rt_nil_check(F->l1_1838)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1833)).name))->all))), rt_str("@", 1)); b_; }));
(*(P893)rt_nil_check(F->l2_1839)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(F->access_1836, rt_str(".p_", 3)), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1833)).name))->all))); b_; }));
(*(P893)rt_nil_check(F->l1_1838)).next = F->l2_1839;
(*(P893)rt_nil_check(F->l2_1839)).next = g_psub_946;
g_psub_946 = F->l1_1838;
F->p_1833 = (*(P889)rt_nil_check(F->p_1833)).next;
}
{
F->lo_1842 = rt_str_copy(f_subst_303(&(((P882)rt_nil_check((*(P891)rt_nil_check((*(P895)rt_nil_check(F->t_530)).elemcons)).lo))->all)));
F->hi_1843 = rt_str_copy(f_subst_303(&(((P882)rt_nil_check((*(P891)rt_nil_check((*(P895)rt_nil_check(F->t_530)).elemcons)).hi))->all)));
g_psub_946 = F->saved_1832;
if ((rt_r_ichk((*(P889)rt_nil_check(F->s_529)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->uv_1837))->all), rt_str(" = ", 3)), F->hi_1843), rt_str("; if (", 6)), F->lo_1842), rt_str(" <= ", 4)), (((P882)rt_nil_check(F->uv_1837))->all)), rt_str(") for (;;) {", 12)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->uv_1837))->all), rt_str(" = ", 3)), F->lo_1842), rt_str("; if (", 6)), (((P882)rt_nil_check(F->uv_1837))->all)), rt_str(" <= ", 4)), F->hi_1843), rt_str(") for (;;) {", 12)); b_; }));
}
f_open_scope_169();
(*(P899)rt_nil_check(F->y_1831)).t = F->t_530;
(*(P899)rt_nil_check(F->y_1831)).c = F->c_531;
f_bind_471(F->y_1831, &F->access_1836);
(*(P899)rt_nil_check(F->y_1831)).ro_flag = 1;
f_define_160(F->y_1831, rt_r_ichk((*(P889)rt_nil_check(F->s_529)).line));
f_gen_body_505((*(P889)rt_nil_check(F->s_529)).b);
(*(P889)rt_nil_check(F->iv_1834)).name = (*(P889)rt_nil_check(F->s_529)).name;
if ((rt_r_ichk((*(P889)rt_nil_check(F->s_529)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P882)rt_nil_check(F->uv_1837))->all)), rt_str(" == ", 4)), F->lo_1842), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_374(&F->access_1836, F->t_530, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRED", 4); b_; }), F->iv_1834, rt_r_ichk((*(P889)rt_nil_check(F->s_529)).line)), 0, &F->st_1835); b_; }), F->c_531); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P882)rt_nil_check(F->uv_1837))->all)), rt_str(" == ", 4)), F->hi_1843), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_374(&F->access_1836, F->t_530, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUCC", 4); b_; }), F->iv_1834, rt_r_ichk((*(P889)rt_nil_check(F->s_529)).line)), 0, &F->st_1835); b_; }), F->c_531); b_; }));
}
f_close_scope_170();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} }", 3); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_534(P889 s_533) {
  struct f_st_repeat_534fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_533 = s_533;
F->t_1844 = NULL;
F->c_1845 = NULL;
if ((rt_r_ichk((*(P889)rt_nil_check(F->s_533)).flag) == ((rt_int)0LL))) {
F->cond_1846 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->s_533)).a, g_ty_bool_970, &F->t_1844));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1846), rt_str(") {", 3)); b_; }));
f_gen_body_505((*(P889)rt_nil_check(F->s_533)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1844 = f_resolve_subtype_257((*(P889)rt_nil_check(F->s_533)).a, &F->c_1845);
if (((rt_r_ichk((*(P895)rt_nil_check(F->t_1844)).kind) == (((rt_int)15LL))) && (((*(P895)rt_nil_check(F->t_1844)).tparams != NULL) || (!f_scalar_kind_178(f_base_of_215(F->t_1844)))))) {
f_user_for_532(F->s_533, F->t_1844, F->c_1845);
goto ret_;
}
F->c_1845 = f_base_cons_218(F->t_1844, F->c_1845);
if ((((*(P895)rt_nil_check(f_base_of_215(F->t_1844))).kind == (((rt_int)4LL))) && ((*(P891)rt_nil_check(F->c_1845)).lo == NULL))) {
F->c_1845 = f_new_cons_176();
(*(P891)rt_nil_check(F->c_1845)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P891)rt_nil_check(F->c_1845)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P895)rt_nil_check(f_base_of_215(F->t_1844))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P891)rt_nil_check(F->c_1845)).lo == NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_533)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1847 = rt_str_copy(f_storage_468(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->s_533)).name))->all), F->t_1844));
F->lov_1848 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1849 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1850 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1851 = NULL;
F->y_1851 = f_new_sym_173((((rt_int)2LL)), (*(P889)rt_nil_check(F->s_533)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1848), rt_str(" = ", 3)), f_clo_185(F->c_1845)), rt_str(", ", 2)), F->hiv_1849), rt_str(" = ", 3)), f_chi_187(F->c_1845)), rt_str(";", 1)); b_; }));
if ((rt_r_ichk((*(P889)rt_nil_check(F->s_533)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1850), rt_str(" = ", 3)), F->hiv_1849), rt_str("; ", 2)), F->it_1850), rt_str(" >= ", 4)), F->lov_1848), rt_str("; ", 2)), F->it_1850), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1850), rt_str(" = ", 3)), F->lov_1848), rt_str("; ", 2)), F->it_1850), rt_str(" <= ", 4)), F->hiv_1849), rt_str("; ", 2)), F->it_1850), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1847, rt_str(" = ", 3)), F->it_1850), rt_str(";", 1)); b_; }));
f_open_scope_169();
(*(P899)rt_nil_check(F->y_1851)).t = F->t_1844;
(*(P899)rt_nil_check(F->y_1851)).c = F->c_1845;
f_bind_471(F->y_1851, &F->access_1847);
(*(P899)rt_nil_check(F->y_1851)).ro_flag = 1;
f_define_160(F->y_1851, rt_r_ichk((*(P889)rt_nil_check(F->s_533)).line));
f_gen_body_505((*(P889)rt_nil_check(F->s_533)).b);
f_close_scope_170();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_536(P889 s_535) {
  struct f_st_exit_536fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_535 = s_535;
F->x_1852 = NULL;
F->x_1852 = g_exits_962;
while ((F->x_1852 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P914)rt_nil_check(F->x_1852)).match))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->s_535)).name))->all))) {
f_pop_frames_511(rt_r_ichk((*(P914)rt_nil_check(F->x_1852)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P882)rt_nil_check((*(P914)rt_nil_check(F->x_1852)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1852 = (*(P914)rt_nil_check(F->x_1852)).next;
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_535)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P882)rt_nil_check((*(P889)rt_nil_check(F->s_535)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_538(P889 s_537) {
  struct f_st_return_538fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_537 = s_537;
F->vt_1853 = NULL;
if ((g_cap_ret_955 != NULL)) {
if (((*(P889)rt_nil_check(F->s_537)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_537)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_511(rt_r_ichk(g_ret_frames_957));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(g_cap_rflag_956))->all), rt_str(" = 1; goto ", 11)), (((P882)rt_nil_check(g_cap_ret_955))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!rt_r_echk(g_in_func_941))) {
f_pop_frames_511(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check((*(P899)rt_nil_check(g_func_sym_953)).result)).kind) == (((rt_int)9LL)))) {
if (((*(P889)rt_nil_check(F->s_537)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_537)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_511(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P889)rt_nil_check(F->s_537)).a == NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_537)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1854 = rt_str_copy(f_gexpr_in_708((*(P889)rt_nil_check(F->s_537)).a, (*(P899)rt_nil_check(g_func_sym_953)).result, g_func_rc_954, &F->vt_1853));
f_check_type_224(F->vt_1853, (*(P899)rt_nil_check(g_func_sym_953)).result, rt_r_ichk((*(P889)rt_nil_check(F->s_537)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_542((*(P899)rt_nil_check(g_func_sym_953)).result, g_func_rc_954, &F->v_1854)), rt_str(";", 1)); b_; }));
f_pop_frames_511(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_542(P895 t_539, P891 c_540, rstr *v_541) {
  struct f_result_checked_542fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_539 = t_539;
F->c_540 = c_540;
F->v_541 = v_541;
if ((F->c_540 == NULL)) {
F->result_ = (*F->v_541);
goto ret_;
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->t_539)).kind) == (((rt_int)5LL))) && ((*(P891)rt_nil_check(F->c_540)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_541)), rt_str(", ", 2)), (((P882)rt_nil_check((*(P891)rt_nil_check(F->c_540)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->t_539)).kind) == (((rt_int)6LL))) && ((*(P891)rt_nil_check(F->c_540)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->t_539)), rt_str(" r_ = ", 6)), (*F->v_541)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P882)rt_nil_check((*(P891)rt_nil_check(F->c_540)).lo))->all)), rt_str(", ", 2)), (((P882)rt_nil_check((*(P891)rt_nil_check(F->c_540)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_205(F->t_539, F->c_540, &(*F->v_541));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_545(rstr *name_543, rt_int line_544) {
  struct f_exc_id_545fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_543 = name_543;
F->line_544 = line_544;
F->y_1855 = NULL;
F->y_1855 = f_lookup_155(&(*F->name_543));
if (((F->y_1855 != NULL) && (rt_r_ichk((*(P899)rt_nil_check(F->y_1855)).kind) == (((rt_int)7LL))))) {
F->result_ = (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_1855)).cname))->all);
goto ret_;
}
if (((((rt_int)(((*F->name_543)).len)) > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_543), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_543)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_544, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_543), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_547(P889 s_546) {
  struct f_st_guard_547fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_546 = s_546;
F->h_1856 = NULL;
F->h_1856 = (*(P889)rt_nil_check(F->s_546)).b;
F->first_1857 = RT_R_EUNDEF;
F->first_1857 = 1;
F->hv_1858 = NULL;
{
F->f_1859 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1860 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1859), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1859), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1859), rt_str(")) {", 4)); b_; }));
f_gen_body_505((*(P889)rt_nil_check(F->s_546)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1859), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_514();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1859), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1860), rt_str(" = rt_xcur;", 11)); b_; }));
{ R894 *cell1861 = rt_alloc(sizeof(R894));
(*cell1861).s = NULL;
(*cell1861).next = NULL;
F->hv_1858 = cell1861;
}
(*(P893)rt_nil_check(F->hv_1858)).s = f_mk_3(&F->x_1860);
(*(P893)rt_nil_check(F->hv_1858)).next = g_handlers_965;
g_handlers_965 = F->hv_1858;
{
F->h1_1862 = NULL;
F->h1_1862 = (*(P889)rt_nil_check(F->s_546)).b;
F->seen_1863 = NULL;
while ((F->h1_1862 != NULL)) {
F->n1_1864 = NULL;
F->n1_1864 = (*(P889)rt_nil_check(F->h1_1862)).a;
while ((F->n1_1864 != NULL)) {
if (f_seen_name_388(F->seen_1863, &(((P882)rt_nil_check((*(P889)rt_nil_check(F->n1_1864)).name))->all))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->n1_1864)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->n1_1864)).name))->all), rt_str(" has two handlers in one guard statement", 40)); b_; }));
}
F->seen_1863 = f_add_line_798(F->seen_1863, &(((P882)rt_nil_check((*(P889)rt_nil_check(F->n1_1864)).name))->all));
F->n1_1864 = (*(P889)rt_nil_check(F->n1_1864)).next;
}
F->h1_1862 = (*(P889)rt_nil_check(F->h1_1862)).next;
}
}
while ((F->h_1856 != NULL)) {
F->n_1865 = NULL;
F->n_1865 = (*(P889)rt_nil_check(F->h_1856)).a;
F->conds_1866 = NULL;
F->conds_1866 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1865 != NULL)) {
F->conds_1866 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->conds_1866))->all), rt_str(" || ", 4)), F->x_1860), rt_str(" == ", 4)), f_exc_id_545(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->n_1865)).name))->all), rt_r_ichk((*(P889)rt_nil_check(F->s_546)).line))); b_; }));
F->n_1865 = (*(P889)rt_nil_check(F->n_1865)).next;
}
if (rt_r_echk(F->first_1857)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P882)rt_nil_check(F->conds_1866))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P882)rt_nil_check(F->conds_1866))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1857 = 0;
f_gen_body_505((*(P889)rt_nil_check(F->h_1856)).b);
F->h_1856 = (*(P889)rt_nil_check(F->h_1856)).next;
}
if (rt_r_echk(F->first_1857)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P889)rt_nil_check(F->s_546)).flag) == ((rt_int)1LL))) {
f_gen_body_505((*(P889)rt_nil_check(F->s_546)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1860), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_965 = (*(P893)rt_nil_check(g_handlers_965)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_549(P889 s_548) {
  struct f_st_alloc_549fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_548 = s_548;
F->lv_1867 = NULL;
F->t_1868 = NULL;
F->target_1869 = NULL;
F->vt_1870 = NULL;
F->c_1871 = NULL;
F->tc_1872 = NULL;
F->ro_1873 = RT_R_EUNDEF;
F->d_1874 = NULL;
F->p_1875 = NULL;
F->a_1876 = NULL;
f_lvalue_669((*(P889)rt_nil_check(F->s_548)).a, &F->lv_1867, &F->t_1868, &F->c_1871, &F->ro_1873);
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_1868)).kind) != (((rt_int)8LL)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_548)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_427(F->t_1868);
F->d_1874 = (*(P895)rt_nil_check(F->t_1868)).decl;
F->target_1869 = (*(P895)rt_nil_check(F->t_1868)).target;
if ((f_list_len_67((*(P889)rt_nil_check(F->s_548)).b) != f_list_len_67((*(P889)rt_nil_check(F->d_1874)).b))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_548)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_67((*(P889)rt_nil_check(F->d_1874)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P889)rt_nil_check(F->d_1874)).b != NULL)) {
f_alloc_cell_439(F->s_548, &(((P882)rt_nil_check(F->lv_1867))->all), F->t_1868, F->c_1871);
goto ret_;
}
{
F->tcn_1877 = rt_str_copy(f_ctype_226(F->target_1869));
F->cell_1878 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_316(F->target_1869)) {
F->fn_1879 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_950 = 1;
g_uses_findyn_952 = 1;
f_put_27(g_out_protos_934, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1879), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1879), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_941)) {
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P882)rt_nil_check((*(P899)rt_nil_check(g_func_sym_953)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_1877), rt_str(" *)cell_)", 9)); b_; }), F->target_1869)); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_941)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1877), rt_str(" *", 2)), F->cell_1878), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1877), rt_str("), ", 3)), F->fn_1879), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1877), rt_str(" *", 2)), F->cell_1878), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1877), rt_str("), ", 3)), F->fn_1879), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1877), rt_str(" *", 2)), F->cell_1878), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1877), rt_str("));", 3)); b_; }));
}
f_open_scope_169();
f_bind_ptr_params_434((*(P889)rt_nil_check(F->d_1874)).d, f_ptr_args_429(F->c_1871), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P889)rt_nil_check(F->s_548)).line));
F->vt_1870 = f_resolve_subtype_257((*(P889)rt_nil_check(F->d_1874)).a, &F->tc_1872);
f_init_storage_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1878), rt_str(")", 1)); b_; }), F->target_1869, F->tc_1872);
f_close_scope_170();
if (((*(P889)rt_nil_check(F->s_548)).c != NULL)) {
F->v_1880 = rt_str_copy(f_gexpr_in_708((*(P889)rt_nil_check(F->s_548)).c, F->target_1869, F->tc_1872, &F->vt_1870));
f_check_type_224(F->vt_1870, F->target_1869, rt_r_ichk((*(P889)rt_nil_check(F->s_548)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_374(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1878), rt_str(")", 1)); b_; }), F->target_1869, &F->v_1880, F->tc_1872); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->lv_1867))->all), rt_str(" = ", 3)), F->cell_1878), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_551(P889 e_550) {
  struct f_act_ref_551fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_550 = e_550;
F->lv_1881 = NULL;
F->t_1882 = NULL;
F->c_1883 = NULL;
F->ro_1884 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P889)rt_nil_check(F->e_550)).kind) == (((rt_int)7LL))) && rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_550)).name))->all), rt_str("ME", 2))) && (f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_663(F->e_550))) {
F->v_1885 = rt_str_copy(f_gexpr_700(F->e_550, g_ty_act_979, &F->t_1882));
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_1882)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_550)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1885;
goto ret_;
}
f_lvalue_669(F->e_550, &F->lv_1881, &F->t_1882, &F->c_1883, &F->ro_1884);
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_1882)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_550)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P882)rt_nil_check(F->lv_1881))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_553(P889 s_552) {
  struct f_st_create_553fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_552 = s_552;
F->y_1886 = NULL;
F->y_1886 = f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->s_552)).name))->all));
F->pm_1887 = NULL;
F->a_1888 = NULL;
F->a_1888 = (*(P889)rt_nil_check(F->s_552)).b;
F->lv_1889 = NULL;
F->lt_1890 = NULL;
F->vt_1891 = NULL;
F->lc_1892 = NULL;
F->ro_1893 = RT_R_EUNDEF;
if (((F->y_1886 != NULL) && (rt_r_ichk((*(P899)rt_nil_check(F->y_1886)).kind) == (((rt_int)10LL))))) {
F->y_1886 = f_instantiate_645(F->y_1886, (*(P889)rt_nil_check(F->s_552)).e, (*(P889)rt_nil_check(F->s_552)).b, rt_r_ichk((*(P889)rt_nil_check(F->s_552)).line));
}
if (((F->y_1886 == NULL) || (rt_r_ichk((*(P899)rt_nil_check(F->y_1886)).kind) != (((rt_int)9LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_552)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->s_552)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1887 = (*(P899)rt_nil_check(F->y_1886)).params;
{
F->at_1894 = NULL;
F->ac_1895 = NULL;
F->aro_1896 = RT_R_EUNDEF;
F->act_1897 = NULL;
F->nf_1898 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_669((*(P889)rt_nil_check(F->s_552)).a, &F->lv_1889, &F->at_1894, &F->ac_1895, &F->aro_1896);
if ((rt_r_ichk((*(P895)rt_nil_check(F->at_1894)).kind) == (((rt_int)14LL)))) {
F->act_1897 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_551((*(P889)rt_nil_check(F->s_552)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_1886)).cname))->all)), rt_str("fr *", 4)), F->nf_1898), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1898), rt_str(");", 2)); b_; }));
if ((rt_r_ichk((*(P899)rt_nil_check(F->y_1886)).level) > ((rt_int)0LL))) {
F->link_1899 = NULL;
F->link_1899 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1901 = ((rt_int)1LL), hi1902 = rt_sub(rt_r_ichk(g_cur_level_942), rt_r_ichk((*(P899)rt_nil_check(F->y_1886)).level));
for (rt_int it1903 = lo1901; it1903 <= hi1902; it1903++) {
F->i_1900 = it1903;
F->link_1899 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->link_1899))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1898, rt_str("->up = ", 7)), (((P882)rt_nil_check(F->link_1899))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_1888 != NULL) && (F->pm_1887 != NULL))) {
if ((rt_r_ichk((*(P901)rt_nil_check(F->pm_1887)).mode) == (((rt_int)1LL)))) {
F->v_1904 = rt_str_copy(f_gexpr_in_708(F->a_1888, (*(P901)rt_nil_check(F->pm_1887)).t, (*(P901)rt_nil_check(F->pm_1887)).c, &F->vt_1891));
f_check_type_224(F->vt_1891, (*(P901)rt_nil_check(F->pm_1887)).t, rt_r_ichk((*(P889)rt_nil_check(F->s_552)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1898, rt_str("->", 2)), (((P882)rt_nil_check((*(P901)rt_nil_check(F->pm_1887)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_377((*(P901)rt_nil_check(F->pm_1887)).t, &F->v_1904)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_669(F->a_1888, &F->lv_1889, &F->lt_1890, &F->lc_1892, &F->ro_1893);
f_check_type_224(F->lt_1890, (*(P901)rt_nil_check(F->pm_1887)).t, rt_r_ichk((*(P889)rt_nil_check(F->s_552)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1898, rt_str("->", 2)), (((P882)rt_nil_check((*(P901)rt_nil_check(F->pm_1887)).cfield))->all)), rt_str(" = &", 4)), (((P882)rt_nil_check(F->lv_1889))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_178((*(P901)rt_nil_check(F->pm_1887)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1898, rt_str("->", 2)), (((P882)rt_nil_check((*(P901)rt_nil_check(F->pm_1887)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_190(F->lt_1890, F->lc_1892)), rt_str("; ", 2)), F->nf_1898), rt_str("->", 2)), (((P882)rt_nil_check((*(P901)rt_nil_check(F->pm_1887)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_193(F->lt_1890, F->lc_1892)), rt_str(";", 1)); b_; }));
}
}
F->a_1888 = (*(P889)rt_nil_check(F->a_1888)).next;
F->pm_1887 = (*(P901)rt_nil_check(F->pm_1887)).next;
}
if (((F->a_1888 != NULL) || (F->pm_1887 != NULL))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->s_552)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P882)rt_nil_check((*(P889)rt_nil_check(F->s_552)).name))->all)); b_; }));
}
if ((F->act_1897 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P882)rt_nil_check(F->act_1897))->all)), rt_str(", &", 3)), (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_1886)).cname))->all)), rt_str("decl, ", 6)), (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_1886)).cname))->all)), rt_str(", ", 2)), F->nf_1898), rt_str("); }", 4)); b_; }));
} else {
f_user_create_563(F->s_552, F->y_1886, &(((P882)rt_nil_check(F->lv_1889))->all), F->at_1894, &F->nf_1898);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_557(rstr *name_554, P895 t_555, rstr *place_556) {
  struct f_hidden_var_557fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_554 = name_554;
F->t_555 = t_555;
F->place_556 = place_556;
F->y_1905 = NULL;
F->y_1905 = f_new_sym_173((((rt_int)1LL)), f_mk_3(&(*F->name_554)));
(*(P899)rt_nil_check(F->y_1905)).t = F->t_555;
(*(P899)rt_nil_check(F->y_1905)).level = ((rt_int)0LL);
(*(P899)rt_nil_check(F->y_1905)).access = f_mk_3(&(*F->place_556));
f_define_160(F->y_1905, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_563(P889 s_558, P899 y_559, rstr *uv_560, P895 ut_561, rstr *nf_562) {
  struct f_user_create_563fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_558 = s_558;
F->y_559 = y_559;
F->uv_560 = uv_560;
F->ut_561 = ut_561;
F->nf_562 = nf_562;
F->t_1906 = NULL;
F->saved_1907 = NULL;
F->saved_1907 = g_code_939;
F->hook_1908 = NULL;
F->hook_1908 = f_new_buffer_24();
F->un_1909 = NULL;
F->un_1909 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P889)rt_nil_check(F->s_558)).line));
F->hn_1910 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1911 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1912 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1913 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_169();
f_hidden_var_557(&F->uname_1912, F->ut_561, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_226(F->ut_561)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P889)rt_nil_check(F->un_1909)).name = f_mk_3(&F->uname_1912);
g_code_939 = F->hook_1908;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1909, rt_r_ichk((*(P889)rt_nil_check(F->s_558)).line)), 1, &F->t_1906)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1909, rt_r_ichk((*(P889)rt_nil_check(F->s_558)).line)), 1, &F->t_1906)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1909, rt_r_ichk((*(P889)rt_nil_check(F->s_558)).line)), 1, &F->t_1906)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1909, rt_r_ichk((*(P889)rt_nil_check(F->s_558)).line)), 1, &F->t_1906)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_939 = F->saved_1907;
f_put_27(g_out_protos_934, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1910), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1910), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (rt_r_echk(g_in_func_941)) {
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P882)rt_nil_check((*(P899)rt_nil_check(g_func_sym_953)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_936, F->hook_1908);
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1911), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1911, rt_str("->hook = ", 9)), F->hn_1910), rt_str("; ", 2)), F->aa_1911), rt_str("->ua = &", 8)), (*F->uv_560)), rt_str("; ", 2)), F->aa_1911), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_838(F->ut_561)), f_q_18()), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_941)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1911, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1911), rt_str(", &", 3)), (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_559)).cname))->all)), rt_str("decl, ", 6)), (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_559)).cname))->all)), rt_str(", ", 2)), (*F->nf_562)), rt_str(");", 2)); b_; }));
f_hidden_var_557(&F->aname_1913, g_ty_act_979, &F->aa_1911);
{
F->start_1914 = NULL;
F->start_1914 = f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P889)rt_nil_check(F->s_558)).a, rt_r_ichk((*(P889)rt_nil_check(F->s_558)).line));
F->an_1915 = NULL;
F->an_1915 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P889)rt_nil_check(F->s_558)).line));
(*(P889)rt_nil_check(F->an_1915)).name = f_mk_3(&F->aname_1913);
(*(P889)rt_nil_check((*(P889)rt_nil_check(F->start_1914)).b)).next = F->an_1915;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_848(F->start_1914, 1, &F->t_1906), rt_str(";", 1)); b_; }));
}
f_close_scope_170();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_568(P889 inv_564, rstr *arr_565, rt_int i_566, int mixed_567) {
  struct f_wait_alt_568fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_564 = inv_564;
F->arr_565 = arr_565;
F->i_566 = i_566;
F->mixed_567 = mixed_567;
F->lv_1916 = NULL;
F->t_1917 = NULL;
F->vt_1918 = NULL;
F->c_1919 = NULL;
F->ro_1920 = RT_R_EUNDEF;
F->fn_1921 = NULL;
F->args_1922 = NULL;
F->slot_1923 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_565), rt_str("[", 1)), f_itos_7(F->i_566)), rt_str("]", 1)));
if (((rt_r_ichk((*(P889)rt_nil_check(F->inv_564)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->inv_564)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->inv_564)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1921 = (*(P889)rt_nil_check(F->inv_564)).a;
F->args_1922 = (*(P889)rt_nil_check(F->inv_564)).b;
if ((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_1921)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_1921)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_669(F->args_1922, &F->lv_1916, &F->t_1917, &F->c_1919, &F->ro_1920);
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_1917)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->inv_564)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_1921)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_1924 = NULL;
F->dt_1925 = NULL;
f_lvalue_669((*(P889)rt_nil_check(F->args_1922)).next, &F->dv_1924, &F->dt_1925, &F->c_1919, &F->ro_1920);
f_check_type_224(F->dt_1925, (*(P895)rt_nil_check(F->t_1917)).elem, rt_r_ichk((*(P889)rt_nil_check(F->inv_564)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1923, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P882)rt_nil_check(F->lv_1916))->all)), rt_str(", &", 3)), (((P882)rt_nil_check(F->dv_1924))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1926 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1927 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->args_1922)).next, (*(P895)rt_nil_check(F->t_1917)).elem, &F->vt_1918));
f_check_type_224(F->vt_1918, (*(P895)rt_nil_check(F->t_1917)).elem, rt_r_ichk((*(P889)rt_nil_check(F->inv_564)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_226((*(P895)rt_nil_check(F->t_1917)).elem), rt_str(" ", 1)), F->tmp_1926), rt_str(" = ", 3)), F->v_1927), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1923, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P882)rt_nil_check(F->lv_1916))->all)), rt_str(", &", 3)), F->tmp_1926), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_1921)).name))->all), rt_str("DELAY_UNTIL", 11)) && (f_list_len_67(F->args_1922) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1923, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_r_act_deadline(", 65)), f_act_delay_args_864(F->args_1922)), rt_str(")};", 3));
goto ret_;
} else if ((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_1921)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_1921)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_1928 = rt_str_copy(f_gexpr_700(F->args_1922, g_ty_int_969, &F->vt_1918));
if ((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_1921)).name))->all), rt_str("DELAY", 5)) && F->mixed_567)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1923, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1928), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_1921)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1923, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1928), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1923, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1928), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_1921)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1923, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_551(F->args_1922)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->inv_564)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_1921)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_570(P889 inv_569) {
  struct f_builtin_wait_570fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_569 = inv_569;
F->lv_1929 = NULL;
F->t_1930 = NULL;
F->c_1931 = NULL;
F->ro_1932 = RT_R_EUNDEF;
F->saved_1933 = NULL;
F->saved_1933 = g_code_939;
F->ok_1934 = RT_R_EUNDEF;
F->ok_1934 = 0;
if (((rt_r_ichk((*(P889)rt_nil_check(F->inv_569)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->inv_569)).a)).kind) != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->inv_569)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->inv_569)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->inv_569)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->inv_569)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->inv_569)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_967 = rt_add(rt_r_ichk(g_trial_967), ((rt_int)1LL));
g_code_939 = f_new_buffer_24();
{ rt_frame xf1935;
if (RT_TRY(xf1935)) {
f_lvalue_669((*(P889)rt_nil_check(F->inv_569)).b, &F->lv_1929, &F->t_1930, &F->c_1931, &F->ro_1932);
F->ok_1934 = (rt_r_ichk((*(P895)rt_nil_check(F->t_1930)).kind) == (((rt_int)12LL)));
RT_POP(xf1935);
} else {
RT_POP(xf1935);
int x1936 = rt_xcur;
if (0 || x1936 == ex_compile_error_1) {
F->ok_1934 = 0;
} else {
rt_raise(x1936);
}
}
}
g_trial_967 = rt_sub(rt_r_ichk(g_trial_967), ((rt_int)1LL));
g_code_939 = F->saved_1933;
F->result_ = rt_r_echk(F->ok_1934);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_575(P889 inv_571, rstr *op_572, rstr *q_573, int is_stmt_574) {
  struct f_wait_op_575fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_571 = inv_571;
F->op_572 = op_572;
F->q_573 = q_573;
F->is_stmt_574 = is_stmt_574;
F->x_1937 = NULL;
F->x_1937 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P889)rt_nil_check(F->inv_571)).line));
F->f_1938 = NULL;
F->f_1938 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P889)rt_nil_check(F->inv_571)).line));
F->qn_1939 = NULL;
F->qn_1939 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P889)rt_nil_check(F->inv_571)).line));
F->t_1940 = NULL;
(*(P889)rt_nil_check(F->f_1938)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->inv_571)).a)).name))->all), rt_str("_", 1)), (*F->op_572)); b_; }));
(*(P889)rt_nil_check(F->qn_1939)).name = f_mk_3(&(*F->q_573));
(*(P889)rt_nil_check(F->qn_1939)).next = (*(P889)rt_nil_check(F->inv_571)).b;
(*(P889)rt_nil_check(F->x_1937)).a = F->f_1938;
(*(P889)rt_nil_check(F->x_1937)).b = F->qn_1939;
{
F->r_1941 = rt_str_copy(f_gcall_848(F->x_1937, F->is_stmt_574, &F->t_1940));
if ((!F->is_stmt_574)) {
f_check_type_224(F->t_1940, g_ty_bool_970, rt_r_ichk((*(P889)rt_nil_check(F->inv_571)).line));
}
F->result_ = F->r_1941;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_580(P889 s_576, rstr *arr_577, rstr *w_578, rt_int n_579) {
  struct f_user_wait_580fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_576 = s_576;
F->arr_577 = arr_577;
F->w_578 = w_578;
F->n_579 = n_579;
F->a_1942 = NULL;
F->a_1942 = (*(P889)rt_nil_check(F->s_576)).a;
F->i_1943 = RT_R_IUNDEF;
F->i_1943 = ((rt_int)0LL);
F->tests_1944 = NULL;
F->tests_1944 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1945 = NULL;
F->revokes_1945 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_169();
while ((F->a_1942 != NULL)) {
F->inv_1946 = NULL;
F->inv_1946 = (*(P889)rt_nil_check(F->a_1942)).a;
while ((F->inv_1946 != NULL)) {
if (f_builtin_wait_570(F->inv_1946)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_568(F->inv_1946, &(*F->arr_577), rt_r_ichk(F->i_1943), 1); b_; }));
} else {
F->st_1947 = NULL;
F->st_1947 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P889)rt_nil_check(F->inv_1946)).line));
F->c_1948 = NULL;
F->qt_1949 = NULL;
F->qname_1950 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1951 = NULL;
F->y_1951 = f_new_sym_173((((rt_int)1LL)), f_mk_3(&F->qname_1950));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_577), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->i_1943))), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P889)rt_nil_check(F->st_1947)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->inv_1946)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_1949 = f_resolve_subtype_257(F->st_1947, &F->c_1948);
{
F->access_1952 = rt_str_copy(f_storage_468(&F->qname_1950, F->qt_1949));
f_init_storage_311(&F->access_1952, F->qt_1949, F->c_1948);
(*(P899)rt_nil_check(F->y_1951)).t = F->qt_1949;
(*(P899)rt_nil_check(F->y_1951)).c = F->c_1948;
f_bind_471(F->y_1951, &F->access_1952);
f_define_160(F->y_1951, rt_r_ichk((*(P889)rt_nil_check(F->inv_1946)).line));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_575(F->inv_1946, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1950, 1), rt_str(";", 1)); b_; }));
F->tests_1944 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->tests_1944))->all), rt_str("if (", 4)), f_wait_op_575(F->inv_1946, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1950, 0)), rt_str(") { ", 4)), f_wait_op_575(F->inv_1946, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1950, 1)), rt_str("; ", 2)), (*F->w_578)), rt_str(" = ", 3)), f_itos_7(rt_r_ichk(F->i_1943))), rt_str("; break; } ", 11)); b_; }));
F->revokes_1945 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->revokes_1945))->all), f_wait_op_575(F->inv_1946, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1950, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1943 = rt_add(rt_r_ichk(F->i_1943), ((rt_int)1LL));
F->inv_1946 = (*(P889)rt_nil_check(F->inv_1946)).next;
}
F->a_1942 = (*(P889)rt_nil_check(F->a_1942)).next;
}
f_close_scope_170();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_578)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P882)rt_nil_check(F->tests_1944))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_578), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_579)), rt_str(", ", 2)), (*F->arr_577)), rt_str("); if (", 7)), (*F->w_578)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_579)), rt_str(", ", 2)), (*F->arr_577)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_578)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_578)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P882)rt_nil_check(F->revokes_1945))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_582(P889 s_581) {
  struct f_st_wait_582fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_581 = s_581;
F->a_1953 = NULL;
F->a_1953 = (*(P889)rt_nil_check(F->s_581)).a;
F->n_1954 = RT_R_IUNDEF;
F->n_1954 = ((rt_int)0LL);
F->first_1955 = RT_R_EUNDEF;
F->first_1955 = 1;
F->inits_1956 = NULL;
F->inits_1956 = f_new_buffer_24();
F->user_1957 = RT_R_EUNDEF;
F->user_1957 = 0;
F->arr_1958 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1959 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1953 != NULL)) {
F->inv_1960 = NULL;
F->inv_1960 = (*(P889)rt_nil_check(F->a_1953)).a;
F->n_1954 = rt_add(rt_r_ichk(F->n_1954), f_list_len_67((*(P889)rt_nil_check(F->a_1953)).a));
while ((F->inv_1960 != NULL)) {
if ((!f_builtin_wait_570(F->inv_1960))) {
F->user_1957 = 1;
}
F->inv_1960 = (*(P889)rt_nil_check(F->inv_1960)).next;
}
F->a_1953 = (*(P889)rt_nil_check(F->a_1953)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1958), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->n_1954))), rt_str("];", 2)); b_; }));
if (rt_r_echk(F->user_1957)) {
f_user_wait_580(F->s_581, &F->arr_1958, &F->w_1959, rt_r_ichk(F->n_1954));
} else {
F->a_1953 = (*(P889)rt_nil_check(F->s_581)).a;
F->n_1954 = ((rt_int)0LL);
while ((F->a_1953 != NULL)) {
F->inv_1961 = NULL;
F->inv_1961 = (*(P889)rt_nil_check(F->a_1953)).a;
while ((F->inv_1961 != NULL)) {
f_put_27(F->inits_1956, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_568(F->inv_1961, &F->arr_1958, rt_r_ichk(F->n_1954), 0); b_; }));
F->n_1954 = rt_add(rt_r_ichk(F->n_1954), ((rt_int)1LL));
F->inv_1961 = (*(P889)rt_nil_check(F->inv_1961)).next;
}
F->a_1953 = (*(P889)rt_nil_check(F->a_1953)).next;
}
f_splice_34(g_code_939, F->inits_1956);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1959), rt_str(" = rt_wait(", 11)), f_itos_7(rt_r_ichk(F->n_1954))), rt_str(", ", 2)), F->arr_1958), rt_str(");", 2)); b_; }));
}
F->a_1953 = (*(P889)rt_nil_check(F->s_581)).a;
F->n_1954 = ((rt_int)0LL);
while ((F->a_1953 != NULL)) {
F->conds_1962 = NULL;
F->conds_1962 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1964 = ((rt_int)1LL), hi1965 = f_list_len_67((*(P889)rt_nil_check(F->a_1953)).a);
for (rt_int it1966 = lo1964; it1966 <= hi1965; it1966++) {
F->i_1963 = it1966;
F->conds_1962 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->conds_1962))->all), rt_str(" || ", 4)), F->w_1959), rt_str(" == ", 4)), f_itos_7(rt_r_ichk(F->n_1954))); b_; }));
F->n_1954 = rt_add(rt_r_ichk(F->n_1954), ((rt_int)1LL));
}
}
if (rt_r_echk(F->first_1955)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P882)rt_nil_check(F->conds_1962))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P882)rt_nil_check(F->conds_1962))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1955 = 0;
f_gen_body_505((*(P889)rt_nil_check(F->a_1953)).b);
F->a_1953 = (*(P889)rt_nil_check(F->a_1953)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P889 f_call_node_586(rstr *name_583, P889 arg_584, rt_int line_585) {
  struct f_call_node_586fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_583 = name_583;
F->arg_584 = arg_584;
F->line_585 = line_585;
F->x_1967 = NULL;
F->x_1967 = f_nn_61((((rt_int)10LL)), F->line_585);
F->f_1968 = NULL;
F->f_1968 = f_nn_61((((rt_int)7LL)), F->line_585);
(*(P889)rt_nil_check(F->f_1968)).name = f_mk_3(&(*F->name_583));
(*(P889)rt_nil_check(F->x_1967)).a = F->f_1968;
(*(P889)rt_nil_check(F->x_1967)).b = f_copy_node_739(F->arg_584);
(*(P889)rt_nil_check((*(P889)rt_nil_check(F->x_1967)).b)).next = NULL;
F->result_ = F->x_1967;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_588(P889 s_587) {
  struct f_user_region_588fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_587 = s_587;
F->t_1969 = NULL;
F->f_1970 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1971 = rt_str_copy(f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P889)rt_nil_check(F->s_587)).a, rt_r_ichk((*(P889)rt_nil_check(F->s_587)).line)), 1, &F->t_1969));
F->unlock_1972 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_848(f_call_node_586(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P889)rt_nil_check(F->s_587)).a, rt_r_ichk((*(P889)rt_nil_check(F->s_587)).line)), 1, &F->t_1969)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1971), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1970), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1970), rt_str(")) {", 4)); b_; }));
f_push_cleanup_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1970), rt_str("); ", 3)), F->unlock_1972); b_; }));
f_gen_body_505((*(P889)rt_nil_check(F->s_587)).b);
f_pop_cleanup_514();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1970), rt_str("); ", 3)), F->unlock_1972); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1970), rt_str("); ", 3)), F->unlock_1972), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_590(P889 s_589) {
  struct f_st_region_590fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_589 = s_589;
F->lv_1973 = NULL;
F->t_1974 = NULL;
F->c_1975 = NULL;
F->ro_1976 = RT_R_EUNDEF;
F->lk_1977 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1978 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_669((*(P889)rt_nil_check(F->s_589)).a, &F->lv_1973, &F->t_1974, &F->c_1975, &F->ro_1976);
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_1974)).kind) != (((rt_int)13LL)))) {
f_user_region_588(F->s_589);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1977), rt_str(" = &", 4)), (((P882)rt_nil_check(F->lv_1973))->all)), rt_str("; rt_region_enter(", 18)), F->lk_1977), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1978), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1978), rt_str(")) {", 4)); b_; }));
f_push_cleanup_513(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1978), rt_str("); rt_region_leave(", 19)), F->lk_1977), rt_str(");", 2)); b_; }));
f_gen_body_505((*(P889)rt_nil_check(F->s_589)).b);
f_pop_cleanup_514();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1978), rt_str("); rt_region_leave(", 19)), F->lk_1977), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1978), rt_str("); rt_region_leave(", 19)), F->lk_1977), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P889 f_gparam_593(P889 g_591, rstr *name_592) {
  struct f_gparam_593fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_591 = g_591;
F->name_592 = name_592;
F->p_1979 = NULL;
F->p_1979 = (*(P889)rt_nil_check(F->g_591)).a;
while ((F->p_1979 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1979)).name))->all), (*F->name_592))) {
F->result_ = F->p_1979;
goto ret_;
}
F->p_1979 = (*(P889)rt_nil_check(F->p_1979)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P899 f_bind_sym_595(P889 p_594) {
  struct f_bind_sym_595fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_594 = p_594;
F->y_1980 = NULL;
if ((rt_r_ichk((*(P889)rt_nil_check(F->p_594)).ival) <= ((rt_int)2LL))) {
F->y_1980 = f_new_sym_173((((rt_int)5LL)), (*(P889)rt_nil_check(F->p_594)).name);
} else {
F->y_1980 = f_new_sym_173((((rt_int)2LL)), (*(P889)rt_nil_check(F->p_594)).name);
}
F->result_ = F->y_1980;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_598(P899 a_596, P899 b_597) {
  struct f_same_binds_598fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_596 = a_596;
F->b_597 = b_597;
F->x_1981 = NULL;
F->x_1981 = F->a_596;
F->y_1982 = NULL;
F->y_1982 = F->b_597;
while (((F->x_1981 != NULL) && (F->y_1982 != NULL))) {
if (((!rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->x_1981)).name))->all), (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_1982)).name))->all))) || (!f_same_binding_601(F->x_1981, F->y_1982)))) {
F->result_ = 0;
goto ret_;
}
F->x_1981 = (*(P899)rt_nil_check(F->x_1981)).mnext;
F->y_1982 = (*(P899)rt_nil_check(F->y_1982)).mnext;
}
F->result_ = ((F->x_1981 == NULL) && (F->y_1982 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_601(P899 a_599, P899 b_600) {
  struct f_same_binding_601fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_599 = a_599;
F->b_600 = b_600;
if ((rt_r_ichk((*(P899)rt_nil_check(F->a_599)).kind) == (((rt_int)5LL)))) {
F->result_ = ((rt_r_ichk((*(P899)rt_nil_check(F->b_600)).kind) == (((rt_int)5LL))) && f_same_213((*(P899)rt_nil_check(F->a_599)).t, (*(P899)rt_nil_check(F->b_600)).t));
goto ret_;
}
if (((rt_r_ichk((*(P899)rt_nil_check(F->a_599)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P899)rt_nil_check(F->a_599)).hasmv))) {
F->result_ = (rt_r_echk((*(P899)rt_nil_check(F->b_600)).hasmv) && (rt_r_ichk((*(P899)rt_nil_check(F->a_599)).mvalue) == rt_r_ichk((*(P899)rt_nil_check(F->b_600)).mvalue)));
goto ret_;
}
if (((rt_r_ichk((*(P899)rt_nil_check(F->a_599)).kind) == (((rt_int)2LL))) && ((*(P899)rt_nil_check(F->a_599)).mv != NULL))) {
if (((((*(P899)rt_nil_check(F->b_600)).mv == NULL) || (rt_r_ichk((*(P908)rt_nil_check((*(P899)rt_nil_check(F->a_599)).mv)).kind) != rt_r_ichk((*(P908)rt_nil_check((*(P899)rt_nil_check(F->b_600)).mv)).kind))) || (!f_same_213((*(P899)rt_nil_check(F->a_599)).t, (*(P899)rt_nil_check(F->b_600)).t)))) {
F->result_ = 0;
goto ret_;
} else if ((rt_r_ichk((*(P908)rt_nil_check((*(P899)rt_nil_check(F->a_599)).mv)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_eq((((P882)rt_nil_check((*(P908)rt_nil_check((*(P899)rt_nil_check(F->a_599)).mv)).s))->all), (((P882)rt_nil_check((*(P908)rt_nil_check((*(P899)rt_nil_check(F->b_600)).mv)).s))->all));
goto ret_;
}
F->result_ = (rt_r_ichk((*(P908)rt_nil_check((*(P899)rt_nil_check(F->a_599)).mv)).i) == rt_r_ichk((*(P908)rt_nil_check((*(P899)rt_nil_check(F->b_600)).mv)).i));
goto ret_;
}
F->result_ = ((((*(P899)rt_nil_check(F->a_599)).cname != NULL) && ((*(P899)rt_nil_check(F->b_600)).cname != NULL)) && rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->a_599)).cname))->all), (((P882)rt_nil_check((*(P899)rt_nil_check(F->b_600)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P899 f_tt_binds_606(P889 gd_602, P889 formals_603, P889 actuals_604, rt_int line_605) {
  struct f_tt_binds_606fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_602 = gd_602;
F->formals_603 = formals_603;
F->actuals_604 = actuals_604;
F->line_605 = line_605;
F->f_1983 = NULL;
F->f_1983 = F->formals_603;
F->a_1984 = NULL;
F->a_1984 = F->actuals_604;
F->binds_1985 = NULL;
F->c_1986 = NULL;
F->at_1987 = NULL;
while (((F->f_1983 != NULL) && (F->a_1984 != NULL))) {
F->p_1988 = NULL;
F->p_1988 = f_gparam_593(F->gd_602, &(((P882)rt_nil_check((*(P889)rt_nil_check(F->f_1983)).name))->all));
F->b_1989 = NULL;
if ((F->p_1988 == NULL)) {
f_fail_23(F->line_605, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->f_1983)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1989 = f_bind_sym_595(F->p_1988);
if ((rt_r_ichk((*(P889)rt_nil_check(F->p_1988)).ival) <= ((rt_int)2LL))) {
if ((rt_r_ichk((*(P889)rt_nil_check(F->a_1984)).kind) >= (((rt_int)70LL)))) {
(*(P899)rt_nil_check(F->b_1989)).t = f_resolve_subtype_257(F->a_1984, &F->c_1986);
} else {
F->st_1990 = NULL;
F->st_1990 = f_nn_61((((rt_int)80LL)), F->line_605);
(*(P889)rt_nil_check(F->st_1990)).name = (*(P889)rt_nil_check(F->a_1984)).name;
(*(P899)rt_nil_check(F->b_1989)).t = f_resolve_subtype_257(F->st_1990, &F->c_1986);
}
(*(P899)rt_nil_check(F->b_1989)).c = F->c_1986;
if ((((*(P889)rt_nil_check(F->p_1988)).b != NULL) && (!f_type_allowed_610((*(P899)rt_nil_check(F->b_1989)).t, (*(P889)rt_nil_check(F->p_1988)).b, F->binds_1985)))) {
f_fail_23(F->line_605, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1988)).name))->all)); b_; }));
}
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->p_1988)).ival) <= ((rt_int)5LL))) {
if ((rt_r_ichk((*(P889)rt_nil_check(F->a_1984)).kind) != (((rt_int)7LL)))) {
f_fail_23(F->line_605, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1988)).name))->all)); b_; }));
}
F->b_1989 = f_copy_sym_401(f_pick_operation_621(rt_r_ichk((*(P889)rt_nil_check(F->p_1988)).ival), &(((P882)rt_nil_check((*(P889)rt_nil_check(F->a_1984)).name))->all), (*(P889)rt_nil_check(F->p_1988)).b, (*(P889)rt_nil_check(F->p_1988)).a, F->binds_1985, F->line_605));
(*(P899)rt_nil_check(F->b_1989)).name = (*(P889)rt_nil_check(F->p_1988)).name;
} else if (((rt_r_ichk((*(P889)rt_nil_check(F->p_1988)).ival) == ((rt_int)7LL)) || (rt_r_ichk((*(P889)rt_nil_check(F->p_1988)).ival) == ((rt_int)8LL)))) {
F->ok_1991 = RT_R_EUNDEF;
(*(P899)rt_nil_check(F->b_1989)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_700(F->a_1984, NULL, &F->at_1987)), rt_str(")", 1)); b_; }));
(*(P899)rt_nil_check(F->b_1989)).t = F->at_1987;
if ((((rt_r_ichk((*(P889)rt_nil_check(F->p_1988)).ival) == ((rt_int)7LL)) && (rt_r_ichk((*(P895)rt_nil_check(F->at_1987)).kind) != (((rt_int)5LL)))) || ((rt_r_ichk((*(P889)rt_nil_check(F->p_1988)).ival) == ((rt_int)8LL)) && ((*(P895)rt_nil_check(f_base_of_215(F->at_1987))).kind != (((rt_int)4LL)))))) {
f_fail_23(F->line_605, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1988)).name))->all)), rt_str(" is not of the kind its constraint requires", 43)); b_; }));
}
(*(P899)rt_nil_check(F->b_1989)).mv = f_meval_343(F->a_1984, &F->ok_1991);
if ((!rt_r_echk(F->ok_1991))) {
f_fail_23(F->line_605, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1988)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
if ((rt_r_ichk((*(P908)rt_nil_check((*(P899)rt_nil_check(F->b_1989)).mv)).kind) == (((rt_int)4LL)))) {
(*(P908)rt_nil_check((*(P899)rt_nil_check(F->b_1989)).mv)).i = f_lit_index_254((*(P895)rt_nil_check(f_base_of_215(F->at_1987))).lits, &(((P882)rt_nil_check((*(P908)rt_nil_check((*(P899)rt_nil_check(F->b_1989)).mv)).s))->all));
}
} else {
F->ok_1992 = RT_R_EUNDEF;
(*(P899)rt_nil_check(F->b_1989)).t = f_resolve_subtype_257((*(P889)rt_nil_check(F->p_1988)).a, &F->c_1986);
(*(P899)rt_nil_check(F->b_1989)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_checked_205((*(P899)rt_nil_check(F->b_1989)).t, F->c_1986, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_700(F->a_1984, (*(P899)rt_nil_check(F->b_1989)).t, &F->at_1987); b_; }))), rt_str(")", 1)); b_; }));
f_check_type_224(F->at_1987, (*(P899)rt_nil_check(F->b_1989)).t, F->line_605);
(*(P899)rt_nil_check(F->b_1989)).mvalue = f_manifest_334(F->a_1984, &F->ok_1992);
(*(P899)rt_nil_check(F->b_1989)).hasmv = rt_r_echk(F->ok_1992);
(*(P899)rt_nil_check(F->b_1989)).mv = f_meval_343(F->a_1984, &F->ok_1992);
if ((!rt_r_echk(F->ok_1992))) {
f_fail_23(F->line_605, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P882)rt_nil_check((*(P889)rt_nil_check(F->p_1988)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
}
(*(P899)rt_nil_check(F->b_1989)).mnext = F->binds_1985;
F->binds_1985 = F->b_1989;
F->f_1983 = (*(P889)rt_nil_check(F->f_1983)).next;
F->a_1984 = (*(P889)rt_nil_check(F->a_1984)).next;
}
F->result_ = F->binds_1985;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_allowed_610(P895 t_607, P889 items_608, P899 binds_609) {
  struct f_type_allowed_610fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_607 = t_607;
F->items_608 = items_608;
F->binds_609 = binds_609;
F->it_1993 = NULL;
F->it_1993 = F->items_608;
F->b_1994 = NULL;
F->b_1994 = f_base_of_215(F->t_607);
while ((F->it_1993 != NULL)) {
if ((((rt_r_ichk((*(P889)rt_nil_check(F->it_1993)).kind) == (((rt_int)80LL))) && ((*(P889)rt_nil_check(F->it_1993)).b == NULL)) && (f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->it_1993)).name))->all)) == NULL))) {
F->w_1995 = rt_str_copy((((P882)rt_nil_check((*(P889)rt_nil_check(F->it_1993)).name))->all));
if (((((((((((rt_str_eq(F->w_1995, rt_str("INT", 3)) && (rt_r_ichk((*(P895)rt_nil_check(F->b_1994)).kind) == (((rt_int)1LL)))) || (rt_str_eq(F->w_1995, rt_str("FLOAT", 5)) && (rt_r_ichk((*(P895)rt_nil_check(F->b_1994)).kind) == (((rt_int)3LL))))) || (rt_str_eq(F->w_1995, rt_str("BOOL", 4)) && (rt_r_ichk((*(P895)rt_nil_check(F->b_1994)).kind) == (((rt_int)2LL))))) || (rt_str_eq(F->w_1995, rt_str("ENUM", 4)) && (rt_r_ichk((*(P895)rt_nil_check(F->b_1994)).kind) == (((rt_int)4LL))))) || (rt_str_eq(F->w_1995, rt_str("STRING", 6)) && (rt_r_ichk((*(P895)rt_nil_check(F->b_1994)).kind) == (((rt_int)5LL))))) || (rt_str_eq(F->w_1995, rt_str("ARRAY", 5)) && (rt_r_ichk((*(P895)rt_nil_check(F->b_1994)).kind) == (((rt_int)6LL))))) || (rt_str_eq(F->w_1995, rt_str("RECORD", 6)) && (rt_r_ichk((*(P895)rt_nil_check(F->b_1994)).kind) == (((rt_int)7LL))))) || (rt_str_eq(F->w_1995, rt_str("UNION", 5)) && (rt_r_ichk((*(P895)rt_nil_check(F->b_1994)).kind) == (((rt_int)17LL))))) || (rt_str_eq(F->w_1995, rt_str("SET", 3)) && (rt_r_ichk((*(P895)rt_nil_check(F->b_1994)).kind) == (((rt_int)16LL))))) || (rt_str_eq(F->w_1995, rt_str("ASCII", 5)) && f_same_213(F->t_607, g_ty_ascii_972)))) {
F->result_ = 1;
goto ret_;
}
} else {
F->c_1996 = NULL;
if (f_same_213(f_resolve_in_binds_614(F->it_1993, F->binds_609, &F->c_1996), F->t_607)) {
F->result_ = 1;
goto ret_;
}
}
F->it_1993 = (*(P889)rt_nil_check(F->it_1993)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P895 f_resolve_in_binds_614(P889 st_611, P899 binds_612, P891 *c_613) {
  struct f_resolve_in_binds_614fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_611 = st_611;
F->binds_612 = binds_612;
F->c_613 = c_613;
F->c_613v = *F->c_613;
F->b_1997 = NULL;
F->b_1997 = F->binds_612;
F->t_1998 = NULL;
f_open_scope_169();
while ((F->b_1997 != NULL)) {
F->z_1999 = NULL;
F->z_1999 = f_copy_sym_401(F->b_1997);
f_define_160(F->z_1999, rt_r_ichk((*(P889)rt_nil_check(F->st_611)).line));
F->b_1997 = (*(P899)rt_nil_check(F->b_1997)).mnext;
}
F->t_1998 = f_resolve_subtype_257(F->st_611, &F->c_613v);
f_close_scope_170();
F->result_ = F->t_1998;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_613) = F->c_613v;
  RT_FPOP();
  return F->result_;
}

static P899 f_pick_operation_621(rt_int kind_615, rstr *name_616, P889 sig_617, P889 res_618, P899 binds_619, rt_int line_620) {
  struct f_pick_operation_621fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_615 = kind_615;
F->name_616 = name_616;
F->sig_617 = sig_617;
F->res_618 = res_618;
F->binds_619 = binds_619;
F->line_620 = line_620;
F->y_2000 = NULL;
F->c_2001 = NULL;
F->want_2002 = RT_R_IUNDEF;
F->want_2002 = (((rt_int)4LL));
if ((F->kind_615 == ((rt_int)4LL))) {
F->want_2002 = (((rt_int)3LL));
} else if ((F->kind_615 == ((rt_int)5LL))) {
F->want_2002 = (((rt_int)9LL));
}
{ rt_int lo2004 = ((rt_int)1LL), hi2005 = ((rt_int)3LL);
for (rt_int it2006 = lo2004; it2006 <= hi2005; it2006++) {
F->pass_2003 = it2006;
F->y_2000 = f_overload_chain_828(&(*F->name_616), F->pass_2003);
while ((F->y_2000 != NULL)) {
if (((rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_2000)).name))->all), (*F->name_616)) && ((rt_r_ichk((*(P899)rt_nil_check(F->y_2000)).kind) == rt_r_ichk(F->want_2002)) || ((F->kind_615 == ((rt_int)0LL)) && ((rt_r_ichk((*(P899)rt_nil_check(F->y_2000)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_2000)).kind) == (((rt_int)3LL))))))) && ((F->pass_2003 != ((rt_int)1LL)) || (rt_r_ichk((*(P899)rt_nil_check(F->y_2000)).depth) >= rt_r_ichk(g_gdepth_958))))) {
F->ok_2007 = RT_R_EUNDEF;
F->ok_2007 = 1;
if (((F->sig_617 != NULL) || (F->kind_615 == ((rt_int)0LL)))) {
F->s_2008 = NULL;
F->s_2008 = F->sig_617;
F->pm_2009 = NULL;
F->pm_2009 = (*(P899)rt_nil_check(F->y_2000)).params;
while (((rt_r_echk(F->ok_2007) && (F->s_2008 != NULL)) && (F->pm_2009 != NULL))) {
F->ok_2007 = f_same_213(f_resolve_in_binds_614(F->s_2008, F->binds_619, &F->c_2001), (*(P901)rt_nil_check(F->pm_2009)).t);
F->s_2008 = (*(P889)rt_nil_check(F->s_2008)).next;
F->pm_2009 = (*(P901)rt_nil_check(F->pm_2009)).next;
}
F->ok_2007 = ((rt_r_echk(F->ok_2007) && (F->s_2008 == NULL)) && (F->pm_2009 == NULL));
}
if ((rt_r_echk(F->ok_2007) && (F->res_618 != NULL))) {
F->ok_2007 = ((rt_r_ichk((*(P899)rt_nil_check(F->y_2000)).kind) == (((rt_int)3LL))) && f_same_213(f_resolve_in_binds_614(F->res_618, F->binds_619, &F->c_2001), (*(P899)rt_nil_check(F->y_2000)).result));
}
if (rt_r_echk(F->ok_2007)) {
F->result_ = F->y_2000;
goto ret_;
}
}
F->y_2000 = (*(P899)rt_nil_check(F->y_2000)).chain;
}
}
}
f_fail_23(F->line_620, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no ", 3), f_kind_word_623(F->kind_615)), (*F->name_616)), rt_str(" has the interface the generic requires", 39)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_word_623(rt_int kind_622) {
  struct f_kind_word_623fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_622 = kind_622;
if ((F->kind_622 == ((rt_int)3LL))) {
F->result_ = rt_str("procedure ", 10);
goto ret_;
} else if ((F->kind_622 == ((rt_int)4LL))) {
F->result_ = rt_str("function ", 9);
goto ret_;
} else if ((F->kind_622 == ((rt_int)5LL))) {
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

static P899 f_need_binds_627(P889 gd_624, P899 binds_625, rt_int line_626) {
  struct f_need_binds_627fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_624 = gd_624;
F->binds_625 = binds_625;
F->line_626 = line_626;
F->it_2010 = NULL;
F->it_2010 = (*(P889)rt_nil_check(F->gd_624)).d;
F->r_2011 = NULL;
F->r_2011 = F->binds_625;
while ((F->it_2010 != NULL)) {
F->found_2012 = RT_R_EUNDEF;
F->found_2012 = 0;
F->y_2013 = NULL;
F->y_2013 = ({ A905 b_ = (((P903)rt_nil_check(g_table_925))->all); b_.p[(rt_index(f_hash_153(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->it_2010)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while (((F->y_2013 != NULL) && (!rt_r_echk(F->found_2012)))) {
if ((rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_2013)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->it_2010)).name))->all)) && (((rt_r_ichk((*(P899)rt_nil_check(F->y_2013)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_2013)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_2013)).kind) == (((rt_int)9LL)))))) {
F->found_2012 = 1;
}
F->y_2013 = (*(P899)rt_nil_check(F->y_2013)).chain;
}
if (rt_r_echk(F->found_2012)) {
F->z_2014 = NULL;
F->z_2014 = f_copy_sym_401(f_pick_operation_621(rt_r_ichk((*(P889)rt_nil_check(F->it_2010)).ival), &(((P882)rt_nil_check((*(P889)rt_nil_check(F->it_2010)).name))->all), (*(P889)rt_nil_check(F->it_2010)).b, (*(P889)rt_nil_check(F->it_2010)).a, F->r_2011, F->line_626));
(*(P899)rt_nil_check(F->z_2014)).mnext = F->r_2011;
F->r_2011 = F->z_2014;
} else if ((!f_is_definable_130(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->it_2010)).name))->all)))) {
f_fail_23(F->line_626, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the generic needs ", 18), (((P882)rt_nil_check((*(P889)rt_nil_check(F->it_2010)).name))->all)), rt_str(", which is not known where it is invoked", 40)); b_; }));
}
F->it_2010 = (*(P889)rt_nil_check(F->it_2010)).next;
}
F->result_ = F->r_2011;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_629(P889 st_628) {
  struct f_generic_use_629fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_628 = st_628;
if ((rt_r_ichk((*(P889)rt_nil_check(F->st_628)).kind) == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P899)rt_nil_check(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P889)rt_nil_check(F->st_628)).kind) == (((rt_int)80LL))) && ((*(P889)rt_nil_check(F->st_628)).a != NULL)) && (f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->st_628)).name))->all)) != NULL)) && ((*(P899)rt_nil_check(f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->st_628)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P899 f_infer_from_634(P889 gd_630, P889 pat_631, P895 t_632, P899 known_633) {
  struct f_infer_from_634fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_630 = gd_630;
F->pat_631 = pat_631;
F->t_632 = t_632;
F->known_633 = known_633;
F->binds_2015 = NULL;
F->binds_2015 = F->known_633;
F->e_2016 = NULL;
F->e_2016 = (*(P889)rt_nil_check(F->pat_631)).a;
F->tp_2017 = NULL;
if (((F->t_632 == NULL) || ((*(P895)rt_nil_check(F->t_632)).gen == NULL))) {
F->result_ = F->binds_2015;
goto ret_;
}
F->tp_2017 = (*(P889)rt_nil_check((*(P899)rt_nil_check((*(P895)rt_nil_check(F->t_632)).gen)).decl)).a;
if ((rt_r_ichk((*(P889)rt_nil_check(F->pat_631)).kind) == (((rt_int)78LL)))) {
F->e_2016 = f_copy_node_739((*(P889)rt_nil_check(F->pat_631)).a);
(*(P889)rt_nil_check(F->e_2016)).next = NULL;
}
while (((F->e_2016 != NULL) && (F->tp_2017 != NULL))) {
F->nm_2018 = NULL;
if (((rt_r_ichk((*(P889)rt_nil_check(F->e_2016)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P889)rt_nil_check(F->e_2016)).kind) == (((rt_int)80LL))))) {
F->nm_2018 = (*(P889)rt_nil_check(F->e_2016)).name;
}
if ((((F->nm_2018 != NULL) && (f_gparam_593(F->gd_630, &(((P882)rt_nil_check(F->nm_2018))->all)) != NULL)) && ((*(P889)rt_nil_check(f_gparam_593(F->gd_630, &(((P882)rt_nil_check(F->nm_2018))->all)))).ival <= ((rt_int)2LL)))) {
F->q_2019 = NULL;
F->q_2019 = F->binds_2015;
F->have_2020 = RT_R_EUNDEF;
F->have_2020 = 0;
while ((F->q_2019 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->q_2019)).name))->all), (((P882)rt_nil_check(F->nm_2018))->all))) {
F->have_2020 = 1;
}
F->q_2019 = (*(P899)rt_nil_check(F->q_2019)).mnext;
}
if ((!rt_r_echk(F->have_2020))) {
F->g_2021 = NULL;
F->g_2021 = (*(P895)rt_nil_check(F->t_632)).gbinds;
while ((F->g_2021 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->g_2021)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->tp_2017)).name))->all))) {
F->b_2022 = NULL;
F->b_2022 = f_bind_sym_595(f_gparam_593(F->gd_630, &(((P882)rt_nil_check(F->nm_2018))->all)));
(*(P899)rt_nil_check(F->b_2022)).t = (*(P899)rt_nil_check(F->g_2021)).t;
(*(P899)rt_nil_check(F->b_2022)).c = (*(P899)rt_nil_check(F->g_2021)).c;
(*(P899)rt_nil_check(F->b_2022)).mnext = F->binds_2015;
F->binds_2015 = F->b_2022;
}
F->g_2021 = (*(P899)rt_nil_check(F->g_2021)).mnext;
}
}
}
F->e_2016 = (*(P889)rt_nil_check(F->e_2016)).next;
F->tp_2017 = (*(P889)rt_nil_check(F->tp_2017)).next;
}
F->result_ = F->binds_2015;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P895 f_instantiate_type_640(P899 g_635, P889 tt_636, P889 args_637, P891 *c_638, rt_int line_639) {
  struct f_instantiate_type_640fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_635 = g_635;
F->tt_636 = tt_636;
F->args_637 = args_637;
F->c_638 = c_638;
F->c_638v = *F->c_638;
F->line_639 = line_639;
F->gd_2023 = NULL;
F->gd_2023 = (*(P899)rt_nil_check(F->g_635)).decl;
F->pat_2024 = NULL;
F->pat_2024 = (*(P889)rt_nil_check(F->gd_2023)).b;
F->binds_2025 = NULL;
F->binds_2025 = f_tt_binds_606(F->gd_2023, (*(P889)rt_nil_check(F->pat_2024)).e, F->tt_636, F->line_639);
F->inst_2026 = NULL;
F->inst_2026 = g_all_insts_927;
F->t_2027 = NULL;
F->saved_caps_2028 = NULL;
F->saved_caps_2028 = g_caps_944;
F->saved_env_2029 = NULL;
F->saved_env_2029 = g_genv_926;
F->saved_gdepth_2030 = RT_R_IUNDEF;
F->saved_gdepth_2030 = rt_r_ichk(g_gdepth_958);
F->c_638v = f_new_cons_176();
(*(P891)rt_nil_check(F->c_638v)).args = F->args_637;
while ((F->inst_2026 != NULL)) {
if ((((*(P899)rt_nil_check(F->inst_2026)).decl == F->pat_2024) && f_same_binds_598((*(P899)rt_nil_check(F->inst_2026)).members, F->binds_2025))) {
F->result_ = (*(P899)rt_nil_check(F->inst_2026)).t;
goto ret_;
}
F->inst_2026 = (*(P899)rt_nil_check(F->inst_2026)).insts;
}
f_open_scope_169();
{
F->b_2031 = NULL;
F->b_2031 = F->binds_2025;
while ((F->b_2031 != NULL)) {
f_define_160(F->b_2031, F->line_639);
F->b_2031 = (*(P899)rt_nil_check(F->b_2031)).mnext;
}
}
g_caps_944 = NULL;
g_genv_926 = (*(P899)rt_nil_check(F->g_635)).env;
g_gdepth_958 = rt_r_ichk(g_depth_928);
{
F->y_2032 = NULL;
F->y_2032 = f_new_sym_173((((rt_int)5LL)), (*(P889)rt_nil_check(F->pat_2024)).name);
F->yc_2033 = NULL;
(*(P899)rt_nil_check(F->y_2032)).decl = F->pat_2024;
if ((rt_r_ichk((*(P889)rt_nil_check(F->pat_2024)).kind) == (((rt_int)44LL)))) {
F->t_2027 = f_new_typ_175((((rt_int)8LL)));
(*(P895)rt_nil_check(F->t_2027)).name = (*(P889)rt_nil_check(F->pat_2024)).name;
(*(P895)rt_nil_check(F->t_2027)).decl = F->pat_2024;
(*(P899)rt_nil_check(F->y_2032)).t = F->t_2027;
f_define_160(F->y_2032, F->line_639);
f_finish_ptr_427(F->t_2027);
} else {
f_define_160(F->y_2032, F->line_639);
F->t_2027 = f_new_type_307(F->y_2032, f_nn_61((((rt_int)80LL)), F->line_639), &F->yc_2033);
}
}
g_caps_944 = F->saved_caps_2028;
g_genv_926 = F->saved_env_2029;
g_gdepth_958 = rt_r_ichk(F->saved_gdepth_2030);
(*(P895)rt_nil_check(F->t_2027)).gen = F->g_635;
(*(P895)rt_nil_check(F->t_2027)).gbinds = F->binds_2025;
f_close_scope_170();
{ R900 *cell2034 = rt_alloc(sizeof(R900));
(*cell2034).name = NULL;
(*cell2034).t = NULL;
(*cell2034).c = NULL;
(*cell2034).access = NULL;
(*cell2034).cname = NULL;
(*cell2034).st = NULL;
(*cell2034).decl = NULL;
(*cell2034).params = NULL;
(*cell2034).result = NULL;
(*cell2034).members = NULL;
(*cell2034).mnext = NULL;
(*cell2034).binds = NULL;
(*cell2034).insts = NULL;
(*cell2034).env = NULL;
(*cell2034).chain = NULL;
(*cell2034).stack = NULL;
(*cell2034).owner = NULL;
(*cell2034).gctx = NULL;
(*cell2034).mv = NULL;
(*cell2034).reqs = NULL;
(*cell2034).home = NULL;
(*cell2034).capn = NULL;
(*cell2034).tbinds = NULL;
F->inst_2026 = cell2034;
}
(*(P899)rt_nil_check(F->inst_2026)).kind = (((rt_int)5LL));
(*(P899)rt_nil_check(F->inst_2026)).name = (*(P899)rt_nil_check(F->g_635)).name;
(*(P899)rt_nil_check(F->inst_2026)).decl = F->pat_2024;
(*(P899)rt_nil_check(F->inst_2026)).t = F->t_2027;
(*(P899)rt_nil_check(F->inst_2026)).members = F->binds_2025;
(*(P899)rt_nil_check(F->inst_2026)).insts = g_all_insts_927;
g_all_insts_927 = F->inst_2026;
F->result_ = F->t_2027;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_638) = F->c_638v;
  RT_FPOP();
  return F->result_;
}

static P899 f_instantiate_645(P899 g_641, P889 tt_642, P889 args_643, rt_int line_644) {
  struct f_instantiate_645fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_641 = g_641;
F->tt_642 = tt_642;
F->args_643 = args_643;
F->line_644 = line_644;
F->gd_2035 = NULL;
F->gd_2035 = (*(P899)rt_nil_check(F->g_641)).decl;
F->pat_2036 = NULL;
F->pat_2036 = (*(P889)rt_nil_check(F->gd_2035)).b;
F->binds_2037 = NULL;
F->f_2038 = NULL;
F->f_2038 = (*(P889)rt_nil_check(F->pat_2036)).e;
F->a_2039 = NULL;
F->a_2039 = F->tt_642;
F->fp_2040 = NULL;
F->fp_2040 = (*(P889)rt_nil_check(F->pat_2036)).a;
F->inst_2041 = NULL;
F->at_2042 = NULL;
F->c_2043 = NULL;
F->saved_fctx_2044 = NULL;
F->saved_fctx_2044 = g_fctx_943;
F->saved_in_2045 = RT_R_EUNDEF;
F->saved_in_2045 = rt_r_echk(g_in_func_941);
F->saved_level_2046 = RT_R_IUNDEF;
F->saved_level_2046 = rt_r_ichk(g_cur_level_942);
F->saved_sym_2047 = NULL;
F->saved_sym_2047 = g_func_sym_953;
F->saved_code_2048 = NULL;
F->saved_code_2048 = g_code_939;
F->saved_env_2049 = NULL;
F->saved_env_2049 = g_genv_926;
F->saved_gdepth_2050 = RT_R_IUNDEF;
F->saved_gdepth_2050 = rt_r_ichk(g_gdepth_958);
F->binds_2037 = f_tt_binds_606(F->gd_2035, F->f_2038, F->a_2039, F->line_644);
F->a_2039 = F->args_643;
while (((F->fp_2040 != NULL) && (F->a_2039 != NULL))) {
if (f_generic_use_629((*(P889)rt_nil_check(F->fp_2040)).a)) {
F->v_2051 = rt_str_copy(f_gexpr_700(F->a_2039, NULL, &F->at_2042));
F->binds_2037 = f_infer_from_634(F->gd_2035, (*(P889)rt_nil_check(F->fp_2040)).a, F->at_2042, F->binds_2037);
} else if ((((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->fp_2040)).a)).kind) == (((rt_int)80LL))) && (f_gparam_593(F->gd_2035, &(((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->fp_2040)).a)).name))->all)) != NULL)) && ((*(P889)rt_nil_check(f_gparam_593(F->gd_2035, &(((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->fp_2040)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_2052 = RT_R_EUNDEF;
F->known_2052 = 0;
F->q_2053 = NULL;
F->q_2053 = F->binds_2037;
while ((F->q_2053 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->q_2053)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->fp_2040)).a)).name))->all))) {
F->known_2052 = 1;
}
F->q_2053 = (*(P899)rt_nil_check(F->q_2053)).mnext;
}
if ((!rt_r_echk(F->known_2052))) {
F->b_2054 = NULL;
F->b_2054 = f_bind_sym_595(f_gparam_593(F->gd_2035, &(((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->fp_2040)).a)).name))->all)));
F->v_2055 = rt_str_copy(f_gexpr_700(F->a_2039, NULL, &F->at_2042));
(*(P899)rt_nil_check(F->b_2054)).t = F->at_2042;
(*(P899)rt_nil_check(F->b_2054)).c = g_no_cons_981;
if ((((*(P889)rt_nil_check(f_gparam_593(F->gd_2035, &(((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->fp_2040)).a)).name))->all)))).b != NULL) && (!f_type_allowed_610(F->at_2042, (*(P889)rt_nil_check(f_gparam_593(F->gd_2035, &(((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->fp_2040)).a)).name))->all)))).b, F->binds_2037)))) {
f_fail_23(F->line_644, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->fp_2040)).a)).name))->all)); b_; }));
}
(*(P899)rt_nil_check(F->b_2054)).mnext = F->binds_2037;
F->binds_2037 = F->b_2054;
}
}
F->fp_2040 = (*(P889)rt_nil_check(F->fp_2040)).next;
F->a_2039 = (*(P889)rt_nil_check(F->a_2039)).next;
}
F->binds_2037 = f_need_binds_627(F->gd_2035, F->binds_2037, F->line_644);
F->inst_2041 = g_all_insts_927;
while ((F->inst_2041 != NULL)) {
if ((((*(P899)rt_nil_check(F->inst_2041)).decl == F->pat_2036) && f_same_binds_598((*(P899)rt_nil_check(F->inst_2041)).members, F->binds_2037))) {
F->result_ = F->inst_2041;
goto ret_;
}
F->inst_2041 = (*(P899)rt_nil_check(F->inst_2041)).insts;
}
g_fctx_943 = (*(P899)rt_nil_check(F->g_641)).gctx;
g_in_func_941 = (rt_r_ichk((*(P899)rt_nil_check(F->g_641)).level) > ((rt_int)0LL));
g_cur_level_942 = rt_r_ichk((*(P899)rt_nil_check(F->g_641)).level);
g_func_sym_953 = (*(P899)rt_nil_check(F->g_641)).owner;
g_code_939 = f_new_buffer_24();
f_open_scope_169();
g_gdepth_958 = rt_r_ichk(g_depth_928);
{
F->b_2056 = NULL;
F->b_2056 = F->binds_2037;
while ((F->b_2056 != NULL)) {
f_define_160(F->b_2056, F->line_644);
F->b_2056 = (*(P899)rt_nil_check(F->b_2056)).mnext;
}
}
g_genv_926 = (*(P899)rt_nil_check(F->g_641)).env;
F->inst_2041 = f_build_subprogram_454(F->pat_2036);
(*(P899)rt_nil_check(F->inst_2041)).members = F->binds_2037;
(*(P899)rt_nil_check(F->inst_2041)).insts = g_all_insts_927;
g_all_insts_927 = F->inst_2041;
f_define_160(F->inst_2041, F->line_644);
f_gen_subprogram_484(F->pat_2036, F->inst_2041);
f_close_scope_170();
g_fctx_943 = F->saved_fctx_2044;
g_in_func_941 = rt_r_echk(F->saved_in_2045);
g_cur_level_942 = rt_r_ichk(F->saved_level_2046);
g_func_sym_953 = F->saved_sym_2047;
g_code_939 = F->saved_code_2048;
g_genv_926 = F->saved_env_2049;
g_gdepth_958 = rt_r_ichk(F->saved_gdepth_2050);
F->result_ = F->inst_2041;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_647(P899 y_646) {
  struct f_access_of_647fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_646 = y_646;
F->p_2057 = NULL;
F->p_2057 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if ((rt_r_ichk((*(P899)rt_nil_check(F->y_646)).level) <= ((rt_int)0LL))) {
F->result_ = (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_646)).access))->all);
goto ret_;
}
{ rt_int lo2059 = ((rt_int)1LL), hi2060 = rt_sub(rt_r_ichk(g_cur_level_942), rt_r_ichk((*(P899)rt_nil_check(F->y_646)).level));
for (rt_int it2061 = lo2059; it2061 <= hi2060; it2061++) {
F->i_2058 = it2061;
F->p_2057 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->p_2057))->all), rt_str("->up", 4)); b_; }));
}
}
if (rt_r_echk((*(P899)rt_nil_check(F->y_646)).byref)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P882)rt_nil_check(F->p_2057))->all)), rt_str("->", 2)), (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_646)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->p_2057))->all), rt_str("->", 2)), (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_646)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_import_of_650(P889 l_648, rstr *name_649) {
  struct f_import_of_650fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_648 = l_648;
F->name_649 = name_649;
F->p_2062 = NULL;
F->p_2062 = F->l_648;
while ((F->p_2062 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_2062)).name))->all), (*F->name_649))) {
F->result_ = F->p_2062;
goto ret_;
}
F->p_2062 = (*(P889)rt_nil_check(F->p_2062)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_653(P899 y_651, rt_int line_652) {
  struct f_check_import_653fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_651 = y_651;
F->line_652 = line_652;
F->c_2063 = NULL;
F->c_2063 = g_fctx_943;
F->ro_2064 = RT_R_EUNDEF;
F->ro_2064 = 0;
while (((F->c_2063 != NULL) && (rt_r_ichk((*(P899)rt_nil_check(F->y_651)).depth) < rt_r_ichk((*(P906)rt_nil_check(F->c_2063)).depth)))) {
if ((!rt_r_echk((*(P906)rt_nil_check(F->c_2063)).all_imp))) {
F->imp_2065 = NULL;
F->imp_2065 = f_import_of_650((*(P906)rt_nil_check(F->c_2063)).imps, &(((P882)rt_nil_check((*(P899)rt_nil_check(F->y_651)).name))->all));
if ((F->imp_2065 == NULL)) {
f_fail_23(F->line_652, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_651)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if ((rt_r_ichk((*(P889)rt_nil_check(F->imp_2065)).ival) == ((rt_int)1LL))) {
F->ro_2064 = 1;
}
}
F->c_2063 = (*(P906)rt_nil_check(F->c_2063)).next;
}
F->result_ = rt_r_echk(F->ro_2064);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_655(rstr *s_654) {
  struct f_c_ident_655fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_654 = s_654;
if (((((rt_int)(((*F->s_654)).len)) > ((rt_int)1LL)) && (rt_r_echk(rt_str_get((*F->s_654), ((rt_int)1LL))) == 46))) {
F->result_ = rt_str_cat(rt_str("dot_", 4), f_lower_s_15(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_654), ((rt_int)2LL), ((rt_int)(((*F->s_654)).len))); b_; })));
goto ret_;
} else if (((((rt_int)(((*F->s_654)).len)) > ((rt_int)1LL)) && (rt_r_echk(rt_str_get((*F->s_654), ((rt_int)1LL))) == 40))) {
F->r_2066 = NULL;
F->r_2066 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel_", 4); b_; }));
{ rt_int lo2068 = ((rt_int)2LL), hi2069 = rt_sub(((rt_int)(((*F->s_654)).len)), ((rt_int)1LL));
for (rt_int it2070 = lo2068; it2070 <= hi2069; it2070++) {
F->i_2067 = it2070;
if ((rt_r_echk(rt_str_get((*F->s_654), F->i_2067)) == 42)) {
F->r_2066 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_2066))->all), rt_str("s", 1)); b_; }));
} else if ((rt_r_echk(rt_str_get((*F->s_654), F->i_2067)) == 44)) {
F->r_2066 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_2066))->all), rt_str("_", 1)); b_; }));
} else if ((rt_r_echk(rt_str_get((*F->s_654), F->i_2067)) == 46)) {
F->r_2066 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_2066))->all), rt_str("r", 1)); b_; }));
}
}
}
F->result_ = (((P882)rt_nil_check(F->r_2066))->all);
goto ret_;
} else if (rt_str_eq((*F->s_654), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_654), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_654), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_654), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_654), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_654), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_654), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_654), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_654), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_654), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_654), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_654), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_654), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_654), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_654));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cell_deref_658(P895 t_656, rstr *p_657) {
  struct f_cell_deref_658fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_656 = t_656;
F->p_657 = p_657;
if ((((*(P895)rt_nil_check(F->t_656)).decl != NULL) && ((*(P889)rt_nil_check((*(P895)rt_nil_check(F->t_656)).decl)).b != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->p_657)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*F->p_657)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_661(rstr *base_659, P895 t_660) {
  struct f_deref_661fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_659 = base_659;
F->t_660 = t_660;
if ((((*(P895)rt_nil_check(F->t_660)).decl != NULL) && ((*(P889)rt_nil_check((*(P895)rt_nil_check(F->t_660)).decl)).b != NULL))) {
if (f_suppressed_461(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->base_659)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_226(F->t_660)), rt_str(")rt_nil_check(", 14)), (*F->base_659)), rt_str("))->all)", 8));
goto ret_;
}
if (f_suppressed_461(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_226(F->t_660)), rt_str(")(", 2)), (*F->base_659)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_226(F->t_660)), rt_str(")rt_nil_check(", 14)), (*F->base_659)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_663(P889 e_662) {
  struct f_is_lvalue_663fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_662 = e_662;
if ((rt_r_ichk((*(P889)rt_nil_check(F->e_662)).kind) == (((rt_int)7LL)))) {
F->y_2071 = NULL;
F->y_2071 = f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_662)).name))->all));
F->result_ = ((F->y_2071 != NULL) && ((rt_r_ichk((*(P899)rt_nil_check(F->y_2071)).kind) == (((rt_int)1LL))) || (((rt_r_ichk((*(P899)rt_nil_check(F->y_2071)).kind) == (((rt_int)2LL))) && ((*(P899)rt_nil_check(F->y_2071)).mv == NULL)) && (!rt_r_echk((*(P899)rt_nil_check(F->y_2071)).hasmv)))));
goto ret_;
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_662)).kind) == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_663((*(P889)rt_nil_check(F->e_662)).a);
goto ret_;
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_662)).kind) == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_662)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_663((*(P889)rt_nil_check(F->e_662)).a));
goto ret_;
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_662)).kind) == (((rt_int)10LL)))) {
if ((((*(P889)rt_nil_check(F->e_662)).b != NULL) && (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_662)).b)).kind) == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_663((*(P889)rt_nil_check(F->e_662)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_669(P889 e_664, P882 *code_665, P895 *t_666, P891 *c_667, int *ro_668) {
  struct f_lvalue_669fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_664 = e_664;
F->code_665 = code_665;
F->code_665v = *F->code_665;
F->t_666 = t_666;
F->t_666v = *F->t_666;
F->c_667 = c_667;
F->c_667v = *F->c_667;
F->ro_668 = ro_668;
F->ro_668v = *F->ro_668;
F->base_2072 = NULL;
F->bt_2073 = NULL;
F->bc_2074 = NULL;
if ((rt_r_ichk((*(P889)rt_nil_check(F->e_664)).kind) == (((rt_int)7LL)))) {
F->y_2075 = NULL;
F->y_2075 = f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_664)).name))->all));
if ((F->y_2075 == NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_664)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_664)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P899)rt_nil_check(F->y_2075)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P899)rt_nil_check(F->y_2075)).kind) != (((rt_int)2LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_664)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_664)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_665v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_647(F->y_2075); b_; }));
F->t_666v = (*(P899)rt_nil_check(F->y_2075)).t;
F->c_667v = (*(P899)rt_nil_check(F->y_2075)).c;
F->ro_668v = rt_r_echk((*(P899)rt_nil_check(F->y_2075)).ro_flag);
if (((rt_r_ichk((*(P899)rt_nil_check(F->y_2075)).kind) == (((rt_int)1LL))) && f_check_import_653(F->y_2075, rt_r_ichk((*(P889)rt_nil_check(F->e_664)).line)))) {
F->ro_668v = 1;
}
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_664)).kind) == (((rt_int)17LL)))) {
f_lvalue_669((*(P889)rt_nil_check(F->e_664)).a, &F->code_665v, &F->t_666v, &F->c_667v, &F->ro_668v);
} else if (((((rt_r_ichk((*(P889)rt_nil_check(F->e_664)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_664)).a)).kind) == (((rt_int)7LL)))) && rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_664)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_665v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_836((*(P889)rt_nil_check(F->e_664)).b, rt_r_ichk((*(P889)rt_nil_check(F->e_664)).line), &F->t_666v); b_; }));
F->c_667v = g_no_cons_981;
F->ro_668v = 0;
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_664)).kind) == (((rt_int)11LL)))) {
f_lvalue_669((*(P889)rt_nil_check(F->e_664)).a, &F->base_2072, &F->bt_2073, &F->bc_2074, &F->ro_668v);
f_select_on_677(&(((P882)rt_nil_check(F->base_2072))->all), F->bt_2073, F->e_664, &F->ro_668v, &F->code_665v, &F->t_666v, &F->c_667v);
} else if ((rt_r_ichk((*(P889)rt_nil_check(F->e_664)).kind) == (((rt_int)10LL)))) {
f_lvalue_669((*(P889)rt_nil_check(F->e_664)).a, &F->base_2072, &F->bt_2073, &F->bc_2074, &F->ro_668v);
f_index_on_694(&(((P882)rt_nil_check(F->base_2072))->all), F->bt_2073, F->e_664, &F->ro_668v, 1, &F->code_665v, &F->t_666v, &F->c_667v);
} else {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_664)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_665) = F->code_665v;  (*F->t_666) = F->t_666v;  (*F->c_667) = F->c_667v;  if (!rt_r_undef_BOOL(F->ro_668v)) (*F->ro_668) = F->ro_668v;
  RT_FPOP();
  return;
}

static void f_select_on_677(rstr *base_670, P895 bt_671, P889 e_672, int *ro_673, P882 *code_674, P895 *t_675, P891 *c_676) {
  struct f_select_on_677fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_670 = base_670;
F->bt_671 = bt_671;
F->e_672 = e_672;
F->ro_673 = ro_673;
F->code_674 = code_674;
F->code_674v = *F->code_674;
F->t_675 = t_675;
F->t_675v = *F->t_675;
F->c_676 = c_676;
F->c_676v = *F->c_676;
F->c_676v = g_no_cons_981;
if ((rt_r_ichk((*(P895)rt_nil_check(F->bt_671)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_427(F->bt_671);
(*F->ro_673) = 0;
if (((*(P895)rt_nil_check(F->bt_671)).decl != NULL)) {
F->p_2076 = NULL;
F->p_2076 = (*(P889)rt_nil_check((*(P895)rt_nil_check(F->bt_671)).decl)).b;
while ((F->p_2076 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_2076)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_672)).name))->all))) {
F->pc_2077 = NULL;
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_226(F->bt_671)), rt_str(")rt_nil_check(", 14)), (*F->base_670)), rt_str("))->p_", 6)), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_2076)).name))->all))), rt_str(")", 1)); b_; }));
F->t_675v = f_resolve_subtype_257((*(P889)rt_nil_check(F->p_2076)).a, &F->pc_2077);
(*F->ro_673) = 1;
goto ret_;
}
F->p_2076 = (*(P889)rt_nil_check(F->p_2076)).next;
}
}
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_672)).name))->all), rt_str("ALL", 3))) {
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_661(&(*F->base_670), F->bt_671); b_; }));
F->t_675v = (*(P895)rt_nil_check(F->bt_671)).target;
goto ret_;
}
f_select_on_677(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_661(&(*F->base_670), F->bt_671); b_; }), (*(P895)rt_nil_check(F->bt_671)).target, F->e_672, &(*F->ro_673), &F->code_674v, &F->t_675v, &F->c_676v);
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->bt_671)).kind) == (((rt_int)15LL)))) {
F->p_2078 = NULL;
F->p_2078 = (*(P895)rt_nil_check(F->bt_671)).tparams;
while ((F->p_2078 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_2078)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_672)).name))->all))) {
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_670), rt_str(".p_", 3)), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_2078)).name))->all))); b_; }));
F->t_675v = f_tparam_type_322(F->bt_671, &(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_2078)).name))->all));
(*F->ro_673) = 1;
goto ret_;
}
F->p_2078 = (*(P889)rt_nil_check(F->p_2078)).next;
}
F->p_2078 = (*(P895)rt_nil_check(F->bt_671)).tparams;
if ((!f_opened_297(F->bt_671))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_672)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P882)rt_nil_check((*(P895)rt_nil_check(F->bt_671)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P895)rt_nil_check(F->bt_671)).tparams == NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_672)).name))->all), rt_str("ALL", 3))) {
F->code_674v = f_mk_3(&(*F->base_670));
F->t_675v = (*(P895)rt_nil_check(F->bt_671)).under;
goto ret_;
}
f_select_on_677(&(*F->base_670), (*(P895)rt_nil_check(F->bt_671)).under, F->e_672, &(*F->ro_673), &F->code_674v, &F->t_675v, &F->c_676v);
goto ret_;
}
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_672)).name))->all), rt_str("ALL", 3))) {
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_670), rt_str(".all", 4)); b_; }));
F->t_675v = (*(P895)rt_nil_check(F->bt_671)).under;
goto ret_;
}
while ((F->p_2078 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_2078)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_672)).name))->all))) {
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_670), rt_str(".p_", 3)), f_lower_s_15(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_2078)).name))->all))); b_; }));
F->t_675v = f_tparam_type_322(F->bt_671, &(((P882)rt_nil_check((*(P889)rt_nil_check(F->p_2078)).name))->all));
(*F->ro_673) = 1;
goto ret_;
}
F->p_2078 = (*(P889)rt_nil_check(F->p_2078)).next;
}
f_select_on_677(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_670), rt_str(".all", 4)); b_; }), (*(P895)rt_nil_check(F->bt_671)).under, F->e_672, &(*F->ro_673), &F->code_674v, &F->t_675v, &F->c_676v);
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->bt_671)).kind) == (((rt_int)17LL)))) {
F->f_2079 = NULL;
F->f_2079 = (*(P895)rt_nil_check(F->bt_671)).fields;
F->i_2080 = RT_R_IUNDEF;
F->i_2080 = ((rt_int)0LL);
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_672)).name))->all), rt_str("TAG", 3))) {
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_670)), rt_str(").tag)", 6)); b_; }));
F->t_675v = (*(P895)rt_nil_check(F->bt_671)).elem;
(*F->ro_673) = 1;
goto ret_;
}
while ((F->f_2079 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P897)rt_nil_check(F->f_2079)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_672)).name))->all))) {
F->fn_2081 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_670)), rt_str(").u.", 4)), f_field_c_17(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_672)).name))->all))));
F->c_676v = (*(P897)rt_nil_check(F->f_2079)).c;
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_670)), rt_str(").tag == ", 9)), f_itos_7(rt_r_ichk(F->i_2080))), rt_str(" \? &", 4)), F->fn_2081), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_2081), rt_str(")))", 3)); b_; }));
F->t_675v = (*(P897)rt_nil_check(F->f_2079)).t;
goto ret_;
}
F->i_2080 = rt_add(rt_r_ichk(F->i_2080), ((rt_int)1LL));
F->f_2079 = (*(P897)rt_nil_check(F->f_2079)).next;
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_672)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_672)).name))->all)); b_; }));
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->bt_671)).kind) == (((rt_int)7LL)))) {
F->f_2082 = NULL;
F->f_2082 = (*(P895)rt_nil_check(F->bt_671)).fields;
while ((F->f_2082 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P897)rt_nil_check(F->f_2082)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_672)).name))->all))) {
F->c_676v = (*(P897)rt_nil_check(F->f_2082)).c;
F->code_674v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_670), rt_str(".", 1)), f_field_c_17(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_672)).name))->all))); b_; }));
F->t_675v = (*(P897)rt_nil_check(F->f_2082)).t;
goto ret_;
}
F->f_2082 = (*(P897)rt_nil_check(F->f_2082)).next;
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_672)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_672)).name))->all)); b_; }));
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_672)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_672)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_674) = F->code_674v;  (*F->t_675) = F->t_675v;  (*F->c_676) = F->c_676v;
  RT_FPOP();
  return;
}

static int f_has_call_679(rstr *s_678) {
  struct f_has_call_679fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_678 = s_678;
{ rt_int lo2084 = ((rt_int)1LL), hi2085 = ((rt_int)(((*F->s_678)).len));
for (rt_int it2086 = lo2084; it2086 <= hi2085; it2086++) {
F->i_2083 = it2086;
if ((rt_r_echk(rt_str_get((*F->s_678), F->i_2083)) == 40)) {
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

static void f_need_slice_681(P895 t_680) {
  struct f_need_slice_681fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_680 = t_680;
F->c_2087 = rt_str_copy(f_ctype_226(F->t_680));
F->n_2088 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_2087));
F->l_2089 = NULL;
if (f_seen_name_388(g_mcopies_968, &F->n_2088)) {
goto ret_;
}
{ R894 *cell2090 = rt_alloc(sizeof(R894));
(*cell2090).s = NULL;
(*cell2090).next = NULL;
F->l_2089 = cell2090;
}
(*(P893)rt_nil_check(F->l_2089)).s = f_mk_3(&F->n_2088);
(*(P893)rt_nil_check(F->l_2089)).next = g_mcopies_968;
g_mcopies_968 = F->l_2089;
f_put_27(g_out_protos_934, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2087), rt_str(" ", 1)), F->n_2088), rt_str("(", 1)), F->c_2087), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2087), rt_str(" ", 1)), F->n_2088), rt_str("(", 1)), F->c_2087), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_934, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2087), rt_str(" rt_r_acat_", 11)), F->c_2087), rt_str("(", 1)), F->c_2087), rt_str(" a, ", 4)), F->c_2087), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2087), rt_str(" rt_r_acat_", 11)), F->c_2087), rt_str("(", 1)), F->c_2087), rt_str(" a, ", 4)), F->c_2087), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_2087), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_377((*(P895)rt_nil_check(F->t_680)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_377((*(P895)rt_nil_check(F->t_680)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_685(rstr *i_682, rstr *lo_683, rstr *hi_684) {
  struct f_ix_685fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_682 = i_682;
F->lo_683 = lo_683;
F->hi_684 = hi_684;
if (f_suppressed_461(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_682)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_682)), rt_str(", ", 2)), (*F->lo_683)), rt_str(", ", 2)), (*F->hi_684)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_694(rstr *base_686, P895 bt_687, P889 e_688, int *ro_689, int lv_690, P882 *code_691, P895 *t_692, P891 *c_693) {
  struct f_index_on_694fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_686 = base_686;
F->bt_687 = bt_687;
F->e_688 = e_688;
F->ro_689 = ro_689;
F->lv_690 = lv_690;
F->code_691 = code_691;
F->code_691v = *F->code_691;
F->t_692 = t_692;
F->t_692v = *F->t_692;
F->c_693 = c_693;
F->c_693v = *F->c_693;
F->a_2091 = NULL;
F->a_2091 = (*(P889)rt_nil_check(F->e_688)).b;
F->it_2092 = NULL;
F->c_693v = g_no_cons_981;
if ((rt_r_ichk((*(P895)rt_nil_check(F->bt_687)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_427(F->bt_687);
(*F->ro_689) = 0;
f_index_on_694(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_661(&(*F->base_686), F->bt_687); b_; }), (*(P895)rt_nil_check(F->bt_687)).target, F->e_688, &(*F->ro_689), F->lv_690, &F->code_691v, &F->t_692v, &F->c_693v);
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->bt_687)).kind) == (((rt_int)15LL)))) {
if ((!f_opened_297(F->bt_687))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_688)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P882)rt_nil_check((*(P895)rt_nil_check(F->bt_687)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P895)rt_nil_check(F->bt_687)).tparams == NULL)) {
f_index_on_694(&(*F->base_686), (*(P895)rt_nil_check(F->bt_687)).under, F->e_688, &(*F->ro_689), F->lv_690, &F->code_691v, &F->t_692v, &F->c_693v);
} else {
f_index_on_694(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_686), rt_str(".all", 4)); b_; }), (*(P895)rt_nil_check(F->bt_687)).under, F->e_688, &(*F->ro_689), F->lv_690, &F->code_691v, &F->t_692v, &F->c_693v);
}
goto ret_;
}
if ((((rt_r_ichk((*(P895)rt_nil_check(F->bt_687)).kind) == (((rt_int)6LL))) && (F->a_2091 != NULL)) && (rt_r_ichk((*(P889)rt_nil_check(F->a_2091)).kind) == (((rt_int)16LL))))) {
if (((rt_r_ichk((*(P895)rt_nil_check(F->bt_687)).ndim) != ((rt_int)1LL)) || ((*(P889)rt_nil_check(F->a_2091)).next != NULL))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_688)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_2093 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->a_2091)).a, (*(P895)rt_nil_check(F->bt_687)).idx, &F->it_2092));
F->hi_2094 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->a_2091)).b, (*(P895)rt_nil_check(F->bt_687)).idx, &F->it_2092));
F->code_691v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_226(F->bt_687)), rt_str("(", 1)), (*F->base_686)), rt_str(", ", 2)), F->lo_2093), rt_str(", ", 2)), F->hi_2094), rt_str(")", 1)); b_; }));
f_need_slice_681(F->bt_687);
F->t_692v = F->bt_687;
(*F->ro_689) = 1;
}
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->bt_687)).kind) == (((rt_int)6LL)))) {
F->off_2095 = NULL;
F->k_2096 = RT_R_IUNDEF;
F->k_2096 = ((rt_int)0LL);
F->b_2097 = NULL;
F->b_2097 = f_mk_3(&(*F->base_686));
F->pre_2098 = NULL;
F->pre_2098 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_67(F->a_2091) != rt_r_ichk((*(P895)rt_nil_check(F->bt_687)).ndim))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_688)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7(rt_r_ichk((*(P895)rt_nil_check(F->bt_687)).ndim)), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_690) && f_has_call_679(&(*F->base_686)))) {
F->pre_2098 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->bt_687)), rt_str(" b_ = ", 6)), (*F->base_686)), rt_str("; ", 2)); b_; }));
F->b_2097 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_2091 != NULL)) {
F->k_2096 = rt_add(rt_r_ichk(F->k_2096), ((rt_int)1LL));
{
F->i_2099 = rt_str_copy(f_gexpr_700(F->a_2091, f_idx_type_250(F->bt_687, rt_r_ichk(F->k_2096)), &F->it_2092));
F->l_2100 = rt_str_copy(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->b_2097))->all), rt_str(".", 1)), f_dim_lo_234(rt_r_ichk(F->k_2096))));
F->h_2101 = rt_str_copy(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->b_2097))->all), rt_str(".", 1)), f_dim_hi_236(rt_r_ichk(F->k_2096))));
f_check_type_224(F->it_2092, f_idx_type_250(F->bt_687, rt_r_ichk(F->k_2096)), rt_r_ichk((*(P889)rt_nil_check(F->e_688)).line));
if ((F->off_2095 == NULL)) {
F->off_2095 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_685(&F->i_2099, &F->l_2100, &F->h_2101)), rt_str(" - ", 3)), F->l_2100), rt_str(")", 1)); b_; }));
} else {
F->off_2095 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P882)rt_nil_check(F->off_2095))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2100), rt_str(", ", 2)), F->h_2101), rt_str(") + ", 4)), f_ix_685(&F->i_2099, &F->l_2100, &F->h_2101)), rt_str(" - ", 3)), F->l_2100), rt_str(")", 1)); b_; }));
}
}
F->a_2091 = (*(P889)rt_nil_check(F->a_2091)).next;
}
if ((((rt_int)(((((P882)rt_nil_check(F->pre_2098))->all)).len)) > ((rt_int)0LL))) {
F->code_691v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->pre_2098))->all), (((P882)rt_nil_check(F->b_2097))->all)), rt_str(".p[", 3)), (((P882)rt_nil_check(F->off_2095))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_691v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->b_2097))->all), rt_str(".p[", 3)), (((P882)rt_nil_check(F->off_2095))->all)), rt_str("]", 1)); b_; }));
}
F->t_692v = (*(P895)rt_nil_check(F->bt_687)).elem;
F->c_693v = (*(P895)rt_nil_check(F->bt_687)).elemcons;
goto ret_;
}
if ((f_list_len_67(F->a_2091) != ((rt_int)1LL))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_688)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->bt_687)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P889)rt_nil_check(F->a_2091)).kind) == (((rt_int)16LL)))) {
F->lo_2102 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->a_2091)).a, g_ty_int_969, &F->it_2092));
F->hi_2103 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->a_2091)).b, g_ty_int_969, &F->it_2092));
F->code_691v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_686)), rt_str(", ", 2)), F->lo_2102), rt_str(", ", 2)), F->hi_2103), rt_str(")", 1)); b_; }));
F->t_692v = F->bt_687;
(*F->ro_689) = 1;
goto ret_;
}
{
F->i_2104 = rt_str_copy(f_gexpr_700(F->a_2091, g_ty_int_969, &F->it_2092));
F->t_692v = f_str_elem_210(F->bt_687);
F->c_693v = (*(P895)rt_nil_check(F->bt_687)).elemcons;
if (F->lv_690) {
F->code_691v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_686)), rt_str(", ", 2)), F->i_2104), rt_str("))", 2)); b_; }));
} else {
F->code_691v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_686)), rt_str(", ", 2)), F->i_2104), rt_str(")", 1)); b_; }));
(*F->ro_689) = 1;
}
}
goto ret_;
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_688)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_691) = F->code_691v;  (*F->t_692) = F->t_692v;  (*F->c_693) = F->c_693v;
  RT_FPOP();
  return;
}

static int f_own_attribute_696(P889 e_695) {
  struct f_own_attribute_696fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_695 = e_695;
F->saved_2105 = NULL;
F->saved_2105 = g_code_939;
F->bt_2106 = NULL;
F->ok_2107 = RT_R_EUNDEF;
F->ok_2107 = 0;
g_trial_967 = rt_add(rt_r_ichk(g_trial_967), ((rt_int)1LL));
g_code_939 = f_new_buffer_24();
{ rt_frame xf2108;
if (RT_TRY(xf2108)) {
F->base_2110 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_695)).a, NULL, &F->bt_2106));
while (((F->bt_2106 != NULL) && (rt_r_ichk((*(P895)rt_nil_check(F->bt_2106)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_427(F->bt_2106);
F->bt_2106 = (*(P895)rt_nil_check(F->bt_2106)).target;
}
while ((((F->bt_2106 != NULL) && (rt_r_ichk((*(P895)rt_nil_check(F->bt_2106)).kind) == (((rt_int)15LL)))) && ((*(P895)rt_nil_check(F->bt_2106)).tparams == NULL))) {
F->bt_2106 = (*(P895)rt_nil_check(F->bt_2106)).under;
}
if (((F->bt_2106 != NULL) && (rt_r_ichk((*(P895)rt_nil_check(F->bt_2106)).kind) == (((rt_int)15LL))))) {
F->p_2111 = NULL;
F->p_2111 = (*(P895)rt_nil_check(F->bt_2106)).tparams;
while ((F->p_2111 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_2111)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_695)).name))->all))) {
F->ok_2107 = 1;
}
F->p_2111 = (*(P889)rt_nil_check(F->p_2111)).next;
}
F->bt_2106 = (*(P895)rt_nil_check(F->bt_2106)).under;
}
if (((F->bt_2106 != NULL) && ((rt_r_ichk((*(P895)rt_nil_check(F->bt_2106)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->bt_2106)).kind) == (((rt_int)17LL)))))) {
F->f_2112 = NULL;
F->f_2112 = (*(P895)rt_nil_check(F->bt_2106)).fields;
while ((F->f_2112 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P897)rt_nil_check(F->f_2112)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_695)).name))->all))) {
F->ok_2107 = 1;
}
F->f_2112 = (*(P897)rt_nil_check(F->f_2112)).next;
}
}
RT_POP(xf2108);
} else {
RT_POP(xf2108);
int x2109 = rt_xcur;
if (0 || x2109 == ex_compile_error_1) {
F->ok_2107 = 0;
} else {
rt_raise(x2109);
}
}
}
g_trial_967 = rt_sub(rt_r_ichk(g_trial_967), ((rt_int)1LL));
g_code_939 = F->saved_2105;
F->result_ = rt_r_echk(F->ok_2107);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_700(P889 e_697, P895 want_698, P895 *t_699) {
  struct f_gexpr_700fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_697 = e_697;
F->want_698 = want_698;
F->t_699 = t_699;
F->t_699v = *F->t_699;
F->k_2113 = RT_R_IUNDEF;
F->k_2113 = rt_r_ichk((*(P889)rt_nil_check(F->e_697)).kind);
F->code_2114 = NULL;
F->c_2115 = NULL;
F->ro_2116 = RT_R_EUNDEF;
F->bt_2117 = NULL;
F->ctx_2118 = NULL;
F->ctx_2118 = g_cons_ctx_960;
g_cons_ctx_960 = NULL;
F->t_699v = g_ty_int_969;
if ((rt_r_ichk(F->k_2113) == (((rt_int)1LL)))) {
if (((F->want_698 != NULL) && (rt_r_ichk((*(P895)rt_nil_check(F->want_698)).kind) == (((rt_int)3LL))))) {
F->t_699v = g_ty_float_971;
F->result_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((rt_r_ichk(F->k_2113) == (((rt_int)2LL)))) {
F->t_699v = g_ty_float_971;
F->result_ = (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all);
goto ret_;
} else if ((rt_r_ichk(F->k_2113) == (((rt_int)5LL)))) {
F->t_699v = g_ty_bool_970;
F->result_ = f_itos_7(rt_r_ichk((*(P889)rt_nil_check(F->e_697)).ival));
goto ret_;
} else if (((((rt_r_ichk(F->k_2113) == (((rt_int)3LL))) && (F->want_698 != NULL)) && (rt_r_ichk((*(P895)rt_nil_check(F->want_698)).kind) == (((rt_int)5LL)))) && (!f_same_213(f_str_elem_210(F->want_698), g_ty_ascii_972)))) {
F->r_2119 = NULL;
F->r_2119 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_699v = F->want_698;
{ rt_int lo2121 = ((rt_int)1LL), hi2122 = ((rt_int)(((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all)).len));
for (rt_int it2123 = lo2121; it2123 <= hi2122; it2123++) {
F->i_2120 = it2123;
F->pos_2124 = RT_R_IUNDEF;
F->pos_2124 = f_lit_index_254((*(P895)rt_nil_check(f_base_of_215(f_str_elem_210(F->want_698)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_710(rt_r_echk(rt_str_get((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), F->i_2120))); b_; }));
if ((rt_r_ichk(F->pos_2124) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_710(rt_r_echk(rt_str_get((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), F->i_2120)))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_2119 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_2119))->all), rt_str("\\", 1)), f_octal_712(rt_r_ichk(F->pos_2124))); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P882)rt_nil_check(F->r_2119))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2113) == (((rt_int)3LL)))) {
F->t_699v = g_ty_string_973;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_743(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2113) == (((rt_int)6LL)))) {
F->t_699v = g_ty_nil_976;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((rt_r_ichk(F->k_2113) == (((rt_int)4LL)))) {
if (((F->want_698 != NULL) && ((*(P895)rt_nil_check(f_base_of_215(F->want_698))).kind == (((rt_int)4LL))))) {
F->t_699v = F->want_698;
} else {
F->t_699v = f_enum_type_of_746(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_r_ichk((*(P889)rt_nil_check(F->e_697)).line));
}
{
F->i_2125 = RT_R_IUNDEF;
F->i_2125 = f_lit_index_254((*(P895)rt_nil_check(f_base_of_215(F->t_699v))).lits, &(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all));
if ((rt_r_ichk(F->i_2125) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(rt_r_ichk(F->i_2125));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2113) == (((rt_int)17LL)))) {
g_cons_ctx_960 = F->ctx_2118;
F->result_ = f_gexpr_700((*(P889)rt_nil_check(F->e_697)).a, F->want_698, &F->t_699v);
goto ret_;
} else if ((rt_r_ichk(F->k_2113) == (((rt_int)7LL)))) {
F->y_2126 = NULL;
F->y_2126 = f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all));
if ((F->y_2126 == NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("ME", 2))) {
F->t_699v = g_ty_act_979;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_699v = g_ty_act_979;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_848(f_wrap_apply_741(F->e_697), 0, &F->t_699v);
goto ret_;
}
if (((((((((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_848(f_wrap_apply_741(F->e_697), 0, &F->t_699v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P899)rt_nil_check(F->y_2126)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_2126)).kind) == (((rt_int)2LL))))) {
F->ro_2127 = RT_R_EUNDEF;
F->t_699v = (*(P899)rt_nil_check(F->y_2126)).t;
if ((rt_r_ichk((*(P899)rt_nil_check(F->y_2126)).kind) == (((rt_int)1LL)))) {
F->ro_2127 = f_check_import_653(F->y_2126, rt_r_ichk((*(P889)rt_nil_check(F->e_697)).line));
F->result_ = f_init_chk_331((*(P899)rt_nil_check(F->y_2126)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_647(F->y_2126); b_; }));
goto ret_;
}
F->result_ = f_access_of_647(F->y_2126);
goto ret_;
}
if ((rt_r_ichk((*(P899)rt_nil_check(F->y_2126)).kind) == (((rt_int)3LL)))) {
F->result_ = f_gcall_848(f_wrap_apply_741(F->e_697), 0, &F->t_699v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((rt_r_ichk(F->k_2113) == (((rt_int)8LL))) && (f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all)) != NULL)) && (f_user_op_844(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), f_copy_node_739((*(P889)rt_nil_check(F->e_697)).a)) != NULL))) {
F->call_2128 = NULL;
F->call_2128 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P889)rt_nil_check(F->e_697)).line));
F->fname_2129 = NULL;
F->fname_2129 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P889)rt_nil_check(F->e_697)).line));
(*(P889)rt_nil_check(F->fname_2129)).name = (*(P889)rt_nil_check(F->e_697)).name;
(*(P889)rt_nil_check(F->call_2128)).a = F->fname_2129;
(*(P889)rt_nil_check(F->call_2128)).b = f_copy_node_739((*(P889)rt_nil_check(F->e_697)).a);
F->result_ = f_gcall_848(F->call_2128, 0, &F->t_699v);
goto ret_;
} else if (((((rt_r_ichk(F->k_2113) == (((rt_int)8LL))) && rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("NOT", 3))) && (F->want_698 != NULL)) && (rt_r_ichk((*(P895)rt_nil_check(F->want_698)).kind) == (((rt_int)16LL))))) {
F->a_2130 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_697)).a, F->want_698, &F->t_699v));
F->result_ = rt_str_cat(rt_str_cat(rt_str("y_set_compl(", 12), F->a_2130), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2113) == (((rt_int)8LL)))) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("NOT", 3))) {
F->a_2131 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_697)).a, g_ty_bool_970, &F->t_699v));
f_check_type_224(F->t_699v, g_ty_bool_970, rt_r_ichk((*(P889)rt_nil_check(F->e_697)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_2131), rt_str(")", 1));
goto ret_;
}
{
F->a_2132 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_697)).a, F->want_698, &F->t_699v));
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_2132;
goto ret_;
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->t_699v)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_2132), rt_str(")", 1));
goto ret_;
}
f_check_type_224(F->t_699v, g_ty_int_969, rt_r_ichk((*(P889)rt_nil_check(F->e_697)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_2132), rt_str(")", 1));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2113) == (((rt_int)9LL)))) {
F->result_ = f_gbinop_768(F->e_697, F->want_698, &F->t_699v);
goto ret_;
} else if ((rt_r_ichk(F->k_2113) == (((rt_int)10LL)))) {
if (((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_697)).a)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_697)).a)).kind) == (((rt_int)12LL))))) {
F->nm_2133 = NULL;
F->nm_2133 = (*(P889)rt_nil_check(F->e_697)).a;
F->y_2134 = NULL;
if ((rt_r_ichk((*(P889)rt_nil_check(F->nm_2133)).kind) == (((rt_int)12LL)))) {
F->nm_2133 = (*(P889)rt_nil_check(F->nm_2133)).a;
}
F->y_2134 = f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->nm_2133)).name))->all));
if (((((F->y_2134 == NULL) || (rt_r_ichk((*(P899)rt_nil_check(F->y_2134)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_2134)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_2134)).kind) == (((rt_int)10LL))))) {
F->result_ = f_gcall_848(F->e_697, 0, &F->t_699v);
goto ret_;
}
}
if ((f_user_subscript_723(F->e_697) != NULL)) {
F->result_ = f_gcall_848(f_user_subscript_723(F->e_697), 0, &F->t_699v);
goto ret_;
}
{
F->base_2135 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_697)).a, NULL, &F->bt_2117));
F->ro_2116 = 1;
f_index_on_694(&F->base_2135, F->bt_2117, F->e_697, &F->ro_2116, 0, &F->code_2114, &F->t_699v, &F->c_2115);
if ((((!f_is_lvalue_663(F->e_697)) || (rt_r_ichk((*(P895)rt_nil_check(F->t_699v)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P895)rt_nil_check(F->t_699v)).kind) == (((rt_int)5LL))))) {
F->result_ = (((P882)rt_nil_check(F->code_2114))->all);
goto ret_;
}
F->result_ = f_init_chk_331(F->t_699v, &(((P882)rt_nil_check(F->code_2114))->all));
goto ret_;
}
} else if (((rt_r_ichk(F->k_2113) == (((rt_int)11LL))) && (f_user_dot_721(F->e_697) != NULL))) {
F->result_ = f_gcall_848(f_user_dot_721(F->e_697), 0, &F->t_699v);
goto ret_;
} else if ((rt_r_ichk(F->k_2113) == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_696(F->e_697)))) {
F->result_ = f_attribute_751(F->e_697, &F->t_699v);
goto ret_;
} else if (((f_as_subtype_286((*(P889)rt_nil_check(F->e_697)).a) != NULL) || f_ptr_attribute_748(F->e_697))) {
F->result_ = f_attribute_751(F->e_697, &F->t_699v);
goto ret_;
}
{
F->base_2136 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_697)).a, NULL, &F->bt_2117));
F->ro_2116 = 1;
f_select_on_677(&F->base_2136, F->bt_2117, F->e_697, &F->ro_2116, &F->code_2114, &F->t_699v, &F->c_2115);
if ((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_697)).name))->all), rt_str("TAG", 3)) || (!f_is_lvalue_663(F->e_697)))) {
F->result_ = (((P882)rt_nil_check(F->code_2114))->all);
goto ret_;
}
F->result_ = f_init_chk_331(F->t_699v, &(((P882)rt_nil_check(F->code_2114))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2113) == (((rt_int)12LL)))) {
F->result_ = f_gcall_848(f_wrap_apply_741(F->e_697), 0, &F->t_699v);
goto ret_;
} else if ((rt_r_ichk(F->k_2113) == (((rt_int)14LL)))) {
F->result_ = f_constructor_773(F->e_697, F->want_698, F->ctx_2118, &F->t_699v);
goto ret_;
} else if ((rt_r_ichk(F->k_2113) == (((rt_int)13LL)))) {
F->result_ = f_resolved_703(F->e_697, &F->t_699v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_697)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_699) = F->t_699v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_703(P889 e_701, P895 *t_702) {
  struct f_resolved_703fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_701 = e_701;
F->t_702 = t_702;
F->t_702v = *F->t_702;
F->c_2137 = NULL;
F->vt_2138 = NULL;
F->y_2139 = NULL;
F->y_2139 = f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_2140 = NULL;
F->tt_2140 = f_copy_node_739((*(P889)rt_nil_check(F->e_701)).b);
(*(P889)rt_nil_check(F->tt_2140)).next = NULL;
if (((F->y_2139 != NULL) && ((rt_r_ichk((*(P899)rt_nil_check(F->y_2139)).kind) == (((rt_int)10LL))) || (f_resolve_overload_822(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_2140, f_copy_node_739((*(P889)rt_nil_check(F->e_701)).a), 0, rt_r_ichk((*(P889)rt_nil_check(F->e_701)).line)) != NULL)))) {
F->call_2141 = NULL;
F->call_2141 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P889)rt_nil_check(F->e_701)).line));
F->f_2142 = NULL;
F->f_2142 = f_nn_61((((rt_int)12LL)), rt_r_ichk((*(P889)rt_nil_check(F->e_701)).line));
F->fname_2143 = NULL;
F->fname_2143 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P889)rt_nil_check(F->e_701)).line));
(*(P889)rt_nil_check(F->fname_2143)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P889)rt_nil_check(F->f_2142)).a = F->fname_2143;
(*(P889)rt_nil_check(F->f_2142)).b = F->tt_2140;
(*(P889)rt_nil_check(F->call_2141)).a = F->f_2142;
(*(P889)rt_nil_check(F->call_2141)).b = f_copy_node_739((*(P889)rt_nil_check(F->e_701)).a);
(*(P889)rt_nil_check((*(P889)rt_nil_check(F->call_2141)).b)).next = NULL;
F->result_ = f_gcall_848(F->call_2141, 0, &F->t_702v);
goto ret_;
}
F->t_702v = f_resolve_subtype_257((*(P889)rt_nil_check(F->e_701)).b, &F->c_2137);
{
F->v_2144 = rt_str_copy(f_gexpr_in_708((*(P889)rt_nil_check(F->e_701)).a, F->t_702v, F->c_2137, &F->vt_2138));
f_check_type_224(F->vt_2138, F->t_702v, rt_r_ichk((*(P889)rt_nil_check(F->e_701)).line));
F->result_ = f_checked_205(F->t_702v, F->c_2137, &F->v_2144);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_702) = F->t_702v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_708(P889 e_704, P895 want_705, P891 c_706, P895 *t_707) {
  struct f_gexpr_in_708fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_704 = e_704;
F->want_705 = want_705;
F->c_706 = c_706;
F->t_707 = t_707;
F->t_707v = *F->t_707;
g_cons_ctx_960 = F->c_706;
F->result_ = f_gexpr_700(F->e_704, F->want_705, &F->t_707v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_707) = F->t_707v;
  RT_FPOP();
  return F->result_;
}

static rstr f_ascii_lit_710(int ch_709) {
  struct f_ascii_lit_710fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ch_709 = ch_709;
F->l_2145 = NULL;
F->l_2145 = (*(P895)rt_nil_check(g_ty_ascii_972)).lits;
{ rt_int lo2147 = ((rt_int)1LL), hi2148 = rt_sub(((rt_int)(F->ch_709) + 1), ((rt_int)1LL));
for (rt_int it2149 = lo2147; it2149 <= hi2148; it2149++) {
F->i_2146 = it2149;
F->l_2145 = (*(P889)rt_nil_check(F->l_2145)).next;
}
}
F->result_ = (((P882)rt_nil_check((*(P889)rt_nil_check(F->l_2145)).name))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_octal_712(rt_int n_711) {
  struct f_octal_712fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_711 = n_711;
F->r_2150 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_2150, rt_str("000", 3));
(*rt_str_at(&F->r_2150, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_711, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2150, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_711, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2150, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_711, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_2150;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P895 f_str_cat_part_714(P895 t_713) {
  struct f_str_cat_part_714fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_713 = t_713;
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_713)).kind) == (((rt_int)5LL)))) {
F->result_ = f_str_elem_210(F->t_713);
goto ret_;
}
F->result_ = F->t_713;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P895 f_peek_type_716(P889 e_715) {
  struct f_peek_type_716fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_715 = e_715;
F->saved_2151 = NULL;
F->saved_2151 = g_code_939;
F->t_2152 = NULL;
g_trial_967 = rt_add(rt_r_ichk(g_trial_967), ((rt_int)1LL));
g_code_939 = f_new_buffer_24();
{ rt_frame xf2153;
if (RT_TRY(xf2153)) {
F->v_2155 = rt_str_copy(f_gexpr_700(F->e_715, NULL, &F->t_2152));
RT_POP(xf2153);
} else {
RT_POP(xf2153);
int x2154 = rt_xcur;
if (0 || x2154 == ex_compile_error_1) {
F->t_2152 = NULL;
} else {
rt_raise(x2154);
}
}
}
g_trial_967 = rt_sub(rt_r_ichk(g_trial_967), ((rt_int)1LL));
g_code_939 = F->saved_2151;
F->result_ = F->t_2152;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P895 f_set_operands_719(P889 e_717, P895 want_718) {
  struct f_set_operands_719fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_717 = e_717;
F->want_718 = want_718;
F->t_2156 = NULL;
if (((F->want_718 != NULL) && (rt_r_ichk((*(P895)rt_nil_check(F->want_718)).kind) == (((rt_int)16LL))))) {
F->result_ = F->want_718;
goto ret_;
} else if ((F->want_718 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_717)).a)).kind) != (((rt_int)14LL)))) {
F->t_2156 = f_peek_type_716((*(P889)rt_nil_check(F->e_717)).a);
} else if ((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_717)).b)).kind) != (((rt_int)14LL)))) {
F->t_2156 = f_peek_type_716((*(P889)rt_nil_check(F->e_717)).b);
}
if (((F->t_2156 != NULL) && (rt_r_ichk((*(P895)rt_nil_check(F->t_2156)).kind) == (((rt_int)16LL))))) {
F->result_ = F->t_2156;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_user_dot_721(P889 e_720) {
  struct f_user_dot_721fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_720 = e_720;
F->arg_2157 = NULL;
if ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_720)).name))->all)); b_; })) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->arg_2157 = f_copy_node_739((*(P889)rt_nil_check(F->e_720)).a);
if ((f_user_op_844(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_720)).name))->all)); b_; }), F->arg_2157) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_727(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_720)).name))->all)); b_; }), F->arg_2157, rt_r_ichk((*(P889)rt_nil_check(F->e_720)).line));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_user_subscript_723(P889 e_722) {
  struct f_user_subscript_723fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_722 = e_722;
F->name_2158 = NULL;
F->name_2158 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
F->args_2159 = NULL;
F->tail_2160 = NULL;
F->a_2161 = NULL;
F->a_2161 = (*(P889)rt_nil_check(F->e_722)).b;
if (((((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_722)).a)).kind) == (((rt_int)7LL))) && (f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_722)).a)).name))->all)) != NULL)) && ((*(P899)rt_nil_check(f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_722)).a)).name))->all)))).kind != (((rt_int)1LL)))) && ((*(P899)rt_nil_check(f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_722)).a)).name))->all)))).kind != (((rt_int)2LL))))) {
F->result_ = NULL;
goto ret_;
}
f_append_65(&F->args_2159, &F->tail_2160, f_copy_node_739((*(P889)rt_nil_check(F->e_722)).a));
while ((F->a_2161 != NULL)) {
if ((((rt_int)(((((P882)rt_nil_check(F->name_2158))->all)).len)) > ((rt_int)1LL))) {
F->name_2158 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->name_2158))->all), rt_str(",", 1)); b_; }));
}
if ((rt_r_ichk((*(P889)rt_nil_check(F->a_2161)).kind) == (((rt_int)16LL)))) {
F->name_2158 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->name_2158))->all), rt_str("*..*", 4)); b_; }));
f_append_65(&F->args_2159, &F->tail_2160, f_copy_node_739((*(P889)rt_nil_check(F->a_2161)).a));
f_append_65(&F->args_2159, &F->tail_2160, f_copy_node_739((*(P889)rt_nil_check(F->a_2161)).b));
} else {
F->name_2158 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->name_2158))->all), rt_str("*", 1)); b_; }));
f_append_65(&F->args_2159, &F->tail_2160, f_copy_node_739(F->a_2161));
}
F->a_2161 = (*(P889)rt_nil_check(F->a_2161)).next;
}
F->name_2158 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->name_2158))->all), rt_str(")", 1)); b_; }));
if (((f_lookup_155(&(((P882)rt_nil_check(F->name_2158))->all)) == NULL) || (f_user_op_844(&(((P882)rt_nil_check(F->name_2158))->all), F->args_2159) == NULL))) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_727(&(((P882)rt_nil_check(F->name_2158))->all), F->args_2159, rt_r_ichk((*(P889)rt_nil_check(F->e_722)).line));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_op_call_727(rstr *name_724, P889 args_725, rt_int line_726) {
  struct f_op_call_727fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_724 = name_724;
F->args_725 = args_725;
F->line_726 = line_726;
F->call_2162 = NULL;
F->call_2162 = f_nn_61((((rt_int)10LL)), F->line_726);
F->f_2163 = NULL;
F->f_2163 = f_nn_61((((rt_int)7LL)), F->line_726);
(*(P889)rt_nil_check(F->f_2163)).name = f_mk_3(&(*F->name_724));
(*(P889)rt_nil_check(F->call_2162)).a = F->f_2163;
(*(P889)rt_nil_check(F->call_2162)).b = F->args_725;
F->result_ = F->call_2162;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_derived_relation_729(P889 e_728) {
  struct f_derived_relation_729fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_728 = e_728;
F->l_2164 = NULL;
F->r_2165 = NULL;
F->has_eq_2166 = RT_R_EUNDEF;
F->has_eq_2166 = 0;
F->has_lt_2167 = RT_R_EUNDEF;
F->has_lt_2167 = 0;
F->l_2164 = f_copy_node_739((*(P889)rt_nil_check(F->e_728)).a);
F->r_2165 = f_copy_node_739((*(P889)rt_nil_check(F->e_728)).b);
(*(P889)rt_nil_check(F->l_2164)).next = F->r_2165;
if ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; })) != NULL)) {
F->has_eq_2166 = (f_user_op_844(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), F->l_2164) != NULL);
}
if ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; })) != NULL)) {
F->l_2164 = f_copy_node_739((*(P889)rt_nil_check(F->e_728)).a);
F->r_2165 = f_copy_node_739((*(P889)rt_nil_check(F->e_728)).b);
(*(P889)rt_nil_check(F->l_2164)).next = F->r_2165;
F->has_lt_2167 = (f_user_op_844(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), F->l_2164) != NULL);
}
if ((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_728)).name))->all), rt_str("/=", 2)) && rt_r_echk(F->has_eq_2166))) {
F->result_ = f_rel_not_737(f_rel_node_734(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P889)rt_nil_check(F->e_728)).a, (*(P889)rt_nil_check(F->e_728)).b, rt_r_ichk((*(P889)rt_nil_check(F->e_728)).line)), rt_r_ichk((*(P889)rt_nil_check(F->e_728)).line));
goto ret_;
} else if ((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_728)).name))->all), rt_str(">", 1)) && rt_r_echk(F->has_lt_2167))) {
F->result_ = f_rel_node_734(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P889)rt_nil_check(F->e_728)).b, (*(P889)rt_nil_check(F->e_728)).a, rt_r_ichk((*(P889)rt_nil_check(F->e_728)).line));
goto ret_;
} else if (((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_728)).name))->all), rt_str("<=", 2)) && rt_r_echk(F->has_lt_2167)) && rt_r_echk(F->has_eq_2166))) {
F->result_ = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_734(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P889)rt_nil_check(F->e_728)).a, (*(P889)rt_nil_check(F->e_728)).b, rt_r_ichk((*(P889)rt_nil_check(F->e_728)).line)), f_rel_node_734(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P889)rt_nil_check(F->e_728)).a, (*(P889)rt_nil_check(F->e_728)).b, rt_r_ichk((*(P889)rt_nil_check(F->e_728)).line)), rt_r_ichk((*(P889)rt_nil_check(F->e_728)).line));
goto ret_;
} else if (((rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_728)).name))->all), rt_str(">=", 2)) && rt_r_echk(F->has_lt_2167)) && rt_r_echk(F->has_eq_2166))) {
F->result_ = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_734(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P889)rt_nil_check(F->e_728)).b, (*(P889)rt_nil_check(F->e_728)).a, rt_r_ichk((*(P889)rt_nil_check(F->e_728)).line)), f_rel_node_734(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P889)rt_nil_check(F->e_728)).a, (*(P889)rt_nil_check(F->e_728)).b, rt_r_ichk((*(P889)rt_nil_check(F->e_728)).line)), rt_r_ichk((*(P889)rt_nil_check(F->e_728)).line));
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_rel_node_734(rstr *op_730, P889 a_731, P889 b_732, rt_int line_733) {
  struct f_rel_node_734fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_730 = op_730;
F->a_731 = a_731;
F->b_732 = b_732;
F->line_733 = line_733;
F->result_ = f_binop_102(f_mk_3(&(*F->op_730)), f_copy_node_739(F->a_731), f_copy_node_739(F->b_732), F->line_733);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_rel_not_737(P889 x_735, rt_int line_736) {
  struct f_rel_not_737fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_735 = x_735;
F->line_736 = line_736;
F->n_2168 = NULL;
F->n_2168 = f_nn_61((((rt_int)8LL)), F->line_736);
(*(P889)rt_nil_check(F->n_2168)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P889)rt_nil_check(F->n_2168)).a = F->x_735;
F->result_ = F->n_2168;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_copy_node_739(P889 e_738) {
  struct f_copy_node_739fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_738 = e_738;
F->x_2169 = NULL;
{ R890 *cell2170 = rt_alloc(sizeof(R890));
(*cell2170).name = NULL;
(*cell2170).tag = NULL;
(*cell2170).prags = NULL;
(*cell2170).labels = NULL;
(*cell2170).a = NULL;
(*cell2170).b = NULL;
(*cell2170).c = NULL;
(*cell2170).d = NULL;
(*cell2170).e = NULL;
(*cell2170).next = NULL;
F->x_2169 = cell2170;
}
(*(P889)rt_nil_check(F->x_2169)).kind = rt_r_ichk((*(P889)rt_nil_check(F->e_738)).kind);
(*(P889)rt_nil_check(F->x_2169)).line = rt_r_ichk((*(P889)rt_nil_check(F->e_738)).line);
(*(P889)rt_nil_check(F->x_2169)).ival = rt_r_ichk((*(P889)rt_nil_check(F->e_738)).ival);
(*(P889)rt_nil_check(F->x_2169)).flag = rt_r_ichk((*(P889)rt_nil_check(F->e_738)).flag);
(*(P889)rt_nil_check(F->x_2169)).name = (*(P889)rt_nil_check(F->e_738)).name;
(*(P889)rt_nil_check(F->x_2169)).tag = (*(P889)rt_nil_check(F->e_738)).tag;
(*(P889)rt_nil_check(F->x_2169)).a = (*(P889)rt_nil_check(F->e_738)).a;
(*(P889)rt_nil_check(F->x_2169)).b = (*(P889)rt_nil_check(F->e_738)).b;
(*(P889)rt_nil_check(F->x_2169)).c = (*(P889)rt_nil_check(F->e_738)).c;
(*(P889)rt_nil_check(F->x_2169)).d = (*(P889)rt_nil_check(F->e_738)).d;
F->result_ = F->x_2169;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P889 f_wrap_apply_741(P889 e_740) {
  struct f_wrap_apply_741fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_740 = e_740;
F->x_2171 = NULL;
F->x_2171 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P889)rt_nil_check(F->e_740)).line));
(*(P889)rt_nil_check(F->x_2171)).a = F->e_740;
F->result_ = F->x_2171;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_743(rstr *s_742) {
  struct f_c_string_743fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_742 = s_742;
F->n_2172 = RT_R_IUNDEF;
F->n_2172 = ((rt_int)0LL);
{ rt_int lo2174 = ((rt_int)1LL), hi2175 = ((rt_int)(((*F->s_742)).len));
for (rt_int it2176 = lo2174; it2176 <= hi2175; it2176++) {
F->i_2173 = it2176;
if (((rt_r_echk(rt_str_get((*F->s_742), F->i_2173)) == 92) || (rt_r_echk(rt_str_get((*F->s_742), F->i_2173)) == 63))) {
F->n_2172 = rt_add(rt_r_ichk(F->n_2172), ((rt_int)1LL));
}
}
}
{
F->r_2177 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_742)).len)), rt_r_ichk(F->n_2172)), ((rt_int)2LL)));
F->j_2178 = RT_R_IUNDEF;
F->j_2178 = ((rt_int)1LL);
(*rt_str_at(&F->r_2177, ((rt_int)1LL))) = 34;
{ rt_int lo2180 = ((rt_int)1LL), hi2181 = ((rt_int)(((*F->s_742)).len));
for (rt_int it2182 = lo2180; it2182 <= hi2181; it2182++) {
F->i_2179 = it2182;
F->j_2178 = rt_add(rt_r_ichk(F->j_2178), ((rt_int)1LL));
if (((rt_r_echk(rt_str_get((*F->s_742), F->i_2179)) == 92) || (rt_r_echk(rt_str_get((*F->s_742), F->i_2179)) == 63))) {
(*rt_str_at(&F->r_2177, rt_r_ichk(F->j_2178))) = 92;
F->j_2178 = rt_add(rt_r_ichk(F->j_2178), ((rt_int)1LL));
}
(*rt_str_at(&F->r_2177, rt_r_ichk(F->j_2178))) = rt_r_echk(rt_str_get((*F->s_742), F->i_2179));
}
}
(*rt_str_at(&F->r_2177, rt_add(rt_r_ichk(F->j_2178), ((rt_int)1LL)))) = 34;
F->result_ = F->r_2177;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P895 f_enum_type_of_746(rstr *lit_744, rt_int line_745) {
  struct f_enum_type_of_746fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_744 = lit_744;
F->line_745 = line_745;
F->y_2183 = NULL;
F->y_2183 = g_scope_stack_929;
F->c_2184 = NULL;
if ((f_lit_index_254((*(P895)rt_nil_check(g_ty_ascii_972)).lits, &(*F->lit_744)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_972;
goto ret_;
}
while ((F->y_2183 != NULL)) {
if (((((rt_r_ichk((*(P899)rt_nil_check(F->y_2183)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_2183)).kind) == (((rt_int)5LL)))) && ((*(P899)rt_nil_check(F->y_2183)).st != NULL)) && (rt_r_ichk((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_2183)).st)).kind) == (((rt_int)72LL))))) {
if ((f_lit_index_254((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_2183)).st)).a, &(*F->lit_744)) >= ((rt_int)0LL))) {
if ((rt_r_ichk((*(P899)rt_nil_check(F->y_2183)).kind) == (((rt_int)5LL)))) {
F->st_2185 = NULL;
F->st_2185 = f_nn_61((((rt_int)80LL)), F->line_745);
(*(P889)rt_nil_check(F->st_2185)).name = (*(P899)rt_nil_check(F->y_2183)).name;
F->result_ = f_resolve_subtype_257(F->st_2185, &F->c_2184);
goto ret_;
}
F->result_ = f_resolve_subtype_257((*(P899)rt_nil_check(F->y_2183)).st, &F->c_2184);
goto ret_;
}
}
F->y_2183 = (*(P899)rt_nil_check(F->y_2183)).stack;
}
f_fail_23(F->line_745, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_744)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_748(P889 e_747) {
  struct f_ptr_attribute_748fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_747 = e_747;
F->lv_2186 = NULL;
F->t_2187 = NULL;
F->c_2188 = NULL;
F->ro_2189 = RT_R_EUNDEF;
F->p_2190 = NULL;
F->saved_2191 = NULL;
F->saved_2191 = g_code_939;
if ((!f_is_lvalue_663((*(P889)rt_nil_check(F->e_747)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_939 = f_new_buffer_24();
f_lvalue_669((*(P889)rt_nil_check(F->e_747)).a, &F->lv_2186, &F->t_2187, &F->c_2188, &F->ro_2189);
g_code_939 = F->saved_2191;
if (((rt_r_ichk((*(P895)rt_nil_check(F->t_2187)).kind) != (((rt_int)8LL))) || ((*(P895)rt_nil_check(F->t_2187)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_2190 = (*(P889)rt_nil_check((*(P895)rt_nil_check(F->t_2187)).decl)).d;
while ((F->p_2190 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_2190)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_747)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_2190 = (*(P889)rt_nil_check(F->p_2190)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_751(P889 e_749, P895 *t_750) {
  struct f_attribute_751fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_749 = e_749;
F->t_750 = t_750;
F->t_750v = *F->t_750;
F->bt_2192 = NULL;
F->c_2193 = NULL;
F->base_2194 = NULL;
F->sub_2195 = NULL;
F->sub_2195 = f_as_subtype_286((*(P889)rt_nil_check(F->e_749)).a);
F->name_2196 = rt_str_copy((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_749)).name))->all));
if ((F->sub_2195 != NULL)) {
F->bt_2192 = f_resolve_subtype_257(F->sub_2195, &F->c_2193);
} else {
F->bt_2192 = f_value_subtype_279((*(P889)rt_nil_check(F->e_749)).a, &F->c_2193, &F->base_2194);
}
if (((((rt_r_ichk((*(P895)rt_nil_check(F->bt_2192)).kind) == (((rt_int)8LL))) && (F->c_2193 != NULL)) && ((*(P891)rt_nil_check(F->c_2193)).args != NULL)) && ((*(P895)rt_nil_check(F->bt_2192)).decl != NULL))) {
F->p_2197 = NULL;
F->p_2197 = (*(P889)rt_nil_check((*(P895)rt_nil_check(F->bt_2192)).decl)).d;
F->a_2198 = NULL;
F->a_2198 = (*(P891)rt_nil_check(F->c_2193)).args;
while (((F->p_2197 != NULL) && (F->a_2198 != NULL))) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_2197)).name))->all), F->name_2196)) {
F->pc_2199 = NULL;
F->v_2200 = rt_str_copy(f_gexpr_700(F->a_2198, f_resolve_subtype_257((*(P889)rt_nil_check(F->p_2197)).a, &F->pc_2199), &F->t_750v));
F->result_ = F->v_2200;
goto ret_;
}
F->p_2197 = (*(P889)rt_nil_check(F->p_2197)).next;
F->a_2198 = (*(P889)rt_nil_check(F->a_2198)).next;
}
}
while (((rt_r_ichk((*(P895)rt_nil_check(F->bt_2192)).kind) == (((rt_int)8LL))) && (F->base_2194 != NULL))) {
f_finish_ptr_427(F->bt_2192);
F->base_2194 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_661(&(((P882)rt_nil_check(F->base_2194))->all), F->bt_2192); b_; }));
F->bt_2192 = (*(P895)rt_nil_check(F->bt_2192)).target;
F->c_2193 = NULL;
if ((rt_r_ichk((*(P895)rt_nil_check(F->bt_2192)).kind) == (((rt_int)5LL)))) {
F->c_2193 = f_new_cons_176();
(*(P891)rt_nil_check(F->c_2193)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P882)rt_nil_check(F->base_2194))->all)), rt_str(").len", 5)); b_; }));
}
}
if (((((rt_r_ichk((*(P895)rt_nil_check(F->bt_2192)).kind) == (((rt_int)15LL))) && ((*(P895)rt_nil_check(F->bt_2192)).tparams != NULL)) && (F->c_2193 != NULL)) && ((*(P891)rt_nil_check(F->c_2193)).args != NULL))) {
F->p_2201 = NULL;
F->p_2201 = (*(P895)rt_nil_check(F->bt_2192)).tparams;
F->a_2202 = NULL;
F->a_2202 = (*(P891)rt_nil_check(F->c_2193)).args;
while (((F->p_2201 != NULL) && (F->a_2202 != NULL))) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->p_2201)).name))->all), F->name_2196)) {
F->pt_2203 = f_tparam_type_322(F->bt_2192, &F->name_2196);
F->v_2204 = rt_str_copy(f_gexpr_700(F->a_2202, F->pt_2203, &F->t_750v));
F->result_ = F->v_2204;
goto ret_;
}
F->p_2201 = (*(P889)rt_nil_check(F->p_2201)).next;
F->a_2202 = (*(P889)rt_nil_check(F->a_2202)).next;
}
}
if (((rt_r_ichk((*(P895)rt_nil_check(F->bt_2192)).kind) == (((rt_int)15LL))) && ((*(P895)rt_nil_check(F->bt_2192)).tparams == NULL))) {
F->c_2193 = f_base_cons_218(F->bt_2192, F->c_2193);
F->bt_2192 = f_base_of_215(F->bt_2192);
}
F->t_750v = g_ty_int_969;
if ((rt_str_eq(F->name_2196, rt_str("LEN", 3)) && (rt_r_ichk((*(P895)rt_nil_check(F->bt_2192)).kind) == (((rt_int)5LL))))) {
if (((F->c_2193 != NULL) && ((*(P891)rt_nil_check(F->c_2193)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P882)rt_nil_check((*(P891)rt_nil_check(F->c_2193)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_749)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2196, rt_str("LEN", 3)) && (rt_r_ichk((*(P895)rt_nil_check(F->bt_2192)).kind) == (((rt_int)12LL))))) {
if (((F->c_2193 != NULL) && ((*(P891)rt_nil_check(F->c_2193)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P882)rt_nil_check((*(P891)rt_nil_check(F->c_2193)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_749)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2196, rt_str("MIN", 3)) || rt_str_eq(F->name_2196, rt_str("MAX", 3))) && f_scalar_kind_178(F->bt_2192))) {
F->t_750v = F->bt_2192;
if (rt_str_eq(F->name_2196, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_190(F->bt_2192, F->c_2193);
goto ret_;
}
F->result_ = f_sub_hi_193(F->bt_2192, F->c_2193);
goto ret_;
} else if ((rt_str_eq(F->name_2196, rt_str("PREC", 4)) && (rt_r_ichk((*(P895)rt_nil_check(F->bt_2192)).kind) == (((rt_int)3LL))))) {
if (((F->c_2193 != NULL) && ((*(P891)rt_nil_check(F->c_2193)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P882)rt_nil_check((*(P891)rt_nil_check(F->c_2193)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2196, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2196, rt_str("USE", 3))) && (rt_r_ichk((*(P895)rt_nil_check(F->bt_2192)).kind) == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_764(F->e_749, F->bt_2192, F->c_2193, F->base_2194, &F->t_750v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_749)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2196, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_750) = F->t_750v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_756(P889 sa_752, P889 sb_753, rstr *op_754, rt_int line_755) {
  struct f_subtype_compare_756fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_752 = sa_752;
F->sb_753 = sb_753;
F->op_754 = op_754;
F->line_755 = line_755;
F->ca_2205 = NULL;
F->cb_2206 = NULL;
F->ta_2207 = NULL;
F->ta_2207 = f_resolve_subtype_257(F->sa_752, &F->ca_2205);
F->tb_2208 = NULL;
F->tb_2208 = f_resolve_subtype_257(F->sb_753, &F->cb_2206);
F->r_2209 = NULL;
F->r_2209 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2210 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2210, rt_str("1", 1));
F->no_2211 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2211, rt_str("0", 1));
if (rt_str_eq((*F->op_754), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2210, rt_str("0", 1));
rt_str_assign(&F->no_2211, rt_str("1", 1));
}
if ((!f_same_213(F->ta_2207, F->tb_2208))) {
F->result_ = F->no_2211;
goto ret_;
} else if ((((rt_r_ichk((*(P889)rt_nil_check(F->sa_752)).kind) == (((rt_int)80LL))) && rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->sa_752)).name))->all), rt_str("TYPEOF", 6))) || ((rt_r_ichk((*(P889)rt_nil_check(F->sb_753)).kind) == (((rt_int)80LL))) && rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->sb_753)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2210;
goto ret_;
}
if (f_scalar_kind_178(F->ta_2207)) {
F->r_2209 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_190(F->ta_2207, F->ca_2205)), rt_str(") == (", 6)), f_sub_lo_190(F->tb_2208, F->cb_2206)), rt_str(") && (", 6)), f_sub_hi_193(F->ta_2207, F->ca_2205)), rt_str(") == (", 6)), f_sub_hi_193(F->tb_2208, F->cb_2206)), rt_str(")", 1)); b_; }));
if ((rt_r_ichk((*(P895)rt_nil_check(F->ta_2207)).kind) == (((rt_int)3LL)))) {
F->r_2209 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_2209))->all), rt_str(" && ", 4)), f_float_prec_758(F->ca_2205)), rt_str(" == ", 4)), f_float_prec_758(F->cb_2206)); b_; }));
}
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->ta_2207)).kind) == (((rt_int)5LL)))) {
if (((((F->ca_2205 != NULL) && (F->cb_2206 != NULL)) && ((*(P891)rt_nil_check(F->ca_2205)).slen != NULL)) && ((*(P891)rt_nil_check(F->cb_2206)).slen != NULL))) {
F->r_2209 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P882)rt_nil_check((*(P891)rt_nil_check(F->ca_2205)).slen))->all)), rt_str(") == (", 6)), (((P882)rt_nil_check((*(P891)rt_nil_check(F->cb_2206)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2205 == NULL) || ((*(P891)rt_nil_check(F->ca_2205)).slen == NULL)) && ((F->cb_2206 == NULL) || ((*(P891)rt_nil_check(F->cb_2206)).slen == NULL))))) {
F->r_2209 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->ta_2207)).kind) == (((rt_int)6LL)))) {
{ rt_int lo2213 = ((rt_int)1LL), hi2214 = rt_r_ichk((*(P895)rt_nil_check(F->ta_2207)).ndim);
for (rt_int it2215 = lo2213; it2215 <= hi2214; it2215++) {
F->k_2212 = it2215;
if (((((F->ca_2205 != NULL) && (F->cb_2206 != NULL)) && (f_cons_lo_244(F->ca_2205, F->k_2212) != NULL)) && (f_cons_lo_244(F->cb_2206, F->k_2212) != NULL))) {
F->r_2209 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_2209))->all), rt_str(" && (", 5)), (((P882)rt_nil_check(f_cons_lo_244(F->ca_2205, F->k_2212)))->all)), rt_str(") == (", 6)), (((P882)rt_nil_check(f_cons_lo_244(F->cb_2206, F->k_2212)))->all)), rt_str(") && (", 6)), (((P882)rt_nil_check(f_cons_hi_247(F->ca_2205, F->k_2212)))->all)), rt_str(") == (", 6)), (((P882)rt_nil_check(f_cons_hi_247(F->cb_2206, F->k_2212)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if (((((rt_r_ichk((*(P895)rt_nil_check(F->ta_2207)).kind) == (((rt_int)15LL))) && ((*(P895)rt_nil_check(F->ta_2207)).tparams != NULL)) && (F->ca_2205 != NULL)) && (F->cb_2206 != NULL))) {
F->a_2216 = NULL;
F->a_2216 = (*(P891)rt_nil_check(F->ca_2205)).args;
F->b_2217 = NULL;
F->b_2217 = (*(P891)rt_nil_check(F->cb_2206)).args;
F->at_2218 = NULL;
F->bt2_2219 = NULL;
while (((F->a_2216 != NULL) && (F->b_2217 != NULL))) {
F->x_2220 = rt_str_copy(f_gexpr_700(F->a_2216, NULL, &F->at_2218));
F->y_2221 = rt_str_copy(f_gexpr_700(F->b_2217, F->at_2218, &F->bt2_2219));
F->r_2209 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_2209))->all), rt_str(" && ", 4)), f_eq_code_381(F->at_2218, &F->x_2220, &F->y_2221)); b_; }));
F->a_2216 = (*(P889)rt_nil_check(F->a_2216)).next;
F->b_2217 = (*(P889)rt_nil_check(F->b_2217)).next;
}
} else if ((((rt_r_ichk((*(P895)rt_nil_check(F->ta_2207)).kind) == (((rt_int)17LL))) && (F->ca_2205 != NULL)) && (F->cb_2206 != NULL))) {
if ((((*(P891)rt_nil_check(F->ca_2205)).lo != NULL) && ((*(P891)rt_nil_check(F->cb_2206)).lo != NULL))) {
F->r_2209 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P882)rt_nil_check((*(P891)rt_nil_check(F->ca_2205)).lo))->all)), rt_str(") == (", 6)), (((P882)rt_nil_check((*(P891)rt_nil_check(F->cb_2206)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P891)rt_nil_check(F->ca_2205)).lo != NULL) || ((*(P891)rt_nil_check(F->cb_2206)).lo != NULL))) {
F->r_2209 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_754), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P882)rt_nil_check(F->r_2209))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P882)rt_nil_check(F->r_2209))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_758(P891 c_757) {
  struct f_float_prec_758fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_757 = c_757;
if (((F->c_757 != NULL) && ((*(P891)rt_nil_check(F->c_757)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P882)rt_nil_check((*(P891)rt_nil_check(F->c_757)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_764(P889 e_759, P895 bt_760, P891 c_761, P882 base_762, P895 *t_763) {
  struct f_file_attribute_764fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_759 = e_759;
F->bt_760 = bt_760;
F->c_761 = c_761;
F->base_762 = base_762;
F->t_763 = t_763;
F->t_763v = *F->t_763;
F->t_763v = g_file_mode_type_980;
if ((F->base_762 != NULL)) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_759)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P882)rt_nil_check(F->base_762))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P882)rt_nil_check(F->base_762))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_761 != NULL) && ((*(P891)rt_nil_check(F->c_761)).args != NULL))) {
if (rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_759)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_700((*(P891)rt_nil_check(F->c_761)).args, F->t_763v, &F->t_763v);
goto ret_;
} else if (((*(P889)rt_nil_check((*(P891)rt_nil_check(F->c_761)).args)).next != NULL)) {
F->result_ = f_gexpr_700((*(P889)rt_nil_check((*(P891)rt_nil_check(F->c_761)).args)).next, F->t_763v, &F->t_763v);
goto ret_;
}
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_759)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P882)rt_nil_check((*(P889)rt_nil_check(F->e_759)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_763) = F->t_763v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_768(P889 e_765, P895 want_766, P895 *t_767) {
  struct f_gbinop_768fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_765 = e_765;
F->want_766 = want_766;
F->t_767 = t_767;
F->t_767v = *F->t_767;
F->op_2222 = NULL;
F->op_2222 = (*(P889)rt_nil_check(F->e_765)).name;
F->ta_2223 = NULL;
F->tb_2224 = NULL;
F->hint_2225 = NULL;
F->uy_2226 = NULL;
F->t_767v = g_ty_bool_970;
if (((((rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("/=", 2)) || rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str(">", 1))) || rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("<=", 2))) || rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str(">=", 2))) && (f_derived_relation_729(F->e_765) != NULL))) {
F->result_ = f_gexpr_700(f_derived_relation_729(F->e_765), g_ty_bool_970, &F->t_767v);
goto ret_;
}
if ((f_lookup_155(&(((P882)rt_nil_check(F->op_2222))->all)) != NULL)) {
F->l_2227 = NULL;
F->r_2228 = NULL;
F->l_2227 = f_copy_node_739((*(P889)rt_nil_check(F->e_765)).a);
F->r_2228 = f_copy_node_739((*(P889)rt_nil_check(F->e_765)).b);
(*(P889)rt_nil_check(F->l_2227)).next = F->r_2228;
F->uy_2226 = f_user_op_844(&(((P882)rt_nil_check(F->op_2222))->all), F->l_2227);
if ((F->uy_2226 != NULL)) {
F->call_2229 = NULL;
F->call_2229 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
F->fname_2230 = NULL;
F->fname_2230 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
(*(P889)rt_nil_check(F->fname_2230)).name = F->op_2222;
(*(P889)rt_nil_check(F->call_2229)).a = F->fname_2230;
(*(P889)rt_nil_check(F->call_2229)).b = F->l_2227;
F->result_ = f_gcall_848(F->call_2229, 0, &F->t_767v);
goto ret_;
}
}
if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("IN", 2))) {
F->s_2231 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_765)).b, NULL, &F->tb_2224));
if ((rt_r_ichk((*(P895)rt_nil_check(F->tb_2224)).kind) != (((rt_int)16LL)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2232 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_765)).a, (*(P895)rt_nil_check(F->tb_2224)).elem, &F->ta_2223));
f_check_type_224(F->ta_2223, (*(P895)rt_nil_check(F->tb_2224)).elem, rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
F->t_767v = g_ty_bool_970;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_in(", 9), F->a_2232), rt_str(", ", 2)), F->s_2231), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("AND", 3)) || rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("OR", 2))) || rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("XOR", 3))) && (f_set_operands_719(F->e_765, F->want_766) != NULL))) {
F->a_2233 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_765)).a, f_set_operands_719(F->e_765, F->want_766), &F->ta_2223));
F->b_2234 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_765)).b, F->ta_2223, &F->tb_2224));
f_check_type_224(F->tb_2224, F->ta_2223, rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
F->t_767v = F->ta_2223;
if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_inter(", 12), F->a_2233), rt_str(", ", 2)), F->b_2234), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_union(", 12), F->a_2233), rt_str(", ", 2)), F->b_2234), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_xor(", 10), F->a_2233), rt_str(", ", 2)), F->b_2234), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("AND", 3)) || rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("OR", 2))) || rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("XOR", 3)))) {
F->a_2235 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_765)).a, g_ty_bool_970, &F->ta_2223));
F->b_2236 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_765)).b, g_ty_bool_970, &F->tb_2224));
f_check_type_224(F->ta_2223, g_ty_bool_970, rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
f_check_type_224(F->tb_2224, g_ty_bool_970, rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2235), rt_str(" && ", 4)), F->b_2236), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2235), rt_str(" || ", 4)), F->b_2236), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2235), rt_str(" != ", 4)), F->b_2236), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("&", 1)) && (F->want_766 != NULL)) && ((*(P895)rt_nil_check(f_base_of_215(F->want_766))).kind == (((rt_int)6LL))))) {
F->at_2237 = NULL;
F->at_2237 = f_base_of_215(F->want_766);
F->a_2238 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_765)).a, F->at_2237, &F->ta_2223));
F->b_2239 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_765)).b, F->at_2237, &F->tb_2224));
f_check_type_224(F->ta_2223, F->at_2237, rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
f_check_type_224(F->tb_2224, F->at_2237, rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
if (((rt_r_ichk((*(P895)rt_nil_check(F->at_2237)).ndim) != ((rt_int)1LL)) || ((*(P895)rt_nil_check(f_base_of_215((*(P895)rt_nil_check(F->at_2237)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_681(F->at_2237);
F->t_767v = F->at_2237;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_226(F->at_2237)), rt_str("(", 1)), F->a_2238), rt_str(", ", 2)), F->b_2239), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("&", 1))) {
F->wa_2240 = NULL;
F->wb_2241 = NULL;
F->ws_2242 = NULL;
F->ce_2243 = NULL;
F->ce_2243 = g_ty_ascii_972;
if (((F->want_766 != NULL) && (rt_r_ichk((*(P895)rt_nil_check(F->want_766)).kind) == (((rt_int)5LL))))) {
F->ws_2242 = F->want_766;
F->ce_2243 = f_str_elem_210(F->want_766);
}
if ((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_765)).a)).kind) == (((rt_int)4LL)))) {
F->wa_2240 = F->ce_2243;
} else {
F->wa_2240 = F->ws_2242;
}
if ((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_765)).b)).kind) == (((rt_int)4LL)))) {
F->wb_2241 = F->ce_2243;
} else {
F->wb_2241 = F->ws_2242;
}
{
F->a_2244 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_765)).a, F->wa_2240, &F->ta_2223));
F->b_2245 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_765)).b, F->wb_2241, &F->tb_2224));
F->t_767v = g_ty_string_973;
if ((rt_r_ichk((*(P895)rt_nil_check(F->ta_2223)).kind) == (((rt_int)5LL)))) {
F->t_767v = F->ta_2223;
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->tb_2224)).kind) == (((rt_int)5LL)))) {
F->t_767v = F->tb_2224;
} else if ((!f_same_213(F->ta_2223, g_ty_ascii_972))) {
F->t_767v = f_new_typ_175((((rt_int)5LL)));
(*(P895)rt_nil_check(F->t_767v)).elem = F->ta_2223;
}
if (((rt_r_ichk((*(P895)rt_nil_check(F->ta_2223)).kind) == (((rt_int)6LL))) && (rt_r_ichk((*(P895)rt_nil_check(F->tb_2224)).kind) == (((rt_int)6LL))))) {
f_need_slice_681(F->ta_2223);
f_check_type_224(F->tb_2224, F->ta_2223, rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
F->t_767v = F->ta_2223;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_226(F->ta_2223)), rt_str("(", 1)), F->a_2244), rt_str(", ", 2)), F->b_2245), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->ta_2223)).kind) == (((rt_int)5LL)))) {
f_check_type_224(f_str_cat_part_714(F->tb_2224), f_str_elem_210(F->ta_2223), rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->tb_2224)).kind) == (((rt_int)5LL)))) {
f_check_type_224(F->ta_2223, f_str_elem_210(F->tb_2224), rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
} else {
f_check_type_224(F->tb_2224, F->ta_2223, rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
}
if (((rt_r_ichk((*(P895)rt_nil_check(F->ta_2223)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P895)rt_nil_check(F->tb_2224)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2244), rt_str(", ", 2)), F->b_2245), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->ta_2223)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P895)rt_nil_check(F->tb_2224)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2244), rt_str(", ", 2)), F->b_2245), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->ta_2223)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P895)rt_nil_check(F->tb_2224)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2244), rt_str(", ", 2)), F->b_2245), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->ta_2223)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P895)rt_nil_check(F->tb_2224)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2244), rt_str(", ", 2)), F->b_2245), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("=", 1)) || rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("/=", 2))) && (f_as_subtype_286((*(P889)rt_nil_check(F->e_765)).a) != NULL)) && (f_as_subtype_286((*(P889)rt_nil_check(F->e_765)).b) != NULL))) {
F->t_767v = g_ty_bool_970;
F->result_ = f_subtype_compare_756(f_as_subtype_286((*(P889)rt_nil_check(F->e_765)).a), f_as_subtype_286((*(P889)rt_nil_check(F->e_765)).b), &(((P882)rt_nil_check(F->op_2222))->all), rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
goto ret_;
}
if ((f_is_rel_107(&(((P882)rt_nil_check(F->op_2222))->all)) && (!rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("IN", 2))))) {
if ((((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_765)).a)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_765)).a)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_765)).a)).kind) == (((rt_int)1LL))))) {
F->dummy_2246 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_765)).b, NULL, &F->hint_2225));
} else if ((rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->e_765)).a)).kind) == (((rt_int)14LL)))) {
F->hint_2225 = f_peek_type_716((*(P889)rt_nil_check(F->e_765)).b);
}
{
F->a_2247 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_765)).a, F->hint_2225, &F->ta_2223));
F->b_2248 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_765)).b, F->ta_2223, &F->tb_2224));
F->ct_2249 = NULL;
F->ct_2249 = f_base_of_215(F->ta_2223);
F->t_767v = g_ty_bool_970;
if (((rt_r_ichk((*(P895)rt_nil_check(F->ta_2223)).kind) != (((rt_int)11LL))) && (rt_r_ichk((*(P895)rt_nil_check(F->tb_2224)).kind) != (((rt_int)11LL))))) {
f_check_type_224(F->tb_2224, F->ta_2223, rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->ta_2223)).kind) == (((rt_int)11LL)))) {
F->ct_2249 = f_base_of_215(F->tb_2224);
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->ct_2249)).kind) == (((rt_int)5LL)))) {
if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2247), rt_str(", ", 2)), F->b_2248), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2247), rt_str(", ", 2)), F->b_2248), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2247), rt_str(", ", 2)), F->b_2248), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2247), rt_str(", ", 2)), F->b_2248), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2248), rt_str(", ", 2)), F->a_2247), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2248), rt_str(", ", 2)), F->a_2247), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->ct_2249)).kind) == (((rt_int)16LL)))) {
if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), F->a_2247), rt_str(", ", 2)), F->b_2248), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!y_set_eq(", 11), F->a_2247), rt_str(", ", 2)), F->b_2248), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->a_2247), rt_str(", ", 2)), F->b_2248), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->b_2248), rt_str(", ", 2)), F->a_2247), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->a_2247), rt_str(", ", 2)), F->b_2248), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->b_2248), rt_str(", ", 2)), F->a_2247), rt_str(")", 1));
goto ret_;
}
if ((((((((rt_r_ichk((*(P895)rt_nil_check(F->ct_2249)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->ct_2249)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P895)rt_nil_check(F->ct_2249)).kind) == (((rt_int)11LL)))) || (rt_r_ichk((*(P895)rt_nil_check(F->ct_2249)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P895)rt_nil_check(F->ct_2249)).kind) == (((rt_int)12LL)))) && (!rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("=", 1)))) && (!rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("/=", 2))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_357(F->ct_2249)) {
if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_381(F->ct_2249, &F->a_2247, &F->b_2248);
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_381(F->ct_2249, &F->a_2247, &F->b_2248)), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2247), rt_str(" == ", 4)), F->b_2248), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2247), rt_str(" != ", 4)), F->b_2248), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2247), rt_str(" ", 1)), (((P882)rt_nil_check(F->op_2222))->all)), rt_str(" ", 1)), F->b_2248), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2250 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_765)).a, F->want_766, &F->ta_2223));
F->b_2251 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->e_765)).b, F->ta_2223, &F->tb_2224));
if (((rt_r_ichk((*(P895)rt_nil_check(F->ta_2223)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P895)rt_nil_check(F->tb_2224)).kind) == (((rt_int)3LL))))) {
F->t_767v = g_ty_float_971;
if (((rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("+", 1)) || rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("-", 1))) || rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2250), rt_str(" ", 1)), (((P882)rt_nil_check(F->op_2222))->all)), rt_str(" ", 1)), F->b_2251), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_2250), rt_str(", ", 2)), F->b_2251), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_2250), rt_str(", ", 2)), F->b_2251), rt_str(")", 1));
goto ret_;
}
}
f_check_type_224(F->ta_2223, g_ty_int_969, rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
f_check_type_224(F->tb_2224, g_ty_int_969, rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line));
F->t_767v = g_ty_int_969;
if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2250), rt_str(", ", 2)), F->b_2251), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2250), rt_str(", ", 2)), F->b_2251), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2250), rt_str(", ", 2)), F->b_2251), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2250), rt_str(", ", 2)), F->b_2251), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2250), rt_str(", ", 2)), F->b_2251), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P882)rt_nil_check(F->op_2222))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2250), rt_str(", ", 2)), F->b_2251), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_765)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P882)rt_nil_check(F->op_2222))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_767) = F->t_767v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_773(P889 e_769, P895 want_770, P891 ctx_771, P895 *t_772) {
  struct f_constructor_773fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_769 = e_769;
F->want_770 = want_770;
F->ctx_771 = ctx_771;
F->t_772 = t_772;
F->t_772v = *F->t_772;
F->it_2252 = NULL;
F->it_2252 = (*(P889)rt_nil_check(F->e_769)).a;
F->f_2253 = NULL;
F->vt_2254 = NULL;
if (((F->want_770 != NULL) && (rt_r_ichk((*(P895)rt_nil_check(F->want_770)).kind) == (((rt_int)16LL))))) {
F->s_2255 = NULL;
F->s_2255 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_295(F->want_770); b_; }));
F->t_772v = F->want_770;
while ((F->it_2252 != NULL)) {
F->v_2256 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->it_2252)).b, (*(P895)rt_nil_check(F->want_770)).elem, &F->vt_2254));
f_check_type_224(F->vt_2254, (*(P895)rt_nil_check(F->want_770)).elem, rt_r_ichk((*(P889)rt_nil_check(F->e_769)).line));
F->s_2255 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_add(", 10), (((P882)rt_nil_check(F->s_2255))->all)), rt_str(", ", 2)), F->v_2256), rt_str(")", 1)); b_; }));
F->it_2252 = (*(P889)rt_nil_check(F->it_2252)).next;
}
F->result_ = (((P882)rt_nil_check(F->s_2255))->all);
goto ret_;
}
if (((F->want_770 != NULL) && (rt_r_ichk((*(P895)rt_nil_check(F->want_770)).kind) == (((rt_int)15LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P882)rt_nil_check((*(P895)rt_nil_check(F->want_770)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_770 != NULL) && (rt_r_ichk((*(P895)rt_nil_check(F->want_770)).kind) == (((rt_int)6LL))))) {
F->result_ = f_array_cons_787(F->e_769, F->want_770, F->ctx_771, &F->t_772v);
goto ret_;
}
if (((F->want_770 != NULL) && (rt_r_ichk((*(P895)rt_nil_check(F->want_770)).kind) == (((rt_int)17LL))))) {
if ((((((F->it_2252 == NULL) || ((*(P889)rt_nil_check(F->it_2252)).next != NULL)) || ((*(P889)rt_nil_check(F->it_2252)).a == NULL)) || ((*(P889)rt_nil_check((*(P889)rt_nil_check(F->it_2252)).a)).next != NULL)) || (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->it_2252)).a)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2253 = (*(P895)rt_nil_check(F->want_770)).fields;
{
F->i_2257 = RT_R_IUNDEF;
F->i_2257 = ((rt_int)0LL);
F->tmp_2258 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2253 != NULL) && (!rt_str_eq((((P882)rt_nil_check((*(P897)rt_nil_check(F->f_2253)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->it_2252)).a)).a)).name))->all))))) {
F->i_2257 = rt_add(rt_r_ichk(F->i_2257), ((rt_int)1LL));
F->f_2253 = (*(P897)rt_nil_check(F->f_2253)).next;
}
if ((F->f_2253 == NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->it_2252)).a)).a)).name))->all)); b_; }));
}
F->t_772v = F->want_770;
g_cons_ctx_960 = (*(P897)rt_nil_check(F->f_2253)).c;
{
F->v_2259 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->it_2252)).b, (*(P897)rt_nil_check(F->f_2253)).t, &F->vt_2254));
f_check_type_224(F->vt_2254, (*(P897)rt_nil_check(F->f_2253)).t, rt_r_ichk((*(P889)rt_nil_check(F->e_769)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->want_770)), rt_str(" ", 1)), F->tmp_2258), rt_str("; ", 2)), F->tmp_2258), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk(F->i_2257))), rt_str("; ", 2)), F->tmp_2258), rt_str(".u.", 3)), f_field_c_17(&(((P882)rt_nil_check((*(P897)rt_nil_check(F->f_2253)).name))->all))), rt_str(" = ", 3)), f_comp_value_777((*(P897)rt_nil_check(F->f_2253)).t, (*(P897)rt_nil_check(F->f_2253)).c, &F->v_2259)), rt_str("; ", 2)), F->tmp_2258), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_770 == NULL) || (rt_r_ichk((*(P895)rt_nil_check(F->want_770)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_772v = F->want_770;
F->f_2253 = (*(P895)rt_nil_check(F->want_770)).fields;
{
F->tmp_2260 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2261 = NULL;
F->parts_2261 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->want_770)), rt_str(" ", 1)), F->tmp_2260), rt_str(";", 1)); b_; }));
while ((F->it_2252 != NULL)) {
F->k_2262 = NULL;
F->k_2262 = (*(P889)rt_nil_check(F->it_2252)).a;
F->shared_2263 = NULL;
if ((F->k_2262 == NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2262 != NULL)) {
if (((((F->f_2253 == NULL) || (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->k_2262)).a)).kind) != (((rt_int)7LL)))) || ((*(P889)rt_nil_check(F->k_2262)).b != NULL)) || (!rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->k_2262)).a)).name))->all), (((P882)rt_nil_check((*(P897)rt_nil_check(F->f_2253)).name))->all))))) {
if ((F->f_2253 == NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P882)rt_nil_check((*(P897)rt_nil_check(F->f_2253)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P889)rt_nil_check((*(P889)rt_nil_check(F->it_2252)).a)).next == NULL)) {
g_cons_ctx_960 = (*(P897)rt_nil_check(F->f_2253)).c;
{
F->v_2264 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->it_2252)).b, (*(P897)rt_nil_check(F->f_2253)).t, &F->vt_2254));
f_check_type_224(F->vt_2254, (*(P897)rt_nil_check(F->f_2253)).t, rt_r_ichk((*(P889)rt_nil_check(F->e_769)).line));
F->parts_2261 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->parts_2261))->all), rt_str(" ", 1)), F->tmp_2260), rt_str(".", 1)), f_field_c_17(&(((P882)rt_nil_check((*(P897)rt_nil_check(F->f_2253)).name))->all))), rt_str(" = ", 3)), f_comp_value_777((*(P897)rt_nil_check(F->f_2253)).t, (*(P897)rt_nil_check(F->f_2253)).c, &F->v_2264)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2263 == NULL)) {
F->v_2265 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->it_2252)).b, (*(P897)rt_nil_check(F->f_2253)).t, &F->vt_2254));
F->shared_2263 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_224(F->vt_2254, (*(P897)rt_nil_check(F->f_2253)).t, rt_r_ichk((*(P889)rt_nil_check(F->e_769)).line));
F->parts_2261 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->parts_2261))->all), rt_str(" ", 1)), f_ctype_226((*(P897)rt_nil_check(F->f_2253)).t)), rt_str(" ", 1)), (((P882)rt_nil_check(F->shared_2263))->all)), rt_str(" = ", 3)), F->v_2265), rt_str(";", 1)); b_; }));
}
f_check_type_224(F->vt_2254, (*(P897)rt_nil_check(F->f_2253)).t, rt_r_ichk((*(P889)rt_nil_check(F->e_769)).line));
F->parts_2261 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->parts_2261))->all), rt_str(" ", 1)), F->tmp_2260), rt_str(".", 1)), f_field_c_17(&(((P882)rt_nil_check((*(P897)rt_nil_check(F->f_2253)).name))->all))), rt_str(" = ", 3)), f_comp_value_777((*(P897)rt_nil_check(F->f_2253)).t, (*(P897)rt_nil_check(F->f_2253)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_377((*(P897)rt_nil_check(F->f_2253)).t, &(((P882)rt_nil_check(F->shared_2263))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2253 = (*(P897)rt_nil_check(F->f_2253)).next;
F->k_2262 = (*(P889)rt_nil_check(F->k_2262)).next;
}
F->it_2252 = (*(P889)rt_nil_check(F->it_2252)).next;
}
if ((F->f_2253 != NULL)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_769)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->parts_2261))->all), rt_str(" ", 1)), F->tmp_2260), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_772) = F->t_772v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_777(P895 t_774, P891 c_775, rstr *v_776) {
  struct f_comp_value_777fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_774 = t_774;
F->c_775 = c_775;
F->v_776 = v_776;
if (((F->c_775 == NULL) || (((*(P891)rt_nil_check(F->c_775)).lo != NULL) && f_has_at_779(&(((P882)rt_nil_check((*(P891)rt_nil_check(F->c_775)).lo))->all))))) {
F->result_ = f_copy_code_377(F->t_774, &(*F->v_776));
goto ret_;
} else if ((((rt_r_ichk((*(P895)rt_nil_check(F->t_774)).kind) == (((rt_int)5LL))) && ((*(P891)rt_nil_check(F->c_775)).slen != NULL)) && (!f_has_at_779(&(((P882)rt_nil_check((*(P891)rt_nil_check(F->c_775)).slen))->all))))) {
F->result_ = f_copy_code_377(F->t_774, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_776)), rt_str(", ", 2)), (((P882)rt_nil_check((*(P891)rt_nil_check(F->c_775)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_205(F->t_774, F->c_775, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_377(F->t_774, &(*F->v_776)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_779(rstr *s_778) {
  struct f_has_at_779fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_778 = s_778;
{ rt_int lo2267 = ((rt_int)1LL), hi2268 = ((rt_int)(((*F->s_778)).len));
for (rt_int it2269 = lo2267; it2269 <= hi2268; it2269++) {
F->i_2266 = it2269;
if ((rt_r_echk(rt_str_get((*F->s_778), F->i_2266)) == 64)) {
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

static rstr f_set_elem_782(P895 st_780, rstr *v_781) {
  struct f_set_elem_782fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_780 = st_780;
F->v_781 = v_781;
F->result_ = (*F->v_781);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_787(P889 e_783, P895 at_784, P891 ctx_785, P895 *t_786) {
  struct f_array_cons_787fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_783 = e_783;
F->at_784 = at_784;
F->ctx_785 = ctx_785;
F->t_786 = t_786;
F->t_786v = *F->t_786;
F->tmp_2270 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2271 = NULL;
F->parts_2271 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->at_784)), rt_str(" ", 1)), F->tmp_2270), rt_str(";", 1)); b_; }));
F->it_2272 = NULL;
F->it_2272 = (*(P889)rt_nil_check(F->e_783)).a;
F->positional_2273 = RT_R_EUNDEF;
F->positional_2273 = 1;
F->t_786v = F->at_784;
while ((F->it_2272 != NULL)) {
if (((*(P889)rt_nil_check(F->it_2272)).a != NULL)) {
F->positional_2273 = 0;
}
F->it_2272 = (*(P889)rt_nil_check(F->it_2272)).next;
}
{ rt_int lo2275 = ((rt_int)1LL), hi2276 = rt_r_ichk((*(P895)rt_nil_check(F->at_784)).ndim);
for (rt_int it2277 = lo2275; it2277 <= hi2276; it2277++) {
F->k_2274 = it2277;
F->lo_2278 = NULL;
F->hi_2279 = NULL;
if ((((F->ctx_785 != NULL) && (f_cons_lo_244(F->ctx_785, F->k_2274) != NULL)) && (!f_has_at_779(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P882)rt_nil_check(f_cons_lo_244(F->ctx_785, F->k_2274)))->all); b_; }))))) {
F->lo_2278 = f_cons_lo_244(F->ctx_785, F->k_2274);
F->hi_2279 = f_cons_hi_247(F->ctx_785, F->k_2274);
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->at_784)).ndim) == ((rt_int)1LL)) && rt_r_echk(F->positional_2273))) {
if (((*(P895)rt_nil_check(f_base_of_215((*(P895)rt_nil_check(F->at_784)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2278 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2278 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2279 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P882)rt_nil_check(F->lo_2278))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_67((*(P889)rt_nil_check(F->e_783)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_783)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2271 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->parts_2271))->all), rt_str(" ", 1)), F->tmp_2270), rt_str(".", 1)), f_dim_lo_234(F->k_2274)), rt_str(" = ", 3)), (((P882)rt_nil_check(F->lo_2278))->all)), rt_str("; ", 2)), F->tmp_2270), rt_str(".", 1)), f_dim_hi_236(F->k_2274)), rt_str(" = ", 3)), (((P882)rt_nil_check(F->hi_2279))->all)), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P895)rt_nil_check(F->at_784)).ndim) == ((rt_int)1LL))) {
F->parts_2271 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->parts_2271))->all), rt_str(" ", 1)), F->tmp_2270), rt_str(".lo2 = ", 7)), F->tmp_2270), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2271 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->parts_2271))->all), rt_str(" rt_int n_", 10)), F->tmp_2270), rt_str(" = ", 3)), f_acnt_241(F->at_784, &F->tmp_2270)), rt_str("; ", 2)), F->tmp_2270), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_226((*(P895)rt_nil_check(F->at_784)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2270), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2270), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2270), rt_str(" + 1);", 6)); b_; }));
F->parts_2271 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->parts_2271))->all), f_fill_items_793((*(P889)rt_nil_check(F->e_783)).a, F->at_784, &F->tmp_2270, NULL, ((rt_int)1LL))); b_; }));
F->parts_2271 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->parts_2271))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2270), rt_str("; i_++) if (seen_", 17)), F->tmp_2270), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2270), rt_str("; })", 4)); b_; }));
F->result_ = (((P882)rt_nil_check(F->parts_2271))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_786) = F->t_786v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_793(P889 items_788, P895 at_789, rstr *tmp_790, P893 prefix_791, rt_int dim_792) {
  struct f_fill_items_793fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_788 = items_788;
F->at_789 = at_789;
F->tmp_790 = tmp_790;
F->prefix_791 = prefix_791;
F->dim_792 = dim_792;
F->it_2280 = NULL;
F->it_2280 = F->items_788;
F->pos_2281 = RT_R_IUNDEF;
F->pos_2281 = ((rt_int)0LL);
F->r_2282 = NULL;
F->r_2282 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2283 = NULL;
while ((F->it_2280 != NULL)) {
if (((*(P889)rt_nil_check(F->it_2280)).a == NULL)) {
if (((F->dim_792 < rt_r_ichk((*(P895)rt_nil_check(F->at_789)).ndim)) && (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->it_2280)).b)).kind) == (((rt_int)14LL))))) {
F->r_2282 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_2282))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_792)), rt_str(" = ", 3)), (*F->tmp_790)), rt_str(".", 1)), f_dim_lo_234(F->dim_792)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2281))), rt_str("; ", 2)), f_fill_items_793((*(P889)rt_nil_check((*(P889)rt_nil_check(F->it_2280)).b)).a, F->at_789, &(*F->tmp_790), f_add_line_798(F->prefix_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_792)); b_; })), rt_add(F->dim_792, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2284 = rt_str_copy(f_item_value_803((*(P889)rt_nil_check(F->it_2280)).b, F->at_789, f_e_line_795(F->it_2280), &F->vt_2283));
if (((F->dim_792 == ((rt_int)1LL)) && (rt_r_ichk((*(P895)rt_nil_check(F->at_789)).ndim) > ((rt_int)1LL)))) {
F->r_2282 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_2282))->all), rt_str(" { ", 3)), F->v_2284), rt_str(" if (", 5)), f_itos_7(rt_r_ichk(F->pos_2281))), rt_str(" >= n_", 6)), (*F->tmp_790)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_790)), rt_str(".p[", 3)), f_itos_7(rt_r_ichk(F->pos_2281))), rt_str("] = ", 4)), f_copy_code_377((*(P895)rt_nil_check(F->at_789)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_790)), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->pos_2281))), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2282 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_2282))->all), rt_str(" { ", 3)), F->v_2284), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_792)), rt_str(" = ", 3)), (*F->tmp_790)), rt_str(".", 1)), f_dim_lo_234(F->dim_792)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2281))), rt_str("; ", 2)), f_store_at_813(F->at_789, &(*F->tmp_790), f_add_line_798(F->prefix_791, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_792)); b_; })), F->dim_792)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2281 = rt_add(rt_r_ichk(F->pos_2281), ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_792, f_list_len_67((*(P889)rt_nil_check(F->it_2280)).a)), ((rt_int)1LL)) == rt_r_ichk((*(P895)rt_nil_check(F->at_789)).ndim))) {
F->k_2285 = NULL;
F->k_2285 = (*(P889)rt_nil_check(F->it_2280)).a;
F->d_2286 = RT_R_IUNDEF;
F->d_2286 = F->dim_792;
F->pre_2287 = NULL;
F->pre_2287 = F->prefix_791;
F->loops_2288 = NULL;
F->loops_2288 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2289 = NULL;
F->ends_2289 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2290 = rt_str_copy(f_item_value_803((*(P889)rt_nil_check(F->it_2280)).b, F->at_789, rt_r_ichk((*(P889)rt_nil_check(F->it_2280)).line), &F->vt_2283));
while ((F->k_2285 != NULL)) {
F->xv_2291 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(rt_r_ichk(F->d_2286))));
F->loops_2288 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->loops_2288))->all), f_key_loop_808(F->k_2285, F->at_789, rt_r_ichk(F->d_2286), &F->xv_2291)); b_; }));
F->ends_2289 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->ends_2289))->all), rt_str(" }", 2)); b_; }));
F->pre_2287 = f_add_line_798(F->pre_2287, &F->xv_2291);
F->d_2286 = rt_add(rt_r_ichk(F->d_2286), ((rt_int)1LL));
F->k_2285 = (*(P889)rt_nil_check(F->k_2285)).next;
}
F->r_2282 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_2282))->all), rt_str(" { ", 3)), F->v_2290), (((P882)rt_nil_check(F->loops_2288))->all)), rt_str(" ", 1)), f_store_at_813(F->at_789, &(*F->tmp_790), F->pre_2287, rt_r_ichk((*(P895)rt_nil_check(F->at_789)).ndim))), (((P882)rt_nil_check(F->ends_2289))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_792 == rt_r_ichk((*(P895)rt_nil_check(F->at_789)).ndim)) || (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->it_2280)).b)).kind) == (((rt_int)14LL))))) {
F->k_2292 = NULL;
F->k_2292 = (*(P889)rt_nil_check(F->it_2280)).a;
while ((F->k_2292 != NULL)) {
F->xv_2293 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_792)));
if ((F->dim_792 < rt_r_ichk((*(P895)rt_nil_check(F->at_789)).ndim))) {
F->r_2282 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_2282))->all), rt_str(" {", 2)), f_key_loop_808(F->k_2292, F->at_789, F->dim_792, &F->xv_2293)), rt_str(" ", 1)), f_fill_items_793((*(P889)rt_nil_check((*(P889)rt_nil_check(F->it_2280)).b)).a, F->at_789, &(*F->tmp_790), f_add_line_798(F->prefix_791, &F->xv_2293), rt_add(F->dim_792, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2294 = rt_str_copy(f_item_value_803((*(P889)rt_nil_check(F->it_2280)).b, F->at_789, rt_r_ichk((*(P889)rt_nil_check(F->it_2280)).line), &F->vt_2283));
F->r_2282 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_2282))->all), rt_str(" { ", 3)), F->v_2294), f_key_loop_808(F->k_2292, F->at_789, F->dim_792, &F->xv_2293)), rt_str(" ", 1)), f_store_at_813(F->at_789, &(*F->tmp_790), f_add_line_798(F->prefix_791, &F->xv_2293), F->dim_792)), rt_str(" } }", 4)); b_; }));
}
F->k_2292 = (*(P889)rt_nil_check(F->k_2292)).next;
}
} else {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->it_2280)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub(rt_r_ichk((*(P895)rt_nil_check(F->at_789)).ndim), F->dim_792), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2280 = (*(P889)rt_nil_check(F->it_2280)).next;
}
F->result_ = (((P882)rt_nil_check(F->r_2282))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_795(P889 e_794) {
  struct f_e_line_795fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_794 = e_794;
F->result_ = rt_r_ichk((*(P889)rt_nil_check(F->e_794)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P893 f_add_line_798(P893 l_796, rstr *s_797) {
  struct f_add_line_798fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_796 = l_796;
F->s_797 = s_797;
F->r_2295 = NULL;
F->tail_2296 = NULL;
F->x_2297 = NULL;
F->p_2298 = NULL;
F->p_2298 = F->l_796;
while ((F->p_2298 != NULL)) {
{ R894 *cell2299 = rt_alloc(sizeof(R894));
(*cell2299).s = NULL;
(*cell2299).next = NULL;
F->x_2297 = cell2299;
}
(*(P893)rt_nil_check(F->x_2297)).s = (*(P893)rt_nil_check(F->p_2298)).s;
if ((F->tail_2296 == NULL)) {
F->r_2295 = F->x_2297;
} else {
(*(P893)rt_nil_check(F->tail_2296)).next = F->x_2297;
}
F->tail_2296 = F->x_2297;
F->p_2298 = (*(P893)rt_nil_check(F->p_2298)).next;
}
{ R894 *cell2300 = rt_alloc(sizeof(R894));
(*cell2300).s = NULL;
(*cell2300).next = NULL;
F->x_2297 = cell2300;
}
(*(P893)rt_nil_check(F->x_2297)).s = f_mk_3(&(*F->s_797));
if ((F->tail_2296 == NULL)) {
F->r_2295 = F->x_2297;
} else {
(*(P893)rt_nil_check(F->tail_2296)).next = F->x_2297;
}
F->result_ = F->r_2295;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_803(P889 e_799, P895 at_800, rt_int line_801, P895 *vt_802) {
  struct f_item_value_803fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_799 = e_799;
F->at_800 = at_800;
F->line_801 = line_801;
F->vt_802 = vt_802;
F->vt_802v = *F->vt_802;
g_cons_ctx_960 = (*(P895)rt_nil_check(F->at_800)).elemcons;
{
F->v_2301 = rt_str_copy(f_gexpr_700(F->e_799, (*(P895)rt_nil_check(F->at_800)).elem, &F->vt_802v));
f_check_type_224(F->vt_802v, (*(P895)rt_nil_check(F->at_800)).elem, F->line_801);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_226((*(P895)rt_nil_check(F->at_800)).elem), rt_str(" v_ = ", 6)), f_comp_value_777((*(P895)rt_nil_check(F->at_800)).elem, (*(P895)rt_nil_check(F->at_800)).elemcons, &F->v_2301)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_802) = F->vt_802v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_808(P889 k_804, P895 at_805, rt_int d_806, rstr *xv_807) {
  struct f_key_loop_808fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_804 = k_804;
F->at_805 = at_805;
F->d_806 = d_806;
F->xv_807 = xv_807;
F->it_2302 = NULL;
F->lo_2303 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->k_804)).a, f_idx_type_250(F->at_805, F->d_806), &F->it_2302));
f_check_type_224(F->it_2302, f_idx_type_250(F->at_805, F->d_806), rt_r_ichk((*(P889)rt_nil_check(F->k_804)).line));
if (((*(P889)rt_nil_check(F->k_804)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_807)), rt_str(" = ", 3)), F->lo_2303), rt_str(";", 1));
goto ret_;
}
{
F->hi_2304 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->k_804)).b, f_idx_type_250(F->at_805, F->d_806), &F->it_2302));
f_check_type_224(F->it_2302, f_idx_type_250(F->at_805, F->d_806), rt_r_ichk((*(P889)rt_nil_check(F->k_804)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_807)), rt_str(" = ", 3)), F->lo_2303), rt_str(", h", 3)), (*F->xv_807)), rt_str(" = ", 3)), F->hi_2304), rt_str("; ", 2)), (*F->xv_807)), rt_str(" <= h", 5)), (*F->xv_807)), rt_str("; ", 2)), (*F->xv_807)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_813(P895 at_809, rstr *tmp_810, P893 xs_811, rt_int n_812) {
  struct f_store_at_813fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_809 = at_809;
F->tmp_810 = tmp_810;
F->xs_811 = xs_811;
F->n_812 = n_812;
F->off_2305 = NULL;
F->x_2306 = NULL;
F->x_2306 = F->xs_811;
F->k_2307 = RT_R_IUNDEF;
F->k_2307 = ((rt_int)0LL);
while ((F->x_2306 != NULL)) {
F->k_2307 = rt_add(rt_r_ichk(F->k_2307), ((rt_int)1LL));
{
F->l_2308 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_810), rt_str(".", 1)), f_dim_lo_234(rt_r_ichk(F->k_2307))));
F->h_2309 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_810), rt_str(".", 1)), f_dim_hi_236(rt_r_ichk(F->k_2307))));
if ((F->off_2305 == NULL)) {
F->off_2305 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P882)rt_nil_check((*(P893)rt_nil_check(F->x_2306)).s))->all)), rt_str(", ", 2)), F->l_2308), rt_str(", ", 2)), F->h_2309), rt_str(") - ", 4)), F->l_2308), rt_str(")", 1)); b_; }));
} else {
F->off_2305 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P882)rt_nil_check(F->off_2305))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2308), rt_str(", ", 2)), F->h_2309), rt_str(") + rt_index(", 13)), (((P882)rt_nil_check((*(P893)rt_nil_check(F->x_2306)).s))->all)), rt_str(", ", 2)), F->l_2308), rt_str(", ", 2)), F->h_2309), rt_str(") - ", 4)), F->l_2308), rt_str(")", 1)); b_; }));
}
}
F->x_2306 = (*(P893)rt_nil_check(F->x_2306)).next;
}
if ((rt_r_ichk(F->k_2307) != rt_r_ichk((*(P895)rt_nil_check(F->at_809)).ndim))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7(rt_r_ichk((*(P895)rt_nil_check(F->at_809)).ndim))), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P882)rt_nil_check(F->off_2305))->all)), rt_str("; ", 2)), (*F->tmp_810)), rt_str(".p[o_] = ", 9)), f_copy_code_377((*(P895)rt_nil_check(F->at_809)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_810)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_816(P899 y_814, P889 args_815) {
  struct f_fits_816fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_814 = y_814;
F->args_815 = args_815;
F->a_2310 = NULL;
F->a_2310 = F->args_815;
F->pm_2311 = NULL;
F->pm_2311 = (*(P899)rt_nil_check(F->y_814)).params;
F->t_2312 = NULL;
F->saved_2313 = NULL;
F->saved_2313 = g_code_939;
F->ok_2314 = RT_R_EUNDEF;
F->ok_2314 = 1;
F->lv_2315 = NULL;
F->lc_2316 = NULL;
F->ro_2317 = RT_R_EUNDEF;
g_trial_967 = rt_add(rt_r_ichk(g_trial_967), ((rt_int)1LL));
g_code_939 = f_new_buffer_24();
{ rt_frame xf2318;
if (RT_TRY(xf2318)) {
while (((rt_r_echk(F->ok_2314) && (F->a_2310 != NULL)) && (F->pm_2311 != NULL))) {
if (((rt_r_ichk((*(P901)rt_nil_check(F->pm_2311)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P901)rt_nil_check(F->pm_2311)).mode) == (((rt_int)3LL))))) {
f_lvalue_669(F->a_2310, &F->lv_2315, &F->t_2312, &F->lc_2316, &F->ro_2317);
} else {
F->v_2320 = rt_str_copy(f_gexpr_700(F->a_2310, (*(P901)rt_nil_check(F->pm_2311)).t, &F->t_2312));
}
if ((!(f_same_213(F->t_2312, (*(P901)rt_nil_check(F->pm_2311)).t) || ((rt_r_ichk((*(P895)rt_nil_check(F->t_2312)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P895)rt_nil_check((*(P901)rt_nil_check(F->pm_2311)).t)).kind) == (((rt_int)8LL))))))) {
F->ok_2314 = 0;
}
F->a_2310 = (*(P889)rt_nil_check(F->a_2310)).next;
F->pm_2311 = (*(P901)rt_nil_check(F->pm_2311)).next;
}
if (((F->a_2310 != NULL) || (F->pm_2311 != NULL))) {
F->ok_2314 = 0;
}
RT_POP(xf2318);
} else {
RT_POP(xf2318);
int x2319 = rt_xcur;
if (0 || x2319 == ex_compile_error_1) {
F->ok_2314 = 0;
} else {
rt_raise(x2319);
}
}
}
g_trial_967 = rt_sub(rt_r_ichk(g_trial_967), ((rt_int)1LL));
g_code_939 = F->saved_2313;
F->result_ = rt_r_echk(F->ok_2314);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P899 f_resolve_overload_822(rstr *name_817, P889 tt_818, P889 args_819, int is_stmt_820, rt_int line_821) {
  struct f_resolve_overload_822fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_817 = name_817;
F->tt_818 = tt_818;
F->args_819 = args_819;
F->is_stmt_820 = is_stmt_820;
F->line_821 = line_821;
F->y_2321 = NULL;
F->first_2322 = NULL;
F->n_2323 = RT_R_IUNDEF;
F->n_2323 = ((rt_int)0LL);
{ rt_int lo2325 = ((rt_int)1LL), hi2326 = ((rt_int)3LL);
for (rt_int it2327 = lo2325; it2327 <= hi2326; it2327++) {
F->pass_2324 = it2327;
F->y_2321 = f_overload_chain_828(&(*F->name_817), F->pass_2324);
while ((F->y_2321 != NULL)) {
if (((rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_2321)).name))->all), (*F->name_817)) && ((rt_r_ichk((*(P899)rt_nil_check(F->y_2321)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_2321)).kind) == (((rt_int)4LL))))) && ((F->pass_2324 != ((rt_int)1LL)) || (rt_r_ichk((*(P899)rt_nil_check(F->y_2321)).depth) >= rt_r_ichk(g_gdepth_958))))) {
F->n_2323 = rt_add(rt_r_ichk(F->n_2323), ((rt_int)1LL));
if ((F->first_2322 == NULL)) {
F->first_2322 = F->y_2321;
}
if (((((rt_r_ichk((*(P899)rt_nil_check(F->y_2321)).kind) == (((rt_int)4LL))) == F->is_stmt_820) && f_tt_fits_825(F->y_2321, F->tt_818)) && f_fits_816(F->y_2321, F->args_819))) {
F->result_ = F->y_2321;
goto ret_;
}
}
F->y_2321 = (*(P899)rt_nil_check(F->y_2321)).chain;
}
}
}
if (f_is_builtin_830(&(*F->name_817))) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk(F->n_2323) > ((rt_int)1LL))) {
f_fail_23(F->line_821, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_817)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2322;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_825(P899 y_823, P889 tt_824) {
  struct f_tt_fits_825fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_823 = y_823;
F->tt_824 = tt_824;
F->f_2328 = NULL;
F->a_2329 = NULL;
F->saved_2330 = NULL;
F->saved_2330 = g_code_939;
F->ok_2331 = RT_R_EUNDEF;
F->ok_2331 = 1;
if ((((*(P899)rt_nil_check(F->y_823)).decl == NULL) || ((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_823)).decl)).e == NULL))) {
F->result_ = (F->tt_824 == NULL);
goto ret_;
} else if ((F->tt_824 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2328 = (*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_823)).decl)).e;
F->a_2329 = F->tt_824;
g_trial_967 = rt_add(rt_r_ichk(g_trial_967), ((rt_int)1LL));
g_code_939 = f_new_buffer_24();
{ rt_frame xf2332;
if (RT_TRY(xf2332)) {
while (((rt_r_echk(F->ok_2331) && (F->f_2328 != NULL)) && (F->a_2329 != NULL))) {
F->fc_2334 = NULL;
F->ac_2335 = NULL;
F->fst_2336 = NULL;
F->fst_2336 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P889)rt_nil_check(F->f_2328)).line));
F->ft_2337 = NULL;
F->at_2338 = NULL;
(*(P889)rt_nil_check(F->fst_2336)).name = (*(P889)rt_nil_check(F->f_2328)).name;
F->ft_2337 = f_resolve_subtype_257(F->fst_2336, &F->fc_2334);
if ((rt_r_ichk((*(P889)rt_nil_check(F->a_2329)).kind) >= (((rt_int)70LL)))) {
F->at_2338 = f_resolve_subtype_257(F->a_2329, &F->ac_2335);
} else {
F->ast_2339 = NULL;
F->ast_2339 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P889)rt_nil_check(F->a_2329)).line));
(*(P889)rt_nil_check(F->ast_2339)).name = (*(P889)rt_nil_check(F->a_2329)).name;
F->at_2338 = f_resolve_subtype_257(F->ast_2339, &F->ac_2335);
}
F->ok_2331 = f_same_213(F->ft_2337, F->at_2338);
F->f_2328 = (*(P889)rt_nil_check(F->f_2328)).next;
F->a_2329 = (*(P889)rt_nil_check(F->a_2329)).next;
}
F->ok_2331 = ((rt_r_echk(F->ok_2331) && (F->f_2328 == NULL)) && (F->a_2329 == NULL));
RT_POP(xf2332);
} else {
RT_POP(xf2332);
int x2333 = rt_xcur;
if (0 || x2333 == ex_compile_error_1) {
F->ok_2331 = 0;
} else {
rt_raise(x2333);
}
}
}
g_trial_967 = rt_sub(rt_r_ichk(g_trial_967), ((rt_int)1LL));
g_code_939 = F->saved_2330;
F->result_ = rt_r_echk(F->ok_2331);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P899 f_overload_chain_828(rstr *name_826, rt_int pass_827) {
  struct f_overload_chain_828fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_826 = name_826;
F->pass_827 = pass_827;
if (((g_genv_926 == NULL) && (F->pass_827 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_827 == ((rt_int)2LL))) {
F->result_ = ({ A905 b_ = (((P903)rt_nil_check(g_genv_926))->all); b_.p[(rt_index(f_hash_153(&(*F->name_826)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A905 b_ = (((P903)rt_nil_check(g_table_925))->all); b_.p[(rt_index(f_hash_153(&(*F->name_826)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_830(rstr *n_829) {
  struct f_is_builtin_830fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_829 = n_829;
F->result_ = (((((((((((((((rt_str_eq((*F->n_829), rt_str("ABS", 3)) || rt_str_eq((*F->n_829), rt_str("POS", 3))) || rt_str_eq((*F->n_829), rt_str("SUCC", 4))) || rt_str_eq((*F->n_829), rt_str("PRED", 4))) || rt_str_eq((*F->n_829), rt_str("SQRT", 4))) || rt_str_eq((*F->n_829), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_829), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_829), rt_str("WRITE", 5))) || rt_str_eq((*F->n_829), rt_str("READLN", 6))) || rt_str_eq((*F->n_829), rt_str("SEND", 4))) || rt_str_eq((*F->n_829), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_829), rt_str("DELAY", 5))) || rt_str_eq((*F->n_829), rt_str("TIME", 4))) || rt_str_eq((*F->n_829), rt_str("CNVT", 4))) || rt_str_eq((*F->n_829), rt_str("FORMAT", 6))) || f_is_low_level_832(&(*F->n_829)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_832(rstr *n_831) {
  struct f_is_low_level_832fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_831 = n_831;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_831), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_831), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_831), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_831), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_831), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_831), rt_str("LOCK", 4))) || rt_str_eq((*F->n_831), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_831), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_831), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_831), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_831), rt_str("WAITING", 7))) || rt_str_eq((*F->n_831), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_831), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_831), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_831), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_831), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_831), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_831), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_831), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_836(P889 tt_833, rt_int line_834, P895 *t_835) {
  struct f_me_high_836fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_833 = tt_833;
F->line_834 = line_834;
F->t_835 = t_835;
F->t_835v = *F->t_835;
F->c_2340 = NULL;
if ((F->tt_833 == NULL)) {
f_fail_23(F->line_834, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_835v = f_resolve_subtype_257(F->tt_833, &F->c_2340);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_226(F->t_835v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_838(F->t_835v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_835) = F->t_835v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_838(P895 t_837) {
  struct f_type_tag_838fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_837 = t_837;
if (((*(P895)rt_nil_check(F->t_837)).name != NULL)) {
F->result_ = (((P882)rt_nil_check((*(P895)rt_nil_check(F->t_837)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_841(P889 e_839, rstr *name_840) {
  struct f_lock_ref_841fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_839 = e_839;
F->name_840 = name_840;
F->lv_2341 = NULL;
F->t_2342 = NULL;
F->c_2343 = NULL;
F->ro_2344 = RT_R_EUNDEF;
f_lvalue_669(F->e_839, &F->lv_2341, &F->t_2342, &F->c_2343, &F->ro_2344);
if ((rt_r_ichk((*(P895)rt_nil_check(F->t_2342)).kind) != (((rt_int)13LL)))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_839)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_840), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P882)rt_nil_check(F->lv_2341))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P899 f_user_op_844(rstr *op_842, P889 args_843) {
  struct f_user_op_844fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_842 = op_842;
F->args_843 = args_843;
F->y_2345 = NULL;
{ rt_int lo2347 = ((rt_int)1LL), hi2348 = ((rt_int)3LL);
for (rt_int it2349 = lo2347; it2349 <= hi2348; it2349++) {
F->pass_2346 = it2349;
F->y_2345 = f_overload_chain_828(&(*F->op_842), F->pass_2346);
while ((F->y_2345 != NULL)) {
if ((((rt_str_eq((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_2345)).name))->all), (*F->op_842)) && (rt_r_ichk((*(P899)rt_nil_check(F->y_2345)).kind) == (((rt_int)3LL)))) && ((F->pass_2346 != ((rt_int)1LL)) || (rt_r_ichk((*(P899)rt_nil_check(F->y_2345)).depth) >= rt_r_ichk(g_gdepth_958)))) && f_fits_816(F->y_2345, F->args_843))) {
F->result_ = F->y_2345;
goto ret_;
}
F->y_2345 = (*(P899)rt_nil_check(F->y_2345)).chain;
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

static rstr f_gcall_848(P889 e_845, int is_stmt_846, P895 *t_847) {
  struct f_gcall_848fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_845 = e_845;
F->is_stmt_846 = is_stmt_846;
F->t_847 = t_847;
F->t_847v = *F->t_847;
F->gd_2350 = NULL;
F->fn_2351 = NULL;
F->fn_2351 = (*(P889)rt_nil_check(F->e_845)).a;
F->tt_2352 = NULL;
F->y_2353 = NULL;
F->args_2354 = NULL;
F->args_2354 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2355 = NULL;
F->a_2355 = (*(P889)rt_nil_check(F->e_845)).b;
F->pm_2356 = NULL;
F->lt_2357 = NULL;
F->vt_2358 = NULL;
F->lv_2359 = NULL;
F->lc_2360 = NULL;
F->ro_2361 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P889)rt_nil_check(F->fn_2351)).kind) == (((rt_int)12LL)))) {
F->tt_2352 = (*(P889)rt_nil_check(F->fn_2351)).b;
F->fn_2351 = (*(P889)rt_nil_check(F->fn_2351)).a;
}
F->y_2353 = f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_2351)).name))->all));
if ((F->y_2353 == NULL)) {
F->result_ = f_builtin_878(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_2351)).name))->all), F->tt_2352, (*(P889)rt_nil_check(F->e_845)).b, rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line), F->is_stmt_846, &F->t_847v);
goto ret_;
}
if ((((rt_r_ichk((*(P899)rt_nil_check(F->y_2353)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P899)rt_nil_check(F->y_2353)).kind) != (((rt_int)4LL)))) && (rt_r_ichk((*(P899)rt_nil_check(F->y_2353)).kind) != (((rt_int)10LL))))) {
F->alt_2362 = NULL;
F->alt_2362 = f_resolve_overload_822(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_2351)).name))->all), F->tt_2352, (*(P889)rt_nil_check(F->e_845)).b, F->is_stmt_846, rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line));
if ((F->alt_2362 != NULL)) {
F->y_2353 = F->alt_2362;
} else if (f_is_builtin_830(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_2351)).name))->all))) {
F->result_ = f_builtin_878(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_2351)).name))->all), F->tt_2352, (*(P889)rt_nil_check(F->e_845)).b, rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line), F->is_stmt_846, &F->t_847v);
goto ret_;
}
}
if ((rt_r_ichk((*(P899)rt_nil_check(F->y_2353)).kind) == (((rt_int)10LL)))) {
F->gd_2350 = (*(P899)rt_nil_check(F->y_2353)).decl;
F->y_2353 = f_instantiate_645(F->y_2353, F->tt_2352, (*(P889)rt_nil_check(F->e_845)).b, rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line));
} else if (((rt_r_ichk((*(P899)rt_nil_check(F->y_2353)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P899)rt_nil_check(F->y_2353)).kind) == (((rt_int)4LL))))) {
F->y_2353 = f_resolve_overload_822(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_2351)).name))->all), F->tt_2352, (*(P889)rt_nil_check(F->e_845)).b, F->is_stmt_846, rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line));
if ((F->y_2353 == NULL)) {
F->result_ = f_builtin_878(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_2351)).name))->all), F->tt_2352, (*(P889)rt_nil_check(F->e_845)).b, rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line), F->is_stmt_846, &F->t_847v);
goto ret_;
}
}
if (((rt_r_ichk((*(P899)rt_nil_check(F->y_2353)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P899)rt_nil_check(F->y_2353)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_2351)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_862(F->y_2353, rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line));
if (((*(P899)rt_nil_check(F->y_2353)).capn != NULL)) {
F->cr_2363 = NULL;
F->cr_2363 = g_caps_944;
while ((F->cr_2363 != NULL)) {
if (((*(P916)rt_nil_check(F->cr_2363)).d == (*(P899)rt_nil_check(F->y_2353)).capn)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_2353)).name))->all), rt_str(" is a normal function with an imports list: it may not be invoked inside its capsule", 84)); b_; }));
}
F->cr_2363 = (*(P916)rt_nil_check(F->cr_2363)).next;
}
}
if ((F->is_stmt_846 && (rt_r_ichk((*(P899)rt_nil_check(F->y_2353)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_2351)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_846) && (rt_r_ichk((*(P899)rt_nil_check(F->y_2353)).kind) != (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_2351)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2356 = (*(P899)rt_nil_check(F->y_2353)).params;
if ((rt_r_ichk((*(P899)rt_nil_check(F->y_2353)).level) > ((rt_int)0LL))) {
F->args_2354 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2365 = ((rt_int)1LL), hi2366 = rt_sub(rt_r_ichk(g_cur_level_942), rt_r_ichk((*(P899)rt_nil_check(F->y_2353)).level));
for (rt_int it2367 = lo2365; it2367 <= hi2366; it2367++) {
F->i_2364 = it2367;
F->args_2354 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->args_2354))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2355 != NULL) && (F->pm_2356 != NULL))) {
if ((((rt_int)(((((P882)rt_nil_check(F->args_2354))->all)).len)) > ((rt_int)0LL))) {
F->args_2354 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->args_2354))->all), rt_str(", ", 2)); b_; }));
}
if (((rt_r_ichk((*(P901)rt_nil_check(F->pm_2356)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P901)rt_nil_check(F->pm_2356)).mode) == (((rt_int)3LL))))) {
f_lvalue_669(F->a_2355, &F->lv_2359, &F->lt_2357, &F->lc_2360, &F->ro_2361);
if (rt_r_echk(F->ro_2361)) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check((*(P901)rt_nil_check(F->pm_2356)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_224(F->lt_2357, (*(P901)rt_nil_check(F->pm_2356)).t, rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line));
F->args_2354 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->args_2354))->all), rt_str("&", 1)), (((P882)rt_nil_check(F->lv_2359))->all)), f_actual_bounds_871((*(P901)rt_nil_check(F->pm_2356)).t, F->lt_2357, F->lc_2360)); b_; }));
} else if (((rt_r_ichk((*(P901)rt_nil_check(F->pm_2356)).mode) == (((rt_int)4LL))) && f_is_lvalue_663(F->a_2355))) {
f_lvalue_669(F->a_2355, &F->lv_2359, &F->lt_2357, &F->lc_2360, &F->ro_2361);
f_check_type_224(F->lt_2357, (*(P901)rt_nil_check(F->pm_2356)).t, rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line));
F->args_2354 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->args_2354))->all), rt_str("&", 1)), (((P882)rt_nil_check(F->lv_2359))->all)), f_actual_bounds_871((*(P901)rt_nil_check(F->pm_2356)).t, F->lt_2357, F->lc_2360)); b_; }));
} else if ((rt_r_ichk((*(P901)rt_nil_check(F->pm_2356)).mode) == (((rt_int)4LL)))) {
F->v_2368 = rt_str_copy(f_gexpr_in_708(F->a_2355, (*(P901)rt_nil_check(F->pm_2356)).t, (*(P901)rt_nil_check(F->pm_2356)).c, &F->vt_2358));
F->ct_2369 = rt_str_copy(f_ctype_226((*(P901)rt_nil_check(F->pm_2356)).t));
f_check_type_224(F->vt_2358, (*(P901)rt_nil_check(F->pm_2356)).t, rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line));
F->args_2354 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->args_2354))->all), rt_str("({ ", 3)), F->ct_2369), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2369), rt_str(")); *b_ = ", 10)), F->v_2368), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_178((*(P901)rt_nil_check(F->pm_2356)).t)) {
F->args_2354 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->args_2354))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2370 = rt_str_copy(f_gexpr_in_708(F->a_2355, (*(P901)rt_nil_check(F->pm_2356)).t, (*(P901)rt_nil_check(F->pm_2356)).c, &F->vt_2358));
f_check_type_224(F->vt_2358, (*(P901)rt_nil_check(F->pm_2356)).t, rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line));
F->args_2354 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->args_2354))->all), F->v_2370); b_; }));
}
F->a_2355 = (*(P889)rt_nil_check(F->a_2355)).next;
F->pm_2356 = (*(P901)rt_nil_check(F->pm_2356)).next;
}
if (((F->a_2355 != NULL) || (F->pm_2356 != NULL))) {
f_fail_23(rt_r_ichk((*(P889)rt_nil_check(F->e_845)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check((*(P889)rt_nil_check(F->fn_2351)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_67((*(P889)rt_nil_check(F->e_845)).b), f_list_len_67(F->a_2355)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_847v = (*(P899)rt_nil_check(F->y_2353)).result;
if ((F->gd_2350 != NULL)) {
F->chk_2371 = rt_str_copy(f_same_subtypes_867(F->gd_2350, (*(P889)rt_nil_check(F->e_845)).b));
if ((!rt_str_eq(F->chk_2371, rt_str("", 0)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), F->chk_2371), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("generic subtype", 15)), f_q_18()), rt_str("); ", 3)), (((P882)rt_nil_check((*(P899)rt_nil_check(F->y_2353)).cname))->all)), rt_str("(", 1)), (((P882)rt_nil_check(F->args_2354))->all)), rt_str("); })", 5));
goto ret_;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_2353)).cname))->all), rt_str("(", 1)), (((P882)rt_nil_check(F->args_2354))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_847) = F->t_847v;
  RT_FPOP();
  return F->result_;
}

static P893 f_requires_850(P899 y_849) {
  struct f_requires_850fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_849 = y_849;
if (rt_r_echk((*(P899)rt_nil_check(F->y_849)).reqdone)) {
F->result_ = (*(P899)rt_nil_check(F->y_849)).reqs;
goto ret_;
}
(*(P899)rt_nil_check(F->y_849)).reqdone = 1;
if ((((*(P899)rt_nil_check(F->y_849)).decl != NULL) && (((rt_r_ichk((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_849)).decl)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_849)).decl)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_849)).decl)).kind) == (((rt_int)50LL)))))) {
F->imp_2372 = NULL;
F->imp_2372 = (*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_849)).decl)).d;
while ((F->imp_2372 != NULL)) {
f_add_req_853(F->y_849, &(((P882)rt_nil_check((*(P889)rt_nil_check(F->imp_2372)).name))->all));
F->imp_2372 = (*(P889)rt_nil_check(F->imp_2372)).next;
}
f_require_calls_856(F->y_849, (*(P889)rt_nil_check((*(P899)rt_nil_check(F->y_849)).decl)).c);
}
F->result_ = (*(P899)rt_nil_check(F->y_849)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_853(P899 y_851, rstr *name_852) {
  struct f_add_req_853fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_851 = y_851;
F->name_852 = name_852;
F->l_2373 = NULL;
if ((!f_seen_name_388((*(P899)rt_nil_check(F->y_851)).reqs, &(*F->name_852)))) {
{ R894 *cell2374 = rt_alloc(sizeof(R894));
(*cell2374).s = NULL;
(*cell2374).next = NULL;
F->l_2373 = cell2374;
}
(*(P893)rt_nil_check(F->l_2373)).s = f_mk_3(&(*F->name_852));
(*(P893)rt_nil_check(F->l_2373)).next = (*(P899)rt_nil_check(F->y_851)).reqs;
(*(P899)rt_nil_check(F->y_851)).reqs = F->l_2373;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_856(P899 y_854, P889 e_855) {
  struct f_require_calls_856fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_854 = y_854;
F->e_855 = e_855;
F->x_2375 = NULL;
F->x_2375 = F->e_855;
while ((F->x_2375 != NULL)) {
if ((((((rt_r_ichk((*(P889)rt_nil_check(F->x_2375)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P889)rt_nil_check(F->x_2375)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P889)rt_nil_check(F->x_2375)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P889)rt_nil_check(F->x_2375)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P889)rt_nil_check(F->x_2375)).kind) == (((rt_int)51LL))))) {
F->x_2375 = (*(P889)rt_nil_check(F->x_2375)).next;
} else {
F->callee_2376 = NULL;
if (((((rt_r_ichk((*(P889)rt_nil_check(F->x_2375)).kind) == (((rt_int)10LL))) || (rt_r_ichk((*(P889)rt_nil_check(F->x_2375)).kind) == (((rt_int)21LL)))) && ((*(P889)rt_nil_check(F->x_2375)).a != NULL)) && (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->x_2375)).a)).kind) == (((rt_int)7LL))))) {
F->callee_2376 = (*(P889)rt_nil_check(F->x_2375)).a;
}
if ((F->callee_2376 != NULL)) {
F->z_2377 = NULL;
F->z_2377 = f_lookup_155(&(((P882)rt_nil_check((*(P889)rt_nil_check(F->callee_2376)).name))->all));
if ((((F->z_2377 != NULL) && (F->z_2377 != F->y_854)) && ((rt_r_ichk((*(P899)rt_nil_check(F->z_2377)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P899)rt_nil_check(F->z_2377)).kind) == (((rt_int)3LL)))))) {
F->l_2378 = NULL;
F->l_2378 = f_requires_850(F->z_2377);
while ((F->l_2378 != NULL)) {
f_add_req_853(F->y_854, &(((P882)rt_nil_check((*(P893)rt_nil_check(F->l_2378)).s))->all));
F->l_2378 = (*(P893)rt_nil_check(F->l_2378)).next;
}
}
}
if (((*(P889)rt_nil_check(F->x_2375)).a != NULL)) {
f_require_calls_856(F->y_854, (*(P889)rt_nil_check(F->x_2375)).a);
}
if (((*(P889)rt_nil_check(F->x_2375)).b != NULL)) {
f_require_calls_856(F->y_854, (*(P889)rt_nil_check(F->x_2375)).b);
}
if (((*(P889)rt_nil_check(F->x_2375)).c != NULL)) {
f_require_calls_856(F->y_854, (*(P889)rt_nil_check(F->x_2375)).c);
}
F->x_2375 = (*(P889)rt_nil_check(F->x_2375)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_859(P889 elems_857, rstr *name_858) {
  struct f_declared_in_859fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_857 = elems_857;
F->name_858 = name_858;
F->e_2379 = NULL;
F->e_2379 = F->elems_857;
while ((F->e_2379 != NULL)) {
if ((((rt_r_ichk((*(P889)rt_nil_check(F->e_2379)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P889)rt_nil_check(F->e_2379)).kind) == (((rt_int)41LL)))) && rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check(F->e_2379)).name))->all), (*F->name_858)))) {
F->result_ = 1;
goto ret_;
}
F->e_2379 = (*(P889)rt_nil_check(F->e_2379)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_862(P899 y_860, rt_int line_861) {
  struct f_check_requires_862fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_860 = y_860;
F->line_861 = line_861;
F->l_2380 = NULL;
F->l_2380 = f_requires_850(F->y_860);
if ((((*(P899)rt_nil_check(F->y_860)).home == NULL) || (rt_r_ichk((*(P899)rt_nil_check(F->y_860)).level) != rt_r_ichk(g_cur_level_942)))) {
goto ret_;
}
while ((F->l_2380 != NULL)) {
F->z_2381 = NULL;
F->z_2381 = f_lookup_155(&(((P882)rt_nil_check((*(P893)rt_nil_check(F->l_2380)).s))->all));
if ((f_declared_in_859((*(P899)rt_nil_check(F->y_860)).home, &(((P882)rt_nil_check((*(P893)rt_nil_check(F->l_2380)).s))->all)) && ((F->z_2381 == NULL) || (rt_r_ichk((*(P899)rt_nil_check(F->z_2381)).depth) < rt_r_ichk((*(P899)rt_nil_check(F->y_860)).depth))))) {
f_fail_23(F->line_861, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check((*(P899)rt_nil_check(F->y_860)).name))->all), rt_str(" requires ", 10)), (((P882)rt_nil_check((*(P893)rt_nil_check(F->l_2380)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2380 = (*(P893)rt_nil_check(F->l_2380)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_delay_args_864(P889 args_863) {
  struct f_act_delay_args_864fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->args_863 = args_863;
F->at_2382 = NULL;
F->t1_2383 = NULL;
F->t1_2383 = f_peek_type_716(F->args_863);
if (((F->t1_2383 != NULL) && (rt_r_ichk((*(P895)rt_nil_check(F->t1_2383)).kind) == (((rt_int)14LL))))) {
F->a_2384 = rt_str_copy(f_act_ref_551(F->args_863));
F->v_2385 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->args_863)).next, g_ty_int_969, &F->at_2382));
f_check_type_224(F->at_2382, g_ty_int_969, rt_r_ichk((*(P889)rt_nil_check(F->args_863)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2385, rt_str(", ", 2)), F->a_2384);
goto ret_;
}
{
F->v_2386 = rt_str_copy(f_gexpr_700(F->args_863, g_ty_int_969, &F->at_2382));
f_check_type_224(F->at_2382, g_ty_int_969, rt_r_ichk((*(P889)rt_nil_check(F->args_863)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2386, rt_str(", ", 2)), f_act_ref_551((*(P889)rt_nil_check(F->args_863)).next));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_same_subtypes_867(P889 gd_865, P889 args_866) {
  struct f_same_subtypes_867fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_865 = gd_865;
F->args_866 = args_866;
F->p_2387 = NULL;
F->p_2387 = (*(P889)rt_nil_check(F->gd_865)).a;
F->r_2388 = NULL;
F->r_2388 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->p_2387 != NULL)) {
if ((rt_r_ichk((*(P889)rt_nil_check(F->p_2387)).ival) == ((rt_int)2LL))) {
F->fp_2389 = NULL;
F->fp_2389 = (*(P889)rt_nil_check((*(P889)rt_nil_check(F->gd_865)).b)).a;
F->a_2390 = NULL;
F->a_2390 = F->args_866;
F->flo_2391 = NULL;
F->fhi_2392 = NULL;
while (((F->fp_2389 != NULL) && (F->a_2390 != NULL))) {
if ((((((*(P889)rt_nil_check(F->fp_2389)).a != NULL) && (rt_r_ichk((*(P889)rt_nil_check((*(P889)rt_nil_check(F->fp_2389)).a)).kind) == (((rt_int)80LL)))) && rt_str_eq((((P882)rt_nil_check((*(P889)rt_nil_check((*(P889)rt_nil_check(F->fp_2389)).a)).name))->all), (((P882)rt_nil_check((*(P889)rt_nil_check(F->p_2387)).name))->all))) && ((*(P889)rt_nil_check((*(P889)rt_nil_check(F->fp_2389)).a)).b == NULL))) {
F->st_2393 = NULL;
F->c_2394 = NULL;
F->base_2395 = NULL;
F->lo_2396 = NULL;
F->hi_2397 = NULL;
F->st_2393 = f_value_subtype_279(F->a_2390, &F->c_2394, &F->base_2395);
if (f_scalar_kind_178(F->st_2393)) {
F->lo_2396 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_lo_190(F->st_2393, F->c_2394); b_; }));
F->hi_2397 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_hi_193(F->st_2393, F->c_2394); b_; }));
} else if (((rt_r_ichk((*(P895)rt_nil_check(F->st_2393)).kind) == (((rt_int)5LL))) && ((*(P891)rt_nil_check(F->c_2394)).slen != NULL))) {
F->lo_2396 = (*(P891)rt_nil_check(F->c_2394)).slen;
F->hi_2397 = (*(P891)rt_nil_check(F->c_2394)).slen;
}
if (((F->lo_2396 != NULL) && (F->flo_2391 != NULL))) {
if ((((rt_int)(((((P882)rt_nil_check(F->r_2388))->all)).len)) > ((rt_int)0LL))) {
F->r_2388 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P882)rt_nil_check(F->r_2388))->all), rt_str(" || ", 4)); b_; }));
}
F->r_2388 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->r_2388))->all), rt_str("(", 1)), (((P882)rt_nil_check(F->flo_2391))->all)), rt_str(") != (", 6)), (((P882)rt_nil_check(F->lo_2396))->all)), rt_str(") || (", 6)), (((P882)rt_nil_check(F->fhi_2392))->all)), rt_str(") != (", 6)), (((P882)rt_nil_check(F->hi_2397))->all)), rt_str(")", 1)); b_; }));
} else if ((F->lo_2396 != NULL)) {
F->flo_2391 = F->lo_2396;
F->fhi_2392 = F->hi_2397;
}
}
F->fp_2389 = (*(P889)rt_nil_check(F->fp_2389)).next;
F->a_2390 = (*(P889)rt_nil_check(F->a_2390)).next;
}
}
F->p_2387 = (*(P889)rt_nil_check(F->p_2387)).next;
}
F->result_ = (((P882)rt_nil_check(F->r_2388))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_actual_bounds_871(P895 ft_868, P895 t_869, P891 c_870) {
  struct f_actual_bounds_871fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_868 = ft_868;
F->t_869 = t_869;
F->c_870 = c_870;
if ((!f_scalar_kind_178(F->ft_868))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_190(F->t_869, F->c_870)), rt_str(", ", 2)), f_sub_hi_193(F->t_869, F->c_870));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_878(rstr *name_872, P889 tt_873, P889 args_874, rt_int line_875, int is_stmt_876, P895 *t_877) {
  struct f_builtin_878fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_872 = name_872;
F->tt_873 = tt_873;
F->args_874 = args_874;
F->line_875 = line_875;
F->is_stmt_876 = is_stmt_876;
F->t_877 = t_877;
F->t_877v = *F->t_877;
F->at_2398 = NULL;
F->n_2399 = RT_R_IUNDEF;
F->n_2399 = f_list_len_67(F->args_874);
F->t_877v = g_ty_void_974;
if (((rt_str_eq((*F->name_872), rt_str("POS", 3)) || rt_str_eq((*F->name_872), rt_str("SUCC", 4))) || rt_str_eq((*F->name_872), rt_str("PRED", 4)))) {
F->a_2400 = rt_str_copy(f_gexpr_700(F->args_874, NULL, &F->at_2398));
if (rt_str_eq((*F->name_872), rt_str("POS", 3))) {
if (((*(P895)rt_nil_check(f_base_of_215(F->at_2398))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_877v = g_ty_int_969;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2400), rt_str(") + 1)", 6));
goto ret_;
}
F->t_877v = F->at_2398;
if ((rt_r_ichk((*(P895)rt_nil_check(F->at_2398)).kind) == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_872), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2400), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2400), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_872), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2400), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P895)rt_nil_check(f_base_of_215(F->at_2398))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2400), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P895)rt_nil_check(f_base_of_215(F->at_2398))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_872), rt_str("SQRT", 4)) || rt_str_eq((*F->name_872), rt_str("SIN", 3))) || rt_str_eq((*F->name_872), rt_str("COS", 3))) || rt_str_eq((*F->name_872), rt_str("EXP", 3))) || rt_str_eq((*F->name_872), rt_str("LN", 2))) || rt_str_eq((*F->name_872), rt_str("FLOOR", 5)))) {
F->a_2401 = rt_str_copy(f_gexpr_700(F->args_874, g_ty_float_971, &F->at_2398));
F->t_877v = g_ty_float_971;
if (rt_str_eq((*F->name_872), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2401), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_872)), rt_str("(", 1)), F->a_2401), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("IFLOAT", 6))) {
F->a_2402 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->args_874)).next, g_ty_int_969, &F->at_2398));
F->t_877v = g_ty_float_971;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2402), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("IFIX", 4))) {
F->a_2403 = rt_str_copy(f_gexpr_700(F->args_874, g_ty_float_971, &F->at_2398));
F->t_877v = g_ty_int_969;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2403), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("FORMAT", 6))) {
F->a_2404 = rt_str_copy(f_gexpr_700(F->args_874, g_ty_float_971, &F->at_2398));
F->n1_2405 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->args_874)).next, g_ty_int_969, &F->at_2398));
F->m1_2406 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check((*(P889)rt_nil_check(F->args_874)).next)).next, g_ty_int_969, &F->at_2398));
F->t_877v = g_ty_string_973;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_2404), rt_str(", ", 2)), F->n1_2405), rt_str(", ", 2)), F->m1_2406), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("ABS", 3))) {
F->a_2407 = rt_str_copy(f_gexpr_700(F->args_874, NULL, &F->at_2398));
F->t_877v = F->at_2398;
if ((rt_r_ichk((*(P895)rt_nil_check(F->at_2398)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2407), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2407), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("CNVT", 4))) {
if ((F->tt_873 == NULL)) {
f_fail_23(F->line_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_2408 = rt_str_copy(f_gexpr_700(F->args_874, NULL, &F->at_2398));
if (((rt_r_ichk((*(P889)rt_nil_check(F->tt_873)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P895)rt_nil_check(F->at_2398)).kind) == (((rt_int)1LL))))) {
F->t_877v = g_ty_string_973;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2408), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P889)rt_nil_check(F->tt_873)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P895)rt_nil_check(F->at_2398)).kind) == (((rt_int)3LL))))) {
F->t_877v = g_ty_string_973;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_2408), rt_str(", 6)", 4));
goto ret_;
} else if (((rt_r_ichk((*(P889)rt_nil_check(F->tt_873)).kind) == (((rt_int)73LL))) && (rt_r_ichk((*(P895)rt_nil_check(F->at_2398)).kind) == (((rt_int)2LL))))) {
F->t_877v = g_ty_string_973;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2408), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if (((rt_r_ichk((*(P889)rt_nil_check(F->tt_873)).kind) == (((rt_int)70LL))) && (rt_r_ichk((*(P895)rt_nil_check(F->at_2398)).kind) == (((rt_int)5LL))))) {
F->t_877v = g_ty_int_969;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2408), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_872), rt_str("WRITELN", 7))) {
if ((rt_r_ichk(F->n_2399) == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_2409 = NULL;
F->last_2409 = F->args_874;
while (((*(P889)rt_nil_check(F->last_2409)).next != NULL)) {
F->last_2409 = (*(P889)rt_nil_check(F->last_2409)).next;
}
{
F->a_2410 = rt_str_copy(f_gexpr_700(F->last_2409, g_ty_string_973, &F->at_2398));
f_check_type_224(F->at_2398, g_ty_string_973, F->line_875);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2410), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_872), rt_str("WRITE", 5))) {
F->a_2411 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->args_874)).next, NULL, &F->at_2398));
if ((rt_r_ichk((*(P895)rt_nil_check(F->at_2398)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_2411), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P895)rt_nil_check(F->at_2398)).kind) == (((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_2411), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_872), rt_str("READLN", 6))) {
F->lv_2412 = NULL;
F->lc_2413 = NULL;
F->ro_2414 = RT_R_EUNDEF;
F->last_2415 = NULL;
F->last_2415 = F->args_874;
while (((*(P889)rt_nil_check(F->last_2415)).next != NULL)) {
F->last_2415 = (*(P889)rt_nil_check(F->last_2415)).next;
}
f_lvalue_669(F->last_2415, &F->lv_2412, &F->at_2398, &F->lc_2413, &F->ro_2414);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (((P882)rt_nil_check(F->lv_2412))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("SIZELN", 6))) {
F->t_877v = g_ty_int_969;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("EOF", 3))) {
F->t_877v = g_ty_bool_970;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_872), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_872), rt_str("SYS_OUT", 7)))) {
F->t_877v = g_ty_file_975;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_872), rt_str("OPEN", 4)) || rt_str_eq((*F->name_872), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_872), rt_str("SEND", 4)) || rt_str_eq((*F->name_872), rt_str("RECEIVE", 7)))) {
F->lv_2416 = NULL;
F->dv_2417 = NULL;
F->lc_2418 = NULL;
F->ro_2419 = RT_R_EUNDEF;
F->mt_2420 = NULL;
F->dt_2421 = NULL;
f_lvalue_669(F->args_874, &F->lv_2416, &F->mt_2420, &F->lc_2418, &F->ro_2419);
if ((rt_r_ichk((*(P895)rt_nil_check(F->mt_2420)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_872), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_872), rt_str("RECEIVE", 7))) {
f_lvalue_669((*(P889)rt_nil_check(F->args_874)).next, &F->dv_2417, &F->dt_2421, &F->lc_2418, &F->ro_2419);
f_check_type_224(F->dt_2421, (*(P895)rt_nil_check(F->mt_2420)).elem, F->line_875);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P882)rt_nil_check(F->lv_2416))->all)), rt_str(", &", 3)), (((P882)rt_nil_check(F->dv_2417))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2422 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->args_874)).next, (*(P895)rt_nil_check(F->mt_2420)).elem, &F->at_2398));
f_check_type_224(F->at_2398, (*(P895)rt_nil_check(F->mt_2420)).elem, F->line_875);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226((*(P895)rt_nil_check(F->mt_2420)).elem)), rt_str(" m_ = ", 6)), F->v_2422), rt_str("; rt_send(", 10)), (((P882)rt_nil_check(F->lv_2416))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_872), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_872), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2423 = NULL;
F->lc_2424 = NULL;
F->ro_2425 = RT_R_EUNDEF;
F->mt_2426 = NULL;
f_lvalue_669(F->args_874, &F->lv_2423, &F->mt_2426, &F->lc_2424, &F->ro_2425);
if ((rt_r_ichk((*(P895)rt_nil_check(F->mt_2426)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_872), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_877v = g_ty_int_969;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_872))), rt_str("(", 1)), (((P882)rt_nil_check(F->lv_2423))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_872), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_872), rt_str("COND_RECEIVE", 12)))) {
F->lv_2427 = NULL;
F->dv_2428 = NULL;
F->bv_2429 = NULL;
F->lc_2430 = NULL;
F->ro_2431 = RT_R_EUNDEF;
F->mt_2432 = NULL;
F->dt_2433 = NULL;
F->bt_2434 = NULL;
f_lvalue_669(F->args_874, &F->lv_2427, &F->mt_2432, &F->lc_2430, &F->ro_2431);
if ((rt_r_ichk((*(P895)rt_nil_check(F->mt_2432)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_872), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_669((*(P889)rt_nil_check((*(P889)rt_nil_check(F->args_874)).next)).next, &F->bv_2429, &F->bt_2434, &F->lc_2430, &F->ro_2431);
f_check_type_224(F->bt_2434, g_ty_bool_970, F->line_875);
if (rt_str_eq((*F->name_872), rt_str("COND_RECEIVE", 12))) {
f_lvalue_669((*(P889)rt_nil_check(F->args_874)).next, &F->dv_2428, &F->dt_2433, &F->lc_2430, &F->ro_2431);
f_check_type_224(F->dt_2433, (*(P895)rt_nil_check(F->mt_2432)).elem, F->line_875);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->bv_2429))->all), rt_str(" = rt_cond_receive(", 19)), (((P882)rt_nil_check(F->lv_2427))->all)), rt_str(", &", 3)), (((P882)rt_nil_check(F->dv_2428))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2435 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->args_874)).next, (*(P895)rt_nil_check(F->mt_2432)).elem, &F->at_2398));
f_check_type_224(F->at_2398, (*(P895)rt_nil_check(F->mt_2432)).elem, F->line_875);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226((*(P895)rt_nil_check(F->mt_2432)).elem)), rt_str(" m_ = ", 6)), F->v_2435), rt_str("; ", 2)), (((P882)rt_nil_check(F->bv_2429))->all)), rt_str(" = rt_cond_send(", 16)), (((P882)rt_nil_check(F->lv_2427))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_872), rt_str("PRIORITY", 8))) {
F->t_877v = g_ty_int_969;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_551(F->args_874)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("SET_PRIORITY", 12))) {
F->v_2436 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->args_874)).next, g_ty_int_969, &F->at_2398));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_551(F->args_874)), rt_str(", ", 2)), F->v_2436), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_551(F->args_874)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("ACTIVE", 6))) {
F->t_877v = g_ty_bool_970;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_551(F->args_874)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("DELAY", 5))) {
F->v_2437 = rt_str_copy(f_gexpr_700(F->args_874, g_ty_int_969, &F->at_2398));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2437), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_872), rt_str("DELAY_UNTIL", 11)) && (rt_r_ichk(F->n_2399) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_delay_act(", 15), f_act_delay_args_864(F->args_874)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("DELAY_UNTIL", 11))) {
F->v_2438 = rt_str_copy(f_gexpr_700(F->args_874, g_ty_int_969, &F->at_2398));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2438), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_551(F->args_874)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_872), rt_str("TIME", 4)) && (rt_r_ichk(F->n_2399) == ((rt_int)1LL)))) {
F->t_877v = g_ty_int_969;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_act_time(", 14), f_act_ref_551(F->args_874)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("TIME", 4))) {
F->t_877v = g_ty_int_969;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_872), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_872), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_872), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_872), rt_str("HOURS", 5)))) {
F->t_877v = g_ty_int_969;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_872));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("HALT", 4))) {
F->a_2439 = rt_str_copy(f_gexpr_700(F->args_874, g_ty_int_969, &F->at_2398));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2439), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_872), rt_str("ME", 2)) && (F->tt_873 != NULL))) {
F->result_ = f_me_high_836(F->tt_873, F->line_875, &F->t_877v);
goto ret_;
} else if ((rt_str_eq((*F->name_872), rt_str("WAITING", 7)) || rt_str_eq((*F->name_872), rt_str("SUSPENDED", 9)))) {
F->t_877v = g_ty_bool_970;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_872))), rt_str("(", 1)), f_act_ref_551(F->args_874)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_872), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_872), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_872), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_872), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_872), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_872), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_872))), rt_str("(", 1)), f_act_ref_551(F->args_874)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("TASK_START", 10))) {
if ((rt_r_ichk(F->n_2399) != ((rt_int)2LL))) {
f_fail_23(F->line_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_551(F->args_874)), rt_str(", ", 2)), f_act_ref_551((*(P889)rt_nil_check(F->args_874)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_872), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_872), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_872), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_872), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_872), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_872), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((rt_r_ichk(F->n_2399) != ((rt_int)0LL))) {
f_fail_23(F->line_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_872), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_872))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_841(F->args_874, &(*F->name_872))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_841(F->args_874, &(*F->name_872))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("COND_LOCK", 9))) {
F->bv_2440 = NULL;
F->bc_2441 = NULL;
F->ro_2442 = RT_R_EUNDEF;
F->bt_2443 = NULL;
F->l_2444 = rt_str_copy(f_lock_ref_841(F->args_874, &(*F->name_872)));
f_lvalue_669((*(P889)rt_nil_check(F->args_874)).next, &F->bv_2440, &F->bt_2443, &F->bc_2441, &F->ro_2442);
f_check_type_224(F->bt_2443, g_ty_bool_970, F->line_875);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P882)rt_nil_check(F->bv_2440))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2444), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("EXCESS_LOCKS", 12))) {
F->t_877v = g_ty_int_969;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_841(F->args_874, &(*F->name_872))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("OWNER", 5))) {
F->t_877v = g_ty_act_979;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_841(F->args_874, &(*F->name_872))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("FREE", 4))) {
F->pv_2445 = NULL;
F->pc_2446 = NULL;
F->ro_2447 = RT_R_EUNDEF;
F->pt_2448 = NULL;
f_lvalue_669(F->args_874, &F->pv_2445, &F->pt_2448, &F->pc_2446, &F->ro_2447);
if (((rt_r_ichk((*(P895)rt_nil_check(F->pt_2448)).kind) != (((rt_int)8LL))) || rt_r_echk(F->ro_2447))) {
f_fail_23(F->line_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_950 = 1;
f_finish_ptr_427(F->pt_2448);
if (f_suppressed_461(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; }))) {
if (f_needs_fin_316((*(P895)rt_nil_check(F->pt_2448)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P882)rt_nil_check(F->pv_2445))->all)), rt_str(") { ", 4)), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_658(F->pt_2448, &(((P882)rt_nil_check(F->pv_2445))->all)); b_; }), (*(P895)rt_nil_check(F->pt_2448)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P882)rt_nil_check(F->pv_2445))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P882)rt_nil_check(F->pv_2445))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_316((*(P895)rt_nil_check(F->pt_2448)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P882)rt_nil_check(F->pv_2445))->all)), rt_str("); if (", 7)), (((P882)rt_nil_check(F->pv_2445))->all)), rt_str(") { ", 4)), f_fin_code_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_658(F->pt_2448, &(((P882)rt_nil_check(F->pv_2445))->all)); b_; }), (*(P895)rt_nil_check(F->pt_2448)).target)), rt_str(" } rt_free((void **)&", 21)), (((P882)rt_nil_check(F->pv_2445))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P882)rt_nil_check(F->pv_2445))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_872), rt_str("LOW_IO", 6))) {
F->dev_2449 = rt_str_copy(f_gexpr_700(F->args_874, g_ty_int_969, &F->at_2398));
F->cmd_2450 = rt_str_copy(f_gexpr_700((*(P889)rt_nil_check(F->args_874)).next, g_ty_int_969, &F->at_2398));
if ((rt_r_ichk(F->n_2399) == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_2449), rt_str(", ", 2)), F->cmd_2450), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2451 = NULL;
F->dc_2452 = NULL;
F->ro_2453 = RT_R_EUNDEF;
F->dt_2454 = NULL;
f_lvalue_669((*(P889)rt_nil_check((*(P889)rt_nil_check(F->args_874)).next)).next, &F->dv_2451, &F->dt_2454, &F->dc_2452, &F->ro_2453);
f_check_type_224(F->dt_2454, g_ty_int_969, F->line_875);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_2449), rt_str(", ", 2)), F->cmd_2450), rt_str(", &", 3)), (((P882)rt_nil_check(F->dv_2451))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_872), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_877) = F->t_877v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_880(P889 units_879) {
  struct f_translate_880fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_879 = units_879;
F->u_2455 = NULL;
F->u_2455 = F->units_879;
while ((F->u_2455 != NULL)) {
if (((*(P889)rt_nil_check(F->u_2455)).next == NULL)) {
{ R917 *cell2456 = rt_alloc(sizeof(R917));
(*cell2456).d = NULL;
(*cell2456).next = NULL;
g_caps_944 = cell2456;
}
(*(P916)rt_nil_check(g_caps_944)).d = F->u_2455;
(*(P916)rt_nil_check(g_caps_944)).depth = rt_r_ichk(g_depth_928);
f_declare_labels_494((*(P889)rt_nil_check(F->u_2455)).c);
f_declare_body_393((*(P889)rt_nil_check(F->u_2455)).c);
f_capsule_body_501((*(P889)rt_nil_check(F->u_2455)).c);
f_await_tasks_490((*(P889)rt_nil_check(F->u_2455)).c);
{
F->l_2457 = NULL;
F->l_2457 = F->units_879;
while ((F->l_2457 != F->u_2455)) {
{
F->w_2458 = rt_str_copy(f_waits_of_486(F->l_2457));
if ((((rt_int)((F->w_2458).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2458);
}
}
F->l_2457 = (*(P889)rt_nil_check(F->l_2457)).next;
}
}
f_close_fins_477(NULL);
if (rt_r_echk(g_uses_findyn_952)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_403(F->u_2455);
}
F->u_2455 = (*(P889)rt_nil_check(F->u_2455)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_881(void) {
  struct f_print_program_881fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_389();
if (rt_r_echk(g_uses_free_950)) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_932);
f_print_buffer_31(g_out_frames_948);
f_print_buffer_31(g_out_helpers_933);
f_print_buffer_31(g_out_protos_934);
f_print_buffer_31(g_out_globals_935);
f_print_buffer_31(g_out_funcs_936);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_949);
f_print_buffer_31(g_out_excs_938);
f_print_buffer_31(g_out_init_937);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R919(R919 *d, R919 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R919 cp_R919(R919 s) {
  R919 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R919(R919 a, R919 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R917(R917 *d, R917 s) {
  d->d = s.d;
  d->next = s.next;
  d->depth = s.depth;
}
static R917 cp_R917(R917 s) {
  R917 d = s;
  d.d = s.d;
  d.next = s.next;
  d.depth = s.depth;
  return d;
}
static int eq_R917(R917 a, R917 b) {
  return 1 && (a.d == b.d) && (a.next == b.next) && (a.depth == b.depth);
}
static void as_R915(R915 *d, R915 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R915 cp_R915(R915 s) {
  R915 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R915(R915 a, R915 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R913(R913 *d, R913 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R913 cp_R913(R913 s) {
  R913 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R913(R913 a, R913 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R911(R911 *d, R911 s) {
  d->t = s.t;
  d->next = s.next;
}
static R911 cp_R911(R911 s) {
  R911 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R911(R911 a, R911 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R909(R909 *d, R909 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
}
static R909 cp_R909(R909 s) {
  R909 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  return d;
}
static int eq_R909(R909 a, R909 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t);
}
static void as_R907(R907 *d, R907 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R907 cp_R907(R907 s) {
  R907 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R907(R907 a, R907 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A905(A905 *d, A905 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A905 cp_A905(A905 s) {
  A905 d = s; d.p = rt_alloc(sizeof(P899) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A905(A905 a, A905 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R902(R902 *d, R902 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R902 cp_R902(R902 s) {
  R902 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R902(R902 a, R902 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R900(R900 *d, R900 s) {
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
static R900 cp_R900(R900 s) {
  R900 d = s;
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
static int eq_R900(R900 a, R900 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home) && (a.capn == b.capn) && (a.tbinds == b.tbinds);
}
static void as_R898(R898 *d, R898 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R898 cp_R898(R898 s) {
  R898 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R898(R898 a, R898 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R896(R896 *d, R896 s) {
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
  d->assignp = s.assignp;
  d->eqp = s.eqp;
  d->ltp = s.ltp;
}
static R896 cp_R896(R896 s) {
  R896 d = s;
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
  d.assignp = s.assignp;
  d.eqp = s.eqp;
  d.ltp = s.ltp;
  return d;
}
static int eq_R896(R896 a, R896 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs) && (a.assignp == b.assignp) && (a.eqp == b.eqp) && (a.ltp == b.ltp);
}
static void as_R894(R894 *d, R894 s) {
  d->s = s.s;
  d->next = s.next;
}
static R894 cp_R894(R894 s) {
  R894 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R894(R894 a, R894 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R892(R892 *d, R892 s) {
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
static R892 cp_R892(R892 s) {
  R892 d = s;
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
static int eq_R892(R892 a, R892 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R890(R890 *d, R890 s) {
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
static R890 cp_R890(R890 s) {
  R890 d = s;
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
static int eq_R890(R890 a, R890 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A888(A888 *d, A888 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A888 cp_A888(A888 s) {
  A888 d = s; d.p = rt_alloc(sizeof(P884) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A888(A888 a, A888 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R885(R885 *d, R885 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R885 cp_R885(R885 s) {
  R885 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R885(R885 a, R885 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_920);
  RT_ROOT(g_ntoks_921);
  RT_ROOT(g_tpos_922);
  RT_ROOT(g_src_line_923);
  RT_ROOT(g_pending_prag_924);
  RT_ROOT(g_table_925);
  RT_ROOT(g_genv_926);
  RT_ROOT(g_all_insts_927);
  RT_ROOT(g_depth_928);
  RT_ROOT(g_scope_stack_929);
  RT_ROOT(g_all_types_930);
  RT_ROOT(g_serial_931);
  RT_ROOT(g_out_types_932);
  RT_ROOT(g_out_helpers_933);
  RT_ROOT(g_out_protos_934);
  RT_ROOT(g_out_globals_935);
  RT_ROOT(g_out_funcs_936);
  RT_ROOT(g_out_init_937);
  RT_ROOT(g_out_excs_938);
  RT_ROOT(g_code_939);
  RT_ROOT(g_fields_buf_940);
  RT_ROOT(g_in_func_941);
  RT_ROOT(g_cur_level_942);
  RT_ROOT(g_fctx_943);
  RT_ROOT(g_caps_944);
  RT_ROOT(g_cap_waits_945);
  RT_ROOT(g_psub_946);
  RT_ROOT(g_st_field_947);
  RT_ROOT(g_out_frames_948);
  RT_ROOT(g_out_roots_949);
  RT_ROOT(g_uses_free_950);
  RT_ROOT(g_fins_951);
  RT_ROOT(g_uses_findyn_952);
  RT_ROOT(g_func_sym_953);
  RT_ROOT(g_func_rc_954);
  RT_ROOT(g_cap_ret_955);
  RT_ROOT(g_cap_rflag_956);
  RT_ROOT(g_ret_frames_957);
  RT_ROOT(g_gdepth_958);
  RT_ROOT(g_suppress_959);
  RT_ROOT(g_cons_ctx_960);
  RT_ROOT(g_mark_uninit_961);
  RT_ROOT(g_exits_962);
  RT_ROOT(g_gotos_963);
  RT_ROOT(g_frames_964);
  RT_ROOT(g_handlers_965);
  RT_ROOT(g_cleanups_966);
  RT_ROOT(g_trial_967);
  RT_ROOT(g_mcopies_968);
  RT_ROOT(g_ty_int_969);
  RT_ROOT(g_ty_bool_970);
  RT_ROOT(g_ty_float_971);
  RT_ROOT(g_ty_ascii_972);
  RT_ROOT(g_ty_string_973);
  RT_ROOT(g_ty_void_974);
  RT_ROOT(g_ty_file_975);
  RT_ROOT(g_ty_nil_976);
  RT_ROOT(g_ty_lock_977);
  RT_ROOT(g_ty_latch_978);
  RT_ROOT(g_ty_act_979);
  RT_ROOT(g_file_mode_type_980);
  RT_ROOT(g_no_cons_981);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_920 = NULL;
g_ntoks_921 = RT_R_IUNDEF;
g_ntoks_921 = ((rt_int)0LL);
g_tpos_922 = RT_R_IUNDEF;
g_tpos_922 = ((rt_int)1LL);
g_src_line_923 = RT_R_IUNDEF;
g_src_line_923 = ((rt_int)0LL);
g_pending_prag_924 = NULL;
g_table_925 = NULL;
g_genv_926 = NULL;
g_all_insts_927 = NULL;
g_depth_928 = RT_R_IUNDEF;
g_depth_928 = ((rt_int)0LL);
g_scope_stack_929 = NULL;
g_all_types_930 = NULL;
g_serial_931 = RT_R_IUNDEF;
g_serial_931 = ((rt_int)0LL);
g_out_types_932 = NULL;
g_out_helpers_933 = NULL;
g_out_protos_934 = NULL;
g_out_globals_935 = NULL;
g_out_funcs_936 = NULL;
g_out_init_937 = NULL;
g_out_excs_938 = NULL;
g_code_939 = NULL;
g_fields_buf_940 = NULL;
g_in_func_941 = RT_R_EUNDEF;
g_in_func_941 = 0;
g_cur_level_942 = RT_R_IUNDEF;
g_cur_level_942 = ((rt_int)0LL);
g_fctx_943 = NULL;
g_caps_944 = NULL;
g_cap_waits_945 = NULL;
g_psub_946 = NULL;
g_st_field_947 = NULL;
g_out_frames_948 = NULL;
g_out_roots_949 = NULL;
g_uses_free_950 = RT_R_EUNDEF;
g_uses_free_950 = 0;
g_fins_951 = NULL;
g_uses_findyn_952 = RT_R_EUNDEF;
g_uses_findyn_952 = 0;
g_func_sym_953 = NULL;
g_func_rc_954 = NULL;
g_cap_ret_955 = NULL;
g_cap_rflag_956 = NULL;
g_ret_frames_957 = RT_R_IUNDEF;
g_ret_frames_957 = ((rt_int)0LL);
g_gdepth_958 = RT_R_IUNDEF;
g_gdepth_958 = ((rt_int)0LL);
g_suppress_959 = NULL;
g_cons_ctx_960 = NULL;
g_mark_uninit_961 = RT_R_EUNDEF;
g_mark_uninit_961 = 0;
g_exits_962 = NULL;
g_gotos_963 = NULL;
g_frames_964 = RT_R_IUNDEF;
g_frames_964 = ((rt_int)0LL);
g_handlers_965 = NULL;
g_cleanups_966 = NULL;
g_trial_967 = RT_R_IUNDEF;
g_trial_967 = ((rt_int)0LL);
g_mcopies_968 = NULL;
g_ty_int_969 = NULL;
g_ty_bool_970 = NULL;
g_ty_float_971 = NULL;
g_ty_ascii_972 = NULL;
g_ty_string_973 = NULL;
g_ty_void_974 = NULL;
g_ty_file_975 = NULL;
g_ty_nil_976 = NULL;
g_ty_lock_977 = NULL;
g_ty_latch_978 = NULL;
g_ty_act_979 = NULL;
g_file_mode_type_980 = NULL;
g_no_cons_981 = NULL;
{ P886 cell2459 = rt_alloc(sizeof *cell2459);
rt_int pv2460 = ((rt_int)1000000LL);
cell2459->p_n = pv2460;
cell2459->all.lo = ((rt_int)1LL); cell2459->all.hi = pv2460;
cell2459->all.lo2 = cell2459->all.hi2 = 1;
cell2459->all.p = rt_alloc(sizeof(P884) * (size_t)(RT_CNT(cell2459->all)) + 1);
for (rt_int i2461 = 0; i2461 < (RT_CNT(cell2459->all)); i2461++) {
cell2459->all.p[i2461] = NULL;
}
g_toks_920 = cell2459;
}
{ P903 cell2462 = rt_alloc(sizeof *cell2462);
rt_int pv2463 = (((rt_int)4093LL));
cell2462->p_n = pv2463;
cell2462->all.lo = ((rt_int)0LL); cell2462->all.hi = pv2463;
cell2462->all.lo2 = cell2462->all.hi2 = 1;
cell2462->all.p = rt_alloc(sizeof(P899) * (size_t)(RT_CNT(cell2462->all)) + 1);
for (rt_int i2464 = 0; i2464 < (RT_CNT(cell2462->all)); i2464++) {
cell2462->all.p[i2464] = NULL;
}
g_table_925 = cell2462;
}
g_out_types_932 = f_new_buffer_24();
g_out_helpers_933 = f_new_buffer_24();
g_out_protos_934 = f_new_buffer_24();
g_out_globals_935 = f_new_buffer_24();
g_out_funcs_936 = f_new_buffer_24();
g_out_init_937 = f_new_buffer_24();
g_out_excs_938 = f_new_buffer_24();
g_out_frames_948 = f_new_buffer_24();
g_out_roots_949 = f_new_buffer_24();
g_code_939 = g_out_init_937;
g_no_cons_981 = f_new_cons_176();
g_ty_int_969 = f_new_typ_175((((rt_int)1LL)));
g_ty_bool_970 = f_new_typ_175((((rt_int)2LL)));
g_ty_float_971 = f_new_typ_175((((rt_int)3LL)));
g_ty_string_973 = f_new_typ_175((((rt_int)5LL)));
g_ty_void_974 = f_new_typ_175((((rt_int)9LL)));
g_ty_file_975 = f_new_typ_175((((rt_int)10LL)));
g_ty_nil_976 = f_new_typ_175((((rt_int)11LL)));
g_ty_lock_977 = f_new_typ_175((((rt_int)13LL)));
g_ty_latch_978 = f_new_typ_175((((rt_int)13LL)));
g_ty_act_979 = f_new_typ_175((((rt_int)14LL)));
{ rt_frame xf2465;
if (RT_TRY(xf2465)) {
f_init_ascii_251();
f_read_source_58();
f_translate_880(f_program_151());
f_print_program_881();
RT_POP(xf2465);
} else {
RT_POP(xf2465);
int x2466 = rt_xcur;
if (0 || x2466 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2466);
}
}
}
  rt_main_done();
  return 0;
}
